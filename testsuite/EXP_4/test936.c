
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

static int32_t x1 = INT32_MAX;
int8_t x3 = 29;
static volatile int32_t t0 = -1;
uint8_t x24 = 122U;
static int8_t x35 = -20;
int64_t x186 = 55LL;
volatile int64_t t7 = -15036051LL;
uint8_t x215 = 13U;
volatile int32_t t10 = -138;
volatile int32_t x293 = 279061;
uint8_t x294 = UINT8_MAX;
volatile int32_t t15 = 6;
uint64_t x447 = UINT64_MAX;
uint32_t t18 = 6928U;
int16_t x503 = INT16_MIN;
int8_t x516 = -1;
int64_t t24 = -1LL;
static uint64_t x562 = UINT64_MAX;
int64_t x579 = -170031309150498LL;
int16_t x580 = -1;
static int64_t t27 = -775901295206LL;
static volatile uint16_t x601 = UINT16_MAX;
uint64_t x605 = 6930258449043LLU;
volatile int64_t x606 = 408LL;
uint64_t t29 = 742401LLU;
uint32_t x631 = UINT32_MAX;
static int32_t x653 = INT32_MAX;
volatile int64_t x656 = 1LL;
volatile int32_t x706 = INT32_MAX;
int32_t x708 = 29;
volatile int16_t x730 = INT16_MAX;
uint8_t x731 = UINT8_MAX;
volatile uint64_t t36 = 215868039LLU;
int8_t x805 = -1;
int16_t x807 = INT16_MIN;
int16_t x808 = 1;
int32_t t37 = 4731;
uint8_t x854 = 9U;
static int32_t t40 = 88467;
volatile uint16_t x969 = UINT16_MAX;
int16_t x987 = INT16_MAX;
uint32_t x993 = 1002U;
int64_t x996 = -1LL;
static int64_t x999 = INT64_MIN;
volatile int32_t t47 = -704;
volatile int32_t t48 = -3469686;
static int16_t x1080 = INT16_MIN;
int32_t x1113 = 254314;
uint32_t x1116 = 37U;
uint16_t x1118 = 3474U;
int64_t x1123 = INT64_MAX;
uint16_t x1124 = 61U;
static int8_t x1138 = 0;
int16_t x1158 = INT16_MAX;
int8_t x1240 = -1;
uint8_t x1308 = 15U;
uint16_t x1317 = UINT16_MAX;
static volatile uint32_t x1320 = UINT32_MAX;
uint32_t x1357 = 6699U;
uint8_t x1374 = 15U;
int64_t t68 = 1113776906105LL;
uint32_t x1379 = UINT32_MAX;
uint8_t x1397 = 13U;
static uint32_t t70 = 7205U;
uint32_t x1407 = 129326U;
volatile int32_t x1439 = -1;
uint32_t t72 = 11432194U;
static uint8_t x1445 = 3U;
int64_t x1447 = 2785512355184920LL;
volatile uint32_t t73 = 0U;
uint16_t x1465 = 357U;
uint64_t x1467 = 96767LLU;
int32_t t77 = -6888;
int32_t x1583 = -1;
int8_t x1586 = INT8_MAX;
int16_t x1620 = -1;
volatile uint16_t x1637 = UINT16_MAX;
uint16_t x1689 = 164U;
static uint8_t x1690 = UINT8_MAX;
int8_t x1701 = -1;
int32_t t85 = 2954021;
static int32_t x1773 = -5;
int32_t t87 = 13176;
uint16_t x1785 = 4048U;
uint32_t x1818 = 118122176U;
int64_t t91 = 562115226149130LL;
int8_t x1848 = INT8_MAX;
static int16_t x1858 = INT16_MAX;
uint8_t x1880 = 66U;
uint8_t x1890 = 1U;
uint8_t x1918 = 78U;
static int8_t x1937 = 35;
volatile int64_t t97 = -750419680LL;
static volatile uint32_t x1971 = 20U;
volatile uint64_t t99 = 113246081269213LLU;
int16_t x2019 = INT16_MIN;
int16_t x2020 = -1;
volatile int32_t t102 = 1878944;
volatile int16_t x2025 = -1;
volatile uint32_t x2026 = 9924311U;
uint32_t x2046 = 1939U;
uint32_t x2047 = 18U;
volatile uint32_t t104 = 27880U;
int8_t x2124 = -1;
static int16_t x2137 = INT16_MIN;
int16_t x2138 = 11;
uint32_t x2165 = 0U;
static uint32_t x2167 = 10U;
static volatile int16_t x2184 = -1;
int32_t x2232 = INT32_MAX;
static int32_t x2269 = 2;
static int64_t x2272 = -1LL;
int64_t x2282 = 11346LL;
int8_t x2308 = -1;
uint16_t x2314 = 0U;
int32_t x2320 = -1;
static uint8_t x2366 = 1U;
uint64_t x2367 = UINT64_MAX;
uint8_t x2410 = 11U;
uint8_t x2411 = 1U;
int64_t x2412 = INT64_MIN;
int64_t t127 = 1822601LL;
uint8_t x2438 = 0U;
int32_t x2440 = INT32_MAX;
static volatile int32_t x2451 = -55188;
volatile int16_t x2456 = -1;
volatile int16_t x2471 = 0;
uint64_t x2474 = 78026362761LLU;
static int8_t x2502 = INT8_MAX;
uint32_t x2585 = UINT32_MAX;
volatile uint64_t x2614 = 218705655441206LLU;
int8_t x2681 = -1;
static volatile uint8_t x2683 = UINT8_MAX;
int8_t x2684 = -1;
int8_t x2699 = INT8_MAX;
int8_t x2708 = -1;
uint16_t x2746 = 4U;
int32_t t145 = -60;
int32_t t146 = -2268275;
volatile int8_t x2767 = 29;
uint32_t t148 = 3002879U;
int64_t x2819 = INT64_MIN;
int64_t x2829 = -181LL;
static uint8_t x2832 = 8U;
int32_t x2886 = 837854267;
uint8_t x2887 = UINT8_MAX;
static volatile uint64_t x2913 = 692101LLU;
int8_t x2916 = 1;
uint64_t t161 = UINT64_MAX;
static int32_t x3083 = -1;
static int32_t t163 = -54;
int8_t x3088 = -1;
volatile int32_t t164 = -7218469;
int32_t x3100 = -3;
uint8_t x3104 = 2U;
volatile int32_t x3108 = INT32_MAX;
static uint8_t x3122 = UINT8_MAX;
static volatile int16_t x3123 = INT16_MAX;
uint32_t t168 = 976283U;
uint8_t x3222 = 57U;
int8_t x3224 = INT8_MIN;
uint64_t x3251 = UINT64_MAX;
volatile uint16_t x3255 = UINT16_MAX;
volatile uint64_t t176 = 927163LLU;
uint8_t x3291 = 1U;
volatile uint64_t t178 = 921570553902LLU;
volatile int64_t x3363 = INT64_MIN;
volatile int8_t x3429 = 3;
uint8_t x3430 = UINT8_MAX;
static int64_t x3431 = INT64_MAX;
int8_t x3432 = -12;
int32_t x3436 = 1;
static volatile uint64_t x3438 = UINT64_MAX;
uint16_t x3439 = 229U;
int16_t x3440 = 1;
uint8_t x3494 = 45U;
uint16_t x3498 = 248U;
int64_t x3500 = -1002004949953728LL;
int64_t t186 = -37770164LL;
volatile uint64_t t187 = 53946997607280LLU;
static uint64_t t188 = 3807150199316LLU;
volatile int64_t x3518 = INT64_MAX;
uint64_t x3519 = UINT64_MAX;
int32_t t192 = 0;
static volatile uint64_t t193 = 112563925LLU;
static int16_t x3606 = 3921;
static volatile int64_t x3635 = INT64_MIN;
int16_t x3636 = INT16_MIN;
volatile uint64_t x3691 = UINT64_MAX;


