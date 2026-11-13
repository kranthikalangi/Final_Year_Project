////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 1995-2012 Xilinx, Inc.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////
//   ____  ____
//  /   /\/   /
// /___/  \  /    Vendor: Xilinx
// \   \   \/     Version: P.58f
//  \   \         Application: netgen
//  /   /         Filename: gf2_top_synthesis.v
// /___/   /\     Timestamp: Wed Dec 31 15:21:16 2025
// \   \  /  \ 
//  \___\/\___\
//             
// Command	: -intstyle ise -insert_glbl true -w -dir netgen/synthesis -ofmt verilog -sim gf2_top.ngc gf2_top_synthesis.v 
// Device	: xc6slx45-3-csg324
// Input file	: gf2_top.ngc
// Output file	: C:\Users\RGUKT\Desktop\New\np\netgen\synthesis\gf2_top_synthesis.v
// # of Modules	: 1
// Design Name	: gf2_top
// Xilinx        : C:\Xilinx\14.5\ISE_DS\ISE\
//             
// Purpose:    
//     This verilog netlist is a verification model and uses simulation 
//     primitives which may not represent the true implementation of the 
//     device, however the netlist is functionally correct and should not 
//     be modified. This file cannot be synthesized and should only be used 
//     with supported simulation tools.
//             
// Reference:  
//     Command Line Tools User Guide, Chapter 23 and Synthesis and Simulation Design Guide, Chapter 6
//             
////////////////////////////////////////////////////////////////////////////////

