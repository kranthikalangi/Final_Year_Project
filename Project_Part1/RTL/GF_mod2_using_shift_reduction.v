module GF_mod2_using_shift_reduction #(    parameter  M =6, parameter  T=4)(
    input  [M-1:0] A,
    input  [M-1:0] B,
    output [M-1:0] C
);

    wire [2*M-2:0] D;
    wire [M-1:0] DL_in;
    wire [M-2:0] DH_in, DHxt;

    assign DL_in = D[M-1:0];
    assign DH_in = D[2*M-2:M];

    polynomial_multiplier #(.M(M), .T(T))  MUX (
        .A(A),
        .B(B),
        .D(D)
    );

    trinomial_reducer #(.M(M), .T(T)) RED (
        .DH_in(DH_in),
        .DHxt(DHxt)
    );

    assign C = DHxt ^ DH_in ^ DL_in;

endmodule
module polynomial_multiplier #(    parameter  M =6, parameter  T=4)(
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
