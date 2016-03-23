
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

uint32_t x7 = 1296763U;
int32_t x15 = INT32_MIN;
int16_t x18 = -8;
static int32_t x32 = INT32_MIN;
static uint8_t x39 = UINT8_MAX;
uint64_t x42 = UINT64_MAX;
volatile int32_t x48 = INT32_MAX;
static int64_t x52 = INT64_MIN;
int64_t x53 = INT64_MIN;
int16_t x54 = INT16_MAX;
int16_t x56 = INT16_MIN;
static volatile int64_t t13 = -1653936077848439203LL;
int16_t x58 = -1;
int32_t t14 = -10372;
uint64_t x61 = UINT64_MAX;
volatile uint64_t t15 = 12LLU;
static uint64_t x66 = 45LLU;
volatile int8_t x67 = -1;
uint32_t x73 = 191U;
int8_t x83 = -1;
volatile uint32_t t21 = 31U;
uint64_t x93 = UINT64_MAX;
volatile uint64_t t23 = 29271LLU;
uint8_t x99 = 20U;
uint64_t t25 = 1386480LLU;
volatile int16_t x112 = 7219;
int64_t x114 = -107174787333899668LL;
int16_t x121 = -362;
int32_t t30 = -5878;
int32_t x128 = INT32_MIN;
int8_t x137 = INT8_MAX;
int64_t x138 = -1LL;
int8_t x145 = -1;
int8_t x146 = INT8_MIN;
int64_t x150 = INT64_MAX;
static uint8_t x153 = UINT8_MAX;
int8_t x157 = INT8_MIN;
int64_t x171 = -4412764807491666LL;
volatile int64_t t42 = -26258LL;
uint8_t x174 = 1U;
static volatile int8_t x178 = 0;
volatile int16_t x181 = INT16_MAX;
volatile int32_t t45 = -33882;
int16_t x188 = INT16_MIN;
static int8_t x189 = INT8_MIN;
static volatile int32_t t47 = -5;
uint16_t x197 = 705U;
volatile int64_t t50 = -1496028227637974713LL;
int32_t t51 = -101132;
int16_t x210 = -1;
int32_t x222 = INT32_MIN;
int64_t x223 = 41LL;
static uint16_t x238 = 5U;
volatile int16_t x240 = -1;
int32_t t59 = -4;
volatile int32_t x247 = 812;
static volatile int32_t t62 = INT32_MIN;
int16_t x262 = INT16_MIN;
int32_t t65 = -4;
static uint8_t x265 = 8U;
int32_t x267 = INT32_MIN;
int64_t x269 = -1LL;
int16_t x270 = INT16_MAX;
int64_t x275 = 120489961696LL;
int64_t x276 = -1LL;
volatile int64_t t68 = 2016140837532318835LL;
volatile int32_t x277 = INT32_MIN;
volatile int64_t x284 = INT64_MIN;
uint8_t x291 = 23U;
int16_t x293 = -1;
int32_t t73 = 120863;
static int16_t x303 = -1;
int32_t x319 = INT32_MIN;
int64_t t82 = 938105378LL;
volatile int64_t x336 = -523712739LL;
static volatile int64_t t83 = 951448434764766574LL;
volatile int32_t x341 = -14297;
volatile int32_t t85 = -27941;
volatile uint8_t x347 = 3U;
uint8_t x354 = 64U;
int32_t t88 = -4767791;
static int8_t x362 = INT8_MAX;
int16_t x366 = -3;
static int32_t t91 = -7;
int64_t x372 = -1LL;
static int8_t x379 = INT8_MIN;
volatile int8_t x387 = INT8_MAX;
int8_t x395 = INT8_MIN;
uint32_t x396 = UINT32_MAX;
int32_t t98 = 348;
int32_t x402 = -446;
static int8_t x403 = -1;
volatile uint8_t x404 = UINT8_MAX;
int32_t t100 = -81037;
uint16_t x409 = 37U;
uint16_t x411 = 1U;
int32_t t102 = 1;
static int16_t x413 = 12786;
static int16_t x421 = INT16_MAX;
volatile int64_t x428 = -1LL;
int8_t x430 = INT8_MIN;
static volatile int64_t x437 = 0LL;
volatile uint8_t x440 = UINT8_MAX;
int32_t t110 = -8697230;
int64_t x446 = INT64_MAX;
int64_t t111 = 1LL;
int16_t x451 = 0;
uint16_t x455 = 456U;
int16_t x456 = INT16_MIN;
uint16_t x459 = UINT16_MAX;
int16_t x461 = -1;
uint16_t x463 = UINT16_MAX;
int32_t t117 = 3;
uint16_t x474 = 3131U;
volatile int32_t t118 = -2;
static int64_t x490 = -1LL;
volatile int8_t x493 = -1;
int64_t x495 = INT64_MAX;
volatile int64_t t123 = 21LL;
uint64_t x498 = 6487LLU;
static uint64_t x499 = 360192939390LLU;
volatile int8_t x500 = 0;
uint64_t t124 = 2890LLU;
int64_t x507 = 3661699LL;
static int64_t x508 = INT64_MIN;
int32_t x513 = -181;
uint16_t x514 = UINT16_MAX;
volatile int16_t x519 = INT16_MAX;
volatile int32_t t129 = -1;
static int8_t x522 = 2;
int64_t x523 = -1LL;
static int32_t x524 = -8381;
static int32_t t130 = -242;
int64_t x525 = INT64_MAX;
int64_t t131 = -2678118723593239963LL;
uint32_t t134 = 238U;
int16_t x545 = 9;
volatile int32_t t136 = -7;
static uint16_t x551 = UINT16_MAX;
int16_t x556 = INT16_MIN;
int8_t x563 = -1;
int32_t x564 = INT32_MIN;
int32_t x576 = -6709547;
uint32_t x578 = 436489103U;
int64_t t146 = 11881LL;
uint64_t x594 = 8131LLU;
uint64_t x604 = 374900926859035LLU;
static volatile int64_t t150 = -8529LL;
volatile int16_t x608 = 25;
int32_t x611 = -5833;
static int64_t t154 = -4924872009742LL;
volatile uint64_t x624 = 815105653383LLU;
volatile int32_t t155 = 83;
int64_t x627 = -28899709LL;
int32_t x632 = 183785320;
uint16_t x633 = 34U;
int16_t x634 = INT16_MAX;
static int64_t x647 = 346360435605LL;
int8_t x651 = -1;
uint32_t x657 = UINT32_MAX;
int8_t x660 = INT8_MIN;
static uint16_t x665 = 159U;
int16_t x672 = -1;
volatile uint64_t t168 = 11937434175073575LLU;
static uint16_t x677 = UINT16_MAX;
static int32_t x685 = INT32_MIN;
uint8_t x688 = UINT8_MAX;
static int64_t x690 = -88676743963137LL;
int32_t x697 = 19421;
volatile int32_t t174 = 885;
static int64_t x707 = INT64_MAX;
volatile int64_t x708 = INT64_MIN;
int64_t t176 = -25888LL;
int16_t x709 = 4958;
volatile int32_t x717 = INT32_MIN;
int8_t x718 = INT8_MAX;
volatile int32_t x720 = INT32_MIN;
uint8_t x729 = 2U;
static int16_t x730 = -1;
int8_t x732 = INT8_MAX;
int8_t x733 = -2;
volatile int32_t t184 = -291;
volatile uint32_t t185 = 601746U;
int8_t x745 = INT8_MIN;
static volatile int64_t x750 = -188857434657965LL;
int32_t x751 = INT32_MIN;
int16_t x763 = -1;
volatile uint32_t x766 = UINT32_MAX;
uint32_t x767 = UINT32_MAX;
uint32_t x768 = 1238U;
int32_t x769 = -1;
int64_t t192 = -5512578368569LL;
volatile int8_t x774 = -1;
static int16_t x776 = -1;
volatile int32_t t193 = -18;
static uint16_t x779 = UINT16_MAX;
int64_t x782 = INT64_MIN;
uint32_t x784 = 37309U;
static int64_t x785 = INT64_MIN;
volatile int16_t x787 = INT16_MAX;
int64_t x791 = INT64_MIN;
uint8_t x793 = 43U;
int8_t x800 = INT8_MIN;


