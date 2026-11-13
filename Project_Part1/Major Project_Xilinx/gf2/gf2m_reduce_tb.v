`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:49:50 10/24/2025
// Design Name:   gf2m_reduce
// Module Name:   C:/Users/B200875/Desktop/Major Project/gf2/gf2m_reduce_tb.v
// Project Name:  gf2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: gf2m_reduce
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module gf2m_reduce_tb;

    // ------------------------------------------------------------------------
    // Parameters
    // ------------------------------------------------------------------------
    parameter M = 6;
    parameter T = 4;

    // ------------------------------------------------------------------------
    // DUT Inputs and Outputs
    // ------------------------------------------------------------------------
    reg  [2*M-2:0] d;                   // 2M-1 bits input (from polynomial multiply)
    reg  [M*(M-1)-1:0] Rflat;           // Flattened reduction matrix
    wire [M-1:0] c;                     // Reduced polynomial output

    // ------------------------------------------------------------------------
    // Instantiate DUT
    // ------------------------------------------------------------------------
    gf2m_reduce #(.M(M), .T(T)) uut (
        .d(d),
        .Rflat(Rflat),
        .c(c)
    );

    // ------------------------------------------------------------------------
    // Task: Display Current Test Case
    // ------------------------------------------------------------------------
    task display_case;
        integer i, j;
        begin
            $display("\n--------------------------------------------------");
            $display("Input d     = %b", d);
            $display("Reduction matrix Rflat:");
            for (i = 0; i < M-1; i = i + 1) begin
                $write("R[%0d] = ", i);
                for (j = 0; j < M; j = j + 1)
                    $write("%b", Rflat[i*M + j]);
                $write("\n");
            end
            $display("Output c    = %b", c);
            $display("--------------------------------------------------\n");
        end
    endtask

    // ------------------------------------------------------------------------
    // Test Sequence
    // ------------------------------------------------------------------------
    initial begin
        $display("========== Starting gf2m_reduce Testbench ==========\n");

        // ------------------------------
        // Test Case 1
        // ------------------------------
        d      = 11'b11110110011;  // Example 11-bit input for M=6 (2*M-1 bits)
        Rflat  = 30'b000101101010010101100010010001; // Example pattern
        #10;
        $display("Test Case 1:");
        display_case();

        // ------------------------------
        // Test Case 2
        // ------------------------------
        d      = 11'b11111111111;
        Rflat  = 30'b111111_111111_111111_111111_111111;
        #10;
        $display("Test Case 2:");
        display_case();

        // ------------------------------
        // Test Case 3
        // ------------------------------
        d      = 11'b00000000001;
        Rflat  = 30'b101010_010101_101010_010101_101010;
        #10;
        $display("Test Case 3:");
        display_case();

        // ------------------------------
        // Random Test
        // ------------------------------
        d      = $random;
        Rflat  = $random;
        #10;
        $display("Random Test:");
        display_case();

        $display("============ All Tests Completed Successfully ============\n");
        $finish;
    end

endmodule

