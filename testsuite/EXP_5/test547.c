#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t0 = 272493028794LLU;
volatile int64_t x8 = INT64_MIN;
int64_t x11 = -40753650LL;
volatile int64_t t3 = -41405LL;
uint32_t x22 = UINT32_MAX;
int64_t x25 = INT64_MAX;
static int8_t x28 = -8;
uint8_t x29 = 1U;
uint8_t x31 = UINT8_MAX;
int16_t x38 = INT16_MAX;
uint32_t x46 = 4127434U;
int32_t x47 = -1;
uint32_t x48 = 5U;
int16_t x50 = -1;
int32_t x51 = INT32_MAX;
int64_t x54 = -91LL;
uint32_t t14 = 1626957U;
int64_t x66 = -1877LL;
int64_t x73 = -1LL;
int32_t x76 = 18;
volatile int64_t t17 = -4145545472705030LL;
uint64_t x78 = 39773517544LLU;
int8_t x89 = 0;
int64_t x92 = INT64_MIN;
volatile int16_t x94 = INT16_MIN;
volatile int32_t x109 = INT32_MAX;
uint16_t x121 = UINT16_MAX;
int8_t x122 = 1;
volatile int16_t x130 = -1;
static volatile uint64_t t29 = 239859LLU;
int32_t x135 = INT32_MIN;
static volatile int32_t x136 = -1;
static int64_t t31 = -5269LL;
static int32_t t35 = -17745755;
static uint32_t x159 = UINT32_MAX;
volatile uint8_t x172 = 3U;
static uint32_t t40 = 320141U;
int8_t x180 = -9;
int32_t x181 = INT32_MAX;
int16_t x182 = -1;
volatile int32_t t42 = INT32_MAX;
int32_t x185 = 17800;
volatile int16_t x186 = -1;
uint32_t x193 = 1142U;
uint64_t x196 = UINT64_MAX;
uint8_t x201 = 30U;
static int64_t x211 = -29957192263008841LL;
int64_t x217 = INT64_MIN;
int8_t x218 = -1;
int32_t x227 = -1;
int64_t x229 = 1765900044424906LL;
static uint16_t x231 = UINT16_MAX;
volatile int64_t t53 = 641754662068LL;
volatile int16_t x239 = -1;
volatile uint64_t t56 = UINT64_MAX;
static volatile int32_t x246 = -1;
volatile uint8_t x247 = UINT8_MAX;
uint64_t t57 = 38LLU;
static int16_t x254 = 16128;
static int32_t x268 = 3522;
volatile int64_t t60 = -57601641816LL;
volatile int64_t x270 = INT64_MAX;
volatile int64_t t61 = 17717LL;
int64_t x275 = INT64_MAX;
int64_t t62 = 2729605LL;
uint32_t x277 = UINT32_MAX;
static uint16_t x281 = UINT16_MAX;
int64_t x282 = INT64_MIN;
uint32_t x290 = 2U;
int8_t x291 = -1;
int64_t x293 = -1LL;
static int64_t x294 = -1LL;
uint64_t x296 = 31129LLU;
uint32_t x298 = UINT32_MAX;
int32_t x300 = INT32_MIN;
int64_t x308 = -210992LL;
static uint32_t t71 = 100U;
int32_t x317 = INT32_MAX;
int8_t x318 = -1;
int32_t x322 = -82;
uint16_t x330 = 17U;
int8_t x333 = INT8_MAX;
uint32_t x338 = 184630U;
static uint16_t x340 = 1U;
int8_t x343 = INT8_MIN;
volatile uint8_t x348 = 115U;
uint64_t t80 = 24719444LLU;
int64_t x351 = INT64_MIN;
uint16_t x369 = 10U;
uint16_t x372 = 111U;
int64_t x379 = INT64_MIN;
static volatile uint8_t x382 = 0U;
volatile int8_t x383 = INT8_MIN;
int64_t x388 = INT64_MIN;
uint8_t x406 = 16U;
int16_t x407 = INT16_MIN;
volatile int64_t t93 = 140393991719281LL;
uint32_t x413 = 2519890U;
int64_t x415 = INT64_MAX;
uint8_t x417 = 16U;
static uint64_t x426 = 117841126891LLU;
uint64_t t98 = UINT64_MAX;
static volatile int32_t x429 = 526584988;


