
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

int8_t x4 = INT8_MIN;
volatile int8_t x9 = 1;
int16_t x11 = INT16_MIN;
int32_t t4 = -35;
int16_t x23 = -4608;
volatile int32_t t5 = -122;
static int64_t x26 = -1LL;
int16_t x27 = 1;
uint16_t x30 = 13418U;
uint16_t x31 = UINT16_MAX;
static volatile int32_t t7 = 2212;
uint16_t x34 = 925U;
int8_t x37 = -1;
int64_t x40 = -1LL;
int8_t x41 = -1;
int64_t x47 = INT64_MIN;
int32_t x50 = INT32_MIN;
volatile int32_t t12 = -35;
volatile int32_t t13 = 52462023;
int16_t x60 = -10;
int32_t t14 = -2023544;
int16_t x68 = -1;
static volatile int32_t x70 = INT32_MIN;
static volatile int32_t x71 = -1;
int64_t x77 = INT64_MIN;
volatile int16_t x81 = INT16_MIN;
uint64_t x82 = UINT64_MAX;
int16_t x98 = INT16_MAX;
int16_t x99 = -2;
int32_t t25 = 12641;
int32_t x105 = -2;
int32_t x108 = INT32_MIN;
int64_t x110 = -7LL;
uint64_t x112 = 59208780686890665LLU;
volatile int64_t x114 = -3642LL;
int16_t x116 = INT16_MIN;
int8_t x124 = -1;
uint64_t x130 = UINT64_MAX;
volatile int16_t x131 = -17;
uint64_t x132 = UINT64_MAX;
int64_t x133 = -1LL;
volatile int8_t x136 = INT8_MAX;
int32_t t34 = 0;
int8_t x142 = INT8_MAX;
uint64_t x144 = UINT64_MAX;
int16_t x146 = INT16_MAX;
int64_t x151 = INT64_MIN;
static uint8_t x154 = UINT8_MAX;
int16_t x161 = INT16_MIN;
int64_t x166 = -1LL;
int16_t x170 = -8147;
uint64_t x181 = UINT64_MAX;
uint32_t x182 = 29U;
int32_t x183 = INT32_MAX;
uint8_t x184 = 59U;
uint16_t x191 = 6U;
volatile int32_t t47 = -74;
static int64_t x197 = -1LL;
int16_t x201 = -904;
volatile int64_t x207 = INT64_MIN;
static uint32_t x209 = UINT32_MAX;
static int32_t x218 = -1;
int16_t x219 = INT16_MIN;
volatile int32_t t54 = -681235518;
int8_t x230 = 17;
static int16_t x231 = INT16_MIN;
int32_t t57 = -50648;
volatile uint32_t x234 = 83897U;
int64_t x237 = INT64_MIN;
uint64_t x239 = UINT64_MAX;
static volatile int32_t t59 = 5544;
int32_t t60 = 4137481;
static int16_t x246 = 352;
volatile int32_t t62 = 911;
uint8_t x263 = 16U;
static int32_t t66 = 821;
int64_t x275 = INT64_MIN;
uint8_t x280 = 46U;
int8_t x286 = -2;
volatile int32_t t72 = 2;
uint64_t x293 = UINT64_MAX;
int32_t x298 = INT32_MIN;
int32_t x303 = INT32_MIN;
static int32_t x304 = -13;
int32_t x309 = -1013;
int32_t t77 = -29797;
volatile int32_t x313 = -1;
int64_t x318 = 12605915LL;
static volatile int32_t t79 = 135869943;
uint64_t x329 = UINT64_MAX;
static int32_t x330 = 133267950;
static uint8_t x332 = UINT8_MAX;
static volatile int32_t t82 = -1896451;
uint64_t x334 = 109803342637396203LLU;
uint64_t x338 = UINT64_MAX;
static volatile uint8_t x343 = 5U;
int32_t x344 = -24554582;
int64_t x348 = -1LL;
static int32_t t87 = 294;
volatile int8_t x357 = -1;
uint8_t x361 = UINT8_MAX;
volatile int32_t x363 = INT32_MIN;
int8_t x368 = INT8_MIN;
volatile int32_t t91 = 4803;
int8_t x369 = -2;
volatile int32_t t92 = 120203;
int64_t x377 = 843926013650130405LL;
volatile int32_t t94 = -9676;
int32_t x381 = INT32_MIN;
int16_t x389 = 1012;
volatile int32_t t97 = 16507933;
volatile int8_t x393 = INT8_MIN;
int8_t x394 = 0;
static int32_t t98 = -9044;
static volatile int32_t t99 = 55922;
int16_t x402 = INT16_MIN;
int16_t x403 = -1;
uint16_t x413 = UINT16_MAX;
uint16_t x418 = 691U;
uint32_t x422 = 26U;
int16_t x423 = 1604;
int8_t x428 = INT8_MAX;
int32_t t106 = -171751;
volatile int8_t x433 = 6;
static int32_t x440 = INT32_MIN;
static int16_t x443 = INT16_MIN;
uint64_t x447 = UINT64_MAX;
int16_t x454 = INT16_MIN;
int32_t t113 = -460551162;
uint64_t x458 = 12522LLU;
volatile int32_t t115 = 0;
int32_t x465 = -491286;
static volatile int8_t x466 = INT8_MIN;
static int64_t x470 = INT64_MIN;
static uint64_t x474 = 22903817177279LLU;
int8_t x476 = INT8_MAX;
int32_t t118 = 0;
int32_t x496 = -527403014;
volatile int32_t t123 = -17406;
int16_t x499 = INT16_MIN;
int32_t t125 = -18;
uint32_t x512 = UINT32_MAX;
volatile uint32_t x523 = UINT32_MAX;
static uint32_t x525 = 384325734U;
int32_t x527 = -1;
static int16_t x538 = 5780;
volatile int64_t x539 = 15669967022LL;
volatile int32_t t134 = -281;
int64_t x549 = -662LL;
volatile uint32_t x552 = 790U;
static volatile int32_t t137 = -26906129;
static int32_t x553 = INT32_MAX;
int32_t t138 = 677226;
static uint16_t x565 = 729U;
uint16_t x571 = UINT16_MAX;
volatile uint16_t x572 = 16079U;
uint32_t x576 = UINT32_MAX;
uint64_t x578 = UINT64_MAX;
int16_t x581 = INT16_MAX;
int16_t x583 = INT16_MIN;
static int32_t t147 = -12123487;
volatile uint8_t x595 = 1U;
int32_t x596 = -1;
static volatile int8_t x597 = INT8_MIN;
int32_t t149 = -442;
int32_t x602 = -1;
int8_t x612 = -1;
int64_t x613 = INT64_MIN;
int32_t t153 = -7090;
int64_t x619 = 67326487163465LL;
static uint64_t x624 = UINT64_MAX;
int8_t x629 = INT8_MIN;
static int32_t x630 = INT32_MIN;
volatile int64_t x635 = 36017532883824311LL;
uint64_t x642 = UINT64_MAX;
uint16_t x659 = UINT16_MAX;
static int32_t t164 = 93;
uint8_t x667 = 51U;
static uint16_t x672 = 3U;
volatile int8_t x678 = -1;
uint32_t x689 = UINT32_MAX;
uint64_t x691 = 38029902415368398LLU;
uint64_t x693 = 1LLU;
int64_t x696 = 1716360LL;
volatile uint8_t x697 = UINT8_MAX;
static int32_t t174 = 0;
int8_t x706 = 2;
int64_t x708 = -1225637428092843LL;
volatile int32_t x710 = -18;
volatile int32_t t178 = -244931;
int32_t x717 = -1;
uint16_t x727 = 20082U;
volatile int32_t t183 = 73732;
volatile uint8_t x739 = 18U;
static volatile uint32_t x743 = 34U;
int32_t t186 = 1;
uint16_t x749 = 13522U;
int16_t x752 = 174;
static int32_t x754 = -1;
int32_t x757 = 8817585;
static uint64_t x760 = UINT64_MAX;
int8_t x767 = -1;
int8_t x772 = 0;
volatile int32_t t192 = 107419;
uint8_t x778 = UINT8_MAX;
int32_t x784 = -76595;
volatile int32_t t196 = 1;
volatile int32_t t197 = -101717242;
uint16_t x795 = 197U;
int64_t x800 = INT64_MAX;
volatile int32_t t199 = 396;


