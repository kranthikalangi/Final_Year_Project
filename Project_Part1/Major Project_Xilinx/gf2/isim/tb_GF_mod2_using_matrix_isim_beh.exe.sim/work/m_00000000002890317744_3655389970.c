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
static const char *ng0 = "C:/Users/B200875/Desktop/Major Project/gf2/poly_mul.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};



static void Always_28_0(char *t0)
{
    char t7[8];
    char t16[8];
    char t26[8];
    char t29[8];
    char t37[8];
    char t43[8];
    char t75[8];
    char t90[8];
    char t100[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    int t67;
    int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    char *t96;
    char *t97;
    char *t98;
    char *t99;
    char *t101;
    unsigned int t102;
    int t103;

LAB0:    t1 = (t0 + 3280U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 3848);
    *((int *)t2) = 1;
    t3 = (t0 + 3312);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(28, ng0);

LAB5:    xsi_set_current_line(29, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2040);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 11);
    xsi_set_current_line(30, ng0);
    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB6:    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    xsi_vlog_signed_less(t7, 32, t4, 32, t6, 32);
    t5 = (t7 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB7;

LAB8:    goto LAB2;

LAB7:    xsi_set_current_line(30, ng0);

LAB9:    xsi_set_current_line(31, ng0);
    xsi_set_current_line(31, ng0);
    t13 = ((char*)((ng1)));
    t14 = (t0 + 2360);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 32);

LAB10:    t2 = (t0 + 2360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    xsi_vlog_signed_less(t7, 32, t4, 32, t6, 32);
    t5 = (t7 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t4, 32, t5, 32);
    t6 = (t0 + 2200);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 32);
    goto LAB6;

LAB11:    xsi_set_current_line(31, ng0);

LAB13:    xsi_set_current_line(32, ng0);
    t13 = (t0 + 2040);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t17 = (t0 + 2040);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 2200);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t0 + 2360);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memset(t26, 0, 8);
    xsi_vlog_signed_add(t26, 32, t22, 32, t25, 32);
    xsi_vlog_generic_get_index_select_value(t16, 1, t15, t19, 2, t26, 32, 1);
    t27 = (t0 + 1320U);
    t28 = *((char **)t27);
    t27 = (t0 + 1280U);
    t30 = (t27 + 72U);
    t31 = *((char **)t30);
    t32 = (t0 + 2200);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    xsi_vlog_generic_get_index_select_value(t29, 1, t28, t31, 2, t34, 32, 1);
    t35 = (t0 + 1480U);
    t36 = *((char **)t35);
    t35 = (t0 + 1440U);
    t38 = (t35 + 72U);
    t39 = *((char **)t38);
    t40 = (t0 + 2360);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    xsi_vlog_generic_get_index_select_value(t37, 1, t36, t39, 2, t42, 32, 1);
    t44 = *((unsigned int *)t29);
    t45 = *((unsigned int *)t37);
    t46 = (t44 & t45);
    *((unsigned int *)t43) = t46;
    t47 = (t29 + 4);
    t48 = (t37 + 4);
    t49 = (t43 + 4);
    t50 = *((unsigned int *)t47);
    t51 = *((unsigned int *)t48);
    t52 = (t50 | t51);
    *((unsigned int *)t49) = t52;
    t53 = *((unsigned int *)t49);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB14;

LAB15:
LAB16:    t76 = *((unsigned int *)t16);
    t77 = *((unsigned int *)t43);
    t78 = (t76 ^ t77);
    *((unsigned int *)t75) = t78;
    t79 = (t16 + 4);
    t80 = (t43 + 4);
    t81 = (t75 + 4);
    t82 = *((unsigned int *)t79);
    t83 = *((unsigned int *)t80);
    t84 = (t82 | t83);
    *((unsigned int *)t81) = t84;
    t85 = *((unsigned int *)t81);
    t86 = (t85 != 0);
    if (t86 == 1)
        goto LAB17;

LAB18:
LAB19:    t89 = (t0 + 2040);
    t91 = (t0 + 2040);
    t92 = (t91 + 72U);
    t93 = *((char **)t92);
    t94 = (t0 + 2200);
    t95 = (t94 + 56U);
    t96 = *((char **)t95);
    t97 = (t0 + 2360);
    t98 = (t97 + 56U);
    t99 = *((char **)t98);
    memset(t100, 0, 8);
    xsi_vlog_signed_add(t100, 32, t96, 32, t99, 32);
    xsi_vlog_generic_convert_bit_index(t90, t93, 2, t100, 32, 1);
    t101 = (t90 + 4);
    t102 = *((unsigned int *)t101);
    t103 = (!(t102));
    if (t103 == 1)
        goto LAB20;

LAB21:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 2360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t4, 32, t5, 32);
    t6 = (t0 + 2360);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 32);
    goto LAB10;

LAB14:    t55 = *((unsigned int *)t43);
    t56 = *((unsigned int *)t49);
    *((unsigned int *)t43) = (t55 | t56);
    t57 = (t29 + 4);
    t58 = (t37 + 4);
    t59 = *((unsigned int *)t29);
    t60 = (~(t59));
    t61 = *((unsigned int *)t57);
    t62 = (~(t61));
    t63 = *((unsigned int *)t37);
    t64 = (~(t63));
    t65 = *((unsigned int *)t58);
    t66 = (~(t65));
    t67 = (t60 & t62);
    t68 = (t64 & t66);
    t69 = (~(t67));
    t70 = (~(t68));
    t71 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t71 & t69);
    t72 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t72 & t70);
    t73 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t73 & t69);
    t74 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t74 & t70);
    goto LAB16;

LAB17:    t87 = *((unsigned int *)t75);
    t88 = *((unsigned int *)t81);
    *((unsigned int *)t75) = (t87 | t88);
    goto LAB19;

LAB20:    xsi_vlogvar_assign_value(t89, t75, 0, *((unsigned int *)t90), 1);
    goto LAB21;

}

static void Cont_36_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 3528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 2040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3944);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 2047U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 10);
    t18 = (t0 + 3864);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000002890317744_3655389970_init()
{
	static char *pe[] = {(void *)Always_28_0,(void *)Cont_36_1};
	xsi_register_didat("work_m_00000000002890317744_3655389970", "isim/tb_GF_mod2_using_matrix_isim_beh.exe.sim/work/m_00000000002890317744_3655389970.didat");
	xsi_register_executes(pe);
}
