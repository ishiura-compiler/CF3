#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x8 = -13472702095218LL;
static volatile int8_t x13 = INT8_MIN;
uint16_t x15 = UINT16_MAX;
uint16_t x16 = UINT16_MAX;
int16_t x28 = INT16_MIN;
volatile int16_t x42 = INT16_MIN;
int64_t x44 = -1LL;
static int32_t x57 = -1;
int64_t x60 = 971675893520LL;
int8_t x65 = -1;
uint32_t x89 = 13252745U;
int64_t t15 = -869225783810118LL;
int16_t x101 = INT16_MIN;
static int8_t x104 = -21;
volatile int32_t t16 = -919571;
int64_t t17 = 115298589LL;
uint32_t x109 = UINT32_MAX;
volatile int32_t x111 = -1275233;
static int8_t x124 = INT8_MAX;
volatile uint64_t t21 = 1796LLU;
uint64_t x128 = 105812098LLU;
uint64_t t23 = 505501964548924084LLU;
volatile uint8_t x138 = UINT8_MAX;
static volatile int16_t x139 = -1;
uint64_t x143 = 380126LLU;
uint64_t x146 = 840497560644LLU;
static volatile int32_t x154 = -1;
volatile int32_t x161 = -1;
volatile int64_t t29 = -6745976447LL;
int64_t x171 = -110886170LL;
uint64_t t31 = 1033212LLU;
uint32_t x173 = 208025U;
static uint64_t x174 = 28180408575296156LLU;
static volatile uint8_t x175 = 0U;
uint64_t t32 = 3015LLU;
int32_t x185 = INT32_MAX;
int64_t x187 = -76099LL;
static volatile int32_t x188 = -7;
static int8_t x194 = INT8_MIN;
uint64_t x195 = UINT64_MAX;
static int8_t x197 = INT8_MIN;
uint64_t x199 = 2580723520LLU;
static int32_t x204 = -60646016;
int8_t x215 = INT8_MIN;
static int32_t x216 = -21;
int32_t t41 = 11952112;
uint8_t x221 = UINT8_MAX;
static volatile int64_t x222 = 0LL;
int32_t x225 = -5716340;
int64_t x227 = 15927833998372LL;
static int8_t x228 = -3;
int16_t x251 = INT16_MIN;
static int8_t x253 = -1;
int16_t x256 = -364;
volatile uint32_t t51 = 257400U;
volatile uint16_t x265 = 740U;
uint32_t x266 = 4U;
int16_t x274 = -7533;
uint32_t x275 = 3300165U;
uint64_t t56 = 127541746921LLU;
static volatile uint8_t x289 = 1U;
int64_t x290 = -1LL;
uint8_t x293 = 2U;
uint64_t x296 = 1LLU;
static uint8_t x307 = 34U;
uint16_t x311 = 227U;
static int8_t x324 = INT8_MAX;
int64_t t63 = -15LL;
uint32_t t64 = 171530105U;
static int32_t x330 = INT32_MIN;
uint32_t x332 = UINT32_MAX;
int64_t x335 = -1LL;
volatile int64_t t66 = -1371803183671766786LL;
uint16_t x343 = 5U;
uint32_t t70 = 1485U;
static volatile int32_t x356 = 162742033;
uint16_t x360 = 10233U;
int16_t x365 = 0;
uint32_t x368 = 14910U;
volatile int64_t t75 = 5631LL;
int64_t x391 = -406460LL;
uint64_t x396 = 234710775LLU;
int64_t t81 = -58996LL;
int16_t x427 = INT16_MIN;
static volatile uint16_t x429 = 3282U;
uint32_t x432 = 3623U;
int16_t x443 = -1;
uint16_t x448 = 1U;
volatile int8_t x458 = 1;
int32_t x469 = 20273;
int16_t x473 = 2020;
int8_t x475 = INT8_MIN;
uint32_t x479 = 11U;
volatile int8_t x481 = -1;
int8_t x488 = -4;
static volatile uint8_t x494 = 13U;
uint64_t x497 = 20694979757672290LLU;
int16_t x507 = -1;
int8_t x511 = -1;


