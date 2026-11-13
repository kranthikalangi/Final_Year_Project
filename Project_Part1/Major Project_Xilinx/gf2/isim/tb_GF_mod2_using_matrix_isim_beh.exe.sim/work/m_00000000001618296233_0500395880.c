/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/B200875/Desktop/Major Project/gf2/compute_r.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};
static unsigned int ng4[] = {0U, 0U};
static int ng5[] = {5, 0};



static void Always_30_0(char *t0)
{
    char t6[8];
    char t7[8];
    char t27[8];
    char t28[8];
    char t44[8];
    char t52[8];
    char t60[8];
    char t67[8];
    char t98[8];
    char t99[8];
    char t109[8];
    char t127[8];
    char t128[8];
    char t133[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    int t17;
    char *t18;
    unsigned int t19;
    int t20;
    int t21;
    unsigned int t22;
    unsigned int t23;
    int t24;
    int t25;
    unsigned int t26;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t100;
    char *t101;
    char *t102;
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    char *t107;
    char *t108;
    char *t110;
    char *t111;
    char *t112;
    char *t113;
    char *t114;
    char *t115;
    char *t116;
    unsigned int t117;
    char *t118;
    unsigned int t119;
    char *t120;
    unsigned int t121;
    int t122;
    int t123;
    unsigned int t124;
    unsigned int t125;
    int t126;
    char *t129;
    char *t130;
    char *t131;
    char *t132;
    char *t134;
    char *t135;
    char *t136;
    char *t137;
    char *t138;
    char *t139;
    char *t140;
    char *t141;
    char *t142;

LAB0:    t1 = (t0 + 3120U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 3440);
    *((int *)t2) = 1;
    t3 = (t0 + 3152);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);

LAB5:    xsi_set_current_line(32, ng0);
    t4 = (t0 + 1320U);
    t5 = *((char **)t4);
    t4 = (t0 + 1880);
    t8 = (t0 + 1880);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 1880);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t6, t7, t10, t13, 2, 1, t14, 32, 1);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t7 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(35, ng0);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB8:    t2 = (t0 + 2040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t8 = *((char **)t5);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t8, 32, t5, 32);
    memset(t7, 0, 8);
    xsi_vlog_signed_leq(t7, 32, t4, 32, t6, 32);
    t9 = (t7 + 4);
    t16 = *((unsigned int *)t9);
    t19 = (~(t16));
    t22 = *((unsigned int *)t7);
    t23 = (t22 & t19);
    t26 = (t23 != 0);
    if (t26 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1720);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 30);
    xsi_set_current_line(47, ng0);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB34:    t2 = (t0 + 2040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t8 = *((char **)t5);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t8, 32, t5, 32);
    memset(t7, 0, 8);
    xsi_vlog_signed_leq(t7, 32, t4, 32, t6, 32);
    t9 = (t7 + 4);
    t16 = *((unsigned int *)t9);
    t19 = (~(t16));
    t22 = *((unsigned int *)t7);
    t23 = (t22 & t19);
    t26 = (t23 != 0);
    if (t26 > 0)
        goto LAB35;

LAB36:    goto LAB2;

LAB6:    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t4, t5, 0, *((unsigned int *)t7), t25);
    goto LAB7;

LAB9:    xsi_set_current_line(36, ng0);

LAB11:    xsi_set_current_line(37, ng0);
    t10 = ((char*)((ng4)));
    t11 = (t0 + 1880);
    t12 = (t0 + 1880);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = (t0 + 1880);
    t18 = (t15 + 64U);
    t29 = *((char **)t18);
    t30 = (t0 + 2040);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    xsi_vlog_generic_convert_array_indices(t27, t28, t14, t29, 2, 1, t32, 32, 1);
    t33 = (t27 + 4);
    t34 = *((unsigned int *)t33);
    t17 = (!(t34));
    t35 = (t28 + 4);
    t36 = *((unsigned int *)t35);
    t20 = (!(t36));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(38, ng0);
    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB14:    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t8 = *((char **)t5);
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t8, 32);
    t5 = (t6 + 4);
    t16 = *((unsigned int *)t5);
    t19 = (~(t16));
    t22 = *((unsigned int *)t6);
    t23 = (t22 & t19);
    t26 = (t23 != 0);
    if (t26 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 2040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t8 = (t0 + 2040);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 32);
    goto LAB8;

LAB12:    t37 = *((unsigned int *)t27);
    t38 = *((unsigned int *)t28);
    t24 = (t37 - t38);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t11, t10, 0, *((unsigned int *)t28), t25);
    goto LAB13;

LAB15:    xsi_set_current_line(39, ng0);

