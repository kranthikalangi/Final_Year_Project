`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:46:58 09/23/2025 
// Design Name: 
// Module Name:    trinomial_reducer 
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
module trinomial_reducer #( parameter  M =6, parameter  T=4)(
    input  [M-2:0] DH_in,
    output reg [M-2:0] DHxt
);
    integer i;
	 reg c;
    reg [M-2:0] shift_reg;
    always @* 
	 begin
        shift_reg = DH_in;
        for (i = 0; i < T-1; i = i + 1) 
		  begin
				c = shift_reg[M-2];
            shift_reg = { shift_reg[M-3:0], c };
            shift_reg[T-1] = c ^ shift_reg[T-1];
				
        end
        DHxt = shift_reg;
    end
endmodule
