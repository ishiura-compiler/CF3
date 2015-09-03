#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x103 = 275680214LL;
volatile uint16_t x160 = 9U;
int64_t x195 = INT64_MAX;
volatile int32_t x211 = -1;
int32_t t5 = -44985707;
volatile int16_t x219 = 1;
uint8_t x220 = 17U;
int32_t t8 = -749;
volatile int16_t x397 = INT16_MAX;
static uint64_t x398 = 32LLU;
int16_t x435 = 0;
int8_t x436 = 1;
static volatile int64_t x547 = INT64_MAX;
int32_t t12 = 2030;
int8_t x680 = 0;
static uint32_t x714 = 85372U;
uint8_t x740 = 18U;
static volatile int32_t t19 = -86291;
volatile uint8_t x865 = 1U;
int16_t x867 = INT16_MIN;
int16_t x877 = INT16_MIN;
int8_t x879 = -1;
volatile int32_t t21 = -911;
volatile uint32_t x918 = 1018764U;
static uint32_t x920 = 8U;
uint8_t x956 = 1U;
static volatile int8_t x972 = 5;
static volatile int16_t x1117 = -10;
int16_t x1122 = INT16_MIN;
int32_t t30 = 16495;
int16_t x1133 = -1;
uint8_t x1314 = UINT8_MAX;
volatile int32_t x1315 = INT32_MAX;
static volatile int32_t t35 = 7;
int32_t t36 = 321;
int32_t t39 = 51728248;
static volatile int8_t x1543 = INT8_MAX;
int8_t x1544 = 1;
int32_t x1545 = INT32_MIN;
static volatile int32_t t42 = -505562;
volatile int32_t t43 = -542476;
volatile int32_t x1614 = INT32_MIN;
volatile int32_t t46 = -116593;
uint8_t x1672 = 1U;
static uint64_t x1696 = 7LLU;
uint16_t x1702 = UINT16_MAX;
int8_t x1708 = 0;
uint16_t x1731 = UINT16_MAX;
int8_t x1733 = INT8_MIN;
uint8_t x1735 = 11U;
int16_t x1737 = 28;
int8_t x1738 = -32;
int8_t x1748 = 3;
static int32_t x1773 = INT32_MIN;
volatile int32_t x1776 = 1;
int32_t x1795 = -1;
int32_t t60 = -20;
uint8_t x1837 = 125U;
static volatile int32_t t61 = 19139892;
int8_t x1858 = INT8_MAX;
volatile int16_t x1887 = INT16_MIN;
uint8_t x1900 = 27U;
int8_t x1917 = INT8_MIN;
static volatile int32_t t65 = -245454;
static uint32_t x1949 = UINT32_MAX;
volatile int64_t x1953 = INT64_MAX;
static int32_t x1955 = INT32_MIN;
static int32_t t67 = -54;
static volatile uint32_t x1958 = 147553U;
static volatile uint32_t x2006 = UINT32_MAX;
volatile int32_t t70 = 122483;
int64_t x2123 = -1LL;
uint16_t x2124 = 4U;
int8_t x2152 = 0;
volatile int32_t x2196 = 2;
int32_t t76 = 151105880;
volatile uint64_t x2197 = UINT64_MAX;
int32_t t77 = 14091;
int16_t x2266 = INT16_MAX;
volatile uint8_t x2285 = 3U;
int32_t x2286 = INT32_MAX;
static uint16_t x2288 = 7U;
int16_t x2366 = -24;
volatile int32_t t85 = -6345573;
int32_t x2494 = 383772;
volatile int64_t x2495 = INT64_MAX;
static volatile int32_t t88 = 15680180;
static int8_t x2501 = INT8_MIN;
volatile int32_t t89 = -227076901;
volatile int8_t x2552 = 0;
uint16_t x2575 = 3420U;
volatile uint32_t x2591 = 417817317U;
static int32_t t92 = 4;