LAB17:    xsi_set_current_line(40, ng0);
    t9 = (t0 + 2200);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng1)));
    memset(t7, 0, 8);
    xsi_vlog_signed_equal(t7, 32, t11, 32, t12, 32);
    t13 = (t7 + 4);
    t34 = *((unsigned int *)t13);
    t36 = (~(t34));
    t37 = *((unsigned int *)t7);
    t38 = (t37 & t36);
    t39 = (t38 != 0);
    if (t39 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1880);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1880);
    t8 = (t5 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 1880);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = (t0 + 2040);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t18 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_signed_minus(t7, 32, t15, 32, t18, 32);
    xsi_vlog_generic_get_array_select_value(t6, 6, t4, t9, t12, 2, 1, t7, 32, 1);
    t29 = (t0 + 1880);
    t30 = (t29 + 72U);
    t31 = *((char **)t30);
    t32 = (t0 + 2200);
    t33 = (t32 + 56U);
    t35 = *((char **)t33);
    t40 = ((char*)((ng2)));
    memset(t28, 0, 8);
    xsi_vlog_signed_minus(t28, 32, t35, 32, t40, 32);
    xsi_vlog_generic_get_index_select_value(t27, 1, t6, t31, 2, t28, 32, 1);
    t41 = (t0 + 1880);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t45 = (t0 + 1880);
    t46 = (t45 + 72U);
    t47 = *((char **)t46);
    t48 = (t0 + 1880);
    t49 = (t48 + 64U);
    t50 = *((char **)t49);
    t51 = (t0 + 2040);
    t53 = (t51 + 56U);
    t54 = *((char **)t53);
    t55 = ((char*)((ng2)));
    memset(t52, 0, 8);
    xsi_vlog_signed_minus(t52, 32, t54, 32, t55, 32);
    xsi_vlog_generic_get_array_select_value(t44, 6, t43, t47, t50, 2, 1, t52, 32, 1);
    t56 = (t0 + 1880);
    t57 = (t56 + 72U);
    t58 = *((char **)t57);
    t59 = ((char*)((ng5)));
    xsi_vlog_generic_get_index_select_value(t60, 1, t44, t58, 2, t59, 32, 1);
    t61 = (t0 + 1880);
    t62 = (t61 + 56U);
    t63 = *((char **)t62);
    t64 = (t0 + 1880);
    t65 = (t64 + 72U);
    t66 = *((char **)t65);
    t71 = (t0 + 1880);
    t72 = (t71 + 64U);
    t73 = *((char **)t72);
    t81 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t67, 6, t63, t66, t73, 2, 1, t81, 32, 1);
    t82 = (t0 + 1880);
    t97 = (t82 + 72U);
    t100 = *((char **)t97);
    t101 = (t0 + 2200);
    t102 = (t101 + 56U);
    t103 = *((char **)t102);
    xsi_vlog_generic_get_index_select_value(t98, 1, t67, t100, 2, t103, 32, 1);
    t16 = *((unsigned int *)t60);
    t19 = *((unsigned int *)t98);
    t22 = (t16 & t19);
    *((unsigned int *)t99) = t22;
    t104 = (t60 + 4);
    t105 = (t98 + 4);
    t106 = (t99 + 4);
    t23 = *((unsigned int *)t104);
    t26 = *((unsigned int *)t105);
    t34 = (t23 | t26);
    *((unsigned int *)t106) = t34;
    t36 = *((unsigned int *)t106);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB26;

LAB27:
LAB28:    t87 = *((unsigned int *)t27);
    t88 = *((unsigned int *)t99);
    t89 = (t87 ^ t88);
    *((unsigned int *)t109) = t89;
    t110 = (t27 + 4);
    t111 = (t99 + 4);
    t112 = (t109 + 4);
    t90 = *((unsigned int *)t110);
    t91 = *((unsigned int *)t111);
    t92 = (t90 | t91);
    *((unsigned int *)t112) = t92;
    t93 = *((unsigned int *)t112);
    t94 = (t93 != 0);
    if (t94 == 1)
        goto LAB29;

LAB30:
LAB31:    t113 = (t0 + 1880);
    t114 = (t0 + 1880);
    t115 = (t114 + 72U);
    t116 = *((char **)t115);
    t118 = (t0 + 1880);
    t120 = (t118 + 64U);
    t129 = *((char **)t120);
    t130 = (t0 + 2040);
    t131 = (t130 + 56U);
    t132 = *((char **)t131);
    xsi_vlog_generic_convert_array_indices(t127, t128, t116, t129, 2, 1, t132, 32, 1);
    t134 = (t0 + 1880);
    t135 = (t134 + 72U);
    t136 = *((char **)t135);
    t137 = (t0 + 2200);
    t138 = (t137 + 56U);
    t139 = *((char **)t138);
    xsi_vlog_generic_convert_bit_index(t133, t136, 2, t139, 32, 1);
    t140 = (t127 + 4);
    t117 = *((unsigned int *)t140);
    t21 = (!(t117));
    t141 = (t128 + 4);
    t119 = *((unsigned int *)t141);
    t24 = (!(t119));
    t25 = (t21 && t24);
    t142 = (t133 + 4);
    t121 = *((unsigned int *)t142);
    t122 = (!(t121));
    t123 = (t25 && t122);
    if (t123 == 1)
        goto LAB32;

