
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

static volatile int32_t x11 = -18;
uint32_t x25 = 902U;
int64_t x27 = 392180192593933LL;
static volatile uint32_t t2 = 4947691U;
static int16_t x104 = -9;
int64_t x109 = 38822LL;
static int16_t x140 = -1;
uint32_t x147 = UINT32_MAX;
volatile int64_t x148 = -1LL;
int16_t x158 = INT16_MIN;
uint16_t x231 = 157U;
uint8_t x277 = 52U;
uint64_t t16 = UINT64_MAX;
static int64_t x323 = INT64_MAX;
volatile int16_t x324 = INT16_MIN;
static int32_t t17 = -4642872;
int16_t x354 = INT16_MAX;
int32_t x356 = -1;
volatile uint8_t x362 = 0U;
uint64_t x402 = UINT64_MAX;
uint16_t x421 = 26960U;
int64_t x433 = 517143664LL;
volatile uint64_t x437 = 383LLU;
int64_t x446 = INT64_MAX;
static int16_t x471 = 3566;
int64_t x475 = -16838429LL;
uint8_t x489 = 33U;
volatile int32_t x490 = -1;
static int32_t t31 = -408836;
int64_t x502 = -52873348041644760LL;
uint64_t t33 = 814128LLU;
static int8_t x530 = 41;
uint8_t x531 = 1U;
int16_t x599 = 6;
volatile int64_t x600 = -1LL;
uint16_t x621 = 82U;
volatile uint64_t x623 = 7895LLU;
int16_t x624 = -30;
int32_t t39 = -11;
int64_t x634 = INT64_MIN;
static int64_t x635 = INT64_MAX;
volatile int32_t t40 = INT32_MAX;
volatile int16_t x652 = INT16_MIN;
volatile uint64_t x657 = 8LLU;
int8_t x678 = 4;
static int32_t x719 = -1;
int64_t x720 = INT64_MIN;
uint32_t x733 = 221367U;
int16_t x755 = INT16_MAX;
int8_t x760 = 10;
int16_t x763 = -1;
int32_t t49 = -3263189;
volatile int16_t x773 = 56;
static int8_t x775 = 0;
static volatile int16_t x816 = -1;
volatile int32_t t51 = -114177;
volatile int16_t x827 = INT16_MAX;
int8_t x863 = -1;
int32_t x879 = -1;
uint8_t x899 = 1U;
volatile uint64_t t57 = 18519LLU;
volatile int64_t x906 = 50LL;
int64_t t59 = INT64_MAX;
uint8_t x954 = 0U;
static uint8_t x956 = UINT8_MAX;
volatile int8_t x983 = 1;
volatile int32_t t63 = 1536193;
int8_t x1049 = 1;
int32_t x1050 = 2;
int8_t x1068 = INT8_MIN;
static uint64_t x1069 = 15205723122633LLU;
volatile int64_t x1071 = INT64_MAX;
int64_t x1097 = 23822342161LL;
volatile int64_t x1159 = INT64_MIN;
volatile int8_t x1166 = INT8_MIN;
volatile uint32_t x1190 = UINT32_MAX;
uint8_t x1191 = UINT8_MAX;
uint8_t x1205 = 1U;
int64_t x1246 = 188285LL;
volatile int64_t x1247 = INT64_MIN;
volatile int32_t t77 = -46131808;
int64_t x1265 = INT64_MAX;
uint16_t x1266 = 7883U;
static int8_t x1276 = INT8_MIN;
int32_t t80 = 765943;
static int64_t t81 = -59972203LL;
volatile uint8_t x1307 = UINT8_MAX;
int16_t x1319 = -1;
volatile int32_t t86 = -15;
uint8_t x1438 = 7U;
int16_t x1450 = INT16_MIN;
int16_t x1478 = -1;
int64_t x1479 = 6692716582422LL;
volatile uint64_t t92 = UINT64_MAX;
static int64_t x1481 = 1006017093777LL;
int16_t x1507 = -1;
int32_t t94 = 854808121;
int8_t x1534 = -11;
volatile int64_t x1535 = INT64_MAX;
uint32_t t98 = 516143407U;
static int8_t x1569 = INT8_MAX;
int32_t x1575 = -1;
volatile uint8_t x1576 = 1U;
static volatile uint64_t t101 = 2770775049578LLU;
int32_t t103 = -3103761;
volatile int32_t t104 = 11151885;
int8_t x1641 = INT8_MAX;
volatile uint16_t x1642 = UINT16_MAX;
uint8_t x1643 = 2U;
volatile int16_t x1664 = 0;
static uint8_t x1693 = 3U;
int32_t x1695 = -1;
int64_t x1698 = 1441175339LL;
volatile int16_t x1704 = INT16_MIN;
volatile uint64_t x1725 = 848294579343LLU;
int8_t x1780 = -1;
static int32_t t116 = 2;
volatile int16_t x1826 = INT16_MIN;
int32_t x1827 = -1;
uint32_t x1855 = 174U;
volatile int32_t t121 = INT32_MAX;
uint16_t x1969 = 1824U;
int32_t x2014 = -1;
int64_t x2077 = 52823169LL;
static uint32_t x2081 = 6795U;
int32_t x2083 = INT32_MAX;
volatile uint16_t x2120 = UINT16_MAX;
int8_t x2152 = INT8_MAX;
static int64_t x2174 = INT64_MAX;
int32_t x2201 = INT32_MAX;
static uint64_t x2204 = UINT64_MAX;
static int32_t x2252 = INT32_MIN;
uint32_t t135 = 50131232U;
int8_t x2310 = INT8_MAX;
int8_t x2321 = 4;
static int8_t x2323 = 1;
int8_t x2324 = INT8_MIN;
static volatile int16_t x2343 = -13;
int32_t t139 = 6;
int32_t x2373 = 2448;
static uint8_t x2374 = UINT8_MAX;
int32_t t142 = -339046;
uint64_t x2401 = 96948415LLU;
uint16_t x2403 = 0U;
static int8_t x2405 = INT8_MAX;
static volatile int32_t x2406 = -1;
static int32_t x2418 = -1;
int8_t x2419 = INT8_MIN;
volatile uint64_t t147 = 510674834LLU;
uint16_t x2518 = 4U;
volatile int64_t x2523 = INT64_MAX;
uint16_t x2554 = 950U;
uint64_t t153 = 1502536881303LLU;
static int64_t x2625 = INT64_MAX;
uint32_t x2637 = UINT32_MAX;
static int8_t x2638 = -1;
int16_t x2639 = INT16_MIN;
volatile int64_t x2648 = -1773LL;
int8_t x2692 = -1;
int64_t t160 = 24199879345486306LL;
volatile int16_t x2772 = INT16_MAX;
int32_t x2781 = 7466821;
int32_t x2784 = INT32_MIN;
volatile int64_t t165 = 14LL;
int8_t x2832 = -1;
volatile uint8_t x2851 = 6U;
volatile int32_t t170 = -15732232;
int32_t x2872 = INT32_MIN;
uint32_t t172 = 0U;
static int16_t x2896 = INT16_MAX;
uint32_t x2901 = 22U;
static int16_t x2904 = INT16_MAX;
static uint32_t t175 = 58313473U;
uint32_t x2916 = 740982749U;
int32_t x2948 = INT32_MAX;
volatile uint16_t x3001 = 24U;
volatile int32_t x3003 = -1;
int64_t x3052 = INT64_MAX;
volatile uint64_t x3053 = 1444LLU;
int64_t x3069 = INT64_MAX;
volatile uint64_t t186 = 683173192368LLU;
uint8_t x3085 = 100U;
int32_t x3107 = -51;
int8_t x3109 = 12;
int16_t x3112 = -37;
volatile int32_t t189 = 1;
volatile uint32_t x3142 = UINT32_MAX;
int32_t x3172 = 36391036;
int32_t x3230 = -1;
static int32_t t193 = -9712755;
int16_t x3254 = 1;
int32_t t195 = -428;
int8_t x3303 = -1;
int32_t x3326 = INT32_MIN;


