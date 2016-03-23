
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

volatile int32_t x9 = INT32_MAX;
int8_t x10 = INT8_MIN;
static int32_t t1 = INT32_MAX;
int32_t t3 = -2133;
uint32_t x165 = 1U;
uint16_t x267 = 16U;
int16_t x307 = INT16_MAX;
int8_t x357 = 0;
uint32_t x404 = 1U;
volatile int32_t t8 = 537;
static uint16_t x430 = 1211U;
uint64_t x431 = 6963201046LLU;
uint64_t x573 = 35LLU;
volatile int64_t x574 = INT64_MIN;
uint8_t x638 = 0U;
volatile uint8_t x640 = 2U;
uint32_t x648 = 1U;
int16_t x662 = INT16_MIN;
int8_t x664 = 25;
static volatile int16_t x705 = INT16_MAX;
uint16_t x708 = 7U;
static uint32_t x859 = 924U;
uint32_t t17 = 71072U;
int64_t x1066 = INT64_MIN;
uint64_t x1155 = UINT64_MAX;
int8_t x1424 = 4;
int16_t x1518 = INT16_MIN;
int64_t x1629 = -1LL;
int64_t x1630 = INT64_MIN;
uint64_t t25 = 2070136LLU;
volatile uint32_t x1726 = 7554758U;
volatile int32_t t27 = 0;
int32_t t28 = -243758;
uint32_t x1789 = UINT32_MAX;
volatile uint32_t t29 = UINT32_MAX;
volatile uint32_t x1799 = 61U;
int32_t t30 = 44387;
volatile int8_t x1853 = 3;
static volatile uint32_t x1939 = 2U;
static int8_t x1940 = 1;
static int16_t x2081 = 40;
int16_t x2122 = INT16_MAX;
uint16_t x2124 = 5U;
static volatile int32_t t36 = 16253;
uint8_t x2227 = 9U;
volatile int16_t x2448 = 19;
static volatile int32_t x2488 = 1;
volatile int16_t x2521 = INT16_MAX;
volatile int8_t x2632 = 0;
volatile int32_t t44 = 101;
uint32_t t45 = UINT32_MAX;
volatile uint16_t x2749 = 487U;
uint8_t x2752 = 18U;
int8_t x2890 = -3;
volatile uint32_t x2892 = 42U;
int64_t x3062 = 7LL;
volatile int64_t t51 = 215891780LL;
uint8_t x3094 = 3U;
uint64_t x3103 = 110LLU;
volatile int8_t x3119 = 1;
uint8_t x3120 = 1U;
volatile int8_t x3178 = -1;
uint16_t x3310 = 131U;
int32_t t58 = 5;
static int64_t x3362 = 56LL;
int32_t x3364 = 1;
uint32_t x3791 = 4U;
static uint16_t x3792 = 0U;
int32_t x3829 = INT32_MIN;
static uint8_t x4123 = 6U;
static int32_t t66 = 178669;
int16_t x4177 = INT16_MIN;
uint64_t x4178 = UINT64_MAX;
int64_t x4305 = INT64_MIN;
uint8_t x4352 = 3U;
volatile int32_t t72 = -64573776;
uint64_t t73 = 51851223LLU;
int32_t x4592 = 0;
volatile int16_t x4595 = 27;
volatile int64_t t76 = 959916256774012LL;
int32_t x4638 = -5;
static uint8_t x4680 = 24U;
int8_t x4714 = INT8_MAX;
static uint8_t x4833 = UINT8_MAX;
int8_t x4841 = -1;
uint16_t x4988 = 3U;
static int32_t t85 = INT32_MIN;
int8_t x5221 = -1;
volatile int8_t x5224 = 0;
int16_t x5296 = 9;
int32_t x5302 = INT32_MIN;
int32_t x5303 = 4501;
static int32_t t88 = INT32_MIN;
int32_t x5309 = INT32_MAX;
static uint64_t x5311 = UINT64_MAX;
int32_t x5312 = 0;
int32_t t90 = -23773;
uint64_t x5406 = UINT64_MAX;
int64_t x5431 = 25547287LL;
static volatile int16_t x5457 = INT16_MAX;
static int64_t x5481 = 7912850622505LL;
int16_t x5482 = INT16_MAX;
volatile uint8_t x5483 = 3U;
int8_t x5484 = 1;
int64_t t94 = 25LL;
static int32_t t95 = 9061468;
int32_t x5662 = INT32_MAX;
uint16_t x5664 = 21U;
uint64_t x5695 = UINT64_MAX;
static volatile int32_t t98 = -1688;
int8_t x5930 = 1;
int64_t x6082 = INT64_MAX;
uint32_t x6083 = 463086U;
static int8_t x6436 = 23;
uint16_t x6525 = 8401U;
int16_t x6569 = INT16_MIN;
static int64_t x6570 = INT64_MIN;
int64_t x6762 = INT64_MIN;
static volatile uint16_t x6777 = 24365U;
static int8_t x6857 = INT8_MAX;
uint16_t x7289 = 3U;
uint16_t x7291 = 1U;
volatile uint8_t x7323 = 0U;
int64_t x7361 = INT64_MIN;
uint8_t x7364 = 0U;
volatile int64_t t117 = INT64_MIN;
uint16_t x7393 = 6311U;
uint64_t x7399 = UINT64_MAX;
int8_t x7685 = INT8_MIN;
static int8_t x7687 = INT8_MAX;
int8_t x7742 = INT8_MIN;
int32_t x7758 = -190;
uint32_t x7759 = UINT32_MAX;
int32_t t124 = INT32_MAX;
int32_t x7885 = -1;
int32_t x7888 = 3;
static volatile int32_t t127 = INT32_MIN;
static volatile uint32_t x8028 = 0U;
volatile int32_t t131 = 469499155;
static int8_t x8346 = INT8_MIN;
volatile int32_t t133 = 30;
static volatile int64_t x8466 = INT64_MAX;
int16_t x8479 = INT16_MAX;
int64_t x8500 = 19LL;
int32_t x8662 = INT32_MAX;
volatile uint64_t t137 = 44951505174870091LLU;
volatile uint32_t t138 = 5237U;
volatile uint8_t x8789 = 1U;
int8_t x8790 = -1;
uint8_t x8791 = 112U;
int64_t x8853 = INT64_MIN;
int16_t x8870 = INT16_MAX;
int32_t x8872 = 0;
int8_t x8992 = 0;
uint32_t x9229 = 149738437U;
static int16_t x9310 = 14;
int8_t x9325 = -1;
uint32_t x9327 = UINT32_MAX;
static volatile int32_t t149 = 24914272;
uint16_t x9523 = 1U;
static int32_t x9698 = 84559759;
int16_t x9820 = 3;
uint8_t x9999 = 14U;
volatile uint32_t t156 = UINT32_MAX;
volatile int32_t t157 = 2280;
int32_t x10070 = INT32_MIN;
static volatile int64_t x10093 = INT64_MAX;
static volatile int32_t x10094 = -282408;
volatile int64_t t159 = INT64_MAX;
static int32_t x10195 = 8;
int32_t x10274 = INT32_MAX;
static int8_t x10275 = 1;
uint16_t x10382 = UINT16_MAX;
int32_t x10384 = 3;
int64_t t162 = -1LL;
int8_t x10525 = -16;
int32_t t165 = -15;
static int16_t x10809 = -1;
int32_t x11062 = -3;
int8_t x11183 = 5;
static uint8_t x11256 = 12U;
static uint64_t t177 = UINT64_MAX;
uint64_t x11305 = UINT64_MAX;
uint8_t x11308 = 2U;
volatile int8_t x11357 = INT8_MAX;
int32_t x11358 = -1;
static int32_t t179 = -253;
uint16_t x11433 = 12U;
volatile uint8_t x11449 = 2U;
volatile uint16_t x11755 = 31U;
int32_t t182 = -12;
volatile int64_t x11787 = 233LL;
uint8_t x11937 = UINT8_MAX;
uint32_t x11940 = 3U;
static uint32_t x12122 = UINT32_MAX;
int16_t x12124 = 0;
volatile int32_t t186 = 1;
static volatile int8_t x12149 = -11;
volatile int8_t x12150 = 31;
uint16_t x12151 = 0U;
int16_t x12152 = 1;
volatile int64_t x12157 = 207LL;
static uint8_t x12159 = 3U;
static uint64_t x12180 = 4LLU;
uint16_t x12277 = 22538U;
volatile int32_t x12469 = -1;
uint64_t x12470 = 1996099944620LLU;
volatile uint16_t x12614 = 9U;
int32_t t195 = -9;
int16_t x12717 = INT16_MIN;
static int32_t t197 = 145895;
static int32_t t199 = -222389609;


