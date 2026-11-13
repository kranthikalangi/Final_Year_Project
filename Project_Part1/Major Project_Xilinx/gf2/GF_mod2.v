`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:53:38 10/22/2025 
// Design Name: 
// Module Name:    GF_mod2 
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

//======================================================
// GF(2^M) Modular Multiplier with Optional Pipelining
// Compatible with Xilinx Spartan-6
//======================================================
module GF_mod2 #(
    parameter M = 6,              // Field width
    parameter T = 4,              // Trinomial reduction term
    parameter PIPELINE = 1        // Enable pipelining (1 = yes, 0 = no)
)(
    input  wire                  clk,
    input  wire                  rst,
    input  wire [M-1:0]          A,
    input  wire [M-1:0]          B,
    output reg  [M-1:0]          C
);

    wire [2*M-2:0] D;
    wire [M-1:0]   DL_in;
    wire [M-2:0]   DH_in, DHxt;
    reg  [M-1:0]   C_int;

    // Split the multiplier output
    assign DL_in = D[M-1:0];
    assign DH_in = D[2*M-2:M];

    // Polynomial multiplication over GF(2)
    polynomial_multiplier #(.M(M)) MUX (
        .A(A),
        .B(B),
        .D(D)
    );

    // Modular reduction
    trinomial_reducer #(.M(M), .T(T)) RED (
        .DH_in(DH_in),
        .DHxt(DHxt)
    );

    // XOR combination for final reduction
    always @* begin
        C_int = DHxt ^ DH_in ^ DL_in;
    end

    // Optional pipelining for higher frequency
    generate
        if (PIPELINE) begin : pipelined_output
            always @(posedge clk or posedge rst) begin
                if (rst)
                    C <= 0;
                else
                    C <= C_int;
            end
        end else begin : combinational_output
            always @(*) begin
                C = C_int;
            end
        end
    endgenerate

endmodule


//======================================================
// Polynomial Multiplier for GF(2)
//======================================================
module polynomial_multiplier #(
    parameter M = 6
)(
    input  wire [M-1:0] A,
    input  wire [M-1:0] B,
    output reg  [2*M-2:0] D
);
    integer i, j;

    always @* begin
        D = 0;
        for (i = 0; i < M; i = i + 1)
            for (j = 0; j < M; j = j + 1)
                D[i+j] = D[i+j] ^ (A[i] & B[j]);
    end
endmodule


//======================================================
// Trinomial Reducer (GF(2) modular reduction)
//======================================================
module trinomial_reducer #(
    parameter M = 6,
    parameter T = 4
)(
    input  wire [M-2:0] DH_in,
    output reg  [M-2:0] DHxt
);
    integer i;
    reg c;
    reg [M-2:0] shift_reg;

    always @* begin
        shift_reg = DH_in;
        for (i = 0; i < T-1; i = i + 1) begin
            c = shift_reg[M-2];
            shift_reg = {shift_reg[M-3:0], c};
            shift_reg[T-1] = c ^ shift_reg[T-1];
        end
        DHxt = shift_reg;
    end
endmodule