void f0(void) {
    	volatile uint16_t x1 = 1U;
	uint32_t x2 = 56354U;
	uint64_t x3 = UINT64_MAX;
	int32_t t0 = 0;

    t0 = ((x1|x2)<=(x3|x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = 32597074033789380LLU;
	static volatile uint8_t x6 = 1U;
	int8_t x7 = 8;
	volatile int32_t x8 = INT32_MAX;
	int32_t t1 = 253;

    t1 = ((x5|x6)<=(x7|x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x10 = INT16_MIN;
	volatile uint64_t x12 = UINT64_MAX;
	int32_t t2 = -5276123;

    t2 = ((x9|x10)<=(x11|x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MIN;
	uint32_t x14 = 53556563U;
	int32_t x15 = INT32_MIN;
	volatile uint64_t x16 = 141205125120827083LLU;
	int32_t t3 = 983647;

    t3 = ((x13|x14)<=(x15|x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = INT16_MIN;
	uint32_t x18 = 247395567U;
	uint32_t x19 = UINT32_MAX;
	int32_t x20 = -1;

    t4 = ((x17|x18)<=(x19|x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = INT16_MIN;
	static uint64_t x22 = 3764633389LLU;
	int16_t x24 = INT16_MIN;

    t5 = ((x21|x22)<=(x23|x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint16_t x25 = 13341U;
	static int8_t x28 = 2;
	int32_t t6 = -236713273;

    t6 = ((x25|x26)<=(x27|x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = 0U;
	uint64_t x32 = UINT64_MAX;

    t7 = ((x29|x30)<=(x31|x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = -5;
	volatile int32_t x35 = -461;
	volatile int16_t x36 = INT16_MIN;
	int32_t t8 = 679;

    t8 = ((x33|x34)<=(x35|x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint8_t x38 = 6U;
	int32_t x39 = INT32_MAX;
	static int32_t t9 = -748;

    t9 = ((x37|x38)<=(x39|x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint32_t x42 = UINT32_MAX;
	static uint64_t x43 = 3684LLU;
	int64_t x44 = -1LL;
	volatile int32_t t10 = 3;

    t10 = ((x41|x42)<=(x43|x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = INT16_MIN;
	int64_t x46 = -1LL;
	static int16_t x48 = 1;
	volatile int32_t t11 = 476;

    t11 = ((x45|x46)<=(x47|x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x49 = 1U;
	volatile int16_t x51 = INT16_MAX;
	int32_t x52 = INT32_MAX;

    t12 = ((x49|x50)<=(x51|x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x53 = UINT8_MAX;
	uint16_t x54 = 423U;
	static int32_t x55 = INT32_MIN;
	static int32_t x56 = INT32_MIN;

    t13 = ((x53|x54)<=(x55|x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = INT16_MIN;
	int8_t x58 = -12;
	int32_t x59 = -1;

    t14 = ((x57|x58)<=(x59|x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = -1;
	uint32_t x62 = 2038402U;
	int8_t x63 = INT8_MAX;
	static volatile int16_t x64 = 0;
	volatile int32_t t15 = -51608;

    t15 = ((x61|x62)<=(x63|x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = INT32_MAX;
	uint32_t x66 = UINT32_MAX;
	uint8_t x67 = 92U;
	volatile int32_t t16 = 1;

    t16 = ((x65|x66)<=(x67|x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = -271617017451LL;
	volatile int8_t x72 = INT8_MAX;
	int32_t t17 = 20237;

    t17 = ((x69|x70)<=(x71|x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x73 = 13662U;
	volatile int8_t x74 = INT8_MIN;
	uint16_t x75 = 1616U;
	uint64_t x76 = 1708975096117409462LLU;
	volatile int32_t t18 = -515136130;

    t18 = ((x73|x74)<=(x75|x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint32_t x78 = 33U;
	volatile uint64_t x79 = 5296943965LLU;
	int8_t x80 = INT8_MIN;
	int32_t t19 = 354058;

    t19 = ((x77|x78)<=(x79|x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x83 = 3594U;
	static volatile int16_t x84 = 13;
	static int32_t t20 = 14671;

    t20 = ((x81|x82)<=(x83|x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x85 = -1;
	volatile int32_t x86 = INT32_MIN;
	int32_t x87 = -1;
	int32_t x88 = INT32_MIN;
	volatile int32_t t21 = 10;

    t21 = ((x85|x86)<=(x87|x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint64_t x89 = 446491179769LLU;
	int16_t x90 = -1;
	int8_t x91 = INT8_MIN;
	uint16_t x92 = UINT16_MAX;
	int32_t t22 = 349;

    t22 = ((x89|x90)<=(x91|x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint64_t x93 = 1196234905214392294LLU;
	static int8_t x94 = -1;
	uint8_t x95 = 1U;
	int8_t x96 = -1;
	volatile int32_t t23 = 105;

    t23 = ((x93|x94)<=(x95|x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x97 = -1LL;
	static int32_t x100 = -2380628;
	static volatile int32_t t24 = 80879124;

    t24 = ((x97|x98)<=(x99|x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = 3246;
	uint32_t x102 = UINT32_MAX;
	static uint32_t x103 = 571237U;
	int32_t x104 = -233;

    t25 = ((x101|x102)<=(x103|x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x106 = -1;
	volatile uint16_t x107 = 194U;
	volatile int32_t t26 = 60;

    t26 = ((x105|x106)<=(x107|x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x109 = INT8_MIN;
	int16_t x111 = -411;
	int32_t t27 = -15;

    t27 = ((x109|x110)<=(x111|x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = 0;
	uint32_t x115 = 496989777U;
	volatile int32_t t28 = -852686;

    t28 = ((x113|x114)<=(x115|x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x117 = UINT64_MAX;
	uint32_t x118 = UINT32_MAX;
	int32_t x119 = INT32_MAX;
	uint8_t x120 = UINT8_MAX;
	volatile int32_t t29 = 1;

    t29 = ((x117|x118)<=(x119|x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x121 = 0LLU;
	int64_t x122 = -12360LL;
	int8_t x123 = INT8_MAX;
	static volatile int32_t t30 = 315949412;

    t30 = ((x121|x122)<=(x123|x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x125 = 124761641543837931LL;
	static volatile int16_t x126 = -738;
	int16_t x127 = INT16_MAX;
	int64_t x128 = 17LL;
	int32_t t31 = 216812;

    t31 = ((x125|x126)<=(x127|x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = INT8_MIN;
	volatile int32_t t32 = -5428;

    t32 = ((x129|x130)<=(x131|x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x134 = -1;
	int64_t x135 = 9LL;
	volatile int32_t t33 = 203144;

    t33 = ((x133|x134)<=(x135|x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x137 = -98430543240130LL;
	static int32_t x138 = -1;
	static volatile int64_t x139 = -1680191903833239LL;
	volatile int64_t x140 = INT64_MAX;

    t34 = ((x137|x138)<=(x139|x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static int32_t x141 = INT32_MAX;
	int8_t x143 = 0;
	volatile int32_t t35 = 1223;

    t35 = ((x141|x142)<=(x143|x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x145 = INT16_MAX;
	int8_t x147 = INT8_MIN;
	uint8_t x148 = 0U;
	volatile int32_t t36 = -16070979;

    t36 = ((x145|x146)<=(x147|x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x149 = 275U;
	uint64_t x150 = UINT64_MAX;
	int64_t x152 = 10276LL;
	static int32_t t37 = -355526;

    t37 = ((x149|x150)<=(x151|x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = 1;
	uint64_t x155 = UINT64_MAX;
	volatile int8_t x156 = -1;
	int32_t t38 = 446957;

    t38 = ((x153|x154)<=(x155|x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint8_t x157 = UINT8_MAX;
	int64_t x158 = -1LL;
	uint8_t x159 = 8U;
	static volatile int32_t x160 = INT32_MIN;
	static volatile int32_t t39 = 4288;

    t39 = ((x157|x158)<=(x159|x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x162 = 4U;
	uint32_t x163 = UINT32_MAX;
	uint16_t x164 = 15138U;
	int32_t t40 = 4857;

    t40 = ((x161|x162)<=(x163|x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x165 = 186U;
	static volatile uint32_t x167 = 20052U;
	volatile int32_t x168 = INT32_MIN;
	static int32_t t41 = -9;

    t41 = ((x165|x166)<=(x167|x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x169 = -1;
	int64_t x171 = INT64_MAX;
	uint64_t x172 = UINT64_MAX;
	volatile int32_t t42 = 387906;

    t42 = ((x169|x170)<=(x171|x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x173 = 1;
	int16_t x174 = -6506;
	int16_t x175 = INT16_MAX;
	volatile int8_t x176 = 13;
	volatile int32_t t43 = 894586307;

    t43 = ((x173|x174)<=(x175|x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x177 = 1114685132044650LLU;
	static uint64_t x178 = 1440LLU;
	int64_t x179 = INT64_MIN;
	static int32_t x180 = INT32_MIN;
	int32_t t44 = 48074;

    t44 = ((x177|x178)<=(x179|x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int32_t t45 = -48325166;

    t45 = ((x181|x182)<=(x183|x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x185 = INT8_MIN;
	static uint64_t x186 = 416099018303982LLU;
	static int64_t x187 = INT64_MIN;
	volatile int8_t x188 = INT8_MIN;
	static int32_t t46 = -3135937;

    t46 = ((x185|x186)<=(x187|x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x189 = -2445LL;
	int32_t x190 = 908;
	int16_t x192 = -1;

    t47 = ((x189|x190)<=(x191|x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x193 = -1;
	int64_t x194 = INT64_MIN;
	int64_t x195 = INT64_MIN;
	int32_t x196 = INT32_MIN;
	int32_t t48 = 64737;

    t48 = ((x193|x194)<=(x195|x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static int16_t x198 = INT16_MAX;
	int32_t x199 = -1;
	volatile uint64_t x200 = 989128512257246083LLU;
	static volatile int32_t t49 = 164581;

    t49 = ((x197|x198)<=(x199|x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x202 = -1;
	int8_t x203 = -18;
	static volatile int32_t x204 = INT32_MIN;
	volatile int32_t t50 = -4610935;

    t50 = ((x201|x202)<=(x203|x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int16_t x205 = INT16_MIN;
	volatile int16_t x206 = -1;
	int16_t x208 = -1;
	volatile int32_t t51 = -1;

    t51 = ((x205|x206)<=(x207|x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x210 = -10;
	int8_t x211 = 1;
	int32_t x212 = INT32_MIN;
	int32_t t52 = -163112;

    t52 = ((x209|x210)<=(x211|x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = INT32_MIN;
	static int8_t x214 = 13;
	uint8_t x215 = UINT8_MAX;
	static int16_t x216 = INT16_MAX;
	volatile int32_t t53 = 3681;

    t53 = ((x213|x214)<=(x215|x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int64_t x217 = -1LL;
	static volatile uint16_t x220 = 42U;

    t54 = ((x217|x218)<=(x219|x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int32_t x221 = -291;
	volatile int8_t x222 = 4;
	int8_t x223 = 7;
	uint32_t x224 = 0U;
	volatile int32_t t55 = -97102851;

    t55 = ((x221|x222)<=(x223|x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x225 = INT16_MAX;
	uint8_t x226 = 26U;
	int8_t x227 = -4;
	volatile int8_t x228 = -16;
	volatile int32_t t56 = -90;

    t56 = ((x225|x226)<=(x227|x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint8_t x229 = 3U;
	volatile int32_t x232 = INT32_MIN;

    t57 = ((x229|x230)<=(x231|x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = INT64_MIN;
	int64_t x235 = INT64_MIN;
	static int64_t x236 = INT64_MIN;
	volatile int32_t t58 = 18;

    t58 = ((x233|x234)<=(x235|x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x238 = 378U;
	volatile int32_t x240 = INT32_MAX;

    t59 = ((x237|x238)<=(x239|x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x241 = 1LL;
	uint16_t x242 = 70U;
	int64_t x243 = INT64_MAX;
	int32_t x244 = INT32_MAX;

    t60 = ((x241|x242)<=(x243|x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x245 = -1;
	uint32_t x247 = 16836U;
	int32_t x248 = -1;
	static int32_t t61 = -2;

    t61 = ((x245|x246)<=(x247|x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x249 = UINT64_MAX;
	int64_t x250 = INT64_MIN;
	int16_t x251 = 831;
	uint16_t x252 = 103U;

    t62 = ((x249|x250)<=(x251|x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x253 = 3U;
	static int32_t x254 = -1;
	static volatile uint32_t x255 = UINT32_MAX;
	static int8_t x256 = 0;
	volatile int32_t t63 = -31164;

    t63 = ((x253|x254)<=(x255|x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x257 = 30;
	int32_t x258 = INT32_MAX;
	uint8_t x259 = 1U;
	int16_t x260 = -1;
	static int32_t t64 = 13505;

    t64 = ((x257|x258)<=(x259|x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint8_t x261 = UINT8_MAX;
	uint32_t x262 = UINT32_MAX;
	static int64_t x264 = 40868108388826LL;
	volatile int32_t t65 = 104;

    t65 = ((x261|x262)<=(x263|x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x265 = INT32_MAX;
	static int32_t x266 = INT32_MIN;
	int32_t x267 = 34494330;
	uint64_t x268 = 90672292972LLU;

    t66 = ((x265|x266)<=(x267|x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x269 = 31U;
	int8_t x270 = -1;
	int64_t x271 = INT64_MIN;
	int16_t x272 = 2;
	static int32_t t67 = 47;

    t67 = ((x269|x270)<=(x271|x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x273 = UINT32_MAX;
	volatile uint64_t x274 = 20731482278LLU;
	int16_t x276 = -7;
	int32_t t68 = 1014;

    t68 = ((x273|x274)<=(x275|x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x277 = INT8_MIN;
	volatile uint8_t x278 = UINT8_MAX;
	int32_t x279 = INT32_MIN;
	volatile int32_t t69 = 1046612462;

    t69 = ((x277|x278)<=(x279|x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int64_t x281 = INT64_MIN;
	uint64_t x282 = 15880LLU;
	volatile uint8_t x283 = 1U;
	int32_t x284 = INT32_MAX;
	volatile int32_t t70 = -4997;

    t70 = ((x281|x282)<=(x283|x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x285 = INT32_MAX;
	uint8_t x287 = 1U;
	volatile uint16_t x288 = UINT16_MAX;
	int32_t t71 = -1;

    t71 = ((x285|x286)<=(x287|x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint16_t x289 = UINT16_MAX;
	volatile int8_t x290 = -2;
	uint64_t x291 = 664663474941LLU;
	int16_t x292 = 14;

    t72 = ((x289|x290)<=(x291|x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x294 = INT64_MIN;
	static int16_t x295 = 800;
	static int16_t x296 = -1;
	volatile int32_t t73 = -107;

    t73 = ((x293|x294)<=(x295|x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x297 = 3U;
	static uint64_t x299 = 3299880440LLU;
	int8_t x300 = INT8_MIN;
	volatile int32_t t74 = -7;

    t74 = ((x297|x298)<=(x299|x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint32_t x301 = 332254525U;
	static int32_t x302 = INT32_MIN;
	int32_t t75 = -3915639;

    t75 = ((x301|x302)<=(x303|x304));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x305 = -1;
	uint16_t x306 = 9284U;
	int32_t x307 = INT32_MIN;
	uint8_t x308 = 0U;
	int32_t t76 = -270887706;

    t76 = ((x305|x306)<=(x307|x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile int32_t x310 = -1;
	volatile int32_t x311 = INT32_MIN;
	static volatile uint16_t x312 = 1107U;

    t77 = ((x309|x310)<=(x311|x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static int64_t x314 = -1LL;
	static uint8_t x315 = 58U;
	volatile int16_t x316 = INT16_MAX;
	static volatile int32_t t78 = 37911005;

    t78 = ((x313|x314)<=(x315|x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x317 = 15U;
	uint8_t x319 = 1U;
	volatile int32_t x320 = 2624509;

    t79 = ((x317|x318)<=(x319|x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x321 = UINT64_MAX;
	volatile int64_t x322 = INT64_MIN;
	int64_t x323 = INT64_MIN;
	static int16_t x324 = INT16_MIN;
	static volatile int32_t t80 = 16611845;

    t80 = ((x321|x322)<=(x323|x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x325 = INT16_MAX;
	static int32_t x326 = 4246;
	uint32_t x327 = 44574U;
	uint16_t x328 = 662U;
	static int32_t t81 = -16981662;

    t81 = ((x325|x326)<=(x327|x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static int32_t x331 = INT32_MIN;

    t82 = ((x329|x330)<=(x331|x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x333 = -1;
	int8_t x335 = -1;
	int32_t x336 = -7059549;
	volatile int32_t t83 = -54;

    t83 = ((x333|x334)<=(x335|x336));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint16_t x337 = UINT16_MAX;
	volatile uint8_t x339 = 1U;
	volatile int8_t x340 = INT8_MIN;
	volatile int32_t t84 = 9485;

    t84 = ((x337|x338)<=(x339|x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x341 = 3843024LLU;
	int16_t x342 = INT16_MIN;
	int32_t t85 = -385;

    t85 = ((x341|x342)<=(x343|x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x345 = 1;
	int8_t x346 = INT8_MAX;
	static volatile int32_t x347 = -1;
	int32_t t86 = -37707933;

    t86 = ((x345|x346)<=(x347|x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x349 = 0LLU;
	static volatile int64_t x350 = INT64_MIN;
	static int8_t x351 = -1;
	volatile uint64_t x352 = UINT64_MAX;

    t87 = ((x349|x350)<=(x351|x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x353 = 268744019120482LL;
	int8_t x354 = INT8_MAX;
	static volatile int64_t x355 = -1LL;
	int32_t x356 = -60079844;
	int32_t t88 = -1813878;

    t88 = ((x353|x354)<=(x355|x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x358 = -1;
	int8_t x359 = INT8_MAX;
	int16_t x360 = -1;
	int32_t t89 = 0;

    t89 = ((x357|x358)<=(x359|x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x362 = INT64_MIN;
	uint32_t x364 = UINT32_MAX;
	volatile int32_t t90 = -3458;

    t90 = ((x361|x362)<=(x363|x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x365 = UINT64_MAX;
	volatile uint16_t x366 = UINT16_MAX;
	int64_t x367 = INT64_MAX;

    t91 = ((x365|x366)<=(x367|x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile int64_t x370 = INT64_MIN;
	volatile int16_t x371 = 30;
	int64_t x372 = -26604819602LL;

    t92 = ((x369|x370)<=(x371|x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x373 = INT8_MIN;
	int16_t x374 = 30;
	int8_t x375 = -39;
	volatile int16_t x376 = -1;
	volatile int32_t t93 = -41;

    t93 = ((x373|x374)<=(x375|x376));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x378 = INT8_MAX;
	static int32_t x379 = -1;
	static uint32_t x380 = UINT32_MAX;

    t94 = ((x377|x378)<=(x379|x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x382 = -1;
	volatile uint64_t x383 = 3LLU;
	volatile int64_t x384 = -33431299185696419LL;
	volatile int32_t t95 = 0;

    t95 = ((x381|x382)<=(x383|x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint8_t x385 = UINT8_MAX;
	volatile uint16_t x386 = 1017U;
	static volatile int32_t x387 = -1;
	uint8_t x388 = UINT8_MAX;
	volatile int32_t t96 = 3153;

    t96 = ((x385|x386)<=(x387|x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x390 = UINT64_MAX;
	int64_t x391 = INT64_MAX;
	volatile uint64_t x392 = 8630170648079LLU;

    t97 = ((x389|x390)<=(x391|x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int16_t x395 = -561;
	static int64_t x396 = INT64_MAX;

    t98 = ((x393|x394)<=(x395|x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x397 = INT32_MIN;
	int16_t x398 = 1;
	int16_t x399 = -141;
	int32_t x400 = -1805;

    t99 = ((x397|x398)<=(x399|x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = INT16_MIN;
	uint32_t x404 = UINT32_MAX;
	int32_t t100 = -361;

    t100 = ((x401|x402)<=(x403|x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x405 = -1;
	int8_t x406 = INT8_MIN;
	int32_t x407 = -1;
	int8_t x408 = -1;
	static volatile int32_t t101 = -385462939;

    t101 = ((x405|x406)<=(x407|x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x409 = 65U;
	volatile uint16_t x410 = UINT16_MAX;
	int32_t x411 = -1;
	int64_t x412 = INT64_MIN;
	volatile int32_t t102 = 10692166;

    t102 = ((x409|x410)<=(x411|x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint16_t x414 = 5U;
	static int16_t x415 = INT16_MAX;
	static uint8_t x416 = UINT8_MAX;
	volatile int32_t t103 = -125;

    t103 = ((x413|x414)<=(x415|x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x417 = 1331232;
	int64_t x419 = -217329109684LL;
	uint32_t x420 = UINT32_MAX;
	int32_t t104 = 8285972;

    t104 = ((x417|x418)<=(x419|x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int8_t x421 = -1;
	volatile int8_t x424 = INT8_MIN;
	static int32_t t105 = 5205;

    t105 = ((x421|x422)<=(x423|x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int64_t x425 = INT64_MAX;
	int64_t x426 = INT64_MIN;
	uint32_t x427 = 3437U;

    t106 = ((x425|x426)<=(x427|x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x429 = 52527LL;
	int64_t x430 = 5955143572402677LL;
	static volatile int16_t x431 = INT16_MIN;
	int32_t x432 = INT32_MIN;
	volatile int32_t t107 = 154;

    t107 = ((x429|x430)<=(x431|x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x434 = -1LL;
	static volatile int8_t x435 = INT8_MIN;
	int16_t x436 = INT16_MIN;
	volatile int32_t t108 = -28449;

    t108 = ((x433|x434)<=(x435|x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x437 = -990021;
	volatile uint64_t x438 = 5886865694921227LLU;
	uint16_t x439 = UINT16_MAX;
	static int32_t t109 = -14346497;

    t109 = ((x437|x438)<=(x439|x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint16_t x441 = 3233U;
	uint64_t x442 = 63522886483850LLU;
	int16_t x444 = INT16_MIN;
	int32_t t110 = -1421920;

    t110 = ((x441|x442)<=(x443|x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x445 = INT8_MIN;
	uint32_t x446 = 123U;
	uint16_t x448 = 5U;
	volatile int32_t t111 = -313;

    t111 = ((x445|x446)<=(x447|x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x449 = -2568092464319239627LL;
	int16_t x450 = INT16_MIN;
	static uint16_t x451 = 8U;
	uint16_t x452 = 31U;
	volatile int32_t t112 = 514179;

    t112 = ((x449|x450)<=(x451|x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x453 = INT64_MAX;
	volatile int64_t x455 = INT64_MAX;
	int32_t x456 = INT32_MAX;

    t113 = ((x453|x454)<=(x455|x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x457 = -39;
	int16_t x459 = 9;
	int16_t x460 = 1;
	static int32_t t114 = 585385;

    t114 = ((x457|x458)<=(x459|x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x461 = 0;
	uint32_t x462 = 851377U;
	static uint32_t x463 = UINT32_MAX;
	volatile int8_t x464 = -1;

    t115 = ((x461|x462)<=(x463|x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint64_t x467 = 3LLU;
	uint64_t x468 = 1929337686221285567LLU;
	volatile int32_t t116 = -270329983;

    t116 = ((x465|x466)<=(x467|x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x469 = UINT32_MAX;
	uint64_t x471 = UINT64_MAX;
	static uint64_t x472 = UINT64_MAX;
	int32_t t117 = -793145276;

    t117 = ((x469|x470)<=(x471|x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x473 = INT8_MAX;
	int16_t x475 = INT16_MIN;

    t118 = ((x473|x474)<=(x475|x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x477 = -1852;
	uint64_t x478 = 207842LLU;
	uint32_t x479 = 1554U;
	int32_t x480 = INT32_MAX;
	volatile int32_t t119 = -13;

    t119 = ((x477|x478)<=(x479|x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x481 = INT8_MIN;
	uint32_t x482 = UINT32_MAX;
	int16_t x483 = INT16_MIN;
	int32_t x484 = INT32_MIN;
	static int32_t t120 = -300798574;

    t120 = ((x481|x482)<=(x483|x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x485 = 2U;
	volatile uint64_t x486 = 48656990382846869LLU;
	uint16_t x487 = UINT16_MAX;
	uint16_t x488 = 10U;
	volatile int32_t t121 = 0;

    t121 = ((x485|x486)<=(x487|x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x489 = -1;
	uint8_t x490 = UINT8_MAX;
	int64_t x491 = -1LL;
	int16_t x492 = INT16_MIN;
	volatile int32_t t122 = -2027;

    t122 = ((x489|x490)<=(x491|x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x493 = 3406882686619881LL;
	int32_t x494 = INT32_MIN;
	volatile int64_t x495 = INT64_MIN;

    t123 = ((x493|x494)<=(x495|x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x497 = UINT8_MAX;
	int64_t x498 = 95577032636LL;
	uint64_t x500 = 482977662266LLU;
	volatile int32_t t124 = -323585536;

    t124 = ((x497|x498)<=(x499|x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x501 = -83;
	static int64_t x502 = 1LL;
	int16_t x503 = -1;
	volatile int64_t x504 = -1LL;

    t125 = ((x501|x502)<=(x503|x504));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x505 = INT8_MAX;
	int32_t x506 = INT32_MAX;
	volatile uint8_t x507 = 48U;
	static uint8_t x508 = 53U;
	volatile int32_t t126 = 475133823;

    t126 = ((x505|x506)<=(x507|x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x509 = -1;
	static uint32_t x510 = 287U;
	static int32_t x511 = INT32_MAX;
	int32_t t127 = -8447107;

    t127 = ((x509|x510)<=(x511|x512));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x513 = -1LL;
	static uint32_t x514 = 34733528U;
	int16_t x515 = -1;
	int8_t x516 = INT8_MIN;
	int32_t t128 = 3;

    t128 = ((x513|x514)<=(x515|x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x517 = INT64_MAX;
	int16_t x518 = 6112;
	int64_t x519 = INT64_MIN;
	static volatile int8_t x520 = 62;
	int32_t t129 = -50749;

    t129 = ((x517|x518)<=(x519|x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x521 = 1U;
	uint32_t x522 = 40915U;
	static int64_t x524 = INT64_MIN;
	int32_t t130 = -9560981;

    t130 = ((x521|x522)<=(x523|x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x526 = INT8_MAX;
	int64_t x528 = INT64_MIN;
	int32_t t131 = 21;

    t131 = ((x525|x526)<=(x527|x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x529 = 245;
	uint8_t x530 = UINT8_MAX;
	static volatile int8_t x531 = INT8_MAX;
	volatile int64_t x532 = 674048LL;
	volatile int32_t t132 = 1;

    t132 = ((x529|x530)<=(x531|x532));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x533 = 1;
	volatile int16_t x534 = INT16_MIN;
	uint16_t x535 = 169U;
	int16_t x536 = -1;
	volatile int32_t t133 = 775;

    t133 = ((x533|x534)<=(x535|x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint8_t x537 = UINT8_MAX;
	volatile uint8_t x540 = 22U;

    t134 = ((x537|x538)<=(x539|x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x541 = 6275U;
	uint64_t x542 = UINT64_MAX;
	int16_t x543 = INT16_MAX;
	volatile int8_t x544 = INT8_MAX;
	volatile int32_t t135 = 5233388;

    t135 = ((x541|x542)<=(x543|x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x545 = INT32_MIN;
	int32_t x546 = 3496051;
	int8_t x547 = -1;
	int64_t x548 = INT64_MAX;
	static volatile int32_t t136 = 4744;

    t136 = ((x545|x546)<=(x547|x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x550 = -611;
	int16_t x551 = -1;

    t137 = ((x549|x550)<=(x551|x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x554 = INT8_MIN;
	int64_t x555 = -1LL;
	uint8_t x556 = UINT8_MAX;

    t138 = ((x553|x554)<=(x555|x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x557 = INT16_MIN;
	static int64_t x558 = -251063499497LL;
	uint8_t x559 = 21U;
	int32_t x560 = 40581100;
	volatile int32_t t139 = 81;

    t139 = ((x557|x558)<=(x559|x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x561 = INT64_MIN;
	int8_t x562 = 23;
	int16_t x563 = INT16_MIN;
	int8_t x564 = 0;
	int32_t t140 = 73646;

    t140 = ((x561|x562)<=(x563|x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x566 = INT32_MIN;
	int32_t x567 = INT32_MAX;
	volatile uint16_t x568 = UINT16_MAX;
	int32_t t141 = 183798;

    t141 = ((x565|x566)<=(x567|x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint64_t x569 = 88984110636529708LLU;
	static int32_t x570 = -1;
	volatile int32_t t142 = 9027180;

    t142 = ((x569|x570)<=(x571|x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x573 = 350U;
	int16_t x574 = INT16_MIN;
	uint64_t x575 = UINT64_MAX;
	volatile int32_t t143 = -555070586;

    t143 = ((x573|x574)<=(x575|x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint32_t x577 = UINT32_MAX;
	uint8_t x579 = 56U;
	uint64_t x580 = 4546LLU;
	volatile int32_t t144 = 25;

    t144 = ((x577|x578)<=(x579|x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static int8_t x582 = INT8_MAX;
	int8_t x584 = -1;
	volatile int32_t t145 = 187416;

    t145 = ((x581|x582)<=(x583|x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x585 = 15U;
	int32_t x586 = INT32_MAX;
	volatile int8_t x587 = INT8_MIN;
	int8_t x588 = INT8_MIN;
	volatile int32_t t146 = -1578791;

    t146 = ((x585|x586)<=(x587|x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x589 = 1U;
	int8_t x590 = INT8_MAX;
	int8_t x591 = -1;
	int16_t x592 = 4969;

    t147 = ((x589|x590)<=(x591|x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x593 = 421;
	uint64_t x594 = 3479414748720LLU;
	int32_t t148 = 0;

    t148 = ((x593|x594)<=(x595|x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint16_t x598 = UINT16_MAX;
	int16_t x599 = INT16_MAX;
	int8_t x600 = INT8_MAX;

    t149 = ((x597|x598)<=(x599|x600));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint16_t x601 = UINT16_MAX;
	uint8_t x603 = UINT8_MAX;
	uint64_t x604 = 1LLU;
	int32_t t150 = -30969605;

    t150 = ((x601|x602)<=(x603|x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x605 = -2481LL;
	int16_t x606 = INT16_MIN;
	volatile uint64_t x607 = 109309530234561869LLU;
	int8_t x608 = INT8_MIN;
	volatile int32_t t151 = 867;

    t151 = ((x605|x606)<=(x607|x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x609 = 1;
	int64_t x610 = INT64_MIN;
	uint64_t x611 = 3989816375170570LLU;
	int32_t t152 = -439512;

    t152 = ((x609|x610)<=(x611|x612));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x614 = 1;
	int64_t x615 = INT64_MIN;
	uint8_t x616 = 62U;

    t153 = ((x613|x614)<=(x615|x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x617 = INT16_MIN;
	int64_t x618 = -1LL;
	static volatile int64_t x620 = -30LL;
	int32_t t154 = -608708;

    t154 = ((x617|x618)<=(x619|x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x621 = 1336078195158058LL;
	int64_t x622 = INT64_MIN;
	uint16_t x623 = UINT16_MAX;
	int32_t t155 = 1142541;

    t155 = ((x621|x622)<=(x623|x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint32_t x625 = UINT32_MAX;
	int8_t x626 = -1;
	int8_t x627 = INT8_MIN;
	uint16_t x628 = 70U;
	volatile int32_t t156 = -43684649;

    t156 = ((x625|x626)<=(x627|x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x631 = 6;
	volatile int64_t x632 = INT64_MIN;
	int32_t t157 = 703632598;

    t157 = ((x629|x630)<=(x631|x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x633 = INT32_MAX;
	int32_t x634 = 22768;
	volatile uint32_t x636 = 3U;
	static volatile int32_t t158 = -2886501;

    t158 = ((x633|x634)<=(x635|x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int8_t x637 = INT8_MAX;
	uint64_t x638 = UINT64_MAX;
	volatile int8_t x639 = 59;
	int16_t x640 = -1;
	volatile int32_t t159 = -1;

    t159 = ((x637|x638)<=(x639|x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x641 = 0;
	int32_t x643 = 14016;
	static int8_t x644 = INT8_MIN;
	int32_t t160 = 753168;

    t160 = ((x641|x642)<=(x643|x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x645 = INT64_MAX;
	int32_t x646 = -1;
	uint8_t x647 = 4U;
	int8_t x648 = INT8_MIN;
	static volatile int32_t t161 = 24105;

    t161 = ((x645|x646)<=(x647|x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x649 = UINT32_MAX;
	int64_t x650 = -1LL;
	int8_t x651 = -7;
	int32_t x652 = -315281;
	static volatile int32_t t162 = -542251803;

    t162 = ((x649|x650)<=(x651|x652));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x653 = INT8_MAX;
	int8_t x654 = -1;
	static volatile int16_t x655 = INT16_MAX;
	uint8_t x656 = 0U;
	volatile int32_t t163 = 0;

    t163 = ((x653|x654)<=(x655|x656));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x657 = -1LL;
	uint64_t x658 = UINT64_MAX;
	int16_t x660 = -1;

    t164 = ((x657|x658)<=(x659|x660));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile uint64_t x661 = 4487700421547361LLU;
	int16_t x662 = INT16_MIN;
	volatile int16_t x663 = 7;
	static uint8_t x664 = 2U;
	int32_t t165 = -5;

    t165 = ((x661|x662)<=(x663|x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int8_t x665 = INT8_MIN;
	static uint16_t x666 = 6955U;
	int16_t x668 = -1;
	int32_t t166 = 126944;

    t166 = ((x665|x666)<=(x667|x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x669 = INT8_MAX;
	uint64_t x670 = 13814225902LLU;
	volatile int64_t x671 = INT64_MIN;
	volatile int32_t t167 = 418;

    t167 = ((x669|x670)<=(x671|x672));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static int64_t x673 = -1LL;
	int8_t x674 = -1;
	volatile uint32_t x675 = 4U;
	int8_t x676 = -1;
	int32_t t168 = 442162;

    t168 = ((x673|x674)<=(x675|x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x677 = 734U;
	volatile int16_t x679 = -1;
	int32_t x680 = 51414;
	volatile int32_t t169 = -844456884;

    t169 = ((x677|x678)<=(x679|x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x681 = INT32_MAX;
	int16_t x682 = INT16_MIN;
	volatile int8_t x683 = -1;
	int32_t x684 = 117;
	int32_t t170 = 0;

    t170 = ((x681|x682)<=(x683|x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x685 = INT64_MIN;
	int64_t x686 = INT64_MAX;
	int32_t x687 = INT32_MIN;
	int32_t x688 = 0;
	int32_t t171 = -622;

    t171 = ((x685|x686)<=(x687|x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int32_t x690 = -1;
	static uint16_t x692 = UINT16_MAX;
	volatile int32_t t172 = -1;

    t172 = ((x689|x690)<=(x691|x692));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint16_t x694 = 4037U;
	uint32_t x695 = 827661U;
	int32_t t173 = 15273525;

    t173 = ((x693|x694)<=(x695|x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x698 = 84982;
	volatile int32_t x699 = -8417;
	uint8_t x700 = UINT8_MAX;

    t174 = ((x697|x698)<=(x699|x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x701 = 8450U;
	volatile uint16_t x702 = 1621U;
	static int32_t x703 = INT32_MIN;
	static int16_t x704 = -2;
	int32_t t175 = 195023318;

    t175 = ((x701|x702)<=(x703|x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x705 = INT16_MIN;
	int8_t x707 = INT8_MAX;
	int32_t t176 = 432440577;

    t176 = ((x705|x706)<=(x707|x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x709 = -181336650137LL;
	int16_t x711 = -555;
	uint8_t x712 = 7U;
	int32_t t177 = -232842905;

    t177 = ((x709|x710)<=(x711|x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x713 = UINT8_MAX;
	uint8_t x714 = 0U;
	uint16_t x715 = 3U;
	int64_t x716 = INT64_MAX;

    t178 = ((x713|x714)<=(x715|x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x718 = INT16_MIN;
	int32_t x719 = INT32_MIN;
	uint16_t x720 = 12306U;
	volatile int32_t t179 = -1042029297;

    t179 = ((x717|x718)<=(x719|x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x721 = INT16_MIN;
	volatile int64_t x722 = INT64_MIN;
	uint32_t x723 = 1545806U;
	uint16_t x724 = 32299U;
	static int32_t t180 = -1367;

    t180 = ((x721|x722)<=(x723|x724));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x725 = INT64_MIN;
	uint16_t x726 = 230U;
	static int16_t x728 = -1;
	int32_t t181 = 2145;

    t181 = ((x725|x726)<=(x727|x728));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x729 = INT8_MAX;
	static int16_t x730 = INT16_MAX;
	static int8_t x731 = INT8_MAX;
	uint16_t x732 = 37U;
	int32_t t182 = 0;

    t182 = ((x729|x730)<=(x731|x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int32_t x733 = 21838791;
	uint16_t x734 = UINT16_MAX;
	static uint16_t x735 = 81U;
	int16_t x736 = -1;

    t183 = ((x733|x734)<=(x735|x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x737 = INT16_MAX;
	volatile int8_t x738 = INT8_MAX;
	uint16_t x740 = 4938U;
	static int32_t t184 = 3316;

    t184 = ((x737|x738)<=(x739|x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x741 = -167034710813865LL;
	volatile int16_t x742 = -1;
	int32_t x744 = 3831195;
	volatile int32_t t185 = 253635691;

    t185 = ((x741|x742)<=(x743|x744));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x745 = -443;
	int32_t x746 = 1;
	volatile int32_t x747 = INT32_MIN;
	int32_t x748 = 467529;

    t186 = ((x745|x746)<=(x747|x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int64_t x750 = INT64_MIN;
	volatile int16_t x751 = -836;
	int32_t t187 = 877669223;

    t187 = ((x749|x750)<=(x751|x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x753 = INT8_MIN;
	static int16_t x755 = -1;
	volatile int64_t x756 = INT64_MIN;
	int32_t t188 = -181065;

    t188 = ((x753|x754)<=(x755|x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x758 = -1;
	int8_t x759 = -1;
	static int32_t t189 = 7;

    t189 = ((x757|x758)<=(x759|x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x761 = -5;
	int32_t x762 = INT32_MAX;
	int32_t x763 = INT32_MIN;
	uint16_t x764 = 119U;
	static volatile int32_t t190 = 45;

    t190 = ((x761|x762)<=(x763|x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x765 = -1;
	static uint32_t x766 = 11U;
	int16_t x768 = -9;
	int32_t t191 = 426;

    t191 = ((x765|x766)<=(x767|x768));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x769 = INT32_MAX;
	static volatile uint8_t x770 = 7U;
	uint16_t x771 = 446U;

    t192 = ((x769|x770)<=(x771|x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x773 = -1;
	uint64_t x774 = 148859746436LLU;
	int32_t x775 = INT32_MIN;
	static volatile uint32_t x776 = 5744600U;
	int32_t t193 = 621214716;

    t193 = ((x773|x774)<=(x775|x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x777 = 70884U;
	int32_t x779 = -1;
	static int8_t x780 = -1;
	volatile int32_t t194 = 0;

    t194 = ((x777|x778)<=(x779|x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint64_t x781 = UINT64_MAX;
	int64_t x782 = 3506LL;
	uint64_t x783 = 2022886066LLU;
	int32_t t195 = 5;

    t195 = ((x781|x782)<=(x783|x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint32_t x785 = 124046183U;
	int16_t x786 = INT16_MAX;
	volatile int8_t x787 = INT8_MIN;
	int8_t x788 = INT8_MIN;

    t196 = ((x785|x786)<=(x787|x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static int16_t x789 = INT16_MIN;
	static uint32_t x790 = UINT32_MAX;
	volatile int8_t x791 = INT8_MIN;
	volatile uint64_t x792 = UINT64_MAX;

    t197 = ((x789|x790)<=(x791|x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile uint16_t x793 = UINT16_MAX;
	int16_t x794 = INT16_MIN;
	int64_t x796 = 21256682684115LL;
	volatile int32_t t198 = 546843;

    t198 = ((x793|x794)<=(x795|x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x797 = 283U;
	int32_t x798 = -1;
	static int64_t x799 = -2127192LL;

    t199 = ((x797|x798)<=(x799|x800));

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

