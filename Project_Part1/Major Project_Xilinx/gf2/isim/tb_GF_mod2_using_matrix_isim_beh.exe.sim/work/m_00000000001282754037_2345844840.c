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
static const char *ng0 = "C:/Users/B200875/Desktop/Major Project/gf2/GF_mod2_using_matrix.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {0, 0};
static int ng4[] = {1, 0};



static int sp_make_trinomial(char *t1, char *t2)
{
    char t5[8];
    char t13[8];
    char t27[8];
    char t28[8];
    char t36[8];
    char t75[8];
    int t0;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    int t12;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    unsigned int t83;
    int t84;

LAB0:    t0 = 1;
    xsi_set_current_line(43, ng0);

LAB2:    xsi_set_current_line(44, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t1 + 2952);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    xsi_set_current_line(45, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t1 + 2952);
    t6 = (t1 + 2952);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t5, t8, 2, t9, 32, 1);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB3;

LAB4:    xsi_set_current_line(46, ng0);
    t3 = (t1 + 3272);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t7 = ((char*)((ng4)));
    memset(t5, 0, 8);
    xsi_vlog_signed_greatereq(t5, 32, t6, 32, t7, 32);
    memset(t13, 0, 8);
    t8 = (t5 + 4);
    t11 = *((unsigned int *)t8);
    t14 = (~(t11));
    t15 = *((unsigned int *)t5);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB5;

LAB6:    if (*((unsigned int *)t8) != 0)
        goto LAB7;

LAB8:    t10 = (t13 + 4);
    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t10);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB9;

LAB10:    memcpy(t36, t13, 8);

LAB11:    t67 = (t36 + 4);
    t68 = *((unsigned int *)t67);
    t69 = (~(t68));
    t70 = *((unsigned int *)t36);
    t71 = (t70 & t69);
    t72 = (t71 != 0);
    if (t72 > 0)
        goto LAB19;

LAB20:
LAB21:    t0 = 0;

LAB1:    return t0;
LAB3:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t5), 1);
    goto LAB4;

LAB5:    *((unsigned int *)t13) = 1;
    goto LAB8;

LAB7:    t9 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB8;

LAB9:    t21 = (t1 + 3272);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t1 + 3112);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memset(t27, 0, 8);
    xsi_vlog_signed_less(t27, 32, t23, 32, t26, 32);
    memset(t28, 0, 8);
    t29 = (t27 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t27);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t29) != 0)
        goto LAB14;

LAB15:    t37 = *((unsigned int *)t13);
    t38 = *((unsigned int *)t28);
    t39 = (t37 & t38);
    *((unsigned int *)t36) = t39;
    t40 = (t13 + 4);
    t41 = (t28 + 4);
    t42 = (t36 + 4);
    t43 = *((unsigned int *)t40);
    t44 = *((unsigned int *)t41);
    t45 = (t43 | t44);
    *((unsigned int *)t42) = t45;
    t46 = *((unsigned int *)t42);
    t47 = (t46 != 0);
    if (t47 == 1)
        goto LAB16;

LAB17:
LAB18:    goto LAB11;

LAB12:    *((unsigned int *)t28) = 1;
    goto LAB15;

LAB14:    t35 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB15;

LAB16:    t48 = *((unsigned int *)t36);
    t49 = *((unsigned int *)t42);
    *((unsigned int *)t36) = (t48 | t49);
    t50 = (t13 + 4);
    t51 = (t28 + 4);
    t52 = *((unsigned int *)t13);
    t53 = (~(t52));
    t54 = *((unsigned int *)t50);
    t55 = (~(t54));
    t56 = *((unsigned int *)t28);
    t57 = (~(t56));
    t58 = *((unsigned int *)t51);
    t59 = (~(t58));
    t12 = (t53 & t55);
    t60 = (t57 & t59);
    t61 = (~(t12));
    t62 = (~(t60));
    t63 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t63 & t61);
    t64 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t64 & t62);
    t65 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t65 & t61);
    t66 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t66 & t62);
    goto LAB18;

LAB19:    xsi_set_current_line(47, ng0);
    t73 = ((char*)((ng2)));
    t74 = (t1 + 2952);
    t76 = (t1 + 2952);
    t77 = (t76 + 72U);
    t78 = *((char **)t77);
    t79 = (t1 + 3272);
    t80 = (t79 + 56U);
    t81 = *((char **)t80);
    xsi_vlog_generic_convert_bit_index(t75, t78, 2, t81, 32, 1);
    t82 = (t75 + 4);
    t83 = *((unsigned int *)t82);
    t84 = (!(t83));
    if (t84 == 1)
        goto LAB22;

LAB23:    goto LAB21;

LAB22:    xsi_vlogvar_assign_value(t74, t73, 0, *((unsigned int *)t75), 1);
    goto LAB23;

}

static void Cont_38_0(char *t0)
{
    char t21[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;

LAB0:    t1 = (t0 + 4192U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 472);
    t3 = *((char **)t2);
    t2 = (t0 + 608);
    t4 = *((char **)t2);
    t2 = (t0 + 4000);
    t5 = (t0 + 1120);
    t6 = xsi_create_subprogram_invocation(t2, 0, t0, t5, 0, 0);
    t7 = (t0 + 3112);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 32);
    t8 = (t0 + 3272);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 32);

LAB4:    t9 = (t0 + 4096);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);
    if (t17 != 0)
        goto LAB6;

LAB5:    t10 = (t0 + 4096);
    t18 = *((char **)t10);
    t10 = (t0 + 2952);
    t19 = (t10 + 56U);
    t20 = *((char **)t19);
    memcpy(t21, t20, 8);
    t22 = (t0 + 1120);
    t23 = (t0 + 4000);
    t24 = 0;
    xsi_delete_subprogram_invocation(t22, t18, t0, t23, t24);
    t25 = (t0 + 4576);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memset(t29, 0, 8);
    t30 = 63U;
    t31 = t30;
    t32 = (t21 + 4);
    t33 = *((unsigned int *)t21);
    t30 = (t30 & t33);
    t34 = *((unsigned int *)t32);
    t31 = (t31 & t34);
    t35 = (t29 + 4);
    t36 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t36 | t30);
    t37 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t37 | t31);
    xsi_driver_vfirst_trans(t25, 0, 5);

LAB1:    return;
LAB6:    t9 = (t0 + 4192U);
    *((char **)t9) = &&LAB4;
    goto LAB1;

}


extern void work_m_00000000001282754037_2345844840_init()
{
	static char *pe[] = {(void *)Cont_38_0};
	static char *se[] = {(void *)sp_make_trinomial};
	xsi_register_didat("work_m_00000000001282754037_2345844840", "isim/tb_GF_mod2_using_matrix_isim_beh.exe.sim/work/m_00000000001282754037_2345844840.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
