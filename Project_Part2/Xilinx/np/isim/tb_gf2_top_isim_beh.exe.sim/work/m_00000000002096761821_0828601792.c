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
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {5, 0};
static unsigned int ng4[] = {1U, 0U};
static int ng5[] = {6, 0};
static int ng6[] = {7, 0};



static void Always_49_0(char *t0)
{
    char t6[8];
    char t22[8];
    char t23[8];
    char t42[8];
    char t43[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t24;
    char *t25;
    int t26;
    char *t27;
    int t28;
    int t29;
    char *t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t44;
    char *t45;
    unsigned int t46;
    char *t47;
    unsigned int t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;

LAB0:    t1 = (t0 + 3600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 3920);
    *((int *)t2) = 1;
    t3 = (t0 + 3632);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(49, ng0);

LAB5:    xsi_set_current_line(52, ng0);
    t4 = (t0 + 1480U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t4) = t13;
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 1);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 1);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t6 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 2);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 2);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t6 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB16;

LAB17:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 3);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 3);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t6 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB22;

LAB23:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 4);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 4);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t6 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB32;

LAB33:
LAB34:
LAB24:
LAB18:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(52, ng0);

LAB9:    xsi_set_current_line(53, ng0);
    t20 = ((char*)((ng1)));
    t21 = (t0 + 2520);
    xsi_vlogvar_wait_assign_value(t21, t20, 0, 0, 6, 0LL);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 6, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(59, ng0);

LAB13:    xsi_set_current_line(60, ng0);
    t7 = (t0 + 1640U);
    t14 = *((char **)t7);
    t7 = (t0 + 2520);
    xsi_vlogvar_wait_assign_value(t7, t14, 0, 0, 6, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2520);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2360);
    t7 = (t0 + 2360);
    t14 = (t7 + 72U);
    t20 = *((char **)t14);
    t21 = ((char*)((ng3)));
    t24 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t6, t22, t23, ((int*)(t20)), 2, t21, 32, 1, t24, 32, 1);
    t25 = (t6 + 4);
    t8 = *((unsigned int *)t25);
    t26 = (!(t8));
    t27 = (t22 + 4);
    t9 = *((unsigned int *)t27);
    t28 = (!(t9));
    t29 = (t26 && t28);
    t30 = (t23 + 4);
    t10 = *((unsigned int *)t30);
    t31 = (!(t10));
    t32 = (t29 && t31);
    if (t32 == 1)
        goto LAB14;

LAB15:    goto LAB12;

LAB14:    t11 = *((unsigned int *)t23);
    t33 = (t11 + 0);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t22);
    t34 = (t12 - t13);
    t35 = (t34 + 1);
    xsi_vlogvar_wait_assign_value(t5, t4, t33, *((unsigned int *)t22), t35, 0LL);
    goto LAB15;

LAB16:    xsi_set_current_line(65, ng0);

LAB19:    xsi_set_current_line(66, ng0);
    t7 = (t0 + 1640U);
    t14 = *((char **)t7);
    t7 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t7, t14, 0, 0, 6, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 2680);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2360);
    t7 = (t0 + 2360);
    t14 = (t7 + 72U);
    t20 = *((char **)t14);
    t21 = ((char*)((ng3)));
    t24 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t6, t22, t23, ((int*)(t20)), 2, t21, 32, 1, t24, 32, 1);
    t25 = (t6 + 4);
    t8 = *((unsigned int *)t25);
    t26 = (!(t8));
    t27 = (t22 + 4);
    t9 = *((unsigned int *)t27);
    t28 = (!(t9));
    t29 = (t26 && t28);
    t30 = (t23 + 4);
    t10 = *((unsigned int *)t30);
    t31 = (!(t10));
    t32 = (t29 && t31);
    if (t32 == 1)
        goto LAB20;

LAB21:    goto LAB18;

LAB20:    t11 = *((unsigned int *)t23);
    t33 = (t11 + 0);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t22);
    t34 = (t12 - t13);
    t35 = (t34 + 1);
    xsi_vlogvar_wait_assign_value(t5, t4, t33, *((unsigned int *)t22), t35, 0LL);
    goto LAB21;

LAB22:    xsi_set_current_line(71, ng0);

