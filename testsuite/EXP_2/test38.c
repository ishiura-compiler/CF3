#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x11 = 269765878;
int16_t x12 = INT16_MIN;
int32_t x13 = INT32_MIN;
int64_t t2 = -558199893LL;
int64_t x19 = 1413567120418670371LL;
int64_t x24 = 42019818649607LL;
int16_t x25 = -1;
int32_t x31 = INT32_MAX;
uint64_t t7 = 287922LLU;
static int64_t x52 = INT64_MAX;
volatile int64_t t8 = INT64_MAX;
int32_t x59 = -1;
uint64_t x69 = UINT64_MAX;
static int32_t x72 = INT32_MIN;
uint64_t x80 = 6779LLU;
volatile uint64_t t14 = UINT64_MAX;
volatile uint32_t t18 = 45635970U;
static int8_t x117 = INT8_MAX;
int8_t x119 = 3;
volatile uint64_t x126 = UINT64_MAX;
int16_t x128 = -1;
uint32_t x130 = 1838U;
volatile uint64_t t23 = 55361679980306653LLU;
uint32_t x157 = 1008935U;
uint64_t x165 = UINT64_MAX;
volatile uint64_t t29 = 1168596025396142LLU;
static int16_t x180 = INT16_MAX;
static volatile uint32_t x186 = 26731U;
volatile uint32_t t32 = UINT32_MAX;
static uint64_t x197 = 2LLU;
int8_t x229 = INT8_MIN;
int16_t x232 = INT16_MIN;
int32_t t37 = -67;
int32_t t38 = 12014;
int32_t x238 = INT32_MAX;
int64_t x242 = -1302521LL;
volatile int64_t t40 = 992756743999495LL;
int16_t x247 = INT16_MIN;
int16_t x250 = INT16_MAX;
int32_t x253 = -3023;
uint16_t x255 = 374U;
static volatile int8_t x256 = 0;
int32_t x259 = -3683153;
int16_t x260 = -1;
int8_t x261 = -1;
static int64_t x264 = INT64_MIN;
static uint64_t x276 = 3545008492812304LLU;
volatile uint64_t t47 = 18021LLU;
uint64_t x285 = UINT64_MAX;
volatile uint64_t x288 = UINT64_MAX;
uint64_t t50 = UINT64_MAX;
int32_t x302 = INT32_MIN;
uint32_t x303 = 3245U;
uint8_t x306 = 23U;
volatile int64_t t53 = -998LL;
uint32_t x315 = UINT32_MAX;
int64_t x316 = INT64_MIN;
volatile int32_t x321 = -15742;
int32_t x322 = -1;
static volatile int8_t x325 = 5;
uint16_t x327 = 187U;
static int32_t t57 = 258944845;
uint64_t x329 = 43734193517782848LLU;
int64_t x331 = -1LL;
int64_t x332 = INT64_MIN;
uint16_t x333 = 56U;
int8_t x342 = -1;
int8_t x343 = INT8_MIN;
uint16_t x345 = 0U;
static int64_t x346 = -1LL;
volatile uint32_t x358 = 44370U;
uint32_t t63 = 1553808U;
int8_t x362 = 0;
uint64_t x382 = 20983975171308LLU;
int16_t x388 = INT16_MIN;
volatile int8_t x391 = INT8_MIN;
static int64_t x413 = -1LL;
static volatile int64_t t73 = 958197543055LL;
volatile int8_t x422 = -15;
static int8_t x423 = 3;
static volatile int64_t t74 = -12585LL;
static volatile int64_t x439 = -82480972LL;
static uint32_t x440 = UINT32_MAX;
int32_t x459 = -71;
int8_t x463 = INT8_MAX;
int8_t x465 = INT8_MAX;
int16_t x468 = INT16_MIN;
uint32_t x474 = UINT32_MAX;
static uint64_t t82 = UINT64_MAX;
uint64_t x491 = UINT64_MAX;
volatile int8_t x493 = -1;
volatile uint64_t t85 = 1596679638010626LLU;
int16_t x498 = -1;
int32_t t86 = 69251;
volatile uint64_t t88 = UINT64_MAX;
uint32_t t89 = 374502U;
static uint8_t x540 = 1U;
volatile uint64_t x544 = UINT64_MAX;
uint64_t t92 = UINT64_MAX;
static int16_t x554 = INT16_MIN;
uint8_t x556 = 11U;
volatile int64_t x564 = 1315848427LL;
static volatile uint64_t t96 = 27LLU;
uint8_t x566 = 10U;
static volatile uint64_t t98 = 1806844931347440LLU;
static volatile int32_t x584 = INT32_MIN;
volatile uint64_t t99 = 338077948482LLU;


