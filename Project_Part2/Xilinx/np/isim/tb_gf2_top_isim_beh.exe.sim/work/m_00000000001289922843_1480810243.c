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
static const char *ng0 = "C:/Users/RGUKT/Desktop/kranthi/np/gf2_top.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {3, 0};



static void Always_166_0(char *t0)
{
    char t7[8];
    char t8[8];
    char t18[8];
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
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t38;
    int t39;

LAB0:    t1 = (t0 + 3120U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(166, ng0);
    t2 = (t0 + 3440);
    *((int *)t2) = 1;
    t3 = (t0 + 3152);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(166, ng0);

LAB5:    xsi_set_current_line(167, ng0);
    t4 = (t0 + 1320U);
    t5 = *((char **)t4);
    t4 = (t0 + 2200);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 5);
    xsi_set_current_line(168, ng0);
    xsi_set_current_line(168, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB6:    t2 = (t0 + 1880);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 608);
    t6 = *((char **)t5);
    t5 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_signed_minus(t7, 32, t6, 32, t5, 32);
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t4, 32, t7, 32);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(173, ng0);
    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1720);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 5);
    goto LAB2;

LAB7:    xsi_set_current_line(168, ng0);

LAB9:    xsi_set_current_line(169, ng0);
    t15 = (t0 + 2200);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memset(t18, 0, 8);
    t19 = (t18 + 4);
    t20 = (t17 + 4);
    t21 = *((unsigned int *)t17);
    t22 = (t21 >> 4);
    t23 = (t22 & 1);
    *((unsigned int *)t18) = t23;
    t24 = *((unsigned int *)t20);
    t25 = (t24 >> 4);
    t26 = (t25 & 1);
    *((unsigned int *)t19) = t26;
    t27 = (t0 + 2040);
    xsi_vlogvar_assign_value(t27, t18, 0, 0, 1);
    xsi_set_current_line(170, ng0);
    t2 = (t0 + 2040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2200);
    t6 = (t5 + 56U);
    t9 = *((char **)t6);
    memset(t8, 0, 8);
    t15 = (t8 + 4);
    t16 = (t9 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (t10 >> 0);
    *((unsigned int *)t8) = t11;
    t12 = *((unsigned int *)t16);
    t13 = (t12 >> 0);
    *((unsigned int *)t15) = t13;
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t14 & 15U);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t21 & 15U);
    xsi_vlogtype_concat(t7, 5, 5, 2U, t8, 4, t4, 1);
    t17 = (t0 + 2200);
    xsi_vlogvar_assign_value(t17, t7, 0, 0, 5);
    xsi_set_current_line(171, ng0);
    t2 = (t0 + 2040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2200);
    t6 = (t5 + 56U);
    t9 = *((char **)t6);
    memset(t7, 0, 8);
    t15 = (t7 + 4);
    t16 = (t9 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (t10 >> 3);
    t12 = (t11 & 1);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t16);
    t14 = (t13 >> 3);
    t21 = (t14 & 1);
    *((unsigned int *)t15) = t21;
    t22 = *((unsigned int *)t4);
    t23 = *((unsigned int *)t7);
    t24 = (t22 ^ t23);
    *((unsigned int *)t8) = t24;
    t17 = (t4 + 4);
    t19 = (t7 + 4);
    t20 = (t8 + 4);
    t25 = *((unsigned int *)t17);
    t26 = *((unsigned int *)t19);
    t28 = (t25 | t26);
    *((unsigned int *)t20) = t28;
    t29 = *((unsigned int *)t20);
    t30 = (t29 != 0);
    if (t30 == 1)
        goto LAB10;

LAB11:
LAB12:    t27 = (t0 + 2200);
    t33 = (t0 + 2200);
    t34 = (t33 + 72U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t18, t35, 2, t36, 32, 1);
    t37 = (t18 + 4);
    t38 = *((unsigned int *)t37);
    t39 = (!(t38));
    if (t39 == 1)
        goto LAB13;

LAB14:    xsi_set_current_line(168, ng0);
    t2 = (t0 + 1880);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t4, 32, t5, 32);
    t6 = (t0 + 1880);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 32);
    goto LAB6;

LAB10:    t31 = *((unsigned int *)t8);
    t32 = *((unsigned int *)t20);
    *((unsigned int *)t8) = (t31 | t32);
    goto LAB12;

LAB13:    xsi_vlogvar_assign_value(t27, t8, 0, *((unsigned int *)t18), 1);
    goto LAB14;

}


extern void work_m_00000000001289922843_1480810243_init()
{
	static char *pe[] = {(void *)Always_166_0};
	xsi_register_didat("work_m_00000000001289922843_1480810243", "isim/tb_gf2_top_isim_beh.exe.sim/work/m_00000000001289922843_1480810243.didat");
	xsi_register_executes(pe);
}
