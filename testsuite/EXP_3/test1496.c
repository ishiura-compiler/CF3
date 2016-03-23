
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

static volatile int16_t x6 = INT16_MAX;
uint32_t x10 = UINT32_MAX;
int64_t x18 = INT64_MIN;
int64_t x21 = INT64_MIN;
volatile int32_t x23 = INT32_MIN;
static int8_t x24 = INT8_MIN;
static int64_t x31 = INT64_MIN;
uint16_t x34 = 1U;
static volatile int32_t t8 = 4661305;
volatile int32_t x37 = -1;
int64_t x41 = INT64_MAX;
uint64_t x46 = UINT64_MAX;
static volatile int32_t t11 = -515491;
int16_t x54 = -1;
static int8_t x62 = -1;
int64_t x68 = 191669152486LL;
int8_t x74 = 11;
volatile uint32_t x82 = 8675653U;
static int8_t x93 = INT8_MIN;
uint16_t x97 = 1647U;
int16_t x99 = INT16_MAX;
int32_t t24 = -16;
static int32_t t26 = -25;
int32_t x113 = -1;
int16_t x115 = 12777;
int16_t x116 = INT16_MIN;
volatile int8_t x117 = INT8_MIN;
uint8_t x122 = UINT8_MAX;
volatile uint8_t x123 = 40U;
int32_t x124 = INT32_MAX;
int16_t x126 = -1;
int64_t x132 = INT64_MIN;
int32_t x135 = -12495;
static uint16_t x137 = 0U;
uint16_t x142 = 0U;
volatile int32_t x147 = 1035;
volatile int32_t t36 = 1931414;
uint8_t x151 = 52U;
static volatile int32_t t37 = 574994355;
int32_t x153 = INT32_MIN;
volatile int32_t t38 = 4060468;
uint16_t x164 = 3U;
volatile int32_t t40 = -237054;
uint8_t x165 = 2U;
volatile int32_t t41 = -7050453;
int64_t x173 = INT64_MIN;
int8_t x178 = INT8_MIN;
volatile int32_t t44 = -3;
int64_t x213 = INT64_MAX;
int16_t x214 = 1242;
static uint16_t x216 = 2U;
static int64_t x227 = INT64_MAX;
int64_t x229 = INT64_MIN;
int32_t x231 = 321889030;
int64_t x232 = INT64_MIN;
static uint8_t x235 = UINT8_MAX;
volatile int32_t t58 = -5;
int8_t x237 = 0;
volatile int8_t x238 = 1;
int16_t x240 = INT16_MIN;
int8_t x248 = INT8_MIN;
volatile int8_t x264 = -2;
static int32_t t68 = -102;
int16_t x277 = 48;
int32_t x280 = -1;
uint64_t x281 = 2334764309705LLU;
static int64_t x286 = 417740110LL;
static uint8_t x295 = 6U;
int16_t x297 = -1;
int64_t x299 = INT64_MIN;
int8_t x304 = -1;
int32_t x309 = INT32_MAX;
static volatile int32_t t77 = 384169103;
uint64_t x319 = UINT64_MAX;
uint16_t x326 = 15U;
int32_t t81 = 120223119;
static int8_t x330 = -1;
volatile uint16_t x331 = 20896U;
int32_t x336 = INT32_MIN;
int8_t x340 = INT8_MAX;
int32_t t85 = -233106;
int32_t x345 = 468114658;
uint16_t x346 = 124U;
int32_t t87 = -12;
int64_t x353 = -478737927744835561LL;
uint32_t x355 = 2995398U;
uint8_t x358 = 18U;
static int16_t x362 = 458;
int8_t x365 = INT8_MIN;
int32_t t91 = -2;
int64_t x371 = 15942526LL;
volatile int32_t t92 = 129;
static volatile int32_t t95 = -60330570;
volatile int8_t x385 = INT8_MIN;
static uint64_t x389 = 38104682002241LLU;
uint32_t x390 = 1377053811U;
volatile uint8_t x399 = 5U;
int16_t x404 = INT16_MAX;
int32_t t101 = 37914083;
int64_t x409 = INT64_MAX;
int16_t x411 = 4;
volatile int16_t x423 = -1;
int8_t x426 = 30;
int8_t x429 = INT8_MIN;
uint8_t x434 = UINT8_MAX;
static volatile uint64_t x436 = 457932738032301968LLU;
int32_t t109 = -265;
int8_t x441 = -11;
volatile uint16_t x443 = 26U;
int16_t x444 = -1;
int32_t t110 = 28296;
static int16_t x446 = INT16_MIN;
int64_t x447 = 14700736046458LL;
static int16_t x449 = 1;
uint64_t x459 = 4417752618905899LLU;
volatile int32_t t114 = 463;
volatile int16_t x465 = INT16_MAX;
volatile int32_t x469 = -1;
uint64_t x473 = UINT64_MAX;
static int64_t x474 = INT64_MIN;
int32_t x475 = INT32_MIN;
static uint32_t x480 = 53775726U;
int32_t t120 = -331;
int32_t x486 = INT32_MAX;
int32_t x489 = INT32_MIN;
int32_t t123 = -22922292;
static uint64_t x499 = UINT64_MAX;
static int32_t x502 = -56;
static int64_t x503 = INT64_MAX;
int16_t x509 = INT16_MAX;
volatile uint32_t x512 = 26U;
int32_t x515 = INT32_MIN;
uint8_t x519 = 0U;
static int64_t x522 = INT64_MIN;
uint8_t x523 = 5U;
volatile uint8_t x524 = UINT8_MAX;
static int64_t x526 = INT64_MAX;
uint8_t x532 = UINT8_MAX;
int8_t x533 = INT8_MIN;
int32_t x537 = -1;
volatile uint64_t x545 = 1047100LLU;
int8_t x548 = -1;
int16_t x552 = INT16_MIN;
int32_t x559 = 3718;
volatile uint8_t x560 = 15U;
volatile uint16_t x561 = 32349U;
uint64_t x566 = 504696926511348LLU;
volatile int8_t x572 = INT8_MIN;
volatile int32_t t142 = -4;
int16_t x577 = INT16_MAX;
volatile int32_t t144 = 10017760;
uint8_t x582 = 17U;
uint16_t x583 = 98U;
int8_t x589 = 0;
int64_t x600 = INT64_MIN;
int32_t x604 = INT32_MAX;
int32_t t150 = 653199503;
int32_t t151 = -7;
static int32_t x618 = -1;
static int32_t x624 = INT32_MIN;
int32_t t155 = -320;
static int64_t x625 = INT64_MAX;
int64_t x633 = -1LL;
volatile int64_t x635 = INT64_MIN;
int32_t t158 = -116;
uint64_t x637 = 24LLU;
int32_t t159 = 514905;
int32_t x642 = -1;
volatile int32_t t161 = -500272;
int8_t x653 = -1;
uint64_t x658 = UINT64_MAX;
static uint16_t x663 = 207U;
volatile int64_t x673 = INT64_MAX;
static uint64_t x683 = 577LLU;
volatile int8_t x692 = 1;
static volatile int32_t t173 = 5551;
static int64_t x697 = INT64_MAX;
static int64_t x701 = -1LL;
int8_t x703 = INT8_MAX;
volatile int64_t x710 = INT64_MIN;
volatile int8_t x711 = INT8_MAX;
uint16_t x718 = UINT16_MAX;
int32_t t179 = 4248815;
volatile int64_t x726 = -1LL;
volatile int32_t t182 = 150094026;
int8_t x744 = 0;
int32_t t185 = -3;
int32_t x749 = INT32_MIN;
static int16_t x750 = -1;
volatile int64_t x756 = INT64_MIN;
int16_t x771 = INT16_MAX;
static uint64_t x776 = 173394LLU;
static uint32_t x781 = 150U;
static uint32_t x788 = 5320829U;
int8_t x794 = -1;


