`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:16:47 10/23/2025 
// Design Name: 
// Module Name:    compute_r 
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


module compute_r  #(    parameter  M =6, parameter  T=4)(
    input  wire [M-1:0] f,                     
    output reg  [M*(M-1)-1:0] Rflat   
);
   
    reg [M-1:0] r_col [0:M-2];
    integer i, j;
    always @* 
	 begin
         r_col[0] = f;     // column 0 is just f (r_j^0 = f_j)

        // r_j^i = r_{j-1}^{i-1} ^ ( r_{m-1}^{i-1} & r_j^0 )
        for (i = 1; i <= M-2; i = i + 1) 
		  begin
            r_col[i] = {M{1'b0}};
            for (j = 0; j < M; j = j + 1)
				begin
                if (j == 0)
                    r_col[i][j] = (r_col[i-1][M-1] & r_col[0][j]);
                else
                    r_col[i][j] = r_col[i-1][j-1] ^ (r_col[i-1][M-1] & r_col[0][j]);
            end
        end
        Rflat = {(M*(M-1)){1'b0}};
        for (i = 0; i <= M-2; i = i + 1) 
		  begin
            for (j = 0; j < M; j = j + 1) 
				begin
                Rflat[i*M + j] = r_col[i][j];
            end
        end
    end
endmodule

