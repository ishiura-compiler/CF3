#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x145 = INT32_MAX;
uint16_t x294 = 3U;
static int16_t x295 = INT16_MIN;
volatile uint16_t x296 = UINT16_MAX;
volatile int32_t t1 = 116;
uint16_t x297 = 47U;
uint32_t x298 = 27U;
int64_t x299 = 645884106LL;
int64_t x399 = -1LL;
static int16_t x418 = 28;
static int64_t x420 = -1LL;
int16_t x446 = 2;
int16_t x448 = INT16_MIN;
volatile int32_t t6 = -577478;
uint8_t x473 = 3U;
volatile uint32_t x573 = UINT32_MAX;
static uint32_t t8 = 102183943U;
static int64_t x701 = INT64_MAX;
static int8_t x738 = 6;
volatile uint8_t x742 = 2U;
int8_t x797 = INT8_MAX;
int64_t t15 = 11375070734LL;
int32_t t16 = -389;
uint8_t x882 = 12U;
volatile int16_t x922 = 3;
int64_t t18 = 24LL;
volatile int16_t x1179 = 6;
static int32_t x1183 = INT32_MAX;
volatile uint64_t x1488 = UINT64_MAX;
int32_t x1575 = 86;
uint8_t x1578 = 0U;
uint16_t x1580 = UINT16_MAX;
static int8_t x1596 = INT8_MAX;
volatile uint32_t x1604 = UINT32_MAX;
volatile uint32_t x1689 = 1474122685U;
static uint32_t x1725 = 11428718U;
int64_t x1728 = INT64_MIN;
volatile int64_t t32 = 420645646725181LL;
volatile int8_t x1733 = 0;
int8_t x1834 = 1;
int64_t x1835 = -1405376493690604281LL;
uint8_t x1954 = 1U;
int32_t x2088 = 1771;
static int64_t x2132 = 620265LL;
static uint8_t x2182 = 7U;
int64_t x2183 = -542387451370LL;
static int32_t x2507 = -97;
uint8_t x2508 = 46U;
volatile int32_t t42 = -3703;
volatile int64_t t44 = -896053213LL;
static uint32_t x2741 = 4473974U;
int8_t x2744 = INT8_MAX;
uint32_t x2765 = UINT32_MAX;
volatile int16_t x2780 = 7;
volatile uint8_t x2798 = 21U;
static uint32_t t49 = 124U;
static int8_t x2810 = 1;
static uint32_t x2877 = 254U;
static int32_t x2937 = 17523169;
static int16_t x3003 = -1;
int8_t x3004 = -1;
int32_t t56 = -1552330;
int64_t x3081 = 62120LL;
uint64_t x3151 = 1158746773552379109LLU;
uint16_t x3238 = 8U;
static uint16_t x3245 = 762U;
int64_t x3264 = INT64_MIN;
volatile int64_t t63 = 86361946870LL;
uint16_t x3342 = 0U;
int32_t t66 = 1;
volatile uint8_t x3422 = 3U;
volatile uint32_t x3493 = 115U;
int64_t x3672 = INT64_MIN;
int16_t x3702 = 6;
int64_t x3703 = -1LL;
uint64_t x3737 = 17088000656993165LLU;
static int32_t x3739 = 225513606;
static int16_t x3808 = 846;
volatile int16_t x3832 = -1;
static volatile uint64_t t73 = 259658694827LLU;
int32_t t76 = -4018;
volatile uint8_t x3950 = 14U;
int8_t x3988 = INT8_MAX;
int8_t x4169 = INT8_MAX;
int32_t x4170 = 0;
static uint32_t x4205 = 188613706U;
int8_t x4208 = 1;
uint32_t t84 = 10862U;
static volatile int8_t x4273 = 7;
static int32_t t85 = -10617279;
static volatile uint16_t x4340 = UINT16_MAX;
uint64_t t87 = 3381323373902736LLU;
static uint8_t x4481 = 82U;
uint64_t x4613 = 15364040LLU;
int64_t x4615 = INT64_MIN;
uint64_t t91 = 57643LLU;
int64_t x4647 = INT64_MAX;
static int64_t x4648 = INT64_MAX;
uint64_t x4697 = UINT64_MAX;
uint8_t x4785 = 3U;
volatile int32_t t94 = -501;
volatile uint32_t x4850 = 6U;
static int8_t x4916 = -1;
uint32_t t96 = 1U;


