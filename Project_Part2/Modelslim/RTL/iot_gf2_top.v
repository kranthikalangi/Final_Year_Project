`timescale 1ns / 1ps

module iot_gf2_top (
    input clk,           // 100MHz clock
    input rx_line,       // UART RX
    input [4:0] btn,     // [cite: 38]
    output tx_line,      // UART TX
    output reg [7:0] led 
);

    // Parameters for GF2 [cite: 38]
    parameter M = 6;
    parameter T = 4;
    parameter [M-1:0] A_FIXED = 6'b101010; 

    // Internal Signals
    wire tick;
    wire [7:0] rx_data;
    wire rx_done;
    
    reg [M-1:0] B_received = 0;
    reg [M-1:0] server_result = 0;
    wire [M-1:0] local_result;
    wire [2*M-2:0] D_out; 
    
    reg byte_count = 0; 
    reg comparison_match = 0;

    // --- UART Reception Blink Logic ---
    reg [2:0] uart_blink_count = 0;
    reg [24:0] uart_blink_timer = 0;
    reg uart_blink_active = 0;
    wire uart_blink_bit = uart_blink_timer[24]; // Approx 3Hz blink

    // --- System Blinking logic ---
    reg [23:0] system_timer = 0;
    wire blink_clk = system_timer[23];

    // 1. Baud Rate Generator [cite: 2, 27]
    baud_gen #(.BAUD_RATE(115200)) bgen (
        .clk(clk), 
        .baud_tick(tick)
    );

    // 2. UART Receiver [cite: 3, 15]
    uart_rx rinst (
        .clk(clk), 
        .en_16_tick(tick), 
        .rx_line(rx_line), 
        .data_out(rx_data), 
        .done(rx_done)
    );

    // 3. GF2 Architecture Logic [cite: 41, 50, 51-54]
    GF_mod2 #(.M(M), .T(T)) gf_inst (
        .A(A_FIXED),
        .B(B_received),
        .D(D_out),
        .C(local_result)
    );

    // 4. Data Handling & Reception Notification
    always @(posedge clk) begin
        if (rx_done) begin
            // Trigger 3-blink notification on one LED
            uart_blink_active <= 1'b1;
            uart_blink_count <= 0;
            uart_blink_timer <= 0;

            if (byte_count == 1'b0) begin
                B_received <= rx_data[M-1:0]; 
                byte_count <= 1'b1;
            end else begin
                server_result <= rx_data[M-1:0]; 
                byte_count <= 1'b0;
                comparison_match <= (local_result == rx_data[M-1:0]);
            end
        end

        // Blink State Machine for UART Notification
        if (uart_blink_active) begin
            uart_blink_timer <= uart_blink_timer + 1'b1;
            // Stop after 3 full blinks (6 toggles)
            if (uart_blink_timer == 25'h1FFFFFF) begin
                if (uart_blink_count == 3'd5) 
                    uart_blink_active <= 1'b0;
                else 
                    uart_blink_count <= uart_blink_count + 1'b1;
            end
        end

        system_timer <= system_timer + 1'b1; 
    end

    // 5. Display Logic (Buttons) [cite: 42-50]
    always @(*) begin
        // Priority 1: If UART blink is active, show that on LED 0
        if (uart_blink_active) begin
            led = (uart_blink_bit) ? 8'h01 : 8'h00;
        end
        // Priority 2: Buttons
        else if (btn[0]) begin // Show B_received [cite: 43]
            led = {2'b00, B_received};
        end
        else if (btn[1]) begin // Show server_result [cite: 45]
            led = {2'b00, server_result};
        end
        else if (btn[2]) begin // Show local GF2 result [cite: 48]
            led = {2'b00, local_result};
        end
        else if (btn[3]) begin // Compare 
            if (comparison_match) 
                led = 8'hFF; // All ON
            else 
                led = (blink_clk) ? 8'hFF : 8'h00; // All Blink
        end
        else begin
            led = 8'h00; // Initially/Default all OFF 
        end
    end

    // 6. UART Transmitter (Echo) [cite: 5]
    uart_tx tinst (
        .clk(clk), 
        .en_16_tick(tick), 
        .tx_start(rx_done), 
        .data_in(rx_data), 
        .tx_line(tx_line), 
        .busy()
    );

endmodule

// =========================================================
// SUB-MODULES
// =========================================================

module uart_tx (
    input clk, 
    input en_16_tick, 
    input tx_start,
    input [7:0] data_in,
    output reg tx_line = 1,
    output reg busy
);
    reg [1:0] state = 0;
    reg [3:0] tick_count = 0;
    reg [2:0] bit_count = 0;
    reg [7:0] data_reg = 0;

    always @(posedge clk) begin
        if (en_16_tick) begin
            case (state)
                0: begin 
                    tx_line <= 1'b1;
                    busy <= 1'b0;
                    if (tx_start) begin
                        data_reg <= data_in;
                        busy <= 1'b1;
                        tx_line <= 1'b0; 
                        state <= 2'd1;
                        tick_count <= 4'd0;
                    end
                end
                1: begin 
                    if (tick_count == 4'd15) begin
                        tick_count <= 4'd0;
                        tx_line <= data_reg[bit_count];
                        if (bit_count == 3'd7) state <= 2'd2;
                        else bit_count <= bit_count + 3'd1;
                    end else tick_count <= tick_count + 4'd1;
                end
                2: begin 
                    if (tick_count == 4'd15) begin
                        tx_line <= 1'b1;
                        state <= 2'd0;
                        bit_count <= 3'd0;
                    end else tick_count <= tick_count + 4'd1;
                end
            endcase
        end
    end
endmodule

module uart_rx (
    input clk, 
    input en_16_tick, 
    input rx_line,
    output reg [7:0] data_out,
    output reg done
);
    reg [1:0] state = 0;
    reg [3:0] tick_count = 0;
    reg [2:0] bit_count = 0;
    reg [7:0] shift_reg = 0;

    always @(posedge clk) begin
        if (en_16_tick) begin
            case (state)
                0: begin 
                    done <= 1'b0;
                    tick_count <= 4'd0;
                    bit_count <= 3'd0;
                    if (rx_line == 1'b0) state <= 2'd1; 
                end
                1: begin 
                    if (tick_count == 4'd7) begin
                        tick_count <= 4'd0;
                        state <= 2'd2;
                    end else tick_count <= tick_count + 4'd1;
                end
                2: begin 
                    if (tick_count == 4'd15) begin
                        tick_count <= 4'd0;
                        shift_reg[bit_count] <= rx_line;
                        if (bit_count == 3'd7) state <= 2'd3;
                        else bit_count <= bit_count + 3'd1;
                    end else tick_count <= tick_count + 4'd1;
                end
                3: begin 
                    if (tick_count == 4'd15) begin
                        data_out <= shift_reg;
                        done <= 1'b1;
                        state <= 2'd0; 
                    end else tick_count <= tick_count + 4'd1;
                end
            endcase
        end else begin
            done <= 1'b0; 
        end
    end
endmodule

module baud_gen #(
    parameter CLK_FREQ = 100_000_000,
    parameter BAUD_RATE = 115200
)(
    input clk,
    output baud_tick
);
    localparam integer IDLE_LIMIT = CLK_FREQ / (BAUD_RATE * 16);
    reg [15:0] counter = 0;
    assign baud_tick = (counter == IDLE_LIMIT[15:0]);
    always @(posedge clk) begin
        if (counter >= IDLE_LIMIT[15:0]) 
            counter <= 16'd0;
        else 
            counter <= counter + 16'd1;
    end
endmodule

module GF_mod2 #(
    parameter M = 6,
    parameter T = 4
)(
    input  [M-1:0]     A,
    input  [M-1:0]     B,
    output [2*M-2:0]   D,
    output [M-1:0]     C
);
    wire [M-1:0]   DL_in;
    wire [M-2:0]   DH_in, DHxt;
    assign DL_in = D[M-1:0];
    assign DH_in = D[2*M-2:M];
    polynomial_multiplier #(.M(M), .T(T)) MUL (.A(A), .B(B), .D(D));
    trinomial_reducer #(.M(M), .T(T)) RED (.DH_in(DH_in), .DHxt(DHxt));
    assign C = DHxt ^ DH_in ^ DL_in;
endmodule

module polynomial_multiplier #(
    parameter M = 6,
    parameter T = 4
)(
    input  [M-1:0]   A,
    input  [M-1:0]   B,
    output [2*M-2:0] D
);
    reg [2*M-2:0] prod;
    integer i, j;
    always @(*) begin
        prod = 0;
        for (i = 0; i < M; i = i + 1)
            for (j = 0; j < M; j = j + 1)
                prod[i+j] = prod[i+j] ^ (A[i] & B[j]);
    end
    assign D = prod;
endmodule

module trinomial_reducer #(
    parameter M = 6,
    parameter T = 4
)(
    input  [M-2:0] DH_in,
    output reg [M-2:0] DHxt
);
    integer i;
    reg c;
    reg [M-2:0] shift_reg;
    always @(*) begin
        shift_reg = DH_in;
        for (i = 0; i < T-1; i = i + 1) begin
            c = shift_reg[M-2];
            shift_reg = {shift_reg[M-3:0], c};
            shift_reg[T-1] = c ^ shift_reg[T-1];
        end
        DHxt = shift_reg;
    end
endmodule
