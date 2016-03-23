
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

volatile int32_t x31 = INT32_MIN;
int8_t x420 = 12;
volatile int16_t x505 = 4936;
int64_t x506 = 61LL;
int32_t x507 = -1;
static volatile int16_t x756 = 14;
static int64_t x782 = -3948141631027786LL;
int8_t x783 = INT8_MIN;
volatile uint32_t t7 = 2U;
volatile uint64_t t9 = 12588853208LLU;
volatile int64_t t10 = 1LL;
volatile uint8_t x1113 = 31U;
int32_t t12 = 9879819;
int8_t x1502 = -1;
static uint16_t x1504 = 3U;
int8_t x1610 = INT8_MIN;
uint32_t t17 = 473145U;
static int8_t x1707 = -7;
uint8_t x1853 = 2U;
int64_t x1855 = -21LL;
static uint32_t x1939 = UINT32_MAX;
int8_t x1995 = INT8_MIN;
int8_t x2056 = 0;
int64_t x2363 = INT64_MIN;
uint8_t x2364 = 11U;
volatile int32_t t25 = -39862;
int64_t x2402 = INT64_MAX;
int16_t x2404 = 1;
static volatile int16_t x2412 = 3;
uint32_t x2475 = 33768927U;
static int32_t t29 = 1;
int16_t x2565 = INT16_MAX;
static uint8_t x2640 = 2U;
volatile int32_t t33 = -1887;
uint16_t x2683 = 0U;
int32_t t35 = 181032021;
uint8_t x2832 = 8U;
int64_t t36 = 5284782LL;
int16_t x2971 = -448;
int16_t x2988 = 1;
volatile int32_t t39 = 1108;
volatile uint16_t x3092 = 0U;
volatile int32_t x3162 = INT32_MIN;
int32_t t43 = -3;
uint32_t x3229 = 7009U;
int64_t x3239 = INT64_MAX;
int32_t x3266 = INT32_MIN;
int32_t t46 = -62;
int16_t x3802 = -1;
int16_t x3804 = 50;
int8_t x3829 = 1;
volatile int32_t t50 = 1572707;
int32_t x3924 = 5;
int32_t x4050 = INT32_MIN;
uint16_t x4207 = UINT16_MAX;
uint16_t x4373 = 19U;
uint8_t x4376 = 6U;
static volatile int8_t x4520 = 6;
uint32_t x4565 = 869U;
int32_t x4566 = -1;
uint8_t x4567 = 0U;
static uint8_t x4568 = 13U;
uint32_t t61 = 7998599U;
volatile int16_t x4651 = INT16_MIN;
uint8_t x4655 = 7U;
int32_t t63 = 1024661578;
volatile uint16_t x4914 = 4U;
static int32_t t64 = -180196454;
int32_t x4918 = INT32_MIN;
volatile int32_t x4919 = -1;
uint16_t x4951 = 7377U;
int32_t t66 = 3;
volatile int16_t x5160 = 5;
volatile int32_t t68 = 722;
volatile uint32_t x5357 = UINT32_MAX;
uint64_t t71 = 12309544204LLU;
static int64_t x5542 = 4770642LL;
volatile uint8_t x5544 = 13U;
int64_t x6049 = 43602972089LL;
uint64_t x6109 = UINT64_MAX;
static uint64_t t80 = 625071635418308693LLU;
uint16_t x6224 = 5U;
volatile uint32_t x6250 = 245135U;
static uint32_t x6251 = 832967806U;
int32_t x6286 = 39215;
static int32_t x6361 = 1375;
volatile uint64_t t85 = UINT64_MAX;
uint64_t x6385 = 366418906901LLU;
static uint16_t x6448 = 17U;
volatile uint16_t x6470 = 1U;
volatile uint64_t x6471 = 10LLU;
int64_t t88 = -222LL;
int64_t x6506 = -3955339LL;
volatile int64_t x6595 = -1LL;
uint8_t x6616 = 54U;
uint16_t x6785 = 3491U;
uint64_t x6787 = 1512046LLU;
int16_t x6788 = 6;
volatile uint8_t x6802 = UINT8_MAX;
int32_t t97 = -111;
int8_t x7041 = 1;
int8_t x7043 = INT8_MAX;
int32_t t100 = 1807706;
uint64_t x7122 = 148002974719427LLU;
static volatile int32_t x7124 = 7;
int8_t x7234 = 1;
volatile int8_t x7265 = INT8_MAX;
volatile uint8_t x7266 = 10U;
static int16_t x7358 = -1278;
int8_t x7460 = 3;
static uint32_t t108 = 72229U;
static int8_t x7650 = 2;
static uint8_t x7652 = 14U;
static uint8_t x7654 = 8U;
int64_t x7785 = 979556771607771LL;
int32_t x7788 = 5;
uint16_t x7806 = 27846U;
static int8_t x7810 = INT8_MIN;
int16_t x7811 = INT16_MAX;
static int32_t x7851 = 3;
volatile uint64_t t119 = 50981176946934LLU;
uint32_t x8009 = UINT32_MAX;
uint32_t t120 = 8U;
volatile int32_t t121 = -18916239;
volatile int32_t x8058 = INT32_MAX;
static uint64_t x8059 = UINT64_MAX;
volatile int64_t t122 = INT64_MAX;
uint8_t x8120 = 0U;
volatile int16_t x8194 = INT16_MAX;
volatile uint32_t t128 = 582U;
volatile int32_t x8598 = INT32_MIN;
uint32_t x8599 = 3142U;
uint8_t x8600 = 0U;
static uint8_t x8629 = 1U;
static int8_t x8630 = INT8_MAX;
volatile int32_t t130 = 1941;
int32_t t131 = -267;
int32_t x8730 = -1908905;
static int8_t x8879 = -1;
int32_t x8929 = 2279;
static int64_t x8931 = INT64_MAX;
uint8_t x8932 = 6U;
volatile uint64_t x8988 = 20LLU;
static int32_t t136 = -38503048;
uint32_t x9189 = 210255418U;
static int32_t x9190 = INT32_MAX;
uint16_t x9192 = 15U;
volatile int32_t t141 = 4174439;
int32_t t142 = 13509;
int16_t x9314 = INT16_MIN;
uint16_t x9414 = 53U;
int32_t x9415 = INT32_MAX;
volatile int32_t t146 = 1;
uint16_t x9419 = 34U;
int32_t x9420 = 0;
uint8_t x9572 = 3U;
int32_t t149 = -5860533;
static uint64_t t150 = 3002135LLU;
int64_t x9756 = 5LL;
static uint16_t x9834 = UINT16_MAX;
uint64_t t154 = UINT64_MAX;
int8_t x9883 = 57;
static uint16_t x10071 = 4497U;
static uint8_t x10072 = 14U;
static uint8_t x10088 = 1U;
int8_t x10108 = 0;
uint32_t x10189 = 336U;
int64_t x10190 = -1LL;
uint8_t x10192 = 24U;
volatile uint8_t x10208 = 1U;
uint32_t x10299 = UINT32_MAX;
static int8_t x10332 = 0;
uint32_t x10373 = UINT32_MAX;
int8_t x10562 = -6;
uint16_t x10564 = 54U;
static int32_t x10707 = INT32_MAX;
volatile uint16_t x10715 = UINT16_MAX;
static int64_t x10755 = -1LL;
static volatile uint32_t t172 = 132U;
volatile uint32_t t175 = 10811U;
volatile int16_t x11035 = INT16_MAX;
uint64_t x11082 = UINT64_MAX;
volatile int32_t t177 = 509;
uint8_t x11085 = 2U;
volatile int32_t x11198 = INT32_MIN;
int8_t x11272 = 2;
uint8_t x11344 = 26U;
volatile int32_t t182 = -144237282;
static volatile int8_t x11374 = INT8_MIN;
volatile int32_t x11598 = INT32_MAX;
int32_t x11731 = INT32_MAX;
volatile int8_t x11900 = 57;
volatile int16_t x11910 = 0;
volatile uint32_t x12029 = 12689U;
int8_t x12032 = 7;
static uint8_t x12061 = 11U;
int16_t x12153 = INT16_MAX;
uint8_t x12156 = 6U;
uint32_t x12476 = 1U;


