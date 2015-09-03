#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x3 = 12294;
int32_t x7 = -1;
uint32_t x10 = 266732038U;
int16_t x11 = 0;
uint64_t x15 = UINT64_MAX;
int32_t t3 = 40772;
int32_t t4 = -50;
int64_t x34 = -1LL;
int16_t x35 = INT16_MIN;
int16_t x42 = -1;
static int32_t x43 = -11906057;
uint64_t x53 = 82702253LLU;
int64_t x57 = -84LL;
int32_t x58 = 404;
int8_t x59 = -37;
static volatile int32_t t12 = -27;
volatile uint32_t x65 = 500494U;
int32_t x66 = INT32_MIN;
volatile uint64_t x68 = 345238969204528604LLU;
volatile int32_t t14 = 1175760;
static uint64_t x71 = 3464920776591066601LLU;
static uint64_t x78 = UINT64_MAX;
int32_t t16 = 1683;
int64_t x84 = INT64_MIN;
volatile int32_t t17 = 7;
volatile int32_t t18 = 3914;
static int16_t x89 = -25;
int64_t x91 = INT64_MIN;
int64_t x108 = INT64_MIN;
volatile int32_t t22 = -637932947;
int64_t x112 = INT64_MAX;
volatile int32_t t24 = 8;
int16_t x120 = INT16_MIN;
volatile int8_t x122 = INT8_MIN;
static int32_t x126 = 91473036;
static int32_t x127 = 10;
static int16_t x128 = -6496;
int64_t x132 = -1LL;
uint16_t x134 = 998U;
uint64_t x141 = 53671614677489473LLU;
int64_t x142 = INT64_MIN;
int16_t x146 = INT16_MAX;
int64_t x148 = INT64_MIN;
int16_t x151 = INT16_MIN;
int16_t x152 = -1;
volatile int32_t t34 = 6927;
int32_t t35 = -93888;
int8_t x175 = INT8_MIN;
int64_t x176 = -24991708LL;
int16_t x177 = -1;
int32_t x178 = -1;
static int16_t x182 = 0;
uint16_t x187 = 1U;
volatile int64_t x190 = INT64_MIN;
volatile int32_t t43 = -2;
int8_t x204 = INT8_MIN;
int8_t x211 = INT8_MIN;
uint16_t x212 = UINT16_MAX;
int16_t x214 = INT16_MIN;
int16_t x216 = INT16_MIN;
volatile uint64_t x217 = 3981298338170035432LLU;
volatile int8_t x218 = INT8_MAX;
static uint16_t x219 = 13094U;
static volatile int32_t t49 = -229498;
uint8_t x221 = 3U;
int16_t x222 = 171;
int32_t t50 = -2334784;
uint64_t x235 = 4LLU;
volatile int64_t x240 = INT64_MAX;
static volatile int32_t t53 = -259531;
int16_t x250 = INT16_MIN;
volatile int32_t t57 = -57051;
volatile uint64_t x271 = 2284548566754LLU;
static uint8_t x279 = 0U;
uint64_t x298 = 623662444LLU;
volatile int32_t t62 = 0;
volatile uint8_t x301 = UINT8_MAX;
volatile uint64_t x302 = 33277814LLU;
volatile int32_t t64 = -4;
volatile int64_t x320 = INT64_MAX;
int16_t x326 = -2733;
volatile uint32_t x327 = 107856267U;
int8_t x330 = 19;
volatile int8_t x332 = -25;
uint64_t x352 = 1LLU;
static volatile int32_t x356 = INT32_MIN;
static uint16_t x357 = 3807U;
int8_t x368 = -18;
static int32_t x377 = -1;
static int32_t x384 = INT32_MIN;
static uint64_t x390 = UINT64_MAX;
int8_t x394 = INT8_MIN;
int16_t x420 = INT16_MIN;
static int32_t t85 = -110228324;
static int64_t x426 = INT64_MAX;
volatile int64_t x431 = INT64_MIN;
uint16_t x439 = 7556U;
uint16_t x442 = UINT16_MAX;
int64_t x451 = INT64_MIN;
static volatile int16_t x453 = 21;
static volatile int64_t x460 = INT64_MAX;
int8_t x466 = -1;
static uint8_t x468 = UINT8_MAX;
volatile int32_t x470 = 2;
int16_t x471 = INT16_MIN;
int64_t x473 = 52LL;
int16_t x481 = -3;
static int8_t x483 = INT8_MIN;