void f0(void) {
	static int16_t x5 = -1;
	uint16_t x6 = 10U;
	int16_t x7 = -1;
	static volatile uint8_t x8 = UINT8_MAX;
	int32_t t0 = -270558675;

	t0 = ((x5*(x6+x7))|x8);

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = -1;
	uint32_t x10 = UINT32_MAX;
	volatile uint32_t t1 = 92U;

	t1 = ((x9*(x10+x11))|x12);

	if (t1 != 4294947595U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x14 = 0U;
	static int16_t x15 = 1;
	int64_t x16 = INT64_MIN;

	t2 = ((x13*(x14+x15))|x16);

	if (t2 != -2147483648LL) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint32_t x17 = 375U;
	uint64_t x18 = UINT64_MAX;
	int64_t x20 = 32286989000821LL;
	volatile uint64_t t3 = 572127973LLU;

	t3 = ((x17*(x18+x19))|x20);

	if (t3 != 13578844907547849471LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = INT64_MAX;
	int16_t x22 = -167;
	uint64_t x23 = 26314751431213LLU;
	uint64_t t4 = 1LLU;

	t4 = ((x21*(x22+x23))|x24);

	if (t4 != 18446724521388916351LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x26 = 1894U;
	volatile int8_t x27 = INT8_MAX;
	static int16_t x28 = 2;
	static volatile int32_t t5 = 13559045;

	t5 = ((x25*(x26+x27))|x28);

	if (t5 != -2021) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x29 = INT16_MIN;
	int64_t x30 = -4099454467028LL;
	static volatile int8_t x32 = INT8_MIN;
	int64_t t6 = 53935312390287755LL;

	t6 = ((x29*(x30+x31))|x32);

	if (t6 != -128LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x45 = INT8_MAX;
	int16_t x46 = -5889;
	uint32_t x47 = 2U;
	uint64_t x48 = 1155LLU;

	t7 = ((x45*(x46+x47))|x48);

	if (t7 != 4294219775LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x49 = -1;
	int8_t x50 = 6;
	int8_t x51 = INT8_MIN;

	t8 = ((x49*(x50+x51))|x52);

	if (t8 != INT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x53 = INT32_MIN;
	uint64_t x54 = UINT64_MAX;
	volatile int16_t x55 = 0;
	int64_t x56 = -1LL;
	volatile uint64_t t9 = UINT64_MAX;

	t9 = ((x53*(x54+x55))|x56);

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x57 = -1LL;
	int8_t x58 = INT8_MIN;
	static volatile int16_t x60 = -1;
	int64_t t10 = -1LL;

	t10 = ((x57*(x58+x59))|x60);

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x70 = INT16_MIN;
	static volatile uint32_t x71 = 9752U;
	uint64_t t11 = 3973187026654LLU;

	t11 = ((x69*(x70+x71))|x72);

	if (t11 != 18446744071562090984LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x77 = INT8_MIN;
	static uint16_t x78 = UINT16_MAX;
	static int16_t x79 = INT16_MIN;
	volatile uint64_t t12 = 4153317049687LLU;

	t12 = ((x77*(x78+x79))|x80);

	if (t12 != 18446744073705364219LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x81 = -1LL;
	uint32_t x82 = 7799628U;
	static int64_t x83 = -1LL;
	int64_t x84 = 32666945110LL;
	volatile int64_t t13 = 138662777419LL;

	t13 = ((x81*(x82+x83))|x84);

	if (t13 != -6619401LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x85 = 3254828573LLU;
	uint32_t x86 = UINT32_MAX;
	static int64_t x87 = -130256828252LL;
	static volatile uint64_t x88 = UINT64_MAX;

	t14 = ((x85*(x86+x87))|x88);

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x89 = 1671;
	volatile uint64_t x90 = 32853129333LLU;
	int8_t x91 = INT8_MIN;
	int8_t x92 = INT8_MAX;
	volatile uint64_t t15 = 113960337181033LLU;

	t15 = ((x89*(x90+x91))|x92);

	if (t15 != 54897578901631LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint32_t x93 = UINT32_MAX;
	int64_t x94 = INT64_MAX;
	static int64_t x95 = INT64_MIN;
	int32_t x96 = -1;
	static volatile int64_t t16 = -13LL;

	t16 = ((x93*(x94+x95))|x96);

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x97 = INT16_MIN;
	uint64_t x98 = UINT64_MAX;
	volatile int8_t x99 = -1;
	volatile int8_t x100 = -1;
	uint64_t t17 = UINT64_MAX;

	t17 = ((x97*(x98+x99))|x100);

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x109 = INT8_MIN;
	uint32_t x110 = 12773U;
	int8_t x111 = -28;
	int16_t x112 = INT16_MIN;

	t18 = ((x109*(x110+x111))|x112);

	if (t18 != 4294941568U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x118 = -9;
	int8_t x120 = INT8_MIN;
	int32_t t19 = 9;

	t19 = ((x117*(x118+x119))|x120);

	if (t19 != -122) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x121 = UINT64_MAX;
	int64_t x122 = -1LL;
	int32_t x123 = -1;
	uint8_t x124 = 2U;
	volatile uint64_t t20 = 7021046474670319LLU;

	t20 = ((x121*(x122+x123))|x124);

	if (t20 != 2LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x125 = INT8_MAX;
	static volatile int64_t x127 = -1LL;
	volatile uint64_t t21 = UINT64_MAX;

	t21 = ((x125*(x126+x127))|x128);

	if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x129 = -11;
	volatile uint16_t x131 = UINT16_MAX;
	int32_t x132 = -1;
	uint32_t t22 = UINT32_MAX;

	t22 = ((x129*(x130+x131))|x132);

	if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x137 = 3U;
	uint64_t x138 = 6692737379642668LLU;
	static volatile uint16_t x139 = 317U;
	int8_t x140 = INT8_MIN;

	t23 = ((x137*(x138+x139))|x140);

	if (t23 != 18446744073709551547LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x141 = INT16_MIN;
	uint8_t x142 = 3U;
	int16_t x143 = -751;
	int32_t x144 = -1;
	int32_t t24 = 0;

	t24 = ((x141*(x142+x143))|x144);

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x145 = 17;
	int16_t x146 = -1;
	volatile int8_t x147 = INT8_MAX;
	volatile int16_t x148 = INT16_MIN;
	static int32_t t25 = -4;

	t25 = ((x145*(x146+x147))|x148);

	if (t25 != -30626) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x158 = 583175U;
	uint32_t x159 = UINT32_MAX;
	int64_t x160 = -352LL;
	static volatile int64_t t26 = -128667065257462706LL;

	t26 = ((x157*(x158+x159))|x160);

	if (t26 != -278LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x161 = UINT16_MAX;
	volatile uint32_t x162 = 188U;
	static int16_t x163 = INT16_MAX;
	uint32_t x164 = UINT32_MAX;
	volatile uint32_t t27 = UINT32_MAX;

	t27 = ((x161*(x162+x163))|x164);

	if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x166 = -1928925725116LL;
	volatile int64_t x167 = 799LL;
	int32_t x168 = -1;
	uint64_t t28 = UINT64_MAX;

	t28 = ((x165*(x166+x167))|x168);

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x169 = UINT64_MAX;
	int32_t x170 = 56506;
	int32_t x171 = INT32_MIN;
	int16_t x172 = INT16_MAX;

	t29 = ((x169*(x170+x171))|x172);

	if (t29 != 2147450879LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x177 = -1LL;
	volatile uint32_t x178 = 898411923U;
	static int8_t x179 = INT8_MAX;
	static int64_t t30 = -1284596909759098LL;

	t30 = ((x177*(x178+x179))|x180);

	if (t30 != -898400257LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x181 = 953490387578426352LLU;
	int8_t x182 = INT8_MIN;
	uint32_t x183 = 2487U;
	uint16_t x184 = UINT16_MAX;
	volatile uint64_t t31 = 133318329LLU;

	t31 = ((x181*(x182+x183))|x184);

	if (t31 != 17227791378652069887LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x185 = UINT32_MAX;
	volatile int16_t x187 = 1;
	static uint16_t x188 = UINT16_MAX;

	t32 = ((x185*(x186+x187))|x188);

	if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x193 = INT32_MIN;
	int64_t x194 = INT64_MIN;
	uint64_t x195 = 41755353449777LLU;
	uint64_t x196 = UINT64_MAX;
	static volatile uint64_t t33 = UINT64_MAX;

	t33 = ((x193*(x194+x195))|x196);

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x198 = INT16_MIN;
	uint64_t x199 = 13370223195862799LLU;
	uint32_t x200 = 131112986U;
	volatile uint64_t t34 = 6279LLU;

	t34 = ((x197*(x198+x199))|x200);

	if (t34 != 26740446518570526LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x209 = INT8_MIN;
	volatile uint32_t x210 = 12860580U;
	uint16_t x211 = UINT16_MAX;
	uint16_t x212 = 4335U;
	volatile uint32_t t35 = 3879U;

	t35 = ((x209*(x210+x211))|x212);

	if (t35 != 2640428783U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x225 = -1;
	int16_t x226 = 5;
	int16_t x227 = INT16_MAX;
	uint8_t x228 = 5U;
	static int32_t t36 = 58;

	t36 = ((x225*(x226+x227))|x228);

	if (t36 != -32771) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x230 = -1;
	int16_t x231 = INT16_MIN;

	t37 = ((x229*(x230+x231))|x232);

	if (t37 != -32640) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x233 = 22U;
	static int16_t x234 = -1;
	static int8_t x235 = INT8_MAX;
	int16_t x236 = 2267;

	t38 = ((x233*(x234+x235))|x236);

	if (t38 != 2783) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x237 = INT16_MIN;
	static uint32_t x239 = UINT32_MAX;
	volatile uint32_t x240 = UINT32_MAX;
	volatile uint32_t t39 = UINT32_MAX;

	t39 = ((x237*(x238+x239))|x240);

	if (t39 != UINT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x241 = UINT32_MAX;
	static int32_t x243 = -2;
	uint32_t x244 = UINT32_MAX;

	t40 = ((x241*(x242+x243))|x244);

	if (t40 != -5594289392320513LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x245 = INT16_MIN;
	int16_t x246 = INT16_MAX;
	int16_t x248 = INT16_MIN;
	volatile int32_t t41 = 9045;

	t41 = ((x245*(x246+x247))|x248);

	if (t41 != -32768) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x249 = 1LL;
	static volatile int8_t x251 = -1;
	static int16_t x252 = INT16_MIN;
	volatile int64_t t42 = -103080835056758897LL;

	t42 = ((x249*(x250+x251))|x252);

	if (t42 != -2LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x254 = 1;
	int32_t t43 = 957558916;

	t43 = ((x253*(x254+x255))|x256);

	if (t43 != -1133625) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x257 = -2381312LL;
	volatile int16_t x258 = -1;
	static int64_t t44 = 577LL;

	t44 = ((x257*(x258+x259))|x260);

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x262 = UINT8_MAX;
	volatile uint64_t x263 = UINT64_MAX;
	static volatile uint64_t t45 = 9844541451217308LLU;

	t45 = ((x261*(x262+x263))|x264);

	if (t45 != 18446744073709551362LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x269 = -158;
	int8_t x270 = INT8_MIN;
	static int64_t x271 = -1LL;
	static int16_t x272 = INT16_MAX;
	volatile int64_t t46 = 35LL;

	t46 = ((x269*(x270+x271))|x272);

	if (t46 != 32767LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x273 = UINT16_MAX;
	int16_t x274 = 61;
	volatile int16_t x275 = INT16_MIN;

	t47 = ((x273*(x274+x275))|x276);

	if (t47 != 18446744072031698899LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x277 = UINT64_MAX;
	uint16_t x278 = 51U;
	int32_t x279 = INT32_MIN;
	volatile uint64_t x280 = 154698165LLU;
	uint64_t t48 = 622083764LLU;

	t48 = ((x277*(x278+x279))|x280);

	if (t48 != 2147483645LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x281 = -1;
	uint16_t x282 = 301U;
	int16_t x283 = 58;
	int64_t x284 = INT64_MAX;
	int64_t t49 = 16134LL;

	t49 = ((x281*(x282+x283))|x284);

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x286 = INT32_MIN;
	volatile uint8_t x287 = UINT8_MAX;

	t50 = ((x285*(x286+x287))|x288);

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x301 = -28;
	volatile uint32_t x304 = 1638797032U;
	uint32_t t51 = 2118529U;

	t51 = ((x301*(x302+x303))|x304);

	if (t51 != 4294877180U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x305 = 1LL;
	uint64_t x307 = 811LLU;
	static int8_t x308 = -1;
	uint64_t t52 = UINT64_MAX;

	t52 = ((x305*(x306+x307))|x308);

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x309 = 12U;
	int8_t x310 = -1;
	uint16_t x311 = UINT16_MAX;
	int64_t x312 = INT64_MIN;

	t53 = ((x309*(x310+x311))|x312);

	if (t53 != -9223372036853989400LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x313 = -51;
	static int8_t x314 = -1;
	volatile int64_t t54 = 194122116144922199LL;

	t54 = ((x313*(x314+x315))|x316);

	if (t54 != -9223372036854775706LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x317 = -7LL;
	volatile int64_t x318 = -1LL;
	static volatile int16_t x319 = 1754;
	int16_t x320 = INT16_MIN;
	volatile int64_t t55 = -1070283431LL;

	t55 = ((x317*(x318+x319))|x320);

	if (t55 != -12271LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x323 = -1;
	uint32_t x324 = 9426459U;
	volatile uint32_t t56 = 363U;

	t56 = ((x321*(x322+x323))|x324);

	if (t56 != 9436927U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x326 = 1;
	static uint8_t x328 = 28U;

	t57 = ((x325*(x326+x327))|x328);

	if (t57 != 956) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x330 = 826U;
	uint64_t t58 = 209634LLU;

	t58 = ((x329*(x330+x331))|x332);

	if (t58 != 17633965578461297984LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x334 = INT8_MIN;
	static int16_t x335 = -15;
	int16_t x336 = -1;
	static int32_t t59 = 98054820;

	t59 = ((x333*(x334+x335))|x336);

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x341 = INT16_MIN;
	volatile int32_t x344 = 10801;
	static int32_t t60 = -3633;

	t60 = ((x341*(x342+x343))|x344);

	if (t60 != 4237873) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x347 = INT32_MIN;
	int64_t x348 = INT64_MIN;
	volatile int64_t t61 = INT64_MIN;

	t61 = ((x345*(x346+x347))|x348);

	if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x349 = INT16_MIN;
	int8_t x350 = 1;
	int64_t x351 = -77352609LL;
	int32_t x352 = -1;
	volatile int64_t t62 = 396586LL;

	t62 = ((x349*(x350+x351))|x352);

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x357 = -2;
	int8_t x359 = 1;
	uint8_t x360 = 34U;

	t63 = ((x357*(x358+x359))|x360);

	if (t63 != 4294878586U) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x361 = 7611U;
	int16_t x363 = INT16_MIN;
	static int32_t x364 = INT32_MIN;
	volatile uint32_t t64 = 3U;

	t64 = ((x361*(x362+x363))|x364);

	if (t64 != 4045570048U) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x365 = UINT16_MAX;
	uint64_t x366 = UINT64_MAX;
	static int64_t x367 = INT64_MAX;
	int64_t x368 = INT64_MAX;
	volatile uint64_t t65 = 363991088675375LLU;

	t65 = ((x365*(x366+x367))|x368);

	if (t65 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x373 = 5493889U;
	int8_t x374 = INT8_MIN;
	uint16_t x375 = UINT16_MAX;
	int16_t x376 = INT16_MIN;
	uint32_t t66 = 20U;

	t66 = ((x373*(x374+x375))|x376);

	if (t66 != 4294961919U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x381 = UINT16_MAX;
	int16_t x383 = INT16_MIN;
	volatile int32_t x384 = INT32_MIN;
	static volatile uint64_t t67 = 22LLU;

	t67 = ((x381*(x382+x383))|x384);

	if (t67 != 18446744072074406676LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x385 = -1LL;
	uint8_t x386 = 32U;
	static int8_t x387 = 1;
	volatile int64_t t68 = -1361LL;

	t68 = ((x385*(x386+x387))|x388);

	if (t68 != -33LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x389 = INT64_MIN;
	static uint64_t x390 = UINT64_MAX;
	int16_t x392 = 425;
	uint64_t t69 = 8721LLU;

	t69 = ((x389*(x390+x391))|x392);

	if (t69 != 9223372036854776233LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x393 = UINT8_MAX;
	int64_t x394 = -1183973721LL;
	int8_t x395 = -14;
	static uint32_t x396 = 475U;
	static volatile int64_t t70 = -14494LL;

	t70 = ((x393*(x394+x395))|x396);

	if (t70 != -301913302017LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x405 = 132820LLU;
	static uint32_t x406 = UINT32_MAX;
	int8_t x407 = -1;
	volatile int16_t x408 = -211;
	volatile uint64_t t71 = 77586707520638492LLU;

	t71 = ((x405*(x406+x407))|x408);

	if (t71 != 18446744073709551485LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x414 = 1;
	static volatile uint8_t x415 = 39U;
	uint16_t x416 = 1889U;
	static volatile int64_t t72 = 945087LL;

	t72 = ((x413*(x414+x415))|x416);

	if (t72 != -7LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x417 = -82974772LL;
	int32_t x418 = -13171416;
	volatile int8_t x419 = INT8_MAX;
	int16_t x420 = INT16_MIN;

	t73 = ((x417*(x418+x419))|x420);

	if (t73 != -19948LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x421 = 925146461027350LL;
	int64_t x424 = INT64_MAX;

	t74 = ((x421*(x422+x423))|x424);

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x425 = UINT32_MAX;
	int16_t x426 = 92;
	int16_t x427 = -7390;
	volatile int8_t x428 = INT8_MIN;
	uint32_t t75 = 14040U;

	t75 = ((x425*(x426+x427))|x428);

	if (t75 != 4294967170U) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x429 = 24U;
	static int16_t x430 = INT16_MIN;
	int32_t x431 = 1660;
	int8_t x432 = INT8_MIN;
	static int32_t t76 = -1;

	t76 = ((x429*(x430+x431))|x432);

	if (t76 != -96) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x437 = 1;
	int64_t x438 = INT64_MAX;
	int64_t t77 = INT64_MAX;

	t77 = ((x437*(x438+x439))|x440);

	if (t77 != INT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x449 = UINT32_MAX;
	int32_t x450 = 43059185;
	int32_t x451 = -1;
	volatile int8_t x452 = 40;
	volatile uint32_t t78 = 437359238U;

	t78 = ((x449*(x450+x451))|x452);

	if (t78 != 4251908152U) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x457 = 905546560U;
	uint32_t x458 = 85U;
	volatile int64_t x460 = INT64_MIN;
	static int64_t t79 = -1587027684140115251LL;

	t79 = ((x457*(x458+x459))|x460);

	if (t79 != -9223372032767058560LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x461 = -1;
	volatile int32_t x462 = -1032764197;
	uint8_t x464 = 1U;
	int32_t t80 = -1341;

	t80 = ((x461*(x462+x463))|x464);

	if (t80 != 1032764071) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x466 = INT8_MAX;
	uint8_t x467 = 2U;
	int32_t t81 = 23749;

	t81 = ((x465*(x466+x467))|x468);

	if (t81 != -16385) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x473 = -69028;
	int16_t x475 = -1;
	uint64_t x476 = UINT64_MAX;

	t82 = ((x473*(x474+x475))|x476);

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x477 = UINT16_MAX;
	int8_t x478 = -53;
	uint16_t x479 = 1107U;
	int64_t x480 = 74565LL;
	volatile int64_t t83 = 76959321LL;

	t83 = ((x477*(x478+x479))|x480);

	if (t83 != 69073895LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x489 = INT8_MAX;
	int8_t x490 = 15;
	uint8_t x492 = UINT8_MAX;
	volatile uint64_t t84 = 32909937LLU;

	t84 = ((x489*(x490+x491))|x492);

	if (t84 != 1791LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x494 = 19;
	uint64_t x495 = 224651273LLU;
	int64_t x496 = INT64_MIN;

	t85 = ((x493*(x494+x495))|x496);

	if (t85 != 18446744073484900324LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x497 = INT8_MIN;
	int8_t x499 = -1;
	static uint8_t x500 = UINT8_MAX;

	t86 = ((x497*(x498+x499))|x500);

	if (t86 != 511) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x509 = 8U;
	int32_t x510 = 240263749;
	uint16_t x511 = 6882U;
	int32_t x512 = INT32_MAX;
	int32_t t87 = INT32_MAX;

	t87 = ((x509*(x510+x511))|x512);

	if (t87 != INT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x517 = UINT64_MAX;
	int16_t x518 = 345;
	int32_t x519 = -1;
	uint16_t x520 = UINT16_MAX;

	t88 = ((x517*(x518+x519))|x520);

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x521 = INT16_MAX;
	int16_t x522 = INT16_MAX;
	volatile int8_t x523 = INT8_MAX;
	volatile uint32_t x524 = 50U;

	t89 = ((x521*(x522+x523))|x524);

	if (t89 != 1077837746U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x525 = INT32_MAX;
	uint32_t x526 = UINT32_MAX;
	static int32_t x527 = 45063737;
	uint64_t x528 = UINT64_MAX;
	volatile uint64_t t90 = UINT64_MAX;

	t90 = ((x525*(x526+x527))|x528);

	if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x537 = INT16_MAX;
	int8_t x538 = INT8_MIN;
	uint8_t x539 = 46U;
	volatile int32_t t91 = 260424360;

	t91 = ((x537*(x538+x539))|x540);

	if (t91 != -2686893) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x541 = 1;
	uint8_t x542 = 3U;
	static uint8_t x543 = UINT8_MAX;

	t92 = ((x541*(x542+x543))|x544);

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x549 = 5;
	int32_t x550 = INT32_MAX;
	volatile int64_t x551 = -1LL;
	int8_t x552 = INT8_MIN;
	volatile int64_t t93 = -286764222813407808LL;

	t93 = ((x549*(x550+x551))|x552);

	if (t93 != -10LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x553 = 0U;
	volatile int32_t x555 = -1;
	int32_t t94 = 23;

	t94 = ((x553*(x554+x555))|x556);

	if (t94 != 11) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x557 = 296;
	int32_t x558 = -1;
	uint32_t x559 = 1688377297U;
	uint8_t x560 = 6U;
	uint32_t t95 = 1958350524U;

	t95 = ((x557*(x558+x559))|x560);

	if (t95 != 1543473286U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x561 = 3;
	uint64_t x562 = 3033421907091355LLU;
	volatile int64_t x563 = -20159864056LL;

	t96 = ((x561*(x562+x563))|x564);

	if (t96 != 9100206486210539LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x565 = 882;
	int64_t x567 = -1LL;
	static int64_t x568 = 25750LL;
	static int64_t t97 = 249070461LL;

	t97 = ((x565*(x566+x567))|x568);

	if (t97 != 32662LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x573 = 0;
	static int64_t x574 = INT64_MIN;
	static uint8_t x575 = 55U;
	uint64_t x576 = 0LLU;

	t98 = ((x573*(x574+x575))|x576);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x581 = INT32_MIN;
	volatile uint64_t x582 = UINT64_MAX;
	int16_t x583 = 14;

	t99 = ((x581*(x582+x583))|x584);

	if (t99 != 18446744071562067968LLU) { NG(); } else { ; }
	
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

