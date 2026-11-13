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
static unsigned int ng2[] = {77U, 0U};
static unsigned int ng3[] = {150U, 0U};
static unsigned int ng4[] = {29U, 0U};
static int ng5[] = {8, 0};



static void Always_31_0(char *t0)
{
    char t13[8];
    char t14[8];
    char t15[8];
    char t16[8];
    char t17[8];
    char t19[8];
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
    char *t18;
    char *t20;

LAB0:    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 3328);
    *((int *)t2) = 1;
    t3 = (t0 + 3040);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);

LAB5:    xsi_set_current_line(32, ng0);
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

LAB7:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_multiply(t13, 8, t3, 8, t2, 8);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_multiply(t14, 8, t5, 8, t4, 8);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 8, t13, 8, t14, 8);
    t11 = (t0 + 1688U);
    t12 = *((char **)t11);
    t11 = ((char*)((ng4)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_multiply(t16, 8, t12, 8, t11, 8);
    memset(t17, 0, 8);
    xsi_vlog_unsigned_add(t17, 8, t15, 8, t16, 8);
    t18 = ((char*)((ng5)));
    memset(t19, 0, 8);
    xsi_vlog_unsigned_rshift(t19, 8, t17, 8, t18, 32);
    t20 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 8, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(33, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 8, 0LL);
    goto LAB8;

}


extern void work_m_00000000003784815299_1364985114_init()
{
	static char *pe[] = {(void *)Always_31_0};
	xsi_register_didat("work_m_00000000003784815299_1364985114", "isim/grayscale_tb_isim_beh.exe.sim/work/m_00000000003784815299_1364985114.didat");
	xsi_register_executes(pe);
}
