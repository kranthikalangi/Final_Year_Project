`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:43:34 09/23/2025 
// Design Name: 
// Module Name:    polynomial_multiplier 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: `
//
//////////////////////////////////////////////////////////////////////////////////
module polynomial_multiplier #( parameter  M =6, parameter  T=4)(
    input  [M-1:0] A,
    input  [M-1:0] B,
    output [2*M-2:0] D
);
    reg [2*M-2:0] prod;
    integer i, j;
    always @* begin
        prod = 0;
        for (i = 0; i < M; i = i + 1) begin
            for (j = 0; j < M; j = j + 1) begin
                prod[i+j] = prod[i+j] ^ (A[i] & B[j]);
            end
        end
    end
    assign D = prod;
endmodule