void f0(void) {
    	int8_t x1 = -1;
	int32_t x2 = INT32_MAX;
	uint32_t x3 = 333872U;
	static uint8_t x4 = 3U;
	volatile int32_t t0 = -1390;

    t0 = (x1&(x2^(x3>x4)));

    if (t0 != 2147483646) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x5 = -1;
	uint32_t x6 = UINT32_MAX;
	uint64_t x8 = 74099699895026554LLU;
	uint32_t t1 = UINT32_MAX;

    t1 = (x5&(x6^(x7>x8)));

    if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = -1LL;
	int32_t x10 = INT32_MIN;
	int64_t x11 = 1LL;
	uint64_t x12 = 4LLU;
	int64_t t2 = -279988432284LL;

    t2 = (x9&(x10^(x11>x12)));

    if (t2 != -2147483648LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = INT16_MAX;
	static uint16_t x14 = 1U;
	int32_t x16 = INT32_MIN;
	int32_t t3 = 311800;

    t3 = (x13&(x14^(x15>x16)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = -5833;
	int64_t x19 = INT64_MIN;
	uint64_t x20 = 428600419455943238LLU;
	volatile int32_t t4 = 1;

    t4 = (x17&(x18^(x19>x20)));

    if (t4 != -5839) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = 184307U;
	static uint8_t x22 = UINT8_MAX;
	volatile uint16_t x23 = 248U;
	uint8_t x24 = 3U;
	static uint32_t t5 = 6987U;

    t5 = (x21&(x22^(x23>x24)));

    if (t5 != 242U) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint8_t x25 = 2U;
	static int16_t x26 = INT16_MIN;
	static uint64_t x27 = UINT64_MAX;
	static volatile int8_t x28 = INT8_MIN;
	int32_t t6 = -29;

    t6 = (x25&(x26^(x27>x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = INT32_MIN;
	volatile uint16_t x30 = UINT16_MAX;
	int64_t x31 = INT64_MIN;
	volatile int32_t t7 = 8057837;

    t7 = (x29&(x30^(x31>x32)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x33 = 28U;
	volatile uint64_t x34 = 1LLU;
	int64_t x35 = INT64_MAX;
	int16_t x36 = 6;
	volatile uint64_t t8 = 23262498138400087LLU;

    t8 = (x33&(x34^(x35>x36)));

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x37 = 30215785060831294LL;
	int32_t x38 = INT32_MIN;
	int32_t x40 = -1309;
	volatile int64_t t9 = 1907LL;

    t9 = (x37&(x38^(x39>x40)));

    if (t9 != 30215784269611008LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x41 = UINT16_MAX;
	uint16_t x43 = 263U;
	volatile uint8_t x44 = 5U;
	uint64_t t10 = 24288869480018LLU;

    t10 = (x41&(x42^(x43>x44)));

    if (t10 != 65534LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x45 = INT64_MIN;
	int64_t x46 = 13LL;
	int16_t x47 = INT16_MIN;
	volatile int64_t t11 = 160094272767359LL;

    t11 = (x45&(x46^(x47>x48)));

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static int32_t x49 = -1;
	uint8_t x50 = 76U;
	int32_t x51 = INT32_MAX;
	volatile int32_t t12 = 121868;

    t12 = (x49&(x50^(x51>x52)));

    if (t12 != 77) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x55 = INT64_MIN;

    t13 = (x53&(x54^(x55>x56)));

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x57 = UINT16_MAX;
	int32_t x59 = INT32_MIN;
	int16_t x60 = INT16_MIN;

    t14 = (x57&(x58^(x59>x60)));

    if (t14 != 65535) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x62 = -36887LL;
	int32_t x63 = -6526;
	volatile uint32_t x64 = UINT32_MAX;

    t15 = (x61&(x62^(x63>x64)));

    if (t15 != 18446744073709514729LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = INT8_MIN;
	int32_t x68 = -1;
	static uint64_t t16 = 34396691412LLU;

    t16 = (x65&(x66^(x67>x68)));

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x69 = 86;
	volatile uint32_t x70 = 8779442U;
	int8_t x71 = 2;
	int32_t x72 = -47;
	uint32_t t17 = 958653U;

    t17 = (x69&(x70^(x71>x72)));

    if (t17 != 18U) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x74 = INT32_MIN;
	uint8_t x75 = UINT8_MAX;
	uint8_t x76 = 0U;
	uint32_t t18 = 471U;

    t18 = (x73&(x74^(x75>x76)));

    if (t18 != 1U) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x77 = INT8_MIN;
	int8_t x78 = -1;
	int8_t x79 = INT8_MIN;
	int8_t x80 = -1;
	int32_t t19 = -106953;

    t19 = (x77&(x78^(x79>x80)));

    if (t19 != -128) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint64_t x81 = 13049351LLU;
	int16_t x82 = INT16_MAX;
	uint16_t x84 = UINT16_MAX;
	uint64_t t20 = 409632LLU;

    t20 = (x81&(x82^(x83>x84)));

    if (t20 != 7687LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x85 = 10U;
	int32_t x86 = 1;
	int64_t x87 = -2582LL;
	volatile int64_t x88 = INT64_MIN;

    t21 = (x85&(x86^(x87>x88)));

    if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = INT8_MIN;
	int16_t x90 = -933;
	volatile int16_t x91 = INT16_MIN;
	int16_t x92 = INT16_MAX;
	volatile int32_t t22 = 56532713;

    t22 = (x89&(x90^(x91>x92)));

    if (t22 != -1024) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x94 = UINT32_MAX;
	static uint64_t x95 = UINT64_MAX;
	int32_t x96 = INT32_MAX;

    t23 = (x93&(x94^(x95>x96)));

    if (t23 != 4294967294LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = INT32_MIN;
	uint32_t x98 = UINT32_MAX;
	int32_t x100 = -1;
	volatile uint32_t t24 = 1659820U;

    t24 = (x97&(x98^(x99>x100)));

    if (t24 != 2147483648U) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x101 = 17301279409518LLU;
	int8_t x102 = INT8_MAX;
	int8_t x103 = INT8_MAX;
	uint32_t x104 = 471735U;

    t25 = (x101&(x102^(x103>x104)));

    if (t25 != 110LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x105 = INT16_MIN;
	uint8_t x106 = 6U;
	uint8_t x107 = 92U;
	volatile int16_t x108 = 348;
	volatile int32_t t26 = 52666;

    t26 = (x105&(x106^(x107>x108)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = INT32_MAX;
	static uint32_t x110 = 330908U;
	int64_t x111 = INT64_MIN;
	volatile uint32_t t27 = 123U;

    t27 = (x109&(x110^(x111>x112)));

    if (t27 != 330908U) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x113 = 2U;
	uint8_t x115 = 103U;
	int16_t x116 = INT16_MIN;
	int64_t t28 = -7LL;

    t28 = (x113&(x114^(x115>x116)));

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x117 = 236618U;
	volatile uint32_t x118 = 306803U;
	uint64_t x119 = UINT64_MAX;
	int16_t x120 = INT16_MIN;
	static uint32_t t29 = 1068232268U;

    t29 = (x117&(x118^(x119>x120)));

    if (t29 != 35906U) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x122 = 1227316;
	static int16_t x123 = INT16_MIN;
	volatile uint64_t x124 = UINT64_MAX;

    t30 = (x121&(x122^(x123>x124)));

    if (t30 != 1227284) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x125 = 4102257U;
	uint64_t x126 = UINT64_MAX;
	static int8_t x127 = -1;
	static uint64_t t31 = 53151551070LLU;

    t31 = (x125&(x126^(x127>x128)));

    if (t31 != 4102256LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = INT64_MAX;
	uint8_t x130 = UINT8_MAX;
	static int64_t x131 = -1LL;
	static int8_t x132 = -1;
	volatile int64_t t32 = 14320LL;

    t32 = (x129&(x130^(x131>x132)));

    if (t32 != 255LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = 514952844;
	static int16_t x134 = INT16_MIN;
	uint16_t x135 = UINT16_MAX;
	uint16_t x136 = 2685U;
	volatile int32_t t33 = -53441202;

    t33 = (x133&(x134^(x135>x136)));

    if (t33 != 514949120) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x139 = -24674745855109044LL;
	static uint8_t x140 = 0U;
	int64_t t34 = -26922705832807LL;

    t34 = (x137&(x138^(x139>x140)));

    if (t34 != 127LL) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int32_t x141 = INT32_MIN;
	uint16_t x142 = UINT16_MAX;
	int16_t x143 = 1015;
	int8_t x144 = -1;
	static volatile int32_t t35 = 0;

    t35 = (x141&(x142^(x143>x144)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile int16_t x147 = INT16_MIN;
	uint64_t x148 = 410322942838483123LLU;
	int32_t t36 = 21455;

    t36 = (x145&(x146^(x147>x148)));

    if (t36 != -127) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int8_t x149 = 5;
	uint16_t x151 = 32503U;
	volatile uint64_t x152 = 96882LLU;
	static int64_t t37 = 49767550940418LL;

    t37 = (x149&(x150^(x151>x152)));

    if (t37 != 5LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x154 = 26367482LLU;
	static int16_t x155 = INT16_MIN;
	int16_t x156 = -1;
	volatile uint64_t t38 = 3LLU;

    t38 = (x153&(x154^(x155>x156)));

    if (t38 != 250LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x158 = 50345456U;
	uint64_t x159 = 49439LLU;
	int32_t x160 = -1;
	volatile uint32_t t39 = 17360210U;

    t39 = (x157&(x158^(x159>x160)));

    if (t39 != 50345344U) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int64_t x161 = INT64_MIN;
	int8_t x162 = INT8_MIN;
	int8_t x163 = INT8_MIN;
	int64_t x164 = INT64_MIN;
	volatile int64_t t40 = INT64_MIN;

    t40 = (x161&(x162^(x163>x164)));

    if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x165 = 11;
	int32_t x166 = -68581;
	int16_t x167 = INT16_MIN;
	volatile int32_t x168 = INT32_MAX;
	static int32_t t41 = 64151704;

    t41 = (x165&(x166^(x167>x168)));

    if (t41 != 11) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = INT64_MIN;
	volatile int32_t x170 = 0;
	volatile uint32_t x172 = 2508U;

    t42 = (x169&(x170^(x171>x172)));

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint8_t x173 = 34U;
	static uint16_t x175 = UINT16_MAX;
	uint64_t x176 = 548042920LLU;
	static int32_t t43 = -854647;

    t43 = (x173&(x174^(x175>x176)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint8_t x177 = 4U;
	int8_t x179 = INT8_MIN;
	int64_t x180 = 7827457423164824LL;
	int32_t t44 = -4452;

    t44 = (x177&(x178^(x179>x180)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int32_t x182 = -3;
	volatile uint8_t x183 = 2U;
	volatile int64_t x184 = INT64_MAX;

    t45 = (x181&(x182^(x183>x184)));

    if (t45 != 32765) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x185 = 3U;
	int16_t x186 = INT16_MIN;
	static int32_t x187 = 3415319;
	volatile int32_t t46 = -1909;

    t46 = (x185&(x186^(x187>x188)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x190 = INT16_MAX;
	uint32_t x191 = 69U;
	static int64_t x192 = -1LL;

    t47 = (x189&(x190^(x191>x192)));

    if (t47 != 32640) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x193 = INT32_MIN;
	static int64_t x194 = INT64_MIN;
	uint16_t x195 = 469U;
	volatile int16_t x196 = INT16_MAX;
	static volatile int64_t t48 = INT64_MIN;

    t48 = (x193&(x194^(x195>x196)));

    if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int16_t x198 = -613;
	uint16_t x199 = 465U;
	uint32_t x200 = 954798170U;
	int32_t t49 = -15011;

    t49 = (x197&(x198^(x199>x200)));

    if (t49 != 129) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile int64_t x201 = INT64_MIN;
	uint8_t x202 = 7U;
	int64_t x203 = 349043543799023LL;
	volatile int32_t x204 = 1393349;

    t50 = (x201&(x202^(x203>x204)));

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static int16_t x205 = 0;
	int16_t x206 = INT16_MIN;
	volatile uint16_t x207 = 1423U;
	int16_t x208 = 1;

    t51 = (x205&(x206^(x207>x208)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x209 = 5;
	int8_t x211 = INT8_MAX;
	int32_t x212 = INT32_MIN;
	int32_t t52 = -39398100;

    t52 = (x209&(x210^(x211>x212)));

    if (t52 != 4) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile uint64_t x213 = UINT64_MAX;
	int8_t x214 = INT8_MIN;
	uint8_t x215 = 4U;
	int16_t x216 = INT16_MAX;
	volatile uint64_t t53 = 29401472092916LLU;

    t53 = (x213&(x214^(x215>x216)));

    if (t53 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x217 = -4245LL;
	uint32_t x218 = 559638U;
	int32_t x219 = -1;
	static uint32_t x220 = 868718U;
	static int64_t t54 = 910086980681279471LL;

    t54 = (x217&(x218^(x219>x220)));

    if (t54 != 559619LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x221 = -1;
	int16_t x224 = -1;
	int32_t t55 = 13;

    t55 = (x221&(x222^(x223>x224)));

    if (t55 != -2147483647) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile int16_t x225 = 286;
	static int16_t x226 = INT16_MIN;
	int16_t x227 = INT16_MIN;
	int32_t x228 = INT32_MIN;
	int32_t t56 = 214736191;

    t56 = (x225&(x226^(x227>x228)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x229 = -35;
	int8_t x230 = INT8_MIN;
	int16_t x231 = -9569;
	uint64_t x232 = 241605LLU;
	int32_t t57 = -2441;

    t57 = (x229&(x230^(x231>x232)));

    if (t57 != -127) { NG(); } else { ; }
	
}

void f58(void) {
    	static int16_t x233 = -1;
	volatile uint8_t x234 = 20U;
	int32_t x235 = -1;
	static int32_t x236 = -1;
	volatile int32_t t58 = 0;

    t58 = (x233&(x234^(x235>x236)));

    if (t58 != 20) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x237 = INT16_MAX;
	uint32_t x239 = 8116942U;

    t59 = (x237&(x238^(x239>x240)));

    if (t59 != 5) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x241 = UINT64_MAX;
	uint64_t x242 = 476909020361811020LLU;
	static int64_t x243 = INT64_MIN;
	static uint64_t x244 = 2LLU;
	uint64_t t60 = 323307752007567399LLU;

    t60 = (x241&(x242^(x243>x244)));

    if (t60 != 476909020361811021LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x245 = UINT64_MAX;
	uint64_t x246 = 1LLU;
	int8_t x248 = INT8_MIN;
	uint64_t t61 = 3675918641730371866LLU;

    t61 = (x245&(x246^(x247>x248)));

    if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	static int32_t x249 = INT32_MIN;
	int32_t x250 = -1;
	volatile int8_t x251 = 0;
	static uint64_t x252 = 985676447188180LLU;

    t62 = (x249&(x250^(x251>x252)));

    if (t62 != INT32_MIN) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x253 = UINT64_MAX;
	volatile int8_t x254 = INT8_MIN;
	int64_t x255 = INT64_MAX;
	int8_t x256 = -1;
	uint64_t t63 = 866211072LLU;

    t63 = (x253&(x254^(x255>x256)));

    if (t63 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint32_t x257 = 2U;
	int32_t x258 = -228620002;
	volatile int16_t x259 = INT16_MIN;
	volatile int16_t x260 = 46;
	uint32_t t64 = 1851661U;

    t64 = (x257&(x258^(x259>x260)));

    if (t64 != 2U) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int8_t x261 = INT8_MIN;
	uint16_t x263 = UINT16_MAX;
	int32_t x264 = INT32_MAX;

    t65 = (x261&(x262^(x263>x264)));

    if (t65 != -32768) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint32_t x266 = 64083577U;
	uint64_t x268 = UINT64_MAX;
	volatile uint32_t t66 = 1419658591U;

    t66 = (x265&(x266^(x267>x268)));

    if (t66 != 8U) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x271 = 75149;
	int32_t x272 = -7864484;
	int64_t t67 = 201549494LL;

    t67 = (x269&(x270^(x271>x272)));

    if (t67 != 32766LL) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int16_t x273 = INT16_MIN;
	int64_t x274 = INT64_MAX;

    t68 = (x273&(x274^(x275>x276)));

    if (t68 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x278 = 148066505;
	uint16_t x279 = 503U;
	volatile uint32_t x280 = 140U;
	volatile int32_t t69 = 6;

    t69 = (x277&(x278^(x279>x280)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x281 = INT32_MAX;
	uint16_t x282 = 0U;
	int8_t x283 = 10;
	int32_t t70 = 146321;

    t70 = (x281&(x282^(x283>x284)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x285 = -26;
	uint8_t x286 = 5U;
	uint16_t x287 = 21096U;
	uint32_t x288 = 15672229U;
	volatile int32_t t71 = -14;

    t71 = (x285&(x286^(x287>x288)));

    if (t71 != 4) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int16_t x289 = INT16_MIN;
	int16_t x290 = -879;
	uint16_t x292 = UINT16_MAX;
	volatile int32_t t72 = 498458;

    t72 = (x289&(x290^(x291>x292)));

    if (t72 != -32768) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x294 = 24;
	int64_t x295 = 1672399941LL;
	uint32_t x296 = UINT32_MAX;

    t73 = (x293&(x294^(x295>x296)));

    if (t73 != 24) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x297 = 72U;
	static uint64_t x298 = UINT64_MAX;
	uint8_t x299 = 78U;
	volatile int64_t x300 = -23472929342LL;
	static volatile uint64_t t74 = 1539784763264526853LLU;

    t74 = (x297&(x298^(x299>x300)));

    if (t74 != 72LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x301 = INT32_MIN;
	int32_t x302 = 16;
	static int64_t x304 = 43924824LL;
	volatile int32_t t75 = 202;

    t75 = (x301&(x302^(x303>x304)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile uint64_t x305 = UINT64_MAX;
	static int8_t x306 = INT8_MIN;
	int32_t x307 = 368559;
	static volatile uint16_t x308 = 57U;
	uint64_t t76 = 378533692255LLU;

    t76 = (x305&(x306^(x307>x308)));

    if (t76 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x309 = -1;
	int8_t x310 = INT8_MIN;
	volatile int64_t x311 = INT64_MIN;
	int64_t x312 = -422456312813472LL;
	volatile int32_t t77 = 1;

    t77 = (x309&(x310^(x311>x312)));

    if (t77 != -128) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x313 = 912600353;
	static int8_t x314 = INT8_MIN;
	static int32_t x315 = 13835;
	static int32_t x316 = 40153039;
	static volatile int32_t t78 = 1;

    t78 = (x313&(x314^(x315>x316)));

    if (t78 != 912600320) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x317 = INT32_MIN;
	int16_t x318 = INT16_MAX;
	int8_t x320 = INT8_MAX;
	volatile int32_t t79 = -1;

    t79 = (x317&(x318^(x319>x320)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x321 = 4;
	volatile int16_t x322 = -161;
	volatile int64_t x323 = INT64_MIN;
	int8_t x324 = INT8_MAX;
	volatile int32_t t80 = 130788869;

    t80 = (x321&(x322^(x323>x324)));

    if (t80 != 4) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int16_t x325 = 0;
	int64_t x326 = INT64_MIN;
	int64_t x327 = 5158274731LL;
	int8_t x328 = -1;
	volatile int64_t t81 = 1840187782283454726LL;

    t81 = (x325&(x326^(x327>x328)));

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x329 = INT64_MAX;
	int32_t x330 = 15343;
	volatile uint64_t x331 = 5475772294903LLU;
	int8_t x332 = 1;

    t82 = (x329&(x330^(x331>x332)));

    if (t82 != 15342LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x333 = -1;
	int64_t x334 = INT64_MAX;
	static int16_t x335 = INT16_MIN;

    t83 = (x333&(x334^(x335>x336)));

    if (t83 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x337 = INT8_MAX;
	static int16_t x338 = INT16_MIN;
	int64_t x339 = INT64_MIN;
	int32_t x340 = INT32_MIN;
	int32_t t84 = 13;

    t84 = (x337&(x338^(x339>x340)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x342 = INT32_MIN;
	uint8_t x343 = UINT8_MAX;
	int64_t x344 = -538LL;

    t85 = (x341&(x342^(x343>x344)));

    if (t85 != -2147483647) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile uint8_t x345 = 3U;
	uint8_t x346 = 25U;
	uint16_t x348 = UINT16_MAX;
	volatile int32_t t86 = -15861419;

    t86 = (x345&(x346^(x347>x348)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x349 = -1;
	uint64_t x350 = 393562888212277106LLU;
	int8_t x351 = INT8_MAX;
	static uint8_t x352 = UINT8_MAX;
	volatile uint64_t t87 = 17542389991LLU;

    t87 = (x349&(x350^(x351>x352)));

    if (t87 != 393562888212277106LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x353 = -1;
	int32_t x355 = INT32_MIN;
	int32_t x356 = INT32_MAX;

    t88 = (x353&(x354^(x355>x356)));

    if (t88 != 64) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int32_t x357 = INT32_MAX;
	static int32_t x358 = INT32_MIN;
	static int8_t x359 = -1;
	static int16_t x360 = 1251;
	volatile int32_t t89 = 73052359;

    t89 = (x357&(x358^(x359>x360)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x361 = -1459;
	static uint64_t x363 = 60LLU;
	uint64_t x364 = 30828LLU;
	volatile int32_t t90 = 118238;

    t90 = (x361&(x362^(x363>x364)));

    if (t90 != 77) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x365 = -13;
	int8_t x367 = -1;
	volatile int16_t x368 = 482;

    t91 = (x365&(x366^(x367>x368)));

    if (t91 != -15) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile int16_t x369 = INT16_MIN;
	int16_t x370 = -1;
	int16_t x371 = INT16_MIN;
	static int32_t t92 = -27551673;

    t92 = (x369&(x370^(x371>x372)));

    if (t92 != -32768) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x373 = INT64_MIN;
	uint8_t x374 = 28U;
	uint32_t x375 = 205U;
	int64_t x376 = 22768670662525LL;
	int64_t t93 = -1999315070544216949LL;

    t93 = (x373&(x374^(x375>x376)));

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int32_t x377 = 7;
	uint32_t x378 = 763247U;
	uint8_t x380 = 0U;
	static volatile uint32_t t94 = 7U;

    t94 = (x377&(x378^(x379>x380)));

    if (t94 != 7U) { NG(); } else { ; }
	
}

void f95(void) {
    	static int8_t x381 = 2;
	volatile int64_t x382 = INT64_MIN;
	static int64_t x383 = INT64_MIN;
	uint8_t x384 = 0U;
	volatile int64_t t95 = -715409532372LL;

    t95 = (x381&(x382^(x383>x384)));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x385 = INT32_MIN;
	int64_t x386 = INT64_MIN;
	static volatile int8_t x388 = -1;
	volatile int64_t t96 = INT64_MIN;

    t96 = (x385&(x386^(x387>x388)));

    if (t96 != INT64_MIN) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x389 = INT8_MIN;
	uint32_t x390 = UINT32_MAX;
	uint16_t x391 = 1U;
	int64_t x392 = INT64_MIN;
	static uint32_t t97 = 29U;

    t97 = (x389&(x390^(x391>x392)));

    if (t97 != 4294967168U) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x393 = INT8_MIN;
	int8_t x394 = INT8_MAX;

    t98 = (x393&(x394^(x395>x396)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint64_t x397 = 62268321385LLU;
	int8_t x398 = INT8_MAX;
	uint32_t x399 = UINT32_MAX;
	volatile int32_t x400 = -557636174;
	uint64_t t99 = 80661096160LLU;

    t99 = (x397&(x398^(x399>x400)));

    if (t99 != 104LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x401 = INT8_MIN;

    t100 = (x401&(x402^(x403>x404)));

    if (t100 != -512) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x405 = -1;
	uint16_t x406 = 26U;
	uint64_t x407 = 5080533LLU;
	int32_t x408 = 171060354;
	volatile int32_t t101 = 412805;

    t101 = (x405&(x406^(x407>x408)));

    if (t101 != 26) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x410 = 22U;
	uint16_t x412 = 14993U;

    t102 = (x409&(x410^(x411>x412)));

    if (t102 != 4) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x414 = 1;
	static int8_t x415 = -22;
	int64_t x416 = 83309833057579LL;
	volatile int32_t t103 = 0;

    t103 = (x413&(x414^(x415>x416)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x417 = 29;
	uint8_t x418 = 0U;
	uint16_t x419 = 1248U;
	static int32_t x420 = -1;
	volatile int32_t t104 = 369421433;

    t104 = (x417&(x418^(x419>x420)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x422 = INT32_MIN;
	int8_t x423 = -1;
	int16_t x424 = 93;
	volatile int32_t t105 = 0;

    t105 = (x421&(x422^(x423>x424)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint16_t x425 = 0U;
	static int64_t x426 = 2LL;
	uint32_t x427 = 15609481U;
	volatile int64_t t106 = -26579775037814LL;

    t106 = (x425&(x426^(x427>x428)));

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x429 = INT16_MAX;
	static int8_t x431 = INT8_MAX;
	volatile uint16_t x432 = 15293U;
	static int32_t t107 = 1012;

    t107 = (x429&(x430^(x431>x432)));

    if (t107 != 32640) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x433 = INT16_MIN;
	uint16_t x434 = 13U;
	int32_t x435 = -357364839;
	volatile int8_t x436 = INT8_MIN;
	volatile int32_t t108 = -1;

    t108 = (x433&(x434^(x435>x436)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x438 = -32911009LL;
	static uint8_t x439 = 2U;
	int64_t t109 = 163356813487575LL;

    t109 = (x437&(x438^(x439>x440)));

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x441 = 7950U;
	int32_t x442 = INT32_MIN;
	volatile uint64_t x443 = UINT64_MAX;
	uint64_t x444 = 214LLU;

    t110 = (x441&(x442^(x443>x444)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x445 = INT64_MAX;
	static uint16_t x447 = UINT16_MAX;
	int8_t x448 = 52;

    t111 = (x445&(x446^(x447>x448)));

    if (t111 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x449 = -263454990;
	int64_t x450 = -5483768128641185LL;
	int32_t x452 = -164;
	int64_t t112 = -1LL;

    t112 = (x449&(x450^(x451>x452)));

    if (t112 != -5483768340453806LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x453 = INT16_MIN;
	int64_t x454 = -1LL;
	static volatile int64_t t113 = 265407215564616LL;

    t113 = (x453&(x454^(x455>x456)));

    if (t113 != -32768LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x457 = INT16_MAX;
	uint8_t x458 = 0U;
	volatile uint32_t x460 = 0U;
	volatile int32_t t114 = 242814119;

    t114 = (x457&(x458^(x459>x460)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static int8_t x462 = INT8_MIN;
	int8_t x464 = 0;
	static volatile int32_t t115 = -1;

    t115 = (x461&(x462^(x463>x464)));

    if (t115 != -127) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x465 = INT64_MIN;
	int16_t x466 = INT16_MIN;
	static int64_t x467 = INT64_MIN;
	uint64_t x468 = 12LLU;
	int64_t t116 = INT64_MIN;

    t116 = (x465&(x466^(x467>x468)));

    if (t116 != INT64_MIN) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x469 = 18;
	volatile uint8_t x470 = 23U;
	static volatile int16_t x471 = 1576;
	int8_t x472 = -1;

    t117 = (x469&(x470^(x471>x472)));

    if (t117 != 18) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint8_t x473 = 0U;
	static int8_t x475 = INT8_MIN;
	uint32_t x476 = 204U;

    t118 = (x473&(x474^(x475>x476)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile uint16_t x477 = 7878U;
	static volatile int8_t x478 = INT8_MIN;
	int16_t x479 = 19;
	static int32_t x480 = 188566;
	static volatile int32_t t119 = 22243339;

    t119 = (x477&(x478^(x479>x480)));

    if (t119 != 7808) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x481 = 208;
	volatile uint64_t x482 = 247229109182428365LLU;
	static volatile int64_t x483 = 3719LL;
	int16_t x484 = 20;
	volatile uint64_t t120 = 3506737681396274423LLU;

    t120 = (x481&(x482^(x483>x484)));

    if (t120 != 192LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = -1;
	static int16_t x486 = 201;
	int32_t x487 = INT32_MAX;
	static int8_t x488 = INT8_MIN;
	int32_t t121 = -372531;

    t121 = (x485&(x486^(x487>x488)));

    if (t121 != 200) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x489 = -1;
	int8_t x491 = INT8_MIN;
	static int8_t x492 = -1;
	volatile int64_t t122 = 1305188089779221879LL;

    t122 = (x489&(x490^(x491>x492)));

    if (t122 != -1LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x494 = INT64_MAX;
	uint16_t x496 = UINT16_MAX;

    t123 = (x493&(x494^(x495>x496)));

    if (t123 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x497 = 532464664671LLU;

    t124 = (x497&(x498^(x499>x500)));

    if (t124 != 86LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x501 = -5;
	static uint16_t x502 = 31755U;
	uint8_t x503 = UINT8_MAX;
	volatile int8_t x504 = INT8_MIN;
	int32_t t125 = 162;

    t125 = (x501&(x502^(x503>x504)));

    if (t125 != 31754) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x505 = 15509;
	static volatile uint64_t x506 = 16128934875933LLU;
	volatile uint64_t t126 = 107131LLU;

    t126 = (x505&(x506^(x507>x508)));

    if (t126 != 4116LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x509 = INT32_MIN;
	static int64_t x510 = 1732LL;
	static volatile int8_t x511 = 3;
	int64_t x512 = INT64_MIN;
	static int64_t t127 = -65168629556LL;

    t127 = (x509&(x510^(x511>x512)));

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x515 = INT16_MIN;
	static int32_t x516 = -1;
	int32_t t128 = 3238477;

    t128 = (x513&(x514^(x515>x516)));

    if (t128 != 65355) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile uint8_t x517 = UINT8_MAX;
	int16_t x518 = INT16_MAX;
	static volatile int64_t x520 = -1LL;

    t129 = (x517&(x518^(x519>x520)));

    if (t129 != 254) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x521 = UINT8_MAX;

    t130 = (x521&(x522^(x523>x524)));

    if (t130 != 3) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x526 = INT16_MAX;
	int8_t x527 = INT8_MIN;
	int64_t x528 = INT64_MIN;

    t131 = (x525&(x526^(x527>x528)));

    if (t131 != 32766LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x529 = INT64_MAX;
	static int8_t x530 = 1;
	int16_t x531 = INT16_MIN;
	int64_t x532 = INT64_MIN;
	volatile int64_t t132 = 0LL;

    t132 = (x529&(x530^(x531>x532)));

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x533 = INT32_MAX;
	static uint16_t x534 = 1U;
	uint16_t x535 = 186U;
	int64_t x536 = 64277885088120LL;
	volatile int32_t t133 = 123041729;

    t133 = (x533&(x534^(x535>x536)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x537 = INT8_MIN;
	uint32_t x538 = UINT32_MAX;
	int16_t x539 = INT16_MIN;
	volatile int32_t x540 = INT32_MIN;

    t134 = (x537&(x538^(x539>x540)));

    if (t134 != 4294967168U) { NG(); } else { ; }
	
}

void f135(void) {
    	static int8_t x541 = INT8_MIN;
	static volatile int64_t x542 = -1LL;
	uint32_t x543 = 446534612U;
	static uint32_t x544 = UINT32_MAX;
	volatile int64_t t135 = 15459509933418204LL;

    t135 = (x541&(x542^(x543>x544)));

    if (t135 != -128LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x546 = -1;
	int16_t x547 = -1;
	static volatile int8_t x548 = -1;

    t136 = (x545&(x546^(x547>x548)));

    if (t136 != 9) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x549 = -90882997LL;
	static uint64_t x550 = UINT64_MAX;
	int8_t x552 = INT8_MIN;
	static uint64_t t137 = 107259651LLU;

    t137 = (x549&(x550^(x551>x552)));

    if (t137 != 18446744073618668618LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint32_t x553 = 143U;
	static uint32_t x554 = UINT32_MAX;
	volatile int8_t x555 = -1;
	volatile uint32_t t138 = 141939U;

    t138 = (x553&(x554^(x555>x556)));

    if (t138 != 142U) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x557 = INT16_MIN;
	int8_t x558 = -1;
	static int64_t x559 = INT64_MIN;
	uint8_t x560 = UINT8_MAX;
	static int32_t t139 = 154;

    t139 = (x557&(x558^(x559>x560)));

    if (t139 != -32768) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x561 = INT64_MIN;
	static int32_t x562 = INT32_MAX;
	static volatile int64_t t140 = 26079788147LL;

    t140 = (x561&(x562^(x563>x564)));

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint8_t x565 = 0U;
	int32_t x566 = INT32_MAX;
	volatile uint8_t x567 = 10U;
	int32_t x568 = INT32_MIN;
	int32_t t141 = 11;

    t141 = (x565&(x566^(x567>x568)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x569 = -1;
	int64_t x570 = INT64_MIN;
	int64_t x571 = 61182987492LL;
	int64_t x572 = 2647393094180710LL;
	volatile int64_t t142 = INT64_MIN;

    t142 = (x569&(x570^(x571>x572)));

    if (t142 != INT64_MIN) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x573 = -1LL;
	static int32_t x574 = -263201;
	uint8_t x575 = UINT8_MAX;
	volatile int64_t t143 = 1238449LL;

    t143 = (x573&(x574^(x575>x576)));

    if (t143 != -263202LL) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int32_t x577 = -1;
	uint16_t x579 = 7U;
	static int32_t x580 = -147;
	volatile uint32_t t144 = 120178945U;

    t144 = (x577&(x578^(x579>x580)));

    if (t144 != 436489102U) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x581 = 0;
	uint8_t x582 = 52U;
	int8_t x583 = 12;
	uint16_t x584 = 8145U;
	int32_t t145 = 2567;

    t145 = (x581&(x582^(x583>x584)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x585 = 4U;
	int64_t x586 = INT64_MIN;
	volatile int64_t x587 = 3878LL;
	int64_t x588 = INT64_MAX;

    t146 = (x585&(x586^(x587>x588)));

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x589 = INT8_MIN;
	volatile int64_t x590 = INT64_MIN;
	static int32_t x591 = -13;
	volatile int64_t x592 = -1LL;
	volatile int64_t t147 = INT64_MIN;

    t147 = (x589&(x590^(x591>x592)));

    if (t147 != INT64_MIN) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x593 = 1058990390U;
	uint8_t x595 = UINT8_MAX;
	volatile uint16_t x596 = UINT16_MAX;
	static volatile uint64_t t148 = 14657211788814927LLU;

    t148 = (x593&(x594^(x595>x596)));

    if (t148 != 2306LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile uint32_t x597 = 12U;
	int32_t x598 = INT32_MAX;
	int64_t x599 = INT64_MAX;
	uint64_t x600 = 1LLU;
	volatile uint32_t t149 = 1U;

    t149 = (x597&(x598^(x599>x600)));

    if (t149 != 12U) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x601 = -136011121822230LL;
	volatile int64_t x602 = -830421544390LL;
	static int16_t x603 = INT16_MIN;

    t150 = (x601&(x602^(x603>x604)));

    if (t150 != -136287348273110LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x605 = 106153195664078218LL;
	int32_t x606 = INT32_MIN;
	static int16_t x607 = -1;
	int64_t t151 = -6875622314590LL;

    t151 = (x605&(x606^(x607>x608)));

    if (t151 != 106153194064707584LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x609 = UINT16_MAX;
	int32_t x610 = INT32_MAX;
	int16_t x612 = 1;
	int32_t t152 = -191574;

    t152 = (x609&(x610^(x611>x612)));

    if (t152 != 65535) { NG(); } else { ; }
	
}

void f153(void) {
    	static int64_t x613 = 4493358407359911173LL;
	int64_t x614 = 2110958988326LL;
	int32_t x615 = -1;
	static int8_t x616 = -1;
	volatile int64_t t153 = 998LL;

    t153 = (x613&(x614^(x615>x616)));

    if (t153 != 1830296863748LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x617 = INT32_MIN;
	int64_t x618 = -1LL;
	int32_t x619 = 1177;
	uint32_t x620 = UINT32_MAX;

    t154 = (x617&(x618^(x619>x620)));

    if (t154 != -2147483648LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x621 = -819;
	int32_t x622 = -127398786;
	int32_t x623 = 372012171;

    t155 = (x621&(x622^(x623>x624)));

    if (t155 != -127398836) { NG(); } else { ; }
	
}

void f156(void) {
    	static int64_t x625 = INT64_MIN;
	static int32_t x626 = INT32_MAX;
	volatile int32_t x628 = -1;
	int64_t t156 = 13417531745288LL;

    t156 = (x625&(x626^(x627>x628)));

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x629 = INT32_MIN;
	uint8_t x630 = UINT8_MAX;
	volatile int32_t x631 = INT32_MIN;
	int32_t t157 = -874570;

    t157 = (x629&(x630^(x631>x632)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x635 = INT16_MIN;
	uint64_t x636 = 3557LLU;
	volatile int32_t t158 = -26918039;

    t158 = (x633&(x634^(x635>x636)));

    if (t158 != 34) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x637 = UINT32_MAX;
	int32_t x638 = INT32_MAX;
	uint16_t x639 = UINT16_MAX;
	uint32_t x640 = 275200U;
	static uint32_t t159 = 267654893U;

    t159 = (x637&(x638^(x639>x640)));

    if (t159 != 2147483647U) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x641 = INT8_MIN;
	static int16_t x642 = INT16_MAX;
	static uint32_t x643 = 2936U;
	int8_t x644 = INT8_MIN;
	volatile int32_t t160 = 0;

    t160 = (x641&(x642^(x643>x644)));

    if (t160 != 32640) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x645 = 3987998;
	int8_t x646 = INT8_MIN;
	static volatile int16_t x648 = 2428;
	static volatile int32_t t161 = 28067;

    t161 = (x645&(x646^(x647>x648)));

    if (t161 != 3987968) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x649 = 546LL;
	volatile uint8_t x650 = UINT8_MAX;
	int16_t x652 = -1;
	static volatile int64_t t162 = 1LL;

    t162 = (x649&(x650^(x651>x652)));

    if (t162 != 34LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x653 = 171;
	static int64_t x654 = -1096049352891139138LL;
	static uint8_t x655 = 0U;
	uint8_t x656 = 29U;
	volatile int64_t t163 = 4394991555LL;

    t163 = (x653&(x654^(x655>x656)));

    if (t163 != 170LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x658 = -1;
	uint64_t x659 = 174552218LLU;
	volatile uint32_t t164 = UINT32_MAX;

    t164 = (x657&(x658^(x659>x660)));

    if (t164 != UINT32_MAX) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = INT64_MAX;
	uint16_t x662 = 3168U;
	int64_t x663 = -1LL;
	int16_t x664 = -1;
	static int64_t t165 = 242532748600099437LL;

    t165 = (x661&(x662^(x663>x664)));

    if (t165 != 3168LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x666 = -35533346981075016LL;
	static uint64_t x667 = UINT64_MAX;
	int8_t x668 = 4;
	volatile int64_t t166 = -360LL;

    t166 = (x665&(x666^(x667>x668)));

    if (t166 != 153LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x669 = -1LL;
	static volatile int8_t x670 = 1;
	int64_t x671 = INT64_MAX;
	volatile int64_t t167 = 156LL;

    t167 = (x669&(x670^(x671>x672)));

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint64_t x673 = 13539908LLU;
	uint8_t x674 = 0U;
	uint16_t x675 = 5479U;
	int8_t x676 = INT8_MIN;

    t168 = (x673&(x674^(x675>x676)));

    if (t168 != 0LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x678 = -1;
	int8_t x679 = INT8_MIN;
	static int16_t x680 = -15;
	volatile int32_t t169 = 148934535;

    t169 = (x677&(x678^(x679>x680)));

    if (t169 != 65535) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x681 = 745844255LLU;
	uint8_t x682 = UINT8_MAX;
	int64_t x683 = 9611021396854426LL;
	uint8_t x684 = 4U;
	uint64_t t170 = 7305LLU;

    t170 = (x681&(x682^(x683>x684)));

    if (t170 != 30LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x686 = -2;
	static uint32_t x687 = 6182383U;
	static int32_t t171 = INT32_MIN;

    t171 = (x685&(x686^(x687>x688)));

    if (t171 != INT32_MIN) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint64_t x689 = 1581451LLU;
	volatile int8_t x691 = -1;
	int16_t x692 = INT16_MAX;
	volatile uint64_t t172 = 12802024381077LLU;

    t172 = (x689&(x690^(x691>x692)));

    if (t172 != 524683LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x693 = INT64_MIN;
	uint32_t x694 = 14U;
	static int32_t x695 = -190750;
	int32_t x696 = INT32_MAX;
	int64_t t173 = -691299616LL;

    t173 = (x693&(x694^(x695>x696)));

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x698 = INT32_MIN;
	int32_t x699 = INT32_MIN;
	volatile int32_t x700 = INT32_MIN;

    t174 = (x697&(x698^(x699>x700)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x701 = 23U;
	int32_t x702 = -79362787;
	uint8_t x703 = 30U;
	int32_t x704 = 2;
	int32_t t175 = 458529732;

    t175 = (x701&(x702^(x703>x704)));

    if (t175 != 20) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x705 = 622LL;
	uint8_t x706 = UINT8_MAX;

    t176 = (x705&(x706^(x707>x708)));

    if (t176 != 110LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x710 = -1LL;
	int16_t x711 = 46;
	volatile int32_t x712 = -1;
	static int64_t t177 = 10024LL;

    t177 = (x709&(x710^(x711>x712)));

    if (t177 != 4958LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x713 = 4011;
	int64_t x714 = -1LL;
	static int8_t x715 = -1;
	static int8_t x716 = INT8_MIN;
	volatile int64_t t178 = 815750LL;

    t178 = (x713&(x714^(x715>x716)));

    if (t178 != 4010LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x719 = INT32_MIN;
	volatile int32_t t179 = 10163;

    t179 = (x717&(x718^(x719>x720)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x721 = 6985U;
	volatile int8_t x722 = INT8_MIN;
	uint32_t x723 = 126U;
	volatile uint32_t x724 = 27U;
	volatile int32_t t180 = -43313765;

    t180 = (x721&(x722^(x723>x724)));

    if (t180 != 6913) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x725 = 211466LLU;
	uint32_t x726 = UINT32_MAX;
	int8_t x727 = 1;
	int32_t x728 = -1;
	volatile uint64_t t181 = 60765LLU;

    t181 = (x725&(x726^(x727>x728)));

    if (t181 != 211466LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile int8_t x731 = INT8_MIN;
	volatile int32_t t182 = -2279;

    t182 = (x729&(x730^(x731>x732)));

    if (t182 != 2) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x734 = 3U;
	int8_t x735 = INT8_MAX;
	int16_t x736 = INT16_MIN;
	volatile int32_t t183 = -39;

    t183 = (x733&(x734^(x735>x736)));

    if (t183 != 2) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x737 = 8U;
	static uint16_t x738 = UINT16_MAX;
	int8_t x739 = INT8_MIN;
	uint8_t x740 = UINT8_MAX;

    t184 = (x737&(x738^(x739>x740)));

    if (t184 != 8) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x741 = 3569774U;
	volatile uint32_t x742 = UINT32_MAX;
	static int8_t x743 = INT8_MIN;
	int32_t x744 = -1;

    t185 = (x741&(x742^(x743>x744)));

    if (t185 != 3569774U) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint64_t x746 = 27LLU;
	int8_t x747 = INT8_MIN;
	volatile int64_t x748 = -1LL;
	static volatile uint64_t t186 = 653504734916341LLU;

    t186 = (x745&(x746^(x747>x748)));

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x749 = -7;
	int16_t x752 = INT16_MAX;
	int64_t t187 = -31049440666173970LL;

    t187 = (x749&(x750^(x751>x752)));

    if (t187 != -188857434657967LL) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint32_t x753 = UINT32_MAX;
	int16_t x754 = 1;
	uint64_t x755 = 61219076LLU;
	uint32_t x756 = UINT32_MAX;
	uint32_t t188 = 22460689U;

    t188 = (x753&(x754^(x755>x756)));

    if (t188 != 1U) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x757 = -1;
	int64_t x758 = INT64_MAX;
	uint16_t x759 = UINT16_MAX;
	int64_t x760 = -1210378795733988718LL;
	static volatile int64_t t189 = -2LL;

    t189 = (x757&(x758^(x759>x760)));

    if (t189 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile int64_t x761 = INT64_MAX;
	uint16_t x762 = UINT16_MAX;
	static int16_t x764 = INT16_MIN;
	static int64_t t190 = -4536020247979142LL;

    t190 = (x761&(x762^(x763>x764)));

    if (t190 != 65534LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x765 = INT16_MIN;
	volatile uint32_t t191 = 891962575U;

    t191 = (x765&(x766^(x767>x768)));

    if (t191 != 4294934528U) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int64_t x770 = INT64_MIN;
	int16_t x771 = -485;
	uint32_t x772 = 545U;

    t192 = (x769&(x770^(x771>x772)));

    if (t192 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint8_t x773 = UINT8_MAX;
	int8_t x775 = 0;

    t193 = (x773&(x774^(x775>x776)));

    if (t193 != 254) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x777 = 15161;
	int64_t x778 = -1LL;
	static int64_t x780 = -14LL;
	volatile int64_t t194 = -2921858LL;

    t194 = (x777&(x778^(x779>x780)));

    if (t194 != 15160LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint8_t x781 = UINT8_MAX;
	int16_t x783 = INT16_MIN;
	static volatile int64_t t195 = 88219LL;

    t195 = (x781&(x782^(x783>x784)));

    if (t195 != 1LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x786 = -75091;
	int16_t x788 = INT16_MIN;
	static int64_t t196 = INT64_MIN;

    t196 = (x785&(x786^(x787>x788)));

    if (t196 != INT64_MIN) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x789 = 242;
	static volatile int8_t x790 = INT8_MIN;
	int8_t x792 = -2;
	volatile int32_t t197 = 59040;

    t197 = (x789&(x790^(x791>x792)));

    if (t197 != 128) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x794 = INT16_MIN;
	static int8_t x795 = INT8_MIN;
	volatile int16_t x796 = INT16_MIN;
	int32_t t198 = -24569;

    t198 = (x793&(x794^(x795>x796)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x797 = UINT8_MAX;
	static int64_t x798 = -1955077085516000LL;
	static volatile int32_t x799 = INT32_MAX;
	volatile int64_t t199 = 7LL;

    t199 = (x797&(x798^(x799>x800)));

    if (t199 != 33LL) { NG(); } else { ; }
	
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

