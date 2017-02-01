#ifndef __MACH_MX35_H__
#define __MACH_MX35_H__

/*
 * IRAM
 */
#define MX35_IRAM_BASE_ADDR		0x10000000	/* internal ram */
#define MX35_IRAM_SIZE			SZ_128K

#define MX35_L2CC_BASE_ADDR		0x30000000
#define MX35_L2CC_SIZE			SZ_1M

#define MX35_AIPS1_BASE_ADDR		0x43f00000
#define MX35_AIPS1_SIZE			SZ_1M
#define MX35_MAX_BASE_ADDR			(MX35_AIPS1_BASE_ADDR + 0x04000)
#define MX35_EVTMON_BASE_ADDR			(MX35_AIPS1_BASE_ADDR + 0x08000)
#define MX35_CLKCTL_BASE_ADDR			(MX35_AIPS1_BASE_ADDR + 0x0c000)
#define MX35_ETB_SLOT4_BASE_ADDR		(MX35_AIPS1_BASE_ADDR + 0x10000)
#define MX35_ETB_SLOT5_BASE_ADDR		(MX35_AIPS1_BASE_ADDR + 0x14000)
#define MX35_ECT_CTIO_BASE_ADDR			(MX35_AIPS1_BASE_ADDR + 0x18000)
#define MX35_I2C1_BASE_ADDR			(MX35_AIPS1_BASE_ADDR + 0x80000)
#define MX35_I2C3_BASE_ADDR			(MX35_AIPS1_BASE_ADDR + 0x84000)
#define MX35_UART1_BASE_ADDR			(MX35_AIPS1_BASE_ADDR + 0x90000)
#define MX35_UART2_BASE_ADDR			(MX35_AIPS1_BASE_ADDR + 0x94000)
#define MX35_I2C2_BASE_ADDR			(MX35_AIPS1_BASE_ADDR + 0x98000)
#define MX35_OWIRE_BASE_ADDR			(MX35_AIPS1_BASE_ADDR + 0x9c000)
#define MX35_SSI1_BASE_ADDR			(MX35_AIPS1_BASE_ADDR + 0xa0000)
#define MX35_CSPI1_BASE_ADDR			(MX35_AIPS1_BASE_ADDR + 0xa4000)
#define MX35_KPP_BASE_ADDR			(MX35_AIPS1_BASE_ADDR + 0xa8000)
#define MX35_IOMUXC_BASE_ADDR			(MX35_AIPS1_BASE_ADDR + 0xac000)
#define MX35_ECT_IP1_BASE_ADDR			(MX35_AIPS1_BASE_ADDR + 0xb8000)
#define MX35_ECT_IP2_BASE_ADDR			(MX35_AIPS1_BASE_ADDR + 0xbc000)

#define MX35_SPBA0_BASE_ADDR		0x50000000
#define MX35_SPBA0_SIZE			SZ_1M
#define MX35_UART3_BASE_ADDR			(MX35_SPBA0_BASE_ADDR + 0x0c000)
#define MX35_CSPI2_BASE_ADDR			(MX35_SPBA0_BASE_ADDR + 0x10000)
#define MX35_SSI2_BASE_ADDR			(MX35_SPBA0_BASE_ADDR + 0x14000)
#define MX35_ATA_BASE_ADDR			(MX35_SPBA0_BASE_ADDR + 0x20000)
#define MX35_MSHC1_BASE_ADDR			(MX35_SPBA0_BASE_ADDR + 0x24000)
#define MX35_FEC_BASE_ADDR		0x50038000
#define MX35_SPBA_CTRL_BASE_ADDR		(MX35_SPBA0_BASE_ADDR + 0x3c000)

