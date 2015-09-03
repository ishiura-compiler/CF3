#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x51 = 1;
static int64_t x52 = INT64_MIN;
volatile int32_t t1 = -11334660;
uint16_t x326 = 464U;
static uint64_t x342 = UINT64_MAX;
static int8_t x343 = 1;
int32_t t4 = 2058059;
static int8_t x405 = -1;
volatile int16_t x407 = 17;
uint64_t x424 = 3324151251773LLU;
uint16_t x602 = UINT16_MAX;
static uint32_t x604 = 4189561U;
static volatile int64_t x694 = INT64_MAX;
uint8_t x808 = UINT8_MAX;
uint32_t x958 = 246953U;
volatile int32_t t14 = 8680439;
static int16_t x1173 = INT16_MIN;
static uint8_t x1176 = 0U;
uint16_t x1238 = 17083U;
uint8_t x1254 = 59U;
uint16_t x1507 = 3U;
int8_t x1565 = -7;
int32_t x1686 = 4752;
uint8_t x1687 = 3U;
uint64_t x1775 = 1LLU;
int16_t x1840 = -1;
static int32_t t24 = 45775617;
static int16_t x1924 = INT16_MIN;
int32_t t25 = -2881;
uint8_t x1976 = UINT8_MAX;
int8_t x2000 = INT8_MIN;
int8_t x2067 = 1;
uint64_t x2118 = UINT64_MAX;
int16_t x2135 = 0;
volatile int64_t x2193 = 4428LL;
int16_t x2229 = INT16_MIN;
int32_t x2248 = INT32_MAX;
int32_t t34 = -253643;
int16_t x2509 = INT16_MIN;
int8_t x2511 = 7;
uint16_t x2515 = 57U;
int64_t t37 = INT64_MIN;
static volatile uint64_t x2606 = 94340509LLU;
uint64_t x2654 = 10LLU;
uint8_t x2655 = 0U;
int8_t x2656 = 0;
static int8_t x2712 = INT8_MIN;
int16_t x2737 = INT16_MIN;
uint32_t x2754 = 3U;
static volatile int32_t t43 = 152696;
int64_t x2970 = 110008992941LL;
int32_t x2971 = 19;
int8_t x2972 = -1;
static int64_t t48 = INT64_MAX;
uint64_t x3138 = 103521LLU;
int64_t t50 = 8708700832600840LL;
int8_t x3243 = 33;
volatile uint64_t t51 = UINT64_MAX;
volatile uint32_t x3278 = 468756800U;
volatile uint16_t x3279 = 1U;
int16_t x3381 = INT16_MIN;
uint8_t x3383 = 0U;
uint16_t x3384 = UINT16_MAX;
static int16_t x3500 = INT16_MIN;
static volatile int64_t t55 = INT64_MIN;
int32_t t56 = -183523833;
int64_t x3681 = INT64_MIN;
int32_t t59 = 5934;
int64_t x3857 = -1LL;
uint8_t x3858 = UINT8_MAX;
int16_t x3985 = INT16_MIN;
static uint16_t x4014 = 5U;
uint16_t x4140 = 5496U;
int8_t x4166 = 27;
int32_t x4224 = INT32_MIN;
int64_t x4229 = 207522722784856LL;
uint8_t x4231 = 1U;
int8_t x4357 = 6;
volatile uint8_t x4359 = 6U;
int32_t x4385 = INT32_MIN;
uint64_t x4530 = UINT64_MAX;
static volatile uint8_t x4531 = 4U;
volatile uint64_t x4553 = 3854310059LLU;
static uint8_t x4555 = 3U;
static uint64_t x4658 = 12965896554851LLU;
uint16_t x4659 = 51U;
static int16_t x4660 = INT16_MIN;
volatile uint64_t t80 = UINT64_MAX;
volatile int16_t x4760 = -1440;
volatile uint32_t x4804 = 7U;
int64_t t82 = INT64_MAX;
volatile uint16_t x4919 = 2U;
int16_t x5019 = 0;
uint64_t x5020 = UINT64_MAX;
uint64_t t86 = 43376745108LLU;
int8_t x5195 = 1;
int32_t x5400 = INT32_MIN;
static int64_t t93 = INT64_MAX;
volatile uint32_t x5501 = UINT32_MAX;
volatile uint32_t t94 = UINT32_MAX;
uint8_t x5595 = 1U;
uint32_t t97 = 515U;
int32_t t98 = -39564713;