void f0(void) {
	int8_t x1 = INT8_MIN;
	static uint16_t x2 = 3921U;
	static volatile uint64_t x4 = 1LLU;
	int32_t t0 = 0;

	t0 = ((x1==(x2-x3))<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	int64_t x6 = -1LL;
	int16_t x8 = INT16_MIN;
	static volatile int32_t t1 = -3525387;

	t1 = ((x5==(x6-x7))<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 3LLU;
	int32_t x12 = 1101;
	volatile int32_t t2 = 839667;

	t2 = ((x9==(x10-x11))<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = UINT16_MAX;
	static uint32_t x14 = UINT32_MAX;
	int8_t x16 = INT8_MIN;

	t3 = ((x13==(x14-x15))<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = 342714641771LL;
	int64_t x22 = INT64_MAX;
	int32_t x23 = INT32_MAX;
	int16_t x24 = INT16_MAX;

	t4 = ((x21==(x22-x23))<x24);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x25 = INT16_MAX;
	volatile int32_t x26 = -14054;
	uint64_t x27 = UINT64_MAX;
	int8_t x28 = INT8_MAX;
	volatile int32_t t5 = -16366856;

	t5 = ((x25==(x26-x27))<x28);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = -1105;
	volatile uint16_t x30 = UINT16_MAX;
	uint16_t x31 = UINT16_MAX;
	uint16_t x32 = UINT16_MAX;
	static int32_t t6 = -688814;

	t6 = ((x29==(x30-x31))<x32);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x33 = UINT16_MAX;
	int32_t x36 = -1;
	int32_t t7 = -130894;

	t7 = ((x33==(x34-x35))<x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int64_t x41 = INT64_MIN;
	int32_t x44 = 276220107;
	static volatile int32_t t8 = 142416024;

	t8 = ((x41==(x42-x43))<x44);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x45 = UINT16_MAX;
	static int16_t x46 = 116;
	int16_t x47 = INT16_MIN;
	int16_t x48 = 51;
	int32_t t9 = 33666627;

	t9 = ((x45==(x46-x47))<x48);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x49 = -21010318;
	volatile int16_t x50 = INT16_MIN;
	uint32_t x51 = UINT32_MAX;
	uint8_t x52 = UINT8_MAX;
	static volatile int32_t t10 = -10;

	t10 = ((x49==(x50-x51))<x52);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x54 = 421650375467314920LL;
	uint32_t x55 = 32745U;
	uint16_t x56 = 28765U;
	volatile int32_t t11 = -16213626;

	t11 = ((x53==(x54-x55))<x56);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x60 = INT32_MAX;

	t12 = ((x57==(x58-x59))<x60);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x61 = -12286;
	volatile int8_t x62 = 6;
	int64_t x63 = -1LL;
	static int32_t x64 = -1;
	int32_t t13 = 10773163;

	t13 = ((x61==(x62-x63))<x64);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x67 = -1LL;

	t14 = ((x65==(x66-x67))<x68);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x69 = 508988064LL;
	int16_t x70 = INT16_MAX;
	volatile int8_t x72 = -3;
	int32_t t15 = -160952244;

	t15 = ((x69==(x70-x71))<x72);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int8_t x77 = -3;
	int8_t x79 = -1;
	int32_t x80 = 199;

	t16 = ((x77==(x78-x79))<x80);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x81 = -1;
	static uint32_t x82 = 309U;
	int16_t x83 = INT16_MIN;

	t17 = ((x81==(x82-x83))<x84);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x85 = 6U;
	uint16_t x86 = 13U;
	int16_t x87 = 361;
	static volatile int16_t x88 = INT16_MIN;

	t18 = ((x85==(x86-x87))<x88);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x90 = -41;
	int16_t x92 = INT16_MAX;
	int32_t t19 = 0;

	t19 = ((x89==(x90-x91))<x92);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x97 = INT32_MIN;
	int32_t x98 = -1;
	int64_t x99 = INT64_MIN;
	static int32_t x100 = INT32_MAX;
	volatile int32_t t20 = -79596;

	t20 = ((x97==(x98-x99))<x100);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x101 = UINT8_MAX;
	int8_t x102 = INT8_MIN;
	int8_t x103 = INT8_MAX;
	int8_t x104 = -15;
	volatile int32_t t21 = 127584542;

	t21 = ((x101==(x102-x103))<x104);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x105 = 15U;
	uint64_t x106 = 3993327LLU;
	int16_t x107 = INT16_MIN;

	t22 = ((x105==(x106-x107))<x108);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x109 = 234;
	int32_t x110 = INT32_MAX;
	uint64_t x111 = 95LLU;
	volatile int32_t t23 = -610669531;

	t23 = ((x109==(x110-x111))<x112);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int32_t x113 = INT32_MIN;
	int64_t x114 = -1384234893029977676LL;
	int8_t x115 = INT8_MAX;
	int32_t x116 = INT32_MIN;

	t24 = ((x113==(x114-x115))<x116);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x117 = 1;
	int16_t x118 = INT16_MIN;
	uint64_t x119 = 0LLU;
	volatile int32_t t25 = -587397;

	t25 = ((x117==(x118-x119))<x120);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x121 = -1;
	uint8_t x123 = UINT8_MAX;
	int8_t x124 = -11;
	int32_t t26 = 1484;

	t26 = ((x121==(x122-x123))<x124);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x125 = INT8_MAX;
	volatile int32_t t27 = -5963143;

	t27 = ((x125==(x126-x127))<x128);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x129 = 2;
	volatile int16_t x130 = INT16_MIN;
	static int16_t x131 = -10;
	int32_t t28 = -6441044;

	t28 = ((x129==(x130-x131))<x132);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x133 = INT32_MIN;
	volatile int8_t x135 = -3;
	static int64_t x136 = INT64_MIN;
	volatile int32_t t29 = 31529850;

	t29 = ((x133==(x134-x135))<x136);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x137 = INT32_MIN;
	uint32_t x138 = 359069U;
	static volatile int32_t x139 = -212939;
	uint64_t x140 = 959954LLU;
	volatile int32_t t30 = -3;

	t30 = ((x137==(x138-x139))<x140);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x143 = -1;
	static volatile int64_t x144 = INT64_MIN;
	volatile int32_t t31 = -111213100;

	t31 = ((x141==(x142-x143))<x144);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x145 = INT8_MAX;
	int64_t x147 = 54891848696163570LL;
	volatile int32_t t32 = -9966;

	t32 = ((x145==(x146-x147))<x148);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x149 = 151839594587LLU;
	int8_t x150 = -29;
	int32_t t33 = 43;

	t33 = ((x149==(x150-x151))<x152);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x153 = -1;
	int64_t x154 = INT64_MIN;
	static int8_t x155 = -1;
	volatile uint16_t x156 = 37U;

	t34 = ((x153==(x154-x155))<x156);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x157 = UINT8_MAX;
	int16_t x158 = INT16_MAX;
	int32_t x159 = -2817;
	int8_t x160 = INT8_MIN;

	t35 = ((x157==(x158-x159))<x160);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x161 = 1U;
	static uint8_t x162 = 1U;
	int16_t x163 = -1;
	int8_t x164 = 0;
	static volatile int32_t t36 = 12820;

	t36 = ((x161==(x162-x163))<x164);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x165 = INT64_MIN;
	int32_t x166 = -1;
	int16_t x167 = INT16_MAX;
	volatile int8_t x168 = -3;
	int32_t t37 = -515291977;

	t37 = ((x165==(x166-x167))<x168);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x169 = 0U;
	uint32_t x170 = 64619436U;
	uint32_t x171 = UINT32_MAX;
	int8_t x172 = 0;
	int32_t t38 = -24737;

	t38 = ((x169==(x170-x171))<x172);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x173 = 1536U;
	static int64_t x174 = -951262224368997601LL;
	volatile int32_t t39 = -1773915;

	t39 = ((x173==(x174-x175))<x176);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x179 = INT64_MAX;
	volatile uint16_t x180 = 76U;
	static int32_t t40 = -19307154;

	t40 = ((x177==(x178-x179))<x180);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x181 = -4976;
	static int64_t x183 = INT64_MAX;
	static int8_t x184 = -1;
	int32_t t41 = -443972;

	t41 = ((x181==(x182-x183))<x184);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int32_t x185 = -75;
	int8_t x186 = -16;
	volatile int16_t x188 = INT16_MIN;
	static volatile int32_t t42 = 6;

	t42 = ((x185==(x186-x187))<x188);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x189 = -3115827145LL;
	int32_t x191 = -1;
	int64_t x192 = -81289589LL;

	t43 = ((x189==(x190-x191))<x192);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int8_t x197 = INT8_MAX;
	static int16_t x198 = INT16_MAX;
	volatile int16_t x199 = INT16_MAX;
	int32_t x200 = 436;
	volatile int32_t t44 = 66196808;

	t44 = ((x197==(x198-x199))<x200);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x201 = INT32_MIN;
	uint16_t x202 = 4U;
	static uint32_t x203 = 1718390928U;
	volatile int32_t t45 = -4777106;

	t45 = ((x201==(x202-x203))<x204);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x205 = -1;
	static int32_t x206 = INT32_MIN;
	uint64_t x207 = UINT64_MAX;
	int16_t x208 = 0;
	int32_t t46 = 79769;

	t46 = ((x205==(x206-x207))<x208);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x209 = UINT16_MAX;
	uint16_t x210 = 3U;
	volatile int32_t t47 = 3;

	t47 = ((x209==(x210-x211))<x212);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x213 = -1;
	static uint64_t x215 = 7784422753307868LLU;
	int32_t t48 = 24;

	t48 = ((x213==(x214-x215))<x216);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x220 = UINT8_MAX;

	t49 = ((x217==(x218-x219))<x220);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x223 = UINT32_MAX;
	volatile int16_t x224 = 15;

	t50 = ((x221==(x222-x223))<x224);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x233 = 5649493U;
	static uint8_t x234 = 53U;
	int64_t x236 = 0LL;
	volatile int32_t t51 = -25740;

	t51 = ((x233==(x234-x235))<x236);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x237 = INT32_MAX;
	int8_t x238 = INT8_MIN;
	int32_t x239 = INT32_MIN;
	int32_t t52 = 3122;

	t52 = ((x237==(x238-x239))<x240);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x241 = INT32_MIN;
	int32_t x242 = 1653289;
	uint32_t x243 = 773U;
	int32_t x244 = INT32_MAX;

	t53 = ((x241==(x242-x243))<x244);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x245 = INT64_MAX;
	uint32_t x246 = 8766U;
	int64_t x247 = -1LL;
	static uint8_t x248 = 15U;
	int32_t t54 = -345834;

	t54 = ((x245==(x246-x247))<x248);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x249 = INT64_MIN;
	static int32_t x251 = -1;
	int16_t x252 = INT16_MAX;
	int32_t t55 = -12708403;

	t55 = ((x249==(x250-x251))<x252);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x253 = 154930;
	int16_t x254 = -1;
	volatile uint64_t x255 = 891LLU;
	volatile int32_t x256 = 730431507;
	volatile int32_t t56 = 941562;

	t56 = ((x253==(x254-x255))<x256);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x257 = 28492U;
	int32_t x258 = INT32_MIN;
	volatile int64_t x259 = INT64_MIN;
	static int8_t x260 = INT8_MIN;

	t57 = ((x257==(x258-x259))<x260);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x261 = 5;
	int32_t x262 = INT32_MIN;
	int16_t x263 = INT16_MIN;
	uint32_t x264 = 15472243U;
	volatile int32_t t58 = 2031446;

	t58 = ((x261==(x262-x263))<x264);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x269 = 5U;
	volatile int16_t x270 = INT16_MIN;
	int64_t x272 = 2LL;
	int32_t t59 = -16847840;

	t59 = ((x269==(x270-x271))<x272);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x277 = INT32_MAX;
	uint16_t x278 = 206U;
	volatile int32_t x280 = 186864338;
	int32_t t60 = -1;

	t60 = ((x277==(x278-x279))<x280);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x285 = 187U;
	uint64_t x286 = 20515736916LLU;
	uint16_t x287 = UINT16_MAX;
	int16_t x288 = INT16_MAX;
	volatile int32_t t61 = 1005;

	t61 = ((x285==(x286-x287))<x288);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x297 = INT64_MIN;
	volatile int64_t x299 = INT64_MIN;
	int32_t x300 = INT32_MAX;

	t62 = ((x297==(x298-x299))<x300);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x303 = INT64_MAX;
	volatile int64_t x304 = INT64_MIN;
	int32_t t63 = 7652;

	t63 = ((x301==(x302-x303))<x304);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x305 = -38;
	static int16_t x306 = INT16_MIN;
	int16_t x307 = INT16_MIN;
	volatile int16_t x308 = -1;

	t64 = ((x305==(x306-x307))<x308);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x313 = INT8_MAX;
	int64_t x314 = 117621282503LL;
	int8_t x315 = -1;
	volatile int64_t x316 = INT64_MIN;
	int32_t t65 = 1176;

	t65 = ((x313==(x314-x315))<x316);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x317 = INT64_MIN;
	uint16_t x318 = UINT16_MAX;
	uint8_t x319 = UINT8_MAX;
	volatile int32_t t66 = -382;

	t66 = ((x317==(x318-x319))<x320);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x325 = INT8_MIN;
	volatile uint64_t x328 = UINT64_MAX;
	int32_t t67 = -54496;

	t67 = ((x325==(x326-x327))<x328);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x329 = 0U;
	int32_t x331 = -183;
	volatile int32_t t68 = -3873988;

	t68 = ((x329==(x330-x331))<x332);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int16_t x333 = INT16_MAX;
	int8_t x334 = 60;
	int32_t x335 = INT32_MAX;
	volatile int8_t x336 = -20;
	static volatile int32_t t69 = -1;

	t69 = ((x333==(x334-x335))<x336);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x341 = INT64_MIN;
	uint32_t x342 = 3138U;
	uint16_t x343 = UINT16_MAX;
	int8_t x344 = INT8_MIN;
	int32_t t70 = 982056759;

	t70 = ((x341==(x342-x343))<x344);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x345 = -1;
	int16_t x346 = INT16_MIN;
	int16_t x347 = -2303;
	static int8_t x348 = INT8_MAX;
	int32_t t71 = -42954;

	t71 = ((x345==(x346-x347))<x348);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x349 = INT16_MAX;
	static uint64_t x350 = 53738673LLU;
	uint8_t x351 = UINT8_MAX;
	volatile int32_t t72 = 1;

	t72 = ((x349==(x350-x351))<x352);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x353 = -348LL;
	volatile uint32_t x354 = 5325791U;
	uint32_t x355 = 46U;
	volatile int32_t t73 = -6;

	t73 = ((x353==(x354-x355))<x356);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x358 = UINT8_MAX;
	static volatile int16_t x359 = 4067;
	static volatile int16_t x360 = INT16_MIN;
	int32_t t74 = 1;

	t74 = ((x357==(x358-x359))<x360);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x365 = 69U;
	volatile uint8_t x366 = 18U;
	volatile uint16_t x367 = 1825U;
	volatile int32_t t75 = -260489823;

	t75 = ((x365==(x366-x367))<x368);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x369 = INT64_MAX;
	volatile int32_t x370 = 22833287;
	static int64_t x371 = -1LL;
	uint8_t x372 = 4U;
	volatile int32_t t76 = -1444099;

	t76 = ((x369==(x370-x371))<x372);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x373 = INT8_MIN;
	int32_t x374 = INT32_MAX;
	int16_t x375 = INT16_MAX;
	volatile int16_t x376 = INT16_MAX;
	volatile int32_t t77 = 68258;

	t77 = ((x373==(x374-x375))<x376);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x378 = UINT8_MAX;
	uint32_t x379 = 15194U;
	static uint32_t x380 = UINT32_MAX;
	int32_t t78 = 44;

	t78 = ((x377==(x378-x379))<x380);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x381 = 7U;
	int32_t x382 = INT32_MIN;
	uint64_t x383 = 612468402LLU;
	volatile int32_t t79 = 660105;

	t79 = ((x381==(x382-x383))<x384);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x389 = INT16_MIN;
	static int8_t x391 = -5;
	uint64_t x392 = UINT64_MAX;
	static volatile int32_t t80 = 22032871;

	t80 = ((x389==(x390-x391))<x392);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x393 = INT64_MAX;
	int8_t x395 = INT8_MIN;
	int16_t x396 = INT16_MAX;
	int32_t t81 = -98;

	t81 = ((x393==(x394-x395))<x396);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x397 = INT64_MIN;
	volatile int8_t x398 = INT8_MIN;
	static int32_t x399 = -1;
	uint16_t x400 = UINT16_MAX;
	volatile int32_t t82 = -12;

	t82 = ((x397==(x398-x399))<x400);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x401 = 0U;
	int16_t x402 = 917;
	volatile uint8_t x403 = 7U;
	uint8_t x404 = 69U;
	volatile int32_t t83 = 20609579;

	t83 = ((x401==(x402-x403))<x404);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x413 = -1;
	int16_t x414 = -1;
	int8_t x415 = -1;
	int8_t x416 = INT8_MAX;
	int32_t t84 = 629334;

	t84 = ((x413==(x414-x415))<x416);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x417 = INT32_MAX;
	int16_t x418 = INT16_MAX;
	static uint64_t x419 = 118631LLU;

	t85 = ((x417==(x418-x419))<x420);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x421 = UINT32_MAX;
	uint32_t x422 = 11228526U;
	uint8_t x423 = UINT8_MAX;
	int64_t x424 = -1LL;
	volatile int32_t t86 = 0;

	t86 = ((x421==(x422-x423))<x424);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x425 = INT32_MIN;
	int8_t x427 = INT8_MAX;
	volatile int32_t x428 = INT32_MAX;
	int32_t t87 = -84135044;

	t87 = ((x425==(x426-x427))<x428);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x429 = 51623043LL;
	int32_t x430 = -1;
	static uint32_t x432 = 524932688U;
	volatile int32_t t88 = -38;

	t88 = ((x429==(x430-x431))<x432);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x437 = -54;
	static volatile int8_t x438 = 1;
	static uint32_t x440 = 116U;
	volatile int32_t t89 = -231;

	t89 = ((x437==(x438-x439))<x440);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x441 = 233633516694762LLU;
	int16_t x443 = INT16_MAX;
	static int8_t x444 = INT8_MIN;
	static int32_t t90 = 2201;

	t90 = ((x441==(x442-x443))<x444);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x449 = UINT8_MAX;
	volatile int64_t x450 = INT64_MIN;
	static int8_t x452 = -1;
	static int32_t t91 = 922289;

	t91 = ((x449==(x450-x451))<x452);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x454 = UINT8_MAX;
	int64_t x455 = -1LL;
	uint64_t x456 = 249641392266794097LLU;
	int32_t t92 = -494403;

	t92 = ((x453==(x454-x455))<x456);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x457 = 25U;
	static int16_t x458 = 1;
	static int8_t x459 = 2;
	int32_t t93 = 3689;

	t93 = ((x457==(x458-x459))<x460);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x461 = 8;
	int16_t x462 = INT16_MAX;
	int32_t x463 = 2622961;
	int16_t x464 = INT16_MIN;
	int32_t t94 = 883;

	t94 = ((x461==(x462-x463))<x464);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x465 = INT8_MIN;
	int32_t x467 = INT32_MAX;
	int32_t t95 = -45539548;

	t95 = ((x465==(x466-x467))<x468);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x469 = 0;
	uint16_t x472 = UINT16_MAX;
	static int32_t t96 = -50;

	t96 = ((x469==(x470-x471))<x472);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x474 = -1;
	int8_t x475 = INT8_MAX;
	uint8_t x476 = 4U;
	int32_t t97 = -15251602;

	t97 = ((x473==(x474-x475))<x476);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x477 = 3U;
	int16_t x478 = 14599;
	uint8_t x479 = 92U;
	static int16_t x480 = INT16_MIN;
	int32_t t98 = 19385;

	t98 = ((x477==(x478-x479))<x480);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x482 = -1;
	int64_t x484 = -1LL;
	volatile int32_t t99 = 4434;

	t99 = ((x481==(x482-x483))<x484);

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

