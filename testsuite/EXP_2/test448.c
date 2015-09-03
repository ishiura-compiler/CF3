#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x38 = 1;
volatile int32_t t0 = -3134584;
int64_t x45 = 508427974648LL;
int16_t x47 = 1279;
uint64_t x151 = UINT64_MAX;
volatile int32_t t4 = 59947;
uint32_t x365 = 306U;
static uint16_t x369 = 391U;
uint32_t x493 = 230448U;
int8_t x494 = INT8_MIN;
uint16_t x701 = 2324U;
int16_t x719 = INT16_MIN;
static int8_t x771 = -3;
volatile uint16_t x879 = 55U;
int32_t t19 = -1;
int32_t t21 = 2656181;
volatile int64_t x1010 = -1LL;
volatile int32_t t23 = -2;
static int32_t t24 = -216702;
volatile uint16_t x1071 = UINT16_MAX;
int64_t x1072 = 1LL;
volatile int64_t x1073 = -1LL;
volatile int32_t t26 = 253263155;
int8_t x1178 = 0;
uint64_t x1206 = 36085325805LLU;
static volatile int16_t x1449 = 0;
uint8_t x1452 = 0U;
static int8_t x1465 = -1;
uint16_t x1545 = 7U;
volatile int64_t x1573 = INT64_MIN;
int16_t x1575 = INT16_MIN;
volatile uint64_t x1602 = 20182468239LLU;
static int64_t x1603 = -370797386LL;
uint64_t x1637 = UINT64_MAX;
int32_t x1663 = -1;
static int8_t x1670 = -1;
volatile int32_t t41 = 481044487;
volatile int32_t x1786 = -1;
static uint16_t x1797 = UINT16_MAX;
uint32_t x1894 = 1568U;
int32_t x1969 = INT32_MAX;
int16_t x1971 = INT16_MAX;
int8_t x1972 = 7;
volatile uint8_t x2002 = 23U;
static int32_t t48 = 136;
volatile uint64_t x2049 = UINT64_MAX;
uint8_t x2051 = 0U;
int32_t x2102 = 1;
static volatile int32_t t50 = -1781215;
volatile int32_t t51 = -412501114;
volatile int8_t x2165 = 18;
static int64_t x2168 = 0LL;
uint64_t x2374 = UINT64_MAX;
int32_t x2459 = -1;
int64_t x2510 = -1LL;
volatile uint32_t x2526 = UINT32_MAX;
int8_t x2557 = INT8_MIN;
uint16_t x2558 = 77U;
int64_t x2559 = -26733145862114749LL;
int32_t x2573 = INT32_MIN;
static int64_t x2658 = -57561933848LL;
int8_t x2689 = -6;
static int64_t x2690 = -1LL;
int64_t x2691 = INT64_MAX;
uint8_t x2692 = 0U;
static uint64_t x2879 = 201489211LLU;
static int8_t x2880 = 0;
int32_t t65 = 781;
int8_t x2936 = 1;
int32_t t70 = -2;
uint8_t x3000 = 28U;
uint32_t x3061 = UINT32_MAX;
uint8_t x3062 = 48U;
volatile uint16_t x3068 = 8U;
volatile int32_t t75 = 111;
uint16_t x3304 = 10U;
static uint8_t x3456 = 4U;
static int16_t x3461 = 1;
static int32_t x3464 = 0;
int32_t x3635 = -1938;
int32_t t84 = -491;
volatile int16_t x3659 = -1;
int8_t x3672 = 1;
int16_t x3713 = -1;
static int32_t t87 = 655;
int8_t x3845 = INT8_MIN;
int16_t x3855 = INT16_MIN;
int32_t t90 = -4468;
int8_t x3903 = -1;
int16_t x3904 = 5;
volatile uint64_t x3957 = 4089676093234214LLU;
int16_t x3971 = INT16_MAX;
volatile int32_t t93 = 2045;
int8_t x3976 = 29;
volatile int32_t x4043 = 991717;
int8_t x4167 = INT8_MAX;
uint64_t x4311 = UINT64_MAX;
uint16_t x4332 = 14U;