void f0(void) {
	uint8_t x146 = 0U;
	int8_t x147 = INT8_MIN;
	static int64_t x148 = -8112865829877LL;
	int64_t t0 = -2864496286LL;

	t0 = (((x145>>x146)&x147)%x148);

	if (t0 != 2147483520LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x293 = 3U;

	t1 = (((x293>>x294)&x295)%x296);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x300 = INT32_MIN;
	int64_t t2 = 4000LL;

	t2 = (((x297>>x298)&x299)%x300);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x397 = INT64_MAX;
	int32_t x398 = 43;
	static int16_t x400 = INT16_MIN;
	int64_t t3 = 5LL;

	t3 = (((x397>>x398)&x399)%x400);

	if (t3 != 32767LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x417 = INT32_MAX;
	static uint16_t x419 = 4U;
	volatile int64_t t4 = 1328799378256370802LL;

	t4 = (((x417>>x418)&x419)%x420);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x421 = 67U;
	uint32_t x422 = 1U;
	int16_t x423 = 0;
	static volatile int8_t x424 = INT8_MIN;
	volatile int32_t t5 = -3374905;

	t5 = (((x421>>x422)&x423)%x424);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x445 = INT32_MAX;
	int16_t x447 = -343;

	t6 = (((x445>>x446)&x447)%x448);

	if (t6 != 32425) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x474 = 2;
	int8_t x475 = INT8_MIN;
	uint8_t x476 = 25U;
	static volatile int32_t t7 = -31826;

	t7 = (((x473>>x474)&x475)%x476);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x574 = 0U;
	uint16_t x575 = UINT16_MAX;
	static int8_t x576 = -3;

	t8 = (((x573>>x574)&x575)%x576);

	if (t8 != 65535U) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x657 = 10U;
	uint8_t x658 = 1U;
	int64_t x659 = 9578697LL;
	static uint16_t x660 = UINT16_MAX;
	int64_t t9 = 54497895001507345LL;

	t9 = (((x657>>x658)&x659)%x660);

	if (t9 != 1LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x697 = 22U;
	uint8_t x698 = 0U;
	static int64_t x699 = INT64_MIN;
	static uint8_t x700 = UINT8_MAX;
	volatile int64_t t10 = 6281426929059461LL;

	t10 = (((x697>>x698)&x699)%x700);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x702 = 28;
	uint16_t x703 = 2U;
	uint8_t x704 = 120U;
	volatile int64_t t11 = 0LL;

	t11 = (((x701>>x702)&x703)%x704);

	if (t11 != 2LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x729 = 123U;
	int16_t x730 = 30;
	volatile uint64_t x731 = 205LLU;
	int32_t x732 = INT32_MIN;
	static uint64_t t12 = 438817716481516LLU;

	t12 = (((x729>>x730)&x731)%x732);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x737 = 50112425LL;
	uint8_t x739 = UINT8_MAX;
	int64_t x740 = INT64_MIN;
	static volatile int64_t t13 = -29165869368237LL;

	t13 = (((x737>>x738)&x739)%x740);

	if (t13 != 158LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x741 = INT32_MAX;
	int64_t x743 = -12336220861658LL;
	volatile int8_t x744 = INT8_MIN;
	int64_t t14 = 131186677934942739LL;

	t14 = (((x741>>x742)&x743)%x744);

	if (t14 != 38LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x798 = 0;
	int8_t x799 = -1;
	int64_t x800 = INT64_MAX;

	t15 = (((x797>>x798)&x799)%x800);

	if (t15 != 127LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x869 = UINT16_MAX;
	static uint32_t x870 = 11U;
	int16_t x871 = -1;
	int16_t x872 = INT16_MIN;

	t16 = (((x869>>x870)&x871)%x872);

	if (t16 != 31) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x881 = 4U;
	uint8_t x883 = UINT8_MAX;
	int8_t x884 = -1;
	int32_t t17 = 37391777;

	t17 = (((x881>>x882)&x883)%x884);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x921 = 1388907235U;
	volatile uint8_t x923 = 35U;
	volatile int64_t x924 = INT64_MAX;

	t18 = (((x921>>x922)&x923)%x924);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x1161 = INT32_MAX;
	uint8_t x1162 = 1U;
	int8_t x1163 = INT8_MIN;
	int16_t x1164 = -7;
	static volatile int32_t t19 = 8;

	t19 = (((x1161>>x1162)&x1163)%x1164);

	if (t19 != 6) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x1177 = 7U;
	uint16_t x1178 = 9U;
	int64_t x1180 = -1LL;
	volatile int64_t t20 = 867067276LL;

	t20 = (((x1177>>x1178)&x1179)%x1180);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x1181 = INT16_MAX;
	static volatile uint8_t x1182 = 13U;
	int16_t x1184 = INT16_MIN;
	volatile int32_t t21 = 172060891;

	t21 = (((x1181>>x1182)&x1183)%x1184);

	if (t21 != 3) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x1417 = UINT16_MAX;
	int8_t x1418 = 0;
	uint32_t x1419 = 1661494959U;
	volatile int16_t x1420 = INT16_MIN;
	volatile uint32_t t22 = 202962306U;

	t22 = (((x1417>>x1418)&x1419)%x1420);

	if (t22 != 26287U) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x1485 = 3919LLU;
	static volatile int32_t x1486 = 0;
	volatile int32_t x1487 = -1;
	volatile uint64_t t23 = 112153828370741061LLU;

	t23 = (((x1485>>x1486)&x1487)%x1488);

	if (t23 != 3919LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x1497 = 142U;
	int8_t x1498 = 0;
	int8_t x1499 = -1;
	static int16_t x1500 = INT16_MIN;
	volatile int32_t t24 = 7450;

	t24 = (((x1497>>x1498)&x1499)%x1500);

	if (t24 != 142) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x1521 = 2982;
	volatile uint64_t x1522 = 11LLU;
	static int32_t x1523 = INT32_MIN;
	volatile int64_t x1524 = INT64_MAX;
	static volatile int64_t t25 = 0LL;

	t25 = (((x1521>>x1522)&x1523)%x1524);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x1573 = 6U;
	static uint16_t x1574 = 5U;
	volatile int16_t x1576 = 5111;
	uint32_t t26 = 2956U;

	t26 = (((x1573>>x1574)&x1575)%x1576);

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x1577 = 3883U;
	int64_t x1579 = INT64_MIN;
	int64_t t27 = 7969092LL;

	t27 = (((x1577>>x1578)&x1579)%x1580);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x1593 = 115U;
	int8_t x1594 = 0;
	static int16_t x1595 = INT16_MIN;
	int32_t t28 = -10477745;

	t28 = (((x1593>>x1594)&x1595)%x1596);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x1601 = 16U;
	volatile int32_t x1602 = 13;
	volatile int64_t x1603 = INT64_MAX;
	int64_t t29 = 524956061123097726LL;

	t29 = (((x1601>>x1602)&x1603)%x1604);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x1625 = UINT32_MAX;
	uint16_t x1626 = 3U;
	int64_t x1627 = INT64_MIN;
	static int16_t x1628 = INT16_MAX;
	int64_t t30 = -200456128041386LL;

	t30 = (((x1625>>x1626)&x1627)%x1628);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1690 = 13;
	int16_t x1691 = INT16_MIN;
	int16_t x1692 = INT16_MIN;
	uint32_t t31 = 62500907U;

	t31 = (((x1689>>x1690)&x1691)%x1692);

	if (t31 != 163840U) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x1726 = 1U;
	int8_t x1727 = 57;

	t32 = (((x1725>>x1726)&x1727)%x1728);

	if (t32 != 49LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x1734 = 1;
	int64_t x1735 = INT64_MAX;
	int16_t x1736 = INT16_MAX;
	static int64_t t33 = -505296LL;

	t33 = (((x1733>>x1734)&x1735)%x1736);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x1833 = UINT16_MAX;
	uint16_t x1836 = 660U;
	int64_t t34 = -390517264457LL;

	t34 = (((x1833>>x1834)&x1835)%x1836);

	if (t34 != 375LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x1849 = UINT64_MAX;
	static int64_t x1850 = 1LL;
	static uint8_t x1851 = 3U;
	int8_t x1852 = INT8_MIN;
	uint64_t t35 = 2513LLU;

	t35 = (((x1849>>x1850)&x1851)%x1852);

	if (t35 != 3LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x1953 = 0U;
	uint16_t x1955 = 210U;
	volatile int8_t x1956 = INT8_MIN;
	volatile int32_t t36 = 3515286;

	t36 = (((x1953>>x1954)&x1955)%x1956);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x2085 = 0;
	static uint8_t x2086 = 1U;
	uint16_t x2087 = 4276U;
	int32_t t37 = -29;

	t37 = (((x2085>>x2086)&x2087)%x2088);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x2105 = 12628;
	int8_t x2106 = 4;
	static int64_t x2107 = 1LL;
	static int16_t x2108 = INT16_MAX;
	static int64_t t38 = 3LL;

	t38 = (((x2105>>x2106)&x2107)%x2108);

	if (t38 != 1LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x2129 = 46U;
	volatile int8_t x2130 = 1;
	volatile uint32_t x2131 = 53644U;
	int64_t t39 = 1818925264672LL;

	t39 = (((x2129>>x2130)&x2131)%x2132);

	if (t39 != 4LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x2153 = 4998LL;
	uint64_t x2154 = 60LLU;
	int32_t x2155 = INT32_MIN;
	int16_t x2156 = INT16_MAX;
	int64_t t40 = -384430470960319604LL;

	t40 = (((x2153>>x2154)&x2155)%x2156);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x2181 = 4512546070516012566LLU;
	volatile int32_t x2184 = -1;
	static volatile uint64_t t41 = 5544650882424878LLU;

	t41 = (((x2181>>x2182)&x2183)%x2184);

	if (t41 != 35254196247740932LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x2505 = 6U;
	uint32_t x2506 = 0U;

	t42 = (((x2505>>x2506)&x2507)%x2508);

	if (t42 != 6) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x2513 = UINT64_MAX;
	uint16_t x2514 = 1U;
	int16_t x2515 = INT16_MAX;
	volatile uint32_t x2516 = 2077923014U;
	uint64_t t43 = 796142417LLU;

	t43 = (((x2513>>x2514)&x2515)%x2516);

	if (t43 != 32767LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x2641 = 1;
	uint16_t x2642 = 3U;
	volatile int64_t x2643 = -1LL;
	int64_t x2644 = INT64_MIN;

	t44 = (((x2641>>x2642)&x2643)%x2644);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x2717 = INT8_MAX;
	int32_t x2718 = 5;
	int32_t x2719 = INT32_MIN;
	uint32_t x2720 = 299764U;
	static volatile uint32_t t45 = 1541288895U;

	t45 = (((x2717>>x2718)&x2719)%x2720);

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x2742 = 7U;
	int32_t x2743 = INT32_MIN;
	uint32_t t46 = 4537U;

	t46 = (((x2741>>x2742)&x2743)%x2744);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int8_t x2766 = 3;
	int32_t x2767 = -1;
	volatile int8_t x2768 = INT8_MAX;
	volatile uint32_t t47 = 20U;

	t47 = (((x2765>>x2766)&x2767)%x2768);

	if (t47 != 1U) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x2777 = 3434817LLU;
	volatile uint16_t x2778 = 48U;
	int16_t x2779 = INT16_MIN;
	static volatile uint64_t t48 = 744147025292605LLU;

	t48 = (((x2777>>x2778)&x2779)%x2780);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x2797 = 1U;
	uint32_t x2799 = 5U;
	volatile int32_t x2800 = INT32_MAX;

	t49 = (((x2797>>x2798)&x2799)%x2800);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x2809 = INT64_MAX;
	uint8_t x2811 = 2U;
	static uint64_t x2812 = 303077476259531LLU;
	volatile uint64_t t50 = 5402852724344LLU;

	t50 = (((x2809>>x2810)&x2811)%x2812);

	if (t50 != 2LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x2849 = 386532618338LLU;
	uint32_t x2850 = 21U;
	static uint32_t x2851 = UINT32_MAX;
	volatile uint16_t x2852 = 27214U;
	volatile uint64_t t51 = 77746511LLU;

	t51 = (((x2849>>x2850)&x2851)%x2852);

	if (t51 != 21029LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x2878 = 14U;
	volatile int32_t x2879 = -15953001;
	volatile int32_t x2880 = 37;
	uint32_t t52 = 1101U;

	t52 = (((x2877>>x2878)&x2879)%x2880);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x2897 = INT16_MAX;
	uint32_t x2898 = 26U;
	static int16_t x2899 = INT16_MAX;
	static int64_t x2900 = -13072155553LL;
	int64_t t53 = 51182284LL;

	t53 = (((x2897>>x2898)&x2899)%x2900);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x2938 = 6U;
	uint32_t x2939 = 38937209U;
	int8_t x2940 = 1;
	uint32_t t54 = 3913U;

	t54 = (((x2937>>x2938)&x2939)%x2940);

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x2941 = 5454353828062143LLU;
	int8_t x2942 = 15;
	int64_t x2943 = INT64_MIN;
	volatile int16_t x2944 = -133;
	volatile uint64_t t55 = 6098LLU;

	t55 = (((x2941>>x2942)&x2943)%x2944);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x3001 = INT32_MAX;
	int8_t x3002 = 0;

	t56 = (((x3001>>x3002)&x3003)%x3004);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x3082 = 4U;
	uint8_t x3083 = 15U;
	int16_t x3084 = INT16_MAX;
	int64_t t57 = -2110525365275LL;

	t57 = (((x3081>>x3082)&x3083)%x3084);

	if (t57 != 10LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x3117 = 115U;
	uint8_t x3118 = 1U;
	int64_t x3119 = INT64_MIN;
	uint32_t x3120 = 18101479U;
	volatile int64_t t58 = 12374LL;

	t58 = (((x3117>>x3118)&x3119)%x3120);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x3121 = 99U;
	volatile uint8_t x3122 = 1U;
	volatile int64_t x3123 = INT64_MIN;
	int64_t x3124 = 7097289137393758LL;
	int64_t t59 = 5227130042309LL;

	t59 = (((x3121>>x3122)&x3123)%x3124);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x3149 = 9U;
	static uint8_t x3150 = 4U;
	int8_t x3152 = -1;
	volatile uint64_t t60 = 812LLU;

	t60 = (((x3149>>x3150)&x3151)%x3152);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x3237 = INT64_MAX;
	int8_t x3239 = INT8_MIN;
	uint16_t x3240 = 269U;
	static volatile int64_t t61 = 11LL;

	t61 = (((x3237>>x3238)&x3239)%x3240);

	if (t61 != 25LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x3246 = 16U;
	uint16_t x3247 = 0U;
	int32_t x3248 = INT32_MIN;
	static volatile int32_t t62 = 6;

	t62 = (((x3245>>x3246)&x3247)%x3248);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x3261 = 62U;
	uint8_t x3262 = 29U;
	int16_t x3263 = 72;

	t63 = (((x3261>>x3262)&x3263)%x3264);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x3301 = INT32_MAX;
	uint8_t x3302 = 1U;
	volatile int64_t x3303 = INT64_MAX;
	volatile int32_t x3304 = -10701;
	volatile int64_t t64 = -4594192588929921LL;

	t64 = (((x3301>>x3302)&x3303)%x3304);

	if (t64 != 3483LL) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x3341 = UINT8_MAX;
	static int32_t x3343 = INT32_MIN;
	uint64_t x3344 = UINT64_MAX;
	volatile uint64_t t65 = 27605790304353729LLU;

	t65 = (((x3341>>x3342)&x3343)%x3344);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x3389 = 59348382;
	volatile uint64_t x3390 = 11LLU;
	int16_t x3391 = -4814;
	int32_t x3392 = 1;

	t66 = (((x3389>>x3390)&x3391)%x3392);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x3421 = 45U;
	static int32_t x3423 = INT32_MAX;
	volatile int8_t x3424 = INT8_MIN;
	volatile uint32_t t67 = 7U;

	t67 = (((x3421>>x3422)&x3423)%x3424);

	if (t67 != 5U) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x3494 = 1U;
	static int32_t x3495 = INT32_MIN;
	volatile int64_t x3496 = -4135063186433848142LL;
	volatile int64_t t68 = -145327650166LL;

	t68 = (((x3493>>x3494)&x3495)%x3496);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x3669 = UINT64_MAX;
	uint8_t x3670 = 15U;
	uint32_t x3671 = 27748U;
	uint64_t t69 = 729895241303LLU;

	t69 = (((x3669>>x3670)&x3671)%x3672);

	if (t69 != 27748LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint32_t x3701 = 593441U;
	volatile int8_t x3704 = -1;
	volatile int64_t t70 = -548038246903LL;

	t70 = (((x3701>>x3702)&x3703)%x3704);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint8_t x3738 = 1U;
	uint64_t x3740 = UINT64_MAX;
	uint64_t t71 = 3697265LLU;

	t71 = (((x3737>>x3738)&x3739)%x3740);

	if (t71 != 134221958LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x3805 = 5174LLU;
	uint8_t x3806 = 8U;
	static uint8_t x3807 = UINT8_MAX;
	uint64_t t72 = 62507837806LLU;

	t72 = (((x3805>>x3806)&x3807)%x3808);

	if (t72 != 20LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x3829 = 11595U;
	int8_t x3830 = 10;
	volatile uint64_t x3831 = 3LLU;

	t73 = (((x3829>>x3830)&x3831)%x3832);

	if (t73 != 3LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x3849 = 4385406431042862273LLU;
	int16_t x3850 = 15;
	int8_t x3851 = 41;
	int16_t x3852 = INT16_MIN;
	volatile uint64_t t74 = 94LLU;

	t74 = (((x3849>>x3850)&x3851)%x3852);

	if (t74 != 9LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x3893 = INT64_MAX;
	uint32_t x3894 = 28U;
	int64_t x3895 = 1409842454472756098LL;
	static volatile int32_t x3896 = -2954;
	static volatile int64_t t75 = 2782200LL;

	t75 = (((x3893>>x3894)&x3895)%x3896);

	if (t75 != 134LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x3897 = 1605;
	static int8_t x3898 = 0;
	int32_t x3899 = -1;
	static int16_t x3900 = INT16_MIN;

	t76 = (((x3897>>x3898)&x3899)%x3900);

	if (t76 != 1605) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x3949 = 6U;
	uint64_t x3951 = UINT64_MAX;
	volatile uint64_t x3952 = 489354965LLU;
	volatile uint64_t t77 = 191006969453359LLU;

	t77 = (((x3949>>x3950)&x3951)%x3952);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x3985 = UINT64_MAX;
	uint8_t x3986 = 2U;
	int64_t x3987 = INT64_MIN;
	volatile uint64_t t78 = 8177008487LLU;

	t78 = (((x3985>>x3986)&x3987)%x3988);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x4069 = 5726LL;
	int16_t x4070 = 29;
	static int32_t x4071 = -1;
	static int8_t x4072 = INT8_MIN;
	static volatile int64_t t79 = 179LL;

	t79 = (((x4069>>x4070)&x4071)%x4072);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x4117 = INT32_MAX;
	uint8_t x4118 = 31U;
	uint64_t x4119 = 22047LLU;
	uint8_t x4120 = 9U;
	static volatile uint64_t t80 = 10LLU;

	t80 = (((x4117>>x4118)&x4119)%x4120);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x4141 = INT32_MAX;
	static uint8_t x4142 = 13U;
	uint32_t x4143 = 72466U;
	uint32_t x4144 = 356U;
	static volatile uint32_t t81 = 9U;

	t81 = (((x4141>>x4142)&x4143)%x4144);

	if (t81 != 198U) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint32_t x4157 = 3U;
	static int16_t x4158 = 7;
	static uint32_t x4159 = UINT32_MAX;
	int8_t x4160 = INT8_MIN;
	uint32_t t82 = 975800U;

	t82 = (((x4157>>x4158)&x4159)%x4160);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x4171 = UINT16_MAX;
	int16_t x4172 = INT16_MAX;
	static volatile int32_t t83 = 1;

	t83 = (((x4169>>x4170)&x4171)%x4172);

	if (t83 != 127) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x4206 = 6U;
	static int16_t x4207 = INT16_MIN;

	t84 = (((x4205>>x4206)&x4207)%x4208);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x4274 = 0;
	int16_t x4275 = INT16_MIN;
	uint8_t x4276 = 50U;

	t85 = (((x4273>>x4274)&x4275)%x4276);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x4337 = 2922401318020116LLU;
	uint8_t x4338 = 2U;
	int32_t x4339 = -1;
	uint64_t t86 = 367841819961403891LLU;

	t86 = (((x4337>>x4338)&x4339)%x4340);

	if (t86 != 42654LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int16_t x4345 = INT16_MAX;
	volatile uint8_t x4346 = 7U;
	static volatile uint64_t x4347 = 824427LLU;
	uint32_t x4348 = UINT32_MAX;

	t87 = (((x4345>>x4346)&x4347)%x4348);

	if (t87 != 107LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x4381 = UINT8_MAX;
	uint8_t x4382 = 3U;
	static int16_t x4383 = INT16_MIN;
	int16_t x4384 = -1;
	int32_t t88 = 689774402;

	t88 = (((x4381>>x4382)&x4383)%x4384);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x4393 = 236239590U;
	static uint16_t x4394 = 1U;
	int64_t x4395 = INT64_MIN;
	int32_t x4396 = 691;
	int64_t t89 = 1937662053149481174LL;

	t89 = (((x4393>>x4394)&x4395)%x4396);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x4482 = 22U;
	int64_t x4483 = -1720LL;
	uint32_t x4484 = UINT32_MAX;
	int64_t t90 = 1127421927760170661LL;

	t90 = (((x4481>>x4482)&x4483)%x4484);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x4614 = 50U;
	int32_t x4616 = INT32_MAX;

	t91 = (((x4613>>x4614)&x4615)%x4616);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x4645 = 7U;
	static uint8_t x4646 = 11U;
	int64_t t92 = -86163063204481LL;

	t92 = (((x4645>>x4646)&x4647)%x4648);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x4698 = 14;
	volatile int16_t x4699 = -1;
	volatile uint32_t x4700 = UINT32_MAX;
	uint64_t t93 = 0LLU;

	t93 = (((x4697>>x4698)&x4699)%x4700);

	if (t93 != 262143LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x4786 = 1;
	static uint8_t x4787 = 1U;
	volatile int32_t x4788 = INT32_MAX;

	t94 = (((x4785>>x4786)&x4787)%x4788);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x4849 = UINT8_MAX;
	static int16_t x4851 = INT16_MAX;
	uint16_t x4852 = 1U;
	volatile int32_t t95 = -3851;

	t95 = (((x4849>>x4850)&x4851)%x4852);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x4913 = UINT32_MAX;
	uint8_t x4914 = 0U;
	uint8_t x4915 = 3U;

	t96 = (((x4913>>x4914)&x4915)%x4916);

	if (t96 != 3U) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x5233 = INT32_MAX;
	uint8_t x5234 = 1U;
	static uint32_t x5235 = UINT32_MAX;
	int16_t x5236 = INT16_MIN;
	uint32_t t97 = 1658U;

	t97 = (((x5233>>x5234)&x5235)%x5236);

	if (t97 != 1073741823U) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x5237 = UINT16_MAX;
	static uint16_t x5238 = 7U;
	int32_t x5239 = INT32_MIN;
	int8_t x5240 = -51;
	volatile int32_t t98 = -974668;

	t98 = (((x5237>>x5238)&x5239)%x5240);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x5245 = UINT32_MAX;
	int8_t x5246 = 1;
	int32_t x5247 = INT32_MIN;
	int8_t x5248 = INT8_MAX;
	static volatile uint32_t t99 = 0U;

	t99 = (((x5245>>x5246)&x5247)%x5248);

	if (t99 != 0U) { NG(); } else { ; }
	
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

