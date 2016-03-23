
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

static int32_t x2 = 1483824;
int16_t x5 = 9053;
uint8_t x6 = UINT8_MAX;
volatile int8_t x10 = -1;
volatile int64_t x12 = INT64_MIN;
int8_t x13 = INT8_MIN;
static uint16_t x19 = 18U;
volatile int64_t x23 = 118545880291779LL;
uint64_t x27 = 15589946LLU;
static int8_t x29 = INT8_MAX;
uint32_t x33 = 40U;
int8_t x35 = INT8_MIN;
static uint16_t x36 = 519U;
static int32_t x43 = INT32_MAX;
static int8_t x44 = 1;
int32_t t10 = 23274;
uint64_t x51 = UINT64_MAX;
int8_t x72 = 11;
uint16_t x75 = 15616U;
int16_t x77 = -1;
static int8_t x81 = INT8_MIN;
int32_t x89 = -565316;
int32_t x93 = INT32_MIN;
static uint8_t x95 = UINT8_MAX;
int16_t x96 = INT16_MAX;
int32_t x107 = INT32_MIN;
int32_t x108 = INT32_MAX;
int32_t t26 = -5;
int64_t t29 = 23153405LL;
static volatile int32_t x122 = 465040061;
uint64_t x124 = 67936837497767398LLU;
static int64_t x126 = INT64_MAX;
int8_t x129 = INT8_MIN;
uint64_t x132 = 1LLU;
volatile int64_t x141 = INT64_MIN;
static volatile int32_t t35 = 28;
static uint64_t x155 = UINT64_MAX;
volatile uint64_t t38 = 125024250166LLU;
uint64_t x159 = 1725129174318523346LLU;
volatile uint64_t t39 = 62883771122000762LLU;
int32_t t40 = 2;
int32_t x166 = INT32_MIN;
uint64_t x168 = 47556356979031LLU;
static volatile int32_t t43 = INT32_MIN;
volatile uint64_t t44 = 1258101297387850LLU;
int8_t x187 = -1;
uint32_t x189 = 19845516U;
uint32_t t48 = 2U;
volatile uint32_t x199 = 749309U;
volatile int64_t x212 = INT64_MAX;
volatile int16_t x229 = -1;
int16_t x232 = INT16_MIN;
uint8_t x234 = 34U;
uint16_t x244 = UINT16_MAX;
int16_t x250 = INT16_MIN;
uint64_t x254 = 61946431947101LLU;
int8_t x263 = -1;
static uint32_t x274 = 125389806U;
int16_t x287 = INT16_MIN;
static int32_t t71 = 809;
uint16_t x289 = 14040U;
int8_t x291 = INT8_MIN;
static volatile int32_t t72 = 127222063;
volatile uint32_t t73 = 2834U;
volatile int16_t x299 = INT16_MIN;
int32_t x304 = INT32_MAX;
volatile int64_t x306 = INT64_MIN;
int64_t t76 = 4208679396647864LL;
int16_t x310 = -1;
int32_t x317 = 0;
uint8_t x319 = UINT8_MAX;
static uint64_t x330 = 99528LLU;
static int64_t x331 = INT64_MIN;
int8_t x332 = 0;
static uint32_t t83 = 126U;
volatile uint32_t x337 = 57U;
int32_t x341 = INT32_MIN;
volatile int16_t x342 = -15;
int64_t t86 = -84LL;
volatile int32_t t87 = -61674;
static int8_t x356 = -4;
int32_t x363 = 925;
int32_t x367 = INT32_MIN;
int32_t x381 = -37984;
volatile uint64_t x382 = 30858730951367099LLU;
volatile uint16_t x404 = 2U;
int32_t t100 = -72889;
int16_t x408 = 119;
static int32_t t101 = 7;
int8_t x409 = 2;
volatile uint64_t x410 = UINT64_MAX;
int16_t x418 = 6;
int8_t x420 = INT8_MIN;
volatile uint16_t x422 = 1U;
int32_t x428 = -4;
uint64_t x430 = 345347925201716195LLU;
static int32_t x432 = INT32_MIN;
uint64_t x435 = 200LLU;
int64_t x441 = 115917066LL;
static int8_t x451 = INT8_MIN;
uint32_t x455 = UINT32_MAX;
int32_t x467 = 193437;
int32_t t116 = 2894;
uint8_t x475 = 5U;
volatile int32_t t118 = 26447;
uint8_t x481 = UINT8_MAX;
static int32_t x482 = -479298;
uint16_t x486 = 9U;
uint32_t x499 = 10U;
uint32_t x501 = 3670U;
volatile int16_t x502 = INT16_MAX;
int8_t x511 = INT8_MAX;
int8_t x513 = INT8_MIN;
uint16_t x530 = 0U;
int32_t x532 = -1;
volatile int16_t x541 = INT16_MAX;
static int64_t x542 = -1LL;
volatile int32_t x551 = -1;
int64_t x552 = INT64_MIN;
int8_t x563 = -1;
static int32_t t139 = 72;
static volatile int16_t x569 = INT16_MAX;
volatile uint32_t t141 = 3233600U;
int8_t x574 = INT8_MIN;
volatile int8_t x583 = INT8_MAX;
int32_t t144 = 45494;
uint32_t x593 = 154U;
uint32_t x597 = 2076056U;
static int32_t x598 = INT32_MIN;
static int64_t t148 = 8270583816256372LL;
static uint32_t x606 = UINT32_MAX;
static uint64_t x608 = 458069181824037LLU;
static volatile uint64_t t150 = 6LLU;
int32_t x612 = 44144731;
volatile uint64_t t152 = 1949402720423637854LLU;
uint16_t x618 = 18454U;
int64_t x619 = -2266965214067521234LL;
uint64_t x620 = 167608156252243220LLU;
uint64_t x636 = 5817759572LLU;
volatile int16_t x640 = -3;
int8_t x642 = 0;
int8_t x645 = 0;
volatile int64_t x651 = INT64_MAX;
static uint16_t x652 = UINT16_MAX;
int16_t x654 = -296;
int64_t x656 = 2403017915513LL;
static int64_t x657 = -57320558351438LL;
uint8_t x663 = 1U;
static uint32_t x672 = 705873U;
static uint64_t t166 = 39255849379537LLU;
uint64_t x674 = 9591485459037LLU;
int32_t x676 = 1;
uint32_t x678 = 223157244U;
static int8_t x688 = -1;
uint64_t x695 = 503LLU;
int8_t x696 = -1;
int64_t x704 = INT64_MIN;
uint64_t x705 = 29708371LLU;
int8_t x712 = -1;
uint8_t x713 = UINT8_MAX;
int32_t x715 = INT32_MIN;
int8_t x717 = INT8_MIN;
int8_t x718 = INT8_MIN;
static int8_t x720 = 0;
volatile int32_t t179 = -56;
int64_t x736 = -207871724559806896LL;
volatile uint64_t t184 = 380359707LLU;
int64_t x757 = -1LL;
uint64_t x762 = 13605442LLU;
volatile uint8_t x768 = 1U;
int8_t x769 = 1;
static uint16_t x770 = UINT16_MAX;
uint16_t x771 = 876U;
int32_t x772 = -1;
static int8_t x777 = -1;
int64_t x779 = INT64_MAX;
int32_t x780 = -4;
int32_t x784 = INT32_MIN;
static uint16_t x785 = UINT16_MAX;
int16_t x797 = INT16_MIN;
static uint32_t x801 = 1003177U;


