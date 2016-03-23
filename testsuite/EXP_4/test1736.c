
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

uint8_t x10 = 7U;
uint8_t x15 = 37U;
uint32_t x17 = 0U;
int64_t x25 = -25480687LL;
int32_t x31 = 127;
uint8_t x33 = 7U;
int64_t x38 = INT64_MIN;
int8_t x40 = 1;
volatile int32_t t11 = -5;
volatile int8_t x58 = -1;
uint16_t x59 = UINT16_MAX;
static int16_t x70 = INT16_MIN;
volatile int16_t x74 = -1;
int32_t t19 = 0;
volatile uint64_t x83 = 5LLU;
int32_t x84 = -1;
int64_t t20 = -4LL;
static uint8_t x94 = 1U;
int32_t x96 = INT32_MIN;
int32_t x101 = -26258;
uint16_t x102 = 471U;
static int16_t x106 = 1357;
int16_t x108 = -2611;
volatile int32_t t26 = -18;
static int32_t x110 = INT32_MIN;
volatile int16_t x111 = INT16_MIN;
uint16_t x115 = 902U;
volatile int32_t t29 = -6204;
static uint32_t t30 = 218785858U;
static int64_t x126 = INT64_MIN;
int16_t x128 = -90;
volatile int16_t x130 = -1;
uint16_t x131 = 16918U;
uint64_t x133 = 315410888228LLU;
uint32_t x134 = 7U;
int16_t x135 = -51;
int32_t x142 = -25651;
volatile uint64_t t35 = 5739755752LLU;
int32_t x145 = INT32_MIN;
volatile int32_t t37 = INT32_MIN;
int8_t x155 = 0;
static uint16_t x160 = UINT16_MAX;
int32_t x161 = 3420;
int16_t x166 = -1;
int16_t x169 = INT16_MIN;
uint32_t x171 = 148U;
volatile uint32_t x179 = UINT32_MAX;
static volatile int64_t x182 = INT64_MIN;
static volatile uint64_t x186 = 15032LLU;
int16_t x188 = INT16_MIN;
static uint64_t x192 = 298133LLU;
volatile uint8_t x193 = 0U;
volatile uint64_t x195 = UINT64_MAX;
volatile int8_t x197 = INT8_MIN;
int64_t x200 = INT64_MAX;
int32_t x202 = INT32_MAX;
volatile uint64_t t50 = 6375406LLU;
volatile int32_t x206 = -1;
uint16_t x210 = 26U;
int8_t x218 = INT8_MAX;
int64_t x221 = INT64_MIN;
volatile int64_t t55 = 239LL;
static uint64_t t56 = 1LLU;
uint8_t x231 = UINT8_MAX;
volatile int64_t x233 = -117126242LL;
static uint64_t x237 = UINT64_MAX;
static volatile uint64_t t63 = 43LLU;
int32_t x267 = 214560541;
volatile int64_t x268 = INT64_MIN;
static int32_t x275 = -1;
int8_t x277 = INT8_MIN;
int32_t x282 = INT32_MAX;
int64_t t74 = 404584496855335653LL;
int64_t t75 = -135630676367363LL;
int16_t x310 = 13;
uint8_t x313 = 60U;
int32_t t78 = -132327216;
static uint64_t x317 = 1LLU;
int64_t x320 = INT64_MIN;
static volatile uint16_t x321 = 4U;
uint16_t x327 = 1409U;
uint16_t x328 = UINT16_MAX;
uint32_t x330 = 434036048U;
int8_t x332 = INT8_MAX;
int8_t x333 = -26;
int32_t x335 = INT32_MIN;
int8_t x336 = INT8_MIN;
int32_t x338 = INT32_MIN;
int64_t x339 = INT64_MIN;
int32_t x346 = 579665;
int64_t t87 = -15034915609332LL;
static int16_t x353 = INT16_MAX;
uint32_t x354 = 649316774U;
uint8_t x355 = 102U;
static volatile int64_t x360 = INT64_MIN;
uint64_t x363 = UINT64_MAX;
volatile int32_t x365 = INT32_MIN;
int32_t t91 = INT32_MIN;
volatile uint64_t t92 = 7LLU;
volatile uint32_t x374 = 1519767918U;
volatile int16_t x377 = INT16_MAX;
static volatile int32_t x382 = -507;
volatile int64_t x388 = 737999479327LL;
static int64_t x392 = INT64_MIN;
static int64_t x399 = 3487295626388238LL;
int8_t x400 = INT8_MAX;
static int32_t x408 = -44751;
static uint32_t x414 = 217799991U;
int32_t x415 = INT32_MAX;
int8_t x418 = INT8_MAX;
volatile int64_t x423 = INT64_MAX;
volatile int32_t t105 = 0;
uint8_t x430 = 19U;
static volatile int8_t x431 = 1;
int16_t x435 = -6;
uint64_t t109 = UINT64_MAX;
int16_t x441 = -1783;
static int64_t x443 = 143LL;
int64_t x445 = INT64_MAX;
volatile int32_t x446 = INT32_MIN;
int64_t t111 = INT64_MAX;
int64_t x451 = -1LL;
volatile int64_t t113 = -139LL;
int64_t x462 = INT64_MAX;
uint32_t x468 = 581163U;
int64_t x469 = INT64_MIN;
int8_t x473 = -1;
uint16_t x477 = 19U;
static volatile uint64_t x479 = 38969LLU;
uint8_t x481 = 4U;
volatile int32_t t120 = -105448529;
static volatile int16_t x487 = -14;
static volatile uint32_t t121 = 104940U;
static int16_t x492 = INT16_MIN;
static volatile uint64_t x493 = 7807832619456636759LLU;
uint32_t t124 = 53U;
volatile int64_t t127 = 149993959776865LL;
int8_t x513 = INT8_MIN;
int32_t x527 = INT32_MIN;
int64_t x530 = INT64_MIN;
uint64_t x531 = 1583LLU;
uint8_t x533 = 21U;
int32_t x536 = 271678381;
int8_t x540 = -1;
int8_t x541 = INT8_MIN;
int32_t x550 = -62936129;
volatile int64_t x556 = INT64_MIN;
volatile int32_t x561 = INT32_MAX;
int8_t x563 = INT8_MIN;
int64_t x570 = -7784LL;
int64_t x584 = INT64_MIN;
int32_t x585 = -1;
volatile int32_t x586 = INT32_MIN;
volatile int32_t t146 = -139606572;
int32_t t147 = 37167;
uint32_t x596 = 0U;
volatile uint8_t x608 = 7U;
static uint64_t x612 = UINT64_MAX;
int32_t t152 = INT32_MAX;
static int8_t x613 = INT8_MAX;
int64_t x616 = 9169LL;
int8_t x628 = -1;
int16_t x631 = INT16_MIN;
uint32_t x634 = UINT32_MAX;
uint16_t x641 = 12929U;
uint64_t x643 = 311016063146735807LLU;
uint16_t x645 = 3536U;
static volatile int64_t x646 = -1LL;
int64_t t161 = 123430LL;
static uint64_t x649 = 51665473649LLU;
uint16_t x652 = 11302U;
int16_t x654 = INT16_MIN;
uint16_t x657 = 3U;
int8_t x661 = INT8_MAX;
int16_t x662 = -787;
volatile int32_t t165 = 6696029;
uint32_t x668 = 76U;
uint64_t t166 = 690230848953551195LLU;
volatile int8_t x672 = INT8_MAX;
uint64_t t169 = UINT64_MAX;
int8_t x681 = INT8_MAX;
int16_t x685 = 13;
int64_t x686 = INT64_MIN;
static volatile int8_t x687 = -32;
volatile uint16_t x689 = 12U;
int64_t x692 = -1LL;
volatile uint8_t x703 = 5U;
int64_t x710 = 533905585465LL;
volatile uint64_t t179 = 532989127LLU;
volatile int32_t x724 = INT32_MAX;
int16_t x725 = -1;
int8_t x729 = -1;
volatile int64_t t182 = 15106734LL;
uint8_t x734 = UINT8_MAX;
uint8_t x736 = UINT8_MAX;
volatile int64_t t183 = 1LL;
int16_t x743 = -1;
int32_t t185 = -108;
volatile int8_t x747 = INT8_MAX;
static int8_t x748 = INT8_MIN;
static volatile int32_t t187 = -7;
int64_t x756 = INT64_MAX;
int8_t x765 = 12;
uint32_t x766 = 3159U;
uint64_t x769 = UINT64_MAX;
int8_t x773 = INT8_MAX;
uint16_t x775 = 4216U;
volatile int16_t x778 = INT16_MIN;
volatile int32_t t194 = -19958;
uint16_t x788 = UINT16_MAX;
uint32_t x789 = 34724U;
int8_t x792 = INT8_MAX;
uint32_t t197 = 9928231U;
int16_t x798 = INT16_MAX;
int32_t x799 = INT32_MAX;
uint32_t x800 = 0U;