`timescale 1 ns/1 ps

module gf2_top (
  clk, btn, sw, led
);
  input clk;
  input [4 : 0] btn;
  input [5 : 0] sw;
  output [7 : 0] led;
  wire btn_4_IBUF_0;
  wire btn_3_IBUF_1;
  wire btn_2_IBUF_2;
  wire btn_1_IBUF_3;
  wire btn_0_IBUF_4;
  wire sw_5_IBUF_5;
  wire sw_4_IBUF_6;
  wire sw_3_IBUF_7;
  wire sw_2_IBUF_8;
  wire sw_1_IBUF_9;
  wire sw_0_IBUF_10;
  wire clk_BUFGP_11;
  wire led_7_24;
  wire led_6_25;
  wire led_5_26;
  wire led_4_27;
  wire led_3_28;
  wire led_2_29;
  wire led_1_30;
  wire led_0_31;
  wire \led[7]_led[7]_mux_6_OUT<7> ;
  wire \led[7]_led[7]_mux_6_OUT<6> ;
  wire \led[7]_led[7]_mux_6_OUT<5> ;
  wire \led[7]_led[7]_mux_6_OUT<4> ;
  wire \led[7]_led[7]_mux_6_OUT<3> ;
  wire \led[7]_led[7]_mux_6_OUT<2> ;
  wire \led[7]_led[7]_mux_6_OUT<1> ;
  wire \led[7]_led[7]_mux_6_OUT<0> ;
  wire _n0038_inv;
  wire _n0045_inv;
  wire mux10111_46;
  wire mux10112_47;
  wire \gf_inst/Mxor_C_1_xo<0>1 ;
  wire mux1012_49;
  wire mux10121_50;
  wire mux10122_51;
  wire mux10123_52;
  wire mux10124_53;
  wire mux10125_54;
  wire mux10126_55;
  wire mux1011_56;
  wire mux10113_57;
  wire mux10114_58;
  wire mux10115_59;
  wire mux10116;
  wire mux1013_61;
  wire mux10131_62;
  wire mux101;
  wire mux1014_64;
  wire mux1015;
  wire N4;
  wire N5;
  wire N9;
  wire N11;
  wire N12;
  wire [5 : 0] B_reg;
  wire [5 : 0] A_reg;
  wire [2 : 2] D_wire;
  wire [10 : 8] \gf_inst/D ;
  FDRE   B_reg_0 (
    .C(clk_BUFGP_11),
    .CE(_n0038_inv),
    .D(sw_0_IBUF_10),
    .R(btn_0_IBUF_4),
    .Q(B_reg[0])
  );
  FDRE   B_reg_1 (
    .C(clk_BUFGP_11),
    .CE(_n0038_inv),
    .D(sw_1_IBUF_9),
    .R(btn_0_IBUF_4),
    .Q(B_reg[1])
  );
  FDRE   B_reg_2 (
    .C(clk_BUFGP_11),
    .CE(_n0038_inv),
    .D(sw_2_IBUF_8),
    .R(btn_0_IBUF_4),
    .Q(B_reg[2])
  );
  FDRE   B_reg_3 (
    .C(clk_BUFGP_11),
    .CE(_n0038_inv),
    .D(sw_3_IBUF_7),
    .R(btn_0_IBUF_4),
    .Q(B_reg[3])
  );
  FDRE   B_reg_4 (
    .C(clk_BUFGP_11),
    .CE(_n0038_inv),
    .D(sw_4_IBUF_6),
    .R(btn_0_IBUF_4),
    .Q(B_reg[4])
  );
  FDRE   B_reg_5 (
    .C(clk_BUFGP_11),
    .CE(_n0038_inv),
    .D(sw_5_IBUF_5),
    .R(btn_0_IBUF_4),
    .Q(B_reg[5])
  );
  FDRE   A_reg_0 (
    .C(clk_BUFGP_11),
    .CE(btn_1_IBUF_3),
    .D(sw_0_IBUF_10),
    .R(btn_0_IBUF_4),
    .Q(A_reg[0])
  );
  FDRE   A_reg_1 (
    .C(clk_BUFGP_11),
    .CE(btn_1_IBUF_3),
    .D(sw_1_IBUF_9),
    .R(btn_0_IBUF_4),
    .Q(A_reg[1])
  );
  FDRE   A_reg_2 (
    .C(clk_BUFGP_11),
    .CE(btn_1_IBUF_3),
    .D(sw_2_IBUF_8),
    .R(btn_0_IBUF_4),
    .Q(A_reg[2])
  );
  FDRE   A_reg_3 (
    .C(clk_BUFGP_11),
    .CE(btn_1_IBUF_3),
    .D(sw_3_IBUF_7),
    .R(btn_0_IBUF_4),
    .Q(A_reg[3])
  );
  FDRE   A_reg_4 (
    .C(clk_BUFGP_11),
    .CE(btn_1_IBUF_3),
    .D(sw_4_IBUF_6),
    .R(btn_0_IBUF_4),
    .Q(A_reg[4])
  );
  FDRE   A_reg_5 (
    .C(clk_BUFGP_11),
    .CE(btn_1_IBUF_3),
    .D(sw_5_IBUF_5),
    .R(btn_0_IBUF_4),
    .Q(A_reg[5])
  );
  FDRE   led_0 (
    .C(clk_BUFGP_11),
    .CE(_n0045_inv),
    .D(\led[7]_led[7]_mux_6_OUT<0> ),
    .R(btn_0_IBUF_4),
    .Q(led_0_31)
  );
  FDRE   led_1 (
    .C(clk_BUFGP_11),
    .CE(_n0045_inv),
    .D(\led[7]_led[7]_mux_6_OUT<1> ),
    .R(btn_0_IBUF_4),
    .Q(led_1_30)
  );
  FDRE   led_2 (
    .C(clk_BUFGP_11),
    .CE(_n0045_inv),
    .D(\led[7]_led[7]_mux_6_OUT<2> ),
    .R(btn_0_IBUF_4),
    .Q(led_2_29)
  );
  FDRE   led_3 (
    .C(clk_BUFGP_11),
    .CE(_n0045_inv),
    .D(\led[7]_led[7]_mux_6_OUT<3> ),
    .R(btn_0_IBUF_4),
    .Q(led_3_28)
  );
  FDRE   led_4 (
    .C(clk_BUFGP_11),
    .CE(_n0045_inv),
    .D(\led[7]_led[7]_mux_6_OUT<4> ),
    .R(btn_0_IBUF_4),
    .Q(led_4_27)
  );
  FDRE   led_5 (
    .C(clk_BUFGP_11),
    .CE(_n0045_inv),
    .D(\led[7]_led[7]_mux_6_OUT<5> ),
    .R(btn_0_IBUF_4),
    .Q(led_5_26)
  );
  FDRE   led_6 (
    .C(clk_BUFGP_11),
    .CE(_n0045_inv),
    .D(\led[7]_led[7]_mux_6_OUT<6> ),
    .R(btn_0_IBUF_4),
    .Q(led_6_25)
  );
  FDRE   led_7 (
    .C(clk_BUFGP_11),
    .CE(_n0045_inv),
    .D(\led[7]_led[7]_mux_6_OUT<7> ),
    .R(btn_0_IBUF_4),
    .Q(led_7_24)
  );
  LUT2 #(
    .INIT ( 4'h4 ))
  _n0038_inv1 (
    .I0(btn_1_IBUF_3),
    .I1(btn_2_IBUF_2),
    .O(_n0038_inv)
  );
  LUT4 #(
    .INIT ( 16'hFFFE ))
  _n0045_inv1 (
    .I0(btn_2_IBUF_2),
    .I1(btn_1_IBUF_3),
    .I2(btn_4_IBUF_0),
    .I3(btn_3_IBUF_1),
    .O(_n0045_inv)
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \gf_inst/MUL/prod<10>1  (
    .I0(A_reg[5]),
    .I1(B_reg[5]),
    .O(\gf_inst/D [10])
  );
  LUT4 #(
    .INIT ( 16'h7888 ))
  \gf_inst/MUL/Mxor_prod<9>_xo<0>1  (
    .I0(A_reg[4]),
    .I1(B_reg[5]),
    .I2(A_reg[5]),
    .I3(B_reg[4]),
    .O(\gf_inst/D [9])
  );
  LUT3 #(
    .INIT ( 8'h10 ))
  mux101421 (
    .I0(btn_1_IBUF_3),
    .I1(btn_2_IBUF_2),
    .I2(btn_3_IBUF_1),
    .O(mux10112_47)
  );
  LUT3 #(
    .INIT ( 8'h01 ))
  mux101511 (
    .I0(btn_1_IBUF_3),
    .I1(btn_2_IBUF_2),
    .I2(btn_3_IBUF_1),
    .O(mux10111_46)
  );
  LUT6 #(
    .INIT ( 64'h935F6CA06CA06CA0 ))
  \gf_inst/MUL/Mxor_prod<8>_xo<0>1  (
    .I0(B_reg[3]),
    .I1(B_reg[4]),
    .I2(A_reg[5]),
    .I3(A_reg[4]),
    .I4(B_reg[5]),
    .I5(A_reg[3]),
    .O(\gf_inst/D [8])
  );
  LUT6 #(
    .INIT ( 64'h963C5AF066CCAA00 ))
  \gf_inst/MUL/Mxor_prod<2>_xo<0>1  (
    .I0(B_reg[1]),
    .I1(B_reg[0]),
    .I2(A_reg[0]),
    .I3(A_reg[1]),
    .I4(A_reg[2]),
    .I5(B_reg[2]),
    .O(D_wire[2])
  );
  LUT5 #(
    .INIT ( 32'h3993F55F ))
  mux10121 (
    .I0(B_reg[3]),
    .I1(B_reg[5]),
    .I2(A_reg[1]),
    .I3(A_reg[4]),
    .I4(A_reg[2]),
    .O(mux1012_49)
  );
  LUT6 #(
    .INIT ( 64'h8777788878888777 ))
  mux10122 (
    .I0(B_reg[4]),
    .I1(A_reg[3]),
    .I2(A_reg[5]),
    .I3(B_reg[2]),
    .I4(\gf_inst/D [9]),
    .I5(mux1012_49),
    .O(mux10121_50)
  );
  LUT6 #(
    .INIT ( 64'h6CA0935F935F935F ))
  mux10123 (
    .I0(B_reg[1]),
    .I1(B_reg[0]),
    .I2(A_reg[3]),
    .I3(A_reg[4]),
    .I4(B_reg[2]),
    .I5(A_reg[2]),
    .O(mux10122_51)
  );
  LUT4 #(
    .INIT ( 16'hEA40 ))
  mux10125 (
    .I0(btn_1_IBUF_3),
    .I1(B_reg[4]),
    .I2(btn_2_IBUF_2),
    .I3(A_reg[4]),
    .O(mux10124_53)
  );
  LUT6 #(
    .INIT ( 64'h6CA0935F935F935F ))
  mux10126 (
    .I0(A_reg[0]),
    .I1(B_reg[0]),
    .I2(B_reg[4]),
    .I3(A_reg[4]),
    .I4(B_reg[2]),
    .I5(A_reg[2]),
    .O(mux10125_54)
  );
  LUT6 #(
    .INIT ( 64'h28A08800820A22AA ))
  mux10127 (
    .I0(mux10112_47),
    .I1(B_reg[3]),
    .I2(B_reg[1]),
    .I3(A_reg[1]),
    .I4(A_reg[3]),
    .I5(mux10125_54),
    .O(mux10126_55)
  );
  LUT5 #(
    .INIT ( 32'hFFFFCEEC ))
  mux10128 (
    .I0(mux10111_46),
    .I1(mux10124_53),
    .I2(mux10123_52),
    .I3(mux10121_50),
    .I4(mux10126_55),
    .O(\led[7]_led[7]_mux_6_OUT<4> )
  );
  LUT4 #(
    .INIT ( 16'hEC20 ))
  mux10111 (
    .I0(btn_2_IBUF_2),
    .I1(btn_1_IBUF_3),
    .I2(B_reg[3]),
    .I3(A_reg[3]),
    .O(mux1011_56)
  );
  LUT6 #(
    .INIT ( 64'h7887887787877777 ))
  mux10112 (
    .I0(B_reg[3]),
    .I1(A_reg[0]),
    .I2(B_reg[0]),
    .I3(A_reg[1]),
    .I4(A_reg[3]),
    .I5(B_reg[2]),
    .O(mux10113_57)
  );
  LUT5 #(
    .INIT ( 32'hFF80FF2A ))
  mux10113 (
    .I0(mux10112_47),
    .I1(B_reg[1]),
    .I2(A_reg[2]),
    .I3(mux1011_56),
    .I4(mux10113_57),
    .O(mux10114_58)
  );
  LUT6 #(
    .INIT ( 64'h2DD27788D2D28888 ))
  mux10114 (
    .I0(B_reg[1]),
    .I1(A_reg[5]),
    .I2(B_reg[4]),
    .I3(A_reg[4]),
    .I4(A_reg[2]),
    .I5(B_reg[2]),
    .O(mux10115_59)
  );
  LUT6 #(
    .INIT ( 64'h8777788878888777 ))
  mux10115 (
    .I0(B_reg[3]),
    .I1(A_reg[3]),
    .I2(B_reg[5]),
    .I3(A_reg[1]),
    .I4(\gf_inst/D [9]),
    .I5(mux10115_59),
    .O(mux10116)
  );
  LUT6 #(
    .INIT ( 64'hFFFF2882FFFF8228 ))
  mux10117 (
    .I0(mux10111_46),
    .I1(\gf_inst/D [10]),
    .I2(mux10113_57),
    .I3(\gf_inst/D [8]),
    .I4(mux10114_58),
    .I5(mux10116),
    .O(\led[7]_led[7]_mux_6_OUT<3> )
  );
  LUT6 #(
    .INIT ( 64'h953F6AC06AC06AC0 ))
  mux10131 (
    .I0(B_reg[1]),
    .I1(B_reg[0]),
    .I2(A_reg[5]),
    .I3(A_reg[4]),
    .I4(A_reg[3]),
    .I5(B_reg[2]),
    .O(mux1013_61)
  );
  LUT6 #(
    .INIT ( 64'h8778787877888888 ))
  mux10132 (
    .I0(B_reg[5]),
    .I1(A_reg[0]),
    .I2(B_reg[3]),
    .I3(B_reg[4]),
    .I4(A_reg[1]),
    .I5(A_reg[2]),
    .O(mux10131_62)
  );
  LUT6 #(
    .INIT ( 64'hEC20FD31FD31EC20 ))
  mux10133 (
    .I0(btn_2_IBUF_2),
    .I1(btn_1_IBUF_3),
    .I2(B_reg[5]),
    .I3(A_reg[5]),
    .I4(mux10131_62),
    .I5(mux1013_61),
    .O(\led[7]_led[7]_mux_6_OUT<5> )
  );
  LUT5 #(
    .INIT ( 32'hFECC2200 ))
  mux1011 (
    .I0(btn_2_IBUF_2),
    .I1(btn_1_IBUF_3),
    .I2(btn_3_IBUF_1),
    .I3(B_reg[0]),
    .I4(A_reg[0]),
    .O(mux101)
  );
  LUT6 #(
    .INIT ( 64'h7887887787877777 ))
  mux1012 (
    .I0(B_reg[1]),
    .I1(A_reg[5]),
    .I2(A_reg[4]),
    .I3(B_reg[4]),
    .I4(B_reg[2]),
    .I5(A_reg[2]),
    .O(mux1014_64)
  );
  LUT6 #(
    .INIT ( 64'h7888877787778777 ))
  mux1013 (
    .I0(B_reg[0]),
    .I1(A_reg[0]),
    .I2(B_reg[3]),
    .I3(A_reg[3]),
    .I4(B_reg[5]),
    .I5(A_reg[1]),
    .O(mux1015)
  );
  LUT6 #(
    .INIT ( 64'hF2F8F8F2F8F2F2F8 ))
  mux1014 (
    .I0(mux10111_46),
    .I1(\gf_inst/D [10]),
    .I2(mux101),
    .I3(mux1015),
    .I4(mux1014_64),
    .I5(\gf_inst/D [8]),
    .O(\led[7]_led[7]_mux_6_OUT<0> )
  );
  IBUF   btn_4_IBUF (
    .I(btn[4]),
    .O(btn_4_IBUF_0)
  );
  IBUF   btn_3_IBUF (
    .I(btn[3]),
    .O(btn_3_IBUF_1)
  );
  IBUF   btn_2_IBUF (
    .I(btn[2]),
    .O(btn_2_IBUF_2)
  );
  IBUF   btn_1_IBUF (
    .I(btn[1]),
    .O(btn_1_IBUF_3)
  );
  IBUF   btn_0_IBUF (
    .I(btn[0]),
    .O(btn_0_IBUF_4)
  );
  IBUF   sw_5_IBUF (
    .I(sw[5]),
    .O(sw_5_IBUF_5)
  );
  IBUF   sw_4_IBUF (
    .I(sw[4]),
    .O(sw_4_IBUF_6)
  );
  IBUF   sw_3_IBUF (
    .I(sw[3]),
    .O(sw_3_IBUF_7)
  );
  IBUF   sw_2_IBUF (
    .I(sw[2]),
    .O(sw_2_IBUF_8)
  );
  IBUF   sw_1_IBUF (
    .I(sw[1]),
    .O(sw_1_IBUF_9)
  );
  IBUF   sw_0_IBUF (
    .I(sw[0]),
    .O(sw_0_IBUF_10)
  );
  OBUF   led_7_OBUF (
    .I(led_7_24),
    .O(led[7])
  );
  OBUF   led_6_OBUF (
    .I(led_6_25),
    .O(led[6])
  );
  OBUF   led_5_OBUF (
    .I(led_5_26),
    .O(led[5])
  );
  OBUF   led_4_OBUF (
    .I(led_4_27),
    .O(led[4])
  );
  OBUF   led_3_OBUF (
    .I(led_3_28),
    .O(led[3])
  );
  OBUF   led_2_OBUF (
    .I(led_2_29),
    .O(led[2])
  );
  OBUF   led_1_OBUF (
    .I(led_1_30),
    .O(led[1])
  );
  OBUF   led_0_OBUF (
    .I(led_0_31),
    .O(led[0])
  );
  LUT6 #(
    .INIT ( 64'hF3F3C0C0F3E2D1C0 ))
  mux1024 (
    .I0(btn_3_IBUF_1),
    .I1(btn_1_IBUF_3),
    .I2(A_reg[1]),
    .I3(N4),
    .I4(N5),
    .I5(\gf_inst/Mxor_C_1_xo<0>1 ),
    .O(\led[7]_led[7]_mux_6_OUT<1> )
  );
  LUT4 #(
    .INIT ( 16'h1DB7 ))
  \gf_inst/Mxor_C_1_xo<0>11_SW0  (
    .I0(A_reg[5]),
    .I1(B_reg[4]),
    .I2(A_reg[3]),
    .I3(B_reg[2]),
    .O(N9)
  );
  LUT5 #(
    .INIT ( 32'h47B7B848 ))
  \gf_inst/Mxor_C_1_xo<0>11  (
    .I0(A_reg[2]),
    .I1(B_reg[5]),
    .I2(A_reg[4]),
    .I3(B_reg[3]),
    .I4(N9),
    .O(\gf_inst/Mxor_C_1_xo<0>1 )
  );
  LUT5 #(
    .INIT ( 32'hC89D9D9D ))
  mux1024_SW0 (
    .I0(btn_2_IBUF_2),
    .I1(B_reg[1]),
    .I2(A_reg[0]),
    .I3(B_reg[0]),
    .I4(A_reg[1]),
    .O(N4)
  );
  LUT5 #(
    .INIT ( 32'hAAAA7888 ))
  mux1024_SW1 (
    .I0(B_reg[1]),
    .I1(A_reg[0]),
    .I2(B_reg[0]),
    .I3(A_reg[1]),
    .I4(btn_2_IBUF_2),
    .O(N5)
  );
  LUT4 #(
    .INIT ( 16'hEA40 ))
  mux1031_SW0 (
    .I0(btn_1_IBUF_3),
    .I1(btn_2_IBUF_2),
    .I2(B_reg[2]),
    .I3(A_reg[2]),
    .O(N11)
  );
  LUT4 #(
    .INIT ( 16'hEF45 ))
  mux1031_SW1 (
    .I0(btn_1_IBUF_3),
    .I1(B_reg[2]),
    .I2(btn_2_IBUF_2),
    .I3(A_reg[2]),
    .O(N12)
  );
  LUT6 #(
    .INIT ( 64'hFE04CDC8EF40DC8C ))
  mux1032 (
    .I0(btn_3_IBUF_1),
    .I1(N11),
    .I2(\gf_inst/D [10]),
    .I3(N12),
    .I4(D_wire[2]),
    .I5(\gf_inst/D [8]),
    .O(\led[7]_led[7]_mux_6_OUT<2> )
  );
  LUT5 #(
    .INIT ( 32'h78888777 ))
  mux10124 (
    .I0(A_reg[0]),
    .I1(B_reg[4]),
    .I2(B_reg[5]),
    .I3(A_reg[5]),
    .I4(mux10122_51),
    .O(mux10123_52)
  );
  LUT4 #(
    .INIT ( 16'hABA8 ))
  mux10141 (
    .I0(led_6_25),
    .I1(btn_1_IBUF_3),
    .I2(btn_2_IBUF_2),
    .I3(btn_3_IBUF_1),
    .O(\led[7]_led[7]_mux_6_OUT<6> )
  );
  LUT4 #(
    .INIT ( 16'hA8AB ))
  mux10151 (
    .I0(led_7_24),
    .I1(btn_1_IBUF_3),
    .I2(btn_2_IBUF_2),
    .I3(btn_3_IBUF_1),
    .O(\led[7]_led[7]_mux_6_OUT<7> )
  );
  BUFGP   clk_BUFGP (
    .I(clk),
    .O(clk_BUFGP_11)
  );
endmodule


`ifndef GLBL
`define GLBL

`timescale  1 ps / 1 ps

