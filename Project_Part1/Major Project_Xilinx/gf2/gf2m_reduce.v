`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:12:48 10/23/2025 
// Design Name: 
// Module Name:    gf2m_reduce 
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


//----------------------------------------------------
// GF(2^m) Modular Reduction Matrix Implementation
// Corresponds to Equation (2) in your paper
// ----------------------------------------------------

module gf2m_reduce   #(    parameter  M =6, parameter  T=4) (
    input  wire [2*M-2:0] d,          
    input  wire [M*(M-1)-1:0] Rflat,  
    output reg  [M-1:0] c             
);

    integer i, j;
    reg [M-1:0] r [0:M-2];  
    reg [M-1:0] temp;   

    always @*
	 begin       
        for (i = 0; i <= M-2; i = i + 1)
            for (j = 0; j < M; j = j + 1)
                r[i][j] = Rflat[i*M + j];
					 
        for (j = 0; j < M; j = j + 1)
            c[j] = d[j];
				
        for (i = 0; i <= M-2; i = i + 1) 
		  begin
            for (j = 0; j < M; j = j + 1) 
				begin
                if (r[i][j])
                    c[j] = c[j] ^ d[M + i];
            end
        end
    end

endmodule