void f0(void) {
	int16_t x101 = INT16_MIN;
	int8_t x102 = INT8_MAX;
	uint8_t x104 = 1U;
	volatile int32_t t0 = -402845744;

	t0 = (((x101/x102)<x103)<<x104);

	if (t0 != 2) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x109 = INT64_MAX;
	int16_t x110 = -208;
	volatile uint32_t x111 = UINT32_MAX;
	int16_t x112 = 12;
	int32_t t1 = 140418887;

	t1 = (((x109/x110)<x111)<<x112);

	if (t1 != 4096) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x157 = -9232;
	volatile int32_t x158 = 248;
	int32_t x159 = INT32_MIN;
	int32_t t2 = 169004;

	t2 = (((x157/x158)<x159)<<x160);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x173 = INT16_MIN;
	int32_t x174 = 196;
	uint32_t x175 = 17687U;
	static volatile uint8_t x176 = 2U;
	static volatile int32_t t3 = 414;

	t3 = (((x173/x174)<x175)<<x176);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x193 = -1;
	int16_t x194 = -3191;
	uint16_t x196 = 0U;
	volatile int32_t t4 = -1;

	t4 = (((x193/x194)<x195)<<x196);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x209 = 4;
	uint64_t x210 = 61530610282LLU;
	uint8_t x212 = 0U;

	t5 = (((x209/x210)<x211)<<x212);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x217 = INT16_MAX;
	int16_t x218 = 5819;
	volatile int32_t t6 = -15233577;

	t6 = (((x217/x218)<x219)<<x220);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x277 = 17U;
	int32_t x278 = INT32_MAX;
	int32_t x279 = -193;
	uint8_t x280 = 21U;
	int32_t t7 = 994;

	t7 = (((x277/x278)<x279)<<x280);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x285 = INT8_MIN;
	static uint8_t x286 = 7U;
	static int8_t x287 = -1;
	int32_t x288 = 0;

	t8 = (((x285/x286)<x287)<<x288);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x399 = -1;
	uint64_t x400 = 22LLU;
	volatile int32_t t9 = 725457;

	t9 = (((x397/x398)<x399)<<x400);

	if (t9 != 4194304) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x433 = 7719056094986LL;
	volatile int64_t x434 = INT64_MIN;
	int32_t t10 = 385921;

	t10 = (((x433/x434)<x435)<<x436);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x509 = 228489745034LLU;
	uint8_t x510 = 41U;
	uint32_t x511 = UINT32_MAX;
	uint32_t x512 = 18U;
	volatile int32_t t11 = 1938916;

	t11 = (((x509/x510)<x511)<<x512);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x545 = UINT8_MAX;
	int64_t x546 = INT64_MIN;
	int8_t x548 = 14;

	t12 = (((x545/x546)<x547)<<x548);

	if (t12 != 16384) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x569 = INT8_MIN;
	int8_t x570 = -1;
	static int16_t x571 = 866;
	int8_t x572 = 13;
	int32_t t13 = -17842;

	t13 = (((x569/x570)<x571)<<x572);

	if (t13 != 8192) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x637 = INT16_MIN;
	int16_t x638 = INT16_MAX;
	uint16_t x639 = UINT16_MAX;
	volatile int8_t x640 = 0;
	volatile int32_t t14 = 14117142;

	t14 = (((x637/x638)<x639)<<x640);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x677 = 3506502U;
	volatile uint16_t x678 = 192U;
	uint32_t x679 = UINT32_MAX;
	volatile int32_t t15 = 0;

	t15 = (((x677/x678)<x679)<<x680);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x693 = -1;
	volatile int8_t x694 = 2;
	uint16_t x695 = 207U;
	volatile int8_t x696 = 9;
	volatile int32_t t16 = -72707;

	t16 = (((x693/x694)<x695)<<x696);

	if (t16 != 512) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x701 = 171017564607963930LLU;
	int32_t x702 = INT32_MIN;
	int64_t x703 = -3LL;
	static uint8_t x704 = 11U;
	int32_t t17 = 0;

	t17 = (((x701/x702)<x703)<<x704);

	if (t17 != 2048) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x713 = -1;
	int8_t x715 = 37;
	uint32_t x716 = 6U;
	volatile int32_t t18 = -1621595;

	t18 = (((x713/x714)<x715)<<x716);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x737 = INT8_MIN;
	uint8_t x738 = 36U;
	static int16_t x739 = INT16_MAX;

	t19 = (((x737/x738)<x739)<<x740);

	if (t19 != 262144) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x866 = 53;
	uint16_t x868 = 31U;
	volatile int32_t t20 = 926615916;

	t20 = (((x865/x866)<x867)<<x868);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x878 = 21402812U;
	volatile uint32_t x880 = 2U;

	t21 = (((x877/x878)<x879)<<x880);

	if (t21 != 4) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x917 = 6;
	int16_t x919 = INT16_MIN;
	volatile int32_t t22 = -6;

	t22 = (((x917/x918)<x919)<<x920);

	if (t22 != 256) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x941 = -1;
	static uint64_t x942 = UINT64_MAX;
	int8_t x943 = -1;
	uint64_t x944 = 17LLU;
	int32_t t23 = 5506;

	t23 = (((x941/x942)<x943)<<x944);

	if (t23 != 131072) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x953 = INT16_MIN;
	int32_t x954 = -509445;
	static int8_t x955 = -1;
	volatile int32_t t24 = -28;

	t24 = (((x953/x954)<x955)<<x956);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x969 = 15267U;
	int64_t x970 = -1LL;
	int64_t x971 = -204521164511320583LL;
	int32_t t25 = 46816769;

	t25 = (((x969/x970)<x971)<<x972);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x993 = INT64_MAX;
	int64_t x994 = -1LL;
	int64_t x995 = INT64_MIN;
	int8_t x996 = 19;
	volatile int32_t t26 = 0;

	t26 = (((x993/x994)<x995)<<x996);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x1009 = -367;
	uint32_t x1010 = 112U;
	int16_t x1011 = -52;
	uint16_t x1012 = 7U;
	volatile int32_t t27 = 650378303;

	t27 = (((x1009/x1010)<x1011)<<x1012);

	if (t27 != 128) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x1021 = INT32_MAX;
	static volatile int8_t x1022 = -1;
	volatile uint8_t x1023 = UINT8_MAX;
	uint8_t x1024 = 16U;
	int32_t t28 = -5594;

	t28 = (((x1021/x1022)<x1023)<<x1024);

	if (t28 != 65536) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x1118 = INT16_MIN;
	volatile int64_t x1119 = -1LL;
	uint32_t x1120 = 0U;
	volatile int32_t t29 = 116580;

	t29 = (((x1117/x1118)<x1119)<<x1120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x1121 = 358474595102577649LLU;
	int16_t x1123 = INT16_MIN;
	int8_t x1124 = 1;

	t30 = (((x1121/x1122)<x1123)<<x1124);

	if (t30 != 2) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x1134 = INT32_MAX;
	int16_t x1135 = INT16_MIN;
	int16_t x1136 = 1;
	static volatile int32_t t31 = 487063;

	t31 = (((x1133/x1134)<x1135)<<x1136);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1153 = 0;
	uint32_t x1154 = 7907375U;
	uint64_t x1155 = UINT64_MAX;
	static uint8_t x1156 = 2U;
	volatile int32_t t32 = 36059692;

	t32 = (((x1153/x1154)<x1155)<<x1156);

	if (t32 != 4) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x1313 = 52U;
	int16_t x1316 = 22;
	volatile int32_t t33 = 1;

	t33 = (((x1313/x1314)<x1315)<<x1316);

	if (t33 != 4194304) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1333 = INT32_MIN;
	static uint32_t x1334 = 5U;
	int32_t x1335 = 536;
	uint8_t x1336 = 12U;
	int32_t t34 = -103574995;

	t34 = (((x1333/x1334)<x1335)<<x1336);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1345 = INT8_MIN;
	int32_t x1346 = -1;
	static int32_t x1347 = INT32_MAX;
	int8_t x1348 = 0;

	t35 = (((x1345/x1346)<x1347)<<x1348);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x1349 = 86975316U;
	int8_t x1350 = -1;
	int64_t x1351 = -1LL;
	static uint16_t x1352 = 2U;

	t36 = (((x1349/x1350)<x1351)<<x1352);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1377 = 8389630825020LL;
	uint32_t x1378 = UINT32_MAX;
	uint8_t x1379 = 75U;
	int8_t x1380 = 31;
	int32_t t37 = -116;

	t37 = (((x1377/x1378)<x1379)<<x1380);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x1393 = 300731U;
	static int64_t x1394 = -1LL;
	static uint8_t x1395 = 16U;
	int64_t x1396 = 14LL;
	int32_t t38 = -105928546;

	t38 = (((x1393/x1394)<x1395)<<x1396);

	if (t38 != 16384) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x1429 = 7;
	int64_t x1430 = -6684328LL;
	static int8_t x1431 = INT8_MIN;
	int16_t x1432 = 0;

	t39 = (((x1429/x1430)<x1431)<<x1432);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x1533 = INT16_MIN;
	volatile uint32_t x1534 = UINT32_MAX;
	int16_t x1535 = INT16_MIN;
	uint8_t x1536 = 3U;
	static volatile int32_t t40 = -22760564;

	t40 = (((x1533/x1534)<x1535)<<x1536);

	if (t40 != 8) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x1541 = INT8_MIN;
	uint32_t x1542 = 64901588U;
	int32_t t41 = 2;

	t41 = (((x1541/x1542)<x1543)<<x1544);

	if (t41 != 2) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x1546 = 38;
	static volatile uint32_t x1547 = UINT32_MAX;
	int8_t x1548 = 9;

	t42 = (((x1545/x1546)<x1547)<<x1548);

	if (t42 != 512) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x1573 = INT8_MAX;
	uint8_t x1574 = 28U;
	uint32_t x1575 = 50196U;
	uint8_t x1576 = 2U;

	t43 = (((x1573/x1574)<x1575)<<x1576);

	if (t43 != 4) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x1613 = -1881220448696826979LL;
	uint16_t x1615 = 2U;
	static uint16_t x1616 = 2U;
	static volatile int32_t t44 = 131594;

	t44 = (((x1613/x1614)<x1615)<<x1616);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x1641 = INT32_MIN;
	volatile uint64_t x1642 = UINT64_MAX;
	static int16_t x1643 = 11;
	uint16_t x1644 = 1U;
	static int32_t t45 = 627071645;

	t45 = (((x1641/x1642)<x1643)<<x1644);

	if (t45 != 2) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x1665 = 7650020759926053LLU;
	static volatile uint8_t x1666 = 15U;
	uint16_t x1667 = 241U;
	uint8_t x1668 = 10U;

	t46 = (((x1665/x1666)<x1667)<<x1668);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x1669 = 0U;
	int64_t x1670 = -1LL;
	uint64_t x1671 = UINT64_MAX;
	volatile int32_t t47 = -1;

	t47 = (((x1669/x1670)<x1671)<<x1672);

	if (t47 != 2) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x1693 = 1LL;
	uint64_t x1694 = UINT64_MAX;
	int8_t x1695 = INT8_MAX;
	volatile int32_t t48 = 488697240;

	t48 = (((x1693/x1694)<x1695)<<x1696);

	if (t48 != 128) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x1701 = -1;
	int8_t x1703 = -1;
	uint32_t x1704 = 4U;
	volatile int32_t t49 = 84300482;

	t49 = (((x1701/x1702)<x1703)<<x1704);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x1705 = 53421U;
	static uint8_t x1706 = 3U;
	int32_t x1707 = -1;
	static volatile int32_t t50 = 2;

	t50 = (((x1705/x1706)<x1707)<<x1708);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x1729 = 0U;
	uint8_t x1730 = UINT8_MAX;
	int16_t x1732 = 22;
	int32_t t51 = 1;

	t51 = (((x1729/x1730)<x1731)<<x1732);

	if (t51 != 4194304) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x1734 = INT64_MAX;
	uint8_t x1736 = 3U;
	volatile int32_t t52 = -7691893;

	t52 = (((x1733/x1734)<x1735)<<x1736);

	if (t52 != 8) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x1739 = INT64_MAX;
	int8_t x1740 = 0;
	int32_t t53 = -2208;

	t53 = (((x1737/x1738)<x1739)<<x1740);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x1745 = -1;
	int16_t x1746 = -44;
	int32_t x1747 = INT32_MIN;
	int32_t t54 = 9855;

	t54 = (((x1745/x1746)<x1747)<<x1748);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x1757 = 0;
	int32_t x1758 = 1;
	static int32_t x1759 = INT32_MAX;
	uint16_t x1760 = 2U;
	int32_t t55 = -1;

	t55 = (((x1757/x1758)<x1759)<<x1760);

	if (t55 != 4) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x1769 = -1;
	int8_t x1770 = -25;
	volatile int32_t x1771 = -17;
	int8_t x1772 = 11;
	volatile int32_t t56 = 1;

	t56 = (((x1769/x1770)<x1771)<<x1772);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x1774 = INT16_MIN;
	int8_t x1775 = INT8_MIN;
	int32_t t57 = 3;

	t57 = (((x1773/x1774)<x1775)<<x1776);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x1789 = 6209263451190273208LLU;
	int64_t x1790 = INT64_MIN;
	int16_t x1791 = -1;
	static uint16_t x1792 = 18U;
	int32_t t58 = -1;

	t58 = (((x1789/x1790)<x1791)<<x1792);

	if (t58 != 262144) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x1793 = 6;
	static int16_t x1794 = 19;
	int8_t x1796 = 0;
	volatile int32_t t59 = -394002029;

	t59 = (((x1793/x1794)<x1795)<<x1796);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x1801 = 2U;
	uint16_t x1802 = 5547U;
	int32_t x1803 = -3;
	uint8_t x1804 = 1U;

	t60 = (((x1801/x1802)<x1803)<<x1804);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x1838 = INT32_MIN;
	int32_t x1839 = 6683;
	int8_t x1840 = 13;

	t61 = (((x1837/x1838)<x1839)<<x1840);

	if (t61 != 8192) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x1857 = 648U;
	uint16_t x1859 = 28U;
	volatile uint8_t x1860 = 3U;
	volatile int32_t t62 = -84002;

	t62 = (((x1857/x1858)<x1859)<<x1860);

	if (t62 != 8) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x1885 = 344758LL;
	static int32_t x1886 = -1;
	int8_t x1888 = 5;
	volatile int32_t t63 = 8151989;

	t63 = (((x1885/x1886)<x1887)<<x1888);

	if (t63 != 32) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x1897 = -7110;
	int64_t x1898 = -469453691491289861LL;
	static volatile int16_t x1899 = 19;
	static int32_t t64 = -105772413;

	t64 = (((x1897/x1898)<x1899)<<x1900);

	if (t64 != 134217728) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x1918 = 24458937239LLU;
	uint8_t x1919 = UINT8_MAX;
	int8_t x1920 = 7;

	t65 = (((x1917/x1918)<x1919)<<x1920);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x1950 = 10U;
	int16_t x1951 = 48;
	uint16_t x1952 = 0U;
	int32_t t66 = 262;

	t66 = (((x1949/x1950)<x1951)<<x1952);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x1954 = INT8_MIN;
	int16_t x1956 = 23;

	t67 = (((x1953/x1954)<x1955)<<x1956);

	if (t67 != 8388608) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x1957 = UINT16_MAX;
	volatile int64_t x1959 = INT64_MAX;
	volatile uint8_t x1960 = 1U;
	volatile int32_t t68 = -4086;

	t68 = (((x1957/x1958)<x1959)<<x1960);

	if (t68 != 2) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x2005 = UINT16_MAX;
	volatile int64_t x2007 = 14431672LL;
	volatile int8_t x2008 = 1;
	volatile int32_t t69 = -4778038;

	t69 = (((x2005/x2006)<x2007)<<x2008);

	if (t69 != 2) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x2077 = 130516U;
	volatile int64_t x2078 = -4230232348562336824LL;
	volatile uint64_t x2079 = 128LLU;
	int8_t x2080 = 9;

	t70 = (((x2077/x2078)<x2079)<<x2080);

	if (t70 != 512) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x2097 = 94864276U;
	int64_t x2098 = -94244LL;
	int32_t x2099 = INT32_MAX;
	int8_t x2100 = 1;
	static int32_t t71 = 20;

	t71 = (((x2097/x2098)<x2099)<<x2100);

	if (t71 != 2) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x2121 = 1;
	volatile int8_t x2122 = -1;
	int32_t t72 = -1;

	t72 = (((x2121/x2122)<x2123)<<x2124);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x2125 = 86588292LLU;
	volatile int32_t x2126 = -62;
	uint32_t x2127 = UINT32_MAX;
	static uint8_t x2128 = 0U;
	volatile int32_t t73 = -3176762;

	t73 = (((x2125/x2126)<x2127)<<x2128);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x2141 = 12U;
	static int8_t x2142 = -3;
	volatile int8_t x2143 = INT8_MIN;
	uint8_t x2144 = 9U;
	volatile int32_t t74 = 524;

	t74 = (((x2141/x2142)<x2143)<<x2144);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x2149 = INT64_MIN;
	int32_t x2150 = 21798144;
	volatile int8_t x2151 = -1;
	static int32_t t75 = -236329020;

	t75 = (((x2149/x2150)<x2151)<<x2152);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x2193 = 0U;
	uint32_t x2194 = 226U;
	int64_t x2195 = 1LL;

	t76 = (((x2193/x2194)<x2195)<<x2196);

	if (t76 != 4) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x2198 = -49994041LL;
	volatile int8_t x2199 = -1;
	uint32_t x2200 = 0U;

	t77 = (((x2197/x2198)<x2199)<<x2200);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x2217 = 257436236808043589LLU;
	static int32_t x2218 = INT32_MIN;
	static int8_t x2219 = INT8_MIN;
	static uint16_t x2220 = 7U;
	volatile int32_t t78 = 1085;

	t78 = (((x2217/x2218)<x2219)<<x2220);

	if (t78 != 128) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x2245 = -11;
	static uint16_t x2246 = 31822U;
	int32_t x2247 = 8;
	uint8_t x2248 = 0U;
	static volatile int32_t t79 = -32526625;

	t79 = (((x2245/x2246)<x2247)<<x2248);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x2265 = INT16_MIN;
	int32_t x2267 = -111093041;
	int16_t x2268 = 0;
	static volatile int32_t t80 = -45;

	t80 = (((x2265/x2266)<x2267)<<x2268);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x2281 = 93169105LLU;
	int64_t x2282 = INT64_MIN;
	int32_t x2283 = -27;
	int64_t x2284 = 17LL;
	volatile int32_t t81 = 2499;

	t81 = (((x2281/x2282)<x2283)<<x2284);

	if (t81 != 131072) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x2287 = INT8_MAX;
	int32_t t82 = 2;

	t82 = (((x2285/x2286)<x2287)<<x2288);

	if (t82 != 128) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x2309 = INT32_MIN;
	uint16_t x2310 = 11929U;
	int8_t x2311 = INT8_MIN;
	int16_t x2312 = 3;
	static volatile int32_t t83 = -122906173;

	t83 = (((x2309/x2310)<x2311)<<x2312);

	if (t83 != 8) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x2365 = -841595120;
	int8_t x2367 = -1;
	volatile int8_t x2368 = 1;
	static int32_t t84 = 0;

	t84 = (((x2365/x2366)<x2367)<<x2368);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x2409 = 2U;
	uint8_t x2410 = 1U;
	int16_t x2411 = INT16_MIN;
	uint16_t x2412 = 1U;

	t85 = (((x2409/x2410)<x2411)<<x2412);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x2429 = UINT32_MAX;
	int16_t x2430 = -1;
	uint16_t x2431 = 11U;
	static uint8_t x2432 = 14U;
	volatile int32_t t86 = -24851451;

	t86 = (((x2429/x2430)<x2431)<<x2432);

	if (t86 != 16384) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x2493 = INT16_MIN;
	uint64_t x2496 = 0LLU;
	int32_t t87 = -315592067;

	t87 = (((x2493/x2494)<x2495)<<x2496);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x2497 = 681565079275746LL;
	int64_t x2498 = -1LL;
	int64_t x2499 = -15079083687LL;
	volatile uint8_t x2500 = 13U;

	t88 = (((x2497/x2498)<x2499)<<x2500);

	if (t88 != 8192) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x2502 = 1U;
	int32_t x2503 = INT32_MAX;
	int64_t x2504 = 9LL;

	t89 = (((x2501/x2502)<x2503)<<x2504);

	if (t89 != 512) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x2549 = -1;
	int64_t x2550 = INT64_MIN;
	volatile uint8_t x2551 = UINT8_MAX;
	int32_t t90 = -57833;

	t90 = (((x2549/x2550)<x2551)<<x2552);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x2573 = 396U;
	uint16_t x2574 = 11530U;
	static uint16_t x2576 = 1U;
	volatile int32_t t91 = -42099;

	t91 = (((x2573/x2574)<x2575)<<x2576);

	if (t91 != 2) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x2589 = INT32_MIN;
	uint8_t x2590 = 54U;
	uint8_t x2592 = 1U;

	t92 = (((x2589/x2590)<x2591)<<x2592);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x2625 = -2;
	int16_t x2626 = INT16_MAX;
	volatile int32_t x2627 = INT32_MIN;
	static int8_t x2628 = 0;
	volatile int32_t t93 = 340574493;

	t93 = (((x2625/x2626)<x2627)<<x2628);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x2641 = UINT32_MAX;
	volatile int32_t x2642 = INT32_MIN;
	static volatile int64_t x2643 = INT64_MIN;
	uint8_t x2644 = 1U;
	volatile int32_t t94 = 433024;

	t94 = (((x2641/x2642)<x2643)<<x2644);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x2645 = INT64_MIN;
	static volatile int8_t x2646 = INT8_MAX;
	uint64_t x2647 = 30136422LLU;
	uint8_t x2648 = 24U;
	volatile int32_t t95 = 30;

	t95 = (((x2645/x2646)<x2647)<<x2648);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x2657 = -1;
	static volatile int16_t x2658 = INT16_MAX;
	uint8_t x2659 = 1U;
	uint32_t x2660 = 2U;
	volatile int32_t t96 = -17604;

	t96 = (((x2657/x2658)<x2659)<<x2660);

	if (t96 != 4) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x2689 = 1;
	int8_t x2690 = INT8_MAX;
	int64_t x2691 = INT64_MIN;
	static uint8_t x2692 = 0U;
	volatile int32_t t97 = -53;

	t97 = (((x2689/x2690)<x2691)<<x2692);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x2737 = UINT64_MAX;
	static int16_t x2738 = 106;
	int32_t x2739 = 20739773;
	uint8_t x2740 = 11U;
	volatile int32_t t98 = -394937;

	t98 = (((x2737/x2738)<x2739)<<x2740);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x2841 = 2256310U;
	int32_t x2842 = INT32_MIN;
	uint32_t x2843 = 712U;
	static int8_t x2844 = 1;
	volatile int32_t t99 = -3135357;

	t99 = (((x2841/x2842)<x2843)<<x2844);

	if (t99 != 2) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();


    return 0;
}

