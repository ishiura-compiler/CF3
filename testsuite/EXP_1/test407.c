#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x81 = 8U;
volatile int8_t x83 = 30;
volatile int64_t t2 = -1552894LL;
int32_t x197 = -2690;
volatile int8_t x198 = -2;
uint8_t x199 = 5U;
static int16_t x200 = INT16_MAX;
uint64_t x406 = 2342989LLU;
uint8_t x471 = 12U;
volatile int32_t t7 = 44375;
uint32_t x474 = 200773030U;
uint32_t x524 = 3629090U;
volatile int8_t x562 = 0;
int8_t x815 = 0;
volatile uint32_t t17 = 11053277U;
static int32_t x1142 = -393049;
int16_t x1237 = 82;
uint64_t x1240 = 8794532655LLU;
int16_t x1328 = -1;
int8_t x1335 = 63;
uint64_t t22 = 195206741070843LLU;
uint8_t x1343 = 22U;
uint64_t t23 = 121367LLU;
uint64_t x1352 = 17664973538094817LLU;
uint8_t x1356 = 79U;
static int32_t t25 = -4534;
static volatile int32_t x1364 = 1;
uint64_t x1377 = 66899516716LLU;
uint8_t x1450 = UINT8_MAX;
int8_t x1451 = 1;
volatile int64_t t28 = -7LL;
int64_t x1479 = 25LL;
int32_t x1480 = -45;
uint16_t x1487 = 1U;
volatile int8_t x1843 = 2;
int16_t x1895 = 14;
int8_t x1960 = INT8_MIN;
volatile int32_t t33 = 90;
uint64_t x1989 = UINT64_MAX;
int32_t x1990 = -32780;
static int8_t x2073 = 0;
static uint8_t x2131 = 6U;
volatile uint64_t t37 = 61331905627LLU;
int32_t x2573 = INT32_MAX;
uint32_t x2574 = 239504U;
int32_t t42 = -738518002;
uint16_t x2756 = 22565U;
uint32_t t44 = 1623087U;
static uint64_t x2870 = 384LLU;
uint16_t x2872 = 2199U;
uint8_t x2879 = 20U;
static int64_t x2880 = INT64_MIN;
int16_t x2881 = INT16_MIN;
int8_t x2937 = -1;
int16_t x2940 = INT16_MIN;
static int32_t x3170 = INT32_MIN;
int32_t x3269 = INT32_MIN;
volatile uint64_t x3349 = 7978975746788518091LLU;
int32_t x3407 = 1;
static volatile uint32_t t60 = 5U;
int8_t x3719 = 5;
int32_t t62 = 7;
uint64_t x3870 = 1LLU;
static uint8_t x3871 = 0U;
static int8_t x3907 = 4;
static volatile uint8_t x3909 = 2U;
uint64_t x3922 = 36LLU;
uint32_t x4102 = 115950859U;
volatile uint64_t t70 = 13392689997080LLU;
static uint16_t x4147 = 2U;
volatile int32_t t71 = -1;
uint8_t x4175 = 22U;
uint16_t x4276 = 447U;
volatile uint64_t x4302 = UINT64_MAX;
volatile uint8_t x4303 = 32U;
int64_t t77 = 359978174LL;
static uint32_t t80 = 70U;
static volatile uint64_t x4725 = 12622868827LLU;
int8_t x4746 = -1;
int8_t x4748 = -7;
static uint16_t x4791 = 4U;
volatile uint8_t x4792 = UINT8_MAX;
uint32_t x4824 = 201U;
int64_t t87 = 1038032LL;
int8_t x4870 = 3;
volatile uint8_t x4871 = 4U;
volatile uint64_t x5101 = UINT64_MAX;
static uint64_t x5333 = 5102591LLU;
volatile uint64_t x5397 = UINT64_MAX;
volatile uint16_t x5399 = 1U;
static int16_t x5400 = -336;
static uint32_t x5405 = 5369U;
static volatile uint32_t t97 = 8948U;
volatile int64_t x5469 = -1LL;
int32_t x5472 = INT32_MAX;
int8_t x5534 = INT8_MAX;
volatile uint64_t t99 = 4LLU;


