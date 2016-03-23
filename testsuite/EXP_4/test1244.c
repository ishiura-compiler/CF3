
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

uint8_t x1 = 7U;
volatile uint16_t x11 = 4U;
int16_t x13 = INT16_MIN;
int16_t x17 = INT16_MIN;
int64_t x29 = INT64_MIN;
int32_t x31 = INT32_MIN;
int8_t x32 = INT8_MAX;
static int32_t x36 = INT32_MIN;
int32_t x38 = INT32_MIN;
int64_t x46 = INT64_MIN;
static uint32_t x51 = 20412797U;
volatile int64_t t12 = -55525334LL;
volatile uint8_t x57 = UINT8_MAX;
static int32_t x60 = INT32_MAX;
static volatile uint32_t x66 = UINT32_MAX;
static uint16_t x67 = 9128U;
int8_t x78 = INT8_MIN;
int32_t x85 = INT32_MAX;
static volatile int64_t x88 = INT64_MIN;
static int64_t t19 = 1220727189LL;
int16_t x91 = -1;
static volatile uint64_t x100 = 255020382019831LLU;
volatile int64_t x102 = -1LL;
int8_t x103 = -1;
volatile int64_t t23 = -39718683437563LL;
uint8_t x108 = 25U;
volatile uint32_t t24 = 2873360U;
static uint32_t x111 = UINT32_MAX;
int16_t x112 = -134;
int64_t t25 = -24LL;
static uint64_t x115 = UINT64_MAX;
int64_t x116 = INT64_MIN;
uint16_t x118 = UINT16_MAX;
int8_t x124 = -1;
int64_t t28 = -375062591633736LL;
uint16_t x125 = 1728U;
volatile int16_t x127 = INT16_MAX;
int8_t x144 = INT8_MAX;
int16_t x151 = 2778;
uint8_t x153 = UINT8_MAX;
uint8_t x154 = 102U;
int16_t x161 = INT16_MAX;
uint8_t x166 = 0U;
int32_t x191 = INT32_MIN;
int64_t x194 = -1LL;
int32_t x199 = 34761;
int8_t x204 = -1;
static uint32_t x205 = 48U;
static int64_t x209 = -1LL;
volatile int16_t x210 = -1;
volatile uint64_t x211 = UINT64_MAX;
int32_t x213 = -14464;
int16_t x215 = -5659;
volatile int64_t x221 = -1LL;
int32_t x227 = 261797;
volatile int64_t x228 = 283993LL;
static int8_t x235 = INT8_MAX;
static volatile int16_t x237 = -279;
uint8_t x240 = 19U;
volatile int32_t t57 = 68176;
static volatile int8_t x249 = INT8_MIN;
static uint32_t x250 = UINT32_MAX;
volatile int32_t x251 = 0;
uint32_t x274 = 12U;
int16_t x283 = INT16_MIN;
static int64_t x285 = INT64_MAX;
int16_t x291 = INT16_MIN;
static int64_t x292 = -212LL;
static int64_t x295 = INT64_MAX;
int64_t x302 = 2492LL;
volatile int32_t t73 = 3910;
volatile int8_t x309 = INT8_MIN;
static int32_t x311 = 0;
int16_t x321 = -1;
volatile int32_t t76 = 4;
volatile int64_t x325 = -14143320872923LL;
int64_t x336 = INT64_MIN;
uint32_t t78 = 23U;
int32_t x337 = INT32_MAX;
static int8_t x341 = -1;
int8_t x344 = INT8_MAX;
uint16_t x347 = 569U;
static int32_t x353 = INT32_MIN;
static int16_t x357 = -1;
uint32_t x359 = 378555177U;
volatile uint32_t x361 = 168568616U;
uint8_t x363 = 37U;
static uint32_t t85 = 16137494U;
int64_t x366 = 66636365869445988LL;
static volatile uint32_t x368 = UINT32_MAX;
int8_t x370 = 44;
static int64_t x371 = INT64_MIN;
int8_t x377 = -1;
uint64_t x378 = UINT64_MAX;
uint64_t t89 = 1433224721605412LLU;
static volatile int16_t x383 = -241;
int32_t x384 = INT32_MIN;
static volatile int32_t x386 = -3;
static uint64_t x388 = UINT64_MAX;
static uint16_t x389 = UINT16_MAX;
int16_t x392 = -1;
static int8_t x393 = INT8_MAX;
int16_t x400 = 48;
static int32_t t94 = 824309570;
static int32_t x407 = INT32_MIN;
static volatile int32_t t97 = -3969;
volatile int32_t x419 = -1;
static int16_t x420 = -5;
volatile int64_t x424 = INT64_MAX;
uint64_t x428 = UINT64_MAX;
int32_t x429 = INT32_MIN;
int16_t x437 = -15;
uint16_t x438 = 6150U;
volatile uint8_t x467 = 19U;
int8_t x474 = -1;
int32_t x475 = INT32_MIN;
int16_t x476 = INT16_MAX;
int64_t x482 = INT64_MIN;
uint8_t x485 = 6U;
int16_t x489 = -1;
int32_t x500 = 329;
uint16_t x502 = UINT16_MAX;
int64_t t119 = 51431166652LL;
int32_t x515 = -1;
static volatile int32_t t122 = 157841460;
volatile int64_t t123 = -1LL;
static volatile uint16_t x526 = 15U;
volatile int32_t t126 = 10;
int8_t x533 = INT8_MIN;
int8_t x538 = -1;
int32_t x543 = -1;
int8_t x550 = INT8_MIN;
int64_t x552 = -1LL;
int64_t x554 = INT64_MIN;
static int64_t x555 = 1513144860661274LL;
uint64_t x560 = 6534183771418LLU;
int32_t x563 = 7544080;
int8_t x566 = 1;
volatile uint64_t x568 = 3008744385LLU;
int32_t t134 = 37;
int32_t x569 = -118397;
uint8_t x570 = 2U;
uint64_t x574 = UINT64_MAX;
int64_t x579 = INT64_MIN;
volatile uint64_t t137 = 1262432LLU;
volatile int32_t t138 = 8585951;
uint32_t x586 = 2U;
static int16_t x588 = INT16_MAX;
static int16_t x596 = INT16_MAX;
uint16_t x599 = 7920U;
int64_t x603 = -1LL;
static int64_t x604 = INT64_MIN;
uint8_t x610 = 3U;
int32_t x611 = INT32_MIN;
uint64_t x613 = 15LLU;
int32_t x615 = 651;
uint64_t x620 = 54063LLU;
volatile uint16_t x625 = 206U;
volatile uint8_t x630 = 0U;
static volatile uint8_t x631 = 30U;
static int16_t x634 = INT16_MIN;
static volatile int32_t t153 = -1;
int32_t x647 = 12;
int64_t x649 = INT64_MIN;
static uint16_t x651 = 9U;
uint64_t x656 = 3817LLU;
volatile uint16_t x659 = 10U;
uint8_t x663 = 4U;
volatile int32_t x669 = INT32_MAX;
static uint16_t x676 = 678U;
uint8_t x679 = 82U;
volatile uint32_t t162 = 76668925U;
static int64_t x681 = INT64_MAX;
static int32_t x689 = INT32_MAX;
int16_t x695 = INT16_MIN;
int16_t x697 = INT16_MIN;
volatile uint32_t x703 = 125821U;
int16_t x705 = INT16_MAX;
int32_t t169 = 12960;
static int8_t x709 = INT8_MAX;
volatile int8_t x713 = 4;
volatile int32_t x734 = -1;
static volatile uint16_t x740 = 1287U;
int64_t x749 = INT64_MAX;
int64_t x758 = INT64_MAX;
volatile int8_t x766 = INT8_MAX;
int32_t t186 = 162;
int32_t x780 = -1;
volatile int8_t x787 = 0;
uint16_t x788 = UINT16_MAX;
int16_t x791 = INT16_MIN;
int8_t x792 = INT8_MIN;
static int8_t x795 = INT8_MAX;
uint16_t x796 = 12U;
volatile int32_t t191 = 1841397;
int8_t x797 = 1;
int8_t x802 = INT8_MAX;
int16_t x803 = -1;
int32_t x809 = INT32_MIN;
int64_t x811 = 2830887817533720596LL;
volatile uint64_t t195 = 3825293LLU;
static volatile int16_t x816 = -15303;
static int32_t t196 = 1469;
int32_t x821 = INT32_MIN;
volatile int64_t t198 = 871151882688781761LL;
int32_t x825 = -484987608;
static int32_t x828 = INT32_MIN;


