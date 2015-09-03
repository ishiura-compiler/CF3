#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x22 = UINT32_MAX;
int8_t x31 = 23;
int64_t x64 = -1LL;
volatile int32_t t2 = -115;
volatile uint8_t x249 = UINT8_MAX;
volatile int16_t x433 = -105;
static volatile int16_t x435 = 6;
int64_t x436 = -1LL;
static int8_t x548 = 7;
int64_t x698 = -1021490587LL;
volatile int8_t x699 = -1;
int16_t x817 = -1;
static int8_t x845 = 19;
static int16_t x846 = INT16_MAX;
int16_t x847 = -1;
int16_t x967 = 1;
uint32_t x1009 = 844U;
int64_t x1018 = -27LL;
uint32_t x1019 = UINT32_MAX;
volatile int16_t x1029 = -7378;
static volatile int16_t x1041 = -17;
int64_t x1042 = 165482926920LL;
uint32_t x1152 = UINT32_MAX;
uint8_t x1218 = 6U;
volatile int32_t t24 = -19989172;
int8_t x1292 = -1;
uint8_t x1336 = 26U;
int16_t x1584 = 14;
int8_t x1614 = 1;
static int32_t x1712 = -1;
int32_t t33 = -62578823;
int8_t x1840 = 1;
int64_t x1890 = INT64_MAX;
int16_t x1891 = 4;
static uint64_t x1990 = 332306374LLU;
int8_t x2099 = -1;
volatile int64_t x2162 = -2066688304696LL;
static int32_t x2163 = 3;
int8_t x2281 = 10;
int8_t x2294 = 56;
uint32_t x2472 = UINT32_MAX;
int16_t x2526 = INT16_MIN;
int32_t x2636 = 1;
int16_t x2641 = INT16_MIN;
int32_t x2643 = -1;
uint16_t x2644 = 15U;
int16_t x2646 = INT16_MAX;
volatile int8_t x2648 = 1;
volatile int16_t x2698 = -1;
int64_t x2756 = 6LL;
uint64_t x2846 = 127LLU;
int8_t x2863 = 5;
int8_t x2906 = INT8_MIN;
int8_t x2907 = 0;
int64_t x2908 = 12LL;
static volatile int32_t t56 = -227751974;
volatile int16_t x2933 = 23;
uint64_t x2935 = 1LLU;
int32_t t60 = 36;
static int32_t t61 = 1472063;
static int32_t x3433 = 6117;
int16_t x3436 = -1;
volatile int8_t x3580 = -1;
static int8_t x3582 = INT8_MIN;
uint8_t x3584 = 6U;
uint32_t x3593 = UINT32_MAX;
int8_t x3677 = -1;
uint64_t x3680 = UINT64_MAX;
static uint32_t x3704 = UINT32_MAX;
static volatile uint16_t x3716 = 4U;
int32_t x3897 = INT32_MIN;
int32_t x3900 = -1;
int32_t t74 = 87955;
int8_t x3998 = INT8_MIN;
int16_t x4129 = -499;
int32_t t79 = -394392;
int16_t x4241 = INT16_MIN;
volatile uint64_t x4242 = UINT64_MAX;
int16_t x4269 = INT16_MIN;
volatile uint16_t x4272 = 29U;
int32_t x4413 = -4712;
int8_t x4497 = 1;
volatile int32_t x4498 = INT32_MAX;
uint8_t x4500 = 3U;
volatile int32_t t87 = 1;
uint16_t x4636 = 20U;
uint32_t x4687 = 3U;
int8_t x4688 = 3;
volatile uint8_t x4987 = 15U;
int32_t x5041 = INT32_MAX;
int32_t x5042 = -1;
static int64_t x5208 = -13LL;
static int32_t t94 = -6;
static int16_t x5269 = INT16_MIN;
int32_t x5272 = -1;
static uint8_t x5528 = 1U;
static int8_t x5594 = -55;


