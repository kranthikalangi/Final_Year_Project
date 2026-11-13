`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:42:35 10/24/2025 
// Design Name: 
// Module Name:    poly_mul 
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
module poly_mul #( parameter  M =6	, parameter  T=4)(
    input  [M-1:0] A,
    input  [M-1:0] B,
    output [2*M-2:0] d
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
    assign d = prod;
endmodule