#define MX35_AIPS2_BASE_ADDR		0x53f00000
#define MX35_AIPS2_SIZE			SZ_1M
#define MX35_CCM_BASE_ADDR			(MX35_AIPS2_BASE_ADDR + 0x80000)
#define MX35_GPT1_BASE_ADDR			(MX35_AIPS2_BASE_ADDR + 0x90000)
#define MX35_EPIT1_BASE_ADDR			(MX35_AIPS2_BASE_ADDR + 0x94000)
#define MX35_EPIT2_BASE_ADDR			(MX35_AIPS2_BASE_ADDR + 0x98000)
#define MX35_GPIO3_BASE_ADDR			(MX35_AIPS2_BASE_ADDR + 0xa4000)
#define MX35_SCC_BASE_ADDR			(MX35_AIPS2_BASE_ADDR + 0xac000)
#define MX35_RNGA_BASE_ADDR			(MX35_AIPS2_BASE_ADDR + 0xb0000)
#define MX35_ESDHC1_BASE_ADDR			(MX35_AIPS2_BASE_ADDR + 0xb4000)
#define MX35_ESDHC2_BASE_ADDR			(MX35_AIPS2_BASE_ADDR + 0xb8000)
#define MX35_ESDHC3_BASE_ADDR			(MX35_AIPS2_BASE_ADDR + 0xbc000)
#define MX35_IPU_CTRL_BASE_ADDR			(MX35_AIPS2_BASE_ADDR + 0xc0000)
#define MX35_AUDMUX_BASE_ADDR			(MX35_AIPS2_BASE_ADDR + 0xc4000)
#define MX35_GPIO1_BASE_ADDR			(MX35_AIPS2_BASE_ADDR + 0xcc000)
#define MX35_GPIO2_BASE_ADDR			(MX35_AIPS2_BASE_ADDR + 0xd0000)
#define MX35_SDMA_BASE_ADDR			(MX35_AIPS2_BASE_ADDR + 0xd4000)
#define MX35_RTC_BASE_ADDR			(MX35_AIPS2_BASE_ADDR + 0xd8000)
#define MX35_WDOG_BASE_ADDR			(MX35_AIPS2_BASE_ADDR + 0xdc000)
#define MX35_PWM_BASE_ADDR			(MX35_AIPS2_BASE_ADDR + 0xe0000)
#define MX35_CAN1_BASE_ADDR			(MX35_AIPS2_BASE_ADDR + 0xe4000)
#define MX35_CAN2_BASE_ADDR			(MX35_AIPS2_BASE_ADDR + 0xe8000)
#define MX35_RTIC_BASE_ADDR			(MX35_AIPS2_BASE_ADDR + 0xec000)
#define MX35_IIM_BASE_ADDR			(MX35_AIPS2_BASE_ADDR + 0xf0000)
#define MX35_USB_BASE_ADDR			(MX35_AIPS2_BASE_ADDR + 0xf4000)
#define MX35_USB_OTG_BASE_ADDR			(MX35_USB_BASE_ADDR + 0x0000)
/*
 * The Reference Manual (IMX35RM, Rev. 2, 3/2009) claims an offset of 0x200 for
 * HS.  When host support was implemented only a preliminary document was
 * available, which told 0x400.  This works fine.
 */
#define MX35_USB_HS_BASE_ADDR			(MX35_USB_BASE_ADDR + 0x0400)

#define MX35_ROMP_BASE_ADDR		0x60000000
#define MX35_ROMP_SIZE			SZ_1M

#define MX35_AVIC_BASE_ADDR		0x68000000
#define MX35_AVIC_SIZE			SZ_1M

/*
 * Memory regions and CS
 */
#define MX35_IPU_MEM_BASE_ADDR		0x70000000
#define MX35_CSD0_BASE_ADDR		0x80000000
#define MX35_CSD1_BASE_ADDR		0x90000000

#define MX35_CS0_BASE_ADDR		0xa0000000
#define MX35_CS1_BASE_ADDR		0xa8000000
#define MX35_CS2_BASE_ADDR		0xb0000000
#define MX35_CS3_BASE_ADDR		0xb2000000

#define MX35_CS4_BASE_ADDR		0xb4000000
#define MX35_CS4_BASE_ADDR_VIRT		0xf6000000
#define MX35_CS4_SIZE			SZ_32M

#define MX35_CS5_BASE_ADDR		0xb6000000
#define MX35_CS5_BASE_ADDR_VIRT		0xf8000000
#define MX35_CS5_SIZE			SZ_32M

/*
 * NAND, SDRAM, WEIM, M3IF, EMI controllers
 */
#define MX35_X_MEMC_BASE_ADDR		0xb8000000
#define MX35_X_MEMC_SIZE		SZ_64K
#define MX35_ESDCTL_BASE_ADDR			(MX35_X_MEMC_BASE_ADDR + 0x1000)
#define MX35_WEIM_BASE_ADDR			(MX35_X_MEMC_BASE_ADDR + 0x2000)
#define MX35_M3IF_BASE_ADDR			(MX35_X_MEMC_BASE_ADDR + 0x3000)
#define MX35_EMI_CTL_BASE_ADDR			(MX35_X_MEMC_BASE_ADDR + 0x4000)
#define MX35_PCMCIA_CTL_BASE_ADDR		MX35_EMI_CTL_BASE_ADDR

#define MX35_NFC_BASE_ADDR		0xbb000000
#define MX35_PCMCIA_MEM_BASE_ADDR	0xbc000000

#define MX35_IO_P2V(x)			IMX_IO_P2V(x)
#define MX35_IO_ADDRESS(x)		IOMEM(MX35_IO_P2V(x))

/*
 * Interrupt numbers
 */
