`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:45:15 09/23/2025
// Design Name:   polynomial_multiplier
// Module Name:   C:/Users/ACER/Desktop/Major Project/major/polynomial_multiplier_tb.v
// Project Name:  major
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: polynomial_multiplier
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module polynomial_multiplier_tb;

	// Inputs
	reg [5:0] A;
	reg [5:0] B;

	// Outputs
	wire [10:0] D;

	// Instantiate the Unit Under Test (UUT)
	polynomial_multiplier uut (
		.A(A), 
		.B(B), 
		.D(D)
	);

	initial begin
		// Initialize Inputs
		A = 6'b101101;
		B = 6'b110110;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