void f0(void) {
    	uint64_t x29 = 125LLU;
	volatile int8_t x30 = INT8_MIN;
	uint8_t x32 = 17U;
	static volatile uint64_t t0 = 27LLU;

    t0 = ((x29-(x30>x31))<<x32);

    if (t0 != 16252928LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint32_t x417 = 176758U;
	int8_t x418 = INT8_MIN;
	volatile uint32_t x419 = 34574599U;
	volatile uint32_t t1 = 126468403U;

    t1 = ((x417-(x418>x419))<<x420);

    if (t1 != 723996672U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x508 = 11U;
	int32_t t2 = -39;

    t2 = ((x505-(x506>x507))<<x508);

    if (t2 != 10106880) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint8_t x749 = 1U;
	int32_t x750 = INT32_MAX;
	volatile uint64_t x751 = 394606034482966LLU;
	uint8_t x752 = 1U;
	volatile int32_t t3 = 52655;

    t3 = ((x749-(x750>x751))<<x752);

    if (t3 != 2) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint32_t x753 = 548720U;
	int16_t x754 = INT16_MAX;
	uint64_t x755 = 500LLU;
	uint32_t t4 = 613947042U;

    t4 = ((x753-(x754>x755))<<x756);

    if (t4 != 400277504U) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint8_t x781 = UINT8_MAX;
	uint16_t x784 = 22U;
	static volatile int32_t t5 = 13;

    t5 = ((x781-(x782>x783))<<x784);

    if (t5 != 1069547520) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x793 = 6806132U;
	volatile int64_t x794 = -174923996976542293LL;
	int8_t x795 = INT8_MIN;
	volatile uint8_t x796 = 29U;
	volatile uint32_t t6 = 142U;

    t6 = ((x793-(x794>x795))<<x796);

    if (t6 != 2147483648U) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint32_t x833 = UINT32_MAX;
	int32_t x834 = 84;
	static int32_t x835 = INT32_MIN;
	volatile int8_t x836 = 25;

    t7 = ((x833-(x834>x835))<<x836);

    if (t7 != 4227858432U) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x985 = INT64_MAX;
	int16_t x986 = INT16_MIN;
	int32_t x987 = -119943;
	int8_t x988 = 0;
	volatile int64_t t8 = -57160283683700LL;

    t8 = ((x985-(x986>x987))<<x988);

    if (t8 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x1021 = UINT64_MAX;
	static int32_t x1022 = INT32_MIN;
	uint16_t x1023 = UINT16_MAX;
	uint8_t x1024 = 3U;

    t9 = ((x1021-(x1022>x1023))<<x1024);

    if (t9 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x1093 = 10LL;
	static uint16_t x1094 = 25226U;
	static uint64_t x1095 = 332464440800650387LLU;
	static int64_t x1096 = 0LL;

    t10 = ((x1093-(x1094>x1095))<<x1096);

    if (t10 != 10LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static int32_t x1114 = INT32_MIN;
	int64_t x1115 = INT64_MAX;
	uint16_t x1116 = 0U;
	static int32_t t11 = -11092;

    t11 = ((x1113-(x1114>x1115))<<x1116);

    if (t11 != 31) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x1209 = 1;
	int64_t x1210 = INT64_MIN;
	uint32_t x1211 = UINT32_MAX;
	int16_t x1212 = 4;

    t12 = ((x1209-(x1210>x1211))<<x1212);

    if (t12 != 16) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x1381 = INT64_MAX;
	int16_t x1382 = INT16_MAX;
	uint8_t x1383 = UINT8_MAX;
	static int32_t x1384 = 0;
	int64_t t13 = 87351770460946LL;

    t13 = ((x1381-(x1382>x1383))<<x1384);

    if (t13 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x1501 = 21134U;
	int16_t x1503 = INT16_MIN;
	static int32_t t14 = -568;

    t14 = ((x1501-(x1502>x1503))<<x1504);

    if (t14 != 169064) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x1557 = INT8_MAX;
	volatile int16_t x1558 = -3;
	uint64_t x1559 = 1625397103018LLU;
	uint16_t x1560 = 3U;
	int32_t t15 = 901020;

    t15 = ((x1557-(x1558>x1559))<<x1560);

    if (t15 != 1008) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile uint16_t x1585 = UINT16_MAX;
	int8_t x1586 = -1;
	int16_t x1587 = -2237;
	uint16_t x1588 = 2U;
	volatile int32_t t16 = 1;

    t16 = ((x1585-(x1586>x1587))<<x1588);

    if (t16 != 262136) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x1609 = 8137643U;
	int16_t x1611 = INT16_MIN;
	volatile int8_t x1612 = 4;

    t17 = ((x1609-(x1610>x1611))<<x1612);

    if (t17 != 130202272U) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x1705 = UINT64_MAX;
	int16_t x1706 = INT16_MIN;
	volatile uint8_t x1708 = 10U;
	volatile uint64_t t18 = 450178778514954LLU;

    t18 = ((x1705-(x1706>x1707))<<x1708);

    if (t18 != 18446744073709550592LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x1854 = -1;
	int8_t x1856 = 7;
	volatile int32_t t19 = -188532;

    t19 = ((x1853-(x1854>x1855))<<x1856);

    if (t19 != 128) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x1937 = 390U;
	int8_t x1938 = INT8_MIN;
	uint8_t x1940 = 18U;
	volatile int32_t t20 = -23670;

    t20 = ((x1937-(x1938>x1939))<<x1940);

    if (t20 != 102236160) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x1993 = 15U;
	static uint64_t x1994 = UINT64_MAX;
	int64_t x1996 = 0LL;
	int32_t t21 = 596985701;

    t21 = ((x1993-(x1994>x1995))<<x1996);

    if (t21 != 14) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x2053 = 31;
	volatile int64_t x2054 = -56039959LL;
	int32_t x2055 = INT32_MAX;
	int32_t t22 = -1065;

    t22 = ((x2053-(x2054>x2055))<<x2056);

    if (t22 != 31) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint64_t x2117 = UINT64_MAX;
	int64_t x2118 = INT64_MAX;
	volatile int8_t x2119 = 1;
	volatile int16_t x2120 = 9;
	static uint64_t t23 = 28359506LLU;

    t23 = ((x2117-(x2118>x2119))<<x2120);

    if (t23 != 18446744073709550592LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x2121 = 19U;
	uint64_t x2122 = UINT64_MAX;
	int64_t x2123 = -3051911LL;
	uint8_t x2124 = 20U;
	volatile int32_t t24 = 124;

    t24 = ((x2121-(x2122>x2123))<<x2124);

    if (t24 != 18874368) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x2361 = UINT8_MAX;
	static int32_t x2362 = INT32_MIN;

    t25 = ((x2361-(x2362>x2363))<<x2364);

    if (t25 != 520192) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x2401 = 55U;
	uint8_t x2403 = UINT8_MAX;
	volatile int32_t t26 = 4877;

    t26 = ((x2401-(x2402>x2403))<<x2404);

    if (t26 != 108) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x2409 = 14352800397611LL;
	static int16_t x2410 = INT16_MIN;
	int32_t x2411 = -2;
	int64_t t27 = -1669561863910973LL;

    t27 = ((x2409-(x2410>x2411))<<x2412);

    if (t27 != 114822403180888LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x2437 = UINT32_MAX;
	int16_t x2438 = -5308;
	int8_t x2439 = INT8_MIN;
	static int8_t x2440 = 4;
	uint32_t t28 = 36U;

    t28 = ((x2437-(x2438>x2439))<<x2440);

    if (t28 != 4294967280U) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x2473 = UINT16_MAX;
	uint64_t x2474 = 3608834507643983LLU;
	uint8_t x2476 = 0U;

    t29 = ((x2473-(x2474>x2475))<<x2476);

    if (t29 != 65534) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint64_t x2501 = UINT64_MAX;
	int64_t x2502 = INT64_MIN;
	int16_t x2503 = INT16_MIN;
	uint8_t x2504 = 5U;
	static uint64_t t30 = 1446059165809481LLU;

    t30 = ((x2501-(x2502>x2503))<<x2504);

    if (t30 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint16_t x2533 = UINT16_MAX;
	int8_t x2534 = INT8_MIN;
	static int64_t x2535 = -387865059LL;
	uint32_t x2536 = 5U;
	volatile int32_t t31 = -8904;

    t31 = ((x2533-(x2534>x2535))<<x2536);

    if (t31 != 2097088) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x2566 = -38657704607011783LL;
	int64_t x2567 = 196684018LL;
	uint8_t x2568 = 13U;
	int32_t t32 = -3920533;

    t32 = ((x2565-(x2566>x2567))<<x2568);

    if (t32 != 268427264) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x2637 = INT16_MAX;
	uint32_t x2638 = 945490U;
	static int8_t x2639 = INT8_MIN;

    t33 = ((x2637-(x2638>x2639))<<x2640);

    if (t33 != 131068) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x2681 = 3U;
	int64_t x2682 = INT64_MIN;
	uint16_t x2684 = 2U;
	volatile int32_t t34 = -1;

    t34 = ((x2681-(x2682>x2683))<<x2684);

    if (t34 != 12) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint8_t x2701 = 11U;
	int8_t x2702 = INT8_MAX;
	int8_t x2703 = -5;
	static volatile int8_t x2704 = 0;

    t35 = ((x2701-(x2702>x2703))<<x2704);

    if (t35 != 10) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x2829 = 0LL;
	int64_t x2830 = INT64_MIN;
	uint32_t x2831 = UINT32_MAX;

    t36 = ((x2829-(x2830>x2831))<<x2832);

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x2861 = INT8_MAX;
	int16_t x2862 = -1;
	static int8_t x2863 = -30;
	static int8_t x2864 = 1;
	static volatile int32_t t37 = -29;

    t37 = ((x2861-(x2862>x2863))<<x2864);

    if (t37 != 252) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x2969 = INT32_MAX;
	int32_t x2970 = -1;
	int16_t x2972 = 0;
	int32_t t38 = -230;

    t38 = ((x2969-(x2970>x2971))<<x2972);

    if (t38 != 2147483646) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x2985 = 41;
	uint8_t x2986 = 15U;
	uint8_t x2987 = 43U;

    t39 = ((x2985-(x2986>x2987))<<x2988);

    if (t39 != 82) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint64_t x3089 = 2314094LLU;
	uint32_t x3090 = UINT32_MAX;
	static int16_t x3091 = 321;
	volatile uint64_t t40 = 221420689122070128LLU;

    t40 = ((x3089-(x3090>x3091))<<x3092);

    if (t40 != 2314093LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x3125 = 1U;
	int32_t x3126 = INT32_MAX;
	uint8_t x3127 = 30U;
	uint16_t x3128 = 25U;
	int32_t t41 = 0;

    t41 = ((x3125-(x3126>x3127))<<x3128);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile int8_t x3161 = 33;
	volatile int32_t x3163 = -1;
	uint8_t x3164 = 3U;
	volatile int32_t t42 = 645;

    t42 = ((x3161-(x3162>x3163))<<x3164);

    if (t42 != 264) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x3181 = UINT8_MAX;
	volatile int8_t x3182 = 1;
	static int32_t x3183 = INT32_MIN;
	int8_t x3184 = 0;

    t43 = ((x3181-(x3182>x3183))<<x3184);

    if (t43 != 254) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x3230 = -1;
	uint16_t x3231 = 1U;
	int16_t x3232 = 6;
	volatile uint32_t t44 = 255483U;

    t44 = ((x3229-(x3230>x3231))<<x3232);

    if (t44 != 448576U) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x3237 = 8147;
	int64_t x3238 = INT64_MAX;
	int16_t x3240 = 1;
	int32_t t45 = -52710;

    t45 = ((x3237-(x3238>x3239))<<x3240);

    if (t45 != 16294) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x3265 = INT8_MAX;
	uint32_t x3267 = UINT32_MAX;
	uint16_t x3268 = 1U;

    t46 = ((x3265-(x3266>x3267))<<x3268);

    if (t46 != 254) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x3389 = INT8_MAX;
	volatile uint16_t x3390 = 3143U;
	static int32_t x3391 = INT32_MIN;
	volatile int32_t x3392 = 1;
	int32_t t47 = 0;

    t47 = ((x3389-(x3390>x3391))<<x3392);

    if (t47 != 252) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x3609 = 24624718LLU;
	int32_t x3610 = INT32_MIN;
	static uint16_t x3611 = 376U;
	int8_t x3612 = 13;
	volatile uint64_t t48 = 1871877LLU;

    t48 = ((x3609-(x3610>x3611))<<x3612);

    if (t48 != 201725689856LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x3801 = 1439529589LLU;
	int8_t x3803 = INT8_MIN;
	volatile uint64_t t49 = 8549932LLU;

    t49 = ((x3801-(x3802>x3803))<<x3804);

    if (t49 != 16847966205993025536LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x3830 = INT64_MIN;
	uint64_t x3831 = 27170777372390LLU;
	uint8_t x3832 = 9U;

    t50 = ((x3829-(x3830>x3831))<<x3832);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x3873 = INT32_MAX;
	int32_t x3874 = 0;
	volatile int64_t x3875 = INT64_MIN;
	uint16_t x3876 = 0U;
	int32_t t51 = 14235;

    t51 = ((x3873-(x3874>x3875))<<x3876);

    if (t51 != 2147483646) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint64_t x3881 = UINT64_MAX;
	static int8_t x3882 = -1;
	int16_t x3883 = 3968;
	static uint16_t x3884 = 7U;
	static uint64_t t52 = 118504355659106302LLU;

    t52 = ((x3881-(x3882>x3883))<<x3884);

    if (t52 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x3921 = 40U;
	volatile int16_t x3922 = INT16_MIN;
	volatile int64_t x3923 = INT64_MIN;
	volatile int32_t t53 = 6369879;

    t53 = ((x3921-(x3922>x3923))<<x3924);

    if (t53 != 1248) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x4049 = INT8_MAX;
	static int8_t x4051 = -1;
	int8_t x4052 = 23;
	static volatile int32_t t54 = -6177;

    t54 = ((x4049-(x4050>x4051))<<x4052);

    if (t54 != 1065353216) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x4089 = 143087745707LL;
	static volatile int8_t x4090 = INT8_MIN;
	int8_t x4091 = 13;
	volatile uint8_t x4092 = 5U;
	int64_t t55 = 1052269719822447611LL;

    t55 = ((x4089-(x4090>x4091))<<x4092);

    if (t55 != 4578807862624LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint8_t x4205 = UINT8_MAX;
	int8_t x4206 = -1;
	volatile uint8_t x4208 = 6U;
	int32_t t56 = -81433;

    t56 = ((x4205-(x4206>x4207))<<x4208);

    if (t56 != 16320) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int32_t x4269 = INT32_MAX;
	uint16_t x4270 = UINT16_MAX;
	volatile uint16_t x4271 = 19362U;
	uint16_t x4272 = 0U;
	int32_t t57 = 8731098;

    t57 = ((x4269-(x4270>x4271))<<x4272);

    if (t57 != 2147483646) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x4277 = 15U;
	int64_t x4278 = INT64_MIN;
	int32_t x4279 = INT32_MIN;
	static volatile uint64_t x4280 = 15LLU;
	volatile uint32_t t58 = 18511U;

    t58 = ((x4277-(x4278>x4279))<<x4280);

    if (t58 != 491520U) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x4374 = 51U;
	int64_t x4375 = INT64_MAX;
	int32_t t59 = 22;

    t59 = ((x4373-(x4374>x4375))<<x4376);

    if (t59 != 1216) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x4517 = 50;
	static uint16_t x4518 = UINT16_MAX;
	static uint16_t x4519 = 14882U;
	int32_t t60 = -1;

    t60 = ((x4517-(x4518>x4519))<<x4520);

    if (t60 != 3136) { NG(); } else { ; }
	
}

void f61(void) {
    

    t61 = ((x4565-(x4566>x4567))<<x4568);

    if (t61 != 7118848U) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint16_t x4649 = 107U;
	volatile int8_t x4650 = INT8_MAX;
	uint16_t x4652 = 2U;
	int32_t t62 = -1;

    t62 = ((x4649-(x4650>x4651))<<x4652);

    if (t62 != 424) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x4653 = 71U;
	uint16_t x4654 = 6U;
	static uint8_t x4656 = 6U;

    t63 = ((x4653-(x4654>x4655))<<x4656);

    if (t63 != 4544) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint16_t x4913 = 107U;
	int16_t x4915 = 0;
	uint8_t x4916 = 7U;

    t64 = ((x4913-(x4914>x4915))<<x4916);

    if (t64 != 13568) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint16_t x4917 = 773U;
	uint8_t x4920 = 3U;
	volatile int32_t t65 = 80142;

    t65 = ((x4917-(x4918>x4919))<<x4920);

    if (t65 != 6184) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x4949 = 1U;
	int16_t x4950 = -1;
	static int16_t x4952 = 1;

    t66 = ((x4949-(x4950>x4951))<<x4952);

    if (t66 != 2) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x5113 = INT8_MAX;
	static int16_t x5114 = -1;
	uint32_t x5115 = UINT32_MAX;
	uint8_t x5116 = 1U;
	int32_t t67 = 2;

    t67 = ((x5113-(x5114>x5115))<<x5116);

    if (t67 != 254) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x5157 = INT8_MAX;
	static volatile int32_t x5158 = 340;
	uint64_t x5159 = 782762482894LLU;

    t68 = ((x5157-(x5158>x5159))<<x5160);

    if (t68 != 4064) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint64_t x5325 = 2LLU;
	volatile int16_t x5326 = INT16_MIN;
	int16_t x5327 = INT16_MAX;
	uint32_t x5328 = 1U;
	uint64_t t69 = 1117552003LLU;

    t69 = ((x5325-(x5326>x5327))<<x5328);

    if (t69 != 4LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x5358 = INT64_MIN;
	int8_t x5359 = -1;
	int8_t x5360 = 0;
	volatile uint32_t t70 = UINT32_MAX;

    t70 = ((x5357-(x5358>x5359))<<x5360);

    if (t70 != UINT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint64_t x5533 = UINT64_MAX;
	volatile int32_t x5534 = INT32_MIN;
	static uint16_t x5535 = 89U;
	uint16_t x5536 = 15U;

    t71 = ((x5533-(x5534>x5535))<<x5536);

    if (t71 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint32_t x5541 = 948U;
	int16_t x5543 = INT16_MAX;
	uint32_t t72 = 249680304U;

    t72 = ((x5541-(x5542>x5543))<<x5544);

    if (t72 != 7757824U) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x5585 = 28LL;
	int32_t x5586 = 1854;
	uint64_t x5587 = UINT64_MAX;
	int8_t x5588 = 1;
	static volatile int64_t t73 = -53941890572851LL;

    t73 = ((x5585-(x5586>x5587))<<x5588);

    if (t73 != 56LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x5597 = INT8_MAX;
	volatile int64_t x5598 = INT64_MIN;
	uint64_t x5599 = 3870861110LLU;
	uint8_t x5600 = 15U;
	volatile int32_t t74 = 16762;

    t74 = ((x5597-(x5598>x5599))<<x5600);

    if (t74 != 4128768) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x5617 = 30U;
	static int64_t x5618 = -24452657456687026LL;
	int32_t x5619 = INT32_MIN;
	int8_t x5620 = 3;
	int32_t t75 = -11770922;

    t75 = ((x5617-(x5618>x5619))<<x5620);

    if (t75 != 240) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x5621 = INT16_MAX;
	int8_t x5622 = INT8_MIN;
	volatile int64_t x5623 = 1053772344579081604LL;
	volatile uint16_t x5624 = 1U;
	volatile int32_t t76 = 5796;

    t76 = ((x5621-(x5622>x5623))<<x5624);

    if (t76 != 65534) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x5681 = UINT8_MAX;
	volatile uint64_t x5682 = UINT64_MAX;
	static uint32_t x5683 = 3828213U;
	uint8_t x5684 = 10U;
	static volatile int32_t t77 = -39;

    t77 = ((x5681-(x5682>x5683))<<x5684);

    if (t77 != 260096) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint8_t x5957 = UINT8_MAX;
	int16_t x5958 = INT16_MAX;
	uint64_t x5959 = 174687422LLU;
	uint16_t x5960 = 1U;
	volatile int32_t t78 = 713699317;

    t78 = ((x5957-(x5958>x5959))<<x5960);

    if (t78 != 510) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int64_t x6050 = INT64_MAX;
	volatile int16_t x6051 = -1;
	uint8_t x6052 = 3U;
	volatile int64_t t79 = -176085235257031LL;

    t79 = ((x6049-(x6050>x6051))<<x6052);

    if (t79 != 348823776704LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint64_t x6110 = 52944093LLU;
	uint16_t x6111 = UINT16_MAX;
	volatile int8_t x6112 = 5;

    t80 = ((x6109-(x6110>x6111))<<x6112);

    if (t80 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x6221 = 30;
	uint64_t x6222 = 16421449LLU;
	static uint32_t x6223 = 8434143U;
	volatile int32_t t81 = 4103;

    t81 = ((x6221-(x6222>x6223))<<x6224);

    if (t81 != 928) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x6249 = 16;
	int32_t x6252 = 0;
	int32_t t82 = 1;

    t82 = ((x6249-(x6250>x6251))<<x6252);

    if (t82 != 16) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x6285 = 6;
	int8_t x6287 = INT8_MAX;
	uint8_t x6288 = 14U;
	volatile int32_t t83 = 78349788;

    t83 = ((x6285-(x6286>x6287))<<x6288);

    if (t83 != 81920) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint16_t x6362 = 918U;
	int16_t x6363 = INT16_MIN;
	uint8_t x6364 = 7U;
	int32_t t84 = 107;

    t84 = ((x6361-(x6362>x6363))<<x6364);

    if (t84 != 175872) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile uint64_t x6373 = UINT64_MAX;
	int64_t x6374 = INT64_MIN;
	static volatile int16_t x6375 = INT16_MIN;
	uint64_t x6376 = 0LLU;

    t85 = ((x6373-(x6374>x6375))<<x6376);

    if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x6386 = 226U;
	int16_t x6387 = INT16_MIN;
	static uint16_t x6388 = 11U;
	volatile uint64_t t86 = 530641086143425LLU;

    t86 = ((x6385-(x6386>x6387))<<x6388);

    if (t86 != 750425921333248LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x6445 = 420U;
	static uint64_t x6446 = 528388908LLU;
	static volatile int16_t x6447 = 62;
	volatile uint32_t t87 = 3U;

    t87 = ((x6445-(x6446>x6447))<<x6448);

    if (t87 != 54919168U) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x6469 = 51452LL;
	uint32_t x6472 = 40U;

    t88 = ((x6469-(x6470>x6471))<<x6472);

    if (t88 != 56572072272330752LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x6505 = 2U;
	int64_t x6507 = 20035410392293961LL;
	static int8_t x6508 = 4;
	static volatile int32_t t89 = 45612;

    t89 = ((x6505-(x6506>x6507))<<x6508);

    if (t89 != 32) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x6533 = 1U;
	static uint64_t x6534 = 221LLU;
	int32_t x6535 = INT32_MAX;
	static int32_t x6536 = 0;
	volatile int32_t t90 = -165719356;

    t90 = ((x6533-(x6534>x6535))<<x6536);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x6593 = UINT16_MAX;
	int32_t x6594 = INT32_MAX;
	int32_t x6596 = 15;
	static int32_t t91 = -175529;

    t91 = ((x6593-(x6594>x6595))<<x6596);

    if (t91 != 2147418112) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint64_t x6613 = 32LLU;
	volatile int16_t x6614 = -1;
	uint16_t x6615 = 3213U;
	static uint64_t t92 = 33380862556570933LLU;

    t92 = ((x6613-(x6614>x6615))<<x6616);

    if (t92 != 576460752303423488LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x6617 = 1;
	int64_t x6618 = -148073867067216972LL;
	int64_t x6619 = 9LL;
	uint8_t x6620 = 2U;
	volatile int32_t t93 = 1516;

    t93 = ((x6617-(x6618>x6619))<<x6620);

    if (t93 != 4) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x6673 = UINT32_MAX;
	uint64_t x6674 = 769329628564322LLU;
	uint8_t x6675 = 22U;
	uint64_t x6676 = 1LLU;
	volatile uint32_t t94 = 6U;

    t94 = ((x6673-(x6674>x6675))<<x6676);

    if (t94 != 4294967292U) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x6786 = -37;
	static volatile int32_t t95 = -861017003;

    t95 = ((x6785-(x6786>x6787))<<x6788);

    if (t95 != 223360) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x6801 = 1;
	int8_t x6803 = INT8_MIN;
	uint8_t x6804 = 12U;
	static int32_t t96 = 53657;

    t96 = ((x6801-(x6802>x6803))<<x6804);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint8_t x6945 = 13U;
	int32_t x6946 = -1;
	uint32_t x6947 = UINT32_MAX;
	int16_t x6948 = 9;

    t97 = ((x6945-(x6946>x6947))<<x6948);

    if (t97 != 6656) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint16_t x7001 = UINT16_MAX;
	uint8_t x7002 = UINT8_MAX;
	volatile uint16_t x7003 = 1018U;
	uint8_t x7004 = 3U;
	int32_t t98 = 527422;

    t98 = ((x7001-(x7002>x7003))<<x7004);

    if (t98 != 524280) { NG(); } else { ; }
	
}

void f99(void) {
    	static int64_t x7042 = 491436LL;
	static uint16_t x7044 = 0U;
	volatile int32_t t99 = -1;

    t99 = ((x7041-(x7042>x7043))<<x7044);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x7089 = INT8_MAX;
	uint16_t x7090 = UINT16_MAX;
	volatile int64_t x7091 = -40080228LL;
	uint8_t x7092 = 6U;

    t100 = ((x7089-(x7090>x7091))<<x7092);

    if (t100 != 8064) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int64_t x7101 = 20621402LL;
	int8_t x7102 = INT8_MAX;
	uint64_t x7103 = UINT64_MAX;
	volatile int8_t x7104 = 0;
	int64_t t101 = -361340LL;

    t101 = ((x7101-(x7102>x7103))<<x7104);

    if (t101 != 20621402LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x7121 = UINT32_MAX;
	int32_t x7123 = -27;
	uint32_t t102 = 1654798U;

    t102 = ((x7121-(x7122>x7123))<<x7124);

    if (t102 != 4294967168U) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x7233 = 11920841197137704LL;
	int64_t x7235 = INT64_MAX;
	uint32_t x7236 = 0U;
	static volatile int64_t t103 = 656658215530485LL;

    t103 = ((x7233-(x7234>x7235))<<x7236);

    if (t103 != 11920841197137704LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x7267 = -1LL;
	int32_t x7268 = 3;
	static volatile int32_t t104 = -7;

    t104 = ((x7265-(x7266>x7267))<<x7268);

    if (t104 != 1008) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x7357 = 2177325622176299928LL;
	volatile uint16_t x7359 = 9028U;
	uint8_t x7360 = 0U;
	volatile int64_t t105 = -13347279983264LL;

    t105 = ((x7357-(x7358>x7359))<<x7360);

    if (t105 != 2177325622176299928LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x7369 = INT16_MAX;
	static int8_t x7370 = INT8_MIN;
	static int64_t x7371 = -1043192308610LL;
	static volatile uint8_t x7372 = 3U;
	int32_t t106 = -525;

    t106 = ((x7369-(x7370>x7371))<<x7372);

    if (t106 != 262128) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint16_t x7457 = UINT16_MAX;
	uint32_t x7458 = 1910353U;
	uint8_t x7459 = UINT8_MAX;
	volatile int32_t t107 = -107500177;

    t107 = ((x7457-(x7458>x7459))<<x7460);

    if (t107 != 524272) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x7541 = 5393433U;
	uint16_t x7542 = 10U;
	uint32_t x7543 = UINT32_MAX;
	int32_t x7544 = 2;

    t108 = ((x7541-(x7542>x7543))<<x7544);

    if (t108 != 21573732U) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x7569 = UINT64_MAX;
	int16_t x7570 = INT16_MAX;
	int8_t x7571 = INT8_MIN;
	uint16_t x7572 = 8U;
	uint64_t t109 = 106026146602671023LLU;

    t109 = ((x7569-(x7570>x7571))<<x7572);

    if (t109 != 18446744073709551104LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x7577 = 7U;
	static volatile int64_t x7578 = 13160474613497182LL;
	uint32_t x7579 = 12683U;
	uint8_t x7580 = 3U;
	static int32_t t110 = -111;

    t110 = ((x7577-(x7578>x7579))<<x7580);

    if (t110 != 48) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x7649 = UINT8_MAX;
	volatile int16_t x7651 = INT16_MAX;
	int32_t t111 = 432161;

    t111 = ((x7649-(x7650>x7651))<<x7652);

    if (t111 != 4177920) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x7653 = 3U;
	volatile int8_t x7655 = INT8_MIN;
	static int16_t x7656 = 2;
	volatile int32_t t112 = 8180138;

    t112 = ((x7653-(x7654>x7655))<<x7656);

    if (t112 != 8) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x7673 = 2U;
	uint32_t x7674 = UINT32_MAX;
	int64_t x7675 = 33679174281870LL;
	uint8_t x7676 = 1U;
	int32_t t113 = 149;

    t113 = ((x7673-(x7674>x7675))<<x7676);

    if (t113 != 4) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint64_t x7733 = 252132484982LLU;
	static int8_t x7734 = -1;
	uint32_t x7735 = UINT32_MAX;
	uint8_t x7736 = 1U;
	uint64_t t114 = 71982981LLU;

    t114 = ((x7733-(x7734>x7735))<<x7736);

    if (t114 != 504264969964LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint64_t x7786 = 3660551462646LLU;
	uint64_t x7787 = UINT64_MAX;
	volatile int64_t t115 = -16462312LL;

    t115 = ((x7785-(x7786>x7787))<<x7788);

    if (t115 != 31345816691448672LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint64_t x7805 = 9LLU;
	static uint64_t x7807 = 90281548130137875LLU;
	uint16_t x7808 = 1U;
	volatile uint64_t t116 = 1LLU;

    t116 = ((x7805-(x7806>x7807))<<x7808);

    if (t116 != 18LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint8_t x7809 = 0U;
	uint8_t x7812 = 1U;
	int32_t t117 = 168;

    t117 = ((x7809-(x7810>x7811))<<x7812);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x7841 = 3U;
	uint64_t x7842 = 5100LLU;
	static int8_t x7843 = INT8_MAX;
	uint16_t x7844 = 0U;
	int32_t t118 = -15244297;

    t118 = ((x7841-(x7842>x7843))<<x7844);

    if (t118 != 2) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x7849 = 132279022151657118LLU;
	uint32_t x7850 = 816306U;
	int64_t x7852 = 0LL;

    t119 = ((x7849-(x7850>x7851))<<x7852);

    if (t119 != 132279022151657117LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint64_t x8010 = 956955888789000LLU;
	int16_t x8011 = INT16_MIN;
	static uint16_t x8012 = 3U;

    t120 = ((x8009-(x8010>x8011))<<x8012);

    if (t120 != 4294967288U) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int32_t x8013 = 25055917;
	volatile int16_t x8014 = 3345;
	int16_t x8015 = INT16_MAX;
	int16_t x8016 = 0;

    t121 = ((x8013-(x8014>x8015))<<x8016);

    if (t121 != 25055917) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x8057 = INT64_MAX;
	uint32_t x8060 = 0U;

    t122 = ((x8057-(x8058>x8059))<<x8060);

    if (t122 != INT64_MAX) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint8_t x8117 = 93U;
	static volatile uint64_t x8118 = UINT64_MAX;
	int8_t x8119 = 1;
	static volatile int32_t t123 = 41;

    t123 = ((x8117-(x8118>x8119))<<x8120);

    if (t123 != 92) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x8165 = 18U;
	static int64_t x8166 = -4792699540653066LL;
	static int64_t x8167 = INT64_MAX;
	uint8_t x8168 = 14U;
	static volatile int32_t t124 = 5888260;

    t124 = ((x8165-(x8166>x8167))<<x8168);

    if (t124 != 294912) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x8193 = 28936LLU;
	volatile int8_t x8195 = INT8_MIN;
	volatile uint8_t x8196 = 0U;
	volatile uint64_t t125 = 1567008LLU;

    t125 = ((x8193-(x8194>x8195))<<x8196);

    if (t125 != 28935LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x8205 = 141U;
	uint16_t x8206 = 0U;
	int64_t x8207 = INT64_MIN;
	uint16_t x8208 = 7U;
	int32_t t126 = -508;

    t126 = ((x8205-(x8206>x8207))<<x8208);

    if (t126 != 17920) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x8369 = 0;
	int8_t x8370 = INT8_MIN;
	uint8_t x8371 = 4U;
	uint8_t x8372 = 1U;
	int32_t t127 = -44382;

    t127 = ((x8369-(x8370>x8371))<<x8372);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x8521 = 1873U;
	volatile uint8_t x8522 = 37U;
	static volatile int64_t x8523 = 247204056146567LL;
	volatile int8_t x8524 = 14;

    t128 = ((x8521-(x8522>x8523))<<x8524);

    if (t128 != 30687232U) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int8_t x8597 = INT8_MAX;
	static volatile int32_t t129 = -37199;

    t129 = ((x8597-(x8598>x8599))<<x8600);

    if (t129 != 126) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint8_t x8631 = 0U;
	int16_t x8632 = 0;

    t130 = ((x8629-(x8630>x8631))<<x8632);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x8709 = 9442U;
	volatile uint16_t x8710 = 143U;
	uint64_t x8711 = UINT64_MAX;
	volatile int16_t x8712 = 1;

    t131 = ((x8709-(x8710>x8711))<<x8712);

    if (t131 != 18884) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x8729 = 51U;
	uint16_t x8731 = 2U;
	int8_t x8732 = 1;
	static volatile int32_t t132 = 59875;

    t132 = ((x8729-(x8730>x8731))<<x8732);

    if (t132 != 102) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint8_t x8877 = UINT8_MAX;
	int8_t x8878 = 0;
	static int16_t x8880 = 1;
	int32_t t133 = 267984890;

    t133 = ((x8877-(x8878>x8879))<<x8880);

    if (t133 != 508) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x8921 = 1;
	uint32_t x8922 = 23877U;
	volatile int32_t x8923 = 0;
	uint8_t x8924 = 1U;
	static int32_t t134 = 128935183;

    t134 = ((x8921-(x8922>x8923))<<x8924);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x8930 = 17054285410014LLU;
	int32_t t135 = 321992030;

    t135 = ((x8929-(x8930>x8931))<<x8932);

    if (t135 != 145856) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint8_t x8985 = 1U;
	int32_t x8986 = -5440716;
	volatile int32_t x8987 = -3907971;

    t136 = ((x8985-(x8986>x8987))<<x8988);

    if (t136 != 1048576) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x9041 = 1U;
	int32_t x9042 = INT32_MIN;
	int32_t x9043 = INT32_MIN;
	static int8_t x9044 = 1;
	int32_t t137 = 1;

    t137 = ((x9041-(x9042>x9043))<<x9044);

    if (t137 != 2) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x9113 = 413U;
	int16_t x9114 = INT16_MIN;
	uint16_t x9115 = 2U;
	volatile uint8_t x9116 = 10U;
	volatile int32_t t138 = 162;

    t138 = ((x9113-(x9114>x9115))<<x9116);

    if (t138 != 422912) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile uint8_t x9185 = 5U;
	int16_t x9186 = 510;
	int32_t x9187 = 2047147;
	uint8_t x9188 = 1U;
	volatile int32_t t139 = 20502;

    t139 = ((x9185-(x9186>x9187))<<x9188);

    if (t139 != 10) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x9191 = -1LL;
	uint32_t t140 = 33203133U;

    t140 = ((x9189-(x9190>x9191))<<x9192);

    if (t140 != 521961472U) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x9249 = 1;
	volatile uint64_t x9250 = 49LLU;
	uint16_t x9251 = UINT16_MAX;
	int16_t x9252 = 28;

    t141 = ((x9249-(x9250>x9251))<<x9252);

    if (t141 != 268435456) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x9261 = UINT16_MAX;
	volatile int8_t x9262 = INT8_MAX;
	uint16_t x9263 = 324U;
	static uint8_t x9264 = 13U;

    t142 = ((x9261-(x9262>x9263))<<x9264);

    if (t142 != 536862720) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x9265 = 2146481LL;
	int8_t x9266 = -2;
	int8_t x9267 = -1;
	int8_t x9268 = 0;
	static int64_t t143 = -860198LL;

    t143 = ((x9265-(x9266>x9267))<<x9268);

    if (t143 != 2146481LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x9313 = UINT32_MAX;
	volatile int8_t x9315 = -1;
	volatile int8_t x9316 = 4;
	volatile uint32_t t144 = 1886648U;

    t144 = ((x9313-(x9314>x9315))<<x9316);

    if (t144 != 4294967280U) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x9369 = 534796205;
	volatile int64_t x9370 = -409904184760928LL;
	int64_t x9371 = INT64_MIN;
	static uint8_t x9372 = 0U;
	int32_t t145 = -40;

    t145 = ((x9369-(x9370>x9371))<<x9372);

    if (t145 != 534796204) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x9413 = 94U;
	uint32_t x9416 = 0U;

    t146 = ((x9413-(x9414>x9415))<<x9416);

    if (t146 != 94) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x9417 = 44665889;
	int8_t x9418 = INT8_MAX;
	int32_t t147 = -3086;

    t147 = ((x9417-(x9418>x9419))<<x9420);

    if (t147 != 44665888) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x9469 = UINT64_MAX;
	uint8_t x9470 = UINT8_MAX;
	volatile uint8_t x9471 = 0U;
	uint32_t x9472 = 1U;
	static uint64_t t148 = 114LLU;

    t148 = ((x9469-(x9470>x9471))<<x9472);

    if (t148 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int32_t x9569 = 56571;
	volatile int64_t x9570 = 155204310565424LL;
	uint16_t x9571 = 786U;

    t149 = ((x9569-(x9570>x9571))<<x9572);

    if (t149 != 452560) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x9625 = 170LLU;
	int64_t x9626 = INT64_MAX;
	int16_t x9627 = -278;
	volatile uint64_t x9628 = 3LLU;

    t150 = ((x9625-(x9626>x9627))<<x9628);

    if (t150 != 1352LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x9753 = 1U;
	int64_t x9754 = -1LL;
	uint32_t x9755 = 14862U;
	volatile int32_t t151 = -36509;

    t151 = ((x9753-(x9754>x9755))<<x9756);

    if (t151 != 32) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x9761 = 47237350U;
	int64_t x9762 = 667724563LL;
	volatile int64_t x9763 = -1LL;
	volatile int16_t x9764 = 3;
	volatile uint32_t t152 = 1544080U;

    t152 = ((x9761-(x9762>x9763))<<x9764);

    if (t152 != 377898792U) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x9765 = 3U;
	volatile int64_t x9766 = 37LL;
	uint32_t x9767 = UINT32_MAX;
	uint16_t x9768 = 17U;
	volatile int32_t t153 = 5784090;

    t153 = ((x9765-(x9766>x9767))<<x9768);

    if (t153 != 393216) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x9833 = 0LLU;
	volatile int8_t x9835 = INT8_MIN;
	int32_t x9836 = 0;

    t154 = ((x9833-(x9834>x9835))<<x9836);

    if (t154 != UINT64_MAX) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x9881 = 7;
	int16_t x9882 = -1;
	uint8_t x9884 = 27U;
	volatile int32_t t155 = -6;

    t155 = ((x9881-(x9882>x9883))<<x9884);

    if (t155 != 939524096) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x9905 = 7102720742LLU;
	static uint64_t x9906 = 111693249963859094LLU;
	int64_t x9907 = INT64_MIN;
	uint64_t x9908 = 1LLU;
	uint64_t t156 = 2083542502261606525LLU;

    t156 = ((x9905-(x9906>x9907))<<x9908);

    if (t156 != 14205441484LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint16_t x10069 = UINT16_MAX;
	static volatile uint16_t x10070 = UINT16_MAX;
	volatile int32_t t157 = -826564;

    t157 = ((x10069-(x10070>x10071))<<x10072);

    if (t157 != 1073709056) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x10085 = 1;
	uint8_t x10086 = 2U;
	uint64_t x10087 = 554295869LLU;
	volatile int32_t t158 = -2;

    t158 = ((x10085-(x10086>x10087))<<x10088);

    if (t158 != 2) { NG(); } else { ; }
	
}

void f159(void) {
    	static int64_t x10105 = 22838392090LL;
	int64_t x10106 = INT64_MIN;
	uint8_t x10107 = 11U;
	int64_t t159 = 1433197LL;

    t159 = ((x10105-(x10106>x10107))<<x10108);

    if (t159 != 22838392090LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x10191 = INT16_MIN;
	volatile uint32_t t160 = 86472726U;

    t160 = ((x10189-(x10190>x10191))<<x10192);

    if (t160 != 1325400064U) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x10205 = INT8_MAX;
	uint16_t x10206 = 212U;
	int32_t x10207 = INT32_MIN;
	volatile int32_t t161 = 53;

    t161 = ((x10205-(x10206>x10207))<<x10208);

    if (t161 != 252) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x10297 = 14168U;
	int64_t x10298 = -12227186LL;
	static uint8_t x10300 = 1U;
	static uint32_t t162 = 10681289U;

    t162 = ((x10297-(x10298>x10299))<<x10300);

    if (t162 != 28336U) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int64_t x10329 = INT64_MAX;
	int32_t x10330 = INT32_MIN;
	int8_t x10331 = -1;
	int64_t t163 = INT64_MAX;

    t163 = ((x10329-(x10330>x10331))<<x10332);

    if (t163 != INT64_MAX) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x10345 = 5184U;
	volatile int32_t x10346 = INT32_MIN;
	volatile int16_t x10347 = -1;
	int8_t x10348 = 26;
	static uint32_t t164 = 2916441U;

    t164 = ((x10345-(x10346>x10347))<<x10348);

    if (t164 != 0U) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile uint16_t x10374 = 1U;
	volatile int64_t x10375 = -1LL;
	uint16_t x10376 = 1U;
	uint32_t t165 = 3866306U;

    t165 = ((x10373-(x10374>x10375))<<x10376);

    if (t165 != 4294967292U) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x10377 = 0;
	int32_t x10378 = INT32_MIN;
	int8_t x10379 = INT8_MIN;
	static int8_t x10380 = 3;
	volatile int32_t t166 = 53096;

    t166 = ((x10377-(x10378>x10379))<<x10380);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int32_t x10413 = 94725;
	uint8_t x10414 = 9U;
	volatile int16_t x10415 = 78;
	uint8_t x10416 = 9U;
	static int32_t t167 = 45067896;

    t167 = ((x10413-(x10414>x10415))<<x10416);

    if (t167 != 48499200) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x10445 = 15990U;
	static uint8_t x10446 = 1U;
	static volatile int64_t x10447 = INT64_MIN;
	uint32_t x10448 = 0U;
	uint32_t t168 = 1159106182U;

    t168 = ((x10445-(x10446>x10447))<<x10448);

    if (t168 != 15989U) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x10561 = 31565LLU;
	static int8_t x10563 = -1;
	uint64_t t169 = 34LLU;

    t169 = ((x10561-(x10562>x10563))<<x10564);

    if (t169 != 15222166740512276480LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x10705 = 0;
	int64_t x10706 = -1LL;
	uint32_t x10708 = 0U;
	int32_t t170 = -368846;

    t170 = ((x10705-(x10706>x10707))<<x10708);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint8_t x10713 = UINT8_MAX;
	volatile uint32_t x10714 = 4644539U;
	uint16_t x10716 = 1U;
	volatile int32_t t171 = -468671630;

    t171 = ((x10713-(x10714>x10715))<<x10716);

    if (t171 != 508) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint32_t x10753 = 35791366U;
	int32_t x10754 = INT32_MAX;
	volatile uint16_t x10756 = 13U;

    t172 = ((x10753-(x10754>x10755))<<x10756);

    if (t172 != 1145085952U) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x10837 = 29U;
	int64_t x10838 = -15424LL;
	uint64_t x10839 = UINT64_MAX;
	uint8_t x10840 = 9U;
	volatile uint32_t t173 = 3752641U;

    t173 = ((x10837-(x10838>x10839))<<x10840);

    if (t173 != 14848U) { NG(); } else { ; }
	
}

void f174(void) {
    	static int32_t x10941 = 0;
	volatile uint32_t x10942 = 30U;
	int32_t x10943 = INT32_MIN;
	static uint8_t x10944 = 1U;
	int32_t t174 = 1;

    t174 = ((x10941-(x10942>x10943))<<x10944);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x10985 = 5778425U;
	static uint8_t x10986 = 20U;
	int32_t x10987 = INT32_MIN;
	volatile uint32_t x10988 = 2U;

    t175 = ((x10985-(x10986>x10987))<<x10988);

    if (t175 != 23113696U) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x11033 = 863787LLU;
	volatile int32_t x11034 = -1;
	volatile uint16_t x11036 = 4U;
	uint64_t t176 = 7565236LLU;

    t176 = ((x11033-(x11034>x11035))<<x11036);

    if (t176 != 13820592LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x11081 = 54;
	int32_t x11083 = INT32_MAX;
	uint16_t x11084 = 0U;

    t177 = ((x11081-(x11082>x11083))<<x11084);

    if (t177 != 53) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint8_t x11086 = 5U;
	static int8_t x11087 = INT8_MIN;
	int8_t x11088 = 27;
	int32_t t178 = 32;

    t178 = ((x11085-(x11086>x11087))<<x11088);

    if (t178 != 134217728) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x11197 = 86;
	static int32_t x11199 = -1;
	int8_t x11200 = 1;
	int32_t t179 = -7934;

    t179 = ((x11197-(x11198>x11199))<<x11200);

    if (t179 != 172) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint8_t x11269 = UINT8_MAX;
	static volatile int32_t x11270 = 31;
	uint8_t x11271 = 28U;
	static int32_t t180 = -8;

    t180 = ((x11269-(x11270>x11271))<<x11272);

    if (t180 != 1016) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint64_t x11341 = UINT64_MAX;
	static uint16_t x11342 = UINT16_MAX;
	uint8_t x11343 = 4U;
	volatile uint64_t t181 = 0LLU;

    t181 = ((x11341-(x11342>x11343))<<x11344);

    if (t181 != 18446744073575333888LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x11345 = 993U;
	static int64_t x11346 = INT64_MAX;
	static int16_t x11347 = 173;
	static uint8_t x11348 = 5U;

    t182 = ((x11345-(x11346>x11347))<<x11348);

    if (t182 != 31744) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x11373 = INT32_MAX;
	int32_t x11375 = INT32_MAX;
	uint8_t x11376 = 0U;
	volatile int32_t t183 = INT32_MAX;

    t183 = ((x11373-(x11374>x11375))<<x11376);

    if (t183 != INT32_MAX) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint16_t x11497 = 5U;
	int32_t x11498 = INT32_MIN;
	int64_t x11499 = INT64_MAX;
	uint8_t x11500 = 2U;
	static volatile int32_t t184 = 59402;

    t184 = ((x11497-(x11498>x11499))<<x11500);

    if (t184 != 20) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint16_t x11513 = 3408U;
	uint8_t x11514 = 18U;
	int64_t x11515 = -1LL;
	static int8_t x11516 = 1;
	volatile int32_t t185 = 2384;

    t185 = ((x11513-(x11514>x11515))<<x11516);

    if (t185 != 6814) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x11597 = 1U;
	uint8_t x11599 = 2U;
	int64_t x11600 = 9LL;
	volatile int32_t t186 = -84;

    t186 = ((x11597-(x11598>x11599))<<x11600);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x11729 = 14U;
	volatile int16_t x11730 = INT16_MAX;
	uint8_t x11732 = 2U;
	int32_t t187 = 0;

    t187 = ((x11729-(x11730>x11731))<<x11732);

    if (t187 != 56) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x11813 = UINT8_MAX;
	int16_t x11814 = -7;
	volatile int8_t x11815 = 0;
	int8_t x11816 = 3;
	volatile int32_t t188 = 50;

    t188 = ((x11813-(x11814>x11815))<<x11816);

    if (t188 != 2040) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x11897 = UINT64_MAX;
	int32_t x11898 = INT32_MIN;
	static int16_t x11899 = INT16_MAX;
	uint64_t t189 = 2803712LLU;

    t189 = ((x11897-(x11898>x11899))<<x11900);

    if (t189 != 18302628885633695744LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	static int64_t x11909 = 216LL;
	static uint8_t x11911 = UINT8_MAX;
	static uint16_t x11912 = 5U;
	volatile int64_t t190 = 1LL;

    t190 = ((x11909-(x11910>x11911))<<x11912);

    if (t190 != 6912LL) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x12030 = -1;
	static int8_t x12031 = -1;
	static uint32_t t191 = 31595U;

    t191 = ((x12029-(x12030>x12031))<<x12032);

    if (t191 != 1624192U) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x12062 = INT16_MIN;
	int16_t x12063 = -1311;
	volatile uint8_t x12064 = 25U;
	volatile int32_t t192 = 24318;

    t192 = ((x12061-(x12062>x12063))<<x12064);

    if (t192 != 369098752) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x12089 = 795U;
	int32_t x12090 = -1;
	static uint16_t x12091 = 11598U;
	int8_t x12092 = 1;
	uint32_t t193 = 16U;

    t193 = ((x12089-(x12090>x12091))<<x12092);

    if (t193 != 1590U) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x12141 = 5875;
	static volatile int32_t x12142 = INT32_MIN;
	int16_t x12143 = -1;
	uint8_t x12144 = 1U;
	static int32_t t194 = 1373429;

    t194 = ((x12141-(x12142>x12143))<<x12144);

    if (t194 != 11750) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x12154 = INT32_MAX;
	volatile int64_t x12155 = INT64_MIN;
	int32_t t195 = -695;

    t195 = ((x12153-(x12154>x12155))<<x12156);

    if (t195 != 2097024) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x12217 = UINT64_MAX;
	volatile uint64_t x12218 = 3965LLU;
	int16_t x12219 = INT16_MIN;
	static int32_t x12220 = 3;
	static volatile uint64_t t196 = 2752110196035363LLU;

    t196 = ((x12217-(x12218>x12219))<<x12220);

    if (t196 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x12301 = UINT8_MAX;
	int32_t x12302 = -2853881;
	int16_t x12303 = INT16_MIN;
	uint16_t x12304 = 6U;
	volatile int32_t t197 = 0;

    t197 = ((x12301-(x12302>x12303))<<x12304);

    if (t197 != 16320) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x12389 = UINT32_MAX;
	volatile uint8_t x12390 = 13U;
	int8_t x12391 = -1;
	uint8_t x12392 = 13U;
	uint32_t t198 = 3U;

    t198 = ((x12389-(x12390>x12391))<<x12392);

    if (t198 != 4294950912U) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x12473 = UINT64_MAX;
	uint32_t x12474 = 38763U;
	static int32_t x12475 = INT32_MAX;
	uint64_t t199 = 533671258399LLU;

    t199 = ((x12473-(x12474>x12475))<<x12476);

    if (t199 != 18446744073709551614LLU) { NG(); } else { ; }
	
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

