`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:48:45 09/23/2025
// Design Name:   trinomial_reducer
// Module Name:   C:/Users/ACER/Desktop/Major Project/major/trinomial_reducer_tb.v
// Project Name:  major
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: trinomial_reducer
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module trinomial_reducer_tb;

	// Inputs
	reg [4:0] DH_in;

	// Outputs
	wire [4:0] DHxt;

	// Instantiate the Unit Under Test (UUT)
	trinomial_reducer uut (
		.DH_in(DH_in), 
		.DHxt(DHxt)
	);

	initial begin
		// Initialize Inputs
		DH_in = 5'b11110;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

