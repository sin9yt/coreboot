/*
 * This file is part of the coreboot project.
 *
 * Copyright (C) 2006-2007 Advanced Micro Devices, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301 USA
 */

/* Until we resolve a better way to do this, work around it with a value "too large to fail" */
#warning clean up setting of DIMM_SOCKETS and NODE_NUMS
#define DIMM_SOCKETS 4
#define NODE_NUMS 16

#define ROM_CODE_SEG		0x08
#define ROM_DATA_SEG		0x10

#define CACHE_RAM_CODE_SEG	0x18
#define CACHE_RAM_DATA_SEG	0x20

#define IORR_FIRST 0xC0010016
#define IORR_LAST  0xC0010019

#define MTRR_READ_MEM			(1 << 4)
#define MTRR_WRITE_MEM			(1 << 3)

#define SYSCFG_MSR			0xC0010010
#define SYSCFG_MSR_TOM2En		(1 << 21)
#define SYSCFG_MSR_MtrrVarDramEn	(1 << 20)
#define SYSCFG_MSR_MtrrFixDramModEn	(1 << 19)
#define SYSCFG_MSR_MtrrFixDramEn	(1 << 18)
#define SYSCFG_MSR_UcLockEn		(1 << 17)
#define SYSCFG_MSR_ChxToDirtyDis	(1 << 16)
#define SYSCFG_MSR_ClVicBlkEn		(1 << 11)
#define SYSCFG_MSR_SetDirtyEnO		(1 << 10)
#define SYSCFG_MSR_SetDirtyEnS		(1 <<  9)
#define SYSCFG_MSR_SetDirtyEnE		(1 <<  8)
#define SYSCFG_MSR_SysVicLimitMask	((1 << 8) - (1 << 5))
#define SYSCFG_MSR_SysAckLimitMask	((1 << 5) - (1 << 0))

#define IORR0_BASE			0xC0010016
#define IORR0_MASK			0xC0010017
#define IORR1_BASE			0xC0010018
#define IORR1_MASK			0xC0010019
#define TOP_MEM				0xC001001A
#define TOP_MEM2			0xC001001D

#define TOP_MEM_MASK			0x007fffff
#define TOP_MEM_MASK_KB			(TOP_MEM_MASK >> 10)


/* Definitions of various K8 registers */
/* Function 0 */
#define HT_TRANSACTION_CONTROL 0x68
#define  HTTC_DIS_RD_B_P            (1 << 0)
#define  HTTC_DIS_RD_DW_P           (1 << 1)
#define  HTTC_DIS_WR_B_P            (1 << 2)
#define  HTTC_DIS_WR_DW_P           (1 << 3)
#define  HTTC_DIS_MTS               (1 << 4)
#define  HTTC_CPU1_EN               (1 << 5)
#define  HTTC_CPU_REQ_PASS_PW       (1 << 6)
#define  HTTC_CPU_RD_RSP_PASS_PW    (1 << 7)
#define  HTTC_DIS_P_MEM_C           (1 << 8)
#define  HTTC_DIS_RMT_MEM_C         (1 << 9)
#define  HTTC_DIS_FILL_P            (1 << 10)
#define  HTTC_RSP_PASS_PW           (1 << 11)
#define  HTTC_CHG_ISOC_TO_ORD       (1 << 12)
#define  HTTC_BUF_REL_PRI_SHIFT     13
#define  HTTC_BUF_REL_PRI_MASK      3
#define   HTTC_BUF_REL_PRI_64       0
#define   HTTC_BUF_REL_PRI_16       1
#define   HTTC_BUF_REL_PRI_8        2
#define   HTTC_BUF_REL_PRI_2        3
#define  HTTC_LIMIT_CLDT_CFG        (1 << 15)
#define  HTTC_LINT_EN               (1 << 16)
#define  HTTC_APIC_EXT_BRD_CST      (1 << 17)
#define  HTTC_APIC_EXT_ID           (1 << 18)
#define  HTTC_APIC_EXT_SPUR         (1 << 19)
#define  HTTC_SEQ_ID_SRC_NODE_EN    (1 << 20)
#define  HTTC_DS_NP_REQ_LIMIT_SHIFT 21
#define  HTTC_DS_NP_REQ_LIMIT_MASK  3
#define   HTTC_DS_NP_REQ_LIMIT_NONE 0
#define   HTTC_DS_NP_REQ_LIMIT_1    1
#define   HTTC_DS_NP_REQ_LIMIT_4    2
#define   HTTC_DS_NP_REQ_LIMIT_8    3
#define  HTTC_MED_PRI_BYP_CNT_SHIFT 24
#define  HTTC_MED_PRI_BYP_CNT_MASK  3
#define  HTTC_HI_PRI_BYP_CNT_SHIFT  26
#define  HTTC_HI_PRI_BYP_CNT_MASK   3