LAB33:
LAB20:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t8 = (t0 + 2200);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 32);
    goto LAB14;

LAB18:    xsi_set_current_line(41, ng0);
    t14 = (t0 + 1880);
    t15 = (t14 + 56U);
    t18 = *((char **)t15);
    t29 = (t0 + 1880);
    t30 = (t29 + 72U);
    t31 = *((char **)t30);
    t32 = (t0 + 1880);
    t33 = (t32 + 64U);
    t35 = *((char **)t33);
    t40 = (t0 + 2040);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    t43 = ((char*)((ng2)));
    memset(t28, 0, 8);
    xsi_vlog_signed_minus(t28, 32, t42, 32, t43, 32);
    xsi_vlog_generic_get_array_select_value(t27, 6, t18, t31, t35, 2, 1, t28, 32, 1);
    t45 = (t0 + 1880);
    t46 = (t45 + 72U);
    t47 = *((char **)t46);
    t48 = ((char*)((ng5)));
    xsi_vlog_generic_get_index_select_value(t44, 1, t27, t47, 2, t48, 32, 1);
    t49 = (t0 + 1880);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    t53 = (t0 + 1880);
    t54 = (t53 + 72U);
    t55 = *((char **)t54);
    t56 = (t0 + 1880);
    t57 = (t56 + 64U);
    t58 = *((char **)t57);
    t59 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t52, 6, t51, t55, t58, 2, 1, t59, 32, 1);
    t61 = (t0 + 1880);
    t62 = (t61 + 72U);
    t63 = *((char **)t62);
    t64 = (t0 + 2200);
    t65 = (t64 + 56U);
    t66 = *((char **)t65);
    xsi_vlog_generic_get_index_select_value(t60, 1, t52, t63, 2, t66, 32, 1);
    t68 = *((unsigned int *)t44);
    t69 = *((unsigned int *)t60);
    t70 = (t68 & t69);
    *((unsigned int *)t67) = t70;
    t71 = (t44 + 4);
    t72 = (t60 + 4);
    t73 = (t67 + 4);
    t74 = *((unsigned int *)t71);
    t75 = *((unsigned int *)t72);
    t76 = (t74 | t75);
    *((unsigned int *)t73) = t76;
    t77 = *((unsigned int *)t73);
    t78 = (t77 != 0);
    if (t78 == 1)
        goto LAB21;

LAB22:
LAB23:    t97 = (t0 + 1880);
    t100 = (t0 + 1880);
    t101 = (t100 + 72U);
    t102 = *((char **)t101);
    t103 = (t0 + 1880);
    t104 = (t103 + 64U);
    t105 = *((char **)t104);
    t106 = (t0 + 2040);
    t107 = (t106 + 56U);
    t108 = *((char **)t107);
    xsi_vlog_generic_convert_array_indices(t98, t99, t102, t105, 2, 1, t108, 32, 1);
    t110 = (t0 + 1880);
    t111 = (t110 + 72U);
    t112 = *((char **)t111);
    t113 = (t0 + 2200);
    t114 = (t113 + 56U);
    t115 = *((char **)t114);
    xsi_vlog_generic_convert_bit_index(t109, t112, 2, t115, 32, 1);
    t116 = (t98 + 4);
    t117 = *((unsigned int *)t116);
    t21 = (!(t117));
    t118 = (t99 + 4);
    t119 = *((unsigned int *)t118);
    t24 = (!(t119));
    t25 = (t21 && t24);
    t120 = (t109 + 4);
    t121 = *((unsigned int *)t120);
    t122 = (!(t121));
    t123 = (t25 && t122);
    if (t123 == 1)
        goto LAB24;

LAB25:    goto LAB20;

LAB21:    t79 = *((unsigned int *)t67);
    t80 = *((unsigned int *)t73);
    *((unsigned int *)t67) = (t79 | t80);
    t81 = (t44 + 4);
    t82 = (t60 + 4);
    t83 = *((unsigned int *)t44);
    t84 = (~(t83));
    t85 = *((unsigned int *)t81);
    t86 = (~(t85));
    t87 = *((unsigned int *)t60);
    t88 = (~(t87));
    t89 = *((unsigned int *)t82);
    t90 = (~(t89));
    t17 = (t84 & t86);
    t20 = (t88 & t90);
    t91 = (~(t17));
    t92 = (~(t20));
    t93 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t93 & t91);
    t94 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t94 & t92);
    t95 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t95 & t91);
    t96 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t96 & t92);
    goto LAB23;

