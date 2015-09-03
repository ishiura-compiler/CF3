#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x4 = 560;
int16_t x13 = 0;
volatile int16_t x15 = 5;
int32_t x23 = INT32_MAX;
static uint8_t x39 = 6U;
static int16_t x40 = INT16_MIN;
volatile int16_t x62 = INT16_MAX;
uint64_t x66 = 2566939779497782LLU;
int64_t x74 = INT64_MAX;
volatile uint16_t x76 = 10U;
volatile int16_t x92 = INT16_MAX;
int32_t x93 = INT32_MIN;
volatile int64_t x96 = INT64_MIN;
int64_t t23 = 1684032562462550649LL;
int8_t x98 = -1;
static uint64_t t24 = UINT64_MAX;
int8_t x103 = 0;
static int8_t x120 = INT8_MIN;
volatile int8_t x126 = 18;
uint64_t t31 = 89648377448041044LLU;
static int16_t x134 = -1;
static uint16_t x135 = 121U;
static int32_t x139 = INT32_MIN;
int64_t x144 = INT64_MIN;
static int64_t x148 = INT64_MIN;
uint32_t x150 = UINT32_MAX;
int8_t x153 = INT8_MAX;
int8_t x154 = INT8_MIN;
static int64_t x159 = 1577681299351LL;
uint8_t x163 = 38U;
static volatile uint64_t t40 = 14LLU;
uint64_t t41 = UINT64_MAX;
uint64_t t42 = UINT64_MAX;
static int8_t x182 = INT8_MIN;
uint8_t x183 = 29U;
uint16_t x187 = 153U;
uint64_t x191 = 544639365LLU;
volatile int16_t x196 = -141;
int64_t x199 = INT64_MAX;
static uint16_t x204 = UINT16_MAX;
int16_t x206 = 321;
int8_t x208 = INT8_MIN;
uint16_t x212 = 13U;
static int64_t t52 = 8899829288213LL;
int64_t t53 = -280992251159953855LL;
volatile int32_t x229 = INT32_MIN;
int8_t x230 = INT8_MAX;
static int32_t t57 = 43;
int16_t x233 = INT16_MIN;
volatile int32_t x235 = INT32_MIN;
int8_t x238 = INT8_MIN;
int16_t x240 = INT16_MIN;
volatile int64_t t60 = -2311937LL;
volatile int32_t x247 = 2351046;
int8_t x252 = -3;
volatile int64_t t62 = 260923665631980LL;
int8_t x253 = -1;
uint16_t x260 = 487U;
int8_t x262 = INT8_MIN;
int64_t t66 = 130LL;
static int64_t x272 = INT64_MIN;
int8_t x274 = 12;
int32_t t68 = -28464;
uint64_t x277 = UINT64_MAX;
int32_t x284 = 17564814;
int16_t x290 = 75;
int64_t x292 = -1LL;
int8_t x294 = 1;
volatile int64_t t73 = -11331633LL;
int8_t x300 = INT8_MAX;
int16_t x313 = -1;
volatile int64_t t78 = -3189730911LL;
static uint32_t x317 = 2531989U;
int32_t x328 = -1;
int16_t x337 = -1;
int32_t x341 = INT32_MIN;
int8_t x351 = INT8_MIN;
uint64_t t88 = UINT64_MAX;
int64_t x363 = -30111348088893LL;
uint8_t x365 = UINT8_MAX;
static int32_t t91 = -217131290;
uint8_t x370 = 0U;
int8_t x374 = INT8_MAX;
int32_t x375 = INT32_MIN;
uint64_t x378 = 6784325932467LLU;
int64_t x379 = INT64_MAX;
static int32_t x380 = -1;
int16_t x382 = 1;
static volatile uint32_t t95 = 6532U;
static uint64_t x386 = UINT64_MAX;
static volatile int16_t x388 = 3879;
static volatile uint64_t t96 = UINT64_MAX;
uint64_t x393 = 78LLU;
int32_t x399 = INT32_MAX;
int64_t t99 = -740LL;


