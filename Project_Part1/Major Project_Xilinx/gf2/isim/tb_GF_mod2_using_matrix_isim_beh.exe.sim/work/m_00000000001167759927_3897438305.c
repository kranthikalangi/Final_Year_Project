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
static const char *ng0 = "C:/Users/B200875/Desktop/Major Project/gf2/gf2m_reduce.v";
static int ng1[] = {0, 0};
static int ng2[] = {2, 0};
static int ng3[] = {1, 0};



static void Always_38_0(char *t0)
{
    char t7[8];
    char t8[8];
    char t23[8];
    char t26[8];
    char t28[8];
    char t29[8];
    char t39[8];
    char t80[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    char *t27;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    int t48;
    char *t49;
    unsigned int t50;
    int t51;
    int t52;
    char *t53;
    unsigned int t54;
    int t55;
    int t56;
    unsigned int t57;
    unsigned int t58;
    int t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    unsigned int t88;

LAB0:    t1 = (t0 + 3440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 3760);
    *((int *)t2) = 1;
    t3 = (t0 + 3472);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(39, ng0);

LAB5:    xsi_set_current_line(40, ng0);
    xsi_set_current_line(40, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2040);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB6:    t2 = (t0 + 2040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t6 = *((char **)t5);
    t5 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_signed_minus(t7, 32, t6, 32, t5, 32);
    memset(t8, 0, 8);
    xsi_vlog_signed_leq(t8, 32, t4, 32, t7, 32);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(44, ng0);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB14:    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    xsi_vlog_signed_less(t7, 32, t4, 32, t6, 32);
    t5 = (t7 + 4);
    t10 = *((unsigned int *)t5);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(47, ng0);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB19:    t2 = (t0 + 2040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t6 = *((char **)t5);
    t5 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_signed_minus(t7, 32, t6, 32, t5, 32);
    memset(t8, 0, 8);
    xsi_vlog_signed_leq(t8, 32, t4, 32, t7, 32);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB20;

LAB21:    goto LAB2;

LAB7:    xsi_set_current_line(41, ng0);
    xsi_set_current_line(41, ng0);
    t15 = ((char*)((ng1)));
    t16 = (t0 + 2200);
    xsi_vlogvar_assign_value(t16, t15, 0, 0, 32);

LAB9:    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    xsi_vlog_signed_less(t7, 32, t4, 32, t6, 32);
    t5 = (t7 + 4);
    t10 = *((unsigned int *)t5);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 2040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t4, 32, t5, 32);
    t6 = (t0 + 2040);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 32);
    goto LAB6;

LAB10:    xsi_set_current_line(42, ng0);
    t9 = (t0 + 1480U);
    t15 = *((char **)t9);
    t9 = (t0 + 1440U);
    t16 = (t9 + 72U);
    t17 = *((char **)t16);
    t18 = (t0 + 2040);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t0 + 472);
    t22 = *((char **)t21);
    memset(t23, 0, 8);
    xsi_vlog_signed_multiply(t23, 32, t20, 32, t22, 32);
    t21 = (t0 + 2200);
    t24 = (t21 + 56U);
    t25 = *((char **)t24);
    memset(t26, 0, 8);
    xsi_vlog_signed_add(t26, 32, t23, 32, t25, 32);
    xsi_vlog_generic_get_index_select_value(t8, 1, t15, t17, 2, t26, 32, 1);
    t27 = (t0 + 2360);
    t30 = (t0 + 2360);
    t31 = (t30 + 72U);
    t32 = *((char **)t31);
    t33 = (t0 + 2360);
    t34 = (t33 + 64U);
    t35 = *((char **)t34);
    t36 = (t0 + 2040);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    xsi_vlog_generic_convert_array_indices(t28, t29, t32, t35, 2, 1, t38, 32, 1);
    t40 = (t0 + 2360);
    t41 = (t40 + 72U);
    t42 = *((char **)t41);
    t43 = (t0 + 2200);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    xsi_vlog_generic_convert_bit_index(t39, t42, 2, t45, 32, 1);
    t46 = (t28 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (!(t47));
    t49 = (t29 + 4);
    t50 = *((unsigned int *)t49);
    t51 = (!(t50));
    t52 = (t48 && t51);
    t53 = (t39 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (!(t54));
    t56 = (t52 && t55);
    if (t56 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t4, 32, t5, 32);
    t6 = (t0 + 2200);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 32);
    goto LAB9;

LAB12:    t57 = *((unsigned int *)t29);
    t58 = *((unsigned int *)t39);
    t59 = (t57 + t58);
    xsi_vlogvar_assign_value(t27, t8, 0, t59, 1);
    goto LAB13;

LAB15:    xsi_set_current_line(45, ng0);
    t9 = (t0 + 1320U);
    t15 = *((char **)t9);
    t9 = (t0 + 1280U);
    t16 = (t9 + 72U);
    t17 = *((char **)t16);
    t18 = (t0 + 2200);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    xsi_vlog_generic_get_index_select_value(t8, 1, t15, t17, 2, t20, 32, 1);
    t21 = (t0 + 1880);
    t22 = (t0 + 1880);
    t24 = (t22 + 72U);
    t25 = *((char **)t24);
    t27 = (t0 + 2200);
    t30 = (t27 + 56U);
    t31 = *((char **)t30);
    xsi_vlog_generic_convert_bit_index(t23, t25, 2, t31, 32, 1);
    t32 = (t23 + 4);
    t47 = *((unsigned int *)t32);
    t48 = (!(t47));
    if (t48 == 1)
        goto LAB17;

LAB18:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t4, 32, t5, 32);
    t6 = (t0 + 2200);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 32);
    goto LAB14;