/* Function 1 */
#define PCI_IO_BASE0       0xc0
#define PCI_IO_BASE1       0xc8
#define PCI_IO_BASE2       0xd0
#define PCI_IO_BASE3       0xd8
#define PCI_IO_BASE_VGA_EN (1 << 4)
#define PCI_IO_BASE_NO_ISA (1 << 5)


/* Function 2 */
#define DRAM_CSBASE	   0x40
#define DRAM_CSMASK	   0x60
#define DRAM_BANK_ADDR_MAP 0x80

#define DRAM_TIMING_LOW	   0x88
#define	 DTL_TCL_SHIFT	   0
#define	 DTL_TCL_MASK	   0x7
#define	  DTL_CL_2	   1
#define	  DTL_CL_3	   2
#define	  DTL_CL_2_5	   5
#define	 DTL_TRC_SHIFT	   4
#define	 DTL_TRC_MASK	   0xf
#define	  DTL_TRC_BASE	   7
#define	  DTL_TRC_MIN	   7
#define	  DTL_TRC_MAX	   22
#define	 DTL_TRFC_SHIFT	   8
#define	 DTL_TRFC_MASK	   0xf
#define	  DTL_TRFC_BASE	   9
#define	  DTL_TRFC_MIN	   9
#define	  DTL_TRFC_MAX	   24
#define	 DTL_TRCD_SHIFT	   12
#define	 DTL_TRCD_MASK	   0x7
#define	  DTL_TRCD_BASE	   0
#define	  DTL_TRCD_MIN	   2
#define	  DTL_TRCD_MAX	   6
#define	 DTL_TRRD_SHIFT	   16
#define	 DTL_TRRD_MASK	   0x7
#define	  DTL_TRRD_BASE	   0
#define	  DTL_TRRD_MIN	   2
#define	  DTL_TRRD_MAX	   4
#define	 DTL_TRAS_SHIFT	   20
#define	 DTL_TRAS_MASK	   0xf
#define	  DTL_TRAS_BASE	   0
#define	  DTL_TRAS_MIN	   5
#define	  DTL_TRAS_MAX	   15
#define	 DTL_TRP_SHIFT	   24
#define	 DTL_TRP_MASK	   0x7
#define	  DTL_TRP_BASE	   0
#define	  DTL_TRP_MIN	   2
#define	  DTL_TRP_MAX	   6
#define	 DTL_TWR_SHIFT	   28
#define	 DTL_TWR_MASK	   0x1
#define	  DTL_TWR_BASE	   2
#define	  DTL_TWR_MIN	   2
#define	  DTL_TWR_MAX	   3