void f0(void) {
    	int16_t x1 = 7515;
	static int16_t x2 = -1;
	static uint16_t x3 = UINT16_MAX;
	static uint8_t x4 = 5U;
	volatile int32_t t0 = 1;

    t0 = (x1/(x2!=(x3<<x4)));

    if (t0 != 7515) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x11 = 190915072U;
	volatile uint8_t x12 = 1U;

    t1 = (x9/(x10!=(x11<<x12)));

    if (t1 != INT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x69 = 15;
	int16_t x70 = -1;
	int32_t x71 = 120613932;
	uint16_t x72 = 2U;
	int32_t t2 = 22267939;

    t2 = (x69/(x70!=(x71<<x72)));

    if (t2 != 15) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x109 = 3509;
	volatile uint16_t x110 = 6448U;
	volatile int32_t x111 = 3542658;
	uint16_t x112 = 3U;

    t3 = (x109/(x110!=(x111<<x112)));

    if (t3 != 3509) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x166 = INT32_MIN;
	uint16_t x167 = 2U;
	uint8_t x168 = 1U;
	volatile uint32_t t4 = 5U;

    t4 = (x165/(x166!=(x167<<x168)));

    if (t4 != 1U) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x265 = INT8_MIN;
	int16_t x266 = INT16_MAX;
	int8_t x268 = 3;
	volatile int32_t t5 = 822702059;

    t5 = (x265/(x266!=(x267<<x268)));

    if (t5 != -128) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x305 = INT64_MAX;
	volatile int64_t x306 = INT64_MAX;
	int16_t x308 = 0;
	volatile int64_t t6 = INT64_MAX;

    t6 = (x305/(x306!=(x307<<x308)));

    if (t6 != INT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int32_t x358 = INT32_MIN;
	uint32_t x359 = 85931343U;
	static uint32_t x360 = 2U;
	volatile int32_t t7 = 131135384;

    t7 = (x357/(x358!=(x359<<x360)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x401 = INT16_MAX;
	int32_t x402 = 120823334;
	static volatile uint32_t x403 = 217U;

    t8 = (x401/(x402!=(x403<<x404)));

    if (t8 != 32767) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x429 = 14U;
	int8_t x432 = 1;
	volatile uint32_t t9 = 39U;

    t9 = (x429/(x430!=(x431<<x432)));

    if (t9 != 14U) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x549 = -1;
	uint32_t x550 = 4456650U;
	static volatile uint64_t x551 = UINT64_MAX;
	volatile uint8_t x552 = 12U;
	volatile int32_t t10 = -506;

    t10 = (x549/(x550!=(x551<<x552)));

    if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint32_t x575 = 175U;
	volatile uint8_t x576 = 3U;
	uint64_t t11 = 4167927174306LLU;

    t11 = (x573/(x574!=(x575<<x576)));

    if (t11 != 35LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile uint64_t x637 = UINT64_MAX;
	uint64_t x639 = 110407783601LLU;
	volatile uint64_t t12 = UINT64_MAX;

    t12 = (x637/(x638!=(x639<<x640)));

    if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x645 = 126U;
	uint32_t x646 = 110U;
	uint32_t x647 = UINT32_MAX;
	static volatile int32_t t13 = 1;

    t13 = (x645/(x646!=(x647<<x648)));

    if (t13 != 126) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x661 = 2U;
	uint64_t x663 = 2165766LLU;
	volatile int32_t t14 = 41249;

    t14 = (x661/(x662!=(x663<<x664)));

    if (t14 != 2) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint16_t x706 = 4036U;
	volatile uint32_t x707 = UINT32_MAX;
	int32_t t15 = -4947623;

    t15 = (x705/(x706!=(x707<<x708)));

    if (t15 != 32767) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x857 = 700U;
	int64_t x858 = 14LL;
	static uint8_t x860 = 3U;
	volatile int32_t t16 = 361;

    t16 = (x857/(x858!=(x859<<x860)));

    if (t16 != 700) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint32_t x917 = 10193U;
	int32_t x918 = INT32_MAX;
	uint8_t x919 = 9U;
	int16_t x920 = 3;

    t17 = (x917/(x918!=(x919<<x920)));

    if (t17 != 10193U) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x1065 = 0;
	uint8_t x1067 = 28U;
	volatile int16_t x1068 = 1;
	volatile int32_t t18 = -446077;

    t18 = (x1065/(x1066!=(x1067<<x1068)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x1153 = UINT16_MAX;
	static int32_t x1154 = INT32_MIN;
	uint8_t x1156 = 1U;
	volatile int32_t t19 = -2611;

    t19 = (x1153/(x1154!=(x1155<<x1156)));

    if (t19 != 65535) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x1245 = -1980880LL;
	static int64_t x1246 = 7417LL;
	int8_t x1247 = 22;
	uint8_t x1248 = 3U;
	int64_t t20 = 3025264371LL;

    t20 = (x1245/(x1246!=(x1247<<x1248)));

    if (t20 != -1980880LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x1421 = INT64_MIN;
	int8_t x1422 = -3;
	volatile int16_t x1423 = 7;
	int64_t t21 = INT64_MIN;

    t21 = (x1421/(x1422!=(x1423<<x1424)));

    if (t21 != INT64_MIN) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x1517 = 31244;
	uint64_t x1519 = UINT64_MAX;
	static uint8_t x1520 = 6U;
	int32_t t22 = 2173;

    t22 = (x1517/(x1518!=(x1519<<x1520)));

    if (t22 != 31244) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x1533 = 18U;
	uint64_t x1534 = 52466LLU;
	uint64_t x1535 = 19LLU;
	static uint8_t x1536 = 0U;
	volatile int32_t t23 = -2021;

    t23 = (x1533/(x1534!=(x1535<<x1536)));

    if (t23 != 18) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x1631 = INT8_MAX;
	uint8_t x1632 = 3U;
	static int64_t t24 = 55539447LL;

    t24 = (x1629/(x1630!=(x1631<<x1632)));

    if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x1709 = 3802292960LLU;
	uint16_t x1710 = 2975U;
	uint8_t x1711 = UINT8_MAX;
	uint16_t x1712 = 12U;

    t25 = (x1709/(x1710!=(x1711<<x1712)));

    if (t25 != 3802292960LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x1717 = 61756552U;
	static int32_t x1718 = 1;
	static uint8_t x1719 = 1U;
	volatile int8_t x1720 = 3;
	static volatile uint32_t t26 = 14317U;

    t26 = (x1717/(x1718!=(x1719<<x1720)));

    if (t26 != 61756552U) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int32_t x1725 = -1;
	uint8_t x1727 = 17U;
	static int16_t x1728 = 1;

    t27 = (x1725/(x1726!=(x1727<<x1728)));

    if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x1765 = INT8_MIN;
	uint16_t x1766 = UINT16_MAX;
	uint32_t x1767 = 657527U;
	uint32_t x1768 = 1U;

    t28 = (x1765/(x1766!=(x1767<<x1768)));

    if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
    	static int16_t x1790 = INT16_MIN;
	static uint64_t x1791 = UINT64_MAX;
	uint8_t x1792 = 12U;

    t29 = (x1789/(x1790!=(x1791<<x1792)));

    if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint8_t x1797 = UINT8_MAX;
	volatile uint16_t x1798 = 10U;
	uint32_t x1800 = 13U;

    t30 = (x1797/(x1798!=(x1799<<x1800)));

    if (t30 != 255) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x1854 = 4U;
	static int32_t x1855 = INT32_MAX;
	uint16_t x1856 = 0U;
	int32_t t31 = 25328;

    t31 = (x1853/(x1854!=(x1855<<x1856)));

    if (t31 != 3) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x1897 = INT8_MIN;
	volatile int8_t x1898 = INT8_MIN;
	uint8_t x1899 = UINT8_MAX;
	static uint32_t x1900 = 1U;
	int32_t t32 = -3344;

    t32 = (x1897/(x1898!=(x1899<<x1900)));

    if (t32 != -128) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x1937 = -2;
	uint32_t x1938 = 64886571U;
	volatile int32_t t33 = 787475;

    t33 = (x1937/(x1938!=(x1939<<x1940)));

    if (t33 != -2) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x2082 = INT64_MIN;
	int64_t x2083 = 868696694LL;
	uint8_t x2084 = 7U;
	static volatile int32_t t34 = -2188;

    t34 = (x2081/(x2082!=(x2083<<x2084)));

    if (t34 != 40) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x2121 = INT32_MIN;
	volatile int16_t x2123 = 1;
	int32_t t35 = INT32_MIN;

    t35 = (x2121/(x2122!=(x2123<<x2124)));

    if (t35 != INT32_MIN) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x2153 = -414;
	int16_t x2154 = INT16_MIN;
	volatile int64_t x2155 = 81057978LL;
	uint32_t x2156 = 2U;

    t36 = (x2153/(x2154!=(x2155<<x2156)));

    if (t36 != -414) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x2225 = INT8_MAX;
	int32_t x2226 = -31628;
	volatile int16_t x2228 = 1;
	volatile int32_t t37 = 63;

    t37 = (x2225/(x2226!=(x2227<<x2228)));

    if (t37 != 127) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x2317 = 1057656860964791467LL;
	static uint32_t x2318 = 57786U;
	uint16_t x2319 = UINT16_MAX;
	volatile int8_t x2320 = 0;
	static int64_t t38 = -42642387LL;

    t38 = (x2317/(x2318!=(x2319<<x2320)));

    if (t38 != 1057656860964791467LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint16_t x2329 = 22104U;
	int8_t x2330 = -4;
	volatile uint64_t x2331 = 878407834727LLU;
	int16_t x2332 = 26;
	volatile int32_t t39 = 2;

    t39 = (x2329/(x2330!=(x2331<<x2332)));

    if (t39 != 22104) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x2337 = -1;
	int32_t x2338 = -1;
	static volatile uint8_t x2339 = 68U;
	uint32_t x2340 = 8U;
	int32_t t40 = -26780947;

    t40 = (x2337/(x2338!=(x2339<<x2340)));

    if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x2445 = 0U;
	volatile int16_t x2446 = -1;
	uint64_t x2447 = 2825699456941984365LLU;
	int32_t t41 = -1;

    t41 = (x2445/(x2446!=(x2447<<x2448)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint64_t x2485 = 33743272747LLU;
	volatile int16_t x2486 = INT16_MAX;
	uint16_t x2487 = 3U;
	static uint64_t t42 = 11LLU;

    t42 = (x2485/(x2486!=(x2487<<x2488)));

    if (t42 != 33743272747LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int64_t x2522 = INT64_MIN;
	uint16_t x2523 = 17488U;
	uint8_t x2524 = 0U;
	volatile int32_t t43 = -3229286;

    t43 = (x2521/(x2522!=(x2523<<x2524)));

    if (t43 != 32767) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x2629 = -1;
	static volatile int8_t x2630 = INT8_MAX;
	uint8_t x2631 = 0U;

    t44 = (x2629/(x2630!=(x2631<<x2632)));

    if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x2697 = UINT32_MAX;
	int32_t x2698 = -498893;
	uint64_t x2699 = UINT64_MAX;
	volatile uint8_t x2700 = 6U;

    t45 = (x2697/(x2698!=(x2699<<x2700)));

    if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
    	static int64_t x2750 = INT64_MIN;
	volatile uint8_t x2751 = UINT8_MAX;
	static int32_t t46 = -2825;

    t46 = (x2749/(x2750!=(x2751<<x2752)));

    if (t46 != 487) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint8_t x2817 = UINT8_MAX;
	int16_t x2818 = INT16_MAX;
	volatile uint8_t x2819 = 0U;
	uint16_t x2820 = 13U;
	volatile int32_t t47 = -10592253;

    t47 = (x2817/(x2818!=(x2819<<x2820)));

    if (t47 != 255) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x2825 = 30000925436564512LL;
	int16_t x2826 = 11;
	static int16_t x2827 = INT16_MAX;
	uint8_t x2828 = 0U;
	static volatile int64_t t48 = 1LL;

    t48 = (x2825/(x2826!=(x2827<<x2828)));

    if (t48 != 30000925436564512LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x2889 = 508622U;
	volatile uint64_t x2891 = 6LLU;
	uint32_t t49 = 5U;

    t49 = (x2889/(x2890!=(x2891<<x2892)));

    if (t49 != 508622U) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x3049 = INT32_MIN;
	uint8_t x3050 = 0U;
	uint16_t x3051 = UINT16_MAX;
	uint8_t x3052 = 7U;
	int32_t t50 = INT32_MIN;

    t50 = (x3049/(x3050!=(x3051<<x3052)));

    if (t50 != INT32_MIN) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x3061 = 12926564159940LL;
	int64_t x3063 = 11044LL;
	int16_t x3064 = 2;

    t51 = (x3061/(x3062!=(x3063<<x3064)));

    if (t51 != 12926564159940LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static int16_t x3093 = INT16_MAX;
	static int64_t x3095 = 0LL;
	uint8_t x3096 = 5U;
	int32_t t52 = -22257;

    t52 = (x3093/(x3094!=(x3095<<x3096)));

    if (t52 != 32767) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x3101 = INT8_MIN;
	int64_t x3102 = INT64_MIN;
	uint8_t x3104 = 2U;
	int32_t t53 = -475783326;

    t53 = (x3101/(x3102!=(x3103<<x3104)));

    if (t53 != -128) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint64_t x3117 = 216LLU;
	volatile int8_t x3118 = 0;
	static uint64_t t54 = 1LLU;

    t54 = (x3117/(x3118!=(x3119<<x3120)));

    if (t54 != 216LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint16_t x3121 = 4U;
	static int64_t x3122 = -1LL;
	volatile int8_t x3123 = 6;
	uint64_t x3124 = 7LLU;
	int32_t t55 = 116859960;

    t55 = (x3121/(x3122!=(x3123<<x3124)));

    if (t55 != 4) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x3177 = INT16_MIN;
	volatile uint64_t x3179 = 3537LLU;
	uint32_t x3180 = 12U;
	int32_t t56 = 2435;

    t56 = (x3177/(x3178!=(x3179<<x3180)));

    if (t56 != -32768) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int32_t x3309 = INT32_MIN;
	volatile uint64_t x3311 = 1LLU;
	volatile uint16_t x3312 = 2U;
	volatile int32_t t57 = INT32_MIN;

    t57 = (x3309/(x3310!=(x3311<<x3312)));

    if (t57 != INT32_MIN) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x3317 = 0;
	volatile uint16_t x3318 = 10U;
	uint64_t x3319 = UINT64_MAX;
	uint16_t x3320 = 0U;

    t58 = (x3317/(x3318!=(x3319<<x3320)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int16_t x3361 = INT16_MAX;
	uint32_t x3363 = UINT32_MAX;
	volatile int32_t t59 = 9035;

    t59 = (x3361/(x3362!=(x3363<<x3364)));

    if (t59 != 32767) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int32_t x3469 = INT32_MIN;
	int16_t x3470 = INT16_MAX;
	uint8_t x3471 = 102U;
	volatile uint8_t x3472 = 0U;
	static volatile int32_t t60 = INT32_MIN;

    t60 = (x3469/(x3470!=(x3471<<x3472)));

    if (t60 != INT32_MIN) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int64_t x3553 = INT64_MIN;
	int64_t x3554 = INT64_MIN;
	static uint8_t x3555 = UINT8_MAX;
	uint16_t x3556 = 7U;
	static volatile int64_t t61 = INT64_MIN;

    t61 = (x3553/(x3554!=(x3555<<x3556)));

    if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int32_t x3621 = INT32_MIN;
	int8_t x3622 = -1;
	volatile uint8_t x3623 = UINT8_MAX;
	static uint8_t x3624 = 7U;
	volatile int32_t t62 = INT32_MIN;

    t62 = (x3621/(x3622!=(x3623<<x3624)));

    if (t62 != INT32_MIN) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x3789 = INT64_MAX;
	int16_t x3790 = INT16_MIN;
	int64_t t63 = INT64_MAX;

    t63 = (x3789/(x3790!=(x3791<<x3792)));

    if (t63 != INT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x3830 = INT64_MIN;
	uint32_t x3831 = 7048189U;
	volatile int8_t x3832 = 0;
	volatile int32_t t64 = INT32_MIN;

    t64 = (x3829/(x3830!=(x3831<<x3832)));

    if (t64 != INT32_MIN) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int32_t x3957 = INT32_MIN;
	int32_t x3958 = INT32_MIN;
	static int8_t x3959 = 2;
	int16_t x3960 = 14;
	volatile int32_t t65 = INT32_MIN;

    t65 = (x3957/(x3958!=(x3959<<x3960)));

    if (t65 != INT32_MIN) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile uint8_t x4121 = 29U;
	volatile uint16_t x4122 = 57U;
	int64_t x4124 = 25LL;

    t66 = (x4121/(x4122!=(x4123<<x4124)));

    if (t66 != 29) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint32_t x4179 = 19U;
	uint8_t x4180 = 5U;
	static int32_t t67 = 16301;

    t67 = (x4177/(x4178!=(x4179<<x4180)));

    if (t67 != -32768) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x4233 = -5;
	int8_t x4234 = INT8_MIN;
	volatile uint32_t x4235 = UINT32_MAX;
	uint8_t x4236 = 14U;
	volatile int32_t t68 = -2;

    t68 = (x4233/(x4234!=(x4235<<x4236)));

    if (t68 != -5) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x4257 = UINT32_MAX;
	static int64_t x4258 = INT64_MIN;
	uint16_t x4259 = 2820U;
	volatile uint8_t x4260 = 16U;
	volatile uint32_t t69 = UINT32_MAX;

    t69 = (x4257/(x4258!=(x4259<<x4260)));

    if (t69 != UINT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x4297 = 114;
	int16_t x4298 = -162;
	int16_t x4299 = INT16_MAX;
	int8_t x4300 = 1;
	volatile int32_t t70 = 209045;

    t70 = (x4297/(x4298!=(x4299<<x4300)));

    if (t70 != 114) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x4306 = -1;
	static uint64_t x4307 = UINT64_MAX;
	static uint16_t x4308 = 2U;
	volatile int64_t t71 = INT64_MIN;

    t71 = (x4305/(x4306!=(x4307<<x4308)));

    if (t71 != INT64_MIN) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x4349 = INT8_MIN;
	int32_t x4350 = INT32_MIN;
	static volatile int16_t x4351 = 272;

    t72 = (x4349/(x4350!=(x4351<<x4352)));

    if (t72 != -128) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x4429 = 127571663618LLU;
	uint16_t x4430 = 1199U;
	uint64_t x4431 = 102874LLU;
	static volatile uint16_t x4432 = 35U;

    t73 = (x4429/(x4430!=(x4431<<x4432)));

    if (t73 != 127571663618LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x4585 = INT8_MIN;
	volatile int16_t x4586 = INT16_MIN;
	int16_t x4587 = 5;
	int8_t x4588 = 4;
	int32_t t74 = -2302716;

    t74 = (x4585/(x4586!=(x4587<<x4588)));

    if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint16_t x4589 = 10547U;
	volatile int64_t x4590 = 6152934557732173LL;
	int8_t x4591 = 1;
	static int32_t t75 = 69818;

    t75 = (x4589/(x4590!=(x4591<<x4592)));

    if (t75 != 10547) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile int64_t x4593 = -1LL;
	volatile int8_t x4594 = INT8_MIN;
	int8_t x4596 = 0;

    t76 = (x4593/(x4594!=(x4595<<x4596)));

    if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x4605 = 6U;
	volatile int64_t x4606 = 388468144LL;
	uint64_t x4607 = UINT64_MAX;
	uint8_t x4608 = 1U;
	volatile int32_t t77 = -96;

    t77 = (x4605/(x4606!=(x4607<<x4608)));

    if (t77 != 6) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x4637 = INT64_MIN;
	int16_t x4639 = INT16_MAX;
	uint8_t x4640 = 0U;
	int64_t t78 = INT64_MIN;

    t78 = (x4637/(x4638!=(x4639<<x4640)));

    if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x4677 = UINT64_MAX;
	volatile int64_t x4678 = INT64_MIN;
	uint8_t x4679 = 25U;
	uint64_t t79 = UINT64_MAX;

    t79 = (x4677/(x4678!=(x4679<<x4680)));

    if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x4713 = INT32_MIN;
	uint32_t x4715 = 651U;
	volatile int32_t x4716 = 0;
	int32_t t80 = INT32_MIN;

    t80 = (x4713/(x4714!=(x4715<<x4716)));

    if (t80 != INT32_MIN) { NG(); } else { ; }
	
}

void f81(void) {
    	static int8_t x4834 = -1;
	uint16_t x4835 = 934U;
	volatile uint8_t x4836 = 5U;
	int32_t t81 = 284069;

    t81 = (x4833/(x4834!=(x4835<<x4836)));

    if (t81 != 255) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x4842 = -1;
	uint64_t x4843 = 8911482536691LLU;
	int8_t x4844 = 14;
	static volatile int32_t t82 = 28;

    t82 = (x4841/(x4842!=(x4843<<x4844)));

    if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x4985 = 399787076LLU;
	static uint8_t x4986 = UINT8_MAX;
	uint32_t x4987 = 3U;
	volatile uint64_t t83 = 66571981927291LLU;

    t83 = (x4985/(x4986!=(x4987<<x4988)));

    if (t83 != 399787076LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x5061 = 1297059746LLU;
	int32_t x5062 = 5868488;
	int32_t x5063 = 64709910;
	int8_t x5064 = 1;
	volatile uint64_t t84 = 3LLU;

    t84 = (x5061/(x5062!=(x5063<<x5064)));

    if (t84 != 1297059746LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int32_t x5213 = INT32_MIN;
	int32_t x5214 = -1;
	static uint8_t x5215 = UINT8_MAX;
	int32_t x5216 = 1;

    t85 = (x5213/(x5214!=(x5215<<x5216)));

    if (t85 != INT32_MIN) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x5222 = 582561367810061932LLU;
	uint16_t x5223 = UINT16_MAX;
	volatile int32_t t86 = 344;

    t86 = (x5221/(x5222!=(x5223<<x5224)));

    if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int32_t x5293 = 50597;
	static int32_t x5294 = 5710157;
	uint8_t x5295 = 4U;
	int32_t t87 = -64789;

    t87 = (x5293/(x5294!=(x5295<<x5296)));

    if (t87 != 50597) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x5301 = INT32_MIN;
	volatile int32_t x5304 = 1;

    t88 = (x5301/(x5302!=(x5303<<x5304)));

    if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint32_t x5310 = UINT32_MAX;
	int32_t t89 = INT32_MAX;

    t89 = (x5309/(x5310!=(x5311<<x5312)));

    if (t89 != INT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x5377 = INT8_MAX;
	int16_t x5378 = INT16_MIN;
	static int64_t x5379 = 479089113427961175LL;
	uint32_t x5380 = 1U;

    t90 = (x5377/(x5378!=(x5379<<x5380)));

    if (t90 != 127) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x5405 = -1;
	uint16_t x5407 = 5U;
	uint8_t x5408 = 1U;
	int32_t t91 = -1;

    t91 = (x5405/(x5406!=(x5407<<x5408)));

    if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x5429 = 5679U;
	uint16_t x5430 = 1659U;
	static int16_t x5432 = 3;
	int32_t t92 = -3;

    t92 = (x5429/(x5430!=(x5431<<x5432)));

    if (t92 != 5679) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x5458 = INT32_MIN;
	uint64_t x5459 = 1LLU;
	int8_t x5460 = 12;
	static volatile int32_t t93 = 78875854;

    t93 = (x5457/(x5458!=(x5459<<x5460)));

    if (t93 != 32767) { NG(); } else { ; }
	
}

void f94(void) {
    

    t94 = (x5481/(x5482!=(x5483<<x5484)));

    if (t94 != 7912850622505LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint16_t x5593 = 234U;
	int64_t x5594 = INT64_MAX;
	uint16_t x5595 = 7U;
	static int8_t x5596 = 6;

    t95 = (x5593/(x5594!=(x5595<<x5596)));

    if (t95 != 234) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x5605 = INT32_MIN;
	int16_t x5606 = INT16_MIN;
	volatile int16_t x5607 = 111;
	uint8_t x5608 = 11U;
	static int32_t t96 = INT32_MIN;

    t96 = (x5605/(x5606!=(x5607<<x5608)));

    if (t96 != INT32_MIN) { NG(); } else { ; }
	
}

void f97(void) {
    	static int8_t x5661 = -1;
	uint8_t x5663 = UINT8_MAX;
	volatile int32_t t97 = 0;

    t97 = (x5661/(x5662!=(x5663<<x5664)));

    if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x5693 = 16U;
	static volatile int8_t x5694 = INT8_MIN;
	uint8_t x5696 = 5U;

    t98 = (x5693/(x5694!=(x5695<<x5696)));

    if (t98 != 16) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x5849 = INT32_MIN;
	uint16_t x5850 = 210U;
	uint64_t x5851 = 61456787746LLU;
	int8_t x5852 = 12;
	volatile int32_t t99 = INT32_MIN;

    t99 = (x5849/(x5850!=(x5851<<x5852)));

    if (t99 != INT32_MIN) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x5929 = INT32_MIN;
	static volatile uint64_t x5931 = 122021562LLU;
	int16_t x5932 = 30;
	static int32_t t100 = INT32_MIN;

    t100 = (x5929/(x5930!=(x5931<<x5932)));

    if (t100 != INT32_MIN) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint64_t x6081 = 9855773389147LLU;
	int8_t x6084 = 13;
	volatile uint64_t t101 = 94924LLU;

    t101 = (x6081/(x6082!=(x6083<<x6084)));

    if (t101 != 9855773389147LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x6145 = -21;
	volatile uint16_t x6146 = UINT16_MAX;
	int32_t x6147 = INT32_MAX;
	static int16_t x6148 = 0;
	static int32_t t102 = -29436;

    t102 = (x6145/(x6146!=(x6147<<x6148)));

    if (t102 != -21) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x6209 = 16536038;
	static uint32_t x6210 = UINT32_MAX;
	uint8_t x6211 = 7U;
	volatile uint32_t x6212 = 0U;
	volatile int32_t t103 = 8145;

    t103 = (x6209/(x6210!=(x6211<<x6212)));

    if (t103 != 16536038) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x6433 = -1LL;
	uint8_t x6434 = 8U;
	uint8_t x6435 = 2U;
	static int64_t t104 = -7094751LL;

    t104 = (x6433/(x6434!=(x6435<<x6436)));

    if (t104 != -1LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x6526 = INT64_MAX;
	uint32_t x6527 = 11U;
	uint8_t x6528 = 7U;
	volatile int32_t t105 = 1032198;

    t105 = (x6525/(x6526!=(x6527<<x6528)));

    if (t105 != 8401) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x6571 = UINT16_MAX;
	static volatile uint64_t x6572 = 11LLU;
	volatile int32_t t106 = -74048193;

    t106 = (x6569/(x6570!=(x6571<<x6572)));

    if (t106 != -32768) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x6673 = INT8_MAX;
	int16_t x6674 = -1;
	volatile int16_t x6675 = 1;
	uint8_t x6676 = 2U;
	int32_t t107 = -31166;

    t107 = (x6673/(x6674!=(x6675<<x6676)));

    if (t107 != 127) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x6761 = INT8_MIN;
	static uint64_t x6763 = UINT64_MAX;
	uint8_t x6764 = 51U;
	int32_t t108 = -2851557;

    t108 = (x6761/(x6762!=(x6763<<x6764)));

    if (t108 != -128) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x6778 = 90172578083LL;
	uint32_t x6779 = UINT32_MAX;
	uint8_t x6780 = 0U;
	int32_t t109 = 161;

    t109 = (x6777/(x6778!=(x6779<<x6780)));

    if (t109 != 24365) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x6849 = INT16_MAX;
	int8_t x6850 = INT8_MIN;
	int32_t x6851 = 39408;
	static uint8_t x6852 = 3U;
	volatile int32_t t110 = 1;

    t110 = (x6849/(x6850!=(x6851<<x6852)));

    if (t110 != 32767) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint8_t x6858 = UINT8_MAX;
	uint8_t x6859 = 1U;
	uint8_t x6860 = 2U;
	volatile int32_t t111 = 756;

    t111 = (x6857/(x6858!=(x6859<<x6860)));

    if (t111 != 127) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x7133 = UINT16_MAX;
	int32_t x7134 = INT32_MAX;
	uint32_t x7135 = 1489931434U;
	volatile uint8_t x7136 = 2U;
	volatile int32_t t112 = -4194820;

    t112 = (x7133/(x7134!=(x7135<<x7136)));

    if (t112 != 65535) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint16_t x7229 = 1U;
	volatile int16_t x7230 = -1;
	static int32_t x7231 = INT32_MAX;
	volatile int8_t x7232 = 0;
	static volatile int32_t t113 = -15;

    t113 = (x7229/(x7230!=(x7231<<x7232)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x7241 = 0U;
	static int64_t x7242 = INT64_MIN;
	uint64_t x7243 = 50402958874038LLU;
	uint8_t x7244 = 0U;
	volatile int32_t t114 = 13;

    t114 = (x7241/(x7242!=(x7243<<x7244)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x7290 = INT32_MIN;
	int8_t x7292 = 2;
	int32_t t115 = 3432881;

    t115 = (x7289/(x7290!=(x7291<<x7292)));

    if (t115 != 3) { NG(); } else { ; }
	
}

void f116(void) {
    	static int8_t x7321 = -1;
	static int32_t x7322 = 25;
	uint8_t x7324 = 0U;
	volatile int32_t t116 = -77726;

    t116 = (x7321/(x7322!=(x7323<<x7324)));

    if (t116 != -1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint32_t x7362 = 39948206U;
	int64_t x7363 = 353381744LL;

    t117 = (x7361/(x7362!=(x7363<<x7364)));

    if (t117 != INT64_MIN) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x7394 = -1;
	uint32_t x7395 = 5284558U;
	int8_t x7396 = 6;
	volatile int32_t t118 = -642;

    t118 = (x7393/(x7394!=(x7395<<x7396)));

    if (t118 != 6311) { NG(); } else { ; }
	
}

void f119(void) {
    	static int64_t x7397 = 677523626782102LL;
	static volatile uint8_t x7398 = UINT8_MAX;
	int8_t x7400 = 1;
	int64_t t119 = -6734035606LL;

    t119 = (x7397/(x7398!=(x7399<<x7400)));

    if (t119 != 677523626782102LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x7465 = 0U;
	int16_t x7466 = 1251;
	int8_t x7467 = 14;
	static int32_t x7468 = 1;
	int32_t t120 = 154672340;

    t120 = (x7465/(x7466!=(x7467<<x7468)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x7473 = -1;
	static volatile uint32_t x7474 = 128057U;
	int16_t x7475 = 0;
	volatile uint32_t x7476 = 27U;
	int32_t t121 = 173;

    t121 = (x7473/(x7474!=(x7475<<x7476)));

    if (t121 != -1) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x7686 = -1;
	volatile int8_t x7688 = 0;
	int32_t t122 = 18;

    t122 = (x7685/(x7686!=(x7687<<x7688)));

    if (t122 != -128) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x7741 = INT32_MIN;
	uint64_t x7743 = UINT64_MAX;
	uint8_t x7744 = 45U;
	static int32_t t123 = INT32_MIN;

    t123 = (x7741/(x7742!=(x7743<<x7744)));

    if (t123 != INT32_MIN) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x7757 = INT32_MAX;
	uint8_t x7760 = 6U;

    t124 = (x7757/(x7758!=(x7759<<x7760)));

    if (t124 != INT32_MAX) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x7853 = INT8_MIN;
	int64_t x7854 = -20LL;
	volatile uint8_t x7855 = UINT8_MAX;
	int32_t x7856 = 0;
	volatile int32_t t125 = 131509007;

    t125 = (x7853/(x7854!=(x7855<<x7856)));

    if (t125 != -128) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int8_t x7886 = INT8_MAX;
	uint64_t x7887 = 56981761566063172LLU;
	int32_t t126 = -23521166;

    t126 = (x7885/(x7886!=(x7887<<x7888)));

    if (t126 != -1) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x8013 = INT32_MIN;
	int8_t x8014 = -2;
	uint32_t x8015 = 507U;
	static uint8_t x8016 = 14U;

    t127 = (x8013/(x8014!=(x8015<<x8016)));

    if (t127 != INT32_MIN) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x8025 = INT16_MIN;
	static uint16_t x8026 = UINT16_MAX;
	static uint64_t x8027 = 12101298LLU;
	volatile int32_t t128 = 11;

    t128 = (x8025/(x8026!=(x8027<<x8028)));

    if (t128 != -32768) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x8241 = -1644997662LL;
	uint32_t x8242 = UINT32_MAX;
	uint32_t x8243 = 4U;
	volatile uint8_t x8244 = 2U;
	int64_t t129 = 18046066LL;

    t129 = (x8241/(x8242!=(x8243<<x8244)));

    if (t129 != -1644997662LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int64_t x8285 = -1LL;
	static volatile int32_t x8286 = -303;
	volatile int8_t x8287 = INT8_MAX;
	uint16_t x8288 = 3U;
	int64_t t130 = 100LL;

    t130 = (x8285/(x8286!=(x8287<<x8288)));

    if (t130 != -1LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x8341 = INT16_MAX;
	int8_t x8342 = 0;
	uint64_t x8343 = 16948209911444853LLU;
	volatile uint32_t x8344 = 2U;

    t131 = (x8341/(x8342!=(x8343<<x8344)));

    if (t131 != 32767) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x8345 = 7268478707368824194LLU;
	uint32_t x8347 = 1639U;
	int32_t x8348 = 1;
	volatile uint64_t t132 = 1899577928349788LLU;

    t132 = (x8345/(x8346!=(x8347<<x8348)));

    if (t132 != 7268478707368824194LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x8349 = INT8_MAX;
	int32_t x8350 = INT32_MIN;
	volatile uint8_t x8351 = UINT8_MAX;
	int16_t x8352 = 18;

    t133 = (x8349/(x8350!=(x8351<<x8352)));

    if (t133 != 127) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x8465 = 173;
	uint64_t x8467 = 2575714444280608191LLU;
	uint8_t x8468 = 11U;
	int32_t t134 = -4450;

    t134 = (x8465/(x8466!=(x8467<<x8468)));

    if (t134 != 173) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x8477 = -1;
	int8_t x8478 = -18;
	static int16_t x8480 = 8;
	int32_t t135 = 991575;

    t135 = (x8477/(x8478!=(x8479<<x8480)));

    if (t135 != -1) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile int32_t x8497 = INT32_MIN;
	int64_t x8498 = INT64_MIN;
	uint8_t x8499 = UINT8_MAX;
	volatile int32_t t136 = INT32_MIN;

    t136 = (x8497/(x8498!=(x8499<<x8500)));

    if (t136 != INT32_MIN) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint64_t x8661 = 1446LLU;
	uint32_t x8663 = 4925U;
	uint8_t x8664 = 1U;

    t137 = (x8661/(x8662!=(x8663<<x8664)));

    if (t137 != 1446LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint32_t x8673 = 1U;
	uint8_t x8674 = 112U;
	int32_t x8675 = INT32_MAX;
	int8_t x8676 = 0;

    t138 = (x8673/(x8674!=(x8675<<x8676)));

    if (t138 != 1U) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x8792 = 1U;
	int32_t t139 = 9740;

    t139 = (x8789/(x8790!=(x8791<<x8792)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x8849 = 4LLU;
	int16_t x8850 = 809;
	int16_t x8851 = INT16_MAX;
	uint8_t x8852 = 0U;
	static volatile uint64_t t140 = 61LLU;

    t140 = (x8849/(x8850!=(x8851<<x8852)));

    if (t140 != 4LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint16_t x8854 = 8463U;
	uint32_t x8855 = 1125U;
	int8_t x8856 = 0;
	int64_t t141 = INT64_MIN;

    t141 = (x8853/(x8854!=(x8855<<x8856)));

    if (t141 != INT64_MIN) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint8_t x8869 = 3U;
	int64_t x8871 = 0LL;
	volatile int32_t t142 = -600819963;

    t142 = (x8869/(x8870!=(x8871<<x8872)));

    if (t142 != 3) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x8889 = INT16_MIN;
	static int8_t x8890 = INT8_MIN;
	volatile int8_t x8891 = INT8_MAX;
	static int8_t x8892 = 22;
	int32_t t143 = 134445451;

    t143 = (x8889/(x8890!=(x8891<<x8892)));

    if (t143 != -32768) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x8937 = INT64_MIN;
	uint8_t x8938 = 91U;
	volatile uint64_t x8939 = 21937182363LLU;
	uint32_t x8940 = 1U;
	volatile int64_t t144 = INT64_MIN;

    t144 = (x8937/(x8938!=(x8939<<x8940)));

    if (t144 != INT64_MIN) { NG(); } else { ; }
	
}

void f145(void) {
    	static int64_t x8989 = INT64_MAX;
	int16_t x8990 = -1;
	int16_t x8991 = INT16_MAX;
	volatile int64_t t145 = INT64_MAX;

    t145 = (x8989/(x8990!=(x8991<<x8992)));

    if (t145 != INT64_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x9230 = UINT32_MAX;
	int32_t x9231 = 32297;
	uint8_t x9232 = 1U;
	volatile uint32_t t146 = 101885U;

    t146 = (x9229/(x9230!=(x9231<<x9232)));

    if (t146 != 149738437U) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x9241 = -7762;
	int16_t x9242 = INT16_MIN;
	static uint16_t x9243 = 258U;
	static int16_t x9244 = 0;
	volatile int32_t t147 = -9448863;

    t147 = (x9241/(x9242!=(x9243<<x9244)));

    if (t147 != -7762) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int8_t x9309 = INT8_MIN;
	uint64_t x9311 = 5161175035157LLU;
	int32_t x9312 = 2;
	int32_t t148 = 998006;

    t148 = (x9309/(x9310!=(x9311<<x9312)));

    if (t148 != -128) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x9326 = INT64_MAX;
	uint8_t x9328 = 14U;

    t149 = (x9325/(x9326!=(x9327<<x9328)));

    if (t149 != -1) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x9441 = -1;
	uint8_t x9442 = UINT8_MAX;
	static volatile uint64_t x9443 = 17188195143LLU;
	static volatile uint8_t x9444 = 1U;
	volatile int32_t t150 = 32693501;

    t150 = (x9441/(x9442!=(x9443<<x9444)));

    if (t150 != -1) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x9521 = -1;
	int64_t x9522 = 238151485LL;
	static uint8_t x9524 = 1U;
	volatile int32_t t151 = 40;

    t151 = (x9521/(x9522!=(x9523<<x9524)));

    if (t151 != -1) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x9697 = INT64_MAX;
	uint64_t x9699 = UINT64_MAX;
	uint8_t x9700 = 19U;
	int64_t t152 = INT64_MAX;

    t152 = (x9697/(x9698!=(x9699<<x9700)));

    if (t152 != INT64_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x9817 = 3795873818078547584LLU;
	int16_t x9818 = 326;
	static volatile uint16_t x9819 = UINT16_MAX;
	static uint64_t t153 = 2944749LLU;

    t153 = (x9817/(x9818!=(x9819<<x9820)));

    if (t153 != 3795873818078547584LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x9905 = -1;
	int64_t x9906 = -844429954105010LL;
	volatile uint64_t x9907 = 110318864606LLU;
	uint8_t x9908 = 19U;
	volatile int32_t t154 = 33388117;

    t154 = (x9905/(x9906!=(x9907<<x9908)));

    if (t154 != -1) { NG(); } else { ; }
	
}

void f155(void) {
    	static int8_t x9997 = INT8_MAX;
	uint64_t x9998 = UINT64_MAX;
	uint32_t x10000 = 5U;
	volatile int32_t t155 = -165339;

    t155 = (x9997/(x9998!=(x9999<<x10000)));

    if (t155 != 127) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x10049 = UINT32_MAX;
	int32_t x10050 = INT32_MIN;
	uint8_t x10051 = 1U;
	static uint8_t x10052 = 3U;

    t156 = (x10049/(x10050!=(x10051<<x10052)));

    if (t156 != UINT32_MAX) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x10053 = 76U;
	uint8_t x10054 = UINT8_MAX;
	int8_t x10055 = INT8_MAX;
	int16_t x10056 = 7;

    t157 = (x10053/(x10054!=(x10055<<x10056)));

    if (t157 != 76) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x10069 = INT16_MIN;
	uint16_t x10071 = 1926U;
	uint64_t x10072 = 5LLU;
	int32_t t158 = 12216765;

    t158 = (x10069/(x10070!=(x10071<<x10072)));

    if (t158 != -32768) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x10095 = 13005;
	uint32_t x10096 = 1U;

    t159 = (x10093/(x10094!=(x10095<<x10096)));

    if (t159 != INT64_MAX) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint64_t x10193 = 68111342618LLU;
	int32_t x10194 = INT32_MIN;
	int8_t x10196 = 15;
	uint64_t t160 = 7485640LLU;

    t160 = (x10193/(x10194!=(x10195<<x10196)));

    if (t160 != 68111342618LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x10273 = INT64_MAX;
	int8_t x10276 = 0;
	int64_t t161 = INT64_MAX;

    t161 = (x10273/(x10274!=(x10275<<x10276)));

    if (t161 != INT64_MAX) { NG(); } else { ; }
	
}

void f162(void) {
    	static int64_t x10381 = -799546612599LL;
	static int8_t x10383 = 1;

    t162 = (x10381/(x10382!=(x10383<<x10384)));

    if (t162 != -799546612599LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x10421 = INT8_MIN;
	int16_t x10422 = -783;
	static uint32_t x10423 = UINT32_MAX;
	volatile int8_t x10424 = 1;
	volatile int32_t t163 = 64529;

    t163 = (x10421/(x10422!=(x10423<<x10424)));

    if (t163 != -128) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int64_t x10465 = -1LL;
	volatile int32_t x10466 = -191789609;
	uint64_t x10467 = 3426015630417555LLU;
	uint8_t x10468 = 6U;
	int64_t t164 = 26LL;

    t164 = (x10465/(x10466!=(x10467<<x10468)));

    if (t164 != -1LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x10526 = INT64_MAX;
	volatile uint64_t x10527 = 5077600176579129LLU;
	static int32_t x10528 = 56;

    t165 = (x10525/(x10526!=(x10527<<x10528)));

    if (t165 != -16) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint32_t x10689 = 34957548U;
	volatile uint8_t x10690 = 63U;
	uint8_t x10691 = UINT8_MAX;
	uint8_t x10692 = 0U;
	uint32_t t166 = 9815U;

    t166 = (x10689/(x10690!=(x10691<<x10692)));

    if (t166 != 34957548U) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x10761 = UINT8_MAX;
	uint32_t x10762 = UINT32_MAX;
	uint32_t x10763 = 628311U;
	int64_t x10764 = 0LL;
	int32_t t167 = -23698;

    t167 = (x10761/(x10762!=(x10763<<x10764)));

    if (t167 != 255) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint8_t x10810 = 6U;
	static volatile uint64_t x10811 = UINT64_MAX;
	static int16_t x10812 = 1;
	static volatile int32_t t168 = 111483;

    t168 = (x10809/(x10810!=(x10811<<x10812)));

    if (t168 != -1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int64_t x10853 = -15570634324988513LL;
	int64_t x10854 = -1LL;
	uint64_t x10855 = UINT64_MAX;
	int16_t x10856 = 57;
	int64_t t169 = 716234168LL;

    t169 = (x10853/(x10854!=(x10855<<x10856)));

    if (t169 != -15570634324988513LL) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile uint16_t x11061 = 237U;
	static uint32_t x11063 = 30U;
	uint8_t x11064 = 0U;
	volatile int32_t t170 = 635107;

    t170 = (x11061/(x11062!=(x11063<<x11064)));

    if (t170 != 237) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x11161 = INT32_MAX;
	volatile int16_t x11162 = INT16_MAX;
	volatile uint32_t x11163 = UINT32_MAX;
	int8_t x11164 = 8;
	volatile int32_t t171 = INT32_MAX;

    t171 = (x11161/(x11162!=(x11163<<x11164)));

    if (t171 != INT32_MAX) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x11165 = UINT16_MAX;
	static uint8_t x11166 = UINT8_MAX;
	volatile uint64_t x11167 = UINT64_MAX;
	volatile int32_t x11168 = 1;
	volatile int32_t t172 = 14;

    t172 = (x11165/(x11166!=(x11167<<x11168)));

    if (t172 != 65535) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x11181 = 16U;
	static int32_t x11182 = INT32_MIN;
	int8_t x11184 = 1;
	uint32_t t173 = 904194U;

    t173 = (x11181/(x11182!=(x11183<<x11184)));

    if (t173 != 16U) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x11193 = INT16_MIN;
	static volatile int16_t x11194 = -1;
	uint8_t x11195 = 3U;
	uint16_t x11196 = 1U;
	volatile int32_t t174 = 15034712;

    t174 = (x11193/(x11194!=(x11195<<x11196)));

    if (t174 != -32768) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x11229 = UINT64_MAX;
	int32_t x11230 = INT32_MAX;
	uint64_t x11231 = 869617LLU;
	static int8_t x11232 = 7;
	static volatile uint64_t t175 = UINT64_MAX;

    t175 = (x11229/(x11230!=(x11231<<x11232)));

    if (t175 != UINT64_MAX) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x11233 = -1;
	int32_t x11234 = 331;
	int16_t x11235 = 145;
	static int16_t x11236 = 1;
	static int32_t t176 = -71297168;

    t176 = (x11233/(x11234!=(x11235<<x11236)));

    if (t176 != -1) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint64_t x11253 = UINT64_MAX;
	static volatile int64_t x11254 = 1599702979LL;
	static uint64_t x11255 = UINT64_MAX;

    t177 = (x11253/(x11254!=(x11255<<x11256)));

    if (t177 != UINT64_MAX) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile uint8_t x11306 = UINT8_MAX;
	uint64_t x11307 = UINT64_MAX;
	static uint64_t t178 = UINT64_MAX;

    t178 = (x11305/(x11306!=(x11307<<x11308)));

    if (t178 != UINT64_MAX) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int16_t x11359 = INT16_MAX;
	int8_t x11360 = 2;

    t179 = (x11357/(x11358!=(x11359<<x11360)));

    if (t179 != 127) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x11434 = 5276U;
	static volatile int8_t x11435 = INT8_MAX;
	volatile int8_t x11436 = 1;
	int32_t t180 = 1;

    t180 = (x11433/(x11434!=(x11435<<x11436)));

    if (t180 != 12) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x11450 = 5868U;
	volatile uint64_t x11451 = 8597734LLU;
	static int8_t x11452 = 1;
	static int32_t t181 = 0;

    t181 = (x11449/(x11450!=(x11451<<x11452)));

    if (t181 != 2) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint8_t x11753 = 0U;
	static uint8_t x11754 = 3U;
	static volatile uint8_t x11756 = 1U;

    t182 = (x11753/(x11754!=(x11755<<x11756)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x11785 = 22223U;
	static uint8_t x11786 = 2U;
	uint8_t x11788 = 18U;
	int32_t t183 = -280444;

    t183 = (x11785/(x11786!=(x11787<<x11788)));

    if (t183 != 22223) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x11873 = -5;
	volatile uint64_t x11874 = 7973LLU;
	uint8_t x11875 = 1U;
	volatile int8_t x11876 = 0;
	volatile int32_t t184 = -16393310;

    t184 = (x11873/(x11874!=(x11875<<x11876)));

    if (t184 != -5) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x11938 = INT16_MIN;
	int8_t x11939 = INT8_MAX;
	int32_t t185 = 24716509;

    t185 = (x11937/(x11938!=(x11939<<x11940)));

    if (t185 != 255) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x12121 = INT8_MIN;
	uint64_t x12123 = UINT64_MAX;

    t186 = (x12121/(x12122!=(x12123<<x12124)));

    if (t186 != -128) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int32_t t187 = 29728777;

    t187 = (x12149/(x12150!=(x12151<<x12152)));

    if (t187 != -11) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x12158 = 6631968;
	uint16_t x12160 = 7U;
	int64_t t188 = 254LL;

    t188 = (x12157/(x12158!=(x12159<<x12160)));

    if (t188 != 207LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x12177 = 7588U;
	uint64_t x12178 = 919121702323752LLU;
	uint8_t x12179 = UINT8_MAX;
	static int32_t t189 = 394168147;

    t189 = (x12177/(x12178!=(x12179<<x12180)));

    if (t189 != 7588) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x12278 = INT8_MIN;
	int16_t x12279 = INT16_MAX;
	uint16_t x12280 = 7U;
	volatile int32_t t190 = 36320358;

    t190 = (x12277/(x12278!=(x12279<<x12280)));

    if (t190 != 22538) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x12333 = INT64_MIN;
	uint64_t x12334 = UINT64_MAX;
	int64_t x12335 = 8285077LL;
	uint64_t x12336 = 0LLU;
	int64_t t191 = INT64_MIN;

    t191 = (x12333/(x12334!=(x12335<<x12336)));

    if (t191 != INT64_MIN) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x12341 = INT64_MIN;
	uint64_t x12342 = 26573941363LLU;
	int64_t x12343 = 29LL;
	volatile uint8_t x12344 = 22U;
	int64_t t192 = INT64_MIN;

    t192 = (x12341/(x12342!=(x12343<<x12344)));

    if (t192 != INT64_MIN) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile uint8_t x12433 = 5U;
	volatile int8_t x12434 = -1;
	volatile uint16_t x12435 = 0U;
	uint16_t x12436 = 2U;
	int32_t t193 = 17;

    t193 = (x12433/(x12434!=(x12435<<x12436)));

    if (t193 != 5) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile uint8_t x12471 = UINT8_MAX;
	static uint8_t x12472 = 9U;
	volatile int32_t t194 = -118;

    t194 = (x12469/(x12470!=(x12471<<x12472)));

    if (t194 != -1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x12613 = -1;
	int32_t x12615 = 42856;
	int8_t x12616 = 3;

    t195 = (x12613/(x12614!=(x12615<<x12616)));

    if (t195 != -1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int32_t x12697 = INT32_MIN;
	int8_t x12698 = 0;
	volatile uint16_t x12699 = UINT16_MAX;
	int32_t x12700 = 2;
	int32_t t196 = INT32_MIN;

    t196 = (x12697/(x12698!=(x12699<<x12700)));

    if (t196 != INT32_MIN) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x12718 = INT64_MIN;
	uint64_t x12719 = 280LLU;
	int64_t x12720 = 6LL;

    t197 = (x12717/(x12718!=(x12719<<x12720)));

    if (t197 != -32768) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x12757 = -1LL;
	static int16_t x12758 = 8456;
	volatile int8_t x12759 = 61;
	int8_t x12760 = 1;
	static int64_t t198 = -29530473LL;

    t198 = (x12757/(x12758!=(x12759<<x12760)));

    if (t198 != -1LL) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x12949 = INT16_MIN;
	uint32_t x12950 = UINT32_MAX;
	int8_t x12951 = INT8_MAX;
	static volatile uint8_t x12952 = 13U;

    t199 = (x12949/(x12950!=(x12951<<x12952)));

    if (t199 != -32768) { NG(); } else { ; }
	
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

