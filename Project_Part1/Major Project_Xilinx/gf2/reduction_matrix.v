`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:39:51 10/23/2025 
// Design Name: 
// Module Name:    reduction_matrix 
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
//////////////////////////////////////////////////////////////////////////////////// compute_r.v
// Parameterized implementation of equation (3) for r_j^i over GF(2).
// Rflat packs columns i = 0 .. M-2, each column is M bits (j = 0 .. M-1).
// Bit layout: Rflat[i*M + j] == r_j^i

module reduction_matrix   #( parameter integer M = 6  , parameter  T=4 )(
    input  wire [M-1:0] f,                      // f_j, j = 0..M-1  (r_j^0 = f_j)
    output reg  [M*(M-1)-1:0] Rflat             // flattened r matrix
);

    // internal representation: columns indexed by i (0..M-2), each is M bits (j)
    reg [M-1:0] r_col [0:M-2];  // r_col[i][j] == r_j^i

    integer i, j;
    always @* begin
        // column 0 is just f (r_j^0 = f_j)
        r_col[0] = f;

        // compute columns 1 .. M-2 using recurrence
        // r_j^i = r_{j-1}^{i-1} ^ ( r_{m-1}^{i-1} & r_j^0 )
        for (i = 1; i <= M-2; i = i + 1) begin
            // default initialize column
            r_col[i] = {M{1'b0}};
            for (j = 0; j < M; j = j + 1) begin
                // term1 = r_{j-1}^{i-1}  (0 when j==0)
                if (j == 0)
                    r_col[i][j] = (r_col[i-1][M-1] & r_col[0][j]); // 0 ^ (r_{m-1}^{i-1} & r_j^0) -> just second term
                else
                    r_col[i][j] = r_col[i-1][j-1] ^ (r_col[i-1][M-1] & r_col[0][j]);
            end
        end

        // flatten into Rflat: Rflat[i*M + j] = r_col[i][j]
        // i = 0 .. M-2, j = 0 .. M-1
        Rflat = {(M*(M-1)){1'b0}};
        for (i = 0; i <= M-2; i = i + 1) begin
            for (j = 0; j < M; j = j + 1) begin
                Rflat[i*M + j] = r_col[i][j];
            end
        end
    end

endmodule
