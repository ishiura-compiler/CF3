
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

volatile int8_t x248 = 2;
volatile uint16_t x617 = UINT16_MAX;
volatile int32_t t3 = -22;
int32_t x755 = -1;
volatile int32_t x756 = 55;
int32_t t5 = -205999953;
int16_t x927 = -1;
int8_t x933 = 6;
volatile uint32_t x936 = 4U;
int64_t x994 = 6151LL;
volatile uint16_t x996 = 10U;
uint64_t x1121 = 1447345510LLU;
volatile int32_t x1253 = 8498;
int32_t t12 = 67;
int8_t x1270 = INT8_MIN;
static int64_t x1308 = 1LL;
uint8_t x1544 = 0U;
static uint32_t x1615 = UINT32_MAX;
uint32_t x1697 = UINT32_MAX;
volatile uint64_t t21 = 86676746396LLU;
volatile int32_t x2126 = -354071;
uint64_t x2127 = UINT64_MAX;
volatile int32_t t22 = 22;
int8_t x2214 = 19;
uint8_t x2404 = 0U;
uint8_t x2441 = 1U;
uint64_t x2490 = 191LLU;
static int64_t x2685 = 52LL;
uint8_t x2717 = 3U;
volatile int8_t x2719 = INT8_MIN;
int32_t t32 = 58664;
int8_t x3145 = INT8_MAX;
volatile uint64_t x3146 = 13LLU;
int32_t t37 = -307782;
uint8_t x3641 = UINT8_MAX;
int32_t t38 = 0;
uint8_t x4021 = UINT8_MAX;
int8_t x4024 = 2;
uint64_t x4027 = 76962351156187LLU;
int8_t x4028 = 4;
int64_t x4063 = INT64_MAX;
int16_t x4208 = 1;
volatile int64_t x4209 = 43120LL;
volatile uint64_t x4310 = 4585784508LLU;
int8_t x4311 = -1;
int8_t x4312 = 7;
int64_t x4431 = INT64_MAX;
int16_t x4432 = 7;
uint8_t x4448 = 0U;


