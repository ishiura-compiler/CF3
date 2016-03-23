
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

uint64_t x2 = UINT64_MAX;
uint8_t x3 = 13U;
volatile uint16_t x8 = 1U;
int8_t x10 = 3;
int32_t t2 = 1;
int64_t t4 = INT64_MAX;
int8_t x31 = INT8_MIN;
int64_t x32 = -29731LL;
static uint16_t x34 = 2344U;
volatile int8_t x40 = 1;
static volatile uint64_t t12 = 897LLU;
volatile int64_t x53 = INT64_MIN;
int64_t x54 = INT64_MIN;
int64_t x55 = -1LL;
uint16_t x56 = 346U;
volatile int32_t t13 = -36930092;
int16_t x59 = 0;
volatile uint32_t x60 = 9537U;
static volatile uint32_t t14 = 807647824U;
static int32_t x63 = -1;
int32_t t17 = -59231;
volatile int32_t x76 = 220;
static volatile int32_t t18 = -78;
uint16_t x77 = UINT16_MAX;
int32_t x78 = INT32_MAX;
static volatile int64_t x79 = -1013117411228478199LL;
static uint16_t x82 = 2U;
int64_t x90 = INT64_MIN;
volatile int32_t t22 = INT32_MAX;
int32_t x94 = INT32_MIN;
int64_t x100 = INT64_MAX;
static int32_t x101 = 435749796;
int16_t x106 = INT16_MAX;
static int32_t x108 = INT32_MIN;
int16_t x112 = INT16_MIN;
int16_t x113 = 2;
int64_t x118 = INT64_MIN;
int16_t x126 = -1;
uint64_t x127 = 125628LLU;
volatile uint32_t x128 = UINT32_MAX;
volatile uint32_t t31 = 61U;
static int8_t x133 = INT8_MIN;
uint64_t x137 = 14357LLU;
int8_t x138 = -49;
int64_t x145 = -350LL;
uint16_t x146 = 3U;
volatile int32_t t36 = -1;
volatile int8_t x155 = -1;
static int32_t t38 = -110893;
int32_t x161 = 441;
int8_t x163 = INT8_MAX;
int64_t x171 = 21736600LL;
uint16_t x181 = 8U;
uint8_t x183 = 8U;
int32_t t45 = 122;
uint16_t x186 = 20U;
volatile uint16_t x194 = UINT16_MAX;
int32_t x199 = -697520;
static volatile int32_t x202 = -113;
int32_t t50 = 8180;
static int16_t x209 = -1;
uint32_t x213 = 91U;
int32_t x224 = -108950;
int32_t t55 = 497;
int64_t x227 = INT64_MIN;
volatile int16_t x237 = -2;
static int16_t x240 = INT16_MIN;
static int32_t x242 = 2;
volatile uint32_t t60 = 2U;
volatile int8_t x252 = INT8_MAX;
volatile int32_t x258 = -1;
uint64_t x262 = UINT64_MAX;
int64_t x270 = INT64_MIN;
int32_t x275 = 2982;
int16_t x284 = -2;
int64_t x290 = INT64_MAX;
uint16_t x295 = 8132U;
int64_t x299 = 217016657LL;
static volatile int64_t x301 = INT64_MIN;
static volatile uint64_t x305 = UINT64_MAX;
static uint64_t x306 = 6021112641343LLU;
int8_t x315 = 1;
int64_t x322 = INT64_MIN;
uint16_t x324 = 16286U;
uint8_t x327 = 57U;
int8_t x332 = INT8_MIN;
int64_t x333 = INT64_MIN;
int32_t x335 = -1;
int32_t t83 = -53;
static int16_t x337 = INT16_MAX;
static volatile int16_t x339 = 203;
static uint32_t x340 = 167U;
int64_t x348 = -1LL;
int8_t x349 = -1;
uint8_t x352 = UINT8_MAX;
int16_t x359 = INT16_MAX;
static int32_t t90 = 24984790;
int16_t x375 = INT16_MIN;
int16_t x381 = -1;
int16_t x388 = INT16_MIN;
int64_t x389 = INT64_MAX;
volatile int16_t x395 = INT16_MIN;
int64_t t98 = 9599LL;
int16_t x408 = INT16_MAX;
static volatile uint64_t x410 = UINT64_MAX;
int64_t x411 = INT64_MIN;
int8_t x413 = INT8_MIN;
int32_t x415 = INT32_MIN;
static uint32_t x417 = UINT32_MAX;
int16_t x420 = -1;
uint16_t x431 = 11514U;
static volatile uint8_t x432 = 9U;
volatile int64_t x434 = 6LL;
int32_t t109 = 5;
int32_t x445 = INT32_MAX;
uint8_t x453 = 21U;
volatile int32_t x455 = INT32_MIN;
volatile int32_t t113 = 10;
volatile int32_t x458 = INT32_MIN;
uint16_t x461 = UINT16_MAX;
volatile int32_t t115 = -53;
int8_t x466 = -1;
uint16_t x471 = 9997U;
int64_t x491 = INT64_MAX;
int32_t x493 = INT32_MIN;
volatile uint32_t t125 = UINT32_MAX;
int64_t x508 = 87465133537LL;
uint16_t x510 = 1552U;
volatile int32_t t128 = 438;
static uint32_t x519 = 28406293U;
volatile int16_t x526 = INT16_MIN;
int32_t t131 = -6;
int32_t x531 = -1731417;
static int32_t x537 = INT32_MIN;
int32_t x543 = INT32_MIN;
int32_t x548 = INT32_MAX;
int8_t x559 = INT8_MIN;
int8_t x562 = INT8_MAX;
uint32_t x565 = 6695080U;
volatile int32_t t141 = 17021075;
volatile int16_t x571 = INT16_MAX;
int64_t x576 = -6648LL;
int32_t x577 = -497668064;
uint8_t x580 = 0U;
volatile uint32_t t145 = UINT32_MAX;
uint32_t x585 = 2U;
uint16_t x587 = 14U;
volatile int32_t x588 = -1;
int32_t t146 = -2;
int16_t x591 = INT16_MIN;
static uint32_t x596 = UINT32_MAX;
uint8_t x599 = 17U;
int16_t x616 = INT16_MIN;
uint16_t x621 = 22U;
int8_t x622 = -1;
volatile int64_t t156 = INT64_MIN;
int8_t x638 = 1;
int8_t x645 = INT8_MAX;
volatile int32_t t161 = 0;
int8_t x649 = INT8_MIN;
int32_t x652 = -1;
volatile int32_t t162 = -2690192;
int16_t x655 = 212;
int16_t x659 = INT16_MIN;
int8_t x661 = 1;
int32_t x662 = -1;
uint8_t x664 = 36U;
int64_t x673 = INT64_MIN;
volatile int64_t x676 = -1LL;
uint16_t x677 = 32U;
int32_t x685 = 17356;
volatile int64_t t171 = -134855536LL;
int8_t x689 = INT8_MIN;
uint32_t x695 = UINT32_MAX;
int8_t x702 = -1;
volatile uint64_t x708 = UINT64_MAX;
volatile int32_t x712 = 15;
int64_t x717 = INT64_MAX;
int16_t x721 = 1182;
static int32_t x725 = INT32_MAX;
volatile int32_t x728 = INT32_MAX;
volatile int32_t t182 = -228;
uint8_t x743 = UINT8_MAX;
int16_t x747 = INT16_MIN;
static uint8_t x754 = 1U;
static volatile int16_t x755 = -1;
static int8_t x757 = -1;
volatile int32_t t189 = -7;
static int32_t x765 = 38355161;
int16_t x768 = -54;
static uint64_t x769 = 41759524990226LLU;
int8_t x771 = 1;
static int16_t x775 = -1;
volatile int32_t t193 = 322350659;
int64_t x778 = INT64_MIN;
static volatile int32_t t194 = 43585;
volatile int32_t t195 = -32611;
int64_t x787 = 22LL;
volatile int32_t t196 = 223471126;
int32_t x789 = INT32_MIN;
int32_t t197 = -79;
static volatile int16_t x799 = INT16_MAX;
int16_t x800 = 3274;


