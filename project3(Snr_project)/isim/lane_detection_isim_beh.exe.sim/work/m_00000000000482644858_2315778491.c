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
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static int ng4[] = {2, 0};



static void Always_53_0(char *t0)
{
    char t13[8];
    char t14[8];
    char t21[8];
    char t31[8];
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
    char *t30;
    char *t32;

LAB0:    t1 = (t0 + 3304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 3624);
    *((int *)t2) = 1;
    t3 = (t0 + 3336);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(53, ng0);

LAB5:    xsi_set_current_line(54, ng0);
    t4 = (t0 + 1344U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(57, ng0);

LAB10:    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2224);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    xsi_set_current_line(60, ng0);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2384);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB11:    t2 = (t0 + 2384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t11 = *((char **)t5);
    t5 = (t0 + 472);
    t12 = *((char **)t5);
    memset(t13, 0, 8);
    xsi_vlog_signed_multiply(t13, 32, t11, 32, t12, 32);
    memset(t14, 0, 8);
    xsi_vlog_signed_less(t14, 32, t4, 32, t13, 32);
    t5 = (t14 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t14);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2224);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t11 = *((char **)t5);
    t5 = ((char*)((ng4)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_power(t13, 32, t11, 32, t5, 32, 1);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_divide(t14, 32, t4, 16, t13, 32);
    t12 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t12, t14, 0, 0, 8, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(54, ng0);

LAB9:    xsi_set_current_line(55, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2224);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 16, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB8;

LAB12:    xsi_set_current_line(60, ng0);

LAB14:    xsi_set_current_line(61, ng0);
    t15 = (t0 + 2224);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t0 + 2064);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t22 = (t0 + 2064);
    t23 = (t22 + 72U);
    t24 = *((char **)t23);
    t25 = (t0 + 2064);
    t26 = (t25 + 64U);
    t27 = *((char **)t26);
    t28 = (t0 + 2384);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_generic_get_array_select_value(t21, 16, t20, t24, t27, 2, 1, t30, 32, 1);
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 16, t17, 16, t21, 16);
    t32 = (t0 + 2224);
    xsi_vlogvar_wait_assign_value(t32, t31, 0, 0, 16, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 2384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 2384);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 32);
    goto LAB11;

}


extern void work_m_00000000000482644858_2315778491_init()
{
	static char *pe[] = {(void *)Always_53_0};
	xsi_register_didat("work_m_00000000000482644858_2315778491", "isim/lane_detection_isim_beh.exe.sim/work/m_00000000000482644858_2315778491.didat");
	xsi_register_executes(pe);
}
