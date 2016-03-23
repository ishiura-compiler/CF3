
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

static uint8_t x5 = 104U;
uint16_t x9 = 109U;
int16_t x12 = INT16_MAX;
uint32_t x14 = UINT32_MAX;
int32_t x19 = INT32_MIN;
volatile int32_t t4 = 93;
volatile int64_t x22 = INT64_MIN;
int32_t t5 = 1793;
uint64_t x25 = 2273804LLU;
static volatile int8_t x32 = -1;
int32_t x33 = INT32_MIN;
volatile uint32_t x35 = 1987839949U;
int64_t x38 = -1LL;
int8_t x40 = INT8_MIN;
int32_t t10 = -1873;
static volatile int8_t x46 = INT8_MIN;
static int64_t x48 = 836588913261215546LL;
volatile int32_t x51 = 3737067;
uint16_t x55 = 0U;
int32_t x58 = INT32_MAX;
int64_t x60 = INT64_MIN;
int8_t x66 = INT8_MAX;
static volatile int8_t x67 = -1;
int64_t x69 = -20020470295797196LL;
int32_t x73 = INT32_MAX;
static int16_t x82 = INT16_MIN;
volatile uint16_t x89 = 31U;
static volatile int32_t t22 = -16844;
uint16_t x94 = 1686U;
static int16_t x96 = -1;
uint64_t x99 = 128670820605188LLU;
static volatile uint16_t x109 = 46U;
uint16_t x114 = UINT16_MAX;
int16_t x122 = INT16_MAX;
uint32_t x124 = 445994287U;
volatile int32_t t33 = 3;
int64_t x137 = INT64_MIN;
int16_t x138 = -1;
int8_t x140 = -1;
int32_t x142 = -243740399;
static int8_t x144 = -1;
int32_t t36 = 2;
int16_t x150 = -1;
int8_t x152 = 60;
uint8_t x157 = UINT8_MAX;
uint8_t x158 = UINT8_MAX;
int32_t x163 = 47138240;
static volatile int32_t t40 = -2003599;
int64_t x170 = INT64_MAX;
volatile int8_t x188 = INT8_MAX;
uint64_t x197 = 1743547787160360LLU;
int32_t t49 = -373;
int32_t x211 = 103158;
uint64_t x214 = 486293LLU;
int16_t x216 = -1;
int32_t x220 = -371;
volatile uint8_t x225 = UINT8_MAX;
static int32_t t56 = 1;
uint8_t x232 = UINT8_MAX;
static uint8_t x234 = UINT8_MAX;
uint32_t x237 = UINT32_MAX;
int64_t x246 = INT64_MAX;
volatile int32_t t60 = 3;
int64_t x256 = 102LL;
uint16_t x259 = 46U;
static int16_t x260 = -68;
int8_t x261 = INT8_MIN;
uint8_t x264 = 22U;
volatile uint16_t x268 = 1U;
int32_t t65 = 1;
int64_t x270 = INT64_MAX;
volatile int32_t x279 = INT32_MIN;
int16_t x280 = 0;
volatile int32_t t68 = -8;
uint64_t x282 = 374166600LLU;
int32_t t70 = 970;
int8_t x291 = -1;
static volatile int32_t t72 = 3135;
uint64_t x302 = 568853231LLU;
int32_t t75 = -395;
int16_t x311 = INT16_MIN;
volatile int32_t x318 = INT32_MIN;
int16_t x320 = 4990;
int32_t x325 = -1;
int32_t t80 = 407748;
uint16_t x329 = 0U;
volatile int64_t x332 = INT64_MIN;
int64_t x333 = INT64_MAX;
volatile int32_t t82 = 14356439;
int8_t x340 = INT8_MAX;
static int32_t t83 = -153900805;
uint32_t x342 = 499024U;
int8_t x344 = INT8_MIN;
int8_t x348 = INT8_MIN;
static volatile uint16_t x349 = 1U;
volatile int16_t x354 = 3;
int64_t x356 = 55481LL;
volatile int32_t t87 = -440989154;
static volatile int64_t x359 = -1LL;
volatile int32_t t89 = -23329;
static volatile int32_t x368 = INT32_MIN;
static volatile int32_t t90 = -13;
static volatile int8_t x371 = -1;
int8_t x376 = -8;
int32_t t96 = -809963031;
int32_t x397 = INT32_MIN;
uint8_t x400 = 44U;
static uint8_t x402 = UINT8_MAX;
uint8_t x404 = 17U;
int32_t x415 = INT32_MAX;
static volatile uint64_t x422 = 598294203173896869LLU;
static int32_t t103 = -2;
volatile int32_t t104 = 14983;
int64_t x438 = -1LL;
static uint16_t x447 = UINT16_MAX;
uint64_t x449 = 4367688253LLU;
volatile int64_t x452 = INT64_MAX;
int64_t x454 = 39173813804117LL;
int16_t x459 = -1;
int64_t x460 = INT64_MIN;
static volatile int64_t x464 = -1LL;
static int32_t x465 = -6;
int64_t x470 = 17LL;
int32_t t114 = 5117;
volatile int32_t t115 = 222052;
volatile int32_t x478 = -1908;
static uint64_t x480 = 21995LLU;
static int64_t x484 = 26318827940636LL;
int16_t x485 = 1;
uint8_t x490 = UINT8_MAX;
uint8_t x496 = 1U;
static uint16_t x498 = 7U;
uint64_t x507 = 726509LLU;
volatile int32_t t123 = -76687785;
volatile uint32_t x511 = 4671U;
int32_t x515 = -326;
int32_t x521 = INT32_MIN;
int8_t x523 = -1;
uint8_t x528 = 44U;
int8_t x534 = -1;
int16_t x539 = -8262;
int32_t x540 = INT32_MIN;
int16_t x544 = INT16_MIN;
int32_t x545 = -36924306;
int32_t x546 = 2;
volatile uint16_t x550 = UINT16_MAX;
volatile int32_t t133 = -2476600;
volatile int16_t x553 = INT16_MIN;
int16_t x555 = 8051;
static int32_t x558 = -249505;
uint32_t x559 = 81U;
int64_t x560 = -1LL;
int64_t x563 = -111LL;
volatile int64_t x567 = 15064789950977391LL;
int64_t x569 = -6622855310427209LL;
int8_t x571 = INT8_MAX;
volatile int32_t t138 = 37;
static uint8_t x576 = 2U;
int32_t x578 = INT32_MIN;
int32_t x581 = 245792;
static int64_t x586 = 160659011LL;
int8_t x588 = INT8_MAX;
uint8_t x589 = 7U;
int32_t x590 = -10580100;
uint64_t x591 = 6762LLU;
static volatile int16_t x596 = -1;
int32_t t145 = 139;
int32_t x602 = -1;
int16_t x604 = 13;
volatile int16_t x607 = -1;
static volatile int32_t t147 = -63291008;
int32_t x614 = INT32_MAX;
int8_t x616 = INT8_MAX;
volatile int16_t x620 = 4074;
int64_t x621 = INT64_MIN;
static int32_t t151 = 36;
static int16_t x627 = INT16_MIN;
int16_t x635 = INT16_MIN;
int32_t t155 = 0;
int32_t x644 = -54786;
static int16_t x653 = INT16_MIN;
uint8_t x661 = 31U;
int16_t x664 = -1;
int32_t t160 = 101470;
static int64_t x666 = -1LL;
int32_t t161 = 1785;
int8_t x676 = INT8_MAX;
int32_t x684 = INT32_MIN;
static uint16_t x690 = 17U;
int16_t x692 = 256;
static volatile int32_t x694 = INT32_MIN;
int32_t t169 = 78941;
static int8_t x704 = -1;
int32_t x711 = INT32_MIN;
static uint64_t x714 = 4836668LLU;
uint16_t x717 = UINT16_MAX;
int64_t x720 = INT64_MIN;
int32_t t174 = 31;
volatile uint16_t x724 = 57U;
int16_t x732 = INT16_MIN;
int16_t x740 = INT16_MAX;
static int8_t x743 = INT8_MIN;
static volatile uint64_t x747 = 52LLU;
static int8_t x751 = INT8_MIN;
uint32_t x752 = UINT32_MAX;
static int32_t x764 = -1;
static int16_t x768 = INT16_MIN;
int64_t x772 = INT64_MIN;
volatile int64_t x779 = INT64_MIN;
int8_t x784 = INT8_MIN;
int32_t x792 = INT32_MAX;
int32_t t192 = -488;
int8_t x803 = 60;
int16_t x805 = INT16_MAX;
volatile int64_t x806 = -3817158957LL;
int8_t x815 = 1;
static uint8_t x819 = UINT8_MAX;


