`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:37:43 12/30/2025
// Design Name:   gf2_top
// Module Name:   C:/Users/B200875/Desktop/New/np/tb_gf2_top.v
// Project Name:  np
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: gf2_top
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_gf2_top;

    localparam M = 6;
    localparam T = 4;

    reg              clk;
    reg  [4:0]       btn;
    reg  [M-1:0]     sw;
    wire [7:0]       led;

    // ?? WAVEFORM SIGNALS (FOR GRAPH)
    wire [2*M-2:0] D_wave;   // raw product
    wire [M-1:0]   C_wave;   // reduced output

    // DUT
    gf2_top #(
        .M(M),
        .T(T)
    ) dut (
        .clk(clk),
        .btn(btn),
        .sw(sw),
        .led(led)
    );

    // ?? CONNECT INTERNAL SIGNALS TO TB WIRES
    assign D_wave = dut.D_wire;
    assign C_wave = dut.C_wire;

    // Clock: 100 MHz
    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end

    initial begin
        btn = 5'b00000;
        sw  = 6'b000000;

        #20;

        // RESET
        btn[0] = 1; #10; btn[0] = 0;

        // LOAD A
        #20;
        sw = 6'b010101;
        btn[1] = 1; #10; btn[1] = 0;

        // LOAD B
        #20;
        sw = 6'b101001;
        btn[2] = 1; #10; btn[2] = 0;

        // MULTIPLY
        #20;
        btn[3] = 1; #10; btn[3] = 0;

        // REDUCTION
        #40;
        btn[4] = 1; #10; btn[4] = 0;

        #100;
        $stop;
    end

endmodule
