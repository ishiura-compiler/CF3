
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x5 = UINT64_MAX;
int8_t x7 = 1;
volatile int16_t x67 = 0;
uint16_t x68 = 234U;
static uint64_t x146 = UINT64_MAX;
uint64_t x169 = 1804623360044LLU;
int8_t x171 = 0;
int32_t t4 = -3268723;
int32_t x327 = 17;
uint32_t x425 = UINT32_MAX;
int8_t x427 = 0;
uint32_t x470 = UINT32_MAX;
volatile int32_t x471 = 6;
uint8_t x537 = 78U;
static uint8_t x549 = 27U;
static volatile int16_t x761 = 338;
int16_t x763 = 12;
static int16_t x793 = 0;
static uint32_t t18 = 17858U;
uint64_t x802 = UINT64_MAX;
volatile int64_t x867 = 15LL;
uint64_t x968 = 448968603993288LLU;
static uint8_t x1081 = UINT8_MAX;
uint16_t x1159 = 4U;
static int32_t t30 = 1;
int32_t x1282 = INT32_MAX;
int32_t x1347 = 0;
uint64_t x1364 = UINT64_MAX;
static uint16_t x1420 = 15127U;
int8_t x1551 = 22;
int64_t t38 = -233124266503LL;
uint64_t x1650 = 33210994412837LLU;
static int32_t x1652 = INT32_MIN;
int32_t t41 = -19;
uint32_t x1816 = UINT32_MAX;
uint8_t x1879 = 10U;
uint64_t x1880 = UINT64_MAX;
static volatile int8_t x2012 = -2;
int32_t t47 = 128841;
uint16_t x2023 = 6U;
volatile int32_t x2024 = -1;
uint64_t x2073 = 8341676858541387LLU;
static volatile int64_t t51 = -151LL;
volatile uint64_t x2110 = 6399266463LLU;
volatile int32_t t52 = 1153;
volatile int64_t x2172 = -3197195LL;
uint16_t x2262 = 1798U;
int8_t x2263 = 1;
uint32_t x2492 = UINT32_MAX;
uint64_t x2576 = 3370042577851LLU;
uint64_t t60 = 991LLU;
uint8_t x2661 = 0U;
int8_t x2662 = INT8_MIN;
int64_t x2664 = -1LL;
uint32_t x2806 = 92586U;
static int32_t t66 = -3;
int64_t x3013 = INT64_MIN;
int8_t x3016 = INT8_MAX;
volatile int32_t t69 = -9094521;
volatile int64_t t72 = 0LL;
uint64_t x3164 = UINT64_MAX;
static int32_t t74 = -283252;
static int16_t x3237 = -442;
volatile int32_t t77 = 0;
int32_t t80 = -353;
uint8_t x3571 = 1U;
int8_t x3656 = -1;
static uint32_t x3761 = UINT32_MAX;
int8_t x3763 = 29;
static int32_t x3830 = -1;
uint8_t x3831 = 3U;
volatile int64_t x3840 = -1LL;
uint64_t x3853 = UINT64_MAX;
static int32_t x3871 = 8;
volatile uint16_t x3882 = 15734U;
uint16_t x3884 = 3U;
uint64_t t93 = 13905498LLU;
uint8_t x3901 = 63U;
uint64_t x3904 = UINT64_MAX;
volatile uint8_t x3909 = 63U;
volatile int8_t x3912 = INT8_MAX;
volatile int32_t t96 = -1284072;
uint16_t x3918 = 220U;
static volatile int64_t x4010 = -1LL;
uint16_t x4011 = 1U;
uint64_t x4012 = UINT64_MAX;
int32_t x4047 = 0;
int64_t x4048 = INT64_MAX;
uint16_t x4084 = 13U;
int32_t x4122 = -6;
int16_t x4146 = -652;
uint16_t x4184 = 8U;
static int64_t x4290 = 516531783679168LL;
uint8_t x4292 = UINT8_MAX;
int8_t x4394 = INT8_MAX;
uint32_t x4445 = 8978006U;
static uint64_t x4459 = 1LLU;
int32_t t112 = 247;
int64_t x4477 = INT64_MAX;
static int8_t x4478 = -10;
static int8_t x4479 = 7;
volatile int64_t x4480 = -1LL;
uint8_t x4482 = 0U;
int32_t t114 = -2336;
volatile int64_t x4560 = INT64_MAX;
uint8_t x4562 = 5U;
static volatile int8_t x4583 = 3;
int32_t t117 = 106684;
static uint16_t x4591 = 15U;
int8_t x4707 = 1;
int32_t t121 = 9614;
int32_t t124 = 1302808;
uint32_t x4827 = 2U;
volatile int64_t x4888 = INT64_MIN;
volatile int64_t t126 = 1LL;
int8_t x4945 = INT8_MAX;
uint8_t x4983 = 23U;
uint8_t x5001 = 1U;
static int16_t x5005 = INT16_MIN;
uint32_t x5006 = 2U;
volatile int32_t x5008 = INT32_MIN;
int32_t x5020 = -28443008;
int32_t x5090 = INT32_MAX;
uint64_t x5092 = 111778381513333162LLU;
static int32_t x5110 = INT32_MAX;
static uint32_t x5172 = 107U;
int8_t x5216 = INT8_MIN;
volatile int32_t x5500 = -1;
uint16_t x5540 = 424U;
volatile int32_t t144 = 10185330;
uint16_t x5559 = 31U;
int64_t x5560 = -1LL;
int64_t x5561 = INT64_MAX;
static volatile uint8_t x5563 = 10U;
int64_t t147 = 926484LL;
uint64_t x5598 = 176LLU;
volatile int64_t t148 = -62LL;
volatile uint8_t x5703 = 1U;
static volatile int8_t x5704 = 0;
static int32_t x5718 = -1;
int32_t x5814 = INT32_MIN;
static volatile int32_t t151 = -8375;
volatile int8_t x6019 = 0;
volatile int32_t t154 = -196222;
volatile uint8_t x6022 = UINT8_MAX;
uint16_t x6023 = 0U;
static volatile int64_t x6196 = INT64_MIN;
int32_t x6205 = -75;
uint16_t x6270 = UINT16_MAX;
int8_t x6280 = INT8_MIN;
static int8_t x6299 = 6;
int16_t x6449 = -2827;
int32_t x6451 = 3;
uint32_t x6562 = UINT32_MAX;
static uint32_t x6615 = 6U;
volatile int16_t x6618 = INT16_MIN;
static uint16_t x6619 = 3U;
int32_t x6630 = INT32_MIN;
volatile int64_t x6632 = -1512893105888LL;
int16_t x6701 = -2715;
static int32_t t175 = 22;
volatile int16_t x6735 = 27;
int16_t x6736 = INT16_MIN;
uint8_t x6795 = 22U;
volatile int16_t x6796 = -1;
int16_t x6893 = -4;
int32_t x6896 = 1025434;
volatile int32_t t183 = -1;
static int64_t x6898 = INT64_MIN;
static volatile int64_t x6900 = -216210678702677LL;
uint64_t x6907 = 1LLU;
static int64_t x6965 = -1LL;
static uint32_t x6966 = 743U;
static volatile uint16_t x6967 = 3U;
int32_t t188 = 536;
int8_t x6979 = 1;
volatile int64_t t190 = -90334928261LL;
int32_t t192 = 2;
uint8_t x7068 = UINT8_MAX;
volatile int32_t t193 = -473;
volatile int32_t x7133 = -364;
static int8_t x7177 = 33;
int32_t x7193 = INT32_MIN;