void f0(void) {
    	static volatile int32_t x1 = INT32_MIN;
	int32_t x2 = -1;
	int16_t x3 = -8;
	int32_t x4 = -2801;
	static volatile int32_t t0 = -18128637;

    t0 = ((x1%x2)<=(x3&x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x6 = INT64_MIN;
	int8_t x7 = 1;
	int32_t x8 = -1;
	int32_t t1 = -983463;

    t1 = ((x5%x6)<=(x7&x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x10 = INT16_MIN;
	int32_t x11 = INT32_MIN;
	volatile int32_t t2 = 15696;

    t2 = ((x9%x10)<=(x11&x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = INT16_MIN;
	static uint8_t x15 = 106U;
	int64_t x16 = INT64_MAX;
	volatile int32_t t3 = 447890449;

    t3 = ((x13%x14)<=(x15&x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x17 = 210U;
	int64_t x18 = INT64_MIN;
	uint8_t x20 = 33U;

    t4 = ((x17%x18)<=(x19&x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile int8_t x21 = INT8_MIN;
	uint16_t x23 = 2U;
	static int16_t x24 = 10;

    t5 = ((x21%x22)<=(x23&x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x26 = INT8_MIN;
	int16_t x27 = -1;
	uint16_t x28 = 3U;
	volatile int32_t t6 = -9;

    t6 = ((x25%x26)<=(x27&x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x29 = 0U;
	volatile uint16_t x30 = UINT16_MAX;
	static int64_t x31 = 495855597LL;
	int32_t t7 = -289276072;

    t7 = ((x29%x30)<=(x31&x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x34 = INT32_MAX;
	int8_t x36 = INT8_MAX;
	int32_t t8 = -108263621;

    t8 = ((x33%x34)<=(x35&x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x37 = 56346465U;
	volatile int16_t x39 = 1;
	int32_t t9 = -7;

    t9 = ((x37%x38)<=(x39&x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x41 = 3347939915411154637LLU;
	int16_t x42 = -1;
	static volatile uint32_t x43 = 6677159U;
	static volatile int32_t x44 = -27937203;

    t10 = ((x41%x42)<=(x43&x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x45 = UINT32_MAX;
	volatile uint32_t x47 = UINT32_MAX;
	volatile int32_t t11 = -34400;

    t11 = ((x45%x46)<=(x47&x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x49 = -1LL;
	static int32_t x50 = INT32_MIN;
	int64_t x52 = INT64_MAX;
	int32_t t12 = -86723;

    t12 = ((x49%x50)<=(x51&x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = INT8_MIN;
	static int16_t x54 = -1;
	int64_t x56 = 677411026995288LL;
	int32_t t13 = -64805;

    t13 = ((x53%x54)<=(x55&x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = -1;
	int8_t x59 = -2;
	volatile int32_t t14 = 794;

    t14 = ((x57%x58)<=(x59&x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x61 = 744U;
	volatile uint32_t x62 = 32U;
	int8_t x63 = 0;
	uint16_t x64 = UINT16_MAX;
	int32_t t15 = -541;

    t15 = ((x61%x62)<=(x63&x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = -1;
	int8_t x68 = INT8_MAX;
	int32_t t16 = -136;

    t16 = ((x65%x66)<=(x67&x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x70 = -165;
	static volatile int16_t x71 = INT16_MIN;
	volatile uint32_t x72 = UINT32_MAX;
	volatile int32_t t17 = 191;

    t17 = ((x69%x70)<=(x71&x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x74 = INT8_MIN;
	int32_t x75 = INT32_MAX;
	int8_t x76 = INT8_MIN;
	int32_t t18 = 334513739;

    t18 = ((x73%x74)<=(x75&x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x77 = INT32_MIN;
	static volatile int8_t x78 = -3;
	uint8_t x79 = 44U;
	int16_t x80 = 17;
	volatile int32_t t19 = 50;

    t19 = ((x77%x78)<=(x79&x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = INT64_MIN;
	volatile int8_t x83 = INT8_MAX;
	static int64_t x84 = -22LL;
	static volatile int32_t t20 = -104707438;

    t20 = ((x81%x82)<=(x83&x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int32_t x85 = -1;
	static int32_t x86 = INT32_MAX;
	int8_t x87 = INT8_MIN;
	int16_t x88 = INT16_MAX;
	volatile int32_t t21 = -3028531;

    t21 = ((x85%x86)<=(x87&x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static int8_t x90 = INT8_MAX;
	int16_t x91 = -1181;
	static int8_t x92 = INT8_MIN;

    t22 = ((x89%x90)<=(x91&x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x93 = 3;
	uint64_t x95 = UINT64_MAX;
	int32_t t23 = -44269;

    t23 = ((x93%x94)<=(x95&x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x97 = 660LLU;
	static int32_t x98 = -1;
	volatile int16_t x100 = 0;
	int32_t t24 = -3124;

    t24 = ((x97%x98)<=(x99&x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x101 = 9001;
	int32_t x102 = INT32_MIN;
	int64_t x103 = INT64_MAX;
	int32_t x104 = INT32_MIN;
	int32_t t25 = 87;

    t25 = ((x101%x102)<=(x103&x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x105 = 229077699770871LLU;
	int8_t x106 = INT8_MIN;
	uint32_t x107 = 303661496U;
	volatile int16_t x108 = -4826;
	static volatile int32_t t26 = 140248863;

    t26 = ((x105%x106)<=(x107&x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int64_t x110 = INT64_MIN;
	int8_t x111 = 0;
	int8_t x112 = -1;
	static int32_t t27 = 3;

    t27 = ((x109%x110)<=(x111&x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x113 = UINT64_MAX;
	int32_t x115 = INT32_MIN;
	volatile uint16_t x116 = 13673U;
	volatile int32_t t28 = 28114;

    t28 = ((x113%x114)<=(x115&x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint16_t x117 = 2U;
	int32_t x118 = -1;
	static volatile int32_t x119 = INT32_MIN;
	int8_t x120 = -15;
	int32_t t29 = -230945;

    t29 = ((x117%x118)<=(x119&x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = INT16_MAX;
	int64_t x123 = INT64_MIN;
	static volatile int32_t t30 = 3;

    t30 = ((x121%x122)<=(x123&x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x125 = -179312212298402LL;
	int8_t x126 = INT8_MIN;
	uint32_t x127 = 36U;
	volatile uint8_t x128 = 13U;
	static int32_t t31 = 465455;

    t31 = ((x125%x126)<=(x127&x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x129 = INT16_MIN;
	int16_t x130 = -3229;
	int8_t x131 = INT8_MAX;
	uint16_t x132 = 453U;
	int32_t t32 = -450279466;

    t32 = ((x129%x130)<=(x131&x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint64_t x133 = 24944772589570596LLU;
	int64_t x134 = INT64_MIN;
	volatile uint8_t x135 = UINT8_MAX;
	int8_t x136 = INT8_MIN;

    t33 = ((x133%x134)<=(x135&x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint64_t x139 = 2815145411886297LLU;
	int32_t t34 = 6;

    t34 = ((x137%x138)<=(x139&x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = -281;
	uint32_t x143 = UINT32_MAX;
	static volatile int32_t t35 = -72363838;

    t35 = ((x141%x142)<=(x143&x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int32_t x145 = 244558316;
	int8_t x146 = INT8_MIN;
	int64_t x147 = -1LL;
	int32_t x148 = INT32_MAX;

    t36 = ((x145%x146)<=(x147&x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = -1LL;
	int16_t x151 = -1;
	volatile int32_t t37 = -102;

    t37 = ((x149%x150)<=(x151&x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x153 = 989181317425LL;
	volatile int16_t x154 = 57;
	uint32_t x155 = 3907920U;
	static int16_t x156 = INT16_MIN;
	int32_t t38 = -8;

    t38 = ((x153%x154)<=(x155&x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int32_t x159 = -1;
	uint32_t x160 = 708U;
	int32_t t39 = -262;

    t39 = ((x157%x158)<=(x159&x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x161 = -404259949;
	uint64_t x162 = UINT64_MAX;
	uint32_t x164 = 3579331U;

    t40 = ((x161%x162)<=(x163&x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x165 = 7;
	static uint64_t x166 = 147900837LLU;
	volatile uint64_t x167 = 491081221320LLU;
	volatile uint8_t x168 = 9U;
	int32_t t41 = -10;

    t41 = ((x165%x166)<=(x167&x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x169 = INT32_MIN;
	int16_t x171 = INT16_MIN;
	int8_t x172 = INT8_MIN;
	volatile int32_t t42 = 0;

    t42 = ((x169%x170)<=(x171&x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int64_t x173 = 599420354LL;
	int8_t x174 = INT8_MAX;
	volatile uint64_t x175 = 553649684719LLU;
	volatile int32_t x176 = INT32_MIN;
	static volatile int32_t t43 = 121887371;

    t43 = ((x173%x174)<=(x175&x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x177 = 10;
	int32_t x178 = INT32_MIN;
	int8_t x179 = -2;
	int8_t x180 = INT8_MIN;
	int32_t t44 = -77;

    t44 = ((x177%x178)<=(x179&x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = 454825612840697223LL;
	int32_t x182 = -1;
	volatile int8_t x183 = INT8_MIN;
	int8_t x184 = -1;
	int32_t t45 = -488772293;

    t45 = ((x181%x182)<=(x183&x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x185 = -69459343812303224LL;
	static uint16_t x186 = UINT16_MAX;
	int8_t x187 = INT8_MIN;
	volatile int32_t t46 = 12;

    t46 = ((x185%x186)<=(x187&x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint8_t x189 = UINT8_MAX;
	uint64_t x190 = 271023881187991618LLU;
	int16_t x191 = 91;
	int8_t x192 = -10;
	int32_t t47 = -4900012;

    t47 = ((x189%x190)<=(x191&x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x193 = 0;
	int16_t x194 = -1;
	uint32_t x195 = 103072080U;
	uint16_t x196 = UINT16_MAX;
	static volatile int32_t t48 = 410;

    t48 = ((x193%x194)<=(x195&x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x198 = INT8_MIN;
	uint64_t x199 = 262006594LLU;
	static int8_t x200 = INT8_MIN;

    t49 = ((x197%x198)<=(x199&x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x201 = 10U;
	int16_t x202 = -1;
	static volatile int64_t x203 = INT64_MIN;
	volatile int32_t x204 = INT32_MAX;
	int32_t t50 = 62;

    t50 = ((x201%x202)<=(x203&x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x205 = UINT64_MAX;
	int16_t x206 = INT16_MIN;
	int8_t x207 = INT8_MIN;
	static volatile uint64_t x208 = UINT64_MAX;
	int32_t t51 = 782609333;

    t51 = ((x205%x206)<=(x207&x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static int16_t x209 = -1;
	static int16_t x210 = -439;
	static int16_t x212 = INT16_MAX;
	volatile int32_t t52 = 1;

    t52 = ((x209%x210)<=(x211&x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x213 = INT16_MIN;
	uint16_t x215 = 0U;
	volatile int32_t t53 = 1100;

    t53 = ((x213%x214)<=(x215&x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x217 = 101U;
	static int64_t x218 = INT64_MAX;
	int16_t x219 = 28;
	int32_t t54 = -41;

    t54 = ((x217%x218)<=(x219&x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x221 = INT16_MIN;
	static int32_t x222 = 2;
	volatile int64_t x223 = -234202335953513589LL;
	int64_t x224 = -1LL;
	int32_t t55 = 570196;

    t55 = ((x221%x222)<=(x223&x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x226 = -1;
	int16_t x227 = 1;
	uint64_t x228 = 264764957083159LLU;

    t56 = ((x225%x226)<=(x227&x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int64_t x229 = INT64_MIN;
	uint64_t x230 = 19865787907452LLU;
	int16_t x231 = -1;
	int32_t t57 = 6;

    t57 = ((x229%x230)<=(x231&x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint8_t x233 = 2U;
	int64_t x235 = -1LL;
	static uint8_t x236 = 114U;
	int32_t t58 = 21623929;

    t58 = ((x233%x234)<=(x235&x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x238 = INT8_MIN;
	int8_t x239 = -6;
	int64_t x240 = 29LL;
	volatile int32_t t59 = 3259;

    t59 = ((x237%x238)<=(x239&x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint8_t x245 = UINT8_MAX;
	int32_t x247 = 1043307624;
	int8_t x248 = INT8_MAX;

    t60 = ((x245%x246)<=(x247&x248));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint64_t x249 = 134662946LLU;
	uint32_t x250 = UINT32_MAX;
	volatile uint8_t x251 = 2U;
	int32_t x252 = 0;
	int32_t t61 = 504;

    t61 = ((x249%x250)<=(x251&x252));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x253 = INT16_MIN;
	int16_t x254 = INT16_MIN;
	int8_t x255 = -1;
	int32_t t62 = 1074094;

    t62 = ((x253%x254)<=(x255&x256));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x257 = -1LL;
	int8_t x258 = INT8_MIN;
	static int32_t t63 = 2233828;

    t63 = ((x257%x258)<=(x259&x260));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x262 = -1;
	volatile uint64_t x263 = UINT64_MAX;
	int32_t t64 = -32;

    t64 = ((x261%x262)<=(x263&x264));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x265 = 211445718;
	int32_t x266 = INT32_MAX;
	int16_t x267 = INT16_MIN;

    t65 = ((x265%x266)<=(x267&x268));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint64_t x269 = 3LLU;
	int32_t x271 = -1;
	int16_t x272 = INT16_MIN;
	volatile int32_t t66 = -2013281;

    t66 = ((x269%x270)<=(x271&x272));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x273 = -79395445;
	uint32_t x274 = 917U;
	uint32_t x275 = 72014U;
	static volatile uint32_t x276 = 25331U;
	int32_t t67 = -1372364;

    t67 = ((x273%x274)<=(x275&x276));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint64_t x277 = 15LLU;
	uint16_t x278 = 1315U;

    t68 = ((x277%x278)<=(x279&x280));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x281 = INT64_MAX;
	static int32_t x283 = INT32_MAX;
	volatile int64_t x284 = INT64_MIN;
	static int32_t t69 = -7177;

    t69 = ((x281%x282)<=(x283&x284));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static int16_t x285 = INT16_MIN;
	uint32_t x286 = 8079607U;
	static int16_t x287 = 0;
	static uint16_t x288 = 4U;

    t70 = ((x285%x286)<=(x287&x288));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int64_t x289 = -6631365622LL;
	int16_t x290 = INT16_MAX;
	uint8_t x292 = 31U;
	int32_t t71 = 9;

    t71 = ((x289%x290)<=(x291&x292));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int8_t x293 = -1;
	uint32_t x294 = UINT32_MAX;
	int16_t x295 = INT16_MIN;
	uint64_t x296 = UINT64_MAX;

    t72 = ((x293%x294)<=(x295&x296));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile int64_t x297 = INT64_MIN;
	static int16_t x298 = INT16_MIN;
	int8_t x299 = INT8_MIN;
	uint32_t x300 = UINT32_MAX;
	int32_t t73 = 2;

    t73 = ((x297%x298)<=(x299&x300));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x301 = INT32_MIN;
	int8_t x303 = 0;
	int32_t x304 = INT32_MAX;
	volatile int32_t t74 = 996992548;

    t74 = ((x301%x302)<=(x303&x304));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int64_t x305 = INT64_MAX;
	uint64_t x306 = UINT64_MAX;
	int32_t x307 = -868;
	int16_t x308 = INT16_MIN;

    t75 = ((x305%x306)<=(x307&x308));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x309 = -1LL;
	int8_t x310 = INT8_MIN;
	static uint8_t x312 = UINT8_MAX;
	static volatile int32_t t76 = 29491647;

    t76 = ((x309%x310)<=(x311&x312));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x313 = 207590LLU;
	static int8_t x314 = INT8_MIN;
	int8_t x315 = INT8_MIN;
	static uint16_t x316 = UINT16_MAX;
	int32_t t77 = 42912;

    t77 = ((x313%x314)<=(x315&x316));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x317 = INT32_MIN;
	int64_t x319 = 19124100LL;
	int32_t t78 = -125281414;

    t78 = ((x317%x318)<=(x319&x320));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x321 = INT16_MIN;
	int32_t x322 = INT32_MIN;
	int32_t x323 = INT32_MIN;
	uint16_t x324 = 1065U;
	int32_t t79 = -25625;

    t79 = ((x321%x322)<=(x323&x324));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x326 = -65018;
	int16_t x327 = INT16_MAX;
	volatile int64_t x328 = INT64_MAX;

    t80 = ((x325%x326)<=(x327&x328));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x330 = INT64_MIN;
	static volatile uint32_t x331 = UINT32_MAX;
	int32_t t81 = 450686;

    t81 = ((x329%x330)<=(x331&x332));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int8_t x334 = -4;
	int16_t x335 = INT16_MIN;
	int64_t x336 = -1LL;

    t82 = ((x333%x334)<=(x335&x336));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x337 = UINT8_MAX;
	int8_t x338 = INT8_MAX;
	volatile int8_t x339 = 35;

    t83 = ((x337%x338)<=(x339&x340));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x341 = 29;
	volatile int64_t x343 = INT64_MAX;
	int32_t t84 = -17939;

    t84 = ((x341%x342)<=(x343&x344));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x345 = INT64_MAX;
	volatile int32_t x346 = INT32_MAX;
	volatile int64_t x347 = 7853021LL;
	volatile int32_t t85 = 1022274;

    t85 = ((x345%x346)<=(x347&x348));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x350 = -19447543925143LL;
	static int32_t x351 = INT32_MIN;
	static int64_t x352 = -1LL;
	static int32_t t86 = 38;

    t86 = ((x349%x350)<=(x351&x352));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x353 = INT8_MIN;
	static uint8_t x355 = 66U;

    t87 = ((x353%x354)<=(x355&x356));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x357 = -5;
	static int8_t x358 = 7;
	int8_t x360 = INT8_MIN;
	volatile int32_t t88 = 324251548;

    t88 = ((x357%x358)<=(x359&x360));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int32_t x361 = INT32_MIN;
	static int8_t x362 = INT8_MAX;
	int8_t x363 = -1;
	static uint32_t x364 = 36758593U;

    t89 = ((x361%x362)<=(x363&x364));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x365 = INT32_MIN;
	uint8_t x366 = UINT8_MAX;
	uint16_t x367 = 1350U;

    t90 = ((x365%x366)<=(x367&x368));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x369 = -1;
	int32_t x370 = -1;
	int32_t x372 = 12;
	volatile int32_t t91 = -526780593;

    t91 = ((x369%x370)<=(x371&x372));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x373 = INT8_MAX;
	int64_t x374 = -1LL;
	uint16_t x375 = 811U;
	volatile int32_t t92 = 7;

    t92 = ((x373%x374)<=(x375&x376));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x377 = 483660067325279609LLU;
	int16_t x378 = -15979;
	volatile int8_t x379 = INT8_MIN;
	volatile int64_t x380 = -1LL;
	int32_t t93 = 1;

    t93 = ((x377%x378)<=(x379&x380));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x381 = INT8_MIN;
	static int64_t x382 = INT64_MIN;
	uint16_t x383 = 33U;
	volatile int8_t x384 = -55;
	volatile int32_t t94 = 20548451;

    t94 = ((x381%x382)<=(x383&x384));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static int8_t x385 = INT8_MIN;
	uint16_t x386 = 67U;
	int8_t x387 = INT8_MAX;
	uint64_t x388 = 32464735LLU;
	int32_t t95 = -3096722;

    t95 = ((x385%x386)<=(x387&x388));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x389 = INT64_MIN;
	int32_t x390 = -1;
	volatile uint32_t x391 = 16021564U;
	static int8_t x392 = INT8_MAX;

    t96 = ((x389%x390)<=(x391&x392));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int16_t x393 = 49;
	int64_t x394 = -1LL;
	static int8_t x395 = INT8_MIN;
	uint16_t x396 = 10U;
	int32_t t97 = 0;

    t97 = ((x393%x394)<=(x395&x396));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int64_t x398 = INT64_MIN;
	uint16_t x399 = 3U;
	int32_t t98 = 243238;

    t98 = ((x397%x398)<=(x399&x400));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x401 = -1427217056LL;
	static uint16_t x403 = 2U;
	volatile int32_t t99 = -1;

    t99 = ((x401%x402)<=(x403&x404));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x405 = 919091LL;
	static uint64_t x406 = 2079503318121LLU;
	volatile uint8_t x407 = UINT8_MAX;
	uint8_t x408 = UINT8_MAX;
	volatile int32_t t100 = 12;

    t100 = ((x405%x406)<=(x407&x408));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x409 = 25;
	uint32_t x410 = 1366U;
	uint32_t x411 = 55790339U;
	int32_t x412 = INT32_MIN;
	static int32_t t101 = 70147821;

    t101 = ((x409%x410)<=(x411&x412));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x413 = -1;
	int8_t x414 = INT8_MIN;
	int64_t x416 = -8313369918LL;
	volatile int32_t t102 = 827254;

    t102 = ((x413%x414)<=(x415&x416));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint64_t x421 = 56892565825381643LLU;
	uint8_t x423 = 3U;
	int32_t x424 = INT32_MIN;

    t103 = ((x421%x422)<=(x423&x424));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static int16_t x425 = INT16_MIN;
	int32_t x426 = 1926;
	uint32_t x427 = UINT32_MAX;
	int16_t x428 = INT16_MIN;

    t104 = ((x425%x426)<=(x427&x428));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint16_t x429 = 11167U;
	int32_t x430 = INT32_MAX;
	uint64_t x431 = UINT64_MAX;
	volatile uint64_t x432 = UINT64_MAX;
	volatile int32_t t105 = -34519347;

    t105 = ((x429%x430)<=(x431&x432));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x437 = -1;
	int8_t x439 = 9;
	uint16_t x440 = 4068U;
	volatile int32_t t106 = 7;

    t106 = ((x437%x438)<=(x439&x440));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x441 = -1;
	volatile uint64_t x442 = 15988LLU;
	int32_t x443 = -1;
	int64_t x444 = INT64_MIN;
	int32_t t107 = 5645161;

    t107 = ((x441%x442)<=(x443&x444));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int16_t x445 = 83;
	int8_t x446 = INT8_MIN;
	int16_t x448 = -1;
	int32_t t108 = 29222;

    t108 = ((x445%x446)<=(x447&x448));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x450 = 394264959LLU;
	static int16_t x451 = -3924;
	volatile int32_t t109 = -1;

    t109 = ((x449%x450)<=(x451&x452));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static int16_t x453 = INT16_MIN;
	uint64_t x455 = UINT64_MAX;
	int8_t x456 = 3;
	int32_t t110 = -61343267;

    t110 = ((x453%x454)<=(x455&x456));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x457 = 55U;
	int16_t x458 = -1;
	int32_t t111 = -296;

    t111 = ((x457%x458)<=(x459&x460));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x461 = 2046U;
	volatile uint16_t x462 = UINT16_MAX;
	volatile int64_t x463 = -171492712402839591LL;
	int32_t t112 = -117;

    t112 = ((x461%x462)<=(x463&x464));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x466 = 6;
	uint32_t x467 = 196U;
	int64_t x468 = INT64_MAX;
	volatile int32_t t113 = -586959209;

    t113 = ((x465%x466)<=(x467&x468));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint64_t x469 = UINT64_MAX;
	uint64_t x471 = 1523406015233211LLU;
	static volatile int64_t x472 = INT64_MAX;

    t114 = ((x469%x470)<=(x471&x472));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x473 = INT16_MIN;
	uint8_t x474 = UINT8_MAX;
	uint32_t x475 = 659517726U;
	int16_t x476 = INT16_MIN;

    t115 = ((x473%x474)<=(x475&x476));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint64_t x477 = UINT64_MAX;
	uint32_t x479 = 1009308502U;
	int32_t t116 = -24574317;

    t116 = ((x477%x478)<=(x479&x480));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x481 = 1598U;
	static volatile int16_t x482 = -45;
	static uint64_t x483 = 178737487254605210LLU;
	volatile int32_t t117 = -288;

    t117 = ((x481%x482)<=(x483&x484));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x486 = 3249874527LL;
	uint8_t x487 = 27U;
	volatile int16_t x488 = INT16_MAX;
	volatile int32_t t118 = 67;

    t118 = ((x485%x486)<=(x487&x488));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint64_t x489 = UINT64_MAX;
	int16_t x491 = -1;
	static uint16_t x492 = UINT16_MAX;
	int32_t t119 = 7;

    t119 = ((x489%x490)<=(x491&x492));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x493 = INT32_MIN;
	int8_t x494 = 1;
	static int64_t x495 = INT64_MAX;
	volatile int32_t t120 = 14551988;

    t120 = ((x493%x494)<=(x495&x496));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x497 = -1LL;
	static int16_t x499 = INT16_MIN;
	volatile uint16_t x500 = UINT16_MAX;
	int32_t t121 = 187868;

    t121 = ((x497%x498)<=(x499&x500));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x501 = -1;
	int32_t x502 = -4752;
	int8_t x503 = 15;
	volatile int64_t x504 = -1LL;
	volatile int32_t t122 = 5568188;

    t122 = ((x501%x502)<=(x503&x504));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x505 = INT8_MIN;
	uint16_t x506 = 3132U;
	int8_t x508 = INT8_MIN;

    t123 = ((x505%x506)<=(x507&x508));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x509 = 1U;
	volatile uint32_t x510 = 174800U;
	int64_t x512 = -7768630833287995LL;
	int32_t t124 = 790381;

    t124 = ((x509%x510)<=(x511&x512));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x513 = 81860593U;
	int64_t x514 = -1907413LL;
	static int8_t x516 = -1;
	int32_t t125 = -48;

    t125 = ((x513%x514)<=(x515&x516));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x517 = INT8_MIN;
	uint64_t x518 = 602LLU;
	volatile int16_t x519 = -4666;
	static int16_t x520 = INT16_MIN;
	volatile int32_t t126 = 26813;

    t126 = ((x517%x518)<=(x519&x520));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x522 = INT8_MAX;
	uint8_t x524 = UINT8_MAX;
	static volatile int32_t t127 = 192464;

    t127 = ((x521%x522)<=(x523&x524));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int64_t x525 = -119349359451LL;
	int8_t x526 = 13;
	int8_t x527 = 0;
	int32_t t128 = -3;

    t128 = ((x525%x526)<=(x527&x528));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x533 = INT64_MIN;
	uint8_t x535 = 22U;
	uint8_t x536 = UINT8_MAX;
	static int32_t t129 = -6;

    t129 = ((x533%x534)<=(x535&x536));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x537 = 8U;
	int64_t x538 = INT64_MIN;
	volatile int32_t t130 = 1008680;

    t130 = ((x537%x538)<=(x539&x540));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint8_t x541 = UINT8_MAX;
	volatile int8_t x542 = 15;
	uint16_t x543 = 2031U;
	int32_t t131 = -431;

    t131 = ((x541%x542)<=(x543&x544));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint32_t x547 = 2268U;
	volatile int32_t x548 = -1;
	int32_t t132 = -4094412;

    t132 = ((x545%x546)<=(x547&x548));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x549 = INT16_MIN;
	int32_t x551 = -1;
	volatile uint16_t x552 = UINT16_MAX;

    t133 = ((x549%x550)<=(x551&x552));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int32_t x554 = INT32_MIN;
	static uint64_t x556 = 363090456034068LLU;
	int32_t t134 = -96984;

    t134 = ((x553%x554)<=(x555&x556));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint64_t x557 = 23203961LLU;
	int32_t t135 = -15;

    t135 = ((x557%x558)<=(x559&x560));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x561 = UINT32_MAX;
	static int16_t x562 = INT16_MAX;
	int16_t x564 = INT16_MIN;
	static volatile int32_t t136 = -122;

    t136 = ((x561%x562)<=(x563&x564));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static int64_t x565 = -7009921LL;
	static int64_t x566 = 1355985908795239LL;
	volatile int32_t x568 = -512947;
	int32_t t137 = 1;

    t137 = ((x565%x566)<=(x567&x568));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x570 = -1;
	int16_t x572 = 3;

    t138 = ((x569%x570)<=(x571&x572));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x573 = 6U;
	static int32_t x574 = -2;
	static uint16_t x575 = 805U;
	static volatile int32_t t139 = -470403849;

    t139 = ((x573%x574)<=(x575&x576));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x577 = UINT64_MAX;
	static int8_t x579 = INT8_MIN;
	static int16_t x580 = INT16_MIN;
	volatile int32_t t140 = -46;

    t140 = ((x577%x578)<=(x579&x580));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x582 = INT64_MAX;
	uint32_t x583 = 1416U;
	uint8_t x584 = 7U;
	int32_t t141 = 9;

    t141 = ((x581%x582)<=(x583&x584));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x585 = -1LL;
	int32_t x587 = 5;
	volatile int32_t t142 = 33;

    t142 = ((x585%x586)<=(x587&x588));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x592 = INT16_MIN;
	int32_t t143 = -308;

    t143 = ((x589%x590)<=(x591&x592));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x593 = UINT32_MAX;
	static int64_t x594 = -1LL;
	int64_t x595 = INT64_MAX;
	static volatile int32_t t144 = -35188;

    t144 = ((x593%x594)<=(x595&x596));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x597 = -10727864;
	uint16_t x598 = 2745U;
	volatile int32_t x599 = 255490478;
	int16_t x600 = INT16_MIN;

    t145 = ((x597%x598)<=(x599&x600));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x601 = INT32_MAX;
	static uint16_t x603 = UINT16_MAX;
	static volatile int32_t t146 = 6113537;

    t146 = ((x601%x602)<=(x603&x604));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static int64_t x605 = INT64_MAX;
	static int64_t x606 = -2078217105484LL;
	int8_t x608 = -1;

    t147 = ((x605%x606)<=(x607&x608));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x609 = UINT16_MAX;
	int16_t x610 = INT16_MIN;
	static uint16_t x611 = 371U;
	uint16_t x612 = 23582U;
	static volatile int32_t t148 = -43;

    t148 = ((x609%x610)<=(x611&x612));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x613 = 8955910538537683774LLU;
	static uint32_t x615 = 1915U;
	int32_t t149 = 214;

    t149 = ((x613%x614)<=(x615&x616));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static int16_t x617 = -1;
	int16_t x618 = 11;
	int8_t x619 = INT8_MIN;
	volatile int32_t t150 = -4808;

    t150 = ((x617%x618)<=(x619&x620));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x622 = INT64_MIN;
	uint32_t x623 = 227U;
	int64_t x624 = -1LL;

    t151 = ((x621%x622)<=(x623&x624));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x625 = UINT64_MAX;
	volatile int32_t x626 = INT32_MIN;
	volatile uint8_t x628 = 12U;
	int32_t t152 = 52353;

    t152 = ((x625%x626)<=(x627&x628));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile int8_t x629 = -1;
	int32_t x630 = -85812;
	static volatile uint64_t x631 = 1256857495739190LLU;
	uint8_t x632 = 10U;
	volatile int32_t t153 = -1;

    t153 = ((x629%x630)<=(x631&x632));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x633 = 413591799605140061LL;
	int16_t x634 = 30;
	uint64_t x636 = 3227122892LLU;
	int32_t t154 = 24837;

    t154 = ((x633%x634)<=(x635&x636));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x637 = 116U;
	static uint16_t x638 = 32631U;
	int8_t x639 = -1;
	int64_t x640 = 301751347897542019LL;

    t155 = ((x637%x638)<=(x639&x640));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x641 = -50;
	static volatile uint64_t x642 = 386342973823LLU;
	volatile int16_t x643 = INT16_MIN;
	int32_t t156 = 1;

    t156 = ((x641%x642)<=(x643&x644));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint32_t x645 = 14106271U;
	volatile int64_t x646 = INT64_MAX;
	static volatile uint32_t x647 = UINT32_MAX;
	uint64_t x648 = 78LLU;
	volatile int32_t t157 = -132438396;

    t157 = ((x645%x646)<=(x647&x648));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x649 = 35860U;
	static uint64_t x650 = UINT64_MAX;
	int16_t x651 = -1;
	int32_t x652 = INT32_MAX;
	volatile int32_t t158 = -113;

    t158 = ((x649%x650)<=(x651&x652));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint32_t x654 = 3213118U;
	int64_t x655 = -5049702130497528LL;
	int64_t x656 = 6LL;
	static int32_t t159 = 423;

    t159 = ((x653%x654)<=(x655&x656));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int32_t x662 = -370;
	uint32_t x663 = UINT32_MAX;

    t160 = ((x661%x662)<=(x663&x664));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint16_t x665 = 27U;
	int8_t x667 = -1;
	int64_t x668 = 971LL;

    t161 = ((x665%x666)<=(x667&x668));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static int64_t x669 = -1LL;
	static volatile int64_t x670 = INT64_MIN;
	int32_t x671 = INT32_MIN;
	int32_t x672 = INT32_MIN;
	static int32_t t162 = 113;

    t162 = ((x669%x670)<=(x671&x672));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x673 = -28;
	static int16_t x674 = INT16_MAX;
	static int16_t x675 = -1;
	int32_t t163 = 5;

    t163 = ((x673%x674)<=(x675&x676));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x677 = INT16_MIN;
	uint32_t x678 = 83603990U;
	static int8_t x679 = -16;
	static volatile int64_t x680 = INT64_MIN;
	int32_t t164 = -25251;

    t164 = ((x677%x678)<=(x679&x680));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x681 = INT64_MIN;
	int8_t x682 = -1;
	int16_t x683 = -6;
	volatile int32_t t165 = -45643026;

    t165 = ((x681%x682)<=(x683&x684));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x685 = -7;
	uint8_t x686 = UINT8_MAX;
	uint16_t x687 = 253U;
	int16_t x688 = -5089;
	volatile int32_t t166 = -1370;

    t166 = ((x685%x686)<=(x687&x688));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x689 = 15U;
	int16_t x691 = -1;
	int32_t t167 = -1587;

    t167 = ((x689%x690)<=(x691&x692));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x693 = 1;
	int8_t x695 = INT8_MIN;
	int64_t x696 = INT64_MIN;
	int32_t t168 = 3;

    t168 = ((x693%x694)<=(x695&x696));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x697 = 0;
	static int64_t x698 = 65505447252243257LL;
	int64_t x699 = INT64_MIN;
	int64_t x700 = 2888104455900445055LL;

    t169 = ((x697%x698)<=(x699&x700));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x701 = -869581;
	int32_t x702 = -1900;
	int8_t x703 = INT8_MIN;
	int32_t t170 = 20;

    t170 = ((x701%x702)<=(x703&x704));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int8_t x705 = INT8_MIN;
	int16_t x706 = INT16_MIN;
	volatile uint64_t x707 = 2417323769699638LLU;
	uint8_t x708 = UINT8_MAX;
	int32_t t171 = 825;

    t171 = ((x705%x706)<=(x707&x708));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x709 = -5;
	int8_t x710 = INT8_MAX;
	static uint32_t x712 = UINT32_MAX;
	int32_t t172 = 7276319;

    t172 = ((x709%x710)<=(x711&x712));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x713 = INT16_MAX;
	uint8_t x715 = UINT8_MAX;
	uint16_t x716 = UINT16_MAX;
	volatile int32_t t173 = -143309;

    t173 = ((x713%x714)<=(x715&x716));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x718 = 18LLU;
	uint64_t x719 = 66735581636642177LLU;

    t174 = ((x717%x718)<=(x719&x720));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x721 = -7912353;
	int8_t x722 = INT8_MAX;
	static int16_t x723 = 2554;
	int32_t t175 = -125;

    t175 = ((x721%x722)<=(x723&x724));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x725 = 23688840LL;
	int8_t x726 = INT8_MIN;
	uint64_t x727 = 4310196616865912026LLU;
	volatile int16_t x728 = INT16_MIN;
	int32_t t176 = -2;

    t176 = ((x725%x726)<=(x727&x728));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint64_t x729 = 22570490LLU;
	int16_t x730 = INT16_MIN;
	static int32_t x731 = -1;
	int32_t t177 = 1184;

    t177 = ((x729%x730)<=(x731&x732));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x733 = 116LLU;
	static int8_t x734 = 3;
	static volatile int64_t x735 = INT64_MIN;
	int16_t x736 = -12;
	volatile int32_t t178 = 35651818;

    t178 = ((x733%x734)<=(x735&x736));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x737 = UINT16_MAX;
	uint16_t x738 = 192U;
	int16_t x739 = 891;
	int32_t t179 = 17709;

    t179 = ((x737%x738)<=(x739&x740));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x741 = 0U;
	static uint8_t x742 = 65U;
	static int16_t x744 = -1;
	volatile int32_t t180 = 231;

    t180 = ((x741%x742)<=(x743&x744));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint64_t x745 = 18122948720LLU;
	static int8_t x746 = 17;
	int64_t x748 = 1LL;
	int32_t t181 = -6;

    t181 = ((x745%x746)<=(x747&x748));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x749 = INT16_MIN;
	int32_t x750 = INT32_MIN;
	volatile int32_t t182 = -6851802;

    t182 = ((x749%x750)<=(x751&x752));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x753 = 2;
	static uint32_t x754 = 192135111U;
	static volatile int32_t x755 = INT32_MAX;
	int64_t x756 = INT64_MIN;
	static volatile int32_t t183 = -1954973;

    t183 = ((x753%x754)<=(x755&x756));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x757 = 1U;
	volatile int16_t x758 = INT16_MAX;
	int8_t x759 = -1;
	uint8_t x760 = 22U;
	static int32_t t184 = -42;

    t184 = ((x757%x758)<=(x759&x760));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x761 = UINT16_MAX;
	volatile uint8_t x762 = UINT8_MAX;
	static int8_t x763 = INT8_MAX;
	int32_t t185 = -32;

    t185 = ((x761%x762)<=(x763&x764));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x765 = -1;
	static uint32_t x766 = 264U;
	int8_t x767 = INT8_MIN;
	int32_t t186 = 1;

    t186 = ((x765%x766)<=(x767&x768));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x769 = 141865168LL;
	uint8_t x770 = 122U;
	volatile int32_t x771 = INT32_MAX;
	static int32_t t187 = 0;

    t187 = ((x769%x770)<=(x771&x772));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x773 = -1;
	int32_t x774 = -1;
	static int64_t x775 = -1664435001959283171LL;
	int32_t x776 = INT32_MIN;
	int32_t t188 = -1;

    t188 = ((x773%x774)<=(x775&x776));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x777 = UINT32_MAX;
	int16_t x778 = -6916;
	static uint32_t x780 = UINT32_MAX;
	volatile int32_t t189 = 39341;

    t189 = ((x777%x778)<=(x779&x780));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x781 = INT64_MIN;
	static int16_t x782 = INT16_MAX;
	int8_t x783 = INT8_MIN;
	static volatile int32_t t190 = 88630477;

    t190 = ((x781%x782)<=(x783&x784));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int16_t x785 = 3;
	int32_t x786 = -9201348;
	int16_t x787 = -1;
	int16_t x788 = INT16_MIN;
	int32_t t191 = 2628;

    t191 = ((x785%x786)<=(x787&x788));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x789 = 0;
	uint64_t x790 = 1774935419213351LLU;
	uint32_t x791 = 453231686U;

    t192 = ((x789%x790)<=(x791&x792));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x793 = 24U;
	static volatile int8_t x794 = INT8_MIN;
	static uint32_t x795 = 51U;
	static int8_t x796 = -1;
	volatile int32_t t193 = -114496;

    t193 = ((x793%x794)<=(x795&x796));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x797 = -5;
	int16_t x798 = 1661;
	volatile int16_t x799 = -8471;
	uint16_t x800 = 11U;
	int32_t t194 = 334480284;

    t194 = ((x797%x798)<=(x799&x800));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x801 = 1;
	int8_t x802 = -2;
	static int8_t x804 = 0;
	volatile int32_t t195 = 2531683;

    t195 = ((x801%x802)<=(x803&x804));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x807 = 1U;
	int64_t x808 = INT64_MIN;
	volatile int32_t t196 = -188706666;

    t196 = ((x805%x806)<=(x807&x808));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint64_t x809 = 54LLU;
	static int32_t x810 = -1;
	static volatile uint64_t x811 = UINT64_MAX;
	uint8_t x812 = 10U;
	volatile int32_t t197 = 0;

    t197 = ((x809%x810)<=(x811&x812));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x813 = 1U;
	int32_t x814 = 2668;
	int32_t x816 = -1;
	volatile int32_t t198 = -253;

    t198 = ((x813%x814)<=(x815&x816));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x817 = INT8_MIN;
	volatile uint16_t x818 = 13U;
	volatile int16_t x820 = -8755;
	int32_t t199 = -5976;

    t199 = ((x817%x818)<=(x819&x820));

    if (t199 != 1) { NG(); } else { ; }
	
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

