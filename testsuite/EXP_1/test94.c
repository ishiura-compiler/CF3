#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t t0 = -218;
int64_t x5 = -1LL;
int32_t t1 = -296851;
int16_t x10 = -8;
int32_t t3 = -1;
static int32_t t5 = -132599;
static int64_t t6 = -1998051LL;
static uint32_t x33 = 863343322U;
int32_t x37 = INT32_MIN;
int16_t x39 = INT16_MIN;
static uint32_t x40 = 12557150U;
uint32_t x56 = 4425029U;
uint8_t x61 = 98U;
int16_t x64 = -839;
static int8_t x73 = INT8_MIN;
uint8_t x82 = 0U;
int32_t x83 = -1;
int64_t x89 = INT64_MIN;
int8_t x92 = INT8_MIN;
int8_t x97 = 11;
volatile int16_t x125 = -1;
volatile int32_t t25 = -9;
volatile uint64_t x139 = UINT64_MAX;
static uint64_t t28 = 80845596563087LLU;
uint32_t x142 = 56U;
volatile int32_t x153 = 719731;
int16_t x154 = INT16_MIN;
static volatile int16_t x155 = -1;
int32_t t32 = 0;
uint16_t x162 = 0U;
int64_t t36 = 74894273807991011LL;
int8_t x173 = -1;
int8_t x174 = -1;
uint32_t x176 = UINT32_MAX;
volatile int32_t t38 = 0;
int32_t t39 = 667689;
static int64_t x191 = -15LL;
int32_t x199 = 18;
int16_t x200 = 2498;
uint8_t x208 = 44U;
volatile uint64_t x211 = UINT64_MAX;
volatile uint32_t x214 = UINT32_MAX;
volatile int32_t t45 = -94108;
static int32_t x219 = INT32_MIN;
static int32_t t46 = 85430;
static uint32_t x223 = 918721373U;
int8_t x225 = -1;
uint16_t x227 = 18U;
int32_t x228 = 452519;
volatile int32_t x233 = -413970;
volatile int32_t x236 = -6681599;
int32_t x238 = -1;
static volatile int8_t x244 = -1;
static uint16_t x245 = UINT16_MAX;
int32_t t54 = 0;
int32_t x255 = -1;
uint8_t x259 = 14U;
static int16_t x264 = 1;
static volatile int64_t t58 = 5793871LL;
int64_t x275 = 24231LL;
volatile int64_t t60 = 32LL;
static int8_t x280 = INT8_MIN;
static int32_t x281 = -394153;
int16_t x282 = 1777;
static volatile int32_t t62 = -11993;
int16_t x287 = INT16_MAX;
int8_t x291 = INT8_MAX;
int8_t x292 = -17;
static volatile int64_t x296 = INT64_MIN;
int16_t x300 = INT16_MAX;
uint8_t x306 = 12U;
volatile int32_t t68 = -701461;
volatile uint64_t t69 = 0LLU;
int8_t x319 = INT8_MIN;
static int32_t t71 = -27306;
volatile int64_t x330 = -469889578709497835LL;
volatile int64_t t73 = 0LL;
uint8_t x334 = 1U;
static uint8_t x335 = UINT8_MAX;
static int32_t x336 = 14;
static int32_t t74 = 0;
int16_t x338 = INT16_MAX;
int8_t x349 = INT8_MIN;
int8_t x350 = INT8_MIN;
int32_t x351 = 4370972;
static uint8_t x361 = 5U;
static int8_t x362 = INT8_MIN;
static int64_t x374 = -1LL;
volatile uint16_t x381 = UINT16_MAX;
int8_t x383 = INT8_MIN;
static uint32_t t85 = 6690U;
uint8_t x386 = 3U;
int32_t t89 = 1;
uint16_t x404 = UINT16_MAX;
volatile int32_t t90 = 168014233;
int32_t t91 = -7;
int32_t x417 = 25218;
int16_t x419 = INT16_MIN;
uint64_t x421 = UINT64_MAX;
static uint64_t x435 = 43872647236896LLU;
static uint16_t x443 = UINT16_MAX;


