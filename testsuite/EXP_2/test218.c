#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x6 = 1999U;
int64_t x7 = INT64_MAX;
volatile int32_t t1 = 3;
volatile int64_t x13 = 14LL;
int32_t t2 = -5;
volatile int32_t t3 = -3484289;
int16_t x22 = -1;
int8_t x30 = INT8_MAX;
static int32_t t5 = -79;
static volatile int8_t x35 = 33;
int32_t x45 = -1;
int32_t t8 = -4;
uint32_t x55 = 48582U;
volatile uint32_t x56 = UINT32_MAX;
volatile uint32_t x62 = UINT32_MAX;
int32_t t11 = -915482364;
volatile int32_t t14 = 1;
uint64_t x87 = UINT64_MAX;
int32_t x94 = INT32_MIN;
int32_t x105 = INT32_MIN;
int8_t x108 = -2;
static int8_t x109 = 0;
int8_t x114 = 0;
int64_t x115 = -30LL;
int64_t x122 = 1379LL;
static int16_t x124 = INT16_MAX;
static volatile int32_t t22 = 809144896;
uint8_t x134 = 123U;
int32_t t23 = -202361008;
int32_t t24 = 38148398;
volatile int32_t t25 = -48;
static int32_t x151 = -1;
static int8_t x162 = INT8_MIN;
volatile int8_t x165 = -1;
int64_t x167 = -1023759390933365413LL;
int8_t x177 = -1;
static int16_t x185 = INT16_MAX;
int8_t x189 = -18;
uint8_t x194 = 10U;
int64_t x196 = -57260538LL;
int32_t x198 = INT32_MIN;
static volatile uint64_t x208 = UINT64_MAX;
volatile int32_t t41 = -84501449;
uint16_t x211 = 1U;
int8_t x213 = INT8_MIN;
static int32_t x214 = -394480017;
volatile int32_t t43 = 0;
int8_t x222 = 40;
static volatile int32_t t44 = 0;
int16_t x227 = INT16_MIN;
static uint32_t x228 = 24077U;
int16_t x231 = -47;
volatile int32_t t46 = 1;
volatile int64_t x236 = -1LL;
static int32_t x240 = INT32_MIN;
int32_t t49 = -79326327;
uint16_t x247 = 4434U;
static int64_t x254 = -1LL;
volatile int32_t t51 = 78561205;
int64_t x257 = INT64_MIN;
static int8_t x266 = 13;
static uint64_t x268 = 5838721868287LLU;
int8_t x273 = 1;
int64_t x276 = INT64_MAX;
static int32_t x279 = INT32_MAX;
static volatile int64_t x285 = INT64_MIN;
static int32_t x300 = 301;
int32_t t63 = 293529;
uint16_t x320 = UINT16_MAX;
uint16_t x325 = 3U;
volatile int64_t x332 = INT64_MIN;
uint16_t x336 = 14064U;
int64_t x348 = -63748241132895382LL;
int64_t x350 = -1547999170LL;
int64_t x355 = INT64_MAX;
int16_t x364 = -1;
uint64_t x370 = 16025095LLU;
uint32_t x393 = 9294U;
int16_t x400 = INT16_MIN;
static int32_t x402 = 1781;
int32_t x404 = -3700390;
int32_t t82 = -56504;
int64_t x407 = 8016LL;
int32_t x417 = 0;
uint8_t x420 = 19U;
uint32_t x422 = 18979U;
int32_t t87 = -30950445;
int16_t x425 = 0;
uint8_t x428 = UINT8_MAX;
volatile int32_t x431 = 0;
int64_t x435 = -1LL;
static uint64_t x436 = 4441909763LLU;
static uint16_t x449 = 10978U;
volatile int32_t t92 = 757272;
int64_t x460 = INT64_MIN;
int32_t t94 = -30;
uint8_t x465 = UINT8_MAX;
volatile int16_t x471 = INT16_MAX;
static uint8_t x481 = 1U;


