`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:36:01 10/24/2025
// Design Name:   compute_r
// Module Name:   C:/Users/B200875/Desktop/Major Project/gf2/compute_r_tb.v
// Project Name:  gf2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: compute_r
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module compute_r_tb;

    // Parameters
    parameter M = 233;
    parameter T = 74;

    // Inputs
    reg [M-1:0] f;

    // Outputs
    wire [M*(M-1)-1:0] Rflat;

    // Instantiate the Unit Under Test (UUT)
    compute_r #( .M(M), .T(T) ) uut (
        .f(f),
        .Rflat(Rflat)
    );

    // Task to display the R matrix in readable form
    task display_R_matrix;
        integer i, j;
        begin
            $display("Rflat = %b", Rflat);
            for (i = 0; i < M-1; i = i + 1) begin
                $write("R[%0d] = ", i);
                for (j = 0; j < M; j = j + 1)
                    $write("%b", Rflat[i*M + j]);
                $write("\n");
            end
            $display("----------------------------");
        end
    endtask

    // Test sequence
    initial begin
        $display("Starting compute_r testbench...");
        $display("===============================");

        // Test Case 1
        f = 233'b010001;
        #10;
        $display("Test Case 1: f = %b", f);
        display_R_matrix();

        // Test Case 2
        f = 6'b111111;
        #10;
        $display("Test Case 2: f = %b", f);
        display_R_matrix();

        // Test Case 3
        f = 6'b000001;
        #10;
        $display("Test Case 3: f = %b", f);
        display_R_matrix();

        // Test Case 4
        f = 6'b010101;
        #10;
        $display("Test Case 4: f = %b", f);
        display_R_matrix();

        // Random test
        f = $random;
        #10;
        $display("Random Test: f = %b", f[M-1:0]);
        display_R_matrix();

        $display("All tests completed.");
        $finish;
    end

endmodule


