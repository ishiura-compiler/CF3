#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x10 = -1;
volatile int32_t x12 = INT32_MIN;
volatile uint32_t t2 = 324U;
uint8_t x15 = UINT8_MAX;
uint64_t x17 = 3845898LLU;
static volatile int32_t x21 = INT32_MIN;
volatile uint64_t t5 = UINT64_MAX;
int64_t x26 = INT64_MIN;
volatile int64_t t7 = -481859078455LL;
uint64_t x37 = UINT64_MAX;
volatile uint64_t t9 = UINT64_MAX;
volatile int8_t x43 = INT8_MIN;
volatile int16_t x44 = -88;
volatile int8_t x54 = -1;
static volatile int64_t t13 = INT64_MAX;
uint32_t x57 = UINT32_MAX;
int8_t x58 = 1;
uint8_t x59 = 3U;
uint32_t t14 = UINT32_MAX;
uint32_t x63 = 468075U;
volatile uint32_t t15 = 485955U;
int64_t x72 = INT64_MAX;
uint8_t x73 = UINT8_MAX;
static int64_t x80 = 458021605881LL;
int32_t x81 = INT32_MIN;
uint32_t x84 = 102814805U;
uint32_t x86 = 12645757U;
volatile int64_t x87 = INT64_MAX;
int16_t x89 = -8149;
int64_t x92 = -25509LL;
int8_t x101 = -1;
int64_t x104 = -1LL;
static int8_t x105 = INT8_MIN;
int64_t x108 = INT64_MIN;
volatile uint64_t t27 = UINT64_MAX;
int16_t x116 = -1;
int64_t x119 = 9LL;
int64_t x126 = INT64_MIN;
int16_t x128 = INT16_MAX;
static int16_t x129 = -1;
static int8_t x140 = 0;
uint64_t t34 = UINT64_MAX;
int32_t x147 = INT32_MIN;
volatile uint32_t t37 = UINT32_MAX;
static int16_t x154 = -826;
volatile int8_t x169 = INT8_MAX;
int64_t x173 = INT64_MIN;
static int64_t x181 = INT64_MAX;
int8_t x185 = INT8_MIN;
uint64_t x188 = UINT64_MAX;
uint64_t x191 = UINT64_MAX;
int32_t x192 = INT32_MAX;
int8_t x204 = INT8_MIN;
int64_t t50 = -12446682919821644LL;
static int32_t x207 = 647769;
int32_t x211 = INT32_MIN;
uint16_t x213 = 3351U;
int64_t x217 = 1207647264937894LL;
uint64_t x218 = 2207714818LLU;
uint32_t x222 = 923438868U;
uint32_t x226 = 46U;
uint64_t x232 = 2413683LLU;
uint32_t x239 = 114284486U;
int16_t x240 = -8715;
int32_t x242 = -1;
static int64_t x243 = INT64_MIN;
uint64_t x245 = 801LLU;
static uint64_t t61 = UINT64_MAX;
uint32_t x254 = 3268U;
static int32_t x260 = INT32_MIN;
int64_t x266 = INT64_MIN;
int32_t x268 = INT32_MIN;
int64_t t66 = -1889494315512306LL;
static int16_t x273 = -1;
int32_t x276 = INT32_MAX;
volatile int64_t t71 = -13724348LL;
int16_t x289 = INT16_MIN;
uint64_t x292 = 93LLU;
static int32_t x296 = -1;
volatile int64_t t73 = -194566396LL;
int8_t x303 = -18;
int64_t x304 = -26LL;
uint32_t x305 = UINT32_MAX;
int64_t x310 = INT64_MAX;
volatile int16_t x313 = -1;
uint64_t x328 = UINT64_MAX;
int16_t x330 = INT16_MAX;
volatile uint32_t x335 = UINT32_MAX;
int64_t x338 = INT64_MAX;
int16_t x339 = INT16_MIN;
uint64_t x344 = UINT64_MAX;
int16_t x346 = -1;
uint64_t x347 = UINT64_MAX;
volatile int16_t x353 = -1830;
uint8_t x354 = 5U;
int32_t t88 = -23433683;
volatile uint64_t x360 = 854699197928631600LLU;
int64_t x363 = INT64_MAX;
uint16_t x366 = UINT16_MAX;
int16_t x369 = INT16_MIN;
int32_t x370 = INT32_MAX;
uint64_t t93 = 60967LLU;
volatile uint64_t x377 = UINT64_MAX;
uint8_t x380 = 32U;
uint64_t t94 = 101459LLU;
uint8_t x385 = 1U;
volatile uint16_t x388 = 4U;
int32_t x391 = INT32_MAX;
static volatile int64_t t98 = 1288203792084LL;
uint16_t x397 = 8U;