void f0(void) {
    	int16_t x2 = INT16_MAX;
	int64_t x3 = INT64_MIN;
	int32_t x4 = INT32_MIN;
	volatile int32_t t0 = 0;

    t0 = (x1&(x2%(x3!=x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x9 = -1;
	int64_t x10 = -1LL;
	uint64_t x12 = 502932491293086640LLU;
	volatile int64_t t1 = 151147714081322749LL;

    t1 = (x9&(x10%(x11!=x12)));

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x14 = 15123U;
	uint8_t x15 = 84U;
	uint8_t x16 = UINT8_MAX;
	volatile int32_t t2 = 0;

    t2 = (x13&(x14%(x15!=x16)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x18 = -1618;
	volatile int64_t x19 = INT64_MIN;
	static uint16_t x20 = UINT16_MAX;
	static volatile int32_t t3 = -27;

    t3 = (x17&(x18%(x19!=x20)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint64_t x21 = 9895494120800766LLU;
	int64_t x22 = INT64_MIN;
	static uint8_t x23 = 1U;
	uint32_t x24 = UINT32_MAX;
	volatile uint64_t t4 = 158990385LLU;

    t4 = (x21&(x22%(x23!=x24)));

    if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint64_t x25 = 20110127018121870LLU;
	static int8_t x26 = INT8_MIN;
	int64_t x27 = 324512630168LL;
	volatile int8_t x28 = 1;
	static volatile uint64_t t5 = 1014589803LLU;

    t5 = (x25&(x26%(x27!=x28)));

    if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x30 = -1;
	volatile int64_t t6 = 2LL;

    t6 = (x29&(x30%(x31!=x32)));

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x33 = INT32_MIN;
	int16_t x34 = INT16_MAX;
	int16_t x35 = -1;
	volatile int32_t t7 = -79701;

    t7 = (x33&(x34%(x35!=x36)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x37 = 30815339LLU;
	static int64_t x39 = INT64_MAX;
	int64_t x40 = INT64_MIN;
	static uint64_t t8 = 154356077LLU;

    t8 = (x37&(x38%(x39!=x40)));

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x41 = -374439010416627632LL;
	static uint64_t x42 = 4LLU;
	volatile int64_t x43 = INT64_MIN;
	static int16_t x44 = 2;
	uint64_t t9 = 256105597LLU;

    t9 = (x41&(x42%(x43!=x44)));

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x45 = INT64_MAX;
	int32_t x47 = INT32_MAX;
	int16_t x48 = INT16_MIN;
	int64_t t10 = 425LL;

    t10 = (x45&(x46%(x47!=x48)));

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x49 = UINT32_MAX;
	int8_t x50 = INT8_MAX;
	int16_t x52 = 25;
	static volatile uint32_t t11 = 18404U;

    t11 = (x49&(x50%(x51!=x52)));

    if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x53 = -24013324LL;
	volatile int32_t x54 = INT32_MAX;
	int16_t x55 = INT16_MAX;
	int8_t x56 = 1;

    t12 = (x53&(x54%(x55!=x56)));

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint16_t x58 = 18975U;
	int64_t x59 = INT64_MIN;
	int32_t t13 = -4317851;

    t13 = (x57&(x58%(x59!=x60)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static int16_t x61 = INT16_MAX;
	int8_t x62 = INT8_MIN;
	uint32_t x63 = 9U;
	int8_t x64 = INT8_MAX;
	volatile int32_t t14 = -1212252;

    t14 = (x61&(x62%(x63!=x64)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x65 = 8;
	int64_t x68 = INT64_MIN;
	uint32_t t15 = 4U;

    t15 = (x65&(x66%(x67!=x68)));

    if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x69 = INT16_MAX;
	uint8_t x70 = 7U;
	int32_t x71 = INT32_MIN;
	volatile uint8_t x72 = UINT8_MAX;
	int32_t t16 = -25;

    t16 = (x69&(x70%(x71!=x72)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint8_t x77 = 65U;
	int32_t x79 = INT32_MAX;
	int64_t x80 = 643177LL;
	volatile int32_t t17 = 10206101;

    t17 = (x77&(x78%(x79!=x80)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint32_t x81 = 15U;
	uint8_t x82 = 14U;
	volatile int8_t x83 = -1;
	static volatile uint8_t x84 = 114U;
	static volatile uint32_t t18 = 126U;

    t18 = (x81&(x82%(x83!=x84)));

    if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
    	static int64_t x86 = INT64_MAX;
	static int32_t x87 = -1;

    t19 = (x85&(x86%(x87!=x88)));

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x89 = 1009U;
	static uint16_t x90 = 46U;
	uint64_t x92 = 190458LLU;
	static volatile int32_t t20 = -1630343;

    t20 = (x89&(x90%(x91!=x92)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x93 = 16U;
	int16_t x94 = -2;
	int16_t x95 = -1;
	int64_t x96 = INT64_MAX;
	uint32_t t21 = 5483U;

    t21 = (x93&(x94%(x95!=x96)));

    if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x97 = INT32_MAX;
	volatile int32_t x98 = -1;
	int64_t x99 = 2593870898396LL;
	volatile int32_t t22 = -477511;

    t22 = (x97&(x98%(x99!=x100)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x101 = 114;
	volatile int8_t x104 = -3;

    t23 = (x101&(x102%(x103!=x104)));

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x105 = INT8_MIN;
	volatile uint32_t x106 = 1329U;
	uint32_t x107 = 1191819U;

    t24 = (x105&(x106%(x107!=x108)));

    if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x109 = INT64_MIN;
	uint32_t x110 = UINT32_MAX;

    t25 = (x109&(x110%(x111!=x112)));

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x113 = -1LL;
	uint8_t x114 = 4U;
	int64_t t26 = -34147778304022LL;

    t26 = (x113&(x114%(x115!=x116)));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x117 = -1LL;
	int64_t x119 = INT64_MAX;
	uint64_t x120 = 3258928812266852LLU;
	int64_t t27 = 1542211224113792LL;

    t27 = (x117&(x118%(x119!=x120)));

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x121 = INT64_MIN;
	int8_t x122 = INT8_MIN;
	volatile int64_t x123 = INT64_MIN;

    t28 = (x121&(x122%(x123!=x124)));

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x126 = 55U;
	uint16_t x128 = 1595U;
	int32_t t29 = -50151549;

    t29 = (x125&(x126%(x127!=x128)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x129 = INT64_MIN;
	volatile int16_t x130 = INT16_MIN;
	uint32_t x131 = 1482U;
	volatile uint32_t x132 = 527091242U;
	volatile int64_t t30 = 36436260LL;

    t30 = (x129&(x130%(x131!=x132)));

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int8_t x133 = INT8_MIN;
	int32_t x134 = INT32_MIN;
	volatile uint32_t x135 = UINT32_MAX;
	int8_t x136 = INT8_MIN;
	static volatile int32_t t31 = -401016;

    t31 = (x133&(x134%(x135!=x136)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x137 = 31U;
	uint16_t x138 = 2227U;
	int16_t x139 = INT16_MAX;
	static volatile uint16_t x140 = 83U;
	volatile int32_t t32 = -5377176;

    t32 = (x137&(x138%(x139!=x140)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x141 = -1;
	volatile int32_t x142 = INT32_MIN;
	uint8_t x143 = 6U;
	int32_t t33 = -269808078;

    t33 = (x141&(x142%(x143!=x144)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x145 = 6;
	int64_t x146 = INT64_MIN;
	int32_t x147 = INT32_MIN;
	int32_t x148 = INT32_MAX;
	volatile int64_t t34 = -10728368828LL;

    t34 = (x145&(x146%(x147!=x148)));

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x149 = UINT32_MAX;
	static uint16_t x150 = 0U;
	int32_t x152 = INT32_MAX;
	volatile uint32_t t35 = 282566356U;

    t35 = (x149&(x150%(x151!=x152)));

    if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x155 = 19542;
	uint64_t x156 = 0LLU;
	int32_t t36 = -2520;

    t36 = (x153&(x154%(x155!=x156)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x157 = 325603LLU;
	static uint8_t x158 = UINT8_MAX;
	int16_t x159 = -1;
	int16_t x160 = INT16_MIN;
	uint64_t t37 = 374666858492LLU;

    t37 = (x157&(x158%(x159!=x160)));

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int32_t x162 = INT32_MIN;
	volatile int64_t x163 = INT64_MIN;
	int16_t x164 = INT16_MAX;
	volatile int32_t t38 = -21;

    t38 = (x161&(x162%(x163!=x164)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x165 = INT64_MAX;
	static int16_t x167 = INT16_MAX;
	int64_t x168 = -1LL;
	int64_t t39 = 963256395LL;

    t39 = (x165&(x166%(x167!=x168)));

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint16_t x169 = 10904U;
	static uint16_t x170 = 9965U;
	uint16_t x171 = 6818U;
	static uint32_t x172 = 192860U;
	volatile int32_t t40 = -2581;

    t40 = (x169&(x170%(x171!=x172)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x173 = -1;
	int64_t x174 = -1LL;
	int16_t x175 = INT16_MAX;
	static volatile int64_t x176 = INT64_MIN;
	volatile int64_t t41 = -48657298727LL;

    t41 = (x173&(x174%(x175!=x176)));

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint16_t x177 = 1U;
	int64_t x178 = INT64_MAX;
	volatile uint8_t x179 = 120U;
	uint64_t x180 = 0LLU;
	volatile int64_t t42 = -983232826000276LL;

    t42 = (x177&(x178%(x179!=x180)));

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x181 = INT32_MIN;
	int64_t x182 = -17442LL;
	int8_t x183 = INT8_MIN;
	volatile int16_t x184 = -1;
	static volatile int64_t t43 = -7960474670099LL;

    t43 = (x181&(x182%(x183!=x184)));

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x185 = INT32_MIN;
	static volatile int16_t x186 = 1;
	int32_t x187 = 10716;
	int8_t x188 = INT8_MAX;
	int32_t t44 = 15448;

    t44 = (x185&(x186%(x187!=x188)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x189 = 678U;
	static volatile int8_t x190 = 1;
	int32_t x192 = INT32_MAX;
	int32_t t45 = 4565;

    t45 = (x189&(x190%(x191!=x192)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x193 = 861;
	static int16_t x195 = INT16_MIN;
	volatile int64_t x196 = INT64_MIN;
	volatile int64_t t46 = 454LL;

    t46 = (x193&(x194%(x195!=x196)));

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x197 = 491LL;
	static uint8_t x198 = 54U;
	volatile int32_t x200 = -53;
	volatile int64_t t47 = 9LL;

    t47 = (x197&(x198%(x199!=x200)));

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint8_t x201 = 60U;
	int16_t x202 = INT16_MAX;
	int8_t x203 = INT8_MIN;
	static int32_t t48 = 82;

    t48 = (x201&(x202%(x203!=x204)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x206 = INT8_MIN;
	volatile int16_t x207 = -8739;
	int32_t x208 = 395218;
	uint32_t t49 = 15U;

    t49 = (x205&(x206%(x207!=x208)));

    if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x212 = INT32_MIN;
	volatile int64_t t50 = -199293010LL;

    t50 = (x209&(x210%(x211!=x212)));

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x214 = 1092U;
	volatile uint64_t x216 = 108LLU;
	static volatile uint32_t t51 = 500U;

    t51 = (x213&(x214%(x215!=x216)));

    if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x217 = 8LL;
	uint8_t x218 = UINT8_MAX;
	static int16_t x219 = INT16_MAX;
	static uint32_t x220 = 0U;
	static volatile int64_t t52 = -50526792421995LL;

    t52 = (x217&(x218%(x219!=x220)));

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x222 = UINT16_MAX;
	uint64_t x223 = 4452970LLU;
	uint16_t x224 = 597U;
	volatile int64_t t53 = -307392586LL;

    t53 = (x221&(x222%(x223!=x224)));

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x225 = INT8_MAX;
	static int16_t x226 = INT16_MIN;
	static volatile int32_t t54 = 254;

    t54 = (x225&(x226%(x227!=x228)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x229 = 200411LLU;
	volatile uint64_t x230 = 0LLU;
	volatile uint32_t x231 = 883504806U;
	uint32_t x232 = UINT32_MAX;
	uint64_t t55 = 6376994950766956508LLU;

    t55 = (x229&(x230%(x231!=x232)));

    if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x233 = -4;
	static uint64_t x234 = 33965LLU;
	volatile int32_t x236 = 1;
	uint64_t t56 = 5091944LLU;

    t56 = (x233&(x234%(x235!=x236)));

    if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x238 = -1;
	volatile int32_t x239 = INT32_MIN;

    t57 = (x237&(x238%(x239!=x240)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile int64_t x241 = INT64_MIN;
	int64_t x242 = 11LL;
	int16_t x243 = INT16_MIN;
	int64_t x244 = -12091245791LL;
	int64_t t58 = 3218435903300LL;

    t58 = (x241&(x242%(x243!=x244)));

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x245 = 23U;
	volatile int32_t x246 = 52;
	static volatile int8_t x247 = INT8_MAX;
	int32_t x248 = INT32_MAX;
	int32_t t59 = 104888;

    t59 = (x245&(x246%(x247!=x248)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int64_t x252 = INT64_MIN;
	static uint32_t t60 = 123996390U;

    t60 = (x249&(x250%(x251!=x252)));

    if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint64_t x253 = 5LLU;
	int8_t x254 = INT8_MIN;
	volatile int32_t x255 = INT32_MIN;
	static volatile uint32_t x256 = 192U;
	volatile uint64_t t61 = 71943388LLU;

    t61 = (x253&(x254%(x255!=x256)));

    if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x257 = 1U;
	volatile uint8_t x258 = 13U;
	int16_t x259 = -1;
	uint64_t x260 = 2807414270924731LLU;
	int32_t t62 = -500;

    t62 = (x257&(x258%(x259!=x260)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int32_t x261 = INT32_MIN;
	static uint32_t x262 = 44U;
	int8_t x263 = 2;
	int32_t x264 = INT32_MAX;
	uint32_t t63 = 775553U;

    t63 = (x261&(x262%(x263!=x264)));

    if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint16_t x265 = 1401U;
	int32_t x266 = INT32_MAX;
	volatile int64_t x267 = 764LL;
	uint16_t x268 = 1U;
	static volatile int32_t t64 = 146911;

    t64 = (x265&(x266%(x267!=x268)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x269 = UINT16_MAX;
	uint32_t x270 = 5955U;
	uint16_t x271 = 2U;
	int16_t x272 = INT16_MIN;
	uint32_t t65 = 79950142U;

    t65 = (x269&(x270%(x271!=x272)));

    if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x273 = -23196LL;
	int64_t x275 = INT64_MIN;
	int64_t x276 = 88609953308180008LL;
	int64_t t66 = 4599828367LL;

    t66 = (x273&(x274%(x275!=x276)));

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x281 = INT16_MAX;
	uint8_t x282 = 113U;
	int32_t x284 = INT32_MIN;
	int32_t t67 = -7209443;

    t67 = (x281&(x282%(x283!=x284)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint16_t x286 = UINT16_MAX;
	int32_t x287 = -5;
	int8_t x288 = 0;
	volatile int64_t t68 = 87336552089635741LL;

    t68 = (x285&(x286%(x287!=x288)));

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x289 = -1;
	volatile int32_t x290 = INT32_MIN;
	static volatile int32_t t69 = -5383584;

    t69 = (x289&(x290%(x291!=x292)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int64_t x293 = -938069479372LL;
	volatile int64_t x294 = INT64_MAX;
	uint64_t x296 = 651792226238LLU;
	volatile int64_t t70 = -16LL;

    t70 = (x293&(x294%(x295!=x296)));

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x297 = INT16_MIN;
	int8_t x298 = INT8_MIN;
	uint16_t x299 = 30U;
	static uint64_t x300 = 2466825968262776833LLU;
	int32_t t71 = 7131091;

    t71 = (x297&(x298%(x299!=x300)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x301 = INT16_MAX;
	int64_t x303 = -131078594075048LL;
	int8_t x304 = INT8_MAX;
	static volatile int64_t t72 = -48948340284794LL;

    t72 = (x301&(x302%(x303!=x304)));

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x305 = -1;
	int16_t x306 = -1;
	int16_t x307 = INT16_MAX;
	uint64_t x308 = 390167LLU;

    t73 = (x305&(x306%(x307!=x308)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x310 = UINT8_MAX;
	int64_t x312 = INT64_MAX;
	int32_t t74 = -11574;

    t74 = (x309&(x310%(x311!=x312)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x313 = INT32_MIN;
	int8_t x314 = -1;
	int16_t x315 = INT16_MIN;
	int32_t x316 = -65;
	int32_t t75 = -1;

    t75 = (x313&(x314%(x315!=x316)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x322 = 1U;
	int64_t x323 = INT64_MAX;
	int8_t x324 = 0;

    t76 = (x321&(x322%(x323!=x324)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile int8_t x326 = INT8_MIN;
	static uint16_t x327 = 2U;
	int64_t x328 = 4171LL;
	int64_t t77 = -1288781462853483216LL;

    t77 = (x325&(x326%(x327!=x328)));

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile uint32_t x333 = 571U;
	int32_t x334 = 77;
	static int32_t x335 = 298555342;

    t78 = (x333&(x334%(x335!=x336)));

    if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x338 = INT16_MAX;
	int8_t x339 = -1;
	int64_t x340 = INT64_MAX;
	static int32_t t79 = 861125;

    t79 = (x337&(x338%(x339!=x340)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x342 = INT32_MIN;
	volatile uint16_t x343 = 7U;
	volatile int32_t t80 = 234493868;

    t80 = (x341&(x342%(x343!=x344)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x345 = INT64_MIN;
	int16_t x346 = INT16_MAX;
	int16_t x348 = -1;
	static volatile int64_t t81 = -118808495402533LL;

    t81 = (x345&(x346%(x347!=x348)));

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static int32_t x349 = INT32_MIN;
	uint64_t x350 = 3106375LLU;
	volatile int64_t x351 = INT64_MIN;
	static volatile int16_t x352 = INT16_MIN;
	uint64_t t82 = 25LLU;

    t82 = (x349&(x350%(x351!=x352)));

    if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int8_t x354 = INT8_MIN;
	static volatile uint32_t x355 = 1329811971U;
	int8_t x356 = INT8_MAX;
	int32_t t83 = 371;

    t83 = (x353&(x354%(x355!=x356)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x358 = 311U;
	volatile int8_t x360 = -6;
	volatile uint32_t t84 = 1534367U;

    t84 = (x357&(x358%(x359!=x360)));

    if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint16_t x362 = UINT16_MAX;
	static volatile uint32_t x364 = 5U;

    t85 = (x361&(x362%(x363!=x364)));

    if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint8_t x365 = 16U;
	volatile uint32_t x367 = 1632U;
	int64_t t86 = -104689979LL;

    t86 = (x365&(x366%(x367!=x368)));

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x369 = 1037U;
	int16_t x372 = INT16_MAX;
	volatile int32_t t87 = 0;

    t87 = (x369&(x370%(x371!=x372)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint8_t x373 = 10U;
	uint16_t x374 = UINT16_MAX;
	int64_t x375 = -1LL;
	uint16_t x376 = UINT16_MAX;
	volatile int32_t t88 = -7462704;

    t88 = (x373&(x374%(x375!=x376)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x379 = INT32_MIN;
	int32_t x380 = -8015300;

    t89 = (x377&(x378%(x379!=x380)));

    if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x381 = 883153461LLU;
	int64_t x382 = -10LL;
	volatile uint64_t t90 = 2707040LLU;

    t90 = (x381&(x382%(x383!=x384)));

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint64_t x385 = 61324LLU;
	static int8_t x387 = 45;
	volatile uint64_t t91 = 5614LLU;

    t91 = (x385&(x386%(x387!=x388)));

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x390 = 2350;
	int64_t x391 = 38LL;
	volatile int32_t t92 = 409616542;

    t92 = (x389&(x390%(x391!=x392)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x394 = 15623U;
	int32_t x395 = -27;
	uint8_t x396 = 0U;
	uint32_t t93 = 3U;

    t93 = (x393&(x394%(x395!=x396)));

    if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x397 = INT16_MAX;
	int32_t x398 = -1;
	static volatile uint32_t x399 = 164U;

    t94 = (x397&(x398%(x399!=x400)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x401 = UINT64_MAX;
	volatile int8_t x402 = -1;
	uint64_t x403 = 74135LLU;
	uint64_t x404 = UINT64_MAX;
	volatile uint64_t t95 = 7457420LLU;

    t95 = (x401&(x402%(x403!=x404)));

    if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x405 = INT64_MIN;
	int32_t x406 = INT32_MIN;
	static volatile uint16_t x408 = UINT16_MAX;
	volatile int64_t t96 = -3437LL;

    t96 = (x405&(x406%(x407!=x408)));

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x409 = -1;
	int16_t x410 = INT16_MIN;
	int8_t x411 = -1;
	uint64_t x412 = 9LLU;

    t97 = (x409&(x410%(x411!=x412)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x413 = 4;
	int32_t x414 = INT32_MIN;
	static volatile int64_t x415 = -1LL;
	volatile uint32_t x416 = 0U;
	volatile int32_t t98 = 1;

    t98 = (x413&(x414%(x415!=x416)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x417 = UINT16_MAX;
	uint8_t x418 = 89U;
	volatile int32_t t99 = -130;

    t99 = (x417&(x418%(x419!=x420)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint8_t x421 = UINT8_MAX;
	static volatile int8_t x422 = -1;
	volatile uint16_t x423 = 11594U;
	int32_t t100 = -919278669;

    t100 = (x421&(x422%(x423!=x424)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint16_t x425 = 1U;
	int16_t x426 = -1;
	int16_t x427 = INT16_MIN;
	volatile int32_t t101 = -1011425;

    t101 = (x425&(x426%(x427!=x428)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int8_t x430 = INT8_MAX;
	volatile int16_t x431 = 207;
	static int8_t x432 = -8;
	int32_t t102 = -206086699;

    t102 = (x429&(x430%(x431!=x432)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int8_t x433 = INT8_MAX;
	int8_t x434 = 8;
	int8_t x435 = INT8_MIN;
	volatile int32_t x436 = INT32_MIN;
	volatile int32_t t103 = 0;

    t103 = (x433&(x434%(x435!=x436)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint32_t x439 = UINT32_MAX;
	static int32_t x440 = INT32_MIN;
	int32_t t104 = -66668321;

    t104 = (x437&(x438%(x439!=x440)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x441 = -1LL;
	int8_t x442 = INT8_MAX;
	int64_t x443 = INT64_MIN;
	int32_t x444 = 17599;
	static int64_t t105 = -189LL;

    t105 = (x441&(x442%(x443!=x444)));

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x449 = 22971585765LLU;
	uint32_t x450 = UINT32_MAX;
	int32_t x451 = 4188;
	volatile int16_t x452 = -1;
	volatile uint64_t t106 = 229LLU;

    t106 = (x449&(x450%(x451!=x452)));

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x453 = INT16_MIN;
	volatile int16_t x454 = 960;
	int64_t x455 = -540326LL;
	int8_t x456 = INT8_MAX;
	int32_t t107 = -447899372;

    t107 = (x453&(x454%(x455!=x456)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x457 = -1;
	volatile int64_t x458 = -100470LL;
	int8_t x459 = INT8_MIN;
	uint8_t x460 = UINT8_MAX;
	int64_t t108 = -173840239344LL;

    t108 = (x457&(x458%(x459!=x460)));

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int32_t x461 = INT32_MIN;
	uint16_t x462 = 99U;
	int16_t x463 = INT16_MIN;
	volatile int16_t x464 = 9670;
	volatile int32_t t109 = 222;

    t109 = (x461&(x462%(x463!=x464)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x465 = INT64_MIN;
	int16_t x466 = 15163;
	static uint32_t x468 = 6U;
	volatile int64_t t110 = -9837260078LL;

    t110 = (x465&(x466%(x467!=x468)));

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x469 = 97353815496LLU;
	uint16_t x470 = UINT16_MAX;
	uint64_t x471 = 87LLU;
	static volatile uint8_t x472 = 0U;
	volatile uint64_t t111 = 686571858406267LLU;

    t111 = (x469&(x470%(x471!=x472)));

    if (t111 != 0LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x473 = -1;
	int32_t t112 = -4048697;

    t112 = (x473&(x474%(x475!=x476)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x477 = INT8_MAX;
	uint32_t x478 = UINT32_MAX;
	int64_t x479 = INT64_MAX;
	volatile uint64_t x480 = 902725803922LLU;
	uint32_t t113 = 378U;

    t113 = (x477&(x478%(x479!=x480)));

    if (t113 != 0U) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile uint16_t x481 = UINT16_MAX;
	int8_t x483 = INT8_MAX;
	static volatile int8_t x484 = 1;
	volatile int64_t t114 = 240790LL;

    t114 = (x481&(x482%(x483!=x484)));

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x486 = INT32_MIN;
	uint8_t x487 = 0U;
	int8_t x488 = INT8_MIN;
	volatile int32_t t115 = 25;

    t115 = (x485&(x486%(x487!=x488)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int32_t x490 = INT32_MAX;
	static uint64_t x491 = UINT64_MAX;
	static int16_t x492 = -434;
	volatile int32_t t116 = 15;

    t116 = (x489&(x490%(x491!=x492)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x493 = 6242LLU;
	uint8_t x494 = UINT8_MAX;
	int64_t x495 = INT64_MIN;
	uint8_t x496 = UINT8_MAX;
	static uint64_t t117 = 1519837LLU;

    t117 = (x493&(x494%(x495!=x496)));

    if (t117 != 0LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x497 = 126U;
	static int16_t x498 = INT16_MAX;
	volatile int64_t x499 = INT64_MIN;
	int32_t t118 = 12558908;

    t118 = (x497&(x498%(x499!=x500)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x501 = -1LL;
	static uint32_t x503 = UINT32_MAX;
	uint8_t x504 = UINT8_MAX;

    t119 = (x501&(x502%(x503!=x504)));

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x505 = UINT32_MAX;
	uint16_t x506 = 39U;
	int16_t x507 = INT16_MIN;
	int16_t x508 = -1;
	volatile uint32_t t120 = 3868U;

    t120 = (x505&(x506%(x507!=x508)));

    if (t120 != 0U) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile int32_t x509 = 3375848;
	static int32_t x510 = 52739061;
	static int64_t x511 = INT64_MIN;
	uint64_t x512 = UINT64_MAX;
	int32_t t121 = 493;

    t121 = (x509&(x510%(x511!=x512)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int32_t x513 = INT32_MAX;
	uint16_t x514 = 15639U;
	volatile int64_t x516 = -221105806940117LL;

    t122 = (x513&(x514%(x515!=x516)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x517 = INT64_MIN;
	int32_t x518 = INT32_MAX;
	volatile int16_t x519 = INT16_MIN;
	uint8_t x520 = 26U;

    t123 = (x517&(x518%(x519!=x520)));

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint16_t x521 = 23746U;
	int32_t x522 = -87528;
	volatile int16_t x523 = -1;
	uint32_t x524 = 450854U;
	int32_t t124 = -7915;

    t124 = (x521&(x522%(x523!=x524)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int32_t x525 = 137;
	uint16_t x527 = 14512U;
	int64_t x528 = 54506180926LL;
	static volatile int32_t t125 = 936;

    t125 = (x525&(x526%(x527!=x528)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x529 = UINT16_MAX;
	volatile int16_t x530 = -168;
	int32_t x531 = -53094;
	int64_t x532 = 23LL;

    t126 = (x529&(x530%(x531!=x532)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x534 = 0U;
	int32_t x535 = -10645;
	int64_t x536 = INT64_MAX;
	static int32_t t127 = 13030;

    t127 = (x533&(x534%(x535!=x536)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x537 = 0U;
	int64_t x539 = -10701LL;
	int64_t x540 = INT64_MIN;
	int32_t t128 = -1557;

    t128 = (x537&(x538%(x539!=x540)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x541 = INT64_MAX;
	static int32_t x542 = INT32_MAX;
	static uint32_t x544 = 5U;
	int64_t t129 = -104016244984624261LL;

    t129 = (x541&(x542%(x543!=x544)));

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint64_t x549 = 836LLU;
	int32_t x551 = INT32_MAX;
	volatile uint64_t t130 = 19LLU;

    t130 = (x549&(x550%(x551!=x552)));

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x553 = UINT32_MAX;
	int8_t x556 = -1;
	int64_t t131 = 134002160650641708LL;

    t131 = (x553&(x554%(x555!=x556)));

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint8_t x557 = 28U;
	static uint32_t x558 = UINT32_MAX;
	uint32_t x559 = UINT32_MAX;
	uint32_t t132 = 361970224U;

    t132 = (x557&(x558%(x559!=x560)));

    if (t132 != 0U) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x561 = -1LL;
	int64_t x562 = 12767767986215625LL;
	static volatile int16_t x564 = 6398;
	int64_t t133 = -2LL;

    t133 = (x561&(x562%(x563!=x564)));

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x565 = INT8_MIN;
	int8_t x567 = INT8_MIN;

    t134 = (x565&(x566%(x567!=x568)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x571 = -1LL;
	uint16_t x572 = 16U;
	volatile int32_t t135 = -46;

    t135 = (x569&(x570%(x571!=x572)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x573 = INT16_MIN;
	static int32_t x575 = 3387471;
	int64_t x576 = -1LL;
	uint64_t t136 = 4203849218935LLU;

    t136 = (x573&(x574%(x575!=x576)));

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint64_t x577 = UINT64_MAX;
	volatile int32_t x578 = INT32_MAX;
	static uint16_t x580 = 539U;

    t137 = (x577&(x578%(x579!=x580)));

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x581 = -1;
	int8_t x582 = 3;
	uint16_t x583 = 4631U;
	static volatile int16_t x584 = -6;

    t138 = (x581&(x582%(x583!=x584)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x585 = -654LL;
	int8_t x587 = 4;
	static int64_t t139 = 72190778LL;

    t139 = (x585&(x586%(x587!=x588)));

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x589 = INT64_MAX;
	volatile int16_t x590 = INT16_MAX;
	int8_t x591 = 1;
	int16_t x592 = INT16_MIN;
	volatile int64_t t140 = 113019183664102LL;

    t140 = (x589&(x590%(x591!=x592)));

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	static int64_t x593 = INT64_MIN;
	int8_t x594 = -14;
	volatile int8_t x595 = 48;
	int64_t t141 = -33LL;

    t141 = (x593&(x594%(x595!=x596)));

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x597 = 7332788U;
	int16_t x598 = INT16_MIN;
	static int16_t x600 = INT16_MIN;
	static uint32_t t142 = 910119U;

    t142 = (x597&(x598%(x599!=x600)));

    if (t142 != 0U) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint16_t x601 = 2787U;
	int32_t x602 = -1;
	volatile int32_t t143 = 1;

    t143 = (x601&(x602%(x603!=x604)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x605 = UINT16_MAX;
	volatile int64_t x606 = 112639573669LL;
	static int32_t x607 = 1;
	volatile int32_t x608 = 3310221;
	volatile int64_t t144 = 43LL;

    t144 = (x605&(x606%(x607!=x608)));

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x609 = INT16_MIN;
	static int8_t x612 = -5;
	volatile int32_t t145 = 191966965;

    t145 = (x609&(x610%(x611!=x612)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x614 = INT64_MIN;
	int8_t x616 = INT8_MIN;
	uint64_t t146 = 402884633663248LLU;

    t146 = (x613&(x614%(x615!=x616)));

    if (t146 != 0LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x617 = 4629U;
	static int64_t x618 = INT64_MIN;
	volatile int16_t x619 = 0;
	int64_t t147 = -39LL;

    t147 = (x617&(x618%(x619!=x620)));

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x621 = -17;
	static int8_t x622 = INT8_MIN;
	volatile uint32_t x623 = 1219U;
	volatile int32_t x624 = 2642;
	volatile int32_t t148 = 126;

    t148 = (x621&(x622%(x623!=x624)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x626 = INT16_MIN;
	int16_t x627 = 18;
	int8_t x628 = 6;
	volatile int32_t t149 = -997479;

    t149 = (x625&(x626%(x627!=x628)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x629 = 0;
	static int32_t x632 = 117365708;
	int32_t t150 = 7954215;

    t150 = (x629&(x630%(x631!=x632)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x633 = INT8_MIN;
	int8_t x635 = 0;
	int8_t x636 = INT8_MIN;
	int32_t t151 = 32;

    t151 = (x633&(x634%(x635!=x636)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x637 = 2U;
	volatile int8_t x638 = INT8_MAX;
	int8_t x639 = INT8_MIN;
	volatile int8_t x640 = INT8_MAX;
	static volatile int32_t t152 = -1714;

    t152 = (x637&(x638%(x639!=x640)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static int16_t x641 = 6;
	int8_t x642 = INT8_MIN;
	static uint16_t x643 = 25126U;
	int64_t x644 = 2165888853094816233LL;

    t153 = (x641&(x642%(x643!=x644)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x645 = INT16_MAX;
	static uint16_t x646 = UINT16_MAX;
	uint16_t x648 = 10263U;
	volatile int32_t t154 = 3387;

    t154 = (x645&(x646%(x647!=x648)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x650 = 123750641431LL;
	int8_t x652 = -1;
	int64_t t155 = 2124147451LL;

    t155 = (x649&(x650%(x651!=x652)));

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x653 = 24567991476LL;
	static int32_t x654 = -12199;
	volatile int8_t x655 = 0;
	volatile int64_t t156 = 1914736192922LL;

    t156 = (x653&(x654%(x655!=x656)));

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x657 = 11060091LL;
	volatile uint64_t x658 = 21LLU;
	volatile int16_t x660 = 0;
	volatile uint64_t t157 = 36292283LLU;

    t157 = (x657&(x658%(x659!=x660)));

    if (t157 != 0LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x661 = -1;
	uint8_t x662 = UINT8_MAX;
	int8_t x664 = -1;
	volatile int32_t t158 = -32366835;

    t158 = (x661&(x662%(x663!=x664)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x665 = UINT8_MAX;
	int64_t x666 = 354414361776LL;
	uint16_t x667 = 2118U;
	int16_t x668 = -1;
	int64_t t159 = -697339627150697798LL;

    t159 = (x665&(x666%(x667!=x668)));

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x670 = INT64_MIN;
	int8_t x671 = INT8_MAX;
	uint8_t x672 = 6U;
	volatile int64_t t160 = 0LL;

    t160 = (x669&(x670%(x671!=x672)));

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x673 = UINT16_MAX;
	uint16_t x674 = 491U;
	volatile uint16_t x675 = 7946U;
	static int32_t t161 = -77610836;

    t161 = (x673&(x674%(x675!=x676)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x677 = 47448813U;
	uint8_t x678 = UINT8_MAX;
	int32_t x680 = -929373;

    t162 = (x677&(x678%(x679!=x680)));

    if (t162 != 0U) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x682 = -3;
	uint64_t x683 = 708155287837387778LLU;
	volatile uint8_t x684 = 1U;
	int64_t t163 = 57LL;

    t163 = (x681&(x682%(x683!=x684)));

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x685 = INT16_MAX;
	int64_t x686 = 754LL;
	int8_t x687 = -1;
	uint8_t x688 = 8U;
	static volatile int64_t t164 = -636702309648291345LL;

    t164 = (x685&(x686%(x687!=x688)));

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x690 = 754104U;
	static int32_t x691 = 138152401;
	volatile int8_t x692 = INT8_MAX;
	static volatile uint32_t t165 = 13U;

    t165 = (x689&(x690%(x691!=x692)));

    if (t165 != 0U) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint64_t x693 = 505616LLU;
	int8_t x694 = INT8_MIN;
	int8_t x696 = 0;
	uint64_t t166 = 1746176341398133LLU;

    t166 = (x693&(x694%(x695!=x696)));

    if (t166 != 0LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x698 = 3U;
	static int32_t x699 = INT32_MIN;
	volatile uint8_t x700 = 1U;
	uint32_t t167 = 17U;

    t167 = (x697&(x698%(x699!=x700)));

    if (t167 != 0U) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x701 = UINT64_MAX;
	volatile int32_t x702 = INT32_MIN;
	int64_t x704 = INT64_MIN;
	volatile uint64_t t168 = 57165LLU;

    t168 = (x701&(x702%(x703!=x704)));

    if (t168 != 0LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x706 = INT8_MIN;
	volatile int64_t x707 = INT64_MIN;
	int8_t x708 = -1;

    t169 = (x705&(x706%(x707!=x708)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x710 = 15865434;
	volatile int32_t x711 = -1;
	static int32_t x712 = -15923;
	volatile int32_t t170 = 2718566;

    t170 = (x709&(x710%(x711!=x712)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x714 = UINT16_MAX;
	uint8_t x715 = UINT8_MAX;
	volatile uint16_t x716 = 2099U;
	static volatile int32_t t171 = -45508;

    t171 = (x713&(x714%(x715!=x716)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static int32_t x717 = -1;
	int32_t x718 = -1;
	volatile uint64_t x719 = UINT64_MAX;
	static int16_t x720 = 9451;
	volatile int32_t t172 = 15372;

    t172 = (x717&(x718%(x719!=x720)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x721 = 1381311;
	volatile int32_t x722 = -1;
	volatile int64_t x723 = INT64_MIN;
	int32_t x724 = INT32_MAX;
	static int32_t t173 = 9742;

    t173 = (x721&(x722%(x723!=x724)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x725 = INT8_MAX;
	int32_t x726 = -1;
	volatile int16_t x727 = INT16_MIN;
	static int16_t x728 = -2;
	int32_t t174 = -655825253;

    t174 = (x725&(x726%(x727!=x728)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x729 = 920539392U;
	volatile int16_t x730 = INT16_MAX;
	uint8_t x731 = UINT8_MAX;
	uint32_t x732 = UINT32_MAX;
	uint32_t t175 = 31960174U;

    t175 = (x729&(x730%(x731!=x732)));

    if (t175 != 0U) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile int16_t x733 = 47;
	int32_t x735 = INT32_MAX;
	volatile int32_t x736 = INT32_MIN;
	volatile int32_t t176 = -1;

    t176 = (x733&(x734%(x735!=x736)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x737 = -62;
	volatile int8_t x738 = 1;
	int64_t x739 = 34437450118454791LL;
	volatile int32_t t177 = -6;

    t177 = (x737&(x738%(x739!=x740)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int32_t x741 = -43538;
	static uint64_t x742 = UINT64_MAX;
	int32_t x743 = INT32_MIN;
	uint16_t x744 = 9157U;
	volatile uint64_t t178 = 5083761434866086LLU;

    t178 = (x741&(x742%(x743!=x744)));

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x745 = UINT8_MAX;
	int8_t x746 = -1;
	uint32_t x747 = 11744871U;
	static uint64_t x748 = 0LLU;
	volatile int32_t t179 = 0;

    t179 = (x745&(x746%(x747!=x748)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x750 = -11;
	int16_t x751 = -1;
	volatile int8_t x752 = -13;
	volatile int64_t t180 = 9LL;

    t180 = (x749&(x750%(x751!=x752)));

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x753 = -6991109;
	static int8_t x754 = INT8_MAX;
	int16_t x755 = 783;
	uint64_t x756 = 5LLU;
	int32_t t181 = -1;

    t181 = (x753&(x754%(x755!=x756)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x757 = INT16_MAX;
	int64_t x759 = INT64_MAX;
	int16_t x760 = INT16_MAX;
	static volatile int64_t t182 = -354679388473788749LL;

    t182 = (x757&(x758%(x759!=x760)));

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x761 = INT32_MAX;
	uint16_t x762 = UINT16_MAX;
	volatile int64_t x763 = INT64_MIN;
	int32_t x764 = INT32_MAX;
	volatile int32_t t183 = -1802142;

    t183 = (x761&(x762%(x763!=x764)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x765 = UINT16_MAX;
	static uint32_t x767 = 13522U;
	static int8_t x768 = -1;
	volatile int32_t t184 = 7846766;

    t184 = (x765&(x766%(x767!=x768)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x769 = INT16_MIN;
	int32_t x770 = 650;
	int16_t x771 = -1;
	static int8_t x772 = INT8_MIN;
	int32_t t185 = -83;

    t185 = (x769&(x770%(x771!=x772)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x773 = -1;
	volatile int8_t x774 = INT8_MAX;
	volatile int64_t x775 = INT64_MAX;
	volatile int32_t x776 = -1;

    t186 = (x773&(x774%(x775!=x776)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x777 = INT64_MIN;
	int16_t x778 = INT16_MIN;
	int64_t x779 = 390758801595LL;
	int64_t t187 = 47062LL;

    t187 = (x777&(x778%(x779!=x780)));

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x781 = 693768702U;
	int8_t x782 = -38;
	static int16_t x783 = INT16_MIN;
	int32_t x784 = INT32_MIN;
	volatile uint32_t t188 = 0U;

    t188 = (x781&(x782%(x783!=x784)));

    if (t188 != 0U) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x785 = -1;
	static uint8_t x786 = UINT8_MAX;
	volatile int32_t t189 = -28150056;

    t189 = (x785&(x786%(x787!=x788)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x789 = -4;
	int32_t x790 = INT32_MIN;
	static volatile int32_t t190 = 14103852;

    t190 = (x789&(x790%(x791!=x792)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint16_t x793 = UINT16_MAX;
	static uint16_t x794 = 3U;

    t191 = (x793&(x794%(x795!=x796)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x798 = 8175U;
	volatile uint64_t x799 = 67503040746977LLU;
	int64_t x800 = -23828988476935LL;
	static volatile int32_t t192 = -462883;

    t192 = (x797&(x798%(x799!=x800)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int64_t x801 = 2030043LL;
	uint16_t x804 = 1134U;
	int64_t t193 = 1439LL;

    t193 = (x801&(x802%(x803!=x804)));

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x805 = -911883;
	int16_t x806 = -1;
	volatile int64_t x807 = 53724941LL;
	uint32_t x808 = 3855085U;
	volatile int32_t t194 = -18590;

    t194 = (x805&(x806%(x807!=x808)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x810 = UINT64_MAX;
	uint8_t x812 = UINT8_MAX;

    t195 = (x809&(x810%(x811!=x812)));

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x813 = -1;
	static int8_t x814 = INT8_MIN;
	int64_t x815 = INT64_MIN;

    t196 = (x813&(x814%(x815!=x816)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint16_t x817 = UINT16_MAX;
	uint32_t x818 = UINT32_MAX;
	uint8_t x819 = UINT8_MAX;
	static int8_t x820 = -15;
	static uint32_t t197 = 5067U;

    t197 = (x817&(x818%(x819!=x820)));

    if (t197 != 0U) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x822 = INT64_MIN;
	static uint16_t x823 = 26953U;
	int32_t x824 = -1;

    t198 = (x821&(x822%(x823!=x824)));

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int32_t x826 = -1;
	uint64_t x827 = UINT64_MAX;
	volatile int32_t t199 = -3;

    t199 = (x825&(x826%(x827!=x828)));

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