void f0(void) {
	static int64_t x1 = 47380LL;
	uint8_t x2 = UINT8_MAX;
	uint16_t x3 = 5U;
	volatile uint64_t x4 = UINT64_MAX;

	t0 = (x1+((x2/x3)/x4));

	if (t0 != 47380LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = INT8_MIN;
	volatile uint8_t x6 = 0U;
	int16_t x7 = INT16_MIN;
	int64_t t1 = 2376LL;

	t1 = (x5+((x6/x7)/x8));

	if (t1 != -128LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x9 = 46893U;
	int16_t x10 = -1;
	static int8_t x12 = INT8_MIN;
	static int64_t t2 = 0LL;

	t2 = (x9+((x10/x11)/x12));

	if (t2 != 46893LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = 1;
	int64_t x14 = 159250238302280LL;
	int32_t x15 = -1;
	int32_t x16 = -1;

	t3 = (x13+((x14/x15)/x16));

	if (t3 != 159250238302281LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x17 = 1092608668U;
	static int64_t x18 = 192LL;
	int8_t x19 = INT8_MAX;
	volatile uint16_t x20 = UINT16_MAX;
	volatile int64_t t4 = 3874LL;

	t4 = (x17+((x18/x19)/x20));

	if (t4 != 1092608668LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	int32_t x23 = INT32_MAX;
	volatile uint64_t x24 = UINT64_MAX;
	static volatile uint64_t t5 = 1064219891784696LLU;

	t5 = (x21+((x22/x23)/x24));

	if (t5 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x26 = 1LL;
	volatile int16_t x27 = INT16_MAX;
	int64_t t6 = INT64_MAX;

	t6 = (x25+((x26/x27)/x28));

	if (t6 != INT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x30 = -7;
	int32_t x32 = INT32_MIN;
	volatile int32_t t7 = 4857591;

	t7 = (x29+((x30/x31)/x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x33 = INT32_MIN;
	volatile int16_t x34 = INT16_MAX;
	int16_t x35 = 1;
	static uint64_t x36 = 38127561LLU;
	volatile uint64_t t8 = 4525LLU;

	t8 = (x33+((x34/x35)/x36));

	if (t8 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -4192529961LL;
	static int16_t x39 = -1;
	int64_t x40 = -1LL;
	int64_t t9 = 376562894539869509LL;

	t9 = (x37+((x38/x39)/x40));

	if (t9 != -4192497194LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x45 = UINT64_MAX;
	static volatile uint64_t t10 = UINT64_MAX;

	t10 = (x45+((x46/x47)/x48));

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x49 = 46U;
	int8_t x52 = INT8_MAX;
	int32_t t11 = 138966;

	t11 = (x49+((x50/x51)/x52));

	if (t11 != 46) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x53 = INT32_MAX;
	int16_t x55 = INT16_MAX;
	uint16_t x56 = 10556U;
	static volatile int64_t t12 = -1LL;

	t12 = (x53+((x54/x55)/x56));

	if (t12 != 2147483647LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = 161;
	volatile int32_t x58 = -469668;
	int8_t x59 = INT8_MAX;
	int32_t x60 = INT32_MAX;
	int32_t t13 = -519743758;

	t13 = (x57+((x58/x59)/x60));

	if (t13 != 161) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = INT16_MIN;
	static volatile int32_t x62 = INT32_MIN;
	uint32_t x63 = UINT32_MAX;
	int32_t x64 = 185487;

	t14 = (x61+((x62/x63)/x64));

	if (t14 != 4294934528U) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x65 = 4945876253651153709LLU;
	int8_t x67 = INT8_MIN;
	uint16_t x68 = 26467U;
	volatile uint64_t t15 = 23603984135603LLU;

	t15 = (x65+((x66/x67)/x68));

	if (t15 != 4945876253651153709LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = 5365817226832LL;
	int64_t x70 = INT64_MIN;
	uint64_t x71 = 105775895LLU;
	uint32_t x72 = 1270665U;
	uint64_t t16 = 9640LLU;

	t16 = (x69+((x70/x71)/x72));

	if (t16 != 5365817295455LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x74 = INT64_MIN;
	uint8_t x75 = UINT8_MAX;

	t17 = (x73+((x74/x75)/x76));

	if (t17 != -2009449245502130LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x77 = UINT16_MAX;
	static uint8_t x79 = UINT8_MAX;
	volatile int16_t x80 = 102;
	uint64_t t18 = 2LLU;

	t18 = (x77+((x78/x79)/x80));

	if (t18 != 1594697LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x81 = UINT8_MAX;
	uint64_t x82 = UINT64_MAX;
	static uint64_t x83 = 5693239LLU;
	static int16_t x84 = INT16_MAX;
	uint64_t t19 = 2046LLU;

	t19 = (x81+((x82/x83)/x84));

	if (t19 != 98883708LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x85 = -49417LL;
	uint64_t x86 = UINT64_MAX;
	uint16_t x87 = 244U;
	int64_t x88 = -1LL;
	volatile uint64_t t20 = 18615371284LLU;

	t20 = (x85+((x86/x87)/x88));

	if (t20 != 18446744073709502199LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x90 = 39U;
	int8_t x91 = INT8_MIN;
	volatile int64_t t21 = -20292632LL;

	t21 = (x89+((x90/x91)/x92));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = INT16_MIN;
	static int16_t x95 = -1;
	int64_t x96 = INT64_MIN;
	int64_t t22 = -1017370794982199LL;

	t22 = (x93+((x94/x95)/x96));

	if (t22 != -32768LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x97 = 5U;
	static int32_t x98 = INT32_MAX;
	int32_t x99 = INT32_MAX;
	int16_t x100 = -665;
	volatile int32_t t23 = 852879694;

	t23 = (x97+((x98/x99)/x100));

	if (t23 != 5) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = INT8_MIN;
	uint8_t x102 = UINT8_MAX;
	int16_t x103 = -1;
	int64_t x104 = INT64_MAX;
	volatile int64_t t24 = -2482687LL;

	t24 = (x101+((x102/x103)/x104));

	if (t24 != -128LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x105 = -1;
	static uint8_t x106 = 0U;
	volatile int8_t x107 = INT8_MIN;
	int16_t x108 = 1;
	int32_t t25 = 61;

	t25 = (x105+((x106/x107)/x108));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x110 = 1U;
	uint64_t x111 = UINT64_MAX;
	uint16_t x112 = UINT16_MAX;
	volatile uint64_t t26 = 559992882864805LLU;

	t26 = (x109+((x110/x111)/x112));

	if (t26 != 2147483647LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x123 = -1;
	volatile int8_t x124 = 1;
	int32_t t27 = 2927446;

	t27 = (x121+((x122/x123)/x124));

	if (t27 != 65534) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x125 = INT64_MAX;
	int64_t x126 = INT64_MIN;
	static int8_t x127 = -61;
	int8_t x128 = INT8_MIN;
	int64_t t28 = -836LL;

	t28 = (x125+((x126/x127)/x128));

	if (t28 != 9222190764821367153LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x129 = INT16_MIN;
	int64_t x131 = INT64_MIN;
	volatile uint64_t x132 = 698LLU;

	t29 = (x129+((x130/x131)/x132));

	if (t29 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x133 = INT64_MIN;
	int16_t x134 = 13;
	int64_t t30 = INT64_MIN;

	t30 = (x133+((x134/x135)/x136));

	if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x137 = 1736U;
	int8_t x138 = 5;
	static int32_t x139 = INT32_MIN;
	int64_t x140 = INT64_MIN;

	t31 = (x137+((x138/x139)/x140));

	if (t31 != 1736LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x141 = -34243759288037741LL;
	uint32_t x142 = 320667U;
	static int64_t x143 = -14LL;
	int64_t x144 = INT64_MAX;
	volatile int64_t t32 = -18485201LL;

	t32 = (x141+((x142/x143)/x144));

	if (t32 != -34243759288037741LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x145 = 1U;
	int8_t x146 = 0;
	int16_t x147 = INT16_MIN;
	int8_t x148 = -7;
	int32_t t33 = 13255040;

	t33 = (x145+((x146/x147)/x148));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x149 = 16U;
	int8_t x150 = 0;
	int16_t x151 = INT16_MAX;
	static int8_t x152 = -7;
	int32_t t34 = 150;

	t34 = (x149+((x150/x151)/x152));

	if (t34 != 16) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x153 = -1067390;
	static int8_t x154 = -1;
	volatile int16_t x155 = -5660;
	int16_t x156 = INT16_MIN;

	t35 = (x153+((x154/x155)/x156));

	if (t35 != -1067390) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x157 = INT32_MIN;
	int32_t x158 = -1;
	int64_t x160 = -3469948899336LL;
	volatile int64_t t36 = -843985015142912165LL;

	t36 = (x157+((x158/x159)/x160));

	if (t36 != -2147483648LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x161 = -1;
	static int8_t x162 = -2;
	uint32_t x163 = 1986022537U;
	volatile int32_t x164 = INT32_MIN;
	static uint32_t t37 = UINT32_MAX;

	t37 = (x161+((x162/x163)/x164));

	if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x165 = UINT64_MAX;
	int8_t x166 = INT8_MAX;
	int64_t x167 = INT64_MIN;
	int8_t x168 = INT8_MIN;
	uint64_t t38 = UINT64_MAX;

	t38 = (x165+((x166/x167)/x168));

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x169 = 25U;
	uint32_t x170 = 57520U;
	volatile int64_t x171 = INT64_MIN;
	int64_t t39 = -436292112395LL;

	t39 = (x169+((x170/x171)/x172));

	if (t39 != 25LL) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint32_t x173 = 2080869U;
	uint8_t x174 = UINT8_MAX;
	int16_t x175 = INT16_MIN;
	static int8_t x176 = -1;

	t40 = (x173+((x174/x175)/x176));

	if (t40 != 2080869U) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x177 = 72U;
	static int8_t x178 = INT8_MIN;
	int64_t x179 = 27125053LL;
	int64_t t41 = -3228196437643187092LL;

	t41 = (x177+((x178/x179)/x180));

	if (t41 != 72LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x183 = INT8_MIN;
	uint16_t x184 = 4759U;

	t42 = (x181+((x182/x183)/x184));

	if (t42 != INT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x187 = UINT8_MAX;
	static int8_t x188 = INT8_MAX;
	int32_t t43 = 2375598;

	t43 = (x185+((x186/x187)/x188));

	if (t43 != 17800) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x189 = INT32_MAX;
	static int16_t x190 = -1;
	static int8_t x191 = 3;
	uint16_t x192 = UINT16_MAX;
	volatile int32_t t44 = INT32_MAX;

	t44 = (x189+((x190/x191)/x192));

	if (t44 != INT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x194 = 0U;
	int32_t x195 = INT32_MIN;
	uint64_t t45 = 1LLU;

	t45 = (x193+((x194/x195)/x196));

	if (t45 != 1142LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x197 = -1;
	int16_t x198 = INT16_MIN;
	uint8_t x199 = 7U;
	int64_t x200 = INT64_MAX;
	volatile int64_t t46 = 380867106LL;

	t46 = (x197+((x198/x199)/x200));

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x202 = -13;
	static int64_t x203 = -1LL;
	static volatile int8_t x204 = 1;
	volatile int64_t t47 = 679856329936527LL;

	t47 = (x201+((x202/x203)/x204));

	if (t47 != 43LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x205 = INT64_MIN;
	int8_t x206 = INT8_MAX;
	int16_t x207 = 15909;
	int8_t x208 = 9;
	volatile int64_t t48 = INT64_MIN;

	t48 = (x205+((x206/x207)/x208));

	if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x209 = UINT64_MAX;
	int16_t x210 = INT16_MIN;
	int64_t x212 = INT64_MIN;
	volatile uint64_t t49 = UINT64_MAX;

	t49 = (x209+((x210/x211)/x212));

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x219 = 225038;
	int16_t x220 = -65;
	int64_t t50 = INT64_MIN;

	t50 = (x217+((x218/x219)/x220));

	if (t50 != INT64_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x221 = INT16_MIN;
	volatile int32_t x222 = INT32_MAX;
	uint32_t x223 = UINT32_MAX;
	uint16_t x224 = 3853U;
	uint32_t t51 = 0U;

	t51 = (x221+((x222/x223)/x224));

	if (t51 != 4294934528U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x225 = INT32_MIN;
	uint64_t x226 = 3694LLU;
	static uint16_t x228 = 1357U;
	static volatile uint64_t t52 = 655958553LLU;

	t52 = (x225+((x226/x227)/x228));

	if (t52 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x230 = 64U;
	int8_t x232 = -1;

	t53 = (x229+((x230/x231)/x232));

	if (t53 != 1765900044424906LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x233 = 3386581078LLU;
	volatile uint32_t x234 = 13827U;
	int8_t x235 = INT8_MAX;
	uint64_t x236 = 14528268144733LLU;
	volatile uint64_t t54 = 16411890287900LLU;

	t54 = (x233+((x234/x235)/x236));

	if (t54 != 3386581078LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x237 = -1;
	int16_t x238 = -2;
	volatile int16_t x240 = 26;
	volatile int32_t t55 = -31;

	t55 = (x237+((x238/x239)/x240));

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x241 = UINT64_MAX;
	uint8_t x242 = 2U;
	int64_t x243 = INT64_MIN;
	int32_t x244 = INT32_MIN;

	t56 = (x241+((x242/x243)/x244));

	if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x245 = UINT8_MAX;
	uint64_t x248 = 2118929674LLU;

	t57 = (x245+((x246/x247)/x248));

	if (t57 != 255LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x253 = INT64_MIN;
	static uint8_t x255 = 1U;
	int32_t x256 = 959;
	int64_t t58 = 12LL;

	t58 = (x253+((x254/x255)/x256));

	if (t58 != -9223372036854775792LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x257 = -1LL;
	int64_t x258 = INT64_MIN;
	int8_t x259 = -29;
	static int8_t x260 = INT8_MIN;
	static int64_t t59 = 37405796LL;

	t59 = (x257+((x258/x259)/x260));

	if (t59 != -2484744621997516LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x265 = INT8_MIN;
	uint16_t x266 = 21882U;
	int64_t x267 = INT64_MAX;

	t60 = (x265+((x266/x267)/x268));

	if (t60 != -128LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x269 = 25LL;
	int64_t x271 = INT64_MAX;
	volatile int32_t x272 = INT32_MIN;

	t61 = (x269+((x270/x271)/x272));

	if (t61 != 25LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x273 = 477856U;
	volatile int16_t x274 = -1;
	int16_t x276 = -1;

	t62 = (x273+((x274/x275)/x276));

	if (t62 != 477856LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x278 = 99U;
	uint16_t x279 = UINT16_MAX;
	int64_t x280 = -91669LL;
	int64_t t63 = 24322444LL;

	t63 = (x277+((x278/x279)/x280));

	if (t63 != 4294967295LL) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int32_t x283 = INT32_MIN;
	int16_t x284 = -365;
	static int64_t t64 = 5LL;

	t64 = (x281+((x282/x283)/x284));

	if (t64 != -11701498LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x285 = -1297;
	int32_t x286 = -4;
	static int16_t x287 = -1;
	static uint16_t x288 = UINT16_MAX;
	int32_t t65 = 2755219;

	t65 = (x285+((x286/x287)/x288));

	if (t65 != -1297) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x289 = INT32_MIN;
	int16_t x292 = INT16_MAX;
	uint32_t t66 = 1U;

	t66 = (x289+((x290/x291)/x292));

	if (t66 != 2147483648U) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int32_t x295 = 22;
	static volatile uint64_t t67 = UINT64_MAX;

	t67 = (x293+((x294/x295)/x296));

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x297 = 169U;
	static uint32_t x299 = 7U;
	static volatile uint32_t t68 = 7U;

	t68 = (x297+((x298/x299)/x300));

	if (t68 != 169U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x301 = 1706665;
	static int64_t x302 = -1LL;
	volatile int16_t x303 = INT16_MAX;
	int32_t x304 = 13636544;
	volatile int64_t t69 = -949498476LL;

	t69 = (x301+((x302/x303)/x304));

	if (t69 != 1706665LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x305 = UINT64_MAX;
	uint8_t x306 = 0U;
	volatile uint32_t x307 = 4U;
	volatile uint64_t t70 = UINT64_MAX;

	t70 = (x305+((x306/x307)/x308));

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x309 = INT32_MIN;
	volatile uint32_t x310 = 6825U;
	int16_t x311 = -3372;
	int8_t x312 = 1;

	t71 = (x309+((x310/x311)/x312));

	if (t71 != 2147483648U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x313 = UINT8_MAX;
	int32_t x314 = -1;
	int32_t x315 = 218;
	uint32_t x316 = 1774917U;
	volatile uint32_t t72 = 14501462U;

	t72 = (x313+((x314/x315)/x316));

	if (t72 != 255U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x319 = INT16_MIN;
	int16_t x320 = -1;
	int32_t t73 = INT32_MAX;

	t73 = (x317+((x318/x319)/x320));

	if (t73 != INT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x321 = INT8_MIN;
	int16_t x323 = INT16_MAX;
	int8_t x324 = INT8_MIN;
	int32_t t74 = 156409832;

	t74 = (x321+((x322/x323)/x324));

	if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x325 = INT32_MAX;
	static volatile int8_t x326 = -1;
	int64_t x327 = INT64_MAX;
	uint16_t x328 = UINT16_MAX;
	int64_t t75 = 2878001761LL;

	t75 = (x325+((x326/x327)/x328));

	if (t75 != 2147483647LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x329 = -59;
	static int16_t x331 = 1;
	int32_t x332 = -1;
	volatile int32_t t76 = -46;

	t76 = (x329+((x330/x331)/x332));

	if (t76 != -76) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x334 = INT8_MIN;
	uint32_t x335 = UINT32_MAX;
	volatile int64_t x336 = INT64_MIN;
	static volatile int64_t t77 = -150LL;

	t77 = (x333+((x334/x335)/x336));

	if (t77 != 127LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x337 = INT8_MAX;
	uint8_t x339 = 3U;
	uint32_t t78 = 1367363U;

	t78 = (x337+((x338/x339)/x340));

	if (t78 != 61670U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x341 = 1;
	static volatile int64_t x342 = INT64_MIN;
	uint64_t x344 = UINT64_MAX;
	volatile uint64_t t79 = 153809165LLU;

	t79 = (x341+((x342/x343)/x344));

	if (t79 != 1LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x345 = 5999LLU;
	int16_t x346 = -21;
	static uint8_t x347 = UINT8_MAX;

	t80 = (x345+((x346/x347)/x348));

	if (t80 != 5999LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int16_t x349 = INT16_MAX;
	static volatile int8_t x350 = -1;
	static uint16_t x352 = UINT16_MAX;
	int64_t t81 = 6507498434253489LL;

	t81 = (x349+((x350/x351)/x352));

	if (t81 != 32767LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x357 = UINT64_MAX;
	volatile int16_t x358 = INT16_MAX;
	int32_t x359 = 11013;
	int8_t x360 = INT8_MAX;
	uint64_t t82 = UINT64_MAX;

	t82 = (x357+((x358/x359)/x360));

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x361 = 1949U;
	int8_t x362 = INT8_MIN;
	uint64_t x363 = 985LLU;
	static int32_t x364 = INT32_MIN;
	volatile uint64_t t83 = 51323318924LLU;

	t83 = (x361+((x362/x363)/x364));

	if (t83 != 1949LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x370 = INT64_MIN;
	int8_t x371 = 1;
	int64_t t84 = 6LL;

	t84 = (x369+((x370/x371)/x372));

	if (t84 != -83093441773466438LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x373 = INT16_MIN;
	volatile int8_t x374 = INT8_MIN;
	static int16_t x375 = -1;
	volatile int32_t x376 = INT32_MAX;
	volatile int32_t t85 = -42489;

	t85 = (x373+((x374/x375)/x376));

	if (t85 != -32768) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x377 = INT32_MAX;
	static uint32_t x378 = UINT32_MAX;
	uint16_t x380 = 8U;
	int64_t t86 = -1LL;

	t86 = (x377+((x378/x379)/x380));

	if (t86 != 2147483647LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x381 = 26U;
	volatile uint32_t x384 = 723790162U;
	uint32_t t87 = 11250U;

	t87 = (x381+((x382/x383)/x384));

	if (t87 != 26U) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x385 = 10790010776402566LLU;
	int64_t x386 = INT64_MAX;
	int16_t x387 = INT16_MIN;
	uint64_t t88 = 16166753509LLU;

	t88 = (x385+((x386/x387)/x388));

	if (t88 != 10790010776402566LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x389 = -2819;
	int16_t x390 = INT16_MIN;
	uint32_t x391 = UINT32_MAX;
	int64_t x392 = -16028LL;
	int64_t t89 = 144935088LL;

	t89 = (x389+((x390/x391)/x392));

	if (t89 != -2819LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x393 = 22855U;
	uint32_t x394 = UINT32_MAX;
	int64_t x395 = INT64_MAX;
	static uint32_t x396 = 253066234U;
	int64_t t90 = -1374934LL;

	t90 = (x393+((x394/x395)/x396));

	if (t90 != 22855LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x397 = INT8_MIN;
	static int32_t x398 = INT32_MIN;
	static int32_t x399 = 356;
	int16_t x400 = INT16_MIN;
	int32_t t91 = -2644;

	t91 = (x397+((x398/x399)/x400));

	if (t91 != 56) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x401 = 100065715811674LLU;
	volatile uint32_t x402 = UINT32_MAX;
	uint16_t x403 = 12U;
	int16_t x404 = -2887;
	volatile uint64_t t92 = 40661752946LLU;

	t92 = (x401+((x402/x403)/x404));

	if (t92 != 100065715811674LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x405 = 191U;
	volatile int64_t x408 = -14301037437372916LL;

	t93 = (x405+((x406/x407)/x408));

	if (t93 != 191LL) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint16_t x409 = 1U;
	uint16_t x410 = 81U;
	int16_t x411 = -1;
	uint32_t x412 = UINT32_MAX;
	static volatile uint32_t t94 = 0U;

	t94 = (x409+((x410/x411)/x412));

	if (t94 != 1U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x414 = -258661LL;
	static uint64_t x416 = UINT64_MAX;
	volatile uint64_t t95 = 494801688LLU;

	t95 = (x413+((x414/x415)/x416));

	if (t95 != 2519890LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x418 = 1763U;
	uint8_t x419 = 8U;
	volatile int16_t x420 = INT16_MAX;
	uint32_t t96 = 128951U;

	t96 = (x417+((x418/x419)/x420));

	if (t96 != 16U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x421 = 5215936858LL;
	volatile uint8_t x422 = UINT8_MAX;
	int64_t x423 = -13963919252499711LL;
	int32_t x424 = 127898;
	static int64_t t97 = 111LL;

	t97 = (x421+((x422/x423)/x424));

	if (t97 != 5215936858LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x425 = -1;
	static volatile int32_t x427 = INT32_MAX;
	int8_t x428 = INT8_MAX;

	t98 = (x425+((x426/x427)/x428));

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x430 = 95U;
	volatile int32_t x431 = -2005;
	int16_t x432 = 1;
	static uint32_t t99 = 2U;

	t99 = (x429+((x430/x431)/x432));

	if (t99 != 526584988U) { NG(); } else { ; }
	
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