void f0(void) {
	volatile int32_t x49 = INT32_MIN;
	static int8_t x50 = 30;
	volatile int32_t t0 = INT32_MIN;

	t0 = (x49^((x50>>x51)==x52));

	if (t0 != INT32_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x97 = UINT16_MAX;
	volatile uint16_t x98 = UINT16_MAX;
	int16_t x99 = 6;
	int16_t x100 = -1;

	t1 = (x97^((x98>>x99)==x100));

	if (t1 != 65535) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x325 = 73393934;
	int64_t x327 = 6LL;
	uint64_t x328 = 93875011862546602LLU;
	volatile int32_t t2 = -25102861;

	t2 = (x325^((x326>>x327)==x328));

	if (t2 != 73393934) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x341 = INT64_MAX;
	volatile uint8_t x344 = 0U;
	volatile int64_t t3 = INT64_MAX;

	t3 = (x341^((x342>>x343)==x344));

	if (t3 != INT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x381 = 7U;
	uint64_t x382 = UINT64_MAX;
	int64_t x383 = 0LL;
	uint32_t x384 = 968870U;

	t4 = (x381^((x382>>x383)==x384));

	if (t4 != 7) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x406 = 12499;
	uint64_t x408 = 1605126024692257LLU;
	volatile int32_t t5 = -6;

	t5 = (x405^((x406>>x407)==x408));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x421 = UINT16_MAX;
	uint32_t x422 = UINT32_MAX;
	volatile uint16_t x423 = 30U;
	volatile int32_t t6 = 16057095;

	t6 = (x421^((x422>>x423)==x424));

	if (t6 != 65535) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x465 = -1LL;
	uint16_t x466 = UINT16_MAX;
	volatile int8_t x467 = 1;
	static uint64_t x468 = 429698476LLU;
	volatile int64_t t7 = -619LL;

	t7 = (x465^((x466>>x467)==x468));

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x597 = INT32_MAX;
	int8_t x598 = INT8_MAX;
	static uint16_t x599 = 9U;
	volatile int64_t x600 = INT64_MIN;
	volatile int32_t t8 = INT32_MAX;

	t8 = (x597^((x598>>x599)==x600));

	if (t8 != INT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x601 = 7LLU;
	uint16_t x603 = 31U;
	static volatile uint64_t t9 = 167956LLU;

	t9 = (x601^((x602>>x603)==x604));

	if (t9 != 7LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x693 = INT32_MIN;
	uint8_t x695 = 0U;
	static int64_t x696 = 261037588LL;
	int32_t t10 = INT32_MIN;

	t10 = (x693^((x694>>x695)==x696));

	if (t10 != INT32_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x717 = INT8_MAX;
	uint64_t x718 = 108LLU;
	uint8_t x719 = 0U;
	int64_t x720 = -1LL;
	static volatile int32_t t11 = 32145786;

	t11 = (x717^((x718>>x719)==x720));

	if (t11 != 127) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x805 = -1;
	int16_t x806 = 303;
	volatile int8_t x807 = 0;
	static volatile int32_t t12 = 222167568;

	t12 = (x805^((x806>>x807)==x808));

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x957 = 1LL;
	int8_t x959 = 3;
	volatile int64_t x960 = -63LL;
	int64_t t13 = 394688779316000LL;

	t13 = (x957^((x958>>x959)==x960));

	if (t13 != 1LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x1125 = UINT8_MAX;
	static uint16_t x1126 = UINT16_MAX;
	uint8_t x1127 = 7U;
	uint32_t x1128 = UINT32_MAX;

	t14 = (x1125^((x1126>>x1127)==x1128));

	if (t14 != 255) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x1174 = 0U;
	uint8_t x1175 = 12U;
	int32_t t15 = -326496;

	t15 = (x1173^((x1174>>x1175)==x1176));

	if (t15 != -32767) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x1237 = 10308U;
	int16_t x1239 = 1;
	volatile int16_t x1240 = -6256;
	int32_t t16 = 163;

	t16 = (x1237^((x1238>>x1239)==x1240));

	if (t16 != 10308) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x1253 = -1LL;
	uint16_t x1255 = 1U;
	int64_t x1256 = 552988178LL;
	volatile int64_t t17 = -6966LL;

	t17 = (x1253^((x1254>>x1255)==x1256));

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x1505 = INT8_MIN;
	int8_t x1506 = 0;
	volatile int64_t x1508 = INT64_MIN;
	int32_t t18 = -2;

	t18 = (x1505^((x1506>>x1507)==x1508));

	if (t18 != -128) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint64_t x1566 = 60345762215LLU;
	static int16_t x1567 = 0;
	uint8_t x1568 = 14U;
	volatile int32_t t19 = -3;

	t19 = (x1565^((x1566>>x1567)==x1568));

	if (t19 != -7) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x1669 = INT32_MIN;
	int64_t x1670 = 170559780289988949LL;
	uint64_t x1671 = 5LLU;
	int32_t x1672 = -1;
	static int32_t t20 = INT32_MIN;

	t20 = (x1669^((x1670>>x1671)==x1672));

	if (t20 != INT32_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x1685 = -1183583997617022687LL;
	static int32_t x1688 = INT32_MIN;
	int64_t t21 = 361364129577763LL;

	t21 = (x1685^((x1686>>x1687)==x1688));

	if (t21 != -1183583997617022687LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x1773 = -1LL;
	static uint8_t x1774 = 118U;
	uint32_t x1776 = 457U;
	int64_t t22 = -602083129LL;

	t22 = (x1773^((x1774>>x1775)==x1776));

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x1837 = 65U;
	int16_t x1838 = 19;
	uint16_t x1839 = 9U;
	static int32_t t23 = -7;

	t23 = (x1837^((x1838>>x1839)==x1840));

	if (t23 != 65) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1853 = -1;
	int16_t x1854 = 1317;
	volatile uint8_t x1855 = 7U;
	uint8_t x1856 = 13U;

	t24 = (x1853^((x1854>>x1855)==x1856));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x1921 = UINT16_MAX;
	uint64_t x1922 = 21233337LLU;
	int8_t x1923 = 0;

	t25 = (x1921^((x1922>>x1923)==x1924));

	if (t25 != 65535) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x1973 = 2895869488LLU;
	uint16_t x1974 = UINT16_MAX;
	uint8_t x1975 = 8U;
	volatile uint64_t t26 = 1519033611894683LLU;

	t26 = (x1973^((x1974>>x1975)==x1976));

	if (t26 != 2895869489LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x1997 = UINT64_MAX;
	volatile uint16_t x1998 = 40U;
	uint8_t x1999 = 3U;
	uint64_t t27 = UINT64_MAX;

	t27 = (x1997^((x1998>>x1999)==x2000));

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x2065 = -98687LL;
	static volatile uint16_t x2066 = 260U;
	int64_t x2068 = -366691864400934LL;
	int64_t t28 = -2647200760558LL;

	t28 = (x2065^((x2066>>x2067)==x2068));

	if (t28 != -98687LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x2117 = INT64_MIN;
	uint8_t x2119 = 12U;
	static int64_t x2120 = INT64_MIN;
	int64_t t29 = INT64_MIN;

	t29 = (x2117^((x2118>>x2119)==x2120));

	if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x2133 = INT64_MAX;
	uint64_t x2134 = 2488372LLU;
	static int64_t x2136 = INT64_MIN;
	static int64_t t30 = INT64_MAX;

	t30 = (x2133^((x2134>>x2135)==x2136));

	if (t30 != INT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x2194 = 12U;
	static uint8_t x2195 = 21U;
	volatile uint16_t x2196 = 48U;
	volatile int64_t t31 = -266026400LL;

	t31 = (x2193^((x2194>>x2195)==x2196));

	if (t31 != 4428LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x2230 = 11U;
	int8_t x2231 = 1;
	uint64_t x2232 = UINT64_MAX;
	int32_t t32 = -212386;

	t32 = (x2229^((x2230>>x2231)==x2232));

	if (t32 != -32768) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x2245 = INT64_MIN;
	uint16_t x2246 = UINT16_MAX;
	uint8_t x2247 = 13U;
	volatile int64_t t33 = INT64_MIN;

	t33 = (x2245^((x2246>>x2247)==x2248));

	if (t33 != INT64_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x2461 = INT8_MIN;
	int8_t x2462 = 30;
	static int16_t x2463 = 0;
	volatile int8_t x2464 = INT8_MAX;

	t34 = (x2461^((x2462>>x2463)==x2464));

	if (t34 != -128) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x2489 = UINT8_MAX;
	static uint32_t x2490 = 615852373U;
	int8_t x2491 = 1;
	static int32_t x2492 = -1;
	volatile int32_t t35 = -27435;

	t35 = (x2489^((x2490>>x2491)==x2492));

	if (t35 != 255) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x2510 = 197U;
	static int32_t x2512 = 5928;
	static volatile int32_t t36 = -833;

	t36 = (x2509^((x2510>>x2511)==x2512));

	if (t36 != -32768) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x2513 = INT64_MIN;
	uint64_t x2514 = 960851870LLU;
	int8_t x2516 = INT8_MAX;

	t37 = (x2513^((x2514>>x2515)==x2516));

	if (t37 != INT64_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x2605 = 10LL;
	uint8_t x2607 = 1U;
	static int16_t x2608 = INT16_MIN;
	volatile int64_t t38 = -2LL;

	t38 = (x2605^((x2606>>x2607)==x2608));

	if (t38 != 10LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x2653 = 113783249U;
	volatile uint32_t t39 = 3U;

	t39 = (x2653^((x2654>>x2655)==x2656));

	if (t39 != 113783249U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x2709 = INT16_MIN;
	int64_t x2710 = INT64_MAX;
	uint8_t x2711 = 1U;
	int32_t t40 = 101;

	t40 = (x2709^((x2710>>x2711)==x2712));

	if (t40 != -32768) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x2733 = UINT16_MAX;
	volatile int16_t x2734 = 3;
	uint8_t x2735 = 0U;
	volatile int64_t x2736 = INT64_MAX;
	static int32_t t41 = 1368225;

	t41 = (x2733^((x2734>>x2735)==x2736));

	if (t41 != 65535) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x2738 = INT32_MAX;
	int16_t x2739 = 0;
	int32_t x2740 = -903390262;
	int32_t t42 = -60034;

	t42 = (x2737^((x2738>>x2739)==x2740));

	if (t42 != -32768) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x2753 = -13;
	int16_t x2755 = 1;
	int64_t x2756 = INT64_MAX;

	t43 = (x2753^((x2754>>x2755)==x2756));

	if (t43 != -13) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x2837 = -1LL;
	static int8_t x2838 = 7;
	int8_t x2839 = 1;
	static int16_t x2840 = INT16_MAX;
	volatile int64_t t44 = -1LL;

	t44 = (x2837^((x2838>>x2839)==x2840));

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x2849 = UINT32_MAX;
	static volatile int8_t x2850 = 1;
	uint8_t x2851 = 3U;
	uint32_t x2852 = UINT32_MAX;
	volatile uint32_t t45 = UINT32_MAX;

	t45 = (x2849^((x2850>>x2851)==x2852));

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x2969 = -43230;
	int32_t t46 = 1304;

	t46 = (x2969^((x2970>>x2971)==x2972));

	if (t46 != -43230) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x2985 = INT8_MIN;
	int16_t x2986 = INT16_MAX;
	volatile uint8_t x2987 = 27U;
	static int64_t x2988 = -1LL;
	int32_t t47 = 4131;

	t47 = (x2985^((x2986>>x2987)==x2988));

	if (t47 != -128) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x3129 = INT64_MAX;
	static uint8_t x3130 = 7U;
	static int8_t x3131 = 27;
	volatile int8_t x3132 = -1;

	t48 = (x3129^((x3130>>x3131)==x3132));

	if (t48 != INT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x3137 = INT32_MAX;
	static uint8_t x3139 = 0U;
	uint16_t x3140 = 7U;
	int32_t t49 = INT32_MAX;

	t49 = (x3137^((x3138>>x3139)==x3140));

	if (t49 != INT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x3217 = 115069534776LL;
	int16_t x3218 = 0;
	uint32_t x3219 = 24U;
	static int32_t x3220 = INT32_MIN;

	t50 = (x3217^((x3218>>x3219)==x3220));

	if (t50 != 115069534776LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x3241 = UINT64_MAX;
	static uint64_t x3242 = 140673LLU;
	volatile int64_t x3244 = -1LL;

	t51 = (x3241^((x3242>>x3243)==x3244));

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x3277 = 1743137351721502LLU;
	uint32_t x3280 = UINT32_MAX;
	volatile uint64_t t52 = 1671830737064946LLU;

	t52 = (x3277^((x3278>>x3279)==x3280));

	if (t52 != 1743137351721502LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x3297 = INT64_MIN;
	uint64_t x3298 = 1LLU;
	uint8_t x3299 = 29U;
	int64_t x3300 = -1LL;
	int64_t t53 = INT64_MIN;

	t53 = (x3297^((x3298>>x3299)==x3300));

	if (t53 != INT64_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x3382 = 4161U;
	volatile int32_t t54 = -53677;

	t54 = (x3381^((x3382>>x3383)==x3384));

	if (t54 != -32768) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x3497 = INT64_MIN;
	int32_t x3498 = 32325881;
	int16_t x3499 = 1;

	t55 = (x3497^((x3498>>x3499)==x3500));

	if (t55 != INT64_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x3501 = INT8_MIN;
	static volatile uint8_t x3502 = 0U;
	static volatile uint8_t x3503 = 0U;
	volatile int64_t x3504 = -7513573366465667LL;

	t56 = (x3501^((x3502>>x3503)==x3504));

	if (t56 != -128) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int64_t x3629 = INT64_MIN;
	int32_t x3630 = INT32_MAX;
	uint16_t x3631 = 1U;
	static int32_t x3632 = INT32_MIN;
	static volatile int64_t t57 = INT64_MIN;

	t57 = (x3629^((x3630>>x3631)==x3632));

	if (t57 != INT64_MIN) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x3682 = INT64_MAX;
	volatile uint32_t x3683 = 0U;
	static uint32_t x3684 = 8187U;
	volatile int64_t t58 = INT64_MIN;

	t58 = (x3681^((x3682>>x3683)==x3684));

	if (t58 != INT64_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x3685 = -1;
	uint64_t x3686 = 919708820128LLU;
	uint8_t x3687 = 1U;
	volatile uint32_t x3688 = 4550606U;

	t59 = (x3685^((x3686>>x3687)==x3688));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x3697 = INT16_MIN;
	int32_t x3698 = 188311664;
	uint16_t x3699 = 30U;
	int32_t x3700 = INT32_MIN;
	int32_t t60 = 386138349;

	t60 = (x3697^((x3698>>x3699)==x3700));

	if (t60 != -32768) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x3825 = INT32_MIN;
	static uint16_t x3826 = UINT16_MAX;
	static uint8_t x3827 = 7U;
	uint8_t x3828 = UINT8_MAX;
	int32_t t61 = INT32_MIN;

	t61 = (x3825^((x3826>>x3827)==x3828));

	if (t61 != INT32_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x3849 = 784191475U;
	uint8_t x3850 = 7U;
	static uint8_t x3851 = 11U;
	uint64_t x3852 = UINT64_MAX;
	volatile uint32_t t62 = 953891686U;

	t62 = (x3849^((x3850>>x3851)==x3852));

	if (t62 != 784191475U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x3859 = 6;
	int32_t x3860 = -1;
	volatile int64_t t63 = 4424993157922423LL;

	t63 = (x3857^((x3858>>x3859)==x3860));

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x3986 = INT16_MAX;
	int64_t x3987 = 1LL;
	uint8_t x3988 = 0U;
	volatile int32_t t64 = -1301544;

	t64 = (x3985^((x3986>>x3987)==x3988));

	if (t64 != -32768) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x4013 = UINT16_MAX;
	volatile int8_t x4015 = 16;
	int16_t x4016 = INT16_MIN;
	static int32_t t65 = -1047679;

	t65 = (x4013^((x4014>>x4015)==x4016));

	if (t65 != 65535) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x4137 = -1;
	volatile uint64_t x4138 = 23465LLU;
	uint64_t x4139 = 53LLU;
	int32_t t66 = -6899822;

	t66 = (x4137^((x4138>>x4139)==x4140));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x4165 = 1345916876U;
	uint16_t x4167 = 0U;
	static int32_t x4168 = -1;
	uint32_t t67 = 147302U;

	t67 = (x4165^((x4166>>x4167)==x4168));

	if (t67 != 1345916876U) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x4221 = -1;
	int8_t x4222 = 1;
	int8_t x4223 = 5;
	int32_t t68 = 0;

	t68 = (x4221^((x4222>>x4223)==x4224));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x4225 = UINT64_MAX;
	int64_t x4226 = INT64_MAX;
	static uint8_t x4227 = 0U;
	int32_t x4228 = INT32_MIN;
	uint64_t t69 = UINT64_MAX;

	t69 = (x4225^((x4226>>x4227)==x4228));

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x4230 = 62;
	int8_t x4232 = 0;
	int64_t t70 = -645416LL;

	t70 = (x4229^((x4230>>x4231)==x4232));

	if (t70 != 207522722784856LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x4253 = INT8_MIN;
	uint32_t x4254 = 609409748U;
	uint8_t x4255 = 28U;
	static uint32_t x4256 = 137U;
	static volatile int32_t t71 = -833656105;

	t71 = (x4253^((x4254>>x4255)==x4256));

	if (t71 != -128) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x4358 = 12120LLU;
	int64_t x4360 = INT64_MAX;
	int32_t t72 = -392982947;

	t72 = (x4357^((x4358>>x4359)==x4360));

	if (t72 != 6) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x4381 = 38U;
	int64_t x4382 = 1642990LL;
	uint16_t x4383 = 7U;
	static volatile int16_t x4384 = 0;
	static int32_t t73 = -41405944;

	t73 = (x4381^((x4382>>x4383)==x4384));

	if (t73 != 38) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x4386 = 96;
	static uint8_t x4387 = 27U;
	static int32_t x4388 = -23;
	static int32_t t74 = INT32_MIN;

	t74 = (x4385^((x4386>>x4387)==x4388));

	if (t74 != INT32_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x4529 = UINT8_MAX;
	uint8_t x4532 = 85U;
	volatile int32_t t75 = -100132;

	t75 = (x4529^((x4530>>x4531)==x4532));

	if (t75 != 255) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x4554 = INT16_MAX;
	int16_t x4556 = -101;
	volatile uint64_t t76 = 324771955831957LLU;

	t76 = (x4553^((x4554>>x4555)==x4556));

	if (t76 != 3854310059LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x4657 = 57218200U;
	volatile uint32_t t77 = 131150391U;

	t77 = (x4657^((x4658>>x4659)==x4660));

	if (t77 != 57218200U) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x4689 = -1361459LL;
	uint32_t x4690 = 117934617U;
	uint8_t x4691 = 0U;
	int16_t x4692 = INT16_MIN;
	int64_t t78 = 131LL;

	t78 = (x4689^((x4690>>x4691)==x4692));

	if (t78 != -1361459LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x4697 = -1;
	volatile int16_t x4698 = INT16_MAX;
	uint16_t x4699 = 1U;
	int32_t x4700 = INT32_MIN;
	int32_t t79 = 297;

	t79 = (x4697^((x4698>>x4699)==x4700));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x4749 = UINT64_MAX;
	int64_t x4750 = INT64_MAX;
	uint16_t x4751 = 2U;
	volatile int16_t x4752 = INT16_MIN;

	t80 = (x4749^((x4750>>x4751)==x4752));

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x4757 = -1;
	uint64_t x4758 = 12453LLU;
	uint8_t x4759 = 1U;
	int32_t t81 = 127052787;

	t81 = (x4757^((x4758>>x4759)==x4760));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x4801 = INT64_MAX;
	volatile uint16_t x4802 = 31U;
	static uint32_t x4803 = 9U;

	t82 = (x4801^((x4802>>x4803)==x4804));

	if (t82 != INT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x4913 = 115;
	volatile int64_t x4914 = 4LL;
	uint8_t x4915 = 4U;
	static uint8_t x4916 = 3U;
	static volatile int32_t t83 = 465917;

	t83 = (x4913^((x4914>>x4915)==x4916));

	if (t83 != 115) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x4917 = 2U;
	int16_t x4918 = 19;
	volatile uint16_t x4920 = UINT16_MAX;
	int32_t t84 = -1056294;

	t84 = (x4917^((x4918>>x4919)==x4920));

	if (t84 != 2) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x5005 = 16632U;
	uint16_t x5006 = 13718U;
	volatile int8_t x5007 = 1;
	volatile int64_t x5008 = INT64_MIN;
	int32_t t85 = 60803;

	t85 = (x5005^((x5006>>x5007)==x5008));

	if (t85 != 16632) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x5017 = 6733808854004498LLU;
	int16_t x5018 = 0;

	t86 = (x5017^((x5018>>x5019)==x5020));

	if (t86 != 6733808854004498LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x5041 = INT32_MAX;
	uint32_t x5042 = UINT32_MAX;
	int16_t x5043 = 7;
	static volatile int32_t x5044 = INT32_MIN;
	static volatile int32_t t87 = INT32_MAX;

	t87 = (x5041^((x5042>>x5043)==x5044));

	if (t87 != INT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x5185 = INT16_MAX;
	uint16_t x5186 = 6U;
	volatile int64_t x5187 = 10LL;
	static int64_t x5188 = INT64_MIN;
	static volatile int32_t t88 = -7104;

	t88 = (x5185^((x5186>>x5187)==x5188));

	if (t88 != 32767) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x5193 = INT16_MIN;
	volatile uint64_t x5194 = 4362749449669602LLU;
	static uint16_t x5196 = UINT16_MAX;
	volatile int32_t t89 = 117770775;

	t89 = (x5193^((x5194>>x5195)==x5196));

	if (t89 != -32768) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x5205 = -670579588;
	int32_t x5206 = 187;
	uint8_t x5207 = 20U;
	volatile int32_t x5208 = -329187;
	volatile int32_t t90 = 5821;

	t90 = (x5205^((x5206>>x5207)==x5208));

	if (t90 != -670579588) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x5397 = 1U;
	static int8_t x5398 = INT8_MAX;
	volatile int32_t x5399 = 0;
	volatile int32_t t91 = 264017968;

	t91 = (x5397^((x5398>>x5399)==x5400));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x5437 = INT32_MIN;
	uint8_t x5438 = 0U;
	static uint8_t x5439 = 1U;
	int64_t x5440 = -1LL;
	volatile int32_t t92 = INT32_MIN;

	t92 = (x5437^((x5438>>x5439)==x5440));

	if (t92 != INT32_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x5445 = INT64_MAX;
	uint32_t x5446 = 51656184U;
	uint16_t x5447 = 2U;
	volatile int64_t x5448 = -1LL;

	t93 = (x5445^((x5446>>x5447)==x5448));

	if (t93 != INT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x5502 = 26;
	static uint8_t x5503 = 1U;
	int32_t x5504 = INT32_MIN;

	t94 = (x5501^((x5502>>x5503)==x5504));

	if (t94 != UINT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x5565 = INT16_MIN;
	static volatile uint16_t x5566 = 86U;
	uint16_t x5567 = 0U;
	int8_t x5568 = INT8_MIN;
	int32_t t95 = -108202;

	t95 = (x5565^((x5566>>x5567)==x5568));

	if (t95 != -32768) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x5569 = -459;
	uint32_t x5570 = 227531358U;
	int8_t x5571 = 11;
	volatile int64_t x5572 = INT64_MIN;
	int32_t t96 = -9372856;

	t96 = (x5569^((x5570>>x5571)==x5572));

	if (t96 != -459) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x5593 = 1U;
	volatile int32_t x5594 = INT32_MAX;
	int32_t x5596 = INT32_MIN;

	t97 = (x5593^((x5594>>x5595)==x5596));

	if (t97 != 1U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x5609 = 40;
	static volatile int64_t x5610 = 100074910814LL;
	int8_t x5611 = 2;
	static int64_t x5612 = -44967575175LL;

	t98 = (x5609^((x5610>>x5611)==x5612));

	if (t98 != 40) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x5637 = 64390U;
	uint16_t x5638 = UINT16_MAX;
	uint8_t x5639 = 2U;
	uint64_t x5640 = 100639LLU;
	volatile uint32_t t99 = 85328152U;

	t99 = (x5637^((x5638>>x5639)==x5640));

	if (t99 != 64390U) { NG(); } else { ; }
	
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

