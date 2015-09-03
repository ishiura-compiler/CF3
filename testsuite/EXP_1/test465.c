#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x4 = INT16_MAX;
volatile int64_t x5 = 12533447206158LL;
volatile int32_t t1 = 101562;
uint8_t x10 = 7U;
uint8_t x24 = 14U;
uint64_t x35 = 41229274LLU;
volatile int32_t t8 = 3680981;
volatile uint64_t x45 = 5398029LLU;
int32_t t9 = 3819;
volatile uint32_t x58 = 1634U;
uint8_t x59 = 1U;
int32_t x67 = INT32_MAX;
volatile int32_t t12 = 0;
int16_t x82 = INT16_MIN;
uint16_t x91 = 3377U;
int32_t t17 = 343;
static volatile int8_t x122 = INT8_MAX;
int8_t x126 = 1;
static int32_t t22 = 71800057;
uint64_t x146 = 1246LLU;
static int16_t x160 = INT16_MIN;
static int32_t t29 = -1851009;
volatile uint32_t x175 = 55996953U;
int32_t x180 = -1;
int16_t x184 = 52;
int64_t x187 = INT64_MAX;
uint64_t x197 = 14181612808265LLU;
volatile uint32_t x198 = 0U;
static int8_t x199 = -1;
int32_t t37 = -1358107;
uint32_t x210 = 59U;
int32_t x211 = -1;
volatile int32_t t39 = -3156481;
int8_t x217 = INT8_MIN;
uint8_t x219 = 1U;
uint16_t x220 = 0U;
static int32_t x226 = 54;
int32_t t42 = 3855146;
static int32_t t43 = -262412568;
int32_t x245 = INT32_MIN;
static volatile uint8_t x267 = UINT8_MAX;
int32_t x268 = INT32_MAX;
int16_t x278 = -1;
volatile int8_t x286 = -1;
int64_t x293 = 244878712506LL;
volatile int64_t x299 = INT64_MIN;
static uint32_t x300 = UINT32_MAX;
int32_t t52 = 15;
volatile uint64_t x301 = UINT64_MAX;
int32_t t53 = 35168;
static int32_t x310 = INT32_MIN;
int32_t t54 = 361383579;
static volatile int8_t x317 = INT8_MIN;
int8_t x321 = INT8_MAX;
int32_t t56 = -102418;
int8_t x333 = 5;
static uint16_t x362 = 9154U;
volatile int16_t x367 = INT16_MIN;
volatile int16_t x370 = INT16_MAX;
uint64_t x371 = 11LLU;
int16_t x390 = INT16_MAX;
volatile int64_t x391 = INT64_MAX;
int16_t x396 = INT16_MIN;
int32_t x413 = 47;
uint8_t x419 = 7U;
int16_t x420 = -1453;
uint8_t x429 = UINT8_MAX;
volatile int32_t t73 = -22579803;
static uint64_t x433 = 52185766LLU;
static int8_t x434 = 1;
static uint8_t x435 = UINT8_MAX;
static uint64_t x439 = 122258444363309LLU;
int32_t t76 = -51043199;
int64_t x445 = -1LL;
uint64_t x448 = 1031757LLU;
uint8_t x468 = 61U;
volatile int32_t t79 = 25;
int16_t x469 = INT16_MIN;
static volatile uint64_t x470 = UINT64_MAX;
static int8_t x480 = INT8_MAX;
uint16_t x482 = UINT16_MAX;
volatile int32_t t83 = 129481;
int32_t x486 = INT32_MAX;
int32_t x487 = 3715;
int8_t x510 = INT8_MAX;
static int8_t x515 = INT8_MIN;
volatile int32_t t89 = -1139704;
uint16_t x530 = 82U;
int32_t x531 = INT32_MAX;
uint32_t x537 = 2528900U;
volatile uint32_t x538 = UINT32_MAX;
volatile int32_t t92 = -1991;
uint8_t x542 = UINT8_MAX;
int32_t x553 = INT32_MIN;
volatile uint32_t x554 = UINT32_MAX;
uint16_t x555 = 1U;
volatile int32_t t95 = 8;
int32_t x566 = -1;
volatile int32_t t98 = -28411405;


