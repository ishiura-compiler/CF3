
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

int64_t x8 = -1LL;
int16_t x14 = INT16_MIN;
int32_t t2 = 9;
int16_t x26 = INT16_MAX;
volatile int64_t x37 = INT64_MIN;
int32_t x42 = 18;
int16_t x44 = INT16_MIN;
int8_t x46 = -1;
static volatile int32_t t8 = 1;
int64_t x54 = -1LL;
uint16_t x71 = UINT16_MAX;
int64_t x72 = INT64_MIN;
int32_t x74 = INT32_MIN;
volatile int16_t x80 = INT16_MIN;
int8_t x85 = -30;
uint64_t x89 = UINT64_MAX;
static volatile int32_t x91 = INT32_MAX;
volatile uint64_t t16 = 60963062LLU;
int32_t x99 = -37701889;
int32_t t20 = -118853;
int64_t x115 = INT64_MIN;
int32_t x122 = INT32_MIN;
uint32_t x125 = 30930U;
uint16_t x126 = UINT16_MAX;
int32_t x127 = INT32_MIN;
volatile int64_t x138 = INT64_MIN;
volatile uint64_t x139 = UINT64_MAX;
int64_t x141 = 209750089577161279LL;
static int32_t x144 = INT32_MAX;
int64_t t27 = 1715185622986LL;
uint64_t t28 = 305044876641LLU;
static volatile uint32_t t29 = 287226U;
int8_t x156 = -3;
static uint16_t x158 = 650U;
static int16_t x159 = 3;
volatile int64_t t31 = 1677256LL;
volatile int32_t x170 = -1;
volatile uint64_t x171 = 816253743438584633LLU;
int16_t x174 = -1;
uint8_t x175 = 8U;
static volatile int32_t t35 = -7257308;
volatile uint32_t x180 = 1502U;
volatile int64_t t36 = -8576513897LL;
uint16_t x182 = UINT16_MAX;
static int64_t t37 = -1026051606375597043LL;
static uint64_t x189 = 3355954274397655394LLU;
int16_t x192 = INT16_MIN;
uint32_t x202 = 0U;
static uint8_t x222 = UINT8_MAX;
int32_t t43 = -110;
int32_t x231 = INT32_MIN;
static int32_t t44 = -527808013;
uint8_t x241 = UINT8_MAX;
uint8_t x244 = UINT8_MAX;
uint8_t x254 = 49U;
static int64_t x261 = INT64_MAX;
static int32_t x262 = -229086136;
static volatile int32_t x277 = -26367;
static uint32_t t52 = 197U;
volatile uint64_t t53 = 2555759583LLU;
static int16_t x300 = INT16_MIN;
volatile int32_t x303 = -1;
uint32_t x304 = 33U;
uint8_t x306 = UINT8_MAX;
int16_t x308 = INT16_MIN;
int16_t x311 = INT16_MIN;
volatile int32_t x317 = -51;
int8_t x322 = INT8_MAX;
uint32_t x350 = 503U;
uint8_t x352 = 111U;
static uint64_t x369 = UINT64_MAX;
static volatile uint16_t x372 = 38U;
uint32_t x377 = 1761U;
uint8_t x380 = UINT8_MAX;
volatile uint64_t t78 = 81848877616115673LLU;
static int32_t x413 = -1;
static uint8_t x415 = 4U;
int32_t t79 = -168;
int32_t x418 = -1;
uint32_t t80 = 243U;
int16_t x421 = 324;
uint64_t x428 = 248284651159LLU;
int16_t x441 = -37;
volatile int64_t x444 = INT64_MAX;
int8_t x449 = INT8_MIN;
int8_t x457 = 30;
int8_t x460 = INT8_MIN;
uint8_t x469 = 14U;
uint8_t x472 = UINT8_MAX;
int64_t x474 = INT64_MIN;
volatile uint64_t t92 = 1LLU;
volatile int8_t x477 = INT8_MAX;
int16_t x479 = INT16_MIN;
volatile int32_t t93 = 552;
volatile int8_t x499 = -3;
static int8_t x501 = -6;
int64_t x507 = -1LL;
volatile uint64_t t98 = 32071LLU;
static uint8_t x519 = UINT8_MAX;
uint64_t x550 = 461415228869817LLU;
static int32_t x552 = INT32_MAX;
int32_t x561 = -1;
volatile uint8_t x562 = 2U;
static volatile int32_t x573 = INT32_MIN;
uint64_t t107 = 7LLU;
uint8_t x595 = 91U;
uint8_t x601 = 4U;
uint64_t x602 = 6LLU;
int32_t x607 = -1;
int32_t x608 = INT32_MIN;
volatile int32_t t113 = 998;
int64_t x617 = 145LL;
static int32_t x620 = -1;
int16_t x631 = INT16_MAX;
int64_t x632 = INT64_MAX;
int64_t x640 = INT64_MAX;
static int64_t t119 = -33LL;
volatile int64_t x652 = -1500LL;
static volatile int64_t t120 = -25338LL;
int8_t x655 = -1;
int16_t x660 = INT16_MAX;
int64_t x667 = 126234765947171LL;
volatile int16_t x668 = INT16_MIN;
volatile int64_t t124 = -7LL;
uint32_t x686 = UINT32_MAX;
int64_t x687 = INT64_MAX;
volatile int64_t t127 = -28178081779000504LL;
volatile int32_t t128 = 1409604;
int64_t x693 = 22812837LL;
int64_t t129 = 242661796028739LL;
int16_t x699 = INT16_MAX;
static int64_t x702 = 126566135LL;
uint64_t x709 = 82416655963671869LLU;
static int8_t x710 = -13;
static volatile uint64_t t132 = 716240LLU;
static uint64_t x733 = 29237682806269228LLU;
volatile int64_t x740 = INT64_MAX;
int8_t x752 = 16;
uint32_t t140 = 7631U;
volatile uint32_t t142 = 31U;
uint32_t x763 = UINT32_MAX;
int16_t x767 = INT16_MAX;
uint64_t t145 = 108908LLU;
int8_t x776 = INT8_MAX;
uint64_t x784 = UINT64_MAX;
volatile uint64_t t149 = 50030006308LLU;
volatile uint64_t x791 = 16358661613LLU;
uint16_t x815 = 285U;
int64_t x817 = -6895039232328LL;
int16_t x820 = 118;
int32_t x826 = INT32_MAX;
static volatile int16_t x832 = INT16_MIN;
uint64_t t159 = 321LLU;
uint32_t x837 = 49956U;
static uint8_t x839 = UINT8_MAX;
int8_t x846 = INT8_MIN;
volatile uint32_t t162 = 127446U;
int16_t x850 = INT16_MIN;
volatile uint32_t t163 = 6U;
volatile int8_t x853 = 0;
uint8_t x868 = UINT8_MAX;
volatile int64_t t165 = 883561LL;
int16_t x890 = 1;
int32_t x892 = -6;
static int32_t x912 = INT32_MAX;
int32_t x948 = INT32_MIN;
uint8_t x953 = UINT8_MAX;
static int8_t x959 = INT8_MIN;
int16_t x976 = INT16_MIN;
uint8_t x982 = UINT8_MAX;
static int64_t x983 = -244155054805705LL;
static volatile uint64_t t185 = 440654262LLU;
int8_t x991 = INT8_MAX;
int32_t x992 = INT32_MIN;
volatile int32_t t187 = 15785;
static int64_t x993 = INT64_MIN;
int8_t x1009 = INT8_MIN;
uint8_t x1011 = UINT8_MAX;
uint16_t x1019 = 7371U;
volatile int64_t t193 = 1LL;
uint64_t t194 = 1970LLU;
int16_t x1030 = INT16_MIN;
volatile uint64_t x1031 = 4081394241LLU;
volatile uint64_t t195 = 3483LLU;
int64_t x1037 = INT64_MIN;
uint64_t x1038 = 5075437351LLU;
int32_t x1040 = -48863548;
volatile uint64_t t197 = 129372064065357415LLU;
static int32_t t199 = -1;


