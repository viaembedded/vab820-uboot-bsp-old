/*
 * (C) Copyright 2007
 * Sascha Hauer, Pengutronix
 *
 * (C) Copyright 2009 Freescale Semiconductor, Inc.
 *
 * See file CREDITS for list of people who contributed to this
 * project.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 * MA 02111-1307 USA
 */

#include <common.h>
#include <asm/arch/mx51.h>

/* General purpose timers registers */
#define GPTCR   __REG(GPT1_BASE_ADDR)	/* Control register */
#define GPTPR  	__REG(GPT1_BASE_ADDR + 0x4)	/* Prescaler register */
#define GPTSR   __REG(GPT1_BASE_ADDR + 0x8)	/* Status register */
#define GPTCNT 	__REG(GPT1_BASE_ADDR + 0x24)	/* Counter register */

/* General purpose timers bitfields */
#define GPTCR_SWR       (1<<15)	/* Software reset */
#define GPTCR_FRR       (1<<9)	/* Freerun / restart */
#define GPTCR_CLKSOURCE_32 (4<<6)	/* Clock source */
#define GPTCR_TEN       (1)	/* Timer enable */

/* nothing really to do with interrupts, just starts up a counter. */
int interrupt_init(void)
{
	return 0;
}

void reset_cpu(ulong addr)
{
	__REG16(WDOG1_BASE_ADDR) = 4;
}