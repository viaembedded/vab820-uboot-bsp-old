/*
 * Copyright 2014 Broadcom Corporation.
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#ifndef __SYSMAP_H
#define __SYSMAP_H

#define IHOST_PROC_CLK_PLLARMA					0X19000C00
#define IHOST_PROC_CLK_PLLARMB					0X19000C04
#define IHOST_PROC_CLK_PLLARMA__PLLARM_PDIV_R				24

#define IHOST_PROC_CLK_WR_ACCESS				0X19000000
#define IHOST_PROC_CLK_POLICY_FREQ				0X19000008
#define IHOST_PROC_CLK_POLICY_FREQ__PRIV_ACCESS_MODE			31
#define IHOST_PROC_CLK_POLICY_FREQ__POLICY3_FREQ_R			24
#define IHOST_PROC_CLK_POLICY_FREQ__POLICY2_FREQ_R			16
#define IHOST_PROC_CLK_POLICY_FREQ__POLICY1_FREQ_R			 8
#define IHOST_PROC_CLK_POLICY_CTL				0X1900000C
#define IHOST_PROC_CLK_POLICY_CTL__GO					 0
#define IHOST_PROC_CLK_POLICY_CTL__GO_AC				 1
#define IHOST_PROC_CLK_PLLARMB__PLLARM_NDIV_FRAC_R			 0
#define IHOST_PROC_CLK_PLLARMB__PLLARM_NDIV_FRAC_WIDTH			20
#define IHOST_PROC_CLK_PLLARMA__PLLARM_LOCK				28
#define IHOST_PROC_CLK_POLICY_FREQ__POLICY0_FREQ_R			 0
#define IHOST_PROC_CLK_PLLARMA__PLLARM_NDIV_INT_R			 8
#define IHOST_PROC_CLK_PLLARMA__PLLARM_SOFT_POST_RESETB			 1
#define IHOST_PROC_CLK_PLLARMA__PLLARM_SOFT_RESETB			 0
#define IHOST_PROC_CLK_CORE0_CLKGATE				0X19000200
#define IHOST_PROC_CLK_CORE1_CLKGATE				0X19000204
#define IHOST_PROC_CLK_ARM_SWITCH_CLKGATE			0X19000210
#define IHOST_PROC_CLK_ARM_PERIPH_CLKGATE			0X19000300
#define IHOST_PROC_CLK_APB0_CLKGATE				0X19000400
#define IPROC_CLKCT_HDELAY_SW_EN				0x00000303

#define IPROC_REG_WRITE_ACCESS					0x00a5a501

#define IPROC_PERIPH_BASE					0x19020000
#define IPROC_PERIPH_INT_CTRL_REG_BASE		(IPROC_PERIPH_BASE +  0x100)
#define IPROC_PERIPH_GLB_TIM_REG_BASE		(IPROC_PERIPH_BASE +  0x200)
#define IPROC_PERIPH_PVT_TIM_REG_BASE		(IPROC_PERIPH_BASE +  0x600)
#define IPROC_PERIPH_INT_DISTR_REG_BASE		(IPROC_PERIPH_BASE + 0x1000)

#define PLL_AXI_CLK						0x1DCD6500

#endif /* __SYSMAP_H */