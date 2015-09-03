#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x61 = INT64_MIN;
int16_t x314 = INT16_MIN;
int32_t t2 = 5;
uint8_t x429 = 1U;
int64_t x534 = -1LL;
static volatile uint8_t x535 = 12U;
int32_t t7 = -35692;
int32_t x559 = -1006741;
static volatile int32_t t8 = 25;
static volatile int32_t t9 = 238724155;
int32_t t10 = -1;
uint8_t x608 = 19U;
volatile int64_t t11 = -1216046302026286LL;
volatile int32_t t12 = -48924906;
static int32_t t13 = -30838453;
uint64_t x654 = 8191151LLU;
static int64_t x675 = INT64_MIN;
uint32_t x676 = 1U;
uint64_t x723 = 5200LLU;
volatile uint16_t x766 = 6912U;
uint64_t x767 = 862222955889520790LLU;
int8_t x776 = 2;
int32_t t20 = -21117;
uint16_t x878 = UINT16_MAX;
uint8_t x879 = 58U;
volatile int32_t t21 = -9540805;
volatile uint32_t x891 = 5980U;
int32_t x918 = 0;
int16_t x970 = 34;
int64_t x1065 = -31214715LL;
static uint32_t x1067 = 178495901U;
int8_t x1152 = 1;
int16_t x1191 = -2433;
static int8_t x1462 = -1;
int16_t x1463 = INT16_MIN;
int16_t x1532 = 0;
static int32_t x1537 = 2;
uint8_t x1540 = 1U;
uint16_t x1660 = 1U;
volatile uint32_t t40 = 4U;
volatile uint32_t x1723 = UINT32_MAX;
int32_t t45 = 154;
int32_t x1766 = INT32_MIN;
int8_t x1794 = -1;
int32_t t50 = 200;
int64_t x1827 = -1LL;
volatile uint32_t x1840 = 9U;
static volatile int32_t t53 = 82779397;
volatile int32_t x1841 = INT32_MAX;
uint64_t x1842 = 1362257LLU;
int64_t t56 = -356096650LL;
int64_t x1917 = -1LL;
int64_t x1918 = INT64_MIN;
uint32_t x1920 = 29U;
int32_t t58 = 3280077;
uint64_t x1996 = 15LLU;
int64_t x2010 = -1LL;
uint16_t x2011 = 4411U;
static uint8_t x2257 = 104U;
int8_t x2258 = INT8_MIN;
volatile uint16_t x2260 = 11U;
volatile uint8_t x2296 = 1U;
int16_t x2401 = INT16_MAX;
int32_t t68 = -206683;
int32_t t70 = 34386754;
uint16_t x2549 = 3818U;
uint16_t x2566 = 436U;
int8_t x2615 = INT8_MIN;
uint16_t x2641 = 55U;
static int16_t x2642 = INT16_MIN;
int8_t x2644 = 1;
uint8_t x2782 = 109U;
uint16_t x2784 = 19U;
volatile int8_t x2789 = INT8_MAX;
int32_t t79 = -1;
static volatile int32_t t80 = -4322295;
int32_t t83 = -215124732;
int8_t x2875 = INT8_MIN;
uint32_t t84 = 15317859U;
static int64_t x2921 = 2509034LL;
int8_t x2924 = 1;
int32_t t87 = -4;
uint64_t x3013 = 6111747759249837526LLU;
volatile int8_t x3014 = 52;
int32_t t89 = -120831352;
volatile int8_t x3157 = INT8_MAX;
static int16_t x3160 = 0;
int32_t t91 = -16;
static int8_t x3182 = INT8_MIN;
volatile uint8_t x3183 = 13U;
uint64_t x3217 = 0LLU;
int64_t x3254 = 192919LL;
int8_t x3299 = -1;
int16_t x3321 = INT16_MIN;
int8_t x3322 = 0;
int8_t x3327 = 3;


