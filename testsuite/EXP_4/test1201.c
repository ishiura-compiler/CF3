
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

static int32_t x5 = 592625427;
static int32_t t0 = -163;
uint8_t x101 = UINT8_MAX;
volatile int32_t t1 = -30;
int32_t x143 = INT32_MIN;
static uint8_t x281 = 2U;
uint8_t x282 = 8U;
int64_t x307 = -1LL;
static uint8_t x450 = 20U;
volatile int8_t x492 = 59;
int32_t t8 = -4;
int16_t x630 = 1;
volatile int16_t x631 = -1;
int8_t x677 = INT8_MAX;
static volatile int8_t x679 = INT8_MIN;
volatile int32_t x680 = INT32_MIN;
uint32_t x727 = UINT32_MAX;
uint64_t t15 = 249721272548LLU;
volatile int64_t x1019 = 508086184229570124LL;
int32_t t16 = 4373108;
int8_t x1067 = 0;
int16_t x1070 = 10;
int32_t t18 = -28294;
uint8_t x1110 = 5U;
int8_t x1111 = 2;
int8_t x1112 = INT8_MIN;
uint32_t x1137 = 1640U;
uint16_t x1168 = 727U;
static int8_t x1538 = 1;
int8_t x1540 = INT8_MAX;
int16_t x1570 = 12;
volatile int32_t x1571 = -5181858;
int16_t x1639 = INT16_MIN;
static int8_t x1675 = 28;
int32_t t27 = 2;
static int32_t t28 = 0;
uint64_t x1909 = 1863609546527762LLU;
uint8_t x1966 = 1U;
int16_t x1968 = -427;
int32_t t31 = 458381;
static int64_t x2069 = INT64_MAX;
static uint16_t x2082 = 20U;
int64_t x2194 = 29LL;
int32_t x2211 = -1;
int16_t x2212 = INT16_MAX;
int16_t x2220 = -7;
static uint8_t x2269 = 11U;
int32_t x2445 = 4019;
int64_t x2447 = -1LL;
int16_t x2549 = INT16_MAX;
volatile uint64_t x2592 = UINT64_MAX;
int32_t x2669 = 463426;
uint8_t x2672 = 54U;
uint16_t x2717 = 397U;
uint16_t x2718 = 2U;
int32_t t46 = 22442436;
volatile int8_t x2758 = 3;
int8_t x2844 = 1;
static uint64_t x2949 = 85879039972994LLU;
static int16_t x2952 = -1;
uint64_t t50 = 28LLU;
int32_t x3089 = INT32_MAX;
int16_t x3090 = 23;
int32_t t54 = 47;
int32_t x3239 = INT32_MAX;
uint8_t x3314 = 1U;
static int32_t x3316 = INT32_MIN;
uint32_t x3701 = UINT32_MAX;
int8_t x4206 = 3;
static int64_t x4207 = INT64_MIN;
static volatile uint64_t x4208 = 3LLU;
int64_t x4458 = 2LL;
int64_t x4460 = 494542929641970492LL;
uint8_t x4486 = 42U;
uint16_t x4490 = 26U;
uint64_t x4491 = UINT64_MAX;
uint64_t x4501 = UINT64_MAX;
uint8_t x4573 = UINT8_MAX;
volatile int8_t x4814 = 3;
static int16_t x5203 = 1827;
uint16_t x5274 = 2U;
uint64_t t75 = 448LLU;
static int16_t x5316 = INT16_MAX;
static int32_t t79 = 38;
volatile uint32_t x5497 = UINT32_MAX;
uint32_t x5570 = 27U;
int16_t x5696 = 1;
int32_t x5709 = 211452;
int32_t x5851 = -998;
int16_t x5884 = INT16_MAX;
volatile int32_t t87 = -1;
int32_t x5929 = 6392;
static volatile uint32_t t89 = 47375835U;
int16_t x6223 = -1;
static int8_t x6224 = INT8_MIN;
static int16_t x6335 = INT16_MAX;
static volatile int8_t x6366 = 1;
uint8_t x6368 = 1U;
int64_t x6591 = INT64_MIN;
static uint32_t x6629 = 2U;
volatile uint32_t t97 = 23516U;
int64_t x6657 = INT64_MAX;
int8_t x6841 = INT8_MAX;
uint8_t x6857 = 76U;
static uint64_t x6886 = 31LLU;
volatile int32_t x6887 = -1;
static int8_t x7053 = INT8_MAX;
int64_t x7119 = 8932958019597497LL;
static uint64_t t104 = 19LLU;
static int32_t t106 = 445;
static int32_t t107 = -17200577;
uint16_t x7354 = 4U;
int16_t x7398 = 1;
static uint32_t t111 = 195U;
static int64_t x7413 = INT64_MAX;
volatile uint16_t x7414 = 2U;
volatile int32_t x7566 = 28;
volatile int8_t x7568 = -1;
int16_t x7610 = 10;
volatile int32_t x7611 = 134335314;
int16_t x7783 = INT16_MAX;
int16_t x7878 = 6;
uint8_t x7899 = 118U;
volatile uint64_t t122 = 384025537870157LLU;
int64_t x7968 = INT64_MIN;
volatile int8_t x8014 = 27;
static int64_t x8080 = -5LL;
static uint32_t x8125 = UINT32_MAX;
int32_t x8185 = INT32_MAX;
int16_t x8186 = 28;
int32_t t128 = -55072592;
int32_t t129 = -4012;
static uint32_t x8567 = 0U;
uint32_t x8678 = 3U;
int32_t x8680 = INT32_MIN;
uint32_t x8683 = UINT32_MAX;
int32_t t139 = 102;
int16_t x8901 = 44;
static int64_t x8904 = -2961LL;
static volatile int32_t t140 = 7724;
uint32_t x8971 = UINT32_MAX;
static uint16_t x8974 = 3U;
uint16_t x8991 = 22264U;
int16_t x8992 = -1;
uint64_t x9059 = 556747226371755LLU;
static int64_t x9060 = -438354LL;
volatile int8_t x9297 = INT8_MAX;
uint8_t x9298 = 11U;
volatile uint8_t x9299 = UINT8_MAX;
static volatile int32_t t147 = 0;
volatile uint32_t x9379 = UINT32_MAX;
static volatile int32_t t149 = 41900;
volatile int64_t x9404 = INT64_MIN;
static volatile int32_t t150 = 1293034;
int32_t x9491 = INT32_MIN;
int8_t x9841 = 35;
int8_t x9844 = INT8_MAX;
int8_t x10026 = 1;
static int16_t x10054 = 31;
uint64_t x10224 = 3336282937LLU;
static int16_t x10350 = 3;
static volatile uint8_t x10378 = 1U;
int64_t x10380 = INT64_MIN;
uint64_t t161 = UINT64_MAX;
int64_t x10531 = -108048LL;
int32_t x10532 = -1;
uint8_t x10593 = 55U;
static int16_t x10596 = INT16_MAX;
volatile uint32_t t166 = 1700U;
int8_t x11070 = 1;
uint64_t x11071 = UINT64_MAX;
int32_t t167 = -1630;
volatile uint32_t x11118 = 1U;
uint16_t x11135 = 7727U;
uint32_t x11136 = 112929U;
int16_t x11170 = 57;
int8_t x11272 = -7;
static int16_t x11344 = -1;
static volatile int64_t x11544 = -1LL;
volatile uint8_t x11574 = 54U;
uint64_t t178 = 50082967021LLU;
static int16_t x11759 = INT16_MAX;
int32_t t181 = 8280;
static int64_t x11915 = INT64_MAX;
uint64_t t183 = 22LLU;
volatile uint8_t x11930 = 7U;
static uint64_t x12009 = 839431LLU;
static int64_t x12029 = 1765282416180462289LL;
static int16_t x12293 = INT16_MAX;
volatile uint8_t x12295 = 99U;
int32_t x12500 = -1;
int64_t x12676 = -41545709871LL;
volatile int32_t x12784 = INT32_MAX;
uint8_t x13014 = 3U;
uint16_t x13015 = UINT16_MAX;
volatile uint16_t x13108 = 3U;


