
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

int16_t x10 = -1;
static int8_t x15 = INT8_MIN;
int64_t x16 = -1LL;
int16_t x23 = INT16_MAX;
static uint32_t x24 = 27U;
uint16_t x28 = 1U;
int32_t x37 = INT32_MIN;
int16_t x39 = INT16_MIN;
int8_t x44 = 1;
int64_t t10 = 82848683LL;
static volatile int16_t x47 = INT16_MIN;
int8_t x49 = -1;
int32_t x57 = INT32_MIN;
static int32_t x59 = INT32_MAX;
volatile int32_t t14 = -164482223;
static uint16_t x61 = 618U;
static uint16_t x64 = 8206U;
uint8_t x67 = 38U;
int32_t x69 = INT32_MIN;
int8_t x70 = INT8_MAX;
static volatile uint16_t x71 = 1U;
uint16_t x74 = UINT16_MAX;
volatile uint16_t x81 = 631U;
int16_t x85 = INT16_MAX;
int32_t t21 = 99;
uint32_t x91 = UINT32_MAX;
uint64_t x94 = 5177681767187297091LLU;
int32_t x97 = INT32_MAX;
volatile uint64_t t24 = UINT64_MAX;
int32_t x103 = INT32_MAX;
int32_t x104 = -6;
uint16_t x110 = UINT16_MAX;
volatile uint32_t x111 = 29486127U;
int64_t t29 = 1012574778LL;
int16_t x126 = 0;
int16_t x130 = INT16_MAX;
volatile int32_t x136 = 0;
static uint8_t x140 = 24U;
uint64_t x147 = 554271201012308827LLU;
volatile int16_t x149 = 4033;
int8_t x151 = INT8_MIN;
uint64_t x152 = UINT64_MAX;
int8_t x153 = -1;
static int16_t x154 = -1;
uint8_t x159 = UINT8_MAX;
int32_t t39 = -2343;
static int64_t x164 = -1263295975036LL;
int64_t x165 = 727885LL;
static int32_t x170 = -1;
int8_t x173 = -1;
uint64_t x179 = 137703844733087LLU;
static int64_t x180 = -1LL;
uint8_t x186 = 11U;
int16_t x187 = INT16_MIN;
static int64_t t46 = -2784137463220LL;
int8_t x197 = 1;
uint64_t t49 = 65514LLU;
volatile int32_t x211 = -1;
volatile uint16_t x212 = 458U;
static int32_t x213 = -1;
volatile int32_t t53 = -2;
volatile uint8_t x223 = 95U;
int64_t t56 = INT64_MAX;
volatile uint8_t x229 = UINT8_MAX;
volatile uint8_t x234 = UINT8_MAX;
volatile uint64_t t60 = 122088438693190LLU;
static uint32_t x245 = UINT32_MAX;
int64_t x246 = -250950LL;
static int8_t x261 = INT8_MIN;
uint64_t x262 = 138531901940225LLU;
volatile int16_t x266 = -1;
volatile int64_t t65 = 4062220959938LL;
int8_t x271 = -3;
volatile int32_t x276 = 351;
int16_t x277 = INT16_MIN;
volatile int32_t x286 = INT32_MIN;
uint8_t x287 = UINT8_MAX;
int32_t t70 = 10;
volatile int8_t x290 = 28;
uint8_t x297 = 21U;
static int32_t x298 = INT32_MIN;
int32_t x307 = -1;
int64_t x308 = INT64_MIN;
volatile uint64_t t76 = UINT64_MAX;
volatile int16_t x319 = INT16_MIN;
int8_t x322 = INT8_MIN;
volatile uint64_t x329 = UINT64_MAX;
uint64_t t80 = UINT64_MAX;
static int32_t x333 = INT32_MIN;
int8_t x336 = INT8_MAX;
int32_t x342 = -1;
volatile int64_t t83 = -540354LL;
static volatile int64_t t85 = -138303483539491512LL;
static int64_t x353 = -726231LL;
volatile int64_t x354 = INT64_MAX;
uint16_t x358 = 473U;
volatile int32_t x363 = INT32_MIN;
int32_t x366 = INT32_MIN;
volatile int8_t x367 = INT8_MIN;
static uint32_t x370 = 2058U;
static uint32_t x375 = 29U;
static uint64_t x376 = 550291953LLU;
volatile uint64_t t91 = 583650942986403919LLU;
int32_t t92 = -2656;
uint16_t x388 = 840U;
static volatile int64_t x389 = -1LL;
volatile int32_t x393 = INT32_MIN;
volatile int8_t x400 = 6;
volatile uint32_t x403 = 31251086U;
int32_t x404 = -27005;
volatile uint32_t t98 = UINT32_MAX;
int8_t x405 = INT8_MIN;
uint8_t x408 = 1U;
volatile int32_t t99 = 5;
uint32_t x415 = 1556360083U;
volatile uint64_t x416 = 1LLU;
int16_t x417 = INT16_MIN;
volatile int64_t x420 = -1LL;
int64_t t103 = -7060955817LL;
uint64_t t104 = 2150LLU;
int16_t x429 = INT16_MIN;
volatile int16_t x436 = INT16_MIN;
uint16_t x438 = UINT16_MAX;
int32_t x446 = 1;
static int32_t x453 = INT32_MAX;
int32_t x455 = -101869986;
int8_t x456 = 2;
int32_t x458 = -3320;
uint64_t x459 = UINT64_MAX;
volatile uint64_t t112 = 1381LLU;
int64_t t113 = -2364633585841LL;
uint64_t x465 = 375357LLU;
int64_t x466 = -1LL;
int64_t x470 = -163LL;
static uint16_t x475 = 993U;
int64_t x478 = -2968LL;
static uint16_t x483 = UINT16_MAX;
uint16_t x488 = UINT16_MAX;
static uint64_t t120 = UINT64_MAX;
static volatile uint8_t x493 = UINT8_MAX;
static int8_t x494 = 1;
int16_t x503 = -3901;
static uint16_t x504 = 0U;
uint32_t x518 = 635008273U;
int16_t x525 = INT16_MAX;
uint64_t x529 = UINT64_MAX;
int64_t x530 = INT64_MAX;
uint32_t t131 = 773U;
int32_t x543 = 1;
int8_t x544 = INT8_MIN;
static int16_t x548 = INT16_MIN;
volatile uint32_t t134 = UINT32_MAX;
int16_t x553 = 573;
int32_t x555 = INT32_MIN;
static volatile int16_t x559 = -132;
int32_t x561 = INT32_MIN;
static int32_t x566 = INT32_MAX;
int8_t x569 = -13;
static volatile uint16_t x571 = UINT16_MAX;
int32_t x574 = INT32_MIN;
uint16_t x575 = UINT16_MAX;
int16_t x576 = INT16_MIN;
int16_t x577 = INT16_MIN;
int32_t x581 = INT32_MIN;
volatile uint64_t t143 = 535569454725LLU;
uint32_t x586 = 122U;
uint64_t x588 = UINT64_MAX;
int64_t x589 = -910833536885LL;
uint16_t x601 = 53U;
uint32_t t148 = 3U;
volatile int32_t x606 = INT32_MIN;
uint32_t x609 = 4372U;
uint32_t x610 = UINT32_MAX;
static uint32_t x611 = 1749255U;
uint64_t x613 = 694517217394LLU;
int16_t x620 = INT16_MIN;
uint16_t x621 = 11202U;
int32_t x622 = INT32_MIN;
volatile uint64_t x625 = 30044LLU;
volatile int16_t x634 = 111;
static volatile int16_t x635 = 3979;
int32_t t156 = -254755;
uint64_t t157 = 160588LLU;
volatile int8_t x644 = INT8_MIN;
int8_t x650 = 1;
static volatile uint16_t x654 = UINT16_MAX;
static int8_t x655 = 43;
int8_t x656 = 26;
int64_t x659 = -1LL;
int8_t x660 = INT8_MAX;
int8_t x661 = -1;
volatile int32_t x662 = 0;
int64_t t163 = -3401330216LL;
int64_t x668 = 54288927688220LL;
volatile uint8_t x675 = UINT8_MAX;
volatile int8_t x676 = -29;
volatile uint32_t t166 = UINT32_MAX;
volatile uint16_t x683 = UINT16_MAX;
int8_t x696 = INT8_MIN;
volatile int32_t t170 = -271482019;
int8_t x704 = -1;
int16_t x707 = 213;
uint32_t x710 = 518336489U;
int64_t x716 = 261964LL;
int64_t x724 = 1918LL;
int64_t t179 = 5604702LL;
uint16_t x735 = UINT16_MAX;
int32_t x737 = -1;
int16_t x743 = INT16_MIN;
int64_t x754 = 4933448321LL;
volatile int8_t x757 = INT8_MIN;
volatile int32_t x778 = INT32_MAX;
int64_t t191 = INT64_MAX;
int32_t t194 = 224923;
uint16_t x797 = UINT16_MAX;
volatile int32_t t196 = 32560236;
uint32_t x801 = 370U;
volatile uint8_t x802 = UINT8_MAX;
uint8_t x803 = UINT8_MAX;
int64_t t198 = 33374394939747LL;