void f0(void) {
    	int64_t x1 = -2LL;
	volatile int16_t x2 = 11983;
	static int64_t x3 = -1LL;
	volatile int8_t x4 = -1;
	int32_t t0 = -3471304;

    t0 = ((x1>x2)&(x3==x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = -1;
	int16_t x7 = INT16_MIN;
	uint64_t x8 = 550701661652691240LLU;
	volatile int32_t t1 = 891;

    t1 = ((x5>x6)&(x7==x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint16_t x9 = 391U;
	volatile int64_t x11 = 308117785411184LL;
	volatile uint16_t x12 = 17687U;
	static int32_t t2 = 167740;

    t2 = ((x9>x10)&(x11==x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int64_t x13 = INT64_MIN;
	uint64_t x14 = 694336567LLU;
	static int64_t x15 = -1LL;
	static int16_t x16 = -1;
	static volatile int32_t t3 = -1935;

    t3 = ((x13>x14)&(x15==x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x17 = UINT32_MAX;
	static uint8_t x19 = 1U;
	uint64_t x20 = 2627232287LLU;
	volatile int32_t t4 = -385190043;

    t4 = ((x17>x18)&(x19==x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x22 = -1LL;
	volatile int32_t t5 = 161162;

    t5 = ((x21>x22)&(x23==x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = INT32_MIN;
	volatile uint32_t x26 = 203368U;
	uint64_t x27 = 197083675LLU;
	uint8_t x28 = 22U;
	volatile int32_t t6 = -274193;

    t6 = ((x25>x26)&(x27==x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int32_t x29 = -1;
	int32_t x30 = INT32_MIN;
	int32_t x32 = INT32_MIN;
	static volatile int32_t t7 = -100005;

    t7 = ((x29>x30)&(x31==x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int64_t x33 = -1369LL;
	volatile int8_t x35 = -1;
	volatile int8_t x36 = 7;

    t8 = ((x33>x34)&(x35==x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x38 = UINT8_MAX;
	volatile int32_t x39 = -22;
	static int64_t x40 = INT64_MIN;
	int32_t t9 = 29250336;

    t9 = ((x37>x38)&(x39==x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x42 = INT8_MIN;
	int32_t x43 = -1;
	uint32_t x44 = UINT32_MAX;
	volatile int32_t t10 = -12055;

    t10 = ((x41>x42)&(x43==x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x45 = -1;
	int8_t x47 = INT8_MIN;
	int8_t x48 = -1;

    t11 = ((x45>x46)&(x47==x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = -114277879195148197LL;
	int16_t x50 = -1;
	int64_t x51 = INT64_MIN;
	int64_t x52 = 6643651452LL;
	static int32_t t12 = -1;

    t12 = ((x49>x50)&(x51==x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x53 = -9;
	int8_t x55 = -6;
	volatile int32_t x56 = INT32_MIN;
	static volatile int32_t t13 = -2821208;

    t13 = ((x53>x54)&(x55==x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = -1LL;
	int8_t x58 = INT8_MIN;
	int8_t x59 = -1;
	volatile int64_t x60 = 1607245857637296733LL;
	int32_t t14 = -1446;

    t14 = ((x57>x58)&(x59==x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = INT16_MAX;
	int32_t x63 = -1;
	uint64_t x64 = 27146068617245230LLU;
	volatile int32_t t15 = 164656654;

    t15 = ((x61>x62)&(x63==x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x65 = INT64_MAX;
	int32_t x66 = -66690934;
	uint64_t x67 = 43089464430LLU;
	static volatile int32_t t16 = -27653;

    t16 = ((x65>x66)&(x67==x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = INT16_MAX;
	static int32_t x70 = INT32_MAX;
	static int8_t x71 = -1;
	uint64_t x72 = UINT64_MAX;
	volatile int32_t t17 = -7;

    t17 = ((x69>x70)&(x71==x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = INT16_MAX;
	int32_t x75 = -1;
	static int32_t x76 = -1;
	volatile int32_t t18 = 22;

    t18 = ((x73>x74)&(x75==x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x77 = UINT16_MAX;
	uint32_t x78 = 374813493U;
	uint8_t x79 = UINT8_MAX;
	volatile uint64_t x80 = 1862045940794422815LLU;
	volatile int32_t t19 = -13310170;

    t19 = ((x77>x78)&(x79==x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile uint64_t x81 = 15838222LLU;
	uint32_t x83 = 15U;
	uint16_t x84 = 22U;
	int32_t t20 = 6066;

    t20 = ((x81>x82)&(x83==x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x85 = INT32_MIN;
	static int32_t x86 = INT32_MAX;
	int64_t x87 = INT64_MIN;
	volatile int16_t x88 = INT16_MIN;
	int32_t t21 = 302804655;

    t21 = ((x85>x86)&(x87==x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x89 = 9U;
	int64_t x90 = INT64_MAX;
	uint8_t x91 = 28U;
	static uint8_t x92 = 3U;
	int32_t t22 = -392048773;

    t22 = ((x89>x90)&(x91==x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x94 = INT64_MIN;
	uint32_t x95 = UINT32_MAX;
	static int32_t x96 = -1;
	static int32_t t23 = -5867;

    t23 = ((x93>x94)&(x95==x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x98 = INT64_MAX;
	volatile uint64_t x100 = 172059503908LLU;

    t24 = ((x97>x98)&(x99==x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x101 = UINT32_MAX;
	uint8_t x102 = 3U;
	int64_t x103 = -35862675LL;
	int16_t x104 = INT16_MIN;
	volatile int32_t t25 = 1788;

    t25 = ((x101>x102)&(x103==x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x105 = UINT64_MAX;
	int8_t x106 = INT8_MAX;
	uint32_t x107 = 3U;
	int8_t x108 = -1;

    t26 = ((x105>x106)&(x107==x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint64_t x109 = 108195506795914LLU;
	int8_t x110 = INT8_MIN;
	uint64_t x111 = UINT64_MAX;
	uint8_t x112 = 14U;
	int32_t t27 = 85264752;

    t27 = ((x109>x110)&(x111==x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int32_t x114 = INT32_MAX;
	int32_t t28 = -357;

    t28 = ((x113>x114)&(x115==x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x118 = INT16_MIN;
	volatile int32_t x119 = -1;
	int64_t x120 = INT64_MIN;
	int32_t t29 = -28008109;

    t29 = ((x117>x118)&(x119==x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x121 = -58;
	volatile int32_t t30 = 30136445;

    t30 = ((x121>x122)&(x123==x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint8_t x125 = UINT8_MAX;
	uint8_t x127 = 0U;
	int64_t x128 = INT64_MIN;
	int32_t t31 = -14544477;

    t31 = ((x125>x126)&(x127==x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x129 = 462563LLU;
	int16_t x130 = INT16_MIN;
	uint32_t x131 = 7116828U;
	int32_t t32 = -2473;

    t32 = ((x129>x130)&(x131==x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x133 = UINT8_MAX;
	static int8_t x134 = INT8_MIN;
	static uint64_t x136 = 881921516254014LLU;
	int32_t t33 = 30423450;

    t33 = ((x133>x134)&(x135==x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x138 = 361105338U;
	int16_t x139 = INT16_MIN;
	static uint8_t x140 = 1U;
	int32_t t34 = 0;

    t34 = ((x137>x138)&(x139==x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x141 = INT32_MIN;
	uint16_t x143 = UINT16_MAX;
	uint64_t x144 = UINT64_MAX;
	static volatile int32_t t35 = -27567;

    t35 = ((x141>x142)&(x143==x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int16_t x145 = INT16_MAX;
	int8_t x146 = 14;
	int16_t x148 = -1;

    t36 = ((x145>x146)&(x147==x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x149 = INT8_MIN;
	uint16_t x150 = 53U;
	int64_t x152 = INT64_MIN;

    t37 = ((x149>x150)&(x151==x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x154 = 211;
	int64_t x155 = INT64_MIN;
	uint64_t x156 = 71839114295659LLU;

    t38 = ((x153>x154)&(x155==x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int32_t x157 = -1;
	int16_t x158 = -1;
	uint16_t x159 = 2U;
	int8_t x160 = 26;
	volatile int32_t t39 = -149288404;

    t39 = ((x157>x158)&(x159==x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t x161 = INT64_MAX;
	volatile uint64_t x162 = 37293083212452LLU;
	static int32_t x163 = INT32_MAX;

    t40 = ((x161>x162)&(x163==x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x166 = -2;
	uint32_t x167 = 461U;
	int16_t x168 = INT16_MAX;

    t41 = ((x165>x166)&(x167==x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x169 = 225;
	volatile int64_t x170 = INT64_MIN;
	static int32_t x171 = 413297920;
	int64_t x172 = 57166424531LL;
	int32_t t42 = -18761443;

    t42 = ((x169>x170)&(x171==x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint64_t x174 = UINT64_MAX;
	int16_t x175 = INT16_MIN;
	uint32_t x176 = 1566662U;
	int32_t t43 = 58643;

    t43 = ((x173>x174)&(x175==x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x177 = 9U;
	int32_t x179 = -3;
	volatile int32_t x180 = 1726236;

    t44 = ((x177>x178)&(x179==x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x181 = INT32_MAX;
	int16_t x182 = -1;
	uint16_t x183 = 545U;
	int32_t x184 = INT32_MAX;
	int32_t t45 = -1213;

    t45 = ((x181>x182)&(x183==x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x185 = -1LL;
	int16_t x186 = -397;
	int32_t x187 = 22;
	static int32_t x188 = INT32_MIN;
	int32_t t46 = 0;

    t46 = ((x185>x186)&(x187==x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = INT16_MIN;
	uint16_t x190 = UINT16_MAX;
	int16_t x191 = INT16_MAX;
	static volatile int16_t x192 = INT16_MAX;
	volatile int32_t t47 = -101161;

    t47 = ((x189>x190)&(x191==x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x193 = UINT16_MAX;
	int8_t x194 = INT8_MAX;
	uint16_t x195 = 4359U;
	int8_t x196 = 26;
	volatile int32_t t48 = 1634370;

    t48 = ((x193>x194)&(x195==x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x197 = 68497402LLU;
	int64_t x198 = -6696833LL;
	static int8_t x199 = -1;
	int16_t x200 = INT16_MIN;
	static int32_t t49 = -1349;

    t49 = ((x197>x198)&(x199==x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x201 = -26;
	static int16_t x202 = 193;
	int64_t x203 = 380931LL;
	uint8_t x204 = UINT8_MAX;
	int32_t t50 = -1452;

    t50 = ((x201>x202)&(x203==x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x205 = 1;
	int16_t x206 = 2;
	volatile uint32_t x207 = 428634882U;
	uint32_t x208 = 24U;
	int32_t t51 = -155579295;

    t51 = ((x205>x206)&(x207==x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x209 = INT32_MAX;
	int16_t x210 = INT16_MIN;
	uint8_t x211 = 15U;
	int8_t x212 = 55;
	volatile int32_t t52 = 6;

    t52 = ((x209>x210)&(x211==x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x215 = INT64_MAX;
	int32_t t53 = 978679689;

    t53 = ((x213>x214)&(x215==x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x217 = INT8_MAX;
	uint32_t x218 = 2348770U;
	int64_t x219 = INT64_MIN;
	volatile uint16_t x220 = 151U;
	int32_t t54 = -12464864;

    t54 = ((x217>x218)&(x219==x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x221 = -3;
	volatile int8_t x222 = INT8_MIN;
	int16_t x223 = -3268;
	int64_t x224 = INT64_MAX;
	volatile int32_t t55 = 1;

    t55 = ((x221>x222)&(x223==x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x225 = INT8_MIN;
	uint16_t x226 = 250U;
	int8_t x228 = INT8_MAX;
	volatile int32_t t56 = 1947943;

    t56 = ((x225>x226)&(x227==x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x230 = 12371U;
	int32_t t57 = 255159;

    t57 = ((x229>x230)&(x231==x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint8_t x233 = 1U;
	static int8_t x234 = INT8_MIN;
	uint32_t x236 = 719841543U;

    t58 = ((x233>x234)&(x235==x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x239 = 406LL;
	static volatile int32_t t59 = 0;

    t59 = ((x237>x238)&(x239==x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x241 = 8LLU;
	int64_t x242 = -13852026514LL;
	int64_t x243 = INT64_MAX;
	uint64_t x244 = 11153414LLU;
	int32_t t60 = 3;

    t60 = ((x241>x242)&(x243==x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x245 = 2;
	int64_t x246 = -56645322276669077LL;
	uint64_t x247 = 14581363377LLU;
	volatile int32_t t61 = 25;

    t61 = ((x245>x246)&(x247==x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x249 = INT32_MIN;
	int64_t x250 = INT64_MIN;
	int64_t x251 = -110767642534273LL;
	static uint8_t x252 = 2U;
	volatile int32_t t62 = -14479803;

    t62 = ((x249>x250)&(x251==x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint16_t x253 = 0U;
	int8_t x254 = INT8_MIN;
	int16_t x255 = INT16_MIN;
	uint64_t x256 = UINT64_MAX;
	int32_t t63 = 8;

    t63 = ((x253>x254)&(x255==x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x257 = 1LL;
	uint8_t x258 = UINT8_MAX;
	int32_t x259 = -2359;
	volatile int32_t x260 = 1;
	int32_t t64 = -1462;

    t64 = ((x257>x258)&(x259==x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x261 = 66U;
	uint32_t x262 = 594U;
	static int32_t x263 = INT32_MIN;
	volatile int32_t t65 = 884;

    t65 = ((x261>x262)&(x263==x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint16_t x265 = UINT16_MAX;
	int8_t x266 = INT8_MIN;
	int8_t x267 = INT8_MIN;
	uint32_t x268 = 4U;
	static int32_t t66 = -28554;

    t66 = ((x265>x266)&(x267==x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x269 = INT64_MIN;
	static volatile uint32_t x270 = 430499961U;
	volatile int8_t x271 = INT8_MIN;
	int8_t x272 = INT8_MAX;
	static int32_t t67 = -87526;

    t67 = ((x269>x270)&(x271==x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x273 = INT16_MIN;
	int32_t x274 = -1;
	uint32_t x275 = 1U;
	int32_t x276 = -281850;

    t68 = ((x273>x274)&(x275==x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x278 = 117U;
	uint64_t x279 = 1019LLU;
	volatile int32_t t69 = 570984;

    t69 = ((x277>x278)&(x279==x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x282 = INT32_MIN;
	int32_t x283 = INT32_MAX;
	int8_t x284 = INT8_MAX;
	int32_t t70 = -29774597;

    t70 = ((x281>x282)&(x283==x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x285 = UINT8_MAX;
	uint32_t x287 = 106U;
	int64_t x288 = INT64_MIN;
	static int32_t t71 = 12172;

    t71 = ((x285>x286)&(x287==x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x289 = INT16_MIN;
	volatile int16_t x290 = INT16_MIN;
	uint64_t x291 = UINT64_MAX;
	int32_t x292 = INT32_MAX;
	static volatile int32_t t72 = 2454;

    t72 = ((x289>x290)&(x291==x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile int8_t x293 = INT8_MIN;
	int8_t x294 = -1;
	volatile int32_t x296 = INT32_MIN;
	volatile int32_t t73 = -291;

    t73 = ((x293>x294)&(x295==x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x298 = -5;
	volatile int32_t x300 = -399322;
	int32_t t74 = -14;

    t74 = ((x297>x298)&(x299==x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x301 = INT8_MIN;
	volatile int32_t x302 = INT32_MIN;
	int16_t x303 = INT16_MIN;
	volatile int32_t t75 = 1047;

    t75 = ((x301>x302)&(x303==x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x305 = INT64_MIN;
	volatile uint32_t x306 = UINT32_MAX;
	int8_t x307 = -44;
	int16_t x308 = -1;
	int32_t t76 = -497;

    t76 = ((x305>x306)&(x307==x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x310 = 192445124258407120LLU;
	uint16_t x311 = UINT16_MAX;
	static uint8_t x312 = UINT8_MAX;

    t77 = ((x309>x310)&(x311==x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x313 = 3U;
	int16_t x314 = -1;
	int8_t x315 = -1;
	int64_t x316 = 1556LL;
	volatile int32_t t78 = -35039977;

    t78 = ((x313>x314)&(x315==x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x317 = INT16_MIN;
	static int32_t x318 = -130796921;
	uint32_t x320 = UINT32_MAX;
	volatile int32_t t79 = -1777;

    t79 = ((x317>x318)&(x319==x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x321 = INT16_MAX;
	int8_t x322 = INT8_MAX;
	volatile int16_t x323 = 506;
	static int64_t x324 = 3438024LL;
	int32_t t80 = 1522;

    t80 = ((x321>x322)&(x323==x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x325 = INT32_MIN;
	int64_t x327 = -29LL;
	static int64_t x328 = -739LL;

    t81 = ((x325>x326)&(x327==x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x329 = 30;
	volatile int16_t x332 = 7825;
	volatile int32_t t82 = -2737676;

    t82 = ((x329>x330)&(x331==x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x333 = 78944585LL;
	int32_t x334 = 9;
	static int64_t x335 = INT64_MIN;
	volatile int32_t t83 = 3662;

    t83 = ((x333>x334)&(x335==x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x337 = INT16_MAX;
	int64_t x338 = INT64_MAX;
	static uint16_t x339 = 7107U;
	static volatile int32_t t84 = -11071664;

    t84 = ((x337>x338)&(x339==x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint8_t x341 = UINT8_MAX;
	static int64_t x342 = 331433477581LL;
	uint8_t x343 = 98U;
	volatile int32_t x344 = -1;

    t85 = ((x341>x342)&(x343==x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x347 = -1LL;
	static volatile int16_t x348 = 13;
	int32_t t86 = -574616957;

    t86 = ((x345>x346)&(x347==x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x349 = -1;
	int8_t x350 = INT8_MIN;
	static int16_t x351 = -4;
	int16_t x352 = INT16_MIN;

    t87 = ((x349>x350)&(x351==x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x354 = INT32_MIN;
	int16_t x356 = 9;
	volatile int32_t t88 = -25;

    t88 = ((x353>x354)&(x355==x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x357 = INT8_MIN;
	int32_t x359 = -1;
	volatile uint32_t x360 = 503925821U;
	int32_t t89 = -71;

    t89 = ((x357>x358)&(x359==x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint64_t x361 = 31241355585LLU;
	int64_t x363 = INT64_MAX;
	static int16_t x364 = -4325;
	volatile int32_t t90 = 1411452;

    t90 = ((x361>x362)&(x363==x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int8_t x366 = INT8_MIN;
	static int16_t x367 = INT16_MAX;
	volatile int16_t x368 = INT16_MIN;

    t91 = ((x365>x366)&(x367==x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x369 = 106742U;
	uint8_t x370 = 90U;
	int64_t x372 = -1LL;

    t92 = ((x369>x370)&(x371==x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x373 = -6114930LL;
	int8_t x374 = INT8_MIN;
	uint32_t x375 = UINT32_MAX;
	uint8_t x376 = 35U;
	static int32_t t93 = -3397;

    t93 = ((x373>x374)&(x375==x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x377 = 1U;
	volatile int32_t x378 = INT32_MAX;
	volatile int64_t x379 = INT64_MIN;
	int32_t x380 = 3;
	int32_t t94 = 96;

    t94 = ((x377>x378)&(x379==x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x381 = INT8_MIN;
	int16_t x382 = 33;
	uint64_t x383 = UINT64_MAX;
	int64_t x384 = -1LL;

    t95 = ((x381>x382)&(x383==x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x386 = 4;
	int32_t x387 = 560;
	int32_t x388 = INT32_MAX;
	volatile int32_t t96 = 7;

    t96 = ((x385>x386)&(x387==x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x391 = INT16_MIN;
	static int64_t x392 = -1LL;
	volatile int32_t t97 = -31691;

    t97 = ((x389>x390)&(x391==x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x393 = INT8_MIN;
	int8_t x394 = INT8_MAX;
	uint8_t x395 = UINT8_MAX;
	static int64_t x396 = INT64_MIN;
	volatile int32_t t98 = 11439216;

    t98 = ((x393>x394)&(x395==x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x397 = INT32_MIN;
	int64_t x398 = 10579594967609420LL;
	uint8_t x400 = 2U;
	volatile int32_t t99 = -397736980;

    t99 = ((x397>x398)&(x399==x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x401 = INT64_MAX;
	uint64_t x402 = UINT64_MAX;
	uint16_t x403 = 5979U;
	volatile int32_t t100 = -764;

    t100 = ((x401>x402)&(x403==x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x405 = INT8_MIN;
	uint64_t x406 = UINT64_MAX;
	uint8_t x407 = 79U;
	int64_t x408 = -1LL;

    t101 = ((x405>x406)&(x407==x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x410 = INT64_MIN;
	volatile int8_t x412 = INT8_MAX;
	int32_t t102 = 825833;

    t102 = ((x409>x410)&(x411==x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x413 = INT16_MIN;
	uint16_t x414 = 1U;
	int32_t x415 = INT32_MIN;
	int16_t x416 = -15000;
	int32_t t103 = -11512446;

    t103 = ((x413>x414)&(x415==x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int16_t x417 = -1;
	volatile int64_t x418 = INT64_MIN;
	uint16_t x419 = 60U;
	uint32_t x420 = UINT32_MAX;
	static volatile int32_t t104 = 14139204;

    t104 = ((x417>x418)&(x419==x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int16_t x421 = INT16_MIN;
	volatile uint64_t x422 = 5880535562982299LLU;
	volatile uint64_t x424 = 12427567704970919LLU;
	volatile int32_t t105 = -799244699;

    t105 = ((x421>x422)&(x423==x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x425 = INT16_MIN;
	static int8_t x427 = -24;
	volatile int32_t x428 = 213487244;
	static volatile int32_t t106 = 121287;

    t106 = ((x425>x426)&(x427==x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x430 = INT32_MAX;
	uint32_t x431 = 8963394U;
	uint32_t x432 = 14U;
	volatile int32_t t107 = 2983;

    t107 = ((x429>x430)&(x431==x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x433 = -1LL;
	static int8_t x435 = 25;
	int32_t t108 = -249782738;

    t108 = ((x433>x434)&(x435==x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x437 = INT64_MIN;
	uint16_t x438 = 90U;
	uint32_t x439 = UINT32_MAX;
	volatile int32_t x440 = -1;

    t109 = ((x437>x438)&(x439==x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x442 = INT16_MIN;

    t110 = ((x441>x442)&(x443==x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint32_t x445 = UINT32_MAX;
	static int64_t x448 = 30713419040929LL;
	volatile int32_t t111 = 4924851;

    t111 = ((x445>x446)&(x447==x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x450 = -4;
	int64_t x451 = 468826431LL;
	int16_t x452 = INT16_MAX;
	static int32_t t112 = 14873926;

    t112 = ((x449>x450)&(x451==x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x453 = INT16_MIN;
	uint32_t x454 = 77021589U;
	uint16_t x455 = UINT16_MAX;
	uint16_t x456 = 52U;
	int32_t t113 = -131;

    t113 = ((x453>x454)&(x455==x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x457 = -2261;
	int16_t x458 = 14821;
	int32_t x460 = INT32_MIN;

    t114 = ((x457>x458)&(x459==x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x461 = INT16_MIN;
	static volatile int64_t x462 = INT64_MIN;
	uint16_t x463 = 8U;
	uint16_t x464 = 0U;
	int32_t t115 = -12508341;

    t115 = ((x461>x462)&(x463==x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x466 = INT32_MIN;
	int32_t x467 = 5132155;
	uint64_t x468 = UINT64_MAX;
	int32_t t116 = 11289217;

    t116 = ((x465>x466)&(x467==x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int16_t x470 = -1;
	uint8_t x471 = 0U;
	volatile int32_t x472 = INT32_MAX;
	int32_t t117 = -228;

    t117 = ((x469>x470)&(x471==x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x476 = INT64_MAX;
	static volatile int32_t t118 = -160384149;

    t118 = ((x473>x474)&(x475==x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x477 = -37;
	uint8_t x478 = 10U;
	int32_t x479 = INT32_MIN;
	static int32_t t119 = -867;

    t119 = ((x477>x478)&(x479==x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x481 = INT16_MIN;
	int8_t x482 = INT8_MAX;
	uint16_t x483 = 510U;
	uint16_t x484 = 27U;

    t120 = ((x481>x482)&(x483==x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = 11;
	static int16_t x487 = INT16_MIN;
	static int32_t x488 = -1;
	int32_t t121 = 2940769;

    t121 = ((x485>x486)&(x487==x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int16_t x490 = -1;
	static int32_t x491 = INT32_MIN;
	int32_t x492 = INT32_MIN;
	volatile int32_t t122 = 5241329;

    t122 = ((x489>x490)&(x491==x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x493 = -1;
	int16_t x494 = -1;
	volatile int8_t x495 = 0;
	uint32_t x496 = 627U;

    t123 = ((x493>x494)&(x495==x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x497 = -1;
	int8_t x498 = INT8_MIN;
	int8_t x500 = 1;
	static int32_t t124 = 3887737;

    t124 = ((x497>x498)&(x499==x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x501 = UINT8_MAX;
	static int16_t x504 = -846;
	static volatile int32_t t125 = 11;

    t125 = ((x501>x502)&(x503==x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int64_t x505 = INT64_MIN;
	uint32_t x506 = UINT32_MAX;
	volatile int64_t x507 = INT64_MAX;
	uint16_t x508 = UINT16_MAX;
	static int32_t t126 = 2234;

    t126 = ((x505>x506)&(x507==x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x510 = -87;
	int8_t x511 = INT8_MIN;
	volatile int32_t t127 = 2;

    t127 = ((x509>x510)&(x511==x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x513 = UINT64_MAX;
	int32_t x514 = INT32_MIN;
	uint16_t x516 = 1U;
	volatile int32_t t128 = -12911575;

    t128 = ((x513>x514)&(x515==x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x517 = 66720U;
	static int8_t x518 = -1;
	uint8_t x520 = 26U;
	int32_t t129 = -26;

    t129 = ((x517>x518)&(x519==x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int16_t x521 = INT16_MAX;
	volatile int32_t t130 = 16206885;

    t130 = ((x521>x522)&(x523==x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint8_t x525 = 49U;
	int16_t x527 = -1726;
	uint64_t x528 = 2665939305971LLU;
	volatile int32_t t131 = 801795347;

    t131 = ((x525>x526)&(x527==x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x529 = 7U;
	static uint32_t x530 = UINT32_MAX;
	uint64_t x531 = 11004717LLU;
	static volatile int32_t t132 = 155126;

    t132 = ((x529>x530)&(x531==x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x534 = INT32_MAX;
	int64_t x535 = -1LL;
	uint32_t x536 = 977183831U;
	volatile int32_t t133 = 21547;

    t133 = ((x533>x534)&(x535==x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x538 = 1517555252466016LLU;
	int8_t x539 = 1;
	int32_t x540 = INT32_MAX;
	int32_t t134 = 938645;

    t134 = ((x537>x538)&(x539==x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x541 = INT32_MAX;
	static int64_t x542 = -118LL;
	uint16_t x543 = 2118U;
	uint16_t x544 = 1U;
	int32_t t135 = 2185;

    t135 = ((x541>x542)&(x543==x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x546 = INT16_MIN;
	int8_t x547 = -1;
	int32_t t136 = -13662;

    t136 = ((x545>x546)&(x547==x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x549 = UINT64_MAX;
	int32_t x550 = -19621;
	static int8_t x551 = -1;
	int32_t t137 = 20540200;

    t137 = ((x549>x550)&(x551==x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x553 = -1;
	static uint8_t x554 = 0U;
	uint32_t x555 = 8461900U;
	int32_t x556 = -5;
	volatile int32_t t138 = 1894;

    t138 = ((x553>x554)&(x555==x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int32_t x557 = INT32_MIN;
	int16_t x558 = INT16_MIN;
	volatile int32_t t139 = -29628;

    t139 = ((x557>x558)&(x559==x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int8_t x562 = 0;
	int64_t x563 = INT64_MIN;
	volatile uint16_t x564 = UINT16_MAX;
	int32_t t140 = 178;

    t140 = ((x561>x562)&(x563==x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x565 = 56425085;
	int64_t x567 = -502761645LL;
	int8_t x568 = INT8_MIN;
	volatile int32_t t141 = -109447116;

    t141 = ((x565>x566)&(x567==x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x569 = 2;
	int16_t x570 = -150;
	uint64_t x571 = 56362385LLU;

    t142 = ((x569>x570)&(x571==x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int64_t x573 = INT64_MIN;
	int8_t x574 = INT8_MIN;
	uint64_t x575 = 31776LLU;
	uint32_t x576 = 1829135709U;
	int32_t t143 = -653;

    t143 = ((x573>x574)&(x575==x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x578 = INT8_MIN;
	int8_t x579 = -1;
	static uint8_t x580 = UINT8_MAX;

    t144 = ((x577>x578)&(x579==x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile int64_t x581 = INT64_MIN;
	uint16_t x584 = 9870U;
	int32_t t145 = -214124;

    t145 = ((x581>x582)&(x583==x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x585 = 1;
	static int8_t x586 = -12;
	static int32_t x587 = INT32_MIN;
	int64_t x588 = INT64_MAX;
	int32_t t146 = -5979026;

    t146 = ((x585>x586)&(x587==x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x590 = INT64_MAX;
	int8_t x591 = -1;
	int64_t x592 = INT64_MIN;
	static int32_t t147 = -14;

    t147 = ((x589>x590)&(x591==x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x593 = INT16_MIN;
	static int32_t x594 = INT32_MAX;
	volatile int16_t x595 = 0;
	static int32_t x596 = INT32_MIN;
	static volatile int32_t t148 = -62943;

    t148 = ((x593>x594)&(x595==x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint32_t x597 = 449553U;
	int32_t x598 = 3;
	int8_t x599 = INT8_MIN;
	volatile int32_t t149 = 121;

    t149 = ((x597>x598)&(x599==x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x601 = 2945990U;
	static uint32_t x602 = UINT32_MAX;
	int16_t x603 = 347;

    t150 = ((x601>x602)&(x603==x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x605 = INT16_MIN;
	volatile int16_t x606 = INT16_MAX;
	static uint8_t x607 = 0U;
	int8_t x608 = 1;

    t151 = ((x605>x606)&(x607==x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x609 = INT8_MIN;
	uint8_t x610 = 2U;
	volatile int16_t x611 = -1;
	int16_t x612 = INT16_MIN;
	static volatile int32_t t152 = 577395;

    t152 = ((x609>x610)&(x611==x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x613 = INT8_MIN;
	uint64_t x614 = 1712321462597LLU;
	int32_t x615 = 1;
	uint8_t x616 = UINT8_MAX;
	static int32_t t153 = -358525;

    t153 = ((x613>x614)&(x615==x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x617 = 1U;
	int16_t x619 = INT16_MIN;
	static int16_t x620 = -1;
	int32_t t154 = 26;

    t154 = ((x617>x618)&(x619==x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int16_t x621 = INT16_MAX;
	uint16_t x622 = UINT16_MAX;
	int8_t x623 = INT8_MAX;

    t155 = ((x621>x622)&(x623==x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static int64_t x626 = INT64_MIN;
	volatile int32_t x627 = INT32_MIN;
	int64_t x628 = -1LL;
	volatile int32_t t156 = -70;

    t156 = ((x625>x626)&(x627==x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x629 = -1LL;
	int8_t x630 = INT8_MIN;
	uint16_t x631 = 200U;
	int8_t x632 = INT8_MIN;
	int32_t t157 = -1;

    t157 = ((x629>x630)&(x631==x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x634 = 0;
	uint64_t x636 = 21777616LLU;

    t158 = ((x633>x634)&(x635==x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x638 = 170132007U;
	static volatile uint32_t x639 = 7683535U;
	uint32_t x640 = UINT32_MAX;

    t159 = ((x637>x638)&(x639==x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint64_t x641 = UINT64_MAX;
	static volatile int64_t x643 = INT64_MIN;
	static int8_t x644 = 30;
	int32_t t160 = -166909;

    t160 = ((x641>x642)&(x643==x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x645 = INT64_MIN;
	int8_t x646 = INT8_MIN;
	uint8_t x647 = UINT8_MAX;
	uint16_t x648 = 21U;

    t161 = ((x645>x646)&(x647==x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x649 = -1LL;
	static volatile int16_t x650 = -1;
	int64_t x651 = INT64_MIN;
	int16_t x652 = 1181;
	int32_t t162 = -2033926;

    t162 = ((x649>x650)&(x651==x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static int8_t x654 = -1;
	uint32_t x655 = 10827124U;
	int64_t x656 = INT64_MAX;
	volatile int32_t t163 = 9392892;

    t163 = ((x653>x654)&(x655==x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x657 = INT32_MIN;
	uint8_t x659 = 1U;
	static uint64_t x660 = 15934884247148426LLU;
	static volatile int32_t t164 = -39488;

    t164 = ((x657>x658)&(x659==x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = INT64_MIN;
	static uint16_t x662 = UINT16_MAX;
	int8_t x664 = INT8_MIN;
	static volatile int32_t t165 = 5805892;

    t165 = ((x661>x662)&(x663==x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x665 = -2;
	static int32_t x666 = INT32_MIN;
	int16_t x667 = INT16_MIN;
	int16_t x668 = -1;
	static volatile int32_t t166 = 1343965;

    t166 = ((x665>x666)&(x667==x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int16_t x669 = INT16_MAX;
	int8_t x670 = -14;
	int64_t x671 = 4261978136433LL;
	uint8_t x672 = UINT8_MAX;
	int32_t t167 = 1;

    t167 = ((x669>x670)&(x671==x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x674 = UINT8_MAX;
	volatile uint16_t x675 = 25401U;
	uint32_t x676 = UINT32_MAX;
	static volatile int32_t t168 = -1262;

    t168 = ((x673>x674)&(x675==x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint64_t x677 = 152717LLU;
	int16_t x678 = -1;
	static int64_t x679 = -1LL;
	uint16_t x680 = 19700U;
	volatile int32_t t169 = 893312;

    t169 = ((x677>x678)&(x679==x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static int32_t x681 = -35928750;
	int64_t x682 = -91952976LL;
	uint16_t x684 = 0U;
	volatile int32_t t170 = 614348219;

    t170 = ((x681>x682)&(x683==x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x685 = INT8_MAX;
	volatile uint64_t x686 = 80539110168LLU;
	static uint8_t x687 = 101U;
	static uint8_t x688 = 94U;
	int32_t t171 = 3555921;

    t171 = ((x685>x686)&(x687==x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x689 = -1;
	volatile int16_t x690 = INT16_MIN;
	uint16_t x691 = UINT16_MAX;
	static volatile int32_t t172 = -8702;

    t172 = ((x689>x690)&(x691==x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int32_t x693 = INT32_MIN;
	int32_t x694 = -1;
	int32_t x695 = INT32_MIN;
	uint8_t x696 = UINT8_MAX;

    t173 = ((x693>x694)&(x695==x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x698 = UINT64_MAX;
	uint64_t x699 = UINT64_MAX;
	static int64_t x700 = -1LL;
	int32_t t174 = 198;

    t174 = ((x697>x698)&(x699==x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x702 = 3U;
	volatile int8_t x704 = -5;
	static volatile int32_t t175 = -56262118;

    t175 = ((x701>x702)&(x703==x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x705 = INT8_MIN;
	volatile int32_t x706 = -1;
	int64_t x707 = 532381006688792LL;
	int8_t x708 = INT8_MAX;
	static int32_t t176 = 67073;

    t176 = ((x705>x706)&(x707==x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x709 = -2224;
	uint8_t x712 = UINT8_MAX;
	int32_t t177 = -1;

    t177 = ((x709>x710)&(x711==x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint64_t x713 = 1945237373LLU;
	uint32_t x714 = 61U;
	int64_t x715 = INT64_MIN;
	static uint32_t x716 = 1051U;
	volatile int32_t t178 = 11221437;

    t178 = ((x713>x714)&(x715==x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x717 = 32;
	uint32_t x719 = 1807000338U;
	volatile int64_t x720 = -82859520753301163LL;

    t179 = ((x717>x718)&(x719==x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x721 = INT32_MIN;
	static int8_t x722 = -1;
	uint32_t x723 = 66736U;
	uint32_t x724 = 1U;
	static volatile int32_t t180 = 8;

    t180 = ((x721>x722)&(x723==x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x725 = INT32_MIN;
	uint8_t x727 = 3U;
	static int32_t x728 = INT32_MIN;
	volatile int32_t t181 = 55734;

    t181 = ((x725>x726)&(x727==x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int16_t x729 = INT16_MIN;
	uint8_t x730 = 1U;
	static int16_t x731 = INT16_MAX;
	int8_t x732 = -1;

    t182 = ((x729>x730)&(x731==x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile int64_t x733 = -2245899379LL;
	int32_t x734 = INT32_MIN;
	uint32_t x735 = 14769770U;
	int32_t x736 = INT32_MIN;
	volatile int32_t t183 = -504106630;

    t183 = ((x733>x734)&(x735==x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x737 = UINT16_MAX;
	int8_t x738 = -1;
	volatile int32_t x739 = 520173;
	volatile int8_t x740 = 0;
	int32_t t184 = 86030;

    t184 = ((x737>x738)&(x739==x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x741 = 18728U;
	uint32_t x742 = 916655U;
	int8_t x743 = -53;

    t185 = ((x741>x742)&(x743==x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x745 = INT16_MIN;
	int8_t x746 = INT8_MIN;
	int8_t x747 = 1;
	static volatile int16_t x748 = 1;
	volatile int32_t t186 = 519964050;

    t186 = ((x745>x746)&(x747==x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x751 = 5U;
	static uint32_t x752 = 1U;
	int32_t t187 = 285;

    t187 = ((x749>x750)&(x751==x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int32_t x753 = -1;
	int16_t x754 = INT16_MIN;
	uint8_t x755 = UINT8_MAX;
	volatile int32_t t188 = 2;

    t188 = ((x753>x754)&(x755==x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x757 = 0;
	uint16_t x758 = 8U;
	int32_t x759 = -1;
	int8_t x760 = -1;
	volatile int32_t t189 = 3607;

    t189 = ((x757>x758)&(x759==x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint16_t x761 = 6928U;
	uint8_t x762 = 11U;
	uint8_t x763 = 0U;
	static volatile uint32_t x764 = 35126U;
	int32_t t190 = -109592923;

    t190 = ((x761>x762)&(x763==x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int32_t x765 = INT32_MIN;
	static uint8_t x766 = UINT8_MAX;
	uint64_t x767 = 2056114415061LLU;
	int32_t x768 = INT32_MAX;
	volatile int32_t t191 = 115072;

    t191 = ((x765>x766)&(x767==x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint8_t x769 = 7U;
	uint32_t x770 = 12U;
	uint16_t x772 = 355U;
	int32_t t192 = -61;

    t192 = ((x769>x770)&(x771==x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x773 = INT8_MIN;
	uint8_t x774 = 5U;
	uint32_t x775 = UINT32_MAX;
	int32_t t193 = -1940363;

    t193 = ((x773>x774)&(x775==x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int32_t x777 = -1;
	static int16_t x778 = 1;
	int64_t x779 = 378369LL;
	uint8_t x780 = 4U;
	static volatile int32_t t194 = 10126600;

    t194 = ((x777>x778)&(x779==x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x782 = 34173487356409632LLU;
	int8_t x783 = INT8_MIN;
	volatile int16_t x784 = 344;
	static volatile int32_t t195 = 2;

    t195 = ((x781>x782)&(x783==x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x785 = UINT16_MAX;
	static uint32_t x786 = UINT32_MAX;
	static uint32_t x787 = UINT32_MAX;
	int32_t t196 = -1173374;

    t196 = ((x785>x786)&(x787==x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x789 = 32141077;
	static volatile int64_t x790 = INT64_MAX;
	int64_t x791 = -1LL;
	volatile int16_t x792 = -1;
	int32_t t197 = 5752;

    t197 = ((x789>x790)&(x791==x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x793 = -350;
	int8_t x795 = 3;
	int64_t x796 = INT64_MIN;
	int32_t t198 = -1;

    t198 = ((x793>x794)&(x795==x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x797 = -6776088LL;
	int8_t x798 = INT8_MIN;
	int16_t x799 = INT16_MIN;
	uint16_t x800 = 0U;
	int32_t t199 = -176;

    t199 = ((x797>x798)&(x799==x800));

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