LAB24:    t124 = *((unsigned int *)t99);
    t125 = *((unsigned int *)t109);
    t126 = (t124 + t125);
    xsi_vlogvar_assign_value(t97, t67, 0, t126, 1);
    goto LAB25;

LAB26:    t38 = *((unsigned int *)t99);
    t39 = *((unsigned int *)t106);
    *((unsigned int *)t99) = (t38 | t39);
    t107 = (t60 + 4);
    t108 = (t98 + 4);
    t68 = *((unsigned int *)t60);
    t69 = (~(t68));
    t70 = *((unsigned int *)t107);
    t74 = (~(t70));
    t75 = *((unsigned int *)t98);
    t76 = (~(t75));
    t77 = *((unsigned int *)t108);
    t78 = (~(t77));
    t17 = (t69 & t74);
    t20 = (t76 & t78);
    t79 = (~(t17));
    t80 = (~(t20));
    t83 = *((unsigned int *)t106);
    *((unsigned int *)t106) = (t83 & t79);
    t84 = *((unsigned int *)t106);
    *((unsigned int *)t106) = (t84 & t80);
    t85 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t85 & t79);
    t86 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t86 & t80);
    goto LAB28;

LAB29:    t95 = *((unsigned int *)t109);
    t96 = *((unsigned int *)t112);
    *((unsigned int *)t109) = (t95 | t96);
    goto LAB31;

LAB32:    t124 = *((unsigned int *)t128);
    t125 = *((unsigned int *)t133);
    t126 = (t124 + t125);
    xsi_vlogvar_assign_value(t113, t109, 0, t126, 1);
    goto LAB33;

LAB35:    xsi_set_current_line(48, ng0);

LAB37:    xsi_set_current_line(49, ng0);
    xsi_set_current_line(49, ng0);
    t10 = ((char*)((ng1)));
    t11 = (t0 + 2200);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 32);

LAB38:    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t8 = *((char **)t5);
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t8, 32);
    t5 = (t6 + 4);
    t16 = *((unsigned int *)t5);
    t19 = (~(t16));
    t22 = *((unsigned int *)t6);
    t23 = (t22 & t19);
    t26 = (t23 != 0);
    if (t26 > 0)
        goto LAB39;

LAB40:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 2040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t8 = (t0 + 2040);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 32);
    goto LAB34;

LAB39:    xsi_set_current_line(50, ng0);

LAB41:    xsi_set_current_line(51, ng0);
    t9 = (t0 + 1880);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 1880);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = (t0 + 1880);
    t18 = (t15 + 64U);
    t29 = *((char **)t18);
    t30 = (t0 + 2040);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    xsi_vlog_generic_get_array_select_value(t7, 6, t11, t14, t29, 2, 1, t32, 32, 1);
    t33 = (t0 + 1880);
    t35 = (t33 + 72U);
    t40 = *((char **)t35);
    t41 = (t0 + 2200);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    xsi_vlog_generic_get_index_select_value(t27, 1, t7, t40, 2, t43, 32, 1);
    t45 = (t0 + 1720);
    t46 = (t0 + 1720);
    t47 = (t46 + 72U);
    t48 = *((char **)t47);
    t49 = (t0 + 2040);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    t53 = (t0 + 472);
    t54 = *((char **)t53);
    memset(t44, 0, 8);
    xsi_vlog_signed_multiply(t44, 32, t51, 32, t54, 32);
    t53 = (t0 + 2200);
    t55 = (t53 + 56U);
    t56 = *((char **)t55);
    memset(t52, 0, 8);
    xsi_vlog_signed_add(t52, 32, t44, 32, t56, 32);
    xsi_vlog_generic_convert_bit_index(t28, t48, 2, t52, 32, 1);
    t57 = (t28 + 4);
    t34 = *((unsigned int *)t57);
    t17 = (!(t34));
    if (t17 == 1)
        goto LAB42;

LAB43:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t8 = (t0 + 2200);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 32);
    goto LAB38;

LAB42:    xsi_vlogvar_assign_value(t45, t27, 0, *((unsigned int *)t28), 1);
    goto LAB43;

}


extern void work_m_00000000001618296233_0500395880_init()
{
	static char *pe[] = {(void *)Always_30_0};
	xsi_register_didat("work_m_00000000001618296233_0500395880", "isim/tb_GF_mod2_using_matrix_isim_beh.exe.sim/work/m_00000000001618296233_0500395880.didat");
	xsi_register_executes(pe);
}