LAB25:    xsi_set_current_line(72, ng0);
    t7 = (t0 + 1800U);
    t14 = *((char **)t7);
    memset(t22, 0, 8);
    t7 = (t22 + 4);
    t20 = (t14 + 4);
    t36 = *((unsigned int *)t14);
    t37 = (t36 >> 0);
    *((unsigned int *)t22) = t37;
    t38 = *((unsigned int *)t20);
    t39 = (t38 >> 0);
    *((unsigned int *)t7) = t39;
    t40 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t40 & 63U);
    t41 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t41 & 63U);
    t21 = (t0 + 2360);
    t24 = (t0 + 2360);
    t25 = (t24 + 72U);
    t27 = *((char **)t25);
    t30 = ((char*)((ng3)));
    t44 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t23, t42, t43, ((int*)(t27)), 2, t30, 32, 1, t44, 32, 1);
    t45 = (t23 + 4);
    t46 = *((unsigned int *)t45);
    t26 = (!(t46));
    t47 = (t42 + 4);
    t48 = *((unsigned int *)t47);
    t28 = (!(t48));
    t29 = (t26 && t28);
    t49 = (t43 + 4);
    t50 = *((unsigned int *)t49);
    t31 = (!(t50));
    t32 = (t29 && t31);
    if (t32 == 1)
        goto LAB26;

LAB27:    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2360);
    t4 = (t0 + 2360);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t14 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t6, t7, 2, t14, 32, 1);
    t20 = (t6 + 4);
    t8 = *((unsigned int *)t20);
    t26 = (!(t8));
    if (t26 == 1)
        goto LAB28;

LAB29:    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2360);
    t4 = (t0 + 2360);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t14 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t6, t7, 2, t14, 32, 1);
    t20 = (t6 + 4);
    t8 = *((unsigned int *)t20);
    t26 = (!(t8));
    if (t26 == 1)
        goto LAB30;

LAB31:    goto LAB24;

LAB26:    t51 = *((unsigned int *)t43);
    t33 = (t51 + 0);
    t52 = *((unsigned int *)t23);
    t53 = *((unsigned int *)t42);
    t34 = (t52 - t53);
    t35 = (t34 + 1);
    xsi_vlogvar_wait_assign_value(t21, t22, t33, *((unsigned int *)t42), t35, 0LL);
    goto LAB27;

LAB28:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t6), 1, 0LL);
    goto LAB29;

LAB30:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t6), 1, 0LL);
    goto LAB31;

LAB32:    xsi_set_current_line(78, ng0);

LAB35:    xsi_set_current_line(79, ng0);
    t7 = (t0 + 1960U);
    t14 = *((char **)t7);
    t7 = (t0 + 2360);
    t20 = (t0 + 2360);
    t21 = (t20 + 72U);
    t24 = *((char **)t21);
    t25 = ((char*)((ng3)));
    t27 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t22, t23, t42, ((int*)(t24)), 2, t25, 32, 1, t27, 32, 1);
    t30 = (t22 + 4);
    t36 = *((unsigned int *)t30);
    t26 = (!(t36));
    t44 = (t23 + 4);
    t37 = *((unsigned int *)t44);
    t28 = (!(t37));
    t29 = (t26 && t28);
    t45 = (t42 + 4);
    t38 = *((unsigned int *)t45);
    t31 = (!(t38));
    t32 = (t29 && t31);
    if (t32 == 1)
        goto LAB36;

LAB37:    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2360);
    t4 = (t0 + 2360);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t14 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t6, t7, 2, t14, 32, 1);
    t20 = (t6 + 4);
    t8 = *((unsigned int *)t20);
    t26 = (!(t8));
    if (t26 == 1)
        goto LAB38;

LAB39:    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2360);
    t4 = (t0 + 2360);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t14 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t6, t7, 2, t14, 32, 1);
    t20 = (t6 + 4);
    t8 = *((unsigned int *)t20);
    t26 = (!(t8));
    if (t26 == 1)
        goto LAB40;

LAB41:    goto LAB34;

LAB36:    t39 = *((unsigned int *)t42);
    t33 = (t39 + 0);
    t40 = *((unsigned int *)t22);
    t41 = *((unsigned int *)t23);
    t34 = (t40 - t41);
    t35 = (t34 + 1);
    xsi_vlogvar_wait_assign_value(t7, t14, t33, *((unsigned int *)t23), t35, 0LL);
    goto LAB37;

LAB38:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t6), 1, 0LL);
    goto LAB39;

LAB40:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t6), 1, 0LL);
    goto LAB41;

}


extern void work_m_00000000002096761821_0828601792_init()
{
	static char *pe[] = {(void *)Always_49_0};
	xsi_register_didat("work_m_00000000002096761821_0828601792", "isim/tb_gf2_top_isim_beh.exe.sim/work/m_00000000002096761821_0828601792.didat");
	xsi_register_executes(pe);
}