void f0(void) {
	static uint64_t x1 = UINT64_MAX;
	static int64_t x2 = INT64_MIN;
	int32_t x3 = INT32_MAX;
	int16_t x4 = INT16_MAX;
	uint64_t t0 = 19890LLU;

	t0 = ((x1^x2)|(x3|x4));

	if (t0 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	volatile uint16_t x6 = 13750U;
	int64_t x7 = INT64_MIN;
	uint32_t x8 = UINT32_MAX;
	int64_t t1 = -369613635428999734LL;

	t1 = ((x5^x6)|(x7|x8));

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 395997U;
	static volatile uint32_t x11 = 23966286U;

	t2 = ((x9^x10)|(x11|x12));

	if (t2 != 4294834030U) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint8_t x13 = 39U;
	static uint8_t x14 = 0U;
	uint64_t x16 = 15LLU;
	volatile uint64_t t3 = 4377611419765723LLU;

	t3 = ((x13^x14)|(x15|x16));

	if (t3 != 255LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x18 = -99;
	volatile uint64_t x19 = 439984413988LLU;
	static uint8_t x20 = UINT8_MAX;
	volatile uint64_t t4 = 11LLU;

	t4 = ((x17^x18)|(x19|x20));

	if (t4 != 18446744073707281919LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x22 = INT16_MIN;
	uint64_t x23 = 59244865LLU;
	uint64_t x24 = UINT64_MAX;

	t5 = ((x21^x22)|(x23|x24));

	if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MAX;
	uint32_t x27 = 948U;
	int32_t x28 = INT32_MAX;
	static int64_t t6 = 38427770721570435LL;

	t6 = ((x25^x26)|(x27|x28));

	if (t6 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -1;
	int64_t x30 = INT64_MIN;
	volatile int64_t x31 = -5146437343LL;
	int64_t x32 = -188953382187289616LL;

	t7 = ((x29^x30)|(x31|x32));

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -13;
	static uint8_t x34 = UINT8_MAX;
	static int16_t x35 = -1;
	int64_t x36 = -1LL;
	volatile int64_t t8 = -587566244805304LL;

	t8 = ((x33^x34)|(x35|x36));

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x38 = 70;
	static uint64_t x39 = 3439694036958LLU;
	volatile uint64_t x40 = UINT64_MAX;

	t9 = ((x37^x38)|(x39|x40));

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = UINT16_MAX;
	int16_t x42 = -1;
	int32_t t10 = 3;

	t10 = ((x41^x42)|(x43|x44));

	if (t10 != -88) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	int64_t x46 = INT64_MIN;
	int32_t x47 = INT32_MAX;
	int8_t x48 = -38;
	int64_t t11 = 67376021LL;

	t11 = ((x45^x46)|(x47|x48));

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint8_t x49 = UINT8_MAX;
	int64_t x50 = -30439LL;
	int32_t x51 = 851396140;
	static int32_t x52 = INT32_MIN;
	int64_t t12 = 54483772474LL;

	t12 = ((x49^x50)|(x51|x52));

	if (t12 != -12306LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	uint32_t x55 = 271605544U;
	int32_t x56 = 8684;

	t13 = ((x53^x54)|(x55|x56));

	if (t13 != INT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x60 = UINT32_MAX;

	t14 = ((x57^x58)|(x59|x60));

	if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x61 = -966;
	int8_t x62 = 0;
	int16_t x64 = 2;

	t15 = ((x61^x62)|(x63|x64));

	if (t15 != 4294966395U) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = -1;
	uint16_t x66 = 0U;
	uint16_t x67 = 39U;
	int16_t x68 = INT16_MIN;
	static volatile int32_t t16 = -1;

	t16 = ((x65^x66)|(x67|x68));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x69 = -1;
	int16_t x70 = INT16_MAX;
	int32_t x71 = INT32_MAX;
	int64_t t17 = -614214924351796LL;

	t17 = ((x69^x70)|(x71|x72));

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x74 = INT64_MIN;
	volatile uint32_t x75 = 3504U;
	volatile int8_t x76 = INT8_MIN;
	static int64_t t18 = 3384000669860318LL;

	t18 = ((x73^x74)|(x75|x76));

	if (t18 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = 587492806;
	volatile int64_t x78 = 16479734692500LL;
	int8_t x79 = -1;
	static int64_t t19 = 23766426071LL;

	t19 = ((x77^x78)|(x79|x80));

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x82 = 5U;
	volatile int32_t x83 = -3715;
	uint32_t t20 = 1060658U;

	t20 = ((x81^x82)|(x83|x84));

	if (t20 != 4294964605U) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = 4U;
	int32_t x88 = -1;
	int64_t t21 = 195665LL;

	t21 = ((x85^x86)|(x87|x88));

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x90 = 1;
	int32_t x91 = INT32_MAX;
	volatile int64_t t22 = 7941325LL;

	t22 = ((x89^x90)|(x91|x92));

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x93 = INT8_MIN;
	int16_t x94 = INT16_MAX;
	int16_t x95 = INT16_MIN;
	volatile int8_t x96 = 17;
	volatile int32_t t23 = -2534;

	t23 = ((x93^x94)|(x95|x96));

	if (t23 != -32641) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint16_t x97 = 344U;
	int16_t x98 = INT16_MAX;
	volatile int16_t x99 = -7881;
	int64_t x100 = INT64_MIN;
	int64_t t24 = 4351980679769338482LL;

	t24 = ((x97^x98)|(x99|x100));

	if (t24 != -73LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x102 = 249927U;
	static int32_t x103 = 495;
	int64_t t25 = -2163030LL;

	t25 = ((x101^x102)|(x103|x104));

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x106 = INT64_MAX;
	int8_t x107 = INT8_MAX;
	int64_t t26 = -1536472825LL;

	t26 = ((x105^x106)|(x107|x108));

	if (t26 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = -1LL;
	uint64_t x110 = 3794651LLU;
	int64_t x111 = -1LL;
	volatile int8_t x112 = INT8_MIN;

	t27 = ((x109^x110)|(x111|x112));

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x113 = 14U;
	static int32_t x114 = -9;
	int32_t x115 = INT32_MIN;
	static volatile int32_t t28 = 0;

	t28 = ((x113^x114)|(x115|x116));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MIN;
	static uint8_t x118 = 1U;
	uint16_t x120 = 544U;
	volatile int64_t t29 = 12LL;

	t29 = ((x117^x118)|(x119|x120));

	if (t29 != -32215LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = -870942319148312LL;
	int8_t x122 = INT8_MIN;
	int64_t x123 = -1LL;
	static int8_t x124 = INT8_MIN;
	volatile int64_t t30 = 233488LL;

	t30 = ((x121^x122)|(x123|x124));

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x125 = 483126098539570180LLU;
	uint16_t x127 = UINT16_MAX;
	uint64_t t31 = 291946281108528LLU;

	t31 = ((x125^x126)|(x127|x128));

	if (t31 != 9706498135394353151LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint16_t x130 = UINT16_MAX;
	volatile int16_t x131 = 10;
	int8_t x132 = -1;
	volatile int32_t t32 = 31;

	t32 = ((x129^x130)|(x131|x132));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MAX;
	static int8_t x134 = 15;
	int32_t x135 = INT32_MIN;
	static int16_t x136 = -1;
	volatile int32_t t33 = 89160481;

	t33 = ((x133^x134)|(x135|x136));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int64_t x137 = -322LL;
	int8_t x138 = 22;
	uint64_t x139 = UINT64_MAX;

	t34 = ((x137^x138)|(x139|x140));

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = -1;
	volatile int16_t x142 = INT16_MIN;
	static volatile int32_t x143 = INT32_MAX;
	int64_t x144 = INT64_MIN;
	int64_t t35 = 311919225LL;

	t35 = ((x141^x142)|(x143|x144));

	if (t35 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = 1;
	static uint16_t x146 = 2U;
	int16_t x148 = -12;
	int32_t t36 = 3;

	t36 = ((x145^x146)|(x147|x148));

	if (t36 != -9) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x149 = UINT16_MAX;
	int32_t x150 = INT32_MIN;
	uint32_t x151 = 6554U;
	int32_t x152 = -1;

	t37 = ((x149^x150)|(x151|x152));

	if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = 973661238423LL;
	static int32_t x155 = INT32_MIN;
	static volatile uint32_t x156 = UINT32_MAX;
	volatile int64_t t38 = -30LL;

	t38 = ((x153^x154)|(x155|x156));

	if (t38 != -970662608897LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x157 = INT64_MIN;
	static int32_t x158 = 226;
	int32_t x159 = -1;
	int16_t x160 = -144;
	int64_t t39 = 35248787LL;

	t39 = ((x157^x158)|(x159|x160));

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = INT64_MAX;
	uint64_t x162 = UINT64_MAX;
	int16_t x163 = 14;
	int16_t x164 = INT16_MIN;
	uint64_t t40 = 1351950337257963LLU;

	t40 = ((x161^x162)|(x163|x164));

	if (t40 != 18446744073709518862LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MAX;
	uint16_t x166 = UINT16_MAX;
	uint64_t x167 = 0LLU;
	static int64_t x168 = INT64_MAX;
	uint64_t t41 = 4488723LLU;

	t41 = ((x165^x166)|(x167|x168));

	if (t41 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x170 = 1LLU;
	static int16_t x171 = -22;
	volatile int64_t x172 = INT64_MIN;
	volatile uint64_t t42 = 5490964823LLU;

	t42 = ((x169^x170)|(x171|x172));

	if (t42 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x174 = UINT64_MAX;
	uint64_t x175 = 99018808201LLU;
	int16_t x176 = 49;
	volatile uint64_t t43 = 36064136458LLU;

	t43 = ((x173^x174)|(x175|x176));

	if (t43 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x177 = 21U;
	static int8_t x178 = INT8_MIN;
	uint32_t x179 = 12778U;
	uint64_t x180 = UINT64_MAX;
	static uint64_t t44 = UINT64_MAX;

	t44 = ((x177^x178)|(x179|x180));

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x182 = INT64_MIN;
	static int64_t x183 = INT64_MIN;
	uint8_t x184 = 2U;
	static int64_t t45 = -63813176976473289LL;

	t45 = ((x181^x182)|(x183|x184));

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x186 = 80790928LLU;
	uint8_t x187 = UINT8_MAX;
	volatile uint64_t t46 = UINT64_MAX;

	t46 = ((x185^x186)|(x187|x188));

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x189 = -1;
	static int64_t x190 = -1LL;
	static volatile uint64_t t47 = UINT64_MAX;

	t47 = ((x189^x190)|(x191|x192));

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x193 = INT32_MIN;
	static int64_t x194 = 8463298311081855LL;
	volatile int8_t x195 = INT8_MAX;
	int8_t x196 = INT8_MIN;
	int64_t t48 = -1LL;

	t48 = ((x193^x194)|(x195|x196));

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x197 = UINT8_MAX;
	uint16_t x198 = UINT16_MAX;
	uint8_t x199 = 13U;
	static int16_t x200 = INT16_MIN;
	volatile int32_t t49 = 2;

	t49 = ((x197^x198)|(x199|x200));

	if (t49 != -243) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = -1LL;
	int32_t x202 = -1;
	int8_t x203 = -1;

	t50 = ((x201^x202)|(x203|x204));

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = -1;
	static volatile int16_t x206 = 4;
	uint64_t x208 = 218346757LLU;
	static uint64_t t51 = UINT64_MAX;

	t51 = ((x205^x206)|(x207|x208));

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint64_t x209 = UINT64_MAX;
	int8_t x210 = INT8_MIN;
	uint16_t x212 = 3U;
	uint64_t t52 = 70370036LLU;

	t52 = ((x209^x210)|(x211|x212));

	if (t52 != 18446744071562068095LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x214 = 3072;
	int32_t x215 = INT32_MAX;
	int64_t x216 = -51117411971703846LL;
	int64_t t53 = -3912733LL;

	t53 = ((x213^x214)|(x215|x216));

	if (t53 != -51117410119319553LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x219 = UINT8_MAX;
	volatile int32_t x220 = -60563919;
	uint64_t t54 = 1LLU;

	t54 = ((x217^x218)|(x219|x220));

	if (t54 != 18446744073674678271LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x221 = INT16_MIN;
	int64_t x223 = INT64_MAX;
	int32_t x224 = -109385260;
	int64_t t55 = 2300434LL;

	t55 = ((x221^x222)|(x223|x224));

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x225 = -5;
	static int16_t x227 = INT16_MAX;
	int32_t x228 = INT32_MIN;
	uint32_t t56 = UINT32_MAX;

	t56 = ((x225^x226)|(x227|x228));

	if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = UINT64_MAX;
	volatile uint32_t x230 = 138672U;
	static int16_t x231 = INT16_MAX;
	static volatile uint64_t t57 = 56853278LLU;

	t57 = ((x229^x230)|(x231|x232));

	if (t57 != 18446744073709420543LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x233 = 3728714803LLU;
	static int8_t x234 = -1;
	uint64_t x235 = UINT64_MAX;
	int8_t x236 = -1;
	static uint64_t t58 = UINT64_MAX;

	t58 = ((x233^x234)|(x235|x236));

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = -6395;
	uint64_t x238 = 2LLU;
	static volatile uint64_t t59 = 140502447377318LLU;

	t59 = ((x237^x238)|(x239|x240));

	if (t59 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x241 = 3019922235615516LLU;
	int64_t x244 = -1LL;
	uint64_t t60 = UINT64_MAX;

	t60 = ((x241^x242)|(x243|x244));

	if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x246 = INT32_MIN;
	int16_t x247 = -1;
	volatile uint64_t x248 = 96164LLU;

	t61 = ((x245^x246)|(x247|x248));

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x249 = 11U;
	uint32_t x250 = 347892U;
	static uint64_t x251 = 211192LLU;
	volatile int8_t x252 = -9;
	static uint64_t t62 = UINT64_MAX;

	t62 = ((x249^x250)|(x251|x252));

	if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x253 = 2U;
	int64_t x255 = INT64_MIN;
	uint8_t x256 = UINT8_MAX;
	static volatile int64_t t63 = 90539171463726LL;

	t63 = ((x253^x254)|(x255|x256));

	if (t63 != -9223372036854772481LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = 817351LL;
	int64_t x258 = -1LL;
	int16_t x259 = -3335;
	volatile int64_t t64 = 0LL;

	t64 = ((x257^x258)|(x259|x260));

	if (t64 != -2055LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x261 = INT32_MIN;
	int64_t x262 = INT64_MAX;
	int64_t x263 = INT64_MAX;
	uint64_t x264 = 287762926628LLU;
	volatile uint64_t t65 = UINT64_MAX;

	t65 = ((x261^x262)|(x263|x264));

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x265 = UINT8_MAX;
	int64_t x267 = INT64_MAX;

	t66 = ((x265^x266)|(x267|x268));

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = 0;
	volatile uint8_t x270 = 96U;
	volatile int16_t x271 = -9;
	int64_t x272 = -1LL;
	int64_t t67 = 189696888496780LL;

	t67 = ((x269^x270)|(x271|x272));

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x274 = -1;
	int64_t x275 = INT64_MIN;
	int64_t t68 = 42387231LL;

	t68 = ((x273^x274)|(x275|x276));

	if (t68 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = -1;
	int8_t x278 = 18;
	int32_t x279 = -80783240;
	uint8_t x280 = 108U;
	int32_t t69 = -313093588;

	t69 = ((x277^x278)|(x279|x280));

	if (t69 != -3) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x281 = INT16_MIN;
	uint32_t x282 = UINT32_MAX;
	int8_t x283 = INT8_MIN;
	static int64_t x284 = INT64_MIN;
	int64_t t70 = 78LL;

	t70 = ((x281^x282)|(x283|x284));

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = -1;
	uint32_t x286 = 35191U;
	int16_t x287 = INT16_MIN;
	int64_t x288 = -1LL;

	t71 = ((x285^x286)|(x287|x288));

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x290 = INT8_MAX;
	uint32_t x291 = UINT32_MAX;
	static uint64_t t72 = UINT64_MAX;

	t72 = ((x289^x290)|(x291|x292));

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x293 = INT8_MIN;
	int8_t x294 = INT8_MIN;
	int64_t x295 = INT64_MAX;

	t73 = ((x293^x294)|(x295|x296));

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = INT16_MIN;
	int8_t x298 = INT8_MIN;
	volatile int16_t x299 = -1;
	volatile uint16_t x300 = 12341U;
	volatile int32_t t74 = 355537;

	t74 = ((x297^x298)|(x299|x300));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x301 = 10330610266835899LLU;
	int64_t x302 = INT64_MIN;
	volatile uint64_t t75 = UINT64_MAX;

	t75 = ((x301^x302)|(x303|x304));

	if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x306 = -1;
	int8_t x307 = -1;
	volatile int16_t x308 = INT16_MIN;
	volatile uint32_t t76 = UINT32_MAX;

	t76 = ((x305^x306)|(x307|x308));

	if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x309 = INT16_MIN;
	static int16_t x311 = INT16_MIN;
	uint8_t x312 = UINT8_MAX;
	volatile int64_t t77 = 4353616886LL;

	t77 = ((x309^x310)|(x311|x312));

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x314 = 12U;
	uint32_t x315 = UINT32_MAX;
	int32_t x316 = INT32_MIN;
	uint32_t t78 = UINT32_MAX;

	t78 = ((x313^x314)|(x315|x316));

	if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x317 = 4U;
	static int8_t x318 = INT8_MAX;
	uint8_t x319 = 42U;
	volatile int8_t x320 = INT8_MIN;
	volatile int32_t t79 = 1362802;

	t79 = ((x317^x318)|(x319|x320));

	if (t79 != -5) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x321 = 378706LLU;
	uint32_t x322 = 40224U;
	int64_t x323 = 1LL;
	static volatile int32_t x324 = INT32_MAX;
	uint64_t t80 = 18307LLU;

	t80 = ((x321^x322)|(x323|x324));

	if (t80 != 2147483647LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x325 = UINT16_MAX;
	int8_t x326 = INT8_MAX;
	uint16_t x327 = 12108U;
	volatile uint64_t t81 = UINT64_MAX;

	t81 = ((x325^x326)|(x327|x328));

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x329 = UINT16_MAX;
	volatile uint8_t x331 = 35U;
	uint16_t x332 = UINT16_MAX;
	volatile int32_t t82 = -849;

	t82 = ((x329^x330)|(x331|x332));

	if (t82 != 65535) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = INT32_MIN;
	int8_t x334 = 49;
	static uint16_t x336 = 103U;
	volatile uint32_t t83 = UINT32_MAX;

	t83 = ((x333^x334)|(x335|x336));

	if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x337 = INT8_MIN;
	static volatile int16_t x340 = 84;
	int64_t t84 = 6740245666977LL;

	t84 = ((x337^x338)|(x339|x340));

	if (t84 != -32641LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x341 = 18841U;
	int8_t x342 = -7;
	static volatile int32_t x343 = -15102;
	volatile uint64_t t85 = UINT64_MAX;

	t85 = ((x341^x342)|(x343|x344));

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int8_t x345 = INT8_MAX;
	int16_t x348 = -1;
	uint64_t t86 = UINT64_MAX;

	t86 = ((x345^x346)|(x347|x348));

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x349 = 1U;
	volatile int64_t x350 = -57675LL;
	int64_t x351 = INT64_MIN;
	int32_t x352 = INT32_MIN;
	volatile int64_t t87 = -15421LL;

	t87 = ((x349^x350)|(x351|x352));

	if (t87 != -57676LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x355 = 15U;
	volatile int32_t x356 = 71098808;

	t88 = ((x353^x354)|(x355|x356));

	if (t88 != -1537) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x357 = 30U;
	uint8_t x358 = 68U;
	uint16_t x359 = 23U;
	uint64_t t89 = 248402375057LLU;

	t89 = ((x357^x358)|(x359|x360));

	if (t89 != 854699197928631679LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = INT32_MIN;
	static uint32_t x362 = 590087015U;
	static uint16_t x364 = 1U;
	int64_t t90 = INT64_MAX;

	t90 = ((x361^x362)|(x363|x364));

	if (t90 != INT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x365 = 562U;
	volatile int8_t x367 = -1;
	static volatile int16_t x368 = -1;
	uint32_t t91 = UINT32_MAX;

	t91 = ((x365^x366)|(x367|x368));

	if (t91 != UINT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x371 = INT64_MAX;
	static int8_t x372 = 58;
	int64_t t92 = -14038289386972897LL;

	t92 = ((x369^x370)|(x371|x372));

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x373 = 7400393131LLU;
	int16_t x374 = INT16_MIN;
	static int32_t x375 = -14537458;
	int8_t x376 = INT8_MIN;

	t93 = ((x373^x374)|(x375|x376));

	if (t93 != 18446744073709551535LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x378 = 1898U;
	uint16_t x379 = 4690U;

	t94 = ((x377^x378)|(x379|x380));

	if (t94 != 18446744073709550327LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = INT64_MIN;
	volatile int64_t x382 = -1LL;
	static volatile int32_t x383 = -458680;
	uint64_t x384 = 5LLU;
	static volatile uint64_t t95 = UINT64_MAX;

	t95 = ((x381^x382)|(x383|x384));

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x386 = -745LL;
	static volatile int64_t x387 = INT64_MAX;
	volatile int64_t t96 = 27LL;

	t96 = ((x385^x386)|(x387|x388));

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x389 = UINT16_MAX;
	int8_t x390 = -1;
	uint32_t x392 = UINT32_MAX;
	volatile uint32_t t97 = UINT32_MAX;

	t97 = ((x389^x390)|(x391|x392));

	if (t97 != UINT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x393 = INT32_MAX;
	static int64_t x394 = INT64_MIN;
	static volatile uint8_t x395 = 94U;
	volatile uint16_t x396 = 12127U;

	t98 = ((x393^x394)|(x395|x396));

	if (t98 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x398 = INT64_MAX;
	uint64_t x399 = 91475800332256LLU;
	uint16_t x400 = 24462U;
	uint64_t t99 = 1281680797523LLU;

	t99 = ((x397^x398)|(x399|x400));

	if (t99 != 9223372036854775807LLU) { NG(); } else { ; }
	
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


    return 0;
}