void f0(void) {
	static int8_t x1 = 43;
	int8_t x2 = INT8_MIN;
	static uint64_t x3 = 410519LLU;
	volatile int32_t x4 = 6857663;

	t0 = (((x1+x2)==x3)*x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = INT16_MIN;
	int64_t x7 = 40069255545783LL;
	static int32_t x8 = -63522738;

	t1 = (((x5+x6)==x7)*x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x9 = 22532348U;
	uint32_t x11 = 1351691U;
	int64_t x12 = INT64_MIN;
	volatile int64_t t2 = 449831447882LL;

	t2 = (((x9+x10)==x11)*x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	uint64_t x14 = 75017725578948LLU;
	uint32_t x15 = UINT32_MAX;
	int16_t x16 = -325;

	t3 = (((x13+x14)==x15)*x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 131U;
	uint16_t x18 = 32653U;
	int8_t x19 = INT8_MIN;
	static uint64_t x20 = 44LLU;
	volatile uint64_t t4 = 33037680679849LLU;

	t4 = (((x17+x18)==x19)*x20);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = INT16_MIN;
	volatile int32_t x22 = -109;
	int8_t x23 = -1;
	int8_t x24 = INT8_MIN;

	t5 = (((x21+x22)==x23)*x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = UINT32_MAX;
	int8_t x26 = INT8_MAX;
	volatile int8_t x27 = INT8_MAX;
	volatile int64_t x28 = -1LL;

	t6 = (((x25+x26)==x27)*x28);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x34 = INT8_MIN;
	uint16_t x35 = 5U;
	int8_t x36 = INT8_MIN;
	volatile int32_t t7 = 6;

	t7 = (((x33+x34)==x35)*x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x38 = 15476516LL;
	uint32_t t8 = 58461U;

	t8 = (((x37+x38)==x39)*x40);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int32_t x41 = INT32_MIN;
	int64_t x42 = -1LL;
	int8_t x43 = 1;
	uint32_t x44 = UINT32_MAX;
	volatile uint32_t t9 = 149U;

	t9 = (((x41+x42)==x43)*x44);

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = INT8_MIN;
	uint32_t x46 = UINT32_MAX;
	int8_t x47 = INT8_MIN;
	uint32_t x48 = 51652U;
	volatile uint32_t t10 = 355076U;

	t10 = (((x45+x46)==x47)*x48);

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x49 = 0;
	static volatile int64_t x50 = INT64_MAX;
	volatile int32_t x51 = -1;
	int8_t x52 = INT8_MIN;
	int32_t t11 = 528205891;

	t11 = (((x49+x50)==x51)*x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = -15;
	uint32_t x54 = 0U;
	int32_t x55 = INT32_MIN;
	uint32_t t12 = 357829U;

	t12 = (((x53+x54)==x55)*x56);

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x62 = UINT64_MAX;
	uint16_t x63 = UINT16_MAX;
	int32_t t13 = 2;

	t13 = (((x61+x62)==x63)*x64);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x69 = INT16_MAX;
	volatile uint32_t x70 = UINT32_MAX;
	uint8_t x71 = UINT8_MAX;
	uint64_t x72 = 12220627650128767LLU;
	volatile uint64_t t14 = 111LLU;

	t14 = (((x69+x70)==x71)*x72);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x74 = -1LL;
	int32_t x75 = INT32_MIN;
	uint8_t x76 = 11U;
	volatile int32_t t15 = -19798406;

	t15 = (((x73+x74)==x75)*x76);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x77 = 450U;
	volatile int8_t x78 = INT8_MIN;
	uint32_t x79 = 326331209U;
	volatile int8_t x80 = INT8_MIN;
	volatile int32_t t16 = -217909;

	t16 = (((x77+x78)==x79)*x80);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x81 = 10170400556706680LLU;
	int16_t x84 = -1;
	int32_t t17 = 1;

	t17 = (((x81+x82)==x83)*x84);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x85 = UINT32_MAX;
	uint8_t x86 = UINT8_MAX;
	int64_t x87 = -1486323256092961LL;
	int8_t x88 = -1;
	static volatile int32_t t18 = 36273;

	t18 = (((x85+x86)==x87)*x88);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x90 = UINT64_MAX;
	int64_t x91 = INT64_MIN;
	static int32_t t19 = 0;

	t19 = (((x89+x90)==x91)*x92);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x98 = INT8_MIN;
	uint8_t x99 = 19U;
	int32_t x100 = -1;
	volatile int32_t t20 = -1;

	t20 = (((x97+x98)==x99)*x100);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x101 = 240U;
	static int8_t x102 = INT8_MIN;
	int8_t x103 = INT8_MAX;
	uint32_t x104 = 30990839U;
	static volatile uint32_t t21 = 62830U;

	t21 = (((x101+x102)==x103)*x104);

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x109 = -17;
	int8_t x110 = 15;
	uint32_t x111 = 50U;
	static int32_t x112 = -10855;
	volatile int32_t t22 = 234659791;

	t22 = (((x109+x110)==x111)*x112);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x113 = 19U;
	static uint16_t x114 = UINT16_MAX;
	static int8_t x115 = -61;
	int32_t x116 = 2494;
	int32_t t23 = 81;

	t23 = (((x113+x114)==x115)*x116);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x117 = INT64_MAX;
	int64_t x118 = INT64_MIN;
	static int32_t x119 = -1;
	int32_t x120 = INT32_MIN;
	volatile int32_t t24 = INT32_MIN;

	t24 = (((x117+x118)==x119)*x120);

	if (t24 != INT32_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x126 = 2274LL;
	static int32_t x127 = INT32_MIN;
	int32_t x128 = 931;

	t25 = (((x125+x126)==x127)*x128);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x129 = INT64_MAX;
	static volatile int64_t x130 = -1LL;
	static volatile uint32_t x131 = 122126250U;
	int64_t x132 = 15363979LL;
	volatile int64_t t26 = -740704583749921708LL;

	t26 = (((x129+x130)==x131)*x132);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x133 = 3189028550746LL;
	int16_t x134 = -1;
	volatile uint32_t x135 = UINT32_MAX;
	int64_t x136 = INT64_MIN;
	volatile int64_t t27 = 25067LL;

	t27 = (((x133+x134)==x135)*x136);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x137 = UINT16_MAX;
	int64_t x138 = -1LL;
	volatile uint64_t x140 = 66643462175150415LLU;

	t28 = (((x137+x138)==x139)*x140);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x141 = 1059U;
	volatile int32_t x143 = INT32_MIN;
	uint64_t x144 = 541062239922033926LLU;
	volatile uint64_t t29 = 59278LLU;

	t29 = (((x141+x142)==x143)*x144);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x145 = 0;
	uint32_t x146 = 13990512U;
	uint8_t x147 = 22U;
	int64_t x148 = INT64_MIN;
	int64_t t30 = 0LL;

	t30 = (((x145+x146)==x147)*x148);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x149 = 16U;
	static volatile int32_t x150 = -1;
	int8_t x151 = -1;
	static int16_t x152 = INT16_MAX;
	volatile int32_t t31 = 37501204;

	t31 = (((x149+x150)==x151)*x152);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x156 = INT32_MIN;

	t32 = (((x153+x154)==x155)*x156);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x157 = -2;
	int64_t x158 = 2579923735164LL;
	static uint16_t x159 = 0U;
	volatile int32_t x160 = 60;
	volatile int32_t t33 = -136831;

	t33 = (((x157+x158)==x159)*x160);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x161 = 15;
	volatile uint8_t x163 = UINT8_MAX;
	int32_t x164 = 14966;
	volatile int32_t t34 = 421969222;

	t34 = (((x161+x162)==x163)*x164);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x165 = INT8_MIN;
	uint64_t x166 = UINT64_MAX;
	int64_t x167 = INT64_MAX;
	static int8_t x168 = INT8_MAX;
	int32_t t35 = 17998;

	t35 = (((x165+x166)==x167)*x168);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x169 = 13U;
	int8_t x170 = -1;
	int8_t x171 = INT8_MAX;
	int64_t x172 = INT64_MIN;

	t36 = (((x169+x170)==x171)*x172);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x175 = 837896235U;
	static uint32_t t37 = 2098320684U;

	t37 = (((x173+x174)==x175)*x176);

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x177 = UINT32_MAX;
	int16_t x178 = INT16_MAX;
	uint16_t x179 = 462U;
	int32_t x180 = -8;

	t38 = (((x177+x178)==x179)*x180);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x185 = UINT64_MAX;
	int32_t x186 = INT32_MIN;
	volatile int64_t x187 = -1LL;
	int8_t x188 = -5;

	t39 = (((x185+x186)==x187)*x188);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x189 = 17766LLU;
	int8_t x190 = INT8_MIN;
	int32_t x192 = -132291;
	static volatile int32_t t40 = -816767;

	t40 = (((x189+x190)==x191)*x192);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x193 = INT8_MAX;
	static uint8_t x194 = UINT8_MAX;
	static int32_t x195 = INT32_MIN;
	int16_t x196 = INT16_MIN;
	int32_t t41 = -66;

	t41 = (((x193+x194)==x195)*x196);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x197 = INT64_MIN;
	uint8_t x198 = UINT8_MAX;
	int32_t t42 = -33028695;

	t42 = (((x197+x198)==x199)*x200);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint32_t x205 = UINT32_MAX;
	static uint32_t x206 = 25U;
	uint64_t x207 = UINT64_MAX;
	int32_t t43 = 56;

	t43 = (((x205+x206)==x207)*x208);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x209 = INT64_MIN;
	uint8_t x210 = 2U;
	static uint16_t x212 = UINT16_MAX;
	static int32_t t44 = 254212627;

	t44 = (((x209+x210)==x211)*x212);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x213 = -6081LL;
	volatile int16_t x215 = INT16_MIN;
	uint8_t x216 = 0U;

	t45 = (((x213+x214)==x215)*x216);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x217 = INT16_MIN;
	int16_t x218 = INT16_MIN;
	static int16_t x220 = -1;

	t46 = (((x217+x218)==x219)*x220);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x221 = 0U;
	volatile uint16_t x222 = 583U;
	static volatile int32_t x224 = INT32_MIN;
	static volatile int32_t t47 = 4602050;

	t47 = (((x221+x222)==x223)*x224);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x226 = 49U;
	static int32_t t48 = 0;

	t48 = (((x225+x226)==x227)*x228);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x229 = -3;
	uint8_t x230 = UINT8_MAX;
	int32_t x231 = 1;
	int32_t x232 = 1738;
	volatile int32_t t49 = -59864;

	t49 = (((x229+x230)==x231)*x232);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int8_t x234 = INT8_MIN;
	uint64_t x235 = UINT64_MAX;
	int32_t t50 = -11863815;

	t50 = (((x233+x234)==x235)*x236);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int64_t x237 = -1LL;
	volatile uint32_t x239 = 610751U;
	uint16_t x240 = 162U;
	static volatile int32_t t51 = 62766760;

	t51 = (((x237+x238)==x239)*x240);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x241 = INT16_MIN;
	static int8_t x242 = -1;
	int16_t x243 = INT16_MAX;
	int32_t t52 = -159978;

	t52 = (((x241+x242)==x243)*x244);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x246 = 276335125LLU;
	int8_t x247 = INT8_MIN;
	int64_t x248 = INT64_MIN;
	volatile int64_t t53 = 5759595683LL;

	t53 = (((x245+x246)==x247)*x248);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x249 = INT8_MIN;
	static int8_t x250 = INT8_MIN;
	int64_t x251 = INT64_MAX;
	volatile int8_t x252 = INT8_MAX;

	t54 = (((x249+x250)==x251)*x252);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x253 = -1;
	volatile int32_t x254 = 247386;
	static int64_t x256 = 140494LL;
	int64_t t55 = -199578833LL;

	t55 = (((x253+x254)==x255)*x256);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x257 = 13;
	int32_t x258 = INT32_MIN;
	uint8_t x260 = 58U;
	int32_t t56 = -1;

	t56 = (((x257+x258)==x259)*x260);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x261 = 15U;
	static int16_t x262 = INT16_MIN;
	static int32_t x263 = 2191;
	int32_t t57 = 3;

	t57 = (((x261+x262)==x263)*x264);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x265 = INT16_MIN;
	static int64_t x266 = -2672225318765101540LL;
	int64_t x267 = INT64_MIN;
	int64_t x268 = -1LL;

	t58 = (((x265+x266)==x267)*x268);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x269 = 87U;
	int16_t x270 = -1;
	uint32_t x271 = 5954U;
	uint32_t x272 = UINT32_MAX;
	uint32_t t59 = 442U;

	t59 = (((x269+x270)==x271)*x272);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x273 = 1;
	uint32_t x274 = UINT32_MAX;
	static int64_t x276 = -221327LL;

	t60 = (((x273+x274)==x275)*x276);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x277 = UINT64_MAX;
	uint16_t x278 = 2105U;
	static uint64_t x279 = UINT64_MAX;
	volatile int32_t t61 = -86002689;

	t61 = (((x277+x278)==x279)*x280);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x283 = UINT8_MAX;
	uint16_t x284 = 26U;

	t62 = (((x281+x282)==x283)*x284);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x285 = INT16_MIN;
	volatile int16_t x286 = INT16_MIN;
	static int16_t x288 = INT16_MIN;
	volatile int32_t t63 = -468;

	t63 = (((x285+x286)==x287)*x288);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x289 = -1;
	uint8_t x290 = 1U;
	int32_t t64 = -113119;

	t64 = (((x289+x290)==x291)*x292);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint8_t x293 = 1U;
	static int16_t x294 = INT16_MIN;
	static int32_t x295 = INT32_MIN;
	static int64_t t65 = -68849452600775LL;

	t65 = (((x293+x294)==x295)*x296);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x297 = 223620;
	int8_t x298 = 21;
	int8_t x299 = INT8_MAX;
	static int32_t t66 = 9648046;

	t66 = (((x297+x298)==x299)*x300);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x301 = INT32_MAX;
	int64_t x302 = 0LL;
	int8_t x303 = 1;
	uint8_t x304 = 108U;
	volatile int32_t t67 = 39392913;

	t67 = (((x301+x302)==x303)*x304);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x305 = 3U;
	int8_t x307 = -3;
	volatile int16_t x308 = -1;

	t68 = (((x305+x306)==x307)*x308);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int16_t x309 = -3457;
	uint64_t x310 = 7LLU;
	int64_t x311 = -1LL;
	uint64_t x312 = 1563773457LLU;

	t69 = (((x309+x310)==x311)*x312);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x317 = INT32_MIN;
	static uint64_t x318 = 39304LLU;
	volatile int32_t x320 = INT32_MIN;
	int32_t t70 = -30883817;

	t70 = (((x317+x318)==x319)*x320);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x321 = INT64_MIN;
	int16_t x322 = INT16_MAX;
	uint32_t x323 = 2009020776U;
	int32_t x324 = -1;

	t71 = (((x321+x322)==x323)*x324);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x325 = -6;
	int32_t x326 = -3;
	int32_t x327 = INT32_MAX;
	int16_t x328 = -1;
	volatile int32_t t72 = 443301;

	t72 = (((x325+x326)==x327)*x328);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x329 = 284298041785676LL;
	static volatile uint16_t x331 = 35U;
	int64_t x332 = INT64_MIN;

	t73 = (((x329+x330)==x331)*x332);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x333 = UINT64_MAX;

	t74 = (((x333+x334)==x335)*x336);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x337 = -1;
	uint32_t x339 = 12U;
	int32_t x340 = INT32_MIN;
	static int32_t t75 = -2;

	t75 = (((x337+x338)==x339)*x340);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x345 = 1U;
	uint8_t x346 = 122U;
	static uint64_t x347 = 6839LLU;
	static volatile uint32_t x348 = 2594896U;
	static volatile uint32_t t76 = 2738U;

	t76 = (((x345+x346)==x347)*x348);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x352 = INT16_MIN;
	int32_t t77 = 2500167;

	t77 = (((x349+x350)==x351)*x352);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x353 = INT16_MIN;
	volatile uint64_t x354 = 35046767828736LLU;
	uint8_t x355 = UINT8_MAX;
	uint8_t x356 = 0U;
	int32_t t78 = -6962970;

	t78 = (((x353+x354)==x355)*x356);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x357 = INT16_MIN;
	int16_t x358 = -1;
	int64_t x359 = 384LL;
	uint16_t x360 = 268U;
	static volatile int32_t t79 = -214612;

	t79 = (((x357+x358)==x359)*x360);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x363 = UINT8_MAX;
	static int64_t x364 = -1LL;
	int64_t t80 = 48085LL;

	t80 = (((x361+x362)==x363)*x364);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x365 = -1;
	volatile int8_t x366 = -1;
	uint8_t x367 = 7U;
	uint16_t x368 = 0U;
	volatile int32_t t81 = 1;

	t81 = (((x365+x366)==x367)*x368);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x369 = 9129U;
	uint32_t x370 = UINT32_MAX;
	int64_t x371 = INT64_MAX;
	int64_t x372 = -3300788720307973741LL;
	int64_t t82 = -225020720249LL;

	t82 = (((x369+x370)==x371)*x372);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x373 = INT64_MAX;
	uint8_t x375 = 19U;
	volatile uint16_t x376 = 11U;
	volatile int32_t t83 = 616;

	t83 = (((x373+x374)==x375)*x376);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x377 = -10;
	uint64_t x378 = UINT64_MAX;
	uint64_t x379 = UINT64_MAX;
	static uint32_t x380 = 56649U;
	volatile uint32_t t84 = 6U;

	t84 = (((x377+x378)==x379)*x380);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x382 = INT8_MIN;
	uint32_t x384 = UINT32_MAX;

	t85 = (((x381+x382)==x383)*x384);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x385 = 98415U;
	static int32_t x387 = INT32_MIN;
	int32_t x388 = INT32_MAX;
	static volatile int32_t t86 = -27596209;

	t86 = (((x385+x386)==x387)*x388);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x389 = UINT8_MAX;
	uint64_t x390 = UINT64_MAX;
	uint64_t x391 = UINT64_MAX;
	uint8_t x392 = 44U;
	int32_t t87 = 161520;

	t87 = (((x389+x390)==x391)*x392);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x393 = UINT8_MAX;
	static int16_t x394 = INT16_MIN;
	uint8_t x395 = 13U;
	int8_t x396 = INT8_MIN;
	volatile int32_t t88 = 175;

	t88 = (((x393+x394)==x395)*x396);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x397 = 1;
	static volatile uint8_t x398 = 0U;
	int64_t x399 = 7112139282296LL;
	volatile int32_t x400 = 1954677;

	t89 = (((x397+x398)==x399)*x400);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint16_t x401 = 4U;
	int64_t x402 = INT64_MIN;
	int64_t x403 = 215LL;

	t90 = (((x401+x402)==x403)*x404);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x405 = -1;
	static int64_t x406 = 891300943LL;
	int32_t x407 = -8020;
	volatile int16_t x408 = INT16_MIN;

	t91 = (((x405+x406)==x407)*x408);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x409 = INT32_MAX;
	static uint64_t x410 = 38168156116160397LLU;
	int16_t x411 = -1;
	uint32_t x412 = UINT32_MAX;
	volatile uint32_t t92 = 6830U;

	t92 = (((x409+x410)==x411)*x412);

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x413 = INT32_MAX;
	volatile int16_t x414 = INT16_MIN;
	int32_t x415 = INT32_MIN;
	uint16_t x416 = 5927U;
	int32_t t93 = 22883;

	t93 = (((x413+x414)==x415)*x416);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x418 = INT8_MAX;
	int64_t x420 = -1819LL;
	volatile int64_t t94 = 4690849LL;

	t94 = (((x417+x418)==x419)*x420);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x422 = 1469935588868004LLU;
	int8_t x423 = -2;
	static int32_t x424 = -433074;
	volatile int32_t t95 = -71386720;

	t95 = (((x421+x422)==x423)*x424);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x425 = -1LL;
	volatile uint64_t x426 = 678057612364038LLU;
	uint16_t x427 = 0U;
	int16_t x428 = INT16_MAX;
	static int32_t t96 = -7;

	t96 = (((x425+x426)==x427)*x428);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x433 = 386039741U;
	int64_t x434 = -241LL;
	int8_t x436 = INT8_MIN;
	volatile int32_t t97 = 1;

	t97 = (((x433+x434)==x435)*x436);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x437 = INT8_MAX;
	volatile int64_t x438 = INT64_MIN;
	int16_t x439 = 247;
	uint32_t x440 = 76222U;
	volatile uint32_t t98 = 21777057U;

	t98 = (((x437+x438)==x439)*x440);

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x441 = UINT8_MAX;
	int16_t x442 = INT16_MAX;
	uint32_t x444 = 18U;
	volatile uint32_t t99 = 3533U;

	t99 = (((x441+x442)==x443)*x444);

	if (t99 != 0U) { NG(); } else { ; }
	
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

