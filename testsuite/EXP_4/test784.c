
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

int8_t x3 = INT8_MIN;
int8_t x6 = -1;
int64_t t1 = 5585216LL;
static volatile uint8_t x10 = 123U;
int16_t x18 = -1;
int8_t x20 = -1;
static int32_t x28 = INT32_MAX;
uint16_t x32 = 7655U;
static volatile int16_t x40 = 26;
static volatile int32_t t8 = 26;
volatile int64_t x41 = INT64_MIN;
volatile int64_t t9 = -79LL;
static volatile int32_t x46 = INT32_MIN;
int64_t x47 = INT64_MIN;
uint64_t t10 = 19450374258LLU;
int8_t x51 = INT8_MIN;
uint8_t x52 = UINT8_MAX;
volatile int32_t t11 = -3;
int32_t x53 = -1;
uint64_t t13 = 0LLU;
int8_t x61 = -1;
int64_t x62 = 815477057509805LL;
volatile int8_t x66 = INT8_MAX;
int64_t x68 = INT64_MIN;
static int32_t x69 = -1;
volatile int8_t x71 = -1;
static volatile int64_t t18 = -21314307549LL;
int64_t x83 = -7992727270176LL;
static volatile int32_t t20 = -31321;
int16_t x90 = INT16_MAX;
volatile int64_t x93 = INT64_MIN;
int32_t t23 = -16296;
volatile uint32_t x101 = 2763U;
int64_t x103 = -1LL;
uint16_t x104 = UINT16_MAX;
uint32_t x105 = 27U;
static uint8_t x108 = UINT8_MAX;
static int8_t x110 = INT8_MIN;
uint8_t x111 = 3U;
int8_t x116 = -1;
static int32_t x121 = -1;
static uint32_t x125 = 31U;
static int16_t x131 = -1;
volatile int64_t t31 = 28751331836LL;
static uint32_t x137 = 29320462U;
static int64_t t33 = -12148075LL;
uint16_t x144 = 193U;
uint64_t t34 = 1513LLU;
volatile int32_t t35 = -113;
int16_t x154 = 489;
static uint32_t x155 = 525945391U;
int8_t x156 = -1;
int64_t t37 = -22680LL;
volatile int8_t x158 = -5;
static volatile int32_t x159 = 86116;
static volatile uint32_t x172 = UINT32_MAX;
uint64_t x173 = 1528155243650591LLU;
uint32_t x174 = UINT32_MAX;
volatile uint64_t t42 = 378LLU;
int32_t x180 = -1744814;
uint16_t x185 = 25162U;
volatile int16_t x187 = INT16_MIN;
volatile uint32_t x189 = 1U;
static uint64_t x200 = UINT64_MAX;
int16_t x204 = INT16_MIN;
static int64_t x205 = -1LL;
int16_t x207 = -1;
volatile uint8_t x209 = 19U;
int8_t x216 = INT8_MAX;
volatile int32_t t52 = -93;
static int64_t x220 = INT64_MIN;
int32_t x223 = -1;
int32_t x228 = -1;
int32_t x230 = -234513;
uint32_t x235 = UINT32_MAX;
static uint32_t x241 = 145781U;
volatile int32_t x248 = INT32_MIN;
uint64_t t60 = 433885302890LLU;
volatile uint64_t t63 = 97399LLU;
static uint32_t x267 = 1U;
uint8_t x270 = 108U;
int64_t x272 = INT64_MIN;
volatile int64_t t66 = 49LL;
int16_t x281 = INT16_MAX;
volatile int32_t t69 = -124268196;
uint16_t x288 = UINT16_MAX;
int16_t x290 = INT16_MIN;
int64_t x293 = 24661767LL;
uint64_t x303 = 16312LLU;
volatile uint64_t t73 = 18651LLU;
volatile int64_t x305 = INT64_MIN;
int32_t x307 = INT32_MAX;
static int64_t x308 = INT64_MIN;
static int8_t x316 = INT8_MAX;
static uint64_t t76 = 0LLU;
uint32_t x321 = 2566083U;
volatile int8_t x325 = 5;
int8_t x333 = -1;
uint32_t x337 = 9560447U;
int16_t x340 = -15519;
static volatile uint8_t x348 = UINT8_MAX;
volatile uint64_t t83 = 2509717LLU;
int32_t x356 = -451;
int8_t x358 = 4;
int64_t x359 = 109578624142933LL;
uint8_t x361 = UINT8_MAX;
uint8_t x366 = 0U;
static volatile uint8_t x371 = UINT8_MAX;
static volatile int64_t t89 = 2LL;
uint8_t x379 = UINT8_MAX;
uint32_t x380 = 8519U;
int16_t x382 = INT16_MIN;
int32_t x384 = -1;
uint64_t t92 = 192662644569528813LLU;
static uint32_t x390 = UINT32_MAX;
uint32_t t94 = 333U;
volatile int8_t x397 = INT8_MIN;
static int8_t x400 = 1;
volatile int32_t t96 = -975584986;
static volatile int32_t x404 = INT32_MIN;
uint8_t x405 = 0U;
static int64_t t98 = -192774LL;
int16_t x410 = INT16_MIN;
int32_t x416 = INT32_MAX;
int16_t x418 = INT16_MIN;
uint32_t x426 = UINT32_MAX;
uint8_t x427 = 3U;
volatile uint32_t t104 = 78858529U;
int8_t x441 = 0;
uint64_t x442 = 22644877LLU;
uint8_t x443 = UINT8_MAX;
volatile int16_t x444 = INT16_MIN;
uint64_t t107 = 9LLU;
static int8_t x445 = INT8_MIN;
int32_t t108 = 0;
int32_t x451 = 1;
int16_t x452 = -1;
volatile int64_t t110 = 128755865481LL;
static int64_t x457 = INT64_MAX;
volatile int64_t t112 = 685783024844011LL;
static uint64_t x467 = 18LLU;
volatile uint64_t t113 = 1LLU;
static int32_t x469 = INT32_MAX;
int32_t x478 = INT32_MIN;
int32_t x480 = 5;
int8_t x484 = 60;
static int16_t x486 = INT16_MAX;
static int8_t x487 = -1;
volatile int32_t x489 = INT32_MIN;
uint64_t x493 = 723733785LLU;
static uint8_t x497 = 0U;
int64_t t121 = 510125013127024LL;
int16_t x506 = -1;
uint64_t x507 = 6144114554521LLU;
uint32_t x508 = 496U;
static int64_t x516 = -1LL;
int64_t x517 = -1492644572041LL;
static int8_t x518 = INT8_MIN;
int64_t x520 = -1LL;
uint16_t x521 = UINT16_MAX;
int8_t x525 = -1;
int16_t x530 = -1;
int64_t x533 = INT64_MIN;
volatile int16_t x536 = 6;
static int8_t x540 = INT8_MAX;
int32_t t131 = 1105;
volatile uint32_t x546 = 410U;
int32_t x549 = -94;
int8_t x550 = -3;
int64_t x551 = -1LL;
uint16_t x555 = 1116U;
int32_t x556 = -434698643;
int64_t x559 = 124743268796117170LL;
volatile int8_t x569 = INT8_MIN;
static volatile int16_t x570 = INT16_MIN;
static uint16_t x580 = UINT16_MAX;
int64_t x583 = -1LL;
volatile uint64_t t142 = 1619522LLU;
volatile int16_t x588 = INT16_MAX;
volatile int16_t x592 = INT16_MIN;
int16_t x593 = -64;
volatile uint16_t x594 = 1U;
volatile int16_t x596 = INT16_MAX;
volatile int32_t x599 = 7527;
volatile uint64_t t146 = 1LLU;
int64_t x605 = 70LL;
int8_t x606 = 46;
int8_t x608 = INT8_MIN;
volatile int16_t x612 = INT16_MIN;
volatile int64_t x615 = -80435633200LL;
volatile int64_t x617 = INT64_MIN;
uint8_t x622 = 7U;
int8_t x626 = INT8_MAX;
uint8_t x630 = 13U;
uint16_t x632 = 4U;
int32_t t154 = 985536;
volatile uint16_t x633 = 6U;
static int16_t x635 = -1;
volatile int32_t t155 = -8720950;
int16_t x651 = INT16_MIN;
int16_t x662 = -398;
static uint64_t x676 = UINT64_MAX;
uint64_t t164 = 592531LLU;
int32_t t165 = -18200;
uint64_t t167 = 879187938938883LLU;
int32_t x694 = 3;
uint8_t x706 = 14U;
static int64_t t174 = -8630LL;
uint64_t t175 = 503LLU;
int64_t t177 = 1LL;
int64_t x734 = -1025513765629810510LL;
int16_t x741 = -1;
int32_t x751 = INT32_MIN;
uint16_t x759 = 19U;
volatile uint64_t t184 = 14894LLU;
static volatile uint8_t x763 = 19U;
int8_t x764 = INT8_MIN;
int32_t x765 = INT32_MIN;
int16_t x767 = INT16_MAX;
static int64_t x771 = -599509LL;
volatile int32_t x778 = INT32_MIN;
uint16_t x780 = 2834U;
volatile uint64_t x784 = 6LLU;
volatile uint64_t x790 = 25LLU;
int16_t x791 = INT16_MAX;
uint64_t t192 = 7443300LLU;
int64_t x793 = -2075836521004LL;
uint64_t x795 = 61LLU;
uint64_t x797 = UINT64_MAX;
int16_t x798 = INT16_MIN;
int32_t x799 = -1;
int64_t x806 = INT64_MIN;
volatile int16_t x808 = -1;
volatile uint64_t t197 = 698570520127LLU;
uint32_t t199 = 236182920U;


