#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x21 = INT32_MIN;
uint64_t x23 = 0LLU;
int16_t x24 = INT16_MAX;
uint32_t x25 = 4U;
static uint64_t x27 = 5LLU;
static int16_t x28 = -3;
volatile int16_t x31 = INT16_MAX;
int64_t x32 = INT64_MAX;
static int64_t t4 = -30917753951652856LL;
volatile uint32_t x33 = 1558087U;
int32_t x36 = 677924444;
volatile uint8_t x47 = UINT8_MAX;
int16_t x51 = INT16_MIN;
int64_t x53 = -1LL;
volatile int32_t t9 = 222;
volatile uint64_t x61 = 14194LLU;
int8_t x64 = 8;
volatile int32_t t11 = -5;
int8_t x68 = INT8_MAX;
volatile int32_t t12 = 485308;
volatile int16_t x76 = -1;
static volatile int64_t x92 = 565275428122515LL;
static volatile int64_t x103 = -351123LL;
uint64_t x107 = 136860LLU;
int32_t x108 = INT32_MIN;
int32_t t21 = -13102;
volatile int64_t x111 = INT64_MAX;
int16_t x114 = 120;
int16_t x120 = INT16_MIN;
static volatile int8_t x131 = -1;
volatile int32_t t28 = -464;
volatile uint8_t x147 = UINT8_MAX;
static volatile uint64_t x154 = UINT64_MAX;
int64_t x156 = INT64_MAX;
int32_t x161 = -1;
static volatile uint8_t x162 = 28U;
volatile int32_t t33 = 3884;
uint8_t x165 = UINT8_MAX;
volatile int32_t x171 = -1;
volatile int16_t x194 = -7508;
int64_t x211 = INT64_MIN;
uint64_t x215 = 213408LLU;
int64_t x216 = INT64_MIN;
static volatile int64_t t43 = 11123918924691LL;
int16_t x220 = 16;
volatile int8_t x221 = -1;
static volatile int8_t x225 = INT8_MIN;
int32_t t46 = 148015258;
uint64_t x233 = UINT64_MAX;
volatile int32_t t48 = -1;
static uint16_t x248 = 3U;
int32_t t50 = -7268;
volatile int32_t t52 = 61257718;
int32_t x258 = INT32_MIN;
int16_t x259 = INT16_MAX;
volatile uint64_t x268 = 330065231437677671LLU;
int16_t x271 = -1;
uint32_t x276 = UINT32_MAX;
uint32_t x278 = 456U;
uint32_t x283 = 13250694U;
uint16_t x292 = 5249U;
int8_t x297 = INT8_MAX;
uint64_t x299 = 1403720659779103999LLU;
uint16_t x300 = 1U;
int32_t t61 = -55564380;
volatile int32_t t62 = -1;
int8_t x326 = INT8_MIN;
volatile int32_t t69 = 335537654;
int64_t x348 = 5673642LL;
int32_t x353 = 2;
uint16_t x356 = 28838U;
uint16_t x357 = 2U;
int8_t x363 = INT8_MIN;
static int32_t x368 = -143536891;
volatile int32_t t76 = -346648832;
uint64_t x377 = UINT64_MAX;
int32_t t77 = 13;
static int64_t x386 = INT64_MIN;
uint16_t x387 = UINT16_MAX;
volatile int32_t t79 = -1069407;
int32_t x396 = -1;
volatile int64_t x398 = -367355791LL;
int16_t x400 = INT16_MIN;
volatile int16_t x415 = -1;
int8_t x419 = INT8_MIN;
volatile int64_t t86 = -7LL;
int8_t x426 = 1;
uint8_t x428 = UINT8_MAX;
volatile int32_t t89 = 54;
static int8_t x441 = -1;
int32_t x442 = -1;
uint32_t x444 = 64770U;
volatile uint32_t t90 = 103919U;
int64_t x446 = -60062LL;
int32_t x454 = INT32_MAX;
static volatile int64_t x459 = -3LL;
volatile int32_t t93 = -4936;
int32_t x465 = 190673;
int16_t x467 = INT16_MAX;
uint64_t x470 = UINT64_MAX;
volatile uint32_t x477 = 35466326U;