void f0(void) {
    	int32_t x2 = 72;
	static int64_t x4 = 12798731421LL;

    t0 = (x1&(x2>>(x3%x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x21 = INT8_MIN;
	uint32_t x22 = UINT32_MAX;
	static volatile uint8_t x23 = 7U;
	uint32_t t1 = 121221U;

    t1 = (x21&(x22>>(x23%x24)));

    if (t1 != 33554304U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x33 = 36U;
	volatile uint64_t x34 = 5883030131443214LLU;
	int8_t x36 = 1;
	volatile uint64_t t2 = 195588LLU;

    t2 = (x33&(x34>>(x35%x36)));

    if (t2 != 4LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x37 = -1;
	volatile uint64_t x38 = UINT64_MAX;
	uint32_t x39 = 1125138U;
	uint16_t x40 = 6U;
	volatile uint64_t t3 = UINT64_MAX;

    t3 = (x37&(x38>>(x39%x40)));

    if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x81 = 80956569359468LL;
	int8_t x82 = INT8_MAX;
	volatile int16_t x83 = INT16_MIN;
	volatile int8_t x84 = INT8_MIN;
	volatile int64_t t4 = 28732178011LL;

    t4 = (x81&(x82>>(x83%x84)));

    if (t4 != 108LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x97 = 8;
	uint8_t x98 = UINT8_MAX;
	int32_t x99 = -1;
	volatile int32_t x100 = -1;
	volatile int32_t t5 = -1;

    t5 = (x97&(x98>>(x99%x100)));

    if (t5 != 8) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x161 = 1U;
	int8_t x162 = INT8_MAX;
	static uint8_t x163 = 1U;
	static int8_t x164 = INT8_MIN;
	volatile int32_t t6 = -6354044;

    t6 = (x161&(x162>>(x163%x164)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x185 = -1;
	uint32_t x187 = 15U;
	static int64_t x188 = INT64_MIN;

    t7 = (x185&(x186>>(x187%x188)));

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int32_t x201 = INT32_MIN;
	uint64_t x202 = 11773797034964LLU;
	int16_t x203 = 9;
	static int64_t x204 = INT64_MIN;
	volatile uint64_t t8 = 2111982191LLU;

    t8 = (x201&(x202>>(x203%x204)));

    if (t8 != 21474836480LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint64_t x213 = 60998787317417819LLU;
	int16_t x214 = INT16_MAX;
	int16_t x216 = -362;
	uint64_t t9 = 8556510996LLU;

    t9 = (x213&(x214>>(x215%x216)));

    if (t9 != 3LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x241 = -1;
	volatile int8_t x242 = INT8_MAX;
	uint8_t x243 = 68U;
	static volatile uint16_t x244 = 13U;

    t10 = (x241&(x242>>(x243%x244)));

    if (t10 != 15) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint64_t x257 = 2705617883LLU;
	uint32_t x258 = 148U;
	int8_t x259 = INT8_MAX;
	uint32_t x260 = 20U;
	uint64_t t11 = 40187LLU;

    t11 = (x257&(x258>>(x259%x260)));

    if (t11 != 1LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x261 = 5661U;
	int64_t x262 = 235033LL;
	uint64_t x263 = 0LLU;
	int8_t x264 = INT8_MIN;
	int64_t t12 = 48612643LL;

    t12 = (x261&(x262>>(x263%x264)));

    if (t12 != 5657LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x295 = 13;
	static uint64_t x296 = 331660925597863LLU;
	int32_t t13 = -1859647;

    t13 = (x293&(x294>>(x295%x296)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x305 = INT8_MAX;
	uint16_t x306 = 1U;
	uint8_t x307 = 0U;
	int16_t x308 = 14336;
	static volatile int32_t t14 = 31;

    t14 = (x305&(x306>>(x307%x308)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x309 = INT8_MIN;
	int32_t x310 = INT32_MAX;
	int32_t x311 = INT32_MAX;
	static uint8_t x312 = 6U;

    t15 = (x309&(x310>>(x311%x312)));

    if (t15 != 1073741696) { NG(); } else { ; }
	
}

void f16(void) {
    	static int16_t x349 = INT16_MAX;
	static int8_t x350 = INT8_MAX;
	int16_t x351 = 0;
	static int64_t x352 = -1LL;
	volatile int32_t t16 = 1245;

    t16 = (x349&(x350>>(x351%x352)));

    if (t16 != 127) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x369 = INT8_MAX;
	int64_t x370 = INT64_MAX;
	int8_t x371 = 5;
	int64_t x372 = -802812154250056LL;
	int64_t t17 = -176436803938993308LL;

    t17 = (x369&(x370>>(x371%x372)));

    if (t17 != 127LL) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint16_t x445 = UINT16_MAX;
	uint32_t x446 = 0U;
	int16_t x448 = -2;

    t18 = (x445&(x446>>(x447%x448)));

    if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x453 = 15U;
	uint64_t x454 = 1200253962371206LLU;
	uint16_t x455 = 15U;
	static volatile uint64_t x456 = UINT64_MAX;
	uint64_t t19 = 103LLU;

    t19 = (x453&(x454>>(x455%x456)));

    if (t19 != 2LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x477 = 46U;
	int32_t x478 = 7878801;
	static uint8_t x479 = UINT8_MAX;
	volatile uint8_t x480 = 61U;
	volatile int32_t t20 = -89180;

    t20 = (x477&(x478>>(x479%x480)));

    if (t20 != 6) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x497 = INT64_MAX;
	uint64_t x498 = 73LLU;
	static int64_t x499 = INT64_MIN;
	static int8_t x500 = 1;
	uint64_t t21 = 57LLU;

    t21 = (x497&(x498>>(x499%x500)));

    if (t21 != 73LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int64_t x501 = -1LL;
	int32_t x502 = INT32_MAX;
	volatile uint32_t x504 = 3U;
	int64_t t22 = 2930189434456815196LL;

    t22 = (x501&(x502>>(x503%x504)));

    if (t22 != 536870911LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static int8_t x513 = 56;
	uint8_t x514 = 14U;
	int8_t x515 = -1;
	int32_t t23 = -1143;

    t23 = (x513&(x514>>(x515%x516)));

    if (t23 != 8) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x521 = -1LL;
	static int64_t x522 = 477168843LL;
	volatile int8_t x523 = 13;
	int16_t x524 = -118;

    t24 = (x521&(x522>>(x523%x524)));

    if (t24 != 58248LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x561 = INT32_MAX;
	int64_t x563 = INT64_MIN;
	int16_t x564 = INT16_MIN;
	uint64_t t25 = 30591114583744110LLU;

    t25 = (x561&(x562>>(x563%x564)));

    if (t25 != 2147483647LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint8_t x577 = UINT8_MAX;
	uint8_t x578 = UINT8_MAX;
	volatile int32_t t26 = -83101307;

    t26 = (x577&(x578>>(x579%x580)));

    if (t26 != 255) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x593 = -837921LL;
	uint8_t x594 = 3U;
	int8_t x595 = INT8_MIN;
	int8_t x596 = -1;

    t27 = (x593&(x594>>(x595%x596)));

    if (t27 != 3LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x602 = INT8_MAX;
	volatile uint32_t x603 = UINT32_MAX;
	int32_t x604 = -1;
	volatile int32_t t28 = -213063;

    t28 = (x601&(x602>>(x603%x604)));

    if (t28 != 127) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x607 = UINT32_MAX;
	int64_t x608 = -1LL;

    t29 = (x605&(x606>>(x607%x608)));

    if (t29 != 144LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x629 = 23;
	static uint8_t x630 = UINT8_MAX;
	int8_t x632 = -1;
	static volatile int32_t t30 = 184416992;

    t30 = (x629&(x630>>(x631%x632)));

    if (t30 != 23) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int8_t x654 = INT8_MAX;
	int32_t x655 = INT32_MAX;
	static int32_t t31 = 0;

    t31 = (x653&(x654>>(x655%x656)));

    if (t31 != 127) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x705 = -910;
	uint16_t x707 = 43U;
	int32_t t32 = 13411858;

    t32 = (x705&(x706>>(x707%x708)));

    if (t32 != 130162) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x709 = 14091;
	uint32_t x710 = 7865U;
	uint64_t x711 = 18LLU;
	int32_t x712 = 104465;
	uint32_t t33 = 464740U;

    t33 = (x709&(x710>>(x711%x712)));

    if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x729 = 2;
	int32_t x732 = -1;
	int32_t t34 = 9656;

    t34 = (x729&(x730>>(x731%x732)));

    if (t34 != 2) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x737 = 13955LLU;
	static volatile uint64_t x738 = 211595LLU;
	volatile int16_t x739 = 2954;
	static int16_t x740 = -977;
	volatile uint64_t t35 = 63463251LLU;

    t35 = (x737&(x738>>(x739%x740)));

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x745 = 1LLU;
	uint8_t x746 = UINT8_MAX;
	uint8_t x747 = 3U;
	int16_t x748 = INT16_MIN;

    t36 = (x745&(x746>>(x747%x748)));

    if (t36 != 1LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint16_t x806 = 11457U;

    t37 = (x805&(x806>>(x807%x808)));

    if (t37 != 11457) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x853 = -114;
	uint32_t x855 = UINT32_MAX;
	int8_t x856 = INT8_MAX;
	int32_t t38 = -176925305;

    t38 = (x853&(x854>>(x855%x856)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static int32_t x893 = INT32_MAX;
	volatile uint32_t x894 = UINT32_MAX;
	volatile int32_t x895 = -25278179;
	static uint32_t x896 = 11U;
	static uint32_t t39 = 40856U;

    t39 = (x893&(x894>>(x895%x896)));

    if (t39 != 2147483647U) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x937 = 62U;
	int32_t x938 = 2468;
	static volatile uint8_t x939 = 13U;
	static uint8_t x940 = UINT8_MAX;

    t40 = (x937&(x938>>(x939%x940)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint32_t x941 = 6800476U;
	volatile int32_t x942 = 1;
	uint64_t x943 = 2584888025572871LLU;
	uint8_t x944 = 43U;
	uint32_t t41 = 6853942U;

    t41 = (x941&(x942>>(x943%x944)));

    if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x945 = 15U;
	static volatile int64_t x946 = INT64_MAX;
	uint8_t x947 = 15U;
	static uint16_t x948 = 2U;
	int64_t t42 = 561098594LL;

    t42 = (x945&(x946>>(x947%x948)));

    if (t42 != 15LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x970 = 4;
	int32_t x971 = -1;
	static int16_t x972 = -1;
	volatile int32_t t43 = 110;

    t43 = (x969&(x970>>(x971%x972)));

    if (t43 != 4) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x973 = UINT64_MAX;
	int16_t x974 = 241;
	volatile uint16_t x975 = 10442U;
	int32_t x976 = -1;
	volatile uint64_t t44 = 3751328762464693733LLU;

    t44 = (x973&(x974>>(x975%x976)));

    if (t44 != 241LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x985 = 2;
	uint8_t x986 = 102U;
	volatile int8_t x988 = INT8_MAX;
	int32_t t45 = 10335;

    t45 = (x985&(x986>>(x987%x988)));

    if (t45 != 2) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x994 = 9135;
	volatile int16_t x995 = -1;
	volatile uint32_t t46 = 8225078U;

    t46 = (x993&(x994>>(x995%x996)));

    if (t46 != 938U) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x997 = -558;
	volatile int16_t x998 = 0;
	static int32_t x1000 = INT32_MIN;

    t47 = (x997&(x998>>(x999%x1000)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x1017 = INT16_MIN;
	int8_t x1018 = 2;
	uint8_t x1019 = UINT8_MAX;
	volatile int8_t x1020 = INT8_MAX;

    t48 = (x1017&(x1018>>(x1019%x1020)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x1077 = INT64_MAX;
	volatile int64_t x1078 = 28243973999755LL;
	volatile int32_t x1079 = INT32_MIN;
	volatile int64_t t49 = -1121187866489LL;

    t49 = (x1077&(x1078>>(x1079%x1080)));

    if (t49 != 28243973999755LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x1085 = 26544380U;
	static int8_t x1086 = 1;
	int16_t x1087 = 218;
	int16_t x1088 = -1;
	static volatile uint32_t t50 = 242317U;

    t50 = (x1085&(x1086>>(x1087%x1088)));

    if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x1114 = 3;
	int64_t x1115 = INT64_MAX;
	int32_t t51 = -357;

    t51 = (x1113&(x1114>>(x1115%x1116)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x1117 = INT8_MAX;
	int32_t x1119 = INT32_MAX;
	int32_t x1120 = INT32_MAX;
	volatile int32_t t52 = -1;

    t52 = (x1117&(x1118>>(x1119%x1120)));

    if (t52 != 18) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x1121 = -2;
	static int32_t x1122 = 1073;
	static volatile int32_t t53 = -58676;

    t53 = (x1121&(x1122>>(x1123%x1124)));

    if (t53 != 8) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x1125 = -2;
	int64_t x1126 = INT64_MAX;
	int32_t x1127 = -1;
	int8_t x1128 = -1;
	volatile int64_t t54 = 2357LL;

    t54 = (x1125&(x1126>>(x1127%x1128)));

    if (t54 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x1137 = 13158U;
	int32_t x1139 = INT32_MIN;
	int8_t x1140 = INT8_MIN;
	int32_t t55 = -232751987;

    t55 = (x1137&(x1138>>(x1139%x1140)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x1141 = -1LL;
	uint16_t x1142 = 2U;
	int16_t x1143 = INT16_MIN;
	static int8_t x1144 = INT8_MIN;
	int64_t t56 = 404LL;

    t56 = (x1141&(x1142>>(x1143%x1144)));

    if (t56 != 2LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x1153 = 8277U;
	uint64_t x1154 = 7654335770974926LLU;
	int64_t x1155 = INT64_MIN;
	volatile int32_t x1156 = INT32_MIN;
	uint64_t t57 = 1091322665348361278LLU;

    t57 = (x1153&(x1154>>(x1155%x1156)));

    if (t57 != 68LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static int64_t x1157 = INT64_MIN;
	int16_t x1159 = 1;
	static int32_t x1160 = INT32_MAX;
	volatile int64_t t58 = 501911985LL;

    t58 = (x1157&(x1158>>(x1159%x1160)));

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x1229 = UINT16_MAX;
	int8_t x1230 = 31;
	uint16_t x1231 = 0U;
	static uint64_t x1232 = 120792038LLU;
	int32_t t59 = -2701885;

    t59 = (x1229&(x1230>>(x1231%x1232)));

    if (t59 != 31) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x1233 = 1022995;
	int32_t x1234 = INT32_MAX;
	volatile uint32_t x1235 = UINT32_MAX;
	int8_t x1236 = -1;
	volatile int32_t t60 = -528414900;

    t60 = (x1233&(x1234>>(x1235%x1236)));

    if (t60 != 1022995) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int32_t x1237 = INT32_MIN;
	int64_t x1238 = INT64_MAX;
	volatile int8_t x1239 = -1;
	volatile int64_t t61 = 2650749304LL;

    t61 = (x1237&(x1238>>(x1239%x1240)));

    if (t61 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x1293 = -1;
	uint16_t x1294 = UINT16_MAX;
	int64_t x1295 = INT64_MIN;
	int32_t x1296 = INT32_MIN;
	volatile int32_t t62 = 992947950;

    t62 = (x1293&(x1294>>(x1295%x1296)));

    if (t62 != 65535) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x1305 = 30;
	static int64_t x1306 = 7LL;
	int32_t x1307 = INT32_MAX;
	volatile int64_t t63 = -3417179987692156084LL;

    t63 = (x1305&(x1306>>(x1307%x1308)));

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x1318 = INT8_MAX;
	uint16_t x1319 = 5U;
	int32_t t64 = 21115658;

    t64 = (x1317&(x1318>>(x1319%x1320)));

    if (t64 != 3) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int32_t x1345 = INT32_MIN;
	uint64_t x1346 = 45060252658587LLU;
	static uint16_t x1347 = UINT16_MAX;
	int8_t x1348 = INT8_MAX;
	static volatile uint64_t t65 = 55346799073056LLU;

    t65 = (x1345&(x1346>>(x1347%x1348)));

    if (t65 != 5630702125056LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x1358 = INT32_MAX;
	int16_t x1359 = INT16_MAX;
	static volatile int32_t x1360 = -14;
	volatile uint32_t t66 = 2U;

    t66 = (x1357&(x1358>>(x1359%x1360)));

    if (t66 != 6699U) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x1369 = UINT64_MAX;
	int32_t x1370 = INT32_MAX;
	uint16_t x1371 = UINT16_MAX;
	int64_t x1372 = -1LL;
	uint64_t t67 = 77849111LLU;

    t67 = (x1369&(x1370>>(x1371%x1372)));

    if (t67 != 2147483647LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x1373 = 15687LL;
	volatile uint16_t x1375 = UINT16_MAX;
	uint16_t x1376 = 86U;

    t68 = (x1373&(x1374>>(x1375%x1376)));

    if (t68 != 1LL) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x1377 = -580;
	int16_t x1378 = INT16_MAX;
	int8_t x1380 = -1;
	volatile int32_t t69 = 62543898;

    t69 = (x1377&(x1378>>(x1379%x1380)));

    if (t69 != 32188) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile uint32_t x1398 = 360532U;
	uint8_t x1399 = 14U;
	uint16_t x1400 = 16U;

    t70 = (x1397&(x1398>>(x1399%x1400)));

    if (t70 != 4U) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x1405 = UINT32_MAX;
	static int64_t x1406 = 232211972LL;
	uint8_t x1408 = 104U;
	int64_t t71 = -64586LL;

    t71 = (x1405&(x1406>>(x1407%x1408)));

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int8_t x1437 = 1;
	static uint32_t x1438 = 3U;
	int32_t x1440 = -1;

    t72 = (x1437&(x1438>>(x1439%x1440)));

    if (t72 != 1U) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x1446 = 174883U;
	static uint16_t x1448 = 185U;

    t73 = (x1445&(x1446>>(x1447%x1448)));

    if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x1466 = 0;
	static uint8_t x1468 = 2U;
	static int32_t t74 = -347926;

    t74 = (x1465&(x1466>>(x1467%x1468)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x1485 = -4;
	static uint16_t x1486 = UINT16_MAX;
	int16_t x1487 = INT16_MAX;
	static int8_t x1488 = 62;
	int32_t t75 = 107575995;

    t75 = (x1485&(x1486>>(x1487%x1488)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint32_t x1505 = 59771019U;
	static int64_t x1506 = INT64_MAX;
	uint8_t x1507 = UINT8_MAX;
	static uint16_t x1508 = 15U;
	int64_t t76 = 2997LL;

    t76 = (x1505&(x1506>>(x1507%x1508)));

    if (t76 != 59771019LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x1573 = -6;
	volatile uint16_t x1574 = 110U;
	uint16_t x1575 = 69U;
	uint8_t x1576 = 1U;

    t77 = (x1573&(x1574>>(x1575%x1576)));

    if (t77 != 106) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x1581 = 6;
	uint64_t x1582 = UINT64_MAX;
	static int64_t x1584 = -1LL;
	static uint64_t t78 = 4LLU;

    t78 = (x1581&(x1582>>(x1583%x1584)));

    if (t78 != 6LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x1585 = -1;
	uint16_t x1587 = 285U;
	uint16_t x1588 = 1U;
	volatile int32_t t79 = 29;

    t79 = (x1585&(x1586>>(x1587%x1588)));

    if (t79 != 127) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x1617 = -6;
	static int16_t x1618 = INT16_MAX;
	int16_t x1619 = 173;
	int32_t t80 = -5113;

    t80 = (x1617&(x1618>>(x1619%x1620)));

    if (t80 != 32762) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x1638 = 7140350656662LLU;
	int64_t x1639 = 5LL;
	int16_t x1640 = INT16_MIN;
	uint64_t t81 = 129791LLU;

    t81 = (x1637&(x1638>>(x1639%x1640)));

    if (t81 != 33796LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x1691 = INT8_MIN;
	int16_t x1692 = -1;
	volatile int32_t t82 = -10;

    t82 = (x1689&(x1690>>(x1691%x1692)));

    if (t82 != 164) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x1697 = -1;
	volatile uint32_t x1698 = UINT32_MAX;
	int16_t x1699 = INT16_MAX;
	static int32_t x1700 = -1;
	volatile uint32_t t83 = UINT32_MAX;

    t83 = (x1697&(x1698>>(x1699%x1700)));

    if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint64_t x1702 = 38235917105540548LLU;
	volatile uint16_t x1703 = 60U;
	uint16_t x1704 = 26908U;
	uint64_t t84 = 5819LLU;

    t84 = (x1701&(x1702>>(x1703%x1704)));

    if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	static int8_t x1721 = INT8_MIN;
	uint16_t x1722 = 814U;
	static uint8_t x1723 = 3U;
	static int32_t x1724 = -1;

    t85 = (x1721&(x1722>>(x1723%x1724)));

    if (t85 != 768) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint32_t x1737 = UINT32_MAX;
	uint32_t x1738 = UINT32_MAX;
	int8_t x1739 = INT8_MIN;
	int8_t x1740 = INT8_MIN;
	static volatile uint32_t t86 = UINT32_MAX;

    t86 = (x1737&(x1738>>(x1739%x1740)));

    if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x1774 = 0;
	int16_t x1775 = INT16_MIN;
	int8_t x1776 = INT8_MIN;

    t87 = (x1773&(x1774>>(x1775%x1776)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int64_t x1786 = INT64_MAX;
	static volatile uint16_t x1787 = 3U;
	uint32_t x1788 = 1530761U;
	volatile int64_t t88 = -5039LL;

    t88 = (x1785&(x1786>>(x1787%x1788)));

    if (t88 != 4048LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x1793 = INT64_MIN;
	int32_t x1794 = 6760732;
	static uint8_t x1795 = 6U;
	volatile int32_t x1796 = INT32_MIN;
	volatile int64_t t89 = -1LL;

    t89 = (x1793&(x1794>>(x1795%x1796)));

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x1801 = 173;
	static uint64_t x1802 = UINT64_MAX;
	uint8_t x1803 = 3U;
	uint32_t x1804 = 1377480923U;
	volatile uint64_t t90 = 56013210306309624LLU;

    t90 = (x1801&(x1802>>(x1803%x1804)));

    if (t90 != 173LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int64_t x1817 = INT64_MAX;
	uint32_t x1819 = 6U;
	int64_t x1820 = INT64_MIN;

    t91 = (x1817&(x1818>>(x1819%x1820)));

    if (t91 != 1845659LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile int16_t x1845 = -713;
	static uint32_t x1846 = 117323308U;
	static volatile uint16_t x1847 = UINT16_MAX;
	uint32_t t92 = 2U;

    t92 = (x1845&(x1846>>(x1847%x1848)));

    if (t92 != 14664709U) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x1857 = INT64_MAX;
	static int8_t x1859 = INT8_MIN;
	int8_t x1860 = 4;
	int64_t t93 = -1LL;

    t93 = (x1857&(x1858>>(x1859%x1860)));

    if (t93 != 32767LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x1877 = INT8_MIN;
	int64_t x1878 = 2870257134118775LL;
	int16_t x1879 = 252;
	static volatile int64_t t94 = -89732LL;

    t94 = (x1877&(x1878>>(x1879%x1880)));

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x1889 = 379964LLU;
	uint16_t x1891 = UINT16_MAX;
	volatile uint8_t x1892 = 4U;
	uint64_t t95 = 456923LLU;

    t95 = (x1889&(x1890>>(x1891%x1892)));

    if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x1917 = INT32_MAX;
	int32_t x1919 = 4;
	volatile int8_t x1920 = INT8_MIN;
	int32_t t96 = -589828767;

    t96 = (x1917&(x1918>>(x1919%x1920)));

    if (t96 != 4) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x1938 = INT64_MAX;
	uint8_t x1939 = 13U;
	static int64_t x1940 = -1LL;

    t97 = (x1937&(x1938>>(x1939%x1940)));

    if (t97 != 35LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x1941 = -33;
	volatile uint8_t x1942 = 3U;
	volatile int16_t x1943 = INT16_MIN;
	volatile uint16_t x1944 = 2U;
	int32_t t98 = 1711;

    t98 = (x1941&(x1942>>(x1943%x1944)));

    if (t98 != 3) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint64_t x1969 = 38786723694379562LLU;
	uint64_t x1970 = 201918168600LLU;
	static volatile uint8_t x1972 = 4U;

    t99 = (x1969&(x1970>>(x1971%x1972)));

    if (t99 != 4349624840LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x2005 = INT16_MAX;
	uint8_t x2006 = 21U;
	int16_t x2007 = INT16_MIN;
	int64_t x2008 = -1LL;
	int32_t t100 = 1565274;

    t100 = (x2005&(x2006>>(x2007%x2008)));

    if (t100 != 21) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int64_t x2009 = INT64_MIN;
	uint16_t x2010 = UINT16_MAX;
	uint32_t x2011 = 966307U;
	int8_t x2012 = 2;
	volatile int64_t t101 = 13611594004137LL;

    t101 = (x2009&(x2010>>(x2011%x2012)));

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x2017 = -1;
	uint8_t x2018 = 29U;

    t102 = (x2017&(x2018>>(x2019%x2020)));

    if (t102 != 29) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x2027 = -1;
	int64_t x2028 = 1LL;
	volatile uint32_t t103 = 44299U;

    t103 = (x2025&(x2026>>(x2027%x2028)));

    if (t103 != 9924311U) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x2045 = -1;
	int64_t x2048 = -1383LL;

    t104 = (x2045&(x2046>>(x2047%x2048)));

    if (t104 != 0U) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x2049 = -182648870;
	volatile int8_t x2050 = INT8_MAX;
	volatile int8_t x2051 = 7;
	uint16_t x2052 = UINT16_MAX;
	int32_t t105 = -28;

    t105 = (x2049&(x2050>>(x2051%x2052)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x2089 = 4U;
	volatile uint8_t x2090 = UINT8_MAX;
	static volatile int16_t x2091 = INT16_MIN;
	static uint32_t x2092 = 14U;
	static volatile uint32_t t106 = 7148U;

    t106 = (x2089&(x2090>>(x2091%x2092)));

    if (t106 != 0U) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x2117 = 4962;
	uint16_t x2118 = 12367U;
	uint8_t x2119 = 12U;
	int8_t x2120 = INT8_MIN;
	int32_t t107 = 607;

    t107 = (x2117&(x2118>>(x2119%x2120)));

    if (t107 != 2) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int16_t x2121 = -823;
	static int8_t x2122 = INT8_MAX;
	volatile int16_t x2123 = -1;
	int32_t t108 = 586937;

    t108 = (x2121&(x2122>>(x2123%x2124)));

    if (t108 != 73) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x2139 = 0;
	uint8_t x2140 = 15U;
	volatile int32_t t109 = 23846;

    t109 = (x2137&(x2138>>(x2139%x2140)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x2145 = INT64_MIN;
	int64_t x2146 = 196928LL;
	uint64_t x2147 = UINT64_MAX;
	static int32_t x2148 = -1;
	int64_t t110 = 92079LL;

    t110 = (x2145&(x2146>>(x2147%x2148)));

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x2166 = UINT64_MAX;
	int32_t x2168 = -1;
	uint64_t t111 = 950950637318107LLU;

    t111 = (x2165&(x2166>>(x2167%x2168)));

    if (t111 != 0LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x2181 = -1;
	static uint16_t x2182 = 107U;
	volatile int64_t x2183 = INT64_MIN;
	static int32_t t112 = -40932;

    t112 = (x2181&(x2182>>(x2183%x2184)));

    if (t112 != 107) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x2229 = INT32_MIN;
	static uint32_t x2230 = UINT32_MAX;
	uint8_t x2231 = 1U;
	uint32_t t113 = 248776775U;

    t113 = (x2229&(x2230>>(x2231%x2232)));

    if (t113 != 0U) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x2249 = -1;
	uint16_t x2250 = UINT16_MAX;
	static int64_t x2251 = -554844013LL;
	int32_t x2252 = -1;
	int32_t t114 = 0;

    t114 = (x2249&(x2250>>(x2251%x2252)));

    if (t114 != 65535) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x2270 = 726;
	int8_t x2271 = INT8_MAX;
	int32_t t115 = -2;

    t115 = (x2269&(x2270>>(x2271%x2272)));

    if (t115 != 2) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int32_t x2281 = -756;
	volatile uint8_t x2283 = UINT8_MAX;
	volatile int8_t x2284 = -1;
	int64_t t116 = -6182018185511040LL;

    t116 = (x2281&(x2282>>(x2283%x2284)));

    if (t116 != 11264LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x2297 = INT16_MIN;
	uint32_t x2298 = UINT32_MAX;
	uint8_t x2299 = 1U;
	static int8_t x2300 = -1;
	uint32_t t117 = 116541U;

    t117 = (x2297&(x2298>>(x2299%x2300)));

    if (t117 != 4294934528U) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint16_t x2305 = 19U;
	uint32_t x2306 = 67392U;
	int32_t x2307 = INT32_MIN;
	static uint32_t t118 = 549U;

    t118 = (x2305&(x2306>>(x2307%x2308)));

    if (t118 != 0U) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile int32_t x2313 = INT32_MIN;
	static uint8_t x2315 = 2U;
	int16_t x2316 = INT16_MIN;
	static int32_t t119 = -13132657;

    t119 = (x2313&(x2314>>(x2315%x2316)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x2317 = -1029236563;
	static int8_t x2318 = 0;
	int16_t x2319 = -1;
	static volatile int32_t t120 = 568829452;

    t120 = (x2317&(x2318>>(x2319%x2320)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x2321 = 1173;
	int16_t x2322 = INT16_MAX;
	static uint64_t x2323 = UINT64_MAX;
	int32_t x2324 = -1;
	volatile int32_t t121 = -14594;

    t121 = (x2321&(x2322>>(x2323%x2324)));

    if (t121 != 1173) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x2329 = 1882U;
	volatile int8_t x2330 = 1;
	int64_t x2331 = INT64_MAX;
	static int32_t x2332 = INT32_MAX;
	static int32_t t122 = 920591020;

    t122 = (x2329&(x2330>>(x2331%x2332)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int32_t x2349 = 53;
	static uint32_t x2350 = 8U;
	uint8_t x2351 = 6U;
	int64_t x2352 = -62078068057575LL;
	uint32_t t123 = 12619845U;

    t123 = (x2349&(x2350>>(x2351%x2352)));

    if (t123 != 0U) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint16_t x2361 = 16541U;
	volatile int8_t x2362 = 0;
	volatile int32_t x2363 = 1298;
	static int8_t x2364 = INT8_MIN;
	volatile int32_t t124 = -26790;

    t124 = (x2361&(x2362>>(x2363%x2364)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x2365 = INT64_MAX;
	int64_t x2368 = INT64_MAX;
	static int64_t t125 = -402LL;

    t125 = (x2365&(x2366>>(x2367%x2368)));

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x2409 = 529548535410LLU;
	volatile uint64_t t126 = 506LLU;

    t126 = (x2409&(x2410>>(x2411%x2412)));

    if (t126 != 0LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x2421 = INT64_MIN;
	uint8_t x2422 = 4U;
	int8_t x2423 = INT8_MAX;
	static int8_t x2424 = -1;

    t127 = (x2421&(x2422>>(x2423%x2424)));

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int16_t x2433 = 0;
	volatile uint16_t x2434 = 6390U;
	int64_t x2435 = -503327498520071690LL;
	int8_t x2436 = -1;
	static int32_t t128 = 18741691;

    t128 = (x2433&(x2434>>(x2435%x2436)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x2437 = -1;
	int64_t x2439 = INT64_MAX;
	volatile int32_t t129 = 8991723;

    t129 = (x2437&(x2438>>(x2439%x2440)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static int64_t x2449 = 806253430LL;
	static uint64_t x2450 = 20803LLU;
	uint32_t x2452 = 2U;
	volatile uint64_t t130 = 3406LLU;

    t130 = (x2449&(x2450>>(x2451%x2452)));

    if (t130 != 20802LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int8_t x2453 = -1;
	int16_t x2454 = INT16_MAX;
	uint8_t x2455 = 31U;
	int32_t t131 = 19764172;

    t131 = (x2453&(x2454>>(x2455%x2456)));

    if (t131 != 32767) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x2469 = 267;
	uint64_t x2470 = 6161890LLU;
	int64_t x2472 = INT64_MIN;
	volatile uint64_t t132 = 73926655002LLU;

    t132 = (x2469&(x2470>>(x2471%x2472)));

    if (t132 != 258LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x2473 = UINT16_MAX;
	int64_t x2475 = -1LL;
	int16_t x2476 = -1;
	uint64_t t133 = 171860LLU;

    t133 = (x2473&(x2474>>(x2475%x2476)));

    if (t133 != 53129LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint64_t x2501 = 133471512516LLU;
	static uint8_t x2503 = 3U;
	static int8_t x2504 = INT8_MIN;
	static volatile uint64_t t134 = 269LLU;

    t134 = (x2501&(x2502>>(x2503%x2504)));

    if (t134 != 4LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x2545 = INT8_MAX;
	static uint16_t x2546 = 1U;
	uint16_t x2547 = 0U;
	static uint8_t x2548 = UINT8_MAX;
	int32_t t135 = 41;

    t135 = (x2545&(x2546>>(x2547%x2548)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint8_t x2549 = 127U;
	int16_t x2550 = INT16_MAX;
	uint16_t x2551 = UINT16_MAX;
	static int8_t x2552 = -1;
	volatile int32_t t136 = 273303882;

    t136 = (x2549&(x2550>>(x2551%x2552)));

    if (t136 != 127) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x2586 = 35U;
	uint64_t x2587 = 126238742035625LLU;
	int8_t x2588 = INT8_MAX;
	static uint32_t t137 = 1064U;

    t137 = (x2585&(x2586>>(x2587%x2588)));

    if (t137 != 0U) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x2613 = 4572322258LL;
	static volatile int32_t x2615 = INT32_MIN;
	int16_t x2616 = INT16_MIN;
	uint64_t t138 = 2152896970817340725LLU;

    t138 = (x2613&(x2614>>(x2615%x2616)));

    if (t138 != 4303356178LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint8_t x2637 = 1U;
	static uint8_t x2638 = 26U;
	uint64_t x2639 = 0LLU;
	static int32_t x2640 = 382074;
	int32_t t139 = 21377;

    t139 = (x2637&(x2638>>(x2639%x2640)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x2673 = UINT32_MAX;
	uint64_t x2674 = UINT64_MAX;
	uint8_t x2675 = 53U;
	volatile int32_t x2676 = INT32_MAX;
	volatile uint64_t t140 = 35299550068590886LLU;

    t140 = (x2673&(x2674>>(x2675%x2676)));

    if (t140 != 2047LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static int64_t x2682 = 122784233847992LL;
	int64_t t141 = 10251LL;

    t141 = (x2681&(x2682>>(x2683%x2684)));

    if (t141 != 122784233847992LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x2697 = INT16_MAX;
	int64_t x2698 = INT64_MAX;
	volatile int8_t x2700 = -1;
	volatile int64_t t142 = 8626529285797LL;

    t142 = (x2697&(x2698>>(x2699%x2700)));

    if (t142 != 32767LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x2705 = 461105856LLU;
	uint64_t x2706 = 6548889002LLU;
	static uint16_t x2707 = 3905U;
	uint64_t t143 = 7499561LLU;

    t143 = (x2705&(x2706>>(x2707%x2708)));

    if (t143 != 39323776LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x2709 = UINT32_MAX;
	uint16_t x2710 = 29105U;
	volatile int64_t x2711 = INT64_MAX;
	int16_t x2712 = -1;
	uint32_t t144 = 1068720959U;

    t144 = (x2709&(x2710>>(x2711%x2712)));

    if (t144 != 29105U) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x2745 = 36;
	uint64_t x2747 = 76645LLU;
	uint8_t x2748 = 1U;

    t145 = (x2745&(x2746>>(x2747%x2748)));

    if (t145 != 4) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x2749 = -90117398;
	int8_t x2750 = INT8_MAX;
	static uint32_t x2751 = UINT32_MAX;
	static volatile uint16_t x2752 = UINT16_MAX;

    t146 = (x2749&(x2750>>(x2751%x2752)));

    if (t146 != 106) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x2765 = 51U;
	int32_t x2766 = 113485;
	int64_t x2768 = -9766949899LL;
	int32_t t147 = 12;

    t147 = (x2765&(x2766>>(x2767%x2768)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint8_t x2769 = 0U;
	volatile uint32_t x2770 = 81U;
	static uint64_t x2771 = UINT64_MAX;
	int8_t x2772 = INT8_MAX;

    t148 = (x2769&(x2770>>(x2771%x2772)));

    if (t148 != 0U) { NG(); } else { ; }
	
}

void f149(void) {
    	static int64_t x2817 = INT64_MAX;
	int8_t x2818 = INT8_MAX;
	int64_t x2820 = INT64_MIN;
	int64_t t149 = -2093161895LL;

    t149 = (x2817&(x2818>>(x2819%x2820)));

    if (t149 != 127LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x2830 = 4;
	uint8_t x2831 = 18U;
	volatile int64_t t150 = -117591919487917618LL;

    t150 = (x2829&(x2830>>(x2831%x2832)));

    if (t150 != 1LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x2857 = INT32_MIN;
	uint16_t x2858 = 299U;
	uint8_t x2859 = 29U;
	int64_t x2860 = -11LL;
	volatile int32_t t151 = -120369;

    t151 = (x2857&(x2858>>(x2859%x2860)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x2865 = INT8_MAX;
	int16_t x2866 = 1;
	int16_t x2867 = INT16_MIN;
	int32_t x2868 = -1;
	int32_t t152 = -466531840;

    t152 = (x2865&(x2866>>(x2867%x2868)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static int64_t x2885 = INT64_MIN;
	int16_t x2888 = -15;
	volatile int64_t t153 = -2182075732676436LL;

    t153 = (x2885&(x2886>>(x2887%x2888)));

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x2889 = 8LLU;
	int64_t x2890 = INT64_MAX;
	int64_t x2891 = 75126505599432556LL;
	int8_t x2892 = -48;
	volatile uint64_t t154 = 7917LLU;

    t154 = (x2889&(x2890>>(x2891%x2892)));

    if (t154 != 8LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int64_t x2905 = -1LL;
	int8_t x2906 = 0;
	int8_t x2907 = INT8_MIN;
	int8_t x2908 = -1;
	int64_t t155 = -10LL;

    t155 = (x2905&(x2906>>(x2907%x2908)));

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int16_t x2914 = 3233;
	static volatile int8_t x2915 = INT8_MAX;
	volatile uint64_t t156 = 12100LLU;

    t156 = (x2913&(x2914>>(x2915%x2916)));

    if (t156 != 3201LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x2917 = -1;
	int64_t x2918 = 1LL;
	uint16_t x2919 = 78U;
	uint16_t x2920 = 20U;
	static volatile int64_t t157 = -22083LL;

    t157 = (x2917&(x2918>>(x2919%x2920)));

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x2981 = INT8_MAX;
	int8_t x2982 = INT8_MAX;
	uint16_t x2983 = 7U;
	int8_t x2984 = -1;
	volatile int32_t t158 = -944;

    t158 = (x2981&(x2982>>(x2983%x2984)));

    if (t158 != 127) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x2985 = -1;
	uint8_t x2986 = 10U;
	uint8_t x2987 = 3U;
	volatile uint64_t x2988 = 17012576244076787LLU;
	int32_t t159 = -1;

    t159 = (x2985&(x2986>>(x2987%x2988)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x3017 = 1LL;
	static uint32_t x3018 = 1067U;
	uint64_t x3019 = UINT64_MAX;
	uint64_t x3020 = UINT64_MAX;
	volatile int64_t t160 = 15634786153564LL;

    t160 = (x3017&(x3018>>(x3019%x3020)));

    if (t160 != 1LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x3033 = -1;
	uint64_t x3034 = UINT64_MAX;
	int32_t x3035 = INT32_MAX;
	static int64_t x3036 = -1LL;

    t161 = (x3033&(x3034>>(x3035%x3036)));

    if (t161 != UINT64_MAX) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile int16_t x3065 = -1;
	volatile int64_t x3066 = 109771202LL;
	uint16_t x3067 = UINT16_MAX;
	int8_t x3068 = -14;
	volatile int64_t t162 = -1846LL;

    t162 = (x3065&(x3066>>(x3067%x3068)));

    if (t162 != 54885601LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x3081 = -1;
	uint8_t x3082 = 47U;
	uint64_t x3084 = UINT64_MAX;

    t163 = (x3081&(x3082>>(x3083%x3084)));

    if (t163 != 47) { NG(); } else { ; }
	
}

void f164(void) {
    	static int16_t x3085 = INT16_MIN;
	uint16_t x3086 = 6U;
	int16_t x3087 = 375;

    t164 = (x3085&(x3086>>(x3087%x3088)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x3097 = -1;
	static uint8_t x3098 = UINT8_MAX;
	static int64_t x3099 = 64416LL;
	volatile int32_t t165 = -22220052;

    t165 = (x3097&(x3098>>(x3099%x3100)));

    if (t165 != 255) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x3101 = INT16_MIN;
	int16_t x3102 = INT16_MAX;
	static volatile int16_t x3103 = INT16_MIN;
	static volatile int32_t t166 = -1510197;

    t166 = (x3101&(x3102>>(x3103%x3104)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint64_t x3105 = 3488937493634110LLU;
	int64_t x3106 = 741082094602LL;
	int64_t x3107 = INT64_MAX;
	uint64_t t167 = 1244197697973LLU;

    t167 = (x3105&(x3106>>(x3107%x3108)));

    if (t167 != 8689781764LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x3121 = 15U;
	int16_t x3124 = INT16_MAX;

    t168 = (x3121&(x3122>>(x3123%x3124)));

    if (t168 != 15U) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile uint16_t x3149 = 3U;
	uint8_t x3150 = 123U;
	uint16_t x3151 = 481U;
	int8_t x3152 = 1;
	int32_t t169 = 116;

    t169 = (x3149&(x3150>>(x3151%x3152)));

    if (t169 != 3) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x3193 = INT32_MIN;
	uint8_t x3194 = 2U;
	volatile int8_t x3195 = INT8_MIN;
	int8_t x3196 = -1;
	volatile int32_t t170 = -1;

    t170 = (x3193&(x3194>>(x3195%x3196)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static int64_t x3201 = -42287341015LL;
	uint32_t x3202 = UINT32_MAX;
	uint16_t x3203 = 12U;
	volatile uint32_t x3204 = UINT32_MAX;
	volatile int64_t t171 = 32636608LL;

    t171 = (x3201&(x3202>>(x3203%x3204)));

    if (t171 != 680489LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x3221 = INT32_MIN;
	int32_t x3223 = INT32_MIN;
	volatile int32_t t172 = 638113;

    t172 = (x3221&(x3222>>(x3223%x3224)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x3249 = INT32_MIN;
	uint32_t x3250 = 2610U;
	static int16_t x3252 = -31;
	volatile uint32_t t173 = 459U;

    t173 = (x3249&(x3250>>(x3251%x3252)));

    if (t173 != 0U) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x3253 = -58218034;
	static volatile uint16_t x3254 = 24U;
	static volatile int64_t x3256 = -14LL;
	volatile int32_t t174 = 4;

    t174 = (x3253&(x3254>>(x3255%x3256)));

    if (t174 != 12) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x3261 = 3U;
	int8_t x3262 = INT8_MAX;
	int32_t x3263 = INT32_MIN;
	volatile int8_t x3264 = INT8_MIN;
	volatile int32_t t175 = -160796;

    t175 = (x3261&(x3262>>(x3263%x3264)));

    if (t175 != 3) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x3277 = INT8_MAX;
	uint64_t x3278 = UINT64_MAX;
	int16_t x3279 = INT16_MAX;
	static volatile int64_t x3280 = -1LL;

    t176 = (x3277&(x3278>>(x3279%x3280)));

    if (t176 != 127LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x3289 = INT8_MIN;
	static uint8_t x3290 = 29U;
	int16_t x3292 = INT16_MIN;
	volatile int32_t t177 = -369555;

    t177 = (x3289&(x3290>>(x3291%x3292)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static int32_t x3329 = INT32_MAX;
	uint64_t x3330 = 365136591LLU;
	volatile int32_t x3331 = -1;
	int32_t x3332 = -1;

    t178 = (x3329&(x3330>>(x3331%x3332)));

    if (t178 != 365136591LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x3361 = INT8_MIN;
	int8_t x3362 = 2;
	int16_t x3364 = INT16_MIN;
	int32_t t179 = -14534;

    t179 = (x3361&(x3362>>(x3363%x3364)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint8_t x3373 = 30U;
	uint16_t x3374 = UINT16_MAX;
	int64_t x3375 = -15305179364294536LL;
	int8_t x3376 = -1;
	static int32_t t180 = 70;

    t180 = (x3373&(x3374>>(x3375%x3376)));

    if (t180 != 30) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t t181 = 48967855;

    t181 = (x3429&(x3430>>(x3431%x3432)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint8_t x3433 = 3U;
	int8_t x3434 = 43;
	int16_t x3435 = INT16_MIN;
	static volatile int32_t t182 = -3310;

    t182 = (x3433&(x3434>>(x3435%x3436)));

    if (t182 != 3) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x3437 = INT32_MIN;
	uint64_t t183 = 1422347700LLU;

    t183 = (x3437&(x3438>>(x3439%x3440)));

    if (t183 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x3485 = INT8_MIN;
	volatile int16_t x3486 = INT16_MAX;
	int64_t x3487 = -353LL;
	static int8_t x3488 = -1;
	static int32_t t184 = -108861024;

    t184 = (x3485&(x3486>>(x3487%x3488)));

    if (t184 != 32640) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x3493 = INT8_MAX;
	int8_t x3495 = -1;
	int16_t x3496 = -1;
	int32_t t185 = 5979;

    t185 = (x3493&(x3494>>(x3495%x3496)));

    if (t185 != 45) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x3497 = -2327145766LL;
	uint8_t x3499 = 5U;

    t186 = (x3497&(x3498>>(x3499%x3500)));

    if (t186 != 2LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint64_t x3509 = 44LLU;
	uint64_t x3510 = UINT64_MAX;
	int8_t x3511 = 0;
	static int64_t x3512 = INT64_MIN;

    t187 = (x3509&(x3510>>(x3511%x3512)));

    if (t187 != 44LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint32_t x3513 = 205U;
	uint64_t x3514 = UINT64_MAX;
	volatile int32_t x3515 = INT32_MIN;
	volatile int16_t x3516 = -1;

    t188 = (x3513&(x3514>>(x3515%x3516)));

    if (t188 != 205LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x3517 = -1LL;
	static int8_t x3520 = 1;
	int64_t t189 = INT64_MAX;

    t189 = (x3517&(x3518>>(x3519%x3520)));

    if (t189 != INT64_MAX) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x3525 = -207151375LL;
	int32_t x3526 = 77;
	volatile uint64_t x3527 = UINT64_MAX;
	static uint16_t x3528 = UINT16_MAX;
	volatile int64_t t190 = -18664756LL;

    t190 = (x3525&(x3526>>(x3527%x3528)));

    if (t190 != 65LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x3533 = INT8_MIN;
	volatile int32_t x3534 = 1;
	int8_t x3535 = 1;
	int32_t x3536 = INT32_MAX;
	int32_t t191 = -22990490;

    t191 = (x3533&(x3534>>(x3535%x3536)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x3569 = 1;
	uint16_t x3570 = 152U;
	static int32_t x3571 = INT32_MIN;
	int16_t x3572 = 1;

    t192 = (x3569&(x3570>>(x3571%x3572)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x3593 = UINT64_MAX;
	int8_t x3594 = 42;
	uint16_t x3595 = UINT16_MAX;
	int32_t x3596 = -1;

    t193 = (x3593&(x3594>>(x3595%x3596)));

    if (t193 != 42LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x3597 = UINT16_MAX;
	uint8_t x3598 = 0U;
	int16_t x3599 = -6;
	uint8_t x3600 = 1U;
	int32_t t194 = -8587182;

    t194 = (x3597&(x3598>>(x3599%x3600)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x3605 = -1;
	int64_t x3607 = INT64_MIN;
	int32_t x3608 = INT32_MIN;
	volatile int32_t t195 = 123054803;

    t195 = (x3605&(x3606>>(x3607%x3608)));

    if (t195 != 3921) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x3621 = INT64_MIN;
	volatile int32_t x3622 = INT32_MAX;
	volatile int64_t x3623 = INT64_MAX;
	static volatile uint16_t x3624 = 1U;
	int64_t t196 = 38987775899752230LL;

    t196 = (x3621&(x3622>>(x3623%x3624)));

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x3633 = INT64_MAX;
	uint64_t x3634 = 246048956LLU;
	uint64_t t197 = 514030006081LLU;

    t197 = (x3633&(x3634>>(x3635%x3636)));

    if (t197 != 246048956LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x3677 = 1U;
	static uint32_t x3678 = 131098U;
	volatile int32_t x3679 = 0;
	static int16_t x3680 = -1;
	volatile uint32_t t198 = 1U;

    t198 = (x3677&(x3678>>(x3679%x3680)));

    if (t198 != 0U) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x3689 = INT8_MIN;
	int8_t x3690 = INT8_MAX;
	int16_t x3692 = INT16_MAX;
	int32_t t199 = 35;

    t199 = (x3689&(x3690>>(x3691%x3692)));

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

