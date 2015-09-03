#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x3 = 19339U;
int16_t x4 = -1;
uint32_t t0 = 171U;
uint8_t x9 = 25U;
int64_t x16 = -1316366917680786LL;
static volatile int64_t t3 = 583452931106306281LL;
static int8_t x17 = -1;
volatile int64_t t4 = -2896159463401442LL;
static uint32_t x21 = 1684132U;
int16_t x30 = -36;
int16_t x38 = INT16_MIN;
uint8_t x39 = 114U;
volatile int16_t x48 = INT16_MIN;
static int64_t t11 = 16847019340310261LL;
uint32_t x64 = 30239348U;
int16_t x65 = INT16_MAX;
static int32_t t14 = -21;
int32_t x70 = 321882746;
int64_t x77 = 1LL;
volatile int32_t x82 = INT32_MIN;
int64_t t18 = 1265250216127LL;
int32_t t20 = 13733;
static int8_t x96 = INT8_MAX;
volatile int64_t x101 = INT64_MAX;
static int8_t x105 = INT8_MAX;
int32_t x106 = 53120071;
volatile int64_t t25 = -18585285LL;
uint16_t x122 = 13U;
int64_t x123 = -1LL;
uint8_t x127 = UINT8_MAX;
uint32_t x129 = 5985U;
uint16_t x136 = UINT16_MAX;
int16_t x139 = -1;
volatile int8_t x149 = INT8_MAX;
static int32_t x150 = INT32_MAX;
int8_t x164 = INT8_MAX;
uint16_t x166 = UINT16_MAX;
int8_t x172 = 12;
volatile int64_t t37 = -18LL;
int64_t x175 = INT64_MAX;
uint32_t x185 = 6800U;
volatile int64_t x189 = 2853LL;
int64_t x192 = -2LL;
static volatile int64_t t42 = -11376415LL;
int64_t x210 = INT64_MIN;
volatile int64_t x212 = -1LL;
uint32_t x215 = UINT32_MAX;
static volatile int8_t x217 = -20;
static int16_t x219 = 3;
int64_t x221 = 31018979040LL;
int64_t x222 = INT64_MAX;
int16_t x223 = -1;
static int16_t x236 = -1;
uint64_t x238 = 21811LLU;
int16_t x239 = INT16_MIN;
static volatile int8_t x240 = INT8_MAX;
static int32_t x246 = INT32_MAX;
volatile uint64_t t56 = 7878946LLU;
int32_t x249 = INT32_MIN;
int32_t x252 = 3327349;
uint8_t x261 = UINT8_MAX;
static uint32_t x266 = 203U;
int16_t x281 = INT16_MIN;
static volatile uint64_t t65 = 12LLU;
uint16_t x289 = UINT16_MAX;
static int32_t t67 = 18156819;
int16_t x300 = INT16_MAX;
int64_t t69 = 24662LL;
uint64_t t70 = 1961943163LLU;
int16_t x314 = INT16_MIN;
int32_t x322 = INT32_MAX;
volatile int8_t x327 = 1;
volatile int64_t x329 = -1LL;
int64_t x333 = INT64_MIN;
int8_t x341 = INT8_MIN;
uint64_t x343 = 26878666LLU;
int8_t x350 = -1;
volatile int64_t x351 = INT64_MIN;
uint16_t x358 = 26803U;
uint32_t x360 = UINT32_MAX;
static volatile uint32_t t82 = 206407U;
static uint16_t x363 = 58U;
int64_t x396 = -45830221731378LL;
static int16_t x399 = 6137;
int64_t t90 = 1137792413858392132LL;
int64_t t92 = -12LL;
int8_t x425 = INT8_MIN;
uint32_t x429 = 1262U;
static int64_t x430 = INT64_MIN;
uint64_t t98 = 848623992024962LLU;
uint32_t x435 = 3U;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	static uint32_t x2 = 18828U;

	t0 = (x1*((x2/x3)%x4));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	volatile int32_t x6 = -1;
	uint32_t x7 = 15894909U;
	uint8_t x8 = 25U;
	static uint32_t t1 = 290747U;

	t1 = (x5*((x6/x7)%x8));

	if (t1 != 4294967276U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x10 = INT8_MAX;
	int64_t x11 = INT64_MIN;
	volatile uint8_t x12 = 82U;
	static int64_t t2 = 134472460LL;

	t2 = (x9*((x10/x11)%x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x13 = -1;
	static int32_t x14 = 447200536;
	uint8_t x15 = UINT8_MAX;

	t3 = (x13*((x14/x15)%x16));

	if (t3 != -1753727LL) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int16_t x18 = INT16_MIN;
	int64_t x19 = INT64_MIN;
	volatile int16_t x20 = 49;

	t4 = (x17*((x18/x19)%x20));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x22 = -2521LL;
	int32_t x23 = INT32_MIN;
	int32_t x24 = INT32_MAX;
	int64_t t5 = -24LL;

	t5 = (x21*((x22/x23)%x24));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -1;
	static int64_t x26 = INT64_MAX;
	int32_t x27 = INT32_MIN;
	static int8_t x28 = -1;
	volatile int64_t t6 = 323234664723LL;

	t6 = (x25*((x26/x27)%x28));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x29 = -15084;
	int8_t x31 = INT8_MIN;
	int16_t x32 = -11369;
	static int32_t t7 = -17417344;

	t7 = (x29*((x30/x31)%x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x37 = INT8_MIN;
	int16_t x40 = INT16_MIN;
	volatile int32_t t8 = 302891998;

	t8 = (x37*((x38/x39)%x40));

	if (t8 != 36736) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int8_t x41 = INT8_MIN;
	static uint16_t x42 = UINT16_MAX;
	uint8_t x43 = 1U;
	int16_t x44 = INT16_MIN;
	int32_t t9 = 47813;

	t9 = (x41*((x42/x43)%x44));

	if (t9 != -4194176) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x45 = UINT32_MAX;
	int16_t x46 = INT16_MIN;
	static int32_t x47 = INT32_MIN;
	uint32_t t10 = 0U;

	t10 = (x45*((x46/x47)%x48));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = INT16_MIN;
	int8_t x50 = INT8_MIN;
	int64_t x51 = 255443LL;
	uint8_t x52 = 4U;

	t11 = (x49*((x50/x51)%x52));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = -1;
	volatile int8_t x54 = -1;
	int16_t x55 = -1;
	uint16_t x56 = 7U;
	static int32_t t12 = 1944;

	t12 = (x53*((x54/x55)%x56));

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x61 = INT32_MIN;
	uint64_t x62 = UINT64_MAX;
	int32_t x63 = INT32_MIN;
	uint64_t t13 = 995847LLU;

	t13 = (x61*((x62/x63)%x64));

	if (t13 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int32_t x66 = INT32_MIN;
	uint8_t x67 = 3U;
	int16_t x68 = INT16_MAX;

	t14 = (x65*((x66/x67)%x68));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x69 = UINT8_MAX;
	volatile int32_t x71 = INT32_MIN;
	static int8_t x72 = INT8_MIN;
	volatile int32_t t15 = 21698684;

	t15 = (x69*((x70/x71)%x72));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x73 = -6;
	uint8_t x74 = 1U;
	int16_t x75 = -12;
	static int8_t x76 = INT8_MAX;
	volatile int32_t t16 = 6232;

	t16 = (x73*((x74/x75)%x76));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x78 = INT32_MIN;
	volatile uint8_t x79 = 40U;
	int64_t x80 = -1LL;
	static int64_t t17 = -25089931984927021LL;

	t17 = (x77*((x78/x79)%x80));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x81 = INT16_MIN;
	volatile int64_t x83 = INT64_MIN;
	int16_t x84 = INT16_MIN;

	t18 = (x81*((x82/x83)%x84));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x85 = INT64_MAX;
	int8_t x86 = INT8_MIN;
	volatile int32_t x87 = INT32_MAX;
	static uint32_t x88 = 29309U;
	int64_t t19 = -3315536389397740432LL;

	t19 = (x85*((x86/x87)%x88));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x89 = 394;
	static int8_t x90 = -61;
	uint16_t x91 = 777U;
	volatile int16_t x92 = -4;

	t20 = (x89*((x90/x91)%x92));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x93 = -14;
	static int16_t x94 = -1;
	volatile int32_t x95 = -1;
	volatile int32_t t21 = -64;

	t21 = (x93*((x94/x95)%x96));

	if (t21 != -14) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x102 = 225U;
	static int8_t x103 = INT8_MIN;
	int64_t x104 = INT64_MIN;
	int64_t t22 = -1622807LL;

	t22 = (x101*((x102/x103)%x104));

	if (t22 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x107 = INT64_MIN;
	uint64_t x108 = 32136882074LLU;
	uint64_t t23 = 9800546188928944LLU;

	t23 = (x105*((x106/x107)%x108));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x113 = UINT16_MAX;
	uint64_t x114 = 2905199725050323LLU;
	int64_t x115 = -284548692383LL;
	volatile int8_t x116 = -1;
	uint64_t t24 = 507326986LLU;

	t24 = (x113*((x114/x115)%x116));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x117 = -1;
	int64_t x118 = INT64_MAX;
	int16_t x119 = -3032;
	static int16_t x120 = INT16_MIN;

	t25 = (x117*((x118/x119)%x120));

	if (t25 != 26197LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x121 = -17;
	int16_t x124 = INT16_MIN;
	int64_t t26 = -7LL;

	t26 = (x121*((x122/x123)%x124));

	if (t26 != 221LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x125 = INT64_MIN;
	uint8_t x126 = 0U;
	uint8_t x128 = 46U;
	int64_t t27 = -1LL;

	t27 = (x125*((x126/x127)%x128));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x130 = 13U;
	int64_t x131 = 6186693LL;
	static uint8_t x132 = 20U;
	int64_t t28 = 995LL;

	t28 = (x129*((x130/x131)%x132));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x133 = 467U;
	volatile int64_t x134 = INT64_MIN;
	static int32_t x135 = 1;
	volatile int64_t t29 = -1982026862749862106LL;

	t29 = (x133*((x134/x135)%x136));

	if (t29 != -15302656LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x137 = INT32_MIN;
	static int16_t x138 = INT16_MIN;
	int8_t x140 = INT8_MIN;
	volatile int32_t t30 = -16179528;

	t30 = (x137*((x138/x139)%x140));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x145 = INT8_MIN;
	int8_t x146 = 37;
	int8_t x147 = INT8_MIN;
	volatile int32_t x148 = INT32_MIN;
	int32_t t31 = 1;

	t31 = (x145*((x146/x147)%x148));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x151 = INT16_MIN;
	static uint16_t x152 = UINT16_MAX;
	volatile int32_t t32 = -101;

	t32 = (x149*((x150/x151)%x152));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x153 = UINT64_MAX;
	int32_t x154 = -16000013;
	int32_t x155 = -123335;
	static uint64_t x156 = 5969818LLU;
	volatile uint64_t t33 = 90676613021LLU;

	t33 = (x153*((x154/x155)%x156));

	if (t33 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x157 = 234U;
	volatile int8_t x158 = -1;
	int16_t x159 = 184;
	volatile int32_t x160 = -1;
	volatile int32_t t34 = -439902;

	t34 = (x157*((x158/x159)%x160));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x161 = INT8_MIN;
	static uint64_t x162 = 0LLU;
	static volatile uint64_t x163 = 256208LLU;
	uint64_t t35 = 3563165548LLU;

	t35 = (x161*((x162/x163)%x164));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint32_t x165 = 205U;
	int8_t x167 = -1;
	int16_t x168 = INT16_MIN;
	volatile uint32_t t36 = 1351012059U;

	t36 = (x165*((x166/x167)%x168));

	if (t36 != 4288250061U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x169 = -1LL;
	uint16_t x170 = 17U;
	volatile uint32_t x171 = 617U;

	t37 = (x169*((x170/x171)%x172));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x173 = INT64_MIN;
	uint8_t x174 = 45U;
	int32_t x176 = INT32_MAX;
	volatile int64_t t38 = 20461799LL;

	t38 = (x173*((x174/x175)%x176));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x177 = INT64_MIN;
	int32_t x178 = -1;
	int8_t x179 = INT8_MIN;
	int32_t x180 = INT32_MAX;
	volatile int64_t t39 = 12553173459935436LL;

	t39 = (x177*((x178/x179)%x180));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x181 = 13U;
	static int16_t x182 = 2;
	int32_t x183 = INT32_MIN;
	static int64_t x184 = 223586857LL;
	int64_t t40 = 1410617LL;

	t40 = (x181*((x182/x183)%x184));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x186 = 0LLU;
	int8_t x187 = INT8_MAX;
	int64_t x188 = INT64_MAX;
	volatile uint64_t t41 = 3256932108713943422LLU;

	t41 = (x185*((x186/x187)%x188));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x190 = INT64_MIN;
	uint16_t x191 = 5502U;

	t42 = (x189*((x190/x191)%x192));

	if (t42 != -2853LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x193 = INT16_MAX;
	static int8_t x194 = INT8_MIN;
	static uint8_t x195 = UINT8_MAX;
	int16_t x196 = INT16_MIN;
	static int32_t t43 = -1321891;

	t43 = (x193*((x194/x195)%x196));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x197 = INT32_MAX;
	int16_t x198 = 410;
	uint8_t x199 = 44U;
	uint64_t x200 = 285274398905LLU;
	uint64_t t44 = 4LLU;

	t44 = (x197*((x198/x199)%x200));

	if (t44 != 19327352823LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x201 = 13584;
	int32_t x202 = INT32_MIN;
	uint32_t x203 = UINT32_MAX;
	static int64_t x204 = -1LL;
	volatile int64_t t45 = -32456593696LL;

	t45 = (x201*((x202/x203)%x204));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x205 = INT64_MIN;
	int8_t x206 = INT8_MIN;
	uint8_t x207 = UINT8_MAX;
	int64_t x208 = INT64_MIN;
	static volatile int64_t t46 = -86466904705794LL;

	t46 = (x205*((x206/x207)%x208));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x209 = INT16_MIN;
	uint64_t x211 = 68239358896076117LLU;
	volatile uint64_t t47 = 482LLU;

	t47 = (x209*((x210/x211)%x212));

	if (t47 != 18446744073705127936LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x213 = UINT64_MAX;
	int32_t x214 = INT32_MAX;
	uint8_t x216 = 51U;
	uint64_t t48 = 22432512870LLU;

	t48 = (x213*((x214/x215)%x216));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int32_t x218 = -1815961;
	int64_t x220 = 22LL;
	static int64_t t49 = -151435700472072LL;

	t49 = (x217*((x218/x219)%x220));

	if (t49 != 240LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x224 = INT32_MAX;
	int64_t t50 = 70493591765587343LL;

	t50 = (x221*((x222/x223)%x224));

	if (t50 != -31018979040LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x225 = -1;
	uint8_t x226 = UINT8_MAX;
	int8_t x227 = -7;
	int64_t x228 = INT64_MIN;
	static int64_t t51 = -37811118985LL;

	t51 = (x225*((x226/x227)%x228));

	if (t51 != 36LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x229 = INT64_MIN;
	int32_t x230 = INT32_MAX;
	static uint16_t x231 = 87U;
	volatile int8_t x232 = -5;
	volatile int64_t t52 = -172032238730LL;

	t52 = (x229*((x230/x231)%x232));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x233 = 26003319LLU;
	uint32_t x234 = UINT32_MAX;
	uint8_t x235 = UINT8_MAX;
	static volatile uint64_t t53 = 37162LLU;

	t53 = (x233*((x234/x235)%x236));

	if (t53 != 437974135946871LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x237 = UINT16_MAX;
	volatile uint64_t t54 = 251042LLU;

	t54 = (x237*((x238/x239)%x240));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x241 = INT16_MIN;
	int8_t x242 = 51;
	int8_t x243 = INT8_MIN;
	uint8_t x244 = 3U;
	int32_t t55 = -71355;

	t55 = (x241*((x242/x243)%x244));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x245 = -1;
	uint64_t x247 = 294LLU;
	int64_t x248 = INT64_MAX;

	t56 = (x245*((x246/x247)%x248));

	if (t56 != 18446744073702247250LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x250 = -1;
	uint64_t x251 = 32381022476230LLU;
	volatile uint64_t t57 = 291555971LLU;

	t57 = (x249*((x250/x251)%x252));

	if (t57 != 18445520701667409920LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x253 = INT64_MAX;
	int64_t x254 = INT64_MIN;
	int64_t x255 = 2LL;
	int16_t x256 = -1;
	static volatile int64_t t58 = 23620LL;

	t58 = (x253*((x254/x255)%x256));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x257 = UINT16_MAX;
	uint8_t x258 = 24U;
	int16_t x259 = INT16_MIN;
	int8_t x260 = INT8_MAX;
	int32_t t59 = 1394077;

	t59 = (x257*((x258/x259)%x260));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x262 = -444363634255425LL;
	uint32_t x263 = 2248U;
	volatile int8_t x264 = -1;
	int64_t t60 = -191710706113091LL;

	t60 = (x261*((x262/x263)%x264));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x265 = -1;
	volatile int8_t x267 = INT8_MIN;
	static int8_t x268 = INT8_MAX;
	volatile uint32_t t61 = 845056343U;

	t61 = (x265*((x266/x267)%x268));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x273 = -1LL;
	static int32_t x274 = INT32_MAX;
	volatile int64_t x275 = INT64_MAX;
	int8_t x276 = INT8_MIN;
	int64_t t62 = -24851524721LL;

	t62 = (x273*((x274/x275)%x276));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x277 = -1;
	static volatile int16_t x278 = -1;
	static int64_t x279 = INT64_MIN;
	uint16_t x280 = 12U;
	volatile int64_t t63 = -1LL;

	t63 = (x277*((x278/x279)%x280));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x282 = -8;
	volatile int32_t x283 = INT32_MIN;
	static int64_t x284 = -1245LL;
	volatile int64_t t64 = -106378234667427861LL;

	t64 = (x281*((x282/x283)%x284));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x285 = INT64_MIN;
	int16_t x286 = 1;
	static int8_t x287 = INT8_MAX;
	uint64_t x288 = 17403555LLU;

	t65 = (x285*((x286/x287)%x288));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x290 = -1LL;
	static int32_t x291 = INT32_MIN;
	int8_t x292 = INT8_MIN;
	int64_t t66 = -24856457575848627LL;

	t66 = (x289*((x290/x291)%x292));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x293 = 1U;
	uint8_t x294 = UINT8_MAX;
	int8_t x295 = INT8_MIN;
	static int16_t x296 = -2327;

	t67 = (x293*((x294/x295)%x296));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x297 = -156706904;
	int8_t x298 = -3;
	uint64_t x299 = 108052LLU;
	volatile uint64_t t68 = 18190969308788LLU;

	t68 = (x297*((x298/x299)%x300));

	if (t68 != 18446740655148440856LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x305 = INT16_MIN;
	volatile int8_t x306 = INT8_MAX;
	int64_t x307 = -1LL;
	int16_t x308 = INT16_MIN;

	t69 = (x305*((x306/x307)%x308));

	if (t69 != 4161536LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x309 = -1LL;
	static int8_t x310 = -1;
	uint16_t x311 = UINT16_MAX;
	uint64_t x312 = 1749354139727LLU;

	t70 = (x309*((x310/x311)%x312));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x313 = 6124U;
	int16_t x315 = INT16_MIN;
	int8_t x316 = -1;
	int32_t t71 = -43652674;

	t71 = (x313*((x314/x315)%x316));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x317 = 85U;
	volatile uint64_t x318 = UINT64_MAX;
	static volatile int16_t x319 = 1130;
	int64_t x320 = INT64_MAX;
	uint64_t t72 = 270858354069484LLU;

	t72 = (x317*((x318/x319)%x320));

	if (t72 != 1387586943597621120LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x321 = INT16_MIN;
	int64_t x323 = INT64_MIN;
	int8_t x324 = INT8_MIN;
	int64_t t73 = 725LL;

	t73 = (x321*((x322/x323)%x324));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x325 = -1;
	static int8_t x326 = INT8_MIN;
	int8_t x328 = -1;
	int32_t t74 = -14864;

	t74 = (x325*((x326/x327)%x328));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x330 = INT16_MIN;
	int8_t x331 = -1;
	uint32_t x332 = 216U;
	static volatile int64_t t75 = -10994399407445LL;

	t75 = (x329*((x330/x331)%x332));

	if (t75 != -152LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x334 = 10025635922453353LL;
	volatile int8_t x335 = INT8_MIN;
	static int8_t x336 = -1;
	int64_t t76 = -7116683948763771LL;

	t76 = (x333*((x334/x335)%x336));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x337 = 3776340089937LLU;
	volatile int16_t x338 = INT16_MIN;
	static volatile uint8_t x339 = UINT8_MAX;
	static uint16_t x340 = 17852U;
	volatile uint64_t t77 = 7LLU;

	t77 = (x337*((x338/x339)%x340));

	if (t77 != 18446260702178039680LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x342 = INT8_MAX;
	static volatile int64_t x344 = -1LL;
	uint64_t t78 = 4102833991LLU;

	t78 = (x341*((x342/x343)%x344));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x345 = INT8_MIN;
	uint16_t x346 = UINT16_MAX;
	uint32_t x347 = UINT32_MAX;
	int16_t x348 = INT16_MIN;
	uint32_t t79 = 104892U;

	t79 = (x345*((x346/x347)%x348));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x349 = 2621076294LL;
	uint64_t x352 = 85LLU;
	volatile uint64_t t80 = 788021LLU;

	t80 = (x349*((x350/x351)%x352));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int64_t x353 = INT64_MAX;
	int16_t x354 = 1;
	int8_t x355 = -38;
	int8_t x356 = INT8_MAX;
	static volatile int64_t t81 = 273LL;

	t81 = (x353*((x354/x355)%x356));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x357 = -2184;
	int32_t x359 = INT32_MIN;

	t82 = (x357*((x358/x359)%x360));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x361 = UINT8_MAX;
	int8_t x362 = -15;
	int32_t x364 = INT32_MAX;
	int32_t t83 = -78575505;

	t83 = (x361*((x362/x363)%x364));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x365 = -1LL;
	volatile int32_t x366 = INT32_MIN;
	volatile int32_t x367 = 23347715;
	int16_t x368 = INT16_MIN;
	int64_t t84 = 16LL;

	t84 = (x365*((x366/x367)%x368));

	if (t84 != 91LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x373 = UINT8_MAX;
	int64_t x374 = INT64_MIN;
	int32_t x375 = INT32_MIN;
	uint8_t x376 = 1U;
	static volatile int64_t t85 = 7912LL;

	t85 = (x373*((x374/x375)%x376));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x377 = -1;
	static int64_t x378 = INT64_MIN;
	volatile uint64_t x379 = UINT64_MAX;
	int16_t x380 = 16221;
	static volatile uint64_t t86 = 5631679406478198872LLU;

	t86 = (x377*((x378/x379)%x380));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x381 = -1;
	int64_t x382 = INT64_MIN;
	volatile int16_t x383 = INT16_MIN;
	int16_t x384 = INT16_MAX;
	volatile int64_t t87 = -101LL;

	t87 = (x381*((x382/x383)%x384));

	if (t87 != -8LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x389 = 3U;
	static int16_t x390 = INT16_MIN;
	volatile int32_t x391 = -218573;
	volatile uint8_t x392 = 2U;
	volatile int32_t t88 = 14652;

	t88 = (x389*((x390/x391)%x392));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x393 = INT16_MAX;
	int8_t x394 = 5;
	static int64_t x395 = 5LL;
	volatile int64_t t89 = -175560489697386829LL;

	t89 = (x393*((x394/x395)%x396));

	if (t89 != 32767LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x397 = 61;
	int64_t x398 = INT64_MIN;
	int64_t x400 = 1846029021662021LL;

	t90 = (x397*((x398/x399)%x400));

	if (t90 != -91677642862659485LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x401 = INT64_MIN;
	volatile int32_t x402 = -10208;
	static int32_t x403 = -7;
	uint64_t x404 = 54LLU;
	static uint64_t t91 = 1LLU;

	t91 = (x401*((x402/x403)%x404));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x405 = INT16_MIN;
	int32_t x406 = -1;
	static int64_t x407 = INT64_MIN;
	static int8_t x408 = INT8_MAX;

	t92 = (x405*((x406/x407)%x408));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x409 = INT8_MIN;
	int8_t x410 = 12;
	int8_t x411 = INT8_MAX;
	int16_t x412 = -1;
	volatile int32_t t93 = -50840315;

	t93 = (x409*((x410/x411)%x412));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x413 = 67LLU;
	static int8_t x414 = -1;
	static int64_t x415 = INT64_MIN;
	static uint32_t x416 = 117U;
	volatile uint64_t t94 = 515LLU;

	t94 = (x413*((x414/x415)%x416));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x417 = -13;
	int32_t x418 = INT32_MIN;
	int64_t x419 = INT64_MAX;
	volatile int32_t x420 = -1;
	static int64_t t95 = -163881727309448LL;

	t95 = (x417*((x418/x419)%x420));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x421 = UINT8_MAX;
	int32_t x422 = -15;
	uint64_t x423 = UINT64_MAX;
	static volatile int32_t x424 = 116711;
	static volatile uint64_t t96 = 2166056278095981LLU;

	t96 = (x421*((x422/x423)%x424));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x426 = INT32_MIN;
	uint32_t x427 = 3195154U;
	static uint16_t x428 = UINT16_MAX;
	static uint32_t t97 = 153193U;

	t97 = (x425*((x426/x427)%x428));

	if (t97 != 4294881280U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x431 = 244;
	uint64_t x432 = UINT64_MAX;

	t98 = (x429*((x430/x431)%x432));

	if (t98 != 7635742423953543948LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x433 = UINT64_MAX;
	int8_t x434 = INT8_MAX;
	uint8_t x436 = UINT8_MAX;
	volatile uint64_t t99 = 5094841734077622LLU;

	t99 = (x433*((x434/x435)%x436));

	if (t99 != 18446744073709551574LLU) { NG(); } else { ; }
	
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