void f0(void) {
    	int8_t x1 = -1;
	uint64_t x4 = UINT64_MAX;
	volatile uint64_t t0 = UINT64_MAX;

    t0 = ((x1<=(x2&x3))^x4);

    if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint8_t x5 = UINT8_MAX;
	int8_t x6 = INT8_MAX;
	int32_t x7 = INT32_MIN;
	int32_t t1 = 14;

    t1 = ((x5<=(x6&x7))^x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = 1618465775U;
	static int8_t x11 = INT8_MIN;
	static int16_t x12 = -3834;

    t2 = ((x9<=(x10&x11))^x12);

    if (t2 != -3834) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = -1;
	int64_t x14 = -1511566242LL;
	uint64_t x15 = UINT64_MAX;
	int8_t x16 = 0;
	static volatile int32_t t3 = -666;

    t3 = ((x13<=(x14&x15))^x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int16_t x17 = 3;
	static volatile uint16_t x18 = 1U;
	uint16_t x19 = UINT16_MAX;
	static volatile int64_t x20 = INT64_MAX;

    t4 = ((x17<=(x18&x19))^x20);

    if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = 28344589435457244LL;
	int32_t x22 = -92;
	static uint8_t x23 = UINT8_MAX;
	volatile int8_t x24 = INT8_MAX;
	volatile int32_t t5 = 1018;

    t5 = ((x21<=(x22&x23))^x24);

    if (t5 != 127) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = INT32_MIN;
	int32_t x26 = INT32_MIN;
	int16_t x27 = -1;
	int8_t x28 = INT8_MAX;
	int32_t t6 = -46295;

    t6 = ((x25<=(x26&x27))^x28);

    if (t6 != 126) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = -4040927029253190192LL;
	static uint16_t x30 = UINT16_MAX;
	int64_t t7 = -1LL;

    t7 = ((x29<=(x30&x31))^x32);

    if (t7 != -29732LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint32_t x33 = 257U;
	int8_t x35 = -2;
	volatile uint64_t x36 = 496LLU;
	volatile uint64_t t8 = 328LLU;

    t8 = ((x33<=(x34&x35))^x36);

    if (t8 != 497LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x37 = 9U;
	int32_t x38 = INT32_MAX;
	uint16_t x39 = UINT16_MAX;
	int32_t t9 = -3817;

    t9 = ((x37<=(x38&x39))^x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = INT64_MAX;
	uint8_t x42 = 2U;
	int16_t x43 = INT16_MAX;
	int16_t x44 = INT16_MIN;
	volatile int32_t t10 = 470;

    t10 = ((x41<=(x42&x43))^x44);

    if (t10 != -32768) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint8_t x45 = UINT8_MAX;
	uint16_t x46 = 23666U;
	int32_t x47 = -1;
	int64_t x48 = INT64_MIN;
	volatile int64_t t11 = 510851771324714353LL;

    t11 = ((x45<=(x46&x47))^x48);

    if (t11 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = INT64_MIN;
	int16_t x50 = -1;
	int32_t x51 = -112973;
	uint64_t x52 = UINT64_MAX;

    t12 = ((x49<=(x50&x51))^x52);

    if (t12 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f13(void) {
    

    t13 = ((x53<=(x54&x55))^x56);

    if (t13 != 347) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = 17530766;
	volatile int64_t x58 = INT64_MAX;

    t14 = ((x57<=(x58&x59))^x60);

    if (t14 != 9537U) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = -1;
	volatile int64_t x62 = 307439LL;
	int16_t x64 = INT16_MIN;
	volatile int32_t t15 = 448279349;

    t15 = ((x61<=(x62&x63))^x64);

    if (t15 != -32767) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = INT8_MIN;
	int64_t x66 = INT64_MIN;
	int16_t x67 = INT16_MIN;
	int64_t x68 = -1LL;
	static int64_t t16 = -29410132146946LL;

    t16 = ((x65<=(x66&x67))^x68);

    if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = INT16_MIN;
	volatile int8_t x70 = INT8_MAX;
	int16_t x71 = -1;
	volatile int8_t x72 = 22;

    t17 = ((x69<=(x70&x71))^x72);

    if (t17 != 23) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x73 = UINT8_MAX;
	static volatile int64_t x74 = INT64_MIN;
	uint16_t x75 = 2U;

    t18 = ((x73<=(x74&x75))^x76);

    if (t18 != 220) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint8_t x80 = 71U;
	volatile int32_t t19 = -876986742;

    t19 = ((x77<=(x78&x79))^x80);

    if (t19 != 70) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = INT32_MIN;
	uint64_t x83 = 7743476052LLU;
	static volatile int64_t x84 = INT64_MAX;
	static int64_t t20 = INT64_MAX;

    t20 = ((x81<=(x82&x83))^x84);

    if (t20 != INT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile uint32_t x85 = UINT32_MAX;
	uint64_t x86 = UINT64_MAX;
	volatile int32_t x87 = -1056368019;
	volatile int16_t x88 = INT16_MIN;
	static volatile int32_t t21 = 2041173;

    t21 = ((x85<=(x86&x87))^x88);

    if (t21 != -32767) { NG(); } else { ; }
	
}

void f22(void) {
    	static int8_t x89 = INT8_MAX;
	static int64_t x91 = -1LL;
	int32_t x92 = INT32_MAX;

    t22 = ((x89<=(x90&x91))^x92);

    if (t22 != INT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x93 = 1701;
	uint64_t x95 = 465LLU;
	static int16_t x96 = INT16_MAX;
	static int32_t t23 = 37935686;

    t23 = ((x93<=(x94&x95))^x96);

    if (t23 != 32767) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x97 = 682U;
	int16_t x98 = INT16_MIN;
	int32_t x99 = -10948;
	int64_t t24 = INT64_MAX;

    t24 = ((x97<=(x98&x99))^x100);

    if (t24 != INT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint32_t x102 = 1174U;
	uint64_t x103 = 15522205489855505LLU;
	uint32_t x104 = 20U;
	static volatile uint32_t t25 = 1676964862U;

    t25 = ((x101<=(x102&x103))^x104);

    if (t25 != 20U) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile uint64_t x105 = 114185618896438LLU;
	int32_t x107 = 337964;
	static volatile int32_t t26 = INT32_MIN;

    t26 = ((x105<=(x106&x107))^x108);

    if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x109 = 116U;
	static volatile int8_t x110 = INT8_MIN;
	uint32_t x111 = 1U;
	int32_t t27 = -11070028;

    t27 = ((x109<=(x110&x111))^x112);

    if (t27 != -32768) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x114 = UINT32_MAX;
	int8_t x115 = 1;
	static volatile uint32_t x116 = 1U;
	uint32_t t28 = 27U;

    t28 = ((x113<=(x114&x115))^x116);

    if (t28 != 1U) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x117 = INT16_MIN;
	int32_t x119 = INT32_MIN;
	static volatile uint8_t x120 = 52U;
	int32_t t29 = -65;

    t29 = ((x117<=(x118&x119))^x120);

    if (t29 != 52) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = 169;
	int8_t x122 = INT8_MAX;
	int8_t x123 = INT8_MIN;
	static uint8_t x124 = 3U;
	volatile int32_t t30 = -105;

    t30 = ((x121<=(x122&x123))^x124);

    if (t30 != 3) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x125 = 596LLU;

    t31 = ((x125<=(x126&x127))^x128);

    if (t31 != 4294967294U) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int64_t x129 = INT64_MIN;
	static int64_t x130 = 634018364LL;
	uint8_t x131 = UINT8_MAX;
	static int16_t x132 = INT16_MIN;
	int32_t t32 = 63377752;

    t32 = ((x129<=(x130&x131))^x132);

    if (t32 != -32767) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x134 = 1U;
	uint16_t x135 = UINT16_MAX;
	uint16_t x136 = 2860U;
	int32_t t33 = 12661589;

    t33 = ((x133<=(x134&x135))^x136);

    if (t33 != 2861) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x139 = -2701;
	int16_t x140 = -29;
	volatile int32_t t34 = -61904930;

    t34 = ((x137<=(x138&x139))^x140);

    if (t34 != -30) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x141 = INT8_MAX;
	int32_t x142 = INT32_MAX;
	int64_t x143 = -1LL;
	int64_t x144 = INT64_MIN;
	int64_t t35 = 15458LL;

    t35 = ((x141<=(x142&x143))^x144);

    if (t35 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static int16_t x147 = INT16_MIN;
	uint8_t x148 = 3U;

    t36 = ((x145<=(x146&x147))^x148);

    if (t36 != 2) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int16_t x149 = -1;
	int8_t x150 = 23;
	volatile int8_t x151 = INT8_MIN;
	int32_t x152 = -6;
	static volatile int32_t t37 = -55;

    t37 = ((x149<=(x150&x151))^x152);

    if (t37 != -5) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = INT8_MIN;
	uint32_t x154 = 2199455U;
	int16_t x156 = 120;

    t38 = ((x153<=(x154&x155))^x156);

    if (t38 != 120) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x157 = -1;
	uint64_t x158 = UINT64_MAX;
	volatile int8_t x159 = INT8_MIN;
	static int64_t x160 = INT64_MAX;
	volatile int64_t t39 = INT64_MAX;

    t39 = ((x157<=(x158&x159))^x160);

    if (t39 != INT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x162 = -1;
	volatile int64_t x164 = -25385521586LL;
	volatile int64_t t40 = 1192656515LL;

    t40 = ((x161<=(x162&x163))^x164);

    if (t40 != -25385521586LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x165 = 16169;
	int32_t x166 = INT32_MIN;
	volatile int64_t x167 = -295082LL;
	uint8_t x168 = UINT8_MAX;
	static volatile int32_t t41 = 17858703;

    t41 = ((x165<=(x166&x167))^x168);

    if (t41 != 255) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x169 = UINT64_MAX;
	volatile uint8_t x170 = UINT8_MAX;
	uint16_t x172 = UINT16_MAX;
	volatile int32_t t42 = 1171669;

    t42 = ((x169<=(x170&x171))^x172);

    if (t42 != 65535) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x173 = INT32_MIN;
	int16_t x174 = -1;
	int8_t x175 = INT8_MIN;
	static volatile uint64_t x176 = 13093LLU;
	volatile uint64_t t43 = 8282677950LLU;

    t43 = ((x173<=(x174&x175))^x176);

    if (t43 != 13092LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = INT64_MIN;
	volatile int64_t x178 = -1LL;
	int64_t x179 = INT64_MIN;
	volatile int32_t x180 = -1;
	int32_t t44 = -436163067;

    t44 = ((x177<=(x178&x179))^x180);

    if (t44 != -2) { NG(); } else { ; }
	
}

void f45(void) {
    	static int64_t x182 = INT64_MAX;
	static int8_t x184 = 27;

    t45 = ((x181<=(x182&x183))^x184);

    if (t45 != 26) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x185 = INT32_MIN;
	volatile uint8_t x187 = 44U;
	volatile int16_t x188 = 781;
	int32_t t46 = -1033;

    t46 = ((x185<=(x186&x187))^x188);

    if (t46 != 780) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint16_t x189 = 15163U;
	int16_t x190 = INT16_MIN;
	volatile int64_t x191 = -26349LL;
	static int8_t x192 = INT8_MIN;
	int32_t t47 = -30761252;

    t47 = ((x189<=(x190&x191))^x192);

    if (t47 != -128) { NG(); } else { ; }
	
}

void f48(void) {
    	static int16_t x193 = -112;
	static int32_t x195 = INT32_MIN;
	int8_t x196 = INT8_MIN;
	volatile int32_t t48 = 71120;

    t48 = ((x193<=(x194&x195))^x196);

    if (t48 != -127) { NG(); } else { ; }
	
}

void f49(void) {
    	static int8_t x197 = -1;
	int8_t x198 = -1;
	volatile int32_t x200 = INT32_MAX;
	int32_t t49 = INT32_MAX;

    t49 = ((x197<=(x198&x199))^x200);

    if (t49 != INT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint64_t x201 = 1LLU;
	volatile uint64_t x203 = UINT64_MAX;
	volatile int8_t x204 = INT8_MIN;

    t50 = ((x201<=(x202&x203))^x204);

    if (t50 != -127) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x205 = -445LL;
	int16_t x206 = -1;
	int8_t x207 = INT8_MIN;
	int16_t x208 = INT16_MIN;
	int32_t t51 = 492;

    t51 = ((x205<=(x206&x207))^x208);

    if (t51 != -32767) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint16_t x210 = 105U;
	uint16_t x211 = 135U;
	uint16_t x212 = UINT16_MAX;
	volatile int32_t t52 = -1;

    t52 = ((x209<=(x210&x211))^x212);

    if (t52 != 65534) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x214 = INT8_MIN;
	uint16_t x215 = 3U;
	static int32_t x216 = INT32_MIN;
	int32_t t53 = INT32_MIN;

    t53 = ((x213<=(x214&x215))^x216);

    if (t53 != INT32_MIN) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int32_t x217 = 15079;
	int32_t x218 = INT32_MAX;
	uint32_t x219 = 888U;
	uint16_t x220 = 26406U;
	static int32_t t54 = -55;

    t54 = ((x217<=(x218&x219))^x220);

    if (t54 != 26406) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = INT32_MIN;
	static volatile int32_t x222 = INT32_MAX;
	int8_t x223 = INT8_MIN;

    t55 = ((x221<=(x222&x223))^x224);

    if (t55 != -108949) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x225 = INT8_MAX;
	uint32_t x226 = UINT32_MAX;
	uint16_t x228 = 24205U;
	static int32_t t56 = -3271841;

    t56 = ((x225<=(x226&x227))^x228);

    if (t56 != 24205) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x229 = 68379LL;
	int8_t x230 = -3;
	uint8_t x231 = 0U;
	static int8_t x232 = INT8_MIN;
	volatile int32_t t57 = -827460;

    t57 = ((x229<=(x230&x231))^x232);

    if (t57 != -128) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int16_t x233 = 0;
	volatile int32_t x234 = INT32_MIN;
	uint8_t x235 = 1U;
	static int16_t x236 = -1;
	int32_t t58 = -415;

    t58 = ((x233<=(x234&x235))^x236);

    if (t58 != -2) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x238 = 0U;
	int64_t x239 = -10935713LL;
	static int32_t t59 = -182;

    t59 = ((x237<=(x238&x239))^x240);

    if (t59 != -32767) { NG(); } else { ; }
	
}

void f60(void) {
    	static int64_t x241 = INT64_MAX;
	volatile int16_t x243 = -7134;
	static uint32_t x244 = 503546817U;

    t60 = ((x241<=(x242&x243))^x244);

    if (t60 != 503546817U) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x245 = -3;
	volatile int16_t x246 = -12;
	int8_t x247 = INT8_MAX;
	uint32_t x248 = 2238U;
	volatile uint32_t t61 = 29115836U;

    t61 = ((x245<=(x246&x247))^x248);

    if (t61 != 2239U) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x249 = -1LL;
	int32_t x250 = INT32_MIN;
	int64_t x251 = -182439478799669LL;
	volatile int32_t t62 = -3;

    t62 = ((x249<=(x250&x251))^x252);

    if (t62 != 127) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint16_t x253 = UINT16_MAX;
	volatile uint64_t x254 = 168123LLU;
	int64_t x255 = INT64_MIN;
	int64_t x256 = INT64_MIN;
	volatile int64_t t63 = INT64_MIN;

    t63 = ((x253<=(x254&x255))^x256);

    if (t63 != INT64_MIN) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int16_t x257 = -1;
	static int16_t x259 = INT16_MIN;
	int16_t x260 = INT16_MAX;
	volatile int32_t t64 = 973974314;

    t64 = ((x257<=(x258&x259))^x260);

    if (t64 != 32767) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = 13951625;
	static int32_t x263 = -7272768;
	uint64_t x264 = UINT64_MAX;
	uint64_t t65 = 1297872577LLU;

    t65 = ((x261<=(x262&x263))^x264);

    if (t65 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x265 = INT64_MIN;
	int8_t x266 = INT8_MIN;
	int16_t x267 = -2469;
	uint16_t x268 = 27U;
	int32_t t66 = -1955156;

    t66 = ((x265<=(x266&x267))^x268);

    if (t66 != 26) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x269 = -1734;
	static int16_t x271 = INT16_MIN;
	int16_t x272 = -2692;
	volatile int32_t t67 = 74522;

    t67 = ((x269<=(x270&x271))^x272);

    if (t67 != -2692) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x273 = -2;
	uint32_t x274 = 71087559U;
	static int8_t x276 = INT8_MIN;
	volatile int32_t t68 = -89651;

    t68 = ((x273<=(x274&x275))^x276);

    if (t68 != -128) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x277 = INT16_MAX;
	uint64_t x278 = UINT64_MAX;
	static int64_t x279 = -99044341805LL;
	uint8_t x280 = 1U;
	static volatile int32_t t69 = 906713;

    t69 = ((x277<=(x278&x279))^x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static int8_t x281 = 30;
	static int8_t x282 = -1;
	int8_t x283 = INT8_MIN;
	volatile int32_t t70 = 275404;

    t70 = ((x281<=(x282&x283))^x284);

    if (t70 != -2) { NG(); } else { ; }
	
}

void f71(void) {
    	static int64_t x285 = INT64_MAX;
	static volatile uint8_t x286 = 1U;
	static uint8_t x287 = 98U;
	int16_t x288 = INT16_MIN;
	volatile int32_t t71 = 1038468353;

    t71 = ((x285<=(x286&x287))^x288);

    if (t71 != -32768) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x289 = 3U;
	volatile int32_t x291 = -26;
	static int64_t x292 = -245LL;
	volatile int64_t t72 = -50179960803460455LL;

    t72 = ((x289<=(x290&x291))^x292);

    if (t72 != -246LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x293 = INT64_MAX;
	static int64_t x294 = INT64_MIN;
	int8_t x296 = INT8_MIN;
	volatile int32_t t73 = -51428;

    t73 = ((x293<=(x294&x295))^x296);

    if (t73 != -128) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x297 = INT64_MIN;
	static uint32_t x298 = UINT32_MAX;
	int8_t x300 = 9;
	volatile int32_t t74 = -30;

    t74 = ((x297<=(x298&x299))^x300);

    if (t74 != 8) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x302 = UINT16_MAX;
	int16_t x303 = INT16_MAX;
	static int16_t x304 = 1;
	int32_t t75 = 142;

    t75 = ((x301<=(x302&x303))^x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint32_t x307 = 4293372U;
	static int8_t x308 = INT8_MAX;
	static volatile int32_t t76 = 11499;

    t76 = ((x305<=(x306&x307))^x308);

    if (t76 != 127) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x309 = INT8_MAX;
	int64_t x310 = 2785092848059098563LL;
	int8_t x311 = INT8_MIN;
	uint8_t x312 = UINT8_MAX;
	int32_t t77 = 123491982;

    t77 = ((x309<=(x310&x311))^x312);

    if (t77 != 254) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int64_t x313 = INT64_MIN;
	int16_t x314 = -48;
	uint64_t x316 = UINT64_MAX;
	volatile uint64_t t78 = 80648LLU;

    t78 = ((x313<=(x314&x315))^x316);

    if (t78 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint64_t x317 = 25979080256326LLU;
	uint32_t x318 = 3548U;
	int64_t x319 = INT64_MIN;
	static uint64_t x320 = 5965407579019176LLU;
	uint64_t t79 = 976340594LLU;

    t79 = ((x317<=(x318&x319))^x320);

    if (t79 != 5965407579019176LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint8_t x321 = 2U;
	int64_t x323 = -1LL;
	volatile int32_t t80 = 16;

    t80 = ((x321<=(x322&x323))^x324);

    if (t80 != 16286) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x325 = UINT8_MAX;
	volatile int8_t x326 = INT8_MIN;
	static int32_t x328 = -1;
	int32_t t81 = -7772;

    t81 = ((x325<=(x326&x327))^x328);

    if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int64_t x329 = -1LL;
	int64_t x330 = INT64_MAX;
	int32_t x331 = INT32_MAX;
	static volatile int32_t t82 = 10919548;

    t82 = ((x329<=(x330&x331))^x332);

    if (t82 != -127) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x334 = INT32_MIN;
	volatile uint16_t x336 = 8638U;

    t83 = ((x333<=(x334&x335))^x336);

    if (t83 != 8639) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x338 = 15145U;
	static volatile uint32_t t84 = 1325795U;

    t84 = ((x337<=(x338&x339))^x340);

    if (t84 != 167U) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x341 = UINT8_MAX;
	int8_t x342 = INT8_MIN;
	int64_t x343 = INT64_MIN;
	int64_t x344 = INT64_MIN;
	volatile int64_t t85 = INT64_MIN;

    t85 = ((x341<=(x342&x343))^x344);

    if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x345 = INT64_MIN;
	int32_t x346 = -1;
	static int64_t x347 = -1LL;
	volatile int64_t t86 = 93214601LL;

    t86 = ((x345<=(x346&x347))^x348);

    if (t86 != -2LL) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint64_t x350 = UINT64_MAX;
	int8_t x351 = INT8_MAX;
	volatile int32_t t87 = 580494759;

    t87 = ((x349<=(x350&x351))^x352);

    if (t87 != 255) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = INT8_MAX;
	int16_t x354 = -1;
	int8_t x355 = 7;
	uint64_t x356 = 160061173353064700LLU;
	volatile uint64_t t88 = 4271960531202926LLU;

    t88 = ((x353<=(x354&x355))^x356);

    if (t88 != 160061173353064700LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x357 = 1;
	int16_t x358 = INT16_MIN;
	int8_t x360 = 52;
	int32_t t89 = 19385;

    t89 = ((x357<=(x358&x359))^x360);

    if (t89 != 52) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int8_t x361 = INT8_MIN;
	static uint16_t x362 = 10617U;
	int8_t x363 = -52;
	static volatile int16_t x364 = 1;

    t90 = ((x361<=(x362&x363))^x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x365 = 138099988LL;
	uint64_t x366 = UINT64_MAX;
	int16_t x367 = 61;
	uint8_t x368 = 15U;
	int32_t t91 = 46727;

    t91 = ((x365<=(x366&x367))^x368);

    if (t91 != 15) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x369 = INT16_MIN;
	volatile uint64_t x370 = UINT64_MAX;
	uint32_t x371 = UINT32_MAX;
	uint16_t x372 = 13U;
	int32_t t92 = 1536503;

    t92 = ((x369<=(x370&x371))^x372);

    if (t92 != 13) { NG(); } else { ; }
	
}

void f93(void) {
    	static int32_t x373 = INT32_MAX;
	static uint8_t x374 = 5U;
	int16_t x376 = 24;
	int32_t t93 = 2803868;

    t93 = ((x373<=(x374&x375))^x376);

    if (t93 != 24) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x377 = 44895U;
	static int64_t x378 = 7346766LL;
	int64_t x379 = -1LL;
	int8_t x380 = INT8_MAX;
	static volatile int32_t t94 = -5;

    t94 = ((x377<=(x378&x379))^x380);

    if (t94 != 126) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint16_t x382 = 197U;
	uint64_t x383 = 3LLU;
	uint16_t x384 = 278U;
	int32_t t95 = 9;

    t95 = ((x381<=(x382&x383))^x384);

    if (t95 != 278) { NG(); } else { ; }
	
}

void f96(void) {
    	static int64_t x385 = 133752138LL;
	uint32_t x386 = 0U;
	int16_t x387 = -129;
	volatile int32_t t96 = -41871;

    t96 = ((x385<=(x386&x387))^x388);

    if (t96 != -32768) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x390 = -122;
	int64_t x391 = INT64_MIN;
	uint16_t x392 = 1115U;
	volatile int32_t t97 = -12;

    t97 = ((x389<=(x390&x391))^x392);

    if (t97 != 1115) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x393 = 833932565140481LLU;
	int64_t x394 = -1LL;
	int64_t x396 = -1LL;

    t98 = ((x393<=(x394&x395))^x396);

    if (t98 != -2LL) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x397 = INT64_MIN;
	static volatile int16_t x398 = INT16_MIN;
	uint8_t x399 = 13U;
	uint8_t x400 = 31U;
	int32_t t99 = -133111184;

    t99 = ((x397<=(x398&x399))^x400);

    if (t99 != 30) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x401 = 1U;
	int8_t x402 = INT8_MIN;
	volatile int32_t x403 = 3505;
	volatile int16_t x404 = 3;
	int32_t t100 = 24;

    t100 = ((x401<=(x402&x403))^x404);

    if (t100 != 2) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x405 = INT32_MAX;
	uint64_t x406 = UINT64_MAX;
	static int8_t x407 = INT8_MIN;
	volatile int32_t t101 = -1;

    t101 = ((x405<=(x406&x407))^x408);

    if (t101 != 32766) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int32_t x409 = 149;
	uint32_t x412 = UINT32_MAX;
	uint32_t t102 = 1268U;

    t102 = ((x409<=(x410&x411))^x412);

    if (t102 != 4294967294U) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x414 = -257256011177367LL;
	uint32_t x416 = 6749U;
	volatile uint32_t t103 = 693920804U;

    t103 = ((x413<=(x414&x415))^x416);

    if (t103 != 6749U) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile uint32_t x418 = 50U;
	static uint16_t x419 = 0U;
	volatile int32_t t104 = 592671;

    t104 = ((x417<=(x418&x419))^x420);

    if (t104 != -1) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x421 = INT32_MIN;
	static uint16_t x422 = 56U;
	volatile int8_t x423 = INT8_MIN;
	int16_t x424 = INT16_MIN;
	volatile int32_t t105 = 3978;

    t105 = ((x421<=(x422&x423))^x424);

    if (t105 != -32767) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int8_t x425 = -1;
	static int32_t x426 = -754;
	int32_t x427 = INT32_MIN;
	int16_t x428 = INT16_MAX;
	volatile int32_t t106 = -3;

    t106 = ((x425<=(x426&x427))^x428);

    if (t106 != 32767) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x429 = -1LL;
	uint64_t x430 = UINT64_MAX;
	int32_t t107 = -1;

    t107 = ((x429<=(x430&x431))^x432);

    if (t107 != 9) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x433 = INT8_MIN;
	int16_t x435 = 1;
	volatile int16_t x436 = INT16_MIN;
	static volatile int32_t t108 = -744;

    t108 = ((x433<=(x434&x435))^x436);

    if (t108 != -32767) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x437 = INT16_MIN;
	int8_t x438 = 38;
	uint32_t x439 = 89U;
	uint8_t x440 = 7U;

    t109 = ((x437<=(x438&x439))^x440);

    if (t109 != 7) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile int16_t x441 = -1;
	int64_t x442 = INT64_MIN;
	int64_t x443 = INT64_MIN;
	int8_t x444 = INT8_MIN;
	volatile int32_t t110 = 138839;

    t110 = ((x441<=(x442&x443))^x444);

    if (t110 != -128) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x446 = -40LL;
	int8_t x447 = INT8_MIN;
	int32_t x448 = -2264;
	int32_t t111 = 53;

    t111 = ((x445<=(x446&x447))^x448);

    if (t111 != -2264) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x449 = -1LL;
	int32_t x450 = INT32_MIN;
	int32_t x451 = 239;
	volatile int64_t x452 = INT64_MAX;
	int64_t t112 = -8605748726LL;

    t112 = ((x449<=(x450&x451))^x452);

    if (t112 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x454 = INT64_MAX;
	int16_t x456 = INT16_MIN;

    t113 = ((x453<=(x454&x455))^x456);

    if (t113 != -32767) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x457 = -1LL;
	int16_t x459 = INT16_MAX;
	static volatile uint16_t x460 = 6001U;
	int32_t t114 = 390598604;

    t114 = ((x457<=(x458&x459))^x460);

    if (t114 != 6000) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x462 = INT8_MIN;
	volatile uint16_t x463 = UINT16_MAX;
	int8_t x464 = -1;

    t115 = ((x461<=(x462&x463))^x464);

    if (t115 != -1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int64_t x465 = -1500239998757750LL;
	int8_t x467 = -9;
	uint32_t x468 = 1533044096U;
	uint32_t t116 = 203U;

    t116 = ((x465<=(x466&x467))^x468);

    if (t116 != 1533044097U) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int16_t x469 = 0;
	static volatile int32_t x470 = -1;
	int8_t x472 = INT8_MIN;
	volatile int32_t t117 = -98;

    t117 = ((x469<=(x470&x471))^x472);

    if (t117 != -127) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x473 = INT32_MIN;
	static int8_t x474 = INT8_MIN;
	int16_t x475 = 47;
	int8_t x476 = -11;
	volatile int32_t t118 = -3927;

    t118 = ((x473<=(x474&x475))^x476);

    if (t118 != -12) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x477 = 7U;
	uint8_t x478 = UINT8_MAX;
	int8_t x479 = 1;
	static int16_t x480 = INT16_MIN;
	volatile int32_t t119 = -124;

    t119 = ((x477<=(x478&x479))^x480);

    if (t119 != -32768) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x481 = 444LL;
	uint16_t x482 = UINT16_MAX;
	uint16_t x483 = 11U;
	int8_t x484 = INT8_MAX;
	int32_t t120 = -8406;

    t120 = ((x481<=(x482&x483))^x484);

    if (t120 != 127) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x485 = 205U;
	static uint32_t x486 = 152979083U;
	uint8_t x487 = 11U;
	volatile int32_t x488 = INT32_MIN;
	static volatile int32_t t121 = INT32_MIN;

    t121 = ((x485<=(x486&x487))^x488);

    if (t121 != INT32_MIN) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint16_t x489 = UINT16_MAX;
	int32_t x490 = INT32_MIN;
	uint8_t x492 = UINT8_MAX;
	volatile int32_t t122 = 23052580;

    t122 = ((x489<=(x490&x491))^x492);

    if (t122 != 254) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x494 = -103520;
	int16_t x495 = 25;
	volatile uint64_t x496 = 4489444277670742059LLU;
	uint64_t t123 = 83308859303784106LLU;

    t123 = ((x493<=(x494&x495))^x496);

    if (t123 != 4489444277670742058LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x497 = 14;
	int16_t x498 = INT16_MIN;
	int8_t x499 = INT8_MIN;
	volatile uint64_t x500 = 15352706829LLU;
	static volatile uint64_t t124 = 144449LLU;

    t124 = ((x497<=(x498&x499))^x500);

    if (t124 != 15352706829LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint8_t x501 = 3U;
	int8_t x502 = INT8_MIN;
	int8_t x503 = 33;
	uint32_t x504 = UINT32_MAX;

    t125 = ((x501<=(x502&x503))^x504);

    if (t125 != UINT32_MAX) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x505 = INT8_MIN;
	volatile int8_t x506 = -1;
	int16_t x507 = INT16_MIN;
	volatile int64_t t126 = -12833850LL;

    t126 = ((x505<=(x506&x507))^x508);

    if (t126 != 87465133537LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x509 = 26U;
	int8_t x511 = INT8_MAX;
	static volatile int64_t x512 = INT64_MAX;
	int64_t t127 = INT64_MAX;

    t127 = ((x509<=(x510&x511))^x512);

    if (t127 != INT64_MAX) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x513 = INT8_MIN;
	int32_t x514 = INT32_MIN;
	static uint16_t x515 = 3982U;
	static int8_t x516 = INT8_MIN;

    t128 = ((x513<=(x514&x515))^x516);

    if (t128 != -127) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x517 = UINT16_MAX;
	uint8_t x518 = 63U;
	int64_t x520 = -1LL;
	static int64_t t129 = 0LL;

    t129 = ((x517<=(x518&x519))^x520);

    if (t129 != -1LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x521 = INT32_MIN;
	int32_t x522 = INT32_MIN;
	static int64_t x523 = 1420179485669051LL;
	int64_t x524 = INT64_MIN;
	static volatile int64_t t130 = 261606LL;

    t130 = ((x521<=(x522&x523))^x524);

    if (t130 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x525 = -716401824106083725LL;
	volatile int8_t x527 = INT8_MIN;
	uint16_t x528 = UINT16_MAX;

    t131 = ((x525<=(x526&x527))^x528);

    if (t131 != 65534) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x529 = INT16_MAX;
	int8_t x530 = INT8_MAX;
	uint16_t x532 = 37U;
	volatile int32_t t132 = 25851983;

    t132 = ((x529<=(x530&x531))^x532);

    if (t132 != 37) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x533 = INT16_MIN;
	int8_t x534 = -1;
	int16_t x535 = -1;
	int64_t x536 = 186564778LL;
	static int64_t t133 = -214532343515650LL;

    t133 = ((x533<=(x534&x535))^x536);

    if (t133 != 186564779LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x538 = INT32_MIN;
	uint64_t x539 = 6188963LLU;
	volatile int16_t x540 = INT16_MAX;
	int32_t t134 = -2547439;

    t134 = ((x537<=(x538&x539))^x540);

    if (t134 != 32767) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint8_t x541 = UINT8_MAX;
	static int64_t x542 = -1LL;
	int16_t x544 = -1;
	static int32_t t135 = -72040844;

    t135 = ((x541<=(x542&x543))^x544);

    if (t135 != -1) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x545 = INT16_MAX;
	static int16_t x546 = -1;
	uint8_t x547 = 6U;
	volatile int32_t t136 = INT32_MAX;

    t136 = ((x545<=(x546&x547))^x548);

    if (t136 != INT32_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x549 = INT8_MIN;
	int64_t x550 = -78LL;
	uint8_t x551 = UINT8_MAX;
	static int32_t x552 = INT32_MIN;
	volatile int32_t t137 = -3;

    t137 = ((x549<=(x550&x551))^x552);

    if (t137 != -2147483647) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x553 = 83;
	int8_t x554 = INT8_MAX;
	int8_t x555 = INT8_MAX;
	int8_t x556 = -10;
	int32_t t138 = 31;

    t138 = ((x553<=(x554&x555))^x556);

    if (t138 != -9) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x557 = -9;
	uint8_t x558 = UINT8_MAX;
	int32_t x560 = -63;
	static volatile int32_t t139 = 102;

    t139 = ((x557<=(x558&x559))^x560);

    if (t139 != -64) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x561 = -10546;
	int8_t x563 = 3;
	static int8_t x564 = 16;
	int32_t t140 = 32312;

    t140 = ((x561<=(x562&x563))^x564);

    if (t140 != 17) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile uint64_t x566 = UINT64_MAX;
	int64_t x567 = INT64_MIN;
	uint8_t x568 = 10U;

    t141 = ((x565<=(x566&x567))^x568);

    if (t141 != 11) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x569 = -3080;
	int8_t x570 = -14;
	volatile uint32_t x572 = 5599U;
	uint32_t t142 = 27015U;

    t142 = ((x569<=(x570&x571))^x572);

    if (t142 != 5598U) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x573 = -192188747;
	volatile int16_t x574 = -1;
	uint8_t x575 = 1U;
	static volatile int64_t t143 = -147046213564LL;

    t143 = ((x573<=(x574&x575))^x576);

    if (t143 != -6647LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x578 = INT8_MAX;
	static int32_t x579 = INT32_MAX;
	volatile int32_t t144 = 42981;

    t144 = ((x577<=(x578&x579))^x580);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int16_t x581 = INT16_MAX;
	int32_t x582 = INT32_MAX;
	int16_t x583 = 2642;
	uint32_t x584 = UINT32_MAX;

    t145 = ((x581<=(x582&x583))^x584);

    if (t145 != UINT32_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint16_t x586 = 52U;

    t146 = ((x585<=(x586&x587))^x588);

    if (t146 != -2) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x589 = INT32_MIN;
	uint8_t x590 = 29U;
	static uint16_t x592 = UINT16_MAX;
	volatile int32_t t147 = -62;

    t147 = ((x589<=(x590&x591))^x592);

    if (t147 != 65534) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x593 = INT16_MAX;
	int64_t x594 = -1LL;
	volatile uint64_t x595 = 75866422LLU;
	volatile uint32_t t148 = 6434U;

    t148 = ((x593<=(x594&x595))^x596);

    if (t148 != 4294967294U) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x597 = 336;
	static uint8_t x598 = 0U;
	uint32_t x600 = 367637U;
	uint32_t t149 = 216U;

    t149 = ((x597<=(x598&x599))^x600);

    if (t149 != 367637U) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x601 = -1;
	int32_t x602 = INT32_MIN;
	static int32_t x603 = INT32_MAX;
	int32_t x604 = -1;
	static volatile int32_t t150 = -12550;

    t150 = ((x601<=(x602&x603))^x604);

    if (t150 != -2) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int64_t x605 = INT64_MIN;
	int16_t x606 = 2;
	static int16_t x607 = -6597;
	static volatile int32_t x608 = INT32_MIN;
	int32_t t151 = 858;

    t151 = ((x605<=(x606&x607))^x608);

    if (t151 != -2147483647) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x609 = -1;
	uint16_t x610 = 5510U;
	int16_t x611 = 1;
	int64_t x612 = INT64_MAX;
	static int64_t t152 = 15LL;

    t152 = ((x609<=(x610&x611))^x612);

    if (t152 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x613 = INT32_MAX;
	int16_t x614 = INT16_MIN;
	int32_t x615 = INT32_MIN;
	int32_t t153 = -5618;

    t153 = ((x613<=(x614&x615))^x616);

    if (t153 != -32768) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x617 = 0U;
	volatile int16_t x618 = INT16_MIN;
	uint8_t x619 = UINT8_MAX;
	int16_t x620 = 2595;
	int32_t t154 = -57975;

    t154 = ((x617<=(x618&x619))^x620);

    if (t154 != 2594) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x623 = INT8_MIN;
	volatile int16_t x624 = -8;
	volatile int32_t t155 = 5620;

    t155 = ((x621<=(x622&x623))^x624);

    if (t155 != -8) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint32_t x625 = 9159317U;
	volatile uint32_t x626 = 1U;
	static uint8_t x627 = 1U;
	volatile int64_t x628 = INT64_MIN;

    t156 = ((x625<=(x626&x627))^x628);

    if (t156 != INT64_MIN) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x629 = 6636082686LL;
	static uint16_t x630 = 0U;
	int8_t x631 = INT8_MIN;
	int16_t x632 = INT16_MIN;
	static int32_t t157 = 6881951;

    t157 = ((x629<=(x630&x631))^x632);

    if (t157 != -32768) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x633 = -1;
	int32_t x634 = INT32_MAX;
	static int32_t x635 = INT32_MAX;
	static volatile int32_t x636 = -1;
	static volatile int32_t t158 = 2512981;

    t158 = ((x633<=(x634&x635))^x636);

    if (t158 != -2) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int32_t x637 = -1;
	int8_t x639 = -6;
	static int16_t x640 = INT16_MIN;
	int32_t t159 = -7233;

    t159 = ((x637<=(x638&x639))^x640);

    if (t159 != -32767) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x641 = INT8_MAX;
	uint8_t x642 = UINT8_MAX;
	volatile uint32_t x643 = 12380712U;
	uint64_t x644 = 42168380LLU;
	uint64_t t160 = 359102783992LLU;

    t160 = ((x641<=(x642&x643))^x644);

    if (t160 != 42168380LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int16_t x646 = INT16_MIN;
	int8_t x647 = INT8_MAX;
	static uint16_t x648 = 24U;

    t161 = ((x645<=(x646&x647))^x648);

    if (t161 != 24) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x650 = UINT64_MAX;
	int16_t x651 = INT16_MAX;

    t162 = ((x649<=(x650&x651))^x652);

    if (t162 != -1) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint16_t x653 = 26U;
	volatile int8_t x654 = -1;
	static uint16_t x656 = UINT16_MAX;
	volatile int32_t t163 = -64589762;

    t163 = ((x653<=(x654&x655))^x656);

    if (t163 != 65534) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x657 = 5;
	int32_t x658 = INT32_MIN;
	int8_t x660 = 1;
	int32_t t164 = -1822;

    t164 = ((x657<=(x658&x659))^x660);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x663 = INT64_MAX;
	volatile int32_t t165 = 1719;

    t165 = ((x661<=(x662&x663))^x664);

    if (t165 != 37) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint8_t x665 = 1U;
	int64_t x666 = -1LL;
	int16_t x667 = -2995;
	volatile uint16_t x668 = 1U;
	volatile int32_t t166 = -363708;

    t166 = ((x665<=(x666&x667))^x668);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x669 = INT8_MAX;
	int8_t x670 = -1;
	int32_t x671 = 32645438;
	int32_t x672 = 1;
	int32_t t167 = -80001798;

    t167 = ((x669<=(x670&x671))^x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x674 = UINT8_MAX;
	volatile uint16_t x675 = UINT16_MAX;
	int64_t t168 = -961153608178422019LL;

    t168 = ((x673<=(x674&x675))^x676);

    if (t168 != -2LL) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x678 = -1;
	int16_t x679 = 2357;
	volatile int8_t x680 = -3;
	int32_t t169 = -1183781;

    t169 = ((x677<=(x678&x679))^x680);

    if (t169 != -4) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x681 = UINT8_MAX;
	int8_t x682 = 0;
	uint16_t x683 = 9U;
	static uint16_t x684 = 28U;
	volatile int32_t t170 = -4;

    t170 = ((x681<=(x682&x683))^x684);

    if (t170 != 28) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x686 = 113U;
	int64_t x687 = INT64_MIN;
	static int64_t x688 = -1LL;

    t171 = ((x685<=(x686&x687))^x688);

    if (t171 != -1LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x690 = INT16_MIN;
	volatile int8_t x691 = -1;
	volatile int32_t x692 = INT32_MIN;
	volatile int32_t t172 = INT32_MIN;

    t172 = ((x689<=(x690&x691))^x692);

    if (t172 != INT32_MIN) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x693 = 91413876143LLU;
	uint16_t x694 = 51U;
	uint8_t x696 = 79U;
	int32_t t173 = 89869;

    t173 = ((x693<=(x694&x695))^x696);

    if (t173 != 79) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x697 = INT64_MIN;
	static int64_t x698 = INT64_MIN;
	volatile int8_t x699 = -1;
	static volatile int16_t x700 = INT16_MAX;
	int32_t t174 = 711551;

    t174 = ((x697<=(x698&x699))^x700);

    if (t174 != 32766) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x701 = 13;
	uint64_t x703 = UINT64_MAX;
	int64_t x704 = 24908343LL;
	volatile int64_t t175 = -6487993LL;

    t175 = ((x701<=(x702&x703))^x704);

    if (t175 != 24908342LL) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x705 = INT64_MIN;
	int16_t x706 = INT16_MIN;
	static int32_t x707 = -1;
	volatile uint64_t t176 = 136553809LLU;

    t176 = ((x705<=(x706&x707))^x708);

    if (t176 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x709 = INT32_MAX;
	uint16_t x710 = UINT16_MAX;
	int16_t x711 = -1;
	static volatile int32_t t177 = 1;

    t177 = ((x709<=(x710&x711))^x712);

    if (t177 != 15) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint32_t x713 = UINT32_MAX;
	int64_t x714 = -2LL;
	int32_t x715 = 290013710;
	int16_t x716 = INT16_MIN;
	volatile int32_t t178 = 194;

    t178 = ((x713<=(x714&x715))^x716);

    if (t178 != -32768) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x718 = INT8_MIN;
	int8_t x719 = INT8_MIN;
	static uint64_t x720 = 1054805696779114LLU;
	volatile uint64_t t179 = 18557004LLU;

    t179 = ((x717<=(x718&x719))^x720);

    if (t179 != 1054805696779114LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static int32_t x722 = INT32_MAX;
	volatile uint8_t x723 = 3U;
	uint16_t x724 = 680U;
	static int32_t t180 = -139;

    t180 = ((x721<=(x722&x723))^x724);

    if (t180 != 680) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x726 = 428;
	int64_t x727 = INT64_MIN;
	volatile int32_t t181 = INT32_MAX;

    t181 = ((x725<=(x726&x727))^x728);

    if (t181 != INT32_MAX) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x729 = UINT16_MAX;
	int32_t x730 = INT32_MIN;
	static int16_t x731 = INT16_MAX;
	uint8_t x732 = 20U;

    t182 = ((x729<=(x730&x731))^x732);

    if (t182 != 20) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint16_t x733 = UINT16_MAX;
	volatile int64_t x734 = INT64_MIN;
	uint8_t x735 = 0U;
	int8_t x736 = INT8_MIN;
	volatile int32_t t183 = -260;

    t183 = ((x733<=(x734&x735))^x736);

    if (t183 != -128) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x737 = UINT64_MAX;
	static volatile uint8_t x738 = 14U;
	static uint8_t x739 = 1U;
	int8_t x740 = INT8_MIN;
	static volatile int32_t t184 = 626777;

    t184 = ((x737<=(x738&x739))^x740);

    if (t184 != -128) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint32_t x741 = 17698U;
	int64_t x742 = INT64_MAX;
	uint8_t x744 = 12U;
	int32_t t185 = -9154322;

    t185 = ((x741<=(x742&x743))^x744);

    if (t185 != 12) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x745 = INT32_MIN;
	int32_t x746 = -1;
	int16_t x748 = INT16_MIN;
	volatile int32_t t186 = 23720;

    t186 = ((x745<=(x746&x747))^x748);

    if (t186 != -32767) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint32_t x749 = UINT32_MAX;
	volatile uint8_t x750 = 59U;
	uint64_t x751 = 15711315386417LLU;
	static uint32_t x752 = 33310302U;
	static volatile uint32_t t187 = 61220588U;

    t187 = ((x749<=(x750&x751))^x752);

    if (t187 != 33310302U) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int16_t x753 = 114;
	volatile uint16_t x756 = UINT16_MAX;
	int32_t t188 = -875803206;

    t188 = ((x753<=(x754&x755))^x756);

    if (t188 != 65535) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint8_t x758 = UINT8_MAX;
	volatile int32_t x759 = 447550182;
	static int16_t x760 = INT16_MIN;

    t189 = ((x757<=(x758&x759))^x760);

    if (t189 != -32767) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x761 = 1U;
	int64_t x762 = INT64_MIN;
	int16_t x763 = -1;
	static int16_t x764 = INT16_MIN;
	int32_t t190 = -156;

    t190 = ((x761<=(x762&x763))^x764);

    if (t190 != -32768) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x766 = 6U;
	uint16_t x767 = 149U;
	int32_t t191 = -25033890;

    t191 = ((x765<=(x766&x767))^x768);

    if (t191 != -54) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x770 = INT32_MAX;
	int8_t x772 = 5;
	static int32_t t192 = -14514;

    t192 = ((x769<=(x770&x771))^x772);

    if (t192 != 5) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint16_t x773 = 0U;
	int16_t x774 = 1;
	int16_t x776 = INT16_MIN;

    t193 = ((x773<=(x774&x775))^x776);

    if (t193 != -32767) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x777 = INT8_MAX;
	int32_t x779 = INT32_MIN;
	int8_t x780 = INT8_MIN;

    t194 = ((x777<=(x778&x779))^x780);

    if (t194 != -128) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x781 = INT64_MAX;
	int16_t x782 = INT16_MIN;
	int32_t x783 = -1;
	int16_t x784 = INT16_MIN;

    t195 = ((x781<=(x782&x783))^x784);

    if (t195 != -32768) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int64_t x785 = 516571711101689392LL;
	uint64_t x786 = 79511728LLU;
	static volatile int16_t x788 = -46;

    t196 = ((x785<=(x786&x787))^x788);

    if (t196 != -46) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x790 = 20455137U;
	int16_t x791 = INT16_MAX;
	int8_t x792 = 3;

    t197 = ((x789<=(x790&x791))^x792);

    if (t197 != 3) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x793 = -1;
	uint16_t x794 = 21262U;
	uint32_t x795 = 2U;
	uint8_t x796 = 2U;
	int32_t t198 = 3466474;

    t198 = ((x793<=(x794&x795))^x796);

    if (t198 != 2) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x797 = 226U;
	uint64_t x798 = 2158713965332985LLU;
	volatile int32_t t199 = -3;

    t199 = ((x797<=(x798&x799))^x800);

    if (t199 != 3275) { NG(); } else { ; }
	
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