void f0(void) {
	volatile int8_t x21 = INT8_MIN;
	int64_t x23 = -1LL;
	volatile uint8_t x24 = 18U;
	volatile int32_t t0 = 51;

	t0 = ((x21<x22)>>(x23+x24));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x29 = 445788LL;
	int16_t x30 = INT16_MIN;
	uint16_t x32 = 7U;
	static volatile int32_t t1 = 16710583;

	t1 = ((x29<x30)>>(x31+x32));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x61 = INT8_MIN;
	int16_t x62 = INT16_MIN;
	uint8_t x63 = 4U;

	t2 = ((x61<x62)>>(x63+x64));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x250 = -1;
	uint16_t x251 = 1U;
	uint8_t x252 = 4U;
	volatile int32_t t3 = -15;

	t3 = ((x249<x250)>>(x251+x252));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x361 = -1;
	int16_t x362 = INT16_MIN;
	int8_t x363 = 2;
	uint8_t x364 = 23U;
	int32_t t4 = 1979705;

	t4 = ((x361<x362)>>(x363+x364));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x389 = INT32_MIN;
	int16_t x390 = INT16_MIN;
	int64_t x391 = -1LL;
	uint8_t x392 = 10U;
	static int32_t t5 = -19788;

	t5 = ((x389<x390)>>(x391+x392));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x401 = 2LLU;
	static volatile int64_t x402 = INT64_MIN;
	int8_t x403 = -1;
	static volatile uint16_t x404 = 26U;
	int32_t t6 = -3;

	t6 = ((x401<x402)>>(x403+x404));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x434 = 431LLU;
	volatile int32_t t7 = -255723089;

	t7 = ((x433<x434)>>(x435+x436));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x509 = -7;
	uint8_t x510 = UINT8_MAX;
	static int64_t x511 = -1LL;
	uint8_t x512 = 4U;
	int32_t t8 = 28336;

	t8 = ((x509<x510)>>(x511+x512));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x545 = -1LL;
	uint64_t x546 = 446623LLU;
	uint16_t x547 = 1U;
	int32_t t9 = 669;

	t9 = ((x545<x546)>>(x547+x548));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x585 = INT8_MIN;
	static uint16_t x586 = 15U;
	volatile uint8_t x587 = 2U;
	static volatile int8_t x588 = -1;
	static volatile int32_t t10 = -105083907;

	t10 = ((x585<x586)>>(x587+x588));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x697 = INT8_MIN;
	int32_t x700 = 13;
	volatile int32_t t11 = 625;

	t11 = ((x697<x698)>>(x699+x700));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x757 = -1;
	uint64_t x758 = UINT64_MAX;
	int8_t x759 = -1;
	uint16_t x760 = 8U;
	static volatile int32_t t12 = 158;

	t12 = ((x757<x758)>>(x759+x760));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x818 = INT32_MAX;
	uint64_t x819 = UINT64_MAX;
	int8_t x820 = 25;
	int32_t t13 = 0;

	t13 = ((x817<x818)>>(x819+x820));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int8_t x848 = 2;
	volatile int32_t t14 = -4;

	t14 = ((x845<x846)>>(x847+x848));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x897 = 28;
	volatile uint64_t x898 = UINT64_MAX;
	int32_t x899 = 11;
	uint64_t x900 = UINT64_MAX;
	volatile int32_t t15 = 1175;

	t15 = ((x897<x898)>>(x899+x900));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint32_t x965 = UINT32_MAX;
	static volatile int8_t x966 = INT8_MAX;
	uint32_t x968 = 0U;
	static int32_t t16 = -1069453823;

	t16 = ((x965<x966)>>(x967+x968));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x1010 = 3U;
	static uint8_t x1011 = 11U;
	static int16_t x1012 = -5;
	static int32_t t17 = 55;

	t17 = ((x1009<x1010)>>(x1011+x1012));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x1017 = INT32_MAX;
	uint8_t x1020 = 12U;
	volatile int32_t t18 = -2948865;

	t18 = ((x1017<x1018)>>(x1019+x1020));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x1030 = INT64_MIN;
	volatile uint16_t x1031 = 20U;
	uint8_t x1032 = 10U;
	static volatile int32_t t19 = 3;

	t19 = ((x1029<x1030)>>(x1031+x1032));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x1043 = -1;
	volatile int16_t x1044 = 6;
	static volatile int32_t t20 = -400339834;

	t20 = ((x1041<x1042)>>(x1043+x1044));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x1125 = INT32_MAX;
	int64_t x1126 = INT64_MIN;
	int16_t x1127 = -1;
	volatile uint8_t x1128 = 14U;
	int32_t t21 = -368;

	t21 = ((x1125<x1126)>>(x1127+x1128));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x1149 = -1647657115631756LL;
	int32_t x1150 = 221660228;
	volatile uint8_t x1151 = 10U;
	volatile int32_t t22 = 2006115;

	t22 = ((x1149<x1150)>>(x1151+x1152));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x1217 = -1;
	int16_t x1219 = 7;
	uint32_t x1220 = 11U;
	volatile int32_t t23 = -5315;

	t23 = ((x1217<x1218)>>(x1219+x1220));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1261 = -1;
	int64_t x1262 = INT64_MIN;
	int16_t x1263 = 147;
	int8_t x1264 = INT8_MIN;

	t24 = ((x1261<x1262)>>(x1263+x1264));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x1289 = 63U;
	volatile uint8_t x1290 = 5U;
	uint8_t x1291 = 12U;
	static volatile int32_t t25 = -100842;

	t25 = ((x1289<x1290)>>(x1291+x1292));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x1333 = INT64_MIN;
	volatile int64_t x1334 = 1850528610912110LL;
	uint16_t x1335 = 3U;
	volatile int32_t t26 = -753;

	t26 = ((x1333<x1334)>>(x1335+x1336));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int16_t x1549 = -1;
	int32_t x1550 = -452187644;
	uint32_t x1551 = 30U;
	int16_t x1552 = -9;
	int32_t t27 = -164;

	t27 = ((x1549<x1550)>>(x1551+x1552));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x1581 = -1;
	static uint8_t x1582 = UINT8_MAX;
	int32_t x1583 = -1;
	int32_t t28 = -756484461;

	t28 = ((x1581<x1582)>>(x1583+x1584));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x1613 = UINT8_MAX;
	static uint16_t x1615 = 2U;
	int8_t x1616 = 3;
	int32_t t29 = -1;

	t29 = ((x1613<x1614)>>(x1615+x1616));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x1629 = INT64_MIN;
	int32_t x1630 = INT32_MAX;
	volatile int8_t x1631 = 15;
	uint32_t x1632 = UINT32_MAX;
	volatile int32_t t30 = -2941596;

	t30 = ((x1629<x1630)>>(x1631+x1632));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x1633 = 11U;
	int32_t x1634 = -46643;
	int32_t x1635 = -1;
	volatile int16_t x1636 = 1;
	static volatile int32_t t31 = 26816;

	t31 = ((x1633<x1634)>>(x1635+x1636));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x1697 = UINT32_MAX;
	uint16_t x1698 = 1615U;
	static uint32_t x1699 = UINT32_MAX;
	static uint8_t x1700 = 5U;
	static volatile int32_t t32 = -1890;

	t32 = ((x1697<x1698)>>(x1699+x1700));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x1709 = 46U;
	volatile int8_t x1710 = -11;
	int16_t x1711 = 19;

	t33 = ((x1709<x1710)>>(x1711+x1712));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1777 = INT32_MAX;
	static int16_t x1778 = INT16_MIN;
	volatile uint8_t x1779 = 9U;
	uint8_t x1780 = 18U;
	static int32_t t34 = 118;

	t34 = ((x1777<x1778)>>(x1779+x1780));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x1837 = INT64_MIN;
	static int32_t x1838 = INT32_MIN;
	uint64_t x1839 = UINT64_MAX;
	int32_t t35 = 31131;

	t35 = ((x1837<x1838)>>(x1839+x1840));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x1889 = INT8_MIN;
	int32_t x1892 = -2;
	volatile int32_t t36 = 62673943;

	t36 = ((x1889<x1890)>>(x1891+x1892));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x1893 = INT32_MAX;
	int32_t x1894 = -18068;
	static uint16_t x1895 = 4U;
	static uint32_t x1896 = UINT32_MAX;
	volatile int32_t t37 = 16299999;

	t37 = ((x1893<x1894)>>(x1895+x1896));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x1961 = UINT16_MAX;
	volatile uint64_t x1962 = UINT64_MAX;
	static int8_t x1963 = -1;
	uint8_t x1964 = 9U;
	volatile int32_t t38 = 529392880;

	t38 = ((x1961<x1962)>>(x1963+x1964));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x1989 = INT8_MIN;
	static uint32_t x1991 = UINT32_MAX;
	int16_t x1992 = 1;
	int32_t t39 = 0;

	t39 = ((x1989<x1990)>>(x1991+x1992));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x2097 = -1;
	volatile uint16_t x2098 = UINT16_MAX;
	static uint16_t x2100 = 7U;
	volatile int32_t t40 = -2389606;

	t40 = ((x2097<x2098)>>(x2099+x2100));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x2141 = 193U;
	int64_t x2142 = INT64_MAX;
	uint64_t x2143 = 6LLU;
	static volatile uint64_t x2144 = 14LLU;
	static volatile int32_t t41 = -6781;

	t41 = ((x2141<x2142)>>(x2143+x2144));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x2161 = -1LL;
	int16_t x2164 = -1;
	int32_t t42 = 0;

	t42 = ((x2161<x2162)>>(x2163+x2164));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x2233 = UINT8_MAX;
	int16_t x2234 = INT16_MIN;
	uint8_t x2235 = 23U;
	int16_t x2236 = -1;
	volatile int32_t t43 = -1540;

	t43 = ((x2233<x2234)>>(x2235+x2236));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x2282 = -681651062;
	uint32_t x2283 = 1U;
	int32_t x2284 = -1;
	int32_t t44 = -33917382;

	t44 = ((x2281<x2282)>>(x2283+x2284));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x2293 = UINT8_MAX;
	uint16_t x2295 = 12U;
	int32_t x2296 = -1;
	static volatile int32_t t45 = -914282;

	t45 = ((x2293<x2294)>>(x2295+x2296));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x2469 = INT16_MAX;
	int64_t x2470 = INT64_MIN;
	uint16_t x2471 = 1U;
	int32_t t46 = 5391;

	t46 = ((x2469<x2470)>>(x2471+x2472));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x2525 = -15390972985LL;
	uint32_t x2527 = 1U;
	volatile int64_t x2528 = -1LL;
	int32_t t47 = -211077977;

	t47 = ((x2525<x2526)>>(x2527+x2528));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x2573 = -1;
	static int64_t x2574 = -58351125224LL;
	int16_t x2575 = -1;
	static uint16_t x2576 = 7U;
	volatile int32_t t48 = 690799232;

	t48 = ((x2573<x2574)>>(x2575+x2576));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x2633 = 222130083U;
	int32_t x2634 = INT32_MIN;
	uint8_t x2635 = 1U;
	int32_t t49 = -1;

	t49 = ((x2633<x2634)>>(x2635+x2636));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x2642 = 46U;
	int32_t t50 = 13;

	t50 = ((x2641<x2642)>>(x2643+x2644));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x2645 = INT64_MIN;
	uint8_t x2647 = 3U;
	volatile int32_t t51 = 35016;

	t51 = ((x2645<x2646)>>(x2647+x2648));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x2697 = INT16_MIN;
	uint8_t x2699 = 31U;
	int32_t x2700 = -3;
	volatile int32_t t52 = 386535323;

	t52 = ((x2697<x2698)>>(x2699+x2700));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x2753 = INT8_MAX;
	int64_t x2754 = INT64_MIN;
	static int8_t x2755 = -1;
	volatile int32_t t53 = 982050255;

	t53 = ((x2753<x2754)>>(x2755+x2756));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x2845 = 4153U;
	volatile int8_t x2847 = 1;
	volatile int16_t x2848 = 1;
	static volatile int32_t t54 = -61;

	t54 = ((x2845<x2846)>>(x2847+x2848));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x2861 = UINT8_MAX;
	int64_t x2862 = INT64_MIN;
	uint64_t x2864 = UINT64_MAX;
	int32_t t55 = 7048;

	t55 = ((x2861<x2862)>>(x2863+x2864));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x2905 = -4046;

	t56 = ((x2905<x2906)>>(x2907+x2908));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x2934 = 1U;
	uint64_t x2936 = UINT64_MAX;
	int32_t t57 = -1;

	t57 = ((x2933<x2934)>>(x2935+x2936));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x2973 = 57U;
	uint8_t x2974 = 102U;
	static uint64_t x2975 = UINT64_MAX;
	uint8_t x2976 = 18U;
	volatile int32_t t58 = -5720;

	t58 = ((x2973<x2974)>>(x2975+x2976));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x3021 = INT32_MIN;
	static uint8_t x3022 = 1U;
	int8_t x3023 = 0;
	int8_t x3024 = 0;
	static int32_t t59 = 195;

	t59 = ((x3021<x3022)>>(x3023+x3024));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x3257 = 5951;
	int32_t x3258 = 1499;
	int32_t x3259 = -1;
	volatile uint32_t x3260 = 1U;

	t60 = ((x3257<x3258)>>(x3259+x3260));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x3313 = INT64_MIN;
	uint8_t x3314 = 1U;
	volatile int8_t x3315 = 0;
	static uint8_t x3316 = 13U;

	t61 = ((x3313<x3314)>>(x3315+x3316));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x3434 = UINT32_MAX;
	volatile uint16_t x3435 = 1U;
	int32_t t62 = 322147399;

	t62 = ((x3433<x3434)>>(x3435+x3436));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x3497 = UINT16_MAX;
	int64_t x3498 = INT64_MIN;
	volatile int32_t x3499 = -1;
	static uint32_t x3500 = 1U;
	volatile int32_t t63 = -61;

	t63 = ((x3497<x3498)>>(x3499+x3500));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x3537 = 457512966LLU;
	static int64_t x3538 = INT64_MIN;
	static int32_t x3539 = 5;
	uint32_t x3540 = UINT32_MAX;
	int32_t t64 = -13;

	t64 = ((x3537<x3538)>>(x3539+x3540));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x3577 = INT16_MIN;
	int32_t x3578 = -1;
	uint8_t x3579 = 1U;
	static volatile int32_t t65 = 323717;

	t65 = ((x3577<x3578)>>(x3579+x3580));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x3581 = INT16_MAX;
	uint8_t x3583 = 2U;
	volatile int32_t t66 = -315484615;

	t66 = ((x3581<x3582)>>(x3583+x3584));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x3594 = -222389109;
	volatile uint64_t x3595 = UINT64_MAX;
	static uint16_t x3596 = 7U;
	volatile int32_t t67 = 1;

	t67 = ((x3593<x3594)>>(x3595+x3596));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x3678 = 255190557;
	uint16_t x3679 = 9U;
	volatile int32_t t68 = 8;

	t68 = ((x3677<x3678)>>(x3679+x3680));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x3701 = 103895285U;
	volatile int32_t x3702 = INT32_MAX;
	uint8_t x3703 = 1U;
	static int32_t t69 = 823634;

	t69 = ((x3701<x3702)>>(x3703+x3704));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x3713 = UINT32_MAX;
	static int64_t x3714 = INT64_MAX;
	int32_t x3715 = -1;
	static volatile int32_t t70 = 14;

	t70 = ((x3713<x3714)>>(x3715+x3716));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x3761 = INT64_MIN;
	volatile int16_t x3762 = INT16_MAX;
	static uint32_t x3763 = UINT32_MAX;
	uint8_t x3764 = 11U;
	volatile int32_t t71 = 102138;

	t71 = ((x3761<x3762)>>(x3763+x3764));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int16_t x3777 = -1;
	static int32_t x3778 = INT32_MIN;
	volatile int16_t x3779 = 6;
	uint32_t x3780 = UINT32_MAX;
	volatile int32_t t72 = 1758;

	t72 = ((x3777<x3778)>>(x3779+x3780));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x3793 = INT16_MAX;
	uint32_t x3794 = 43907U;
	static int16_t x3795 = 1;
	uint16_t x3796 = 18U;
	int32_t t73 = 89855;

	t73 = ((x3793<x3794)>>(x3795+x3796));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x3898 = 6402LL;
	static uint8_t x3899 = 8U;

	t74 = ((x3897<x3898)>>(x3899+x3900));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x3909 = INT64_MIN;
	uint16_t x3910 = UINT16_MAX;
	int16_t x3911 = -1;
	int16_t x3912 = 12;
	static volatile int32_t t75 = -7060;

	t75 = ((x3909<x3910)>>(x3911+x3912));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x3997 = 3U;
	int8_t x3999 = -1;
	uint8_t x4000 = 13U;
	static volatile int32_t t76 = 1973;

	t76 = ((x3997<x3998)>>(x3999+x4000));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x4130 = UINT8_MAX;
	volatile uint16_t x4131 = 0U;
	uint64_t x4132 = 10LLU;
	static int32_t t77 = 3;

	t77 = ((x4129<x4130)>>(x4131+x4132));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x4153 = -457;
	int16_t x4154 = INT16_MIN;
	uint32_t x4155 = UINT32_MAX;
	volatile uint32_t x4156 = 4U;
	volatile int32_t t78 = -1184;

	t78 = ((x4153<x4154)>>(x4155+x4156));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x4209 = 16126948LL;
	int32_t x4210 = INT32_MAX;
	int16_t x4211 = -1;
	uint16_t x4212 = 2U;

	t79 = ((x4209<x4210)>>(x4211+x4212));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x4243 = -1;
	volatile uint64_t x4244 = 9LLU;
	static int32_t t80 = 269126852;

	t80 = ((x4241<x4242)>>(x4243+x4244));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x4270 = INT16_MIN;
	int32_t x4271 = -1;
	volatile int32_t t81 = -476309;

	t81 = ((x4269<x4270)>>(x4271+x4272));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x4414 = 49U;
	uint64_t x4415 = UINT64_MAX;
	uint64_t x4416 = 8LLU;
	static int32_t t82 = -61536;

	t82 = ((x4413<x4414)>>(x4415+x4416));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x4445 = -1;
	uint8_t x4446 = 0U;
	uint64_t x4447 = UINT64_MAX;
	int8_t x4448 = 19;
	volatile int32_t t83 = 1416;

	t83 = ((x4445<x4446)>>(x4447+x4448));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x4465 = 0;
	volatile uint16_t x4466 = 762U;
	uint8_t x4467 = 33U;
	volatile int16_t x4468 = -21;
	int32_t t84 = 224063795;

	t84 = ((x4465<x4466)>>(x4467+x4468));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x4473 = -9;
	volatile int16_t x4474 = INT16_MAX;
	uint16_t x4475 = 2U;
	volatile uint8_t x4476 = 3U;
	int32_t t85 = -812961;

	t85 = ((x4473<x4474)>>(x4475+x4476));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x4499 = UINT64_MAX;
	int32_t t86 = -22;

	t86 = ((x4497<x4498)>>(x4499+x4500));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int16_t x4553 = 1472;
	static volatile int64_t x4554 = INT64_MIN;
	int8_t x4555 = -1;
	uint16_t x4556 = 6U;

	t87 = ((x4553<x4554)>>(x4555+x4556));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x4633 = INT16_MAX;
	volatile uint8_t x4634 = 3U;
	int16_t x4635 = 1;
	int32_t t88 = -57;

	t88 = ((x4633<x4634)>>(x4635+x4636));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x4685 = -1;
	uint32_t x4686 = 71082U;
	int32_t t89 = -223;

	t89 = ((x4685<x4686)>>(x4687+x4688));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x4985 = 0U;
	int32_t x4986 = INT32_MIN;
	int8_t x4988 = -1;
	int32_t t90 = 442570234;

	t90 = ((x4985<x4986)>>(x4987+x4988));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x5043 = 1U;
	uint8_t x5044 = 3U;
	volatile int32_t t91 = 123;

	t91 = ((x5041<x5042)>>(x5043+x5044));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x5137 = -272;
	volatile uint32_t x5138 = UINT32_MAX;
	int16_t x5139 = 4;
	static uint32_t x5140 = UINT32_MAX;
	int32_t t92 = 242;

	t92 = ((x5137<x5138)>>(x5139+x5140));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x5205 = -2825073048LL;
	int16_t x5206 = INT16_MIN;
	static uint8_t x5207 = 42U;
	int32_t t93 = -132239264;

	t93 = ((x5205<x5206)>>(x5207+x5208));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x5241 = 39;
	int32_t x5242 = INT32_MAX;
	static uint8_t x5243 = 8U;
	volatile int16_t x5244 = -1;

	t94 = ((x5241<x5242)>>(x5243+x5244));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x5270 = UINT8_MAX;
	uint32_t x5271 = 24U;
	int32_t t95 = 56350418;

	t95 = ((x5269<x5270)>>(x5271+x5272));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x5401 = 2U;
	int16_t x5402 = INT16_MIN;
	int8_t x5403 = -1;
	uint16_t x5404 = 11U;
	volatile int32_t t96 = 1;

	t96 = ((x5401<x5402)>>(x5403+x5404));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x5461 = INT16_MAX;
	int32_t x5462 = 1;
	static uint16_t x5463 = 6U;
	uint16_t x5464 = 5U;
	int32_t t97 = -2054;

	t97 = ((x5461<x5462)>>(x5463+x5464));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x5525 = 26528960LLU;
	volatile int64_t x5526 = 923647598LL;
	static uint32_t x5527 = UINT32_MAX;
	int32_t t98 = -1;

	t98 = ((x5525<x5526)>>(x5527+x5528));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x5593 = INT32_MIN;
	uint64_t x5595 = 4LLU;
	int16_t x5596 = -1;
	volatile int32_t t99 = 2847483;

	t99 = ((x5593<x5594)>>(x5595+x5596));

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

