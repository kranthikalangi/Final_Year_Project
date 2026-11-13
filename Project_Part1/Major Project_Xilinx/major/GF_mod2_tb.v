`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:07:16 09/23/2025
// Design Name:   GF_mod2
// Module Name:   C:/Users/ACER/Desktop/Major Project/major/GF_mod2_tb.v
// Project Name:  major
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
module GF_mod2_tb;
	parameter M = 6;
	// Inputs
	reg [5:0] A;
	reg [5:0] B;	
	// Outputs
	wire [2*M-2:0] D;
	wire [5:0] C;
	// Instantiate the Unit Under Test (UUT)
	GF_mod2 uut (
		.A(A), 
		.B(B),
		.D(D),
		.C(C)
	);
	initial begin
		// Initialize Inputs
		A = 6'b101101;  B = 6'b110111; #10;
		$display(" ");
		$write("Check outof field reduction test case  :     ");
      $display("A=%b,   B=%b =>   D=%b,   C=%b", A, B, D, C);
		$display(" "); #100;
		
		A = 6'b110011;  B = 6'b000010; #10;
		$write("Check within field reduction test case :     ");
      $display("A=%b,   B=%b =>   D=%b,   C=%b", A, B, D, C);
		$display(" "); #100;

		A = 6'b101101;  B = 6'b000000; #10;
		$write("Check Zero field test case                   :     ");
      $display("A=%b,   B=%b =>   D=%b,   C=%b", A, B, D, C);
		$display(" "); #100;
		
		A = 6'b000001;	B = 6'b111111; #10;
		$write("Check Unit field test case                    :     ");
      $display("A=%b,   B=%b =>   D=%b,   C=%b", A, B, D, C);
		$display(" "); #100;
		$finish;
	end      
endmodule
