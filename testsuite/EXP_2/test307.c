#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x2 = -9463832LL;
static int64_t x4 = INT64_MIN;
uint32_t x5 = 3316716U;
volatile uint8_t x6 = 15U;
uint8_t x15 = UINT8_MAX;
volatile uint16_t x25 = 1U;
volatile int8_t x27 = INT8_MIN;
int64_t x30 = -1579524016LL;
static int16_t x32 = INT16_MAX;
volatile int32_t t5 = 208477;
uint8_t x36 = 19U;
volatile uint64_t x38 = UINT64_MAX;
int8_t x42 = INT8_MIN;
volatile uint64_t x43 = 153LLU;
volatile int32_t t8 = 88026062;
int32_t x56 = INT32_MIN;
int32_t t10 = -75439;
uint16_t x61 = 307U;
int8_t x64 = -1;
volatile int64_t x66 = -1LL;
int32_t x77 = -1;
int32_t x78 = -1;
uint64_t x82 = UINT64_MAX;
uint8_t x84 = 42U;
static uint8_t x90 = UINT8_MAX;
int32_t t21 = -2;
volatile int32_t t25 = -316049734;
volatile uint64_t x137 = 29230546001915995LLU;
volatile int32_t t31 = -1;
int32_t x164 = 117;
static int64_t x165 = INT64_MAX;
int64_t x166 = INT64_MAX;
int32_t t33 = 41;
static int32_t x181 = 291;
uint16_t x184 = UINT16_MAX;
static int16_t x185 = -1;
uint64_t x189 = UINT64_MAX;
volatile int8_t x194 = INT8_MAX;
int32_t x196 = -602805801;
volatile int32_t x197 = INT32_MAX;
uint8_t x201 = 26U;
static int8_t x204 = -1;
uint16_t x210 = 32U;
volatile int64_t x215 = -1LL;
int8_t x225 = -1;
uint64_t x234 = 246697423951200421LLU;
uint64_t x241 = 109644980003622LLU;
int64_t x244 = -1LL;
static volatile uint64_t x246 = 2106442062LLU;
int16_t x252 = -639;
uint32_t x257 = UINT32_MAX;
uint64_t x258 = 314976301574660LLU;
int8_t x259 = 56;
static volatile uint64_t x262 = 186LLU;
static volatile int32_t t53 = 571443795;
uint8_t x268 = UINT8_MAX;
int32_t t54 = 191089;
volatile int64_t x276 = INT64_MAX;
int8_t x284 = INT8_MIN;
int32_t x293 = INT32_MAX;
int8_t x296 = 39;
int16_t x304 = INT16_MIN;
int32_t x311 = -1;
volatile uint16_t x318 = 12U;
uint32_t x320 = 1042744U;
volatile int32_t t66 = -702;
int16_t x329 = INT16_MIN;
int8_t x330 = 12;
static uint16_t x333 = 4622U;
int64_t x337 = 1LL;
uint64_t x342 = 149612364249LLU;
int32_t x347 = INT32_MIN;
uint64_t x348 = 8LLU;
static uint16_t x349 = 96U;
int8_t x350 = -1;
uint64_t x352 = UINT64_MAX;
static volatile int16_t x356 = -3;
uint32_t x361 = 46U;
static uint64_t x363 = 14501LLU;
volatile int32_t t77 = -656972924;
int32_t x367 = INT32_MIN;
uint64_t x371 = 68167LLU;
int8_t x376 = INT8_MIN;
int8_t x380 = INT8_MIN;
int32_t x393 = INT32_MAX;
static uint32_t x396 = 178283U;
int32_t t84 = -117;
uint32_t x400 = 86U;
uint16_t x401 = 1U;
uint32_t x402 = 1311U;
static uint8_t x404 = 26U;
uint64_t x405 = 20394966384LLU;
uint64_t x407 = UINT64_MAX;
int64_t x413 = 62LL;
static uint64_t x414 = 2429177028123557LLU;
int16_t x415 = -1;
static int64_t x416 = INT64_MAX;
volatile int32_t t91 = 12704;
uint8_t x431 = 3U;
int64_t x434 = INT64_MIN;
int32_t t94 = 221;
int64_t x439 = INT64_MIN;
uint32_t x450 = UINT32_MAX;


