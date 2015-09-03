#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t1 = 369;
int32_t x30 = -1;
int32_t t3 = 506;
volatile int32_t t6 = -84788;
static int64_t x65 = -120LL;
volatile uint8_t x67 = 1U;
int16_t x75 = -1;
volatile int16_t x87 = -7328;
static int64_t x88 = 18673821074031130LL;
int16_t x100 = INT16_MAX;
int32_t x101 = -1984210;
uint8_t x104 = 0U;
volatile int32_t x108 = INT32_MAX;
static uint64_t x109 = UINT64_MAX;
volatile int32_t x120 = -1;
uint64_t x123 = UINT64_MAX;
uint32_t x128 = 0U;
uint16_t x146 = 18U;
volatile int16_t x147 = -62;
int32_t t24 = 47888;
static int16_t x158 = INT16_MIN;
int16_t x159 = -16251;
uint64_t x171 = UINT64_MAX;
int64_t x176 = INT64_MAX;
uint64_t x181 = 19LLU;
int8_t x183 = INT8_MIN;
static int64_t x184 = 3921441612040801382LL;
static volatile int32_t t29 = 2001762;
volatile int8_t x186 = 0;
static volatile int64_t x187 = INT64_MIN;
int8_t x198 = INT8_MIN;
static uint8_t x201 = 6U;
volatile int16_t x203 = 840;
int8_t x216 = INT8_MIN;
int32_t t37 = -554852;
int64_t x229 = INT64_MIN;
int32_t t40 = -300700234;
int8_t x241 = INT8_MIN;
uint16_t x243 = 1322U;
int32_t x257 = INT32_MAX;
static volatile int64_t x258 = -1LL;
volatile uint64_t x264 = 337653LLU;
static volatile uint8_t x274 = 9U;
static int32_t x276 = -3413;
static int32_t t46 = -124645710;
int32_t x286 = -4615;
uint32_t x287 = 185515U;
uint8_t x296 = 26U;
int32_t x304 = INT32_MAX;
volatile int64_t x308 = -1LL;
uint64_t x310 = 22247LLU;
volatile int64_t x311 = 239922951562998LL;
uint8_t x312 = 26U;
int32_t x321 = -3978;
volatile int32_t x345 = INT32_MIN;
uint32_t x361 = UINT32_MAX;
uint16_t x366 = 1U;
uint64_t x373 = 64068LLU;
uint32_t x375 = 10293U;
int8_t x379 = -1;
int64_t x380 = 134835LL;
static int8_t x389 = INT8_MIN;
int64_t x390 = INT64_MAX;
int32_t x396 = INT32_MIN;
volatile int32_t t64 = -9547897;
static int64_t x404 = INT64_MAX;
int8_t x411 = INT8_MIN;
int16_t x422 = INT16_MIN;
volatile int32_t t70 = -1;
uint16_t x433 = 2385U;
volatile int8_t x455 = -26;
uint16_t x456 = 25U;
int16_t x462 = -1;
static uint8_t x467 = 16U;
uint8_t x487 = 1U;
int32_t x488 = INT32_MIN;
int64_t x489 = -187409830719506LL;
int32_t x492 = INT32_MIN;
volatile int32_t t84 = 286;
int64_t x505 = -1LL;
volatile int32_t t88 = 505;
int16_t x514 = INT16_MAX;
volatile uint32_t x515 = UINT32_MAX;
int32_t t90 = 1697428;
int32_t t91 = 63484;
uint8_t x526 = 10U;
int64_t x528 = 729725LL;
int32_t t92 = -28350608;
static int16_t x530 = -1;
int8_t x533 = 1;
static uint32_t x534 = UINT32_MAX;
int64_t x540 = -1LL;
uint8_t x551 = 0U;
uint8_t x554 = 6U;
int8_t x555 = INT8_MIN;
static volatile int64_t x561 = -623LL;
uint8_t x563 = 2U;


