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
    work_m_00000000003784815299_1364985114_init();
    work_m_00000000000482644858_2315778491_init();
    work_m_00000000001971489837_0034234341_init();
    work_m_00000000002887324544_3956623270_init();
    work_m_00000000000593125633_3419669645_init();
    work_m_00000000000497926852_4195743134_init();
    work_m_00000000002193877165_2907118512_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002193877165_2907118512");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