void f0(void) {
	volatile uint16_t x1 = 4U;
	uint16_t x2 = UINT16_MAX;
	volatile int8_t x3 = INT8_MIN;
	volatile int32_t t0 = -3315799;

	t0 = ((x1|(x2^x3))|x4);

	if (t0 != -64897) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = INT8_MAX;
	int16_t x6 = -1;
	int16_t x7 = -1;
	int8_t x8 = INT8_MAX;
	int32_t t1 = -23;

	t1 = ((x5|(x6^x7))|x8);

	if (t1 != 127) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	static volatile uint8_t x10 = 19U;
	uint8_t x11 = 30U;
	int8_t x12 = 46;
	int64_t t2 = -373130749501294LL;

	t2 = ((x9|(x10^x11))|x12);

	if (t2 != -9223372036854775761LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x14 = -374;
	static uint32_t x16 = 21798150U;
	volatile uint32_t t3 = 43713U;

	t3 = ((x13|(x14^x15))|x16);

	if (t3 != 4294967183U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = 4;
	volatile int32_t x18 = -1;
	uint16_t x19 = 11781U;
	int32_t x20 = -1;
	volatile int32_t t4 = 31054;

	t4 = ((x17|(x18^x19))|x20);

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x21 = INT64_MIN;
	int64_t x22 = -56502364629069900LL;
	int16_t x24 = 1;
	volatile int64_t t5 = 942LL;

	t5 = ((x21|(x22^x23))|x24);

	if (t5 != -56502363129679797LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -11072244075904947LL;
	static int64_t x26 = -222526312273166LL;
	uint16_t x27 = UINT16_MAX;
	static uint16_t x28 = 2776U;
	int64_t t6 = -95213LL;

	t6 = ((x25|(x26^x27))|x28);

	if (t6 != -72708176093219LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = 0;
	static int8_t x30 = -1;
	uint64_t x31 = UINT64_MAX;
	volatile uint16_t x32 = 941U;
	volatile uint64_t t7 = 11644LLU;

	t7 = ((x29|(x30^x31))|x32);

	if (t7 != 941LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = UINT16_MAX;
	volatile int8_t x34 = INT8_MIN;
	volatile uint32_t x35 = 2372079U;
	int8_t x36 = INT8_MIN;
	uint32_t t8 = UINT32_MAX;

	t8 = ((x33|(x34^x35))|x36);

	if (t8 != UINT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x37 = -1;
	int8_t x38 = INT8_MIN;
	volatile int32_t t9 = 1828357;

	t9 = ((x37|(x38^x39))|x40);

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = UINT32_MAX;
	int16_t x42 = -1;
	uint8_t x43 = 25U;
	uint32_t x44 = 754115U;
	volatile uint32_t t10 = UINT32_MAX;

	t10 = ((x41|(x42^x43))|x44);

	if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MAX;
	int32_t x46 = -1;
	int32_t x47 = INT32_MIN;
	int16_t x48 = 0;
	static int32_t t11 = INT32_MAX;

	t11 = ((x45|(x46^x47))|x48);

	if (t11 != INT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x49 = INT16_MIN;
	static int64_t x50 = 403881015LL;
	int64_t x51 = INT64_MAX;
	volatile int32_t x52 = -1;
	static int64_t t12 = -82179LL;

	t12 = ((x49|(x50^x51))|x52);

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x53 = -1;
	static volatile int8_t x54 = INT8_MAX;
	static int8_t x55 = -1;
	uint8_t x56 = UINT8_MAX;
	static int32_t t13 = -233702768;

	t13 = ((x53|(x54^x55))|x56);

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = -6;
	uint64_t x58 = 906LLU;
	static int32_t x59 = INT32_MAX;
	int64_t x60 = INT64_MAX;
	static volatile uint64_t t14 = UINT64_MAX;

	t14 = ((x57|(x58^x59))|x60);

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MIN;
	uint16_t x63 = 216U;
	int32_t x64 = 2;
	static int64_t t15 = 125LL;

	t15 = ((x61|(x62^x63))|x64);

	if (t15 != -9223372036854743257LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MIN;
	int64_t x67 = INT64_MAX;
	static uint16_t x68 = 6U;
	uint64_t t16 = 5413LLU;

	t16 = ((x65|(x66^x67))|x68);

	if (t16 != 18444177133930053839LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int16_t x69 = INT16_MIN;
	int8_t x70 = -3;
	static uint32_t x71 = 56U;
	volatile int16_t x72 = INT16_MIN;
	volatile uint32_t t17 = 44U;

	t17 = ((x69|(x70^x71))|x72);

	if (t17 != 4294967237U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x73 = UINT64_MAX;
	volatile int64_t x75 = -421449763332721620LL;
	volatile uint64_t t18 = UINT64_MAX;

	t18 = ((x73|(x74^x75))|x76);

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x77 = -1LL;
	int64_t x78 = INT64_MAX;
	int8_t x79 = INT8_MAX;
	int64_t x80 = -3178176LL;
	volatile int64_t t19 = -11004592228LL;

	t19 = ((x77|(x78^x79))|x80);

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MAX;
	int64_t x82 = -1LL;
	static int8_t x83 = -12;
	uint8_t x84 = UINT8_MAX;
	volatile int64_t t20 = -618933LL;

	t20 = ((x81|(x82^x83))|x84);

	if (t20 != 255LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MAX;
	int32_t x86 = INT32_MIN;
	int32_t x87 = -1;
	volatile int64_t x88 = -1LL;
	int64_t t21 = 37721718LL;

	t21 = ((x85|(x86^x87))|x88);

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = 41U;
	uint32_t x90 = 634593869U;
	volatile uint8_t x91 = 85U;
	volatile uint32_t t22 = 962U;

	t22 = ((x89|(x90^x91))|x92);

	if (t22 != 634617855U) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x94 = UINT32_MAX;
	static volatile int8_t x95 = -13;

	t23 = ((x93|(x94^x95))|x96);

	if (t23 != -9223372034707292148LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x97 = UINT64_MAX;
	int32_t x99 = 0;
	int16_t x100 = INT16_MAX;

	t24 = ((x97|(x98^x99))|x100);

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = 454653909989518LLU;
	volatile int8_t x102 = INT8_MAX;
	uint8_t x104 = 24U;
	static volatile uint64_t t25 = 6509327LLU;

	t25 = ((x101|(x102^x103))|x104);

	if (t25 != 454653909989631LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x105 = INT64_MIN;
	static int16_t x106 = -54;
	uint32_t x107 = 6843U;
	volatile int32_t x108 = INT32_MAX;
	volatile int64_t t26 = -148709LL;

	t26 = ((x105|(x106^x107))|x108);

	if (t26 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = 244;
	volatile int32_t x110 = INT32_MIN;
	uint8_t x111 = UINT8_MAX;
	uint64_t x112 = 8106672110671586641LLU;
	volatile uint64_t t27 = 1LLU;

	t27 = ((x109|(x110^x111))|x112);

	if (t27 != 18446744073359681023LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x113 = 114U;
	uint16_t x114 = UINT16_MAX;
	int64_t x115 = INT64_MAX;
	static uint64_t x116 = 5365LLU;
	static volatile uint64_t t28 = 111869LLU;

	t28 = ((x113|(x114^x115))|x116);

	if (t28 != 9223372036854715639LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int8_t x117 = 0;
	volatile int64_t x118 = -4401580248135789LL;
	uint32_t x119 = 42310135U;
	int64_t t29 = 33070368658819266LL;

	t29 = ((x117|(x118^x119))|x120);

	if (t29 != -28LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x121 = 194U;
	int8_t x122 = -1;
	static int16_t x123 = INT16_MIN;
	volatile uint8_t x124 = 75U;
	volatile int32_t t30 = -26945;

	t30 = ((x121|(x122^x123))|x124);

	if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x125 = INT16_MIN;
	int8_t x127 = INT8_MIN;
	volatile uint64_t x128 = 1LLU;

	t31 = ((x125|(x126^x127))|x128);

	if (t31 != 18446744073709551507LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = INT16_MIN;
	static uint32_t x130 = 1748U;
	int16_t x131 = 1648;
	uint32_t x132 = UINT32_MAX;
	uint32_t t32 = UINT32_MAX;

	t32 = ((x129|(x130^x131))|x132);

	if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x133 = 331662U;
	int32_t x136 = -1;
	static uint32_t t33 = UINT32_MAX;

	t33 = ((x133|(x134^x135))|x136);

	if (t33 != UINT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x137 = UINT32_MAX;
	int16_t x138 = INT16_MIN;
	static int16_t x140 = -2;
	uint32_t t34 = UINT32_MAX;

	t34 = ((x137|(x138^x139))|x140);

	if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x141 = UINT8_MAX;
	int16_t x142 = -7539;
	volatile int32_t x143 = INT32_MIN;
	int64_t t35 = -2857194855LL;

	t35 = ((x141|(x142^x143))|x144);

	if (t35 != -9223372034707299585LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x145 = -1;
	uint8_t x146 = 1U;
	uint64_t x147 = 29366650485575333LLU;
	static volatile uint64_t t36 = UINT64_MAX;

	t36 = ((x145|(x146^x147))|x148);

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MIN;
	int32_t x151 = INT32_MIN;
	int32_t x152 = INT32_MIN;
	volatile uint32_t t37 = UINT32_MAX;

	t37 = ((x149|(x150^x151))|x152);

	if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x155 = -1LL;
	int16_t x156 = INT16_MAX;
	static volatile int64_t t38 = -940968976LL;

	t38 = ((x153|(x154^x155))|x156);

	if (t38 != 32767LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = 670923147960217849LLU;
	int8_t x158 = 15;
	volatile int32_t x160 = INT32_MIN;
	uint64_t t39 = 114790867271LLU;

	t39 = ((x157|(x158^x159))|x160);

	if (t39 != 18446744073539909625LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x161 = 97139504U;
	uint16_t x162 = 9157U;
	static uint64_t x164 = 6005833543468463292LLU;

	t40 = ((x161|(x162^x163))|x164);

	if (t40 != 6005833543557201919LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = UINT64_MAX;
	int32_t x166 = INT32_MIN;
	static int8_t x167 = -5;
	uint8_t x168 = UINT8_MAX;

	t41 = ((x165|(x166^x167))|x168);

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int64_t x169 = 120236341LL;
	static uint32_t x170 = UINT32_MAX;
	uint8_t x171 = 4U;
	volatile uint64_t x172 = UINT64_MAX;

	t42 = ((x169|(x170^x171))|x172);

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = -1;
	uint16_t x174 = 76U;
	static uint32_t x175 = UINT32_MAX;
	uint32_t x176 = 583692U;
	volatile uint32_t t43 = UINT32_MAX;

	t43 = ((x173|(x174^x175))|x176);

	if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = 129U;
	int64_t x178 = INT64_MIN;
	static int64_t x179 = -123018LL;
	int64_t x180 = -1LL;
	volatile int64_t t44 = 22448108LL;

	t44 = ((x177|(x178^x179))|x180);

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = -1;
	static int32_t x184 = INT32_MIN;
	int32_t t45 = 3334393;

	t45 = ((x181|(x182^x183))|x184);

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int16_t x185 = INT16_MIN;
	static uint64_t x186 = UINT64_MAX;
	static int16_t x188 = INT16_MAX;
	uint64_t t46 = UINT64_MAX;

	t46 = ((x185|(x186^x187))|x188);

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x189 = 63U;
	int16_t x190 = INT16_MAX;
	volatile int16_t x192 = -11295;
	static volatile uint64_t t47 = 1982811257637LLU;

	t47 = ((x189|(x190^x191))|x192);

	if (t47 != 18446744073709549567LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x193 = 115426059U;
	static uint64_t x194 = UINT64_MAX;
	volatile int16_t x195 = INT16_MIN;
	uint64_t t48 = UINT64_MAX;

	t48 = ((x193|(x194^x195))|x196);

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = INT16_MIN;
	int32_t x198 = -5;
	int32_t x200 = -1;
	static volatile int64_t t49 = -49759264172424LL;

	t49 = ((x197|(x198^x199))|x200);

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = 18;
	int8_t x202 = 8;
	volatile int16_t x203 = INT16_MIN;
	volatile int32_t t50 = 122129226;

	t50 = ((x201|(x202^x203))|x204);

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = INT64_MAX;
	int16_t x207 = INT16_MIN;
	volatile int64_t t51 = -243752790106040092LL;

	t51 = ((x205|(x206^x207))|x208);

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x209 = INT8_MIN;
	uint8_t x210 = 23U;
	int64_t x211 = -1LL;

	t52 = ((x209|(x210^x211))|x212);

	if (t52 != -19LL) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint8_t x213 = 26U;
	int8_t x214 = -1;
	int8_t x215 = INT8_MAX;
	volatile int64_t x216 = INT64_MIN;

	t53 = ((x213|(x214^x215))|x216);

	if (t53 != -102LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x217 = 7454U;
	int64_t x218 = INT64_MIN;
	int16_t x219 = 0;
	volatile uint64_t x220 = UINT64_MAX;
	volatile uint64_t t54 = UINT64_MAX;

	t54 = ((x217|(x218^x219))|x220);

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = -1LL;
	int32_t x222 = 357;
	int16_t x223 = 35;
	int8_t x224 = -14;
	static int64_t t55 = 61320222830659759LL;

	t55 = ((x221|(x222^x223))|x224);

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = -16;
	int16_t x226 = INT16_MIN;
	volatile int64_t x227 = INT64_MIN;
	uint16_t x228 = 724U;
	int64_t t56 = 2184367656LL;

	t56 = ((x225|(x226^x227))|x228);

	if (t56 != -12LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x231 = INT32_MIN;
	static int8_t x232 = INT8_MIN;

	t57 = ((x229|(x230^x231))|x232);

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x234 = 3046230LLU;
	int8_t x236 = -53;
	uint64_t t58 = 2274626846043527LLU;

	t58 = ((x233|(x234^x235))|x236);

	if (t58 != 18446744073709551583LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x237 = 19U;
	volatile int32_t x239 = -1;
	int32_t t59 = -534349;

	t59 = ((x237|(x238^x239))|x240);

	if (t59 != -32641) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int8_t x241 = INT8_MIN;
	volatile int64_t x242 = -67674182789016370LL;
	int8_t x243 = -1;
	int64_t x244 = -1LL;

	t60 = ((x241|(x242^x243))|x244);

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x245 = 12396U;
	int8_t x246 = INT8_MAX;
	int8_t x248 = INT8_MIN;
	int32_t t61 = 151;

	t61 = ((x245|(x246^x247))|x248);

	if (t61 != -3) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x249 = INT32_MAX;
	int32_t x250 = INT32_MIN;
	int64_t x251 = INT64_MAX;

	t62 = ((x249|(x250^x251))|x252);

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x254 = UINT64_MAX;
	static uint64_t x255 = 136294LLU;
	static int32_t x256 = INT32_MIN;
	static volatile uint64_t t63 = UINT64_MAX;

	t63 = ((x253|(x254^x255))|x256);

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = INT16_MIN;
	static int32_t x258 = 211;
	int8_t x259 = -1;
	volatile int32_t t64 = 1;

	t64 = ((x257|(x258^x259))|x260);

	if (t64 != -17) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x261 = 2U;
	static uint16_t x263 = UINT16_MAX;
	int8_t x264 = INT8_MIN;
	uint32_t t65 = UINT32_MAX;

	t65 = ((x261|(x262^x263))|x264);

	if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = INT64_MAX;
	static volatile int64_t x266 = INT64_MIN;
	uint16_t x267 = 22U;
	int64_t x268 = INT64_MIN;

	t66 = ((x265|(x266^x267))|x268);

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = 9144226;
	uint64_t x270 = 30LLU;
	int16_t x271 = -1448;
	static volatile uint64_t t67 = 3167464383383LLU;

	t67 = ((x269|(x270^x271))|x272);

	if (t67 != 18446744073709551590LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x273 = INT32_MIN;
	uint16_t x275 = 12U;
	int32_t x276 = -291342530;

	t68 = ((x273|(x274^x275))|x276);

	if (t68 != -291342530) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x278 = 47;
	volatile int64_t x279 = INT64_MIN;
	volatile int64_t x280 = -4457534569369907346LL;
	static uint64_t t69 = UINT64_MAX;

	t69 = ((x277|(x278^x279))|x280);

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x281 = UINT64_MAX;
	uint32_t x282 = 35742U;
	static uint8_t x283 = 37U;
	volatile uint64_t t70 = UINT64_MAX;

	t70 = ((x281|(x282^x283))|x284);

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x285 = INT64_MAX;
	static int8_t x286 = 3;
	int16_t x287 = 1;
	uint16_t x288 = 15U;
	int64_t t71 = INT64_MAX;

	t71 = ((x285|(x286^x287))|x288);

	if (t71 != INT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x289 = 2231U;
	volatile uint8_t x291 = 96U;
	volatile int64_t t72 = -1120042193522515LL;

	t72 = ((x289|(x290^x291))|x292);

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = INT64_MAX;
	int32_t x295 = INT32_MIN;
	int64_t x296 = 61607531642045LL;

	t73 = ((x293|(x294^x295))|x296);

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x297 = -1;
	uint64_t x298 = 14005548903574LLU;
	static volatile int16_t x299 = -669;
	volatile uint64_t t74 = UINT64_MAX;

	t74 = ((x297|(x298^x299))|x300);

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x301 = 3079980606910459347LLU;
	int16_t x302 = -1;
	int64_t x303 = INT64_MAX;
	volatile int16_t x304 = 15293;
	volatile uint64_t t75 = 1790637525751LLU;

	t75 = ((x301|(x302^x303))|x304);

	if (t75 != 12303352643765239807LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x305 = 6298U;
	static volatile int32_t x306 = INT32_MIN;
	int64_t x307 = INT64_MAX;
	static int8_t x308 = -19;
	volatile int64_t t76 = 4404017876742223LL;

	t76 = ((x305|(x306^x307))|x308);

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x309 = INT64_MIN;
	int32_t x310 = INT32_MIN;
	int16_t x311 = 686;
	volatile int32_t x312 = 28;
	static volatile int64_t t77 = 4010LL;

	t77 = ((x309|(x310^x311))|x312);

	if (t77 != -2147482946LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x314 = INT64_MIN;
	int32_t x315 = -15580;
	uint32_t x316 = UINT32_MAX;

	t78 = ((x313|(x314^x315))|x316);

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int16_t x318 = 12574;
	int8_t x319 = INT8_MAX;
	int16_t x320 = 15699;
	volatile uint32_t t79 = 50982919U;

	t79 = ((x317|(x318^x319))|x320);

	if (t79 != 2539511U) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = INT16_MAX;
	int16_t x322 = -2878;
	uint32_t x323 = UINT32_MAX;
	static int8_t x324 = 0;
	uint32_t t80 = 4U;

	t80 = ((x321|(x322^x323))|x324);

	if (t80 != 32767U) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x325 = -1;
	int16_t x326 = INT16_MIN;
	int64_t x327 = -1754932960247892LL;
	int64_t t81 = 923LL;

	t81 = ((x325|(x326^x327))|x328);

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x329 = UINT32_MAX;
	static int32_t x330 = INT32_MIN;
	int32_t x331 = INT32_MAX;
	uint64_t x332 = 9540707354194LLU;
	static uint64_t t82 = 15547261622322LLU;

	t82 = ((x329|(x330^x331))|x332);

	if (t82 != 9543417331711LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x333 = INT8_MAX;
	int32_t x334 = INT32_MIN;
	uint64_t x335 = 883844592LLU;
	static uint64_t x336 = 3391071127LLU;
	volatile uint64_t t83 = 42787699777387LLU;

	t83 = ((x333|(x334^x335))|x336);

	if (t83 != 18446744073688573951LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x338 = 59334781U;
	static uint64_t x339 = UINT64_MAX;
	uint64_t x340 = 546815568399158335LLU;
	volatile uint64_t t84 = UINT64_MAX;

	t84 = ((x337|(x338^x339))|x340);

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x342 = INT8_MIN;
	int8_t x343 = -1;
	uint8_t x344 = UINT8_MAX;
	volatile int32_t t85 = -72;

	t85 = ((x341|(x342^x343))|x344);

	if (t85 != -2147483393) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x345 = -1;
	uint8_t x346 = UINT8_MAX;
	static uint8_t x347 = 7U;
	uint32_t x348 = UINT32_MAX;
	volatile uint32_t t86 = UINT32_MAX;

	t86 = ((x345|(x346^x347))|x348);

	if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x349 = -14;
	uint64_t x350 = 693157505LLU;
	int64_t x352 = INT64_MAX;
	uint64_t t87 = UINT64_MAX;

	t87 = ((x349|(x350^x351))|x352);

	if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = -1;
	uint64_t x354 = 841509300461668LLU;
	volatile int64_t x355 = 26256LL;
	int64_t x356 = 171160980940318944LL;

	t88 = ((x353|(x354^x355))|x356);

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = 50697080957722LL;
	int16_t x358 = 224;
	static volatile int16_t x359 = -1;
	static volatile uint8_t x360 = UINT8_MAX;
	int64_t t89 = 148027142LL;

	t89 = ((x357|(x358^x359))|x360);

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = -1LL;
	uint16_t x362 = UINT16_MAX;
	uint16_t x364 = 14U;
	int64_t t90 = 3456890LL;

	t90 = ((x361|(x362^x363))|x364);

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x366 = INT8_MIN;
	static uint8_t x367 = 1U;
	static uint16_t x368 = UINT16_MAX;

	t91 = ((x365|(x366^x367))|x368);

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x369 = INT8_MIN;
	uint16_t x371 = UINT16_MAX;
	volatile int16_t x372 = INT16_MIN;
	int32_t t92 = 20821;

	t92 = ((x369|(x370^x371))|x372);

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = -1LL;
	int64_t x376 = INT64_MIN;
	static volatile int64_t t93 = 0LL;

	t93 = ((x373|(x374^x375))|x376);

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = INT16_MIN;
	uint64_t t94 = UINT64_MAX;

	t94 = ((x377|(x378^x379))|x380);

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x381 = 127301U;
	static int8_t x383 = INT8_MAX;
	static uint16_t x384 = 20301U;

	t95 = ((x381|(x382^x383))|x384);

	if (t95 != 130943U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = INT8_MAX;
	static uint16_t x387 = 2U;

	t96 = ((x385|(x386^x387))|x388);

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x389 = 0U;
	uint32_t x390 = 25U;
	uint32_t x391 = 16706541U;
	int64_t x392 = -1LL;
	volatile int64_t t97 = 705275086LL;

	t97 = ((x389|(x390^x391))|x392);

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x394 = 24525689U;
	uint64_t x395 = 2180623820829LLU;
	uint8_t x396 = UINT8_MAX;
	static uint64_t t98 = 26800652053LLU;

	t98 = ((x393|(x394^x395))|x396);

	if (t98 != 2180605596671LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x397 = 8U;
	static int64_t x398 = INT64_MIN;
	static int64_t x400 = -1LL;

	t99 = ((x397|(x398^x399))|x400);

	if (t99 != -1LL) { NG(); } else { ; }
	
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