void f0(void) {
	uint64_t x37 = UINT64_MAX;
	int64_t x39 = -1LL;
	int8_t x40 = 1;

	t0 = ((x37<(x38*x39))<<x40);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x46 = UINT8_MAX;
	volatile int8_t x48 = 0;
	int32_t t1 = 26275;

	t1 = ((x45<(x46*x47))<<x48);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x117 = 3845732796LLU;
	int64_t x118 = -1295261995LL;
	static int8_t x119 = 3;
	int8_t x120 = 5;
	volatile int32_t t2 = -17;

	t2 = ((x117<(x118*x119))<<x120);

	if (t2 != 32) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x145 = -251;
	volatile uint64_t x146 = 1025649361LLU;
	uint32_t x147 = 1495904115U;
	static uint8_t x148 = 2U;
	volatile int32_t t3 = -3822;

	t3 = ((x145<(x146*x147))<<x148);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x149 = 0;
	uint16_t x150 = UINT16_MAX;
	int32_t x152 = 12;

	t4 = ((x149<(x150*x151))<<x152);

	if (t4 != 4096) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x153 = INT16_MAX;
	uint16_t x154 = 8660U;
	int16_t x155 = INT16_MIN;
	volatile uint8_t x156 = 6U;
	int32_t t5 = -693268427;

	t5 = ((x153<(x154*x155))<<x156);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x241 = UINT64_MAX;
	uint8_t x242 = UINT8_MAX;
	uint8_t x243 = 12U;
	int8_t x244 = 0;
	static volatile int32_t t6 = -4148;

	t6 = ((x241<(x242*x243))<<x244);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x317 = 2821961266318LLU;
	int32_t x318 = 0;
	uint16_t x319 = 690U;
	static uint16_t x320 = 24U;
	volatile int32_t t7 = 123068;

	t7 = ((x317<(x318*x319))<<x320);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x366 = 55;
	int8_t x367 = INT8_MAX;
	volatile int8_t x368 = 8;
	int32_t t8 = -92170991;

	t8 = ((x365<(x366*x367))<<x368);

	if (t8 != 256) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x370 = INT8_MAX;
	uint64_t x371 = 511LLU;
	uint8_t x372 = 7U;
	int32_t t9 = 3;

	t9 = ((x369<(x370*x371))<<x372);

	if (t9 != 128) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x485 = -1;
	volatile uint8_t x486 = UINT8_MAX;
	int32_t x487 = -1;
	volatile uint16_t x488 = 18U;
	int32_t t10 = -2;

	t10 = ((x485<(x486*x487))<<x488);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x495 = 101U;
	uint64_t x496 = 11LLU;
	volatile int32_t t11 = -1;

	t11 = ((x493<(x494*x495))<<x496);

	if (t11 != 2048) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x533 = UINT64_MAX;
	uint64_t x534 = 171594022796LLU;
	int32_t x535 = INT32_MIN;
	int32_t x536 = 1;
	volatile int32_t t12 = -84;

	t12 = ((x533<(x534*x535))<<x536);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x605 = -6;
	uint32_t x606 = 40U;
	uint16_t x607 = UINT16_MAX;
	int8_t x608 = 0;
	int32_t t13 = 28;

	t13 = ((x605<(x606*x607))<<x608);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x702 = 28465LLU;
	int16_t x703 = 539;
	uint16_t x704 = 0U;
	static volatile int32_t t14 = -3;

	t14 = ((x701<(x702*x703))<<x704);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x717 = 1948U;
	int8_t x718 = -1;
	uint8_t x720 = 0U;
	volatile int32_t t15 = -1664229;

	t15 = ((x717<(x718*x719))<<x720);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x769 = -1855;
	uint16_t x770 = 3U;
	volatile uint8_t x772 = 9U;
	volatile int32_t t16 = 5;

	t16 = ((x769<(x770*x771))<<x772);

	if (t16 != 512) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int8_t x813 = -1;
	int32_t x814 = INT32_MIN;
	static uint32_t x815 = 180U;
	uint32_t x816 = 12U;
	static int32_t t17 = -249;

	t17 = ((x813<(x814*x815))<<x816);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x817 = INT64_MAX;
	int32_t x818 = INT32_MAX;
	int64_t x819 = -1LL;
	volatile int16_t x820 = 14;
	volatile int32_t t18 = -7371439;

	t18 = ((x817<(x818*x819))<<x820);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x877 = 9U;
	int8_t x878 = 0;
	uint8_t x880 = 0U;

	t19 = ((x877<(x878*x879))<<x880);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x889 = -5;
	uint8_t x890 = UINT8_MAX;
	volatile int8_t x891 = 2;
	int8_t x892 = 0;
	volatile int32_t t20 = 283664;

	t20 = ((x889<(x890*x891))<<x892);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x945 = 2U;
	uint8_t x946 = UINT8_MAX;
	uint32_t x947 = 2994636U;
	int8_t x948 = 4;

	t21 = ((x945<(x946*x947))<<x948);

	if (t21 != 16) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x969 = INT16_MAX;
	int8_t x970 = INT8_MIN;
	uint16_t x971 = 107U;
	volatile int32_t x972 = 1;
	static int32_t t22 = -2532;

	t22 = ((x969<(x970*x971))<<x972);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x1009 = 3U;
	static int16_t x1011 = INT16_MIN;
	int16_t x1012 = 7;

	t23 = ((x1009<(x1010*x1011))<<x1012);

	if (t23 != 128) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x1037 = -1;
	uint16_t x1038 = 0U;
	uint32_t x1039 = 17730297U;
	uint8_t x1040 = 3U;

	t24 = ((x1037<(x1038*x1039))<<x1040);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x1069 = -1;
	static uint64_t x1070 = UINT64_MAX;
	volatile int32_t t25 = 2916;

	t25 = ((x1069<(x1070*x1071))<<x1072);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x1074 = 98979U;
	static int32_t x1075 = 29;
	uint8_t x1076 = 1U;

	t26 = ((x1073<(x1074*x1075))<<x1076);

	if (t26 != 2) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x1113 = 6;
	volatile int32_t x1114 = 118354;
	int8_t x1115 = -2;
	uint32_t x1116 = 6U;
	static int32_t t27 = -32244183;

	t27 = ((x1113<(x1114*x1115))<<x1116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x1117 = UINT8_MAX;
	static int16_t x1118 = 3;
	int32_t x1119 = 248;
	uint8_t x1120 = 2U;
	int32_t t28 = -124;

	t28 = ((x1117<(x1118*x1119))<<x1120);

	if (t28 != 4) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint32_t x1177 = 212U;
	static uint64_t x1179 = UINT64_MAX;
	static uint16_t x1180 = 0U;
	int32_t t29 = 276;

	t29 = ((x1177<(x1178*x1179))<<x1180);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x1205 = 12;
	int64_t x1207 = INT64_MIN;
	int8_t x1208 = 20;
	volatile int32_t t30 = 3987215;

	t30 = ((x1205<(x1206*x1207))<<x1208);

	if (t30 != 1048576) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x1349 = INT32_MIN;
	int64_t x1350 = INT64_MAX;
	static uint64_t x1351 = UINT64_MAX;
	uint8_t x1352 = 4U;
	int32_t t31 = -338;

	t31 = ((x1349<(x1350*x1351))<<x1352);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x1357 = 924669989U;
	int64_t x1358 = -1LL;
	int64_t x1359 = -16007276LL;
	int8_t x1360 = 3;
	volatile int32_t t32 = -53;

	t32 = ((x1357<(x1358*x1359))<<x1360);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int8_t x1450 = -11;
	int8_t x1451 = -1;
	int32_t t33 = 0;

	t33 = ((x1449<(x1450*x1451))<<x1452);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x1453 = INT64_MAX;
	volatile uint32_t x1454 = 3536U;
	int16_t x1455 = 2;
	static uint32_t x1456 = 14U;
	int32_t t34 = 232922;

	t34 = ((x1453<(x1454*x1455))<<x1456);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x1466 = -1LL;
	volatile int64_t x1467 = -1LL;
	static uint8_t x1468 = 0U;
	int32_t t35 = 1;

	t35 = ((x1465<(x1466*x1467))<<x1468);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x1546 = 53U;
	uint16_t x1547 = 497U;
	uint8_t x1548 = 3U;
	volatile int32_t t36 = -481012;

	t36 = ((x1545<(x1546*x1547))<<x1548);

	if (t36 != 8) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x1574 = 12726;
	static int16_t x1576 = 3;
	int32_t t37 = 6044;

	t37 = ((x1573<(x1574*x1575))<<x1576);

	if (t37 != 8) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x1601 = 7U;
	int8_t x1604 = 2;
	volatile int32_t t38 = 1;

	t38 = ((x1601<(x1602*x1603))<<x1604);

	if (t38 != 4) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x1638 = INT16_MAX;
	int8_t x1639 = -1;
	int8_t x1640 = 12;
	volatile int32_t t39 = -3;

	t39 = ((x1637<(x1638*x1639))<<x1640);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x1661 = UINT8_MAX;
	static int64_t x1662 = -25LL;
	uint8_t x1664 = 25U;
	int32_t t40 = 660569;

	t40 = ((x1661<(x1662*x1663))<<x1664);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x1669 = INT8_MIN;
	uint32_t x1671 = UINT32_MAX;
	uint16_t x1672 = 2U;

	t41 = ((x1669<(x1670*x1671))<<x1672);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x1721 = -20810;
	volatile int16_t x1722 = INT16_MAX;
	int8_t x1723 = INT8_MIN;
	uint8_t x1724 = 0U;
	volatile int32_t t42 = -916175;

	t42 = ((x1721<(x1722*x1723))<<x1724);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x1785 = UINT64_MAX;
	volatile int64_t x1787 = INT64_MAX;
	int32_t x1788 = 3;
	int32_t t43 = 74295723;

	t43 = ((x1785<(x1786*x1787))<<x1788);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x1798 = 52015U;
	uint32_t x1799 = 1758270U;
	uint8_t x1800 = 1U;
	volatile int32_t t44 = 1;

	t44 = ((x1797<(x1798*x1799))<<x1800);

	if (t44 != 2) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x1809 = 10739;
	volatile uint64_t x1810 = 52993890LLU;
	uint8_t x1811 = 26U;
	volatile int8_t x1812 = 5;
	volatile int32_t t45 = 52007241;

	t45 = ((x1809<(x1810*x1811))<<x1812);

	if (t45 != 32) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x1893 = 3130608485748648214LLU;
	uint16_t x1895 = 980U;
	static int64_t x1896 = 1LL;
	static volatile int32_t t46 = 3957303;

	t46 = ((x1893<(x1894*x1895))<<x1896);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x1970 = 15100LLU;
	static volatile int32_t t47 = 1;

	t47 = ((x1969<(x1970*x1971))<<x1972);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x2001 = -63;
	static int16_t x2003 = 6;
	int64_t x2004 = 0LL;

	t48 = ((x2001<(x2002*x2003))<<x2004);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x2050 = -84;
	int8_t x2052 = 2;
	volatile int32_t t49 = -1143;

	t49 = ((x2049<(x2050*x2051))<<x2052);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x2101 = 0;
	int16_t x2103 = INT16_MIN;
	int8_t x2104 = 0;

	t50 = ((x2101<(x2102*x2103))<<x2104);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x2109 = INT16_MIN;
	uint32_t x2110 = 575609468U;
	volatile int32_t x2111 = -1;
	volatile int8_t x2112 = 2;

	t51 = ((x2109<(x2110*x2111))<<x2112);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x2141 = -1LL;
	int8_t x2142 = -1;
	volatile int64_t x2143 = 17LL;
	uint32_t x2144 = 4U;
	int32_t t52 = -42;

	t52 = ((x2141<(x2142*x2143))<<x2144);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x2166 = 0;
	volatile int8_t x2167 = -5;
	int32_t t53 = -108;

	t53 = ((x2165<(x2166*x2167))<<x2168);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x2249 = UINT64_MAX;
	static int32_t x2250 = INT32_MAX;
	uint16_t x2251 = 1U;
	uint16_t x2252 = 1U;
	volatile int32_t t54 = 6857;

	t54 = ((x2249<(x2250*x2251))<<x2252);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x2301 = 3018U;
	uint16_t x2302 = 139U;
	int8_t x2303 = INT8_MIN;
	uint8_t x2304 = 1U;
	volatile int32_t t55 = -52;

	t55 = ((x2301<(x2302*x2303))<<x2304);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x2373 = INT16_MIN;
	int16_t x2375 = 0;
	uint32_t x2376 = 11U;
	volatile int32_t t56 = -26754;

	t56 = ((x2373<(x2374*x2375))<<x2376);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x2457 = 28LL;
	int64_t x2458 = -56496358670544139LL;
	int16_t x2460 = 1;
	volatile int32_t t57 = 231626429;

	t57 = ((x2457<(x2458*x2459))<<x2460);

	if (t57 != 2) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x2509 = 84U;
	static int32_t x2511 = -331243413;
	uint8_t x2512 = 17U;
	int32_t t58 = 97;

	t58 = ((x2509<(x2510*x2511))<<x2512);

	if (t58 != 131072) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x2525 = INT32_MIN;
	int32_t x2527 = INT32_MIN;
	volatile uint32_t x2528 = 6U;
	volatile int32_t t59 = 44;

	t59 = ((x2525<(x2526*x2527))<<x2528);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x2560 = 2;
	volatile int32_t t60 = 213127;

	t60 = ((x2557<(x2558*x2559))<<x2560);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x2574 = -1;
	uint32_t x2575 = 113686335U;
	uint32_t x2576 = 0U;
	static volatile int32_t t61 = 1456;

	t61 = ((x2573<(x2574*x2575))<<x2576);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x2657 = -8;
	int32_t x2659 = -15618;
	uint32_t x2660 = 18U;
	volatile int32_t t62 = 1460715;

	t62 = ((x2657<(x2658*x2659))<<x2660);

	if (t62 != 262144) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t t63 = -28430;

	t63 = ((x2689<(x2690*x2691))<<x2692);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x2789 = 0;
	volatile int16_t x2790 = -5278;
	int8_t x2791 = INT8_MAX;
	int16_t x2792 = 8;
	volatile int32_t t64 = 195037187;

	t64 = ((x2789<(x2790*x2791))<<x2792);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x2877 = UINT8_MAX;
	int16_t x2878 = INT16_MAX;

	t65 = ((x2877<(x2878*x2879))<<x2880);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x2885 = UINT64_MAX;
	int8_t x2886 = -1;
	static int16_t x2887 = INT16_MAX;
	uint8_t x2888 = 4U;
	static volatile int32_t t66 = 9;

	t66 = ((x2885<(x2886*x2887))<<x2888);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x2917 = 2U;
	volatile int64_t x2918 = -1LL;
	uint16_t x2919 = UINT16_MAX;
	int16_t x2920 = 5;
	volatile int32_t t67 = -2011;

	t67 = ((x2917<(x2918*x2919))<<x2920);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x2933 = -1654;
	volatile int16_t x2934 = INT16_MIN;
	uint16_t x2935 = UINT16_MAX;
	int32_t t68 = -22;

	t68 = ((x2933<(x2934*x2935))<<x2936);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x2957 = UINT8_MAX;
	volatile uint8_t x2958 = 0U;
	volatile uint8_t x2959 = 95U;
	volatile uint8_t x2960 = 0U;
	volatile int32_t t69 = 0;

	t69 = ((x2957<(x2958*x2959))<<x2960);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x2981 = 37;
	uint16_t x2982 = 1U;
	int8_t x2983 = -7;
	static int16_t x2984 = 27;

	t70 = ((x2981<(x2982*x2983))<<x2984);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x2997 = 66U;
	uint16_t x2998 = 6212U;
	static uint16_t x2999 = 606U;
	volatile int32_t t71 = 20834;

	t71 = ((x2997<(x2998*x2999))<<x3000);

	if (t71 != 268435456) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x3009 = INT32_MIN;
	uint64_t x3010 = 32808346LLU;
	int8_t x3011 = INT8_MAX;
	uint8_t x3012 = 0U;
	static volatile int32_t t72 = -171372;

	t72 = ((x3009<(x3010*x3011))<<x3012);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x3045 = UINT64_MAX;
	int32_t x3046 = INT32_MAX;
	int64_t x3047 = -1LL;
	int8_t x3048 = 1;
	volatile int32_t t73 = 87514634;

	t73 = ((x3045<(x3046*x3047))<<x3048);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x3063 = -25741;
	volatile uint16_t x3064 = 0U;
	int32_t t74 = -130239246;

	t74 = ((x3061<(x3062*x3063))<<x3064);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x3065 = 1947430513647731182LLU;
	static volatile int16_t x3066 = INT16_MIN;
	static int8_t x3067 = -1;

	t75 = ((x3065<(x3066*x3067))<<x3068);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x3105 = INT8_MIN;
	volatile int8_t x3106 = 1;
	static uint32_t x3107 = UINT32_MAX;
	uint8_t x3108 = 0U;
	static int32_t t76 = -1941533;

	t76 = ((x3105<(x3106*x3107))<<x3108);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x3301 = INT8_MAX;
	static int8_t x3302 = -1;
	static volatile int16_t x3303 = INT16_MAX;
	static volatile int32_t t77 = -12549543;

	t77 = ((x3301<(x3302*x3303))<<x3304);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x3317 = -1;
	static int8_t x3318 = INT8_MAX;
	uint64_t x3319 = UINT64_MAX;
	volatile int8_t x3320 = 1;
	int32_t t78 = 0;

	t78 = ((x3317<(x3318*x3319))<<x3320);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x3325 = -1LL;
	int32_t x3326 = 7;
	static int16_t x3327 = INT16_MIN;
	uint16_t x3328 = 15U;
	int32_t t79 = -637;

	t79 = ((x3325<(x3326*x3327))<<x3328);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x3429 = INT32_MIN;
	int32_t x3430 = 176;
	int64_t x3431 = -567LL;
	uint16_t x3432 = 7U;
	volatile int32_t t80 = 0;

	t80 = ((x3429<(x3430*x3431))<<x3432);

	if (t80 != 128) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x3453 = -414234911330753218LL;
	uint32_t x3454 = UINT32_MAX;
	int16_t x3455 = INT16_MIN;
	static int32_t t81 = -12;

	t81 = ((x3453<(x3454*x3455))<<x3456);

	if (t81 != 16) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x3462 = INT32_MAX;
	static int64_t x3463 = -1LL;
	static int32_t t82 = 4611;

	t82 = ((x3461<(x3462*x3463))<<x3464);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x3469 = INT16_MAX;
	static int8_t x3470 = 0;
	static volatile int16_t x3471 = INT16_MIN;
	uint16_t x3472 = 10U;
	volatile int32_t t83 = -37674;

	t83 = ((x3469<(x3470*x3471))<<x3472);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x3633 = -4462113805312382721LL;
	int64_t x3634 = -1LL;
	uint16_t x3636 = 30U;

	t84 = ((x3633<(x3634*x3635))<<x3636);

	if (t84 != 1073741824) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x3657 = 14LLU;
	int64_t x3658 = INT64_MAX;
	volatile int16_t x3660 = 1;
	volatile int32_t t85 = -1163323;

	t85 = ((x3657<(x3658*x3659))<<x3660);

	if (t85 != 2) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int16_t x3669 = INT16_MAX;
	int16_t x3670 = 0;
	static uint8_t x3671 = 1U;
	int32_t t86 = 0;

	t86 = ((x3669<(x3670*x3671))<<x3672);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x3714 = -1;
	int64_t x3715 = -973932LL;
	uint8_t x3716 = 1U;

	t87 = ((x3713<(x3714*x3715))<<x3716);

	if (t87 != 2) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x3725 = INT8_MAX;
	uint16_t x3726 = UINT16_MAX;
	static volatile int8_t x3727 = -1;
	uint8_t x3728 = 15U;
	int32_t t88 = -28213598;

	t88 = ((x3725<(x3726*x3727))<<x3728);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x3846 = 61;
	int16_t x3847 = INT16_MIN;
	uint8_t x3848 = 0U;
	volatile int32_t t89 = -20029;

	t89 = ((x3845<(x3846*x3847))<<x3848);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x3853 = -6;
	uint64_t x3854 = UINT64_MAX;
	int32_t x3856 = 3;

	t90 = ((x3853<(x3854*x3855))<<x3856);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x3901 = INT16_MIN;
	uint8_t x3902 = UINT8_MAX;
	int32_t t91 = -6;

	t91 = ((x3901<(x3902*x3903))<<x3904);

	if (t91 != 32) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int16_t x3958 = INT16_MIN;
	int8_t x3959 = INT8_MAX;
	uint8_t x3960 = 3U;
	static volatile int32_t t92 = -83784498;

	t92 = ((x3957<(x3958*x3959))<<x3960);

	if (t92 != 8) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x3969 = 1;
	volatile int16_t x3970 = INT16_MIN;
	uint8_t x3972 = 2U;

	t93 = ((x3969<(x3970*x3971))<<x3972);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x3973 = -6LL;
	uint16_t x3974 = 10308U;
	volatile uint32_t x3975 = UINT32_MAX;
	static volatile int32_t t94 = -354536;

	t94 = ((x3973<(x3974*x3975))<<x3976);

	if (t94 != 536870912) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x4041 = 28U;
	volatile uint32_t x4042 = 22U;
	volatile uint8_t x4044 = 25U;
	int32_t t95 = -27;

	t95 = ((x4041<(x4042*x4043))<<x4044);

	if (t95 != 33554432) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x4165 = 35;
	int8_t x4166 = 3;
	static volatile int8_t x4168 = 1;
	volatile int32_t t96 = -283933317;

	t96 = ((x4165<(x4166*x4167))<<x4168);

	if (t96 != 2) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x4285 = -6;
	volatile int16_t x4286 = -1647;
	int8_t x4287 = INT8_MIN;
	volatile int8_t x4288 = 2;
	volatile int32_t t97 = -2;

	t97 = ((x4285<(x4286*x4287))<<x4288);

	if (t97 != 4) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x4309 = INT16_MIN;
	uint16_t x4310 = 73U;
	uint8_t x4312 = 10U;
	int32_t t98 = -632228;

	t98 = ((x4309<(x4310*x4311))<<x4312);

	if (t98 != 1024) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x4329 = 21U;
	static uint16_t x4330 = 11U;
	volatile int8_t x4331 = 1;
	int32_t t99 = 7;

	t99 = ((x4329<(x4330*x4331))<<x4332);

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

