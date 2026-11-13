////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:16:35 10/23/2025
// Design Name:   GF_mod2_using_matrix
// Module Name:   C:/Users/B200875/Desktop/Major Project/gf2/tb_GF_mod2_using_matrix.v
// Project Name:  gf2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: GF_mod2_using_matrix
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////


module tb_GF_mod2_using_shift_reduction;

    parameter M = 6;
    parameter T = 4;

    reg [M-1:0] A;
    reg [M-1:0] B;   
    wire [M-1:0] c;

    GF_mod2_using_shift_reduction #(.M(M), .T(T)) dut (
        .A(A),
        .B(B),
        .C(c)
    );

 initial begin
        A = 6'b101101;  B = 6'b110111; #10;
        $display("\nCheck out-of-field reduction test case:");
        $display("A=%b, B=%b => D=%b, C=%b", A, B, dut.D, c);
        #100;

        A = 6'b001101;  B = 6'b000111; #10;
        $display("\nCheck within-field reduction test case:");
        $display("A=%b, B=%b => D=%b, C=%b", A, B, dut.D, c);
        #100;

        A = 6'b101101;  B = 6'b0; #10;
        $display("\nCheck Zero field test case:");
        $display("A=%b, B=%b => D=%b, C=%b", A, B, dut.D, c);
        #100;

        A = 6'b1;  B = 6'b111111; #10;
        $display("\nCheck Unit field test case:");
        $display("A=%b, B=%b => D=%b, C=%b", A, B, dut.D, c);
        #100;

        $finish;
    end

endmodule