void f0(void) {
    	volatile int64_t x9 = INT64_MAX;
	int64_t x10 = 849823034521LL;
	static int32_t x12 = 90;
	volatile int64_t t0 = 21635582561LL;

    t0 = (x9>>(x10%(x11|x12)));

    if (t0 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x21 = UINT16_MAX;
	volatile int16_t x22 = 1456;
	static int8_t x23 = INT8_MIN;
	uint16_t x24 = 59U;
	int32_t t1 = -5;

    t1 = (x21>>(x22%(x23|x24)));

    if (t1 != 511) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x26 = 1U;
	int64_t x28 = -4410999512420769LL;

    t2 = (x25>>(x26%(x27|x28)));

    if (t2 != 451U) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint32_t x57 = 27336617U;
	int8_t x58 = INT8_MAX;
	int8_t x59 = 3;
	int8_t x60 = -12;
	uint32_t t3 = 125123286U;

    t3 = (x57>>(x58%(x59|x60)));

    if (t3 != 13668308U) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int8_t x101 = INT8_MAX;
	static uint32_t x102 = UINT32_MAX;
	int8_t x103 = INT8_MAX;
	int32_t t4 = 14600;

    t4 = (x101>>(x102%(x103|x104)));

    if (t4 != 127) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x110 = 733;
	int16_t x111 = -1;
	uint8_t x112 = 10U;
	int64_t t5 = 1LL;

    t5 = (x109>>(x110%(x111|x112)));

    if (t5 != 38822LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x113 = 0U;
	int64_t x114 = INT64_MIN;
	volatile uint64_t x115 = 1LLU;
	volatile uint8_t x116 = 20U;
	int32_t t6 = 1709597;

    t6 = (x113>>(x114%(x115|x116)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x137 = INT32_MAX;
	volatile uint8_t x138 = 3U;
	int16_t x139 = INT16_MIN;
	int32_t t7 = INT32_MAX;

    t7 = (x137>>(x138%(x139|x140)));

    if (t7 != INT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint64_t x145 = 31163LLU;
	int64_t x146 = INT64_MIN;
	uint64_t t8 = 157285230LLU;

    t8 = (x145>>(x146%(x147|x148)));

    if (t8 != 31163LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x157 = INT16_MAX;
	volatile int16_t x159 = 1245;
	int16_t x160 = -1;
	int32_t t9 = 25;

    t9 = (x157>>(x158%(x159|x160)));

    if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x161 = 60;
	static uint8_t x162 = 0U;
	int16_t x163 = INT16_MIN;
	uint32_t x164 = UINT32_MAX;
	volatile int32_t t10 = 90491036;

    t10 = (x161>>(x162%(x163|x164)));

    if (t10 != 60) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x169 = 5634338U;
	volatile uint8_t x170 = 0U;
	static uint16_t x171 = UINT16_MAX;
	int64_t x172 = INT64_MAX;
	uint32_t t11 = 422619U;

    t11 = (x169>>(x170%(x171|x172)));

    if (t11 != 5634338U) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int32_t x181 = 512634;
	volatile int32_t x182 = INT32_MAX;
	int64_t x183 = -1LL;
	volatile int64_t x184 = INT64_MIN;
	volatile int32_t t12 = -117100942;

    t12 = (x181>>(x182%(x183|x184)));

    if (t12 != 512634) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x217 = 103;
	volatile int8_t x218 = -1;
	static int16_t x219 = -1;
	volatile int8_t x220 = INT8_MIN;
	volatile int32_t t13 = 396;

    t13 = (x217>>(x218%(x219|x220)));

    if (t13 != 103) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x229 = 90941444LLU;
	static uint64_t x230 = UINT64_MAX;
	static uint8_t x232 = UINT8_MAX;
	uint64_t t14 = 22160171925470LLU;

    t14 = (x229>>(x230%(x231|x232)));

    if (t14 != 90941444LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int64_t x278 = 1LL;
	static volatile uint16_t x279 = 107U;
	volatile int16_t x280 = INT16_MIN;
	volatile int32_t t15 = 116016619;

    t15 = (x277>>(x278%(x279|x280)));

    if (t15 != 26) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x285 = UINT64_MAX;
	volatile int32_t x286 = INT32_MAX;
	int8_t x287 = INT8_MIN;
	int64_t x288 = INT64_MAX;

    t16 = (x285>>(x286%(x287|x288)));

    if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x321 = UINT8_MAX;
	volatile int32_t x322 = -834438;

    t17 = (x321>>(x322%(x323|x324)));

    if (t17 != 255) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x353 = INT32_MAX;
	int8_t x355 = -1;
	volatile int32_t t18 = INT32_MAX;

    t18 = (x353>>(x354%(x355|x356)));

    if (t18 != INT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x361 = 486995072LLU;
	uint16_t x363 = UINT16_MAX;
	int8_t x364 = -1;
	static volatile uint64_t t19 = 19059333676LLU;

    t19 = (x361>>(x362%(x363|x364)));

    if (t19 != 486995072LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x397 = 3U;
	static uint64_t x398 = UINT64_MAX;
	int32_t x399 = -1;
	static int16_t x400 = 39;
	static volatile uint32_t t20 = 57U;

    t20 = (x397>>(x398%(x399|x400)));

    if (t20 != 3U) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x401 = 229811138LLU;
	uint16_t x403 = 12U;
	volatile int64_t x404 = INT64_MAX;
	static volatile uint64_t t21 = 216573589514764420LLU;

    t21 = (x401>>(x402%(x403|x404)));

    if (t21 != 114905569LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x422 = 19U;
	int8_t x423 = INT8_MIN;
	static int8_t x424 = 15;
	int32_t t22 = 459;

    t22 = (x421>>(x422%(x423|x424)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint8_t x434 = 15U;
	static int16_t x435 = INT16_MIN;
	uint16_t x436 = UINT16_MAX;
	volatile int64_t t23 = 2274482624439274LL;

    t23 = (x433>>(x434%(x435|x436)));

    if (t23 != 517143664LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x438 = 565U;
	volatile uint32_t x439 = 38U;
	static int64_t x440 = -1LL;
	static uint64_t t24 = 2LLU;

    t24 = (x437>>(x438%(x439|x440)));

    if (t24 != 383LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x445 = 865;
	static int8_t x447 = INT8_MAX;
	int8_t x448 = 0;
	int32_t t25 = 380134992;

    t25 = (x445>>(x446%(x447|x448)));

    if (t25 != 865) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x469 = INT8_MAX;
	uint16_t x470 = 1U;
	volatile int64_t x472 = -1LL;
	volatile int32_t t26 = -391226701;

    t26 = (x469>>(x470%(x471|x472)));

    if (t26 != 127) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint16_t x473 = 0U;
	int16_t x474 = INT16_MIN;
	volatile int16_t x476 = -1;
	static int32_t t27 = -955094;

    t27 = (x473>>(x474%(x475|x476)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint64_t x477 = 3260283614LLU;
	uint64_t x478 = UINT64_MAX;
	uint64_t x479 = UINT64_MAX;
	uint8_t x480 = UINT8_MAX;
	volatile uint64_t t28 = 1320998366380066LLU;

    t28 = (x477>>(x478%(x479|x480)));

    if (t28 != 3260283614LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint32_t x481 = 42702153U;
	int64_t x482 = 61LL;
	int64_t x483 = 365771LL;
	static int32_t x484 = -1;
	volatile uint32_t t29 = 23792U;

    t29 = (x481>>(x482%(x483|x484)));

    if (t29 != 42702153U) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x491 = INT8_MIN;
	int64_t x492 = -1LL;
	int32_t t30 = -22806;

    t30 = (x489>>(x490%(x491|x492)));

    if (t30 != 33) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x493 = 356091;
	volatile uint64_t x494 = UINT64_MAX;
	uint64_t x495 = 215375LLU;
	volatile int8_t x496 = -26;

    t31 = (x493>>(x494%(x495|x496)));

    if (t31 != 5) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x497 = 132067483032LLU;
	uint8_t x498 = UINT8_MAX;
	volatile int16_t x499 = -3201;
	int8_t x500 = -6;
	uint64_t t32 = 43686268472LLU;

    t32 = (x497>>(x498%(x499|x500)));

    if (t32 != 132067483032LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x501 = 88963262996LLU;
	int64_t x503 = INT64_MIN;
	int32_t x504 = -1;

    t33 = (x501>>(x502%(x503|x504)));

    if (t33 != 88963262996LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x521 = UINT64_MAX;
	static volatile int64_t x522 = 21889843029LL;
	static volatile int8_t x523 = -1;
	int16_t x524 = INT16_MIN;
	uint64_t t34 = UINT64_MAX;

    t34 = (x521>>(x522%(x523|x524)));

    if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x529 = INT64_MAX;
	int64_t x532 = 1125251213LL;
	int64_t t35 = -92025LL;

    t35 = (x529>>(x530%(x531|x532)));

    if (t35 != 4194303LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x581 = UINT8_MAX;
	int8_t x582 = INT8_MIN;
	uint16_t x583 = 26U;
	static int16_t x584 = -1;
	int32_t t36 = 54;

    t36 = (x581>>(x582%(x583|x584)));

    if (t36 != 255) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x585 = UINT64_MAX;
	uint16_t x586 = UINT16_MAX;
	int8_t x587 = -1;
	int16_t x588 = -2359;
	uint64_t t37 = UINT64_MAX;

    t37 = (x585>>(x586%(x587|x588)));

    if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x597 = INT16_MAX;
	volatile int32_t x598 = INT32_MIN;
	volatile int32_t t38 = 0;

    t38 = (x597>>(x598%(x599|x600)));

    if (t38 != 32767) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x622 = -1;

    t39 = (x621>>(x622%(x623|x624)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x633 = INT32_MAX;
	int32_t x636 = INT32_MIN;

    t40 = (x633>>(x634%(x635|x636)));

    if (t40 != INT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x649 = 25;
	volatile uint16_t x650 = UINT16_MAX;
	int8_t x651 = -22;
	volatile int32_t t41 = -1;

    t41 = (x649>>(x650%(x651|x652)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile int32_t x658 = INT32_MAX;
	int32_t x659 = INT32_MIN;
	static int16_t x660 = 15;
	uint64_t t42 = 258520LLU;

    t42 = (x657>>(x658%(x659|x660)));

    if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x677 = 25U;
	uint32_t x679 = 19U;
	int32_t x680 = INT32_MIN;
	volatile int32_t t43 = -3818538;

    t43 = (x677>>(x678%(x679|x680)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint64_t x705 = 19971441837382208LLU;
	int32_t x706 = INT32_MAX;
	int16_t x707 = 1;
	int16_t x708 = INT16_MIN;
	uint64_t t44 = 656370494605LLU;

    t44 = (x705>>(x706%(x707|x708)));

    if (t44 != 9985720918691104LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint16_t x717 = UINT16_MAX;
	volatile int8_t x718 = INT8_MIN;
	volatile int32_t t45 = 8113101;

    t45 = (x717>>(x718%(x719|x720)));

    if (t45 != 65535) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x734 = 17U;
	uint64_t x735 = 86LLU;
	int16_t x736 = INT16_MIN;
	volatile uint32_t t46 = 3U;

    t46 = (x733>>(x734%(x735|x736)));

    if (t46 != 1U) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x753 = 1107536LLU;
	volatile uint64_t x754 = UINT64_MAX;
	uint32_t x756 = 15277U;
	uint64_t t47 = 4710961162188LLU;

    t47 = (x753>>(x754%(x755|x756)));

    if (t47 != 33LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint32_t x757 = 481809228U;
	int8_t x758 = 0;
	int16_t x759 = 12;
	volatile uint32_t t48 = 1568183U;

    t48 = (x757>>(x758%(x759|x760)));

    if (t48 != 481809228U) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x761 = 17731U;
	int16_t x762 = -3;
	int32_t x764 = INT32_MAX;

    t49 = (x761>>(x762%(x763|x764)));

    if (t49 != 17731) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x774 = 7U;
	uint64_t x776 = 1LLU;
	volatile int32_t t50 = -21;

    t50 = (x773>>(x774%(x775|x776)));

    if (t50 != 56) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x813 = INT16_MAX;
	volatile uint64_t x814 = UINT64_MAX;
	uint32_t x815 = UINT32_MAX;

    t51 = (x813>>(x814%(x815|x816)));

    if (t51 != 32767) { NG(); } else { ; }
	
}

void f52(void) {
    	static int64_t x825 = 2179511677983007LL;
	int32_t x826 = INT32_MIN;
	int32_t x828 = -1;
	int64_t t52 = -313889691211733LL;

    t52 = (x825>>(x826%(x827|x828)));

    if (t52 != 2179511677983007LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x853 = 46U;
	int32_t x854 = INT32_MAX;
	int64_t x855 = INT64_MAX;
	int16_t x856 = -1;
	volatile int32_t t53 = -15;

    t53 = (x853>>(x854%(x855|x856)));

    if (t53 != 46) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x861 = 1;
	int64_t x862 = INT64_MAX;
	uint8_t x864 = UINT8_MAX;
	int32_t t54 = 969;

    t54 = (x861>>(x862%(x863|x864)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x869 = 297U;
	static uint64_t x870 = UINT64_MAX;
	int64_t x871 = 13LL;
	uint16_t x872 = UINT16_MAX;
	static int32_t t55 = -515700563;

    t55 = (x869>>(x870%(x871|x872)));

    if (t55 != 297) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x877 = 122308662U;
	uint16_t x878 = UINT16_MAX;
	int32_t x880 = -1;
	static uint32_t t56 = 86U;

    t56 = (x877>>(x878%(x879|x880)));

    if (t56 != 122308662U) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x897 = 51435378LLU;
	int64_t x898 = 1384552325009LL;
	int32_t x900 = 0;

    t57 = (x897>>(x898%(x899|x900)));

    if (t57 != 51435378LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x905 = INT8_MAX;
	uint8_t x907 = 103U;
	static int16_t x908 = -1;
	int32_t t58 = 21;

    t58 = (x905>>(x906%(x907|x908)));

    if (t58 != 127) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x913 = INT64_MAX;
	volatile uint16_t x914 = UINT16_MAX;
	int32_t x915 = -1;
	static int32_t x916 = INT32_MIN;

    t59 = (x913>>(x914%(x915|x916)));

    if (t59 != INT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x921 = INT32_MAX;
	static uint8_t x922 = 25U;
	static volatile uint32_t x923 = 6243871U;
	uint16_t x924 = 5500U;
	static int32_t t60 = 0;

    t60 = (x921>>(x922%(x923|x924)));

    if (t60 != 63) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x953 = 624332458LL;
	static uint32_t x955 = 5692U;
	static int64_t t61 = 86939LL;

    t61 = (x953>>(x954%(x955|x956)));

    if (t61 != 624332458LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x981 = INT64_MAX;
	static int64_t x982 = 62LL;
	uint8_t x984 = UINT8_MAX;
	volatile int64_t t62 = 1LL;

    t62 = (x981>>(x982%(x983|x984)));

    if (t62 != 1LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint8_t x1025 = 4U;
	int8_t x1026 = 2;
	uint32_t x1027 = 497099U;
	uint32_t x1028 = UINT32_MAX;

    t63 = (x1025>>(x1026%(x1027|x1028)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile uint8_t x1041 = 76U;
	static int8_t x1042 = INT8_MAX;
	static int32_t x1043 = -4749391;
	volatile int32_t x1044 = -1;
	int32_t t64 = 7;

    t64 = (x1041>>(x1042%(x1043|x1044)));

    if (t64 != 76) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int16_t x1051 = INT16_MIN;
	int16_t x1052 = 53;
	volatile int32_t t65 = -489896;

    t65 = (x1049>>(x1050%(x1051|x1052)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile int64_t x1057 = INT64_MAX;
	uint16_t x1058 = 443U;
	int64_t x1059 = -1LL;
	volatile uint16_t x1060 = 11U;
	volatile int64_t t66 = INT64_MAX;

    t66 = (x1057>>(x1058%(x1059|x1060)));

    if (t66 != INT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint32_t x1065 = 9U;
	int16_t x1066 = -2319;
	uint16_t x1067 = UINT16_MAX;
	uint32_t t67 = 17820917U;

    t67 = (x1065>>(x1066%(x1067|x1068)));

    if (t67 != 9U) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x1070 = 1905U;
	int8_t x1072 = INT8_MIN;
	static uint64_t t68 = 543073961982LLU;

    t68 = (x1069>>(x1070%(x1071|x1072)));

    if (t68 != 15205723122633LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x1098 = -149;
	int8_t x1099 = -1;
	uint16_t x1100 = UINT16_MAX;
	volatile int64_t t69 = 167950LL;

    t69 = (x1097>>(x1098%(x1099|x1100)));

    if (t69 != 23822342161LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x1157 = UINT8_MAX;
	static volatile int32_t x1158 = -1;
	int8_t x1160 = -1;
	int32_t t70 = -1;

    t70 = (x1157>>(x1158%(x1159|x1160)));

    if (t70 != 255) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x1161 = INT8_MAX;
	static uint8_t x1162 = 1U;
	int32_t x1163 = -1641034;
	int16_t x1164 = 0;
	volatile int32_t t71 = 5177;

    t71 = (x1161>>(x1162%(x1163|x1164)));

    if (t71 != 63) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x1165 = 25959LLU;
	static int8_t x1167 = -1;
	int8_t x1168 = INT8_MIN;
	volatile uint64_t t72 = 11LLU;

    t72 = (x1165>>(x1166%(x1167|x1168)));

    if (t72 != 25959LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x1189 = INT8_MAX;
	volatile int8_t x1192 = INT8_MIN;
	volatile int32_t t73 = 30024393;

    t73 = (x1189>>(x1190%(x1191|x1192)));

    if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint8_t x1206 = UINT8_MAX;
	int8_t x1207 = -1;
	static uint8_t x1208 = 1U;
	int32_t t74 = -4183;

    t74 = (x1205>>(x1206%(x1207|x1208)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x1213 = INT16_MAX;
	uint32_t x1214 = UINT32_MAX;
	int32_t x1215 = 31284242;
	int8_t x1216 = -1;
	int32_t t75 = 65049;

    t75 = (x1213>>(x1214%(x1215|x1216)));

    if (t75 != 32767) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x1233 = 0;
	int16_t x1234 = INT16_MIN;
	volatile int32_t x1235 = -1;
	int16_t x1236 = INT16_MAX;
	static volatile int32_t t76 = -1560;

    t76 = (x1233>>(x1234%(x1235|x1236)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x1245 = 279U;
	static int32_t x1248 = -1;

    t77 = (x1245>>(x1246%(x1247|x1248)));

    if (t77 != 279) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint16_t x1267 = UINT16_MAX;
	int64_t x1268 = -1LL;
	volatile int64_t t78 = INT64_MAX;

    t78 = (x1265>>(x1266%(x1267|x1268)));

    if (t78 != INT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint32_t x1273 = 14U;
	int32_t x1274 = 389485;
	static uint8_t x1275 = UINT8_MAX;
	uint32_t t79 = 72211658U;

    t79 = (x1273>>(x1274%(x1275|x1276)));

    if (t79 != 14U) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile uint16_t x1277 = UINT16_MAX;
	int64_t x1278 = 1LL;
	int32_t x1279 = INT32_MAX;
	volatile int8_t x1280 = INT8_MAX;

    t80 = (x1277>>(x1278%(x1279|x1280)));

    if (t80 != 32767) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x1281 = 45209540LL;
	int64_t x1282 = INT64_MIN;
	static int32_t x1283 = INT32_MAX;
	static int32_t x1284 = -5739667;

    t81 = (x1281>>(x1282%(x1283|x1284)));

    if (t81 != 45209540LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x1293 = INT64_MAX;
	int64_t x1294 = -1LL;
	int32_t x1295 = -1;
	static int16_t x1296 = -1119;
	static volatile int64_t t82 = INT64_MAX;

    t82 = (x1293>>(x1294%(x1295|x1296)));

    if (t82 != INT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint64_t x1305 = 1599436459687271LLU;
	int16_t x1306 = -2;
	int16_t x1308 = -6;
	uint64_t t83 = 68559611788515LLU;

    t83 = (x1305>>(x1306%(x1307|x1308)));

    if (t83 != 1599436459687271LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x1317 = INT32_MAX;
	uint16_t x1318 = 1U;
	int64_t x1320 = -39187529200LL;
	int32_t t84 = INT32_MAX;

    t84 = (x1317>>(x1318%(x1319|x1320)));

    if (t84 != INT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x1345 = 3926470098564553LLU;
	int16_t x1346 = INT16_MIN;
	int32_t x1347 = -1;
	int8_t x1348 = INT8_MAX;
	uint64_t t85 = 708098LLU;

    t85 = (x1345>>(x1346%(x1347|x1348)));

    if (t85 != 3926470098564553LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x1369 = 1;
	int8_t x1370 = 0;
	volatile uint32_t x1371 = 506U;
	volatile uint8_t x1372 = 13U;

    t86 = (x1369>>(x1370%(x1371|x1372)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x1385 = UINT32_MAX;
	uint32_t x1386 = UINT32_MAX;
	int16_t x1387 = INT16_MAX;
	static uint8_t x1388 = 20U;
	volatile uint32_t t87 = 1671847943U;

    t87 = (x1385>>(x1386%(x1387|x1388)));

    if (t87 != 536870911U) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x1401 = 1107;
	uint16_t x1402 = 0U;
	int16_t x1403 = INT16_MAX;
	volatile uint16_t x1404 = 1768U;
	int32_t t88 = -1943712;

    t88 = (x1401>>(x1402%(x1403|x1404)));

    if (t88 != 1107) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x1437 = INT16_MAX;
	uint8_t x1439 = 0U;
	uint8_t x1440 = 28U;
	int32_t t89 = 0;

    t89 = (x1437>>(x1438%(x1439|x1440)));

    if (t89 != 255) { NG(); } else { ; }
	
}

void f90(void) {
    	static int8_t x1449 = INT8_MAX;
	static int8_t x1451 = -1;
	int64_t x1452 = 65129419553LL;
	int32_t t90 = -83294;

    t90 = (x1449>>(x1450%(x1451|x1452)));

    if (t90 != 127) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint8_t x1473 = 31U;
	static int16_t x1474 = INT16_MIN;
	volatile int64_t x1475 = INT64_MAX;
	int32_t x1476 = INT32_MIN;
	int32_t t91 = -236;

    t91 = (x1473>>(x1474%(x1475|x1476)));

    if (t91 != 31) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x1477 = UINT64_MAX;
	volatile int8_t x1480 = -1;

    t92 = (x1477>>(x1478%(x1479|x1480)));

    if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int64_t x1482 = -84LL;
	int16_t x1483 = -1;
	uint16_t x1484 = UINT16_MAX;
	int64_t t93 = 710096203224LL;

    t93 = (x1481>>(x1482%(x1483|x1484)));

    if (t93 != 1006017093777LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x1505 = 12U;
	uint32_t x1506 = 1238952736U;
	int64_t x1508 = INT64_MAX;

    t94 = (x1505>>(x1506%(x1507|x1508)));

    if (t94 != 12) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x1521 = 96942102U;
	volatile uint32_t x1522 = UINT32_MAX;
	int16_t x1523 = INT16_MIN;
	static int8_t x1524 = -1;
	volatile uint32_t t95 = 5091U;

    t95 = (x1521>>(x1522%(x1523|x1524)));

    if (t95 != 96942102U) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x1529 = UINT32_MAX;
	static uint32_t x1530 = 4U;
	int32_t x1531 = INT32_MAX;
	static int64_t x1532 = -79467511338929265LL;
	static volatile uint32_t t96 = 488299292U;

    t96 = (x1529>>(x1530%(x1531|x1532)));

    if (t96 != 268435455U) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x1533 = 0;
	static int32_t x1536 = INT32_MIN;
	int32_t t97 = 0;

    t97 = (x1533>>(x1534%(x1535|x1536)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint32_t x1541 = 14U;
	static volatile int32_t x1542 = -1;
	int16_t x1543 = -1416;
	static int64_t x1544 = -1LL;

    t98 = (x1541>>(x1542%(x1543|x1544)));

    if (t98 != 14U) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x1557 = INT8_MAX;
	static volatile uint64_t x1558 = UINT64_MAX;
	int8_t x1559 = -1;
	int8_t x1560 = INT8_MIN;
	volatile int32_t t99 = 9460;

    t99 = (x1557>>(x1558%(x1559|x1560)));

    if (t99 != 127) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x1570 = -1LL;
	uint64_t x1571 = 9LLU;
	uint8_t x1572 = 44U;
	static volatile int32_t t100 = -1521044;

    t100 = (x1569>>(x1570%(x1571|x1572)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint64_t x1573 = 603478161LLU;
	int8_t x1574 = 0;

    t101 = (x1573>>(x1574%(x1575|x1576)));

    if (t101 != 603478161LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint32_t x1581 = 18261331U;
	static int32_t x1582 = INT32_MAX;
	int16_t x1583 = INT16_MIN;
	static int16_t x1584 = INT16_MAX;
	volatile uint32_t t102 = 859881115U;

    t102 = (x1581>>(x1582%(x1583|x1584)));

    if (t102 != 18261331U) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int16_t x1593 = INT16_MAX;
	uint32_t x1594 = 6030304U;
	int8_t x1595 = INT8_MIN;
	int64_t x1596 = INT64_MAX;

    t103 = (x1593>>(x1594%(x1595|x1596)));

    if (t103 != 32767) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x1601 = 0U;
	int8_t x1602 = -1;
	int16_t x1603 = INT16_MIN;
	int16_t x1604 = INT16_MAX;

    t104 = (x1601>>(x1602%(x1603|x1604)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x1621 = 7844U;
	int64_t x1622 = INT64_MAX;
	int8_t x1623 = INT8_MAX;
	int32_t x1624 = INT32_MAX;
	static int32_t t105 = 352096143;

    t105 = (x1621>>(x1622%(x1623|x1624)));

    if (t105 != 3922) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x1644 = -1;
	volatile int32_t t106 = -1;

    t106 = (x1641>>(x1642%(x1643|x1644)));

    if (t106 != 127) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x1661 = UINT64_MAX;
	int16_t x1662 = 76;
	static int64_t x1663 = -1LL;
	uint64_t t107 = UINT64_MAX;

    t107 = (x1661>>(x1662%(x1663|x1664)));

    if (t107 != UINT64_MAX) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x1694 = -33;
	int8_t x1696 = INT8_MAX;
	volatile int32_t t108 = 755918656;

    t108 = (x1693>>(x1694%(x1695|x1696)));

    if (t108 != 3) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x1697 = INT32_MAX;
	volatile int32_t x1699 = INT32_MIN;
	int32_t x1700 = INT32_MAX;
	static volatile int32_t t109 = INT32_MAX;

    t109 = (x1697>>(x1698%(x1699|x1700)));

    if (t109 != INT32_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x1701 = 65U;
	volatile int32_t x1702 = 289449;
	uint16_t x1703 = UINT16_MAX;
	int32_t t110 = 476748;

    t110 = (x1701>>(x1702%(x1703|x1704)));

    if (t110 != 65) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x1713 = 342U;
	int16_t x1714 = 6;
	static uint16_t x1715 = UINT16_MAX;
	static int8_t x1716 = 0;
	uint32_t t111 = 1U;

    t111 = (x1713>>(x1714%(x1715|x1716)));

    if (t111 != 5U) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x1726 = -1LL;
	uint8_t x1727 = UINT8_MAX;
	int8_t x1728 = INT8_MIN;
	uint64_t t112 = 96315746673321473LLU;

    t112 = (x1725>>(x1726%(x1727|x1728)));

    if (t112 != 848294579343LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x1753 = 460;
	int64_t x1754 = INT64_MAX;
	static int64_t x1755 = -1LL;
	static uint16_t x1756 = UINT16_MAX;
	int32_t t113 = -3521650;

    t113 = (x1753>>(x1754%(x1755|x1756)));

    if (t113 != 460) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x1769 = UINT32_MAX;
	int16_t x1770 = INT16_MIN;
	int64_t x1771 = INT64_MAX;
	int16_t x1772 = -1;
	static uint32_t t114 = UINT32_MAX;

    t114 = (x1769>>(x1770%(x1771|x1772)));

    if (t114 != UINT32_MAX) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x1777 = 3;
	uint8_t x1778 = 10U;
	static int16_t x1779 = INT16_MAX;
	int32_t t115 = -3804;

    t115 = (x1777>>(x1778%(x1779|x1780)));

    if (t115 != 3) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x1789 = 281;
	uint32_t x1790 = 2U;
	volatile int8_t x1791 = INT8_MIN;
	volatile uint64_t x1792 = 99480847440851775LLU;

    t116 = (x1789>>(x1790%(x1791|x1792)));

    if (t116 != 70) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x1825 = 2;
	int64_t x1828 = INT64_MAX;
	volatile int32_t t117 = -1;

    t117 = (x1825>>(x1826%(x1827|x1828)));

    if (t117 != 2) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x1849 = 30U;
	int64_t x1850 = 229940634693898LL;
	int32_t x1851 = -15;
	uint8_t x1852 = UINT8_MAX;
	int32_t t118 = -393565;

    t118 = (x1849>>(x1850%(x1851|x1852)));

    if (t118 != 30) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x1853 = 214538397LL;
	int8_t x1854 = -1;
	uint8_t x1856 = UINT8_MAX;
	volatile int64_t t119 = 11938120694LL;

    t119 = (x1853>>(x1854%(x1855|x1856)));

    if (t119 != 214538397LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x1869 = 31LLU;
	int32_t x1870 = INT32_MIN;
	int64_t x1871 = INT64_MAX;
	static int8_t x1872 = -1;
	uint64_t t120 = 56345128288LLU;

    t120 = (x1869>>(x1870%(x1871|x1872)));

    if (t120 != 31LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x1941 = INT32_MAX;
	int8_t x1942 = INT8_MIN;
	static volatile int8_t x1943 = -1;
	volatile int8_t x1944 = -22;

    t121 = (x1941>>(x1942%(x1943|x1944)));

    if (t121 != INT32_MAX) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x1949 = 217522;
	static volatile uint16_t x1950 = UINT16_MAX;
	int16_t x1951 = -18;
	volatile int32_t x1952 = INT32_MIN;
	volatile int32_t t122 = 63272298;

    t122 = (x1949>>(x1950%(x1951|x1952)));

    if (t122 != 6) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x1970 = INT64_MIN;
	int16_t x1971 = INT16_MAX;
	int8_t x1972 = -37;
	int32_t t123 = -1322;

    t123 = (x1969>>(x1970%(x1971|x1972)));

    if (t123 != 1824) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x2013 = UINT16_MAX;
	int64_t x2015 = INT64_MAX;
	int16_t x2016 = -621;
	volatile int32_t t124 = -27952;

    t124 = (x2013>>(x2014%(x2015|x2016)));

    if (t124 != 65535) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x2045 = 14;
	int32_t x2046 = INT32_MIN;
	int32_t x2047 = -1;
	uint8_t x2048 = 1U;
	volatile int32_t t125 = 10;

    t125 = (x2045>>(x2046%(x2047|x2048)));

    if (t125 != 14) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x2078 = UINT16_MAX;
	volatile uint16_t x2079 = 159U;
	volatile uint16_t x2080 = UINT16_MAX;
	volatile int64_t t126 = -4064763LL;

    t126 = (x2077>>(x2078%(x2079|x2080)));

    if (t126 != 52823169LL) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x2082 = INT8_MAX;
	int8_t x2084 = INT8_MIN;
	volatile uint32_t t127 = 40384554U;

    t127 = (x2081>>(x2082%(x2083|x2084)));

    if (t127 != 6795U) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x2117 = INT8_MAX;
	static int16_t x2118 = INT16_MIN;
	int8_t x2119 = INT8_MIN;
	int32_t t128 = 2;

    t128 = (x2117>>(x2118%(x2119|x2120)));

    if (t128 != 127) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x2149 = 4U;
	int8_t x2150 = 0;
	static int64_t x2151 = 514436871926LL;
	static int32_t t129 = 1039235;

    t129 = (x2149>>(x2150%(x2151|x2152)));

    if (t129 != 4) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x2173 = 2688;
	uint16_t x2175 = 2U;
	static int64_t x2176 = -1LL;
	volatile int32_t t130 = 6188206;

    t130 = (x2173>>(x2174%(x2175|x2176)));

    if (t130 != 2688) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x2202 = -1;
	static uint8_t x2203 = 23U;
	volatile int32_t t131 = INT32_MAX;

    t131 = (x2201>>(x2202%(x2203|x2204)));

    if (t131 != INT32_MAX) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint16_t x2213 = 0U;
	static volatile int8_t x2214 = INT8_MIN;
	int8_t x2215 = INT8_MIN;
	int8_t x2216 = INT8_MIN;
	static int32_t t132 = 76594;

    t132 = (x2213>>(x2214%(x2215|x2216)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x2237 = 0U;
	static volatile uint16_t x2238 = UINT16_MAX;
	static volatile int32_t x2239 = -14;
	int16_t x2240 = INT16_MIN;
	volatile int32_t t133 = -115918;

    t133 = (x2237>>(x2238%(x2239|x2240)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x2249 = 3998908194LL;
	int8_t x2250 = 13;
	uint8_t x2251 = 3U;
	int64_t t134 = -7790843492850LL;

    t134 = (x2249>>(x2250%(x2251|x2252)));

    if (t134 != 488147LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x2269 = 25742067U;
	volatile int8_t x2270 = -1;
	int32_t x2271 = INT32_MAX;
	volatile int8_t x2272 = INT8_MIN;

    t135 = (x2269>>(x2270%(x2271|x2272)));

    if (t135 != 25742067U) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x2285 = UINT64_MAX;
	int32_t x2286 = INT32_MAX;
	volatile int32_t x2287 = INT32_MAX;
	uint8_t x2288 = 22U;
	uint64_t t136 = UINT64_MAX;

    t136 = (x2285>>(x2286%(x2287|x2288)));

    if (t136 != UINT64_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x2309 = 385538LL;
	static int8_t x2311 = 41;
	static int8_t x2312 = INT8_MIN;
	volatile int64_t t137 = -2835625373663712609LL;

    t137 = (x2309>>(x2310%(x2311|x2312)));

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x2322 = 3;
	volatile int32_t t138 = -15;

    t138 = (x2321>>(x2322%(x2323|x2324)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x2341 = UINT8_MAX;
	uint16_t x2342 = 3U;
	int16_t x2344 = INT16_MIN;

    t139 = (x2341>>(x2342%(x2343|x2344)));

    if (t139 != 31) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x2345 = INT64_MAX;
	int16_t x2346 = INT16_MIN;
	static int8_t x2347 = -1;
	volatile uint8_t x2348 = 12U;
	static int64_t t140 = INT64_MAX;

    t140 = (x2345>>(x2346%(x2347|x2348)));

    if (t140 != INT64_MAX) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x2349 = 22272U;
	uint16_t x2350 = 14636U;
	static int32_t x2351 = 62;
	int8_t x2352 = 0;
	volatile int32_t t141 = 0;

    t141 = (x2349>>(x2350%(x2351|x2352)));

    if (t141 != 1392) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x2375 = 23;
	static volatile int8_t x2376 = 8;

    t142 = (x2373>>(x2374%(x2375|x2376)));

    if (t142 != 19) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x2381 = 6U;
	int32_t x2382 = -186;
	int32_t x2383 = INT32_MIN;
	int64_t x2384 = -1LL;
	static int32_t t143 = 375392061;

    t143 = (x2381>>(x2382%(x2383|x2384)));

    if (t143 != 6) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x2402 = UINT32_MAX;
	int32_t x2404 = INT32_MAX;
	uint64_t t144 = 204226961307705LLU;

    t144 = (x2401>>(x2402%(x2403|x2404)));

    if (t144 != 48474207LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile int64_t x2407 = -1457LL;
	int64_t x2408 = 47746946224112LL;
	static int32_t t145 = -313916656;

    t145 = (x2405>>(x2406%(x2407|x2408)));

    if (t145 != 127) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x2417 = 14;
	uint64_t x2420 = UINT64_MAX;
	int32_t t146 = -2;

    t146 = (x2417>>(x2418%(x2419|x2420)));

    if (t146 != 14) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x2433 = 818440573871735LLU;
	int8_t x2434 = 39;
	int16_t x2435 = INT16_MIN;
	volatile int16_t x2436 = -2705;

    t147 = (x2433>>(x2434%(x2435|x2436)));

    if (t147 != 1488LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x2497 = 34U;
	static int64_t x2498 = INT64_MIN;
	volatile int16_t x2499 = -1;
	int32_t x2500 = INT32_MAX;
	volatile int32_t t148 = -1938;

    t148 = (x2497>>(x2498%(x2499|x2500)));

    if (t148 != 34) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x2513 = 13802988U;
	int32_t x2514 = INT32_MIN;
	int32_t x2515 = 181;
	int16_t x2516 = -1;
	volatile uint32_t t149 = 95U;

    t149 = (x2513>>(x2514%(x2515|x2516)));

    if (t149 != 13802988U) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x2517 = 6U;
	volatile int16_t x2519 = -3;
	volatile int16_t x2520 = -1;
	int32_t t150 = 2339677;

    t150 = (x2517>>(x2518%(x2519|x2520)));

    if (t150 != 6) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x2521 = 581384530419LL;
	int32_t x2522 = INT32_MAX;
	int64_t x2524 = -1LL;
	int64_t t151 = -242LL;

    t151 = (x2521>>(x2522%(x2523|x2524)));

    if (t151 != 581384530419LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x2525 = 12869;
	int8_t x2526 = INT8_MAX;
	static int32_t x2527 = -1;
	int32_t x2528 = INT32_MIN;
	volatile int32_t t152 = -336936557;

    t152 = (x2525>>(x2526%(x2527|x2528)));

    if (t152 != 12869) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x2553 = 55528057168LLU;
	int32_t x2555 = 8;
	int16_t x2556 = -30;

    t153 = (x2553>>(x2554%(x2555|x2556)));

    if (t153 != 3470503573LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x2561 = 38190681330351LLU;
	int8_t x2562 = 1;
	static int16_t x2563 = INT16_MIN;
	uint16_t x2564 = 0U;
	static uint64_t t154 = 808106171LLU;

    t154 = (x2561>>(x2562%(x2563|x2564)));

    if (t154 != 19095340665175LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x2593 = 20180;
	uint16_t x2594 = 3725U;
	int64_t x2595 = -605134LL;
	int32_t x2596 = -1;
	static volatile int32_t t155 = 1;

    t155 = (x2593>>(x2594%(x2595|x2596)));

    if (t155 != 20180) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x2613 = 1;
	int16_t x2614 = INT16_MIN;
	int32_t x2615 = -1;
	volatile int32_t x2616 = INT32_MIN;
	volatile int32_t t156 = 445979638;

    t156 = (x2613>>(x2614%(x2615|x2616)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int32_t x2626 = INT32_MIN;
	uint16_t x2627 = 931U;
	volatile int16_t x2628 = -35;
	int64_t t157 = INT64_MAX;

    t157 = (x2625>>(x2626%(x2627|x2628)));

    if (t157 != INT64_MAX) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x2640 = -1;
	static volatile uint32_t t158 = UINT32_MAX;

    t158 = (x2637>>(x2638%(x2639|x2640)));

    if (t158 != UINT32_MAX) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x2645 = 1;
	int16_t x2646 = 172;
	uint32_t x2647 = UINT32_MAX;
	int32_t t159 = -1104;

    t159 = (x2645>>(x2646%(x2647|x2648)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int64_t x2689 = 2590LL;
	uint64_t x2690 = UINT64_MAX;
	int64_t x2691 = -1LL;

    t160 = (x2689>>(x2690%(x2691|x2692)));

    if (t160 != 2590LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x2741 = INT16_MAX;
	static int8_t x2742 = 1;
	int32_t x2743 = INT32_MIN;
	int32_t x2744 = 1105;
	volatile int32_t t161 = 0;

    t161 = (x2741>>(x2742%(x2743|x2744)));

    if (t161 != 16383) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x2765 = 107515;
	int64_t x2766 = INT64_MAX;
	int64_t x2767 = INT64_MAX;
	int64_t x2768 = INT64_MIN;
	int32_t t162 = 14;

    t162 = (x2765>>(x2766%(x2767|x2768)));

    if (t162 != 107515) { NG(); } else { ; }
	
}

void f163(void) {
    	static int8_t x2769 = INT8_MAX;
	int64_t x2770 = INT64_MAX;
	static int8_t x2771 = -1;
	volatile int32_t t163 = -349672;

    t163 = (x2769>>(x2770%(x2771|x2772)));

    if (t163 != 127) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x2782 = 0;
	static volatile int64_t x2783 = -1LL;
	volatile int32_t t164 = 101359;

    t164 = (x2781>>(x2782%(x2783|x2784)));

    if (t164 != 7466821) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x2785 = 212575929715037LL;
	int16_t x2786 = 0;
	uint8_t x2787 = UINT8_MAX;
	static int8_t x2788 = -1;

    t165 = (x2785>>(x2786%(x2787|x2788)));

    if (t165 != 212575929715037LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x2797 = INT64_MAX;
	uint8_t x2798 = 5U;
	static uint32_t x2799 = 1U;
	static volatile int8_t x2800 = INT8_MIN;
	int64_t t166 = 22203476686LL;

    t166 = (x2797>>(x2798%(x2799|x2800)));

    if (t166 != 288230376151711743LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x2809 = UINT8_MAX;
	uint16_t x2810 = 22U;
	int32_t x2811 = INT32_MAX;
	int16_t x2812 = -1;
	int32_t t167 = 22663524;

    t167 = (x2809>>(x2810%(x2811|x2812)));

    if (t167 != 255) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x2829 = 43980344973543LLU;
	static int8_t x2830 = INT8_MIN;
	static int8_t x2831 = -1;
	volatile uint64_t t168 = 73LLU;

    t168 = (x2829>>(x2830%(x2831|x2832)));

    if (t168 != 43980344973543LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint32_t x2841 = 12908U;
	volatile uint8_t x2842 = 1U;
	int64_t x2843 = INT64_MAX;
	int8_t x2844 = -1;
	uint32_t t169 = 24729921U;

    t169 = (x2841>>(x2842%(x2843|x2844)));

    if (t169 != 12908U) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x2849 = UINT8_MAX;
	static int64_t x2850 = -1LL;
	int8_t x2852 = -1;

    t170 = (x2849>>(x2850%(x2851|x2852)));

    if (t170 != 255) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint32_t x2857 = UINT32_MAX;
	volatile int8_t x2858 = 0;
	int64_t x2859 = 391509LL;
	volatile uint32_t x2860 = 11U;
	uint32_t t171 = UINT32_MAX;

    t171 = (x2857>>(x2858%(x2859|x2860)));

    if (t171 != UINT32_MAX) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint32_t x2869 = 25393U;
	static int8_t x2870 = -1;
	volatile int16_t x2871 = -1;

    t172 = (x2869>>(x2870%(x2871|x2872)));

    if (t172 != 25393U) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x2877 = INT32_MAX;
	int8_t x2878 = INT8_MAX;
	int16_t x2879 = -1;
	uint16_t x2880 = 44U;
	volatile int32_t t173 = INT32_MAX;

    t173 = (x2877>>(x2878%(x2879|x2880)));

    if (t173 != INT32_MAX) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x2893 = 1;
	uint16_t x2894 = UINT16_MAX;
	int32_t x2895 = 19;
	int32_t t174 = -74345;

    t174 = (x2893>>(x2894%(x2895|x2896)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int8_t x2902 = 17;
	static int8_t x2903 = INT8_MIN;

    t175 = (x2901>>(x2902%(x2903|x2904)));

    if (t175 != 22U) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x2913 = 4002;
	static int32_t x2914 = 13;
	uint32_t x2915 = UINT32_MAX;
	int32_t t176 = 1756;

    t176 = (x2913>>(x2914%(x2915|x2916)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile uint8_t x2941 = UINT8_MAX;
	int16_t x2942 = 7;
	static volatile int64_t x2943 = 51050528621314021LL;
	int64_t x2944 = INT64_MIN;
	int32_t t177 = 2806750;

    t177 = (x2941>>(x2942%(x2943|x2944)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x2945 = 15268943836252136LL;
	int32_t x2946 = -1;
	uint32_t x2947 = UINT32_MAX;
	volatile int64_t t178 = 960971LL;

    t178 = (x2945>>(x2946%(x2947|x2948)));

    if (t178 != 15268943836252136LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x2957 = 166290500U;
	int8_t x2958 = -1;
	int64_t x2959 = -1LL;
	volatile int64_t x2960 = -1LL;
	static volatile uint32_t t179 = 16U;

    t179 = (x2957>>(x2958%(x2959|x2960)));

    if (t179 != 166290500U) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x3002 = 601;
	int8_t x3004 = -1;
	volatile int32_t t180 = 21;

    t180 = (x3001>>(x3002%(x3003|x3004)));

    if (t180 != 24) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x3017 = 21698939654122821LL;
	uint8_t x3018 = UINT8_MAX;
	static int64_t x3019 = -1LL;
	int8_t x3020 = INT8_MAX;
	static int64_t t181 = -794539LL;

    t181 = (x3017>>(x3018%(x3019|x3020)));

    if (t181 != 21698939654122821LL) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x3049 = INT64_MAX;
	volatile int64_t x3050 = INT64_MAX;
	static int16_t x3051 = 152;
	volatile int64_t t182 = INT64_MAX;

    t182 = (x3049>>(x3050%(x3051|x3052)));

    if (t182 != INT64_MAX) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int32_t x3054 = 0;
	static uint32_t x3055 = 1571377U;
	uint64_t x3056 = UINT64_MAX;
	volatile uint64_t t183 = 61LLU;

    t183 = (x3053>>(x3054%(x3055|x3056)));

    if (t183 != 1444LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x3061 = 432U;
	int16_t x3062 = INT16_MIN;
	static int64_t x3063 = -1LL;
	int32_t x3064 = INT32_MIN;
	volatile int32_t t184 = -2395964;

    t184 = (x3061>>(x3062%(x3063|x3064)));

    if (t184 != 432) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x3070 = 4;
	static int16_t x3071 = -1;
	volatile int64_t x3072 = INT64_MIN;
	int64_t t185 = INT64_MAX;

    t185 = (x3069>>(x3070%(x3071|x3072)));

    if (t185 != INT64_MAX) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x3073 = 5646447245LLU;
	int64_t x3074 = -3703549174300067LL;
	int8_t x3075 = -1;
	int16_t x3076 = -1;

    t186 = (x3073>>(x3074%(x3075|x3076)));

    if (t186 != 5646447245LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x3086 = -1;
	static int32_t x3087 = -1;
	int16_t x3088 = INT16_MAX;
	volatile int32_t t187 = -1604;

    t187 = (x3085>>(x3086%(x3087|x3088)));

    if (t187 != 100) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int8_t x3105 = 5;
	uint8_t x3106 = 28U;
	uint8_t x3108 = UINT8_MAX;
	volatile int32_t t188 = -3;

    t188 = (x3105>>(x3106%(x3107|x3108)));

    if (t188 != 5) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x3110 = 1409U;
	int64_t x3111 = INT64_MIN;

    t189 = (x3109>>(x3110%(x3111|x3112)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint32_t x3141 = 53987040U;
	int16_t x3143 = -12342;
	int16_t x3144 = INT16_MAX;
	static uint32_t t190 = 215U;

    t190 = (x3141>>(x3142%(x3143|x3144)));

    if (t190 != 53987040U) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x3169 = 0;
	uint8_t x3170 = UINT8_MAX;
	volatile int64_t x3171 = -1LL;
	volatile int32_t t191 = 885;

    t191 = (x3169>>(x3170%(x3171|x3172)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x3181 = 414948990998091100LLU;
	int32_t x3182 = -1;
	uint32_t x3183 = 28U;
	int8_t x3184 = -1;
	volatile uint64_t t192 = 255191027018684426LLU;

    t192 = (x3181>>(x3182%(x3183|x3184)));

    if (t192 != 414948990998091100LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x3229 = 2;
	int8_t x3231 = INT8_MIN;
	static volatile int16_t x3232 = -1;

    t193 = (x3229>>(x3230%(x3231|x3232)));

    if (t193 != 2) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x3245 = INT64_MAX;
	static int16_t x3246 = INT16_MIN;
	int32_t x3247 = -1;
	static volatile int64_t x3248 = 170989LL;
	int64_t t194 = INT64_MAX;

    t194 = (x3245>>(x3246%(x3247|x3248)));

    if (t194 != INT64_MAX) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x3253 = INT16_MAX;
	int64_t x3255 = INT64_MIN;
	int8_t x3256 = INT8_MIN;

    t195 = (x3253>>(x3254%(x3255|x3256)));

    if (t195 != 16383) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int64_t x3269 = INT64_MAX;
	int32_t x3270 = INT32_MAX;
	static int8_t x3271 = -1;
	volatile uint8_t x3272 = UINT8_MAX;
	int64_t t196 = INT64_MAX;

    t196 = (x3269>>(x3270%(x3271|x3272)));

    if (t196 != INT64_MAX) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint8_t x3297 = UINT8_MAX;
	int64_t x3298 = -13082039207679LL;
	static int64_t x3299 = -1LL;
	int16_t x3300 = 0;
	int32_t t197 = -6;

    t197 = (x3297>>(x3298%(x3299|x3300)));

    if (t197 != 255) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x3301 = 32U;
	int8_t x3302 = -1;
	volatile int16_t x3304 = INT16_MIN;
	int32_t t198 = 1695704;

    t198 = (x3301>>(x3302%(x3303|x3304)));

    if (t198 != 32) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x3325 = INT8_MAX;
	int32_t x3327 = INT32_MIN;
	static int8_t x3328 = -1;
	static volatile int32_t t199 = 921247;

    t199 = (x3325>>(x3326%(x3327|x3328)));

    if (t199 != 127) { NG(); } else { ; }
	
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

