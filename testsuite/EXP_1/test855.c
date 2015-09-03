#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 32687021;
int16_t x52 = INT16_MIN;
static uint8_t x173 = 10U;
volatile int64_t x176 = INT64_MIN;
volatile int32_t t2 = 658;
uint16_t x378 = 18U;
int8_t x396 = INT8_MIN;
static int8_t x470 = 10;
volatile int16_t x471 = -2884;
uint64_t x573 = 91425736330788185LLU;
int8_t x576 = -6;
uint16_t x680 = UINT16_MAX;
uint8_t x858 = 10U;
int8_t x859 = 1;
int32_t x875 = -45256;
static int64_t x948 = -1LL;
volatile int32_t t13 = 10465018;
volatile int8_t x1004 = INT8_MAX;
volatile int32_t t15 = 245829003;
static uint16_t x1090 = 3U;
volatile int32_t t17 = 1201244;
int8_t x1095 = -1;
uint16_t x1096 = UINT16_MAX;
volatile int32_t t18 = 6739586;
volatile int32_t t19 = 1095889;
volatile int32_t x1274 = 18;
uint64_t x1276 = 67448502493LLU;
volatile int32_t t20 = -22475314;
int32_t t21 = -887869;
volatile uint32_t x1545 = 1U;
int16_t x1547 = INT16_MIN;
static uint8_t x1548 = UINT8_MAX;
static volatile int32_t t25 = -227;
int32_t x1823 = INT32_MIN;
int16_t x1824 = 0;
uint32_t x1876 = 68U;
static volatile int32_t t28 = 1;
int16_t x1894 = 4;
volatile int32_t t29 = -7162164;
volatile int8_t x2070 = 0;
int64_t x2072 = 6320LL;
int8_t x2176 = INT8_MIN;
int8_t x2318 = 1;
uint16_t x2561 = 20U;
int8_t x2581 = INT8_MAX;
int16_t x2583 = 995;
int32_t t39 = -32024;
uint64_t x2797 = UINT64_MAX;
int64_t x2798 = 0LL;
int32_t x2953 = 38713930;
volatile uint64_t x2954 = 0LLU;
static volatile int32_t t46 = -178227;
int64_t x3189 = 2787LL;
volatile int32_t t47 = -1313132;
static int32_t x3647 = 138;
static uint64_t x3671 = 2705651530LLU;
static int32_t x3840 = INT32_MIN;
uint16_t x3901 = 2U;
volatile int32_t t57 = 1;
static int8_t x4172 = 2;
int32_t t58 = 297070391;
uint64_t x4197 = 631245253006086LLU;
int64_t x4200 = 97218559180806LL;
int8_t x4320 = 1;
int32_t t62 = 1231;
uint64_t x4473 = 107087070370LLU;
volatile int8_t x4540 = -30;
volatile uint16_t x4578 = 16U;
static uint32_t x4609 = 1255U;
static volatile int8_t x4612 = INT8_MIN;
int32_t t70 = -1;
uint32_t x4690 = 13U;
int64_t x4815 = -1LL;
uint64_t x4816 = UINT64_MAX;
int16_t x4831 = INT16_MIN;
int32_t x5305 = INT32_MAX;
static uint8_t x5306 = 0U;
uint64_t x5369 = 11LLU;
uint8_t x5370 = 62U;
uint16_t x5372 = 5U;
int64_t x5549 = 19482542662LL;
static int32_t t78 = -2;
int32_t x5670 = 23;
int16_t x6052 = -1;
volatile uint64_t x6238 = 0LLU;
uint32_t x6525 = UINT32_MAX;
static int64_t x6528 = INT64_MIN;
static int32_t t90 = -12;
int16_t x6674 = 5;
uint16_t x6675 = 3U;
int32_t x6677 = INT32_MAX;
volatile uint64_t x6817 = UINT64_MAX;
uint16_t x6819 = UINT16_MAX;
int8_t x6882 = 5;
volatile int32_t x6883 = -1;
static int32_t t96 = -232750;
volatile int32_t t97 = 243454;
uint16_t x6904 = UINT16_MAX;
uint64_t x6935 = 594154367896LLU;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	int16_t x2 = 12;
	volatile uint8_t x3 = 31U;
	static uint32_t x4 = 195857439U;

	t0 = (((x1<<x2)+x3)<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x49 = 2543998230009LLU;
	int8_t x50 = 53;
	static uint32_t x51 = UINT32_MAX;
	int32_t t1 = 2228690;

	t1 = (((x49<<x50)+x51)<=x52);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x174 = 6;
	static uint64_t x175 = 8814285439653487LLU;

	t2 = (((x173<<x174)+x175)<=x176);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x233 = UINT64_MAX;
	uint8_t x234 = 5U;
	volatile int8_t x235 = -1;
	int32_t x236 = INT32_MAX;
	volatile int32_t t3 = -477;

	t3 = (((x233<<x234)+x235)<=x236);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x377 = 49LLU;
	int8_t x379 = INT8_MAX;
	int32_t x380 = INT32_MIN;
	int32_t t4 = 1;

	t4 = (((x377<<x378)+x379)<=x380);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x393 = INT8_MAX;
	int8_t x394 = 1;
	int8_t x395 = -1;
	volatile int32_t t5 = -5203;

	t5 = (((x393<<x394)+x395)<=x396);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint16_t x469 = 25U;
	uint64_t x472 = 2399235LLU;
	volatile int32_t t6 = 420;

	t6 = (((x469<<x470)+x471)<=x472);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x574 = 1U;
	static volatile int32_t x575 = -1;
	volatile int32_t t7 = 75;

	t7 = (((x573<<x574)+x575)<=x576);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x621 = 1U;
	uint8_t x622 = 2U;
	int64_t x623 = 35070LL;
	uint64_t x624 = 29371378065376231LLU;
	static int32_t t8 = 26282155;

	t8 = (((x621<<x622)+x623)<=x624);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x677 = 373LLU;
	uint8_t x678 = 9U;
	static int32_t x679 = 7;
	static volatile int32_t t9 = -4534;

	t9 = (((x677<<x678)+x679)<=x680);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x857 = 138;
	volatile int8_t x860 = -13;
	volatile int32_t t10 = 60519;

	t10 = (((x857<<x858)+x859)<=x860);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x873 = 577457919LLU;
	int8_t x874 = 7;
	int64_t x876 = -17LL;
	volatile int32_t t11 = -54920822;

	t11 = (((x873<<x874)+x875)<=x876);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x877 = UINT8_MAX;
	static uint8_t x878 = 0U;
	static volatile int16_t x879 = INT16_MIN;
	int32_t x880 = INT32_MIN;
	int32_t t12 = 1161;

	t12 = (((x877<<x878)+x879)<=x880);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x945 = 2U;
	volatile int64_t x946 = 9LL;
	volatile uint8_t x947 = UINT8_MAX;

	t13 = (((x945<<x946)+x947)<=x948);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x1001 = INT16_MAX;
	static uint64_t x1002 = 4LLU;
	int64_t x1003 = 2LL;
	int32_t t14 = 85257748;

	t14 = (((x1001<<x1002)+x1003)<=x1004);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x1037 = UINT64_MAX;
	uint32_t x1038 = 3U;
	volatile int16_t x1039 = INT16_MIN;
	static int64_t x1040 = -3LL;

	t15 = (((x1037<<x1038)+x1039)<=x1040);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x1045 = INT8_MAX;
	static int64_t x1046 = 2LL;
	int8_t x1047 = INT8_MIN;
	int32_t x1048 = 48324;
	volatile int32_t t16 = 0;

	t16 = (((x1045<<x1046)+x1047)<=x1048);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x1089 = 5U;
	int16_t x1091 = -1404;
	uint64_t x1092 = 129LLU;

	t17 = (((x1089<<x1090)+x1091)<=x1092);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x1093 = UINT32_MAX;
	int8_t x1094 = 0;

	t18 = (((x1093<<x1094)+x1095)<=x1096);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x1253 = 130LLU;
	static int64_t x1254 = 0LL;
	int64_t x1255 = -264939913LL;
	uint8_t x1256 = 15U;

	t19 = (((x1253<<x1254)+x1255)<=x1256);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x1273 = 1LL;
	int64_t x1275 = -1985590LL;

	t20 = (((x1273<<x1274)+x1275)<=x1276);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x1281 = 1;
	static int8_t x1282 = 0;
	volatile int8_t x1283 = INT8_MIN;
	uint32_t x1284 = 73674U;

	t21 = (((x1281<<x1282)+x1283)<=x1284);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x1437 = 6LL;
	int8_t x1438 = 0;
	uint64_t x1439 = 104571961662120682LLU;
	int8_t x1440 = INT8_MIN;
	int32_t t22 = 2697276;

	t22 = (((x1437<<x1438)+x1439)<=x1440);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x1461 = 19637U;
	uint8_t x1462 = 1U;
	uint16_t x1463 = UINT16_MAX;
	int16_t x1464 = 4770;
	int32_t t23 = 2937322;

	t23 = (((x1461<<x1462)+x1463)<=x1464);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint16_t x1546 = 22U;
	volatile int32_t t24 = -65;

	t24 = (((x1545<<x1546)+x1547)<=x1548);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x1661 = 0U;
	static int32_t x1662 = 1;
	int8_t x1663 = INT8_MIN;
	uint8_t x1664 = 0U;

	t25 = (((x1661<<x1662)+x1663)<=x1664);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x1785 = 21U;
	uint8_t x1786 = 1U;
	static uint64_t x1787 = 65450094980999LLU;
	int64_t x1788 = -1LL;
	int32_t t26 = 18928;

	t26 = (((x1785<<x1786)+x1787)<=x1788);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1821 = 6064;
	volatile int32_t x1822 = 7;
	volatile int32_t t27 = 421223357;

	t27 = (((x1821<<x1822)+x1823)<=x1824);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x1873 = 51561U;
	uint8_t x1874 = 18U;
	volatile uint64_t x1875 = 36578590LLU;

	t28 = (((x1873<<x1874)+x1875)<=x1876);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x1893 = 219313LLU;
	int16_t x1895 = INT16_MIN;
	uint64_t x1896 = 3676928041011755LLU;

	t29 = (((x1893<<x1894)+x1895)<=x1896);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x1901 = 529008787493LLU;
	uint32_t x1902 = 2U;
	static volatile int32_t x1903 = INT32_MIN;
	static volatile int32_t x1904 = INT32_MIN;
	int32_t t30 = -1;

	t30 = (((x1901<<x1902)+x1903)<=x1904);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x2069 = 112240696734864215LLU;
	uint16_t x2071 = UINT16_MAX;
	int32_t t31 = -1089924;

	t31 = (((x2069<<x2070)+x2071)<=x2072);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x2173 = UINT16_MAX;
	static uint8_t x2174 = 0U;
	int64_t x2175 = INT64_MIN;
	static volatile int32_t t32 = 264474;

	t32 = (((x2173<<x2174)+x2175)<=x2176);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x2317 = UINT8_MAX;
	int64_t x2319 = INT64_MIN;
	int64_t x2320 = 14558984485709007LL;
	volatile int32_t t33 = -31;

	t33 = (((x2317<<x2318)+x2319)<=x2320);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x2389 = 16U;
	static uint8_t x2390 = 7U;
	static uint64_t x2391 = 31998374334540LLU;
	int8_t x2392 = INT8_MIN;
	static int32_t t34 = -355915470;

	t34 = (((x2389<<x2390)+x2391)<=x2392);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x2562 = 4LL;
	static int8_t x2563 = -1;
	int64_t x2564 = -123781465755301492LL;
	static volatile int32_t t35 = -3934712;

	t35 = (((x2561<<x2562)+x2563)<=x2564);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int8_t x2582 = 4;
	static volatile uint64_t x2584 = UINT64_MAX;
	volatile int32_t t36 = 1464968;

	t36 = (((x2581<<x2582)+x2583)<=x2584);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x2709 = 0U;
	volatile int8_t x2710 = 16;
	int64_t x2711 = INT64_MAX;
	volatile int64_t x2712 = -983568LL;
	int32_t t37 = -143591268;

	t37 = (((x2709<<x2710)+x2711)<=x2712);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x2725 = UINT64_MAX;
	uint8_t x2726 = 7U;
	static int32_t x2727 = -1;
	int64_t x2728 = -1LL;
	volatile int32_t t38 = 272187;

	t38 = (((x2725<<x2726)+x2727)<=x2728);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x2789 = 237785288411091LLU;
	int8_t x2790 = 5;
	volatile int32_t x2791 = INT32_MIN;
	int32_t x2792 = INT32_MIN;

	t39 = (((x2789<<x2790)+x2791)<=x2792);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x2799 = INT64_MIN;
	static int32_t x2800 = -6523551;
	int32_t t40 = -34842;

	t40 = (((x2797<<x2798)+x2799)<=x2800);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x2817 = UINT32_MAX;
	uint64_t x2818 = 20LLU;
	int16_t x2819 = 0;
	int64_t x2820 = INT64_MAX;
	volatile int32_t t41 = -243;

	t41 = (((x2817<<x2818)+x2819)<=x2820);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x2955 = INT32_MIN;
	uint8_t x2956 = 32U;
	int32_t t42 = 1;

	t42 = (((x2953<<x2954)+x2955)<=x2956);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int64_t x2997 = 49067741LL;
	volatile int8_t x2998 = 17;
	int16_t x2999 = INT16_MAX;
	int32_t x3000 = 557;
	int32_t t43 = 172348;

	t43 = (((x2997<<x2998)+x2999)<=x3000);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x3005 = 25094U;
	int8_t x3006 = 2;
	int64_t x3007 = 2157789932820LL;
	int64_t x3008 = 7LL;
	int32_t t44 = 2938731;

	t44 = (((x3005<<x3006)+x3007)<=x3008);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x3049 = 1U;
	int8_t x3050 = 1;
	volatile uint16_t x3051 = UINT16_MAX;
	uint16_t x3052 = 31773U;
	int32_t t45 = 30;

	t45 = (((x3049<<x3050)+x3051)<=x3052);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x3085 = 594U;
	int16_t x3086 = 0;
	uint16_t x3087 = 3U;
	volatile int8_t x3088 = INT8_MIN;

	t46 = (((x3085<<x3086)+x3087)<=x3088);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint32_t x3190 = 0U;
	static volatile int64_t x3191 = -23LL;
	int64_t x3192 = 1180796478800LL;

	t47 = (((x3189<<x3190)+x3191)<=x3192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x3441 = 0U;
	uint8_t x3442 = 2U;
	int64_t x3443 = 3412185LL;
	static int8_t x3444 = 1;
	static int32_t t48 = -47;

	t48 = (((x3441<<x3442)+x3443)<=x3444);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x3541 = 207225024LLU;
	uint8_t x3542 = 6U;
	uint32_t x3543 = 463U;
	int32_t x3544 = -814;
	volatile int32_t t49 = 7940389;

	t49 = (((x3541<<x3542)+x3543)<=x3544);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x3645 = 0;
	uint8_t x3646 = 1U;
	uint8_t x3648 = 4U;
	volatile int32_t t50 = -16176;

	t50 = (((x3645<<x3646)+x3647)<=x3648);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x3669 = 211U;
	uint16_t x3670 = 2U;
	int64_t x3672 = INT64_MIN;
	static int32_t t51 = -6429;

	t51 = (((x3669<<x3670)+x3671)<=x3672);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x3685 = 5953U;
	int8_t x3686 = 1;
	int32_t x3687 = INT32_MIN;
	static volatile int16_t x3688 = -1;
	static volatile int32_t t52 = 86071903;

	t52 = (((x3685<<x3686)+x3687)<=x3688);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x3709 = 11U;
	uint8_t x3710 = 27U;
	static uint16_t x3711 = 1308U;
	volatile int8_t x3712 = INT8_MAX;
	static volatile int32_t t53 = 91;

	t53 = (((x3709<<x3710)+x3711)<=x3712);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x3729 = 40;
	volatile uint16_t x3730 = 0U;
	int32_t x3731 = -951170529;
	int8_t x3732 = INT8_MIN;
	static int32_t t54 = 0;

	t54 = (((x3729<<x3730)+x3731)<=x3732);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x3837 = 5690897700955897LLU;
	uint16_t x3838 = 2U;
	static int64_t x3839 = INT64_MIN;
	volatile int32_t t55 = 12519136;

	t55 = (((x3837<<x3838)+x3839)<=x3840);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x3902 = 0U;
	int64_t x3903 = INT64_MIN;
	static volatile int32_t x3904 = 536307626;
	int32_t t56 = 491;

	t56 = (((x3901<<x3902)+x3903)<=x3904);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x3945 = 23;
	static uint8_t x3946 = 1U;
	static int64_t x3947 = 6160037364808562LL;
	int16_t x3948 = -2653;

	t57 = (((x3945<<x3946)+x3947)<=x3948);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x4169 = 29363403U;
	volatile int8_t x4170 = 3;
	static volatile uint8_t x4171 = 1U;

	t58 = (((x4169<<x4170)+x4171)<=x4172);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x4181 = INT8_MAX;
	uint8_t x4182 = 0U;
	int64_t x4183 = 1LL;
	int8_t x4184 = -1;
	static int32_t t59 = 26109;

	t59 = (((x4181<<x4182)+x4183)<=x4184);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x4198 = 11;
	int32_t x4199 = -30295;
	int32_t t60 = 88;

	t60 = (((x4197<<x4198)+x4199)<=x4200);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x4297 = 0U;
	int8_t x4298 = 13;
	uint8_t x4299 = 4U;
	static volatile int64_t x4300 = -1LL;
	volatile int32_t t61 = 273192;

	t61 = (((x4297<<x4298)+x4299)<=x4300);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x4317 = 114U;
	uint8_t x4318 = 0U;
	uint16_t x4319 = 0U;

	t62 = (((x4317<<x4318)+x4319)<=x4320);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x4325 = INT8_MAX;
	uint16_t x4326 = 7U;
	uint16_t x4327 = 4U;
	uint64_t x4328 = 226569108LLU;
	static int32_t t63 = 32375;

	t63 = (((x4325<<x4326)+x4327)<=x4328);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x4357 = 1U;
	static int16_t x4358 = 4;
	int8_t x4359 = -41;
	uint32_t x4360 = 3838U;
	int32_t t64 = 1;

	t64 = (((x4357<<x4358)+x4359)<=x4360);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x4474 = 18U;
	int64_t x4475 = -367588LL;
	static int8_t x4476 = INT8_MIN;
	int32_t t65 = 3;

	t65 = (((x4473<<x4474)+x4475)<=x4476);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x4485 = 1;
	uint64_t x4486 = 23LLU;
	int64_t x4487 = INT64_MIN;
	int32_t x4488 = INT32_MIN;
	int32_t t66 = 33602846;

	t66 = (((x4485<<x4486)+x4487)<=x4488);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x4537 = 431U;
	uint32_t x4538 = 1U;
	volatile uint16_t x4539 = UINT16_MAX;
	int32_t t67 = -741532;

	t67 = (((x4537<<x4538)+x4539)<=x4540);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x4577 = 3U;
	volatile uint32_t x4579 = 7969U;
	static int16_t x4580 = INT16_MAX;
	static volatile int32_t t68 = 267318891;

	t68 = (((x4577<<x4578)+x4579)<=x4580);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint8_t x4610 = 0U;
	int32_t x4611 = INT32_MIN;
	int32_t t69 = 49504044;

	t69 = (((x4609<<x4610)+x4611)<=x4612);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x4625 = 107U;
	uint8_t x4626 = 13U;
	uint8_t x4627 = UINT8_MAX;
	int16_t x4628 = INT16_MIN;

	t70 = (((x4625<<x4626)+x4627)<=x4628);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x4689 = 17U;
	int16_t x4691 = INT16_MAX;
	uint16_t x4692 = 11U;
	static int32_t t71 = -1690058;

	t71 = (((x4689<<x4690)+x4691)<=x4692);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x4813 = 37242U;
	volatile int32_t x4814 = 10;
	volatile int32_t t72 = 93;

	t72 = (((x4813<<x4814)+x4815)<=x4816);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x4829 = 1U;
	static int8_t x4830 = 0;
	volatile int16_t x4832 = -1;
	static volatile int32_t t73 = -1;

	t73 = (((x4829<<x4830)+x4831)<=x4832);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x4917 = 609839419LLU;
	static uint16_t x4918 = 31U;
	int32_t x4919 = 0;
	int64_t x4920 = -947924497849775648LL;
	volatile int32_t t74 = -297;

	t74 = (((x4917<<x4918)+x4919)<=x4920);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x5307 = 2145920U;
	int16_t x5308 = -1;
	volatile int32_t t75 = -237584;

	t75 = (((x5305<<x5306)+x5307)<=x5308);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x5371 = 0U;
	static volatile int32_t t76 = 1826258;

	t76 = (((x5369<<x5370)+x5371)<=x5372);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x5417 = UINT8_MAX;
	int8_t x5418 = 12;
	uint16_t x5419 = UINT16_MAX;
	int64_t x5420 = INT64_MIN;
	static int32_t t77 = 192284487;

	t77 = (((x5417<<x5418)+x5419)<=x5420);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x5550 = 2;
	uint8_t x5551 = 28U;
	volatile int64_t x5552 = INT64_MAX;

	t78 = (((x5549<<x5550)+x5551)<=x5552);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x5585 = 0;
	volatile uint8_t x5586 = 6U;
	volatile int8_t x5587 = INT8_MIN;
	int16_t x5588 = INT16_MAX;
	static int32_t t79 = -206946;

	t79 = (((x5585<<x5586)+x5587)<=x5588);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x5605 = 57914510971LLU;
	int16_t x5606 = 8;
	int16_t x5607 = 45;
	int64_t x5608 = INT64_MIN;
	static int32_t t80 = 12041;

	t80 = (((x5605<<x5606)+x5607)<=x5608);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x5669 = 3;
	int8_t x5671 = INT8_MIN;
	uint8_t x5672 = UINT8_MAX;
	int32_t t81 = 361;

	t81 = (((x5669<<x5670)+x5671)<=x5672);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x5973 = 880U;
	volatile uint32_t x5974 = 1U;
	uint32_t x5975 = 1U;
	uint16_t x5976 = 1U;
	int32_t t82 = -101132;

	t82 = (((x5973<<x5974)+x5975)<=x5976);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x6049 = 181LLU;
	int8_t x6050 = 5;
	volatile int32_t x6051 = INT32_MAX;
	static volatile int32_t t83 = -390;

	t83 = (((x6049<<x6050)+x6051)<=x6052);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x6213 = 1313630;
	uint8_t x6214 = 8U;
	static int16_t x6215 = INT16_MIN;
	int64_t x6216 = INT64_MIN;
	int32_t t84 = -19271;

	t84 = (((x6213<<x6214)+x6215)<=x6216);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x6237 = INT8_MAX;
	int64_t x6239 = INT64_MIN;
	volatile int32_t x6240 = INT32_MIN;
	volatile int32_t t85 = 890241;

	t85 = (((x6237<<x6238)+x6239)<=x6240);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x6526 = 0U;
	static int64_t x6527 = -1LL;
	int32_t t86 = 14475119;

	t86 = (((x6525<<x6526)+x6527)<=x6528);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x6597 = 27U;
	static int16_t x6598 = 1;
	static uint32_t x6599 = 0U;
	uint8_t x6600 = 9U;
	int32_t t87 = -116774198;

	t87 = (((x6597<<x6598)+x6599)<=x6600);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x6633 = 1U;
	uint16_t x6634 = 3U;
	volatile int32_t x6635 = -1;
	static volatile uint64_t x6636 = UINT64_MAX;
	int32_t t88 = -463;

	t88 = (((x6633<<x6634)+x6635)<=x6636);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x6637 = 149953579993566197LLU;
	int8_t x6638 = 12;
	volatile uint32_t x6639 = UINT32_MAX;
	static int32_t x6640 = INT32_MIN;
	volatile int32_t t89 = -457267572;

	t89 = (((x6637<<x6638)+x6639)<=x6640);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x6657 = 1;
	int8_t x6658 = 0;
	int32_t x6659 = INT32_MIN;
	int8_t x6660 = 5;

	t90 = (((x6657<<x6658)+x6659)<=x6660);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x6673 = UINT64_MAX;
	volatile uint64_t x6676 = UINT64_MAX;
	static volatile int32_t t91 = 0;

	t91 = (((x6673<<x6674)+x6675)<=x6676);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x6678 = 0;
	int64_t x6679 = -2478565210271LL;
	uint8_t x6680 = UINT8_MAX;
	volatile int32_t t92 = 5050;

	t92 = (((x6677<<x6678)+x6679)<=x6680);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x6745 = INT64_MAX;
	uint16_t x6746 = 0U;
	int32_t x6747 = INT32_MIN;
	int32_t x6748 = INT32_MAX;
	static int32_t t93 = -288669115;

	t93 = (((x6745<<x6746)+x6747)<=x6748);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x6749 = 2055010LLU;
	uint16_t x6750 = 4U;
	volatile int64_t x6751 = INT64_MIN;
	int32_t x6752 = 15;
	int32_t t94 = 45;

	t94 = (((x6749<<x6750)+x6751)<=x6752);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int32_t x6818 = 3;
	volatile int64_t x6820 = INT64_MIN;
	int32_t t95 = -63428034;

	t95 = (((x6817<<x6818)+x6819)<=x6820);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x6881 = 20;
	int32_t x6884 = -9917;

	t96 = (((x6881<<x6882)+x6883)<=x6884);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x6893 = 0;
	static uint16_t x6894 = 2U;
	int8_t x6895 = INT8_MAX;
	volatile int32_t x6896 = -1;

	t97 = (((x6893<<x6894)+x6895)<=x6896);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x6901 = 27LLU;
	uint8_t x6902 = 2U;
	int64_t x6903 = -45922358790102889LL;
	volatile int32_t t98 = 0;

	t98 = (((x6901<<x6902)+x6903)<=x6904);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x6933 = 27802200441LLU;
	uint32_t x6934 = 0U;
	int16_t x6936 = -1;
	static volatile int32_t t99 = 825444213;

	t99 = (((x6933<<x6934)+x6935)<=x6936);

	if (t99 != 1) { NG(); } else { ; }
	
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