void f0(void) {
    	uint16_t x6 = 12694U;
	volatile int32_t x8 = 957516;
	int32_t t0 = -15;

    t0 = (((x5<=x6)>>x7)*x8);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint32_t x65 = UINT32_MAX;
	int32_t x66 = -1;
	int32_t t1 = -237909;

    t1 = (((x65<=x66)>>x67)*x68);

    if (t1 != 234) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x129 = -1;
	int16_t x130 = 608;
	static uint16_t x131 = 5U;
	static volatile int32_t x132 = INT32_MIN;
	static int32_t t2 = 4;

    t2 = (((x129<=x130)>>x131)*x132);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile int64_t x145 = -497871594292153090LL;
	int32_t x147 = 25;
	volatile uint64_t x148 = 16LLU;
	volatile uint64_t t3 = 470341LLU;

    t3 = (((x145<=x146)>>x147)*x148);

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x170 = 6U;
	static uint16_t x172 = 115U;

    t4 = (((x169<=x170)>>x171)*x172);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x213 = 479;
	int64_t x214 = -1LL;
	uint8_t x215 = 5U;
	static int16_t x216 = INT16_MIN;
	static int32_t t5 = -2386237;

    t5 = (((x213<=x214)>>x215)*x216);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x237 = -1LL;
	int32_t x238 = INT32_MIN;
	uint16_t x239 = 1U;
	int64_t x240 = 23376753236LL;
	int64_t t6 = -14851229369645678LL;

    t6 = (((x237<=x238)>>x239)*x240);

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int64_t x325 = -183009343181LL;
	static uint16_t x326 = 3789U;
	static int64_t x328 = INT64_MIN;
	volatile int64_t t7 = 106559115943291LL;

    t7 = (((x325<=x326)>>x327)*x328);

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x426 = -16;
	int32_t x428 = -1;
	int32_t t8 = -20;

    t8 = (((x425<=x426)>>x427)*x428);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x469 = 384;
	volatile int64_t x472 = -525321174LL;
	volatile int64_t t9 = -2932454015349692LL;

    t9 = (((x469<=x470)>>x471)*x472);

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint16_t x538 = UINT16_MAX;
	static volatile uint16_t x539 = 1U;
	int16_t x540 = INT16_MIN;
	volatile int32_t t10 = -69;

    t10 = (((x537<=x538)>>x539)*x540);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x550 = 62405939140538LL;
	int64_t x551 = 18LL;
	int16_t x552 = INT16_MAX;
	int32_t t11 = 7;

    t11 = (((x549<=x550)>>x551)*x552);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x561 = 80812;
	uint8_t x562 = UINT8_MAX;
	int64_t x563 = 7LL;
	uint64_t x564 = 671160LLU;
	uint64_t t12 = 3694161506LLU;

    t12 = (((x561<=x562)>>x563)*x564);

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint64_t x597 = 93240690116954LLU;
	uint16_t x598 = 6701U;
	volatile int8_t x599 = 1;
	volatile int16_t x600 = -2456;
	volatile int32_t t13 = -236;

    t13 = (((x597<=x598)>>x599)*x600);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x645 = UINT16_MAX;
	uint16_t x646 = UINT16_MAX;
	uint16_t x647 = 0U;
	int8_t x648 = INT8_MIN;
	volatile int32_t t14 = -3;

    t14 = (((x645<=x646)>>x647)*x648);

    if (t14 != -128) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint8_t x713 = 0U;
	uint16_t x714 = UINT16_MAX;
	int8_t x715 = 0;
	int8_t x716 = INT8_MIN;
	static volatile int32_t t15 = -19;

    t15 = (((x713<=x714)>>x715)*x716);

    if (t15 != -128) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint16_t x733 = UINT16_MAX;
	volatile int64_t x734 = INT64_MAX;
	volatile int32_t x735 = 0;
	int64_t x736 = 5LL;
	int64_t t16 = 9749153259LL;

    t16 = (((x733<=x734)>>x735)*x736);

    if (t16 != 5LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x762 = -1;
	static volatile int32_t x764 = -432290;
	volatile int32_t t17 = -2955481;

    t17 = (((x761<=x762)>>x763)*x764);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int64_t x794 = -1LL;
	static int16_t x795 = 28;
	volatile uint32_t x796 = 103U;

    t18 = (((x793<=x794)>>x795)*x796);

    if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x801 = INT64_MAX;
	int8_t x803 = 2;
	static uint16_t x804 = 1752U;
	static int32_t t19 = 18818567;

    t19 = (((x801<=x802)>>x803)*x804);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x845 = 1605U;
	static uint64_t x846 = 341LLU;
	volatile int32_t x847 = 11;
	int32_t x848 = INT32_MIN;
	static volatile int32_t t20 = 0;

    t20 = (((x845<=x846)>>x847)*x848);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x865 = 2265726LLU;
	volatile int64_t x866 = INT64_MIN;
	static uint8_t x868 = 1U;
	volatile int32_t t21 = 465532681;

    t21 = (((x865<=x866)>>x867)*x868);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x925 = 9U;
	int8_t x926 = 1;
	uint16_t x927 = 5U;
	volatile uint16_t x928 = UINT16_MAX;
	int32_t t22 = 75305457;

    t22 = (((x925<=x926)>>x927)*x928);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x937 = 524;
	uint64_t x938 = UINT64_MAX;
	int8_t x939 = 2;
	static int32_t x940 = INT32_MIN;
	int32_t t23 = 0;

    t23 = (((x937<=x938)>>x939)*x940);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x965 = 30U;
	int16_t x966 = 31;
	uint64_t x967 = 6LLU;
	static volatile uint64_t t24 = 1052566LLU;

    t24 = (((x965<=x966)>>x967)*x968);

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x1077 = 482595108147863161LL;
	static int32_t x1078 = -1;
	uint8_t x1079 = 15U;
	static uint16_t x1080 = UINT16_MAX;
	int32_t t25 = 96207;

    t25 = (((x1077<=x1078)>>x1079)*x1080);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x1082 = INT32_MIN;
	int8_t x1083 = 0;
	static int8_t x1084 = 0;
	volatile int32_t t26 = 251;

    t26 = (((x1081<=x1082)>>x1083)*x1084);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x1121 = INT8_MIN;
	int64_t x1122 = INT64_MAX;
	uint64_t x1123 = 3LLU;
	uint64_t x1124 = UINT64_MAX;
	volatile uint64_t t27 = 56762147LLU;

    t27 = (((x1121<=x1122)>>x1123)*x1124);

    if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x1157 = UINT64_MAX;
	int16_t x1158 = INT16_MAX;
	int16_t x1160 = INT16_MIN;
	volatile int32_t t28 = 1013235;

    t28 = (((x1157<=x1158)>>x1159)*x1160);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint8_t x1205 = UINT8_MAX;
	int16_t x1206 = INT16_MIN;
	uint32_t x1207 = 1U;
	int8_t x1208 = -1;
	int32_t t29 = -5405;

    t29 = (((x1205<=x1206)>>x1207)*x1208);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x1225 = 113U;
	int8_t x1226 = INT8_MIN;
	uint16_t x1227 = 0U;
	int8_t x1228 = 2;

    t30 = (((x1225<=x1226)>>x1227)*x1228);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint64_t x1277 = 30600184384LLU;
	uint64_t x1278 = UINT64_MAX;
	int16_t x1279 = 17;
	static uint8_t x1280 = 18U;
	volatile int32_t t31 = -3188323;

    t31 = (((x1277<=x1278)>>x1279)*x1280);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x1281 = -5474063LL;
	uint8_t x1283 = 0U;
	int8_t x1284 = INT8_MAX;
	int32_t t32 = -50179;

    t32 = (((x1281<=x1282)>>x1283)*x1284);

    if (t32 != 127) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int64_t x1301 = INT64_MIN;
	static uint8_t x1302 = 1U;
	int8_t x1303 = 28;
	int16_t x1304 = -10;
	int32_t t33 = -3;

    t33 = (((x1301<=x1302)>>x1303)*x1304);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x1345 = -1LL;
	int16_t x1346 = INT16_MIN;
	uint8_t x1348 = 22U;
	static volatile int32_t t34 = -2568;

    t34 = (((x1345<=x1346)>>x1347)*x1348);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint8_t x1361 = UINT8_MAX;
	volatile int32_t x1362 = INT32_MIN;
	static volatile int16_t x1363 = 1;
	volatile uint64_t t35 = 3251226859891LLU;

    t35 = (((x1361<=x1362)>>x1363)*x1364);

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x1417 = INT32_MIN;
	volatile uint8_t x1418 = 119U;
	uint8_t x1419 = 27U;
	static int32_t t36 = 467856955;

    t36 = (((x1417<=x1418)>>x1419)*x1420);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x1549 = INT8_MAX;
	int8_t x1550 = -5;
	int16_t x1552 = INT16_MAX;
	int32_t t37 = -133332073;

    t37 = (((x1549<=x1550)>>x1551)*x1552);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x1593 = -1;
	static uint16_t x1594 = UINT16_MAX;
	volatile int16_t x1595 = 9;
	int64_t x1596 = -106095686291LL;

    t38 = (((x1593<=x1594)>>x1595)*x1596);

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x1649 = 34183184U;
	uint16_t x1651 = 25U;
	int32_t t39 = -720247;

    t39 = (((x1649<=x1650)>>x1651)*x1652);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint32_t x1717 = 468643732U;
	uint8_t x1718 = 54U;
	volatile uint8_t x1719 = 1U;
	static volatile int32_t x1720 = 1;
	int32_t t40 = 830050;

    t40 = (((x1717<=x1718)>>x1719)*x1720);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x1757 = INT32_MIN;
	volatile int64_t x1758 = -1935598850LL;
	volatile int8_t x1759 = 3;
	volatile int16_t x1760 = -1;

    t41 = (((x1757<=x1758)>>x1759)*x1760);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x1801 = 1;
	static int8_t x1802 = INT8_MIN;
	int8_t x1803 = 9;
	int64_t x1804 = -1LL;
	static volatile int64_t t42 = 911737547174091LL;

    t42 = (((x1801<=x1802)>>x1803)*x1804);

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int32_t x1813 = INT32_MAX;
	static int64_t x1814 = 250312284521931389LL;
	int8_t x1815 = 2;
	static volatile uint32_t t43 = 40332U;

    t43 = (((x1813<=x1814)>>x1815)*x1816);

    if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint8_t x1821 = 1U;
	volatile uint32_t x1822 = 18U;
	uint16_t x1823 = 19U;
	int32_t x1824 = 676;
	static int32_t t44 = -1;

    t44 = (((x1821<=x1822)>>x1823)*x1824);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x1877 = UINT8_MAX;
	static int16_t x1878 = INT16_MIN;
	uint64_t t45 = 345049074LLU;

    t45 = (((x1877<=x1878)>>x1879)*x1880);

    if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x1989 = -1;
	int32_t x1990 = INT32_MIN;
	int16_t x1991 = 1;
	static int16_t x1992 = INT16_MAX;
	int32_t t46 = 1027904;

    t46 = (((x1989<=x1990)>>x1991)*x1992);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x2009 = 1;
	int32_t x2010 = -1;
	volatile uint8_t x2011 = 0U;

    t47 = (((x2009<=x2010)>>x2011)*x2012);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x2021 = INT64_MIN;
	int16_t x2022 = INT16_MAX;
	volatile int32_t t48 = 85090765;

    t48 = (((x2021<=x2022)>>x2023)*x2024);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x2041 = INT8_MIN;
	int8_t x2042 = -1;
	uint8_t x2043 = 1U;
	uint32_t x2044 = UINT32_MAX;
	static volatile uint32_t t49 = 1620U;

    t49 = (((x2041<=x2042)>>x2043)*x2044);

    if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x2074 = -3;
	static volatile uint8_t x2075 = 11U;
	volatile uint32_t x2076 = 39U;
	volatile uint32_t t50 = 10375U;

    t50 = (((x2073<=x2074)>>x2075)*x2076);

    if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x2085 = INT16_MIN;
	volatile int64_t x2086 = INT64_MAX;
	static uint16_t x2087 = 4U;
	int64_t x2088 = INT64_MIN;

    t51 = (((x2085<=x2086)>>x2087)*x2088);

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x2109 = INT8_MIN;
	uint16_t x2111 = 0U;
	volatile int32_t x2112 = INT32_MAX;

    t52 = (((x2109<=x2110)>>x2111)*x2112);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x2169 = INT8_MIN;
	volatile int32_t x2170 = -9;
	int16_t x2171 = 3;
	int64_t t53 = -60109821691140611LL;

    t53 = (((x2169<=x2170)>>x2171)*x2172);

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x2237 = -2492;
	volatile uint16_t x2238 = 19U;
	static uint8_t x2239 = 25U;
	static uint32_t x2240 = 2U;
	static uint32_t t54 = 1524105039U;

    t54 = (((x2237<=x2238)>>x2239)*x2240);

    if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x2261 = INT8_MAX;
	int64_t x2264 = INT64_MIN;
	static int64_t t55 = -338LL;

    t55 = (((x2261<=x2262)>>x2263)*x2264);

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x2265 = 2;
	int64_t x2266 = 112LL;
	static uint8_t x2267 = 0U;
	int32_t x2268 = 201;
	static volatile int32_t t56 = 1102966;

    t56 = (((x2265<=x2266)>>x2267)*x2268);

    if (t56 != 201) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x2345 = INT8_MAX;
	static int16_t x2346 = -1;
	uint8_t x2347 = 10U;
	static int32_t x2348 = -1;
	int32_t t57 = -722;

    t57 = (((x2345<=x2346)>>x2347)*x2348);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x2365 = 9045671043072610481LLU;
	uint32_t x2366 = 1U;
	uint8_t x2367 = 21U;
	static int16_t x2368 = 1;
	static volatile int32_t t58 = 4548976;

    t58 = (((x2365<=x2366)>>x2367)*x2368);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x2489 = 478975LL;
	int16_t x2490 = INT16_MIN;
	uint32_t x2491 = 2U;
	volatile uint32_t t59 = 328669473U;

    t59 = (((x2489<=x2490)>>x2491)*x2492);

    if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x2573 = INT8_MIN;
	static int8_t x2574 = 7;
	int64_t x2575 = 2LL;

    t60 = (((x2573<=x2574)>>x2575)*x2576);

    if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x2581 = -11;
	int32_t x2582 = -51;
	uint8_t x2583 = 1U;
	int16_t x2584 = -1;
	static volatile int32_t t61 = 184075465;

    t61 = (((x2581<=x2582)>>x2583)*x2584);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x2593 = UINT16_MAX;
	int16_t x2594 = -2725;
	volatile uint32_t x2595 = 0U;
	uint64_t x2596 = 127812772486555LLU;
	uint64_t t62 = 982LLU;

    t62 = (((x2593<=x2594)>>x2595)*x2596);

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x2625 = 5838116810016LL;
	volatile int8_t x2626 = -2;
	uint8_t x2627 = 0U;
	static int8_t x2628 = INT8_MIN;
	volatile int32_t t63 = 195592;

    t63 = (((x2625<=x2626)>>x2627)*x2628);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x2663 = 2;
	int64_t t64 = -3842LL;

    t64 = (((x2661<=x2662)>>x2663)*x2664);

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x2805 = INT32_MAX;
	uint8_t x2807 = 26U;
	int64_t x2808 = INT64_MIN;
	volatile int64_t t65 = -1023128LL;

    t65 = (((x2805<=x2806)>>x2807)*x2808);

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x2881 = 7U;
	int8_t x2882 = 0;
	volatile int8_t x2883 = 15;
	int32_t x2884 = INT32_MIN;

    t66 = (((x2881<=x2882)>>x2883)*x2884);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x2917 = 26U;
	uint16_t x2918 = 3642U;
	volatile int8_t x2919 = 1;
	uint32_t x2920 = 43136U;
	static uint32_t t67 = 449015U;

    t67 = (((x2917<=x2918)>>x2919)*x2920);

    if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int32_t x3014 = INT32_MIN;
	volatile uint16_t x3015 = 3U;
	int32_t t68 = 432;

    t68 = (((x3013<=x3014)>>x3015)*x3016);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x3021 = 8138;
	int8_t x3022 = INT8_MIN;
	uint8_t x3023 = 12U;
	int16_t x3024 = INT16_MIN;

    t69 = (((x3021<=x3022)>>x3023)*x3024);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x3085 = -1;
	volatile uint32_t x3086 = 62525042U;
	static uint8_t x3087 = 6U;
	static int16_t x3088 = INT16_MIN;
	int32_t t70 = -461981;

    t70 = (((x3085<=x3086)>>x3087)*x3088);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile uint64_t x3089 = 4317LLU;
	int32_t x3090 = INT32_MAX;
	int32_t x3091 = 2;
	static int32_t x3092 = INT32_MAX;
	volatile int32_t t71 = 79351020;

    t71 = (((x3089<=x3090)>>x3091)*x3092);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x3129 = 10221;
	volatile uint32_t x3130 = 58481U;
	int8_t x3131 = 21;
	int64_t x3132 = INT64_MAX;

    t72 = (((x3129<=x3130)>>x3131)*x3132);

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x3161 = 53;
	static uint16_t x3162 = 16U;
	int16_t x3163 = 2;
	uint64_t t73 = 0LLU;

    t73 = (((x3161<=x3162)>>x3163)*x3164);

    if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x3197 = INT16_MIN;
	int32_t x3198 = INT32_MIN;
	int8_t x3199 = 3;
	static uint8_t x3200 = 0U;

    t74 = (((x3197<=x3198)>>x3199)*x3200);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int64_t x3201 = INT64_MAX;
	int64_t x3202 = 24896256543515746LL;
	uint16_t x3203 = 12U;
	int64_t x3204 = -6903232751LL;
	volatile int64_t t75 = -327214220LL;

    t75 = (((x3201<=x3202)>>x3203)*x3204);

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x3238 = UINT8_MAX;
	static uint16_t x3239 = 6U;
	int32_t x3240 = INT32_MIN;
	int32_t t76 = -12174;

    t76 = (((x3237<=x3238)>>x3239)*x3240);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x3297 = INT8_MIN;
	uint8_t x3298 = 1U;
	static int32_t x3299 = 2;
	int16_t x3300 = INT16_MAX;

    t77 = (((x3297<=x3298)>>x3299)*x3300);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint64_t x3377 = 811506097212487LLU;
	static int8_t x3378 = -20;
	int8_t x3379 = 15;
	volatile uint16_t x3380 = 25371U;
	volatile int32_t t78 = 24;

    t78 = (((x3377<=x3378)>>x3379)*x3380);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x3477 = INT32_MAX;
	static int16_t x3478 = 1;
	uint8_t x3479 = 20U;
	static volatile int8_t x3480 = 1;
	int32_t t79 = -889699276;

    t79 = (((x3477<=x3478)>>x3479)*x3480);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x3509 = 95741585U;
	volatile int16_t x3510 = INT16_MIN;
	uint8_t x3511 = 0U;
	int32_t x3512 = -1;

    t80 = (((x3509<=x3510)>>x3511)*x3512);

    if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x3569 = 565LLU;
	int16_t x3570 = INT16_MIN;
	int8_t x3572 = INT8_MIN;
	volatile int32_t t81 = 5282;

    t81 = (((x3569<=x3570)>>x3571)*x3572);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x3653 = -1;
	int8_t x3654 = INT8_MAX;
	uint16_t x3655 = 3U;
	int32_t t82 = -380260;

    t82 = (((x3653<=x3654)>>x3655)*x3656);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint64_t x3669 = 1883000636LLU;
	int16_t x3670 = -1;
	static volatile uint32_t x3671 = 17U;
	int64_t x3672 = 47548999LL;
	int64_t t83 = -12LL;

    t83 = (((x3669<=x3670)>>x3671)*x3672);

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x3685 = INT64_MIN;
	uint32_t x3686 = UINT32_MAX;
	static int16_t x3687 = 24;
	int8_t x3688 = INT8_MAX;
	int32_t t84 = -131889;

    t84 = (((x3685<=x3686)>>x3687)*x3688);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x3729 = -1;
	int32_t x3730 = INT32_MAX;
	uint8_t x3731 = 3U;
	int64_t x3732 = INT64_MAX;
	volatile int64_t t85 = 3396303077597854LL;

    t85 = (((x3729<=x3730)>>x3731)*x3732);

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint8_t x3745 = 79U;
	int8_t x3746 = 6;
	uint16_t x3747 = 0U;
	int64_t x3748 = INT64_MIN;
	static int64_t t86 = -246105566LL;

    t86 = (((x3745<=x3746)>>x3747)*x3748);

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile uint16_t x3762 = UINT16_MAX;
	int64_t x3764 = INT64_MAX;
	volatile int64_t t87 = -351783005LL;

    t87 = (((x3761<=x3762)>>x3763)*x3764);

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x3829 = 115443U;
	volatile uint64_t x3832 = 569849238676705LLU;
	uint64_t t88 = 27LLU;

    t88 = (((x3829<=x3830)>>x3831)*x3832);

    if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x3837 = INT32_MIN;
	volatile int64_t x3838 = INT64_MAX;
	uint32_t x3839 = 6U;
	volatile int64_t t89 = -376955983414LL;

    t89 = (((x3837<=x3838)>>x3839)*x3840);

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x3854 = INT16_MAX;
	int8_t x3855 = 5;
	int32_t x3856 = 2395957;
	int32_t t90 = 47888;

    t90 = (((x3853<=x3854)>>x3855)*x3856);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x3869 = INT16_MAX;
	uint8_t x3870 = 24U;
	static volatile uint32_t x3872 = UINT32_MAX;
	volatile uint32_t t91 = 10114U;

    t91 = (((x3869<=x3870)>>x3871)*x3872);

    if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x3881 = INT64_MAX;
	uint64_t x3883 = 2LLU;
	volatile int32_t t92 = 1029997305;

    t92 = (((x3881<=x3882)>>x3883)*x3884);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x3893 = INT64_MAX;
	static int8_t x3894 = INT8_MAX;
	uint8_t x3895 = 2U;
	uint64_t x3896 = UINT64_MAX;

    t93 = (((x3893<=x3894)>>x3895)*x3896);

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	static int16_t x3897 = INT16_MIN;
	uint16_t x3898 = 30U;
	uint8_t x3899 = 0U;
	int64_t x3900 = 6817150028744665LL;
	volatile int64_t t94 = 309271523229711LL;

    t94 = (((x3897<=x3898)>>x3899)*x3900);

    if (t94 != 6817150028744665LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint32_t x3902 = UINT32_MAX;
	uint16_t x3903 = 0U;
	uint64_t t95 = UINT64_MAX;

    t95 = (((x3901<=x3902)>>x3903)*x3904);

    if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int8_t x3910 = INT8_MAX;
	uint8_t x3911 = 1U;

    t96 = (((x3909<=x3910)>>x3911)*x3912);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static int64_t x3917 = 148974262537LL;
	uint32_t x3919 = 4U;
	int8_t x3920 = INT8_MIN;
	int32_t t97 = 7264444;

    t97 = (((x3917<=x3918)>>x3919)*x3920);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int64_t x4001 = -1LL;
	int64_t x4002 = -1LL;
	volatile uint32_t x4003 = 13U;
	uint8_t x4004 = UINT8_MAX;
	static volatile int32_t t98 = 25;

    t98 = (((x4001<=x4002)>>x4003)*x4004);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x4009 = UINT32_MAX;
	static volatile uint64_t t99 = 763150907883946761LLU;

    t99 = (((x4009<=x4010)>>x4011)*x4012);

    if (t99 != 0LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x4045 = INT32_MIN;
	int8_t x4046 = -3;
	int64_t t100 = INT64_MAX;

    t100 = (((x4045<=x4046)>>x4047)*x4048);

    if (t100 != INT64_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x4081 = UINT8_MAX;
	int32_t x4082 = INT32_MAX;
	uint8_t x4083 = 4U;
	int32_t t101 = -7859008;

    t101 = (((x4081<=x4082)>>x4083)*x4084);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x4121 = UINT8_MAX;
	volatile uint32_t x4123 = 1U;
	int8_t x4124 = -13;
	static int32_t t102 = 835765;

    t102 = (((x4121<=x4122)>>x4123)*x4124);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x4145 = UINT16_MAX;
	uint16_t x4147 = 22U;
	int64_t x4148 = 20997624984227690LL;
	int64_t t103 = 1217320LL;

    t103 = (((x4145<=x4146)>>x4147)*x4148);

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static int32_t x4161 = 1;
	int32_t x4162 = INT32_MIN;
	int8_t x4163 = 0;
	static volatile int64_t x4164 = INT64_MAX;
	int64_t t104 = -205571830521LL;

    t104 = (((x4161<=x4162)>>x4163)*x4164);

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x4181 = 1;
	int64_t x4182 = 32351033746326573LL;
	uint8_t x4183 = 25U;
	int32_t t105 = -968;

    t105 = (((x4181<=x4182)>>x4183)*x4184);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x4201 = 1;
	static uint64_t x4202 = 5724926624LLU;
	static uint8_t x4203 = 4U;
	uint8_t x4204 = 35U;
	volatile int32_t t106 = -19033547;

    t106 = (((x4201<=x4202)>>x4203)*x4204);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static int32_t x4289 = INT32_MIN;
	uint16_t x4291 = 0U;
	static volatile int32_t t107 = 14184;

    t107 = (((x4289<=x4290)>>x4291)*x4292);

    if (t107 != 255) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x4357 = 0U;
	int32_t x4358 = INT32_MIN;
	int64_t x4359 = 0LL;
	uint16_t x4360 = 55U;
	volatile int32_t t108 = -8020423;

    t108 = (((x4357<=x4358)>>x4359)*x4360);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x4393 = 26;
	uint8_t x4395 = 15U;
	int8_t x4396 = INT8_MIN;
	volatile int32_t t109 = -5666446;

    t109 = (((x4393<=x4394)>>x4395)*x4396);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x4446 = -53;
	uint8_t x4447 = 3U;
	int16_t x4448 = -1;
	static volatile int32_t t110 = 1047376013;

    t110 = (((x4445<=x4446)>>x4447)*x4448);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x4457 = 58941884693430329LLU;
	int64_t x4458 = INT64_MIN;
	int32_t x4460 = INT32_MIN;
	int32_t t111 = 18;

    t111 = (((x4457<=x4458)>>x4459)*x4460);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint16_t x4465 = 6566U;
	uint64_t x4466 = 500458809148657LLU;
	uint64_t x4467 = 4LLU;
	static int16_t x4468 = INT16_MAX;

    t112 = (((x4465<=x4466)>>x4467)*x4468);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t t113 = 82613622154LL;

    t113 = (((x4477<=x4478)>>x4479)*x4480);

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x4481 = -1;
	uint8_t x4483 = 2U;
	static volatile int32_t x4484 = -7578993;

    t114 = (((x4481<=x4482)>>x4483)*x4484);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint64_t x4557 = 165388LLU;
	static uint16_t x4558 = UINT16_MAX;
	uint8_t x4559 = 12U;
	int64_t t115 = 26314997452287678LL;

    t115 = (((x4557<=x4558)>>x4559)*x4560);

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static int8_t x4561 = INT8_MAX;
	int16_t x4563 = 29;
	volatile uint32_t x4564 = 10754U;
	uint32_t t116 = 666506618U;

    t116 = (((x4561<=x4562)>>x4563)*x4564);

    if (t116 != 0U) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x4581 = 1;
	uint64_t x4582 = 1LLU;
	int16_t x4584 = -1;

    t117 = (((x4581<=x4582)>>x4583)*x4584);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x4589 = INT32_MIN;
	uint8_t x4590 = 1U;
	static uint64_t x4592 = 1742138885410570338LLU;
	static uint64_t t118 = 1659824285148090LLU;

    t118 = (((x4589<=x4590)>>x4591)*x4592);

    if (t118 != 0LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	static int64_t x4637 = -1LL;
	static uint64_t x4638 = UINT64_MAX;
	int16_t x4639 = 0;
	int8_t x4640 = 1;
	int32_t t119 = 500483078;

    t119 = (((x4637<=x4638)>>x4639)*x4640);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static int32_t x4681 = INT32_MIN;
	int16_t x4682 = -1;
	static int32_t x4683 = 0;
	static uint8_t x4684 = 17U;
	int32_t t120 = 6468974;

    t120 = (((x4681<=x4682)>>x4683)*x4684);

    if (t120 != 17) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x4705 = -161431204;
	int64_t x4706 = 87944024086580126LL;
	static uint8_t x4708 = 3U;

    t121 = (((x4705<=x4706)>>x4707)*x4708);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int8_t x4765 = INT8_MIN;
	int16_t x4766 = INT16_MIN;
	volatile int32_t x4767 = 1;
	uint16_t x4768 = UINT16_MAX;
	int32_t t122 = -120;

    t122 = (((x4765<=x4766)>>x4767)*x4768);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x4813 = -1;
	uint32_t x4814 = 535907420U;
	volatile int16_t x4815 = 0;
	int32_t x4816 = 121;
	int32_t t123 = 200779304;

    t123 = (((x4813<=x4814)>>x4815)*x4816);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x4821 = -2845663LL;
	int64_t x4822 = INT64_MIN;
	uint8_t x4823 = 7U;
	int16_t x4824 = INT16_MAX;

    t124 = (((x4821<=x4822)>>x4823)*x4824);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x4825 = UINT8_MAX;
	int16_t x4826 = -1;
	int64_t x4828 = INT64_MIN;
	int64_t t125 = -107LL;

    t125 = (((x4825<=x4826)>>x4827)*x4828);

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x4885 = 1U;
	static int8_t x4886 = INT8_MIN;
	volatile uint8_t x4887 = 3U;

    t126 = (((x4885<=x4886)>>x4887)*x4888);

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x4913 = UINT64_MAX;
	volatile int8_t x4914 = -1;
	int16_t x4915 = 27;
	int64_t x4916 = INT64_MIN;
	int64_t t127 = -190874425LL;

    t127 = (((x4913<=x4914)>>x4915)*x4916);

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x4946 = 30;
	static volatile uint8_t x4947 = 2U;
	static uint16_t x4948 = 1081U;
	static volatile int32_t t128 = 1038394;

    t128 = (((x4945<=x4946)>>x4947)*x4948);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint16_t x4981 = 24U;
	int16_t x4982 = 78;
	static int64_t x4984 = INT64_MIN;
	int64_t t129 = -21817344687191539LL;

    t129 = (((x4981<=x4982)>>x4983)*x4984);

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x5002 = UINT32_MAX;
	int8_t x5003 = 0;
	volatile uint64_t x5004 = 156418912921069LLU;
	volatile uint64_t t130 = 34769661454721LLU;

    t130 = (((x5001<=x5002)>>x5003)*x5004);

    if (t130 != 156418912921069LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile uint8_t x5007 = 8U;
	int32_t t131 = 1;

    t131 = (((x5005<=x5006)>>x5007)*x5008);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint8_t x5017 = 9U;
	volatile int16_t x5018 = 13795;
	int8_t x5019 = 1;
	static int32_t t132 = 305;

    t132 = (((x5017<=x5018)>>x5019)*x5020);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x5089 = INT16_MIN;
	int8_t x5091 = 1;
	static volatile uint64_t t133 = 1237056950638LLU;

    t133 = (((x5089<=x5090)>>x5091)*x5092);

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x5109 = INT32_MIN;
	volatile uint8_t x5111 = 8U;
	int16_t x5112 = INT16_MIN;
	static volatile int32_t t134 = 261743;

    t134 = (((x5109<=x5110)>>x5111)*x5112);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x5169 = INT16_MIN;
	int32_t x5170 = -1;
	static int8_t x5171 = 0;
	uint32_t t135 = 1287U;

    t135 = (((x5169<=x5170)>>x5171)*x5172);

    if (t135 != 107U) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint32_t x5213 = 55U;
	int8_t x5214 = INT8_MIN;
	int8_t x5215 = 1;
	static volatile int32_t t136 = 28536187;

    t136 = (((x5213<=x5214)>>x5215)*x5216);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x5241 = 12U;
	volatile uint8_t x5242 = 17U;
	volatile uint8_t x5243 = 31U;
	uint8_t x5244 = 14U;
	volatile int32_t t137 = -14430;

    t137 = (((x5241<=x5242)>>x5243)*x5244);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int32_t x5313 = INT32_MAX;
	uint64_t x5314 = UINT64_MAX;
	uint8_t x5315 = 10U;
	uint64_t x5316 = 107LLU;
	static uint64_t t138 = 3LLU;

    t138 = (((x5313<=x5314)>>x5315)*x5316);

    if (t138 != 0LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x5365 = -2;
	int32_t x5366 = INT32_MAX;
	uint32_t x5367 = 1U;
	volatile uint8_t x5368 = UINT8_MAX;
	volatile int32_t t139 = -769567409;

    t139 = (((x5365<=x5366)>>x5367)*x5368);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x5401 = 664225545LLU;
	int32_t x5402 = -196719;
	uint16_t x5403 = 1U;
	uint8_t x5404 = 14U;
	int32_t t140 = 358489;

    t140 = (((x5401<=x5402)>>x5403)*x5404);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x5409 = INT16_MIN;
	static int8_t x5410 = INT8_MAX;
	int8_t x5411 = 5;
	int32_t x5412 = INT32_MIN;
	volatile int32_t t141 = 265;

    t141 = (((x5409<=x5410)>>x5411)*x5412);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int16_t x5485 = INT16_MIN;
	volatile int32_t x5486 = -253;
	uint8_t x5487 = 0U;
	int16_t x5488 = 31;
	int32_t t142 = 271;

    t142 = (((x5485<=x5486)>>x5487)*x5488);

    if (t142 != 31) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x5497 = 100886112573LLU;
	int32_t x5498 = INT32_MIN;
	uint8_t x5499 = 28U;
	volatile int32_t t143 = -451724358;

    t143 = (((x5497<=x5498)>>x5499)*x5500);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x5537 = 12U;
	int64_t x5538 = INT64_MIN;
	static uint8_t x5539 = 1U;

    t144 = (((x5537<=x5538)>>x5539)*x5540);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int16_t x5557 = INT16_MAX;
	int16_t x5558 = 0;
	int64_t t145 = 234699881809381432LL;

    t145 = (((x5557<=x5558)>>x5559)*x5560);

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x5562 = 0;
	int16_t x5564 = INT16_MIN;
	volatile int32_t t146 = -451975;

    t146 = (((x5561<=x5562)>>x5563)*x5564);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x5573 = 326675257U;
	static uint16_t x5574 = 214U;
	volatile uint32_t x5575 = 8U;
	int64_t x5576 = -7966916712207974LL;

    t147 = (((x5573<=x5574)>>x5575)*x5576);

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int32_t x5597 = INT32_MIN;
	int8_t x5599 = 1;
	int64_t x5600 = -2579052767543536844LL;

    t148 = (((x5597<=x5598)>>x5599)*x5600);

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x5701 = -1;
	int8_t x5702 = 47;
	volatile int32_t t149 = 40911644;

    t149 = (((x5701<=x5702)>>x5703)*x5704);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x5717 = 18033328U;
	uint32_t x5719 = 3U;
	static int64_t x5720 = INT64_MIN;
	int64_t t150 = 279552766057255LL;

    t150 = (((x5717<=x5718)>>x5719)*x5720);

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x5813 = INT16_MIN;
	static uint8_t x5815 = 17U;
	uint16_t x5816 = 1U;

    t151 = (((x5813<=x5814)>>x5815)*x5816);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static int64_t x5825 = INT64_MIN;
	volatile int16_t x5826 = INT16_MIN;
	uint64_t x5827 = 25LLU;
	volatile int32_t x5828 = INT32_MIN;
	int32_t t152 = 1883394;

    t152 = (((x5825<=x5826)>>x5827)*x5828);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x5945 = -3786;
	volatile uint8_t x5946 = UINT8_MAX;
	uint16_t x5947 = 27U;
	static int32_t x5948 = -6;
	int32_t t153 = 45060886;

    t153 = (((x5945<=x5946)>>x5947)*x5948);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x6017 = INT32_MIN;
	static volatile int32_t x6018 = -9379268;
	uint16_t x6020 = UINT16_MAX;

    t154 = (((x6017<=x6018)>>x6019)*x6020);

    if (t154 != 65535) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint64_t x6021 = UINT64_MAX;
	volatile uint64_t x6024 = 187875LLU;
	static uint64_t t155 = 97493367LLU;

    t155 = (((x6021<=x6022)>>x6023)*x6024);

    if (t155 != 0LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int64_t x6053 = -20099LL;
	int64_t x6054 = INT64_MIN;
	uint8_t x6055 = 23U;
	int64_t x6056 = INT64_MIN;
	int64_t t156 = -41779941180964LL;

    t156 = (((x6053<=x6054)>>x6055)*x6056);

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x6173 = -1;
	int32_t x6174 = INT32_MAX;
	static int8_t x6175 = 0;
	volatile int32_t x6176 = INT32_MIN;
	volatile int32_t t157 = INT32_MIN;

    t157 = (((x6173<=x6174)>>x6175)*x6176);

    if (t157 != INT32_MIN) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile uint32_t x6193 = 4103U;
	uint64_t x6194 = 25339659432860LLU;
	static int16_t x6195 = 1;
	int64_t t158 = -278748872463894LL;

    t158 = (((x6193<=x6194)>>x6195)*x6196);

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	static int8_t x6206 = -1;
	int8_t x6207 = 18;
	int16_t x6208 = -3;
	static int32_t t159 = -7;

    t159 = (((x6205<=x6206)>>x6207)*x6208);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint16_t x6257 = 1U;
	uint16_t x6258 = UINT16_MAX;
	int8_t x6259 = 0;
	static uint64_t x6260 = UINT64_MAX;
	uint64_t t160 = UINT64_MAX;

    t160 = (((x6257<=x6258)>>x6259)*x6260);

    if (t160 != UINT64_MAX) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x6269 = INT64_MIN;
	static int8_t x6271 = 4;
	int64_t x6272 = -10LL;
	volatile int64_t t161 = -300LL;

    t161 = (((x6269<=x6270)>>x6271)*x6272);

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x6277 = INT16_MAX;
	volatile int32_t x6278 = -627;
	int8_t x6279 = 3;
	int32_t t162 = 237101;

    t162 = (((x6277<=x6278)>>x6279)*x6280);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x6297 = INT32_MAX;
	int8_t x6298 = 57;
	int8_t x6300 = -1;
	volatile int32_t t163 = -10;

    t163 = (((x6297<=x6298)>>x6299)*x6300);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int64_t x6309 = INT64_MAX;
	volatile uint64_t x6310 = 17260818LLU;
	uint32_t x6311 = 1U;
	int64_t x6312 = 0LL;
	int64_t t164 = -27LL;

    t164 = (((x6309<=x6310)>>x6311)*x6312);

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x6445 = 0U;
	int64_t x6446 = 61LL;
	uint8_t x6447 = 15U;
	int16_t x6448 = 26;
	int32_t t165 = 0;

    t165 = (((x6445<=x6446)>>x6447)*x6448);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint16_t x6450 = 1U;
	int64_t x6452 = INT64_MIN;
	volatile int64_t t166 = 692885172682705970LL;

    t166 = (((x6449<=x6450)>>x6451)*x6452);

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x6525 = UINT8_MAX;
	volatile int32_t x6526 = INT32_MIN;
	static int8_t x6527 = 20;
	volatile int64_t x6528 = INT64_MAX;
	volatile int64_t t167 = -554652837839654LL;

    t167 = (((x6525<=x6526)>>x6527)*x6528);

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int8_t x6533 = -1;
	uint32_t x6534 = UINT32_MAX;
	int16_t x6535 = 0;
	int8_t x6536 = -1;
	static int32_t t168 = 5617774;

    t168 = (((x6533<=x6534)>>x6535)*x6536);

    if (t168 != -1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint8_t x6553 = 1U;
	int8_t x6554 = INT8_MIN;
	int16_t x6555 = 30;
	int64_t x6556 = -1LL;
	volatile int64_t t169 = 7752LL;

    t169 = (((x6553<=x6554)>>x6555)*x6556);

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x6561 = 0;
	int32_t x6563 = 16;
	int16_t x6564 = -1;
	int32_t t170 = 19388490;

    t170 = (((x6561<=x6562)>>x6563)*x6564);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static int16_t x6585 = INT16_MAX;
	volatile uint16_t x6586 = 17U;
	uint16_t x6587 = 20U;
	static volatile int32_t x6588 = 7057;
	int32_t t171 = 1451224;

    t171 = (((x6585<=x6586)>>x6587)*x6588);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint32_t x6613 = 3548U;
	uint64_t x6614 = 56045049735357LLU;
	volatile int32_t x6616 = INT32_MIN;
	int32_t t172 = -6380063;

    t172 = (((x6613<=x6614)>>x6615)*x6616);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x6617 = -833;
	uint64_t x6620 = 8439520267060LLU;
	uint64_t t173 = 1527607LLU;

    t173 = (((x6617<=x6618)>>x6619)*x6620);

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int16_t x6629 = INT16_MAX;
	volatile int32_t x6631 = 0;
	volatile int64_t t174 = -320144930795346LL;

    t174 = (((x6629<=x6630)>>x6631)*x6632);

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	static int32_t x6702 = INT32_MIN;
	static int8_t x6703 = 1;
	uint8_t x6704 = 0U;

    t175 = (((x6701<=x6702)>>x6703)*x6704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x6733 = INT32_MIN;
	uint16_t x6734 = 15905U;
	volatile int32_t t176 = -6763;

    t176 = (((x6733<=x6734)>>x6735)*x6736);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint16_t x6749 = 12U;
	int16_t x6750 = 0;
	uint16_t x6751 = 14U;
	volatile int32_t x6752 = 885;
	volatile int32_t t177 = -4270965;

    t177 = (((x6749<=x6750)>>x6751)*x6752);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x6793 = 22;
	uint64_t x6794 = 4719386554813297LLU;
	static volatile int32_t t178 = 45666;

    t178 = (((x6793<=x6794)>>x6795)*x6796);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x6801 = INT64_MIN;
	volatile int32_t x6802 = INT32_MAX;
	static uint16_t x6803 = 2U;
	static uint16_t x6804 = 7U;
	volatile int32_t t179 = 10576478;

    t179 = (((x6801<=x6802)>>x6803)*x6804);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x6805 = 27;
	int16_t x6806 = 127;
	uint16_t x6807 = 1U;
	volatile int32_t x6808 = INT32_MIN;
	static int32_t t180 = 6;

    t180 = (((x6805<=x6806)>>x6807)*x6808);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x6849 = 7225946U;
	int64_t x6850 = -223LL;
	static int8_t x6851 = 0;
	volatile uint16_t x6852 = UINT16_MAX;
	static int32_t t181 = 35;

    t181 = (((x6849<=x6850)>>x6851)*x6852);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x6889 = INT64_MAX;
	int8_t x6890 = INT8_MIN;
	uint32_t x6891 = 0U;
	uint64_t x6892 = 27647120317LLU;
	volatile uint64_t t182 = 1206970123LLU;

    t182 = (((x6889<=x6890)>>x6891)*x6892);

    if (t182 != 0LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x6894 = UINT32_MAX;
	uint8_t x6895 = 0U;

    t183 = (((x6893<=x6894)>>x6895)*x6896);

    if (t183 != 1025434) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x6897 = 907U;
	volatile int8_t x6899 = 1;
	volatile int64_t t184 = -1987LL;

    t184 = (((x6897<=x6898)>>x6899)*x6900);

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static int32_t x6905 = 1807;
	int32_t x6906 = 17;
	uint32_t x6908 = 651366U;
	uint32_t t185 = 33U;

    t185 = (((x6905<=x6906)>>x6907)*x6908);

    if (t185 != 0U) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x6933 = -44;
	int32_t x6934 = -1;
	int16_t x6935 = 25;
	int32_t x6936 = INT32_MIN;
	int32_t t186 = 110;

    t186 = (((x6933<=x6934)>>x6935)*x6936);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x6949 = UINT64_MAX;
	static int16_t x6950 = INT16_MIN;
	static uint16_t x6951 = 24U;
	int8_t x6952 = 1;
	volatile int32_t t187 = 60734;

    t187 = (((x6949<=x6950)>>x6951)*x6952);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x6968 = INT32_MAX;

    t188 = (((x6965<=x6966)>>x6967)*x6968);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int32_t x6973 = INT32_MIN;
	int16_t x6974 = -1;
	int32_t x6975 = 0;
	uint32_t x6976 = 15065371U;
	uint32_t t189 = 225611U;

    t189 = (((x6973<=x6974)>>x6975)*x6976);

    if (t189 != 15065371U) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x6977 = UINT32_MAX;
	uint16_t x6978 = 436U;
	int64_t x6980 = 3656LL;

    t190 = (((x6977<=x6978)>>x6979)*x6980);

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int16_t x6997 = INT16_MIN;
	int8_t x6998 = 5;
	int8_t x6999 = 3;
	static int32_t x7000 = 0;
	volatile int32_t t191 = 1789;

    t191 = (((x6997<=x6998)>>x6999)*x7000);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x7037 = INT64_MIN;
	volatile uint32_t x7038 = 3107U;
	int8_t x7039 = 1;
	volatile int8_t x7040 = -1;

    t192 = (((x7037<=x7038)>>x7039)*x7040);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x7065 = INT16_MAX;
	static int32_t x7066 = -148269;
	uint32_t x7067 = 2U;

    t193 = (((x7065<=x7066)>>x7067)*x7068);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x7073 = INT64_MIN;
	int64_t x7074 = INT64_MIN;
	static int8_t x7075 = 25;
	uint64_t x7076 = 3742809LLU;
	volatile uint64_t t194 = 606250206870479LLU;

    t194 = (((x7073<=x7074)>>x7075)*x7076);

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x7134 = -57264LL;
	static volatile uint8_t x7135 = 1U;
	int64_t x7136 = -1LL;
	int64_t t195 = 3494427LL;

    t195 = (((x7133<=x7134)>>x7135)*x7136);

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x7178 = INT8_MIN;
	uint16_t x7179 = 11U;
	int8_t x7180 = INT8_MIN;
	int32_t t196 = 5;

    t196 = (((x7177<=x7178)>>x7179)*x7180);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x7194 = INT64_MIN;
	uint8_t x7195 = 13U;
	int16_t x7196 = 3;
	int32_t t197 = -16044036;

    t197 = (((x7193<=x7194)>>x7195)*x7196);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x7201 = INT8_MIN;
	uint8_t x7202 = 0U;
	uint32_t x7203 = 10U;
	static int64_t x7204 = 125424622353LL;
	int64_t t198 = 68055075LL;

    t198 = (((x7201<=x7202)>>x7203)*x7204);

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint32_t x7305 = 1181923U;
	int8_t x7306 = INT8_MIN;
	uint8_t x7307 = 7U;
	static int8_t x7308 = 3;
	volatile int32_t t199 = 2;

    t199 = (((x7305<=x7306)>>x7307)*x7308);

    if (t199 != 0) { NG(); } else { ; }
	
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
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