#define DRAM_TIMING_HIGH   0x8c
#define	 DTH_TWTR_SHIFT	   0
#define	 DTH_TWTR_MASK	   0x1
#define	  DTH_TWTR_BASE	   1
#define	  DTH_TWTR_MIN	   1
#define	  DTH_TWTR_MAX	   2
#define	 DTH_TRWT_SHIFT	   4
#define	 DTH_TRWT_MASK	   0x7
#define	  DTH_TRWT_BASE	   1
#define	  DTH_TRWT_MIN	   1
#define	  DTH_TRWT_MAX	   6
#define	 DTH_TREF_SHIFT	   8
#define	 DTH_TREF_MASK	   0x1f
#define	  DTH_TREF_100MHZ_4K 0x00
#define	  DTH_TREF_133MHZ_4K 0x01
#define	  DTH_TREF_166MHZ_4K 0x02
#define	  DTH_TREF_200MHZ_4K 0x03
#define	  DTH_TREF_100MHZ_8K 0x08
#define	  DTH_TREF_133MHZ_8K 0x09
#define	  DTH_TREF_166MHZ_8K 0x0A
#define	  DTH_TREF_200MHZ_8K 0x0B
#define	 DTH_TWCL_SHIFT	    20
#define	 DTH_TWCL_MASK	    0x7
#define	  DTH_TWCL_BASE	    1
#define	  DTH_TWCL_MIN	    1
#define	  DTH_TWCL_MAX	    2

#define DRAM_CONFIG_LOW	   0x90
#define	 DCL_DLL_Disable   (1<<0)
#define	 DCL_D_DRV	   (1<<1)
#define	 DCL_QFC_EN	   (1<<2)
#define	 DCL_DisDqsHys	   (1<<3)
#define	 DCL_Burst2Opt     (1<<5)
#define	 DCL_DramInit	   (1<<8)
#define	 DCL_DualDIMMen    (1<<9)
#define	 DCL_DramEnable	   (1<<10)
#define	 DCL_MemClrStatus  (1<<11)
#define	 DCL_ESR	   (1<<12)
#define	 DCL_SRS	   (1<<13)
#define	 DCL_128BitEn	   (1<<16)
#define	 DCL_DimmEccEn	   (1<<17)
#define	 DCL_UnBufDimm	   (1<<18)
#define	 DCL_32ByteEn	   (1<<19)
#define	 DCL_x4DIMM_SHIFT  20
#define	 DCL_DisInRcvrs    (1<<24)
#define	 DCL_BypMax_SHIFT  25
#define	 DCL_En2T          (1<<28)
#define	 DCL_UpperCSMap    (1<<29)
	
#define DRAM_CONFIG_HIGH   0x94
#define	 DCH_ASYNC_LAT_SHIFT  0
#define	 DCH_ASYNC_LAT_MASK   0xf
#define	  DCH_ASYNC_LAT_BASE  0
#define	  DCH_ASYNC_LAT_MIN   0
#define	  DCH_ASYNC_LAT_MAX   15
#define	 DCH_RDPREAMBLE_SHIFT 8
#define	 DCH_RDPREAMBLE_MASK  0xf
#define	  DCH_RDPREAMBLE_BASE ((2<<1)+0) /* 2.0 ns */
#define	  DCH_RDPREAMBLE_MIN  ((2<<1)+0) /* 2.0 ns */
#define	  DCH_RDPREAMBLE_MAX  ((9<<1)+1) /* 9.5 ns */
#define	 DCH_IDLE_LIMIT_SHIFT 16
#define	 DCH_IDLE_LIMIT_MASK  0x7
#define	  DCH_IDLE_LIMIT_0    0
#define	  DCH_IDLE_LIMIT_4    1
#define	  DCH_IDLE_LIMIT_8    2
#define	  DCH_IDLE_LIMIT_16   3
#define	  DCH_IDLE_LIMIT_32   4
#define	  DCH_IDLE_LIMIT_64   5
#define	  DCH_IDLE_LIMIT_128  6
#define	  DCH_IDLE_LIMIT_256  7
#define	 DCH_DYN_IDLE_CTR_EN (1 << 19)
#define	 DCH_MEMCLK_SHIFT     20
#define	 DCH_MEMCLK_MASK      0x7
#define	  DCH_MEMCLK_100MHZ   0
#define	  DCH_MEMCLK_133MHZ   2
#define	  DCH_MEMCLK_166MHZ   5
#define	  DCH_MEMCLK_200MHZ   7
#define	 DCH_MEMCLK_VALID     (1 << 25)
#define	 DCH_MEMCLK_EN0	      (1 << 26) 
#define	 DCH_MEMCLK_EN1	      (1 << 27) 
#define	 DCH_MEMCLK_EN2	      (1 << 28) 
#define	 DCH_MEMCLK_EN3	      (1 << 29) 

