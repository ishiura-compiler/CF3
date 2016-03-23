
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

uint8_t x1 = 1U;
int8_t x2 = INT8_MIN;
volatile uint16_t x4 = 2U;
volatile uint64_t x30 = UINT64_MAX;
int16_t x31 = 3;
uint32_t x77 = 402790U;
static volatile int16_t x80 = 1979;
int64_t x97 = 40805630LL;
int8_t x108 = 1;
int64_t x110 = -1LL;
volatile int32_t t7 = -5;
static int64_t x115 = INT64_MAX;
int32_t t8 = -6161;
volatile int32_t x197 = 338;
int8_t x213 = INT8_MAX;
volatile int8_t x238 = INT8_MIN;
int8_t x308 = 31;
int32_t x323 = INT32_MIN;
uint64_t t22 = 1608561095LLU;
uint16_t x345 = 3U;
uint32_t x357 = 1012517306U;
int64_t x360 = INT64_MIN;
uint16_t x370 = UINT16_MAX;
int64_t x371 = INT64_MIN;
int16_t x397 = INT16_MAX;
uint16_t x399 = 7U;
volatile int32_t t26 = 4747566;
volatile uint16_t x435 = UINT16_MAX;
int32_t x451 = INT32_MIN;
static volatile int32_t t29 = 13972503;
uint64_t x481 = 56LLU;
int64_t x510 = INT64_MIN;
volatile int32_t t35 = -29658771;
volatile uint16_t x522 = 31U;
int16_t x523 = INT16_MIN;
static int16_t x537 = INT16_MAX;
static uint8_t x538 = 12U;
static int32_t x541 = INT32_MAX;
uint8_t x573 = UINT8_MAX;
static volatile int32_t t43 = 828615;
uint64_t x597 = UINT64_MAX;
uint64_t t45 = UINT64_MAX;
volatile int64_t x611 = INT64_MIN;
int8_t x626 = 0;
int8_t x635 = -3;
static volatile int32_t t48 = 72;
volatile int16_t x646 = -1;
int8_t x651 = INT8_MIN;
static int64_t x652 = INT64_MIN;
volatile int8_t x681 = 12;
static int32_t t54 = -772;
int64_t x706 = 2789LL;
int32_t x707 = INT32_MIN;
volatile int32_t x723 = 58645086;
static int8_t x753 = 1;
int8_t x755 = INT8_MAX;
uint8_t x765 = 4U;
uint64_t x813 = 8LLU;
volatile uint16_t x830 = 775U;
static volatile int32_t t66 = INT32_MAX;
volatile int32_t x839 = INT32_MAX;
uint8_t x841 = 4U;
static uint8_t x843 = 36U;
static uint8_t x846 = 2U;
static int16_t x847 = 1033;
int64_t x848 = -1LL;
int32_t t70 = 24;
uint32_t x857 = UINT32_MAX;
uint16_t x858 = 11U;
static volatile uint32_t t71 = UINT32_MAX;
int8_t x869 = INT8_MAX;
volatile int64_t x873 = 19656197962352811LL;
int8_t x875 = -15;
uint16_t x939 = 2218U;
volatile int32_t t75 = 53840;
volatile uint32_t x948 = UINT32_MAX;
volatile uint64_t t77 = 230813LLU;
int32_t x983 = 890059;
int64_t t80 = 17200LL;
static uint32_t x1003 = 14922U;
uint64_t t81 = 228116547777559085LLU;
int64_t x1015 = 5LL;
volatile int8_t x1016 = -1;
static volatile int64_t x1046 = 55108156145585LL;
volatile int32_t t84 = -3;
int32_t t86 = -110;
int32_t x1151 = INT32_MIN;
int16_t x1152 = INT16_MIN;
uint8_t x1153 = UINT8_MAX;
volatile int8_t x1169 = INT8_MAX;
uint8_t x1177 = 3U;
volatile uint64_t x1202 = 6656277LLU;
uint64_t x1203 = 912275768702LLU;
static int8_t x1220 = -1;
int8_t x1223 = INT8_MIN;
volatile uint64_t t94 = 929695LLU;
static volatile int32_t t95 = -12014078;
int32_t t96 = INT32_MAX;
volatile int32_t t97 = -6224173;
int16_t x1262 = INT16_MIN;
static volatile int32_t t101 = 851915029;
int32_t x1323 = INT32_MIN;
int32_t x1324 = 173316817;
static uint8_t x1347 = 6U;
int16_t x1368 = INT16_MAX;
int16_t x1370 = INT16_MAX;
int64_t x1372 = -24997LL;
int32_t t105 = INT32_MAX;
static volatile int32_t t106 = -8;
uint16_t x1403 = UINT16_MAX;
static uint16_t x1414 = 17449U;
static int16_t x1415 = INT16_MIN;
uint64_t t109 = UINT64_MAX;
static int8_t x1418 = INT8_MAX;
int16_t x1420 = INT16_MIN;
uint32_t t112 = UINT32_MAX;
int64_t x1446 = INT64_MAX;
uint16_t x1450 = 48U;
volatile int8_t x1472 = INT8_MAX;
volatile int32_t t115 = 21856;
static uint8_t x1488 = 106U;
static int64_t t116 = 1317945686LL;
uint64_t x1497 = 15720380LLU;
static int16_t x1500 = INT16_MIN;
uint8_t x1508 = 0U;
static int64_t x1525 = 1LL;
int8_t x1526 = -1;
static uint16_t x1527 = 7U;
int8_t x1531 = INT8_MIN;
volatile uint8_t x1532 = 1U;
volatile uint8_t x1539 = 0U;
int8_t x1565 = INT8_MAX;
uint64_t x1568 = 117861608757404LLU;
uint8_t x1634 = UINT8_MAX;
static int64_t x1636 = 739399717463261LL;
volatile int8_t x1646 = INT8_MIN;
uint16_t x1647 = 21U;
static volatile int32_t x1670 = 0;
static int16_t x1671 = INT16_MIN;
uint64_t x1705 = 135138378LLU;
static int32_t x1724 = -16348625;
volatile int64_t x1746 = INT64_MIN;
int32_t x1749 = 0;
int16_t x1750 = 6;
uint16_t x1751 = UINT16_MAX;
uint16_t x1756 = 2192U;
int32_t t135 = -120;
int8_t x1767 = INT8_MAX;
uint8_t x1780 = UINT8_MAX;
static int8_t x1786 = -1;
static uint16_t x1791 = 157U;
uint64_t x1792 = 1679975LLU;
uint8_t x1797 = UINT8_MAX;
static volatile int64_t x1798 = 67960756LL;
volatile int32_t x1800 = INT32_MIN;
uint32_t x1801 = UINT32_MAX;
uint8_t x1809 = 0U;
volatile int32_t x1811 = INT32_MIN;
int8_t x1884 = INT8_MIN;
uint16_t x1917 = 160U;
volatile uint32_t x1925 = 12076U;
int64_t x1934 = 46082276111LL;
int8_t x1936 = 48;
int16_t x1966 = INT16_MAX;
int32_t x1967 = -1;
int32_t x1968 = 0;
volatile int32_t x1989 = 1301;
static volatile uint8_t x2002 = 15U;
static uint8_t x2020 = 15U;
static volatile uint32_t x2021 = 3213U;
static volatile int32_t x2035 = INT32_MIN;
int16_t x2045 = 0;
int32_t x2071 = INT32_MAX;
uint32_t x2088 = 84U;
int32_t t161 = 370744;
volatile int32_t t162 = -603;
static volatile int32_t t164 = 161580;
static volatile uint32_t t165 = 3360489U;
int32_t t166 = -905129;
uint32_t x2142 = 46U;
volatile int64_t x2144 = 244965037898LL;
int32_t t169 = -29;
int8_t x2160 = 1;
int16_t x2220 = 9176;
volatile uint32_t t176 = UINT32_MAX;
static uint32_t x2253 = UINT32_MAX;
int8_t x2254 = INT8_MIN;
static volatile uint32_t t177 = UINT32_MAX;
uint8_t x2257 = 18U;
static volatile uint8_t x2266 = 0U;
static int8_t x2267 = INT8_MIN;
uint32_t x2269 = 32546U;
static uint32_t t180 = 2019368213U;
int16_t x2287 = -1;
uint16_t x2324 = 17U;
uint64_t x2351 = 9128762375LLU;
static uint64_t t185 = 687089586LLU;
volatile uint16_t x2377 = 121U;
uint8_t x2379 = 7U;
volatile int16_t x2380 = 33;
uint8_t x2397 = 3U;
static uint32_t x2398 = 3567634U;
uint16_t x2404 = 13411U;
uint64_t x2413 = 38703LLU;
volatile uint16_t x2415 = 6U;
static int64_t x2423 = 1501LL;
uint8_t x2424 = UINT8_MAX;
int8_t x2452 = 1;
static int32_t x2459 = -1;
uint64_t x2466 = 21703852548298031LLU;
static int64_t x2502 = 2456221519370364340LL;


