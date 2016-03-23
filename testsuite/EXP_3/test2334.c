
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

static int64_t x5 = INT64_MAX;
int64_t x21 = -1LL;
uint32_t x22 = 10U;
volatile int32_t x26 = 2446516;
int8_t x31 = INT8_MIN;
volatile int8_t x33 = -1;
static uint8_t x36 = 2U;
static int32_t t8 = 2;
uint32_t x44 = 1156U;
int16_t x51 = -1;
volatile int32_t t12 = -5;
int8_t x57 = -1;
static uint32_t x60 = UINT32_MAX;
static uint8_t x71 = UINT8_MAX;
static int64_t x77 = INT64_MIN;
static int32_t x91 = INT32_MIN;
int32_t x93 = -1;
volatile int32_t x99 = INT32_MIN;
uint32_t x103 = UINT32_MAX;
int32_t x104 = -1;
int16_t x109 = INT16_MAX;
static int32_t t27 = -792968;
uint8_t x119 = 1U;
uint64_t x129 = UINT64_MAX;
int16_t x138 = INT16_MAX;
int64_t x142 = 6993970144117121LL;
int16_t x146 = -1;
static uint64_t x150 = 58426732905LLU;
int16_t x152 = 4496;
int32_t t37 = 52968608;
volatile uint32_t x159 = 57996U;
int32_t x163 = 195;
int64_t x164 = INT64_MIN;
volatile int32_t t41 = 1;
int32_t x170 = 252566504;
int32_t t43 = 11;
volatile int32_t x177 = INT32_MIN;
volatile int64_t x179 = INT64_MIN;
uint32_t x180 = 984U;
int64_t x181 = 1LL;
volatile uint32_t x185 = UINT32_MAX;
int32_t x188 = INT32_MIN;
int32_t x197 = INT32_MAX;
volatile int32_t t50 = 4273;
int64_t x209 = -515779LL;
int64_t x210 = INT64_MIN;
int16_t x211 = -1;
static int32_t x213 = INT32_MAX;
volatile int64_t x220 = INT64_MIN;
volatile int32_t t54 = -3627030;
int32_t x225 = -1;
int32_t t58 = 109251329;
static volatile int32_t t59 = -14174;
static volatile int64_t x243 = 11738576LL;
int32_t t61 = 10253871;
int16_t x269 = -841;
volatile uint16_t x270 = UINT16_MAX;
int16_t x272 = -29;
volatile int64_t x274 = INT64_MIN;
static int64_t x275 = INT64_MIN;
volatile int16_t x277 = -1;
static int64_t x280 = INT64_MIN;
volatile int16_t x288 = -2710;
volatile int32_t x292 = -1;
uint8_t x294 = UINT8_MAX;
int32_t t73 = 4904;
uint32_t x301 = 13U;
int16_t x305 = INT16_MAX;
uint16_t x319 = 0U;
uint64_t x323 = 68531102636LLU;
volatile int8_t x335 = 10;
uint32_t x336 = UINT32_MAX;
int32_t x341 = -1;
int16_t x352 = -453;
int32_t t87 = 3;
static int32_t t88 = -160330;
int64_t x358 = -1LL;
static volatile int16_t x360 = -495;
int32_t t89 = 14449643;
volatile int32_t t90 = 7757;
int32_t x365 = -12474;
static int32_t x371 = INT32_MIN;
int64_t x374 = -1LL;
volatile uint8_t x375 = UINT8_MAX;
volatile uint64_t x384 = 8145546477432923848LLU;
int32_t t95 = 0;
uint32_t x387 = UINT32_MAX;
uint64_t x391 = 878LLU;
uint32_t x395 = UINT32_MAX;
uint32_t x396 = 13508U;
volatile int32_t t99 = 512388573;
int8_t x401 = 5;
int64_t x406 = 243153462654490306LL;
int32_t x408 = -3;
static uint16_t x409 = UINT16_MAX;
static int16_t x414 = INT16_MAX;
int8_t x415 = INT8_MAX;
int32_t x419 = -1;
uint32_t x428 = UINT32_MAX;
volatile int32_t t106 = -35445;
int16_t x431 = 48;
int32_t x437 = -1;
int32_t x439 = 0;
int32_t t112 = -1988057;
static int8_t x460 = -1;
static int32_t x467 = 54459655;
static int8_t x469 = INT8_MAX;
uint64_t x480 = UINT64_MAX;
static int32_t t119 = 11402;
volatile int32_t t120 = -1300731;
int16_t x488 = -1;
int32_t x490 = -60974501;
int8_t x492 = 1;
int8_t x495 = 0;
static int32_t x505 = INT32_MAX;
static uint8_t x511 = 108U;
static volatile int8_t x517 = 5;
int8_t x518 = -1;
int32_t t130 = 67339;
int8_t x528 = INT8_MAX;
int64_t x529 = INT64_MAX;
int64_t x534 = -26LL;
uint16_t x540 = 2757U;
volatile int64_t x544 = INT64_MIN;
int16_t x545 = INT16_MAX;
int16_t x547 = -1;
static volatile uint8_t x550 = 1U;
static int16_t x555 = INT16_MAX;
int8_t x558 = INT8_MIN;
volatile int16_t x561 = 2;
int8_t x566 = -3;
int8_t x569 = INT8_MIN;
int8_t x571 = -1;
volatile int32_t t142 = -208;
int32_t t144 = -29783447;
uint8_t x585 = UINT8_MAX;
volatile int16_t x588 = INT16_MIN;
int8_t x596 = INT8_MIN;
int32_t t148 = -153042735;
uint64_t x601 = 402609153LLU;
int32_t x605 = INT32_MIN;
int32_t x609 = 104259296;
uint64_t x610 = 7489393946998140927LLU;
uint64_t x616 = UINT64_MAX;
volatile int8_t x619 = INT8_MAX;
volatile int32_t t154 = -20083;
volatile int64_t x626 = INT64_MAX;
static volatile int32_t t157 = -25272;
int32_t t158 = -2323792;
volatile int32_t t159 = -26513;
int32_t x642 = 42;
static int32_t t161 = 1;
static volatile int32_t x649 = INT32_MAX;
int16_t x651 = -1;
int16_t x656 = -1;
uint32_t x657 = 5400U;
uint16_t x666 = UINT16_MAX;
volatile int32_t t167 = -848389321;
static int16_t x676 = 6801;
int32_t x677 = INT32_MAX;
static int8_t x680 = -20;
uint32_t x681 = 343613487U;
int32_t x684 = -1;
uint8_t x685 = UINT8_MAX;
int8_t x688 = -1;
int16_t x691 = 356;
volatile int32_t t177 = 21581784;
int32_t t180 = -14016;
int32_t x727 = INT32_MAX;
int16_t x730 = INT16_MIN;
int8_t x731 = INT8_MIN;
int32_t x736 = 689795;
int8_t x737 = INT8_MIN;
uint64_t x740 = UINT64_MAX;
volatile int32_t t184 = -26;
volatile int32_t x741 = 0;
int32_t t186 = -2;
int32_t x752 = 68;
volatile int32_t t187 = 2992818;
volatile int32_t t188 = -951141145;
volatile int8_t x764 = INT8_MAX;
int32_t t190 = -24903566;
static int8_t x765 = -1;
uint64_t x768 = 2489243990LLU;
int8_t x769 = INT8_MAX;
uint16_t x775 = UINT16_MAX;
int8_t x776 = 0;
volatile uint64_t x783 = UINT64_MAX;
volatile int32_t t197 = -766643;
volatile int32_t t198 = 2;
int32_t x797 = -1;
int64_t x800 = -1LL;
int32_t t199 = -229;