void f0(void) {
	volatile int8_t x1 = -51;
	int32_t x3 = -50;
	int32_t t0 = -3800850;

	t0 = ((x1&(x2-x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x7 = -16LL;
	int32_t x8 = INT32_MIN;
	volatile int32_t t1 = 1502203;

	t1 = ((x5&(x6-x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x13 = 64983517U;
	uint16_t x14 = 3U;
	volatile int16_t x16 = INT16_MIN;
	static volatile int32_t t2 = 940;

	t2 = ((x13&(x14-x15))==x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x17 = UINT16_MAX;
	int32_t x18 = -445018015;
	volatile uint32_t x19 = 764737216U;
	int64_t x20 = -347020609205LL;
	volatile int32_t t3 = -156;

	t3 = ((x17&(x18-x19))==x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x26 = INT64_MIN;
	static uint16_t x28 = 2U;
	volatile int32_t t4 = 31;

	t4 = ((x25&(x26-x27))==x28);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x29 = INT32_MAX;
	uint16_t x31 = UINT16_MAX;

	t5 = ((x29&(x30-x31))==x32);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x33 = 18U;
	static int8_t x34 = 6;
	volatile uint8_t x35 = 28U;
	int32_t t6 = 19745;

	t6 = ((x33&(x34-x35))==x36);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x37 = 1;
	static int16_t x39 = -12469;
	int16_t x40 = -1;
	static volatile int32_t t7 = -137131;

	t7 = ((x37&(x38-x39))==x40);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x41 = UINT16_MAX;
	static int16_t x44 = INT16_MAX;

	t8 = ((x41&(x42-x43))==x44);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x45 = INT8_MAX;
	static int16_t x46 = INT16_MIN;
	uint8_t x47 = UINT8_MAX;
	volatile int32_t x48 = 1891431;
	static int32_t t9 = 2;

	t9 = ((x45&(x46-x47))==x48);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x53 = UINT16_MAX;
	volatile int8_t x54 = -1;
	int16_t x55 = -1;

	t10 = ((x53&(x54-x55))==x56);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x57 = UINT64_MAX;
	int8_t x58 = INT8_MIN;
	uint32_t x59 = 248U;
	int8_t x60 = -5;
	volatile int32_t t11 = 68914;

	t11 = ((x57&(x58-x59))==x60);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x62 = INT16_MIN;
	static uint16_t x63 = 1U;
	int32_t t12 = 31;

	t12 = ((x61&(x62-x63))==x64);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x65 = INT8_MIN;
	static uint8_t x67 = 1U;
	int16_t x68 = -206;
	volatile int32_t t13 = 11652530;

	t13 = ((x65&(x66-x67))==x68);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x69 = -15;
	int64_t x70 = INT64_MIN;
	uint8_t x71 = 0U;
	static volatile uint16_t x72 = 28561U;
	volatile int32_t t14 = -18;

	t14 = ((x69&(x70-x71))==x72);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x79 = UINT32_MAX;
	int8_t x80 = INT8_MIN;
	volatile int32_t t15 = 20634618;

	t15 = ((x77&(x78-x79))==x80);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x81 = INT32_MIN;
	int16_t x83 = -1;
	int32_t t16 = -1;

	t16 = ((x81&(x82-x83))==x84);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int8_t x85 = -9;
	uint8_t x86 = UINT8_MAX;
	uint64_t x87 = 823LLU;
	int64_t x88 = INT64_MIN;
	volatile int32_t t17 = 82437428;

	t17 = ((x85&(x86-x87))==x88);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x89 = INT64_MIN;
	static volatile int64_t x91 = -7544440681LL;
	uint64_t x92 = 9LLU;
	volatile int32_t t18 = 649854914;

	t18 = ((x89&(x90-x91))==x92);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x93 = 0;
	int32_t x94 = INT32_MIN;
	int32_t x95 = INT32_MIN;
	static volatile int8_t x96 = -1;
	static int32_t t19 = 141390930;

	t19 = ((x93&(x94-x95))==x96);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x97 = UINT64_MAX;
	uint8_t x98 = UINT8_MAX;
	int64_t x99 = -607853807LL;
	int32_t x100 = INT32_MIN;
	volatile int32_t t20 = -69647;

	t20 = ((x97&(x98-x99))==x100);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x101 = INT32_MIN;
	int8_t x102 = -1;
	uint16_t x103 = 263U;
	int32_t x104 = INT32_MIN;

	t21 = ((x101&(x102-x103))==x104);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x105 = INT16_MAX;
	int16_t x106 = -10839;
	static uint32_t x107 = UINT32_MAX;
	int32_t x108 = -1;
	int32_t t22 = 840;

	t22 = ((x105&(x106-x107))==x108);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x109 = INT32_MIN;
	uint16_t x110 = 72U;
	int16_t x111 = INT16_MIN;
	int8_t x112 = INT8_MIN;
	int32_t t23 = -97;

	t23 = ((x109&(x110-x111))==x112);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x113 = -1;
	volatile uint8_t x114 = 0U;
	static int32_t x115 = -3;
	uint8_t x116 = 23U;
	int32_t t24 = -134357;

	t24 = ((x113&(x114-x115))==x116);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x121 = UINT16_MAX;
	static int8_t x122 = -1;
	int32_t x123 = INT32_MIN;
	volatile int8_t x124 = INT8_MAX;

	t25 = ((x121&(x122-x123))==x124);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x129 = INT64_MIN;
	int32_t x130 = 427443376;
	int16_t x131 = 0;
	int16_t x132 = INT16_MIN;
	volatile int32_t t26 = 7;

	t26 = ((x129&(x130-x131))==x132);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x133 = -1;
	volatile uint32_t x134 = UINT32_MAX;
	static int8_t x135 = INT8_MIN;
	volatile uint64_t x136 = 82540LLU;
	int32_t t27 = -228628;

	t27 = ((x133&(x134-x135))==x136);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int32_t x138 = -1;
	int32_t x139 = -1;
	int32_t x140 = -1;
	volatile int32_t t28 = -5418;

	t28 = ((x137&(x138-x139))==x140);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x141 = INT64_MIN;
	int16_t x142 = -1;
	volatile int8_t x143 = INT8_MAX;
	volatile int64_t x144 = -21LL;
	static int32_t t29 = 17324;

	t29 = ((x141&(x142-x143))==x144);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x145 = 74U;
	static volatile uint8_t x146 = 6U;
	uint16_t x147 = 4U;
	static uint16_t x148 = 1295U;
	volatile int32_t t30 = 4;

	t30 = ((x145&(x146-x147))==x148);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x153 = UINT8_MAX;
	int8_t x154 = INT8_MIN;
	int16_t x155 = INT16_MIN;
	static uint64_t x156 = UINT64_MAX;

	t31 = ((x153&(x154-x155))==x156);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x161 = 153U;
	int64_t x162 = INT64_MIN;
	uint64_t x163 = UINT64_MAX;
	volatile int32_t t32 = -6203603;

	t32 = ((x161&(x162-x163))==x164);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x167 = UINT8_MAX;
	uint16_t x168 = UINT16_MAX;

	t33 = ((x165&(x166-x167))==x168);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x173 = 58U;
	uint32_t x174 = UINT32_MAX;
	volatile uint8_t x175 = UINT8_MAX;
	volatile uint16_t x176 = UINT16_MAX;
	int32_t t34 = 1554;

	t34 = ((x173&(x174-x175))==x176);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x182 = -1;
	int16_t x183 = INT16_MAX;
	volatile int32_t t35 = 40;

	t35 = ((x181&(x182-x183))==x184);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x186 = INT32_MIN;
	int16_t x187 = INT16_MIN;
	static uint8_t x188 = 23U;
	volatile int32_t t36 = 26839484;

	t36 = ((x185&(x186-x187))==x188);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x190 = -1;
	int64_t x191 = -1LL;
	int32_t x192 = INT32_MIN;
	int32_t t37 = -1025;

	t37 = ((x189&(x190-x191))==x192);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x193 = 920266630U;
	uint32_t x195 = 1U;
	volatile int32_t t38 = -24223377;

	t38 = ((x193&(x194-x195))==x196);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x198 = 106U;
	uint8_t x199 = 1U;
	uint32_t x200 = 0U;
	static int32_t t39 = -9;

	t39 = ((x197&(x198-x199))==x200);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x202 = 3U;
	int64_t x203 = -261306545902499359LL;
	static int32_t t40 = -2319665;

	t40 = ((x201&(x202-x203))==x204);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x205 = 29U;
	volatile int8_t x206 = INT8_MIN;
	int16_t x207 = -1;
	int16_t x208 = INT16_MIN;
	volatile int32_t t41 = -23;

	t41 = ((x205&(x206-x207))==x208);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x209 = 1281;
	int16_t x211 = INT16_MAX;
	static int16_t x212 = -1;
	volatile int32_t t42 = 0;

	t42 = ((x209&(x210-x211))==x212);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x213 = -181528;
	volatile uint64_t x214 = 34634349LLU;
	int8_t x216 = 4;
	int32_t t43 = 13459054;

	t43 = ((x213&(x214-x215))==x216);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x217 = UINT8_MAX;
	int8_t x218 = 1;
	static int32_t x219 = -1;
	uint32_t x220 = 32027U;
	volatile int32_t t44 = -14;

	t44 = ((x217&(x218-x219))==x220);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x221 = INT32_MIN;
	static uint16_t x222 = UINT16_MAX;
	static uint16_t x223 = 27U;
	static int32_t x224 = INT32_MAX;
	volatile int32_t t45 = 7674698;

	t45 = ((x221&(x222-x223))==x224);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x226 = 0LLU;
	static volatile int8_t x227 = -1;
	volatile uint16_t x228 = 893U;
	volatile int32_t t46 = -1;

	t46 = ((x225&(x226-x227))==x228);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x233 = 2416420472435591LLU;
	int8_t x235 = INT8_MIN;
	static int8_t x236 = INT8_MIN;
	volatile int32_t t47 = -1;

	t47 = ((x233&(x234-x235))==x236);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x237 = INT8_MIN;
	uint16_t x238 = 1933U;
	static volatile int16_t x239 = 115;
	volatile uint8_t x240 = 0U;
	static int32_t t48 = 40;

	t48 = ((x237&(x238-x239))==x240);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x242 = UINT64_MAX;
	int32_t x243 = INT32_MAX;
	volatile int32_t t49 = 969;

	t49 = ((x241&(x242-x243))==x244);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x245 = UINT16_MAX;
	int16_t x247 = INT16_MAX;
	uint64_t x248 = 1333967861525831531LLU;
	int32_t t50 = -47259;

	t50 = ((x245&(x246-x247))==x248);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int16_t x249 = -10;
	uint64_t x250 = UINT64_MAX;
	int64_t x251 = INT64_MIN;
	int32_t t51 = 53598000;

	t51 = ((x249&(x250-x251))==x252);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x260 = INT64_MIN;
	int32_t t52 = -61;

	t52 = ((x257&(x258-x259))==x260);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x261 = UINT8_MAX;
	uint32_t x263 = 104192U;
	int64_t x264 = -1LL;

	t53 = ((x261&(x262-x263))==x264);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x265 = INT16_MIN;
	int8_t x266 = -6;
	uint8_t x267 = 0U;

	t54 = ((x265&(x266-x267))==x268);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x269 = INT8_MIN;
	int16_t x270 = 49;
	int8_t x271 = -1;
	volatile uint16_t x272 = UINT16_MAX;
	volatile int32_t t55 = -29462;

	t55 = ((x269&(x270-x271))==x272);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x273 = INT64_MAX;
	uint16_t x274 = 42U;
	volatile int64_t x275 = 3296LL;
	volatile int32_t t56 = -392124;

	t56 = ((x273&(x274-x275))==x276);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x277 = -1333;
	static int32_t x278 = -1;
	static uint64_t x279 = 14576571079444LLU;
	int64_t x280 = INT64_MIN;
	int32_t t57 = -95662;

	t57 = ((x277&(x278-x279))==x280);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x281 = 966U;
	int64_t x282 = -212326119LL;
	int8_t x283 = 1;
	int32_t t58 = 80;

	t58 = ((x281&(x282-x283))==x284);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x285 = UINT8_MAX;
	volatile int64_t x286 = 91916LL;
	int16_t x287 = INT16_MIN;
	static int64_t x288 = -473780751LL;
	volatile int32_t t59 = 17586;

	t59 = ((x285&(x286-x287))==x288);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x289 = 426104926137513108LLU;
	int16_t x290 = INT16_MAX;
	int16_t x291 = 7261;
	volatile int64_t x292 = -319195463253191LL;
	int32_t t60 = -23125;

	t60 = ((x289&(x290-x291))==x292);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x294 = 0;
	static volatile int8_t x295 = 3;
	volatile int32_t t61 = -204;

	t61 = ((x293&(x294-x295))==x296);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x297 = INT16_MAX;
	int64_t x298 = -1069549730199073296LL;
	int16_t x299 = -1;
	int16_t x300 = INT16_MIN;
	int32_t t62 = 25885074;

	t62 = ((x297&(x298-x299))==x300);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x301 = INT8_MAX;
	int16_t x302 = 498;
	volatile int64_t x303 = -1LL;
	volatile int32_t t63 = -13;

	t63 = ((x301&(x302-x303))==x304);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x305 = 4LLU;
	volatile int8_t x306 = -1;
	int32_t x307 = INT32_MIN;
	int64_t x308 = INT64_MAX;
	int32_t t64 = 296535;

	t64 = ((x305&(x306-x307))==x308);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x309 = INT8_MIN;
	static int16_t x310 = 356;
	int8_t x312 = -1;
	volatile int32_t t65 = 49547;

	t65 = ((x309&(x310-x311))==x312);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x317 = UINT64_MAX;
	volatile int16_t x319 = INT16_MAX;

	t66 = ((x317&(x318-x319))==x320);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x321 = INT32_MAX;
	int8_t x322 = 2;
	int64_t x323 = -1LL;
	int32_t x324 = INT32_MAX;
	static volatile int32_t t67 = -36638381;

	t67 = ((x321&(x322-x323))==x324);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x325 = INT8_MIN;
	volatile int32_t x326 = -449;
	uint32_t x327 = 324U;
	int32_t x328 = INT32_MIN;
	int32_t t68 = 0;

	t68 = ((x325&(x326-x327))==x328);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x331 = 1303LL;
	int32_t x332 = -112;
	int32_t t69 = 3461638;

	t69 = ((x329&(x330-x331))==x332);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x334 = UINT16_MAX;
	static int16_t x335 = INT16_MAX;
	uint8_t x336 = UINT8_MAX;
	volatile int32_t t70 = 243732106;

	t70 = ((x333&(x334-x335))==x336);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x338 = -202;
	uint8_t x339 = 3U;
	uint16_t x340 = 830U;
	int32_t t71 = 1671683;

	t71 = ((x337&(x338-x339))==x340);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x341 = -1;
	static int64_t x343 = INT64_MIN;
	uint64_t x344 = 147730293054226539LLU;
	volatile int32_t t72 = 4;

	t72 = ((x341&(x342-x343))==x344);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x345 = INT32_MIN;
	uint32_t x346 = 10396363U;
	int32_t t73 = -37;

	t73 = ((x345&(x346-x347))==x348);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x351 = UINT32_MAX;
	volatile int32_t t74 = -375186209;

	t74 = ((x349&(x350-x351))==x352);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x353 = INT8_MIN;
	int16_t x354 = -14;
	static int8_t x355 = -1;
	volatile int32_t t75 = -1761852;

	t75 = ((x353&(x354-x355))==x356);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x357 = 1880812;
	volatile int64_t x358 = INT64_MIN;
	int8_t x359 = INT8_MIN;
	int8_t x360 = INT8_MAX;
	volatile int32_t t76 = -6071;

	t76 = ((x357&(x358-x359))==x360);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x362 = 10U;
	uint64_t x364 = 101024595918106864LLU;

	t77 = ((x361&(x362-x363))==x364);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x365 = INT8_MAX;
	static int32_t x366 = -1;
	uint8_t x368 = UINT8_MAX;
	int32_t t78 = -238193939;

	t78 = ((x365&(x366-x367))==x368);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x369 = UINT8_MAX;
	static int8_t x370 = INT8_MIN;
	static volatile int8_t x372 = -1;
	volatile int32_t t79 = 112316095;

	t79 = ((x369&(x370-x371))==x372);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x373 = INT16_MAX;
	static volatile int16_t x374 = INT16_MAX;
	int16_t x375 = -131;
	volatile int32_t t80 = -3;

	t80 = ((x373&(x374-x375))==x376);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x377 = INT16_MIN;
	uint32_t x378 = 44121U;
	uint16_t x379 = 1U;
	int32_t t81 = 1920;

	t81 = ((x377&(x378-x379))==x380);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x381 = -1;
	uint16_t x382 = 3868U;
	static volatile int16_t x383 = INT16_MAX;
	volatile int16_t x384 = -1;
	volatile int32_t t82 = -6;

	t82 = ((x381&(x382-x383))==x384);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x385 = INT16_MAX;
	int8_t x386 = INT8_MIN;
	volatile uint8_t x387 = 0U;
	uint32_t x388 = 14575U;
	volatile int32_t t83 = -175;

	t83 = ((x385&(x386-x387))==x388);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x394 = 52U;
	static uint32_t x395 = 979888053U;

	t84 = ((x393&(x394-x395))==x396);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x397 = 248U;
	int8_t x398 = INT8_MAX;
	volatile int16_t x399 = -1;
	int32_t t85 = -910069;

	t85 = ((x397&(x398-x399))==x400);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x403 = INT8_MIN;
	volatile int32_t t86 = -13658578;

	t86 = ((x401&(x402-x403))==x404);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x406 = UINT16_MAX;
	volatile int16_t x408 = -1;
	volatile int32_t t87 = -21919;

	t87 = ((x405&(x406-x407))==x408);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x409 = UINT8_MAX;
	int32_t x410 = INT32_MIN;
	int64_t x411 = INT64_MIN;
	volatile uint32_t x412 = UINT32_MAX;
	static int32_t t88 = 23833;

	t88 = ((x409&(x410-x411))==x412);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t t89 = 1;

	t89 = ((x413&(x414-x415))==x416);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x417 = INT64_MIN;
	uint16_t x418 = 17U;
	int8_t x419 = -1;
	volatile int8_t x420 = 31;
	int32_t t90 = -461384;

	t90 = ((x417&(x418-x419))==x420);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x421 = -1;
	volatile int32_t x422 = INT32_MIN;
	int32_t x423 = INT32_MIN;
	static int16_t x424 = INT16_MIN;

	t91 = ((x421&(x422-x423))==x424);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x425 = 0U;
	uint64_t x426 = UINT64_MAX;
	int16_t x427 = INT16_MIN;
	int8_t x428 = INT8_MIN;
	int32_t t92 = -248908797;

	t92 = ((x425&(x426-x427))==x428);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x429 = INT32_MAX;
	uint16_t x430 = 1U;
	uint64_t x432 = UINT64_MAX;
	int32_t t93 = -1;

	t93 = ((x429&(x430-x431))==x432);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x433 = 488U;
	static uint64_t x435 = UINT64_MAX;
	int16_t x436 = -25;

	t94 = ((x433&(x434-x435))==x436);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x437 = 12;
	uint64_t x438 = UINT64_MAX;
	int16_t x440 = INT16_MAX;
	volatile int32_t t95 = -52944;

	t95 = ((x437&(x438-x439))==x440);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x445 = 42310;
	int16_t x446 = INT16_MIN;
	int16_t x447 = INT16_MIN;
	uint64_t x448 = 102LLU;
	volatile int32_t t96 = -3839458;

	t96 = ((x445&(x446-x447))==x448);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int32_t x449 = 57492756;
	volatile int32_t x451 = -473;
	static int64_t x452 = -3LL;
	int32_t t97 = 25;

	t97 = ((x449&(x450-x451))==x452);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x453 = -1;
	uint64_t x454 = UINT64_MAX;
	static uint16_t x455 = 85U;
	volatile int32_t x456 = INT32_MAX;
	volatile int32_t t98 = -4993088;

	t98 = ((x453&(x454-x455))==x456);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x457 = -3807061445LL;
	volatile int32_t x458 = -1;
	int32_t x459 = -1;
	uint32_t x460 = 1746U;
	int32_t t99 = -1209;

	t99 = ((x457&(x458-x459))==x460);

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