void f0(void) {
    	volatile uint16_t x6 = 1U;
	volatile int32_t x7 = INT32_MIN;
	static int64_t x8 = -13280LL;

    t0 = (x5>>(x6-(x7!=x8)));

    if (t0 != 592625427) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x102 = 1;
	int16_t x103 = INT16_MIN;
	int64_t x104 = 37077LL;

    t1 = (x101>>(x102-(x103!=x104)));

    if (t1 != 255) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x141 = UINT16_MAX;
	uint8_t x142 = 17U;
	int64_t x144 = INT64_MAX;
	volatile int32_t t2 = 31787;

    t2 = (x141>>(x142-(x143!=x144)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint16_t x237 = UINT16_MAX;
	uint64_t x238 = 17LLU;
	int8_t x239 = 28;
	uint64_t x240 = 50LLU;
	volatile int32_t t3 = -882675113;

    t3 = (x237>>(x238-(x239!=x240)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x283 = INT64_MAX;
	int8_t x284 = 1;
	int32_t t4 = -185609;

    t4 = (x281>>(x282-(x283!=x284)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x305 = INT8_MAX;
	volatile uint32_t x306 = 1U;
	uint8_t x308 = 7U;
	volatile int32_t t5 = 171664;

    t5 = (x305>>(x306-(x307!=x308)));

    if (t5 != 127) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x449 = INT8_MAX;
	int64_t x451 = 51LL;
	uint32_t x452 = 1154U;
	int32_t t6 = -340263325;

    t6 = (x449>>(x450-(x451!=x452)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x457 = 1;
	volatile uint8_t x458 = 14U;
	uint8_t x459 = UINT8_MAX;
	volatile uint64_t x460 = 1466LLU;
	volatile int32_t t7 = 0;

    t7 = (x457>>(x458-(x459!=x460)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x489 = INT8_MAX;
	uint16_t x490 = 2U;
	uint32_t x491 = 1115306U;

    t8 = (x489>>(x490-(x491!=x492)));

    if (t8 != 63) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x629 = 1811;
	volatile int8_t x632 = -1;
	static volatile int32_t t9 = -16840;

    t9 = (x629>>(x630-(x631!=x632)));

    if (t9 != 905) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x678 = 7U;
	volatile int32_t t10 = 6488;

    t10 = (x677>>(x678-(x679!=x680)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x697 = 957612311U;
	uint32_t x698 = 9U;
	volatile int32_t x699 = INT32_MIN;
	uint16_t x700 = UINT16_MAX;
	uint32_t t11 = 197553621U;

    t11 = (x697>>(x698-(x699!=x700)));

    if (t11 != 3740673U) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x725 = 21988705U;
	uint32_t x726 = 1U;
	int8_t x728 = INT8_MAX;
	volatile uint32_t t12 = 116712239U;

    t12 = (x725>>(x726-(x727!=x728)));

    if (t12 != 21988705U) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x741 = INT8_MAX;
	static volatile uint8_t x742 = 2U;
	int8_t x743 = 1;
	volatile int8_t x744 = -3;
	volatile int32_t t13 = 596487596;

    t13 = (x741>>(x742-(x743!=x744)));

    if (t13 != 63) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x909 = 11772706593LLU;
	static int16_t x910 = 46;
	int16_t x911 = INT16_MIN;
	uint64_t x912 = UINT64_MAX;
	static volatile uint64_t t14 = 9204617LLU;

    t14 = (x909>>(x910-(x911!=x912)));

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x949 = UINT64_MAX;
	int8_t x950 = 5;
	uint16_t x951 = 5162U;
	static int16_t x952 = -1;

    t15 = (x949>>(x950-(x951!=x952)));

    if (t15 != 1152921504606846975LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint16_t x1017 = 0U;
	uint64_t x1018 = 29LLU;
	volatile int64_t x1020 = -71LL;

    t16 = (x1017>>(x1018-(x1019!=x1020)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x1065 = UINT32_MAX;
	static uint32_t x1066 = 9U;
	int64_t x1068 = INT64_MAX;
	volatile uint32_t t17 = 8586554U;

    t17 = (x1065>>(x1066-(x1067!=x1068)));

    if (t17 != 16777215U) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint8_t x1069 = 17U;
	static int64_t x1071 = -6169775997LL;
	volatile int64_t x1072 = -1129864LL;

    t18 = (x1069>>(x1070-(x1071!=x1072)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x1109 = 45;
	static volatile int32_t t19 = -1480946;

    t19 = (x1109>>(x1110-(x1111!=x1112)));

    if (t19 != 2) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x1138 = 12;
	int8_t x1139 = INT8_MIN;
	int16_t x1140 = 22;
	uint32_t t20 = 847869U;

    t20 = (x1137>>(x1138-(x1139!=x1140)));

    if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x1165 = INT8_MAX;
	int8_t x1166 = 1;
	volatile int64_t x1167 = INT64_MIN;
	static int32_t t21 = 94335;

    t21 = (x1165>>(x1166-(x1167!=x1168)));

    if (t21 != 127) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile uint64_t x1349 = 26859873205406LLU;
	uint8_t x1350 = 2U;
	uint32_t x1351 = UINT32_MAX;
	volatile uint32_t x1352 = 11398U;
	static volatile uint64_t t22 = 107366916456LLU;

    t22 = (x1349>>(x1350-(x1351!=x1352)));

    if (t22 != 13429936602703LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x1357 = 7;
	int32_t x1358 = 1;
	int64_t x1359 = INT64_MAX;
	volatile int8_t x1360 = INT8_MIN;
	int32_t t23 = 1141;

    t23 = (x1357>>(x1358-(x1359!=x1360)));

    if (t23 != 7) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x1537 = 1U;
	static volatile uint8_t x1539 = UINT8_MAX;
	volatile int32_t t24 = -372473129;

    t24 = (x1537>>(x1538-(x1539!=x1540)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x1569 = 928;
	int32_t x1572 = -1;
	volatile int32_t t25 = -1579864;

    t25 = (x1569>>(x1570-(x1571!=x1572)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int32_t x1637 = INT32_MAX;
	uint64_t x1638 = 9LLU;
	static int64_t x1640 = 11954488696LL;
	int32_t t26 = -46;

    t26 = (x1637>>(x1638-(x1639!=x1640)));

    if (t26 != 8388607) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x1673 = 0;
	uint32_t x1674 = 2U;
	int64_t x1676 = -286477904271421LL;

    t27 = (x1673>>(x1674-(x1675!=x1676)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x1893 = INT16_MAX;
	volatile int16_t x1894 = 1;
	static uint32_t x1895 = 69242U;
	static int64_t x1896 = INT64_MIN;

    t28 = (x1893>>(x1894-(x1895!=x1896)));

    if (t28 != 32767) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x1910 = 10U;
	int64_t x1911 = INT64_MIN;
	int64_t x1912 = 14LL;
	volatile uint64_t t29 = 572291245560718LLU;

    t29 = (x1909>>(x1910-(x1911!=x1912)));

    if (t29 != 3639862395562LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x1965 = 10552257922LL;
	int64_t x1967 = INT64_MIN;
	static int64_t t30 = 5010LL;

    t30 = (x1965>>(x1966-(x1967!=x1968)));

    if (t30 != 10552257922LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint16_t x2025 = 119U;
	int8_t x2026 = 2;
	int32_t x2027 = INT32_MAX;
	static uint16_t x2028 = 6514U;

    t31 = (x2025>>(x2026-(x2027!=x2028)));

    if (t31 != 59) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x2070 = 27U;
	int8_t x2071 = -1;
	int32_t x2072 = INT32_MIN;
	volatile int64_t t32 = -3LL;

    t32 = (x2069>>(x2070-(x2071!=x2072)));

    if (t32 != 137438953471LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x2081 = 3;
	int32_t x2083 = -47;
	volatile uint32_t x2084 = 4759U;
	int32_t t33 = 337878018;

    t33 = (x2081>>(x2082-(x2083!=x2084)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int64_t x2193 = INT64_MAX;
	int32_t x2195 = -1;
	static int32_t x2196 = -1;
	volatile int64_t t34 = -433942047LL;

    t34 = (x2193>>(x2194-(x2195!=x2196)));

    if (t34 != 17179869183LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x2209 = 1;
	uint8_t x2210 = 10U;
	int32_t t35 = -262760;

    t35 = (x2209>>(x2210-(x2211!=x2212)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x2217 = INT64_MAX;
	uint32_t x2218 = 31U;
	int64_t x2219 = -1LL;
	volatile int64_t t36 = 1LL;

    t36 = (x2217>>(x2218-(x2219!=x2220)));

    if (t36 != 8589934591LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint32_t x2221 = 108605U;
	int8_t x2222 = 1;
	uint16_t x2223 = 247U;
	int16_t x2224 = INT16_MIN;
	uint32_t t37 = 9U;

    t37 = (x2221>>(x2222-(x2223!=x2224)));

    if (t37 != 108605U) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x2270 = 2U;
	static volatile int64_t x2271 = 2575LL;
	uint64_t x2272 = 41351401064502LLU;
	int32_t t38 = -2998099;

    t38 = (x2269>>(x2270-(x2271!=x2272)));

    if (t38 != 5) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x2369 = 261435;
	int8_t x2370 = 26;
	int16_t x2371 = INT16_MIN;
	volatile int16_t x2372 = 887;
	int32_t t39 = 1795851;

    t39 = (x2369>>(x2370-(x2371!=x2372)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x2385 = UINT16_MAX;
	static int8_t x2386 = 4;
	int8_t x2387 = INT8_MIN;
	uint16_t x2388 = 14U;
	volatile int32_t t40 = -179534;

    t40 = (x2385>>(x2386-(x2387!=x2388)));

    if (t40 != 8191) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x2446 = 20;
	int16_t x2448 = -6;
	volatile int32_t t41 = 14;

    t41 = (x2445>>(x2446-(x2447!=x2448)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x2550 = 2U;
	int64_t x2551 = 2LL;
	int16_t x2552 = 1;
	int32_t t42 = -43;

    t42 = (x2549>>(x2550-(x2551!=x2552)));

    if (t42 != 16383) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x2589 = 1U;
	volatile uint32_t x2590 = 2U;
	int8_t x2591 = INT8_MIN;
	volatile int32_t t43 = -502;

    t43 = (x2589>>(x2590-(x2591!=x2592)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x2670 = 10;
	uint16_t x2671 = UINT16_MAX;
	volatile int32_t t44 = -15074599;

    t44 = (x2669>>(x2670-(x2671!=x2672)));

    if (t44 != 905) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x2685 = UINT64_MAX;
	volatile uint8_t x2686 = 11U;
	int32_t x2687 = -1;
	int32_t x2688 = INT32_MIN;
	volatile uint64_t t45 = 270134383371966265LLU;

    t45 = (x2685>>(x2686-(x2687!=x2688)));

    if (t45 != 18014398509481983LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x2719 = INT32_MIN;
	static uint32_t x2720 = UINT32_MAX;

    t46 = (x2717>>(x2718-(x2719!=x2720)));

    if (t46 != 198) { NG(); } else { ; }
	
}

void f47(void) {
    	static int32_t x2757 = 31;
	static int16_t x2759 = INT16_MIN;
	uint8_t x2760 = 94U;
	int32_t t47 = -1100;

    t47 = (x2757>>(x2758-(x2759!=x2760)));

    if (t47 != 7) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint32_t x2841 = 1957U;
	volatile uint8_t x2842 = 3U;
	int8_t x2843 = -1;
	uint32_t t48 = 926U;

    t48 = (x2841>>(x2842-(x2843!=x2844)));

    if (t48 != 489U) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x2941 = 2197914037633956799LLU;
	uint16_t x2942 = 23U;
	volatile uint32_t x2943 = 250642034U;
	int64_t x2944 = INT64_MAX;
	uint64_t t49 = 1531216407222746LLU;

    t49 = (x2941>>(x2942-(x2943!=x2944)));

    if (t49 != 524023541840LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x2950 = 1;
	static int16_t x2951 = INT16_MIN;

    t50 = (x2949>>(x2950-(x2951!=x2952)));

    if (t50 != 85879039972994LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x3069 = 0U;
	int8_t x3070 = 1;
	uint64_t x3071 = 11LLU;
	int16_t x3072 = -35;
	volatile int32_t t51 = -155812738;

    t51 = (x3069>>(x3070-(x3071!=x3072)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int64_t x3091 = INT64_MIN;
	volatile int64_t x3092 = -66770996332LL;
	volatile int32_t t52 = -205168;

    t52 = (x3089>>(x3090-(x3091!=x3092)));

    if (t52 != 511) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x3097 = 18;
	int8_t x3098 = 10;
	uint32_t x3099 = 15198U;
	int32_t x3100 = -1;
	volatile int32_t t53 = 485122191;

    t53 = (x3097>>(x3098-(x3099!=x3100)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x3205 = 66387075;
	int8_t x3206 = 1;
	int16_t x3207 = INT16_MIN;
	int32_t x3208 = INT32_MAX;

    t54 = (x3205>>(x3206-(x3207!=x3208)));

    if (t54 != 66387075) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x3237 = 23;
	uint8_t x3238 = 1U;
	int8_t x3240 = INT8_MIN;
	static volatile int32_t t55 = 472931;

    t55 = (x3237>>(x3238-(x3239!=x3240)));

    if (t55 != 23) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x3261 = 41317856;
	static int64_t x3262 = 1LL;
	uint8_t x3263 = UINT8_MAX;
	int8_t x3264 = INT8_MAX;
	static int32_t t56 = -23155668;

    t56 = (x3261>>(x3262-(x3263!=x3264)));

    if (t56 != 41317856) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x3313 = INT64_MAX;
	int8_t x3315 = INT8_MIN;
	int64_t t57 = INT64_MAX;

    t57 = (x3313>>(x3314-(x3315!=x3316)));

    if (t57 != INT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint64_t x3397 = UINT64_MAX;
	static uint16_t x3398 = 8U;
	int64_t x3399 = INT64_MIN;
	volatile int16_t x3400 = 1;
	volatile uint64_t t58 = 103LLU;

    t58 = (x3397>>(x3398-(x3399!=x3400)));

    if (t58 != 144115188075855871LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x3581 = UINT16_MAX;
	uint32_t x3582 = 14U;
	volatile int8_t x3583 = INT8_MIN;
	int16_t x3584 = -1;
	volatile int32_t t59 = 3;

    t59 = (x3581>>(x3582-(x3583!=x3584)));

    if (t59 != 7) { NG(); } else { ; }
	
}

void f60(void) {
    	static int64_t x3645 = INT64_MAX;
	uint16_t x3646 = 50U;
	int8_t x3647 = 10;
	uint32_t x3648 = 152U;
	int64_t t60 = 34711496330LL;

    t60 = (x3645>>(x3646-(x3647!=x3648)));

    if (t60 != 16383LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x3702 = 1U;
	volatile int64_t x3703 = INT64_MIN;
	int64_t x3704 = INT64_MIN;
	volatile uint32_t t61 = 207U;

    t61 = (x3701>>(x3702-(x3703!=x3704)));

    if (t61 != 2147483647U) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x3765 = 1040938LLU;
	uint16_t x3766 = 2U;
	int32_t x3767 = INT32_MIN;
	static int8_t x3768 = -1;
	uint64_t t62 = 1187LLU;

    t62 = (x3765>>(x3766-(x3767!=x3768)));

    if (t62 != 520469LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x3929 = 2676U;
	volatile int32_t x3930 = 1;
	uint16_t x3931 = 755U;
	volatile uint8_t x3932 = 5U;
	int32_t t63 = -85738702;

    t63 = (x3929>>(x3930-(x3931!=x3932)));

    if (t63 != 2676) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x4081 = INT32_MAX;
	volatile uint16_t x4082 = 23U;
	uint16_t x4083 = 1U;
	static uint16_t x4084 = 9593U;
	volatile int32_t t64 = -252780644;

    t64 = (x4081>>(x4082-(x4083!=x4084)));

    if (t64 != 511) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x4169 = 0;
	int8_t x4170 = 1;
	int64_t x4171 = -1LL;
	uint8_t x4172 = 7U;
	static int32_t t65 = 60;

    t65 = (x4169>>(x4170-(x4171!=x4172)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x4205 = UINT64_MAX;
	uint64_t t66 = 96493330033LLU;

    t66 = (x4205>>(x4206-(x4207!=x4208)));

    if (t66 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x4457 = UINT16_MAX;
	int64_t x4459 = 548625635LL;
	static int32_t t67 = 53801;

    t67 = (x4457>>(x4458-(x4459!=x4460)));

    if (t67 != 32767) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x4485 = 41521211099845LL;
	int32_t x4487 = -545614;
	int32_t x4488 = -1;
	int64_t t68 = 2094354LL;

    t68 = (x4485>>(x4486-(x4487!=x4488)));

    if (t68 != 18LL) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint32_t x4489 = 659517080U;
	static uint16_t x4492 = UINT16_MAX;
	uint32_t t69 = 4399727U;

    t69 = (x4489>>(x4490-(x4491!=x4492)));

    if (t69 != 19U) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x4502 = 1;
	int8_t x4503 = -1;
	int64_t x4504 = -41139962817LL;
	volatile uint64_t t70 = UINT64_MAX;

    t70 = (x4501>>(x4502-(x4503!=x4504)));

    if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x4574 = 25;
	static uint16_t x4575 = UINT16_MAX;
	int64_t x4576 = INT64_MIN;
	static int32_t t71 = 113111;

    t71 = (x4573>>(x4574-(x4575!=x4576)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x4813 = 0U;
	volatile int16_t x4815 = -1;
	int64_t x4816 = -44745991562505558LL;
	volatile int32_t t72 = 1;

    t72 = (x4813>>(x4814-(x4815!=x4816)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x4901 = INT8_MAX;
	uint8_t x4902 = 1U;
	static int32_t x4903 = INT32_MIN;
	int64_t x4904 = -1LL;
	volatile int32_t t73 = 231185913;

    t73 = (x4901>>(x4902-(x4903!=x4904)));

    if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint64_t x5201 = 2LLU;
	static int64_t x5202 = 33LL;
	int32_t x5204 = INT32_MIN;
	volatile uint64_t t74 = 8572705137116LLU;

    t74 = (x5201>>(x5202-(x5203!=x5204)));

    if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint64_t x5273 = 107497657LLU;
	int64_t x5275 = -1LL;
	int8_t x5276 = INT8_MAX;

    t75 = (x5273>>(x5274-(x5275!=x5276)));

    if (t75 != 53748828LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x5313 = 27162240365804415LLU;
	static uint16_t x5314 = 61U;
	static int64_t x5315 = INT64_MIN;
	uint64_t t76 = 566956862LLU;

    t76 = (x5313>>(x5314-(x5315!=x5316)));

    if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint64_t x5341 = 6573052465LLU;
	uint32_t x5342 = 62U;
	int32_t x5343 = -1;
	int16_t x5344 = -5;
	volatile uint64_t t77 = 6243788496LLU;

    t77 = (x5341>>(x5342-(x5343!=x5344)));

    if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x5349 = 0;
	uint8_t x5350 = 9U;
	static uint8_t x5351 = 9U;
	int16_t x5352 = INT16_MAX;
	int32_t t78 = 26;

    t78 = (x5349>>(x5350-(x5351!=x5352)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x5381 = 2;
	int16_t x5382 = 5;
	int64_t x5383 = INT64_MIN;
	volatile uint64_t x5384 = UINT64_MAX;

    t79 = (x5381>>(x5382-(x5383!=x5384)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x5498 = 13;
	uint32_t x5499 = 676648U;
	int64_t x5500 = -1LL;
	uint32_t t80 = 5U;

    t80 = (x5497>>(x5498-(x5499!=x5500)));

    if (t80 != 1048575U) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x5569 = 7U;
	volatile uint8_t x5571 = 0U;
	volatile int64_t x5572 = 0LL;
	volatile int32_t t81 = -116;

    t81 = (x5569>>(x5570-(x5571!=x5572)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x5685 = 242U;
	uint8_t x5686 = 1U;
	volatile int64_t x5687 = -1LL;
	int32_t x5688 = INT32_MIN;
	int32_t t82 = -1;

    t82 = (x5685>>(x5686-(x5687!=x5688)));

    if (t82 != 242) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x5693 = UINT16_MAX;
	uint16_t x5694 = 1U;
	volatile int8_t x5695 = 3;
	volatile int32_t t83 = -32;

    t83 = (x5693>>(x5694-(x5695!=x5696)));

    if (t83 != 65535) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x5710 = 30;
	int32_t x5711 = INT32_MAX;
	int32_t x5712 = -217111271;
	static int32_t t84 = -728004096;

    t84 = (x5709>>(x5710-(x5711!=x5712)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x5829 = UINT64_MAX;
	static volatile int8_t x5830 = 1;
	static uint8_t x5831 = 1U;
	int64_t x5832 = INT64_MIN;
	static volatile uint64_t t85 = UINT64_MAX;

    t85 = (x5829>>(x5830-(x5831!=x5832)));

    if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x5849 = 6477234499296LLU;
	int8_t x5850 = 4;
	int64_t x5852 = -1LL;
	uint64_t t86 = 80816LLU;

    t86 = (x5849>>(x5850-(x5851!=x5852)));

    if (t86 != 809654312412LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x5881 = INT32_MAX;
	volatile uint16_t x5882 = 2U;
	int8_t x5883 = 16;

    t87 = (x5881>>(x5882-(x5883!=x5884)));

    if (t87 != 1073741823) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x5930 = 1U;
	int16_t x5931 = -187;
	uint32_t x5932 = 16371009U;
	static int32_t t88 = 478066166;

    t88 = (x5929>>(x5930-(x5931!=x5932)));

    if (t88 != 6392) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x5973 = 81U;
	uint32_t x5974 = 26U;
	int8_t x5975 = 15;
	uint16_t x5976 = 629U;

    t89 = (x5973>>(x5974-(x5975!=x5976)));

    if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x6221 = 217U;
	int8_t x6222 = 1;
	int32_t t90 = -7;

    t90 = (x6221>>(x6222-(x6223!=x6224)));

    if (t90 != 217) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x6237 = 1;
	uint16_t x6238 = 12U;
	int64_t x6239 = -11LL;
	uint16_t x6240 = 15579U;
	static volatile int32_t t91 = -973;

    t91 = (x6237>>(x6238-(x6239!=x6240)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x6333 = UINT32_MAX;
	uint16_t x6334 = 5U;
	int32_t x6336 = INT32_MIN;
	volatile uint32_t t92 = 14U;

    t92 = (x6333>>(x6334-(x6335!=x6336)));

    if (t92 != 268435455U) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint64_t x6365 = 293LLU;
	volatile int16_t x6367 = INT16_MIN;
	volatile uint64_t t93 = 63502392LLU;

    t93 = (x6365>>(x6366-(x6367!=x6368)));

    if (t93 != 293LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x6529 = INT64_MAX;
	uint8_t x6530 = 3U;
	int16_t x6531 = INT16_MIN;
	uint16_t x6532 = 20U;
	volatile int64_t t94 = 187337276LL;

    t94 = (x6529>>(x6530-(x6531!=x6532)));

    if (t94 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x6589 = 42353U;
	static uint8_t x6590 = 3U;
	volatile int8_t x6592 = INT8_MIN;
	uint32_t t95 = 720U;

    t95 = (x6589>>(x6590-(x6591!=x6592)));

    if (t95 != 10588U) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x6609 = 2;
	static uint32_t x6610 = 8U;
	int16_t x6611 = 0;
	int8_t x6612 = 13;
	static int32_t t96 = -28177057;

    t96 = (x6609>>(x6610-(x6611!=x6612)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint32_t x6630 = 7U;
	int8_t x6631 = INT8_MAX;
	volatile uint64_t x6632 = UINT64_MAX;

    t97 = (x6629>>(x6630-(x6631!=x6632)));

    if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x6658 = 1;
	uint16_t x6659 = 152U;
	static int64_t x6660 = -1LL;
	int64_t t98 = INT64_MAX;

    t98 = (x6657>>(x6658-(x6659!=x6660)));

    if (t98 != INT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x6829 = UINT16_MAX;
	int8_t x6830 = 1;
	int8_t x6831 = -1;
	uint32_t x6832 = 62242223U;
	volatile int32_t t99 = -2998512;

    t99 = (x6829>>(x6830-(x6831!=x6832)));

    if (t99 != 65535) { NG(); } else { ; }
	
}

void f100(void) {
    	static int16_t x6842 = 1;
	int8_t x6843 = -1;
	volatile int32_t x6844 = INT32_MAX;
	int32_t t100 = 68847173;

    t100 = (x6841>>(x6842-(x6843!=x6844)));

    if (t100 != 127) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x6858 = 2;
	int32_t x6859 = -1;
	int16_t x6860 = -1;
	int32_t t101 = 1;

    t101 = (x6857>>(x6858-(x6859!=x6860)));

    if (t101 != 19) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x6885 = 57LL;
	int64_t x6888 = 311908450LL;
	volatile int64_t t102 = 125169259LL;

    t102 = (x6885>>(x6886-(x6887!=x6888)));

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x7054 = 1;
	int64_t x7055 = -1LL;
	int16_t x7056 = -1;
	int32_t t103 = 12;

    t103 = (x7053>>(x7054-(x7055!=x7056)));

    if (t103 != 63) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x7117 = UINT64_MAX;
	int8_t x7118 = 30;
	int32_t x7120 = -83;

    t104 = (x7117>>(x7118-(x7119!=x7120)));

    if (t104 != 34359738367LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x7133 = UINT32_MAX;
	uint16_t x7134 = 28U;
	uint16_t x7135 = UINT16_MAX;
	uint16_t x7136 = UINT16_MAX;
	uint32_t t105 = 16U;

    t105 = (x7133>>(x7134-(x7135!=x7136)));

    if (t105 != 15U) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint8_t x7205 = UINT8_MAX;
	static uint8_t x7206 = 3U;
	volatile int32_t x7207 = 624985;
	int32_t x7208 = INT32_MIN;

    t106 = (x7205>>(x7206-(x7207!=x7208)));

    if (t106 != 63) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x7241 = 4556U;
	int16_t x7242 = 8;
	int32_t x7243 = INT32_MIN;
	static uint32_t x7244 = 756136U;

    t107 = (x7241>>(x7242-(x7243!=x7244)));

    if (t107 != 35) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x7245 = 1;
	uint8_t x7246 = 1U;
	int64_t x7247 = INT64_MIN;
	volatile uint8_t x7248 = 96U;
	volatile int32_t t108 = 13;

    t108 = (x7245>>(x7246-(x7247!=x7248)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x7309 = UINT32_MAX;
	uint8_t x7310 = 6U;
	int8_t x7311 = -1;
	volatile int32_t x7312 = INT32_MIN;
	volatile uint32_t t109 = 9557U;

    t109 = (x7309>>(x7310-(x7311!=x7312)));

    if (t109 != 134217727U) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint8_t x7353 = 7U;
	static uint32_t x7355 = 930486U;
	uint64_t x7356 = 16116408460728LLU;
	int32_t t110 = -217;

    t110 = (x7353>>(x7354-(x7355!=x7356)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x7397 = 4U;
	int64_t x7399 = INT64_MIN;
	uint32_t x7400 = 34U;

    t111 = (x7397>>(x7398-(x7399!=x7400)));

    if (t111 != 4U) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint32_t x7415 = 58U;
	uint64_t x7416 = UINT64_MAX;
	int64_t t112 = -907577679733LL;

    t112 = (x7413>>(x7414-(x7415!=x7416)));

    if (t112 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x7513 = 0;
	uint8_t x7514 = 6U;
	volatile uint64_t x7515 = 20755537LLU;
	int32_t x7516 = 56048;
	int32_t t113 = 338942289;

    t113 = (x7513>>(x7514-(x7515!=x7516)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x7541 = 51195LLU;
	volatile int8_t x7542 = 1;
	uint8_t x7543 = 44U;
	volatile uint32_t x7544 = UINT32_MAX;
	static volatile uint64_t t114 = 378733LLU;

    t114 = (x7541>>(x7542-(x7543!=x7544)));

    if (t114 != 51195LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x7565 = INT32_MAX;
	volatile int8_t x7567 = INT8_MIN;
	volatile int32_t t115 = -97077;

    t115 = (x7565>>(x7566-(x7567!=x7568)));

    if (t115 != 15) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x7609 = 488U;
	int64_t x7612 = -14951093666482LL;
	volatile int32_t t116 = -25;

    t116 = (x7609>>(x7610-(x7611!=x7612)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x7721 = 2U;
	int8_t x7722 = 2;
	uint16_t x7723 = UINT16_MAX;
	volatile int32_t x7724 = -1;
	volatile int32_t t117 = -65911;

    t117 = (x7721>>(x7722-(x7723!=x7724)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x7757 = INT8_MAX;
	volatile int16_t x7758 = 6;
	volatile uint32_t x7759 = 20U;
	int8_t x7760 = 0;
	volatile int32_t t118 = -37741740;

    t118 = (x7757>>(x7758-(x7759!=x7760)));

    if (t118 != 3) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint16_t x7781 = UINT16_MAX;
	uint8_t x7782 = 14U;
	int16_t x7784 = 5181;
	volatile int32_t t119 = -921732;

    t119 = (x7781>>(x7782-(x7783!=x7784)));

    if (t119 != 7) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint8_t x7821 = 27U;
	int16_t x7822 = 20;
	int16_t x7823 = INT16_MAX;
	int16_t x7824 = INT16_MAX;
	volatile int32_t t120 = -3706;

    t120 = (x7821>>(x7822-(x7823!=x7824)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x7877 = 3U;
	int16_t x7879 = INT16_MIN;
	volatile int64_t x7880 = INT64_MAX;
	static volatile int32_t t121 = 2736;

    t121 = (x7877>>(x7878-(x7879!=x7880)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x7897 = 4300620766215242539LLU;
	static uint32_t x7898 = 14U;
	static int64_t x7900 = INT64_MIN;

    t122 = (x7897>>(x7898-(x7899!=x7900)));

    if (t122 != 524978120875884LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x7965 = INT32_MAX;
	uint8_t x7966 = 1U;
	uint16_t x7967 = UINT16_MAX;
	static volatile int32_t t123 = INT32_MAX;

    t123 = (x7965>>(x7966-(x7967!=x7968)));

    if (t123 != INT32_MAX) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x8013 = 383320U;
	int8_t x8015 = INT8_MIN;
	int32_t x8016 = 536;
	volatile uint32_t t124 = 344539U;

    t124 = (x8013>>(x8014-(x8015!=x8016)));

    if (t124 != 0U) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x8077 = 0;
	volatile int64_t x8078 = 10LL;
	static uint8_t x8079 = UINT8_MAX;
	static int32_t t125 = 334173686;

    t125 = (x8077>>(x8078-(x8079!=x8080)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x8109 = UINT64_MAX;
	static int8_t x8110 = 2;
	int16_t x8111 = INT16_MIN;
	int8_t x8112 = -1;
	uint64_t t126 = 8253LLU;

    t126 = (x8109>>(x8110-(x8111!=x8112)));

    if (t126 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x8126 = 14U;
	uint64_t x8127 = UINT64_MAX;
	int8_t x8128 = INT8_MAX;
	static uint32_t t127 = 323U;

    t127 = (x8125>>(x8126-(x8127!=x8128)));

    if (t127 != 524287U) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x8187 = 116U;
	uint64_t x8188 = 7701855185349086LLU;

    t128 = (x8185>>(x8186-(x8187!=x8188)));

    if (t128 != 15) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x8281 = 33;
	uint16_t x8282 = 1U;
	uint64_t x8283 = 7939LLU;
	int16_t x8284 = INT16_MIN;

    t129 = (x8281>>(x8282-(x8283!=x8284)));

    if (t129 != 33) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x8349 = 3559904U;
	int16_t x8350 = 2;
	static uint8_t x8351 = 18U;
	static int32_t x8352 = INT32_MIN;
	volatile uint32_t t130 = 3296508U;

    t130 = (x8349>>(x8350-(x8351!=x8352)));

    if (t130 != 1779952U) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x8457 = 0;
	uint8_t x8458 = 5U;
	int8_t x8459 = -1;
	volatile int64_t x8460 = -1LL;
	volatile int32_t t131 = -364650;

    t131 = (x8457>>(x8458-(x8459!=x8460)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x8537 = UINT16_MAX;
	volatile uint64_t x8538 = 1LLU;
	uint16_t x8539 = UINT16_MAX;
	static int32_t x8540 = INT32_MIN;
	static volatile int32_t t132 = -225056781;

    t132 = (x8537>>(x8538-(x8539!=x8540)));

    if (t132 != 65535) { NG(); } else { ; }
	
}

void f133(void) {
    	static int8_t x8565 = INT8_MAX;
	volatile uint8_t x8566 = 5U;
	uint32_t x8568 = 114U;
	volatile int32_t t133 = -4011226;

    t133 = (x8565>>(x8566-(x8567!=x8568)));

    if (t133 != 7) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint8_t x8653 = 0U;
	uint32_t x8654 = 3U;
	int16_t x8655 = 2646;
	int16_t x8656 = 3;
	int32_t t134 = 343747;

    t134 = (x8653>>(x8654-(x8655!=x8656)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x8677 = INT8_MAX;
	volatile int64_t x8679 = -6323LL;
	volatile int32_t t135 = 114785676;

    t135 = (x8677>>(x8678-(x8679!=x8680)));

    if (t135 != 31) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint8_t x8681 = UINT8_MAX;
	int8_t x8682 = 4;
	volatile uint8_t x8684 = UINT8_MAX;
	int32_t t136 = -834096;

    t136 = (x8681>>(x8682-(x8683!=x8684)));

    if (t136 != 31) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x8749 = INT8_MAX;
	int16_t x8750 = 2;
	volatile int64_t x8751 = -8LL;
	int16_t x8752 = -1450;
	volatile int32_t t137 = 447044;

    t137 = (x8749>>(x8750-(x8751!=x8752)));

    if (t137 != 63) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x8757 = 4LLU;
	uint32_t x8758 = 22U;
	int32_t x8759 = INT32_MIN;
	int32_t x8760 = INT32_MIN;
	volatile uint64_t t138 = 317LLU;

    t138 = (x8757>>(x8758-(x8759!=x8760)));

    if (t138 != 0LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x8809 = INT32_MAX;
	uint32_t x8810 = 23U;
	uint16_t x8811 = 2U;
	int32_t x8812 = INT32_MIN;

    t139 = (x8809>>(x8810-(x8811!=x8812)));

    if (t139 != 511) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint32_t x8902 = 2U;
	int8_t x8903 = INT8_MIN;

    t140 = (x8901>>(x8902-(x8903!=x8904)));

    if (t140 != 22) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x8969 = INT16_MAX;
	uint16_t x8970 = 12U;
	uint64_t x8972 = UINT64_MAX;
	static int32_t t141 = 1364917;

    t141 = (x8969>>(x8970-(x8971!=x8972)));

    if (t141 != 15) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x8973 = 66U;
	int32_t x8975 = INT32_MIN;
	int32_t x8976 = INT32_MAX;
	int32_t t142 = 58139787;

    t142 = (x8973>>(x8974-(x8975!=x8976)));

    if (t142 != 16) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x8989 = 1U;
	uint8_t x8990 = 24U;
	int32_t t143 = 0;

    t143 = (x8989>>(x8990-(x8991!=x8992)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int16_t x9057 = 0;
	uint32_t x9058 = 1U;
	static volatile int32_t t144 = 615;

    t144 = (x9057>>(x9058-(x9059!=x9060)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x9121 = 30409U;
	volatile uint16_t x9122 = 1U;
	int16_t x9123 = 12759;
	int32_t x9124 = -313155;
	uint32_t t145 = 106329U;

    t145 = (x9121>>(x9122-(x9123!=x9124)));

    if (t145 != 30409U) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile int64_t x9133 = 351773LL;
	volatile int32_t x9134 = 44;
	int16_t x9135 = INT16_MIN;
	int32_t x9136 = INT32_MIN;
	volatile int64_t t146 = -3582348251795LL;

    t146 = (x9133>>(x9134-(x9135!=x9136)));

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x9300 = INT32_MIN;

    t147 = (x9297>>(x9298-(x9299!=x9300)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x9357 = UINT16_MAX;
	uint32_t x9358 = 2U;
	int32_t x9359 = INT32_MAX;
	int32_t x9360 = INT32_MIN;
	volatile int32_t t148 = 24048458;

    t148 = (x9357>>(x9358-(x9359!=x9360)));

    if (t148 != 32767) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x9377 = 1;
	volatile int16_t x9378 = 1;
	static int64_t x9380 = INT64_MIN;

    t149 = (x9377>>(x9378-(x9379!=x9380)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x9401 = UINT16_MAX;
	uint8_t x9402 = 3U;
	int32_t x9403 = -1;

    t150 = (x9401>>(x9402-(x9403!=x9404)));

    if (t150 != 16383) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x9489 = INT64_MAX;
	volatile int16_t x9490 = 2;
	uint32_t x9492 = 1U;
	volatile int64_t t151 = 23LL;

    t151 = (x9489>>(x9490-(x9491!=x9492)));

    if (t151 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x9633 = 10912U;
	int8_t x9634 = 16;
	static int8_t x9635 = INT8_MIN;
	uint64_t x9636 = 624121642873613LLU;
	uint32_t t152 = 55U;

    t152 = (x9633>>(x9634-(x9635!=x9636)));

    if (t152 != 0U) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x9641 = 0;
	int32_t x9642 = 1;
	volatile int8_t x9643 = 0;
	int16_t x9644 = 3266;
	static int32_t t153 = -1668;

    t153 = (x9641>>(x9642-(x9643!=x9644)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x9673 = UINT8_MAX;
	uint8_t x9674 = 29U;
	static uint32_t x9675 = 2U;
	int8_t x9676 = INT8_MIN;
	int32_t t154 = 1;

    t154 = (x9673>>(x9674-(x9675!=x9676)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x9842 = 1;
	static int64_t x9843 = INT64_MAX;
	int32_t t155 = 223;

    t155 = (x9841>>(x9842-(x9843!=x9844)));

    if (t155 != 35) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint64_t x10025 = 6439LLU;
	uint32_t x10027 = 689U;
	int64_t x10028 = INT64_MIN;
	uint64_t t156 = 4484141LLU;

    t156 = (x10025>>(x10026-(x10027!=x10028)));

    if (t156 != 6439LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x10053 = UINT32_MAX;
	volatile uint32_t x10055 = 277U;
	uint64_t x10056 = UINT64_MAX;
	volatile uint32_t t157 = 19U;

    t157 = (x10053>>(x10054-(x10055!=x10056)));

    if (t157 != 3U) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint16_t x10181 = 38U;
	uint8_t x10182 = 2U;
	static int16_t x10183 = 1;
	uint64_t x10184 = 8382028182343LLU;
	volatile int32_t t158 = -5;

    t158 = (x10181>>(x10182-(x10183!=x10184)));

    if (t158 != 19) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x10221 = INT32_MAX;
	int8_t x10222 = 3;
	int16_t x10223 = INT16_MIN;
	int32_t t159 = 6;

    t159 = (x10221>>(x10222-(x10223!=x10224)));

    if (t159 != 536870911) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x10349 = 20847U;
	static int8_t x10351 = -43;
	int64_t x10352 = INT64_MIN;
	int32_t t160 = 3927488;

    t160 = (x10349>>(x10350-(x10351!=x10352)));

    if (t160 != 5211) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x10377 = UINT64_MAX;
	uint64_t x10379 = 207716131959468141LLU;

    t161 = (x10377>>(x10378-(x10379!=x10380)));

    if (t161 != UINT64_MAX) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint64_t x10469 = 28253194LLU;
	uint16_t x10470 = 1U;
	volatile int8_t x10471 = INT8_MAX;
	int64_t x10472 = INT64_MIN;
	volatile uint64_t t162 = 5912921770139LLU;

    t162 = (x10469>>(x10470-(x10471!=x10472)));

    if (t162 != 28253194LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x10529 = UINT64_MAX;
	uint8_t x10530 = 16U;
	volatile uint64_t t163 = 372939954LLU;

    t163 = (x10529>>(x10530-(x10531!=x10532)));

    if (t163 != 562949953421311LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x10589 = 30U;
	uint32_t x10590 = 1U;
	uint16_t x10591 = 6417U;
	static int8_t x10592 = -1;
	int32_t t164 = -126;

    t164 = (x10589>>(x10590-(x10591!=x10592)));

    if (t164 != 30) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint8_t x10594 = 17U;
	volatile int32_t x10595 = INT32_MIN;
	volatile int32_t t165 = -8844229;

    t165 = (x10593>>(x10594-(x10595!=x10596)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x10981 = UINT32_MAX;
	uint64_t x10982 = 7LLU;
	int32_t x10983 = INT32_MAX;
	static int64_t x10984 = -1LL;

    t166 = (x10981>>(x10982-(x10983!=x10984)));

    if (t166 != 67108863U) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x11069 = UINT8_MAX;
	int8_t x11072 = -2;

    t167 = (x11069>>(x11070-(x11071!=x11072)));

    if (t167 != 255) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint8_t x11117 = 55U;
	uint32_t x11119 = UINT32_MAX;
	int8_t x11120 = INT8_MIN;
	volatile int32_t t168 = 5475;

    t168 = (x11117>>(x11118-(x11119!=x11120)));

    if (t168 != 55) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x11133 = INT16_MAX;
	uint16_t x11134 = 2U;
	int32_t t169 = 1;

    t169 = (x11133>>(x11134-(x11135!=x11136)));

    if (t169 != 16383) { NG(); } else { ; }
	
}

void f170(void) {
    	static int64_t x11169 = 173970663853LL;
	uint64_t x11171 = UINT64_MAX;
	int8_t x11172 = -1;
	int64_t t170 = -70090401LL;

    t170 = (x11169>>(x11170-(x11171!=x11172)));

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x11233 = 6LLU;
	uint8_t x11234 = 36U;
	volatile int64_t x11235 = INT64_MIN;
	int16_t x11236 = 415;
	static volatile uint64_t t171 = 46984259678608LLU;

    t171 = (x11233>>(x11234-(x11235!=x11236)));

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x11269 = 0U;
	uint16_t x11270 = 5U;
	int64_t x11271 = INT64_MIN;
	volatile int32_t t172 = 6450882;

    t172 = (x11269>>(x11270-(x11271!=x11272)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x11281 = UINT64_MAX;
	int32_t x11282 = 1;
	uint8_t x11283 = 57U;
	static uint64_t x11284 = 7LLU;
	volatile uint64_t t173 = UINT64_MAX;

    t173 = (x11281>>(x11282-(x11283!=x11284)));

    if (t173 != UINT64_MAX) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint64_t x11341 = 458617122241LLU;
	uint8_t x11342 = 2U;
	uint64_t x11343 = 707719755264328LLU;
	volatile uint64_t t174 = 0LLU;

    t174 = (x11341>>(x11342-(x11343!=x11344)));

    if (t174 != 229308561120LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static int32_t x11377 = INT32_MAX;
	int32_t x11378 = 4;
	static int16_t x11379 = INT16_MAX;
	static volatile int32_t x11380 = INT32_MAX;
	static int32_t t175 = 574;

    t175 = (x11377>>(x11378-(x11379!=x11380)));

    if (t175 != 268435455) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x11493 = UINT8_MAX;
	volatile int32_t x11494 = 8;
	int16_t x11495 = INT16_MIN;
	static int64_t x11496 = 14157554333881LL;
	int32_t t176 = 3393;

    t176 = (x11493>>(x11494-(x11495!=x11496)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x11541 = 10657270176609140LLU;
	int16_t x11542 = 57;
	int8_t x11543 = 1;
	uint64_t t177 = 24254LLU;

    t177 = (x11541>>(x11542-(x11543!=x11544)));

    if (t177 != 0LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x11573 = 5LLU;
	int32_t x11575 = INT32_MAX;
	int16_t x11576 = INT16_MIN;

    t178 = (x11573>>(x11574-(x11575!=x11576)));

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x11713 = 25LLU;
	volatile int64_t x11714 = 1LL;
	uint8_t x11715 = 0U;
	uint8_t x11716 = UINT8_MAX;
	static volatile uint64_t t179 = 1510LLU;

    t179 = (x11713>>(x11714-(x11715!=x11716)));

    if (t179 != 25LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x11725 = 38U;
	static uint16_t x11726 = 23U;
	int16_t x11727 = INT16_MAX;
	static int16_t x11728 = INT16_MAX;
	uint32_t t180 = 7U;

    t180 = (x11725>>(x11726-(x11727!=x11728)));

    if (t180 != 0U) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x11757 = 7;
	static uint8_t x11758 = 1U;
	uint32_t x11760 = 76U;

    t181 = (x11757>>(x11758-(x11759!=x11760)));

    if (t181 != 7) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x11789 = INT64_MAX;
	static uint32_t x11790 = 7U;
	int32_t x11791 = -20678679;
	int8_t x11792 = INT8_MIN;
	static volatile int64_t t182 = -34LL;

    t182 = (x11789>>(x11790-(x11791!=x11792)));

    if (t182 != 144115188075855871LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint64_t x11913 = 12151945LLU;
	int16_t x11914 = 1;
	static uint64_t x11916 = 1026367582073784309LLU;

    t183 = (x11913>>(x11914-(x11915!=x11916)));

    if (t183 != 12151945LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x11929 = 2U;
	static uint8_t x11931 = 78U;
	uint8_t x11932 = UINT8_MAX;
	volatile int32_t t184 = 130492174;

    t184 = (x11929>>(x11930-(x11931!=x11932)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x11989 = INT32_MAX;
	uint64_t x11990 = 1LLU;
	int8_t x11991 = INT8_MIN;
	static int8_t x11992 = -1;
	volatile int32_t t185 = INT32_MAX;

    t185 = (x11989>>(x11990-(x11991!=x11992)));

    if (t185 != INT32_MAX) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x12010 = 6U;
	int8_t x12011 = 3;
	static int8_t x12012 = -1;
	volatile uint64_t t186 = 68657222LLU;

    t186 = (x12009>>(x12010-(x12011!=x12012)));

    if (t186 != 26232LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static int8_t x12030 = 48;
	uint64_t x12031 = 60019258LLU;
	volatile uint32_t x12032 = UINT32_MAX;
	volatile int64_t t187 = -2734768998425838142LL;

    t187 = (x12029>>(x12030-(x12031!=x12032)));

    if (t187 != 12543LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x12117 = 0LL;
	uint8_t x12118 = 36U;
	uint16_t x12119 = 297U;
	int8_t x12120 = INT8_MIN;
	int64_t t188 = -3704575585134643LL;

    t188 = (x12117>>(x12118-(x12119!=x12120)));

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x12177 = 1;
	volatile uint8_t x12178 = 16U;
	static int64_t x12179 = INT64_MAX;
	int8_t x12180 = INT8_MIN;
	volatile int32_t t189 = 18;

    t189 = (x12177>>(x12178-(x12179!=x12180)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint8_t x12294 = 2U;
	int32_t x12296 = 1;
	static volatile int32_t t190 = 415;

    t190 = (x12293>>(x12294-(x12295!=x12296)));

    if (t190 != 16383) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x12309 = 0;
	int64_t x12310 = 16LL;
	int16_t x12311 = 19;
	static int8_t x12312 = -6;
	volatile int32_t t191 = 515;

    t191 = (x12309>>(x12310-(x12311!=x12312)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x12333 = 0;
	int32_t x12334 = 5;
	int16_t x12335 = INT16_MIN;
	uint32_t x12336 = 39983775U;
	int32_t t192 = -418384;

    t192 = (x12333>>(x12334-(x12335!=x12336)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int32_t x12349 = INT32_MAX;
	static uint8_t x12350 = 8U;
	volatile int32_t x12351 = -372705;
	int8_t x12352 = 0;
	int32_t t193 = 1488;

    t193 = (x12349>>(x12350-(x12351!=x12352)));

    if (t193 != 16777215) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x12497 = INT32_MAX;
	int8_t x12498 = 1;
	int32_t x12499 = -710;
	static volatile int32_t t194 = INT32_MAX;

    t194 = (x12497>>(x12498-(x12499!=x12500)));

    if (t194 != INT32_MAX) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x12545 = INT64_MAX;
	int32_t x12546 = 36;
	uint64_t x12547 = UINT64_MAX;
	static int64_t x12548 = INT64_MIN;
	static int64_t t195 = 3211154195451LL;

    t195 = (x12545>>(x12546-(x12547!=x12548)));

    if (t195 != 268435455LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x12673 = INT64_MAX;
	volatile uint8_t x12674 = 6U;
	int16_t x12675 = 1;
	volatile int64_t t196 = -223853LL;

    t196 = (x12673>>(x12674-(x12675!=x12676)));

    if (t196 != 288230376151711743LL) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x12781 = 4205U;
	uint8_t x12782 = 15U;
	uint8_t x12783 = 106U;
	volatile int32_t t197 = -5811;

    t197 = (x12781>>(x12782-(x12783!=x12784)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x13013 = 0;
	int8_t x13016 = 42;
	volatile int32_t t198 = -807918;

    t198 = (x13013>>(x13014-(x13015!=x13016)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x13105 = UINT64_MAX;
	static uint16_t x13106 = 7U;
	static int8_t x13107 = -23;
	static uint64_t t199 = 120509031252631051LLU;

    t199 = (x13105>>(x13106-(x13107!=x13108)));

    if (t199 != 288230376151711743LLU) { NG(); } else { ; }
	
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