void f0(void) {
    	volatile int16_t x21 = 12;
	uint64_t x22 = UINT64_MAX;
	int32_t x23 = INT32_MIN;
	int8_t x24 = 0;
	static volatile int32_t t0 = -628641689;

    t0 = ((x21<<(x22/x23))<<x24);

    if (t0 != 24) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x245 = 5729235;
	int8_t x246 = INT8_MIN;
	int32_t x247 = INT32_MAX;
	volatile int32_t t1 = -7528652;

    t1 = ((x245<<(x246/x247))<<x248);

    if (t1 != 22916940) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint16_t x618 = 739U;
	int16_t x619 = INT16_MAX;
	uint16_t x620 = 1U;
	int32_t t2 = -920003714;

    t2 = ((x617<<(x618/x619))<<x620);

    if (t2 != 131070) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile uint16_t x701 = 12U;
	static int64_t x702 = 105945269LL;
	static int32_t x703 = INT32_MIN;
	uint8_t x704 = 0U;

    t3 = ((x701<<(x702/x703))<<x704);

    if (t3 != 12) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x753 = 262690665206164067LLU;
	volatile uint32_t x754 = 80U;
	uint64_t t4 = 91291053592743LLU;

    t4 = ((x753<<(x754/x755))<<x756);

    if (t4 != 3566850904877432832LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x841 = 22U;
	int16_t x842 = -3;
	int32_t x843 = -1;
	volatile uint8_t x844 = 1U;

    t5 = ((x841<<(x842/x843))<<x844);

    if (t5 != 352) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x925 = UINT64_MAX;
	int16_t x926 = -1;
	uint8_t x928 = 1U;
	volatile uint64_t t6 = 27410366616908800LLU;

    t6 = ((x925<<(x926/x927))<<x928);

    if (t6 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x934 = 3;
	static uint32_t x935 = 803U;
	volatile int32_t t7 = -15203;

    t7 = ((x933<<(x934/x935))<<x936);

    if (t7 != 96) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint32_t x993 = UINT32_MAX;
	int32_t x995 = -54065;
	static uint32_t t8 = 11162U;

    t8 = ((x993<<(x994/x995))<<x996);

    if (t8 != 4294966272U) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint64_t x1013 = 24561244344171450LLU;
	int16_t x1014 = 1930;
	int32_t x1015 = 391;
	static int8_t x1016 = 3;
	volatile uint64_t t9 = 11646948615855LLU;

    t9 = ((x1013<<(x1014/x1015))<<x1016);

    if (t9 != 3143839276053945600LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x1117 = 1U;
	static int8_t x1118 = -1;
	int16_t x1119 = -162;
	uint32_t x1120 = 0U;
	static volatile int32_t t10 = 848989708;

    t10 = ((x1117<<(x1118/x1119))<<x1120);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x1122 = INT32_MAX;
	int64_t x1123 = 9637447462653LL;
	static uint8_t x1124 = 3U;
	volatile uint64_t t11 = 3494548LLU;

    t11 = ((x1121<<(x1122/x1123))<<x1124);

    if (t11 != 11578764080LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x1254 = -1;
	int32_t x1255 = INT32_MIN;
	uint32_t x1256 = 1U;

    t12 = ((x1253<<(x1254/x1255))<<x1256);

    if (t12 != 16996) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x1269 = 32595U;
	static volatile uint64_t x1271 = 5982555610495045825LLU;
	int64_t x1272 = 8LL;
	int32_t t13 = -528853;

    t13 = ((x1269<<(x1270/x1271))<<x1272);

    if (t13 != 66754560) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint8_t x1305 = UINT8_MAX;
	static int16_t x1306 = -1;
	int8_t x1307 = INT8_MIN;
	static int32_t t14 = 107818400;

    t14 = ((x1305<<(x1306/x1307))<<x1308);

    if (t14 != 510) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x1485 = 901721583229LL;
	static int32_t x1486 = 111866;
	static uint32_t x1487 = 6274U;
	uint8_t x1488 = 1U;
	volatile int64_t t15 = 23LL;

    t15 = ((x1485<<(x1486/x1487))<<x1488);

    if (t15 != 236380902713982976LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile int64_t x1541 = 186LL;
	int32_t x1542 = -1;
	int8_t x1543 = INT8_MIN;
	int64_t t16 = -2267225478LL;

    t16 = ((x1541<<(x1542/x1543))<<x1544);

    if (t16 != 186LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x1565 = UINT8_MAX;
	int16_t x1566 = INT16_MIN;
	volatile int32_t x1567 = INT32_MAX;
	volatile uint16_t x1568 = 4U;
	volatile int32_t t17 = 9596057;

    t17 = ((x1565<<(x1566/x1567))<<x1568);

    if (t17 != 4080) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x1613 = INT8_MAX;
	int32_t x1614 = -4160976;
	int16_t x1616 = 6;
	volatile int32_t t18 = -21995383;

    t18 = ((x1613<<(x1614/x1615))<<x1616);

    if (t18 != 8128) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x1698 = 5;
	volatile int8_t x1699 = INT8_MIN;
	uint16_t x1700 = 12U;
	volatile uint32_t t19 = 22496195U;

    t19 = ((x1697<<(x1698/x1699))<<x1700);

    if (t19 != 4294963200U) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint16_t x1705 = 19U;
	uint8_t x1706 = UINT8_MAX;
	static int64_t x1707 = INT64_MAX;
	volatile int32_t x1708 = 12;
	volatile int32_t t20 = 7;

    t20 = ((x1705<<(x1706/x1707))<<x1708);

    if (t20 != 77824) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint64_t x1965 = 69124LLU;
	int8_t x1966 = -5;
	uint16_t x1967 = 414U;
	volatile uint8_t x1968 = 2U;

    t21 = ((x1965<<(x1966/x1967))<<x1968);

    if (t21 != 276496LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x2125 = 7;
	volatile uint8_t x2128 = 1U;

    t22 = ((x2125<<(x2126/x2127))<<x2128);

    if (t22 != 14) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x2213 = UINT8_MAX;
	volatile int64_t x2215 = 12LL;
	int32_t x2216 = 16;
	volatile int32_t t23 = -77;

    t23 = ((x2213<<(x2214/x2215))<<x2216);

    if (t23 != 33423360) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x2257 = 9U;
	volatile int8_t x2258 = -1;
	volatile int8_t x2259 = -1;
	uint8_t x2260 = 3U;
	volatile int32_t t24 = -191;

    t24 = ((x2257<<(x2258/x2259))<<x2260);

    if (t24 != 144) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint16_t x2401 = 2U;
	volatile int8_t x2402 = -2;
	static int64_t x2403 = INT64_MIN;
	volatile int32_t t25 = 144965965;

    t25 = ((x2401<<(x2402/x2403))<<x2404);

    if (t25 != 2) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x2442 = -809;
	int64_t x2443 = INT64_MIN;
	int64_t x2444 = 1LL;
	static volatile int32_t t26 = 235035628;

    t26 = ((x2441<<(x2442/x2443))<<x2444);

    if (t26 != 2) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint64_t x2465 = 45440267LLU;
	volatile int8_t x2466 = -2;
	int8_t x2467 = -1;
	uint32_t x2468 = 32U;
	static uint64_t t27 = 1256450722969660657LLU;

    t27 = ((x2465<<(x2466/x2467))<<x2468);

    if (t27 != 780657842746032128LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint32_t x2489 = 1654159470U;
	int16_t x2491 = INT16_MIN;
	uint8_t x2492 = 4U;
	static volatile uint32_t t28 = 3641U;

    t28 = ((x2489<<(x2490/x2491))<<x2492);

    if (t28 != 696747744U) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x2553 = 3042;
	static int64_t x2554 = -1LL;
	static volatile uint32_t x2555 = 316288991U;
	int64_t x2556 = 6LL;
	int32_t t29 = -440632;

    t29 = ((x2553<<(x2554/x2555))<<x2556);

    if (t29 != 194688) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x2686 = 2U;
	int16_t x2687 = INT16_MIN;
	uint64_t x2688 = 13LLU;
	volatile int64_t t30 = 90LL;

    t30 = ((x2685<<(x2686/x2687))<<x2688);

    if (t30 != 425984LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x2697 = 819U;
	int32_t x2698 = INT32_MIN;
	static int64_t x2699 = INT64_MIN;
	static int8_t x2700 = 30;
	static uint32_t t31 = 28212492U;

    t31 = ((x2697<<(x2698/x2699))<<x2700);

    if (t31 != 3221225472U) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x2718 = 1LL;
	uint32_t x2720 = 2U;

    t32 = ((x2717<<(x2718/x2719))<<x2720);

    if (t32 != 12) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x3033 = 10448122400295909LLU;
	uint16_t x3034 = 0U;
	int16_t x3035 = -1;
	volatile uint8_t x3036 = 1U;
	volatile uint64_t t33 = 33897502341LLU;

    t33 = ((x3033<<(x3034/x3035))<<x3036);

    if (t33 != 20896244800591818LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x3053 = 9U;
	uint16_t x3054 = UINT16_MAX;
	static int32_t x3055 = 40520646;
	static uint8_t x3056 = 20U;
	volatile uint32_t t34 = 1065U;

    t34 = ((x3053<<(x3054/x3055))<<x3056);

    if (t34 != 9437184U) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x3147 = UINT32_MAX;
	volatile uint16_t x3148 = 1U;
	static int32_t t35 = 13380;

    t35 = ((x3145<<(x3146/x3147))<<x3148);

    if (t35 != 254) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x3453 = 1489600861U;
	static volatile int8_t x3454 = INT8_MAX;
	uint16_t x3455 = UINT16_MAX;
	int8_t x3456 = 19;
	volatile uint32_t t36 = 21417U;

    t36 = ((x3453<<(x3454/x3455))<<x3456);

    if (t36 != 182976512U) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint16_t x3605 = 2134U;
	int64_t x3606 = -1LL;
	uint8_t x3607 = UINT8_MAX;
	uint8_t x3608 = 5U;

    t37 = ((x3605<<(x3606/x3607))<<x3608);

    if (t37 != 68288) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x3642 = 0;
	uint8_t x3643 = UINT8_MAX;
	volatile int8_t x3644 = 9;

    t38 = ((x3641<<(x3642/x3643))<<x3644);

    if (t38 != 130560) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x4022 = -3;
	static volatile uint8_t x4023 = 6U;
	volatile int32_t t39 = -2515;

    t39 = ((x4021<<(x4022/x4023))<<x4024);

    if (t39 != 1020) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint8_t x4025 = UINT8_MAX;
	int32_t x4026 = INT32_MAX;
	int32_t t40 = -7;

    t40 = ((x4025<<(x4026/x4027))<<x4028);

    if (t40 != 4080) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint64_t x4061 = UINT64_MAX;
	int16_t x4062 = INT16_MIN;
	uint8_t x4064 = 0U;
	uint64_t t41 = UINT64_MAX;

    t41 = ((x4061<<(x4062/x4063))<<x4064);

    if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x4205 = INT8_MAX;
	static uint64_t x4206 = 168848741274353089LLU;
	uint64_t x4207 = 571343776739258291LLU;
	static int32_t t42 = -5;

    t42 = ((x4205<<(x4206/x4207))<<x4208);

    if (t42 != 254) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x4210 = INT32_MIN;
	static volatile uint32_t x4211 = UINT32_MAX;
	volatile int8_t x4212 = 4;
	volatile int64_t t43 = 245515193427LL;

    t43 = ((x4209<<(x4210/x4211))<<x4212);

    if (t43 != 689920LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x4309 = INT16_MAX;
	int32_t t44 = 13592849;

    t44 = ((x4309<<(x4310/x4311))<<x4312);

    if (t44 != 4194176) { NG(); } else { ; }
	
}

void f45(void) {
    	static int64_t x4429 = 13003192511LL;
	int32_t x4430 = INT32_MIN;
	int64_t t45 = -2666775747472LL;

    t45 = ((x4429<<(x4430/x4431))<<x4432);

    if (t45 != 1664408641408LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x4445 = INT16_MAX;
	volatile int64_t x4446 = -1LL;
	int16_t x4447 = INT16_MIN;
	static volatile int32_t t46 = -2;

    t46 = ((x4445<<(x4446/x4447))<<x4448);

    if (t46 != 32767) { NG(); } else { ; }
	
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


    return 0;
}