void f0(void) {
	uint32_t x1 = 5733U;
	static int64_t x2 = INT64_MIN;
	uint64_t x3 = UINT64_MAX;
	uint32_t x4 = UINT32_MAX;
	volatile uint32_t t0 = 64950U;

	t0 = (((x1+x2)==x3)%x4);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x9 = INT32_MAX;
	volatile int16_t x10 = INT16_MIN;
	static volatile int64_t x11 = INT64_MIN;
	uint8_t x12 = UINT8_MAX;
	int32_t t1 = 534;

	t1 = (((x9+x10)==x11)%x12);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x22 = 34U;
	volatile int32_t t2 = 4476;

	t2 = (((x21+x22)==x23)%x24);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x26 = UINT32_MAX;
	int32_t t3 = -20996390;

	t3 = (((x25+x26)==x27)%x28);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x29 = INT64_MIN;
	uint16_t x30 = 9959U;

	t4 = (((x29+x30)==x31)%x32);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x34 = 122768;
	uint64_t x35 = 1894353805LLU;
	static volatile int32_t t5 = -41026;

	t5 = (((x33+x34)==x35)%x36);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x37 = -53;
	uint8_t x38 = 6U;
	uint16_t x39 = 16112U;
	int32_t x40 = INT32_MAX;
	int32_t t6 = 194775;

	t6 = (((x37+x38)==x39)%x40);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x45 = -2;
	uint16_t x46 = 745U;
	int64_t x48 = -5886LL;
	int64_t t7 = -2115572LL;

	t7 = (((x45+x46)==x47)%x48);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x49 = INT16_MIN;
	volatile uint16_t x50 = 32U;
	int8_t x52 = -1;
	int32_t t8 = -210709;

	t8 = (((x49+x50)==x51)%x52);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x54 = UINT32_MAX;
	int32_t x55 = -571281877;
	uint16_t x56 = UINT16_MAX;

	t9 = (((x53+x54)==x55)%x56);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x57 = -1;
	int16_t x58 = INT16_MIN;
	static uint64_t x59 = 39784447816LLU;
	int8_t x60 = INT8_MIN;
	static int32_t t10 = -59047;

	t10 = (((x57+x58)==x59)%x60);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x62 = -1LL;
	int32_t x63 = INT32_MIN;

	t11 = (((x61+x62)==x63)%x64);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x65 = INT64_MIN;
	uint8_t x66 = 2U;
	volatile int16_t x67 = 0;

	t12 = (((x65+x66)==x67)%x68);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x69 = 83U;
	int64_t x70 = INT64_MIN;
	int8_t x71 = -49;
	int32_t x72 = 1;
	volatile int32_t t13 = 925864597;

	t13 = (((x69+x70)==x71)%x72);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x73 = 1;
	int16_t x74 = -1;
	int32_t x75 = INT32_MIN;
	static int32_t t14 = -47;

	t14 = (((x73+x74)==x75)%x76);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x81 = UINT8_MAX;
	int16_t x82 = INT16_MIN;
	uint32_t x83 = UINT32_MAX;
	int64_t x84 = 3578015289763LL;
	volatile int64_t t15 = 15701898487LL;

	t15 = (((x81+x82)==x83)%x84);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x85 = INT32_MIN;
	uint32_t x86 = 471416356U;
	int8_t x87 = -1;
	uint32_t x88 = 54340U;
	volatile uint32_t t16 = 55754832U;

	t16 = (((x85+x86)==x87)%x88);

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x89 = 0;
	uint16_t x90 = 1U;
	int16_t x91 = -3;
	volatile int64_t t17 = 6639174950804LL;

	t17 = (((x89+x90)==x91)%x92);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x93 = -1LL;
	volatile int16_t x94 = 1;
	volatile int32_t x95 = INT32_MIN;
	int64_t x96 = -57095LL;
	int64_t t18 = -5581882936723LL;

	t18 = (((x93+x94)==x95)%x96);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x97 = -22625;
	static int8_t x98 = 4;
	static int16_t x99 = 6654;
	int16_t x100 = -1;
	static volatile int32_t t19 = -62;

	t19 = (((x97+x98)==x99)%x100);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x101 = 0;
	static uint16_t x102 = 2692U;
	int16_t x104 = 1;
	volatile int32_t t20 = -463313;

	t20 = (((x101+x102)==x103)%x104);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x105 = INT32_MIN;
	uint16_t x106 = UINT16_MAX;

	t21 = (((x105+x106)==x107)%x108);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x109 = 10404;
	int8_t x110 = -25;
	static int32_t x112 = INT32_MAX;
	volatile int32_t t22 = 16;

	t22 = (((x109+x110)==x111)%x112);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x113 = UINT8_MAX;
	int32_t x115 = 910136;
	int8_t x116 = -12;
	static int32_t t23 = 1;

	t23 = (((x113+x114)==x115)%x116);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x117 = INT32_MAX;
	static int64_t x118 = INT64_MIN;
	static int64_t x119 = INT64_MIN;
	static int32_t t24 = -30;

	t24 = (((x117+x118)==x119)%x120);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x121 = UINT32_MAX;
	static int64_t x122 = 2991LL;
	uint16_t x123 = 220U;
	int16_t x124 = -1;
	int32_t t25 = 88;

	t25 = (((x121+x122)==x123)%x124);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x125 = 5633550LLU;
	volatile int32_t x126 = -2001;
	int64_t x127 = 25983LL;
	int16_t x128 = -131;
	volatile int32_t t26 = -3;

	t26 = (((x125+x126)==x127)%x128);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x129 = -1;
	static int64_t x130 = 272013768419LL;
	static uint16_t x132 = 26606U;
	volatile int32_t t27 = 5;

	t27 = (((x129+x130)==x131)%x132);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x137 = INT8_MIN;
	uint8_t x138 = 5U;
	int64_t x139 = INT64_MIN;
	volatile int8_t x140 = INT8_MAX;

	t28 = (((x137+x138)==x139)%x140);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x141 = INT16_MAX;
	uint16_t x142 = 2967U;
	static int64_t x143 = INT64_MIN;
	volatile int8_t x144 = 61;
	volatile int32_t t29 = 1;

	t29 = (((x141+x142)==x143)%x144);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x145 = -2801879LL;
	int16_t x146 = INT16_MIN;
	static uint16_t x148 = 194U;
	volatile int32_t t30 = 679354;

	t30 = (((x145+x146)==x147)%x148);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int64_t x149 = INT64_MIN;
	volatile uint16_t x150 = 40U;
	volatile int64_t x151 = 18267396LL;
	uint16_t x152 = 1900U;
	volatile int32_t t31 = -306296;

	t31 = (((x149+x150)==x151)%x152);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x153 = -685843;
	uint32_t x155 = 14220U;
	int64_t t32 = 12241026LL;

	t32 = (((x153+x154)==x155)%x156);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x163 = -1;
	int32_t x164 = INT32_MAX;

	t33 = (((x161+x162)==x163)%x164);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x166 = -1;
	volatile int16_t x167 = -1;
	int32_t x168 = INT32_MAX;
	int32_t t34 = 117763;

	t34 = (((x165+x166)==x167)%x168);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x169 = -1;
	static int16_t x170 = INT16_MIN;
	uint16_t x172 = UINT16_MAX;
	static volatile int32_t t35 = 7116;

	t35 = (((x169+x170)==x171)%x172);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x173 = 416;
	int32_t x174 = -1;
	static volatile int64_t x175 = INT64_MIN;
	uint64_t x176 = 64126388509908LLU;
	uint64_t t36 = 227784537LLU;

	t36 = (((x173+x174)==x175)%x176);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x181 = UINT16_MAX;
	int64_t x182 = -217134LL;
	volatile uint16_t x183 = 56U;
	volatile uint8_t x184 = UINT8_MAX;
	static volatile int32_t t37 = 502080615;

	t37 = (((x181+x182)==x183)%x184);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x185 = 2U;
	uint32_t x186 = 743U;
	static int32_t x187 = INT32_MIN;
	static volatile int32_t x188 = INT32_MIN;
	static volatile int32_t t38 = -43922489;

	t38 = (((x185+x186)==x187)%x188);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x193 = -477709384754080LL;
	int8_t x195 = 1;
	int64_t x196 = -1LL;
	int64_t t39 = 554160317947459142LL;

	t39 = (((x193+x194)==x195)%x196);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint16_t x197 = UINT16_MAX;
	int32_t x198 = INT32_MIN;
	volatile int16_t x199 = 4723;
	int32_t x200 = INT32_MAX;
	volatile int32_t t40 = 4012;

	t40 = (((x197+x198)==x199)%x200);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x205 = 8063U;
	volatile int64_t x206 = INT64_MIN;
	int8_t x207 = 0;
	static int16_t x208 = 849;
	volatile int32_t t41 = -1;

	t41 = (((x205+x206)==x207)%x208);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x209 = 3;
	static int16_t x210 = INT16_MAX;
	uint8_t x212 = UINT8_MAX;
	int32_t t42 = 594630503;

	t42 = (((x209+x210)==x211)%x212);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x213 = UINT8_MAX;
	uint8_t x214 = UINT8_MAX;

	t43 = (((x213+x214)==x215)%x216);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x217 = 2U;
	uint16_t x218 = 1U;
	static int16_t x219 = -1;
	int32_t t44 = 732087179;

	t44 = (((x217+x218)==x219)%x220);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x222 = 615570753LLU;
	static int64_t x223 = 12939315996LL;
	int16_t x224 = -1;
	static volatile int32_t t45 = 82;

	t45 = (((x221+x222)==x223)%x224);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x226 = 10U;
	uint32_t x227 = 341566661U;
	uint8_t x228 = 2U;

	t46 = (((x225+x226)==x227)%x228);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x229 = 2116;
	int8_t x230 = INT8_MAX;
	uint32_t x231 = 464965U;
	uint64_t x232 = 16188565092543102LLU;
	uint64_t t47 = 26LLU;

	t47 = (((x229+x230)==x231)%x232);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x234 = -1LL;
	int16_t x235 = INT16_MAX;
	uint8_t x236 = 3U;

	t48 = (((x233+x234)==x235)%x236);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x237 = INT8_MAX;
	int16_t x238 = -799;
	volatile int8_t x239 = INT8_MAX;
	int64_t x240 = INT64_MIN;
	int64_t t49 = -43616094LL;

	t49 = (((x237+x238)==x239)%x240);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x245 = -5;
	uint64_t x246 = 63LLU;
	uint16_t x247 = UINT16_MAX;

	t50 = (((x245+x246)==x247)%x248);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x249 = INT8_MIN;
	volatile uint8_t x250 = UINT8_MAX;
	uint32_t x251 = 255167U;
	uint32_t x252 = UINT32_MAX;
	uint32_t t51 = 314U;

	t51 = (((x249+x250)==x251)%x252);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x253 = 26001738;
	static int8_t x254 = -22;
	int16_t x255 = -2708;
	volatile uint16_t x256 = 137U;

	t52 = (((x253+x254)==x255)%x256);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x257 = 871789674U;
	int8_t x260 = INT8_MIN;
	volatile int32_t t53 = 206;

	t53 = (((x257+x258)==x259)%x260);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x265 = 1969U;
	uint16_t x266 = 206U;
	uint64_t x267 = 4883872544058077LLU;
	volatile uint64_t t54 = 126618472135LLU;

	t54 = (((x265+x266)==x267)%x268);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x269 = -106977894913233LL;
	uint8_t x270 = 22U;
	uint32_t x272 = 154703U;
	volatile uint32_t t55 = 124367U;

	t55 = (((x269+x270)==x271)%x272);

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x273 = UINT64_MAX;
	static int8_t x274 = INT8_MAX;
	int64_t x275 = INT64_MIN;
	uint32_t t56 = 4U;

	t56 = (((x273+x274)==x275)%x276);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x277 = INT32_MIN;
	uint32_t x279 = UINT32_MAX;
	int64_t x280 = -1LL;
	int64_t t57 = -3592370532390432326LL;

	t57 = (((x277+x278)==x279)%x280);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x281 = 6;
	int16_t x282 = 15;
	static int8_t x284 = 3;
	volatile int32_t t58 = 4276;

	t58 = (((x281+x282)==x283)%x284);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x285 = 26U;
	int16_t x286 = INT16_MIN;
	int64_t x287 = INT64_MIN;
	int16_t x288 = INT16_MAX;
	volatile int32_t t59 = -21;

	t59 = (((x285+x286)==x287)%x288);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x289 = 4020634900939LLU;
	int64_t x290 = -3631758LL;
	volatile int64_t x291 = INT64_MIN;
	int32_t t60 = -73;

	t60 = (((x289+x290)==x291)%x292);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x298 = INT8_MIN;

	t61 = (((x297+x298)==x299)%x300);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x305 = -6;
	volatile int8_t x306 = 1;
	uint32_t x307 = UINT32_MAX;
	static int8_t x308 = INT8_MIN;

	t62 = (((x305+x306)==x307)%x308);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x309 = INT8_MIN;
	int8_t x310 = INT8_MAX;
	static int8_t x311 = -1;
	uint16_t x312 = 5U;
	int32_t t63 = 998;

	t63 = (((x309+x310)==x311)%x312);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x321 = -11550886;
	volatile int32_t x322 = -1;
	int32_t x323 = -1;
	int8_t x324 = -54;
	volatile int32_t t64 = 0;

	t64 = (((x321+x322)==x323)%x324);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x325 = -1662355431079LL;
	volatile uint32_t x327 = 4U;
	uint64_t x328 = 28721725886560697LLU;
	volatile uint64_t t65 = 49LLU;

	t65 = (((x325+x326)==x327)%x328);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x329 = INT8_MAX;
	static uint32_t x330 = 6U;
	int16_t x331 = -1;
	uint32_t x332 = 3543418U;
	volatile uint32_t t66 = 809U;

	t66 = (((x329+x330)==x331)%x332);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x333 = -1LL;
	int32_t x334 = INT32_MIN;
	uint64_t x335 = UINT64_MAX;
	int32_t x336 = -1;
	static int32_t t67 = -6806;

	t67 = (((x333+x334)==x335)%x336);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x337 = 210195359;
	int16_t x338 = INT16_MIN;
	static uint8_t x339 = 1U;
	volatile uint16_t x340 = UINT16_MAX;
	int32_t t68 = 7578;

	t68 = (((x337+x338)==x339)%x340);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x341 = 7089U;
	static uint64_t x342 = 21918LLU;
	int64_t x343 = -1LL;
	int8_t x344 = -1;

	t69 = (((x341+x342)==x343)%x344);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x345 = 2676;
	volatile uint8_t x346 = 0U;
	static int8_t x347 = -2;
	int64_t t70 = 21LL;

	t70 = (((x345+x346)==x347)%x348);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x349 = -27052896795LL;
	volatile uint32_t x350 = 12U;
	uint32_t x351 = 320U;
	int64_t x352 = INT64_MIN;
	volatile int64_t t71 = 8158140577LL;

	t71 = (((x349+x350)==x351)%x352);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x354 = INT8_MIN;
	int32_t x355 = INT32_MIN;
	static volatile int32_t t72 = -9845477;

	t72 = (((x353+x354)==x355)%x356);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x358 = INT8_MIN;
	static int32_t x359 = -1;
	int64_t x360 = INT64_MAX;
	static int64_t t73 = 1466650402017400687LL;

	t73 = (((x357+x358)==x359)%x360);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int32_t x361 = INT32_MAX;
	int8_t x362 = -6;
	int8_t x364 = -1;
	volatile int32_t t74 = -75973;

	t74 = (((x361+x362)==x363)%x364);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x365 = 378392U;
	volatile int8_t x366 = INT8_MIN;
	int8_t x367 = -1;
	int32_t t75 = 113482743;

	t75 = (((x365+x366)==x367)%x368);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x369 = 72289;
	uint8_t x370 = 93U;
	int16_t x371 = INT16_MAX;
	int8_t x372 = -2;

	t76 = (((x369+x370)==x371)%x372);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x378 = -1;
	uint16_t x379 = UINT16_MAX;
	int32_t x380 = INT32_MIN;

	t77 = (((x377+x378)==x379)%x380);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x381 = 87727154U;
	int16_t x382 = INT16_MAX;
	static uint64_t x383 = 5204LLU;
	int16_t x384 = INT16_MAX;
	static volatile int32_t t78 = -216477;

	t78 = (((x381+x382)==x383)%x384);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x385 = 35291U;
	int16_t x388 = INT16_MAX;

	t79 = (((x385+x386)==x387)%x388);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x393 = -971;
	int32_t x394 = -635057400;
	int32_t x395 = INT32_MIN;
	int32_t t80 = 20;

	t80 = (((x393+x394)==x395)%x396);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x397 = 81782366469483LLU;
	uint64_t x399 = UINT64_MAX;
	static volatile int32_t t81 = 3;

	t81 = (((x397+x398)==x399)%x400);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x401 = 56208LLU;
	int8_t x402 = INT8_MAX;
	int32_t x403 = 1710;
	static volatile int16_t x404 = INT16_MIN;
	int32_t t82 = 378416204;

	t82 = (((x401+x402)==x403)%x404);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x405 = INT16_MIN;
	int16_t x406 = 50;
	int16_t x407 = 32;
	static int8_t x408 = INT8_MIN;
	volatile int32_t t83 = 121;

	t83 = (((x405+x406)==x407)%x408);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x409 = 13505U;
	int16_t x410 = INT16_MIN;
	int64_t x411 = INT64_MAX;
	int16_t x412 = INT16_MIN;
	int32_t t84 = -837394276;

	t84 = (((x409+x410)==x411)%x412);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x413 = -3;
	uint32_t x414 = 82766541U;
	uint64_t x416 = 86790892LLU;
	static volatile uint64_t t85 = 203381195706592967LLU;

	t85 = (((x413+x414)==x415)%x416);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x417 = INT16_MIN;
	uint8_t x418 = 0U;
	int64_t x420 = INT64_MAX;

	t86 = (((x417+x418)==x419)%x420);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x421 = -1;
	int16_t x422 = INT16_MAX;
	volatile int64_t x423 = -14179LL;
	volatile int32_t x424 = 447147;
	static volatile int32_t t87 = 127;

	t87 = (((x421+x422)==x423)%x424);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x425 = 719298194578115992LL;
	int64_t x427 = -1LL;
	int32_t t88 = 1094;

	t88 = (((x425+x426)==x427)%x428);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x433 = 13504025LLU;
	static int8_t x434 = INT8_MIN;
	uint8_t x435 = 82U;
	volatile int32_t x436 = -241;

	t89 = (((x433+x434)==x435)%x436);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x443 = INT64_MIN;

	t90 = (((x441+x442)==x443)%x444);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x445 = UINT64_MAX;
	uint16_t x447 = UINT16_MAX;
	volatile int16_t x448 = 17;
	static volatile int32_t t91 = -108603;

	t91 = (((x445+x446)==x447)%x448);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x453 = -1LL;
	volatile uint16_t x455 = 16U;
	int64_t x456 = -801943LL;
	int64_t t92 = 1536469094068230LL;

	t92 = (((x453+x454)==x455)%x456);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x457 = UINT8_MAX;
	int64_t x458 = -152629061LL;
	static volatile int16_t x460 = INT16_MIN;

	t93 = (((x457+x458)==x459)%x460);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x461 = UINT16_MAX;
	static int64_t x462 = -1696180451199123LL;
	uint16_t x463 = UINT16_MAX;
	uint32_t x464 = 6293602U;
	static volatile uint32_t t94 = 5828467U;

	t94 = (((x461+x462)==x463)%x464);

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x466 = -1;
	volatile int64_t x468 = INT64_MIN;
	volatile int64_t t95 = 122763608LL;

	t95 = (((x465+x466)==x467)%x468);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x469 = 22497594LLU;
	int64_t x471 = INT64_MIN;
	volatile int64_t x472 = INT64_MAX;
	volatile int64_t t96 = -139093LL;

	t96 = (((x469+x470)==x471)%x472);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x478 = -1;
	int32_t x479 = 95338161;
	int8_t x480 = INT8_MAX;
	volatile int32_t t97 = 317381386;

	t97 = (((x477+x478)==x479)%x480);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x481 = INT64_MIN;
	uint16_t x482 = 272U;
	volatile int64_t x483 = INT64_MAX;
	static int64_t x484 = INT64_MIN;
	int64_t t98 = -178342035LL;

	t98 = (((x481+x482)==x483)%x484);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x489 = UINT16_MAX;
	int32_t x490 = INT32_MIN;
	int32_t x491 = INT32_MIN;
	int32_t x492 = -14662126;
	volatile int32_t t99 = -10;

	t99 = (((x489+x490)==x491)%x492);

	if (t99 != 0) { NG(); } else { ; }
	
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