void f0(void) {
    	uint64_t x1 = 413838373649584LLU;
	uint64_t x2 = 1LLU;
	static int8_t x3 = INT8_MAX;
	int8_t x4 = 1;
	static uint64_t t0 = 1844LLU;

    t0 = (x1^(x2&(x3>x4)));

    if (t0 != 413838373649585LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x5 = INT32_MIN;
	volatile int64_t x6 = INT64_MIN;
	static int8_t x7 = -1;
	uint8_t x8 = 24U;
	int64_t t1 = -5070183544246LL;

    t1 = (x5^(x6&(x7>x8)));

    if (t1 != -2147483648LL) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x9 = INT8_MIN;
	int32_t x11 = -235;
	static volatile uint64_t x12 = 2LLU;
	int32_t t2 = 206;

    t2 = (x9^(x10&(x11>x12)));

    if (t2 != -127) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint16_t x13 = 3U;
	static uint16_t x14 = 174U;
	static volatile int32_t x16 = INT32_MIN;
	int32_t t3 = 6;

    t3 = (x13^(x14&(x15>x16)));

    if (t3 != 3) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int16_t x18 = INT16_MIN;
	int64_t x19 = INT64_MAX;
	uint8_t x20 = 116U;
	volatile uint32_t t4 = 42120641U;

    t4 = (x17^(x18&(x19>x20)));

    if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
    	static int32_t x21 = -446769;
	int16_t x22 = INT16_MAX;
	int32_t x23 = 0;
	volatile int16_t x24 = -1;
	int32_t t5 = 341216655;

    t5 = (x21^(x22&(x23>x24)));

    if (t5 != -446770) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x26 = UINT32_MAX;
	static int16_t x27 = INT16_MIN;
	volatile uint8_t x28 = 14U;
	int64_t t6 = -296129031369LL;

    t6 = (x25^(x26&(x27>x28)));

    if (t6 != -25480687LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = INT16_MIN;
	uint64_t x30 = 29216435637989703LLU;
	int8_t x32 = 1;
	uint64_t t7 = 4240481396LLU;

    t7 = (x29^(x30&(x31>x32)));

    if (t7 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x34 = 65U;
	uint8_t x35 = 3U;
	uint8_t x36 = 91U;
	int32_t t8 = 9;

    t8 = (x33^(x34&(x35>x36)));

    if (t8 != 7) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = INT8_MAX;
	uint64_t x39 = UINT64_MAX;
	static volatile int64_t t9 = 1584043LL;

    t9 = (x37^(x38&(x39>x40)));

    if (t9 != 127LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint8_t x41 = UINT8_MAX;
	uint16_t x42 = 119U;
	int64_t x43 = INT64_MIN;
	int8_t x44 = 0;
	int32_t t10 = 107;

    t10 = (x41^(x42&(x43>x44)));

    if (t10 != 255) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = 0;
	uint16_t x46 = 609U;
	static volatile uint8_t x47 = 3U;
	static volatile uint64_t x48 = 1001992793LLU;

    t11 = (x45^(x46&(x47>x48)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x49 = 9U;
	int16_t x50 = 0;
	uint16_t x51 = UINT16_MAX;
	static int16_t x52 = -1;
	int32_t t12 = 1414095;

    t12 = (x49^(x50&(x51>x52)));

    if (t12 != 9) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = INT16_MIN;
	uint16_t x54 = 4U;
	volatile int16_t x55 = INT16_MAX;
	int16_t x56 = INT16_MIN;
	int32_t t13 = -1897263;

    t13 = (x53^(x54&(x55>x56)));

    if (t13 != -32768) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x57 = 16364214U;
	volatile uint16_t x60 = UINT16_MAX;
	static volatile uint32_t t14 = 5123U;

    t14 = (x57^(x58&(x59>x60)));

    if (t14 != 16364214U) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = INT8_MIN;
	static int16_t x62 = -6108;
	int16_t x63 = INT16_MAX;
	int64_t x64 = INT64_MIN;
	volatile int32_t t15 = 162426979;

    t15 = (x61^(x62&(x63>x64)));

    if (t15 != -128) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = INT8_MAX;
	volatile int8_t x66 = 0;
	static int8_t x67 = -1;
	uint64_t x68 = UINT64_MAX;
	int32_t t16 = -31196777;

    t16 = (x65^(x66&(x67>x68)));

    if (t16 != 127) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x69 = -1;
	uint16_t x71 = 1273U;
	volatile int16_t x72 = -1499;
	int32_t t17 = -445;

    t17 = (x69^(x70&(x71>x72)));

    if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x73 = INT32_MIN;
	uint32_t x75 = UINT32_MAX;
	int8_t x76 = INT8_MIN;
	static int32_t t18 = 72928;

    t18 = (x73^(x74&(x75>x76)));

    if (t18 != -2147483647) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x77 = -1;
	static int16_t x78 = INT16_MIN;
	static int32_t x79 = INT32_MIN;
	volatile int8_t x80 = INT8_MAX;

    t19 = (x77^(x78&(x79>x80)));

    if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int64_t x81 = -1LL;
	uint32_t x82 = UINT32_MAX;

    t20 = (x81^(x82&(x83>x84)));

    if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int32_t x85 = -849830;
	int16_t x86 = INT16_MAX;
	int16_t x87 = 60;
	static int8_t x88 = -1;
	int32_t t21 = -1425;

    t21 = (x85^(x86&(x87>x88)));

    if (t21 != -849829) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = INT8_MIN;
	uint32_t x90 = UINT32_MAX;
	uint8_t x91 = 110U;
	uint8_t x92 = UINT8_MAX;
	uint32_t t22 = 3U;

    t22 = (x89^(x90&(x91>x92)));

    if (t22 != 4294967168U) { NG(); } else { ; }
	
}

void f23(void) {
    	static int64_t x93 = -6689045593LL;
	int32_t x95 = INT32_MIN;
	static int64_t t23 = -2011664557696LL;

    t23 = (x93^(x94&(x95>x96)));

    if (t23 != -6689045593LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int8_t x97 = INT8_MIN;
	int8_t x98 = INT8_MIN;
	uint16_t x99 = UINT16_MAX;
	volatile int16_t x100 = 1843;
	int32_t t24 = -26;

    t24 = (x97^(x98&(x99>x100)));

    if (t24 != -128) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint16_t x103 = 12U;
	volatile uint16_t x104 = 561U;
	int32_t t25 = -11638;

    t25 = (x101^(x102&(x103>x104)));

    if (t25 != -26258) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x105 = INT8_MIN;
	int32_t x107 = -1;

    t26 = (x105^(x106&(x107>x108)));

    if (t26 != -127) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint32_t x109 = 3894092U;
	int16_t x112 = INT16_MIN;
	volatile uint32_t t27 = 0U;

    t27 = (x109^(x110&(x111>x112)));

    if (t27 != 3894092U) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint16_t x113 = 85U;
	int32_t x114 = -1;
	int64_t x116 = -3714462149832086448LL;
	static volatile int32_t t28 = -4226;

    t28 = (x113^(x114&(x115>x116)));

    if (t28 != 84) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x117 = INT8_MIN;
	uint8_t x118 = 3U;
	static int64_t x119 = INT64_MIN;
	uint8_t x120 = UINT8_MAX;

    t29 = (x117^(x118&(x119>x120)));

    if (t29 != -128) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = -10502;
	uint32_t x122 = 106682324U;
	int64_t x123 = 44071120088688719LL;
	int8_t x124 = -1;

    t30 = (x121^(x122&(x123>x124)));

    if (t30 != 4294956794U) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint8_t x125 = UINT8_MAX;
	int64_t x127 = INT64_MIN;
	volatile int64_t t31 = -16LL;

    t31 = (x125^(x126&(x127>x128)));

    if (t31 != 255LL) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint8_t x129 = 7U;
	uint64_t x132 = 2692399243755LLU;
	int32_t t32 = -484;

    t32 = (x129^(x130&(x131>x132)));

    if (t32 != 7) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint16_t x136 = 4862U;
	static uint64_t t33 = 106876952LLU;

    t33 = (x133^(x134&(x135>x136)));

    if (t33 != 315410888228LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x137 = INT32_MIN;
	int8_t x138 = -1;
	uint8_t x139 = 52U;
	static uint8_t x140 = 1U;
	int32_t t34 = 608303;

    t34 = (x137^(x138&(x139>x140)));

    if (t34 != -2147483647) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x141 = 16165615LLU;
	static int64_t x143 = INT64_MIN;
	uint16_t x144 = 14366U;

    t35 = (x141^(x142&(x143>x144)));

    if (t35 != 16165615LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x146 = 7366472392631868LLU;
	uint8_t x147 = UINT8_MAX;
	int8_t x148 = INT8_MIN;
	static volatile uint64_t t36 = 548794802LLU;

    t36 = (x145^(x146&(x147>x148)));

    if (t36 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x149 = INT32_MIN;
	static uint8_t x150 = 109U;
	volatile uint8_t x151 = UINT8_MAX;
	int16_t x152 = 6013;

    t37 = (x149^(x150&(x151>x152)));

    if (t37 != INT32_MIN) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint8_t x153 = 20U;
	volatile uint64_t x154 = 63563668LLU;
	static int64_t x156 = -406283LL;
	uint64_t t38 = 3085765232380284569LLU;

    t38 = (x153^(x154&(x155>x156)));

    if (t38 != 20LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x157 = UINT8_MAX;
	int8_t x158 = INT8_MIN;
	int32_t x159 = -4217;
	volatile int32_t t39 = 15;

    t39 = (x157^(x158&(x159>x160)));

    if (t39 != 255) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x162 = UINT8_MAX;
	volatile uint64_t x163 = 546742112501029581LLU;
	volatile int16_t x164 = INT16_MIN;
	static volatile int32_t t40 = 0;

    t40 = (x161^(x162&(x163>x164)));

    if (t40 != 3420) { NG(); } else { ; }
	
}

void f41(void) {
    	static int8_t x165 = INT8_MAX;
	int32_t x167 = 16360713;
	volatile int16_t x168 = INT16_MAX;
	int32_t t41 = 450619911;

    t41 = (x165^(x166&(x167>x168)));

    if (t41 != 126) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x170 = INT16_MAX;
	int16_t x172 = INT16_MIN;
	volatile int32_t t42 = -3;

    t42 = (x169^(x170&(x171>x172)));

    if (t42 != -32768) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x173 = -1;
	static int64_t x174 = INT64_MIN;
	int8_t x175 = INT8_MIN;
	int8_t x176 = INT8_MIN;
	volatile int64_t t43 = 77596LL;

    t43 = (x173^(x174&(x175>x176)));

    if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int32_t x177 = INT32_MIN;
	int16_t x178 = INT16_MAX;
	int16_t x180 = -1;
	int32_t t44 = INT32_MIN;

    t44 = (x177^(x178&(x179>x180)));

    if (t44 != INT32_MIN) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x181 = INT32_MIN;
	int32_t x183 = -1;
	static int8_t x184 = INT8_MIN;
	int64_t t45 = -235585LL;

    t45 = (x181^(x182&(x183>x184)));

    if (t45 != -2147483648LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int16_t x185 = 19;
	uint32_t x187 = UINT32_MAX;
	volatile uint64_t t46 = 123618LLU;

    t46 = (x185^(x186&(x187>x188)));

    if (t46 != 19LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x189 = -10;
	int64_t x190 = -538875056748835519LL;
	int32_t x191 = -1;
	volatile int64_t t47 = -54LL;

    t47 = (x189^(x190&(x191>x192)));

    if (t47 != -9LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint8_t x194 = 100U;
	int64_t x196 = -4310106462212LL;
	int32_t t48 = 1647555;

    t48 = (x193^(x194&(x195>x196)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static int64_t x198 = INT64_MIN;
	static int8_t x199 = INT8_MAX;
	int64_t t49 = -1LL;

    t49 = (x197^(x198&(x199>x200)));

    if (t49 != -128LL) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint64_t x201 = 342094642809811060LLU;
	int32_t x203 = -1;
	static volatile int64_t x204 = 420914343959655487LL;

    t50 = (x201^(x202&(x203>x204)));

    if (t50 != 342094642809811060LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x205 = INT32_MIN;
	static int16_t x207 = -1;
	int32_t x208 = INT32_MIN;
	int32_t t51 = -8493;

    t51 = (x205^(x206&(x207>x208)));

    if (t51 != -2147483647) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x209 = 3U;
	int32_t x211 = INT32_MIN;
	int64_t x212 = -240884337017LL;
	static int32_t t52 = -53;

    t52 = (x209^(x210&(x211>x212)));

    if (t52 != 3) { NG(); } else { ; }
	
}

void f53(void) {
    	static int32_t x213 = INT32_MAX;
	int32_t x214 = INT32_MIN;
	int64_t x215 = 232119872088590131LL;
	uint32_t x216 = 3U;
	int32_t t53 = INT32_MAX;

    t53 = (x213^(x214&(x215>x216)));

    if (t53 != INT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x217 = -1;
	uint32_t x219 = UINT32_MAX;
	static int64_t x220 = INT64_MIN;
	volatile int32_t t54 = -180398;

    t54 = (x217^(x218&(x219>x220)));

    if (t54 != -2) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x222 = UINT8_MAX;
	uint8_t x223 = 20U;
	static int64_t x224 = INT64_MIN;

    t55 = (x221^(x222&(x223>x224)));

    if (t55 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x225 = INT8_MIN;
	uint64_t x226 = UINT64_MAX;
	uint64_t x227 = UINT64_MAX;
	static int8_t x228 = INT8_MAX;

    t56 = (x225^(x226&(x227>x228)));

    if (t56 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x229 = 42602328LLU;
	volatile int8_t x230 = INT8_MAX;
	volatile uint8_t x232 = 48U;
	uint64_t t57 = 1984260225913LLU;

    t57 = (x229^(x230&(x231>x232)));

    if (t57 != 42602329LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x234 = INT16_MAX;
	uint8_t x235 = UINT8_MAX;
	int32_t x236 = -46;
	static volatile int64_t t58 = 152428332515350LL;

    t58 = (x233^(x234&(x235>x236)));

    if (t58 != -117126241LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x238 = UINT8_MAX;
	static uint16_t x239 = 108U;
	volatile int16_t x240 = INT16_MIN;
	volatile uint64_t t59 = 1584780931236794LLU;

    t59 = (x237^(x238&(x239>x240)));

    if (t59 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int8_t x241 = INT8_MIN;
	int64_t x242 = -1LL;
	int64_t x243 = INT64_MIN;
	uint32_t x244 = 127398725U;
	static volatile int64_t t60 = 2587932440356537323LL;

    t60 = (x241^(x242&(x243>x244)));

    if (t60 != -128LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x245 = 944;
	int8_t x246 = INT8_MIN;
	int64_t x247 = INT64_MIN;
	int32_t x248 = -26740904;
	volatile int32_t t61 = -81452766;

    t61 = (x245^(x246&(x247>x248)));

    if (t61 != 944) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint16_t x249 = 6U;
	uint64_t x250 = 1081018317336559366LLU;
	uint16_t x251 = UINT16_MAX;
	static uint16_t x252 = UINT16_MAX;
	volatile uint64_t t62 = 3409309290728699LLU;

    t62 = (x249^(x250&(x251>x252)));

    if (t62 != 6LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint64_t x253 = 4346103261LLU;
	int8_t x254 = INT8_MIN;
	static int64_t x255 = INT64_MIN;
	int64_t x256 = INT64_MAX;

    t63 = (x253^(x254&(x255>x256)));

    if (t63 != 4346103261LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int16_t x257 = INT16_MAX;
	int64_t x258 = INT64_MIN;
	volatile int16_t x259 = INT16_MAX;
	volatile int64_t x260 = -1LL;
	int64_t t64 = -66647167LL;

    t64 = (x257^(x258&(x259>x260)));

    if (t64 != 32767LL) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint8_t x261 = 27U;
	int32_t x262 = INT32_MIN;
	int16_t x263 = -169;
	uint64_t x264 = 3987265947797595719LLU;
	int32_t t65 = -9132;

    t65 = (x261^(x262&(x263>x264)));

    if (t65 != 27) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x265 = 10U;
	uint8_t x266 = 1U;
	static int32_t t66 = -331970;

    t66 = (x265^(x266&(x267>x268)));

    if (t66 != 11) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x269 = -1LL;
	uint16_t x270 = 22577U;
	volatile int32_t x271 = INT32_MIN;
	int32_t x272 = -1;
	int64_t t67 = -29LL;

    t67 = (x269^(x270&(x271>x272)));

    if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x273 = INT16_MIN;
	int32_t x274 = INT32_MIN;
	volatile int32_t x276 = 15;
	volatile int32_t t68 = 11092;

    t68 = (x273^(x274&(x275>x276)));

    if (t68 != -32768) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint32_t x278 = 11U;
	uint32_t x279 = 820084U;
	int8_t x280 = -1;
	static volatile uint32_t t69 = 1084167199U;

    t69 = (x277^(x278&(x279>x280)));

    if (t69 != 4294967168U) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x281 = UINT16_MAX;
	uint8_t x283 = UINT8_MAX;
	int64_t x284 = INT64_MAX;
	static volatile int32_t t70 = 17;

    t70 = (x281^(x282&(x283>x284)));

    if (t70 != 65535) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x285 = 412201516;
	int16_t x286 = -1;
	int8_t x287 = INT8_MIN;
	int64_t x288 = 1832800LL;
	int32_t t71 = -81024;

    t71 = (x285^(x286&(x287>x288)));

    if (t71 != 412201516) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x289 = 43U;
	uint32_t x290 = UINT32_MAX;
	volatile int8_t x291 = 1;
	static uint8_t x292 = 19U;
	volatile uint32_t t72 = 268625582U;

    t72 = (x289^(x290&(x291>x292)));

    if (t72 != 43U) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile uint64_t x293 = 77540051847215LLU;
	static int8_t x294 = -1;
	int64_t x295 = INT64_MAX;
	static uint16_t x296 = 0U;
	uint64_t t73 = 321008736537402LLU;

    t73 = (x293^(x294&(x295>x296)));

    if (t73 != 77540051847214LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x297 = -1;
	static int64_t x298 = -1LL;
	uint64_t x299 = 852487755051899LLU;
	static uint16_t x300 = 14241U;

    t74 = (x297^(x298&(x299>x300)));

    if (t74 != -2LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x301 = INT8_MIN;
	int64_t x302 = INT64_MIN;
	int8_t x303 = INT8_MAX;
	uint8_t x304 = UINT8_MAX;

    t75 = (x301^(x302&(x303>x304)));

    if (t75 != -128LL) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint32_t x305 = UINT32_MAX;
	int8_t x306 = -1;
	int16_t x307 = -10;
	uint32_t x308 = 14851880U;
	uint32_t t76 = 192U;

    t76 = (x305^(x306&(x307>x308)));

    if (t76 != 4294967294U) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint8_t x309 = 8U;
	static int64_t x311 = 1653622772538604358LL;
	volatile int64_t x312 = -10112LL;
	static volatile int32_t t77 = 102535218;

    t77 = (x309^(x310&(x311>x312)));

    if (t77 != 9) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x314 = 3;
	volatile int16_t x315 = INT16_MAX;
	uint32_t x316 = 45047713U;

    t78 = (x313^(x314&(x315>x316)));

    if (t78 != 60) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t x318 = INT32_MIN;
	uint32_t x319 = UINT32_MAX;
	static volatile uint64_t t79 = 122LLU;

    t79 = (x317^(x318&(x319>x320)));

    if (t79 != 1LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile uint64_t x322 = 9302520626919676LLU;
	int8_t x323 = -1;
	int64_t x324 = INT64_MIN;
	uint64_t t80 = 385134336397961987LLU;

    t80 = (x321^(x322&(x323>x324)));

    if (t80 != 4LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x325 = INT64_MIN;
	static int32_t x326 = -1;
	int64_t t81 = INT64_MIN;

    t81 = (x325^(x326&(x327>x328)));

    if (t81 != INT64_MIN) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x329 = 3040068117LL;
	uint32_t x331 = UINT32_MAX;
	int64_t t82 = 4352721028599553383LL;

    t82 = (x329^(x330&(x331>x332)));

    if (t82 != 3040068117LL) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int64_t x334 = INT64_MIN;
	volatile int64_t t83 = 255718394104411609LL;

    t83 = (x333^(x334&(x335>x336)));

    if (t83 != -26LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x337 = 40U;
	volatile int32_t x340 = -1;
	volatile int32_t t84 = -468;

    t84 = (x337^(x338&(x339>x340)));

    if (t84 != 40) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x341 = -7;
	volatile int8_t x342 = INT8_MIN;
	int8_t x343 = INT8_MAX;
	volatile int64_t x344 = -122513447688LL;
	volatile int32_t t85 = -58423873;

    t85 = (x341^(x342&(x343>x344)));

    if (t85 != -7) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x345 = -484998LL;
	static int8_t x347 = -1;
	volatile uint64_t x348 = 185176463082LLU;
	volatile int64_t t86 = -374149532974LL;

    t86 = (x345^(x346&(x347>x348)));

    if (t86 != -484997LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x349 = -13476519LL;
	uint32_t x350 = 109111U;
	uint8_t x351 = UINT8_MAX;
	int64_t x352 = -1LL;

    t87 = (x349^(x350&(x351>x352)));

    if (t87 != -13476520LL) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint16_t x356 = 7U;
	volatile uint32_t t88 = 187U;

    t88 = (x353^(x354&(x355>x356)));

    if (t88 != 32767U) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x357 = -1;
	volatile uint8_t x358 = 15U;
	uint8_t x359 = UINT8_MAX;
	static int32_t t89 = -54884;

    t89 = (x357^(x358&(x359>x360)));

    if (t89 != -2) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x361 = -1;
	static int8_t x362 = -1;
	int16_t x364 = INT16_MAX;
	int32_t t90 = -4;

    t90 = (x361^(x362&(x363>x364)));

    if (t90 != -2) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x366 = INT32_MIN;
	uint64_t x367 = 29564138LLU;
	int64_t x368 = -205LL;

    t91 = (x365^(x366&(x367>x368)));

    if (t91 != INT32_MIN) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x369 = INT64_MIN;
	uint64_t x370 = 464153LLU;
	int32_t x371 = -1;
	int64_t x372 = -1LL;

    t92 = (x369^(x370&(x371>x372)));

    if (t92 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x373 = INT16_MIN;
	static int32_t x375 = 883;
	static uint32_t x376 = 107047265U;
	volatile uint32_t t93 = 88430U;

    t93 = (x373^(x374&(x375>x376)));

    if (t93 != 4294934528U) { NG(); } else { ; }
	
}

void f94(void) {
    	static int32_t x378 = INT32_MAX;
	int8_t x379 = INT8_MIN;
	int64_t x380 = 56446LL;
	int32_t t94 = -1;

    t94 = (x377^(x378&(x379>x380)));

    if (t94 != 32767) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x381 = 3;
	volatile int32_t x383 = -1;
	uint32_t x384 = 52U;
	static int32_t t95 = -606114831;

    t95 = (x381^(x382&(x383>x384)));

    if (t95 != 2) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x385 = 2003;
	static volatile int32_t x386 = -500;
	int16_t x387 = INT16_MAX;
	volatile int32_t t96 = -62;

    t96 = (x385^(x386&(x387>x388)));

    if (t96 != 2003) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x389 = INT8_MAX;
	static uint16_t x390 = 23411U;
	static int8_t x391 = -1;
	int32_t t97 = 1;

    t97 = (x389^(x390&(x391>x392)));

    if (t97 != 126) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x393 = -1;
	volatile uint16_t x394 = UINT16_MAX;
	int16_t x395 = -472;
	uint64_t x396 = 93544681956558410LLU;
	volatile int32_t t98 = 0;

    t98 = (x393^(x394&(x395>x396)));

    if (t98 != -2) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint32_t x397 = UINT32_MAX;
	static int8_t x398 = -1;
	static volatile uint32_t t99 = 7650872U;

    t99 = (x397^(x398&(x399>x400)));

    if (t99 != 4294967294U) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x401 = -1LL;
	int32_t x402 = 8193088;
	static uint64_t x403 = 4965711776538LLU;
	static uint32_t x404 = 0U;
	int64_t t100 = 18818616491806LL;

    t100 = (x401^(x402&(x403>x404)));

    if (t100 != -1LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x405 = -1LL;
	int16_t x406 = INT16_MAX;
	int16_t x407 = 5;
	volatile int64_t t101 = -243281502LL;

    t101 = (x405^(x406&(x407>x408)));

    if (t101 != -2LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x409 = INT16_MAX;
	int16_t x410 = INT16_MAX;
	static int64_t x411 = 3440LL;
	static int16_t x412 = INT16_MIN;
	int32_t t102 = -361653191;

    t102 = (x409^(x410&(x411>x412)));

    if (t102 != 32766) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint64_t x413 = 297242946713111686LLU;
	static int32_t x416 = 5229855;
	uint64_t t103 = 46LLU;

    t103 = (x413^(x414&(x415>x416)));

    if (t103 != 297242946713111687LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x417 = INT8_MAX;
	static int64_t x419 = INT64_MIN;
	uint64_t x420 = 14822858538259069LLU;
	int32_t t104 = 9;

    t104 = (x417^(x418&(x419>x420)));

    if (t104 != 126) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = INT16_MIN;
	volatile int32_t x422 = 382;
	int64_t x424 = INT64_MIN;

    t105 = (x421^(x422&(x423>x424)));

    if (t105 != -32768) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int8_t x425 = -1;
	uint8_t x426 = 1U;
	int32_t x427 = -6418450;
	int8_t x428 = INT8_MAX;
	volatile int32_t t106 = 3356828;

    t106 = (x425^(x426&(x427>x428)));

    if (t106 != -1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x429 = UINT8_MAX;
	int64_t x432 = -1LL;
	static volatile int32_t t107 = 377127;

    t107 = (x429^(x430&(x431>x432)));

    if (t107 != 254) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x433 = UINT32_MAX;
	volatile int64_t x434 = INT64_MAX;
	volatile uint32_t x436 = UINT32_MAX;
	volatile int64_t t108 = -1017693220153LL;

    t108 = (x433^(x434&(x435>x436)));

    if (t108 != 4294967295LL) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint64_t x437 = UINT64_MAX;
	int32_t x438 = INT32_MIN;
	uint16_t x439 = UINT16_MAX;
	int8_t x440 = INT8_MIN;

    t109 = (x437^(x438&(x439>x440)));

    if (t109 != UINT64_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x442 = -1LL;
	volatile int8_t x444 = INT8_MIN;
	int64_t t110 = -115730816LL;

    t110 = (x441^(x442&(x443>x444)));

    if (t110 != -1784LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int32_t x447 = INT32_MIN;
	int32_t x448 = -1;

    t111 = (x445^(x446&(x447>x448)));

    if (t111 != INT64_MAX) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x449 = INT16_MAX;
	volatile int8_t x450 = INT8_MAX;
	int8_t x452 = 8;
	int32_t t112 = -32;

    t112 = (x449^(x450&(x451>x452)));

    if (t112 != 32767) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x453 = INT16_MIN;
	int64_t x454 = 115931647154LL;
	uint8_t x455 = 7U;
	volatile int16_t x456 = -1;

    t113 = (x453^(x454&(x455>x456)));

    if (t113 != -32768LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x457 = 5477;
	uint64_t x458 = 1092LLU;
	static uint16_t x459 = 6619U;
	int16_t x460 = -6685;
	static volatile uint64_t t114 = 61570641971425LLU;

    t114 = (x457^(x458&(x459>x460)));

    if (t114 != 5477LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x461 = -1;
	int32_t x463 = 3527;
	int32_t x464 = 5762868;
	int64_t t115 = 1967515325392LL;

    t115 = (x461^(x462&(x463>x464)));

    if (t115 != -1LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x465 = -1LL;
	int32_t x466 = 39023421;
	int16_t x467 = INT16_MAX;
	volatile int64_t t116 = 510672LL;

    t116 = (x465^(x466&(x467>x468)));

    if (t116 != -1LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x470 = -1949028LL;
	int32_t x471 = INT32_MIN;
	static volatile uint64_t x472 = 0LLU;
	volatile int64_t t117 = INT64_MIN;

    t117 = (x469^(x470&(x471>x472)));

    if (t117 != INT64_MIN) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile int8_t x474 = -1;
	int8_t x475 = INT8_MAX;
	static uint64_t x476 = 29052LLU;
	volatile int32_t t118 = 215640074;

    t118 = (x473^(x474&(x475>x476)));

    if (t118 != -1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x478 = UINT32_MAX;
	static uint16_t x480 = 0U;
	uint32_t t119 = 33U;

    t119 = (x477^(x478&(x479>x480)));

    if (t119 != 18U) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x482 = -1;
	volatile int16_t x483 = 5882;
	int8_t x484 = -1;

    t120 = (x481^(x482&(x483>x484)));

    if (t120 != 5) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x485 = UINT8_MAX;
	uint32_t x486 = UINT32_MAX;
	volatile uint32_t x488 = UINT32_MAX;

    t121 = (x485^(x486&(x487>x488)));

    if (t121 != 255U) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x489 = INT64_MIN;
	uint8_t x490 = 11U;
	static int8_t x491 = 6;
	static volatile int64_t t122 = 6146221949312709LL;

    t122 = (x489^(x490&(x491>x492)));

    if (t122 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x494 = 184560U;
	static int64_t x495 = -120721LL;
	int16_t x496 = -1;
	uint64_t t123 = 59093LLU;

    t123 = (x493^(x494&(x495>x496)));

    if (t123 != 7807832619456636759LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x497 = INT32_MIN;
	uint32_t x498 = UINT32_MAX;
	int8_t x499 = -1;
	static volatile uint16_t x500 = UINT16_MAX;

    t124 = (x497^(x498&(x499>x500)));

    if (t124 != 2147483648U) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x501 = 7089360LLU;
	int8_t x502 = INT8_MIN;
	uint16_t x503 = 161U;
	volatile int32_t x504 = INT32_MIN;
	volatile uint64_t t125 = 142494910757314935LLU;

    t125 = (x501^(x502&(x503>x504)));

    if (t125 != 7089360LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile int16_t x505 = 157;
	static uint32_t x506 = 215940U;
	static volatile int32_t x507 = INT32_MAX;
	static volatile int32_t x508 = INT32_MIN;
	volatile uint32_t t126 = 1410812U;

    t126 = (x505^(x506&(x507>x508)));

    if (t126 != 157U) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint16_t x509 = 11U;
	int64_t x510 = INT64_MIN;
	uint32_t x511 = UINT32_MAX;
	int16_t x512 = -1;

    t127 = (x509^(x510&(x511>x512)));

    if (t127 != 11LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x514 = -9LL;
	int8_t x515 = INT8_MIN;
	int64_t x516 = 190228519LL;
	static volatile int64_t t128 = 114LL;

    t128 = (x513^(x514&(x515>x516)));

    if (t128 != -128LL) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint16_t x517 = 820U;
	int16_t x518 = INT16_MIN;
	int32_t x519 = INT32_MAX;
	static volatile int64_t x520 = INT64_MIN;
	int32_t t129 = -828;

    t129 = (x517^(x518&(x519>x520)));

    if (t129 != 820) { NG(); } else { ; }
	
}

void f130(void) {
    	static int32_t x521 = -7315;
	static int64_t x522 = INT64_MIN;
	int8_t x523 = INT8_MIN;
	int64_t x524 = -19316LL;
	static int64_t t130 = 5835LL;

    t130 = (x521^(x522&(x523>x524)));

    if (t130 != -7315LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x525 = -1;
	uint16_t x526 = 3498U;
	int16_t x528 = -75;
	volatile int32_t t131 = 1;

    t131 = (x525^(x526&(x527>x528)));

    if (t131 != -1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x529 = 22U;
	static int64_t x532 = INT64_MIN;
	volatile int64_t t132 = 590563LL;

    t132 = (x529^(x530&(x531>x532)));

    if (t132 != 22LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x534 = INT8_MAX;
	static volatile uint16_t x535 = 10246U;
	volatile int32_t t133 = 28824;

    t133 = (x533^(x534&(x535>x536)));

    if (t133 != 21) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint64_t x537 = 251LLU;
	int16_t x538 = INT16_MIN;
	static int8_t x539 = -1;
	volatile uint64_t t134 = 1879LLU;

    t134 = (x537^(x538&(x539>x540)));

    if (t134 != 251LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x542 = 323654832144LLU;
	static volatile int64_t x543 = -1LL;
	int64_t x544 = INT64_MIN;
	volatile uint64_t t135 = 7062524442060334614LLU;

    t135 = (x541^(x542&(x543>x544)));

    if (t135 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x545 = INT32_MAX;
	int32_t x546 = 1;
	volatile int64_t x547 = 846933763LL;
	static int8_t x548 = 24;
	volatile int32_t t136 = 0;

    t136 = (x545^(x546&(x547>x548)));

    if (t136 != 2147483646) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x549 = -52;
	uint8_t x551 = 1U;
	volatile int8_t x552 = 61;
	volatile int32_t t137 = -14;

    t137 = (x549^(x550&(x551>x552)));

    if (t137 != -52) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint16_t x553 = 7169U;
	static int32_t x554 = -1393;
	int16_t x555 = -739;
	volatile int32_t t138 = 0;

    t138 = (x553^(x554&(x555>x556)));

    if (t138 != 7168) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint64_t x557 = 1125736654867765024LLU;
	static int8_t x558 = INT8_MAX;
	volatile int16_t x559 = INT16_MIN;
	static volatile int64_t x560 = INT64_MIN;
	static uint64_t t139 = 33LLU;

    t139 = (x557^(x558&(x559>x560)));

    if (t139 != 1125736654867765025LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x562 = 1;
	int64_t x564 = -1LL;
	volatile int32_t t140 = INT32_MAX;

    t140 = (x561^(x562&(x563>x564)));

    if (t140 != INT32_MAX) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x565 = INT32_MIN;
	uint16_t x566 = 1456U;
	volatile int32_t x567 = INT32_MIN;
	uint16_t x568 = 894U;
	int32_t t141 = INT32_MIN;

    t141 = (x565^(x566&(x567>x568)));

    if (t141 != INT32_MIN) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x569 = INT64_MIN;
	int64_t x571 = INT64_MIN;
	int16_t x572 = INT16_MIN;
	int64_t t142 = INT64_MIN;

    t142 = (x569^(x570&(x571>x572)));

    if (t142 != INT64_MIN) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint32_t x573 = 77132301U;
	static uint32_t x574 = 21U;
	volatile uint32_t x575 = 397U;
	static uint64_t x576 = 357799LLU;
	volatile uint32_t t143 = 12U;

    t143 = (x573^(x574&(x575>x576)));

    if (t143 != 77132301U) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x577 = UINT16_MAX;
	uint8_t x578 = 38U;
	volatile int64_t x579 = -1LL;
	uint8_t x580 = UINT8_MAX;
	static volatile int32_t t144 = 323;

    t144 = (x577^(x578&(x579>x580)));

    if (t144 != 65535) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x581 = INT16_MAX;
	volatile int8_t x582 = -1;
	int64_t x583 = INT64_MAX;
	int32_t t145 = -404907;

    t145 = (x581^(x582&(x583>x584)));

    if (t145 != 32766) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x587 = INT64_MIN;
	uint32_t x588 = UINT32_MAX;

    t146 = (x585^(x586&(x587>x588)));

    if (t146 != -1) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x589 = -1;
	int16_t x590 = INT16_MIN;
	int16_t x591 = INT16_MAX;
	static int32_t x592 = -1;

    t147 = (x589^(x590&(x591>x592)));

    if (t147 != -1) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x593 = 0;
	volatile int32_t x594 = -330;
	int8_t x595 = 33;
	static volatile int32_t t148 = -168;

    t148 = (x593^(x594&(x595>x596)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int16_t x597 = -1;
	int16_t x598 = INT16_MIN;
	int8_t x599 = -1;
	int32_t x600 = INT32_MIN;
	int32_t t149 = -59239256;

    t149 = (x597^(x598&(x599>x600)));

    if (t149 != -1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x601 = UINT16_MAX;
	int8_t x602 = INT8_MIN;
	static uint8_t x603 = UINT8_MAX;
	static volatile uint8_t x604 = 1U;
	int32_t t150 = -431121783;

    t150 = (x601^(x602&(x603>x604)));

    if (t150 != 65535) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint32_t x605 = 967280U;
	int32_t x606 = -474290;
	uint64_t x607 = 500404240053519LLU;
	volatile uint32_t t151 = 1153941260U;

    t151 = (x605^(x606&(x607>x608)));

    if (t151 != 967280U) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x609 = INT32_MAX;
	static uint16_t x610 = 5U;
	uint32_t x611 = 67841U;

    t152 = (x609^(x610&(x611>x612)));

    if (t152 != INT32_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x614 = INT8_MAX;
	volatile int8_t x615 = INT8_MIN;
	volatile int32_t t153 = -94034;

    t153 = (x613^(x614&(x615>x616)));

    if (t153 != 127) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x617 = -1;
	int64_t x618 = -1LL;
	int64_t x619 = INT64_MAX;
	static uint16_t x620 = UINT16_MAX;
	int64_t t154 = 754675500290446646LL;

    t154 = (x617^(x618&(x619>x620)));

    if (t154 != -2LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x621 = INT32_MIN;
	static uint8_t x622 = UINT8_MAX;
	int64_t x623 = -9LL;
	static int8_t x624 = INT8_MIN;
	volatile int32_t t155 = 8587207;

    t155 = (x621^(x622&(x623>x624)));

    if (t155 != -2147483647) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x625 = -1;
	int64_t x626 = INT64_MAX;
	int16_t x627 = -1;
	volatile int64_t t156 = 254396756228761377LL;

    t156 = (x625^(x626&(x627>x628)));

    if (t156 != -1LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x629 = 64030598LLU;
	int64_t x630 = -1LL;
	int32_t x632 = -32442292;
	static uint64_t t157 = 2110568353910252558LLU;

    t157 = (x629^(x630&(x631>x632)));

    if (t157 != 64030599LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint64_t x633 = 0LLU;
	static volatile int64_t x635 = -78377LL;
	static volatile int16_t x636 = -1;
	static uint64_t t158 = 1656049736689LLU;

    t158 = (x633^(x634&(x635>x636)));

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x637 = UINT32_MAX;
	static uint32_t x638 = UINT32_MAX;
	uint32_t x639 = UINT32_MAX;
	uint64_t x640 = 88123960693LLU;
	volatile uint32_t t159 = UINT32_MAX;

    t159 = (x637^(x638&(x639>x640)));

    if (t159 != UINT32_MAX) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x642 = 3;
	int8_t x644 = INT8_MAX;
	int32_t t160 = -489;

    t160 = (x641^(x642&(x643>x644)));

    if (t160 != 12928) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x647 = INT8_MIN;
	int16_t x648 = INT16_MAX;

    t161 = (x645^(x646&(x647>x648)));

    if (t161 != 3536LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x650 = -1;
	uint32_t x651 = UINT32_MAX;
	static uint64_t t162 = 184077137LLU;

    t162 = (x649^(x650&(x651>x652)));

    if (t162 != 51665473648LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x653 = -1LL;
	volatile int8_t x655 = INT8_MIN;
	static int16_t x656 = INT16_MAX;
	volatile int64_t t163 = 550333250737713LL;

    t163 = (x653^(x654&(x655>x656)));

    if (t163 != -1LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x658 = -1LL;
	static int64_t x659 = -1LL;
	uint32_t x660 = 328636U;
	int64_t t164 = 838471345463LL;

    t164 = (x657^(x658&(x659>x660)));

    if (t164 != 3LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x663 = -83747008291167LL;
	int32_t x664 = INT32_MIN;

    t165 = (x661^(x662&(x663>x664)));

    if (t165 != 127) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x665 = INT8_MIN;
	static uint64_t x666 = 208637989LLU;
	int16_t x667 = INT16_MIN;

    t166 = (x665^(x666&(x667>x668)));

    if (t166 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x669 = -4;
	static int64_t x670 = 518257LL;
	uint8_t x671 = UINT8_MAX;
	volatile int64_t t167 = -216498168411878695LL;

    t167 = (x669^(x670&(x671>x672)));

    if (t167 != -3LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x673 = 52U;
	volatile int16_t x674 = INT16_MAX;
	uint64_t x675 = UINT64_MAX;
	uint8_t x676 = UINT8_MAX;
	volatile int32_t t168 = -327116;

    t168 = (x673^(x674&(x675>x676)));

    if (t168 != 53) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint64_t x677 = UINT64_MAX;
	int8_t x678 = INT8_MIN;
	uint8_t x679 = UINT8_MAX;
	volatile int16_t x680 = INT16_MIN;

    t169 = (x677^(x678&(x679>x680)));

    if (t169 != UINT64_MAX) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x682 = 114564698U;
	uint16_t x683 = UINT16_MAX;
	static uint64_t x684 = 13153950LLU;
	volatile uint32_t t170 = 307U;

    t170 = (x681^(x682&(x683>x684)));

    if (t170 != 127U) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x688 = 0;
	volatile int64_t t171 = -156979LL;

    t171 = (x685^(x686&(x687>x688)));

    if (t171 != 13LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x690 = 541U;
	uint64_t x691 = 1LLU;
	int32_t t172 = -1093;

    t172 = (x689^(x690&(x691>x692)));

    if (t172 != 12) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x693 = UINT8_MAX;
	int16_t x694 = -3;
	volatile int16_t x695 = INT16_MIN;
	static int64_t x696 = 29LL;
	volatile int32_t t173 = 14;

    t173 = (x693^(x694&(x695>x696)));

    if (t173 != 255) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x697 = -1;
	uint8_t x698 = 27U;
	static int32_t x699 = INT32_MIN;
	int16_t x700 = 490;
	volatile int32_t t174 = -9;

    t174 = (x697^(x698&(x699>x700)));

    if (t174 != -1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint64_t x701 = 1970203777217707LLU;
	static int64_t x702 = INT64_MIN;
	int32_t x704 = INT32_MIN;
	uint64_t t175 = 544186344214122202LLU;

    t175 = (x701^(x702&(x703>x704)));

    if (t175 != 1970203777217707LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint16_t x705 = 2U;
	int64_t x706 = INT64_MIN;
	int32_t x707 = -1;
	int8_t x708 = INT8_MIN;
	int64_t t176 = 14528LL;

    t176 = (x705^(x706&(x707>x708)));

    if (t176 != 2LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x709 = -1;
	int16_t x711 = INT16_MAX;
	volatile int32_t x712 = 61926657;
	int64_t t177 = 243LL;

    t177 = (x709^(x710&(x711>x712)));

    if (t177 != -1LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x713 = 38918427LL;
	int64_t x714 = INT64_MIN;
	static int8_t x715 = INT8_MIN;
	volatile int32_t x716 = INT32_MIN;
	int64_t t178 = -1LL;

    t178 = (x713^(x714&(x715>x716)));

    if (t178 != 38918427LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x717 = 33586008574183918LLU;
	int8_t x718 = -50;
	int16_t x719 = -7262;
	uint8_t x720 = UINT8_MAX;

    t179 = (x717^(x718&(x719>x720)));

    if (t179 != 33586008574183918LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x721 = INT8_MAX;
	static int64_t x722 = -4310805081991LL;
	int16_t x723 = 71;
	volatile int64_t t180 = 17788630856560LL;

    t180 = (x721^(x722&(x723>x724)));

    if (t180 != 127LL) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int16_t x726 = -4542;
	uint32_t x727 = UINT32_MAX;
	int64_t x728 = INT64_MAX;
	static volatile int32_t t181 = 1441056;

    t181 = (x725^(x726&(x727>x728)));

    if (t181 != -1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x730 = INT64_MAX;
	volatile int32_t x731 = -20;
	int32_t x732 = INT32_MIN;

    t182 = (x729^(x730&(x731>x732)));

    if (t182 != -2LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x733 = -1LL;
	static uint16_t x735 = 2137U;

    t183 = (x733^(x734&(x735>x736)));

    if (t183 != -2LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x737 = -1;
	int64_t x738 = -836274763168LL;
	int32_t x739 = INT32_MIN;
	int16_t x740 = -1;
	int64_t t184 = -47820LL;

    t184 = (x737^(x738&(x739>x740)));

    if (t184 != -1LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x741 = INT16_MIN;
	int8_t x742 = -2;
	int64_t x744 = INT64_MIN;

    t185 = (x741^(x742&(x743>x744)));

    if (t185 != -32768) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x745 = INT64_MAX;
	uint64_t x746 = UINT64_MAX;
	uint64_t t186 = 884528LLU;

    t186 = (x745^(x746&(x747>x748)));

    if (t186 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x749 = 1659U;
	uint8_t x750 = 26U;
	uint16_t x751 = 362U;
	int8_t x752 = -1;

    t187 = (x749^(x750&(x751>x752)));

    if (t187 != 1659) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile int16_t x753 = 388;
	volatile int8_t x754 = INT8_MIN;
	int8_t x755 = -1;
	volatile int32_t t188 = -1401318;

    t188 = (x753^(x754&(x755>x756)));

    if (t188 != 388) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x757 = 35U;
	uint64_t x758 = 105136LLU;
	uint8_t x759 = UINT8_MAX;
	int32_t x760 = 405;
	uint64_t t189 = 510234LLU;

    t189 = (x757^(x758&(x759>x760)));

    if (t189 != 35LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x761 = 25;
	static int64_t x762 = -325076928497941370LL;
	volatile int32_t x763 = -1;
	int16_t x764 = INT16_MIN;
	static volatile int64_t t190 = -174647377997581LL;

    t190 = (x761^(x762&(x763>x764)));

    if (t190 != 25LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x767 = INT8_MAX;
	int64_t x768 = -1436978236356LL;
	volatile uint32_t t191 = 1U;

    t191 = (x765^(x766&(x767>x768)));

    if (t191 != 13U) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile int32_t x770 = -167;
	int8_t x771 = -1;
	static int32_t x772 = INT32_MAX;
	volatile uint64_t t192 = UINT64_MAX;

    t192 = (x769^(x770&(x771>x772)));

    if (t192 != UINT64_MAX) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x774 = -1LL;
	volatile int8_t x776 = -4;
	volatile int64_t t193 = -8149923152245630LL;

    t193 = (x773^(x774&(x775>x776)));

    if (t193 != 126LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x777 = 8846U;
	int16_t x779 = -625;
	uint32_t x780 = UINT32_MAX;

    t194 = (x777^(x778&(x779>x780)));

    if (t194 != 8846) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x781 = INT64_MIN;
	static uint8_t x782 = 7U;
	int32_t x783 = INT32_MIN;
	static int8_t x784 = INT8_MIN;
	volatile int64_t t195 = INT64_MIN;

    t195 = (x781^(x782&(x783>x784)));

    if (t195 != INT64_MIN) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x785 = 9LL;
	volatile int16_t x786 = 186;
	int32_t x787 = INT32_MAX;
	int64_t t196 = -11LL;

    t196 = (x785^(x786&(x787>x788)));

    if (t196 != 9LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x790 = INT32_MAX;
	volatile int8_t x791 = INT8_MAX;

    t197 = (x789^(x790&(x791>x792)));

    if (t197 != 34724U) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x793 = -1LL;
	static volatile uint64_t x794 = 3269333LLU;
	int16_t x795 = INT16_MIN;
	volatile int32_t x796 = INT32_MIN;
	volatile uint64_t t198 = 241492926124LLU;

    t198 = (x793^(x794&(x795>x796)));

    if (t198 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile int32_t x797 = INT32_MIN;
	int32_t t199 = -18536;

    t199 = (x797^(x798&(x799>x800)));

    if (t199 != -2147483647) { NG(); } else { ; }
	
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