void f0(void) {
	static uint32_t x5 = 16139U;
	static int8_t x6 = -6;
	uint8_t x7 = 4U;
	static int16_t x8 = INT16_MIN;
	static volatile uint32_t t0 = 7U;

	t0 = (((x5*x6)<<x7)/x8);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x82 = 801LL;
	uint64_t x84 = 57638356094337866LLU;
	uint64_t t1 = 120913858LLU;

	t1 = (((x81*x82)<<x83)/x84);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x157 = -1;
	int64_t x158 = -1LL;
	uint8_t x159 = 23U;
	volatile int64_t x160 = -8357936917473979LL;

	t2 = (((x157*x158)<<x159)/x160);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int32_t t3 = 1425;

	t3 = (((x197*x198)<<x199)/x200);

	if (t3 != 5) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x213 = 45U;
	int8_t x214 = INT8_MIN;
	uint8_t x215 = 7U;
	static uint8_t x216 = 1U;
	static volatile uint32_t t4 = 213317225U;

	t4 = (((x213*x214)<<x215)/x216);

	if (t4 != 4294230016U) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x377 = UINT64_MAX;
	int32_t x378 = -1;
	int8_t x379 = 59;
	static volatile int8_t x380 = INT8_MIN;
	volatile uint64_t t5 = 133004970307LLU;

	t5 = (((x377*x378)<<x379)/x380);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x405 = -3;
	uint16_t x407 = 0U;
	uint32_t x408 = 51U;
	static volatile uint64_t t6 = 2618883261911503LLU;

	t6 = (((x405*x406)<<x407)/x408);

	if (t6 != 361700864190245542LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x469 = -1;
	static int8_t x470 = -1;
	int16_t x472 = INT16_MIN;

	t7 = (((x469*x470)<<x471)/x472);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x473 = INT32_MIN;
	uint8_t x475 = 2U;
	static int8_t x476 = INT8_MAX;
	uint32_t t8 = 42U;

	t8 = (((x473*x474)<<x475)/x476);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x521 = UINT8_MAX;
	uint8_t x522 = 53U;
	static int8_t x523 = 1;
	volatile uint32_t t9 = 567U;

	t9 = (((x521*x522)<<x523)/x524);

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x561 = 2;
	int64_t x563 = 1LL;
	uint8_t x564 = 2U;
	static int32_t t10 = -1;

	t10 = (((x561*x562)<<x563)/x564);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x593 = UINT8_MAX;
	static volatile uint8_t x594 = UINT8_MAX;
	static uint8_t x595 = 1U;
	int8_t x596 = -50;
	int32_t t11 = -538;

	t11 = (((x593*x594)<<x595)/x596);

	if (t11 != -2601) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x637 = 73784LLU;
	static volatile int64_t x638 = 431215LL;
	static int8_t x639 = 1;
	uint64_t x640 = 16701742853159641LLU;
	uint64_t t12 = 552LLU;

	t12 = (((x637*x638)<<x639)/x640);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x765 = -22;
	int8_t x766 = -54;
	uint16_t x767 = 0U;
	int32_t x768 = -1;
	int32_t t13 = 424030;

	t13 = (((x765*x766)<<x767)/x768);

	if (t13 != -1188) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x793 = -480814;
	volatile int64_t x794 = -1LL;
	volatile uint8_t x795 = 15U;
	uint32_t x796 = UINT32_MAX;
	int64_t t14 = 801157631LL;

	t14 = (((x793*x794)<<x795)/x796);

	if (t14 != 3LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x813 = -1;
	static volatile uint64_t x814 = 1614868306359593LLU;
	static int8_t x816 = INT8_MIN;
	uint64_t t15 = 1358786LLU;

	t15 = (((x813*x814)<<x815)/x816);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x849 = 84734398471LLU;
	int16_t x850 = 3;
	uint8_t x851 = 29U;
	uint64_t x852 = UINT64_MAX;
	uint64_t t16 = 58LLU;

	t16 = (((x849*x850)<<x851)/x852);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x1125 = 17;
	static uint32_t x1126 = UINT32_MAX;
	int32_t x1127 = 4;
	volatile int8_t x1128 = INT8_MIN;

	t17 = (((x1125*x1126)<<x1127)/x1128);

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x1141 = -1;
	volatile int64_t x1143 = 0LL;
	static volatile int8_t x1144 = 1;
	volatile int32_t t18 = -1308;

	t18 = (((x1141*x1142)<<x1143)/x1144);

	if (t18 != 393049) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x1157 = 0;
	uint16_t x1158 = 89U;
	volatile uint16_t x1159 = 0U;
	uint32_t x1160 = 175949732U;
	volatile uint32_t t19 = 177590104U;

	t19 = (((x1157*x1158)<<x1159)/x1160);

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x1238 = 14615;
	int16_t x1239 = 1;
	uint64_t t20 = 22859416833LLU;

	t20 = (((x1237*x1238)<<x1239)/x1240);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x1325 = UINT64_MAX;
	int32_t x1326 = -21;
	static volatile uint16_t x1327 = 0U;
	static volatile uint64_t t21 = 130981468267745979LLU;

	t21 = (((x1325*x1326)<<x1327)/x1328);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x1333 = 224LLU;
	static int8_t x1334 = INT8_MIN;
	int64_t x1336 = INT64_MAX;

	t22 = (((x1333*x1334)<<x1335)/x1336);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1341 = INT8_MAX;
	uint64_t x1342 = UINT64_MAX;
	int64_t x1344 = -1LL;

	t23 = (((x1341*x1342)<<x1343)/x1344);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1349 = INT8_MIN;
	static volatile int8_t x1350 = INT8_MIN;
	static uint16_t x1351 = 1U;
	static volatile uint64_t t24 = 9LLU;

	t24 = (((x1349*x1350)<<x1351)/x1352);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x1353 = -32;
	static int16_t x1354 = INT16_MIN;
	uint8_t x1355 = 0U;

	t25 = (((x1353*x1354)<<x1355)/x1356);

	if (t25 != 13273) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x1361 = 2LLU;
	int32_t x1362 = 386;
	int8_t x1363 = 43;
	uint64_t t26 = 22749887143LLU;

	t26 = (((x1361*x1362)<<x1363)/x1364);

	if (t26 != 6790583813144576LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x1378 = -1LL;
	static int64_t x1379 = 21LL;
	uint32_t x1380 = UINT32_MAX;
	volatile uint64_t t27 = 16406053LLU;

	t27 = (((x1377*x1378)<<x1379)/x1380);

	if (t27 != 4262301517LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x1449 = 80U;
	int64_t x1452 = -1LL;

	t28 = (((x1449*x1450)<<x1451)/x1452);

	if (t28 != -40800LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x1477 = 115;
	uint32_t x1478 = 444304034U;
	volatile uint32_t t29 = 821156041U;

	t29 = (((x1477*x1478)<<x1479)/x1480);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1485 = 8;
	volatile int8_t x1486 = 0;
	int32_t x1488 = INT32_MIN;
	int32_t t30 = -65586046;

	t30 = (((x1485*x1486)<<x1487)/x1488);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x1841 = 181834U;
	static int8_t x1842 = -4;
	volatile int16_t x1844 = 230;
	uint32_t t31 = 432123U;

	t31 = (((x1841*x1842)<<x1843)/x1844);

	if (t31 != 18661121U) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x1893 = 3946U;
	int8_t x1894 = -1;
	int8_t x1896 = 1;
	uint32_t t32 = 1249321U;

	t32 = (((x1893*x1894)<<x1895)/x1896);

	if (t32 != 4230316032U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x1957 = 1;
	uint8_t x1958 = UINT8_MAX;
	volatile uint8_t x1959 = 1U;

	t33 = (((x1957*x1958)<<x1959)/x1960);

	if (t33 != -3) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x1991 = 3;
	uint32_t x1992 = 2231250U;
	static uint64_t t34 = 712644LLU;

	t34 = (((x1989*x1990)<<x1991)/x1992);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x2074 = INT64_MIN;
	int32_t x2075 = 1;
	uint64_t x2076 = 85653679698709947LLU;
	uint64_t t35 = 7246LLU;

	t35 = (((x2073*x2074)<<x2075)/x2076);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x2129 = 0;
	static uint16_t x2130 = 254U;
	int16_t x2132 = INT16_MIN;
	volatile int32_t t36 = 417053224;

	t36 = (((x2129*x2130)<<x2131)/x2132);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x2193 = INT8_MIN;
	static uint64_t x2194 = UINT64_MAX;
	uint16_t x2195 = 26U;
	int16_t x2196 = 22;

	t37 = (((x2193*x2194)<<x2195)/x2196);

	if (t37 != 390451572LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x2453 = 13563926434755LLU;
	static int16_t x2454 = INT16_MIN;
	uint16_t x2455 = 1U;
	int8_t x2456 = -1;
	volatile uint64_t t38 = 6623430210LLU;

	t38 = (((x2453*x2454)<<x2455)/x2456);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x2465 = INT16_MIN;
	static volatile uint32_t x2466 = 14963U;
	static int8_t x2467 = 0;
	volatile uint8_t x2468 = UINT8_MAX;
	volatile uint32_t t39 = 119627U;

	t39 = (((x2465*x2466)<<x2467)/x2468);

	if (t39 != 14920234U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x2575 = 22;
	volatile int16_t x2576 = -3243;
	volatile uint32_t t40 = 4U;

	t40 = (((x2573*x2574)<<x2575)/x2576);

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x2605 = UINT64_MAX;
	int8_t x2606 = -1;
	static uint8_t x2607 = 1U;
	static int64_t x2608 = -12817150405LL;
	uint64_t t41 = 1946445446LLU;

	t41 = (((x2605*x2606)<<x2607)/x2608);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x2609 = -1;
	int8_t x2610 = -1;
	int8_t x2611 = 3;
	uint8_t x2612 = 6U;

	t42 = (((x2609*x2610)<<x2611)/x2612);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x2753 = INT8_MIN;
	volatile uint32_t x2754 = 43434439U;
	static uint8_t x2755 = 22U;
	uint32_t t43 = 1U;

	t43 = (((x2753*x2754)<<x2755)/x2756);

	if (t43 != 23792U) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x2757 = 53U;
	int8_t x2758 = -1;
	static int8_t x2759 = 1;
	static int8_t x2760 = -9;

	t44 = (((x2757*x2758)<<x2759)/x2760);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x2853 = INT16_MIN;
	int8_t x2854 = -1;
	uint64_t x2855 = 1LLU;
	uint32_t x2856 = UINT32_MAX;
	uint32_t t45 = 16190U;

	t45 = (((x2853*x2854)<<x2855)/x2856);

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x2869 = 7U;
	int8_t x2871 = 1;
	static volatile uint64_t t46 = 46LLU;

	t46 = (((x2869*x2870)<<x2871)/x2872);

	if (t46 != 2LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x2877 = -1LL;
	volatile int16_t x2878 = -1;
	int64_t t47 = 1532227529LL;

	t47 = (((x2877*x2878)<<x2879)/x2880);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x2882 = -1;
	int16_t x2883 = 2;
	volatile int16_t x2884 = INT16_MIN;
	int32_t t48 = 0;

	t48 = (((x2881*x2882)<<x2883)/x2884);

	if (t48 != -4) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x2885 = 509U;
	int16_t x2886 = -2;
	uint16_t x2887 = 9U;
	static volatile int16_t x2888 = -505;
	uint32_t t49 = 357207U;

	t49 = (((x2885*x2886)<<x2887)/x2888);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x2938 = INT16_MIN;
	static uint16_t x2939 = 0U;
	volatile int32_t t50 = 49094;

	t50 = (((x2937*x2938)<<x2939)/x2940);

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x3169 = UINT64_MAX;
	uint64_t x3171 = 2LLU;
	static uint8_t x3172 = UINT8_MAX;
	static volatile uint64_t t51 = 149717489LLU;

	t51 = (((x3169*x3170)<<x3171)/x3172);

	if (t51 != 33686018LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x3177 = 775047LLU;
	int8_t x3178 = 34;
	uint64_t x3179 = 3LLU;
	int32_t x3180 = -1;
	uint64_t t52 = 95883896511LLU;

	t52 = (((x3177*x3178)<<x3179)/x3180);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x3205 = 14658118LL;
	uint8_t x3206 = 47U;
	uint8_t x3207 = 11U;
	static int8_t x3208 = INT8_MAX;
	static int64_t t53 = -417712501739LL;

	t53 = (((x3205*x3206)<<x3207)/x3208);

	if (t53 != 11109699261LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x3270 = -1LL;
	static uint64_t x3271 = 4LLU;
	uint64_t x3272 = UINT64_MAX;
	static uint64_t t54 = 57475251385727LLU;

	t54 = (((x3269*x3270)<<x3271)/x3272);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x3273 = 14U;
	static volatile uint8_t x3274 = UINT8_MAX;
	int8_t x3275 = 0;
	static int32_t x3276 = -127175;
	static int32_t t55 = -47;

	t55 = (((x3273*x3274)<<x3275)/x3276);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x3350 = -1;
	int8_t x3351 = 2;
	int32_t x3352 = -1;
	static uint64_t t56 = 6737LLU;

	t56 = (((x3349*x3350)<<x3351)/x3352);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x3365 = 4U;
	volatile uint8_t x3366 = 34U;
	volatile uint16_t x3367 = 7U;
	int64_t x3368 = -68136697887446127LL;
	volatile int64_t t57 = 13135LL;

	t57 = (((x3365*x3366)<<x3367)/x3368);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x3405 = -1;
	int16_t x3406 = -1;
	volatile int32_t x3408 = -4;
	int32_t t58 = 3523573;

	t58 = (((x3405*x3406)<<x3407)/x3408);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x3629 = 846U;
	static uint64_t x3630 = 2005208709057LLU;
	int16_t x3631 = 1;
	static uint32_t x3632 = UINT32_MAX;
	volatile uint64_t t59 = 5784724015LLU;

	t59 = (((x3629*x3630)<<x3631)/x3632);

	if (t59 != 789950LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x3677 = 59U;
	static uint8_t x3678 = 1U;
	uint8_t x3679 = 23U;
	static uint32_t x3680 = 327641938U;

	t60 = (((x3677*x3678)<<x3679)/x3680);

	if (t60 != 1U) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x3717 = INT8_MIN;
	uint32_t x3718 = UINT32_MAX;
	int8_t x3720 = INT8_MIN;
	uint32_t t61 = 199999607U;

	t61 = (((x3717*x3718)<<x3719)/x3720);

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x3737 = 6934U;
	int32_t x3738 = 10;
	static volatile int8_t x3739 = 0;
	int16_t x3740 = INT16_MIN;

	t62 = (((x3737*x3738)<<x3739)/x3740);

	if (t62 != -2) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x3869 = INT32_MAX;
	int32_t x3872 = -5518;
	volatile uint64_t t63 = 6887600515975754LLU;

	t63 = (((x3869*x3870)<<x3871)/x3872);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x3905 = UINT32_MAX;
	uint16_t x3906 = 2636U;
	volatile int64_t x3908 = -6LL;
	int64_t t64 = 357562720LL;

	t64 = (((x3905*x3906)<<x3907)/x3908);

	if (t64 != -715820853LL) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x3910 = 1319U;
	int8_t x3911 = 30;
	int64_t x3912 = INT64_MAX;
	static int64_t t65 = 66318198101683LL;

	t65 = (((x3909*x3910)<<x3911)/x3912);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x3921 = UINT32_MAX;
	int8_t x3923 = 14;
	uint8_t x3924 = 1U;
	static uint64_t t66 = 0LLU;

	t66 = (((x3921*x3922)<<x3923)/x3924);

	if (t66 != 2533274789806080LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x4017 = 14;
	static volatile uint8_t x4018 = UINT8_MAX;
	static uint64_t x4019 = 3LLU;
	uint64_t x4020 = UINT64_MAX;
	volatile uint64_t t67 = 237063LLU;

	t67 = (((x4017*x4018)<<x4019)/x4020);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x4045 = 226520LL;
	int8_t x4046 = 0;
	uint64_t x4047 = 5LLU;
	int16_t x4048 = -11;
	volatile int64_t t68 = 394763142354893LL;

	t68 = (((x4045*x4046)<<x4047)/x4048);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x4101 = INT32_MIN;
	int16_t x4103 = 0;
	static volatile int8_t x4104 = INT8_MIN;
	uint32_t t69 = 2U;

	t69 = (((x4101*x4102)<<x4103)/x4104);

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x4109 = -237;
	int32_t x4110 = -1;
	volatile uint16_t x4111 = 13U;
	volatile uint64_t x4112 = 399546LLU;

	t70 = (((x4109*x4110)<<x4111)/x4112);

	if (t70 != 4LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x4145 = 220U;
	uint16_t x4146 = 0U;
	uint16_t x4148 = 1216U;

	t71 = (((x4145*x4146)<<x4147)/x4148);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x4173 = 639U;
	uint32_t x4174 = 231U;
	int16_t x4176 = -1;
	static volatile uint32_t t72 = 214665007U;

	t72 = (((x4173*x4174)<<x4175)/x4176);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x4221 = 263201870260413108LLU;
	int8_t x4222 = INT8_MIN;
	int8_t x4223 = 5;
	uint64_t x4224 = 281336LLU;
	static volatile uint64_t t73 = 2473LLU;

	t73 = (((x4221*x4222)<<x4223)/x4224);

	if (t73 != 36550742749635LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x4273 = 15544U;
	volatile uint32_t x4274 = UINT32_MAX;
	int16_t x4275 = 0;
	uint32_t t74 = 3963U;

	t74 = (((x4273*x4274)<<x4275)/x4276);

	if (t74 != 9608393U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x4301 = INT64_MIN;
	int64_t x4304 = 15225296639LL;
	uint64_t t75 = 5585957846924494938LLU;

	t75 = (((x4301*x4302)<<x4303)/x4304);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x4405 = -1;
	volatile uint64_t x4406 = UINT64_MAX;
	int32_t x4407 = 1;
	int32_t x4408 = -1;
	volatile uint64_t t76 = 4395LLU;

	t76 = (((x4405*x4406)<<x4407)/x4408);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x4477 = INT8_MIN;
	int64_t x4478 = -71198124885968923LL;
	int8_t x4479 = 0;
	int32_t x4480 = INT32_MAX;

	t77 = (((x4477*x4478)<<x4479)/x4480);

	if (t77 != 4243738944LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x4601 = INT32_MIN;
	static uint64_t x4602 = 13LLU;
	int8_t x4603 = 1;
	uint64_t x4604 = UINT64_MAX;
	static uint64_t t78 = 55275430646LLU;

	t78 = (((x4601*x4602)<<x4603)/x4604);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x4665 = 12383596U;
	int32_t x4666 = 818413064;
	uint8_t x4667 = 1U;
	uint32_t x4668 = 380U;
	static volatile uint32_t t79 = 7326944U;

	t79 = (((x4665*x4666)<<x4667)/x4668);

	if (t79 != 738427U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x4673 = -1;
	int8_t x4674 = -1;
	static uint8_t x4675 = 1U;
	uint32_t x4676 = UINT32_MAX;

	t80 = (((x4673*x4674)<<x4675)/x4676);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x4697 = 10U;
	uint32_t x4698 = 727491019U;
	uint8_t x4699 = 3U;
	static int16_t x4700 = 498;
	static volatile uint32_t t81 = 2703U;

	t81 = (((x4697*x4698)<<x4699)/x4700);

	if (t81 != 4748406U) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x4726 = 5U;
	uint8_t x4727 = 2U;
	volatile int32_t x4728 = INT32_MAX;
	volatile uint64_t t82 = 211706841047LLU;

	t82 = (((x4725*x4726)<<x4727)/x4728);

	if (t82 != 117LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x4737 = 7505U;
	int32_t x4738 = 3;
	uint16_t x4739 = 15U;
	int8_t x4740 = INT8_MAX;
	int32_t t83 = 233322;

	t83 = (((x4737*x4738)<<x4739)/x4740);

	if (t83 != 5809224) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x4745 = INT16_MIN;
	int8_t x4747 = 9;
	int32_t t84 = 10532;

	t84 = (((x4745*x4746)<<x4747)/x4748);

	if (t84 != -2396745) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x4789 = 4U;
	uint16_t x4790 = 93U;
	static int32_t t85 = -741;

	t85 = (((x4789*x4790)<<x4791)/x4792);

	if (t85 != 23) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x4801 = -1;
	static uint64_t x4802 = 72LLU;
	uint8_t x4803 = 37U;
	volatile int16_t x4804 = 13;
	static uint64_t t86 = 44346443962905062LLU;

	t86 = (((x4801*x4802)<<x4803)/x4804);

	if (t86 != 1418979552161915510LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int64_t x4821 = -1LL;
	int8_t x4822 = -1;
	volatile int16_t x4823 = 35;

	t87 = (((x4821*x4822)<<x4823)/x4824);

	if (t87 != 170943971LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x4869 = UINT32_MAX;
	volatile int64_t x4872 = INT64_MIN;
	int64_t t88 = -2011785LL;

	t88 = (((x4869*x4870)<<x4871)/x4872);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x4973 = UINT32_MAX;
	int32_t x4974 = INT32_MIN;
	uint8_t x4975 = 18U;
	volatile int16_t x4976 = INT16_MAX;
	volatile uint32_t t89 = 217U;

	t89 = (((x4973*x4974)<<x4975)/x4976);

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x5013 = 464LLU;
	volatile uint64_t x5014 = UINT64_MAX;
	uint8_t x5015 = 0U;
	int64_t x5016 = INT64_MIN;
	volatile uint64_t t90 = 133063571910LLU;

	t90 = (((x5013*x5014)<<x5015)/x5016);

	if (t90 != 1LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x5102 = 3;
	static uint32_t x5103 = 62U;
	int64_t x5104 = -1LL;
	volatile uint64_t t91 = 62515099LLU;

	t91 = (((x5101*x5102)<<x5103)/x5104);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int8_t x5113 = 1;
	uint16_t x5114 = UINT16_MAX;
	int16_t x5115 = 2;
	int16_t x5116 = -1;
	static volatile int32_t t92 = 3;

	t92 = (((x5113*x5114)<<x5115)/x5116);

	if (t92 != -262140) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x5181 = 88215U;
	int32_t x5182 = 188;
	uint8_t x5183 = 12U;
	volatile uint8_t x5184 = 6U;
	volatile uint32_t t93 = 28655U;

	t93 = (((x5181*x5182)<<x5183)/x5184);

	if (t93 != 584212480U) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x5297 = -1;
	int32_t x5298 = -924489;
	uint16_t x5299 = 6U;
	int32_t x5300 = INT32_MIN;
	volatile int32_t t94 = 5135062;

	t94 = (((x5297*x5298)<<x5299)/x5300);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x5334 = -5LL;
	static uint8_t x5335 = 1U;
	int64_t x5336 = INT64_MIN;
	volatile uint64_t t95 = 2830353304709LLU;

	t95 = (((x5333*x5334)<<x5335)/x5336);

	if (t95 != 1LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x5398 = INT16_MAX;
	uint64_t t96 = 97712LLU;

	t96 = (((x5397*x5398)<<x5399)/x5400);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x5406 = -21297911;
	uint16_t x5407 = 26U;
	volatile int16_t x5408 = INT16_MAX;

	t97 = (((x5405*x5406)<<x5407)/x5408);

	if (t97 != 2048U) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int64_t x5470 = -4031621441519417574LL;
	uint8_t x5471 = 0U;
	volatile int64_t t98 = -126079174174422LL;

	t98 = (((x5469*x5470)<<x5471)/x5472);

	if (t98 != 1877370031LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x5533 = 770215932927416LLU;
	uint16_t x5535 = 7U;
	volatile int64_t x5536 = 192LL;

	t99 = (((x5533*x5534)<<x5535)/x5536);

	if (t99 != 65211615654521221LLU) { NG(); } else { ; }
	
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