#include <asm/irq.h>
#define MX35_INT_OWIRE		(NR_IRQS_LEGACY + 2)
#define MX35_INT_I2C3		(NR_IRQS_LEGACY + 3)
#define MX35_INT_I2C2		(NR_IRQS_LEGACY + 4)
#define MX35_INT_RTIC		(NR_IRQS_LEGACY + 6)
#define MX35_INT_ESDHC1		(NR_IRQS_LEGACY + 7)
#define MX35_INT_ESDHC2		(NR_IRQS_LEGACY + 8)
#define MX35_INT_ESDHC3		(NR_IRQS_LEGACY + 9)
#define MX35_INT_I2C1		(NR_IRQS_LEGACY + 10)
#define MX35_INT_SSI1		(NR_IRQS_LEGACY + 11)
#define MX35_INT_SSI2		(NR_IRQS_LEGACY + 12)
#define MX35_INT_CSPI2		(NR_IRQS_LEGACY + 13)
#define MX35_INT_CSPI1		(NR_IRQS_LEGACY + 14)
#define MX35_INT_ATA		(NR_IRQS_LEGACY + 15)
#define MX35_INT_GPU2D		(NR_IRQS_LEGACY + 16)
#define MX35_INT_ASRC		(NR_IRQS_LEGACY + 17)
#define MX35_INT_UART3		(NR_IRQS_LEGACY + 18)
#define MX35_INT_IIM		(NR_IRQS_LEGACY + 19)
#define MX35_INT_RNGA		(NR_IRQS_LEGACY + 22)
#define MX35_INT_EVTMON		(NR_IRQS_LEGACY + 23)
#define MX35_INT_KPP		(NR_IRQS_LEGACY + 24)
#define MX35_INT_RTC		(NR_IRQS_LEGACY + 25)
#define MX35_INT_PWM		(NR_IRQS_LEGACY + 26)
#define MX35_INT_EPIT2		(NR_IRQS_LEGACY + 27)
#define MX35_INT_EPIT1		(NR_IRQS_LEGACY + 28)
#define MX35_INT_GPT		(NR_IRQS_LEGACY + 29)
#define MX35_INT_POWER_FAIL	(NR_IRQS_LEGACY + 30)
#define MX35_INT_UART2		(NR_IRQS_LEGACY + 32)
#define MX35_INT_NFC		(NR_IRQS_LEGACY + 33)
#define MX35_INT_SDMA		(NR_IRQS_LEGACY + 34)
#define MX35_INT_USB_HS		(NR_IRQS_LEGACY + 35)
#define MX35_INT_USB_OTG	(NR_IRQS_LEGACY + 37)
#define MX35_INT_MSHC1		(NR_IRQS_LEGACY + 39)
#define MX35_INT_ESAI		(NR_IRQS_LEGACY + 40)
#define MX35_INT_IPU_ERR	(NR_IRQS_LEGACY + 41)
#define MX35_INT_IPU_SYN	(NR_IRQS_LEGACY + 42)
#define MX35_INT_CAN1		(NR_IRQS_LEGACY + 43)
#define MX35_INT_CAN2		(NR_IRQS_LEGACY + 44)
#define MX35_INT_UART1		(NR_IRQS_LEGACY + 45)
#define MX35_INT_MLB		(NR_IRQS_LEGACY + 46)
#define MX35_INT_SPDIF		(NR_IRQS_LEGACY + 47)
#define MX35_INT_ECT		(NR_IRQS_LEGACY + 48)
#define MX35_INT_SCC_SCM	(NR_IRQS_LEGACY + 49)
#define MX35_INT_SCC_SMN	(NR_IRQS_LEGACY + 50)
#define MX35_INT_GPIO2		(NR_IRQS_LEGACY + 51)
#define MX35_INT_GPIO1		(NR_IRQS_LEGACY + 52)
#define MX35_INT_WDOG		(NR_IRQS_LEGACY + 55)
#define MX35_INT_GPIO3		(NR_IRQS_LEGACY + 56)
#define MX35_INT_FEC		(NR_IRQS_LEGACY + 57)
#define MX35_INT_EXT_POWER	(NR_IRQS_LEGACY + 58)
#define MX35_INT_EXT_TEMPER	(NR_IRQS_LEGACY + 59)
#define MX35_INT_EXT_SENSOR60	(NR_IRQS_LEGACY + 60)
#define MX35_INT_EXT_SENSOR61	(NR_IRQS_LEGACY + 61)
#define MX35_INT_EXT_WDOG	(NR_IRQS_LEGACY + 62)
#define MX35_INT_EXT_TV		(NR_IRQS_LEGACY + 63)

#define MX35_DMA_REQ_SSI2_RX1   22
#define MX35_DMA_REQ_SSI2_TX1   23
#define MX35_DMA_REQ_SSI2_RX0   24
#define MX35_DMA_REQ_SSI2_TX0   25
#define MX35_DMA_REQ_SSI1_RX1   26
#define MX35_DMA_REQ_SSI1_TX1   27
#define MX35_DMA_REQ_SSI1_RX0   28
#define MX35_DMA_REQ_SSI1_TX0   29

#define MX35_PROD_SIGNATURE		0x1	/* For MX31 */

#endif /* ifndef __MACH_MX35_H__ */
