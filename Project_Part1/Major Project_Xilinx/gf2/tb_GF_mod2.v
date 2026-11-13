`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:57:50 10/22/2025
// Design Name:   GF_mod2
// Module Name:   C:/Users/B200875/Desktop/Major Project/gf2/tb_GF_mod2.v
// Project Name:  gf2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: GF_mod2
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_GF_mod2();

    //==================================================================
    // Parameter Configuration
    //==================================================================
    parameter M = 6;
    parameter T = 4;
    parameter PIPELINE = 1;

    //==================================================================
    // DUT Signals
    //==================================================================
    reg clk, rst;
    reg [M-1:0] A, B;
    wire [M-1:0] C;

    // Instantiate DUT
    GF_mod2 #(.M(M), .T(T), .PIPELINE(PIPELINE)) DUT (
        .clk(clk),
        .rst(rst),
        .A(A),
        .B(B),
        .C(C)
    );

    //==================================================================
    // Clock Generation
    //==================================================================
    initial clk = 0;
    always #5 clk = ~clk;   // 100 MHz clock

    //==================================================================
    // Software Model for Comparison
    //==================================================================
    function [M-1:0] gf_mult_model(input [M-1:0] a, input [M-1:0] b);
        reg [2*M-2:0] prod;
        reg [M-2:0] dh_in, dhxt;
        integer i, j;

        begin
            // Polynomial multiplication (GF(2))
            prod = 0;
            for (i = 0; i < M; i = i + 1)
                for (j = 0; j < M; j = j + 1)
                    prod[i+j] = prod[i+j] ^ (a[i] & b[j]);

            // Split and reduce
            dh_in = prod[2*M-2:M];

            // Trinomial reduction (X^M + X^T + 1)
            dhxt = dh_in;
            for (i = 0; i < T-1; i = i + 1) begin
                dhxt[M-2] = dhxt[M-2];
                dhxt = {dhxt[M-3:0], dhxt[M-2]};
                dhxt[T-1] = dhxt[T-1] ^ dhxt[M-2];
            end

            // Combine lower and upper parts
            gf_mult_model = dhxt ^ dh_in ^ prod[M-1:0];
        end
    endfunction

    //==================================================================
    // Test Logic
    //==================================================================
    integer k;
    reg [M-1:0] expected;

    initial begin
        $display("\n=== GF(2^%0d) Multiplier Testbench ===", M);
        rst = 1;
        A = 0; B = 0;
        #15 rst = 0;

        for (k = 0; k < 20; k = k + 1) begin
            @(posedge clk);
            A = $random;
            B = $random;
            expected = gf_mult_model(A, B);

            // Wait one or two cycles depending on pipelining
            if (PIPELINE)
                @(posedge clk);

            #1; // small delay for stable output
            if (C !== expected)
                $display("? Mismatch: A=%b, B=%b | DUT=%b Expected=%b", A, B, C, expected);
            else
                $display("? Match:    A=%b, B=%b | C=%b", A, B, C);
        end

        $display("\nSimulation completed.\n");
        $stop;
    end

endmodule


