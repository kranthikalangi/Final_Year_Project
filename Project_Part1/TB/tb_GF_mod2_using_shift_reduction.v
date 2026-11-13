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