void f0(void) {
    	int64_t x1 = INT64_MIN;
	int32_t x2 = -23408;
	uint8_t x3 = UINT8_MAX;
	static uint8_t x4 = 16U;
	volatile int64_t t0 = -48405761419590540LL;

    t0 = ((x1|(x2%x3))|x4);

    if (t0 != -203LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MAX;
	int8_t x6 = INT8_MIN;
	int8_t x7 = INT8_MIN;
	static int16_t x8 = -1;
	volatile int64_t t1 = -16130464018LL;

    t1 = ((x5|(x6%x7))|x8);

    if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint8_t x9 = 29U;
	int16_t x11 = -30;
	int8_t x12 = INT8_MAX;
	int32_t t2 = -17003835;

    t2 = ((x9|(x10%x11))|x12);

    if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x13 = 64516817U;
	static volatile uint32_t x14 = UINT32_MAX;
	volatile int64_t t3 = -1058340378507479355LL;

    t3 = ((x13|(x14%x15))|x16);

    if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x17 = UINT8_MAX;
	uint16_t x18 = 329U;
	static int32_t x19 = INT32_MIN;
	uint32_t x20 = 68009078U;
	static volatile uint32_t t4 = 14416979U;

    t4 = ((x17|(x18%x19))|x20);

    if (t4 != 68009471U) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = 241452011LL;
	volatile int64_t x22 = INT64_MAX;
	volatile int64_t t5 = 585765670LL;

    t5 = ((x21|(x22%x23))|x24);

    if (t5 != 241452031LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = -1;
	uint8_t x26 = 3U;
	int64_t x27 = INT64_MAX;
	volatile int64_t t6 = -172044LL;

    t6 = ((x25|(x26%x27))|x28);

    if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = INT64_MIN;
	static uint8_t x30 = 0U;
	int64_t x31 = INT64_MIN;
	static int64_t x32 = -11962206LL;
	volatile int64_t t7 = -17072098793772227LL;

    t7 = ((x29|(x30%x31))|x32);

    if (t7 != -11962206LL) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int64_t x33 = -1LL;
	uint16_t x34 = 0U;
	volatile int16_t x35 = INT16_MIN;
	int64_t x36 = INT64_MIN;
	int64_t t8 = -419LL;

    t8 = ((x33|(x34%x35))|x36);

    if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x38 = INT64_MAX;
	volatile int64_t x40 = INT64_MAX;
	int64_t t9 = -44LL;

    t9 = ((x37|(x38%x39))|x40);

    if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int64_t x41 = 20613LL;
	int8_t x42 = INT8_MAX;
	uint16_t x43 = 43U;

    t10 = ((x41|(x42%x43))|x44);

    if (t10 != 20653LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static int16_t x45 = -31;
	static volatile int64_t x46 = 1333272LL;
	uint64_t x48 = 941549902LLU;
	volatile uint64_t t11 = UINT64_MAX;

    t11 = ((x45|(x46%x47))|x48);

    if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint8_t x50 = UINT8_MAX;
	int16_t x51 = 7960;
	int32_t x52 = 648290311;
	static volatile int32_t t12 = 360;

    t12 = ((x49|(x50%x51))|x52);

    if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x53 = -1;
	static int16_t x54 = 12;
	int32_t x55 = 779;
	static volatile int16_t x56 = INT16_MIN;
	int32_t t13 = -43576;

    t13 = ((x53|(x54%x55))|x56);

    if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x58 = -22;
	volatile uint8_t x60 = 3U;

    t14 = ((x57|(x58%x59))|x60);

    if (t14 != -21) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x62 = 7720;
	volatile int64_t x63 = INT64_MIN;
	volatile int64_t t15 = -213LL;

    t15 = ((x61|(x62%x63))|x64);

    if (t15 != 15982LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x65 = 3080U;
	volatile int32_t x66 = -71474;
	int8_t x68 = -5;
	volatile uint32_t t16 = UINT32_MAX;

    t16 = ((x65|(x66%x67))|x68);

    if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x72 = INT32_MIN;
	int32_t t17 = INT32_MIN;

    t17 = ((x69|(x70%x71))|x72);

    if (t17 != INT32_MIN) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x73 = 124886;
	volatile uint16_t x75 = UINT16_MAX;
	uint32_t x76 = 2126U;
	static volatile uint32_t t18 = 433062318U;

    t18 = ((x73|(x74%x75))|x76);

    if (t18 != 126942U) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile uint64_t x77 = UINT64_MAX;
	int8_t x78 = 0;
	static volatile int64_t x79 = -1LL;
	int32_t x80 = INT32_MIN;
	uint64_t t19 = UINT64_MAX;

    t19 = ((x77|(x78%x79))|x80);

    if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x82 = 55U;
	int64_t x83 = INT64_MIN;
	int16_t x84 = INT16_MIN;
	int64_t t20 = -594503848270787LL;

    t20 = ((x81|(x82%x83))|x84);

    if (t20 != -32137LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x86 = 1;
	static int8_t x87 = -1;
	int8_t x88 = INT8_MAX;

    t21 = ((x85|(x86%x87))|x88);

    if (t21 != 32767) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = -9201385082382641LL;
	uint16_t x90 = 9U;
	volatile uint8_t x92 = 3U;
	int64_t t22 = -26LL;

    t22 = ((x89|(x90%x91))|x92);

    if (t22 != -9201385082382641LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x93 = 19U;
	int32_t x95 = -1;
	int8_t x96 = 11;
	volatile uint64_t t23 = 2987LLU;

    t23 = ((x93|(x94%x95))|x96);

    if (t23 != 5177681767187297115LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x98 = 7;
	uint64_t x99 = 5LLU;
	int64_t x100 = -1LL;

    t24 = ((x97|(x98%x99))|x100);

    if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint32_t x101 = UINT32_MAX;
	volatile int8_t x102 = INT8_MAX;
	volatile uint32_t t25 = UINT32_MAX;

    t25 = ((x101|(x102%x103))|x104);

    if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = INT8_MIN;
	int32_t x106 = 3;
	uint32_t x107 = 190875537U;
	int32_t x108 = -2932391;
	static volatile uint32_t t26 = 277490319U;

    t26 = ((x105|(x106%x107))|x108);

    if (t26 != 4294967259U) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = INT32_MIN;
	int64_t x112 = INT64_MIN;
	volatile int64_t t27 = 1123843765004LL;

    t27 = ((x109|(x110%x111))|x112);

    if (t27 != -9223372034707226625LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = -1LL;
	volatile int32_t x114 = -214574;
	int32_t x115 = 35;
	int8_t x116 = INT8_MAX;
	volatile int64_t t28 = -1507037180421327LL;

    t28 = ((x113|(x114%x115))|x116);

    if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x117 = 3U;
	int16_t x118 = INT16_MAX;
	int64_t x119 = 3LL;
	volatile int8_t x120 = INT8_MAX;

    t29 = ((x117|(x118%x119))|x120);

    if (t29 != 127LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int64_t x121 = INT64_MIN;
	uint8_t x122 = 8U;
	int8_t x123 = INT8_MAX;
	static int8_t x124 = 3;
	int64_t t30 = 259550500113LL;

    t30 = ((x121|(x122%x123))|x124);

    if (t30 != -9223372036854775797LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = INT16_MIN;
	int64_t x127 = -148679033275571899LL;
	int32_t x128 = -57;
	volatile int64_t t31 = 1169328751621LL;

    t31 = ((x125|(x126%x127))|x128);

    if (t31 != -57LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x129 = 15715U;
	uint8_t x131 = 5U;
	volatile int16_t x132 = -21;
	int32_t t32 = 17481968;

    t32 = ((x129|(x130%x131))|x132);

    if (t32 != -21) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x133 = 65U;
	int32_t x134 = 1062669188;
	volatile int16_t x135 = INT16_MAX;
	static volatile int32_t t33 = 50;

    t33 = ((x133|(x134%x135))|x136);

    if (t33 != 2675) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x137 = 14272952LLU;
	int32_t x138 = INT32_MAX;
	int64_t x139 = INT64_MAX;
	uint64_t t34 = 72860827019123175LLU;

    t34 = ((x137|(x138%x139))|x140);

    if (t34 != 2147483647LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = 1;
	static int32_t x142 = INT32_MAX;
	int8_t x143 = -1;
	int8_t x144 = INT8_MIN;
	static volatile int32_t t35 = 677;

    t35 = ((x141|(x142%x143))|x144);

    if (t35 != -127) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x145 = -1;
	int8_t x146 = INT8_MIN;
	volatile uint16_t x148 = 4U;
	volatile uint64_t t36 = UINT64_MAX;

    t36 = ((x145|(x146%x147))|x148);

    if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
    	static int32_t x150 = -1;
	volatile uint64_t t37 = UINT64_MAX;

    t37 = ((x149|(x150%x151))|x152);

    if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x155 = 3U;
	int16_t x156 = 21;
	volatile int32_t t38 = 1;

    t38 = ((x153|(x154%x155))|x156);

    if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = INT8_MIN;
	int8_t x158 = INT8_MAX;
	static int16_t x160 = -1;

    t39 = ((x157|(x158%x159))|x160);

    if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x161 = INT16_MIN;
	int32_t x162 = -443;
	uint16_t x163 = 11755U;
	int64_t t40 = 1LL;

    t40 = ((x161|(x162%x163))|x164);

    if (t40 != -59LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x166 = 7;
	int8_t x167 = INT8_MIN;
	uint32_t x168 = UINT32_MAX;
	volatile int64_t t41 = 124141165782805145LL;

    t41 = ((x165|(x166%x167))|x168);

    if (t41 != 4294967295LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int16_t x169 = 11296;
	volatile int16_t x171 = -1;
	static int8_t x172 = -3;
	volatile int32_t t42 = 30641;

    t42 = ((x169|(x170%x171))|x172);

    if (t42 != -3) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint16_t x174 = UINT16_MAX;
	int8_t x175 = -24;
	int64_t x176 = INT64_MIN;
	int64_t t43 = 177LL;

    t43 = ((x173|(x174%x175))|x176);

    if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int8_t x177 = INT8_MIN;
	uint64_t x178 = 1443LLU;
	uint64_t t44 = UINT64_MAX;

    t44 = ((x177|(x178%x179))|x180);

    if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x181 = 13LLU;
	int8_t x182 = 0;
	uint16_t x183 = 941U;
	int64_t x184 = INT64_MIN;
	static volatile uint64_t t45 = 1578986LLU;

    t45 = ((x181|(x182%x183))|x184);

    if (t45 != 9223372036854775821LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = 3;
	int64_t x188 = INT64_MIN;

    t46 = ((x185|(x186%x187))|x188);

    if (t46 != -9223372036854775797LL) { NG(); } else { ; }
	
}

void f47(void) {
    	static int16_t x189 = INT16_MAX;
	volatile int64_t x190 = -1064783118563LL;
	int32_t x191 = 6850711;
	int32_t x192 = INT32_MIN;
	static int64_t t47 = 0LL;

    t47 = ((x189|(x190%x191))|x192);

    if (t47 != -4489217LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static int16_t x193 = INT16_MIN;
	volatile uint8_t x194 = 77U;
	int32_t x195 = INT32_MIN;
	int16_t x196 = -1;
	static volatile int32_t t48 = 315;

    t48 = ((x193|(x194%x195))|x196);

    if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int8_t x198 = -1;
	uint64_t x199 = UINT64_MAX;
	int32_t x200 = INT32_MAX;

    t49 = ((x197|(x198%x199))|x200);

    if (t49 != 2147483647LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x201 = -3733;
	int32_t x202 = INT32_MAX;
	int16_t x203 = INT16_MIN;
	static int16_t x204 = -172;
	static volatile int32_t t50 = -1;

    t50 = ((x201|(x202%x203))|x204);

    if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x205 = -1;
	int16_t x206 = 6141;
	int32_t x207 = -1;
	static int16_t x208 = INT16_MIN;
	volatile int32_t t51 = 256;

    t51 = ((x205|(x206%x207))|x208);

    if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int8_t x209 = 1;
	int8_t x210 = -27;
	int32_t t52 = 37310056;

    t52 = ((x209|(x210%x211))|x212);

    if (t52 != 459) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x214 = -1;
	static uint16_t x215 = UINT16_MAX;
	int32_t x216 = -9879;

    t53 = ((x213|(x214%x215))|x216);

    if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int32_t x217 = INT32_MIN;
	int32_t x218 = INT32_MIN;
	uint32_t x219 = 187U;
	volatile int16_t x220 = -321;
	static uint32_t t54 = 190U;

    t54 = ((x217|(x218%x219))|x220);

    if (t54 != 4294966975U) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x221 = -98;
	int32_t x222 = INT32_MAX;
	int32_t x224 = INT32_MIN;
	static volatile int32_t t55 = 1;

    t55 = ((x221|(x222%x223))|x224);

    if (t55 != -98) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x225 = 1;
	int16_t x226 = 3362;
	uint32_t x227 = 2809660U;
	int64_t x228 = INT64_MAX;

    t56 = ((x225|(x226%x227))|x228);

    if (t56 != INT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x230 = -6;
	static uint16_t x231 = UINT16_MAX;
	uint16_t x232 = 54U;
	int32_t t57 = 1;

    t57 = ((x229|(x230%x231))|x232);

    if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = INT64_MIN;
	int16_t x235 = INT16_MIN;
	uint8_t x236 = 24U;
	static int64_t t58 = 2924608LL;

    t58 = ((x233|(x234%x235))|x236);

    if (t58 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint32_t x237 = 4U;
	static int32_t x238 = 2856;
	static volatile int64_t x239 = 30757LL;
	int64_t x240 = -44918323490444LL;
	volatile int64_t t59 = -3LL;

    t59 = ((x237|(x238%x239))|x240);

    if (t59 != -44918323487876LL) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int16_t x241 = INT16_MAX;
	static int8_t x242 = -33;
	uint32_t x243 = 1596U;
	static uint64_t x244 = 2986100037178LLU;

    t60 = ((x241|(x242%x243))|x244);

    if (t60 != 2986100064255LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x247 = -2075100036634LL;
	volatile int64_t x248 = -1LL;
	int64_t t61 = 0LL;

    t61 = ((x245|(x246%x247))|x248);

    if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x249 = 1550420U;
	static volatile int16_t x250 = 3;
	static uint32_t x251 = UINT32_MAX;
	int64_t x252 = 1703299LL;
	volatile int64_t t62 = 67LL;

    t62 = ((x249|(x250%x251))|x252);

    if (t62 != 2096599LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x257 = 0;
	volatile int64_t x258 = 82012518318424994LL;
	int64_t x259 = 205595LL;
	static volatile uint8_t x260 = UINT8_MAX;
	int64_t t63 = 27989641LL;

    t63 = ((x257|(x258%x259))|x260);

    if (t63 != 152575LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x263 = 737LL;
	volatile uint32_t x264 = 25368U;
	uint64_t t64 = 86LLU;

    t64 = ((x261|(x262%x263))|x264);

    if (t64 != 18446744073709551545LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint16_t x265 = 6U;
	int32_t x267 = INT32_MIN;
	int64_t x268 = -1LL;

    t65 = ((x265|(x266%x267))|x268);

    if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x269 = 332U;
	int8_t x270 = INT8_MIN;
	int64_t x272 = -1LL;
	static int64_t t66 = 2252LL;

    t66 = ((x269|(x270%x271))|x272);

    if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int16_t x273 = INT16_MAX;
	static int8_t x274 = -1;
	uint32_t x275 = UINT32_MAX;
	uint32_t t67 = 5974646U;

    t67 = ((x273|(x274%x275))|x276);

    if (t67 != 32767U) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x278 = INT8_MIN;
	int16_t x279 = -24;
	volatile int16_t x280 = INT16_MIN;
	int32_t t68 = -71788;

    t68 = ((x277|(x278%x279))|x280);

    if (t68 != -8) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x281 = INT16_MIN;
	int8_t x282 = INT8_MIN;
	int32_t x283 = INT32_MAX;
	uint32_t x284 = 64485143U;
	uint32_t t69 = 1537784U;

    t69 = ((x281|(x282%x283))|x284);

    if (t69 != 4294967191U) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x285 = INT16_MAX;
	int32_t x288 = 7;

    t70 = ((x285|(x286%x287))|x288);

    if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x289 = -1066673;
	static volatile int32_t x291 = INT32_MIN;
	volatile uint16_t x292 = UINT16_MAX;
	static int32_t t71 = 1032118;

    t71 = ((x289|(x290%x291))|x292);

    if (t71 != -1048577) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x293 = INT8_MAX;
	int8_t x294 = INT8_MAX;
	int16_t x295 = INT16_MIN;
	int64_t x296 = INT64_MIN;
	static volatile int64_t t72 = -7554507361LL;

    t72 = ((x293|(x294%x295))|x296);

    if (t72 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x299 = INT16_MIN;
	int64_t x300 = -1LL;
	volatile int64_t t73 = -12142468756570LL;

    t73 = ((x297|(x298%x299))|x300);

    if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x301 = -1LL;
	int32_t x302 = INT32_MIN;
	volatile int32_t x303 = 31;
	volatile int8_t x304 = INT8_MAX;
	volatile int64_t t74 = 348776425387236794LL;

    t74 = ((x301|(x302%x303))|x304);

    if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x305 = -1LL;
	int8_t x306 = -1;
	static int64_t t75 = 113LL;

    t75 = ((x305|(x306%x307))|x308);

    if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x309 = -1;
	volatile uint64_t x310 = UINT64_MAX;
	volatile int8_t x311 = INT8_MAX;
	uint64_t x312 = 5442904160714LLU;

    t76 = ((x309|(x310%x311))|x312);

    if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint16_t x317 = UINT16_MAX;
	int8_t x318 = INT8_MIN;
	uint32_t x320 = 124U;
	uint32_t t77 = UINT32_MAX;

    t77 = ((x317|(x318%x319))|x320);

    if (t77 != UINT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x321 = UINT8_MAX;
	uint32_t x323 = UINT32_MAX;
	int32_t x324 = INT32_MAX;
	volatile uint32_t t78 = UINT32_MAX;

    t78 = ((x321|(x322%x323))|x324);

    if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x325 = INT32_MAX;
	uint64_t x326 = UINT64_MAX;
	int8_t x327 = INT8_MIN;
	static int16_t x328 = -91;
	volatile uint64_t t79 = UINT64_MAX;

    t79 = ((x325|(x326%x327))|x328);

    if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x330 = 1LL;
	int16_t x331 = -1;
	static uint16_t x332 = 3200U;

    t80 = ((x329|(x330%x331))|x332);

    if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x334 = -49;
	uint64_t x335 = 27726236LLU;
	uint64_t t81 = 356536LLU;

    t81 = ((x333|(x334%x335))|x336);

    if (t81 != 18446744071565644671LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x337 = INT16_MIN;
	int16_t x338 = INT16_MIN;
	static int32_t x339 = INT32_MAX;
	static int32_t x340 = INT32_MIN;
	volatile int32_t t82 = 250;

    t82 = ((x337|(x338%x339))|x340);

    if (t82 != -32768) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint16_t x341 = 0U;
	int64_t x343 = INT64_MIN;
	int32_t x344 = 7430666;

    t83 = ((x341|(x342%x343))|x344);

    if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint16_t x345 = 61U;
	int8_t x346 = INT8_MIN;
	uint32_t x347 = 52959U;
	int8_t x348 = -4;
	uint32_t t84 = UINT32_MAX;

    t84 = ((x345|(x346%x347))|x348);

    if (t84 != UINT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x349 = -3;
	int64_t x350 = INT64_MIN;
	int16_t x351 = INT16_MIN;
	static int8_t x352 = -1;

    t85 = ((x349|(x350%x351))|x352);

    if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int32_t x355 = INT32_MIN;
	volatile int16_t x356 = 1894;
	volatile int64_t t86 = -8276108740747926LL;

    t86 = ((x353|(x354%x355))|x356);

    if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int32_t x357 = -1;
	int16_t x359 = 1;
	int16_t x360 = INT16_MIN;
	int32_t t87 = -21709459;

    t87 = ((x357|(x358%x359))|x360);

    if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
    	static int64_t x361 = INT64_MAX;
	uint32_t x362 = UINT32_MAX;
	volatile int16_t x364 = 689;
	volatile int64_t t88 = INT64_MAX;

    t88 = ((x361|(x362%x363))|x364);

    if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int32_t x365 = 8669;
	uint16_t x368 = 10775U;
	int32_t t89 = 487;

    t89 = ((x365|(x366%x367))|x368);

    if (t89 != 11231) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint32_t x369 = 0U;
	uint16_t x371 = UINT16_MAX;
	int32_t x372 = INT32_MAX;
	uint32_t t90 = 10890699U;

    t90 = ((x369|(x370%x371))|x372);

    if (t90 != 2147483647U) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x373 = INT32_MAX;
	int16_t x374 = -1;

    t91 = ((x373|(x374%x375))|x376);

    if (t91 != 2147483647LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x377 = -47561;
	volatile int32_t x378 = -1;
	int32_t x379 = -47493093;
	volatile uint8_t x380 = 0U;

    t92 = ((x377|(x378%x379))|x380);

    if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x381 = 10407;
	uint8_t x382 = 42U;
	int8_t x383 = -1;
	static volatile int16_t x384 = INT16_MIN;
	int32_t t93 = 125;

    t93 = ((x381|(x382%x383))|x384);

    if (t93 != -22361) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x385 = UINT32_MAX;
	static int8_t x386 = -1;
	int64_t x387 = -1LL;
	volatile int64_t t94 = -485133006578090LL;

    t94 = ((x385|(x386%x387))|x388);

    if (t94 != 4294967295LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile uint32_t x390 = UINT32_MAX;
	uint16_t x391 = 900U;
	int8_t x392 = INT8_MIN;
	volatile int64_t t95 = 253093868589LL;

    t95 = ((x389|(x390%x391))|x392);

    if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x394 = -1;
	int16_t x395 = INT16_MIN;
	static int8_t x396 = -32;
	int32_t t96 = 356083745;

    t96 = ((x393|(x394%x395))|x396);

    if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x397 = 2LLU;
	int16_t x398 = 11290;
	volatile int8_t x399 = INT8_MIN;
	volatile uint64_t t97 = 14766835059903832LLU;

    t97 = ((x397|(x398%x399))|x400);

    if (t97 != 30LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x401 = -1;
	int32_t x402 = -1013;

    t98 = ((x401|(x402%x403))|x404);

    if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x406 = INT16_MIN;
	int32_t x407 = INT32_MIN;

    t99 = ((x405|(x406%x407))|x408);

    if (t99 != -127) { NG(); } else { ; }
	
}

void f100(void) {
    	static int16_t x409 = -1;
	uint16_t x410 = 17176U;
	int64_t x411 = -1LL;
	uint16_t x412 = 117U;
	int64_t t100 = -7259639999LL;

    t100 = ((x409|(x410%x411))|x412);

    if (t100 != -1LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x413 = -2;
	static int32_t x414 = INT32_MAX;
	volatile uint64_t t101 = 71226359LLU;

    t101 = ((x413|(x414%x415))|x416);

    if (t101 != 4294967295LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x418 = UINT32_MAX;
	uint64_t x419 = UINT64_MAX;
	static volatile uint64_t t102 = UINT64_MAX;

    t102 = ((x417|(x418%x419))|x420);

    if (t102 != UINT64_MAX) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x421 = INT8_MIN;
	volatile int64_t x422 = INT64_MAX;
	uint32_t x423 = 4732405U;
	volatile int8_t x424 = INT8_MIN;

    t103 = ((x421|(x422%x423))|x424);

    if (t103 != -49LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static int64_t x425 = INT64_MIN;
	uint64_t x426 = 93160660LLU;
	uint64_t x427 = 10641888586LLU;
	int8_t x428 = INT8_MIN;

    t104 = ((x425|(x426%x427))|x428);

    if (t104 != 18446744073709551572LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x430 = UINT64_MAX;
	static int16_t x431 = -123;
	int64_t x432 = -1LL;
	uint64_t t105 = UINT64_MAX;

    t105 = ((x429|(x430%x431))|x432);

    if (t105 != UINT64_MAX) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int8_t x433 = INT8_MIN;
	static int8_t x434 = INT8_MIN;
	static uint32_t x435 = 286949U;
	uint32_t t106 = 6958807U;

    t106 = ((x433|(x434%x435))|x436);

    if (t106 != 4294967181U) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint16_t x437 = 13541U;
	int32_t x439 = INT32_MAX;
	uint32_t x440 = UINT32_MAX;
	uint32_t t107 = UINT32_MAX;

    t107 = ((x437|(x438%x439))|x440);

    if (t107 != UINT32_MAX) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x441 = INT8_MIN;
	int64_t x442 = 32008047731LL;
	int64_t x443 = 45LL;
	static int64_t x444 = -1LL;
	static int64_t t108 = 646352052LL;

    t108 = ((x441|(x442%x443))|x444);

    if (t108 != -1LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x445 = INT32_MAX;
	uint64_t x447 = 63874569753301LLU;
	static uint64_t x448 = 97293661912452LLU;
	volatile uint64_t t109 = 6906497615278593LLU;

    t109 = ((x445|(x446%x447))|x448);

    if (t109 != 97293894156287LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x449 = UINT8_MAX;
	volatile int64_t x450 = INT64_MIN;
	uint8_t x451 = 52U;
	uint8_t x452 = 7U;
	int64_t t110 = 5286684485346LL;

    t110 = ((x449|(x450%x451))|x452);

    if (t110 != -1LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x454 = 1U;
	volatile uint32_t t111 = 2356U;

    t111 = ((x453|(x454%x455))|x456);

    if (t111 != 2147483647U) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x457 = 2U;
	int8_t x460 = -39;

    t112 = ((x457|(x458%x459))|x460);

    if (t112 != 18446744073709551579LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x461 = -1;
	uint32_t x462 = UINT32_MAX;
	int64_t x463 = -1LL;
	int32_t x464 = 4976776;

    t113 = ((x461|(x462%x463))|x464);

    if (t113 != -1LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static int16_t x467 = INT16_MAX;
	int64_t x468 = 36661771180841267LL;
	static uint64_t t114 = UINT64_MAX;

    t114 = ((x465|(x466%x467))|x468);

    if (t114 != UINT64_MAX) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint32_t x469 = UINT32_MAX;
	int32_t x471 = -1165466;
	static int64_t x472 = 48981LL;
	volatile int64_t t115 = 13214792185478896LL;

    t115 = ((x469|(x470%x471))|x472);

    if (t115 != -1LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x473 = 743330835800576189LL;
	static int16_t x474 = -1483;
	int8_t x476 = 2;
	int64_t t116 = -1080836831501LL;

    t116 = ((x473|(x474%x475))|x476);

    if (t116 != -321LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x477 = INT8_MIN;
	static volatile uint16_t x479 = UINT16_MAX;
	uint8_t x480 = 0U;
	static volatile int64_t t117 = 910LL;

    t117 = ((x477|(x478%x479))|x480);

    if (t117 != -24LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x481 = UINT64_MAX;
	uint8_t x482 = UINT8_MAX;
	int8_t x484 = INT8_MAX;
	static uint64_t t118 = UINT64_MAX;

    t118 = ((x481|(x482%x483))|x484);

    if (t118 != UINT64_MAX) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint64_t x485 = 48653428431LLU;
	static volatile int16_t x486 = 1222;
	volatile int16_t x487 = INT16_MAX;
	uint64_t t119 = 343857396711498585LLU;

    t119 = ((x485|(x486%x487))|x488);

    if (t119 != 48653467647LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x489 = UINT64_MAX;
	int32_t x490 = INT32_MIN;
	volatile uint16_t x491 = UINT16_MAX;
	static uint32_t x492 = UINT32_MAX;

    t120 = ((x489|(x490%x491))|x492);

    if (t120 != UINT64_MAX) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x495 = -1;
	int64_t x496 = INT64_MIN;
	static volatile int64_t t121 = -41892882641044LL;

    t121 = ((x493|(x494%x495))|x496);

    if (t121 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int16_t x497 = 1106;
	int16_t x498 = -201;
	int16_t x499 = INT16_MAX;
	int64_t x500 = 1652647LL;
	int64_t t122 = -13315330732263LL;

    t122 = ((x497|(x498%x499))|x500);

    if (t122 != -9LL) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x501 = INT16_MIN;
	int32_t x502 = 0;
	int32_t t123 = -571742;

    t123 = ((x501|(x502%x503))|x504);

    if (t123 != -32768) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x505 = -1;
	int64_t x506 = 537LL;
	int16_t x507 = INT16_MIN;
	uint8_t x508 = 0U;
	volatile int64_t t124 = 107972LL;

    t124 = ((x505|(x506%x507))|x508);

    if (t124 != -1LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x509 = INT8_MAX;
	int64_t x510 = INT64_MIN;
	int32_t x511 = -5;
	int16_t x512 = 25;
	static volatile int64_t t125 = -377463392LL;

    t125 = ((x509|(x510%x511))|x512);

    if (t125 != -1LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x513 = INT16_MIN;
	uint64_t x514 = 4LLU;
	static uint16_t x515 = 178U;
	volatile int64_t x516 = 845148780753610LL;
	volatile uint64_t t126 = 3937206LLU;

    t126 = ((x513|(x514%x515))|x516);

    if (t126 != 18446744073709548238LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x517 = UINT32_MAX;
	int8_t x519 = INT8_MIN;
	int8_t x520 = -51;
	uint32_t t127 = UINT32_MAX;

    t127 = ((x517|(x518%x519))|x520);

    if (t127 != UINT32_MAX) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x521 = INT16_MIN;
	static int8_t x522 = 1;
	volatile uint16_t x523 = 10U;
	int16_t x524 = -40;
	static volatile int32_t t128 = -2250;

    t128 = ((x521|(x522%x523))|x524);

    if (t128 != -39) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x526 = 1811U;
	int32_t x527 = -1;
	volatile int32_t x528 = INT32_MAX;
	volatile int32_t t129 = INT32_MAX;

    t129 = ((x525|(x526%x527))|x528);

    if (t129 != INT32_MAX) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x531 = 27638965086615535LLU;
	uint16_t x532 = UINT16_MAX;
	static uint64_t t130 = UINT64_MAX;

    t130 = ((x529|(x530%x531))|x532);

    if (t130 != UINT64_MAX) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint32_t x533 = 0U;
	int16_t x534 = INT16_MAX;
	volatile uint8_t x535 = UINT8_MAX;
	static volatile int16_t x536 = INT16_MIN;

    t131 = ((x533|(x534%x535))|x536);

    if (t131 != 4294934655U) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x537 = 2;
	volatile int32_t x538 = INT32_MIN;
	int8_t x539 = INT8_MIN;
	int64_t x540 = -1LL;
	int64_t t132 = -430901150459694LL;

    t132 = ((x537|(x538%x539))|x540);

    if (t132 != -1LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x541 = 5U;
	static int32_t x542 = INT32_MIN;
	volatile int32_t t133 = -1;

    t133 = ((x541|(x542%x543))|x544);

    if (t133 != -123) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x545 = UINT32_MAX;
	static int16_t x546 = -1030;
	int8_t x547 = INT8_MIN;

    t134 = ((x545|(x546%x547))|x548);

    if (t134 != UINT32_MAX) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x549 = 73U;
	volatile uint16_t x550 = UINT16_MAX;
	static uint32_t x551 = 1296706U;
	int64_t x552 = INT64_MIN;
	int64_t t135 = 44973640008387410LL;

    t135 = ((x549|(x550%x551))|x552);

    if (t135 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x554 = INT16_MIN;
	volatile uint16_t x556 = UINT16_MAX;
	int32_t t136 = -1;

    t136 = ((x553|(x554%x555))|x556);

    if (t136 != -1) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x557 = INT64_MIN;
	int8_t x558 = 3;
	volatile int64_t x560 = INT64_MAX;
	int64_t t137 = -524666871986LL;

    t137 = ((x557|(x558%x559))|x560);

    if (t137 != -1LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x562 = 6U;
	uint64_t x563 = 38LLU;
	volatile int64_t x564 = INT64_MIN;
	static uint64_t t138 = 213LLU;

    t138 = ((x561|(x562%x563))|x564);

    if (t138 != 18446744071562067974LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x565 = -1;
	uint16_t x567 = 838U;
	int32_t x568 = 2504;
	volatile int32_t t139 = -45;

    t139 = ((x565|(x566%x567))|x568);

    if (t139 != -1) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint64_t x570 = UINT64_MAX;
	uint64_t x572 = 1405541LLU;
	volatile uint64_t t140 = 236222436644970LLU;

    t140 = ((x569|(x570%x571))|x572);

    if (t140 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x573 = 0;
	static int32_t t141 = -3265453;

    t141 = ((x573|(x574%x575))|x576);

    if (t141 != -32768) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x578 = INT8_MAX;
	int16_t x579 = -1;
	uint64_t x580 = 1068878306418LLU;
	uint64_t t142 = 49512848465238LLU;

    t142 = ((x577|(x578%x579))|x580);

    if (t142 != 18446744073709526130LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x582 = -1;
	volatile uint64_t x583 = 50957482LLU;
	int32_t x584 = INT32_MIN;

    t143 = ((x581|(x582%x583))|x584);

    if (t143 != 18446744071565214703LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint64_t x585 = UINT64_MAX;
	int32_t x587 = -1;
	uint64_t t144 = UINT64_MAX;

    t144 = ((x585|(x586%x587))|x588);

    if (t144 != UINT64_MAX) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x590 = INT64_MIN;
	int64_t x591 = INT64_MAX;
	int8_t x592 = INT8_MIN;
	volatile int64_t t145 = 1923253270840LL;

    t145 = ((x589|(x590%x591))|x592);

    if (t145 != -1LL) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint64_t x593 = 3346704LLU;
	int16_t x594 = INT16_MIN;
	int64_t x595 = 1LL;
	int16_t x596 = -1;
	volatile uint64_t t146 = UINT64_MAX;

    t146 = ((x593|(x594%x595))|x596);

    if (t146 != UINT64_MAX) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint32_t x597 = 4U;
	volatile int16_t x598 = 5;
	int16_t x599 = INT16_MAX;
	static uint8_t x600 = 1U;
	uint32_t t147 = 1044334154U;

    t147 = ((x597|(x598%x599))|x600);

    if (t147 != 5U) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x602 = 444;
	int32_t x603 = INT32_MIN;
	volatile uint32_t x604 = 460192416U;

    t148 = ((x601|(x602%x603))|x604);

    if (t148 != 460192701U) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint64_t x605 = 3589545783745611809LLU;
	volatile int64_t x607 = -1LL;
	uint8_t x608 = UINT8_MAX;
	uint64_t t149 = 169LLU;

    t149 = ((x605|(x606%x607))|x608);

    if (t149 != 3589545783745612031LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x612 = INT16_MAX;
	volatile uint32_t t150 = 50U;

    t150 = ((x609|(x610%x611))|x612);

    if (t150 != 557055U) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint64_t x614 = UINT64_MAX;
	int64_t x615 = -1LL;
	int8_t x616 = 1;
	volatile uint64_t t151 = 109831711807143LLU;

    t151 = ((x613|(x614%x615))|x616);

    if (t151 != 694517217395LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint8_t x617 = UINT8_MAX;
	int64_t x618 = -11562219348441962LL;
	static int8_t x619 = 21;
	int64_t t152 = -3LL;

    t152 = ((x617|(x618%x619))|x620);

    if (t152 != -1LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x623 = INT8_MIN;
	static int32_t x624 = INT32_MAX;
	int32_t t153 = INT32_MAX;

    t153 = ((x621|(x622%x623))|x624);

    if (t153 != INT32_MAX) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint16_t x626 = UINT16_MAX;
	static int8_t x627 = INT8_MIN;
	int64_t x628 = INT64_MAX;
	volatile uint64_t t154 = 885LLU;

    t154 = ((x625|(x626%x627))|x628);

    if (t154 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x629 = 8122597LLU;
	uint64_t x630 = UINT64_MAX;
	int32_t x631 = -1;
	int16_t x632 = -1;
	static volatile uint64_t t155 = UINT64_MAX;

    t155 = ((x629|(x630%x631))|x632);

    if (t155 != UINT64_MAX) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x633 = UINT8_MAX;
	int16_t x636 = 217;

    t156 = ((x633|(x634%x635))|x636);

    if (t156 != 255) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint32_t x637 = 932427175U;
	int8_t x638 = INT8_MIN;
	uint64_t x639 = 437496708LLU;
	int8_t x640 = INT8_MAX;

    t157 = ((x637|(x638%x639))|x640);

    if (t157 != 1070841855LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int16_t x641 = -1;
	int32_t x642 = 541;
	static int8_t x643 = INT8_MIN;
	volatile int32_t t158 = -1;

    t158 = ((x641|(x642%x643))|x644);

    if (t158 != -1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x645 = UINT64_MAX;
	static int64_t x646 = -2804LL;
	uint16_t x647 = 2U;
	int16_t x648 = 44;
	static uint64_t t159 = UINT64_MAX;

    t159 = ((x645|(x646%x647))|x648);

    if (t159 != UINT64_MAX) { NG(); } else { ; }
	
}

void f160(void) {
    	static int32_t x649 = INT32_MAX;
	static volatile uint16_t x651 = 936U;
	uint16_t x652 = 9U;
	int32_t t160 = INT32_MAX;

    t160 = ((x649|(x650%x651))|x652);

    if (t160 != INT32_MAX) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x653 = 733;
	static volatile int32_t t161 = 16015;

    t161 = ((x653|(x654%x655))|x656);

    if (t161 != 735) { NG(); } else { ; }
	
}

void f162(void) {
    	static int32_t x657 = INT32_MIN;
	uint64_t x658 = 105LLU;
	volatile uint64_t t162 = 10127846285904LLU;

    t162 = ((x657|(x658%x659))|x660);

    if (t162 != 18446744071562068095LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	static int16_t x663 = INT16_MIN;
	volatile int64_t x664 = -1LL;

    t163 = ((x661|(x662%x663))|x664);

    if (t163 != -1LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x665 = INT32_MAX;
	static uint16_t x666 = 248U;
	uint16_t x667 = 3127U;
	int64_t t164 = -81448LL;

    t164 = ((x665|(x666%x667))|x668);

    if (t164 != 54290534105087LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x669 = 1U;
	int16_t x670 = -1;
	static volatile int64_t x671 = -1LL;
	uint64_t x672 = 14869LLU;
	volatile uint64_t t165 = 63097907918966770LLU;

    t165 = ((x669|(x670%x671))|x672);

    if (t165 != 14869LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x673 = 546687U;
	uint32_t x674 = 552688688U;

    t166 = ((x673|(x674%x675))|x676);

    if (t166 != UINT32_MAX) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint32_t x681 = 9U;
	uint8_t x682 = UINT8_MAX;
	uint16_t x684 = UINT16_MAX;
	uint32_t t167 = 1159U;

    t167 = ((x681|(x682%x683))|x684);

    if (t167 != 65535U) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x685 = 3694U;
	static int32_t x686 = -10167;
	static uint8_t x687 = UINT8_MAX;
	volatile int32_t x688 = INT32_MIN;
	int32_t t168 = -7;

    t168 = ((x685|(x686%x687))|x688);

    if (t168 != -146) { NG(); } else { ; }
	
}

void f169(void) {
    	static int64_t x689 = INT64_MIN;
	uint32_t x690 = 2118467U;
	int32_t x691 = -1;
	int64_t x692 = INT64_MIN;
	int64_t t169 = 7432674616593LL;

    t169 = ((x689|(x690%x691))|x692);

    if (t169 != -9223372036852657341LL) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int16_t x693 = INT16_MIN;
	volatile int16_t x694 = -6350;
	static int16_t x695 = INT16_MIN;

    t170 = ((x693|(x694%x695))|x696);

    if (t170 != -78) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile uint32_t x697 = 220382627U;
	int16_t x698 = 924;
	static uint8_t x699 = 2U;
	int8_t x700 = -1;
	volatile uint32_t t171 = UINT32_MAX;

    t171 = ((x697|(x698%x699))|x700);

    if (t171 != UINT32_MAX) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x701 = 28;
	static uint16_t x702 = 1671U;
	volatile int16_t x703 = INT16_MIN;
	static volatile int32_t t172 = 7367;

    t172 = ((x701|(x702%x703))|x704);

    if (t172 != -1) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x705 = 10;
	uint8_t x706 = UINT8_MAX;
	volatile uint8_t x708 = UINT8_MAX;
	static int32_t t173 = -16495;

    t173 = ((x705|(x706%x707))|x708);

    if (t173 != 255) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x709 = 14957U;
	int32_t x711 = INT32_MAX;
	uint8_t x712 = 114U;
	volatile uint32_t t174 = 1098540960U;

    t174 = ((x709|(x710%x711))|x712);

    if (t174 != 518340607U) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x713 = 3U;
	uint64_t x714 = 24LLU;
	volatile int16_t x715 = -2;
	uint64_t t175 = 2095133691437984346LLU;

    t175 = ((x713|(x714%x715))|x716);

    if (t175 != 261983LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	static int32_t x717 = -1;
	int16_t x718 = 28;
	int8_t x719 = INT8_MAX;
	int8_t x720 = -1;
	volatile int32_t t176 = 65;

    t176 = ((x717|(x718%x719))|x720);

    if (t176 != -1) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x721 = -50;
	int8_t x722 = INT8_MAX;
	int16_t x723 = INT16_MIN;
	int64_t t177 = -11896879LL;

    t177 = ((x721|(x722%x723))|x724);

    if (t177 != -1LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x725 = INT64_MAX;
	uint32_t x726 = UINT32_MAX;
	int64_t x727 = 59790046018526003LL;
	volatile uint16_t x728 = 3U;
	static int64_t t178 = INT64_MAX;

    t178 = ((x725|(x726%x727))|x728);

    if (t178 != INT64_MAX) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint16_t x729 = UINT16_MAX;
	static int8_t x730 = INT8_MIN;
	volatile int32_t x731 = INT32_MIN;
	int64_t x732 = INT64_MIN;

    t179 = ((x729|(x730%x731))|x732);

    if (t179 != -1LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x733 = -1;
	volatile int64_t x734 = 43910567LL;
	static volatile int64_t x736 = INT64_MIN;
	volatile int64_t t180 = 2091077543161LL;

    t180 = ((x733|(x734%x735))|x736);

    if (t180 != -1LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint32_t x738 = 4U;
	static int64_t x739 = INT64_MIN;
	int32_t x740 = -1;
	int64_t t181 = -101692LL;

    t181 = ((x737|(x738%x739))|x740);

    if (t181 != -1LL) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int16_t x741 = INT16_MIN;
	uint64_t x742 = 2770598033041178929LLU;
	int8_t x744 = INT8_MIN;
	uint64_t t182 = 193659962012LLU;

    t182 = ((x741|(x742%x743))|x744);

    if (t182 != 18446744073709551537LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x745 = -11366;
	int8_t x746 = -1;
	int32_t x747 = INT32_MIN;
	static int32_t x748 = -632654;
	int32_t t183 = -22584600;

    t183 = ((x745|(x746%x747))|x748);

    if (t183 != -1) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x749 = -7;
	static int8_t x750 = INT8_MIN;
	uint32_t x751 = UINT32_MAX;
	uint64_t x752 = 151LLU;
	uint64_t t184 = 442LLU;

    t184 = ((x749|(x750%x751))|x752);

    if (t184 != 4294967295LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x753 = 3036200394910LLU;
	int8_t x755 = INT8_MAX;
	volatile uint64_t x756 = 15329015789LLU;
	uint64_t t185 = 110618198314470284LLU;

    t185 = ((x753|(x754%x755))|x756);

    if (t185 != 3040764459007LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint16_t x758 = UINT16_MAX;
	int16_t x759 = INT16_MIN;
	int64_t x760 = INT64_MIN;
	static volatile int64_t t186 = -1705984643131405118LL;

    t186 = ((x757|(x758%x759))|x760);

    if (t186 != -1LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x761 = -118;
	volatile int16_t x762 = INT16_MIN;
	static int32_t x763 = -1;
	uint16_t x764 = 278U;
	volatile int32_t t187 = 192064813;

    t187 = ((x761|(x762%x763))|x764);

    if (t187 != -98) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint8_t x765 = 0U;
	int8_t x766 = INT8_MIN;
	static int64_t x767 = INT64_MIN;
	static volatile int16_t x768 = -1;
	static int64_t t188 = 36903LL;

    t188 = ((x765|(x766%x767))|x768);

    if (t188 != -1LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint64_t x769 = UINT64_MAX;
	uint64_t x770 = UINT64_MAX;
	uint8_t x771 = 14U;
	int32_t x772 = INT32_MAX;
	volatile uint64_t t189 = UINT64_MAX;

    t189 = ((x769|(x770%x771))|x772);

    if (t189 != UINT64_MAX) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x773 = 3746105U;
	int8_t x774 = INT8_MAX;
	int32_t x775 = INT32_MIN;
	volatile int32_t x776 = -1;
	volatile uint32_t t190 = UINT32_MAX;

    t190 = ((x773|(x774%x775))|x776);

    if (t190 != UINT32_MAX) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x777 = INT64_MAX;
	uint32_t x779 = UINT32_MAX;
	uint8_t x780 = 4U;

    t191 = ((x777|(x778%x779))|x780);

    if (t191 != INT64_MAX) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile uint8_t x781 = 11U;
	uint32_t x782 = 11746U;
	uint8_t x783 = 45U;
	int16_t x784 = -1;
	volatile uint32_t t192 = UINT32_MAX;

    t192 = ((x781|(x782%x783))|x784);

    if (t192 != UINT32_MAX) { NG(); } else { ; }
	
}

void f193(void) {
    	static int64_t x785 = 673020LL;
	uint32_t x786 = 131U;
	int16_t x787 = INT16_MIN;
	volatile int8_t x788 = -1;
	static volatile int64_t t193 = -3064117860234727LL;

    t193 = ((x785|(x786%x787))|x788);

    if (t193 != -1LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x789 = INT16_MIN;
	int32_t x790 = INT32_MAX;
	volatile int8_t x791 = -1;
	int32_t x792 = INT32_MIN;

    t194 = ((x789|(x790%x791))|x792);

    if (t194 != -32768) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint8_t x793 = 40U;
	static uint8_t x794 = 5U;
	volatile int8_t x795 = INT8_MIN;
	uint8_t x796 = UINT8_MAX;
	volatile int32_t t195 = 0;

    t195 = ((x793|(x794%x795))|x796);

    if (t195 != 255) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int32_t x798 = -1;
	static int32_t x799 = INT32_MIN;
	int16_t x800 = INT16_MAX;

    t196 = ((x797|(x798%x799))|x800);

    if (t196 != -1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x804 = UINT32_MAX;
	uint32_t t197 = UINT32_MAX;

    t197 = ((x801|(x802%x803))|x804);

    if (t197 != UINT32_MAX) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint8_t x805 = 12U;
	volatile int64_t x806 = INT64_MIN;
	int32_t x807 = INT32_MIN;
	int32_t x808 = INT32_MIN;

    t198 = ((x805|(x806%x807))|x808);

    if (t198 != -2147483636LL) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x809 = 5U;
	static uint8_t x810 = UINT8_MAX;
	static int16_t x811 = 252;
	int16_t x812 = INT16_MAX;
	int32_t t199 = -267050;

    t199 = ((x809|(x810%x811))|x812);

    if (t199 != 32767) { NG(); } else { ; }
	
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

