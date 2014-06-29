/* 
**      tech/include/ieeemii.h 
** 
**      Definitions and Functions declarations for access to 
**	IEEE 802.3u/d4 MII compliant PHY devices
**      $Archive:   /nsclib/tech/include/vcs/ieeemii.h_v  $ 
**      $Author:   croussel  $ 
**      $Revision:   1.2  $ 
** 
**      $Log:   /nsclib/tech/include/vcs/ieeemii.h_v  $ 
**	
**	   Rev 1.2   02/28/95 09:29:32   croussel
**	extended definitions of ID registers
**	
**	   Rev 1.1   02/27/95 09:18:06   croussel
**	added NSC ID definitions
**	
**	   Rev 1.0   02/09/95 17:11:44   croussel
**	Initial revision.
*/
#ifndef	_ieeemii_h_
#define _ieeemii_h_ 1

/* MII register offsets */
#define		MII_CONTROL		0x0000
#define		MII_STATUS		0x0001
#define		MII_PHY_ID0		0x0002
#define		MII_PHY_ID1		0x0003
#define		MII_ANAR		0x0004
#define		MII_ANLPAR		0x0005
#define		MII_ANER		0x0006
#define		MII_ANNPTR		0x0007
#define		MII_ANNPRR		0x0008
#define		MII_1KTCR		0x0009
#define		MII_1KSTSR		0x000A
#define		MII_EXTSTATUS		0x000F

/* MII Control register bit definitions. */
#define		MIICNTL_SPEED1		0x0040
/* # define	MIICNTL_COL_TST		0x0080 */
#define		MIICNTL_FDX		0x0100
#define		MIICNTL_RST_AUTO	0x0200
#define		MIICNTL_ISOLATE		0x0400
#define		MIICNTL_PWRDWN		0x0800
#define		MIICNTL_AUTO		0x1000
//#define	MIICNTL_SPEED		0x2000
#define		MIICNTL_SPEED0		0x2000
#define		MIICNTL_LPBK		0x4000
#define		MIICNTL_RESET		0x8000

/* MII Status register bit significance. */
#define		MIISTAT_EXT		0x0001
#define		MIISTAT_JAB		0x0002
#define		MIISTAT_LINK		0x0004
#define		MIISTAT_CAN_AUTO	0x0008
#define		MIISTAT_FAULT		0x0010
#define		MIISTAT_AUTO_DONE	0x0020
#define		MIISTAT_EXTSTS		0x0100
#define		MIISTAT_CAN_T		0x0800
#define		MIISTAT_CAN_T_FDX	0x1000
#define		MIISTAT_CAN_TX		0x2000
#define		MIISTAT_CAN_TX_FDX	0x4000
#define		MIISTAT_CAN_T4		0x8000

/* MII ID1 register bits */
#define		MII_ID1_OUI_LO		0xFC00	/* low bits of OUI mask */
#define		MII_ID1_MODEL		0x03F0	/* model number */
#define		MII_ID1_REV		0x000F	/* model number */

/* NSC's MII definitions */
#define		MII_ID0_NSC		0x2000	/* 08-00-17(21:6) */
#define		MII_ID1_NSC		0x5C00	/* 08-00-17(5:0) */
#define		MII_DP83840		0x0000	/* plexus model number */
#define		MII_DP83810		0x0010	/* euphrates model number */
#define		MII_DP83861		0x0060  /* what name is DP83861? *?

/* MII NWAY Register Bits ...
** valid for the ANAR (Auto-Negotiation Advertisement) and
** ANLPAR (Auto-Negotiation Link Partner) registers */
#define		MII_NWAY_NODE_SEL	0x001f
#define		MII_NWAY_CSMA_CD	0x0001
#define		MII_NWAY_T		0x0020
#define		MII_NWAY_T_FDX		0x0040
#define		MII_NWAY_TX		0x0080
#define		MII_NWAY_TX_FDX		0x0100
#define		MII_NWAY_T4		0x0200
#define		MII_NWAY_PAUSE		0x0400
#define		MII_NWAY_ASY_PAUSE	0x0800
#define		MII_NWAY_RF		0x2000
#define		MII_NWAY_ACK		0x4000
#define		MII_NWAY_NP		0x8000

/* MII Auto-Negotiation Expansion Register Bits */
#define		MII_ANER_PDF		0x0010
#define		MII_ANER_LP_NP_ABLE	0x0008
#define		MII_ANER_NP_ABLE	0x0004
#define		MII_ANER_RX_PAGE	0x0002
#define		MII_ANER_LP_AN_ABLE	0x0001

/* MII Auto-Negotiation Next Page Register Bits...
** valid for the ANNPTR(Auto Negotiation Next Page Transmit) and
** ANNPRR(Auto Negotiation Next Page Receive) registers */
#define		MII_ANNP_NP		0x8000
#define		MII_ANNP_MP		0x2000
#define		MII_ANNP_ACK2		0x1000
#define		MII_ANNP_TOG		0x0800
#define		MII_ANNP_CODE		0x07FF	/* mask */


/* GMII 1000BASE-T Control Register Bits */
#define		MII_1KTCR_MSE		0x1000
#define		MII_1KTCR_MSA		0x0800
#define		MII_1KTCR_PORT_TYPE	0x0400
#define		MII_1KTCR_FD		0x0200
#define		MII_1KTCR_HD		0x0100

/* GMII 1000BASE-T Status Register Bits */
#define		MII_1KSTSR_MSF		0x8000
#define		MII_1KSTSR_MSR		0x4000
#define		MII_1KSTSR_LSTS		0x2000
#define		MII_1KSTSR_RSTS		0x1000
#define		MII_1KSTSR_LP_FD	0x0800
#define		MII_1KSTSR_LP_HD	0x0400
#define		MII_1KSTSR_LP_ASM	0x0200
#define		MII_1KSTSR_IDLE		0x00FF

/* GMII 1000BASE-T Extended Status Register Bits */
#define		MII_1KSCR_X_FDX		0x8000
#define		MII_1KSCR_X		0x4000
#define		MII_1KSCR_T_FDX		0x2000
#define		MII_1KSCR_T		0x1000


#endif