/* Function 3 */
#define MCA_NB_CONFIG      0x44
#define   MNC_ECC_EN       (1 << 22)
#define   MNC_CHIPKILL_EN  (1 << 23)
#define SCRUB_CONTROL	   0x58
#define	  SCRUB_NONE	    0
#define	  SCRUB_40ns	    1
#define	  SCRUB_80ns	    2
#define	  SCRUB_160ns	    3
#define	  SCRUB_320ns	    4
#define	  SCRUB_640ns	    5
#define	  SCRUB_1_28us	    6
#define	  SCRUB_2_56us	    7
#define	  SCRUB_5_12us	    8
#define	  SCRUB_10_2us	    9
#define	  SCRUB_20_5us	   10
#define	  SCRUB_41_0us	   11
#define	  SCRUB_81_9us	   12
#define	  SCRUB_163_8us	   13
#define	  SCRUB_327_7us	   14
#define	  SCRUB_655_4us	   15
#define	  SCRUB_1_31ms	   16
#define	  SCRUB_2_62ms	   17
#define	  SCRUB_5_24ms	   18 
#define	  SCRUB_10_49ms	   19
#define	  SCRUB_20_97ms	   20
#define	  SCRUB_42ms	   21
#define	  SCRUB_84ms	   22
#define	 SC_DRAM_SCRUB_RATE_SHFIT  0
#define	 SC_DRAM_SCRUB_RATE_MASK   0x1f
#define	 SC_L2_SCRUB_RATE_SHIFT	   8
#define	 SC_L2_SCRUB_RATE_MASK	   0x1f
#define	 SC_L1D_SCRUB_RATE_SHIFT   16
#define	 SC_L1D_SCRUB_RATE_MASK	   0x1f
#define SCRUB_ADDR_LOW	   0x5C
#define SCRUB_ADDR_HIGH	   0x60
#define NORTHBRIDGE_CAP	   0xE8
#define	 NBCAP_128Bit	      (1 << 0)
#define	 NBCAP_MP	      (1 << 1)
#define	 NBCAP_BIG_MP	      (1 << 2)
#define	 NBCAP_ECC	      (1 << 3)
#define	 NBCAP_CHIPKILL_ECC   (1 << 4)
#define	 NBCAP_MEMCLK_SHIFT   5
#define	 NBCAP_MEMCLK_MASK    3
#define	 NBCAP_MEMCLK_100MHZ  3
#define	 NBCAP_MEMCLK_133MHZ  2
#define	 NBCAP_MEMCLK_166MHZ  1
#define	 NBCAP_MEMCLK_200MHZ  0
#define	 NBCAP_MEMCTRL	      (1 << 8)

/* resources for the routing in the northbridge. These may be family specific; 
 * the were in v2. 
 */
#define RES_DEBUG 0
#define RES_PCI_IO 0x10
#define RES_PORT_IO_8 0x22
#define RES_PORT_IO_32 0x20
#define RES_MEM_IO 0x40

#define LinkConnected     (1 << 0)
#define InitComplete      (1 << 1)
#define NonCoherent       (1 << 2)
#define ConnectionPending (1 << 4)

#ifndef ASSEMBLY

/* Steppings of the K8 cpu */
enum steppings {
  A0,
  A1,
  A2,
  B0,
  C0,
  CG,
};
/* cpu version -- no support for f0 yet */
static inline int is_cpu_rev_a0(void)
{
	return (cpuid_eax(1) & 0xfffef) == 0x0f00;
}
static inline int is_cpu_pre_c0(void)
{
        return (cpuid_eax(1) & 0xfffef) < 0x0f48;
}

