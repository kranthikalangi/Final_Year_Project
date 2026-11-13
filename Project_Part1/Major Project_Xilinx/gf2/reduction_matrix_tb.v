`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:01:21 10/23/2025
// Design Name:   reduction_matrix
// Module Name:   C:/Users/B200875/Desktop/Major Project/gf2/reduction_matrix_tb.v
// Project Name:  gf2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: reduction_matrix
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module reduction_matrix_tb;

    // Parameter: degree of polynomial (m)
    parameter integer M = 4;

    // DUT inputs/outputs
    reg  [M-1:0] f;
    wire [M*(M-1)-1:0] Rflat;

    // Instantiate the DUT (Device Under Test)
    reduction_matrix #(M) dut (
        .f(f),
        .Rflat(Rflat)
    );

    integer i, j;

    initial begin
        $display("==============================================");
        $display(" Testbench for compute_r - GF(2) coefficient computation");
        $display(" Equation (3) implementation check");
        $display("==============================================");

        // Example irreducible polynomial coefficients
        // Example: f(x) = x^4 + x + 1  => f = 10011  (but we only take lower M bits)
        f = 4'b1011;  // [f3 f2 f1 f0] = [1 0 1 1]

        #10;  // wait for combinational logic to settle

        $display("\nInput polynomial coefficients f_j:");
        for (j = M-1; j >= 0; j = j - 1)
            $display("f[%0d] = %b", j, f[j]);

        $display("\nComputed coefficients r_j^i (flattened order):");
        for (i = 0; i <= M-2; i = i + 1) begin
            $write("i = %0d : ", i);
            for (j = M-1; j >= 0; j = j - 1) begin
                $write("%b ", Rflat[i*M + j]);
            end
            $write("\n");
        end

        $display("\nTest completed successfully.\n");
        $stop;
    end

endmodule