LAB17:    xsi_vlogvar_assign_value(t21, t8, 0, *((unsigned int *)t23), 1);
    goto LAB18;

LAB20:    xsi_set_current_line(48, ng0);

LAB22:    xsi_set_current_line(49, ng0);
    xsi_set_current_line(49, ng0);
    t15 = ((char*)((ng1)));
    t16 = (t0 + 2200);
    xsi_vlogvar_assign_value(t16, t15, 0, 0, 32);

LAB23:    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    xsi_vlog_signed_less(t7, 32, t4, 32, t6, 32);
    t5 = (t7 + 4);
    t10 = *((unsigned int *)t5);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 2040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t4, 32, t5, 32);
    t6 = (t0 + 2040);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 32);
    goto LAB19;

LAB24:    xsi_set_current_line(50, ng0);

LAB26:    xsi_set_current_line(51, ng0);
    t9 = (t0 + 2360);
    t15 = (t9 + 56U);
    t16 = *((char **)t15);
    t17 = (t0 + 2360);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 2360);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t24 = (t0 + 2040);
    t25 = (t24 + 56U);
    t27 = *((char **)t25);
    xsi_vlog_generic_get_array_select_value(t8, 6, t16, t19, t22, 2, 1, t27, 32, 1);
    t30 = (t0 + 2360);
    t31 = (t30 + 72U);
    t32 = *((char **)t31);
    t33 = (t0 + 2200);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    xsi_vlog_generic_get_index_select_value(t23, 1, t8, t32, 2, t35, 32, 1);
    t36 = (t23 + 4);
    t47 = *((unsigned int *)t36);
    t50 = (~(t47));
    t54 = *((unsigned int *)t23);
    t57 = (t54 & t50);
    t58 = (t57 != 0);
    if (t58 > 0)
        goto LAB27;

LAB28:
LAB29:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t4, 32, t5, 32);
    t6 = (t0 + 2200);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 32);
    goto LAB23;

LAB27:    xsi_set_current_line(52, ng0);
    t37 = (t0 + 1880);
    t38 = (t37 + 56U);
    t40 = *((char **)t38);
    t41 = (t0 + 1880);
    t42 = (t41 + 72U);
    t43 = *((char **)t42);
    t44 = (t0 + 2200);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    xsi_vlog_generic_get_index_select_value(t26, 1, t40, t43, 2, t46, 32, 1);
    t49 = (t0 + 1320U);
    t53 = *((char **)t49);
    t49 = (t0 + 1280U);
    t60 = (t49 + 72U);
    t61 = *((char **)t60);
    t62 = (t0 + 472);
    t63 = *((char **)t62);
    t62 = (t0 + 2040);
    t64 = (t62 + 56U);
    t65 = *((char **)t64);
    memset(t29, 0, 8);
    xsi_vlog_signed_add(t29, 32, t63, 32, t65, 32);
    xsi_vlog_generic_get_index_select_value(t28, 1, t53, t61, 2, t29, 32, 1);
    t66 = *((unsigned int *)t26);
    t67 = *((unsigned int *)t28);
    t68 = (t66 ^ t67);
    *((unsigned int *)t39) = t68;
    t69 = (t26 + 4);
    t70 = (t28 + 4);
    t71 = (t39 + 4);
    t72 = *((unsigned int *)t69);
    t73 = *((unsigned int *)t70);
    t74 = (t72 | t73);
    *((unsigned int *)t71) = t74;
    t75 = *((unsigned int *)t71);
    t76 = (t75 != 0);
    if (t76 == 1)
        goto LAB30;

LAB31:
LAB32:    t79 = (t0 + 1880);
    t81 = (t0 + 1880);
    t82 = (t81 + 72U);
    t83 = *((char **)t82);
    t84 = (t0 + 2200);
    t85 = (t84 + 56U);
    t86 = *((char **)t85);
    xsi_vlog_generic_convert_bit_index(t80, t83, 2, t86, 32, 1);
    t87 = (t80 + 4);
    t88 = *((unsigned int *)t87);
    t48 = (!(t88));
    if (t48 == 1)
        goto LAB33;

LAB34:    goto LAB29;

LAB30:    t77 = *((unsigned int *)t39);
    t78 = *((unsigned int *)t71);
    *((unsigned int *)t39) = (t77 | t78);
    goto LAB32;

LAB33:    xsi_vlogvar_assign_value(t79, t39, 0, *((unsigned int *)t80), 1);
    goto LAB34;

}


extern void work_m_00000000001167759927_3897438305_init()
{
	static char *pe[] = {(void *)Always_38_0};
	xsi_register_didat("work_m_00000000001167759927_3897438305", "isim/tb_GF_mod2_using_matrix_isim_beh.exe.sim/work/m_00000000001167759927_3897438305.didat");
	xsi_register_executes(pe);
}
