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
static const char *ng0 = "C:/Users/B200875/Desktop/Major Project/gf2/tb_GF_mod2_using_matrix.v";
static unsigned int ng1[] = {45U, 0U};
static unsigned int ng2[] = {55U, 0U};
static const char *ng3 = "\nCheck out-of-field reduction test case:";
static const char *ng4 = "A=%b, B=%b => D=%b, R=%b, C=%b";
static unsigned int ng5[] = {44U, 0U};
static unsigned int ng6[] = {56U, 0U};
static const char *ng7 = "\nCheck within-field reduction test case:";
static unsigned int ng8[] = {0U, 0U};
static const char *ng9 = "\nCheck Zero field test case:";
static unsigned int ng10[] = {1U, 0U};
static unsigned int ng11[] = {42U, 0U};
static const char *ng12 = "\nCheck Unit field test case:";



static void Initial_47_0(char *t0)
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
    char *t10;
    char *t11;

LAB0:    t1 = (t0 + 3280U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);

LAB4:    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 3088);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(49, ng0);
    xsi_vlogfile_write(1, 0, 0, ng3, 1, t0);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2360);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 1320U);
    t9 = *((char **)t8);
    t8 = (t0 + 1480U);
    t10 = *((char **)t8);
    t8 = (t0 + 1800U);
    t11 = *((char **)t8);
    xsi_vlogfile_write(1, 0, 0, ng4, 6, t0, (char)118, t4, 6, (char)118, t7, 6, (char)118, t9, 11, (char)118, t10, 30, (char)118, t11, 6);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 3088);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 3088);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(54, ng0);
    xsi_vlogfile_write(1, 0, 0, ng7, 1, t0);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2360);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 1320U);
    t9 = *((char **)t8);
    t8 = (t0 + 1480U);
    t10 = *((char **)t8);
    t8 = (t0 + 1800U);
    t11 = *((char **)t8);
    xsi_vlogfile_write(1, 0, 0, ng4, 6, t0, (char)118, t4, 6, (char)118, t7, 6, (char)118, t9, 11, (char)118, t10, 30, (char)118, t11, 6);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 3088);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 3088);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(59, ng0);
    xsi_vlogfile_write(1, 0, 0, ng9, 1, t0);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2360);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 1320U);
    t9 = *((char **)t8);
    t8 = (t0 + 1480U);
    t10 = *((char **)t8);
    t8 = (t0 + 1800U);
    t11 = *((char **)t8);
    xsi_vlogfile_write(1, 0, 0, ng4, 6, t0, (char)118, t4, 6, (char)118, t7, 6, (char)118, t9, 11, (char)118, t10, 30, (char)118, t11, 6);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 3088);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 3088);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(64, ng0);
    xsi_vlogfile_write(1, 0, 0, ng12, 1, t0);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2360);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 1320U);
    t9 = *((char **)t8);
    t8 = (t0 + 1480U);
    t10 = *((char **)t8);
    t8 = (t0 + 1800U);
    t11 = *((char **)t8);
    xsi_vlogfile_write(1, 0, 0, ng4, 6, t0, (char)118, t4, 6, (char)118, t7, 6, (char)118, t9, 11, (char)118, t10, 30, (char)118, t11, 6);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 3088);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(68, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}


extern void work_m_00000000001221542823_3601520378_init()
{
	static char *pe[] = {(void *)Initial_47_0};
	xsi_register_didat("work_m_00000000001221542823_3601520378", "isim/tb_GF_mod2_using_matrix_isim_beh.exe.sim/work/m_00000000001221542823_3601520378.didat");
	xsi_register_executes(pe);
}