void f0(void) {
	static volatile int64_t x1 = -6825434LL;
	uint32_t x2 = 225U;
	int16_t x3 = INT16_MAX;
	static int32_t t0 = 16973257;

	t0 = (((x1*x2)<=x3)<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x6 = -14;
	volatile int32_t x7 = -481;
	int64_t x8 = 121026172LL;

	t1 = (((x5*x6)<=x7)<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = -1;
	int8_t x11 = 0;
	uint64_t x12 = 19699861991LLU;
	static volatile int32_t t2 = -41027;

	t2 = (((x9*x10)<=x11)<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 13070LLU;
	int32_t x14 = -1;
	static volatile int64_t x15 = -1LL;
	int8_t x16 = INT8_MIN;
	volatile int32_t t3 = -19650;

	t3 = (((x13*x14)<=x15)<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = 0;
	int64_t x18 = INT64_MIN;
	int8_t x19 = INT8_MIN;
	int8_t x20 = INT8_MAX;
	int32_t t4 = -83;

	t4 = (((x17*x18)<=x19)<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	volatile uint16_t x22 = UINT16_MAX;
	uint64_t x23 = 2011328537070561LLU;
	int32_t t5 = -286093137;

	t5 = (((x21*x22)<=x23)<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x33 = -150;
	uint8_t x34 = 3U;
	uint32_t x36 = 777U;
	volatile int32_t t6 = -2;

	t6 = (((x33*x34)<=x35)<=x36);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x37 = 5;
	volatile uint16_t x38 = 245U;
	volatile int8_t x39 = -1;
	int32_t x40 = 22973;
	volatile int32_t t7 = -5264776;

	t7 = (((x37*x38)<=x39)<=x40);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x41 = 14;
	static uint16_t x42 = 13U;
	uint32_t x43 = UINT32_MAX;
	uint32_t x44 = 451457392U;

	t8 = (((x41*x42)<=x43)<=x44);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x46 = 2619U;
	static uint32_t x47 = 3991U;
	static volatile int32_t x48 = 360026484;

	t9 = (((x45*x46)<=x47)<=x48);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x57 = UINT8_MAX;
	volatile int64_t x60 = INT64_MAX;
	volatile int32_t t10 = 13;

	t10 = (((x57*x58)<=x59)<=x60);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x61 = 3;
	static uint32_t x62 = 1418398675U;
	uint32_t x63 = UINT32_MAX;
	int16_t x64 = INT16_MAX;
	int32_t t11 = -16760742;

	t11 = (((x61*x62)<=x63)<=x64);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x65 = INT16_MIN;
	int64_t x66 = -1LL;
	uint8_t x68 = 7U;

	t12 = (((x65*x66)<=x67)<=x68);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x77 = INT8_MIN;
	uint16_t x78 = 474U;
	uint32_t x79 = 5687U;
	volatile int16_t x80 = -1;
	int32_t t13 = 6;

	t13 = (((x77*x78)<=x79)<=x80);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x81 = -1LL;
	int32_t x83 = -1;
	int32_t x84 = -1167287;
	int32_t t14 = -1706;

	t14 = (((x81*x82)<=x83)<=x84);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x89 = 893;
	uint64_t x90 = UINT64_MAX;
	uint16_t x92 = 40U;
	int32_t t15 = -3;

	t15 = (((x89*x90)<=x91)<=x92);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x93 = 53U;
	static int16_t x94 = -6110;
	int8_t x95 = INT8_MIN;
	int32_t x96 = INT32_MIN;
	int32_t t16 = -7575461;

	t16 = (((x93*x94)<=x95)<=x96);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x97 = 1;
	int64_t x98 = INT64_MIN;
	static uint32_t x99 = 11067999U;
	static int64_t x100 = -1LL;

	t17 = (((x97*x98)<=x99)<=x100);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x105 = 2U;
	volatile uint64_t x106 = 1696LLU;
	int64_t x107 = INT64_MAX;
	volatile int64_t x108 = INT64_MAX;
	int32_t t18 = -5452047;

	t18 = (((x105*x106)<=x107)<=x108);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x109 = 0U;
	static int64_t x110 = 46865172193261LL;
	volatile uint64_t x111 = 1468448LLU;
	int64_t x112 = 1318LL;
	static int32_t t19 = 249;

	t19 = (((x109*x110)<=x111)<=x112);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x113 = UINT32_MAX;
	int8_t x114 = -1;
	int16_t x115 = -247;
	int8_t x116 = INT8_MIN;
	int32_t t20 = 3181121;

	t20 = (((x113*x114)<=x115)<=x116);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x121 = -2212998812869660LL;
	static uint32_t x123 = 3U;
	int32_t x124 = INT32_MIN;
	static int32_t t21 = -184161;

	t21 = (((x121*x122)<=x123)<=x124);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x125 = INT16_MAX;
	uint32_t x127 = UINT32_MAX;
	int16_t x128 = 0;

	t22 = (((x125*x126)<=x127)<=x128);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x133 = 6697845463968LL;
	int8_t x134 = INT8_MIN;
	uint64_t x135 = UINT64_MAX;
	int16_t x136 = INT16_MAX;
	int32_t t23 = -6661;

	t23 = (((x133*x134)<=x135)<=x136);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x137 = 14U;
	uint16_t x138 = 8025U;
	volatile int32_t x139 = -589066;
	volatile uint8_t x140 = 12U;
	int32_t t24 = -5924;

	t24 = (((x137*x138)<=x139)<=x140);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x145 = INT8_MAX;
	int16_t x147 = INT16_MIN;
	int8_t x148 = 15;
	int32_t t25 = -3390;

	t25 = (((x145*x146)<=x147)<=x148);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x153 = INT8_MAX;
	int8_t x154 = INT8_MIN;
	int8_t x155 = -7;
	uint32_t x156 = UINT32_MAX;
	int32_t t26 = -506502;

	t26 = (((x153*x154)<=x155)<=x156);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x157 = 0;
	uint8_t x158 = UINT8_MAX;
	int32_t x159 = INT32_MAX;
	volatile int32_t t27 = -9102;

	t27 = (((x157*x158)<=x159)<=x160);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x161 = 12U;
	uint16_t x162 = UINT16_MAX;
	static uint64_t x163 = UINT64_MAX;
	int64_t x164 = INT64_MIN;
	volatile int32_t t28 = 1;

	t28 = (((x161*x162)<=x163)<=x164);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x165 = -1;
	int16_t x166 = INT16_MIN;
	uint32_t x167 = UINT32_MAX;
	int32_t x168 = -1;

	t29 = (((x165*x166)<=x167)<=x168);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x169 = 1806495965U;
	int32_t x170 = 433928;
	volatile uint64_t x171 = 7895663347855LLU;
	static int32_t x172 = -1;
	volatile int32_t t30 = -148396;

	t30 = (((x169*x170)<=x171)<=x172);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x173 = -587;
	uint8_t x174 = UINT8_MAX;
	volatile int32_t x176 = INT32_MAX;
	int32_t t31 = -1;

	t31 = (((x173*x174)<=x175)<=x176);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x177 = INT32_MAX;
	volatile uint64_t x178 = UINT64_MAX;
	volatile int32_t x179 = INT32_MIN;
	volatile int32_t t32 = -66;

	t32 = (((x177*x178)<=x179)<=x180);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x181 = 994;
	volatile uint32_t x182 = UINT32_MAX;
	uint64_t x183 = 15LLU;
	volatile int32_t t33 = -29865;

	t33 = (((x181*x182)<=x183)<=x184);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x185 = INT8_MIN;
	int8_t x186 = 5;
	static uint64_t x188 = 2739583LLU;
	volatile int32_t t34 = -170981781;

	t34 = (((x185*x186)<=x187)<=x188);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x189 = 6;
	int8_t x190 = INT8_MIN;
	volatile int8_t x191 = -3;
	uint64_t x192 = 3496056144313526LLU;
	volatile int32_t t35 = -6204;

	t35 = (((x189*x190)<=x191)<=x192);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x193 = -1;
	uint64_t x194 = 3829920050613645005LLU;
	int8_t x195 = 4;
	uint32_t x196 = UINT32_MAX;
	volatile int32_t t36 = -226;

	t36 = (((x193*x194)<=x195)<=x196);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x200 = INT64_MIN;

	t37 = (((x197*x198)<=x199)<=x200);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x209 = INT8_MIN;
	volatile int8_t x212 = INT8_MAX;
	volatile int32_t t38 = 302003;

	t38 = (((x209*x210)<=x211)<=x212);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x213 = INT8_MIN;
	volatile int8_t x214 = -4;
	volatile int8_t x215 = INT8_MAX;
	volatile int32_t x216 = INT32_MIN;

	t39 = (((x213*x214)<=x215)<=x216);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x218 = -12801;
	volatile int32_t t40 = -257595;

	t40 = (((x217*x218)<=x219)<=x220);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int32_t x221 = 5;
	volatile int8_t x222 = INT8_MAX;
	static int32_t x223 = INT32_MIN;
	volatile int16_t x224 = INT16_MIN;
	int32_t t41 = -30987;

	t41 = (((x221*x222)<=x223)<=x224);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x225 = UINT16_MAX;
	int32_t x227 = -1;
	int16_t x228 = -21;

	t42 = (((x225*x226)<=x227)<=x228);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x237 = 195206LL;
	volatile int16_t x238 = 543;
	volatile int32_t x239 = INT32_MIN;
	int8_t x240 = INT8_MIN;

	t43 = (((x237*x238)<=x239)<=x240);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x241 = INT8_MAX;
	uint64_t x242 = UINT64_MAX;
	static volatile uint8_t x243 = 3U;
	int64_t x244 = -1LL;
	int32_t t44 = -1697;

	t44 = (((x241*x242)<=x243)<=x244);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x246 = -1LL;
	volatile uint16_t x247 = 22543U;
	volatile uint32_t x248 = 50U;
	volatile int32_t t45 = -272512730;

	t45 = (((x245*x246)<=x247)<=x248);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x261 = 1U;
	volatile int8_t x262 = 3;
	int16_t x263 = -1;
	uint8_t x264 = 66U;
	volatile int32_t t46 = -3751;

	t46 = (((x261*x262)<=x263)<=x264);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x265 = 8913U;
	uint32_t x266 = 12301U;
	static int32_t t47 = 63372;

	t47 = (((x265*x266)<=x267)<=x268);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x269 = 434U;
	int16_t x270 = INT16_MIN;
	uint64_t x271 = 84925837LLU;
	int32_t x272 = INT32_MAX;
	int32_t t48 = -9;

	t48 = (((x269*x270)<=x271)<=x272);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x277 = UINT32_MAX;
	static int16_t x279 = 19;
	int16_t x280 = 1;
	static int32_t t49 = -143;

	t49 = (((x277*x278)<=x279)<=x280);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x285 = 409931U;
	int64_t x287 = INT64_MIN;
	static volatile int64_t x288 = 1012098LL;
	int32_t t50 = 0;

	t50 = (((x285*x286)<=x287)<=x288);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x294 = 5;
	volatile uint8_t x295 = 2U;
	static uint8_t x296 = 5U;
	volatile int32_t t51 = -4165124;

	t51 = (((x293*x294)<=x295)<=x296);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x297 = UINT64_MAX;
	uint8_t x298 = 0U;

	t52 = (((x297*x298)<=x299)<=x300);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x302 = -1;
	int64_t x303 = 8403448LL;
	uint64_t x304 = 3767955LLU;

	t53 = (((x301*x302)<=x303)<=x304);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x309 = 907315104158532960LLU;
	volatile uint8_t x311 = 7U;
	uint64_t x312 = UINT64_MAX;

	t54 = (((x309*x310)<=x311)<=x312);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x318 = 2U;
	int32_t x319 = INT32_MIN;
	int32_t x320 = -2018;
	int32_t t55 = 3;

	t55 = (((x317*x318)<=x319)<=x320);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x322 = INT8_MIN;
	uint8_t x323 = 7U;
	uint32_t x324 = UINT32_MAX;

	t56 = (((x321*x322)<=x323)<=x324);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x329 = INT16_MIN;
	static volatile uint16_t x330 = 274U;
	int64_t x331 = INT64_MAX;
	uint32_t x332 = UINT32_MAX;
	volatile int32_t t57 = -73836882;

	t57 = (((x329*x330)<=x331)<=x332);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x334 = -1LL;
	int32_t x335 = 1;
	int32_t x336 = INT32_MIN;
	volatile int32_t t58 = 4570;

	t58 = (((x333*x334)<=x335)<=x336);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x341 = -30913633LL;
	int64_t x342 = -1LL;
	int64_t x343 = INT64_MIN;
	int16_t x344 = -15;
	volatile int32_t t59 = -97;

	t59 = (((x341*x342)<=x343)<=x344);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int16_t x345 = INT16_MAX;
	uint8_t x346 = UINT8_MAX;
	static int8_t x347 = -1;
	int32_t x348 = INT32_MIN;
	volatile int32_t t60 = -485168;

	t60 = (((x345*x346)<=x347)<=x348);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x353 = INT8_MAX;
	int16_t x354 = INT16_MAX;
	volatile uint32_t x355 = 700339U;
	int64_t x356 = -1LL;
	int32_t t61 = 3673455;

	t61 = (((x353*x354)<=x355)<=x356);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x357 = 3952U;
	volatile int32_t x358 = -88163;
	volatile int64_t x359 = INT64_MIN;
	int32_t x360 = INT32_MIN;
	volatile int32_t t62 = 29858;

	t62 = (((x357*x358)<=x359)<=x360);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x361 = UINT16_MAX;
	static int8_t x363 = 3;
	static int8_t x364 = -27;
	volatile int32_t t63 = -4898;

	t63 = (((x361*x362)<=x363)<=x364);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x365 = 0U;
	int64_t x366 = 28598136LL;
	int32_t x368 = -1;
	volatile int32_t t64 = 245;

	t64 = (((x365*x366)<=x367)<=x368);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x369 = -1;
	static int16_t x372 = INT16_MAX;
	volatile int32_t t65 = 84318;

	t65 = (((x369*x370)<=x371)<=x372);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x385 = INT16_MIN;
	uint32_t x386 = UINT32_MAX;
	int64_t x387 = INT64_MIN;
	uint32_t x388 = 43U;
	int32_t t66 = -58988;

	t66 = (((x385*x386)<=x387)<=x388);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x389 = -1;
	int64_t x392 = -2406LL;
	volatile int32_t t67 = -225713458;

	t67 = (((x389*x390)<=x391)<=x392);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x393 = INT8_MIN;
	static volatile int8_t x394 = -6;
	volatile int16_t x395 = 75;
	volatile int32_t t68 = 208804;

	t68 = (((x393*x394)<=x395)<=x396);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x401 = -147;
	uint16_t x402 = 0U;
	volatile int32_t x403 = -1;
	volatile uint16_t x404 = 85U;
	volatile int32_t t69 = 457030;

	t69 = (((x401*x402)<=x403)<=x404);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x409 = 10U;
	uint64_t x410 = 129638039LLU;
	uint8_t x411 = 6U;
	int16_t x412 = INT16_MIN;
	volatile int32_t t70 = 1036594;

	t70 = (((x409*x410)<=x411)<=x412);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x414 = INT16_MAX;
	int8_t x415 = INT8_MIN;
	static uint16_t x416 = 15262U;
	int32_t t71 = -443833166;

	t71 = (((x413*x414)<=x415)<=x416);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x417 = -1LL;
	int16_t x418 = -1;
	volatile int32_t t72 = 1;

	t72 = (((x417*x418)<=x419)<=x420);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x430 = -2;
	int16_t x431 = INT16_MIN;
	int16_t x432 = -28;

	t73 = (((x429*x430)<=x431)<=x432);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x436 = 0;
	volatile int32_t t74 = 1017916096;

	t74 = (((x433*x434)<=x435)<=x436);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x437 = UINT8_MAX;
	uint64_t x438 = 1629066397LLU;
	volatile int64_t x440 = INT64_MIN;
	volatile int32_t t75 = -464850;

	t75 = (((x437*x438)<=x439)<=x440);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x441 = UINT64_MAX;
	uint8_t x442 = 12U;
	int32_t x443 = -18246;
	uint16_t x444 = UINT16_MAX;

	t76 = (((x441*x442)<=x443)<=x444);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x446 = INT64_MAX;
	uint8_t x447 = UINT8_MAX;
	static volatile int32_t t77 = 555589;

	t77 = (((x445*x446)<=x447)<=x448);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x457 = 823286U;
	uint32_t x458 = 1U;
	int8_t x459 = -28;
	static uint8_t x460 = 115U;
	int32_t t78 = 2926;

	t78 = (((x457*x458)<=x459)<=x460);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint32_t x465 = 432367U;
	int32_t x466 = INT32_MIN;
	uint8_t x467 = 5U;

	t79 = (((x465*x466)<=x467)<=x468);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x471 = 10807955LLU;
	int32_t x472 = INT32_MIN;
	volatile int32_t t80 = 1198;

	t80 = (((x469*x470)<=x471)<=x472);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x473 = UINT8_MAX;
	volatile int16_t x474 = INT16_MIN;
	uint32_t x475 = 47U;
	static int16_t x476 = -1;
	volatile int32_t t81 = 37507846;

	t81 = (((x473*x474)<=x475)<=x476);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x477 = 0;
	volatile uint8_t x478 = 10U;
	volatile uint32_t x479 = 1245U;
	volatile int32_t t82 = -15;

	t82 = (((x477*x478)<=x479)<=x480);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x481 = INT16_MIN;
	int16_t x483 = INT16_MIN;
	int32_t x484 = INT32_MIN;

	t83 = (((x481*x482)<=x483)<=x484);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x485 = 1;
	uint32_t x488 = 31754252U;
	int32_t t84 = -2887;

	t84 = (((x485*x486)<=x487)<=x488);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x501 = -1LL;
	int32_t x502 = -9137;
	uint64_t x503 = 914113720128LLU;
	volatile int64_t x504 = INT64_MIN;
	volatile int32_t t85 = 140465;

	t85 = (((x501*x502)<=x503)<=x504);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x509 = -3;
	static int8_t x511 = INT8_MIN;
	int8_t x512 = INT8_MIN;
	static int32_t t86 = -215;

	t86 = (((x509*x510)<=x511)<=x512);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x513 = UINT64_MAX;
	static int8_t x514 = 0;
	uint32_t x516 = 144840U;
	static int32_t t87 = 3276589;

	t87 = (((x513*x514)<=x515)<=x516);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x517 = 6819378372LLU;
	uint64_t x518 = 4LLU;
	uint16_t x519 = UINT16_MAX;
	volatile int16_t x520 = -1;
	int32_t t88 = 161997;

	t88 = (((x517*x518)<=x519)<=x520);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x525 = 0U;
	int32_t x526 = INT32_MAX;
	int64_t x527 = 851372199466239LL;
	int64_t x528 = INT64_MIN;

	t89 = (((x525*x526)<=x527)<=x528);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x529 = 0;
	uint16_t x532 = 4U;
	int32_t t90 = 0;

	t90 = (((x529*x530)<=x531)<=x532);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x533 = 3U;
	uint64_t x534 = 271892449669001LLU;
	int8_t x535 = 2;
	uint32_t x536 = 60U;
	int32_t t91 = 5;

	t91 = (((x533*x534)<=x535)<=x536);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x539 = INT32_MIN;
	static int16_t x540 = INT16_MIN;

	t92 = (((x537*x538)<=x539)<=x540);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x541 = INT16_MIN;
	int32_t x543 = INT32_MIN;
	int8_t x544 = INT8_MAX;
	int32_t t93 = 20918044;

	t93 = (((x541*x542)<=x543)<=x544);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x549 = UINT8_MAX;
	volatile int8_t x550 = INT8_MIN;
	static int32_t x551 = -216909;
	uint16_t x552 = 239U;
	static volatile int32_t t94 = -5;

	t94 = (((x549*x550)<=x551)<=x552);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int64_t x556 = INT64_MIN;

	t95 = (((x553*x554)<=x555)<=x556);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x557 = -24700LL;
	volatile int16_t x558 = 33;
	uint32_t x559 = 2812614U;
	uint8_t x560 = 62U;
	int32_t t96 = 10;

	t96 = (((x557*x558)<=x559)<=x560);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x561 = 319965655U;
	uint8_t x562 = 9U;
	volatile int64_t x563 = INT64_MIN;
	int64_t x564 = INT64_MIN;
	volatile int32_t t97 = 1;

	t97 = (((x561*x562)<=x563)<=x564);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x565 = 0;
	int16_t x567 = INT16_MIN;
	uint8_t x568 = UINT8_MAX;

	t98 = (((x565*x566)<=x567)<=x568);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x573 = 10702812;
	static volatile uint32_t x574 = UINT32_MAX;
	volatile int16_t x575 = INT16_MAX;
	uint16_t x576 = 1940U;
	volatile int32_t t99 = -5166;

	t99 = (((x573*x574)<=x575)<=x576);

	if (t99 != 1) { NG(); } else { ; }
	
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