void f0(void) {
	uint8_t x5 = 83U;
	static int8_t x8 = INT8_MIN;
	int32_t t0 = -384379;

	t0 = ((x5/(x6-x7))<=x8);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = -1;
	static int8_t x10 = 36;
	static int16_t x11 = 14;
	int32_t x12 = INT32_MAX;

	t1 = ((x9/(x10-x11))<=x12);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x14 = UINT64_MAX;
	uint8_t x15 = UINT8_MAX;
	int8_t x16 = -5;

	t2 = ((x13/(x14-x15))<=x16);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x17 = -31370;
	int64_t x18 = -3891926509503LL;
	uint64_t x19 = 53756001205LLU;
	int64_t x20 = 1011872635356630052LL;

	t3 = ((x17/(x18-x19))<=x20);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x21 = INT32_MAX;
	int32_t x23 = INT32_MIN;
	int16_t x24 = INT16_MAX;
	int32_t t4 = -129059;

	t4 = ((x21/(x22-x23))<=x24);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x29 = INT8_MAX;
	int16_t x31 = -174;
	static uint32_t x32 = UINT32_MAX;

	t5 = ((x29/(x30-x31))<=x32);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x33 = -4;
	int8_t x34 = 3;
	int8_t x36 = INT8_MAX;
	volatile int32_t t6 = -7844;

	t6 = ((x33/(x34-x35))<=x36);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int16_t x46 = -1;
	uint16_t x47 = 4U;
	volatile int8_t x48 = INT8_MIN;
	int32_t t7 = -57023;

	t7 = ((x45/(x46-x47))<=x48);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x49 = UINT32_MAX;
	uint16_t x50 = 2U;
	uint16_t x51 = 11U;
	volatile uint64_t x52 = UINT64_MAX;

	t8 = ((x49/(x50-x51))<=x52);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x53 = 232577786;
	int64_t x54 = INT64_MAX;
	volatile int32_t t9 = -49420744;

	t9 = ((x53/(x54-x55))<=x56);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x57 = INT64_MAX;
	volatile int8_t x58 = -1;
	static uint8_t x59 = UINT8_MAX;
	uint8_t x60 = UINT8_MAX;
	int32_t t10 = -9735;

	t10 = ((x57/(x58-x59))<=x60);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x61 = INT8_MIN;
	int64_t x63 = 0LL;
	int16_t x64 = -3936;

	t11 = ((x61/(x62-x63))<=x64);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x69 = 32;
	static int32_t x70 = INT32_MAX;
	static uint8_t x71 = UINT8_MAX;
	int32_t x72 = INT32_MIN;
	int32_t t12 = -599;

	t12 = ((x69/(x70-x71))<=x72);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x73 = INT64_MIN;
	int16_t x74 = -1;
	static int32_t x75 = INT32_MIN;
	int64_t x76 = INT64_MAX;
	int32_t t13 = 132434613;

	t13 = ((x73/(x74-x75))<=x76);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x77 = -2031917474LL;
	int16_t x78 = -1;
	uint64_t x79 = 11807111LLU;
	int64_t x80 = 2347122LL;

	t14 = ((x77/(x78-x79))<=x80);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x85 = INT64_MIN;
	int64_t x86 = INT64_MAX;
	uint8_t x88 = 6U;
	static volatile int32_t t15 = 279519;

	t15 = ((x85/(x86-x87))<=x88);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x93 = UINT32_MAX;
	int16_t x95 = -140;
	int16_t x96 = INT16_MIN;
	int32_t t16 = -6497832;

	t16 = ((x93/(x94-x95))<=x96);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x97 = UINT32_MAX;
	static volatile uint64_t x98 = 6LLU;
	static uint16_t x99 = 15315U;
	volatile int8_t x100 = -13;
	int32_t t17 = 23;

	t17 = ((x97/(x98-x99))<=x100);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x101 = -476;
	int16_t x102 = 449;
	volatile uint64_t x103 = 21564230409170LLU;
	static uint64_t x104 = 1761910LLU;
	int32_t t18 = 208;

	t18 = ((x101/(x102-x103))<=x104);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x106 = -1;
	uint16_t x107 = UINT16_MAX;
	int32_t t19 = -11;

	t19 = ((x105/(x106-x107))<=x108);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x110 = 55817339195106567LLU;
	int8_t x111 = INT8_MAX;
	int8_t x112 = 30;
	int32_t t20 = -6;

	t20 = ((x109/(x110-x111))<=x112);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x113 = INT16_MIN;
	int64_t x116 = INT64_MAX;
	volatile int32_t t21 = 6;

	t21 = ((x113/(x114-x115))<=x116);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x121 = INT64_MIN;
	static int8_t x123 = 8;

	t22 = ((x121/(x122-x123))<=x124);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x133 = UINT8_MAX;
	int8_t x135 = INT8_MIN;
	int8_t x136 = INT8_MIN;

	t23 = ((x133/(x134-x135))<=x136);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x137 = INT64_MAX;
	volatile int32_t x138 = 21273;
	int32_t x139 = -1;
	int8_t x140 = INT8_MIN;

	t24 = ((x137/(x138-x139))<=x140);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x141 = INT32_MIN;
	uint16_t x142 = UINT16_MAX;
	static uint8_t x143 = UINT8_MAX;
	volatile uint16_t x144 = 3459U;

	t25 = ((x141/(x142-x143))<=x144);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x145 = UINT8_MAX;
	uint8_t x146 = 49U;
	uint16_t x147 = 23800U;
	int64_t x148 = INT64_MIN;
	volatile int32_t t26 = 141225;

	t26 = ((x145/(x146-x147))<=x148);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x149 = 0;
	uint32_t x150 = 4U;
	volatile uint8_t x152 = 28U;
	int32_t t27 = -859340886;

	t27 = ((x149/(x150-x151))<=x152);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x153 = 2LLU;
	int32_t x154 = 127140;
	uint32_t x155 = UINT32_MAX;
	int16_t x156 = INT16_MAX;
	static volatile int32_t t28 = -1437946;

	t28 = ((x153/(x154-x155))<=x156);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x157 = -1LL;
	uint64_t x158 = 135596183774692675LLU;
	int8_t x159 = 0;
	uint16_t x160 = 41U;
	static volatile int32_t t29 = -376618;

	t29 = ((x157/(x158-x159))<=x160);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x161 = -1LL;
	uint64_t x163 = UINT64_MAX;
	volatile uint16_t x164 = UINT16_MAX;
	int32_t t30 = -4;

	t30 = ((x161/(x162-x163))<=x164);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x166 = INT8_MAX;
	int64_t x168 = INT64_MAX;
	int32_t t31 = 467;

	t31 = ((x165/(x166-x167))<=x168);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x169 = -34389706;
	int16_t x170 = INT16_MAX;
	uint16_t x171 = UINT16_MAX;
	uint8_t x172 = UINT8_MAX;
	static volatile int32_t t32 = -4083541;

	t32 = ((x169/(x170-x171))<=x172);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x173 = 7280426LLU;
	int32_t x174 = 16;
	uint16_t x175 = 6195U;
	int16_t x176 = INT16_MAX;
	volatile int32_t t33 = 88924;

	t33 = ((x173/(x174-x175))<=x176);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x178 = INT8_MIN;
	uint16_t x179 = 54U;
	int64_t x180 = INT64_MAX;
	volatile int32_t t34 = 499;

	t34 = ((x177/(x178-x179))<=x180);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x181 = INT16_MIN;
	int16_t x182 = INT16_MAX;
	int16_t x183 = INT16_MIN;
	static volatile int16_t x184 = INT16_MIN;
	int32_t t35 = 1;

	t35 = ((x181/(x182-x183))<=x184);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x186 = -2660;
	static int16_t x187 = INT16_MIN;
	volatile int8_t x188 = INT8_MIN;
	volatile int32_t t36 = 23094;

	t36 = ((x185/(x186-x187))<=x188);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x190 = -4;
	uint64_t x191 = 25191LLU;
	int32_t x192 = -2723;
	int32_t t37 = -470;

	t37 = ((x189/(x190-x191))<=x192);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x193 = 18U;
	int64_t x195 = -1LL;
	int32_t t38 = -123886;

	t38 = ((x193/(x194-x195))<=x196);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x197 = 668U;
	int64_t x199 = INT64_MIN;
	int32_t x200 = INT32_MIN;
	volatile int32_t t39 = 12718;

	t39 = ((x197/(x198-x199))<=x200);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x201 = INT64_MAX;
	int32_t x202 = -1;
	volatile int64_t x203 = 18266406213566661LL;
	int16_t x204 = INT16_MIN;
	volatile int32_t t40 = 1731389;

	t40 = ((x201/(x202-x203))<=x204);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x205 = 26337LLU;
	int64_t x206 = 3715541106LL;
	int16_t x207 = INT16_MIN;

	t41 = ((x205/(x206-x207))<=x208);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x209 = INT8_MAX;
	uint8_t x210 = 68U;
	uint32_t x212 = 1034U;
	static volatile int32_t t42 = 95864;

	t42 = ((x209/(x210-x211))<=x212);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x215 = INT16_MIN;
	int64_t x216 = INT64_MIN;

	t43 = ((x213/(x214-x215))<=x216);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int8_t x221 = -2;
	volatile int32_t x223 = INT32_MAX;
	volatile int16_t x224 = INT16_MAX;

	t44 = ((x221/(x222-x223))<=x224);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x225 = UINT32_MAX;
	int8_t x226 = -21;
	volatile int32_t t45 = -6;

	t45 = ((x225/(x226-x227))<=x228);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x229 = INT32_MIN;
	int8_t x230 = INT8_MIN;
	int16_t x232 = -8607;

	t46 = ((x229/(x230-x231))<=x232);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x233 = INT64_MAX;
	int64_t x234 = -124LL;
	int16_t x235 = INT16_MIN;
	int32_t t47 = 0;

	t47 = ((x233/(x234-x235))<=x236);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x237 = 4292U;
	uint64_t x238 = 24060267848982956LLU;
	int32_t x239 = -1783663;
	volatile int32_t t48 = -233;

	t48 = ((x237/(x238-x239))<=x240);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int8_t x241 = 3;
	static uint8_t x242 = 15U;
	static int16_t x243 = 910;
	static int32_t x244 = INT32_MAX;

	t49 = ((x241/(x242-x243))<=x244);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x245 = INT16_MIN;
	int32_t x246 = 48844;
	uint8_t x248 = 9U;
	volatile int32_t t50 = -438266668;

	t50 = ((x245/(x246-x247))<=x248);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x253 = 5414U;
	int16_t x255 = 1075;
	volatile uint16_t x256 = 1U;

	t51 = ((x253/(x254-x255))<=x256);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x258 = INT8_MAX;
	uint32_t x259 = 2778U;
	uint64_t x260 = 132584611962602LLU;
	volatile int32_t t52 = -1;

	t52 = ((x257/(x258-x259))<=x260);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x261 = -3;
	static int32_t x262 = INT32_MIN;
	int8_t x263 = -1;
	int16_t x264 = -1;
	static volatile int32_t t53 = -538509459;

	t53 = ((x261/(x262-x263))<=x264);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x265 = -1LL;
	uint32_t x267 = UINT32_MAX;
	volatile int32_t t54 = -17421606;

	t54 = ((x265/(x266-x267))<=x268);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x269 = 0LLU;
	int16_t x270 = INT16_MIN;
	int8_t x271 = INT8_MIN;
	int64_t x272 = INT64_MIN;
	volatile int32_t t55 = 1;

	t55 = ((x269/(x270-x271))<=x272);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x274 = INT16_MIN;
	volatile uint8_t x275 = 98U;
	int32_t t56 = 1926;

	t56 = ((x273/(x274-x275))<=x276);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x277 = INT8_MAX;
	int16_t x278 = INT16_MAX;
	uint16_t x280 = UINT16_MAX;
	volatile int32_t t57 = 0;

	t57 = ((x277/(x278-x279))<=x280);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x281 = 140124904508613701LL;
	int8_t x282 = -1;
	int64_t x283 = 454773586LL;
	int32_t x284 = -438346;
	static int32_t t58 = -459;

	t58 = ((x281/(x282-x283))<=x284);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x286 = 19U;
	int8_t x287 = 3;
	int32_t x288 = INT32_MIN;
	static int32_t t59 = -53;

	t59 = ((x285/(x286-x287))<=x288);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint32_t x289 = 1528602U;
	int8_t x290 = -3;
	int16_t x291 = -3858;
	volatile uint32_t x292 = 73U;
	int32_t t60 = 5;

	t60 = ((x289/(x290-x291))<=x292);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x293 = -3224;
	uint16_t x294 = UINT16_MAX;
	volatile uint64_t x295 = 177LLU;
	int8_t x296 = INT8_MIN;
	volatile int32_t t61 = -15620524;

	t61 = ((x293/(x294-x295))<=x296);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x297 = 0U;
	uint64_t x298 = 33LLU;
	uint32_t x299 = 523508294U;
	volatile int32_t t62 = -114;

	t62 = ((x297/(x298-x299))<=x300);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x301 = 2U;
	int64_t x302 = INT64_MAX;
	uint16_t x303 = 87U;
	uint16_t x304 = 4U;

	t63 = ((x301/(x302-x303))<=x304);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x305 = 452092;
	int8_t x306 = -1;
	volatile int32_t x307 = -161690074;
	uint64_t x308 = 32589LLU;
	int32_t t64 = -63;

	t64 = ((x305/(x306-x307))<=x308);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x317 = UINT64_MAX;
	int64_t x318 = INT64_MIN;
	uint64_t x319 = 616870054723LLU;
	volatile int32_t t65 = 12;

	t65 = ((x317/(x318-x319))<=x320);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x321 = 912U;
	uint32_t x322 = 737U;
	volatile uint16_t x323 = 57U;
	static volatile int64_t x324 = 1498522LL;
	volatile int32_t t66 = 116559;

	t66 = ((x321/(x322-x323))<=x324);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x326 = 1U;
	uint64_t x327 = 4999051576216LLU;
	int32_t x328 = INT32_MIN;
	int32_t t67 = -1097728;

	t67 = ((x325/(x326-x327))<=x328);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x329 = 0;
	uint8_t x330 = 15U;
	uint32_t x331 = 162U;
	int32_t t68 = -1;

	t68 = ((x329/(x330-x331))<=x332);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x333 = 9U;
	uint8_t x334 = 30U;
	volatile uint32_t x335 = 72U;
	volatile int32_t t69 = 520177;

	t69 = ((x333/(x334-x335))<=x336);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x345 = INT32_MIN;
	volatile int16_t x346 = INT16_MIN;
	int64_t x347 = INT64_MIN;
	volatile int32_t t70 = 1;

	t70 = ((x345/(x346-x347))<=x348);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x349 = -329;
	int16_t x351 = INT16_MIN;
	int16_t x352 = INT16_MAX;
	static volatile int32_t t71 = 4279;

	t71 = ((x349/(x350-x351))<=x352);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x353 = 14305LLU;
	static uint16_t x354 = UINT16_MAX;
	int16_t x356 = INT16_MAX;
	volatile int32_t t72 = 0;

	t72 = ((x353/(x354-x355))<=x356);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x357 = INT8_MAX;
	static volatile int32_t x358 = INT32_MIN;
	int64_t x359 = 4331331807354LL;
	static int16_t x360 = 8868;
	int32_t t73 = 1;

	t73 = ((x357/(x358-x359))<=x360);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x361 = INT16_MIN;
	int8_t x362 = INT8_MIN;
	static int32_t x363 = -240;
	int32_t t74 = -739773;

	t74 = ((x361/(x362-x363))<=x364);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x369 = 1286979954LLU;
	int16_t x371 = INT16_MIN;
	static int8_t x372 = INT8_MAX;
	int32_t t75 = 16129;

	t75 = ((x369/(x370-x371))<=x372);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int32_t x373 = -1;
	static int16_t x374 = INT16_MAX;
	static int16_t x375 = INT16_MIN;
	int64_t x376 = 12342173802500498LL;
	volatile int32_t t76 = 7240;

	t76 = ((x373/(x374-x375))<=x376);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x377 = INT32_MIN;
	int32_t x378 = -23;
	int16_t x379 = -47;
	static uint64_t x380 = 63127448LLU;
	int32_t t77 = 28569488;

	t77 = ((x377/(x378-x379))<=x380);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x381 = INT64_MAX;
	volatile int32_t x382 = INT32_MAX;
	int64_t x383 = INT64_MAX;
	int16_t x384 = -1337;
	volatile int32_t t78 = 6;

	t78 = ((x381/(x382-x383))<=x384);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x389 = 85U;
	uint64_t x390 = UINT64_MAX;
	static uint16_t x391 = UINT16_MAX;
	int64_t x392 = INT64_MIN;
	volatile int32_t t79 = -13;

	t79 = ((x389/(x390-x391))<=x392);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x394 = UINT8_MAX;
	int8_t x395 = INT8_MAX;
	int8_t x396 = INT8_MAX;
	volatile int32_t t80 = 162532691;

	t80 = ((x393/(x394-x395))<=x396);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x397 = 71U;
	static uint64_t x398 = UINT64_MAX;
	int32_t x399 = INT32_MIN;
	int32_t t81 = -415;

	t81 = ((x397/(x398-x399))<=x400);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x401 = -1;
	int16_t x403 = -3474;

	t82 = ((x401/(x402-x403))<=x404);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x405 = INT64_MIN;
	int8_t x406 = INT8_MAX;
	uint64_t x408 = 2LLU;
	volatile int32_t t83 = 194217;

	t83 = ((x405/(x406-x407))<=x408);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x409 = 7700157U;
	uint32_t x410 = 107U;
	static uint16_t x411 = 0U;
	uint16_t x412 = UINT16_MAX;
	volatile int32_t t84 = 1207;

	t84 = ((x409/(x410-x411))<=x412);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x413 = 1;
	volatile uint16_t x414 = 1463U;
	volatile int32_t x415 = -205;
	uint16_t x416 = 17638U;
	volatile int32_t t85 = 139342472;

	t85 = ((x413/(x414-x415))<=x416);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x418 = -1LL;
	uint16_t x419 = UINT16_MAX;
	volatile int32_t t86 = 8;

	t86 = ((x417/(x418-x419))<=x420);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x421 = 2U;
	int16_t x423 = -1;
	volatile uint16_t x424 = 11U;

	t87 = ((x421/(x422-x423))<=x424);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x426 = INT32_MIN;
	int8_t x427 = INT8_MIN;
	int32_t t88 = -44616693;

	t88 = ((x425/(x426-x427))<=x428);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x429 = -23;
	static int8_t x430 = -1;
	uint8_t x432 = 47U;
	int32_t t89 = 0;

	t89 = ((x429/(x430-x431))<=x432);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x433 = -1;
	uint16_t x434 = UINT16_MAX;
	int32_t t90 = -439;

	t90 = ((x433/(x434-x435))<=x436);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x445 = 14301LLU;
	int32_t x446 = INT32_MAX;
	uint32_t x447 = 161U;
	int32_t x448 = INT32_MIN;
	int32_t t91 = 2652680;

	t91 = ((x445/(x446-x447))<=x448);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x450 = 5097LLU;
	int64_t x451 = 3160113572403590LL;
	int16_t x452 = -3;

	t92 = ((x449/(x450-x451))<=x452);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x457 = INT64_MIN;
	int16_t x458 = -2096;
	volatile uint16_t x459 = 54U;
	int32_t t93 = 25;

	t93 = ((x457/(x458-x459))<=x460);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x461 = 0;
	int32_t x462 = INT32_MAX;
	volatile uint32_t x463 = 3257094U;
	int16_t x464 = INT16_MIN;

	t94 = ((x461/(x462-x463))<=x464);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x466 = -124;
	int64_t x467 = INT64_MIN;
	uint8_t x468 = UINT8_MAX;
	volatile int32_t t95 = 4;

	t95 = ((x465/(x466-x467))<=x468);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x469 = -1;
	uint64_t x470 = UINT64_MAX;
	int32_t x472 = INT32_MIN;
	int32_t t96 = -14941;

	t96 = ((x469/(x470-x471))<=x472);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x473 = INT8_MIN;
	uint32_t x474 = UINT32_MAX;
	static int32_t x475 = 65941465;
	int64_t x476 = INT64_MAX;
	volatile int32_t t97 = 1449017;

	t97 = ((x473/(x474-x475))<=x476);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x477 = UINT8_MAX;
	uint32_t x478 = 1738U;
	int8_t x479 = INT8_MIN;
	int8_t x480 = INT8_MIN;
	int32_t t98 = -1014;

	t98 = ((x477/(x478-x479))<=x480);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x482 = INT8_MIN;
	volatile uint16_t x483 = UINT16_MAX;
	uint16_t x484 = 182U;
	int32_t t99 = 96992146;

	t99 = ((x481/(x482-x483))<=x484);

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

