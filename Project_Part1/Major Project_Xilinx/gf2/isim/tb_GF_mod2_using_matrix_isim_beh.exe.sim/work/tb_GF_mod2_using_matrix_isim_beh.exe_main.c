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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000002890317744_3655389970_init();
    work_m_00000000001618296233_0500395880_init();
    work_m_00000000001167759927_3897438305_init();
    work_m_00000000001282754037_2345844840_init();
    work_m_00000000001221542823_3601520378_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001221542823_3601520378");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