static inline int is_cpu_c0(void)
{
        return (cpuid_eax(1) & 0xfffef) == 0x0f48;
}

static inline int is_cpu_pre_b3(void)
{
        return (cpuid_eax(1) & 0xfffef) < 0x0f41;
}

static inline int is_cpu_b3(void)
{
        return (cpuid_eax(1) & 0xfffef) == 0x0f41;
}
//AMD_D0_SUPPORT
static inline int is_cpu_pre_d0(void)
{
        return (cpuid_eax(1) & 0xfff0f) < 0x10f00;
}

static inline int is_cpu_d0(void)
{
        return (cpuid_eax(1) & 0xfff0f) == 0x10f00;
}

//AMD_E0_SUPPORT
static inline int is_cpu_pre_e0(void)
{
        return (cpuid_eax(1) & 0xfff0f) < 0x20f00;
}

static inline int is_cpu_e0(void)
{
        return (cpuid_eax(1) & 0xfff00) == 0x20f00;
}


/* note: we'd like to have this sysinfo common to all K8, there's no need to
 * have one different kind per different kind of k8 at this point. 
 */
//#include "raminit.h"

struct dimm_size {
        u8 per_rank; // it is rows + col + bank_lines + data lines */
	u8 side1, side2;
        u8 rows;
        u8 col;
        u8 bank; //1, 2, 3 mean 2, 4, 8
        u8 rank;
} __attribute__((packed));

struct mem_info { // pernode
        u32 dimm_mask;
        struct dimm_size sz[DIMM_SOCKETS];
        u32 x4_mask;
        u32 x16_mask;
	u32 single_rank_mask;
        u32 page_1k_mask;
//        u32 ecc_mask;
//        u32 registered_mask;
        u8 is_opteron;
        u8 is_registered;
        u8 is_ecc;
        u8 is_Width128;
        u8 memclk_set; // we need to use this to retrieve the mem param
	u8 rsv[3];
} __attribute__((packed));

struct mem_controller {
	unsigned node_id;
	/* NOTE: these are in "BDF" format -- i.e. bus in upper 16, devfn in upper 8 of lower 16 */
	u32 f0, f1, f2, f3;
	u32 channel0[DIMM_SOCKETS];
	u32 channel1[DIMM_SOCKETS];
};

struct link_pair_st {
	u32 udev;
	u32	upos;
	u32	uoffs;
	u32	dev;
	u32	pos;
	u32	offs;

} __attribute__((packed));

struct sys_info {
	u8 ctrl_present[NODE_NUMS];
	struct mem_info meminfo[NODE_NUMS];
	struct mem_controller ctrl[NODE_NUMS];
	u8 mem_trained[NODE_NUMS]; //0: no dimm, 1: trained, 0x80: not started, 0x81: recv1 fail, 0x82: Pos Fail, 0x83:recv2 fail
	u32 tom_k;
	u32 tom2_k;

	u32 mem_base[NODE_NUMS];
	u32 cs_base[NODE_NUMS*8]; //8 cs_idx
	u32 hole_reg[NODE_NUMS]; // can we spare it to one, and put ctrl idx in it

	u8 dqs_delay_a[NODE_NUMS*2*2*9]; //8 node channel 2, direction 2 , bytelane *9
	u8 dqs_rcvr_dly_a[NODE_NUMS*2*8]; //8 node, channel 2, receiver 8
	u32 nodes;
	struct link_pair_st link_pair[16];// enough? only in_conherent
	u32 link_pair_num;
	u32 ht_c_num;
	u32 sbdn;
	u32 sblk;
	u32 sbbusn;
} __attribute__((packed));

/* dual core support */
unsigned int read_nb_cfg_54(void);

struct node_core_id {
        unsigned nodeid;
        unsigned coreid;
};

// it can be used to get unitid and coreid it running only
struct node_core_id get_node_core_id(unsigned int nb_cfg_54);

struct device;
unsigned get_apicid_base(unsigned ioapic_num);
void amd_sibling_init(struct device *cpu);

#endif /* ! ASSEMBLY */