void f0(void) {
    	static volatile int8_t x1 = 0;
	static int16_t x2 = INT16_MIN;
	int8_t x3 = INT8_MAX;
	int32_t x4 = INT32_MAX;
	int32_t t0 = 88;

    t0 = ((x1|x2)<=(x3&x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x6 = UINT32_MAX;
	static volatile uint64_t x7 = UINT64_MAX;
	uint64_t x8 = 3LLU;
	static volatile int32_t t1 = -6116;

    t1 = ((x5|x6)<=(x7&x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x9 = INT32_MIN;
	int64_t x10 = INT64_MIN;
	uint16_t x11 = 30608U;
	static int32_t x12 = 6619727;
	volatile int32_t t2 = -2509;

    t2 = ((x9|x10)<=(x11&x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = INT64_MIN;
	uint64_t x14 = UINT64_MAX;
	int16_t x15 = INT16_MIN;
	int32_t x16 = INT32_MAX;
	volatile int32_t t3 = 29942163;

    t3 = ((x13|x14)<=(x15&x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x17 = INT32_MIN;
	static uint32_t x18 = 243461U;
	int32_t x19 = -1;
	static int8_t x20 = 1;
	volatile int32_t t4 = 40183008;

    t4 = ((x17|x18)<=(x19&x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int64_t x23 = INT64_MIN;
	uint32_t x24 = 1U;
	int32_t t5 = 3;

    t5 = ((x21|x22)<=(x23&x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = INT8_MIN;
	uint16_t x27 = 9U;
	volatile int16_t x28 = INT16_MIN;
	static volatile int32_t t6 = 734641;

    t6 = ((x25|x26)<=(x27&x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = 0U;
	int64_t x30 = INT64_MAX;
	int16_t x32 = 15776;
	static int32_t t7 = 84;

    t7 = ((x29|x30)<=(x31&x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int32_t x34 = 1;
	int8_t x35 = INT8_MIN;

    t8 = ((x33|x34)<=(x35&x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = INT16_MAX;
	static uint16_t x38 = UINT16_MAX;
	int8_t x39 = INT8_MIN;
	volatile uint16_t x40 = 3U;
	int32_t t9 = 0;

    t9 = ((x37|x38)<=(x39&x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int32_t x41 = INT32_MIN;
	int16_t x42 = -1;
	int16_t x43 = 6746;
	int32_t t10 = 15;

    t10 = ((x41|x42)<=(x43&x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x45 = INT64_MIN;
	uint16_t x46 = 629U;
	static volatile int64_t x47 = INT64_MAX;
	int64_t x48 = INT64_MIN;
	static int32_t t11 = 3884962;

    t11 = ((x45|x46)<=(x47&x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x49 = 3319;
	static volatile int64_t x50 = -147351190LL;
	int64_t x52 = INT64_MAX;

    t12 = ((x49|x50)<=(x51&x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x53 = 5U;
	uint64_t x54 = UINT64_MAX;
	uint64_t x55 = 33382773754LLU;
	uint16_t x56 = 8U;
	static int32_t t13 = 4011622;

    t13 = ((x53|x54)<=(x55&x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x58 = UINT64_MAX;
	volatile uint8_t x59 = 27U;
	static volatile int32_t t14 = 4263;

    t14 = ((x57|x58)<=(x59&x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x61 = 39U;
	int64_t x62 = INT64_MIN;
	int64_t x63 = INT64_MAX;
	volatile int32_t x64 = INT32_MIN;
	volatile int32_t t15 = -2559;

    t15 = ((x61|x62)<=(x63&x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x65 = -1;
	int8_t x66 = INT8_MIN;
	int16_t x67 = INT16_MIN;
	uint8_t x68 = UINT8_MAX;
	int32_t t16 = 2;

    t16 = ((x65|x66)<=(x67&x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = INT64_MIN;
	uint8_t x70 = UINT8_MAX;
	int64_t x72 = INT64_MIN;
	volatile int32_t t17 = 937764;

    t17 = ((x69|x70)<=(x71&x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint64_t x73 = UINT64_MAX;
	volatile int8_t x74 = INT8_MIN;
	int64_t x75 = INT64_MIN;
	uint16_t x76 = UINT16_MAX;
	static volatile int32_t t18 = 0;

    t18 = ((x73|x74)<=(x75&x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint32_t x78 = 0U;
	static int64_t x79 = -28811175992068LL;
	int8_t x80 = 1;
	int32_t t19 = -243057;

    t19 = ((x77|x78)<=(x79&x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = 21564284;
	int8_t x82 = INT8_MIN;
	static volatile int16_t x83 = INT16_MIN;
	int32_t x84 = INT32_MIN;
	volatile int32_t t20 = 118389102;

    t20 = ((x81|x82)<=(x83&x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x85 = 17U;
	volatile int64_t x86 = 466181961LL;
	int8_t x87 = INT8_MIN;
	static volatile int16_t x88 = INT16_MIN;
	int32_t t21 = 29;

    t21 = ((x85|x86)<=(x87&x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x89 = -7341;
	volatile uint16_t x90 = 1U;
	volatile uint32_t x92 = 10U;
	volatile int32_t t22 = 754124;

    t22 = ((x89|x90)<=(x91&x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x94 = -15;
	static int16_t x95 = INT16_MAX;
	int32_t x96 = 8;
	static int32_t t23 = 274;

    t23 = ((x93|x94)<=(x95&x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x97 = 4U;
	int16_t x98 = 9183;
	int16_t x100 = INT16_MAX;
	int32_t t24 = -11;

    t24 = ((x97|x98)<=(x99&x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint16_t x101 = 38U;
	int32_t x102 = -360013220;
	static volatile int32_t t25 = -109;

    t25 = ((x101|x102)<=(x103&x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = INT64_MIN;
	int64_t x106 = -1LL;
	uint64_t x107 = UINT64_MAX;
	int32_t x108 = INT32_MIN;
	volatile int32_t t26 = -28;

    t26 = ((x105|x106)<=(x107&x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int32_t x110 = INT32_MIN;
	int64_t x111 = 197LL;
	volatile int32_t x112 = INT32_MAX;

    t27 = ((x109|x110)<=(x111&x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x113 = INT16_MIN;
	static volatile int8_t x114 = INT8_MIN;
	volatile uint16_t x115 = 5U;
	int16_t x116 = 60;
	volatile int32_t t28 = -18588;

    t28 = ((x113|x114)<=(x115&x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int16_t x117 = -15;
	int16_t x118 = 6267;
	int64_t x120 = INT64_MIN;
	volatile int32_t t29 = -11080491;

    t29 = ((x117|x118)<=(x119&x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = INT32_MIN;
	static volatile int32_t x122 = INT32_MIN;
	uint32_t x123 = 44U;
	uint64_t x124 = 3335106570815LLU;
	int32_t t30 = 1569456;

    t30 = ((x121|x122)<=(x123&x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int8_t x125 = INT8_MIN;
	static uint64_t x126 = 221852604182574LLU;
	int16_t x127 = INT16_MIN;
	int32_t x128 = INT32_MIN;
	volatile int32_t t31 = -2646;

    t31 = ((x125|x126)<=(x127&x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x130 = INT8_MIN;
	static uint64_t x131 = UINT64_MAX;
	uint8_t x132 = UINT8_MAX;
	volatile int32_t t32 = 7181;

    t32 = ((x129|x130)<=(x131&x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x133 = 9U;
	uint16_t x134 = 21289U;
	static int16_t x135 = 6;
	volatile uint16_t x136 = UINT16_MAX;
	volatile int32_t t33 = 1699;

    t33 = ((x133|x134)<=(x135&x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int16_t x137 = 4;
	uint64_t x139 = 11743165969497188LLU;
	static volatile int16_t x140 = 3973;
	volatile int32_t t34 = 27490;

    t34 = ((x137|x138)<=(x139&x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = 44;
	uint64_t x143 = 1LLU;
	int16_t x144 = 856;
	static int32_t t35 = -119461;

    t35 = ((x141|x142)<=(x143&x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int32_t x145 = -1;
	int16_t x147 = -1;
	static int8_t x148 = -1;
	int32_t t36 = 1811;

    t36 = ((x145|x146)<=(x147&x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x149 = -184107584899485LL;
	static int8_t x151 = INT8_MAX;

    t37 = ((x149|x150)<=(x151&x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x153 = 67U;
	uint32_t x154 = 80311U;
	static int8_t x155 = -1;
	int32_t x156 = -2;
	int32_t t38 = -18103;

    t38 = ((x153|x154)<=(x155&x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x157 = INT16_MIN;
	uint32_t x158 = 344480U;
	uint16_t x160 = UINT16_MAX;
	volatile int32_t t39 = 38769225;

    t39 = ((x157|x158)<=(x159&x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x161 = -1LL;
	int32_t x162 = -1;
	volatile int32_t t40 = 1020611;

    t40 = ((x161|x162)<=(x163&x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x165 = -16437274;
	int8_t x166 = INT8_MIN;
	volatile uint8_t x167 = 2U;
	volatile int32_t x168 = 3465;

    t41 = ((x165|x166)<=(x167&x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint64_t x169 = 620036651LLU;
	volatile int16_t x171 = 561;
	int32_t x172 = INT32_MAX;
	int32_t t42 = 14756412;

    t42 = ((x169|x170)<=(x171&x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x173 = UINT64_MAX;
	int32_t x174 = INT32_MAX;
	int64_t x175 = INT64_MIN;
	uint8_t x176 = UINT8_MAX;

    t43 = ((x173|x174)<=(x175&x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x178 = UINT64_MAX;
	static int32_t t44 = 54674480;

    t44 = ((x177|x178)<=(x179&x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x182 = 49;
	int32_t x183 = INT32_MAX;
	static int8_t x184 = 1;
	int32_t t45 = -492121565;

    t45 = ((x181|x182)<=(x183&x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x186 = -692784481;
	int64_t x187 = -1LL;
	static int32_t t46 = -331442;

    t46 = ((x185|x186)<=(x187&x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint32_t x189 = 55610U;
	int32_t x190 = INT32_MIN;
	int32_t x191 = INT32_MIN;
	int64_t x192 = INT64_MIN;
	static int32_t t47 = 348;

    t47 = ((x189|x190)<=(x191&x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int16_t x193 = INT16_MIN;
	static uint64_t x194 = 30LLU;
	uint32_t x195 = UINT32_MAX;
	int32_t x196 = 343051;
	int32_t t48 = -63;

    t48 = ((x193|x194)<=(x195&x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static int32_t x198 = INT32_MAX;
	int64_t x199 = INT64_MAX;
	volatile int32_t x200 = INT32_MIN;
	int32_t t49 = 23;

    t49 = ((x197|x198)<=(x199&x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x201 = INT8_MIN;
	int64_t x202 = -1LL;
	volatile int16_t x203 = INT16_MIN;
	static volatile int64_t x204 = -1LL;

    t50 = ((x201|x202)<=(x203&x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x205 = -5;
	int32_t x206 = -151299408;
	uint64_t x207 = UINT64_MAX;
	int32_t x208 = -1;
	volatile int32_t t51 = -702;

    t51 = ((x205|x206)<=(x207&x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x212 = INT32_MIN;
	static volatile int32_t t52 = 516659;

    t52 = ((x209|x210)<=(x211&x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x214 = -31;
	static int8_t x215 = INT8_MAX;
	uint64_t x216 = UINT64_MAX;
	int32_t t53 = 57717;

    t53 = ((x213|x214)<=(x215&x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x217 = 1;
	int64_t x218 = INT64_MIN;
	int8_t x219 = 17;

    t54 = ((x217|x218)<=(x219&x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x221 = 3414LLU;
	int16_t x222 = -1;
	volatile uint16_t x223 = 59U;
	uint8_t x224 = 1U;
	int32_t t55 = -5953;

    t55 = ((x221|x222)<=(x223&x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x226 = -953021573850937LL;
	int16_t x227 = -1;
	volatile int16_t x228 = INT16_MIN;
	static int32_t t56 = -185971096;

    t56 = ((x225|x226)<=(x227&x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x229 = 7;
	uint64_t x230 = 7LLU;
	volatile uint8_t x231 = 5U;
	uint64_t x232 = 308406564030502LLU;
	int32_t t57 = -262;

    t57 = ((x229|x230)<=(x231&x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint32_t x233 = 21910870U;
	static uint32_t x234 = 6664U;
	int8_t x235 = -1;
	volatile int32_t x236 = INT32_MAX;

    t58 = ((x233|x234)<=(x235&x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x237 = INT64_MIN;
	int32_t x238 = -1;
	volatile int16_t x239 = INT16_MAX;
	volatile int32_t x240 = INT32_MIN;

    t59 = ((x237|x238)<=(x239&x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x241 = -92;
	int16_t x242 = 142;
	int16_t x244 = INT16_MIN;
	volatile int32_t t60 = -7684373;

    t60 = ((x241|x242)<=(x243&x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x245 = -1LL;
	uint64_t x246 = UINT64_MAX;
	uint8_t x247 = UINT8_MAX;
	volatile int32_t x248 = -1;

    t61 = ((x245|x246)<=(x247&x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static int32_t x249 = INT32_MIN;
	static int64_t x250 = -1LL;
	static int8_t x251 = INT8_MAX;
	int64_t x252 = INT64_MAX;
	int32_t t62 = -37;

    t62 = ((x249|x250)<=(x251&x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x253 = -1;
	int8_t x254 = INT8_MIN;
	volatile int16_t x255 = -1;
	static int16_t x256 = 38;
	volatile int32_t t63 = 129172;

    t63 = ((x253|x254)<=(x255&x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int32_t x257 = -1;
	int32_t x258 = INT32_MIN;
	static volatile int16_t x259 = 1744;
	uint8_t x260 = UINT8_MAX;
	volatile int32_t t64 = -419738815;

    t64 = ((x257|x258)<=(x259&x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x261 = 9935269U;
	volatile int16_t x262 = INT16_MAX;
	uint32_t x263 = 323961993U;
	int64_t x264 = INT64_MIN;
	volatile int32_t t65 = -10;

    t65 = ((x261|x262)<=(x263&x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x265 = INT64_MIN;
	int64_t x266 = INT64_MAX;
	int8_t x267 = -13;
	static volatile uint64_t x268 = 4211LLU;
	static volatile int32_t t66 = 14;

    t66 = ((x265|x266)<=(x267&x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x271 = -3;
	int32_t t67 = 2560356;

    t67 = ((x269|x270)<=(x271&x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x273 = UINT8_MAX;
	int64_t x276 = INT64_MAX;
	int32_t t68 = 14663308;

    t68 = ((x273|x274)<=(x275&x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x278 = INT64_MIN;
	int16_t x279 = INT16_MIN;
	volatile int32_t t69 = 3;

    t69 = ((x277|x278)<=(x279&x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x281 = INT32_MIN;
	static int16_t x282 = -1;
	int32_t x283 = INT32_MAX;
	uint16_t x284 = UINT16_MAX;
	volatile int32_t t70 = -3;

    t70 = ((x281|x282)<=(x283&x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x285 = INT64_MIN;
	int16_t x286 = INT16_MIN;
	uint16_t x287 = 16U;
	int32_t t71 = 37502;

    t71 = ((x285|x286)<=(x287&x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x289 = -5;
	int32_t x290 = -270;
	int8_t x291 = 0;
	volatile int32_t t72 = 1;

    t72 = ((x289|x290)<=(x291&x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x293 = 140010625;
	static uint32_t x295 = 19566U;
	static int8_t x296 = INT8_MIN;

    t73 = ((x293|x294)<=(x295&x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x297 = -1615;
	int16_t x298 = 367;
	volatile int8_t x299 = 3;
	int64_t x300 = -1LL;
	int32_t t74 = 53230984;

    t74 = ((x297|x298)<=(x299&x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint32_t x302 = UINT32_MAX;
	uint8_t x303 = 54U;
	uint64_t x304 = 362061LLU;
	int32_t t75 = 9;

    t75 = ((x301|x302)<=(x303&x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x306 = UINT32_MAX;
	volatile int8_t x307 = -1;
	int32_t x308 = INT32_MAX;
	int32_t t76 = -657;

    t76 = ((x305|x306)<=(x307&x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x309 = 429LL;
	uint16_t x310 = 7U;
	int16_t x311 = -1;
	int32_t x312 = -29987103;
	volatile int32_t t77 = -13;

    t77 = ((x309|x310)<=(x311&x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint64_t x313 = 221416167072LLU;
	static int16_t x314 = -105;
	volatile uint32_t x315 = 69340U;
	int8_t x316 = -1;
	int32_t t78 = 71802790;

    t78 = ((x313|x314)<=(x315&x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x317 = INT32_MAX;
	uint32_t x318 = 43328U;
	int32_t x320 = INT32_MIN;
	volatile int32_t t79 = 99092262;

    t79 = ((x317|x318)<=(x319&x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x321 = 12635;
	static int16_t x322 = -1;
	int32_t x324 = -1;
	int32_t t80 = -970;

    t80 = ((x321|x322)<=(x323&x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x325 = -1;
	static volatile int64_t x326 = INT64_MIN;
	uint64_t x327 = UINT64_MAX;
	static uint64_t x328 = 24695706744LLU;
	int32_t t81 = 3355;

    t81 = ((x325|x326)<=(x327&x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x329 = UINT64_MAX;
	uint32_t x330 = UINT32_MAX;
	int16_t x331 = 541;
	int16_t x332 = INT16_MAX;
	volatile int32_t t82 = 1;

    t82 = ((x329|x330)<=(x331&x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint16_t x333 = 8164U;
	uint64_t x334 = 109237827LLU;
	int32_t t83 = 99;

    t83 = ((x333|x334)<=(x335&x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x337 = -19690861507714LL;
	int16_t x338 = -1;
	volatile uint8_t x339 = UINT8_MAX;
	uint8_t x340 = 6U;
	static int32_t t84 = -45002;

    t84 = ((x337|x338)<=(x339&x340));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x342 = -1LL;
	int16_t x343 = -1;
	int64_t x344 = 662485249883LL;
	volatile int32_t t85 = 0;

    t85 = ((x341|x342)<=(x343&x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x345 = UINT8_MAX;
	uint64_t x346 = 471487822681623LLU;
	int8_t x347 = -8;
	static int16_t x348 = INT16_MAX;
	int32_t t86 = 12746;

    t86 = ((x345|x346)<=(x347&x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x349 = -1;
	int16_t x350 = INT16_MIN;
	static volatile int8_t x351 = 0;

    t87 = ((x349|x350)<=(x351&x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static int32_t x353 = -1;
	int64_t x354 = 478559LL;
	static int8_t x355 = 3;
	static uint8_t x356 = 4U;

    t88 = ((x353|x354)<=(x355&x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile int16_t x357 = -1;
	int64_t x359 = -1LL;

    t89 = ((x357|x358)<=(x359&x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x361 = 49;
	int64_t x362 = INT64_MIN;
	int32_t x363 = INT32_MIN;
	int32_t x364 = -2;

    t90 = ((x361|x362)<=(x363&x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x366 = 1;
	int16_t x367 = INT16_MIN;
	volatile uint64_t x368 = 3386155298139741496LLU;
	static volatile int32_t t91 = 0;

    t91 = ((x365|x366)<=(x367&x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static int64_t x369 = INT64_MIN;
	uint32_t x370 = UINT32_MAX;
	static int8_t x372 = INT8_MAX;
	int32_t t92 = 882068712;

    t92 = ((x369|x370)<=(x371&x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x373 = UINT32_MAX;
	int8_t x376 = INT8_MIN;
	volatile int32_t t93 = -31;

    t93 = ((x373|x374)<=(x375&x376));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x377 = 0LL;
	int16_t x378 = INT16_MIN;
	int64_t x379 = -370506652469515LL;
	int64_t x380 = INT64_MIN;
	volatile int32_t t94 = -99784;

    t94 = ((x377|x378)<=(x379&x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint32_t x381 = 429080882U;
	uint16_t x382 = 98U;
	static uint16_t x383 = 0U;

    t95 = ((x381|x382)<=(x383&x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x385 = INT16_MAX;
	int64_t x386 = INT64_MIN;
	static int64_t x388 = INT64_MIN;
	int32_t t96 = -1099;

    t96 = ((x385|x386)<=(x387&x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x389 = 340U;
	int8_t x390 = INT8_MAX;
	int32_t x392 = INT32_MAX;
	volatile int32_t t97 = 239615914;

    t97 = ((x389|x390)<=(x391&x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile uint8_t x393 = UINT8_MAX;
	volatile uint8_t x394 = 9U;
	volatile int32_t t98 = -891;

    t98 = ((x393|x394)<=(x395&x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x397 = -1LL;
	volatile int32_t x398 = INT32_MIN;
	static int64_t x399 = -1LL;
	volatile int8_t x400 = INT8_MIN;

    t99 = ((x397|x398)<=(x399&x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x402 = 5U;
	int32_t x403 = INT32_MAX;
	int16_t x404 = INT16_MAX;
	int32_t t100 = 265;

    t100 = ((x401|x402)<=(x403&x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x405 = -27;
	static int8_t x407 = INT8_MIN;
	volatile int32_t t101 = -188511002;

    t101 = ((x405|x406)<=(x407&x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x410 = INT8_MIN;
	uint64_t x411 = UINT64_MAX;
	int32_t x412 = -1563474;
	volatile int32_t t102 = 3839871;

    t102 = ((x409|x410)<=(x411&x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile uint16_t x413 = 1367U;
	int32_t x416 = INT32_MIN;
	int32_t t103 = 305;

    t103 = ((x413|x414)<=(x415&x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x417 = INT64_MIN;
	int64_t x418 = -1LL;
	static int16_t x420 = INT16_MIN;
	volatile int32_t t104 = -684;

    t104 = ((x417|x418)<=(x419&x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x421 = 564U;
	uint8_t x422 = 31U;
	volatile int8_t x423 = INT8_MIN;
	int8_t x424 = -35;
	static int32_t t105 = 1;

    t105 = ((x421|x422)<=(x423&x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x425 = 138U;
	int16_t x426 = INT16_MIN;
	uint32_t x427 = UINT32_MAX;

    t106 = ((x425|x426)<=(x427&x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x429 = INT32_MIN;
	volatile uint32_t x430 = 9U;
	volatile int16_t x432 = INT16_MIN;
	int32_t t107 = 68;

    t107 = ((x429|x430)<=(x431&x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x433 = 10787U;
	static uint8_t x434 = 9U;
	static int64_t x435 = -4300496546773LL;
	int32_t x436 = 21044925;
	int32_t t108 = -84479447;

    t108 = ((x433|x434)<=(x435&x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x438 = INT16_MIN;
	int8_t x440 = INT8_MIN;
	static int32_t t109 = -31838;

    t109 = ((x437|x438)<=(x439&x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static int32_t x441 = -2392072;
	uint16_t x442 = UINT16_MAX;
	uint32_t x443 = 1U;
	uint16_t x444 = 1573U;
	volatile int32_t t110 = -7;

    t110 = ((x441|x442)<=(x443&x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x445 = UINT8_MAX;
	int32_t x446 = -1;
	int32_t x447 = -498103;
	int32_t x448 = INT32_MIN;
	static volatile int32_t t111 = -2984;

    t111 = ((x445|x446)<=(x447&x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x449 = 850U;
	int16_t x450 = -1;
	volatile int32_t x451 = INT32_MIN;
	static uint16_t x452 = 21U;

    t112 = ((x449|x450)<=(x451&x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x453 = INT32_MAX;
	int8_t x454 = INT8_MIN;
	int64_t x455 = INT64_MIN;
	static volatile uint8_t x456 = UINT8_MAX;
	volatile int32_t t113 = -72573594;

    t113 = ((x453|x454)<=(x455&x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static int8_t x457 = INT8_MIN;
	int8_t x458 = -1;
	static uint32_t x459 = UINT32_MAX;
	volatile int32_t t114 = -493407736;

    t114 = ((x457|x458)<=(x459&x460));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static int64_t x461 = -1LL;
	static uint64_t x462 = UINT64_MAX;
	uint16_t x463 = 202U;
	int64_t x464 = -6726410279694LL;
	volatile int32_t t115 = -91;

    t115 = ((x461|x462)<=(x463&x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x465 = 5U;
	uint32_t x466 = 0U;
	uint64_t x468 = UINT64_MAX;
	int32_t t116 = -1477;

    t116 = ((x465|x466)<=(x467&x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile int16_t x470 = -206;
	int8_t x471 = -1;
	uint64_t x472 = 6530579935599LLU;
	volatile int32_t t117 = -305322614;

    t117 = ((x469|x470)<=(x471&x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = INT8_MIN;
	int32_t x474 = -1;
	volatile int8_t x475 = INT8_MIN;
	int32_t x476 = INT32_MIN;
	static int32_t t118 = 393812;

    t118 = ((x473|x474)<=(x475&x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint16_t x477 = UINT16_MAX;
	uint8_t x478 = UINT8_MAX;
	uint16_t x479 = UINT16_MAX;

    t119 = ((x477|x478)<=(x479&x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x481 = INT16_MIN;
	static int32_t x482 = -14856;
	int32_t x483 = 59146268;
	int64_t x484 = INT64_MAX;

    t120 = ((x481|x482)<=(x483&x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x485 = INT8_MIN;
	int32_t x486 = INT32_MIN;
	uint8_t x487 = 1U;
	volatile int32_t t121 = 7761938;

    t121 = ((x485|x486)<=(x487&x488));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int32_t x489 = INT32_MIN;
	uint16_t x491 = 8057U;
	volatile int32_t t122 = -25064;

    t122 = ((x489|x490)<=(x491&x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x493 = -1LL;
	static volatile int32_t x494 = INT32_MIN;
	int64_t x496 = -16447019LL;
	int32_t t123 = 9231;

    t123 = ((x493|x494)<=(x495&x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint64_t x497 = 7LLU;
	static uint16_t x498 = 13755U;
	uint64_t x499 = 539436404044LLU;
	volatile uint32_t x500 = 177U;
	int32_t t124 = -12;

    t124 = ((x497|x498)<=(x499&x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint32_t x501 = 8056U;
	int16_t x502 = INT16_MAX;
	volatile uint64_t x503 = UINT64_MAX;
	int16_t x504 = INT16_MAX;
	volatile int32_t t125 = 129754487;

    t125 = ((x501|x502)<=(x503&x504));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x506 = UINT8_MAX;
	int8_t x507 = INT8_MAX;
	volatile int16_t x508 = -10;
	volatile int32_t t126 = -50415006;

    t126 = ((x505|x506)<=(x507&x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int8_t x509 = 27;
	uint32_t x510 = UINT32_MAX;
	uint32_t x512 = UINT32_MAX;
	static volatile int32_t t127 = -291269;

    t127 = ((x509|x510)<=(x511&x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x513 = 46U;
	volatile uint32_t x514 = 176U;
	volatile int8_t x515 = INT8_MIN;
	uint64_t x516 = UINT64_MAX;
	static volatile int32_t t128 = -87;

    t128 = ((x513|x514)<=(x515&x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int32_t x519 = -750281;
	uint8_t x520 = UINT8_MAX;
	int32_t t129 = 49;

    t129 = ((x517|x518)<=(x519&x520));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x521 = -1;
	uint32_t x522 = 3009U;
	uint32_t x523 = UINT32_MAX;
	int16_t x524 = 7957;

    t130 = ((x521|x522)<=(x523&x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int8_t x525 = -1;
	static int64_t x526 = 20837220LL;
	int64_t x527 = -6LL;
	int32_t t131 = 1;

    t131 = ((x525|x526)<=(x527&x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x530 = 311;
	uint64_t x531 = UINT64_MAX;
	static uint8_t x532 = 44U;
	int32_t t132 = 2130;

    t132 = ((x529|x530)<=(x531&x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int64_t x533 = INT64_MIN;
	int8_t x535 = -1;
	static int32_t x536 = INT32_MAX;
	int32_t t133 = 81964279;

    t133 = ((x533|x534)<=(x535&x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x537 = 112U;
	int8_t x538 = -3;
	int32_t x539 = -74311627;
	volatile int32_t t134 = -148179;

    t134 = ((x537|x538)<=(x539&x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x541 = 120334554U;
	int16_t x542 = -5012;
	uint64_t x543 = UINT64_MAX;
	static int32_t t135 = -150;

    t135 = ((x541|x542)<=(x543&x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x546 = INT64_MAX;
	uint32_t x548 = UINT32_MAX;
	volatile int32_t t136 = -220;

    t136 = ((x545|x546)<=(x547&x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x549 = -1412LL;
	int64_t x551 = -1LL;
	uint64_t x552 = 30LLU;
	volatile int32_t t137 = 6835558;

    t137 = ((x549|x550)<=(x551&x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x553 = UINT16_MAX;
	uint8_t x554 = 125U;
	int32_t x556 = INT32_MIN;
	volatile int32_t t138 = -15;

    t138 = ((x553|x554)<=(x555&x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x557 = -1;
	static int64_t x559 = -1LL;
	int64_t x560 = INT64_MIN;
	int32_t t139 = 258676894;

    t139 = ((x557|x558)<=(x559&x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x562 = 1208734490U;
	uint16_t x563 = 0U;
	static uint16_t x564 = UINT16_MAX;
	volatile int32_t t140 = -118815573;

    t140 = ((x561|x562)<=(x563&x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x565 = UINT64_MAX;
	int64_t x567 = -17461638874321385LL;
	uint32_t x568 = 0U;
	int32_t t141 = 43;

    t141 = ((x565|x566)<=(x567&x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x570 = -1LL;
	int16_t x572 = INT16_MIN;

    t142 = ((x569|x570)<=(x571&x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int16_t x573 = INT16_MAX;
	uint16_t x574 = UINT16_MAX;
	int64_t x575 = INT64_MIN;
	volatile int64_t x576 = -1LL;
	int32_t t143 = 34;

    t143 = ((x573|x574)<=(x575&x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint64_t x577 = 12274LLU;
	int16_t x578 = INT16_MAX;
	uint8_t x579 = UINT8_MAX;
	int16_t x580 = INT16_MAX;

    t144 = ((x577|x578)<=(x579&x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x581 = INT16_MIN;
	uint16_t x582 = UINT16_MAX;
	int16_t x583 = INT16_MIN;
	volatile int16_t x584 = INT16_MIN;
	int32_t t145 = -760254542;

    t145 = ((x581|x582)<=(x583&x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x586 = 60LL;
	int16_t x587 = -1;
	static int32_t t146 = -117021;

    t146 = ((x585|x586)<=(x587&x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint8_t x589 = 3U;
	volatile int16_t x590 = INT16_MIN;
	int64_t x591 = -1LL;
	uint64_t x592 = 130257451275650LLU;
	static volatile int32_t t147 = 293023;

    t147 = ((x589|x590)<=(x591&x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x593 = INT8_MIN;
	uint8_t x594 = 2U;
	int32_t x595 = 371;

    t148 = ((x593|x594)<=(x595&x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static int32_t x597 = INT32_MIN;
	int8_t x598 = -1;
	int32_t x599 = 0;
	volatile int8_t x600 = INT8_MAX;
	int32_t t149 = -28;

    t149 = ((x597|x598)<=(x599&x600));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x602 = 1U;
	static int8_t x603 = INT8_MAX;
	int64_t x604 = INT64_MIN;
	volatile int32_t t150 = -8703972;

    t150 = ((x601|x602)<=(x603&x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x606 = INT8_MAX;
	static volatile int16_t x607 = 1;
	static uint32_t x608 = 19239U;
	static int32_t t151 = 1029520588;

    t151 = ((x605|x606)<=(x607&x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x611 = 1368958424561407618LLU;
	uint64_t x612 = 1610597LLU;
	int32_t t152 = 511616;

    t152 = ((x609|x610)<=(x611&x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x613 = -1LL;
	uint16_t x614 = UINT16_MAX;
	volatile int32_t x615 = INT32_MIN;
	volatile int32_t t153 = -796;

    t153 = ((x613|x614)<=(x615&x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x617 = UINT64_MAX;
	int32_t x618 = INT32_MIN;
	uint32_t x620 = UINT32_MAX;

    t154 = ((x617|x618)<=(x619&x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x621 = INT32_MAX;
	static int32_t x622 = -1;
	static int64_t x623 = 123542823LL;
	int16_t x624 = -1;
	int32_t t155 = -3920332;

    t155 = ((x621|x622)<=(x623&x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x625 = 0;
	uint64_t x627 = 35047308LLU;
	int64_t x628 = -4LL;
	volatile int32_t t156 = -7;

    t156 = ((x625|x626)<=(x627&x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x629 = 2;
	int64_t x630 = INT64_MAX;
	int64_t x631 = INT64_MIN;
	volatile int8_t x632 = -1;

    t157 = ((x629|x630)<=(x631&x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x633 = 242175592254223LLU;
	static volatile int16_t x634 = -36;
	int16_t x635 = INT16_MIN;
	int8_t x636 = -1;

    t158 = ((x633|x634)<=(x635&x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x637 = -241;
	int8_t x638 = INT8_MAX;
	volatile int32_t x639 = INT32_MIN;
	uint64_t x640 = UINT64_MAX;

    t159 = ((x637|x638)<=(x639&x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x641 = -1LL;
	uint16_t x643 = 7U;
	int16_t x644 = INT16_MIN;
	volatile int32_t t160 = 15043;

    t160 = ((x641|x642)<=(x643&x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x645 = -2851LL;
	int64_t x646 = INT64_MIN;
	int16_t x647 = INT16_MIN;
	int64_t x648 = -33801LL;

    t161 = ((x645|x646)<=(x647&x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static int32_t x650 = 11462717;
	uint16_t x652 = 1U;
	volatile int32_t t162 = 8061723;

    t162 = ((x649|x650)<=(x651&x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x653 = INT8_MAX;
	int8_t x654 = INT8_MIN;
	static uint64_t x655 = 55951050313LLU;
	int32_t t163 = 15;

    t163 = ((x653|x654)<=(x655&x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x658 = INT32_MAX;
	int64_t x659 = INT64_MIN;
	int64_t x660 = 34690LL;
	int32_t t164 = 4884;

    t164 = ((x657|x658)<=(x659&x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x661 = UINT32_MAX;
	uint32_t x662 = UINT32_MAX;
	uint8_t x663 = 12U;
	int16_t x664 = -1;
	static int32_t t165 = 1791;

    t165 = ((x661|x662)<=(x663&x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint64_t x665 = 5630052LLU;
	int64_t x667 = INT64_MIN;
	uint32_t x668 = 2833968U;
	int32_t t166 = -12612;

    t166 = ((x665|x666)<=(x667&x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile int64_t x669 = -1LL;
	uint64_t x670 = 48672823LLU;
	int64_t x671 = INT64_MAX;
	int16_t x672 = 2;

    t167 = ((x669|x670)<=(x671&x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x673 = -1;
	volatile int8_t x674 = -10;
	volatile uint64_t x675 = 4LLU;
	volatile int32_t t168 = 54;

    t168 = ((x673|x674)<=(x675&x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint64_t x678 = 7751006801406LLU;
	int64_t x679 = INT64_MIN;
	volatile int32_t t169 = -22889116;

    t169 = ((x677|x678)<=(x679&x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x682 = 499270967859582LLU;
	int64_t x683 = INT64_MIN;
	int32_t t170 = 1;

    t170 = ((x681|x682)<=(x683&x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x686 = -4443;
	int16_t x687 = -1;
	volatile int32_t t171 = 15971470;

    t171 = ((x685|x686)<=(x687&x688));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x689 = INT32_MAX;
	static volatile int8_t x690 = -1;
	uint16_t x692 = UINT16_MAX;
	int32_t t172 = 0;

    t172 = ((x689|x690)<=(x691&x692));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x693 = 395U;
	int32_t x694 = INT32_MIN;
	uint16_t x695 = UINT16_MAX;
	volatile uint64_t x696 = UINT64_MAX;
	volatile int32_t t173 = 37273595;

    t173 = ((x693|x694)<=(x695&x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x697 = INT8_MAX;
	int32_t x698 = INT32_MIN;
	uint16_t x699 = 15U;
	volatile uint16_t x700 = 3610U;
	int32_t t174 = 3590869;

    t174 = ((x697|x698)<=(x699&x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x701 = INT16_MAX;
	int16_t x702 = INT16_MAX;
	static int16_t x703 = INT16_MIN;
	int64_t x704 = INT64_MIN;
	static volatile int32_t t175 = -3975599;

    t175 = ((x701|x702)<=(x703&x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x705 = 5;
	uint16_t x706 = 85U;
	uint16_t x707 = 14997U;
	int8_t x708 = INT8_MIN;
	volatile int32_t t176 = 4391991;

    t176 = ((x705|x706)<=(x707&x708));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x709 = -1;
	volatile int8_t x710 = -1;
	int64_t x711 = 3936527076842834611LL;
	volatile int8_t x712 = INT8_MIN;

    t177 = ((x709|x710)<=(x711&x712));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static int8_t x713 = -5;
	int32_t x714 = INT32_MIN;
	volatile int8_t x715 = INT8_MIN;
	int32_t x716 = -14485461;
	static int32_t t178 = 31084;

    t178 = ((x713|x714)<=(x715&x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x717 = 21855U;
	int64_t x718 = INT64_MIN;
	volatile int64_t x719 = -1LL;
	uint16_t x720 = 228U;
	static volatile int32_t t179 = 3018512;

    t179 = ((x717|x718)<=(x719&x720));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x721 = INT8_MIN;
	static int64_t x722 = -30LL;
	uint16_t x723 = 0U;
	int16_t x724 = 25;

    t180 = ((x721|x722)<=(x723&x724));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint16_t x725 = UINT16_MAX;
	static uint64_t x726 = UINT64_MAX;
	uint64_t x728 = 445193675LLU;
	volatile int32_t t181 = -1;

    t181 = ((x725|x726)<=(x727&x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x729 = 19LLU;
	static int32_t x732 = -930473;
	volatile int32_t t182 = 351305283;

    t182 = ((x729|x730)<=(x731&x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x733 = 846LL;
	uint8_t x734 = 0U;
	int8_t x735 = INT8_MIN;
	int32_t t183 = 8269896;

    t183 = ((x733|x734)<=(x735&x736));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x738 = INT8_MIN;
	uint32_t x739 = UINT32_MAX;

    t184 = ((x737|x738)<=(x739&x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x742 = 47U;
	int32_t x743 = -1;
	uint64_t x744 = 2742082329LLU;
	volatile int32_t t185 = 14;

    t185 = ((x741|x742)<=(x743&x744));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x745 = INT16_MIN;
	static int16_t x746 = 458;
	int32_t x747 = INT32_MIN;
	int8_t x748 = INT8_MIN;

    t186 = ((x745|x746)<=(x747&x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint16_t x749 = UINT16_MAX;
	volatile int16_t x750 = -1731;
	volatile uint32_t x751 = UINT32_MAX;

    t187 = ((x749|x750)<=(x751&x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x753 = INT8_MIN;
	int8_t x754 = INT8_MIN;
	uint64_t x755 = 30052LLU;
	int8_t x756 = INT8_MAX;

    t188 = ((x753|x754)<=(x755&x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x757 = -79981185;
	static int8_t x758 = -1;
	int16_t x759 = INT16_MAX;
	uint8_t x760 = 1U;
	volatile int32_t t189 = -91649;

    t189 = ((x757|x758)<=(x759&x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint64_t x761 = 31485963LLU;
	volatile uint8_t x762 = UINT8_MAX;
	int64_t x763 = 12719099302194LL;

    t190 = ((x761|x762)<=(x763&x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint32_t x766 = UINT32_MAX;
	uint8_t x767 = 0U;
	int32_t t191 = -5;

    t191 = ((x765|x766)<=(x767&x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int8_t x770 = 0;
	int32_t x771 = 899996;
	volatile uint64_t x772 = UINT64_MAX;
	volatile int32_t t192 = 49863411;

    t192 = ((x769|x770)<=(x771&x772));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x773 = -1;
	uint64_t x774 = 114030032430LLU;
	volatile int32_t t193 = -13248;

    t193 = ((x773|x774)<=(x775&x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x777 = INT32_MIN;
	volatile int16_t x778 = -1;
	static uint16_t x779 = 489U;
	uint16_t x780 = 104U;
	int32_t t194 = 188947878;

    t194 = ((x777|x778)<=(x779&x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x781 = -1LL;
	static int32_t x782 = INT32_MIN;
	static int16_t x784 = INT16_MIN;
	int32_t t195 = -48;

    t195 = ((x781|x782)<=(x783&x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x785 = 1775607623097477LL;
	int32_t x786 = INT32_MIN;
	int8_t x787 = -1;
	uint8_t x788 = 12U;
	int32_t t196 = 11;

    t196 = ((x785|x786)<=(x787&x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x789 = UINT32_MAX;
	int8_t x790 = 52;
	int32_t x791 = -1;
	static uint64_t x792 = 376081LLU;

    t197 = ((x789|x790)<=(x791&x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x793 = 2U;
	int64_t x794 = -500LL;
	uint8_t x795 = UINT8_MAX;
	uint64_t x796 = 984LLU;

    t198 = ((x793|x794)<=(x795&x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x798 = 3U;
	int8_t x799 = INT8_MIN;

    t199 = ((x797|x798)<=(x799&x800));

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