void f0(void) {
    	uint16_t x5 = UINT16_MAX;
	static int16_t x6 = INT16_MIN;
	int32_t x7 = -103920;
	volatile int64_t t0 = 126LL;

    t0 = ((x5+x6)*(x7/x8));

    if (t0 != 3405146640LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x13 = UINT64_MAX;
	int8_t x15 = INT8_MIN;
	volatile int16_t x16 = INT16_MIN;
	volatile uint64_t t1 = 200LLU;

    t1 = ((x13+x14)*(x15/x16));

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x17 = 31273U;
	int16_t x18 = -1;
	static int8_t x19 = 0;
	int32_t x20 = INT32_MAX;

    t2 = ((x17+x18)*(x19/x20));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint8_t x25 = 19U;
	int8_t x27 = -1;
	static int16_t x28 = INT16_MIN;
	volatile int32_t t3 = -186;

    t3 = ((x25+x26)*(x27/x28));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint32_t x29 = 727529U;
	int16_t x30 = INT16_MIN;
	int32_t x31 = -1;
	volatile uint32_t x32 = UINT32_MAX;
	uint32_t t4 = 116994U;

    t4 = ((x29+x30)*(x31/x32));

    if (t4 != 694761U) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x33 = -309LL;
	static volatile int32_t x34 = -3068625;
	static volatile int8_t x35 = -8;
	uint32_t x36 = 29342U;
	int64_t t5 = -151346723890LL;

    t5 = ((x33+x34)*(x35/x36));

    if (t5 != -449218283184LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x38 = 11;
	uint8_t x39 = 84U;
	static volatile int32_t x40 = INT32_MIN;
	volatile int64_t t6 = -25129883930740LL;

    t6 = ((x37+x38)*(x39/x40));

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x41 = INT16_MIN;
	int32_t x43 = INT32_MIN;
	int32_t t7 = -50910440;

    t7 = ((x41+x42)*(x43/x44));

    if (t7 != -2146304000) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int32_t x45 = 0;
	volatile int16_t x47 = INT16_MIN;
	int32_t x48 = 39765196;

    t8 = ((x45+x46)*(x47/x48));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x53 = -1LL;
	static int16_t x55 = -7276;
	int64_t x56 = INT64_MAX;
	int64_t t9 = 7LL;

    t9 = ((x53+x54)*(x55/x56));

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint8_t x57 = 0U;
	int64_t x58 = INT64_MIN;
	int8_t x59 = -1;
	volatile int64_t x60 = INT64_MAX;
	volatile int64_t t10 = 118782025481660680LL;

    t10 = ((x57+x58)*(x59/x60));

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x69 = INT16_MIN;
	uint64_t x70 = UINT64_MAX;
	volatile uint64_t t11 = 87LLU;

    t11 = ((x69+x70)*(x71/x72));

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x73 = INT64_MAX;
	int64_t x75 = -1LL;
	static int16_t x76 = -2;
	volatile int64_t t12 = -543551416752702491LL;

    t12 = ((x73+x74)*(x75/x76));

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x77 = INT32_MIN;
	uint32_t x78 = 787704260U;
	int8_t x79 = 8;
	volatile uint32_t t13 = 183283U;

    t13 = ((x77+x78)*(x79/x80));

    if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x81 = INT32_MIN;
	int32_t x82 = INT32_MAX;
	int32_t x83 = INT32_MAX;
	int32_t x84 = -1;
	int32_t t14 = INT32_MAX;

    t14 = ((x81+x82)*(x83/x84));

    if (t14 != INT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x86 = -72;
	volatile uint64_t x87 = UINT64_MAX;
	int16_t x88 = INT16_MIN;
	volatile uint64_t t15 = 1901644650282180245LLU;

    t15 = ((x85+x86)*(x87/x88));

    if (t15 != 18446744073709551514LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x90 = INT32_MIN;
	static uint8_t x92 = 48U;

    t16 = ((x89+x90)*(x91/x92));

    if (t16 != 18350667283045897558LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int64_t x93 = -1LL;
	int16_t x94 = INT16_MIN;
	int16_t x95 = INT16_MAX;
	static int16_t x96 = INT16_MAX;
	int64_t t17 = 3823077LL;

    t17 = ((x93+x94)*(x95/x96));

    if (t17 != -32769LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x97 = 20U;
	volatile int64_t x98 = -1319040LL;
	volatile int16_t x100 = INT16_MIN;
	volatile int64_t t18 = 2LL;

    t18 = ((x97+x98)*(x99/x100));

    if (t18 != -1516873000LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x101 = INT32_MIN;
	uint64_t x102 = 881184528974129040LLU;
	int8_t x103 = -3;
	int16_t x104 = -6484;
	volatile uint64_t t19 = 4028453LLU;

    t19 = ((x101+x102)*(x103/x104));

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x105 = 764U;
	int8_t x106 = 0;
	uint16_t x107 = 30339U;
	static uint8_t x108 = UINT8_MAX;

    t20 = ((x105+x106)*(x107/x108));

    if (t20 != 90152) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x113 = 75410115971LLU;
	uint8_t x114 = UINT8_MAX;
	int64_t x116 = INT64_MIN;
	uint64_t t21 = 106152240579LLU;

    t21 = ((x113+x114)*(x115/x116));

    if (t21 != 75410116226LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x121 = 3U;
	int8_t x123 = INT8_MIN;
	uint64_t x124 = 195575891LLU;
	uint64_t t22 = 53065010241933092LLU;

    t22 = ((x121+x122)*(x123/x124));

    if (t22 != 363241547824696311LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x128 = INT64_MAX;
	volatile int64_t t23 = 1043253306441932729LL;

    t23 = ((x125+x126)*(x127/x128));

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x129 = -1;
	volatile int32_t x130 = 6334508;
	int8_t x131 = 1;
	volatile int32_t x132 = -1;
	int32_t t24 = -1675;

    t24 = ((x129+x130)*(x131/x132));

    if (t24 != -6334507) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x133 = 2150U;
	int64_t x134 = -3522LL;
	int32_t x135 = 215920;
	int64_t x136 = INT64_MIN;
	static int64_t t25 = 9845308023525LL;

    t25 = ((x133+x134)*(x135/x136));

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x137 = 51;
	int64_t x140 = 215637713995LL;
	uint64_t t26 = 7407081987LLU;

    t26 = ((x137+x138)*(x139/x140));

    if (t26 != 9223372041217574531LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x142 = 1U;
	static int16_t x143 = -116;

    t27 = ((x141+x142)*(x143/x144));

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x145 = -1;
	int16_t x146 = -1249;
	uint64_t x147 = 7207941200LLU;
	int8_t x148 = 45;

    t28 = ((x145+x146)*(x147/x148));

    if (t28 != 18446743873488962866LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int16_t x149 = -1;
	int8_t x150 = INT8_MIN;
	uint32_t x151 = 572970U;
	uint32_t x152 = UINT32_MAX;

    t29 = ((x149+x150)*(x151/x152));

    if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x153 = 628LLU;
	static volatile int32_t x154 = 17475998;
	uint8_t x155 = UINT8_MAX;
	uint64_t t30 = 424387219696130LLU;

    t30 = ((x153+x154)*(x155/x156));

    if (t30 != 18446744072224038406LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x157 = 1U;
	int64_t x160 = INT64_MIN;

    t31 = ((x157+x158)*(x159/x160));

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x161 = 3124;
	volatile int32_t x162 = INT32_MIN;
	static int16_t x163 = -2;
	volatile int16_t x164 = INT16_MAX;
	int32_t t32 = -20;

    t32 = ((x161+x162)*(x163/x164));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x165 = INT16_MIN;
	int8_t x166 = INT8_MAX;
	uint64_t x167 = UINT64_MAX;
	int8_t x168 = -57;
	volatile uint64_t t33 = 1178025LLU;

    t33 = ((x165+x166)*(x167/x168));

    if (t33 != 18446744073709518975LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint64_t x169 = UINT64_MAX;
	int8_t x172 = INT8_MIN;
	static uint64_t t34 = 135925413113507960LLU;

    t34 = ((x169+x170)*(x171/x172));

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x173 = 2;
	static int32_t x176 = 1;

    t35 = ((x173+x174)*(x175/x176));

    if (t35 != 8) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x177 = -1LL;
	int16_t x178 = -6;
	volatile uint16_t x179 = 152U;

    t36 = ((x177+x178)*(x179/x180));

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x181 = 561LL;
	int8_t x183 = -1;
	int64_t x184 = -56229917889LL;

    t37 = ((x181+x182)*(x183/x184));

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x190 = 11320002468524634LLU;
	int32_t x191 = INT32_MIN;
	volatile uint64_t t38 = 8718788737916549771LLU;

    t38 = ((x189+x190)*(x191/x192));

    if (t38 != 17734398988317884416LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	static int64_t x197 = -1868081LL;
	static uint32_t x198 = 26957807U;
	int32_t x199 = -1;
	volatile int8_t x200 = -1;
	volatile int64_t t39 = -4LL;

    t39 = ((x197+x198)*(x199/x200));

    if (t39 != 25089726LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x201 = -1LL;
	int8_t x203 = -1;
	static int16_t x204 = INT16_MIN;
	int64_t t40 = -60847679LL;

    t40 = ((x201+x202)*(x203/x204));

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x213 = INT16_MIN;
	int32_t x214 = -12;
	int64_t x215 = -1LL;
	int16_t x216 = INT16_MIN;
	volatile int64_t t41 = -176042777419LL;

    t41 = ((x213+x214)*(x215/x216));

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x217 = INT16_MIN;
	static uint16_t x218 = 313U;
	int16_t x219 = -1;
	static uint64_t x220 = 8525791132876LLU;
	uint64_t t42 = 1638LLU;

    t42 = ((x217+x218)*(x219/x220));

    if (t42 != 18446744003488615416LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x221 = INT32_MIN;
	int8_t x223 = INT8_MAX;
	static int32_t x224 = INT32_MAX;

    t43 = ((x221+x222)*(x223/x224));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int32_t x229 = INT32_MIN;
	uint8_t x230 = 37U;
	static int32_t x232 = INT32_MIN;

    t44 = ((x229+x230)*(x231/x232));

    if (t44 != -2147483611) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x242 = 3254;
	int8_t x243 = INT8_MAX;
	volatile int32_t t45 = 0;

    t45 = ((x241+x242)*(x243/x244));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x245 = INT16_MIN;
	static int8_t x246 = INT8_MIN;
	int32_t x247 = -174069;
	static int16_t x248 = INT16_MIN;
	volatile int32_t t46 = -9906;

    t46 = ((x245+x246)*(x247/x248));

    if (t46 != -164480) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x249 = INT64_MIN;
	static int8_t x250 = 58;
	static uint16_t x251 = 5U;
	int8_t x252 = INT8_MIN;
	int64_t t47 = -18727822135048LL;

    t47 = ((x249+x250)*(x251/x252));

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static int64_t x253 = 2675918769260502LL;
	int8_t x255 = INT8_MAX;
	static uint8_t x256 = UINT8_MAX;
	int64_t t48 = -69312280919738212LL;

    t48 = ((x253+x254)*(x255/x256));

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint8_t x257 = UINT8_MAX;
	static int8_t x258 = 1;
	int8_t x259 = -1;
	static int64_t x260 = INT64_MIN;
	volatile int64_t t49 = -26759106086416464LL;

    t49 = ((x257+x258)*(x259/x260));

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x263 = 28LL;
	int64_t x264 = -1045990284016594LL;
	int64_t t50 = 5965443683LL;

    t50 = ((x261+x262)*(x263/x264));

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x269 = INT8_MAX;
	int64_t x270 = 17228525LL;
	static int64_t x271 = INT64_MIN;
	int64_t x272 = INT64_MAX;
	int64_t t51 = 2589296LL;

    t51 = ((x269+x270)*(x271/x272));

    if (t51 != -17228652LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x278 = 1383316630U;
	uint32_t x279 = 2025U;
	static uint8_t x280 = UINT8_MAX;

    t52 = ((x277+x278)*(x279/x280));

    if (t52 != 1093097249U) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x281 = 10U;
	uint64_t x282 = UINT64_MAX;
	int32_t x283 = -1;
	uint8_t x284 = 1U;

    t53 = ((x281+x282)*(x283/x284));

    if (t53 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int8_t x289 = INT8_MIN;
	uint16_t x290 = 18U;
	uint16_t x291 = UINT16_MAX;
	static volatile int8_t x292 = INT8_MIN;
	int32_t t54 = -95146656;

    t54 = ((x289+x290)*(x291/x292));

    if (t54 != 56210) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x293 = 24359180U;
	volatile int8_t x294 = INT8_MIN;
	static uint64_t x295 = UINT64_MAX;
	int64_t x296 = INT64_MIN;
	volatile uint64_t t55 = 8522349407426LLU;

    t55 = ((x293+x294)*(x295/x296));

    if (t55 != 24359052LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x297 = -1;
	uint64_t x298 = 1102990370791234LLU;
	static int32_t x299 = INT32_MIN;
	uint64_t t56 = 102LLU;

    t56 = ((x297+x298)*(x299/x300));

    if (t56 != 16945344719045591040LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static int32_t x301 = INT32_MIN;
	uint64_t x302 = 9658LLU;
	volatile uint64_t t57 = 88359136153307498LLU;

    t57 = ((x301+x302)*(x303/x304));

    if (t57 != 18167249208634680856LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x305 = -1;
	int16_t x307 = -1;
	int32_t t58 = 368374;

    t58 = ((x305+x306)*(x307/x308));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x309 = -15;
	volatile int16_t x310 = INT16_MIN;
	int8_t x312 = -43;
	static int32_t t59 = 57;

    t59 = ((x309+x310)*(x311/x312));

    if (t59 != -24980646) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x318 = 1U;
	int64_t x319 = INT64_MIN;
	volatile int64_t x320 = INT64_MIN;
	int64_t t60 = -532670813313361248LL;

    t60 = ((x317+x318)*(x319/x320));

    if (t60 != -50LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint32_t x321 = 5786U;
	static uint16_t x323 = UINT16_MAX;
	uint8_t x324 = 4U;
	volatile uint32_t t61 = 3208U;

    t61 = ((x321+x322)*(x323/x324));

    if (t61 != 96872679U) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x325 = 10629U;
	int64_t x326 = 10073LL;
	static uint16_t x327 = 214U;
	volatile int8_t x328 = INT8_MIN;
	int64_t t62 = 4060563LL;

    t62 = ((x325+x326)*(x327/x328));

    if (t62 != -20702LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x329 = -1408577LL;
	static uint64_t x330 = 211617201540LLU;
	uint64_t x331 = 115137986010959101LLU;
	volatile int8_t x332 = INT8_MIN;
	volatile uint64_t t63 = 17004253940LLU;

    t63 = ((x329+x330)*(x331/x332));

    if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static int32_t x333 = 41;
	static uint8_t x334 = 89U;
	static int64_t x335 = 421212241LL;
	static uint8_t x336 = 75U;
	int64_t t64 = -66163242227815LL;

    t64 = ((x333+x334)*(x335/x336));

    if (t64 != 730101190LL) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint64_t x337 = UINT64_MAX;
	int16_t x338 = INT16_MAX;
	static int8_t x339 = -1;
	uint32_t x340 = 3567372U;
	static uint64_t t65 = 22LLU;

    t65 = ((x337+x338)*(x339/x340));

    if (t65 != 39417498LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int16_t x341 = -10;
	volatile uint32_t x342 = 746036126U;
	static int32_t x343 = -1;
	int16_t x344 = -1;
	static uint32_t t66 = 142028102U;

    t66 = ((x341+x342)*(x343/x344));

    if (t66 != 746036116U) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint16_t x349 = 2031U;
	int8_t x351 = INT8_MIN;
	uint32_t t67 = 12080U;

    t67 = ((x349+x350)*(x351/x352));

    if (t67 != 4294964762U) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint16_t x357 = UINT16_MAX;
	int64_t x358 = 7LL;
	int8_t x359 = INT8_MAX;
	uint8_t x360 = 44U;
	volatile int64_t t68 = -420LL;

    t68 = ((x357+x358)*(x359/x360));

    if (t68 != 131084LL) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint32_t x370 = 3U;
	int32_t x371 = -1;
	volatile uint64_t t69 = 374LLU;

    t69 = ((x369+x370)*(x371/x372));

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x373 = 865;
	uint32_t x374 = 70159U;
	int16_t x375 = -2108;
	volatile int64_t x376 = INT64_MIN;
	volatile int64_t t70 = -162515273207212LL;

    t70 = ((x373+x374)*(x375/x376));

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x378 = INT32_MIN;
	static uint8_t x379 = UINT8_MAX;
	static volatile uint32_t t71 = 48852103U;

    t71 = ((x377+x378)*(x379/x380));

    if (t71 != 2147485409U) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x385 = INT64_MIN;
	uint16_t x386 = 6U;
	uint64_t x387 = UINT64_MAX;
	volatile uint8_t x388 = 36U;
	volatile uint64_t t72 = 45820204455LLU;

    t72 = ((x385+x386)*(x387/x388));

    if (t72 != 3074457345618258600LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static int16_t x389 = -1;
	int64_t x390 = -1LL;
	int8_t x391 = -10;
	uint16_t x392 = 69U;
	static volatile int64_t t73 = 2267999167594287LL;

    t73 = ((x389+x390)*(x391/x392));

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x393 = 2069002806U;
	uint16_t x394 = 3336U;
	volatile int32_t x395 = INT32_MAX;
	static int8_t x396 = 28;
	static volatile uint32_t t74 = 2956U;

    t74 = ((x393+x394)*(x395/x396));

    if (t74 != 4186419896U) { NG(); } else { ; }
	
}

void f75(void) {
    	static int64_t x397 = -236561037590096020LL;
	int32_t x398 = -1;
	static int8_t x399 = INT8_MIN;
	uint32_t x400 = UINT32_MAX;
	static int64_t t75 = -3954LL;

    t75 = ((x397+x398)*(x399/x400));

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x401 = 7;
	uint8_t x402 = UINT8_MAX;
	uint8_t x403 = 121U;
	int8_t x404 = -1;
	static int32_t t76 = -262791;

    t76 = ((x401+x402)*(x403/x404));

    if (t76 != -31702) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x405 = INT8_MIN;
	uint8_t x406 = 11U;
	int8_t x407 = INT8_MIN;
	int32_t x408 = INT32_MIN;
	static int32_t t77 = 3;

    t77 = ((x405+x406)*(x407/x408));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint8_t x409 = 63U;
	uint64_t x410 = UINT64_MAX;
	int16_t x411 = -6904;
	int64_t x412 = -1LL;

    t78 = ((x409+x410)*(x411/x412));

    if (t78 != 428048LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	static int16_t x414 = INT16_MAX;
	int32_t x416 = 6054046;

    t79 = ((x413+x414)*(x415/x416));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x417 = -470890157;
	volatile int16_t x419 = INT16_MIN;
	uint32_t x420 = 12U;

    t80 = ((x417+x418)*(x419/x420));

    if (t80 != 4110247028U) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x422 = INT16_MAX;
	uint32_t x423 = 29426245U;
	static int64_t x424 = 1LL;
	int64_t t81 = -8322342917354LL;

    t81 = ((x421+x422)*(x423/x424));

    if (t81 != 973743873295LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x425 = -6708;
	int8_t x426 = -1;
	static volatile uint16_t x427 = 143U;
	static uint64_t t82 = 458LLU;

    t82 = ((x425+x426)*(x427/x428));

    if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int8_t x433 = INT8_MIN;
	int8_t x434 = 1;
	volatile int64_t x435 = INT64_MIN;
	int8_t x436 = INT8_MIN;
	volatile int64_t t83 = 1208148LL;

    t83 = ((x433+x434)*(x435/x436));

    if (t83 != -9151314442816847872LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x437 = INT64_MIN;
	uint32_t x438 = UINT32_MAX;
	int8_t x439 = -1;
	static int64_t x440 = INT64_MIN;
	volatile int64_t t84 = 300376084586LL;

    t84 = ((x437+x438)*(x439/x440));

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint64_t x442 = 5201172987399234198LLU;
	int32_t x443 = 2105;
	uint64_t t85 = 4LLU;

    t85 = ((x441+x442)*(x443/x444));

    if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x445 = 9;
	uint64_t x446 = UINT64_MAX;
	volatile uint64_t x447 = 15694989843600LLU;
	volatile int64_t x448 = -1LL;
	volatile uint64_t t86 = 9LLU;

    t86 = ((x445+x446)*(x447/x448));

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x450 = INT64_MAX;
	volatile int16_t x451 = INT16_MAX;
	int16_t x452 = INT16_MAX;
	static volatile int64_t t87 = 5488995181068LL;

    t87 = ((x449+x450)*(x451/x452));

    if (t87 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x453 = -12;
	volatile int64_t x454 = INT64_MAX;
	int32_t x455 = -1;
	volatile int32_t x456 = -395;
	static int64_t t88 = -4711071153LL;

    t88 = ((x453+x454)*(x455/x456));

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x458 = INT8_MAX;
	int8_t x459 = INT8_MIN;
	int32_t t89 = -12;

    t89 = ((x457+x458)*(x459/x460));

    if (t89 != 157) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x461 = INT8_MIN;
	int16_t x462 = INT16_MIN;
	int8_t x463 = INT8_MIN;
	static uint8_t x464 = UINT8_MAX;
	int32_t t90 = -1;

    t90 = ((x461+x462)*(x463/x464));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int64_t x470 = -7389LL;
	volatile uint16_t x471 = UINT16_MAX;
	int64_t t91 = 786501LL;

    t91 = ((x469+x470)*(x471/x472));

    if (t91 != -1895375LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile uint64_t x473 = 179687231836842625LLU;
	static volatile int64_t x475 = -670374048LL;
	int8_t x476 = INT8_MAX;

    t92 = ((x473+x474)*(x475/x476));

    if (t92 != 121106072784661305LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x478 = UINT8_MAX;
	uint8_t x480 = 6U;

    t93 = ((x477+x478)*(x479/x480));

    if (t93 != -2086102) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint32_t x493 = 1U;
	int8_t x494 = 0;
	static int16_t x495 = INT16_MIN;
	int8_t x496 = INT8_MAX;
	uint32_t t94 = 2144986246U;

    t94 = ((x493+x494)*(x495/x496));

    if (t94 != 4294967038U) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x497 = 22417U;
	int32_t x498 = 172;
	static int16_t x500 = INT16_MIN;
	int32_t t95 = -86;

    t95 = ((x497+x498)*(x499/x500));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int32_t x502 = -950;
	int16_t x503 = INT16_MAX;
	volatile uint8_t x504 = UINT8_MAX;
	int32_t t96 = 346;

    t96 = ((x501+x502)*(x503/x504));

    if (t96 != -122368) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x505 = 8U;
	uint32_t x506 = 28037U;
	int8_t x508 = INT8_MAX;
	int64_t t97 = 127408144527LL;

    t97 = ((x505+x506)*(x507/x508));

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x509 = 14336869185336352LLU;
	static int8_t x510 = INT8_MIN;
	volatile int64_t x511 = -34568LL;
	static int32_t x512 = -1;

    t98 = ((x509+x510)*(x511/x512));

    if (t98 != 15981548082254249216LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x513 = -2;
	int16_t x514 = INT16_MIN;
	volatile uint16_t x515 = UINT16_MAX;
	int64_t x516 = INT64_MAX;
	volatile int64_t t99 = 2728598063LL;

    t99 = ((x513+x514)*(x515/x516));

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x517 = UINT32_MAX;
	uint16_t x518 = 35U;
	uint32_t x520 = 209964010U;
	volatile uint32_t t100 = 228044U;

    t100 = ((x517+x518)*(x519/x520));

    if (t100 != 0U) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x525 = 7U;
	int32_t x526 = 24444;
	static int32_t x527 = INT32_MIN;
	uint32_t x528 = UINT32_MAX;
	uint32_t t101 = 302U;

    t101 = ((x525+x526)*(x527/x528));

    if (t101 != 0U) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x529 = -114LL;
	uint64_t x530 = 121002547128697LLU;
	uint32_t x531 = 59911U;
	int64_t x532 = INT64_MIN;
	static uint64_t t102 = 2131051498180325106LLU;

    t102 = ((x529+x530)*(x531/x532));

    if (t102 != 0LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x545 = UINT64_MAX;
	int32_t x546 = 172887984;
	volatile int16_t x547 = INT16_MAX;
	uint16_t x548 = UINT16_MAX;
	uint64_t t103 = 464490494295431LLU;

    t103 = ((x545+x546)*(x547/x548));

    if (t103 != 0LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int32_t x549 = -39223701;
	int32_t x551 = INT32_MIN;
	uint64_t t104 = 31958518LLU;

    t104 = ((x549+x550)*(x551/x552));

    if (t104 != 18446282658519905500LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x553 = -1;
	int8_t x554 = -1;
	int16_t x555 = -1;
	int16_t x556 = INT16_MIN;
	volatile int32_t t105 = 761;

    t105 = ((x553+x554)*(x555/x556));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x563 = INT16_MAX;
	int16_t x564 = INT16_MIN;
	static volatile int32_t t106 = -251605;

    t106 = ((x561+x562)*(x563/x564));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint64_t x574 = UINT64_MAX;
	static int64_t x575 = INT64_MIN;
	uint16_t x576 = 15168U;

    t107 = ((x573+x574)*(x575/x576));

    if (t107 != 17357671069233797543LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x581 = 116;
	static uint32_t x582 = 2060120277U;
	static uint64_t x583 = 1772256402916842LLU;
	int8_t x584 = -1;
	uint64_t t108 = 5207465LLU;

    t108 = ((x581+x582)*(x583/x584));

    if (t108 != 0LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x593 = -1;
	int64_t x594 = -1LL;
	int8_t x596 = 24;
	volatile int64_t t109 = -3306455483LL;

    t109 = ((x593+x594)*(x595/x596));

    if (t109 != -6LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x597 = INT32_MAX;
	int64_t x598 = -1LL;
	volatile uint32_t x599 = UINT32_MAX;
	uint64_t x600 = UINT64_MAX;
	uint64_t t110 = 10670980LLU;

    t110 = ((x597+x598)*(x599/x600));

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x603 = 77U;
	int64_t x604 = -1LL;
	static volatile uint64_t t111 = 3494383243215LLU;

    t111 = ((x601+x602)*(x603/x604));

    if (t111 != 18446744073709550846LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x605 = 1671;
	int16_t x606 = 291;
	static int32_t t112 = 10508;

    t112 = ((x605+x606)*(x607/x608));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x609 = INT8_MAX;
	static int8_t x610 = 36;
	int8_t x611 = INT8_MAX;
	int8_t x612 = -1;

    t113 = ((x609+x610)*(x611/x612));

    if (t113 != -20701) { NG(); } else { ; }
	
}

void f114(void) {
    	static int16_t x613 = -1;
	uint64_t x614 = 404LLU;
	int16_t x615 = 287;
	static volatile uint8_t x616 = UINT8_MAX;
	volatile uint64_t t114 = 6359304LLU;

    t114 = ((x613+x614)*(x615/x616));

    if (t114 != 403LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x618 = INT32_MIN;
	volatile int64_t x619 = 1546488450LL;
	int64_t t115 = 18740760835LL;

    t115 = ((x617+x618)*(x619/x620));

    if (t115 != 3321058433955040350LL) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x621 = 0U;
	volatile int8_t x622 = INT8_MIN;
	int8_t x623 = -1;
	int64_t x624 = INT64_MIN;
	int64_t t116 = 21LL;

    t116 = ((x621+x622)*(x623/x624));

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x629 = 85U;
	int16_t x630 = INT16_MAX;
	volatile int64_t t117 = -10213266LL;

    t117 = ((x629+x630)*(x631/x632));

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x633 = INT64_MIN;
	static int16_t x634 = INT16_MAX;
	volatile uint8_t x635 = 52U;
	int16_t x636 = INT16_MIN;
	int64_t t118 = -393834458454LL;

    t118 = ((x633+x634)*(x635/x636));

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x637 = -1LL;
	int64_t x638 = INT64_MAX;
	int16_t x639 = -1;

    t119 = ((x637+x638)*(x639/x640));

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x649 = INT8_MAX;
	static int16_t x650 = INT16_MIN;
	int64_t x651 = -1LL;

    t120 = ((x649+x650)*(x651/x652));

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x653 = -1863;
	int8_t x654 = INT8_MAX;
	int64_t x656 = INT64_MAX;
	static volatile int64_t t121 = -9226313614LL;

    t121 = ((x653+x654)*(x655/x656));

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x657 = 866555506LLU;
	uint32_t x658 = 4U;
	int8_t x659 = -1;
	uint64_t t122 = 3569118418929LLU;

    t122 = ((x657+x658)*(x659/x660));

    if (t122 != 0LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint16_t x661 = 59U;
	int16_t x662 = INT16_MIN;
	static int32_t x663 = 2488037;
	int64_t x664 = INT64_MIN;
	int64_t t123 = -567170615506181629LL;

    t123 = ((x661+x662)*(x663/x664));

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x665 = INT16_MIN;
	uint16_t x666 = UINT16_MAX;

    t124 = ((x665+x666)*(x667/x668));

    if (t124 != -126230913538877LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x673 = INT16_MIN;
	volatile int8_t x674 = INT8_MIN;
	int32_t x675 = 22486517;
	static int32_t x676 = INT32_MIN;
	volatile int32_t t125 = 573044;

    t125 = ((x673+x674)*(x675/x676));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int16_t x681 = -1;
	static volatile int16_t x682 = 0;
	int8_t x683 = -2;
	static uint32_t x684 = UINT32_MAX;
	volatile uint32_t t126 = 109869013U;

    t126 = ((x681+x682)*(x683/x684));

    if (t126 != 0U) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x685 = 6U;
	int8_t x688 = -54;

    t127 = ((x685+x686)*(x687/x688));

    if (t127 != -854015929338405165LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x689 = -1;
	uint16_t x690 = UINT16_MAX;
	volatile int16_t x691 = INT16_MIN;
	int16_t x692 = -1;

    t128 = ((x689+x690)*(x691/x692));

    if (t128 != 2147418112) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x694 = 3U;
	int32_t x695 = INT32_MAX;
	uint8_t x696 = UINT8_MAX;

    t129 = ((x693+x694)*(x695/x696));

    if (t129 != 192118423311360LL) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int16_t x697 = 6816;
	volatile uint16_t x698 = 6U;
	int8_t x700 = INT8_MAX;
	int32_t t130 = -193491260;

    t130 = ((x697+x698)*(x699/x700));

    if (t130 != 1760076) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x701 = -2;
	uint16_t x703 = UINT16_MAX;
	static uint16_t x704 = UINT16_MAX;
	volatile int64_t t131 = 31483LL;

    t131 = ((x701+x702)*(x703/x704));

    if (t131 != 126566133LL) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint32_t x711 = 6U;
	int64_t x712 = 2LL;

    t132 = ((x709+x710)*(x711/x712));

    if (t132 != 247249967891015568LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x713 = 7U;
	uint32_t x714 = 159827585U;
	static uint32_t x715 = 2882133U;
	volatile uint8_t x716 = 69U;
	uint32_t t133 = 0U;

    t133 = ((x713+x714)*(x715/x716));

    if (t133 != 1619339856U) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x717 = INT32_MIN;
	uint32_t x718 = UINT32_MAX;
	static int16_t x719 = 0;
	int64_t x720 = INT64_MIN;
	int64_t t134 = 2187390857783LL;

    t134 = ((x717+x718)*(x719/x720));

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x721 = 15;
	int16_t x722 = -1;
	volatile int32_t x723 = -1;
	volatile int16_t x724 = -10;
	volatile int32_t t135 = -93268;

    t135 = ((x721+x722)*(x723/x724));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint8_t x725 = UINT8_MAX;
	uint8_t x726 = 6U;
	int64_t x727 = -55910960279351LL;
	static uint32_t x728 = UINT32_MAX;
	volatile int64_t t136 = 3996LL;

    t136 = ((x725+x726)*(x727/x728));

    if (t136 != -3397437LL) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint64_t x734 = 16LLU;
	volatile int16_t x735 = INT16_MIN;
	static int32_t x736 = INT32_MAX;
	volatile uint64_t t137 = 67687947671764LLU;

    t137 = ((x733+x734)*(x735/x736));

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x737 = -1LL;
	int16_t x738 = -1;
	static uint32_t x739 = UINT32_MAX;
	int64_t t138 = 4LL;

    t138 = ((x737+x738)*(x739/x740));

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x741 = -1;
	uint32_t x742 = 1906112U;
	volatile uint64_t x743 = UINT64_MAX;
	static int32_t x744 = -1;
	uint64_t t139 = 4582558689484LLU;

    t139 = ((x741+x742)*(x743/x744));

    if (t139 != 1906111LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x749 = 14U;
	static uint32_t x750 = 74U;
	int16_t x751 = -124;

    t140 = ((x749+x750)*(x751/x752));

    if (t140 != 4294966680U) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x753 = 8;
	int8_t x754 = INT8_MIN;
	volatile uint64_t x755 = 5354149LLU;
	int8_t x756 = -13;
	uint64_t t141 = 0LLU;

    t141 = ((x753+x754)*(x755/x756));

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x757 = UINT16_MAX;
	uint32_t x758 = 504U;
	int16_t x759 = -1;
	int16_t x760 = INT16_MIN;

    t142 = ((x757+x758)*(x759/x760));

    if (t142 != 0U) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int8_t x761 = INT8_MAX;
	int8_t x762 = INT8_MIN;
	uint32_t x764 = 334963U;
	volatile uint32_t t143 = 1355U;

    t143 = ((x761+x762)*(x763/x764));

    if (t143 != 4294954474U) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x765 = UINT8_MAX;
	uint64_t x766 = 1746858LLU;
	static uint8_t x768 = 28U;
	uint64_t t144 = 74030589066LLU;

    t144 = ((x765+x766)*(x767/x768));

    if (t144 != 2044122210LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x769 = -1;
	uint64_t x770 = 93413815150251LLU;
	volatile int32_t x771 = 3529;
	uint8_t x772 = UINT8_MAX;

    t145 = ((x769+x770)*(x771/x772));

    if (t145 != 1214379596953250LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile uint32_t x773 = 10637U;
	uint64_t x774 = 33925LLU;
	volatile uint32_t x775 = UINT32_MAX;
	static uint64_t t146 = 22LLU;

    t146 = ((x773+x774)*(x775/x776));

    if (t146 != 1507026235680LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x777 = INT8_MIN;
	int8_t x778 = -6;
	uint8_t x779 = UINT8_MAX;
	int64_t x780 = INT64_MAX;
	volatile int64_t t147 = 610122LL;

    t147 = ((x777+x778)*(x779/x780));

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x781 = -11926;
	static uint32_t x782 = 453508957U;
	uint16_t x783 = 1U;
	volatile uint64_t t148 = 774LLU;

    t148 = ((x781+x782)*(x783/x784));

    if (t148 != 0LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x785 = 125U;
	volatile uint16_t x786 = UINT16_MAX;
	volatile uint64_t x787 = 44LLU;
	uint8_t x788 = 56U;

    t149 = ((x785+x786)*(x787/x788));

    if (t149 != 0LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x789 = INT64_MIN;
	int8_t x790 = INT8_MAX;
	int16_t x792 = INT16_MIN;
	volatile uint64_t t150 = 17761489LLU;

    t150 = ((x789+x790)*(x791/x792));

    if (t150 != 0LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x793 = 3723056614LLU;
	uint16_t x794 = 42U;
	int16_t x795 = INT16_MAX;
	int64_t x796 = -1LL;
	uint64_t t151 = 3119472280273674LLU;

    t151 = ((x793+x794)*(x795/x796));

    if (t151 != 18446622080312104464LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x797 = UINT8_MAX;
	uint8_t x798 = UINT8_MAX;
	volatile uint8_t x799 = 0U;
	int32_t x800 = INT32_MIN;
	volatile int32_t t152 = 887437925;

    t152 = ((x797+x798)*(x799/x800));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x801 = -88LL;
	int8_t x802 = INT8_MIN;
	int8_t x803 = 9;
	volatile int32_t x804 = INT32_MAX;
	volatile int64_t t153 = -2070464042098214479LL;

    t153 = ((x801+x802)*(x803/x804));

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x813 = UINT8_MAX;
	uint16_t x814 = 6U;
	volatile int16_t x816 = INT16_MIN;
	static int32_t t154 = -443;

    t154 = ((x813+x814)*(x815/x816));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x818 = 811U;
	volatile uint8_t x819 = 54U;
	volatile int64_t t155 = 21719585734LL;

    t155 = ((x817+x818)*(x819/x820));

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x821 = -153642;
	uint8_t x822 = 21U;
	uint16_t x823 = 7222U;
	int16_t x824 = INT16_MIN;
	static volatile int32_t t156 = 14550;

    t156 = ((x821+x822)*(x823/x824));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x825 = 7165023887245434LLU;
	volatile uint32_t x827 = 1494U;
	int64_t x828 = INT64_MIN;
	uint64_t t157 = 27252082514788LLU;

    t157 = ((x825+x826)*(x827/x828));

    if (t157 != 0LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x829 = -1;
	uint32_t x830 = 24525723U;
	uint16_t x831 = UINT16_MAX;
	volatile uint32_t t158 = 405U;

    t158 = ((x829+x830)*(x831/x832));

    if (t158 != 4270441574U) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x833 = 12643120474LLU;
	uint64_t x834 = 122604680968474555LLU;
	static volatile int16_t x835 = -404;
	int32_t x836 = -1;

    t159 = ((x833+x834)*(x835/x836));

    if (t159 != 12638808071665288484LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x838 = INT8_MIN;
	uint16_t x840 = 29U;
	volatile uint32_t t160 = 70U;

    t160 = ((x837+x838)*(x839/x840));

    if (t160 != 398624U) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int16_t x841 = 111;
	static uint8_t x842 = 1U;
	static uint64_t x843 = 93967LLU;
	static uint64_t x844 = UINT64_MAX;
	uint64_t t161 = 7400611302LLU;

    t161 = ((x841+x842)*(x843/x844));

    if (t161 != 0LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x845 = UINT32_MAX;
	int32_t x847 = -1;
	int8_t x848 = 1;

    t162 = ((x845+x846)*(x847/x848));

    if (t162 != 129U) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int8_t x849 = INT8_MAX;
	static int16_t x851 = INT16_MAX;
	uint32_t x852 = UINT32_MAX;

    t163 = ((x849+x850)*(x851/x852));

    if (t163 != 0U) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x854 = UINT64_MAX;
	int64_t x855 = -1LL;
	int64_t x856 = INT64_MIN;
	uint64_t t164 = 2738848LLU;

    t164 = ((x853+x854)*(x855/x856));

    if (t164 != 0LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x865 = UINT8_MAX;
	volatile int64_t x866 = -8068LL;
	int64_t x867 = -1LL;

    t165 = ((x865+x866)*(x867/x868));

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x869 = -15;
	int8_t x870 = INT8_MAX;
	static int16_t x871 = INT16_MAX;
	uint64_t x872 = 1224669847LLU;
	uint64_t t166 = 2LLU;

    t166 = ((x869+x870)*(x871/x872));

    if (t166 != 0LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	static int64_t x873 = -1LL;
	int32_t x874 = -87900032;
	uint16_t x875 = 15159U;
	static uint8_t x876 = UINT8_MAX;
	static volatile int64_t t167 = 3680706LL;

    t167 = ((x873+x874)*(x875/x876));

    if (t167 != -5186101947LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x885 = UINT32_MAX;
	static int32_t x886 = -1;
	static uint8_t x887 = UINT8_MAX;
	int16_t x888 = 869;
	volatile uint32_t t168 = 0U;

    t168 = ((x885+x886)*(x887/x888));

    if (t168 != 0U) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x889 = 3U;
	volatile uint8_t x891 = UINT8_MAX;
	volatile int32_t t169 = -50;

    t169 = ((x889+x890)*(x891/x892));

    if (t169 != -168) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x897 = INT8_MIN;
	uint8_t x898 = UINT8_MAX;
	int8_t x899 = INT8_MIN;
	static int32_t x900 = INT32_MAX;
	volatile int32_t t170 = 1430213;

    t170 = ((x897+x898)*(x899/x900));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x901 = -4;
	uint16_t x902 = 28104U;
	int64_t x903 = -1LL;
	uint32_t x904 = UINT32_MAX;
	static int64_t t171 = 4LL;

    t171 = ((x901+x902)*(x903/x904));

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x905 = 974913978518084LL;
	uint8_t x906 = 35U;
	static int16_t x907 = INT16_MIN;
	int64_t x908 = 459506367LL;
	int64_t t172 = -329166566LL;

    t172 = ((x905+x906)*(x907/x908));

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x909 = 7U;
	uint64_t x910 = 3572258LLU;
	static volatile int8_t x911 = -1;
	volatile uint64_t t173 = 1202129003LLU;

    t173 = ((x909+x910)*(x911/x912));

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x913 = 0U;
	volatile uint32_t x914 = UINT32_MAX;
	int64_t x915 = INT64_MIN;
	int64_t x916 = 462491646904193LL;
	int64_t t174 = -126614658852066472LL;

    t174 = ((x913+x914)*(x915/x916));

    if (t174 != -85650237796890LL) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int16_t x917 = 9;
	int32_t x918 = INT32_MIN;
	uint64_t x919 = UINT64_MAX;
	volatile int64_t x920 = INT64_MAX;
	uint64_t t175 = 10532422LLU;

    t175 = ((x917+x918)*(x919/x920));

    if (t175 != 18446744069414584338LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int8_t x925 = INT8_MIN;
	uint32_t x926 = UINT32_MAX;
	volatile uint8_t x927 = 0U;
	uint64_t x928 = 1005135625755400066LLU;
	volatile uint64_t t176 = 894261999559225LLU;

    t176 = ((x925+x926)*(x927/x928));

    if (t176 != 0LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x933 = 0U;
	static volatile int32_t x934 = 72157;
	volatile uint32_t x935 = UINT32_MAX;
	int8_t x936 = INT8_MIN;
	uint32_t t177 = 1U;

    t177 = ((x933+x934)*(x935/x936));

    if (t177 != 72157U) { NG(); } else { ; }
	
}

void f178(void) {
    	static int64_t x937 = -1LL;
	static uint16_t x938 = 1U;
	uint64_t x939 = 23003932LLU;
	static int32_t x940 = INT32_MAX;
	volatile uint64_t t178 = 4110625704LLU;

    t178 = ((x937+x938)*(x939/x940));

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile uint8_t x945 = 0U;
	static uint32_t x946 = 891U;
	int32_t x947 = -34906;
	uint32_t t179 = 4512669U;

    t179 = ((x945+x946)*(x947/x948));

    if (t179 != 0U) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x954 = 3U;
	uint16_t x955 = 1U;
	volatile int32_t x956 = INT32_MAX;
	int32_t t180 = 56103;

    t180 = ((x953+x954)*(x955/x956));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint8_t x957 = 90U;
	uint8_t x958 = 31U;
	int32_t x960 = INT32_MIN;
	int32_t t181 = 1005;

    t181 = ((x957+x958)*(x959/x960));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile uint64_t x965 = 2850733657572492LLU;
	static int16_t x966 = INT16_MAX;
	int64_t x967 = INT64_MIN;
	uint8_t x968 = UINT8_MAX;
	static volatile uint64_t t182 = 14826287103177777LLU;

    t182 = ((x965+x966)*(x967/x968));

    if (t182 != 5824814869967813248LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x973 = UINT16_MAX;
	uint8_t x974 = UINT8_MAX;
	static volatile int32_t x975 = -648184436;
	volatile int32_t t183 = -6441;

    t183 = ((x973+x974)*(x975/x976));

    if (t183 != 1301391990) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x977 = -88;
	volatile int8_t x978 = INT8_MIN;
	uint16_t x979 = 125U;
	uint8_t x980 = UINT8_MAX;
	int32_t t184 = 3806;

    t184 = ((x977+x978)*(x979/x980));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint64_t x981 = 32916287LLU;
	static int16_t x984 = -1;

    t185 = ((x981+x982)*(x983/x984));

    if (t185 != 12406443960635519150LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x985 = 433U;
	int32_t x986 = -39;
	int32_t x987 = 2434;
	int8_t x988 = -6;
	volatile int32_t t186 = -498;

    t186 = ((x985+x986)*(x987/x988));

    if (t186 != -159570) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x989 = INT8_MIN;
	uint8_t x990 = UINT8_MAX;

    t187 = ((x989+x990)*(x991/x992));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x994 = INT64_MAX;
	int8_t x995 = 1;
	static volatile int8_t x996 = -1;
	volatile int64_t t188 = -155455241603LL;

    t188 = ((x993+x994)*(x995/x996));

    if (t188 != 1LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint64_t x1001 = 3378756940LLU;
	static int8_t x1002 = -5;
	int32_t x1003 = -1;
	int64_t x1004 = INT64_MIN;
	uint64_t t189 = 127203376LLU;

    t189 = ((x1001+x1002)*(x1003/x1004));

    if (t189 != 0LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x1005 = -1;
	volatile int64_t x1006 = -1LL;
	int8_t x1007 = -1;
	int64_t x1008 = -1LL;
	volatile int64_t t190 = -16087595LL;

    t190 = ((x1005+x1006)*(x1007/x1008));

    if (t190 != -2LL) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x1010 = UINT32_MAX;
	volatile int64_t x1012 = INT64_MIN;
	volatile int64_t t191 = -27LL;

    t191 = ((x1009+x1010)*(x1011/x1012));

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x1013 = 38U;
	int8_t x1014 = -1;
	static int32_t x1015 = -1;
	int32_t x1016 = INT32_MIN;
	volatile int32_t t192 = 859599470;

    t192 = ((x1013+x1014)*(x1015/x1016));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x1017 = INT8_MAX;
	int8_t x1018 = 6;
	int64_t x1020 = INT64_MAX;

    t193 = ((x1017+x1018)*(x1019/x1020));

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile uint64_t x1021 = UINT64_MAX;
	uint64_t x1022 = UINT64_MAX;
	uint16_t x1023 = 962U;
	uint32_t x1024 = 1467718152U;

    t194 = ((x1021+x1022)*(x1023/x1024));

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x1029 = INT16_MAX;
	uint16_t x1032 = 7U;

    t195 = ((x1029+x1030)*(x1031/x1032));

    if (t195 != 18446744073126495296LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint16_t x1033 = UINT16_MAX;
	uint8_t x1034 = 46U;
	int8_t x1035 = INT8_MIN;
	int16_t x1036 = 894;
	volatile int32_t t196 = -1;

    t196 = ((x1033+x1034)*(x1035/x1036));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x1039 = -164567336;

    t197 = ((x1037+x1038)*(x1039/x1040));

    if (t197 != 9223372052081087861LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x1041 = 578U;
	int32_t x1042 = INT32_MIN;
	int64_t x1043 = 32LL;
	int64_t x1044 = -1LL;
	volatile int64_t t198 = -8357406591801339LL;

    t198 = ((x1041+x1042)*(x1043/x1044));

    if (t198 != 68719458240LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x1053 = -1;
	int16_t x1054 = 803;
	int8_t x1055 = INT8_MIN;
	volatile uint16_t x1056 = 490U;

    t199 = ((x1053+x1054)*(x1055/x1056));

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

