
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

int8_t x2 = 0;
int64_t x3 = INT64_MIN;
volatile uint64_t x174 = 18LLU;
int32_t t1 = 820;
static uint8_t x181 = UINT8_MAX;
uint32_t x182 = 3U;
static uint32_t x269 = 1344560362U;
volatile int32_t t3 = 1185;
uint16_t x773 = 12U;
int16_t x774 = 0;
static int16_t x775 = -27;
volatile uint16_t x801 = UINT16_MAX;
int32_t t6 = -1168;
int32_t t9 = 159;
volatile uint64_t x1105 = UINT64_MAX;
uint8_t x1151 = 1U;
static uint8_t x1202 = 2U;
int16_t x1204 = INT16_MIN;
uint8_t x1225 = 8U;
uint16_t x1227 = 4166U;
volatile int32_t x1315 = INT32_MIN;
int64_t x1345 = 0LL;
volatile int32_t t18 = -514535176;
uint16_t x1361 = UINT16_MAX;
volatile uint8_t x1362 = 11U;
uint8_t x1407 = 10U;
uint32_t x1423 = 4050U;
volatile uint16_t x1499 = 2818U;
int32_t t25 = -537;
int8_t x1637 = INT8_MAX;
int32_t x1640 = -1;
int8_t x1763 = -4;
int32_t t28 = -208;
int8_t x1888 = INT8_MIN;
volatile uint64_t x1918 = 2LLU;
int32_t t32 = -46987632;
volatile int32_t t33 = -104811307;
volatile int64_t x2065 = 201842LL;
uint32_t x2066 = 6U;
int16_t x2068 = -142;
volatile int64_t x2107 = INT64_MIN;
int8_t x2213 = INT8_MAX;
int32_t t38 = 1;
uint32_t x2560 = UINT32_MAX;
static uint32_t x2801 = 263784U;
int32_t t43 = -191;
int8_t x2855 = INT8_MIN;
int8_t x3098 = 1;
int8_t x3134 = 13;
int8_t x3136 = INT8_MAX;
volatile int16_t x3247 = INT16_MIN;
static uint16_t x3326 = 11U;
int8_t x3439 = 49;
int16_t x3534 = 7;
int32_t x3575 = INT32_MAX;
int64_t x3576 = -1LL;
static volatile int32_t t58 = -55126;
static volatile uint32_t x3802 = 19U;
volatile uint16_t x4253 = 2U;
static int32_t x4256 = -1;
static uint32_t x4325 = UINT32_MAX;
static uint64_t x4485 = 1808383061569LLU;
uint32_t x4487 = 7372U;
static volatile int8_t x4488 = INT8_MIN;
uint8_t x4490 = 3U;
uint8_t x4514 = 9U;
volatile uint8_t x4516 = 2U;
volatile int32_t t66 = -38479;
static uint16_t x4782 = 2U;
uint16_t x4783 = 1U;
volatile int8_t x4784 = 7;
uint64_t x4968 = 2569395420515661136LLU;
volatile int32_t t69 = 60622;
static int8_t x5073 = 2;
int32_t x5074 = 1;
int32_t x5159 = -1;
int64_t x5160 = -1LL;
uint16_t x5205 = UINT16_MAX;
int64_t x5206 = 7LL;
int16_t x5208 = INT16_MIN;
int8_t x5329 = 6;
uint64_t x5332 = UINT64_MAX;
uint8_t x5402 = 7U;
int32_t t74 = 145277;
uint8_t x5418 = 0U;
int64_t x5419 = INT64_MAX;
static uint8_t x5420 = 0U;
int32_t t75 = 298;
uint16_t x5434 = 0U;
volatile int32_t t76 = 0;
int64_t x5455 = 1LL;
static int64_t x5559 = INT64_MAX;
int32_t x5574 = 3;
int8_t x5576 = 0;
volatile int32_t t81 = -1804001;
static volatile uint32_t x5776 = 394369182U;
int16_t x5918 = 29;
volatile int32_t x5919 = INT32_MAX;
int16_t x6148 = INT16_MAX;
uint16_t x6193 = 2U;
uint8_t x6194 = 19U;
volatile int16_t x6216 = -1;
volatile int32_t t88 = -63320167;
int32_t t89 = 3170;
int64_t x6449 = 10894LL;
int16_t x6475 = -1;
volatile uint64_t x6501 = 1047378294LLU;
uint8_t x6758 = 3U;
int16_t x6760 = -1;
uint32_t x6841 = 222288789U;
int16_t x6843 = 465;
static volatile uint8_t x6913 = 0U;
int16_t x6914 = 1;
int8_t x6916 = 0;
volatile int32_t t99 = -4961;
static int32_t x7113 = 0;
uint8_t x7114 = 0U;
int64_t x7291 = -1LL;
static uint32_t x7325 = UINT32_MAX;
volatile uint8_t x7326 = 14U;
int8_t x7518 = 0;
static volatile uint64_t x7519 = 27591831954LLU;
volatile int64_t x7781 = 771207746732252598LL;
volatile int8_t x7782 = 3;
int16_t x7953 = 5;
int16_t x7954 = 1;
int64_t x7955 = INT64_MIN;
uint16_t x7956 = 1U;
int32_t t111 = -1515;
static int16_t x8015 = INT16_MIN;
uint32_t x8093 = UINT32_MAX;
static int16_t x8107 = -1;
static uint16_t x8108 = 716U;
volatile int16_t x8211 = INT16_MIN;
uint32_t x8318 = 0U;
uint8_t x8438 = 1U;
volatile uint64_t x8439 = 8833444731442863LLU;
int16_t x8807 = 238;
int32_t t121 = 562295;
int64_t x8819 = INT64_MIN;
uint8_t x8820 = UINT8_MAX;
static int8_t x8837 = 13;
int16_t x8840 = INT16_MIN;
volatile int64_t x8868 = INT64_MIN;
int8_t x8994 = 17;
int16_t x8995 = INT16_MAX;
int16_t x9165 = 1;
uint32_t x9269 = 141U;
volatile uint32_t x9329 = 4U;
int32_t x9497 = 2221;
static uint16_t x9501 = 17778U;
uint8_t x9578 = 2U;
static volatile uint16_t x9718 = 13U;
int32_t t134 = 11490960;
int32_t t136 = 625;
static int16_t x9842 = 2;
static int8_t x9878 = 0;
volatile int32_t t139 = 1983;
int8_t x10290 = 1;
int32_t t142 = 2612317;
uint16_t x10567 = 7555U;
static int64_t x10568 = 3789064076LL;
volatile int8_t x10590 = 0;
uint64_t x10619 = UINT64_MAX;
uint8_t x10620 = 1U;
volatile int32_t t146 = -1;
volatile int32_t t147 = 1;
uint8_t x10775 = UINT8_MAX;
static int16_t x10887 = 13;
static int16_t x10962 = 1;
uint32_t x10979 = UINT32_MAX;
uint16_t x11050 = 18U;
volatile int8_t x11171 = INT8_MAX;
uint16_t x11199 = 13836U;
int32_t x11254 = 1;
int16_t x11255 = INT16_MIN;
uint16_t x11557 = 391U;
uint8_t x11558 = 3U;
int32_t t158 = -1022227;
volatile int8_t x11593 = INT8_MAX;
uint8_t x11595 = UINT8_MAX;
volatile uint8_t x11630 = 3U;
int64_t x11632 = 128567335LL;
int8_t x11641 = 41;
static uint16_t x11651 = 26780U;
int32_t t164 = -73260;
uint16_t x11721 = 2U;
int8_t x11738 = 11;
volatile int32_t t168 = 1;
static volatile int16_t x11879 = INT16_MIN;
uint64_t x11880 = UINT64_MAX;


