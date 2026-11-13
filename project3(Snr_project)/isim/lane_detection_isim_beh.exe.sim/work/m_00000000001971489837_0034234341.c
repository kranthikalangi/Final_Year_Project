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
static const char *ng0 = "C:/Users/ACER/Desktop/GATE/majorproject1/mp1.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {2, 0};
static int ng3[] = {5, 0};
static int ng4[] = {1, 0};
static int ng5[] = {8, 0};
static int ng6[] = {0, 0};
static int ng7[] = {3, 0};
static int ng8[] = {6, 0};
static int ng9[] = {7, 0};



static void Always_79_0(char *t0)
{
    char t13[8];
    char t21[8];
    char t30[8];
    char t31[8];
    char t35[8];
    char t43[8];
    char t47[8];
    char t55[8];
    char t59[8];
    char t68[8];
    char t69[8];
    char t73[8];
    char t81[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
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
    char *t32;
    char *t33;
    char *t34;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t44;
    char *t45;
    char *t46;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t56;
    char *t57;
    char *t58;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t70;
    char *t71;
    char *t72;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t82;

LAB0:    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 3328);
    *((int *)t2) = 1;
    t3 = (t0 + 3040);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(79, ng0);

LAB5:    xsi_set_current_line(80, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(83, ng0);

LAB10:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2088);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t14 = (t0 + 2088);
    t15 = (t14 + 64U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t13, 16, t4, t12, t16, 2, 1, t17, 32, 1);
    t18 = (t0 + 2088);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t22 = (t0 + 2088);
    t23 = (t22 + 72U);
    t24 = *((char **)t23);
    t25 = (t0 + 2088);
    t26 = (t25 + 64U);
    t27 = *((char **)t26);
    t28 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t21, 16, t20, t24, t27, 2, 1, t28, 32, 1);
    t29 = ((char*)((ng4)));
    memset(t30, 0, 8);
    xsi_vlog_unsigned_lshift(t30, 16, t21, 16, t29, 32);
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 16, t13, 16, t30, 16);
    t32 = (t0 + 2088);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t36 = (t0 + 2088);
    t37 = (t36 + 72U);
    t38 = *((char **)t37);
    t39 = (t0 + 2088);
    t40 = (t39 + 64U);
    t41 = *((char **)t40);
    t42 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t35, 16, t34, t38, t41, 2, 1, t42, 32, 1);
    memset(t43, 0, 8);
    xsi_vlog_unsigned_add(t43, 16, t31, 16, t35, 16);
    t44 = (t0 + 2088);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    t48 = (t0 + 2088);
    t49 = (t48 + 72U);
    t50 = *((char **)t49);
    t51 = (t0 + 2088);
    t52 = (t51 + 64U);
    t53 = *((char **)t52);
    t54 = ((char*)((ng6)));
    xsi_vlog_generic_get_array_select_value(t47, 16, t46, t50, t53, 2, 1, t54, 32, 1);
    memset(t55, 0, 8);
    xsi_vlog_unsigned_minus(t55, 16, t43, 16, t47, 16);
    t56 = (t0 + 2088);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    t60 = (t0 + 2088);
    t61 = (t60 + 72U);
    t62 = *((char **)t61);
    t63 = (t0 + 2088);
    t64 = (t63 + 64U);
    t65 = *((char **)t64);
    t66 = ((char*)((ng7)));
    xsi_vlog_generic_get_array_select_value(t59, 16, t58, t62, t65, 2, 1, t66, 32, 1);
    t67 = ((char*)((ng4)));
    memset(t68, 0, 8);
    xsi_vlog_unsigned_lshift(t68, 16, t59, 16, t67, 32);
    memset(t69, 0, 8);
    xsi_vlog_unsigned_minus(t69, 16, t55, 16, t68, 16);
    t70 = (t0 + 2088);
    t71 = (t70 + 56U);
    t72 = *((char **)t71);
    t74 = (t0 + 2088);
    t75 = (t74 + 72U);
    t76 = *((char **)t75);
    t77 = (t0 + 2088);
    t78 = (t77 + 64U);
    t79 = *((char **)t78);
    t80 = ((char*)((ng8)));
    xsi_vlog_generic_get_array_select_value(t73, 16, t72, t76, t79, 2, 1, t80, 32, 1);
    memset(t81, 0, 8);
    xsi_vlog_unsigned_minus(t81, 16, t69, 16, t73, 16);
    t82 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t82, t81, 0, 0, 16, 0LL);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2088);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t14 = (t0 + 2088);
    t15 = (t14 + 64U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng6)));
    xsi_vlog_generic_get_array_select_value(t13, 16, t4, t12, t16, 2, 1, t17, 32, 1);
    t18 = (t0 + 2088);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t22 = (t0 + 2088);
    t23 = (t22 + 72U);
    t24 = *((char **)t23);
    t25 = (t0 + 2088);
    t26 = (t25 + 64U);
    t27 = *((char **)t26);
    t28 = ((char*)((ng4)));
    xsi_vlog_generic_get_array_select_value(t21, 16, t20, t24, t27, 2, 1, t28, 32, 1);
    t29 = ((char*)((ng4)));
    memset(t30, 0, 8);
    xsi_vlog_unsigned_lshift(t30, 16, t21, 16, t29, 32);
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 16, t13, 16, t30, 16);
    t32 = (t0 + 2088);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t36 = (t0 + 2088);
    t37 = (t36 + 72U);
    t38 = *((char **)t37);
    t39 = (t0 + 2088);
    t40 = (t39 + 64U);
    t41 = *((char **)t40);
    t42 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t35, 16, t34, t38, t41, 2, 1, t42, 32, 1);
    memset(t43, 0, 8);
    xsi_vlog_unsigned_add(t43, 16, t31, 16, t35, 16);
    t44 = (t0 + 2088);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    t48 = (t0 + 2088);
    t49 = (t48 + 72U);
    t50 = *((char **)t49);
    t51 = (t0 + 2088);
    t52 = (t51 + 64U);
    t53 = *((char **)t52);
    t54 = ((char*)((ng8)));
    xsi_vlog_generic_get_array_select_value(t47, 16, t46, t50, t53, 2, 1, t54, 32, 1);
    memset(t55, 0, 8);
    xsi_vlog_unsigned_minus(t55, 16, t43, 16, t47, 16);
    t56 = (t0 + 2088);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    t60 = (t0 + 2088);
    t61 = (t60 + 72U);
    t62 = *((char **)t61);
    t63 = (t0 + 2088);
    t64 = (t63 + 64U);
    t65 = *((char **)t64);
    t66 = ((char*)((ng9)));
    xsi_vlog_generic_get_array_select_value(t59, 16, t58, t62, t65, 2, 1, t66, 32, 1);
    t67 = ((char*)((ng4)));
    memset(t68, 0, 8);
    xsi_vlog_unsigned_lshift(t68, 16, t59, 16, t67, 32);
    memset(t69, 0, 8);
    xsi_vlog_unsigned_minus(t69, 16, t55, 16, t68, 16);
    t70 = (t0 + 2088);
    t71 = (t70 + 56U);
    t72 = *((char **)t71);
    t74 = (t0 + 2088);
    t75 = (t74 + 72U);
    t76 = *((char **)t75);
    t77 = (t0 + 2088);
    t78 = (t77 + 64U);
    t79 = *((char **)t78);
    t80 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t73, 16, t72, t76, t79, 2, 1, t80, 32, 1);
    memset(t81, 0, 8);
    xsi_vlog_unsigned_minus(t81, 16, t69, 16, t73, 16);
    t82 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t82, t81, 0, 0, 16, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(80, ng0);

LAB9:    xsi_set_current_line(81, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 16, 0LL);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    goto LAB8;

}


extern void work_m_00000000001971489837_0034234341_init()
{
	static char *pe[] = {(void *)Always_79_0};
	xsi_register_didat("work_m_00000000001971489837_0034234341", "isim/lane_detection_isim_beh.exe.sim/work/m_00000000001971489837_0034234341.didat");
	xsi_register_executes(pe);
}