void f0(void) {
	uint8_t x1 = 6U;
	uint64_t x2 = 564884LLU;
	uint8_t x3 = 1U;
	int8_t x4 = INT8_MAX;
	volatile uint64_t t0 = 14774656LLU;

	t0 = (((x1*x2)&x3)+x4);

	if (t0 != 127LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = -1;
	static uint8_t x6 = UINT8_MAX;
	static int16_t x7 = INT16_MAX;
	volatile int64_t t1 = 11683610LL;

	t1 = (((x5*x6)&x7)+x8);

	if (t1 != -13472702062705LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x14 = 3;
	volatile int32_t t2 = 34;

	t2 = (((x13*x14)&x15)+x16);

	if (t2 != 130687) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x17 = INT8_MAX;
	uint32_t x18 = UINT32_MAX;
	uint32_t x19 = UINT32_MAX;
	int32_t x20 = -1;
	uint32_t t3 = 24U;

	t3 = (((x17*x18)&x19)+x20);

	if (t3 != 4294967168U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x25 = 0U;
	static uint16_t x26 = UINT16_MAX;
	uint8_t x27 = UINT8_MAX;
	volatile int32_t t4 = -553;

	t4 = (((x25*x26)&x27)+x28);

	if (t4 != -32768) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x37 = 4198524464155LLU;
	int8_t x38 = INT8_MIN;
	volatile int32_t x39 = -1;
	volatile int32_t x40 = -1;
	static volatile uint64_t t5 = 4690360557132LLU;

	t5 = (((x37*x38)&x39)+x40);

	if (t5 != 18446206662578139775LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x41 = 1U;
	int32_t x43 = -1;
	static volatile int64_t t6 = 32380732977535729LL;

	t6 = (((x41*x42)&x43)+x44);

	if (t6 != -32769LL) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int16_t x49 = INT16_MIN;
	int16_t x50 = INT16_MAX;
	uint8_t x51 = UINT8_MAX;
	static volatile uint8_t x52 = 60U;
	static int32_t t7 = -866500177;

	t7 = (((x49*x50)&x51)+x52);

	if (t7 != 60) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x58 = 107588913U;
	int8_t x59 = -1;
	int64_t t8 = 225058030LL;

	t8 = (((x57*x58)&x59)+x60);

	if (t8 != 975863271903LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x66 = 8052273U;
	int32_t x67 = 8;
	volatile int32_t x68 = INT32_MAX;
	volatile uint32_t t9 = 236U;

	t9 = (((x65*x66)&x67)+x68);

	if (t9 != 2147483655U) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint16_t x69 = UINT16_MAX;
	volatile int8_t x70 = INT8_MIN;
	static int32_t x71 = INT32_MAX;
	volatile int64_t x72 = 106LL;
	int64_t t10 = -409796LL;

	t10 = (((x69*x70)&x71)+x72);

	if (t10 != 2139095274LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x73 = 503614938U;
	static int16_t x74 = -1;
	int64_t x75 = -288LL;
	int32_t x76 = INT32_MIN;
	volatile int64_t t11 = 7147668928014LL;

	t11 = (((x73*x74)&x75)+x76);

	if (t11 != 1643868704LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x77 = -1;
	int64_t x78 = -101115019757LL;
	int16_t x79 = INT16_MAX;
	int8_t x80 = INT8_MIN;
	static volatile int64_t t12 = -86796963517988950LL;

	t12 = (((x77*x78)&x79)+x80);

	if (t12 != 16749LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x81 = 3983;
	static uint64_t x82 = 33437059323550LLU;
	volatile uint16_t x83 = UINT16_MAX;
	int64_t x84 = -3765851LL;
	volatile uint64_t t13 = 2242522264813066691LLU;

	t13 = (((x81*x82)&x83)+x84);

	if (t13 != 18446744073705844199LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x85 = UINT32_MAX;
	int8_t x86 = -1;
	int8_t x87 = 15;
	volatile int32_t x88 = INT32_MAX;
	uint32_t t14 = 189U;

	t14 = (((x85*x86)&x87)+x88);

	if (t14 != 2147483648U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x90 = -1;
	volatile int64_t x91 = -1616LL;
	int64_t x92 = 568430644LL;

	t15 = (((x89*x90)&x91)+x92);

	if (t15 != 4850143588LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x102 = -1;
	static int8_t x103 = INT8_MIN;

	t16 = (((x101*x102)&x103)+x104);

	if (t16 != 32747) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x105 = -1LL;
	uint8_t x106 = UINT8_MAX;
	static int8_t x107 = 5;
	int64_t x108 = 81140873LL;

	t17 = (((x105*x106)&x107)+x108);

	if (t17 != 81140874LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x110 = INT8_MIN;
	static int64_t x112 = INT64_MIN;
	int64_t t18 = -252LL;

	t18 = (((x109*x110)&x111)+x112);

	if (t18 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x113 = 1;
	int16_t x114 = 131;
	int8_t x115 = INT8_MIN;
	uint8_t x116 = 3U;
	int32_t t19 = -1;

	t19 = (((x113*x114)&x115)+x116);

	if (t19 != 131) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x117 = 2U;
	int8_t x118 = -1;
	int8_t x119 = INT8_MIN;
	int8_t x120 = -30;
	int32_t t20 = 0;

	t20 = (((x117*x118)&x119)+x120);

	if (t20 != -158) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x121 = 9087904LLU;
	int16_t x122 = INT16_MAX;
	uint32_t x123 = 1U;

	t21 = (((x121*x122)&x123)+x124);

	if (t21 != 127LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x125 = 35U;
	uint32_t x126 = 2090U;
	static int64_t x127 = INT64_MIN;
	uint64_t t22 = 6521148870618039LLU;

	t22 = (((x125*x126)&x127)+x128);

	if (t22 != 105812098LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x133 = -1918209717LL;
	static int8_t x134 = INT8_MIN;
	uint64_t x135 = 7859552358LLU;
	static uint8_t x136 = 3U;

	t23 = (((x133*x134)&x135)+x136);

	if (t23 != 4299636739LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x137 = UINT64_MAX;
	static int8_t x140 = 2;
	uint64_t t24 = 24613544LLU;

	t24 = (((x137*x138)&x139)+x140);

	if (t24 != 18446744073709551363LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x141 = -1;
	uint32_t x142 = UINT32_MAX;
	volatile uint16_t x144 = UINT16_MAX;
	uint64_t t25 = 1208661256013672LLU;

	t25 = (((x141*x142)&x143)+x144);

	if (t25 != 65535LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x145 = INT16_MIN;
	uint64_t x147 = UINT64_MAX;
	int32_t x148 = -111594;
	volatile uint64_t t26 = 99182454021LLU;

	t26 = (((x145*x146)&x147)+x148);

	if (t26 != 18419202649642257430LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x153 = 12U;
	volatile uint32_t x155 = 0U;
	static int16_t x156 = INT16_MIN;
	volatile uint32_t t27 = 43932U;

	t27 = (((x153*x154)&x155)+x156);

	if (t27 != 4294934528U) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x157 = -1LL;
	static int8_t x158 = 0;
	int16_t x159 = -1;
	int32_t x160 = INT32_MAX;
	static int64_t t28 = 1052541532LL;

	t28 = (((x157*x158)&x159)+x160);

	if (t28 != 2147483647LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x162 = UINT8_MAX;
	volatile int64_t x163 = -1442689741541631455LL;
	uint8_t x164 = 0U;

	t29 = (((x161*x162)&x163)+x164);

	if (t29 != -1442689741541631487LL) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint32_t x165 = 24672545U;
	int16_t x166 = -453;
	uint16_t x167 = 233U;
	volatile int64_t x168 = -1LL;
	int64_t t30 = -7151377LL;

	t30 = (((x165*x166)&x167)+x168);

	if (t30 != 136LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x169 = UINT64_MAX;
	volatile uint32_t x170 = 433U;
	uint64_t x172 = 16947616981787645LLU;

	t31 = (((x169*x170)&x171)+x172);

	if (t31 != 16947616870901315LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x176 = 1576427U;

	t32 = (((x173*x174)&x175)+x176);

	if (t32 != 1576427LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x177 = 53;
	uint16_t x178 = UINT16_MAX;
	int64_t x179 = -33440346424286LL;
	static volatile int64_t x180 = INT64_MIN;
	int64_t t33 = -104LL;

	t33 = (((x177*x178)&x179)+x180);

	if (t33 != -9223372036854465534LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x181 = 2U;
	uint64_t x182 = UINT64_MAX;
	int16_t x183 = INT16_MIN;
	static volatile int8_t x184 = INT8_MIN;
	static uint64_t t34 = 2047977019428625LLU;

	t34 = (((x181*x182)&x183)+x184);

	if (t34 != 18446744073709518720LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x186 = -1;
	static volatile int64_t t35 = -7429LL;

	t35 = (((x185*x186)&x187)+x188);

	if (t35 != -2147483654LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x193 = 27652LL;
	uint64_t x196 = UINT64_MAX;
	static uint64_t t36 = 3416612LLU;

	t36 = (((x193*x194)&x195)+x196);

	if (t36 != 18446744073706012159LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x198 = -1;
	volatile uint8_t x200 = 3U;
	volatile uint64_t t37 = 57235291820812LLU;

	t37 = (((x197*x198)&x199)+x200);

	if (t37 != 3LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x201 = 330;
	int8_t x202 = -1;
	static int8_t x203 = INT8_MIN;
	volatile int32_t t38 = 3;

	t38 = (((x201*x202)&x203)+x204);

	if (t38 != -60646400) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x205 = -8526;
	int16_t x206 = -1;
	int32_t x207 = INT32_MIN;
	static int32_t x208 = INT32_MAX;
	volatile int32_t t39 = INT32_MAX;

	t39 = (((x205*x206)&x207)+x208);

	if (t39 != INT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x209 = 858156U;
	uint64_t x210 = UINT64_MAX;
	int32_t x211 = INT32_MIN;
	volatile int16_t x212 = 22;
	uint64_t t40 = 1911145403386LLU;

	t40 = (((x209*x210)&x211)+x212);

	if (t40 != 18446744071562067990LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x213 = INT8_MAX;
	static volatile uint16_t x214 = 26610U;

	t41 = (((x213*x214)&x215)+x216);

	if (t41 != 3379435) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x217 = UINT32_MAX;
	int16_t x218 = -1;
	static volatile uint16_t x219 = UINT16_MAX;
	static int8_t x220 = -1;
	uint32_t t42 = 24U;

	t42 = (((x217*x218)&x219)+x220);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x223 = INT32_MIN;
	uint8_t x224 = 6U;
	volatile int64_t t43 = 84217274LL;

	t43 = (((x221*x222)&x223)+x224);

	if (t43 != 6LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x226 = -1;
	int64_t t44 = 9LL;

	t44 = (((x225*x226)&x227)+x228);

	if (t44 != 4403233LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x229 = -1;
	int32_t x230 = -1;
	volatile int32_t x231 = INT32_MIN;
	int16_t x232 = INT16_MIN;
	volatile int32_t t45 = 137;

	t45 = (((x229*x230)&x231)+x232);

	if (t45 != -32768) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int64_t x237 = -418254674LL;
	static uint16_t x238 = 3953U;
	int32_t x239 = INT32_MAX;
	static volatile uint16_t x240 = 3854U;
	static int64_t t46 = 456544781421762LL;

	t46 = (((x237*x238)&x239)+x240);

	if (t46 != 201686492LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x241 = INT32_MAX;
	int8_t x242 = -1;
	volatile int32_t x243 = INT32_MAX;
	int16_t x244 = INT16_MAX;
	static int32_t t47 = -1015883522;

	t47 = (((x241*x242)&x243)+x244);

	if (t47 != 32768) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x249 = 2;
	uint32_t x250 = 2271U;
	int8_t x252 = INT8_MIN;
	uint32_t t48 = 741327U;

	t48 = (((x249*x250)&x251)+x252);

	if (t48 != 4294967168U) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x254 = INT32_MAX;
	uint16_t x255 = 8U;
	volatile int32_t t49 = 31;

	t49 = (((x253*x254)&x255)+x256);

	if (t49 != -364) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x257 = INT16_MIN;
	static int64_t x258 = -1LL;
	uint64_t x259 = 77876479LLU;
	uint32_t x260 = UINT32_MAX;
	volatile uint64_t t50 = 5745626938LLU;

	t50 = (((x257*x258)&x259)+x260);

	if (t50 != 4294967295LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x261 = INT8_MIN;
	uint32_t x262 = 92717944U;
	uint32_t x263 = 1U;
	static int32_t x264 = 727;

	t51 = (((x261*x262)&x263)+x264);

	if (t51 != 727U) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x267 = INT32_MIN;
	int32_t x268 = INT32_MAX;
	uint32_t t52 = 6U;

	t52 = (((x265*x266)&x267)+x268);

	if (t52 != 2147483647U) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x269 = -6;
	int8_t x270 = INT8_MIN;
	int64_t x271 = INT64_MIN;
	int32_t x272 = -1;
	static volatile int64_t t53 = -74201210039385LL;

	t53 = (((x269*x270)&x271)+x272);

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x273 = 92U;
	uint64_t x276 = UINT64_MAX;
	volatile uint64_t t54 = 8569850LLU;

	t54 = (((x273*x274)&x275)+x276);

	if (t54 != 3164227LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x277 = 43U;
	int8_t x278 = -29;
	uint16_t x279 = UINT16_MAX;
	uint16_t x280 = 1U;
	volatile int32_t t55 = 229225896;

	t55 = (((x277*x278)&x279)+x280);

	if (t55 != 64290) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint16_t x281 = UINT16_MAX;
	uint64_t x282 = 1785935950523589LLU;
	int64_t x283 = -1LL;
	int8_t x284 = INT8_MIN;

	t56 = (((x281*x282)&x283)+x284);

	if (t56 != 6360848075306095291LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x291 = INT8_MIN;
	volatile uint16_t x292 = 22U;
	volatile int64_t t57 = -3234589296638060LL;

	t57 = (((x289*x290)&x291)+x292);

	if (t57 != -106LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x294 = 1;
	static int64_t x295 = INT64_MAX;
	static volatile uint64_t t58 = 34241273427915163LLU;

	t58 = (((x293*x294)&x295)+x296);

	if (t58 != 3LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x297 = 119U;
	uint64_t x298 = UINT64_MAX;
	int16_t x299 = INT16_MIN;
	int8_t x300 = -1;
	uint64_t t59 = 2932915523LLU;

	t59 = (((x297*x298)&x299)+x300);

	if (t59 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x305 = 6798U;
	int8_t x306 = -1;
	int8_t x308 = INT8_MAX;
	uint32_t t60 = 1705640182U;

	t60 = (((x305*x306)&x307)+x308);

	if (t60 != 161U) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x309 = -72LL;
	static int8_t x310 = 0;
	uint16_t x312 = 25014U;
	static volatile int64_t t61 = 2436843000567LL;

	t61 = (((x309*x310)&x311)+x312);

	if (t61 != 25014LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x313 = INT16_MIN;
	uint32_t x314 = 51142622U;
	volatile int16_t x315 = 1497;
	volatile int64_t x316 = -1LL;
	int64_t t62 = 450966020362549LL;

	t62 = (((x313*x314)&x315)+x316);

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x321 = INT32_MIN;
	int64_t x322 = -5LL;
	int8_t x323 = INT8_MIN;

	t63 = (((x321*x322)&x323)+x324);

	if (t63 != 10737418367LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x325 = 75962440;
	int8_t x326 = -28;
	uint32_t x327 = UINT32_MAX;
	int8_t x328 = -1;

	t64 = (((x325*x326)&x327)+x328);

	if (t64 != 2168018975U) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x329 = 1;
	uint8_t x331 = UINT8_MAX;
	uint32_t t65 = UINT32_MAX;

	t65 = (((x329*x330)&x331)+x332);

	if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x333 = 0;
	int8_t x334 = -39;
	static int32_t x336 = INT32_MAX;

	t66 = (((x333*x334)&x335)+x336);

	if (t66 != 2147483647LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x337 = -1;
	int8_t x338 = INT8_MIN;
	int8_t x339 = -1;
	uint32_t x340 = 29140802U;
	volatile uint32_t t67 = 35U;

	t67 = (((x337*x338)&x339)+x340);

	if (t67 != 29140930U) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x341 = INT32_MIN;
	uint32_t x342 = 6U;
	int64_t x344 = INT64_MAX;
	int64_t t68 = INT64_MAX;

	t68 = (((x341*x342)&x343)+x344);

	if (t68 != INT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x345 = INT8_MIN;
	static uint16_t x346 = 437U;
	int32_t x347 = INT32_MAX;
	static int16_t x348 = -1;
	int32_t t69 = -165599368;

	t69 = (((x345*x346)&x347)+x348);

	if (t69 != 2147427711) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x349 = 240U;
	static int8_t x350 = 24;
	static uint16_t x351 = UINT16_MAX;
	int32_t x352 = 635115171;

	t70 = (((x349*x350)&x351)+x352);

	if (t70 != 635120931U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x353 = 85U;
	volatile uint8_t x354 = UINT8_MAX;
	int32_t x355 = -1064719597;
	volatile int32_t t71 = 64697596;

	t71 = (((x353*x354)&x355)+x356);

	if (t71 != 162742036) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x357 = UINT8_MAX;
	int8_t x358 = INT8_MAX;
	int64_t x359 = 992114836788LL;
	volatile int64_t t72 = 1920LL;

	t72 = (((x357*x358)&x359)+x360);

	if (t72 != 11257LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x361 = 233570059LLU;
	static int16_t x362 = INT16_MIN;
	uint8_t x363 = 67U;
	static volatile int64_t x364 = INT64_MAX;
	uint64_t t73 = 6245455620LLU;

	t73 = (((x361*x362)&x363)+x364);

	if (t73 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x366 = INT64_MIN;
	uint16_t x367 = 6U;
	volatile int64_t t74 = -1261898436693LL;

	t74 = (((x365*x366)&x367)+x368);

	if (t74 != 14910LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x381 = 1U;
	uint16_t x382 = 1527U;
	static int8_t x383 = INT8_MIN;
	int64_t x384 = -1952300LL;

	t75 = (((x381*x382)&x383)+x384);

	if (t75 != -1950892LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x385 = -1;
	int32_t x386 = -7482;
	int64_t x387 = -2330214369348198419LL;
	uint64_t x388 = 1210035680LLU;
	volatile uint64_t t76 = 80923606LLU;

	t76 = (((x385*x386)&x387)+x388);

	if (t76 != 1210043144LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x389 = -1;
	uint8_t x390 = 34U;
	int8_t x392 = INT8_MIN;
	volatile int64_t t77 = 2234602447LL;

	t77 = (((x389*x390)&x391)+x392);

	if (t77 != -406588LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x393 = -3253;
	volatile int16_t x394 = 7;
	static uint16_t x395 = 479U;
	static volatile uint64_t t78 = 109LLU;

	t78 = (((x393*x394)&x395)+x396);

	if (t78 != 234711044LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x397 = INT32_MAX;
	int32_t x398 = 1;
	int32_t x399 = -1;
	static int16_t x400 = INT16_MIN;
	static volatile int32_t t79 = -3323049;

	t79 = (((x397*x398)&x399)+x400);

	if (t79 != 2147450879) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x401 = INT8_MIN;
	static volatile uint8_t x402 = 4U;
	int32_t x403 = 1151;
	uint32_t x404 = 555U;
	static uint32_t t80 = 0U;

	t80 = (((x401*x402)&x403)+x404);

	if (t80 != 1579U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x421 = -4341;
	static volatile int8_t x422 = -1;
	static uint32_t x423 = UINT32_MAX;
	static int64_t x424 = -3818LL;

	t81 = (((x421*x422)&x423)+x424);

	if (t81 != 523LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x425 = INT8_MAX;
	volatile int8_t x426 = INT8_MIN;
	int32_t x428 = -468152091;
	static volatile int32_t t82 = -136355;

	t82 = (((x425*x426)&x427)+x428);

	if (t82 != -468184859) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x430 = -13518LL;
	static int32_t x431 = INT32_MAX;
	volatile int64_t t83 = 17487042107748LL;

	t83 = (((x429*x430)&x431)+x432);

	if (t83 != 2103121195LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x437 = 29378U;
	static int16_t x438 = 3007;
	uint16_t x439 = UINT16_MAX;
	int32_t x440 = -1;
	int32_t t84 = -895865649;

	t84 = (((x437*x438)&x439)+x440);

	if (t84 != 62653) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x441 = -1;
	int64_t x442 = INT64_MAX;
	int32_t x444 = 60787;
	static volatile int64_t t85 = -94822LL;

	t85 = (((x441*x442)&x443)+x444);

	if (t85 != -9223372036854715020LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x445 = -1;
	static int8_t x446 = INT8_MIN;
	int8_t x447 = -3;
	static int32_t t86 = -1;

	t86 = (((x445*x446)&x447)+x448);

	if (t86 != 129) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x449 = -1;
	volatile int16_t x450 = 1;
	int8_t x451 = INT8_MAX;
	static int64_t x452 = -237556006LL;
	static volatile int64_t t87 = -805665791450953055LL;

	t87 = (((x449*x450)&x451)+x452);

	if (t87 != -237555879LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x457 = INT8_MAX;
	volatile int64_t x459 = INT64_MAX;
	volatile int16_t x460 = INT16_MAX;
	int64_t t88 = 6071LL;

	t88 = (((x457*x458)&x459)+x460);

	if (t88 != 32894LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x470 = UINT8_MAX;
	int16_t x471 = 116;
	uint64_t x472 = 60404LLU;
	static volatile uint64_t t89 = 121915LLU;

	t89 = (((x469*x470)&x471)+x472);

	if (t89 != 60472LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x474 = -1;
	int32_t x476 = -2;
	static int32_t t90 = 343822;

	t90 = (((x473*x474)&x475)+x476);

	if (t90 != -2050) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x477 = -1;
	int16_t x478 = INT16_MIN;
	int16_t x480 = INT16_MIN;
	volatile uint32_t t91 = 68U;

	t91 = (((x477*x478)&x479)+x480);

	if (t91 != 4294934528U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x482 = INT8_MIN;
	volatile int8_t x483 = INT8_MIN;
	uint32_t x484 = 251U;
	uint32_t t92 = 10207U;

	t92 = (((x481*x482)&x483)+x484);

	if (t92 != 379U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x485 = INT8_MIN;
	uint32_t x486 = 192U;
	uint64_t x487 = UINT64_MAX;
	static uint64_t t93 = 649443LLU;

	t93 = (((x485*x486)&x487)+x488);

	if (t93 != 4294942716LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x489 = UINT32_MAX;
	static int32_t x490 = INT32_MAX;
	volatile int8_t x491 = 23;
	volatile int16_t x492 = INT16_MIN;
	uint32_t t94 = 4638020U;

	t94 = (((x489*x490)&x491)+x492);

	if (t94 != 4294934529U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x493 = 25;
	int64_t x495 = -1LL;
	static int64_t x496 = -1LL;
	volatile int64_t t95 = -1LL;

	t95 = (((x493*x494)&x495)+x496);

	if (t95 != 324LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x498 = 8525139293343130421LLU;
	int16_t x499 = -1;
	static int16_t x500 = INT16_MIN;
	volatile uint64_t t96 = 839860LLU;

	t96 = (((x497*x498)&x499)+x500);

	if (t96 != 5992502243541675338LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x501 = UINT32_MAX;
	int8_t x502 = 25;
	static int8_t x503 = 0;
	static int64_t x504 = 1543150788597057721LL;
	int64_t t97 = 4092LL;

	t97 = (((x501*x502)&x503)+x504);

	if (t97 != 1543150788597057721LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x505 = -1LL;
	uint32_t x506 = 15100U;
	int16_t x508 = 0;
	volatile int64_t t98 = -292146LL;

	t98 = (((x505*x506)&x507)+x508);

	if (t98 != -15100LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x509 = INT16_MIN;
	int16_t x510 = 1;
	int16_t x512 = INT16_MIN;
	volatile int32_t t99 = 9;

	t99 = (((x509*x510)&x511)+x512);

	if (t99 != -65536) { NG(); } else { ; }
	
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