module glbl ();

    parameter ROC_WIDTH = 100000;
    parameter TOC_WIDTH = 0;

//--------   STARTUP Globals --------------
    wire GSR;
    wire GTS;
    wire GWE;
    wire PRLD;
    tri1 p_up_tmp;
    tri (weak1, strong0) PLL_LOCKG = p_up_tmp;

    wire PROGB_GLBL;
    wire CCLKO_GLBL;

    reg GSR_int;
    reg GTS_int;
    reg PRLD_int;

//--------   JTAG Globals --------------
    wire JTAG_TDO_GLBL;
    wire JTAG_TCK_GLBL;
    wire JTAG_TDI_GLBL;
    wire JTAG_TMS_GLBL;
    wire JTAG_TRST_GLBL;

    reg JTAG_CAPTURE_GLBL;
    reg JTAG_RESET_GLBL;
    reg JTAG_SHIFT_GLBL;
    reg JTAG_UPDATE_GLBL;
    reg JTAG_RUNTEST_GLBL;

    reg JTAG_SEL1_GLBL = 0;
    reg JTAG_SEL2_GLBL = 0 ;
    reg JTAG_SEL3_GLBL = 0;
    reg JTAG_SEL4_GLBL = 0;

    reg JTAG_USER_TDO1_GLBL = 1'bz;
    reg JTAG_USER_TDO2_GLBL = 1'bz;
    reg JTAG_USER_TDO3_GLBL = 1'bz;
    reg JTAG_USER_TDO4_GLBL = 1'bz;

    assign (weak1, weak0) GSR = GSR_int;
    assign (weak1, weak0) GTS = GTS_int;
    assign (weak1, weak0) PRLD = PRLD_int;

    initial begin
	GSR_int = 1'b1;
	PRLD_int = 1'b1;
	#(ROC_WIDTH)
	GSR_int = 1'b0;
	PRLD_int = 1'b0;
    end

    initial begin
	GTS_int = 1'b1;
	#(TOC_WIDTH)
	GTS_int = 1'b0;
    end

endmodule

`endif