void f0(void) {
	int8_t x62 = -1;
	uint32_t x63 = 64706U;
	uint8_t x64 = 0U;
	volatile int64_t t0 = -211730789091119LL;

	t0 = (x61*((x62<=x63)<<x64));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x233 = INT16_MAX;
	int32_t x234 = -1;
	uint32_t x235 = 1U;
	uint16_t x236 = 4U;
	volatile int32_t t1 = -301;

	t1 = (x233*((x234<=x235)<<x236));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x313 = INT8_MAX;
	volatile int8_t x315 = INT8_MIN;
	uint8_t x316 = 8U;

	t2 = (x313*((x314<=x315)<<x316));

	if (t2 != 32512) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x357 = 46408500532066LLU;
	static int64_t x358 = INT64_MIN;
	int16_t x359 = INT16_MIN;
	int8_t x360 = 24;
	volatile uint64_t t3 = 1926455135LLU;

	t3 = (x357*((x358<=x359)<<x360));

	if (t3 != 3842186566785040384LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x369 = INT8_MAX;
	int8_t x370 = 0;
	static int32_t x371 = -1928;
	static int32_t x372 = 6;
	static int32_t t4 = -2036;

	t4 = (x369*((x370<=x371)<<x372));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x430 = -1;
	uint32_t x431 = 10955689U;
	uint8_t x432 = 0U;
	int32_t t5 = 0;

	t5 = (x429*((x430<=x431)<<x432));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x533 = INT16_MIN;
	volatile int32_t x536 = 0;
	int32_t t6 = 487;

	t6 = (x533*((x534<=x535)<<x536));

	if (t6 != -32768) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x549 = INT16_MAX;
	uint64_t x550 = 11336826LLU;
	uint16_t x551 = 14630U;
	int16_t x552 = 5;

	t7 = (x549*((x550<=x551)<<x552));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x557 = -1;
	int8_t x558 = -57;
	static int8_t x560 = 6;

	t8 = (x557*((x558<=x559)<<x560));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x581 = -1;
	uint16_t x582 = 1038U;
	static int16_t x583 = 894;
	int32_t x584 = 1;

	t9 = (x581*((x582<=x583)<<x584));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x585 = UINT8_MAX;
	static volatile int16_t x586 = INT16_MIN;
	int32_t x587 = INT32_MAX;
	int8_t x588 = 1;

	t10 = (x585*((x586<=x587)<<x588));

	if (t10 != 510) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x605 = INT64_MIN;
	int8_t x606 = INT8_MAX;
	int16_t x607 = INT16_MIN;

	t11 = (x605*((x606<=x607)<<x608));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x609 = UINT8_MAX;
	int64_t x610 = -1LL;
	int32_t x611 = -43;
	volatile uint16_t x612 = 3U;

	t12 = (x609*((x610<=x611)<<x612));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x621 = INT8_MIN;
	int32_t x622 = INT32_MAX;
	static volatile int32_t x623 = INT32_MIN;
	volatile uint8_t x624 = 28U;

	t13 = (x621*((x622<=x623)<<x624));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int32_t x653 = INT32_MAX;
	static int8_t x655 = 1;
	int32_t x656 = 11;
	static volatile int32_t t14 = -481382;

	t14 = (x653*((x654<=x655)<<x656));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x673 = -1;
	static int64_t x674 = -5043032428643397LL;
	int32_t t15 = 1;

	t15 = (x673*((x674<=x675)<<x676));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x721 = UINT32_MAX;
	int16_t x722 = INT16_MAX;
	uint8_t x724 = 24U;
	static uint32_t t16 = 27948U;

	t16 = (x721*((x722<=x723)<<x724));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x765 = 65894557;
	uint8_t x768 = 1U;
	static int32_t t17 = 190495;

	t17 = (x765*((x766<=x767)<<x768));

	if (t17 != 131789114) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x773 = INT8_MAX;
	int32_t x774 = -1;
	static int64_t x775 = INT64_MAX;
	volatile int32_t t18 = 1086;

	t18 = (x773*((x774<=x775)<<x776));

	if (t18 != 508) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x853 = -1;
	int64_t x854 = INT64_MAX;
	volatile uint8_t x855 = 7U;
	int8_t x856 = 0;
	int32_t t19 = 82522;

	t19 = (x853*((x854<=x855)<<x856));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x861 = 92U;
	static volatile int64_t x862 = 315452924289678608LL;
	volatile int64_t x863 = -100743237LL;
	int8_t x864 = 9;

	t20 = (x861*((x862<=x863)<<x864));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x877 = -1;
	volatile uint16_t x880 = 1U;

	t21 = (x877*((x878<=x879)<<x880));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x881 = INT8_MIN;
	static volatile int32_t x882 = -1;
	int32_t x883 = INT32_MIN;
	int8_t x884 = 7;
	volatile int32_t t22 = -15624435;

	t22 = (x881*((x882<=x883)<<x884));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x885 = 2108;
	static uint8_t x886 = UINT8_MAX;
	uint32_t x887 = UINT32_MAX;
	int8_t x888 = 19;
	volatile int32_t t23 = 5922531;

	t23 = (x885*((x886<=x887)<<x888));

	if (t23 != 1105199104) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x889 = -6;
	int64_t x890 = INT64_MIN;
	static volatile int8_t x892 = 0;
	volatile int32_t t24 = 12;

	t24 = (x889*((x890<=x891)<<x892));

	if (t24 != -6) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x917 = UINT8_MAX;
	volatile int64_t x919 = -8059761175400LL;
	int32_t x920 = 1;
	int32_t t25 = 11717790;

	t25 = (x917*((x918<=x919)<<x920));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x969 = INT16_MAX;
	volatile uint8_t x971 = 23U;
	volatile int8_t x972 = 4;
	int32_t t26 = -913451090;

	t26 = (x969*((x970<=x971)<<x972));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x1066 = UINT32_MAX;
	uint8_t x1068 = 18U;
	volatile int64_t t27 = 1886056864453765LL;

	t27 = (x1065*((x1066<=x1067)<<x1068));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1093 = INT16_MIN;
	uint16_t x1094 = 691U;
	volatile uint32_t x1095 = 7468U;
	uint16_t x1096 = 0U;
	volatile int32_t t28 = -28974;

	t28 = (x1093*((x1094<=x1095)<<x1096));

	if (t28 != -32768) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x1149 = INT16_MIN;
	int8_t x1150 = INT8_MIN;
	int64_t x1151 = -80927LL;
	int32_t t29 = -248038;

	t29 = (x1149*((x1150<=x1151)<<x1152));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x1189 = -1;
	uint64_t x1190 = 701790343384521866LLU;
	volatile uint8_t x1192 = 4U;
	int32_t t30 = -66502736;

	t30 = (x1189*((x1190<=x1191)<<x1192));

	if (t30 != -16) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x1193 = 13U;
	uint32_t x1194 = UINT32_MAX;
	uint64_t x1195 = 0LLU;
	uint8_t x1196 = 2U;
	int32_t t31 = -99297819;

	t31 = (x1193*((x1194<=x1195)<<x1196));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x1201 = INT64_MIN;
	int8_t x1202 = INT8_MAX;
	int64_t x1203 = 25LL;
	uint8_t x1204 = 1U;
	int64_t t32 = -13471062LL;

	t32 = (x1201*((x1202<=x1203)<<x1204));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x1229 = 7U;
	static int8_t x1230 = INT8_MIN;
	uint32_t x1231 = UINT32_MAX;
	static int8_t x1232 = 2;
	volatile int32_t t33 = -8;

	t33 = (x1229*((x1230<=x1231)<<x1232));

	if (t33 != 28) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x1373 = 0U;
	static uint16_t x1374 = 55U;
	int64_t x1375 = INT64_MIN;
	uint8_t x1376 = 0U;
	volatile int32_t t34 = -13;

	t34 = (x1373*((x1374<=x1375)<<x1376));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x1461 = 11LLU;
	int16_t x1464 = 0;
	uint64_t t35 = 250792439LLU;

	t35 = (x1461*((x1462<=x1463)<<x1464));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1529 = -1;
	uint8_t x1530 = 44U;
	static int16_t x1531 = -1;
	volatile int32_t t36 = 117;

	t36 = (x1529*((x1530<=x1531)<<x1532));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x1538 = 12988320;
	int64_t x1539 = INT64_MIN;
	int32_t t37 = -7;

	t37 = (x1537*((x1538<=x1539)<<x1540));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x1549 = INT64_MIN;
	int32_t x1550 = -1;
	static int64_t x1551 = INT64_MIN;
	static int16_t x1552 = 4;
	int64_t t38 = 703247031919985566LL;

	t38 = (x1549*((x1550<=x1551)<<x1552));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x1557 = 30938015U;
	volatile uint32_t x1558 = 1U;
	int64_t x1559 = INT64_MIN;
	int8_t x1560 = 29;
	volatile uint32_t t39 = 1308863U;

	t39 = (x1557*((x1558<=x1559)<<x1560));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x1657 = UINT32_MAX;
	int8_t x1658 = -1;
	int64_t x1659 = INT64_MIN;

	t40 = (x1657*((x1658<=x1659)<<x1660));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x1661 = -45934141LL;
	uint16_t x1662 = UINT16_MAX;
	int16_t x1663 = INT16_MIN;
	int8_t x1664 = 0;
	int64_t t41 = 64403153LL;

	t41 = (x1661*((x1662<=x1663)<<x1664));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x1665 = 1U;
	uint32_t x1666 = 854U;
	volatile int32_t x1667 = 10;
	uint8_t x1668 = 18U;
	static volatile int32_t t42 = -1047363456;

	t42 = (x1665*((x1666<=x1667)<<x1668));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x1697 = 1803497968U;
	static int64_t x1698 = -1LL;
	int8_t x1699 = -1;
	uint32_t x1700 = 1U;
	uint32_t t43 = 23U;

	t43 = (x1697*((x1698<=x1699)<<x1700));

	if (t43 != 3606995936U) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x1713 = INT64_MIN;
	uint8_t x1714 = 93U;
	int8_t x1715 = INT8_MIN;
	uint8_t x1716 = 1U;
	volatile int64_t t44 = -859154411LL;

	t44 = (x1713*((x1714<=x1715)<<x1716));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x1721 = UINT16_MAX;
	uint16_t x1722 = 0U;
	volatile uint8_t x1724 = 1U;

	t45 = (x1721*((x1722<=x1723)<<x1724));

	if (t45 != 131070) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x1745 = -1;
	volatile uint16_t x1746 = UINT16_MAX;
	int16_t x1747 = -1;
	uint8_t x1748 = 5U;
	int32_t t46 = 242;

	t46 = (x1745*((x1746<=x1747)<<x1748));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x1749 = -9;
	uint64_t x1750 = 17892LLU;
	static uint32_t x1751 = 797U;
	volatile uint8_t x1752 = 10U;
	static volatile int32_t t47 = 0;

	t47 = (x1749*((x1750<=x1751)<<x1752));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x1753 = -1;
	int8_t x1754 = 31;
	uint64_t x1755 = UINT64_MAX;
	int8_t x1756 = 9;
	int32_t t48 = -9435;

	t48 = (x1753*((x1754<=x1755)<<x1756));

	if (t48 != -512) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x1765 = UINT32_MAX;
	uint8_t x1767 = 5U;
	volatile int8_t x1768 = 4;
	volatile uint32_t t49 = 22468U;

	t49 = (x1765*((x1766<=x1767)<<x1768));

	if (t49 != 4294967280U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x1793 = INT8_MAX;
	volatile int16_t x1795 = -1;
	uint64_t x1796 = 14LLU;

	t50 = (x1793*((x1794<=x1795)<<x1796));

	if (t50 != 2080768) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x1797 = INT8_MIN;
	volatile uint8_t x1798 = 2U;
	int64_t x1799 = 13984018183100693LL;
	static uint16_t x1800 = 7U;
	int32_t t51 = 1565584;

	t51 = (x1797*((x1798<=x1799)<<x1800));

	if (t51 != -16384) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x1825 = -1;
	int32_t x1826 = INT32_MIN;
	uint16_t x1828 = 1U;
	int32_t t52 = 2308;

	t52 = (x1825*((x1826<=x1827)<<x1828));

	if (t52 != -2) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x1837 = 31U;
	static uint64_t x1838 = UINT64_MAX;
	int16_t x1839 = INT16_MIN;

	t53 = (x1837*((x1838<=x1839)<<x1840));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x1843 = INT8_MAX;
	int8_t x1844 = 1;
	volatile int32_t t54 = 4007870;

	t54 = (x1841*((x1842<=x1843)<<x1844));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x1873 = -93;
	static uint16_t x1874 = 2U;
	volatile int16_t x1875 = -1;
	uint8_t x1876 = 10U;
	int32_t t55 = 299;

	t55 = (x1873*((x1874<=x1875)<<x1876));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x1881 = INT64_MIN;
	int8_t x1882 = INT8_MAX;
	volatile int8_t x1883 = INT8_MIN;
	static uint8_t x1884 = 10U;

	t56 = (x1881*((x1882<=x1883)<<x1884));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x1919 = -21;
	int64_t t57 = 708959343628859LL;

	t57 = (x1917*((x1918<=x1919)<<x1920));

	if (t57 != -536870912LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x1921 = 61U;
	int32_t x1922 = -1;
	int8_t x1923 = INT8_MAX;
	static uint8_t x1924 = 3U;

	t58 = (x1921*((x1922<=x1923)<<x1924));

	if (t58 != 488) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x1973 = 21;
	uint32_t x1974 = UINT32_MAX;
	int32_t x1975 = 44075;
	static volatile int16_t x1976 = 5;
	int32_t t59 = 37182;

	t59 = (x1973*((x1974<=x1975)<<x1976));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x1993 = INT16_MIN;
	int32_t x1994 = -15;
	int32_t x1995 = -200;
	volatile int32_t t60 = -1;

	t60 = (x1993*((x1994<=x1995)<<x1996));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x2009 = 985537866615335LL;
	uint64_t x2012 = 0LLU;
	int64_t t61 = -428LL;

	t61 = (x2009*((x2010<=x2011)<<x2012));

	if (t61 != 985537866615335LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x2149 = 2044598506U;
	uint16_t x2150 = 2U;
	uint16_t x2151 = UINT16_MAX;
	uint8_t x2152 = 25U;
	uint32_t t62 = 27228791U;

	t62 = (x2149*((x2150<=x2151)<<x2152));

	if (t62 != 3556769792U) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x2245 = UINT32_MAX;
	static volatile int64_t x2246 = 436482821477143LL;
	int8_t x2247 = INT8_MAX;
	static int8_t x2248 = 1;
	uint32_t t63 = 72008685U;

	t63 = (x2245*((x2246<=x2247)<<x2248));

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x2259 = INT32_MIN;
	volatile int32_t t64 = 172;

	t64 = (x2257*((x2258<=x2259)<<x2260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x2281 = UINT64_MAX;
	uint64_t x2282 = 621896311LLU;
	volatile int16_t x2283 = -1;
	uint8_t x2284 = 22U;
	uint64_t t65 = 4101567164380333LLU;

	t65 = (x2281*((x2282<=x2283)<<x2284));

	if (t65 != 18446744073705357312LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x2293 = 21436;
	static uint8_t x2294 = 61U;
	volatile uint8_t x2295 = 102U;
	volatile int32_t t66 = 41727;

	t66 = (x2293*((x2294<=x2295)<<x2296));

	if (t66 != 42872) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x2341 = 97008LLU;
	volatile int64_t x2342 = INT64_MAX;
	static int16_t x2343 = -63;
	uint32_t x2344 = 0U;
	volatile uint64_t t67 = 3LLU;

	t67 = (x2341*((x2342<=x2343)<<x2344));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x2402 = UINT64_MAX;
	volatile int16_t x2403 = -188;
	volatile uint8_t x2404 = 0U;

	t68 = (x2401*((x2402<=x2403)<<x2404));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x2425 = -7;
	int8_t x2426 = INT8_MAX;
	volatile int8_t x2427 = -1;
	uint8_t x2428 = 10U;
	volatile int32_t t69 = -5549;

	t69 = (x2425*((x2426<=x2427)<<x2428));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x2489 = INT32_MIN;
	volatile int64_t x2490 = 676075434595545430LL;
	static int64_t x2491 = 1359LL;
	uint32_t x2492 = 0U;

	t70 = (x2489*((x2490<=x2491)<<x2492));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x2550 = 1U;
	uint16_t x2551 = 1U;
	static uint16_t x2552 = 4U;
	volatile int32_t t71 = 1103739;

	t71 = (x2549*((x2550<=x2551)<<x2552));

	if (t71 != 61088) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x2565 = 288U;
	volatile int32_t x2567 = -233981;
	uint8_t x2568 = 31U;
	volatile int32_t t72 = -83;

	t72 = (x2565*((x2566<=x2567)<<x2568));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x2573 = UINT8_MAX;
	int64_t x2574 = INT64_MAX;
	volatile int64_t x2575 = -1212LL;
	int8_t x2576 = 29;
	int32_t t73 = 374721351;

	t73 = (x2573*((x2574<=x2575)<<x2576));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x2585 = -1LL;
	static uint8_t x2586 = 0U;
	int8_t x2587 = INT8_MIN;
	uint16_t x2588 = 12U;
	volatile int64_t t74 = 64326905170725LL;

	t74 = (x2585*((x2586<=x2587)<<x2588));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x2613 = -1267006342549LL;
	int32_t x2614 = -15;
	static uint64_t x2616 = 20LLU;
	int64_t t75 = -19934281859369LL;

	t75 = (x2613*((x2614<=x2615)<<x2616));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x2643 = 701076;
	volatile int32_t t76 = -17586918;

	t76 = (x2641*((x2642<=x2643)<<x2644));

	if (t76 != 110) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x2693 = INT32_MAX;
	int16_t x2694 = -1;
	int32_t x2695 = -3;
	static int64_t x2696 = 1LL;
	int32_t t77 = 349364381;

	t77 = (x2693*((x2694<=x2695)<<x2696));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x2781 = 1;
	static int32_t x2783 = -1;
	static volatile int32_t t78 = 266167138;

	t78 = (x2781*((x2782<=x2783)<<x2784));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x2790 = INT64_MAX;
	volatile int64_t x2791 = INT64_MIN;
	uint8_t x2792 = 3U;

	t79 = (x2789*((x2790<=x2791)<<x2792));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x2793 = -25;
	uint64_t x2794 = 12487042091605LLU;
	int8_t x2795 = INT8_MAX;
	static int64_t x2796 = 0LL;

	t80 = (x2793*((x2794<=x2795)<<x2796));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x2797 = -758757214278LL;
	volatile int32_t x2798 = -1;
	uint8_t x2799 = 14U;
	uint16_t x2800 = 1U;
	volatile int64_t t81 = 398LL;

	t81 = (x2797*((x2798<=x2799)<<x2800));

	if (t81 != -1517514428556LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x2813 = 7844737949941648LL;
	int16_t x2814 = INT16_MAX;
	static volatile int64_t x2815 = INT64_MAX;
	uint8_t x2816 = 0U;
	volatile int64_t t82 = -163LL;

	t82 = (x2813*((x2814<=x2815)<<x2816));

	if (t82 != 7844737949941648LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x2869 = INT16_MIN;
	static volatile int8_t x2870 = 0;
	uint16_t x2871 = 3U;
	uint8_t x2872 = 12U;

	t83 = (x2869*((x2870<=x2871)<<x2872));

	if (t83 != -134217728) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x2873 = 1014873U;
	volatile int32_t x2874 = -9437657;
	volatile uint8_t x2876 = 1U;

	t84 = (x2873*((x2874<=x2875)<<x2876));

	if (t84 != 2029746U) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x2922 = -1;
	static int64_t x2923 = 5431148184LL;
	volatile int64_t t85 = 217005781326586LL;

	t85 = (x2921*((x2922<=x2923)<<x2924));

	if (t85 != 5018068LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x2929 = -1LL;
	static uint64_t x2930 = 83813LLU;
	static int32_t x2931 = INT32_MAX;
	uint8_t x2932 = 5U;
	int64_t t86 = -12553604738574LL;

	t86 = (x2929*((x2930<=x2931)<<x2932));

	if (t86 != -32LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x2989 = INT16_MIN;
	static volatile int32_t x2990 = INT32_MAX;
	static volatile int32_t x2991 = INT32_MAX;
	int32_t x2992 = 1;

	t87 = (x2989*((x2990<=x2991)<<x2992));

	if (t87 != -65536) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x3015 = 1U;
	uint32_t x3016 = 5U;
	static uint64_t t88 = 5LLU;

	t88 = (x3013*((x3014<=x3015)<<x3016));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x3085 = 1962U;
	int64_t x3086 = -1694595LL;
	int64_t x3087 = 7544895175LL;
	int16_t x3088 = 1;

	t89 = (x3085*((x3086<=x3087)<<x3088));

	if (t89 != 3924) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x3093 = UINT8_MAX;
	uint64_t x3094 = UINT64_MAX;
	uint32_t x3095 = UINT32_MAX;
	uint8_t x3096 = 2U;
	volatile int32_t t90 = -57524;

	t90 = (x3093*((x3094<=x3095)<<x3096));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x3158 = UINT16_MAX;
	volatile uint64_t x3159 = 3934871LLU;

	t91 = (x3157*((x3158<=x3159)<<x3160));

	if (t91 != 127) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint16_t x3177 = UINT16_MAX;
	volatile int64_t x3178 = INT64_MIN;
	int32_t x3179 = INT32_MAX;
	uint32_t x3180 = 3U;
	volatile int32_t t92 = 5277281;

	t92 = (x3177*((x3178<=x3179)<<x3180));

	if (t92 != 524280) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x3181 = INT16_MAX;
	static uint32_t x3184 = 3U;
	int32_t t93 = -1;

	t93 = (x3181*((x3182<=x3183)<<x3184));

	if (t93 != 262136) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x3218 = -1;
	int32_t x3219 = INT32_MIN;
	int32_t x3220 = 5;
	volatile uint64_t t94 = 2405828LLU;

	t94 = (x3217*((x3218<=x3219)<<x3220));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x3241 = 52U;
	int32_t x3242 = 100294752;
	volatile int64_t x3243 = -1LL;
	int32_t x3244 = 31;
	int32_t t95 = 435;

	t95 = (x3241*((x3242<=x3243)<<x3244));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x3253 = 122;
	int16_t x3255 = 5;
	static volatile uint8_t x3256 = 23U;
	static volatile int32_t t96 = 19444276;

	t96 = (x3253*((x3254<=x3255)<<x3256));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x3297 = 31U;
	uint32_t x3298 = 9145U;
	volatile uint8_t x3300 = 24U;
	int32_t t97 = -108;

	t97 = (x3297*((x3298<=x3299)<<x3300));

	if (t97 != 520093696) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x3323 = 6LL;
	uint8_t x3324 = 3U;
	volatile int32_t t98 = 896641;

	t98 = (x3321*((x3322<=x3323)<<x3324));

	if (t98 != -262144) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x3325 = UINT8_MAX;
	uint8_t x3326 = 29U;
	volatile int16_t x3328 = 3;
	int32_t t99 = 61;

	t99 = (x3325*((x3326<=x3327)<<x3328));

	if (t99 != 0) { NG(); } else { ; }
	
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