void f0(void) {
	int64_t x5 = -974LL;
	uint64_t x6 = 205445072484871834LLU;
	uint16_t x7 = 5U;
	int32_t x8 = INT32_MAX;
	int32_t t0 = -1766;

	t0 = ((x5-(x6*x7))<=x8);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x13 = -1;
	static volatile int8_t x14 = INT8_MIN;
	int8_t x15 = INT8_MIN;
	int32_t x16 = INT32_MAX;

	t1 = ((x13-(x14*x15))<=x16);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x21 = INT16_MIN;
	int64_t x22 = INT64_MAX;
	volatile uint64_t x23 = 3545863085978LLU;
	static uint32_t x24 = 42U;
	volatile int32_t t2 = 1;

	t2 = ((x21-(x22*x23))<=x24);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x29 = INT16_MIN;
	volatile uint8_t x31 = 65U;
	volatile int64_t x32 = -29963200924LL;

	t3 = ((x29-(x30*x31))<=x32);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x33 = 31U;
	uint8_t x34 = 2U;
	volatile int8_t x35 = INT8_MIN;
	int8_t x36 = INT8_MAX;
	int32_t t4 = 1;

	t4 = ((x33-(x34*x35))<=x36);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x37 = -1;
	volatile int8_t x38 = INT8_MIN;
	int8_t x39 = INT8_MAX;
	volatile int16_t x40 = INT16_MIN;
	int32_t t5 = 2040436;

	t5 = ((x37-(x38*x39))<=x40);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x41 = 19211;
	int16_t x42 = -138;
	volatile int16_t x43 = -3;
	int64_t x44 = INT64_MIN;

	t6 = ((x41-(x42*x43))<=x44);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x53 = 2U;
	int64_t x54 = 6LL;
	int8_t x55 = INT8_MAX;
	volatile int32_t x56 = INT32_MIN;
	static volatile int32_t t7 = 323944201;

	t7 = ((x53-(x54*x55))<=x56);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x66 = 3311959027652137LL;
	static int32_t x68 = INT32_MAX;
	int32_t t8 = -3245;

	t8 = ((x65-(x66*x67))<=x68);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x73 = -126390;
	static uint32_t x74 = 3U;
	int8_t x76 = INT8_MIN;
	int32_t t9 = -26316;

	t9 = ((x73-(x74*x75))<=x76);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x77 = 0;
	volatile int32_t x78 = -1;
	uint16_t x79 = UINT16_MAX;
	int16_t x80 = 3640;
	volatile int32_t t10 = -5580;

	t10 = ((x77-(x78*x79))<=x80);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x85 = 2U;
	int8_t x86 = -1;
	volatile int32_t t11 = -15033;

	t11 = ((x85-(x86*x87))<=x88);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x93 = INT16_MAX;
	volatile int16_t x94 = INT16_MIN;
	uint32_t x95 = 1939838U;
	volatile int64_t x96 = INT64_MIN;
	volatile int32_t t12 = -5452;

	t12 = ((x93-(x94*x95))<=x96);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x97 = UINT16_MAX;
	static int8_t x98 = INT8_MIN;
	uint32_t x99 = 151U;
	static volatile int32_t t13 = 1805900;

	t13 = ((x97-(x98*x99))<=x100);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x102 = UINT64_MAX;
	int8_t x103 = INT8_MIN;
	static int32_t t14 = -3;

	t14 = ((x101-(x102*x103))<=x104);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x105 = INT32_MAX;
	uint32_t x106 = 81482304U;
	int16_t x107 = INT16_MIN;
	volatile int32_t t15 = 93321931;

	t15 = ((x105-(x106*x107))<=x108);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x110 = -1;
	int16_t x111 = INT16_MAX;
	volatile int8_t x112 = INT8_MAX;
	volatile int32_t t16 = 1047258076;

	t16 = ((x109-(x110*x111))<=x112);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x117 = INT64_MIN;
	uint64_t x118 = UINT64_MAX;
	int16_t x119 = -1;
	int32_t t17 = -365;

	t17 = ((x117-(x118*x119))<=x120);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x121 = 51U;
	static uint32_t x122 = UINT32_MAX;
	volatile int16_t x124 = INT16_MIN;
	volatile int32_t t18 = -46580;

	t18 = ((x121-(x122*x123))<=x124);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x125 = UINT8_MAX;
	static uint64_t x126 = 5346613232268842LLU;
	int32_t x127 = -11;
	volatile int32_t t19 = -46;

	t19 = ((x125-(x126*x127))<=x128);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x129 = -1LL;
	int16_t x130 = INT16_MIN;
	volatile int16_t x131 = -1;
	int64_t x132 = -3015950376406477LL;
	int32_t t20 = -132884594;

	t20 = ((x129-(x130*x131))<=x132);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x137 = UINT32_MAX;
	volatile int8_t x138 = INT8_MIN;
	int8_t x139 = INT8_MIN;
	int64_t x140 = INT64_MAX;
	volatile int32_t t21 = -18731;

	t21 = ((x137-(x138*x139))<=x140);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x141 = 14U;
	int16_t x142 = -9;
	int16_t x143 = INT16_MAX;
	int64_t x144 = INT64_MIN;
	volatile int32_t t22 = -1;

	t22 = ((x141-(x142*x143))<=x144);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x145 = 30LLU;
	int8_t x148 = INT8_MAX;
	int32_t t23 = 0;

	t23 = ((x145-(x146*x147))<=x148);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x153 = 9;
	uint8_t x154 = 92U;
	uint16_t x155 = UINT16_MAX;
	int64_t x156 = INT64_MAX;

	t24 = ((x153-(x154*x155))<=x156);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x157 = 438;
	int16_t x160 = INT16_MIN;
	volatile int32_t t25 = -38416929;

	t25 = ((x157-(x158*x159))<=x160);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x169 = -1;
	int64_t x170 = INT64_MIN;
	int64_t x172 = -409992656397LL;
	int32_t t26 = -347;

	t26 = ((x169-(x170*x171))<=x172);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x173 = 37U;
	volatile uint64_t x174 = 1LLU;
	int32_t x175 = INT32_MIN;
	int32_t t27 = -32387;

	t27 = ((x173-(x174*x175))<=x176);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x177 = -1LL;
	uint64_t x178 = UINT64_MAX;
	uint16_t x179 = 0U;
	uint8_t x180 = UINT8_MAX;
	int32_t t28 = -286683331;

	t28 = ((x177-(x178*x179))<=x180);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x182 = 1U;

	t29 = ((x181-(x182*x183))<=x184);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x185 = -1;
	uint16_t x188 = UINT16_MAX;
	int32_t t30 = 0;

	t30 = ((x185-(x186*x187))<=x188);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int32_t x189 = -1;
	int16_t x190 = INT16_MAX;
	int8_t x191 = INT8_MAX;
	int8_t x192 = 0;
	int32_t t31 = 7;

	t31 = ((x189-(x190*x191))<=x192);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x193 = INT16_MAX;
	volatile int8_t x194 = INT8_MAX;
	uint64_t x195 = 12489902LLU;
	static volatile int16_t x196 = INT16_MAX;
	static int32_t t32 = 1536;

	t32 = ((x193-(x194*x195))<=x196);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x197 = 41U;
	uint64_t x199 = UINT64_MAX;
	static int64_t x200 = INT64_MIN;
	static volatile int32_t t33 = 64904;

	t33 = ((x197-(x198*x199))<=x200);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x202 = -1754;
	volatile int32_t x204 = 15957468;
	int32_t t34 = -4024;

	t34 = ((x201-(x202*x203))<=x204);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x205 = INT32_MIN;
	uint64_t x206 = UINT64_MAX;
	int64_t x207 = -1LL;
	int32_t x208 = INT32_MIN;
	int32_t t35 = -1;

	t35 = ((x205-(x206*x207))<=x208);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int32_t x209 = -111858385;
	volatile int16_t x210 = -7;
	int64_t x211 = -32485652874LL;
	static int32_t x212 = -1;
	static volatile int32_t t36 = 7234;

	t36 = ((x209-(x210*x211))<=x212);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x213 = 59861U;
	int16_t x214 = 398;
	int16_t x215 = -1346;

	t37 = ((x213-(x214*x215))<=x216);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x221 = -13;
	volatile uint8_t x222 = UINT8_MAX;
	int32_t x223 = -124551;
	static uint8_t x224 = UINT8_MAX;
	int32_t t38 = -931565;

	t38 = ((x221-(x222*x223))<=x224);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x225 = -1;
	int64_t x226 = INT64_MAX;
	volatile int8_t x227 = -1;
	int64_t x228 = INT64_MIN;
	static int32_t t39 = 1;

	t39 = ((x225-(x226*x227))<=x228);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x230 = 124233757713809LLU;
	volatile int32_t x231 = 1;
	uint64_t x232 = UINT64_MAX;

	t40 = ((x229-(x230*x231))<=x232);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x242 = 222LLU;
	static volatile uint16_t x244 = 1U;
	int32_t t41 = -240;

	t41 = ((x241-(x242*x243))<=x244);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x249 = 158095550093LLU;
	uint64_t x250 = 37LLU;
	static uint32_t x251 = UINT32_MAX;
	static int16_t x252 = INT16_MAX;
	int32_t t42 = -76;

	t42 = ((x249-(x250*x251))<=x252);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x259 = 1208066985U;
	static int8_t x260 = -1;
	static int32_t t43 = -1836;

	t43 = ((x257-(x258*x259))<=x260);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x261 = INT16_MIN;
	volatile int16_t x262 = -1;
	uint64_t x263 = UINT64_MAX;
	volatile int32_t t44 = -74440415;

	t44 = ((x261-(x262*x263))<=x264);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x269 = -100699LL;
	int64_t x270 = -1LL;
	static int64_t x271 = -385LL;
	int64_t x272 = INT64_MAX;
	volatile int32_t t45 = -218543622;

	t45 = ((x269-(x270*x271))<=x272);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x273 = INT8_MAX;
	volatile uint8_t x275 = UINT8_MAX;

	t46 = ((x273-(x274*x275))<=x276);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x285 = 2266;
	uint8_t x288 = UINT8_MAX;
	int32_t t47 = 8530267;

	t47 = ((x285-(x286*x287))<=x288);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x293 = 8U;
	uint32_t x294 = 428817U;
	int8_t x295 = -1;
	volatile int32_t t48 = -2206;

	t48 = ((x293-(x294*x295))<=x296);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x301 = -25147;
	uint32_t x302 = 59141401U;
	uint32_t x303 = 83U;
	int32_t t49 = -1164269;

	t49 = ((x301-(x302*x303))<=x304);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x305 = INT8_MIN;
	static volatile int32_t x306 = 4390;
	int16_t x307 = INT16_MIN;
	int32_t t50 = 39649158;

	t50 = ((x305-(x306*x307))<=x308);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x309 = INT64_MIN;
	static int32_t t51 = 167;

	t51 = ((x309-(x310*x311))<=x312);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x313 = -37;
	uint32_t x314 = 982U;
	volatile uint8_t x315 = UINT8_MAX;
	volatile uint16_t x316 = UINT16_MAX;
	int32_t t52 = -134;

	t52 = ((x313-(x314*x315))<=x316);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int16_t x322 = INT16_MIN;
	int8_t x323 = INT8_MIN;
	volatile uint8_t x324 = 3U;
	int32_t t53 = 1;

	t53 = ((x321-(x322*x323))<=x324);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x329 = -1;
	static uint32_t x330 = 1762056U;
	volatile int32_t x331 = -1;
	int32_t x332 = -1;
	volatile int32_t t54 = -115097202;

	t54 = ((x329-(x330*x331))<=x332);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x346 = -10630595194LL;
	int8_t x347 = 63;
	int32_t x348 = -1;
	int32_t t55 = -29785898;

	t55 = ((x345-(x346*x347))<=x348);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x349 = INT8_MAX;
	int8_t x350 = 0;
	volatile int16_t x351 = INT16_MIN;
	static uint32_t x352 = UINT32_MAX;
	volatile int32_t t56 = -7280945;

	t56 = ((x349-(x350*x351))<=x352);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x362 = -1;
	int8_t x363 = INT8_MAX;
	uint64_t x364 = 265LLU;
	volatile int32_t t57 = 442231064;

	t57 = ((x361-(x362*x363))<=x364);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x365 = 36U;
	int8_t x367 = INT8_MAX;
	int32_t x368 = -1;
	int32_t t58 = 1300634;

	t58 = ((x365-(x366*x367))<=x368);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x374 = INT8_MAX;
	int16_t x376 = INT16_MAX;
	volatile int32_t t59 = -5149788;

	t59 = ((x373-(x374*x375))<=x376);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x377 = INT16_MAX;
	int16_t x378 = -1;
	static int32_t t60 = -1965270;

	t60 = ((x377-(x378*x379))<=x380);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x381 = 2433710765175LLU;
	int32_t x382 = -1;
	uint32_t x383 = UINT32_MAX;
	int8_t x384 = -1;
	int32_t t61 = 65123;

	t61 = ((x381-(x382*x383))<=x384);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x385 = 0;
	uint16_t x386 = 2092U;
	int32_t x387 = -1;
	int64_t x388 = -3969LL;
	static int32_t t62 = -11895;

	t62 = ((x385-(x386*x387))<=x388);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x391 = 198757LLU;
	uint64_t x392 = 2146247353093075129LLU;
	volatile int32_t t63 = -1489;

	t63 = ((x389-(x390*x391))<=x392);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x393 = 6576U;
	uint64_t x394 = UINT64_MAX;
	uint64_t x395 = 27026741387LLU;

	t64 = ((x393-(x394*x395))<=x396);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x397 = 1815U;
	volatile int64_t x398 = -48LL;
	uint8_t x399 = 4U;
	uint16_t x400 = UINT16_MAX;
	static volatile int32_t t65 = -131588956;

	t65 = ((x397-(x398*x399))<=x400);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x401 = 4837;
	static volatile uint16_t x402 = UINT16_MAX;
	uint64_t x403 = UINT64_MAX;
	volatile int32_t t66 = -20517;

	t66 = ((x401-(x402*x403))<=x404);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x405 = 0;
	static uint8_t x406 = 15U;
	volatile int8_t x407 = -1;
	uint32_t x408 = 1883U;
	volatile int32_t t67 = -17665003;

	t67 = ((x405-(x406*x407))<=x408);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x409 = 897U;
	uint32_t x410 = 362247U;
	int64_t x412 = INT64_MIN;
	volatile int32_t t68 = -881143353;

	t68 = ((x409-(x410*x411))<=x412);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int32_t x417 = -1;
	int64_t x418 = 1304724967729301LL;
	int8_t x419 = 1;
	int32_t x420 = INT32_MAX;
	int32_t t69 = 594916362;

	t69 = ((x417-(x418*x419))<=x420);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x421 = 15;
	static uint32_t x423 = UINT32_MAX;
	static uint16_t x424 = 204U;

	t70 = ((x421-(x422*x423))<=x424);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x425 = -1;
	int16_t x426 = -1;
	uint8_t x427 = 0U;
	int16_t x428 = INT16_MAX;
	static int32_t t71 = -131065004;

	t71 = ((x425-(x426*x427))<=x428);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x429 = 1;
	uint32_t x430 = 0U;
	int16_t x431 = INT16_MIN;
	int32_t x432 = 5;
	volatile int32_t t72 = -10661354;

	t72 = ((x429-(x430*x431))<=x432);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x434 = 769998373U;
	static int8_t x435 = INT8_MIN;
	uint8_t x436 = 0U;
	int32_t t73 = -2162;

	t73 = ((x433-(x434*x435))<=x436);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x437 = 3615371891576LLU;
	static int16_t x438 = 0;
	volatile int16_t x439 = -1;
	static volatile int8_t x440 = 4;
	volatile int32_t t74 = 442;

	t74 = ((x437-(x438*x439))<=x440);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x441 = 564U;
	static volatile int64_t x442 = -1LL;
	volatile int32_t x443 = 3;
	int8_t x444 = INT8_MIN;
	static int32_t t75 = 0;

	t75 = ((x441-(x442*x443))<=x444);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x445 = -1LL;
	uint8_t x446 = UINT8_MAX;
	static uint32_t x447 = UINT32_MAX;
	static int8_t x448 = INT8_MIN;
	static volatile int32_t t76 = -574122;

	t76 = ((x445-(x446*x447))<=x448);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x449 = INT16_MAX;
	volatile uint64_t x450 = 82700654783539959LLU;
	volatile int8_t x451 = INT8_MIN;
	int8_t x452 = 0;
	volatile int32_t t77 = -1139535;

	t77 = ((x449-(x450*x451))<=x452);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x453 = 0LLU;
	uint8_t x454 = 1U;
	volatile int32_t t78 = -14;

	t78 = ((x453-(x454*x455))<=x456);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x457 = 13;
	uint8_t x458 = 0U;
	static int32_t x459 = 1;
	uint8_t x460 = 18U;
	static volatile int32_t t79 = -2;

	t79 = ((x457-(x458*x459))<=x460);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x461 = UINT16_MAX;
	static int8_t x463 = INT8_MIN;
	static int32_t x464 = INT32_MIN;
	volatile int32_t t80 = -94;

	t80 = ((x461-(x462*x463))<=x464);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x465 = INT64_MIN;
	int64_t x466 = -1LL;
	uint16_t x468 = 187U;
	volatile int32_t t81 = 701797787;

	t81 = ((x465-(x466*x467))<=x468);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x469 = 7U;
	static int64_t x470 = -1LL;
	uint8_t x471 = 3U;
	volatile int16_t x472 = INT16_MIN;
	int32_t t82 = 4257;

	t82 = ((x469-(x470*x471))<=x472);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x485 = 111U;
	static int64_t x486 = -1LL;
	static volatile int32_t t83 = 176146870;

	t83 = ((x485-(x486*x487))<=x488);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x490 = INT16_MIN;
	uint16_t x491 = UINT16_MAX;

	t84 = ((x489-(x490*x491))<=x492);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x497 = UINT64_MAX;
	uint32_t x498 = UINT32_MAX;
	int16_t x499 = -1;
	int32_t x500 = 1089;
	int32_t t85 = -15;

	t85 = ((x497-(x498*x499))<=x500);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x501 = INT32_MIN;
	int64_t x502 = -1LL;
	int8_t x503 = INT8_MIN;
	int8_t x504 = -3;
	int32_t t86 = 2887734;

	t86 = ((x501-(x502*x503))<=x504);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x506 = INT8_MAX;
	uint32_t x507 = 17742U;
	uint16_t x508 = 4632U;
	volatile int32_t t87 = 0;

	t87 = ((x505-(x506*x507))<=x508);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x509 = 0;
	int32_t x510 = INT32_MIN;
	int64_t x511 = -1LL;
	int32_t x512 = 7204942;

	t88 = ((x509-(x510*x511))<=x512);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x513 = INT64_MAX;
	static int64_t x516 = -1LL;
	int32_t t89 = 65143115;

	t89 = ((x513-(x514*x515))<=x516);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint32_t x517 = 14397U;
	int16_t x518 = -13;
	static int64_t x519 = -1LL;
	int32_t x520 = -172181;

	t90 = ((x517-(x518*x519))<=x520);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x521 = 5U;
	uint16_t x522 = UINT16_MAX;
	int16_t x523 = INT16_MAX;
	uint8_t x524 = UINT8_MAX;

	t91 = ((x521-(x522*x523))<=x524);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint32_t x525 = UINT32_MAX;
	static volatile int64_t x527 = -1LL;

	t92 = ((x525-(x526*x527))<=x528);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x529 = 26774U;
	uint8_t x531 = 109U;
	static int32_t x532 = 3;
	int32_t t93 = 15352455;

	t93 = ((x529-(x530*x531))<=x532);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x535 = INT16_MAX;
	int16_t x536 = INT16_MIN;
	static volatile int32_t t94 = -4;

	t94 = ((x533-(x534*x535))<=x536);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x537 = INT32_MAX;
	int64_t x538 = -1LL;
	int64_t x539 = -1LL;
	int32_t t95 = 95855;

	t95 = ((x537-(x538*x539))<=x540);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x549 = 428730725216723220LLU;
	int64_t x550 = -1949584LL;
	uint8_t x552 = 14U;
	volatile int32_t t96 = 128148899;

	t96 = ((x549-(x550*x551))<=x552);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x553 = -1;
	int8_t x556 = INT8_MIN;
	volatile int32_t t97 = 4;

	t97 = ((x553-(x554*x555))<=x556);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x557 = 1;
	static volatile uint32_t x558 = 10638426U;
	int8_t x559 = 0;
	volatile int8_t x560 = INT8_MIN;
	int32_t t98 = 109;

	t98 = ((x557-(x558*x559))<=x560);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x562 = -1;
	int8_t x564 = -43;
	int32_t t99 = 8052;

	t99 = ((x561-(x562*x563))<=x564);

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