void f0(void) {
    	int8_t x1 = INT8_MAX;
	static uint64_t x4 = 21458922681LLU;
	volatile int32_t t0 = 0;

    t0 = ((x1<<x2)<=(x3+x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x173 = 7939U;
	uint8_t x175 = 6U;
	static uint8_t x176 = UINT8_MAX;

    t1 = ((x173<<x174)<=(x175+x176));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x183 = INT8_MIN;
	volatile uint16_t x184 = UINT16_MAX;
	int32_t t2 = 1531803;

    t2 = ((x181<<x182)<=(x183+x184));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x270 = 0;
	volatile int8_t x271 = INT8_MIN;
	volatile int32_t x272 = 2;

    t3 = ((x269<<x270)<=(x271+x272));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x525 = 2;
	uint8_t x526 = 24U;
	int64_t x527 = -1LL;
	int16_t x528 = 0;
	int32_t t4 = 386637277;

    t4 = ((x525<<x526)<=(x527+x528));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x776 = UINT32_MAX;
	int32_t t5 = 113;

    t5 = ((x773<<x774)<=(x775+x776));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x802 = 1U;
	static int16_t x803 = INT16_MIN;
	volatile uint64_t x804 = 462257573725LLU;

    t6 = ((x801<<x802)<=(x803+x804));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x809 = 20U;
	volatile uint8_t x810 = 0U;
	uint64_t x811 = UINT64_MAX;
	static int64_t x812 = -122921065402568337LL;
	volatile int32_t t7 = 688370;

    t7 = ((x809<<x810)<=(x811+x812));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x849 = 1;
	uint16_t x850 = 1U;
	static uint64_t x851 = 4632071183721LLU;
	uint8_t x852 = UINT8_MAX;
	volatile int32_t t8 = 79;

    t8 = ((x849<<x850)<=(x851+x852));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x989 = INT8_MAX;
	static int16_t x990 = 6;
	static int8_t x991 = INT8_MIN;
	int16_t x992 = -3668;

    t9 = ((x989<<x990)<=(x991+x992));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x1106 = 3LLU;
	int16_t x1107 = INT16_MIN;
	uint32_t x1108 = UINT32_MAX;
	int32_t t10 = 135310;

    t10 = ((x1105<<x1106)<=(x1107+x1108));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x1149 = 812316171400695178LLU;
	static int16_t x1150 = 0;
	uint64_t x1152 = UINT64_MAX;
	volatile int32_t t11 = -2;

    t11 = ((x1149<<x1150)<=(x1151+x1152));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x1201 = INT8_MAX;
	int32_t x1203 = -667538;
	volatile int32_t t12 = 195545816;

    t12 = ((x1201<<x1202)<=(x1203+x1204));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x1226 = 0;
	uint16_t x1228 = UINT16_MAX;
	volatile int32_t t13 = -1;

    t13 = ((x1225<<x1226)<=(x1227+x1228));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x1233 = 13058274930664LLU;
	uint64_t x1234 = 0LLU;
	static uint8_t x1235 = 54U;
	volatile int16_t x1236 = INT16_MAX;
	int32_t t14 = 146531329;

    t14 = ((x1233<<x1234)<=(x1235+x1236));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x1289 = INT8_MAX;
	volatile int16_t x1290 = 1;
	int8_t x1291 = INT8_MIN;
	uint8_t x1292 = 1U;
	int32_t t15 = 8;

    t15 = ((x1289<<x1290)<=(x1291+x1292));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x1313 = UINT16_MAX;
	uint8_t x1314 = 2U;
	uint8_t x1316 = 1U;
	volatile int32_t t16 = -71;

    t16 = ((x1313<<x1314)<=(x1315+x1316));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x1317 = 0U;
	int8_t x1318 = 14;
	uint64_t x1319 = 496849890LLU;
	int32_t x1320 = INT32_MIN;
	volatile int32_t t17 = -5;

    t17 = ((x1317<<x1318)<=(x1319+x1320));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x1346 = 1;
	int32_t x1347 = INT32_MAX;
	uint64_t x1348 = UINT64_MAX;

    t18 = ((x1345<<x1346)<=(x1347+x1348));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x1363 = INT8_MAX;
	int16_t x1364 = INT16_MAX;
	static volatile int32_t t19 = -503;

    t19 = ((x1361<<x1362)<=(x1363+x1364));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint16_t x1405 = UINT16_MAX;
	int16_t x1406 = 1;
	static uint64_t x1408 = 45830011LLU;
	static int32_t t20 = 318000677;

    t20 = ((x1405<<x1406)<=(x1407+x1408));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x1421 = 294U;
	volatile uint8_t x1422 = 1U;
	uint8_t x1424 = 3U;
	static int32_t t21 = 289854;

    t21 = ((x1421<<x1422)<=(x1423+x1424));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x1497 = 1000288102294213LL;
	uint8_t x1498 = 13U;
	int16_t x1500 = 341;
	int32_t t22 = -1;

    t22 = ((x1497<<x1498)<=(x1499+x1500));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x1509 = INT16_MAX;
	volatile uint64_t x1510 = 6LLU;
	uint8_t x1511 = UINT8_MAX;
	volatile int16_t x1512 = INT16_MAX;
	static int32_t t23 = 209;

    t23 = ((x1509<<x1510)<=(x1511+x1512));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x1537 = 98U;
	volatile int8_t x1538 = 0;
	uint32_t x1539 = 573253536U;
	volatile int64_t x1540 = INT64_MIN;
	int32_t t24 = -497742;

    t24 = ((x1537<<x1538)<=(x1539+x1540));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x1629 = 10U;
	static int16_t x1630 = 1;
	int16_t x1631 = INT16_MIN;
	volatile int16_t x1632 = -1;

    t25 = ((x1629<<x1630)<=(x1631+x1632));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint64_t x1638 = 0LLU;
	int8_t x1639 = INT8_MIN;
	volatile int32_t t26 = -18999;

    t26 = ((x1637<<x1638)<=(x1639+x1640));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint64_t x1717 = 407LLU;
	uint64_t x1718 = 15LLU;
	static uint64_t x1719 = 6550LLU;
	uint64_t x1720 = 176534LLU;
	int32_t t27 = 1066;

    t27 = ((x1717<<x1718)<=(x1719+x1720));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x1761 = 31U;
	int64_t x1762 = 3LL;
	uint32_t x1764 = 743U;

    t28 = ((x1761<<x1762)<=(x1763+x1764));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x1877 = 887362077366769LLU;
	static int8_t x1878 = 15;
	int8_t x1879 = INT8_MAX;
	static uint64_t x1880 = UINT64_MAX;
	int32_t t29 = -376014;

    t29 = ((x1877<<x1878)<=(x1879+x1880));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x1885 = UINT16_MAX;
	int8_t x1886 = 0;
	volatile uint64_t x1887 = 4396058885253515121LLU;
	static volatile int32_t t30 = -15;

    t30 = ((x1885<<x1886)<=(x1887+x1888));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x1917 = UINT16_MAX;
	volatile int16_t x1919 = -12632;
	int16_t x1920 = INT16_MAX;
	volatile int32_t t31 = -227345373;

    t31 = ((x1917<<x1918)<=(x1919+x1920));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile uint8_t x1945 = UINT8_MAX;
	static uint8_t x1946 = 20U;
	int8_t x1947 = INT8_MIN;
	uint32_t x1948 = 1481701766U;

    t32 = ((x1945<<x1946)<=(x1947+x1948));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x2013 = 27U;
	uint8_t x2014 = 1U;
	static uint8_t x2015 = 50U;
	static int16_t x2016 = INT16_MIN;

    t33 = ((x2013<<x2014)<=(x2015+x2016));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint16_t x2045 = 12361U;
	uint8_t x2046 = 1U;
	uint16_t x2047 = UINT16_MAX;
	int16_t x2048 = INT16_MIN;
	volatile int32_t t34 = 1;

    t34 = ((x2045<<x2046)<=(x2047+x2048));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x2067 = INT64_MAX;
	int32_t t35 = 2357798;

    t35 = ((x2065<<x2066)<=(x2067+x2068));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x2105 = UINT8_MAX;
	static int8_t x2106 = 21;
	static uint32_t x2108 = 6U;
	static int32_t t36 = 52;

    t36 = ((x2105<<x2106)<=(x2107+x2108));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x2197 = UINT16_MAX;
	volatile uint16_t x2198 = 0U;
	uint32_t x2199 = 370577U;
	int16_t x2200 = INT16_MIN;
	int32_t t37 = -87101;

    t37 = ((x2197<<x2198)<=(x2199+x2200));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x2214 = 0;
	int64_t x2215 = -2105279558791LL;
	int16_t x2216 = 1;

    t38 = ((x2213<<x2214)<=(x2215+x2216));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x2281 = 1145518677133186LL;
	uint64_t x2282 = 0LLU;
	int64_t x2283 = -8697667LL;
	uint64_t x2284 = UINT64_MAX;
	volatile int32_t t39 = 1;

    t39 = ((x2281<<x2282)<=(x2283+x2284));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x2305 = 113LLU;
	int8_t x2306 = 1;
	volatile int8_t x2307 = INT8_MIN;
	static int64_t x2308 = -315330638339868040LL;
	volatile int32_t t40 = 40;

    t40 = ((x2305<<x2306)<=(x2307+x2308));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint64_t x2357 = UINT64_MAX;
	volatile uint32_t x2358 = 29U;
	int32_t x2359 = INT32_MAX;
	uint16_t x2360 = 0U;
	volatile int32_t t41 = -1;

    t41 = ((x2357<<x2358)<=(x2359+x2360));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int8_t x2557 = 0;
	int8_t x2558 = 28;
	static int32_t x2559 = -1;
	int32_t t42 = -102;

    t42 = ((x2557<<x2558)<=(x2559+x2560));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x2802 = 2U;
	static volatile int64_t x2803 = -1LL;
	int32_t x2804 = INT32_MIN;

    t43 = ((x2801<<x2802)<=(x2803+x2804));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x2853 = INT8_MAX;
	uint16_t x2854 = 24U;
	int16_t x2856 = INT16_MAX;
	int32_t t44 = 358829640;

    t44 = ((x2853<<x2854)<=(x2855+x2856));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x2873 = 367706065782902018LLU;
	uint8_t x2874 = 20U;
	int32_t x2875 = -1;
	static int64_t x2876 = -1LL;
	volatile int32_t t45 = 33;

    t45 = ((x2873<<x2874)<=(x2875+x2876));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x3093 = 33U;
	static uint16_t x3094 = 2U;
	int32_t x3095 = 822;
	int16_t x3096 = INT16_MIN;
	static int32_t t46 = 150454;

    t46 = ((x3093<<x3094)<=(x3095+x3096));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x3097 = 8U;
	static uint32_t x3099 = UINT32_MAX;
	volatile int16_t x3100 = 6;
	int32_t t47 = -9090483;

    t47 = ((x3097<<x3098)<=(x3099+x3100));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x3133 = 44U;
	int8_t x3135 = INT8_MIN;
	int32_t t48 = -11;

    t48 = ((x3133<<x3134)<=(x3135+x3136));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint8_t x3181 = 2U;
	static volatile uint16_t x3182 = 6U;
	uint32_t x3183 = 3U;
	static volatile int32_t x3184 = -5;
	volatile int32_t t49 = -2010;

    t49 = ((x3181<<x3182)<=(x3183+x3184));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int64_t x3201 = 401182642722LL;
	int16_t x3202 = 1;
	uint64_t x3203 = UINT64_MAX;
	static int32_t x3204 = INT32_MIN;
	int32_t t50 = 217;

    t50 = ((x3201<<x3202)<=(x3203+x3204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x3213 = 453U;
	static int32_t x3214 = 8;
	int8_t x3215 = -7;
	int8_t x3216 = INT8_MIN;
	volatile int32_t t51 = 23;

    t51 = ((x3213<<x3214)<=(x3215+x3216));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x3237 = 203613219U;
	static int8_t x3238 = 30;
	static uint64_t x3239 = UINT64_MAX;
	volatile int8_t x3240 = -1;
	int32_t t52 = -160362974;

    t52 = ((x3237<<x3238)<=(x3239+x3240));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x3245 = UINT8_MAX;
	uint8_t x3246 = 18U;
	uint8_t x3248 = 1U;
	volatile int32_t t53 = -309560;

    t53 = ((x3245<<x3246)<=(x3247+x3248));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x3285 = 59;
	static volatile uint8_t x3286 = 0U;
	static volatile int8_t x3287 = -1;
	int8_t x3288 = INT8_MAX;
	int32_t t54 = 14072;

    t54 = ((x3285<<x3286)<=(x3287+x3288));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x3325 = 37U;
	uint32_t x3327 = 212U;
	int64_t x3328 = -1852076302LL;
	int32_t t55 = -41328831;

    t55 = ((x3325<<x3326)<=(x3327+x3328));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x3437 = 21708U;
	uint16_t x3438 = 16U;
	int64_t x3440 = -251539LL;
	volatile int32_t t56 = -505588;

    t56 = ((x3437<<x3438)<=(x3439+x3440));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint32_t x3533 = 20058U;
	int32_t x3535 = -1;
	int16_t x3536 = -1;
	int32_t t57 = -829485;

    t57 = ((x3533<<x3534)<=(x3535+x3536));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x3573 = 24307570230211528LLU;
	uint32_t x3574 = 7U;

    t58 = ((x3573<<x3574)<=(x3575+x3576));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x3801 = 550201956LL;
	uint16_t x3803 = UINT16_MAX;
	uint64_t x3804 = 1330706913009633LLU;
	int32_t t59 = -7562191;

    t59 = ((x3801<<x3802)<=(x3803+x3804));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint8_t x4061 = UINT8_MAX;
	static uint8_t x4062 = 6U;
	int16_t x4063 = -2386;
	static uint16_t x4064 = 4U;
	volatile int32_t t60 = 1370;

    t60 = ((x4061<<x4062)<=(x4063+x4064));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x4254 = 1;
	volatile uint16_t x4255 = UINT16_MAX;
	static int32_t t61 = -11005;

    t61 = ((x4253<<x4254)<=(x4255+x4256));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x4309 = UINT64_MAX;
	static uint8_t x4310 = 0U;
	static int64_t x4311 = INT64_MIN;
	int16_t x4312 = INT16_MAX;
	int32_t t62 = 30729708;

    t62 = ((x4309<<x4310)<=(x4311+x4312));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x4326 = 26U;
	int64_t x4327 = 502519343LL;
	volatile int16_t x4328 = 1;
	int32_t t63 = 1;

    t63 = ((x4325<<x4326)<=(x4327+x4328));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint32_t x4486 = 13U;
	int32_t t64 = -1;

    t64 = ((x4485<<x4486)<=(x4487+x4488));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x4489 = INT8_MAX;
	int64_t x4491 = 1018906LL;
	int8_t x4492 = INT8_MIN;
	volatile int32_t t65 = -873;

    t65 = ((x4489<<x4490)<=(x4491+x4492));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x4513 = 159U;
	volatile int8_t x4515 = 0;

    t66 = ((x4513<<x4514)<=(x4515+x4516));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x4781 = INT16_MAX;
	static int32_t t67 = 5459947;

    t67 = ((x4781<<x4782)<=(x4783+x4784));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x4937 = INT16_MAX;
	static int8_t x4938 = 0;
	uint32_t x4939 = UINT32_MAX;
	int32_t x4940 = INT32_MIN;
	volatile int32_t t68 = 160244113;

    t68 = ((x4937<<x4938)<=(x4939+x4940));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile uint16_t x4965 = UINT16_MAX;
	volatile int8_t x4966 = 0;
	int32_t x4967 = -1;

    t69 = ((x4965<<x4966)<=(x4967+x4968));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint8_t x5075 = UINT8_MAX;
	static int8_t x5076 = -1;
	int32_t t70 = 338600;

    t70 = ((x5073<<x5074)<=(x5075+x5076));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint8_t x5157 = 21U;
	volatile int16_t x5158 = 15;
	volatile int32_t t71 = 2497;

    t71 = ((x5157<<x5158)<=(x5159+x5160));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x5207 = -48;
	int32_t t72 = -185;

    t72 = ((x5205<<x5206)<=(x5207+x5208));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint16_t x5330 = 4U;
	volatile int16_t x5331 = INT16_MAX;
	static volatile int32_t t73 = 126447;

    t73 = ((x5329<<x5330)<=(x5331+x5332));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint32_t x5401 = UINT32_MAX;
	int8_t x5403 = INT8_MIN;
	static uint64_t x5404 = 643023655197408LLU;

    t74 = ((x5401<<x5402)<=(x5403+x5404));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x5417 = INT8_MAX;

    t75 = ((x5417<<x5418)<=(x5419+x5420));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x5433 = 13;
	int32_t x5435 = 2711;
	int8_t x5436 = -1;

    t76 = ((x5433<<x5434)<=(x5435+x5436));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x5453 = 2;
	static uint16_t x5454 = 14U;
	volatile uint32_t x5456 = 32U;
	volatile int32_t t77 = 2060;

    t77 = ((x5453<<x5454)<=(x5455+x5456));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint64_t x5489 = 47LLU;
	uint8_t x5490 = 5U;
	volatile int16_t x5491 = 4170;
	uint16_t x5492 = 0U;
	volatile int32_t t78 = -7;

    t78 = ((x5489<<x5490)<=(x5491+x5492));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x5493 = 4095105;
	volatile int16_t x5494 = 3;
	uint32_t x5495 = UINT32_MAX;
	static volatile uint32_t x5496 = UINT32_MAX;
	int32_t t79 = 0;

    t79 = ((x5493<<x5494)<=(x5495+x5496));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint16_t x5557 = UINT16_MAX;
	static uint8_t x5558 = 13U;
	uint64_t x5560 = 962128795778LLU;
	volatile int32_t t80 = -28;

    t80 = ((x5557<<x5558)<=(x5559+x5560));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint32_t x5573 = UINT32_MAX;
	int16_t x5575 = INT16_MAX;

    t81 = ((x5573<<x5574)<=(x5575+x5576));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x5773 = 0;
	volatile uint8_t x5774 = 0U;
	uint64_t x5775 = 1711LLU;
	int32_t t82 = -426406990;

    t82 = ((x5773<<x5774)<=(x5775+x5776));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint64_t x5917 = 9267839620805LLU;
	static int64_t x5920 = -305137LL;
	static volatile int32_t t83 = 70799;

    t83 = ((x5917<<x5918)<=(x5919+x5920));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x6021 = 1;
	int8_t x6022 = 2;
	static uint32_t x6023 = UINT32_MAX;
	int32_t x6024 = 13322911;
	int32_t t84 = -6560;

    t84 = ((x6021<<x6022)<=(x6023+x6024));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile int8_t x6137 = 1;
	uint32_t x6138 = 0U;
	static volatile uint8_t x6139 = 48U;
	int32_t x6140 = INT32_MIN;
	volatile int32_t t85 = -7;

    t85 = ((x6137<<x6138)<=(x6139+x6140));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x6145 = 1U;
	int8_t x6146 = 2;
	volatile uint32_t x6147 = 28U;
	volatile int32_t t86 = 44769;

    t86 = ((x6145<<x6146)<=(x6147+x6148));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x6195 = UINT8_MAX;
	uint64_t x6196 = 2673749LLU;
	int32_t t87 = -7;

    t87 = ((x6193<<x6194)<=(x6195+x6196));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x6213 = UINT16_MAX;
	uint16_t x6214 = 1U;
	uint64_t x6215 = UINT64_MAX;

    t88 = ((x6213<<x6214)<=(x6215+x6216));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x6365 = 0;
	int8_t x6366 = 0;
	volatile int16_t x6367 = INT16_MAX;
	uint8_t x6368 = UINT8_MAX;

    t89 = ((x6365<<x6366)<=(x6367+x6368));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint16_t x6450 = 6U;
	static int32_t x6451 = INT32_MIN;
	int8_t x6452 = 0;
	volatile int32_t t90 = -405;

    t90 = ((x6449<<x6450)<=(x6451+x6452));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint32_t x6473 = 27U;
	uint32_t x6474 = 6U;
	static volatile int32_t x6476 = -1;
	static int32_t t91 = 1;

    t91 = ((x6473<<x6474)<=(x6475+x6476));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x6489 = 146428715U;
	static volatile int32_t x6490 = 3;
	static int8_t x6491 = -23;
	uint32_t x6492 = UINT32_MAX;
	int32_t t92 = -367;

    t92 = ((x6489<<x6490)<=(x6491+x6492));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint16_t x6502 = 6U;
	int8_t x6503 = INT8_MIN;
	int16_t x6504 = INT16_MAX;
	volatile int32_t t93 = -2;

    t93 = ((x6501<<x6502)<=(x6503+x6504));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x6641 = UINT16_MAX;
	static int16_t x6642 = 6;
	static volatile uint64_t x6643 = 1194028785LLU;
	static uint16_t x6644 = UINT16_MAX;
	int32_t t94 = -1473;

    t94 = ((x6641<<x6642)<=(x6643+x6644));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x6669 = 8U;
	static uint8_t x6670 = 6U;
	static volatile uint64_t x6671 = 188588250493465LLU;
	int64_t x6672 = INT64_MIN;
	static int32_t t95 = 3314224;

    t95 = ((x6669<<x6670)<=(x6671+x6672));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x6757 = 0;
	int32_t x6759 = -456147740;
	volatile int32_t t96 = 49482004;

    t96 = ((x6757<<x6758)<=(x6759+x6760));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static int8_t x6842 = 2;
	int8_t x6844 = -50;
	volatile int32_t t97 = -5162343;

    t97 = ((x6841<<x6842)<=(x6843+x6844));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x6915 = INT64_MIN;
	int32_t t98 = -1119;

    t98 = ((x6913<<x6914)<=(x6915+x6916));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile int32_t x7029 = 801;
	volatile uint8_t x7030 = 9U;
	volatile int64_t x7031 = 1214LL;
	static volatile uint8_t x7032 = UINT8_MAX;

    t99 = ((x7029<<x7030)<=(x7031+x7032));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint8_t x7077 = 0U;
	int16_t x7078 = 0;
	int64_t x7079 = -1LL;
	int32_t x7080 = INT32_MIN;
	volatile int32_t t100 = 128762;

    t100 = ((x7077<<x7078)<=(x7079+x7080));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint32_t x7115 = UINT32_MAX;
	uint16_t x7116 = 1560U;
	volatile int32_t t101 = 408;

    t101 = ((x7113<<x7114)<=(x7115+x7116));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint8_t x7289 = 1U;
	uint64_t x7290 = 4LLU;
	uint64_t x7292 = UINT64_MAX;
	volatile int32_t t102 = -614484907;

    t102 = ((x7289<<x7290)<=(x7291+x7292));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint8_t x7327 = 43U;
	uint64_t x7328 = 3680064789638098517LLU;
	static int32_t t103 = -133218;

    t103 = ((x7325<<x7326)<=(x7327+x7328));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x7385 = 141;
	static int8_t x7386 = 21;
	volatile int8_t x7387 = -1;
	uint32_t x7388 = UINT32_MAX;
	int32_t t104 = 11;

    t104 = ((x7385<<x7386)<=(x7387+x7388));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x7517 = 887787;
	uint8_t x7520 = UINT8_MAX;
	int32_t t105 = 568;

    t105 = ((x7517<<x7518)<=(x7519+x7520));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x7581 = 0U;
	static volatile uint8_t x7582 = 1U;
	int8_t x7583 = -5;
	volatile uint64_t x7584 = 115845LLU;
	int32_t t106 = -3846414;

    t106 = ((x7581<<x7582)<=(x7583+x7584));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x7665 = 59416U;
	uint8_t x7666 = 8U;
	static uint32_t x7667 = 9U;
	static int32_t x7668 = INT32_MAX;
	int32_t t107 = -163557;

    t107 = ((x7665<<x7666)<=(x7667+x7668));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x7769 = 21613U;
	uint16_t x7770 = 13U;
	uint16_t x7771 = 21U;
	volatile uint64_t x7772 = 697397861906LLU;
	int32_t t108 = -943159602;

    t108 = ((x7769<<x7770)<=(x7771+x7772));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int64_t x7783 = -1LL;
	volatile int16_t x7784 = INT16_MAX;
	int32_t t109 = -104332273;

    t109 = ((x7781<<x7782)<=(x7783+x7784));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x7841 = 2868U;
	int16_t x7842 = 0;
	int16_t x7843 = 108;
	int16_t x7844 = -1;
	static int32_t t110 = -1;

    t110 = ((x7841<<x7842)<=(x7843+x7844));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    

    t111 = ((x7953<<x7954)<=(x7955+x7956));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x8013 = 2U;
	int8_t x8014 = 3;
	int64_t x8016 = -13733493070921934LL;
	int32_t t112 = -753;

    t112 = ((x8013<<x8014)<=(x8015+x8016));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x8094 = 7U;
	int64_t x8095 = -85530436LL;
	volatile int64_t x8096 = INT64_MAX;
	volatile int32_t t113 = 2544459;

    t113 = ((x8093<<x8094)<=(x8095+x8096));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint8_t x8105 = 15U;
	int16_t x8106 = 3;
	volatile int32_t t114 = 175456;

    t114 = ((x8105<<x8106)<=(x8107+x8108));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x8177 = UINT32_MAX;
	uint32_t x8178 = 1U;
	int64_t x8179 = -1LL;
	uint32_t x8180 = UINT32_MAX;
	volatile int32_t t115 = -9929468;

    t115 = ((x8177<<x8178)<=(x8179+x8180));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x8209 = 0U;
	uint8_t x8210 = 1U;
	int64_t x8212 = INT64_MAX;
	volatile int32_t t116 = 44787;

    t116 = ((x8209<<x8210)<=(x8211+x8212));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x8317 = 633630366653LL;
	int8_t x8319 = 0;
	static int64_t x8320 = INT64_MAX;
	volatile int32_t t117 = -32236005;

    t117 = ((x8317<<x8318)<=(x8319+x8320));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x8389 = UINT32_MAX;
	uint8_t x8390 = 19U;
	static int32_t x8391 = -114377;
	int16_t x8392 = -1;
	volatile int32_t t118 = -4261329;

    t118 = ((x8389<<x8390)<=(x8391+x8392));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile uint8_t x8437 = 0U;
	int16_t x8440 = -1;
	static int32_t t119 = 0;

    t119 = ((x8437<<x8438)<=(x8439+x8440));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x8561 = 0;
	int8_t x8562 = 2;
	volatile int32_t x8563 = INT32_MIN;
	volatile int32_t x8564 = 636;
	int32_t t120 = 296;

    t120 = ((x8561<<x8562)<=(x8563+x8564));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x8805 = INT8_MAX;
	uint8_t x8806 = 0U;
	uint32_t x8808 = UINT32_MAX;

    t121 = ((x8805<<x8806)<=(x8807+x8808));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x8817 = UINT32_MAX;
	int8_t x8818 = 0;
	static int32_t t122 = -1310;

    t122 = ((x8817<<x8818)<=(x8819+x8820));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint8_t x8838 = 5U;
	int16_t x8839 = INT16_MAX;
	volatile int32_t t123 = -167882203;

    t123 = ((x8837<<x8838)<=(x8839+x8840));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x8865 = UINT64_MAX;
	static uint16_t x8866 = 14U;
	uint64_t x8867 = 984367LLU;
	volatile int32_t t124 = 51;

    t124 = ((x8865<<x8866)<=(x8867+x8868));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint32_t x8877 = 3274139U;
	uint8_t x8878 = 2U;
	int16_t x8879 = 10;
	static int16_t x8880 = 0;
	int32_t t125 = 0;

    t125 = ((x8877<<x8878)<=(x8879+x8880));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x8993 = 29U;
	static volatile int32_t x8996 = 3;
	volatile int32_t t126 = 245489;

    t126 = ((x8993<<x8994)<=(x8995+x8996));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x9166 = 0;
	uint16_t x9167 = 1U;
	int16_t x9168 = INT16_MIN;
	int32_t t127 = 1900;

    t127 = ((x9165<<x9166)<=(x9167+x9168));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x9217 = 5729902818LLU;
	volatile uint8_t x9218 = 62U;
	volatile uint8_t x9219 = 1U;
	static int8_t x9220 = -1;
	volatile int32_t t128 = 2;

    t128 = ((x9217<<x9218)<=(x9219+x9220));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x9270 = 5;
	volatile uint64_t x9271 = 785683586LLU;
	int16_t x9272 = -10;
	int32_t t129 = 950840;

    t129 = ((x9269<<x9270)<=(x9271+x9272));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x9330 = 3;
	static volatile int16_t x9331 = INT16_MIN;
	uint64_t x9332 = 93LLU;
	int32_t t130 = 919142703;

    t130 = ((x9329<<x9330)<=(x9331+x9332));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint8_t x9498 = 3U;
	volatile uint16_t x9499 = 1U;
	static int16_t x9500 = INT16_MIN;
	int32_t t131 = 150436765;

    t131 = ((x9497<<x9498)<=(x9499+x9500));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x9502 = 14U;
	volatile int16_t x9503 = -1;
	int32_t x9504 = 26859;
	volatile int32_t t132 = -7711177;

    t132 = ((x9501<<x9502)<=(x9503+x9504));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x9577 = 0U;
	uint32_t x9579 = 261528607U;
	uint32_t x9580 = UINT32_MAX;
	static volatile int32_t t133 = 1;

    t133 = ((x9577<<x9578)<=(x9579+x9580));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static int8_t x9717 = 1;
	uint32_t x9719 = UINT32_MAX;
	volatile uint64_t x9720 = 643630939LLU;

    t134 = ((x9717<<x9718)<=(x9719+x9720));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint32_t x9765 = 33929905U;
	int32_t x9766 = 1;
	int8_t x9767 = -1;
	uint64_t x9768 = UINT64_MAX;
	volatile int32_t t135 = -348315;

    t135 = ((x9765<<x9766)<=(x9767+x9768));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x9833 = 0;
	int64_t x9834 = 4LL;
	int8_t x9835 = -1;
	static int64_t x9836 = 7003LL;

    t136 = ((x9833<<x9834)<=(x9835+x9836));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint8_t x9841 = 106U;
	static uint64_t x9843 = 10618LLU;
	int32_t x9844 = -337712968;
	static volatile int32_t t137 = -39;

    t137 = ((x9841<<x9842)<=(x9843+x9844));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint64_t x9877 = UINT64_MAX;
	static int64_t x9879 = -1LL;
	uint64_t x9880 = 451LLU;
	volatile int32_t t138 = -1;

    t138 = ((x9877<<x9878)<=(x9879+x9880));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x10009 = 57U;
	uint64_t x10010 = 3LLU;
	int8_t x10011 = 13;
	int32_t x10012 = -142679;

    t139 = ((x10009<<x10010)<=(x10011+x10012));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x10233 = INT8_MAX;
	static uint16_t x10234 = 6U;
	static int64_t x10235 = -2044599391778612LL;
	volatile uint16_t x10236 = 6U;
	static int32_t t140 = 944334660;

    t140 = ((x10233<<x10234)<=(x10235+x10236));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint8_t x10289 = 3U;
	int8_t x10291 = -1;
	static volatile uint16_t x10292 = 3U;
	static volatile int32_t t141 = 879733;

    t141 = ((x10289<<x10290)<=(x10291+x10292));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x10317 = 0;
	uint8_t x10318 = 3U;
	int32_t x10319 = 422;
	volatile int64_t x10320 = INT64_MIN;

    t142 = ((x10317<<x10318)<=(x10319+x10320));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x10357 = 10U;
	uint16_t x10358 = 0U;
	int16_t x10359 = INT16_MAX;
	uint8_t x10360 = 0U;
	int32_t t143 = 2864;

    t143 = ((x10357<<x10358)<=(x10359+x10360));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x10565 = INT32_MAX;
	int8_t x10566 = 0;
	static volatile int32_t t144 = -1738;

    t144 = ((x10565<<x10566)<=(x10567+x10568));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint16_t x10589 = 4267U;
	volatile int8_t x10591 = INT8_MIN;
	int16_t x10592 = INT16_MIN;
	int32_t t145 = 8333085;

    t145 = ((x10589<<x10590)<=(x10591+x10592));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x10617 = 1;
	volatile int8_t x10618 = 0;

    t146 = ((x10617<<x10618)<=(x10619+x10620));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x10645 = 4U;
	int8_t x10646 = 2;
	int8_t x10647 = INT8_MIN;
	uint64_t x10648 = 1075LLU;

    t147 = ((x10645<<x10646)<=(x10647+x10648));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint64_t x10773 = UINT64_MAX;
	uint16_t x10774 = 3U;
	static uint64_t x10776 = 2710826LLU;
	volatile int32_t t148 = 606791622;

    t148 = ((x10773<<x10774)<=(x10775+x10776));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x10885 = 38806U;
	uint64_t x10886 = 0LLU;
	int32_t x10888 = 63544854;
	int32_t t149 = 1;

    t149 = ((x10885<<x10886)<=(x10887+x10888));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x10889 = UINT64_MAX;
	static uint16_t x10890 = 9U;
	volatile int16_t x10891 = INT16_MIN;
	volatile uint32_t x10892 = 204983712U;
	volatile int32_t t150 = -25;

    t150 = ((x10889<<x10890)<=(x10891+x10892));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint8_t x10961 = 22U;
	int32_t x10963 = 34;
	volatile uint16_t x10964 = 6412U;
	volatile int32_t t151 = -54624;

    t151 = ((x10961<<x10962)<=(x10963+x10964));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x10977 = UINT64_MAX;
	int16_t x10978 = 0;
	int16_t x10980 = INT16_MIN;
	int32_t t152 = 2;

    t152 = ((x10977<<x10978)<=(x10979+x10980));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x11049 = UINT32_MAX;
	uint64_t x11051 = 1966106443LLU;
	static int8_t x11052 = 1;
	static volatile int32_t t153 = -709237;

    t153 = ((x11049<<x11050)<=(x11051+x11052));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint32_t x11169 = 1U;
	uint16_t x11170 = 11U;
	volatile int16_t x11172 = -51;
	int32_t t154 = -102;

    t154 = ((x11169<<x11170)<=(x11171+x11172));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint64_t x11197 = UINT64_MAX;
	uint8_t x11198 = 14U;
	volatile int32_t x11200 = INT32_MIN;
	int32_t t155 = 29;

    t155 = ((x11197<<x11198)<=(x11199+x11200));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile int64_t x11253 = 63962LL;
	uint64_t x11256 = UINT64_MAX;
	static volatile int32_t t156 = -1;

    t156 = ((x11253<<x11254)<=(x11255+x11256));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x11559 = INT8_MIN;
	int64_t x11560 = -1LL;
	volatile int32_t t157 = 50785319;

    t157 = ((x11557<<x11558)<=(x11559+x11560));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint64_t x11573 = UINT64_MAX;
	uint16_t x11574 = 12U;
	static int8_t x11575 = INT8_MIN;
	int64_t x11576 = INT64_MAX;

    t158 = ((x11573<<x11574)<=(x11575+x11576));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x11594 = 3U;
	int32_t x11596 = INT32_MIN;
	volatile int32_t t159 = -2744247;

    t159 = ((x11593<<x11594)<=(x11595+x11596));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static int64_t x11597 = 1629LL;
	int8_t x11598 = 1;
	volatile uint16_t x11599 = 11U;
	static int32_t x11600 = -1;
	volatile int32_t t160 = -196;

    t160 = ((x11597<<x11598)<=(x11599+x11600));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint8_t x11629 = UINT8_MAX;
	int16_t x11631 = INT16_MIN;
	static int32_t t161 = 218002;

    t161 = ((x11629<<x11630)<=(x11631+x11632));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x11642 = 3;
	int16_t x11643 = -1;
	uint64_t x11644 = 3382226882896LLU;
	volatile int32_t t162 = 371;

    t162 = ((x11641<<x11642)<=(x11643+x11644));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x11649 = 769U;
	int64_t x11650 = 15LL;
	uint8_t x11652 = 0U;
	int32_t t163 = -16325;

    t163 = ((x11649<<x11650)<=(x11651+x11652));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x11669 = UINT16_MAX;
	static int16_t x11670 = 5;
	int8_t x11671 = INT8_MAX;
	uint16_t x11672 = 2247U;

    t164 = ((x11669<<x11670)<=(x11671+x11672));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint16_t x11722 = 2U;
	int32_t x11723 = -1041057298;
	uint8_t x11724 = 34U;
	int32_t t165 = -13;

    t165 = ((x11721<<x11722)<=(x11723+x11724));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x11737 = 56U;
	int32_t x11739 = 7;
	static int16_t x11740 = -89;
	int32_t t166 = 124343107;

    t166 = ((x11737<<x11738)<=(x11739+x11740));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x11749 = UINT8_MAX;
	int8_t x11750 = 22;
	int8_t x11751 = INT8_MAX;
	uint16_t x11752 = 6U;
	int32_t t167 = -2207508;

    t167 = ((x11749<<x11750)<=(x11751+x11752));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x11793 = INT8_MAX;
	static uint8_t x11794 = 0U;
	int64_t x11795 = INT64_MAX;
	static int32_t x11796 = INT32_MIN;

    t168 = ((x11793<<x11794)<=(x11795+x11796));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x11877 = 22U;
	static int8_t x11878 = 2;
	int32_t t169 = -63054;

    t169 = ((x11877<<x11878)<=(x11879+x11880));

    if (t169 != 1) { NG(); } else { ; }
	
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


    return 0;
}