void f0(void) {
    	int32_t x1 = -1;
	int64_t x3 = -1LL;
	uint32_t x4 = UINT32_MAX;
	int64_t t0 = -91958184558996LL;

    t0 = ((x1<=x2)+(x3&x4));

    if (t0 != 4294967296LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int64_t x7 = INT64_MIN;
	volatile int64_t x8 = INT64_MIN;
	volatile int64_t t1 = INT64_MIN;

    t1 = ((x5<=x6)+(x7&x8));

    if (t1 != INT64_MIN) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MIN;
	uint16_t x11 = 382U;
	int64_t t2 = -2186910256LL;

    t2 = ((x9<=x10)+(x11&x12));

    if (t2 != 1LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x14 = -1;
	uint64_t x15 = UINT64_MAX;
	volatile int16_t x16 = INT16_MIN;
	uint64_t t3 = 35472LLU;

    t3 = ((x13<=x14)+(x15&x16));

    if (t3 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x17 = INT64_MIN;
	uint16_t x18 = 16346U;
	uint32_t x20 = 84099416U;
	uint32_t t4 = 24233963U;

    t4 = ((x17<=x18)+(x19&x20));

    if (t4 != 17U) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = -889;
	int8_t x22 = INT8_MIN;
	int64_t x24 = -1LL;
	int64_t t5 = 551LL;

    t5 = ((x21<=x22)+(x23&x24));

    if (t5 != 118545880291780LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x25 = 67544U;
	volatile int16_t x26 = -60;
	int16_t x28 = -1;
	uint64_t t6 = 969662LLU;

    t6 = ((x25<=x26)+(x27&x28));

    if (t6 != 15589947LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x30 = INT8_MIN;
	uint16_t x31 = 3940U;
	volatile uint8_t x32 = 0U;
	int32_t t7 = 873;

    t7 = ((x29<=x30)+(x31&x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x34 = INT64_MIN;
	int32_t t8 = -526292206;

    t8 = ((x33<=x34)+(x35&x36));

    if (t8 != 512) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = INT64_MAX;
	int32_t x38 = INT32_MIN;
	uint32_t x39 = 239U;
	uint8_t x40 = 1U;
	volatile uint32_t t9 = 28U;

    t9 = ((x37<=x38)+(x39&x40));

    if (t9 != 1U) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = INT32_MAX;
	int8_t x42 = 2;

    t10 = ((x41<=x42)+(x43&x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x45 = INT64_MIN;
	uint8_t x46 = 93U;
	volatile int16_t x47 = 0;
	int8_t x48 = INT8_MIN;
	int32_t t11 = 516924;

    t11 = ((x45<=x46)+(x47&x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x49 = 3LLU;
	static uint16_t x50 = 0U;
	int8_t x52 = -1;
	volatile uint64_t t12 = UINT64_MAX;

    t12 = ((x49<=x50)+(x51&x52));

    if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int8_t x53 = INT8_MIN;
	static int16_t x54 = INT16_MAX;
	uint16_t x55 = UINT16_MAX;
	int16_t x56 = -1167;
	volatile int32_t t13 = 57;

    t13 = ((x53<=x54)+(x55&x56));

    if (t13 != 64370) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = INT16_MAX;
	volatile int16_t x58 = -1;
	int16_t x59 = -84;
	volatile int32_t x60 = 3;
	volatile int32_t t14 = 76;

    t14 = ((x57<=x58)+(x59&x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x61 = 1U;
	volatile int8_t x62 = INT8_MAX;
	static int32_t x63 = INT32_MIN;
	volatile int32_t x64 = -5946;
	volatile int32_t t15 = -817090294;

    t15 = ((x61<=x62)+(x63&x64));

    if (t15 != -2147483647) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = 501;
	int8_t x66 = -1;
	static int16_t x67 = INT16_MIN;
	int32_t x68 = INT32_MAX;
	int32_t t16 = -3993626;

    t16 = ((x65<=x66)+(x67&x68));

    if (t16 != 2147450880) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = -27259;
	volatile int8_t x70 = 2;
	int8_t x71 = INT8_MIN;
	static int32_t t17 = -529039;

    t17 = ((x69<=x70)+(x71&x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = INT8_MAX;
	int8_t x74 = 1;
	volatile uint64_t x76 = 3378035036282LLU;
	volatile uint64_t t18 = 2684909917LLU;

    t18 = ((x73<=x74)+(x75&x76));

    if (t18 != 4096LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x78 = INT64_MIN;
	volatile int64_t x79 = INT64_MIN;
	int64_t x80 = INT64_MAX;
	volatile int64_t t19 = -113176597888101LL;

    t19 = ((x77<=x78)+(x79&x80));

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x82 = 13999382372849LL;
	int16_t x83 = INT16_MIN;
	int16_t x84 = INT16_MIN;
	volatile int32_t t20 = 4451266;

    t20 = ((x81<=x82)+(x83&x84));

    if (t20 != -32767) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x85 = 1296U;
	uint32_t x86 = 291U;
	volatile uint64_t x87 = 208181259304866LLU;
	int16_t x88 = INT16_MAX;
	static uint64_t t21 = 467LLU;

    t21 = ((x85<=x86)+(x87&x88));

    if (t21 != 32674LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint16_t x90 = 1U;
	int16_t x91 = INT16_MAX;
	int64_t x92 = INT64_MIN;
	volatile int64_t t22 = 4627733701LL;

    t22 = ((x89<=x90)+(x91&x92));

    if (t22 != 1LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int64_t x94 = INT64_MAX;
	int32_t t23 = 93060;

    t23 = ((x93<=x94)+(x95&x96));

    if (t23 != 256) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x97 = INT8_MIN;
	uint16_t x98 = 120U;
	int16_t x99 = -1;
	static int8_t x100 = 0;
	static volatile int32_t t24 = 43420361;

    t24 = ((x97<=x98)+(x99&x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = INT64_MIN;
	volatile int64_t x102 = INT64_MIN;
	int32_t x103 = INT32_MAX;
	static int64_t x104 = INT64_MIN;
	volatile int64_t t25 = -1LL;

    t25 = ((x101<=x102)+(x103&x104));

    if (t25 != 1LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x105 = UINT32_MAX;
	uint16_t x106 = 1036U;

    t26 = ((x105<=x106)+(x107&x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x109 = INT8_MIN;
	int8_t x110 = 6;
	int16_t x111 = -127;
	int64_t x112 = -1LL;
	int64_t t27 = 4254988103249182LL;

    t27 = ((x109<=x110)+(x111&x112));

    if (t27 != -126LL) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x113 = INT16_MIN;
	uint16_t x114 = UINT16_MAX;
	int8_t x115 = 0;
	volatile int32_t x116 = INT32_MAX;
	volatile int32_t t28 = -1;

    t28 = ((x113<=x114)+(x115&x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x117 = -1LL;
	volatile uint8_t x118 = 66U;
	volatile int8_t x119 = INT8_MIN;
	static int64_t x120 = INT64_MIN;

    t29 = ((x117<=x118)+(x119&x120));

    if (t29 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x121 = -1LL;
	static uint64_t x123 = UINT64_MAX;
	uint64_t t30 = 3LLU;

    t30 = ((x121<=x122)+(x123&x124));

    if (t30 != 67936837497767399LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = -6;
	uint16_t x127 = UINT16_MAX;
	static int64_t x128 = INT64_MAX;
	static int64_t t31 = -6667482592068LL;

    t31 = ((x125<=x126)+(x127&x128));

    if (t31 != 65536LL) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint8_t x130 = 13U;
	uint32_t x131 = 121255511U;
	uint64_t t32 = 2216882537019411LLU;

    t32 = ((x129<=x130)+(x131&x132));

    if (t32 != 2LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x133 = UINT8_MAX;
	static int8_t x134 = -60;
	volatile int64_t x135 = 6LL;
	int64_t x136 = INT64_MAX;
	static volatile int64_t t33 = -52914325LL;

    t33 = ((x133<=x134)+(x135&x136));

    if (t33 != 6LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x137 = -1;
	volatile uint32_t x138 = 1592221305U;
	int16_t x139 = -51;
	volatile int64_t x140 = -577489032501741909LL;
	volatile int64_t t34 = -2113069606LL;

    t34 = ((x137<=x138)+(x139&x140));

    if (t34 != -577489032501741943LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static int32_t x142 = INT32_MIN;
	uint8_t x143 = 1U;
	int32_t x144 = INT32_MIN;

    t35 = ((x141<=x142)+(x143&x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint16_t x145 = 818U;
	int16_t x146 = 287;
	static int64_t x147 = -3068595829323LL;
	volatile int8_t x148 = 13;
	int64_t t36 = -2084506LL;

    t36 = ((x145<=x146)+(x147&x148));

    if (t36 != 5LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = 10380LL;
	static volatile uint64_t x150 = 32710LLU;
	int8_t x151 = INT8_MIN;
	static volatile uint32_t x152 = 143609508U;
	static uint32_t t37 = 7781959U;

    t37 = ((x149<=x150)+(x151&x152));

    if (t37 != 143609473U) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x153 = 120;
	uint32_t x154 = 1U;
	uint8_t x156 = UINT8_MAX;

    t38 = ((x153<=x154)+(x155&x156));

    if (t38 != 255LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = 8;
	int32_t x158 = 168793825;
	int64_t x160 = 1838308407150038LL;

    t39 = ((x157<=x158)+(x159&x160));

    if (t39 != 144895059165651LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint32_t x161 = UINT32_MAX;
	uint16_t x162 = 3U;
	static uint8_t x163 = 81U;
	static volatile int32_t x164 = INT32_MIN;

    t40 = ((x161<=x162)+(x163&x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = INT64_MIN;
	uint16_t x167 = 248U;
	uint64_t t41 = 4921LLU;

    t41 = ((x165<=x166)+(x167&x168));

    if (t41 != 81LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint8_t x169 = UINT8_MAX;
	volatile int32_t x170 = -5;
	int32_t x171 = -1;
	uint16_t x172 = 1U;
	static volatile int32_t t42 = 134654906;

    t42 = ((x169<=x170)+(x171&x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x173 = INT16_MIN;
	static volatile int32_t x174 = -7190371;
	static int32_t x175 = INT32_MIN;
	int8_t x176 = -1;

    t43 = ((x173<=x174)+(x175&x176));

    if (t43 != INT32_MIN) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = INT64_MIN;
	int64_t x178 = -1LL;
	int16_t x179 = -1;
	static uint64_t x180 = 137600589439013457LLU;

    t44 = ((x177<=x178)+(x179&x180));

    if (t44 != 137600589439013458LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x181 = -2;
	static int64_t x182 = -1LL;
	uint32_t x183 = 1747113U;
	static int8_t x184 = INT8_MAX;
	volatile uint32_t t45 = 27U;

    t45 = ((x181<=x182)+(x183&x184));

    if (t45 != 42U) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = INT16_MIN;
	uint8_t x186 = 5U;
	int64_t x188 = -1LL;
	static int64_t t46 = 125473653635737844LL;

    t46 = ((x185<=x186)+(x187&x188));

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x190 = -1;
	static int32_t x191 = INT32_MIN;
	volatile int32_t x192 = -1;
	int32_t t47 = -359991;

    t47 = ((x189<=x190)+(x191&x192));

    if (t47 != -2147483647) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint32_t x193 = 192441U;
	volatile int16_t x194 = INT16_MIN;
	uint32_t x195 = 0U;
	volatile int16_t x196 = 3;

    t48 = ((x193<=x194)+(x195&x196));

    if (t48 != 1U) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x197 = UINT8_MAX;
	uint64_t x198 = UINT64_MAX;
	volatile int32_t x200 = -49620679;
	uint32_t t49 = 231373U;

    t49 = ((x197<=x198)+(x199&x200));

    if (t49 != 673850U) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x201 = 33209933881157LLU;
	uint64_t x202 = UINT64_MAX;
	static uint8_t x203 = 11U;
	uint32_t x204 = 1U;
	static volatile uint32_t t50 = 7200940U;

    t50 = ((x201<=x202)+(x203&x204));

    if (t50 != 2U) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x205 = -1LL;
	int16_t x206 = -6;
	uint16_t x207 = 77U;
	volatile int16_t x208 = INT16_MAX;
	int32_t t51 = 979;

    t51 = ((x205<=x206)+(x207&x208));

    if (t51 != 77) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int8_t x209 = 12;
	int64_t x210 = INT64_MAX;
	static int8_t x211 = INT8_MIN;
	static int64_t t52 = -850LL;

    t52 = ((x209<=x210)+(x211&x212));

    if (t52 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x213 = INT16_MIN;
	static int16_t x214 = INT16_MIN;
	static uint32_t x215 = 157U;
	int8_t x216 = -1;
	uint32_t t53 = 1U;

    t53 = ((x213<=x214)+(x215&x216));

    if (t53 != 158U) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x217 = -1;
	int8_t x218 = -1;
	static int16_t x219 = INT16_MAX;
	int16_t x220 = INT16_MIN;
	volatile int32_t t54 = -241;

    t54 = ((x217<=x218)+(x219&x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x221 = 10831196617804LLU;
	static uint8_t x222 = UINT8_MAX;
	int64_t x223 = INT64_MIN;
	uint64_t x224 = 115340473LLU;
	uint64_t t55 = 36219385847LLU;

    t55 = ((x221<=x222)+(x223&x224));

    if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x225 = -4368937;
	int8_t x226 = -1;
	volatile int32_t x227 = -745;
	int32_t x228 = INT32_MAX;
	int32_t t56 = -5017;

    t56 = ((x225<=x226)+(x227&x228));

    if (t56 != 2147482904) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x230 = UINT8_MAX;
	uint32_t x231 = 1U;
	uint32_t t57 = 122853U;

    t57 = ((x229<=x230)+(x231&x232));

    if (t57 != 1U) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile int16_t x233 = INT16_MIN;
	uint32_t x235 = 1869U;
	uint16_t x236 = 41U;
	volatile uint32_t t58 = 5982U;

    t58 = ((x233<=x234)+(x235&x236));

    if (t58 != 10U) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x237 = 3;
	int8_t x238 = INT8_MAX;
	volatile uint64_t x239 = 115LLU;
	uint8_t x240 = 7U;
	uint64_t t59 = 112948939755918LLU;

    t59 = ((x237<=x238)+(x239&x240));

    if (t59 != 4LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int64_t x241 = INT64_MAX;
	int32_t x242 = INT32_MIN;
	static uint64_t x243 = UINT64_MAX;
	uint64_t t60 = 292081096796064LLU;

    t60 = ((x241<=x242)+(x243&x244));

    if (t60 != 65535LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x245 = 54081539U;
	static volatile uint64_t x246 = UINT64_MAX;
	int8_t x247 = -6;
	volatile uint16_t x248 = 81U;
	static volatile int32_t t61 = -24;

    t61 = ((x245<=x246)+(x247&x248));

    if (t61 != 81) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int32_t x249 = -42;
	uint32_t x251 = 33U;
	uint16_t x252 = 4293U;
	static volatile uint32_t t62 = 249524113U;

    t62 = ((x249<=x250)+(x251&x252));

    if (t62 != 1U) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x253 = INT8_MIN;
	uint32_t x255 = UINT32_MAX;
	int32_t x256 = 0;
	uint32_t t63 = 2U;

    t63 = ((x253<=x254)+(x255&x256));

    if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint32_t x257 = 2717170U;
	uint32_t x258 = 19117943U;
	volatile int64_t x259 = INT64_MIN;
	static volatile int32_t x260 = -52173798;
	static volatile int64_t t64 = 90LL;

    t64 = ((x257<=x258)+(x259&x260));

    if (t64 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint64_t x261 = UINT64_MAX;
	uint8_t x262 = UINT8_MAX;
	static int16_t x264 = -1;
	volatile int32_t t65 = 10816119;

    t65 = ((x261<=x262)+(x263&x264));

    if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile int64_t x265 = -10LL;
	volatile uint64_t x266 = 2099147751253LLU;
	volatile int8_t x267 = -9;
	uint32_t x268 = UINT32_MAX;
	volatile uint32_t t66 = 105614U;

    t66 = ((x265<=x266)+(x267&x268));

    if (t66 != 4294967287U) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x269 = -1;
	static uint8_t x270 = 4U;
	uint64_t x271 = UINT64_MAX;
	static uint16_t x272 = UINT16_MAX;
	volatile uint64_t t67 = 820426LLU;

    t67 = ((x269<=x270)+(x271&x272));

    if (t67 != 65536LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int64_t x273 = INT64_MIN;
	volatile int64_t x275 = -363LL;
	uint64_t x276 = 37615916439381771LLU;
	static volatile uint64_t t68 = 16239039131067LLU;

    t68 = ((x273<=x274)+(x275&x276));

    if (t68 != 37615916439381506LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x277 = INT8_MIN;
	int32_t x278 = -4;
	int16_t x279 = -1;
	int8_t x280 = -1;
	int32_t t69 = 428452;

    t69 = ((x277<=x278)+(x279&x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x281 = INT32_MIN;
	int64_t x282 = 528207LL;
	int64_t x283 = -1LL;
	volatile uint8_t x284 = 18U;
	volatile int64_t t70 = 320827522686779245LL;

    t70 = ((x281<=x282)+(x283&x284));

    if (t70 != 19LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x285 = 1U;
	int64_t x286 = 1677197918LL;
	static int16_t x288 = INT16_MAX;

    t71 = ((x285<=x286)+(x287&x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x290 = INT64_MIN;
	static volatile int32_t x292 = INT32_MAX;

    t72 = ((x289<=x290)+(x291&x292));

    if (t72 != 2147483520) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x293 = UINT8_MAX;
	int64_t x294 = INT64_MIN;
	uint32_t x295 = 289431031U;
	int16_t x296 = 236;

    t73 = ((x293<=x294)+(x295&x296));

    if (t73 != 228U) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x297 = UINT32_MAX;
	int8_t x298 = INT8_MAX;
	static int32_t x300 = -1;
	int32_t t74 = 40366;

    t74 = ((x297<=x298)+(x299&x300));

    if (t74 != -32768) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x301 = UINT16_MAX;
	int64_t x302 = -21011863147LL;
	volatile int32_t x303 = INT32_MIN;
	volatile int32_t t75 = -92;

    t75 = ((x301<=x302)+(x303&x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x305 = 584U;
	uint32_t x307 = 3809U;
	int64_t x308 = INT64_MIN;

    t76 = ((x305<=x306)+(x307&x308));

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x309 = INT8_MIN;
	volatile int8_t x311 = -1;
	volatile int32_t x312 = 32274778;
	volatile int32_t t77 = 189;

    t77 = ((x309<=x310)+(x311&x312));

    if (t77 != 32274779) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x313 = 3U;
	int32_t x314 = -218689867;
	int8_t x315 = INT8_MIN;
	int8_t x316 = 7;
	volatile int32_t t78 = 264033;

    t78 = ((x313<=x314)+(x315&x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x318 = -1;
	int8_t x320 = INT8_MIN;
	volatile int32_t t79 = 331710041;

    t79 = ((x317<=x318)+(x319&x320));

    if (t79 != 128) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x321 = 237348940;
	int64_t x322 = -336003337491483LL;
	static volatile int16_t x323 = INT16_MIN;
	static volatile int16_t x324 = INT16_MAX;
	static int32_t t80 = 1;

    t80 = ((x321<=x322)+(x323&x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x325 = -35;
	volatile int32_t x326 = -1;
	static int16_t x327 = -1;
	uint8_t x328 = 0U;
	volatile int32_t t81 = 16194;

    t81 = ((x325<=x326)+(x327&x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x329 = 1685645123562565870LLU;
	static int64_t t82 = -248143LL;

    t82 = ((x329<=x330)+(x331&x332));

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint32_t x333 = UINT32_MAX;
	uint16_t x334 = UINT16_MAX;
	uint32_t x335 = UINT32_MAX;
	int8_t x336 = -41;

    t83 = ((x333<=x334)+(x335&x336));

    if (t83 != 4294967255U) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x338 = INT32_MIN;
	int32_t x339 = INT32_MAX;
	int32_t x340 = 0;
	int32_t t84 = -1206538;

    t84 = ((x337<=x338)+(x339&x340));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x343 = 755U;
	static uint64_t x344 = 17845408717572615LLU;
	uint64_t t85 = 7242448LLU;

    t85 = ((x341<=x342)+(x343&x344));

    if (t85 != 516LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile uint32_t x345 = 3730280U;
	uint64_t x346 = 7LLU;
	int64_t x347 = INT64_MIN;
	static volatile int32_t x348 = 458;

    t86 = ((x345<=x346)+(x347&x348));

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile uint64_t x349 = 23163LLU;
	uint32_t x350 = 3026U;
	int16_t x351 = INT16_MAX;
	volatile uint8_t x352 = UINT8_MAX;

    t87 = ((x349<=x350)+(x351&x352));

    if (t87 != 255) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile int8_t x353 = -1;
	static int32_t x354 = INT32_MIN;
	volatile int32_t x355 = INT32_MIN;
	static int32_t t88 = INT32_MIN;

    t88 = ((x353<=x354)+(x355&x356));

    if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x357 = INT8_MIN;
	uint16_t x358 = UINT16_MAX;
	int8_t x359 = -1;
	int32_t x360 = INT32_MIN;
	static int32_t t89 = -2212056;

    t89 = ((x357<=x358)+(x359&x360));

    if (t89 != -2147483647) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x361 = -1LL;
	int32_t x362 = -1;
	int64_t x364 = -2039612776444184443LL;
	volatile int64_t t90 = 5455LL;

    t90 = ((x361<=x362)+(x363&x364));

    if (t90 != 134LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x365 = INT64_MAX;
	volatile int32_t x366 = INT32_MIN;
	uint16_t x368 = 0U;
	volatile int32_t t91 = 0;

    t91 = ((x365<=x366)+(x367&x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x369 = INT8_MIN;
	int32_t x370 = -1;
	int32_t x371 = -684;
	static int64_t x372 = -2524220077LL;
	volatile int64_t t92 = -1122304370605111LL;

    t92 = ((x369<=x370)+(x371&x372));

    if (t92 != -2524220079LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x373 = -16887993450297LL;
	static uint16_t x374 = UINT16_MAX;
	uint32_t x375 = UINT32_MAX;
	static volatile int64_t x376 = INT64_MIN;
	volatile int64_t t93 = 194932378594633LL;

    t93 = ((x373<=x374)+(x375&x376));

    if (t93 != 1LL) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint64_t x377 = 14361801LLU;
	uint16_t x378 = 20321U;
	uint8_t x379 = 11U;
	uint8_t x380 = 3U;
	volatile int32_t t94 = 43;

    t94 = ((x377<=x378)+(x379&x380));

    if (t94 != 3) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x383 = INT16_MIN;
	volatile uint64_t x384 = 2161326765LLU;
	volatile uint64_t t95 = 146LLU;

    t95 = ((x381<=x382)+(x383&x384));

    if (t95 != 2161311744LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint32_t x385 = 7272268U;
	volatile int16_t x386 = -4980;
	volatile int8_t x387 = INT8_MAX;
	static int32_t x388 = -2460;
	int32_t t96 = -906226211;

    t96 = ((x385<=x386)+(x387&x388));

    if (t96 != 101) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x389 = INT32_MIN;
	uint16_t x390 = 155U;
	int16_t x391 = 7298;
	int32_t x392 = INT32_MAX;
	int32_t t97 = 309905;

    t97 = ((x389<=x390)+(x391&x392));

    if (t97 != 7299) { NG(); } else { ; }
	
}

void f98(void) {
    	static int32_t x393 = -1;
	int64_t x394 = -600158108001704LL;
	uint16_t x395 = 6176U;
	int8_t x396 = -18;
	volatile int32_t t98 = 4;

    t98 = ((x393<=x394)+(x395&x396));

    if (t98 != 6176) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x397 = UINT16_MAX;
	int16_t x398 = 0;
	volatile int32_t x399 = 0;
	int64_t x400 = -1LL;
	static volatile int64_t t99 = -70974423LL;

    t99 = ((x397<=x398)+(x399&x400));

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = INT16_MAX;
	uint64_t x402 = 54185LLU;
	volatile int8_t x403 = INT8_MAX;

    t100 = ((x401<=x402)+(x403&x404));

    if (t100 != 3) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x405 = INT16_MAX;
	volatile int64_t x406 = INT64_MIN;
	volatile int16_t x407 = -1;

    t101 = ((x405<=x406)+(x407&x408));

    if (t101 != 119) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x411 = INT8_MIN;
	uint64_t x412 = UINT64_MAX;
	volatile uint64_t t102 = 16007434102LLU;

    t102 = ((x409<=x410)+(x411&x412));

    if (t102 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x413 = INT16_MIN;
	uint64_t x414 = 212992198LLU;
	static volatile uint8_t x415 = UINT8_MAX;
	uint64_t x416 = 378304716670587LLU;
	uint64_t t103 = 5797LLU;

    t103 = ((x413<=x414)+(x415&x416));

    if (t103 != 123LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x417 = 6773LLU;
	int16_t x419 = INT16_MIN;
	int32_t t104 = -2399;

    t104 = ((x417<=x418)+(x419&x420));

    if (t104 != -32768) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = INT16_MAX;
	uint32_t x423 = 7819U;
	int8_t x424 = -1;
	uint32_t t105 = 171845195U;

    t105 = ((x421<=x422)+(x423&x424));

    if (t105 != 7819U) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint16_t x425 = UINT16_MAX;
	int16_t x426 = 277;
	int64_t x427 = INT64_MIN;
	int64_t t106 = INT64_MIN;

    t106 = ((x425<=x426)+(x427&x428));

    if (t106 != INT64_MIN) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x429 = INT8_MAX;
	static int8_t x431 = INT8_MIN;
	static int32_t t107 = 24;

    t107 = ((x429<=x430)+(x431&x432));

    if (t107 != -2147483647) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x433 = UINT32_MAX;
	volatile int8_t x434 = 1;
	int16_t x436 = -4324;
	uint64_t t108 = 3356232LLU;

    t108 = ((x433<=x434)+(x435&x436));

    if (t108 != 8LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x437 = -1LL;
	volatile int8_t x438 = -1;
	uint64_t x439 = 3995226586LLU;
	uint32_t x440 = 811292U;
	static uint64_t t109 = 2LLU;

    t109 = ((x437<=x438)+(x439&x440));

    if (t109 != 16665LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x442 = INT8_MIN;
	uint32_t x443 = UINT32_MAX;
	volatile uint16_t x444 = UINT16_MAX;
	uint32_t t110 = 368155U;

    t110 = ((x441<=x442)+(x443&x444));

    if (t110 != 65535U) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int16_t x445 = -1;
	int16_t x446 = INT16_MAX;
	volatile uint64_t x447 = UINT64_MAX;
	int8_t x448 = 1;
	static volatile uint64_t t111 = 22437396LLU;

    t111 = ((x445<=x446)+(x447&x448));

    if (t111 != 2LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x449 = INT32_MIN;
	uint8_t x450 = UINT8_MAX;
	int8_t x452 = INT8_MAX;
	static int32_t t112 = -602734;

    t112 = ((x449<=x450)+(x451&x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x453 = 577707246;
	static int64_t x454 = -1LL;
	uint64_t x456 = 129230247047LLU;
	uint64_t t113 = 136145847252LLU;

    t113 = ((x453<=x454)+(x455&x456));

    if (t113 != 381228167LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x457 = INT8_MIN;
	int64_t x458 = INT64_MIN;
	int16_t x459 = INT16_MAX;
	uint8_t x460 = 45U;
	int32_t t114 = 1486;

    t114 = ((x457<=x458)+(x459&x460));

    if (t114 != 45) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x461 = 0LLU;
	volatile int8_t x462 = -29;
	static volatile uint64_t x463 = 3423843724LLU;
	volatile int16_t x464 = 10;
	uint64_t t115 = 24547612590081842LLU;

    t115 = ((x461<=x462)+(x463&x464));

    if (t115 != 9LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x465 = -64277;
	int8_t x466 = -1;
	uint16_t x468 = UINT16_MAX;

    t116 = ((x465<=x466)+(x467&x468));

    if (t116 != 62366) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x469 = 11;
	volatile uint8_t x470 = 41U;
	int32_t x471 = 469838;
	int64_t x472 = -1LL;
	int64_t t117 = -2887175018703LL;

    t117 = ((x469<=x470)+(x471&x472));

    if (t117 != 469839LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x473 = 13;
	static volatile uint16_t x474 = 1055U;
	int8_t x476 = -1;

    t118 = ((x473<=x474)+(x475&x476));

    if (t118 != 6) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile int16_t x477 = INT16_MIN;
	static volatile uint64_t x478 = UINT64_MAX;
	volatile int8_t x479 = 17;
	uint64_t x480 = 8303LLU;
	volatile uint64_t t119 = 101LLU;

    t119 = ((x477<=x478)+(x479&x480));

    if (t119 != 2LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int16_t x483 = -1;
	uint8_t x484 = 0U;
	static volatile int32_t t120 = 1;

    t120 = ((x481<=x482)+(x483&x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = INT16_MIN;
	int16_t x487 = INT16_MIN;
	int64_t x488 = INT64_MIN;
	int64_t t121 = -11LL;

    t121 = ((x485<=x486)+(x487&x488));

    if (t121 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x489 = UINT16_MAX;
	int16_t x490 = INT16_MIN;
	uint64_t x491 = 0LLU;
	uint16_t x492 = 154U;
	static volatile uint64_t t122 = 221LLU;

    t122 = ((x489<=x490)+(x491&x492));

    if (t122 != 0LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile int8_t x493 = -1;
	static uint16_t x494 = 16U;
	uint32_t x495 = UINT32_MAX;
	static uint8_t x496 = 6U;
	uint32_t t123 = 1U;

    t123 = ((x493<=x494)+(x495&x496));

    if (t123 != 7U) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x497 = INT8_MAX;
	static int64_t x498 = -476927287LL;
	uint8_t x500 = 14U;
	static uint32_t t124 = 11489197U;

    t124 = ((x497<=x498)+(x499&x500));

    if (t124 != 10U) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x503 = 5394260;
	int64_t x504 = INT64_MIN;
	static int64_t t125 = 6860265727LL;

    t125 = ((x501<=x502)+(x503&x504));

    if (t125 != 1LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int64_t x505 = -1LL;
	int64_t x506 = -1LL;
	int16_t x507 = -277;
	volatile int64_t x508 = -1LL;
	static volatile int64_t t126 = 477829298739230LL;

    t126 = ((x505<=x506)+(x507&x508));

    if (t126 != -276LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x509 = INT8_MIN;
	static int8_t x510 = INT8_MIN;
	int64_t x512 = INT64_MIN;
	volatile int64_t t127 = 33964910542LL;

    t127 = ((x509<=x510)+(x511&x512));

    if (t127 != 1LL) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint32_t x514 = 1498U;
	static uint64_t x515 = 3162750908LLU;
	int32_t x516 = INT32_MAX;
	uint64_t t128 = 1LLU;

    t128 = ((x513<=x514)+(x515&x516));

    if (t128 != 1015267260LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x517 = 114;
	int8_t x518 = -1;
	int16_t x519 = 149;
	volatile int8_t x520 = INT8_MAX;
	static int32_t t129 = -634;

    t129 = ((x517<=x518)+(x519&x520));

    if (t129 != 21) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int8_t x521 = -1;
	int32_t x522 = -1;
	int8_t x523 = -12;
	int16_t x524 = -1662;
	static volatile int32_t t130 = 24155;

    t130 = ((x521<=x522)+(x523&x524));

    if (t130 != -1663) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x525 = UINT64_MAX;
	static volatile uint16_t x526 = UINT16_MAX;
	volatile int64_t x527 = 194LL;
	volatile int8_t x528 = INT8_MIN;
	int64_t t131 = -8413120305864LL;

    t131 = ((x525<=x526)+(x527&x528));

    if (t131 != 128LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint16_t x529 = 911U;
	uint16_t x531 = 398U;
	static volatile int32_t t132 = -11529212;

    t132 = ((x529<=x530)+(x531&x532));

    if (t132 != 398) { NG(); } else { ; }
	
}

void f133(void) {
    	static int8_t x533 = -3;
	uint64_t x534 = UINT64_MAX;
	volatile int8_t x535 = INT8_MIN;
	volatile int64_t x536 = 47416115810561259LL;
	static volatile int64_t t133 = -139050318240711LL;

    t133 = ((x533<=x534)+(x535&x536));

    if (t133 != 47416115810561153LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x537 = UINT32_MAX;
	uint32_t x538 = 251U;
	int64_t x539 = -16370356117119LL;
	uint32_t x540 = UINT32_MAX;
	volatile int64_t t134 = -2065573814050323100LL;

    t134 = ((x537<=x538)+(x539&x540));

    if (t134 != 2059215233LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x543 = 17547325761469LL;
	volatile int8_t x544 = INT8_MAX;
	volatile int64_t t135 = 23349668LL;

    t135 = ((x541<=x542)+(x543&x544));

    if (t135 != 61LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int32_t x545 = INT32_MIN;
	uint32_t x546 = 6524959U;
	static uint16_t x547 = 23U;
	volatile int8_t x548 = 4;
	volatile int32_t t136 = -1;

    t136 = ((x545<=x546)+(x547&x548));

    if (t136 != 4) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x549 = UINT32_MAX;
	uint32_t x550 = 227048477U;
	static volatile int64_t t137 = INT64_MIN;

    t137 = ((x549<=x550)+(x551&x552));

    if (t137 != INT64_MIN) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x553 = -1;
	uint64_t x554 = 611256859655LLU;
	uint64_t x555 = 1371118720178LLU;
	static uint16_t x556 = UINT16_MAX;
	uint64_t t138 = 7489699566558LLU;

    t138 = ((x553<=x554)+(x555&x556));

    if (t138 != 21682LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x561 = -1LL;
	int64_t x562 = 66889LL;
	int32_t x564 = INT32_MIN;

    t139 = ((x561<=x562)+(x563&x564));

    if (t139 != -2147483647) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x565 = 16036423;
	int32_t x566 = -21343937;
	volatile uint32_t x567 = UINT32_MAX;
	volatile uint32_t x568 = UINT32_MAX;
	static volatile uint32_t t140 = UINT32_MAX;

    t140 = ((x565<=x566)+(x567&x568));

    if (t140 != UINT32_MAX) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x570 = INT32_MIN;
	volatile int8_t x571 = -1;
	static volatile uint32_t x572 = 79U;

    t141 = ((x569<=x570)+(x571&x572));

    if (t141 != 79U) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x573 = 3250LL;
	int64_t x575 = INT64_MAX;
	int32_t x576 = INT32_MIN;
	int64_t t142 = -104474810LL;

    t142 = ((x573<=x574)+(x575&x576));

    if (t142 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x577 = 45;
	static volatile uint64_t x578 = UINT64_MAX;
	uint32_t x579 = 1377168555U;
	uint16_t x580 = 5959U;
	volatile uint32_t t143 = 3603519U;

    t143 = ((x577<=x578)+(x579&x580));

    if (t143 != 1028U) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x581 = INT16_MIN;
	volatile int64_t x582 = -1LL;
	uint8_t x584 = UINT8_MAX;

    t144 = ((x581<=x582)+(x583&x584));

    if (t144 != 128) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x585 = INT16_MIN;
	static int16_t x586 = -1;
	int8_t x587 = -38;
	int8_t x588 = -1;
	int32_t t145 = -36;

    t145 = ((x585<=x586)+(x587&x588));

    if (t145 != -37) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x589 = INT8_MAX;
	int32_t x590 = INT32_MIN;
	static int8_t x591 = -1;
	uint16_t x592 = UINT16_MAX;
	volatile int32_t t146 = -1827143;

    t146 = ((x589<=x590)+(x591&x592));

    if (t146 != 65535) { NG(); } else { ; }
	
}

void f147(void) {
    	static int16_t x594 = INT16_MIN;
	uint32_t x595 = 48U;
	uint8_t x596 = UINT8_MAX;
	uint32_t t147 = 3438849U;

    t147 = ((x593<=x594)+(x595&x596));

    if (t147 != 49U) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int8_t x599 = -1;
	int64_t x600 = INT64_MIN;

    t148 = ((x597<=x598)+(x599&x600));

    if (t148 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x601 = 2086754U;
	int8_t x602 = INT8_MAX;
	volatile uint16_t x603 = 8U;
	uint32_t x604 = 6105U;
	uint32_t t149 = 1460U;

    t149 = ((x601<=x602)+(x603&x604));

    if (t149 != 8U) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x605 = 1479555761987LLU;
	static uint32_t x607 = 914675U;

    t150 = ((x605<=x606)+(x607&x608));

    if (t150 != 881697LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint64_t x609 = UINT64_MAX;
	uint8_t x610 = 1U;
	volatile int16_t x611 = -1;
	int32_t t151 = 296982351;

    t151 = ((x609<=x610)+(x611&x612));

    if (t151 != 44144731) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint16_t x613 = 2U;
	int16_t x614 = INT16_MIN;
	uint64_t x615 = 440813LLU;
	volatile int64_t x616 = 4352755LL;

    t152 = ((x613<=x614)+(x615&x616));

    if (t152 != 141537LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x617 = 7936268U;
	uint64_t t153 = 20462LLU;

    t153 = ((x617<=x618)+(x619&x620));

    if (t153 != 587285243789572LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint16_t x621 = 8265U;
	int64_t x622 = -1LL;
	int64_t x623 = 1968794747192072189LL;
	int8_t x624 = -26;
	static int64_t t154 = 528033146855119LL;

    t154 = ((x621<=x622)+(x623&x624));

    if (t154 != 1968794747192072164LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x625 = 36;
	int64_t x626 = -13536LL;
	static int32_t x627 = -1;
	int16_t x628 = 2085;
	int32_t t155 = 124;

    t155 = ((x625<=x626)+(x627&x628));

    if (t155 != 2085) { NG(); } else { ; }
	
}

void f156(void) {
    	static int8_t x629 = 10;
	int32_t x630 = 27383;
	int16_t x631 = 63;
	uint16_t x632 = 1U;
	static int32_t t156 = 346789891;

    t156 = ((x629<=x630)+(x631&x632));

    if (t156 != 2) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x633 = INT16_MIN;
	int32_t x634 = -1;
	volatile uint64_t x635 = 1694251113LLU;
	static volatile uint64_t t157 = 2941937728588LLU;

    t157 = ((x633<=x634)+(x635&x636));

    if (t157 != 1086337089LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint8_t x637 = 61U;
	volatile int16_t x638 = INT16_MIN;
	int16_t x639 = 86;
	volatile int32_t t158 = -28661;

    t158 = ((x637<=x638)+(x639&x640));

    if (t158 != 84) { NG(); } else { ; }
	
}

void f159(void) {
    	static int8_t x641 = -1;
	static int64_t x643 = -4LL;
	int64_t x644 = -1LL;
	int64_t t159 = 131572687328667378LL;

    t159 = ((x641<=x642)+(x643&x644));

    if (t159 != -3LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x646 = -1;
	static int16_t x647 = INT16_MIN;
	int64_t x648 = -1LL;
	volatile int64_t t160 = 115464859LL;

    t160 = ((x645<=x646)+(x647&x648));

    if (t160 != -32768LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x649 = UINT32_MAX;
	int8_t x650 = INT8_MIN;
	int64_t t161 = 1937LL;

    t161 = ((x649<=x650)+(x651&x652));

    if (t161 != 65535LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x653 = 2;
	uint32_t x655 = UINT32_MAX;
	int64_t t162 = 22LL;

    t162 = ((x653<=x654)+(x655&x656));

    if (t162 != 2131197049LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x658 = 284829394LLU;
	static int32_t x659 = INT32_MIN;
	static int32_t x660 = -1;
	volatile int32_t t163 = INT32_MIN;

    t163 = ((x657<=x658)+(x659&x660));

    if (t163 != INT32_MIN) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x661 = -1;
	int8_t x662 = INT8_MAX;
	int64_t x664 = INT64_MAX;
	static int64_t t164 = 3875602810861690LL;

    t164 = ((x661<=x662)+(x663&x664));

    if (t164 != 2LL) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x665 = INT16_MIN;
	uint8_t x666 = 8U;
	uint64_t x667 = UINT64_MAX;
	volatile int64_t x668 = 53LL;
	uint64_t t165 = 27970696566LLU;

    t165 = ((x665<=x666)+(x667&x668));

    if (t165 != 54LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x669 = INT16_MAX;
	volatile uint32_t x670 = UINT32_MAX;
	uint64_t x671 = UINT64_MAX;

    t166 = ((x669<=x670)+(x671&x672));

    if (t166 != 705874LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x673 = UINT64_MAX;
	int16_t x675 = INT16_MAX;
	volatile int32_t t167 = 425349415;

    t167 = ((x673<=x674)+(x675&x676));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x677 = -1;
	int32_t x679 = INT32_MIN;
	uint8_t x680 = UINT8_MAX;
	volatile int32_t t168 = 3214508;

    t168 = ((x677<=x678)+(x679&x680));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int64_t x681 = INT64_MIN;
	volatile int8_t x682 = -1;
	uint8_t x683 = 32U;
	volatile int32_t x684 = 65;
	int32_t t169 = 2315088;

    t169 = ((x681<=x682)+(x683&x684));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x685 = -1310;
	uint8_t x686 = 3U;
	volatile uint8_t x687 = UINT8_MAX;
	static int32_t t170 = -358;

    t170 = ((x685<=x686)+(x687&x688));

    if (t170 != 256) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint32_t x689 = 6U;
	int32_t x690 = -17052;
	static uint32_t x691 = 1U;
	static int8_t x692 = 3;
	uint32_t t171 = 732623772U;

    t171 = ((x689<=x690)+(x691&x692));

    if (t171 != 2U) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint16_t x693 = UINT16_MAX;
	uint16_t x694 = 21894U;
	volatile uint64_t t172 = 274410844521613LLU;

    t172 = ((x693<=x694)+(x695&x696));

    if (t172 != 503LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int32_t x697 = INT32_MIN;
	uint8_t x698 = 66U;
	int32_t x699 = 44;
	volatile int64_t x700 = -39894813449363244LL;
	volatile int64_t t173 = -5022LL;

    t173 = ((x697<=x698)+(x699&x700));

    if (t173 != 5LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x701 = -1LL;
	int16_t x702 = INT16_MIN;
	uint16_t x703 = 48U;
	static int64_t t174 = 5430270818540100LL;

    t174 = ((x701<=x702)+(x703&x704));

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint64_t x706 = UINT64_MAX;
	int16_t x707 = INT16_MAX;
	uint64_t x708 = UINT64_MAX;
	volatile uint64_t t175 = 2715LLU;

    t175 = ((x705<=x706)+(x707&x708));

    if (t175 != 32768LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x709 = -57;
	uint32_t x710 = 6105U;
	static int32_t x711 = -1;
	volatile int32_t t176 = -32465642;

    t176 = ((x709<=x710)+(x711&x712));

    if (t176 != -1) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x714 = INT64_MIN;
	uint16_t x716 = 2496U;
	int32_t t177 = 891536;

    t177 = ((x713<=x714)+(x715&x716));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint64_t x719 = UINT64_MAX;
	static uint64_t t178 = 102061106LLU;

    t178 = ((x717<=x718)+(x719&x720));

    if (t178 != 1LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int32_t x721 = -1;
	int32_t x722 = -1;
	static int8_t x723 = INT8_MIN;
	volatile int8_t x724 = 47;

    t179 = ((x721<=x722)+(x723&x724));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x725 = INT64_MIN;
	static volatile uint32_t x726 = 4722U;
	uint32_t x727 = UINT32_MAX;
	static int8_t x728 = INT8_MIN;
	volatile uint32_t t180 = 2580U;

    t180 = ((x725<=x726)+(x727&x728));

    if (t180 != 4294967169U) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x729 = -1LL;
	int16_t x730 = -675;
	int8_t x731 = INT8_MAX;
	int64_t x732 = 82LL;
	volatile int64_t t181 = -1860914731705LL;

    t181 = ((x729<=x730)+(x731&x732));

    if (t181 != 82LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint8_t x733 = UINT8_MAX;
	uint8_t x734 = UINT8_MAX;
	int64_t x735 = 3LL;
	int64_t t182 = 3213552494591545LL;

    t182 = ((x733<=x734)+(x735&x736));

    if (t182 != 1LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x737 = 11850U;
	int64_t x738 = -1LL;
	int16_t x739 = INT16_MIN;
	static int32_t x740 = -72237;
	volatile int32_t t183 = 8188;

    t183 = ((x737<=x738)+(x739&x740));

    if (t183 != -98304) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x741 = INT16_MIN;
	static int32_t x742 = -1;
	int8_t x743 = INT8_MAX;
	uint64_t x744 = 2090LLU;

    t184 = ((x741<=x742)+(x743&x744));

    if (t184 != 43LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x745 = -1617;
	int16_t x746 = INT16_MAX;
	uint8_t x747 = 59U;
	int16_t x748 = 0;
	int32_t t185 = -2235624;

    t185 = ((x745<=x746)+(x747&x748));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int64_t x749 = -1LL;
	static volatile int8_t x750 = INT8_MAX;
	int16_t x751 = INT16_MAX;
	static uint16_t x752 = 2U;
	volatile int32_t t186 = 1;

    t186 = ((x749<=x750)+(x751&x752));

    if (t186 != 3) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x753 = 32366397LL;
	int16_t x754 = -1;
	static volatile int64_t x755 = -1LL;
	static int8_t x756 = INT8_MAX;
	int64_t t187 = 88885579055902431LL;

    t187 = ((x753<=x754)+(x755&x756));

    if (t187 != 127LL) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int8_t x758 = -1;
	static uint16_t x759 = UINT16_MAX;
	static int64_t x760 = -17242396LL;
	volatile int64_t t188 = -2800952031800936LL;

    t188 = ((x757<=x758)+(x759&x760));

    if (t188 != 59109LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint64_t x761 = UINT64_MAX;
	volatile int32_t x763 = -1;
	static uint8_t x764 = 110U;
	volatile int32_t t189 = 1;

    t189 = ((x761<=x762)+(x763&x764));

    if (t189 != 110) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x765 = -1LL;
	int8_t x766 = INT8_MAX;
	int64_t x767 = -1LL;
	volatile int64_t t190 = 14467LL;

    t190 = ((x765<=x766)+(x767&x768));

    if (t190 != 2LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t t191 = 18246;

    t191 = ((x769<=x770)+(x771&x772));

    if (t191 != 877) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int8_t x773 = 0;
	int16_t x774 = INT16_MIN;
	uint64_t x775 = 17529303713LLU;
	int64_t x776 = INT64_MIN;
	uint64_t t192 = 45686748752568LLU;

    t192 = ((x773<=x774)+(x775&x776));

    if (t192 != 0LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x778 = INT8_MIN;
	static volatile int64_t t193 = 328992423375794LL;

    t193 = ((x777<=x778)+(x779&x780));

    if (t193 != 9223372036854775804LL) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int32_t x781 = INT32_MAX;
	int8_t x782 = INT8_MIN;
	int16_t x783 = 3797;
	volatile int32_t t194 = -121;

    t194 = ((x781<=x782)+(x783&x784));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int8_t x786 = -1;
	int32_t x787 = INT32_MIN;
	uint64_t x788 = 3LLU;
	volatile uint64_t t195 = 876500LLU;

    t195 = ((x785<=x786)+(x787&x788));

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int16_t x789 = -1;
	int16_t x790 = -2720;
	int64_t x791 = INT64_MAX;
	uint64_t x792 = 410728210603082LLU;
	volatile uint64_t t196 = 265057205385424011LLU;

    t196 = ((x789<=x790)+(x791&x792));

    if (t196 != 410728210603082LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint16_t x793 = UINT16_MAX;
	volatile int16_t x794 = INT16_MIN;
	static volatile int16_t x795 = -46;
	int64_t x796 = INT64_MAX;
	static int64_t t197 = 31972897587875180LL;

    t197 = ((x793<=x794)+(x795&x796));

    if (t197 != 9223372036854775762LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x798 = -15;
	uint64_t x799 = 8430466511909LLU;
	static uint64_t x800 = UINT64_MAX;
	uint64_t t198 = 3922887037289681751LLU;

    t198 = ((x797<=x798)+(x799&x800));

    if (t198 != 8430466511910LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x802 = -16129;
	int8_t x803 = INT8_MIN;
	uint32_t x804 = UINT32_MAX;
	static volatile uint32_t t199 = 1034008362U;

    t199 = ((x801<=x802)+(x803&x804));

    if (t199 != 4294967169U) { NG(); } else { ; }
	
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

