`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:13:24 12/30/2025 
// Design Name: 
// Module Name:    gf2_top 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module gf2_top #
(
    parameter M = 6,
    parameter T = 4
)
(
    input              clk,
    input      [4:0]   btn,
    input      [M-1:0] sw,
    output reg [7:0]   led     // ?? 8 LEDs: [5:0]=data, 6=mul, 7=red
);

    reg [M-1:0] A_reg;
    reg [M-1:0] B_reg;

    wire [2*M-2:0] D_wire;
    wire [M-1:0]   C_wire;

    GF_mod2 #( .M(M), .T(T)) gf_inst (
        .A(A_reg),
        .B(B_reg),
        .D(D_wire),
        .C(C_wire)
    );

    always @(posedge clk) begin

        // RESET
        if (btn[0]) begin
            A_reg <= 0;
            B_reg <= 0;
            led   <= 8'b0;
        end

        // LOAD A
        else if (btn[1]) begin
            A_reg <= sw;
				led[5:0] <= A_reg;
        end

        // LOAD B
        else if (btn[2]) begin
            B_reg <= sw;
				led[5:0] <= B_reg;
        end

        // MULTIPLY
        else if (btn[3]) begin
            led[5:0] <= D_wire[5:0];  // data
            led[6]   <= 1'b1;         // multiply done
            led[7]   <= 1'b0;
        end

        // REDUCTION
        else if (btn[4]) begin
            led[5:0] <= C_wire;       // reduced data
            led[6]   <= 1'b0;
            led[7]   <= 1'b1;         // reduction done
        end
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

    polynomial_multiplier #(.M(M), .T(T)) MUL (
        .A(A),
        .B(B),
        .D(D)
    );

    trinomial_reducer #(.M(M), .T(T)) RED (
        .DH_in(DH_in),
        .DHxt(DHxt)
    );

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