void f0(void) {
    	volatile int64_t x1 = -19123532422770376LL;
	uint8_t x2 = UINT8_MAX;
	int8_t x4 = INT8_MAX;
	static volatile int64_t t0 = -5324LL;

    t0 = (x1^(x2^(x3/x4)));

    if (t0 != 19123532422770232LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint16_t x5 = UINT16_MAX;
	int16_t x7 = -251;
	int64_t x8 = INT64_MIN;

    t1 = (x5^(x6^(x7/x8)));

    if (t1 != -65536LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = INT64_MAX;
	int8_t x11 = -1;
	uint16_t x12 = UINT16_MAX;
	static int64_t t2 = 117719609820518LL;

    t2 = (x9^(x10^(x11/x12)));

    if (t2 != 9223372036854775684LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MIN;
	int32_t x14 = 428;
	uint8_t x15 = 22U;
	int32_t x16 = INT32_MIN;
	int32_t t3 = 5036917;

    t3 = (x13^(x14^(x15/x16)));

    if (t3 != -2147483220) { NG(); } else { ; }
	
}

void f4(void) {
    	static int64_t x17 = INT64_MIN;
	uint8_t x19 = 45U;
	volatile int64_t t4 = -42LL;

    t4 = (x17^(x18^(x19/x20)));

    if (t4 != -9223372036854775764LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x25 = 6351;
	int8_t x26 = INT8_MIN;
	int16_t x27 = 0;
	int32_t t5 = -4;

    t5 = (x25^(x26^(x27/x28)));

    if (t5 != -6321) { NG(); } else { ; }
	
}

void f6(void) {
    	static int32_t x29 = 27793;
	int8_t x30 = INT8_MAX;
	volatile int32_t x31 = -1;
	int32_t t6 = -42966347;

    t6 = (x29^(x30^(x31/x32)));

    if (t6 != 27886) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x33 = 400289052LLU;
	uint64_t x34 = 10LLU;
	int8_t x35 = -11;
	uint64_t x36 = 42193067LLU;
	uint64_t t7 = 14451468963301LLU;

    t7 = (x33^(x34^(x35/x36)));

    if (t7 != 437496630809LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x37 = 10U;
	int8_t x38 = 29;
	int32_t x39 = INT32_MIN;

    t8 = (x37^(x38^(x39/x40)));

    if (t8 != -82595541) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint16_t x42 = 3U;
	uint8_t x43 = 5U;
	static uint8_t x44 = 10U;

    t9 = (x41^(x42^(x43/x44)));

    if (t9 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x45 = -911528;
	uint64_t x48 = UINT64_MAX;

    t10 = (x45^(x46^(x47/x48)));

    if (t10 != 2146572120LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x49 = UINT16_MAX;
	static volatile int16_t x50 = -13573;

    t11 = (x49^(x50^(x51/x52)));

    if (t11 != -51964) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x54 = INT8_MIN;
	int8_t x55 = INT8_MAX;
	int32_t x56 = -614766191;
	int32_t t12 = -1;

    t12 = (x53^(x54^(x55/x56)));

    if (t12 != 127) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint64_t x57 = UINT64_MAX;
	uint32_t x58 = 12875U;
	int32_t x59 = 0;
	uint8_t x60 = UINT8_MAX;

    t13 = (x57^(x58^(x59/x60)));

    if (t13 != 18446744073709538740LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int8_t x63 = INT8_MIN;
	int8_t x64 = INT8_MIN;
	volatile int64_t t14 = -5583595LL;

    t14 = (x61^(x62^(x63/x64)));

    if (t14 != -815477057509805LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x65 = UINT64_MAX;
	int32_t x67 = -1894;
	uint64_t t15 = 38LLU;

    t15 = (x65^(x66^(x67/x68)));

    if (t15 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint64_t x70 = UINT64_MAX;
	volatile int8_t x72 = INT8_MIN;
	uint64_t t16 = 32270693LLU;

    t16 = (x69^(x70^(x71/x72)));

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x73 = INT32_MAX;
	volatile int64_t x74 = INT64_MAX;
	int16_t x75 = INT16_MAX;
	int8_t x76 = -1;
	static volatile int64_t t17 = -13660702255LL;

    t17 = (x73^(x74^(x75/x76)));

    if (t17 != -9223372034707324927LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x77 = -1LL;
	int8_t x78 = -1;
	int16_t x79 = INT16_MIN;
	static int16_t x80 = INT16_MAX;

    t18 = (x77^(x78^(x79/x80)));

    if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x81 = 1;
	int8_t x82 = -1;
	int64_t x84 = INT64_MAX;
	volatile int64_t t19 = -116098851459792LL;

    t19 = (x81^(x82^(x83/x84)));

    if (t19 != -2LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x85 = 4146775;
	uint16_t x86 = UINT16_MAX;
	int32_t x87 = 137;
	int32_t x88 = INT32_MAX;

    t20 = (x85^(x86^(x87/x88)));

    if (t20 != 4176296) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x89 = 2;
	static int64_t x91 = INT64_MIN;
	int64_t x92 = -10548809943LL;
	int64_t t21 = 2LL;

    t21 = (x89^(x90^(x91/x92)));

    if (t21 != 874377952LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x94 = INT64_MAX;
	uint32_t x95 = 1225483691U;
	uint32_t x96 = 450534262U;
	int64_t t22 = -14747300952220LL;

    t22 = (x93^(x94^(x95/x96)));

    if (t22 != -3LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile uint16_t x97 = 3U;
	int16_t x98 = INT16_MIN;
	int16_t x99 = -1;
	volatile uint8_t x100 = 122U;

    t23 = (x97^(x98^(x99/x100)));

    if (t23 != -32765) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x102 = 30528U;
	static int64_t t24 = -290LL;

    t24 = (x101^(x102^(x103/x104)));

    if (t24 != 32139LL) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint16_t x106 = 7638U;
	int16_t x107 = INT16_MAX;
	uint32_t t25 = 2978811U;

    t25 = (x105^(x106^(x107/x108)));

    if (t25 != 7501U) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x109 = INT32_MIN;
	volatile int64_t x112 = -1LL;
	int64_t t26 = -3539008086652032650LL;

    t26 = (x109^(x110^(x111/x112)));

    if (t26 != -2147483523LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x113 = 265U;
	int8_t x114 = INT8_MIN;
	int32_t x115 = INT32_MAX;
	volatile int32_t t27 = -6;

    t27 = (x113^(x114^(x115/x116)));

    if (t27 != 2147483272) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x117 = INT16_MAX;
	volatile int16_t x118 = INT16_MIN;
	static volatile int8_t x119 = -1;
	int16_t x120 = INT16_MIN;
	int32_t t28 = -57969;

    t28 = (x117^(x118^(x119/x120)));

    if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int64_t x122 = INT64_MIN;
	uint64_t x123 = UINT64_MAX;
	int32_t x124 = INT32_MIN;
	uint64_t t29 = 14032LLU;

    t29 = (x121^(x122^(x123/x124)));

    if (t29 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x126 = INT16_MIN;
	uint64_t x127 = UINT64_MAX;
	int64_t x128 = INT64_MAX;
	uint64_t t30 = 89452LLU;

    t30 = (x125^(x126^(x127/x128)));

    if (t30 != 18446744073709518877LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x129 = INT64_MAX;
	int16_t x130 = INT16_MIN;
	uint16_t x132 = 229U;

    t31 = (x129^(x130^(x131/x132)));

    if (t31 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x133 = 1;
	uint64_t x134 = 12312054187872LLU;
	int32_t x135 = -33058669;
	int16_t x136 = INT16_MAX;
	volatile uint64_t t32 = 5106642705829925LLU;

    t32 = (x133^(x134^(x135/x136)));

    if (t32 != 18446731761655364465LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x138 = -1;
	static int64_t x139 = -5142LL;
	static int16_t x140 = INT16_MAX;

    t33 = (x137^(x138^(x139/x140)));

    if (t33 != -29320463LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x141 = UINT8_MAX;
	static int32_t x142 = 2354;
	uint64_t x143 = 14938LLU;

    t34 = (x141^(x142^(x143/x144)));

    if (t34 != 2432LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x145 = -1;
	int8_t x146 = INT8_MIN;
	volatile int8_t x147 = -1;
	uint8_t x148 = 49U;

    t35 = (x145^(x146^(x147/x148)));

    if (t35 != 127) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int32_t x149 = INT32_MAX;
	int32_t x150 = INT32_MIN;
	int8_t x151 = -1;
	volatile uint64_t x152 = 6980LLU;
	volatile uint64_t t36 = 25854LLU;

    t36 = (x149^(x150^(x151/x152)));

    if (t36 != 18444101273698991508LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x153 = INT64_MIN;

    t37 = (x153^(x154^(x155/x156)));

    if (t37 != -9223372036854775319LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x157 = INT64_MIN;
	volatile int32_t x160 = INT32_MAX;
	int64_t t38 = 82LL;

    t38 = (x157^(x158^(x159/x160)));

    if (t38 != 9223372036854775803LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x161 = -1;
	int16_t x162 = -5626;
	int64_t x163 = INT64_MIN;
	static int16_t x164 = INT16_MIN;
	int64_t t39 = 400947424535371382LL;

    t39 = (x161^(x162^(x163/x164)));

    if (t39 != 281474976716281LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint64_t x165 = 634902862958774LLU;
	volatile int64_t x166 = INT64_MIN;
	int16_t x167 = -1;
	uint64_t x168 = UINT64_MAX;
	static uint64_t t40 = 7278LLU;

    t40 = (x165^(x166^(x167/x168)));

    if (t40 != 9224006939717734583LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x169 = INT16_MIN;
	int16_t x170 = 20;
	int8_t x171 = -1;
	volatile uint32_t t41 = 4U;

    t41 = (x169^(x170^(x171/x172)));

    if (t41 != 4294934549U) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile int32_t x175 = INT32_MIN;
	int16_t x176 = INT16_MAX;

    t42 = (x173^(x174^(x175/x176)));

    if (t42 != 1528155243585054LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint16_t x177 = 0U;
	int8_t x178 = -1;
	int64_t x179 = -55805221205185882LL;
	static volatile int64_t t43 = 2180158855064505195LL;

    t43 = (x177^(x178^(x179/x180)));

    if (t43 != -31983478586LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x181 = -1;
	int8_t x182 = -1;
	uint8_t x183 = 13U;
	int64_t x184 = INT64_MIN;
	static int64_t t44 = -22470696939656LL;

    t44 = (x181^(x182^(x183/x184)));

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int8_t x186 = INT8_MIN;
	static volatile int16_t x188 = 898;
	static int32_t t45 = -8;

    t45 = (x185^(x186^(x187/x188)));

    if (t45 != 25110) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int32_t x190 = -122;
	uint32_t x191 = 9U;
	int64_t x192 = -1LL;
	volatile int64_t t46 = 22373LL;

    t46 = (x189^(x190^(x191/x192)));

    if (t46 != 112LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x193 = -1;
	int64_t x194 = INT64_MAX;
	int16_t x195 = -1;
	uint16_t x196 = 111U;
	int64_t t47 = INT64_MIN;

    t47 = (x193^(x194^(x195/x196)));

    if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x197 = INT8_MIN;
	volatile int8_t x198 = 0;
	uint64_t x199 = 68714609271115LLU;
	static volatile uint64_t t48 = 252810604225333LLU;

    t48 = (x197^(x198^(x199/x200)));

    if (t48 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x201 = INT32_MIN;
	volatile int32_t x202 = INT32_MIN;
	int16_t x203 = INT16_MIN;
	int32_t t49 = 2345221;

    t49 = (x201^(x202^(x203/x204)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile int64_t x206 = INT64_MIN;
	int8_t x208 = 7;
	static volatile int64_t t50 = INT64_MAX;

    t50 = (x205^(x206^(x207/x208)));

    if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x210 = 7;
	static uint16_t x211 = 7U;
	int8_t x212 = -7;
	int32_t t51 = 813106;

    t51 = (x209^(x210^(x211/x212)));

    if (t51 != -21) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x213 = -307337;
	int16_t x214 = 6970;
	volatile int32_t x215 = INT32_MIN;

    t52 = (x213^(x214^(x215/x216)));

    if (t52 != 17215413) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x217 = INT16_MAX;
	uint8_t x218 = UINT8_MAX;
	int8_t x219 = -1;
	int64_t t53 = -1765442627LL;

    t53 = (x217^(x218^(x219/x220)));

    if (t53 != 32512LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x221 = INT8_MAX;
	volatile uint64_t x222 = 8265146LLU;
	volatile uint16_t x224 = 123U;
	volatile uint64_t t54 = 190503LLU;

    t54 = (x221^(x222^(x223/x224)));

    if (t54 != 8265157LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint16_t x225 = 858U;
	volatile uint32_t x226 = 1U;
	static uint8_t x227 = 97U;
	static uint32_t t55 = 25439179U;

    t55 = (x225^(x226^(x227/x228)));

    if (t55 != 4294966468U) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x229 = -5;
	int64_t x231 = -301211LL;
	int8_t x232 = -1;
	int64_t t56 = 217LL;

    t56 = (x229^(x230^(x231/x232)));

    if (t56 != 461967LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x233 = UINT32_MAX;
	volatile uint16_t x234 = 2027U;
	int16_t x236 = 461;
	volatile uint32_t t57 = 14057762U;

    t57 = (x233^(x234^(x235/x236)));

    if (t57 != 4285649155U) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x237 = -1;
	uint8_t x238 = UINT8_MAX;
	int8_t x239 = INT8_MIN;
	static int64_t x240 = -1LL;
	int64_t t58 = 751238167137018163LL;

    t58 = (x237^(x238^(x239/x240)));

    if (t58 != -128LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static int64_t x242 = 32991254133LL;
	volatile uint16_t x243 = UINT16_MAX;
	int8_t x244 = -1;
	static int64_t t59 = -466LL;

    t59 = (x241^(x242^(x243/x244)));

    if (t59 != -32991105279LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x245 = 2U;
	volatile uint64_t x246 = 15997697LLU;
	static volatile int64_t x247 = INT64_MAX;

    t60 = (x245^(x246^(x247/x248)));

    if (t60 != 18446744069430582018LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x249 = 8;
	static int8_t x250 = INT8_MAX;
	uint8_t x251 = 2U;
	int16_t x252 = 3561;
	int32_t t61 = -1400;

    t61 = (x249^(x250^(x251/x252)));

    if (t61 != 119) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x253 = -1LL;
	uint32_t x254 = 1850848U;
	uint8_t x255 = 74U;
	uint8_t x256 = UINT8_MAX;
	volatile int64_t t62 = -53738LL;

    t62 = (x253^(x254^(x255/x256)));

    if (t62 != -1850849LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x257 = 23;
	uint64_t x258 = 2419LLU;
	uint64_t x259 = 7603211LLU;
	volatile int8_t x260 = INT8_MIN;

    t63 = (x257^(x258^(x259/x260)));

    if (t63 != 2404LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int16_t x261 = -5075;
	volatile int16_t x262 = -3;
	static volatile int16_t x263 = INT16_MIN;
	static int32_t x264 = INT32_MIN;
	int32_t t64 = -930893;

    t64 = (x261^(x262^(x263/x264)));

    if (t64 != 5072) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x265 = 1049688018263LLU;
	volatile int64_t x266 = 56588177221LL;
	int64_t x268 = INT64_MIN;
	uint64_t t65 = 418LLU;

    t65 = (x265^(x266^(x267/x268)));

    if (t65 != 1070699053586LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x269 = INT8_MAX;
	int16_t x271 = -64;

    t66 = (x269^(x270^(x271/x272)));

    if (t66 != 19LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x273 = INT8_MAX;
	static int64_t x274 = -2102447396243LL;
	volatile int8_t x275 = 50;
	static int64_t x276 = 1900343205813201406LL;
	int64_t t67 = -1LL;

    t67 = (x273^(x274^(x275/x276)));

    if (t67 != -2102447396334LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x277 = UINT64_MAX;
	volatile int16_t x278 = INT16_MIN;
	volatile uint32_t x279 = 81503U;
	static uint64_t x280 = UINT64_MAX;
	volatile uint64_t t68 = 52LLU;

    t68 = (x277^(x278^(x279/x280)));

    if (t68 != 32767LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	static int8_t x282 = INT8_MIN;
	int8_t x283 = INT8_MAX;
	volatile int16_t x284 = -1;

    t69 = (x281^(x282^(x283/x284)));

    if (t69 != 32766) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x285 = UINT64_MAX;
	uint16_t x286 = 1U;
	int64_t x287 = 57250793359LL;
	volatile uint64_t t70 = 49LLU;

    t70 = (x285^(x286^(x287/x288)));

    if (t70 != 18446744073708678025LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	static int64_t x289 = INT64_MIN;
	volatile uint8_t x291 = 12U;
	volatile int8_t x292 = -1;
	volatile int64_t t71 = 1686650215011LL;

    t71 = (x289^(x290^(x291/x292)));

    if (t71 != -9223372036854743052LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x294 = -1;
	static int32_t x295 = INT32_MIN;
	uint32_t x296 = 60986673U;
	volatile int64_t t72 = -4272516650514579624LL;

    t72 = (x293^(x294^(x295/x296)));

    if (t72 != 4270305499LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x301 = -1LL;
	static int8_t x302 = INT8_MIN;
	int32_t x304 = INT32_MAX;

    t73 = (x301^(x302^(x303/x304)));

    if (t73 != 127LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x306 = -1;
	int64_t t74 = INT64_MAX;

    t74 = (x305^(x306^(x307/x308)));

    if (t74 != INT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x313 = -1;
	int64_t x314 = INT64_MIN;
	int32_t x315 = INT32_MAX;
	static int64_t t75 = 153846016LL;

    t75 = (x313^(x314^(x315/x316)));

    if (t75 != 9223372036837866487LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x317 = -1;
	uint32_t x318 = 35317562U;
	static uint64_t x319 = 56348350494LLU;
	static int16_t x320 = INT16_MIN;

    t76 = (x317^(x318^(x319/x320)));

    if (t76 != 18446744073674234053LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x322 = UINT8_MAX;
	volatile int32_t x323 = INT32_MIN;
	uint32_t x324 = 469U;
	uint32_t t77 = 9443U;

    t77 = (x321^(x322^(x323/x324)));

    if (t77 != 6486292U) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x326 = -1003;
	static volatile int8_t x327 = -1;
	static int32_t x328 = INT32_MIN;
	static int32_t t78 = 97409;

    t78 = (x325^(x326^(x327/x328)));

    if (t78 != -1008) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x329 = 31577U;
	int16_t x330 = INT16_MAX;
	volatile int32_t x331 = -1;
	uint8_t x332 = 43U;
	uint32_t t79 = 2674716U;

    t79 = (x329^(x330^(x331/x332)));

    if (t79 != 1190U) { NG(); } else { ; }
	
}

void f80(void) {
    	static int32_t x334 = INT32_MAX;
	static int64_t x335 = 742319289010LL;
	int8_t x336 = -1;
	volatile int64_t t80 = 53689920606LL;

    t80 = (x333^(x334^(x335/x336)));

    if (t80 != 741591911758LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x338 = INT8_MIN;
	volatile int8_t x339 = INT8_MIN;
	uint32_t t81 = 279278244U;

    t81 = (x337^(x338^(x339/x340)));

    if (t81 != 4285406975U) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x341 = INT64_MIN;
	uint64_t x342 = UINT64_MAX;
	static int32_t x343 = INT32_MIN;
	static int32_t x344 = 1494;
	static uint64_t t82 = 1LLU;

    t82 = (x341^(x342^(x343/x344)));

    if (t82 != 9223372036856213212LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x345 = INT8_MIN;
	uint64_t x346 = UINT64_MAX;
	uint8_t x347 = 9U;

    t83 = (x345^(x346^(x347/x348)));

    if (t83 != 127LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x349 = INT16_MAX;
	static int32_t x350 = 246780889;
	static uint64_t x351 = 8674889650061493LLU;
	volatile int16_t x352 = -1003;
	volatile uint64_t t84 = 49958LLU;

    t84 = (x349^(x350^(x351/x352)));

    if (t84 != 246803494LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x353 = 1013U;
	uint32_t x354 = 517617U;
	static uint32_t x355 = 757425708U;
	uint32_t t85 = 0U;

    t85 = (x353^(x354^(x355/x356)));

    if (t85 != 517636U) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x357 = -1LL;
	volatile int32_t x360 = -1;
	int64_t t86 = -3984256538665829LL;

    t86 = (x357^(x358^(x359/x360)));

    if (t86 != 109578624142928LL) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint16_t x362 = 0U;
	int8_t x363 = -1;
	int16_t x364 = INT16_MIN;
	int32_t t87 = 753982544;

    t87 = (x361^(x362^(x363/x364)));

    if (t87 != 255) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x365 = -1;
	int8_t x367 = -13;
	int16_t x368 = INT16_MAX;
	int32_t t88 = 8138;

    t88 = (x365^(x366^(x367/x368)));

    if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x369 = INT64_MAX;
	int16_t x370 = -3;
	volatile int32_t x372 = INT32_MIN;

    t89 = (x369^(x370^(x371/x372)));

    if (t89 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x373 = -32545697LL;
	uint32_t x374 = UINT32_MAX;
	int64_t x375 = INT64_MIN;
	int8_t x376 = INT8_MIN;
	volatile int64_t t90 = 32502LL;

    t90 = (x373^(x374^(x375/x376)));

    if (t90 != -72057598300349536LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x377 = -1;
	int32_t x378 = 652;
	static uint32_t t91 = 8261U;

    t91 = (x377^(x378^(x379/x380)));

    if (t91 != 4294966643U) { NG(); } else { ; }
	
}

void f92(void) {
    	static int64_t x381 = -1LL;
	uint64_t x383 = 5447098469LLU;

    t92 = (x381^(x382^(x383/x384)));

    if (t92 != 32767LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x385 = INT64_MIN;
	static int16_t x386 = 566;
	volatile uint16_t x387 = 15U;
	int16_t x388 = -1;
	volatile int64_t t93 = -4303308302833203238LL;

    t93 = (x385^(x386^(x387/x388)));

    if (t93 != 9223372036854775239LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x389 = 36;
	int32_t x391 = -55358055;
	volatile int8_t x392 = -28;

    t94 = (x389^(x390^(x391/x392)));

    if (t94 != 4292990250U) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x393 = -1;
	int8_t x394 = -1;
	int8_t x395 = INT8_MAX;
	uint8_t x396 = 75U;
	volatile int32_t t95 = -418615741;

    t95 = (x393^(x394^(x395/x396)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x398 = -1;
	uint16_t x399 = UINT16_MAX;

    t96 = (x397^(x398^(x399/x400)));

    if (t96 != 65408) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x401 = INT64_MAX;
	int16_t x402 = -1;
	int32_t x403 = -1;
	volatile int64_t t97 = INT64_MIN;

    t97 = (x401^(x402^(x403/x404)));

    if (t97 != INT64_MIN) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x406 = -1;
	int64_t x407 = INT64_MIN;
	uint8_t x408 = UINT8_MAX;

    t98 = (x405^(x406^(x407/x408)));

    if (t98 != 36170086419038335LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x409 = INT32_MIN;
	uint64_t x411 = 6388222739635LLU;
	uint32_t x412 = 1U;
	volatile uint64_t t99 = 616386114503LLU;

    t99 = (x409^(x410^(x411/x412)));

    if (t99 != 6387157484723LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x413 = UINT32_MAX;
	volatile int32_t x414 = 30143;
	int64_t x415 = -1LL;
	volatile int64_t t100 = -1035298242026824LL;

    t100 = (x413^(x414^(x415/x416)));

    if (t100 != 4294937152LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x417 = INT64_MIN;
	int64_t x419 = INT64_MAX;
	volatile int16_t x420 = INT16_MAX;
	volatile int64_t t101 = 459002974LL;

    t101 = (x417^(x418^(x419/x420)));

    if (t101 != 9223090553287835656LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x421 = 123U;
	int64_t x422 = INT64_MIN;
	volatile uint64_t x423 = UINT64_MAX;
	volatile int16_t x424 = -172;
	volatile uint64_t t102 = 6400LLU;

    t102 = (x421^(x422^(x423/x424)));

    if (t102 != 9223372036854775930LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x425 = 20202515951921808LLU;
	static int16_t x428 = -1;
	uint64_t t103 = 99LLU;

    t103 = (x425^(x426^(x427/x428)));

    if (t103 != 20202515951921810LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint32_t x429 = 37924U;
	int16_t x430 = INT16_MIN;
	int16_t x431 = -1;
	static int32_t x432 = -1706340;

    t104 = (x429^(x430^(x431/x432)));

    if (t104 != 4294906916U) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x433 = UINT16_MAX;
	int64_t x434 = 45LL;
	volatile int16_t x435 = -8;
	uint16_t x436 = 148U;
	volatile int64_t t105 = 13191LL;

    t105 = (x433^(x434^(x435/x436)));

    if (t105 != 65490LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x437 = 738039LL;
	static int8_t x438 = INT8_MIN;
	uint16_t x439 = 15U;
	int8_t x440 = -1;
	volatile int64_t t106 = -31835527563099LL;

    t106 = (x437^(x438^(x439/x440)));

    if (t106 != 737926LL) { NG(); } else { ; }
	
}

void f107(void) {
    

    t107 = (x441^(x442^(x443/x444)));

    if (t107 != 22644877LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x446 = UINT16_MAX;
	int16_t x447 = INT16_MIN;
	int8_t x448 = -1;

    t108 = (x445^(x446^(x447/x448)));

    if (t108 != -32641) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x449 = 3;
	uint64_t x450 = 8436763710LLU;
	static volatile uint64_t t109 = 21LLU;

    t109 = (x449^(x450^(x451/x452)));

    if (t109 != 18446744065272787906LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x453 = INT64_MIN;
	uint16_t x454 = 444U;
	int32_t x455 = -1;
	int16_t x456 = 55;

    t110 = (x453^(x454^(x455/x456)));

    if (t110 != -9223372036854775364LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static int16_t x458 = -1;
	int32_t x459 = INT32_MIN;
	volatile uint8_t x460 = 10U;
	int64_t t111 = -6LL;

    t111 = (x457^(x458^(x459/x460)));

    if (t111 != 9223372036640027444LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static int64_t x461 = -1LL;
	uint16_t x462 = UINT16_MAX;
	int32_t x463 = INT32_MAX;
	volatile int64_t x464 = INT64_MIN;

    t112 = (x461^(x462^(x463/x464)));

    if (t112 != -65536LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x465 = INT8_MIN;
	uint32_t x466 = UINT32_MAX;
	volatile int8_t x468 = INT8_MIN;

    t113 = (x465^(x466^(x467/x468)));

    if (t113 != 18446744069414584447LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int32_t x470 = -366213;
	uint32_t x471 = 14570572U;
	volatile uint16_t x472 = 22U;
	volatile uint32_t t114 = 82U;

    t114 = (x469^(x470^(x471/x472)));

    if (t114 != 2148502942U) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x473 = -2957400LL;
	static int32_t x474 = -6808881;
	uint64_t x475 = UINT64_MAX;
	volatile int32_t x476 = INT32_MIN;
	uint64_t t115 = 2099157706LLU;

    t115 = (x473^(x474^(x475/x476)));

    if (t115 != 4900198LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x477 = INT8_MIN;
	int8_t x479 = -1;
	static volatile int32_t t116 = 1147;

    t116 = (x477^(x478^(x479/x480)));

    if (t116 != 2147483520) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x481 = INT16_MAX;
	int8_t x482 = INT8_MIN;
	static volatile int64_t x483 = INT64_MIN;
	int64_t t117 = -6392LL;

    t117 = (x481^(x482^(x483/x484)));

    if (t117 != 153722867280928161LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile int64_t x485 = -1LL;
	int64_t x488 = INT64_MAX;
	volatile int64_t t118 = 4219056998760LL;

    t118 = (x485^(x486^(x487/x488)));

    if (t118 != -32768LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x490 = 140176085533390LLU;
	int8_t x491 = INT8_MIN;
	int16_t x492 = -1;
	uint64_t t119 = 3LLU;

    t119 = (x489^(x490^(x491/x492)));

    if (t119 != 18446603897952322126LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int64_t x494 = 420372420LL;
	uint16_t x495 = UINT16_MAX;
	int8_t x496 = -1;
	volatile uint64_t t120 = 6386002491LLU;

    t120 = (x493^(x494^(x495/x496)));

    if (t120 != 18446744072867680988LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x498 = INT16_MIN;
	static int64_t x499 = INT64_MAX;
	int8_t x500 = INT8_MAX;

    t121 = (x497^(x498^(x499/x500)));

    if (t121 != -72624976668147583LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x501 = UINT8_MAX;
	uint32_t x502 = UINT32_MAX;
	static uint32_t x503 = UINT32_MAX;
	int8_t x504 = 1;
	uint32_t t122 = 51479070U;

    t122 = (x501^(x502^(x503/x504)));

    if (t122 != 255U) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x505 = INT16_MIN;
	uint64_t t123 = 6856357792652741LLU;

    t123 = (x505^(x506^(x507/x508)));

    if (t123 != 12387344653LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x509 = UINT32_MAX;
	int8_t x510 = 18;
	static int64_t x511 = 61819203LL;
	int64_t x512 = INT64_MIN;
	volatile int64_t t124 = -5529885LL;

    t124 = (x509^(x510^(x511/x512)));

    if (t124 != 4294967277LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x513 = -1;
	uint8_t x514 = 2U;
	int16_t x515 = -1;
	int64_t t125 = 295552954061LL;

    t125 = (x513^(x514^(x515/x516)));

    if (t125 != -4LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x519 = -6332046;
	static int64_t t126 = 34LL;

    t126 = (x517^(x518^(x519/x520)));

    if (t126 != 1492650833273LL) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x522 = INT8_MIN;
	int64_t x523 = INT64_MAX;
	static int16_t x524 = -1;
	volatile int64_t t127 = -855596931768070LL;

    t127 = (x521^(x522^(x523/x524)));

    if (t127 != 9223372036854710398LL) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int8_t x526 = INT8_MIN;
	uint64_t x527 = 1782159439419220LLU;
	uint64_t x528 = UINT64_MAX;
	volatile uint64_t t128 = 18405845LLU;

    t128 = (x525^(x526^(x527/x528)));

    if (t128 != 127LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x529 = 28U;
	static int16_t x531 = INT16_MIN;
	static int8_t x532 = INT8_MIN;
	volatile uint32_t t129 = 139564917U;

    t129 = (x529^(x530^(x531/x532)));

    if (t129 != 4294967011U) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x534 = 270LL;
	int64_t x535 = 6890860104167LL;
	int64_t t130 = -10072563LL;

    t130 = (x533^(x534^(x535/x536)));

    if (t130 != -9223370888378091531LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x537 = UINT8_MAX;
	uint16_t x538 = 7603U;
	int8_t x539 = INT8_MIN;

    t131 = (x537^(x538^(x539/x540)));

    if (t131 != -7501) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint16_t x541 = 6505U;
	uint8_t x542 = 23U;
	uint32_t x543 = 26555101U;
	uint8_t x544 = UINT8_MAX;
	uint32_t t132 = 794268U;

    t132 = (x541^(x542^(x543/x544)));

    if (t132 != 102327U) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x545 = INT16_MAX;
	static uint32_t x547 = UINT32_MAX;
	uint32_t x548 = 3U;
	volatile uint32_t t133 = 394217U;

    t133 = (x545^(x546^(x547/x548)));

    if (t133 != 1431644976U) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x552 = INT16_MIN;
	volatile int64_t t134 = 3976583219237142LL;

    t134 = (x549^(x550^(x551/x552)));

    if (t134 != 95LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x553 = 23;
	int8_t x554 = INT8_MAX;
	int32_t t135 = 620996;

    t135 = (x553^(x554^(x555/x556)));

    if (t135 != 104) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x557 = INT8_MAX;
	int8_t x558 = -8;
	int64_t x560 = -1LL;
	int64_t t136 = -269226399560670178LL;

    t136 = (x557^(x558^(x559/x560)));

    if (t136 != 124743268796117193LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x561 = -1;
	int8_t x562 = INT8_MIN;
	volatile int32_t x563 = INT32_MIN;
	int64_t x564 = INT64_MAX;
	volatile int64_t t137 = -24350672602LL;

    t137 = (x561^(x562^(x563/x564)));

    if (t137 != 127LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x565 = 67069511U;
	uint16_t x566 = UINT16_MAX;
	int32_t x567 = INT32_MIN;
	volatile uint64_t x568 = 268335197LLU;
	static volatile uint64_t t138 = 1942906710374365LLU;

    t138 = (x565^(x566^(x567/x568)));

    if (t138 != 68760916437LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x571 = INT8_MIN;
	uint32_t x572 = 105474281U;
	volatile uint32_t t139 = 90307U;

    t139 = (x569^(x570^(x571/x572)));

    if (t139 != 32680U) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint64_t x573 = 21131LLU;
	uint32_t x574 = 2381U;
	int32_t x575 = INT32_MIN;
	uint8_t x576 = UINT8_MAX;
	volatile uint64_t t140 = 114LLU;

    t140 = (x573^(x574^(x575/x576)));

    if (t140 != 4286522438LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint8_t x577 = 11U;
	uint32_t x578 = 43103032U;
	uint8_t x579 = UINT8_MAX;
	uint32_t t141 = 111968735U;

    t141 = (x577^(x578^(x579/x580)));

    if (t141 != 43103027U) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x581 = -256274155908LL;
	static int16_t x582 = -5238;
	uint64_t x584 = UINT64_MAX;

    t142 = (x581^(x582^(x583/x584)));

    if (t142 != 256274161143LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint8_t x585 = UINT8_MAX;
	int16_t x586 = INT16_MIN;
	static int8_t x587 = INT8_MIN;
	int32_t t143 = -36348521;

    t143 = (x585^(x586^(x587/x588)));

    if (t143 != -32513) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x589 = 137LLU;
	int32_t x590 = -65202;
	uint8_t x591 = 50U;
	uint64_t t144 = 10LLU;

    t144 = (x589^(x590^(x591/x592)));

    if (t144 != 18446744073709486535LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x595 = UINT64_MAX;
	uint64_t t145 = 517012328609871LLU;

    t145 = (x593^(x594^(x595/x596)));

    if (t145 != 18446181106575736785LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x597 = UINT16_MAX;
	volatile int32_t x598 = -1;
	uint64_t x600 = UINT64_MAX;

    t146 = (x597^(x598^(x599/x600)));

    if (t146 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x601 = INT8_MIN;
	static uint32_t x602 = 705U;
	static int16_t x603 = INT16_MAX;
	int8_t x604 = INT8_MAX;
	volatile uint32_t t147 = 98611392U;

    t147 = (x601^(x602^(x603/x604)));

    if (t147 != 4294966339U) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int64_t x607 = -73342116490830LL;
	volatile int64_t t148 = 123928593LL;

    t148 = (x605^(x606^(x607/x608)));

    if (t148 != 572985285044LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x609 = 10U;
	int32_t x610 = -1;
	int64_t x611 = INT64_MIN;
	volatile int64_t t149 = 0LL;

    t149 = (x609^(x610^(x611/x612)));

    if (t149 != -281474976710667LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static int16_t x613 = INT16_MIN;
	uint8_t x614 = 1U;
	int32_t x616 = -24;
	int64_t t150 = -209375LL;

    t150 = (x613^(x614^(x615/x616)));

    if (t150 != -3351504595LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x618 = 995U;
	uint16_t x619 = 0U;
	static int64_t x620 = 320406487LL;
	volatile int64_t t151 = 17837811190505LL;

    t151 = (x617^(x618^(x619/x620)));

    if (t151 != -9223372036854774813LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint32_t x621 = 183513215U;
	int64_t x623 = -1LL;
	uint64_t x624 = 309287174161031476LLU;
	uint64_t t152 = 32262702005636LLU;

    t152 = (x621^(x622^(x623/x624)));

    if (t152 != 183513155LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint32_t x625 = UINT32_MAX;
	uint16_t x627 = UINT16_MAX;
	int64_t x628 = INT64_MIN;
	volatile int64_t t153 = 1256305549331LL;

    t153 = (x625^(x626^(x627/x628)));

    if (t153 != 4294967168LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x629 = -3;
	uint16_t x631 = 44U;

    t154 = (x629^(x630^(x631/x632)));

    if (t154 != -5) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int16_t x634 = -3586;
	int8_t x636 = -1;

    t155 = (x633^(x634^(x635/x636)));

    if (t155 != -3591) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x637 = UINT64_MAX;
	uint64_t x638 = UINT64_MAX;
	uint64_t x639 = 602144LLU;
	int8_t x640 = INT8_MIN;
	uint64_t t156 = 185758145LLU;

    t156 = (x637^(x638^(x639/x640)));

    if (t156 != 0LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x641 = INT8_MIN;
	int16_t x642 = INT16_MIN;
	static int8_t x643 = INT8_MIN;
	int8_t x644 = INT8_MIN;
	int32_t t157 = -11946;

    t157 = (x641^(x642^(x643/x644)));

    if (t157 != 32641) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x645 = 1824792;
	int32_t x646 = 3922146;
	uint16_t x647 = 282U;
	volatile int16_t x648 = INT16_MIN;
	int32_t t158 = 17;

    t158 = (x645^(x646^(x647/x648)));

    if (t158 != 2097402) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x649 = 159637LL;
	int16_t x650 = INT16_MAX;
	static int64_t x652 = INT64_MAX;
	int64_t t159 = 996LL;

    t159 = (x649^(x650^(x651/x652)));

    if (t159 != 135274LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x653 = INT8_MIN;
	volatile int16_t x654 = INT16_MAX;
	volatile uint64_t x655 = 215236553LLU;
	uint64_t x656 = 981172983098LLU;
	uint64_t t160 = 110829505237432085LLU;

    t160 = (x653^(x654^(x655/x656)));

    if (t160 != 18446744073709518975LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x657 = -1;
	int8_t x658 = -1;
	volatile uint32_t x659 = UINT32_MAX;
	int8_t x660 = -1;
	volatile uint32_t t161 = 294002876U;

    t161 = (x657^(x658^(x659/x660)));

    if (t161 != 1U) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x661 = INT8_MIN;
	int64_t x663 = 3432604592LL;
	int64_t x664 = -13855LL;
	volatile int64_t t162 = -268LL;

    t162 = (x661^(x662^(x663/x664)));

    if (t162 != -247350LL) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int32_t x665 = -687135537;
	int16_t x666 = 0;
	int32_t x667 = INT32_MAX;
	uint64_t x668 = 676592627LLU;
	volatile uint64_t t163 = 4LLU;

    t163 = (x665^(x666^(x667/x668)));

    if (t163 != 18446744073022416076LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	static int64_t x673 = -1LL;
	uint8_t x674 = UINT8_MAX;
	uint16_t x675 = 415U;

    t164 = (x673^(x674^(x675/x676)));

    if (t164 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint8_t x677 = 0U;
	int16_t x678 = INT16_MIN;
	static int32_t x679 = -1;
	uint8_t x680 = 8U;

    t165 = (x677^(x678^(x679/x680)));

    if (t165 != -32768) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x681 = UINT64_MAX;
	uint32_t x682 = 3205U;
	uint8_t x683 = UINT8_MAX;
	int32_t x684 = INT32_MIN;
	static volatile uint64_t t166 = 206LLU;

    t166 = (x681^(x682^(x683/x684)));

    if (t166 != 18446744073709548410LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x685 = INT16_MIN;
	uint64_t x686 = 383008763958548LLU;
	static volatile uint8_t x687 = 0U;
	int8_t x688 = -1;

    t167 = (x685^(x686^(x687/x688)));

    if (t167 != 18446361064945603860LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x689 = 1207218;
	static volatile int32_t x690 = INT32_MAX;
	volatile uint16_t x691 = UINT16_MAX;
	volatile int64_t x692 = INT64_MIN;
	int64_t t168 = 0LL;

    t168 = (x689^(x690^(x691/x692)));

    if (t168 != 2146276429LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x693 = -1;
	static uint16_t x695 = UINT16_MAX;
	volatile int32_t x696 = -1;
	int32_t t169 = -26433236;

    t169 = (x693^(x694^(x695/x696)));

    if (t169 != 65533) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint16_t x697 = 872U;
	static uint8_t x698 = 49U;
	int16_t x699 = -3252;
	int32_t x700 = INT32_MAX;
	int32_t t170 = -5;

    t170 = (x697^(x698^(x699/x700)));

    if (t170 != 857) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint16_t x701 = 2U;
	static uint8_t x702 = 86U;
	int8_t x703 = INT8_MAX;
	int64_t x704 = -2055LL;
	int64_t t171 = -122967594LL;

    t171 = (x701^(x702^(x703/x704)));

    if (t171 != 84LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x705 = -1;
	int32_t x707 = 102897;
	volatile int16_t x708 = INT16_MIN;
	int32_t t172 = -20646;

    t172 = (x705^(x706^(x707/x708)));

    if (t172 != 12) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x709 = -1;
	volatile uint64_t x710 = 169071976635LLU;
	volatile int32_t x711 = -1;
	static int32_t x712 = INT32_MIN;
	static volatile uint64_t t173 = 395LLU;

    t173 = (x709^(x710^(x711/x712)));

    if (t173 != 18446743904637574980LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x713 = INT8_MAX;
	int16_t x714 = INT16_MIN;
	volatile int16_t x715 = INT16_MAX;
	int64_t x716 = -1LL;

    t174 = (x713^(x714^(x715/x716)));

    if (t174 != 126LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x721 = 65772636367LLU;
	static uint32_t x722 = UINT32_MAX;
	volatile uint64_t x723 = 1073841782176LLU;
	uint64_t x724 = 5188LLU;

    t175 = (x721^(x722^(x723/x724)));

    if (t175 != 67175149294LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x725 = INT16_MIN;
	uint16_t x726 = UINT16_MAX;
	static int32_t x727 = INT32_MIN;
	int8_t x728 = INT8_MIN;
	static volatile int32_t t176 = 48810;

    t176 = (x725^(x726^(x727/x728)));

    if (t176 != -16809985) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x729 = -1;
	int32_t x730 = -616316;
	uint32_t x731 = 37U;
	volatile int64_t x732 = -1LL;

    t177 = (x729^(x730^(x731/x732)));

    if (t177 != -616288LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x733 = 930105690LL;
	volatile uint16_t x735 = UINT16_MAX;
	int64_t x736 = INT64_MIN;
	int64_t t178 = -18880676628LL;

    t178 = (x733^(x734^(x735/x736)));

    if (t178 != -1025513765481946648LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x737 = INT64_MIN;
	static uint16_t x738 = 12U;
	int8_t x739 = INT8_MIN;
	volatile int16_t x740 = INT16_MAX;
	volatile int64_t t179 = -210412132690761LL;

    t179 = (x737^(x738^(x739/x740)));

    if (t179 != -9223372036854775796LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x742 = 0;
	uint16_t x743 = 0U;
	uint8_t x744 = 11U;
	volatile int32_t t180 = 278;

    t180 = (x741^(x742^(x743/x744)));

    if (t180 != -1) { NG(); } else { ; }
	
}

void f181(void) {
    	static int8_t x745 = INT8_MAX;
	volatile int64_t x746 = -1LL;
	uint8_t x747 = UINT8_MAX;
	int8_t x748 = INT8_MAX;
	int64_t t181 = 407313015486LL;

    t181 = (x745^(x746^(x747/x748)));

    if (t181 != -126LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint64_t x749 = 10388355721165LLU;
	static volatile int32_t x750 = 235401791;
	uint8_t x752 = 5U;
	static uint64_t t182 = 5456834666852LLU;

    t182 = (x749^(x750^(x751/x752)));

    if (t182 != 18446733685561570197LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x753 = 14U;
	int64_t x754 = -1LL;
	static int8_t x755 = -16;
	static int64_t x756 = INT64_MIN;
	volatile int64_t t183 = -3086239LL;

    t183 = (x753^(x754^(x755/x756)));

    if (t183 != -15LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x757 = 3308;
	volatile uint64_t x758 = 10369449LLU;
	static uint8_t x760 = UINT8_MAX;

    t184 = (x757^(x758^(x759/x760)));

    if (t184 != 10368325LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x761 = UINT32_MAX;
	int16_t x762 = INT16_MIN;
	static volatile uint32_t t185 = 0U;

    t185 = (x761^(x762^(x763/x764)));

    if (t185 != 32767U) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x766 = INT16_MIN;
	int8_t x768 = INT8_MIN;
	volatile int32_t t186 = 1905;

    t186 = (x765^(x766^(x767/x768)));

    if (t186 != -2147451135) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x769 = INT16_MIN;
	int64_t x770 = INT64_MIN;
	int64_t x772 = INT64_MIN;
	static int64_t t187 = -326094810749LL;

    t187 = (x769^(x770^(x771/x772)));

    if (t187 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x773 = INT8_MAX;
	uint64_t x774 = 1320462108LLU;
	static int16_t x775 = INT16_MIN;
	uint8_t x776 = 2U;
	uint64_t t188 = 153675043827815LLU;

    t188 = (x773^(x774^(x775/x776)));

    if (t188 != 18446744072389093219LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile int16_t x777 = INT16_MIN;
	static int16_t x779 = INT16_MIN;
	int32_t t189 = 1895203;

    t189 = (x777^(x778^(x779/x780)));

    if (t189 != -2147450891) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x781 = INT64_MIN;
	int64_t x782 = -1LL;
	static int8_t x783 = INT8_MAX;
	volatile uint64_t t190 = 10928965510994195LLU;

    t190 = (x781^(x782^(x783/x784)));

    if (t190 != 9223372036854775786LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x785 = INT16_MAX;
	int64_t x786 = -1LL;
	int32_t x787 = -3;
	static int32_t x788 = INT32_MIN;
	volatile int64_t t191 = -1777018LL;

    t191 = (x785^(x786^(x787/x788)));

    if (t191 != -32768LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x789 = INT8_MIN;
	static int32_t x792 = -1;

    t192 = (x789^(x790^(x791/x792)));

    if (t192 != 32664LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x794 = -71973;
	volatile uint8_t x796 = 123U;
	uint64_t t193 = 873595LLU;

    t193 = (x793^(x794^(x795/x796)));

    if (t193 != 2075836449551LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x800 = -1;
	static uint64_t t194 = 1085902284173928575LLU;

    t194 = (x797^(x798^(x799/x800)));

    if (t194 != 32766LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x801 = INT8_MIN;
	int16_t x802 = 168;
	static int32_t x803 = -230;
	volatile uint16_t x804 = 716U;
	static volatile int32_t t195 = 0;

    t195 = (x801^(x802^(x803/x804)));

    if (t195 != -216) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint8_t x805 = UINT8_MAX;
	uint16_t x807 = 9U;
	volatile int64_t t196 = 44LL;

    t196 = (x805^(x806^(x807/x808)));

    if (t196 != 9223372036854775560LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x809 = INT8_MAX;
	uint64_t x810 = UINT64_MAX;
	static volatile int16_t x811 = -1;
	volatile int8_t x812 = INT8_MAX;

    t197 = (x809^(x810^(x811/x812)));

    if (t197 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x813 = UINT8_MAX;
	int8_t x814 = -1;
	uint16_t x815 = 14U;
	volatile int64_t x816 = INT64_MIN;
	volatile int64_t t198 = 57877261419577LL;

    t198 = (x813^(x814^(x815/x816)));

    if (t198 != -256LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x817 = INT16_MIN;
	static uint32_t x818 = 1279978U;
	int32_t x819 = -1;
	uint8_t x820 = 27U;

    t199 = (x817^(x818^(x819/x820)));

    if (t199 != 4293658602U) { NG(); } else { ; }
	
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