void f0(void) {
    	uint64_t x3 = UINT64_MAX;
	int32_t t0 = 107360971;

    t0 = (x1>>(x2&(x3&x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x29 = 2311LLU;
	static int16_t x32 = INT16_MAX;
	volatile uint64_t t1 = 33959LLU;

    t1 = (x29>>(x30&(x31&x32)));

    if (t1 != 288LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint64_t x41 = 732988531115920978LLU;
	static uint8_t x42 = UINT8_MAX;
	int8_t x43 = INT8_MAX;
	volatile uint8_t x44 = 3U;
	static volatile uint64_t t2 = 1461LLU;

    t2 = (x41>>(x42&(x43&x44)));

    if (t2 != 91623566389490122LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x53 = UINT16_MAX;
	volatile int16_t x54 = INT16_MAX;
	int32_t x55 = 1;
	int32_t x56 = -1;
	volatile int32_t t3 = 359;

    t3 = (x53>>(x54&(x55&x56)));

    if (t3 != 32767) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint32_t x78 = UINT32_MAX;
	int8_t x79 = 0;
	static uint32_t t4 = 444U;

    t4 = (x77>>(x78&(x79&x80)));

    if (t4 != 402790U) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x98 = 1690975004547672867LL;
	int8_t x99 = INT8_MAX;
	volatile uint8_t x100 = UINT8_MAX;
	static int64_t t5 = -6550657LL;

    t5 = (x97>>(x98&(x99&x100)));

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x105 = INT64_MAX;
	int8_t x106 = INT8_MIN;
	uint32_t x107 = UINT32_MAX;
	volatile int64_t t6 = INT64_MAX;

    t6 = (x105>>(x106&(x107&x108)));

    if (t6 != INT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x109 = INT16_MAX;
	volatile uint8_t x111 = 30U;
	int8_t x112 = INT8_MIN;

    t7 = (x109>>(x110&(x111&x112)));

    if (t7 != 32767) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x113 = 1;
	int8_t x114 = 6;
	volatile int64_t x116 = -108LL;

    t8 = (x113>>(x114&(x115&x116)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x141 = UINT16_MAX;
	uint8_t x142 = 15U;
	volatile uint32_t x143 = 226848U;
	static volatile uint32_t x144 = UINT32_MAX;
	int32_t t9 = 43301;

    t9 = (x141>>(x142&(x143&x144)));

    if (t9 != 65535) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x157 = 1;
	uint64_t x158 = 121096426862545LLU;
	int16_t x159 = 0;
	int32_t x160 = -1;
	volatile int32_t t10 = 11198822;

    t10 = (x157>>(x158&(x159&x160)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint64_t x181 = 341028638894LLU;
	uint32_t x182 = 1208U;
	int16_t x183 = INT16_MAX;
	volatile int16_t x184 = INT16_MIN;
	volatile uint64_t t11 = 303571504381105614LLU;

    t11 = (x181>>(x182&(x183&x184)));

    if (t11 != 341028638894LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint8_t x189 = 2U;
	int16_t x190 = -407;
	int8_t x191 = -1;
	uint8_t x192 = 29U;
	static int32_t t12 = 979464;

    t12 = (x189>>(x190&(x191&x192)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x198 = -1;
	int64_t x199 = INT64_MIN;
	static uint8_t x200 = UINT8_MAX;
	int32_t t13 = 0;

    t13 = (x197>>(x198&(x199&x200)));

    if (t13 != 338) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x201 = 443683215126LL;
	static int32_t x202 = INT32_MIN;
	int8_t x203 = INT8_MAX;
	int64_t x204 = INT64_MIN;
	static int64_t t14 = 101020LL;

    t14 = (x201>>(x202&(x203&x204)));

    if (t14 != 443683215126LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x214 = 55U;
	uint64_t x215 = 26186889LLU;
	int32_t x216 = -388862;
	static volatile int32_t t15 = -41015;

    t15 = (x213>>(x214&(x215&x216)));

    if (t15 != 127) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int8_t x229 = 1;
	uint8_t x230 = 3U;
	static int16_t x231 = -1;
	static int64_t x232 = 37614854561361LL;
	int32_t t16 = -250;

    t16 = (x229>>(x230&(x231&x232)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x233 = UINT64_MAX;
	static int32_t x234 = INT32_MIN;
	int16_t x235 = 43;
	volatile uint16_t x236 = 4021U;
	uint64_t t17 = UINT64_MAX;

    t17 = (x233>>(x234&(x235&x236)));

    if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x237 = INT8_MAX;
	static uint8_t x239 = 12U;
	volatile int64_t x240 = INT64_MIN;
	volatile int32_t t18 = 42;

    t18 = (x237>>(x238&(x239&x240)));

    if (t18 != 127) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x297 = 1LL;
	uint32_t x298 = UINT32_MAX;
	static volatile int16_t x299 = INT16_MAX;
	int32_t x300 = 1;
	volatile int64_t t19 = 0LL;

    t19 = (x297>>(x298&(x299&x300)));

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x305 = 5U;
	uint32_t x306 = 9250743U;
	int32_t x307 = INT32_MIN;
	int32_t t20 = -8957;

    t20 = (x305>>(x306&(x307&x308)));

    if (t20 != 5) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint32_t x321 = UINT32_MAX;
	int16_t x322 = INT16_MIN;
	int8_t x324 = 1;
	uint32_t t21 = UINT32_MAX;

    t21 = (x321>>(x322&(x323&x324)));

    if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x341 = 688563919483997LLU;
	int64_t x342 = 434063545426718515LL;
	uint16_t x343 = 5U;
	static uint64_t x344 = 38LLU;

    t22 = (x341>>(x342&(x343&x344)));

    if (t22 != 688563919483997LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x346 = UINT32_MAX;
	int16_t x347 = INT16_MIN;
	int64_t x348 = 32238LL;
	int32_t t23 = 179051;

    t23 = (x345>>(x346&(x347&x348)));

    if (t23 != 3) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int64_t x358 = INT64_MAX;
	volatile int8_t x359 = -1;
	uint32_t t24 = 11U;

    t24 = (x357>>(x358&(x359&x360)));

    if (t24 != 1012517306U) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint8_t x369 = UINT8_MAX;
	int32_t x372 = INT32_MIN;
	volatile int32_t t25 = -4370;

    t25 = (x369>>(x370&(x371&x372)));

    if (t25 != 255) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint16_t x398 = 1U;
	static int64_t x400 = -16722823514597521LL;

    t26 = (x397>>(x398&(x399&x400)));

    if (t26 != 16383) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x429 = 392513271U;
	static uint8_t x430 = 1U;
	uint64_t x431 = 759119LLU;
	int64_t x432 = INT64_MIN;
	static volatile uint32_t t27 = 100176U;

    t27 = (x429>>(x430&(x431&x432)));

    if (t27 != 392513271U) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int32_t x433 = 866870857;
	int64_t x434 = INT64_MIN;
	uint64_t x436 = 57LLU;
	volatile int32_t t28 = -3;

    t28 = (x433>>(x434&(x435&x436)));

    if (t28 != 866870857) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x449 = 959U;
	static volatile int32_t x450 = 38602597;
	volatile int8_t x452 = INT8_MIN;

    t29 = (x449>>(x450&(x451&x452)));

    if (t29 != 959) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x453 = 4U;
	static volatile uint64_t x454 = 126LLU;
	static uint8_t x455 = UINT8_MAX;
	uint16_t x456 = 1U;
	volatile int32_t t30 = -1;

    t30 = (x453>>(x454&(x455&x456)));

    if (t30 != 4) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x457 = 1;
	static uint64_t x458 = 1654481411728907668LLU;
	volatile int64_t x459 = INT64_MIN;
	static int64_t x460 = -4118LL;
	int32_t t31 = -12;

    t31 = (x457>>(x458&(x459&x460)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x469 = 431;
	int16_t x470 = 65;
	static int8_t x471 = 39;
	uint8_t x472 = 3U;
	volatile int32_t t32 = -582;

    t32 = (x469>>(x470&(x471&x472)));

    if (t32 != 215) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x482 = UINT8_MAX;
	int16_t x483 = INT16_MIN;
	uint32_t x484 = 1005237U;
	uint64_t t33 = 7303417LLU;

    t33 = (x481>>(x482&(x483&x484)));

    if (t33 != 56LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x493 = 93U;
	static int32_t x494 = -1760;
	int32_t x495 = 408127830;
	uint8_t x496 = 7U;
	int32_t t34 = -1821;

    t34 = (x493>>(x494&(x495&x496)));

    if (t34 != 93) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x509 = 5U;
	int32_t x511 = 223;
	volatile int64_t x512 = -30661LL;

    t35 = (x509>>(x510&(x511&x512)));

    if (t35 != 5) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x521 = 2425U;
	static uint32_t x524 = UINT32_MAX;
	volatile int32_t t36 = -63898;

    t36 = (x521>>(x522&(x523&x524)));

    if (t36 != 2425) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x525 = INT8_MAX;
	int64_t x526 = -152493369620003LL;
	uint8_t x527 = 41U;
	static int32_t x528 = INT32_MIN;
	int32_t t37 = -1;

    t37 = (x525>>(x526&(x527&x528)));

    if (t37 != 127) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x539 = INT32_MIN;
	uint64_t x540 = 482749222452LLU;
	static int32_t t38 = 386;

    t38 = (x537>>(x538&(x539&x540)));

    if (t38 != 32767) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x542 = -1;
	int8_t x543 = 23;
	volatile int8_t x544 = -63;
	int32_t t39 = 29;

    t39 = (x541>>(x542&(x543&x544)));

    if (t39 != 1073741823) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x553 = UINT16_MAX;
	int64_t x554 = -1LL;
	int32_t x555 = 416936976;
	int32_t x556 = INT32_MIN;
	int32_t t40 = -191612;

    t40 = (x553>>(x554&(x555&x556)));

    if (t40 != 65535) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint16_t x565 = UINT16_MAX;
	int8_t x566 = INT8_MAX;
	int64_t x567 = 16509113114LL;
	int8_t x568 = -23;
	volatile int32_t t41 = -1;

    t41 = (x565>>(x566&(x567&x568)));

    if (t41 != 255) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x574 = -4600;
	static int64_t x575 = 1LL;
	volatile int64_t x576 = INT64_MIN;
	volatile int32_t t42 = -1;

    t42 = (x573>>(x574&(x575&x576)));

    if (t42 != 255) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x581 = INT32_MAX;
	uint16_t x582 = 185U;
	uint8_t x583 = 1U;
	int64_t x584 = -5573LL;

    t43 = (x581>>(x582&(x583&x584)));

    if (t43 != 1073741823) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x593 = 247LLU;
	static uint16_t x594 = 41U;
	volatile int8_t x595 = -5;
	uint16_t x596 = UINT16_MAX;
	static uint64_t t44 = 11658LLU;

    t44 = (x593>>(x594&(x595&x596)));

    if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int32_t x598 = INT32_MAX;
	int64_t x599 = INT64_MIN;
	int64_t x600 = 536364461LL;

    t45 = (x597>>(x598&(x599&x600)));

    if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x609 = 7355332897668LLU;
	int16_t x610 = 3;
	static uint16_t x612 = 0U;
	static uint64_t t46 = 1305667768863625LLU;

    t46 = (x609>>(x610&(x611&x612)));

    if (t46 != 7355332897668LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x625 = 1;
	static int8_t x627 = INT8_MAX;
	int32_t x628 = INT32_MIN;
	volatile int32_t t47 = 2;

    t47 = (x625>>(x626&(x627&x628)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x633 = 1;
	uint16_t x634 = 0U;
	static uint32_t x636 = 0U;

    t48 = (x633>>(x634&(x635&x636)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x641 = UINT16_MAX;
	volatile int8_t x642 = 1;
	int64_t x643 = INT64_MAX;
	uint32_t x644 = 2569U;
	int32_t t49 = -168;

    t49 = (x641>>(x642&(x643&x644)));

    if (t49 != 32767) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint16_t x645 = 0U;
	uint8_t x647 = 0U;
	int32_t x648 = INT32_MIN;
	int32_t t50 = 0;

    t50 = (x645>>(x646&(x647&x648)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int64_t x649 = INT64_MAX;
	uint16_t x650 = 54U;
	int64_t t51 = INT64_MAX;

    t51 = (x649>>(x650&(x651&x652)));

    if (t51 != INT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x653 = 8933U;
	int8_t x654 = -5;
	volatile int32_t x655 = INT32_MAX;
	int32_t x656 = 0;
	volatile uint32_t t52 = 225854U;

    t52 = (x653>>(x654&(x655&x656)));

    if (t52 != 8933U) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile uint16_t x665 = UINT16_MAX;
	int8_t x666 = 45;
	int8_t x667 = INT8_MIN;
	volatile int8_t x668 = 1;
	int32_t t53 = -999114664;

    t53 = (x665>>(x666&(x667&x668)));

    if (t53 != 65535) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x682 = -1;
	static int8_t x683 = 3;
	int32_t x684 = INT32_MAX;

    t54 = (x681>>(x682&(x683&x684)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x685 = INT16_MAX;
	uint16_t x686 = 472U;
	int64_t x687 = INT64_MIN;
	int32_t x688 = -24699266;
	volatile int32_t t55 = -4200;

    t55 = (x685>>(x686&(x687&x688)));

    if (t55 != 32767) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x701 = UINT8_MAX;
	int16_t x702 = 58;
	uint8_t x703 = 123U;
	uint16_t x704 = 15U;
	volatile int32_t t56 = 7;

    t56 = (x701>>(x702&(x703&x704)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x705 = 11U;
	static volatile int64_t x708 = INT64_MIN;
	volatile int32_t t57 = -2;

    t57 = (x705>>(x706&(x707&x708)));

    if (t57 != 11) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x721 = 18U;
	static int16_t x722 = INT16_MIN;
	int16_t x724 = 15724;
	int32_t t58 = -3894199;

    t58 = (x721>>(x722&(x723&x724)));

    if (t58 != 18) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x754 = 0U;
	uint64_t x756 = UINT64_MAX;
	volatile int32_t t59 = 9841779;

    t59 = (x753>>(x754&(x755&x756)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static int64_t x766 = -1LL;
	int8_t x767 = INT8_MAX;
	volatile int64_t x768 = INT64_MIN;
	static volatile int32_t t60 = -233670;

    t60 = (x765>>(x766&(x767&x768)));

    if (t60 != 4) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x777 = INT8_MAX;
	int8_t x778 = INT8_MIN;
	uint16_t x779 = 0U;
	int64_t x780 = INT64_MIN;
	int32_t t61 = 35;

    t61 = (x777>>(x778&(x779&x780)));

    if (t61 != 127) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x781 = 103585U;
	static volatile int32_t x782 = INT32_MIN;
	int64_t x783 = INT64_MIN;
	volatile int8_t x784 = 1;
	uint32_t t62 = 121U;

    t62 = (x781>>(x782&(x783&x784)));

    if (t62 != 103585U) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x793 = 12U;
	int32_t x794 = INT32_MIN;
	int32_t x795 = -15;
	int32_t x796 = 296860;
	volatile uint32_t t63 = 11U;

    t63 = (x793>>(x794&(x795&x796)));

    if (t63 != 12U) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x814 = -1;
	static uint16_t x815 = UINT16_MAX;
	uint16_t x816 = 5U;
	uint64_t t64 = 7335LLU;

    t64 = (x813>>(x814&(x815&x816)));

    if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x825 = INT8_MAX;
	volatile uint32_t x826 = 1966924U;
	uint16_t x827 = 90U;
	uint32_t x828 = 37U;
	volatile int32_t t65 = 273883;

    t65 = (x825>>(x826&(x827&x828)));

    if (t65 != 127) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x829 = INT32_MAX;
	int16_t x831 = INT16_MIN;
	uint8_t x832 = 19U;

    t66 = (x829>>(x830&(x831&x832)));

    if (t66 != INT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile uint64_t x837 = 107087235172154351LLU;
	int32_t x838 = -7652950;
	int16_t x840 = 125;
	static uint64_t t67 = 135013063958385717LLU;

    t67 = (x837>>(x838&(x839&x840)));

    if (t67 != 97395LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x842 = UINT8_MAX;
	volatile uint16_t x844 = 1U;
	volatile int32_t t68 = 29;

    t68 = (x841>>(x842&(x843&x844)));

    if (t68 != 4) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x845 = 3255103389LL;
	volatile int64_t t69 = 1426473470363LL;

    t69 = (x845>>(x846&(x847&x848)));

    if (t69 != 3255103389LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x853 = 29U;
	static uint16_t x854 = 24U;
	static uint64_t x855 = UINT64_MAX;
	uint8_t x856 = 1U;

    t70 = (x853>>(x854&(x855&x856)));

    if (t70 != 29) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t x859 = INT32_MIN;
	uint32_t x860 = UINT32_MAX;

    t71 = (x857>>(x858&(x859&x860)));

    if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x870 = INT32_MAX;
	uint8_t x871 = UINT8_MAX;
	int8_t x872 = 5;
	volatile int32_t t72 = -4006670;

    t72 = (x869>>(x870&(x871&x872)));

    if (t72 != 3) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x874 = INT16_MAX;
	int32_t x876 = INT32_MIN;
	static int64_t t73 = 1172970551495LL;

    t73 = (x873>>(x874&(x875&x876)));

    if (t73 != 19656197962352811LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x893 = INT32_MAX;
	static int8_t x894 = 7;
	int8_t x895 = INT8_MIN;
	uint8_t x896 = UINT8_MAX;
	volatile int32_t t74 = INT32_MAX;

    t74 = (x893>>(x894&(x895&x896)));

    if (t74 != INT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x937 = 1U;
	uint16_t x938 = 5U;
	volatile int64_t x940 = INT64_MAX;

    t75 = (x937>>(x938&(x939&x940)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x945 = 2817LLU;
	uint32_t x946 = 82537019U;
	static volatile int32_t x947 = INT32_MIN;
	volatile uint64_t t76 = 191652908112LLU;

    t76 = (x945>>(x946&(x947&x948)));

    if (t76 != 2817LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x965 = 75785426023945885LLU;
	uint8_t x966 = 30U;
	uint32_t x967 = 1U;
	uint8_t x968 = UINT8_MAX;

    t77 = (x965>>(x966&(x967&x968)));

    if (t77 != 75785426023945885LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint16_t x973 = 7784U;
	uint8_t x974 = 7U;
	int64_t x975 = -1LL;
	int16_t x976 = INT16_MIN;
	int32_t t78 = -22;

    t78 = (x973>>(x974&(x975&x976)));

    if (t78 != 7784) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint16_t x981 = 1U;
	static int64_t x982 = -44981181859203LL;
	int64_t x984 = INT64_MIN;
	volatile int32_t t79 = -7013212;

    t79 = (x981>>(x982&(x983&x984)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x989 = 3275737538563273892LL;
	uint32_t x990 = 845U;
	int32_t x991 = -1024861;
	int64_t x992 = INT64_MIN;

    t80 = (x989>>(x990&(x991&x992)));

    if (t80 != 3275737538563273892LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint64_t x1001 = 42326756983947LLU;
	int16_t x1002 = INT16_MAX;
	uint16_t x1004 = 0U;

    t81 = (x1001>>(x1002&(x1003&x1004)));

    if (t81 != 42326756983947LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x1013 = INT16_MAX;
	int8_t x1014 = -1;
	volatile int32_t t82 = -24;

    t82 = (x1013>>(x1014&(x1015&x1016)));

    if (t82 != 1023) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x1045 = INT32_MAX;
	int32_t x1047 = 308081;
	uint8_t x1048 = 2U;
	int32_t t83 = INT32_MAX;

    t83 = (x1045>>(x1046&(x1047&x1048)));

    if (t83 != INT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x1049 = 8;
	volatile int32_t x1050 = INT32_MIN;
	volatile int8_t x1051 = -1;
	uint16_t x1052 = UINT16_MAX;

    t84 = (x1049>>(x1050&(x1051&x1052)));

    if (t84 != 8) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x1077 = 8U;
	int64_t x1078 = -261630505728453478LL;
	int8_t x1079 = INT8_MAX;
	int8_t x1080 = 0;
	volatile int32_t t85 = -3676;

    t85 = (x1077>>(x1078&(x1079&x1080)));

    if (t85 != 8) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint8_t x1125 = 5U;
	int16_t x1126 = INT16_MIN;
	int16_t x1127 = INT16_MIN;
	int8_t x1128 = INT8_MAX;

    t86 = (x1125>>(x1126&(x1127&x1128)));

    if (t86 != 5) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint32_t x1149 = UINT32_MAX;
	int8_t x1150 = 10;
	static uint32_t t87 = UINT32_MAX;

    t87 = (x1149>>(x1150&(x1151&x1152)));

    if (t87 != UINT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x1154 = 61U;
	volatile int8_t x1155 = 7;
	int8_t x1156 = INT8_MAX;
	int32_t t88 = -310;

    t88 = (x1153>>(x1154&(x1155&x1156)));

    if (t88 != 7) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x1170 = INT32_MIN;
	uint32_t x1171 = UINT32_MAX;
	uint32_t x1172 = 8896625U;
	volatile int32_t t89 = 1442616;

    t89 = (x1169>>(x1170&(x1171&x1172)));

    if (t89 != 127) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x1178 = -29;
	int16_t x1179 = -1;
	uint8_t x1180 = 0U;
	int32_t t90 = 20143;

    t90 = (x1177>>(x1178&(x1179&x1180)));

    if (t90 != 3) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x1181 = INT8_MAX;
	uint8_t x1182 = 26U;
	static int8_t x1183 = 18;
	int32_t x1184 = INT32_MIN;
	int32_t t91 = 1023610;

    t91 = (x1181>>(x1182&(x1183&x1184)));

    if (t91 != 127) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint8_t x1201 = UINT8_MAX;
	uint8_t x1204 = 3U;
	volatile int32_t t92 = 2267;

    t92 = (x1201>>(x1202&(x1203&x1204)));

    if (t92 != 255) { NG(); } else { ; }
	
}

void f93(void) {
    	static int64_t x1217 = INT64_MAX;
	uint8_t x1218 = 16U;
	int8_t x1219 = 45;
	int64_t t93 = INT64_MAX;

    t93 = (x1217>>(x1218&(x1219&x1220)));

    if (t93 != INT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint64_t x1221 = 475434375048670LLU;
	uint8_t x1222 = 1U;
	uint16_t x1224 = 2220U;

    t94 = (x1221>>(x1222&(x1223&x1224)));

    if (t94 != 475434375048670LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x1229 = UINT16_MAX;
	volatile uint8_t x1230 = 29U;
	int64_t x1231 = -1LL;
	int8_t x1232 = INT8_MIN;

    t95 = (x1229>>(x1230&(x1231&x1232)));

    if (t95 != 65535) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x1233 = INT32_MAX;
	static uint16_t x1234 = UINT16_MAX;
	int8_t x1235 = INT8_MIN;
	int8_t x1236 = INT8_MAX;

    t96 = (x1233>>(x1234&(x1235&x1236)));

    if (t96 != INT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x1253 = INT16_MAX;
	uint32_t x1254 = 123U;
	int32_t x1255 = 333;
	static volatile uint16_t x1256 = 16U;

    t97 = (x1253>>(x1254&(x1255&x1256)));

    if (t97 != 32767) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x1257 = 36U;
	int16_t x1258 = INT16_MIN;
	volatile int8_t x1259 = -1;
	int8_t x1260 = 1;
	int32_t t98 = 10219462;

    t98 = (x1257>>(x1258&(x1259&x1260)));

    if (t98 != 36) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint16_t x1261 = 217U;
	volatile uint8_t x1263 = 17U;
	static int64_t x1264 = INT64_MIN;
	static int32_t t99 = -6726498;

    t99 = (x1261>>(x1262&(x1263&x1264)));

    if (t99 != 217) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x1285 = INT8_MAX;
	volatile int16_t x1286 = -1;
	static int8_t x1287 = -3;
	static uint8_t x1288 = 6U;
	static int32_t t100 = 0;

    t100 = (x1285>>(x1286&(x1287&x1288)));

    if (t100 != 7) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x1297 = UINT8_MAX;
	uint8_t x1298 = UINT8_MAX;
	volatile int8_t x1299 = 4;
	volatile uint32_t x1300 = UINT32_MAX;

    t101 = (x1297>>(x1298&(x1299&x1300)));

    if (t101 != 15) { NG(); } else { ; }
	
}

void f102(void) {
    	static int64_t x1321 = INT64_MAX;
	int64_t x1322 = -1LL;
	volatile int64_t t102 = INT64_MAX;

    t102 = (x1321>>(x1322&(x1323&x1324)));

    if (t102 != INT64_MAX) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x1345 = 8U;
	static uint8_t x1346 = UINT8_MAX;
	int16_t x1348 = 1;
	volatile int32_t t103 = -1;

    t103 = (x1345>>(x1346&(x1347&x1348)));

    if (t103 != 8) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint8_t x1365 = UINT8_MAX;
	int8_t x1366 = INT8_MIN;
	uint8_t x1367 = 99U;
	int32_t t104 = 3124424;

    t104 = (x1365>>(x1366&(x1367&x1368)));

    if (t104 != 255) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x1369 = INT32_MAX;
	volatile int32_t x1371 = INT32_MIN;

    t105 = (x1369>>(x1370&(x1371&x1372)));

    if (t105 != INT32_MAX) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x1393 = 3051;
	int64_t x1394 = INT64_MAX;
	static volatile int64_t x1395 = INT64_MIN;
	int64_t x1396 = -1LL;

    t106 = (x1393>>(x1394&(x1395&x1396)));

    if (t106 != 3051) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x1401 = UINT16_MAX;
	volatile int8_t x1402 = INT8_MIN;
	uint8_t x1404 = 1U;
	static int32_t t107 = -1222;

    t107 = (x1401>>(x1402&(x1403&x1404)));

    if (t107 != 65535) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x1409 = UINT8_MAX;
	int64_t x1410 = -1LL;
	static uint32_t x1411 = 203980U;
	int8_t x1412 = 3;
	int32_t t108 = -38;

    t108 = (x1409>>(x1410&(x1411&x1412)));

    if (t108 != 255) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint64_t x1413 = UINT64_MAX;
	int32_t x1416 = INT32_MIN;

    t109 = (x1413>>(x1414&(x1415&x1416)));

    if (t109 != UINT64_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint64_t x1417 = UINT64_MAX;
	int8_t x1419 = -9;
	static volatile uint64_t t110 = UINT64_MAX;

    t110 = (x1417>>(x1418&(x1419&x1420)));

    if (t110 != UINT64_MAX) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x1429 = 151492U;
	int8_t x1430 = -1;
	volatile uint8_t x1431 = 3U;
	int64_t x1432 = -1LL;
	uint32_t t111 = 8284571U;

    t111 = (x1429>>(x1430&(x1431&x1432)));

    if (t111 != 18936U) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x1437 = UINT32_MAX;
	int16_t x1438 = 2237;
	int64_t x1439 = INT64_MIN;
	int8_t x1440 = INT8_MIN;

    t112 = (x1437>>(x1438&(x1439&x1440)));

    if (t112 != UINT32_MAX) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x1445 = INT16_MAX;
	volatile uint16_t x1447 = 17679U;
	uint8_t x1448 = 13U;
	int32_t t113 = -13059;

    t113 = (x1445>>(x1446&(x1447&x1448)));

    if (t113 != 3) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x1449 = 2U;
	int8_t x1451 = 5;
	static int8_t x1452 = INT8_MAX;
	volatile int32_t t114 = -4135;

    t114 = (x1449>>(x1450&(x1451&x1452)));

    if (t114 != 2) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x1469 = UINT16_MAX;
	int16_t x1470 = -5;
	uint8_t x1471 = 14U;

    t115 = (x1469>>(x1470&(x1471&x1472)));

    if (t115 != 63) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x1485 = 80657LL;
	int64_t x1486 = INT64_MIN;
	static int16_t x1487 = INT16_MIN;

    t116 = (x1485>>(x1486&(x1487&x1488)));

    if (t116 != 80657LL) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x1498 = 19192U;
	int32_t x1499 = INT32_MAX;
	volatile uint64_t t117 = 25232740087177643LLU;

    t117 = (x1497>>(x1498&(x1499&x1500)));

    if (t117 != 15720380LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x1505 = 244737LLU;
	uint8_t x1506 = 11U;
	int8_t x1507 = -5;
	volatile uint64_t t118 = 8651369222LLU;

    t118 = (x1505>>(x1506&(x1507&x1508)));

    if (t118 != 244737LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x1528 = UINT64_MAX;
	volatile int64_t t119 = -345LL;

    t119 = (x1525>>(x1526&(x1527&x1528)));

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x1529 = 1425774750U;
	int32_t x1530 = -1;
	static uint32_t t120 = 208017708U;

    t120 = (x1529>>(x1530&(x1531&x1532)));

    if (t120 != 1425774750U) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint32_t x1537 = 242578157U;
	int8_t x1538 = 13;
	uint32_t x1540 = 107U;
	volatile uint32_t t121 = 25796U;

    t121 = (x1537>>(x1538&(x1539&x1540)));

    if (t121 != 242578157U) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x1566 = INT64_MIN;
	int8_t x1567 = 23;
	int32_t t122 = 1;

    t122 = (x1565>>(x1566&(x1567&x1568)));

    if (t122 != 127) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x1593 = INT8_MAX;
	int64_t x1594 = INT64_MIN;
	uint16_t x1595 = UINT16_MAX;
	int16_t x1596 = INT16_MIN;
	int32_t t123 = 6253785;

    t123 = (x1593>>(x1594&(x1595&x1596)));

    if (t123 != 127) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int32_t x1597 = 695;
	static int8_t x1598 = INT8_MAX;
	uint8_t x1599 = 11U;
	int8_t x1600 = INT8_MIN;
	int32_t t124 = 9266655;

    t124 = (x1597>>(x1598&(x1599&x1600)));

    if (t124 != 695) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x1633 = 84565083;
	uint8_t x1635 = 23U;
	volatile int32_t t125 = 156777496;

    t125 = (x1633>>(x1634&(x1635&x1636)));

    if (t125 != 40) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x1645 = 398U;
	static int8_t x1648 = -1;
	volatile uint32_t t126 = 301U;

    t126 = (x1645>>(x1646&(x1647&x1648)));

    if (t126 != 398U) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x1661 = 534;
	int8_t x1662 = 1;
	uint16_t x1663 = UINT16_MAX;
	static int32_t x1664 = -1;
	volatile int32_t t127 = -6283;

    t127 = (x1661>>(x1662&(x1663&x1664)));

    if (t127 != 267) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x1669 = 5;
	int64_t x1672 = INT64_MIN;
	int32_t t128 = -13;

    t128 = (x1669>>(x1670&(x1671&x1672)));

    if (t128 != 5) { NG(); } else { ; }
	
}

void f129(void) {
    	static int32_t x1706 = -1;
	uint8_t x1707 = 27U;
	int64_t x1708 = INT64_MAX;
	uint64_t t129 = 11382444989406LLU;

    t129 = (x1705>>(x1706&(x1707&x1708)));

    if (t129 != 1LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	static int16_t x1721 = INT16_MAX;
	uint8_t x1722 = UINT8_MAX;
	static int16_t x1723 = INT16_MIN;
	static int32_t t130 = 24610;

    t130 = (x1721>>(x1722&(x1723&x1724)));

    if (t130 != 32767) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x1737 = INT8_MAX;
	int64_t x1738 = INT64_MIN;
	static int16_t x1739 = INT16_MIN;
	volatile int8_t x1740 = INT8_MAX;
	volatile int32_t t131 = 169961;

    t131 = (x1737>>(x1738&(x1739&x1740)));

    if (t131 != 127) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int64_t x1745 = 116596261LL;
	uint8_t x1747 = UINT8_MAX;
	uint64_t x1748 = 590871256787LLU;
	volatile int64_t t132 = -2490977816LL;

    t132 = (x1745>>(x1746&(x1747&x1748)));

    if (t132 != 116596261LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x1752 = -1;
	volatile int32_t t133 = 29661863;

    t133 = (x1749>>(x1750&(x1751&x1752)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x1753 = 110U;
	static volatile int32_t x1754 = INT32_MIN;
	uint16_t x1755 = 0U;
	volatile uint32_t t134 = 3U;

    t134 = (x1753>>(x1754&(x1755&x1756)));

    if (t134 != 110U) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint8_t x1761 = UINT8_MAX;
	static volatile uint16_t x1762 = 166U;
	int32_t x1763 = INT32_MIN;
	int64_t x1764 = -6357LL;

    t135 = (x1761>>(x1762&(x1763&x1764)));

    if (t135 != 255) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x1765 = UINT16_MAX;
	static int8_t x1766 = INT8_MIN;
	volatile uint64_t x1768 = UINT64_MAX;
	static volatile int32_t t136 = 0;

    t136 = (x1765>>(x1766&(x1767&x1768)));

    if (t136 != 65535) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint8_t x1777 = 17U;
	static int16_t x1778 = INT16_MIN;
	uint32_t x1779 = 9U;
	static int32_t t137 = 29;

    t137 = (x1777>>(x1778&(x1779&x1780)));

    if (t137 != 17) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x1785 = 44LLU;
	static int8_t x1787 = 1;
	static int16_t x1788 = 7;
	static uint64_t t138 = 3349LLU;

    t138 = (x1785>>(x1786&(x1787&x1788)));

    if (t138 != 22LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x1789 = 75U;
	int16_t x1790 = -1;
	int32_t t139 = -194802916;

    t139 = (x1789>>(x1790&(x1791&x1792)));

    if (t139 != 2) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x1799 = 1U;
	volatile int32_t t140 = -199917;

    t140 = (x1797>>(x1798&(x1799&x1800)));

    if (t140 != 255) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint16_t x1802 = UINT16_MAX;
	int64_t x1803 = INT64_MAX;
	int8_t x1804 = 1;
	volatile uint32_t t141 = 1421U;

    t141 = (x1801>>(x1802&(x1803&x1804)));

    if (t141 != 2147483647U) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x1810 = 1064185890172700532LLU;
	static volatile int64_t x1812 = INT64_MIN;
	volatile int32_t t142 = 3244347;

    t142 = (x1809>>(x1810&(x1811&x1812)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile uint8_t x1833 = UINT8_MAX;
	int8_t x1834 = -33;
	int16_t x1835 = INT16_MAX;
	uint8_t x1836 = 0U;
	int32_t t143 = 411965;

    t143 = (x1833>>(x1834&(x1835&x1836)));

    if (t143 != 255) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x1853 = 16120095366289LLU;
	uint8_t x1854 = 1U;
	int8_t x1855 = 1;
	static int32_t x1856 = INT32_MAX;
	volatile uint64_t t144 = 2LLU;

    t144 = (x1853>>(x1854&(x1855&x1856)));

    if (t144 != 8060047683144LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint64_t x1881 = 0LLU;
	int64_t x1882 = INT64_MIN;
	uint32_t x1883 = UINT32_MAX;
	static volatile uint64_t t145 = 17231077326011246LLU;

    t145 = (x1881>>(x1882&(x1883&x1884)));

    if (t145 != 0LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x1918 = 20916U;
	int8_t x1919 = INT8_MIN;
	uint16_t x1920 = 0U;
	volatile int32_t t146 = 0;

    t146 = (x1917>>(x1918&(x1919&x1920)));

    if (t146 != 160) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x1926 = INT32_MIN;
	int32_t x1927 = INT32_MIN;
	int8_t x1928 = 13;
	volatile uint32_t t147 = 110U;

    t147 = (x1925>>(x1926&(x1927&x1928)));

    if (t147 != 12076U) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x1933 = 15U;
	int64_t x1935 = INT64_MAX;
	volatile int32_t t148 = 1;

    t148 = (x1933>>(x1934&(x1935&x1936)));

    if (t148 != 15) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x1945 = 0;
	int64_t x1946 = INT64_MIN;
	int32_t x1947 = INT32_MIN;
	int8_t x1948 = 29;
	int32_t t149 = -65;

    t149 = (x1945>>(x1946&(x1947&x1948)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x1965 = INT64_MAX;
	volatile int64_t t150 = INT64_MAX;

    t150 = (x1965>>(x1966&(x1967&x1968)));

    if (t150 != INT64_MAX) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint8_t x1973 = 62U;
	static uint32_t x1974 = 22952725U;
	int16_t x1975 = -1;
	uint64_t x1976 = 8LLU;
	int32_t t151 = -800533509;

    t151 = (x1973>>(x1974&(x1975&x1976)));

    if (t151 != 62) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x1990 = 3U;
	static int8_t x1991 = -2;
	int64_t x1992 = INT64_MAX;
	int32_t t152 = -5913394;

    t152 = (x1989>>(x1990&(x1991&x1992)));

    if (t152 != 325) { NG(); } else { ; }
	
}

void f153(void) {
    	static int64_t x2001 = INT64_MAX;
	static uint64_t x2003 = 683793LLU;
	uint16_t x2004 = 54U;
	volatile int64_t t153 = INT64_MAX;

    t153 = (x2001>>(x2002&(x2003&x2004)));

    if (t153 != INT64_MAX) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x2017 = 3;
	static uint32_t x2018 = 311240172U;
	int8_t x2019 = INT8_MIN;
	volatile int32_t t154 = -27455;

    t154 = (x2017>>(x2018&(x2019&x2020)));

    if (t154 != 3) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x2022 = INT64_MIN;
	static int32_t x2023 = 24745;
	volatile uint8_t x2024 = UINT8_MAX;
	volatile uint32_t t155 = 433729U;

    t155 = (x2021>>(x2022&(x2023&x2024)));

    if (t155 != 3213U) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x2033 = UINT32_MAX;
	uint64_t x2034 = UINT64_MAX;
	static int64_t x2036 = 1737LL;
	static uint32_t t156 = UINT32_MAX;

    t156 = (x2033>>(x2034&(x2035&x2036)));

    if (t156 != UINT32_MAX) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x2046 = 0U;
	static int32_t x2047 = INT32_MIN;
	int16_t x2048 = INT16_MIN;
	int32_t t157 = -364576;

    t157 = (x2045>>(x2046&(x2047&x2048)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x2069 = 14;
	static uint32_t x2070 = UINT32_MAX;
	int8_t x2072 = 4;
	volatile int32_t t158 = 123;

    t158 = (x2069>>(x2070&(x2071&x2072)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x2073 = 2803U;
	int32_t x2074 = 323138;
	int32_t x2075 = -1;
	int8_t x2076 = 6;
	static volatile int32_t t159 = -39093;

    t159 = (x2073>>(x2074&(x2075&x2076)));

    if (t159 != 700) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x2081 = 3U;
	int64_t x2082 = INT64_MIN;
	int32_t x2083 = -2688;
	volatile uint32_t x2084 = 3368315U;
	volatile int32_t t160 = 0;

    t160 = (x2081>>(x2082&(x2083&x2084)));

    if (t160 != 3) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint16_t x2085 = UINT16_MAX;
	int32_t x2086 = 7175;
	static int16_t x2087 = INT16_MIN;

    t161 = (x2085>>(x2086&(x2087&x2088)));

    if (t161 != 65535) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x2093 = 0;
	uint16_t x2094 = 1345U;
	uint16_t x2095 = 0U;
	int32_t x2096 = -1;

    t162 = (x2093>>(x2094&(x2095&x2096)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x2101 = 160815492LLU;
	int8_t x2102 = INT8_MIN;
	volatile int64_t x2103 = INT64_MIN;
	volatile int8_t x2104 = 0;
	uint64_t t163 = 414923257LLU;

    t163 = (x2101>>(x2102&(x2103&x2104)));

    if (t163 != 160815492LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x2105 = 1;
	volatile int16_t x2106 = 0;
	static int32_t x2107 = -1;
	int8_t x2108 = INT8_MAX;

    t164 = (x2105>>(x2106&(x2107&x2108)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint32_t x2121 = 1417581152U;
	volatile int16_t x2122 = 1;
	int32_t x2123 = INT32_MAX;
	int8_t x2124 = INT8_MAX;

    t165 = (x2121>>(x2122&(x2123&x2124)));

    if (t165 != 708790576U) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x2125 = INT32_MAX;
	int64_t x2126 = -856646492873908920LL;
	static uint32_t x2127 = 13U;
	static int64_t x2128 = 7722754699064LL;

    t166 = (x2125>>(x2126&(x2127&x2128)));

    if (t166 != 8388607) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x2129 = 1;
	static uint64_t x2130 = 707786LLU;
	uint8_t x2131 = 0U;
	static int8_t x2132 = -1;
	volatile int32_t t167 = -1003144360;

    t167 = (x2129>>(x2130&(x2131&x2132)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x2137 = 0;
	int32_t x2138 = 1344800;
	volatile int32_t x2139 = -41;
	int32_t x2140 = INT32_MIN;
	volatile int32_t t168 = -186827874;

    t168 = (x2137>>(x2138&(x2139&x2140)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint16_t x2141 = 3U;
	int32_t x2143 = INT32_MIN;

    t169 = (x2141>>(x2142&(x2143&x2144)));

    if (t169 != 3) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint8_t x2153 = 3U;
	static volatile uint16_t x2154 = 1074U;
	int32_t x2155 = 3;
	int8_t x2156 = 0;
	volatile int32_t t170 = -1464008;

    t170 = (x2153>>(x2154&(x2155&x2156)));

    if (t170 != 3) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x2157 = 2231U;
	int32_t x2158 = 20517;
	volatile int8_t x2159 = INT8_MIN;
	int32_t t171 = 884737928;

    t171 = (x2157>>(x2158&(x2159&x2160)));

    if (t171 != 2231) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x2169 = INT32_MAX;
	int64_t x2170 = INT64_MIN;
	uint64_t x2171 = 14294188960LLU;
	uint64_t x2172 = 1645983534LLU;
	static int32_t t172 = INT32_MAX;

    t172 = (x2169>>(x2170&(x2171&x2172)));

    if (t172 != INT32_MAX) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint32_t x2181 = UINT32_MAX;
	uint16_t x2182 = UINT16_MAX;
	int16_t x2183 = INT16_MIN;
	uint8_t x2184 = 3U;
	volatile uint32_t t173 = UINT32_MAX;

    t173 = (x2181>>(x2182&(x2183&x2184)));

    if (t173 != UINT32_MAX) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x2217 = 2U;
	uint32_t x2218 = UINT32_MAX;
	int8_t x2219 = 54;
	static volatile int32_t t174 = -34566898;

    t174 = (x2217>>(x2218&(x2219&x2220)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x2221 = 100898460U;
	static int8_t x2222 = 1;
	int8_t x2223 = -1;
	static int64_t x2224 = INT64_MIN;
	static uint32_t t175 = 1012405925U;

    t175 = (x2221>>(x2222&(x2223&x2224)));

    if (t175 != 100898460U) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x2249 = UINT32_MAX;
	static int16_t x2250 = 6456;
	int16_t x2251 = INT16_MIN;
	int16_t x2252 = 155;

    t176 = (x2249>>(x2250&(x2251&x2252)));

    if (t176 != UINT32_MAX) { NG(); } else { ; }
	
}

void f177(void) {
    	static int64_t x2255 = INT64_MIN;
	uint64_t x2256 = 45819181663LLU;

    t177 = (x2253>>(x2254&(x2255&x2256)));

    if (t177 != UINT32_MAX) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x2258 = INT16_MAX;
	static int64_t x2259 = -1LL;
	volatile uint16_t x2260 = 1U;
	volatile int32_t t178 = 66044;

    t178 = (x2257>>(x2258&(x2259&x2260)));

    if (t178 != 9) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int64_t x2265 = 107370878907LL;
	uint8_t x2268 = 0U;
	volatile int64_t t179 = -788319000LL;

    t179 = (x2265>>(x2266&(x2267&x2268)));

    if (t179 != 107370878907LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x2270 = INT32_MIN;
	static int16_t x2271 = INT16_MIN;
	uint8_t x2272 = UINT8_MAX;

    t180 = (x2269>>(x2270&(x2271&x2272)));

    if (t180 != 32546U) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint64_t x2273 = 264169167081427653LLU;
	uint64_t x2274 = 9LLU;
	int8_t x2275 = -1;
	uint8_t x2276 = 25U;
	static uint64_t t181 = 3139641530LLU;

    t181 = (x2273>>(x2274&(x2275&x2276)));

    if (t181 != 515955404455913LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x2285 = 103U;
	static int8_t x2286 = -1;
	uint16_t x2288 = 6U;
	volatile uint32_t t182 = 455342U;

    t182 = (x2285>>(x2286&(x2287&x2288)));

    if (t182 != 1U) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x2305 = INT8_MAX;
	uint8_t x2306 = UINT8_MAX;
	uint8_t x2307 = UINT8_MAX;
	static int32_t x2308 = INT32_MIN;
	int32_t t183 = 12395;

    t183 = (x2305>>(x2306&(x2307&x2308)));

    if (t183 != 127) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x2321 = UINT64_MAX;
	uint8_t x2322 = 22U;
	int16_t x2323 = INT16_MIN;
	volatile uint64_t t184 = UINT64_MAX;

    t184 = (x2321>>(x2322&(x2323&x2324)));

    if (t184 != UINT64_MAX) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x2349 = 2744646789850280578LLU;
	volatile uint8_t x2350 = 3U;
	uint8_t x2352 = 15U;

    t185 = (x2349>>(x2350&(x2351&x2352)));

    if (t185 != 343080848731285072LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x2361 = 7097961LLU;
	uint8_t x2362 = 51U;
	int32_t x2363 = INT32_MIN;
	volatile uint16_t x2364 = 15247U;
	volatile uint64_t t186 = 3544837310594LLU;

    t186 = (x2361>>(x2362&(x2363&x2364)));

    if (t186 != 7097961LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x2373 = 28U;
	uint16_t x2374 = 0U;
	int32_t x2375 = -1;
	uint64_t x2376 = UINT64_MAX;
	volatile int32_t t187 = 55167;

    t187 = (x2373>>(x2374&(x2375&x2376)));

    if (t187 != 28) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int8_t x2378 = INT8_MIN;
	volatile int32_t t188 = -96;

    t188 = (x2377>>(x2378&(x2379&x2380)));

    if (t188 != 121) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x2381 = 7572713LLU;
	int8_t x2382 = INT8_MIN;
	uint8_t x2383 = UINT8_MAX;
	int64_t x2384 = 3853761512748330617LL;
	volatile uint64_t t189 = 0LLU;

    t189 = (x2381>>(x2382&(x2383&x2384)));

    if (t189 != 7572713LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint16_t x2399 = UINT16_MAX;
	uint8_t x2400 = 1U;
	int32_t t190 = 1;

    t190 = (x2397>>(x2398&(x2399&x2400)));

    if (t190 != 3) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x2401 = 126U;
	static volatile int16_t x2402 = 1;
	int16_t x2403 = 118;
	int32_t t191 = 9609;

    t191 = (x2401>>(x2402&(x2403&x2404)));

    if (t191 != 126) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x2414 = 66U;
	uint32_t x2416 = 158952882U;
	volatile uint64_t t192 = 800154659455220897LLU;

    t192 = (x2413>>(x2414&(x2415&x2416)));

    if (t192 != 9675LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x2421 = 14;
	int16_t x2422 = INT16_MIN;
	int32_t t193 = 354;

    t193 = (x2421>>(x2422&(x2423&x2424)));

    if (t193 != 14) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x2425 = UINT32_MAX;
	volatile uint16_t x2426 = 4420U;
	int8_t x2427 = 0;
	int32_t x2428 = INT32_MIN;
	volatile uint32_t t194 = UINT32_MAX;

    t194 = (x2425>>(x2426&(x2427&x2428)));

    if (t194 != UINT32_MAX) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x2449 = 14U;
	int8_t x2450 = 28;
	uint8_t x2451 = 5U;
	volatile int32_t t195 = 1;

    t195 = (x2449>>(x2450&(x2451&x2452)));

    if (t195 != 14) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint32_t x2457 = UINT32_MAX;
	static int32_t x2458 = -105324;
	static uint64_t x2460 = 24LLU;
	uint32_t t196 = 2722U;

    t196 = (x2457>>(x2458&(x2459&x2460)));

    if (t196 != 65535U) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int64_t x2461 = INT64_MAX;
	int32_t x2462 = INT32_MIN;
	uint16_t x2463 = UINT16_MAX;
	volatile uint8_t x2464 = 43U;
	volatile int64_t t197 = INT64_MAX;

    t197 = (x2461>>(x2462&(x2463&x2464)));

    if (t197 != INT64_MAX) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x2465 = INT8_MAX;
	static uint16_t x2467 = UINT16_MAX;
	int64_t x2468 = INT64_MIN;
	int32_t t198 = -66059601;

    t198 = (x2465>>(x2466&(x2467&x2468)));

    if (t198 != 127) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint64_t x2501 = 37860399LLU;
	uint32_t x2503 = 7U;
	volatile uint32_t x2504 = UINT32_MAX;
	static uint64_t t199 = 49502651LLU;

    t199 = (x2501>>(x2502&(x2503&x2504)));

    if (t199 != 2366274LLU) { NG(); } else { ; }
	
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

