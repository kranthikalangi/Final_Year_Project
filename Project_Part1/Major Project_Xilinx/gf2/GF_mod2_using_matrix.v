`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:21:30 10/23/2025 
// Design Name: 
// Module Name:    GF_mod2_using_matrix 
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
module GF_mod2_using_matrix  #( parameter  M =6, parameter  T=4)(

    input  [M-1:0] A,
    input  [M-1:0] B,
	 output [2*M-2:0] d,
	 output [M*(M-1)-1:0] Rflat,
	 output [M-1:0] f,
    output [M-1:0] c
    );
	 
	 
	 poly_mul #(.M(M), .T(T))  MUX (
        .A(A),
        .B(B),
        .d(d)
    );
	 
	 assign f = make_trinomial(M, T);
	 
	 function [M:0] make_trinomial;
        input integer m;
        input integer t;
        begin
            make_trinomial = {M{1'b0}};  // initialize
            make_trinomial[0] = 1'b1;    // constant term
            if (t >= 1 && t < m)
                make_trinomial[t] = 1'b1; // x^T term
        end
    endfunction

	 compute_r #(.M(M), .T(T))  rMAX (
          .f(f),                     
          .Rflat(Rflat) 
    );	 

    gf2m_reduce #(.M(M), .T(T)) OUT (
	     .d(d),          
        .Rflat(Rflat),  
        .c(c) 
	 );
	 
	 

endmodule
