#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x10 = -1;
static int16_t x20 = INT16_MIN;
volatile int32_t x25 = INT32_MIN;
int16_t x34 = -1;
int32_t x37 = -1;
uint64_t t9 = 61715023LLU;
int32_t x41 = INT32_MAX;
volatile int16_t x43 = -1;
volatile int16_t x54 = -5;
int64_t x58 = INT64_MIN;
static volatile uint32_t t14 = 11U;
int8_t x69 = INT8_MIN;
int64_t x78 = INT64_MAX;
uint8_t x87 = 1U;
int8_t x88 = -1;
int32_t x91 = -1;
static int32_t t19 = 34332;
int32_t x97 = -1055523;
volatile int32_t t20 = 7;
uint64_t x102 = UINT64_MAX;
volatile int32_t x104 = INT32_MAX;
static int8_t x108 = INT8_MIN;
volatile int32_t t22 = -100;
int8_t x112 = -1;
static int8_t x122 = 0;
static uint32_t x142 = UINT32_MAX;
static int8_t x147 = -1;
uint16_t x148 = 7U;
static int16_t x168 = -2;
volatile int32_t t32 = -2207;
int32_t x177 = INT32_MAX;
static int32_t x180 = 7688764;
static volatile int32_t t35 = 3005167;
int32_t x187 = INT32_MIN;
static int64_t x190 = -1LL;
int8_t x193 = -1;
static uint32_t x195 = 9207743U;
uint16_t x196 = 448U;
int64_t x200 = INT64_MIN;
int64_t x201 = 1721310137LL;
uint16_t x202 = 2U;
uint8_t x211 = 0U;
int16_t x229 = INT16_MIN;
volatile uint32_t x236 = UINT32_MAX;
volatile uint64_t t48 = 736063LLU;
volatile uint64_t t49 = 11363575619LLU;
volatile uint16_t x247 = 11468U;
uint16_t x248 = UINT16_MAX;
int16_t x252 = 809;
uint64_t x258 = 7LLU;
uint64_t x262 = 14617875LLU;
uint16_t x263 = 1U;
static uint8_t x265 = UINT8_MAX;
int64_t x268 = -25955284833LL;
int16_t x269 = INT16_MIN;
static int32_t x276 = -1;
int32_t t57 = 1842107;
volatile uint16_t x277 = UINT16_MAX;
static int32_t t58 = -1;
volatile int32_t x282 = -767371;
int64_t x285 = -2555203LL;
int32_t t60 = -97046738;
uint64_t x289 = UINT64_MAX;
int8_t x292 = INT8_MAX;
uint32_t x296 = UINT32_MAX;
int16_t x298 = 1;
uint32_t x310 = UINT32_MAX;
static int32_t t66 = -13615740;
static uint16_t x326 = 54U;
static uint32_t x331 = 397435U;
uint8_t x332 = UINT8_MAX;
int32_t t69 = 0;
int8_t x333 = 1;
uint32_t x345 = UINT32_MAX;
int32_t t72 = -2825270;
int32_t x350 = INT32_MAX;
static uint16_t x352 = 317U;
int8_t x355 = 1;
int16_t x358 = INT16_MIN;
int64_t x361 = -7466996LL;
volatile int8_t x362 = INT8_MIN;
uint64_t x365 = 13LLU;
uint64_t x378 = 8746192976488327LLU;
uint64_t t80 = 420094313822LLU;
int16_t x389 = INT16_MAX;
volatile int8_t x390 = 24;
volatile int32_t t82 = 1130;
int16_t x401 = INT16_MIN;
volatile int64_t t83 = 921466737LL;
int32_t x411 = INT32_MIN;
volatile int32_t x412 = 4243;
static int16_t x413 = -1;
static int8_t x422 = INT8_MIN;
int16_t x425 = -18;
static int32_t t88 = 821;
static int64_t x429 = -6955155625894745LL;
static uint64_t x432 = 817425LLU;
uint64_t x435 = 245498813790335LLU;
int16_t x437 = -1;
int64_t x438 = INT64_MIN;
uint64_t x442 = 194088LLU;
volatile int8_t x448 = -1;
uint32_t x450 = UINT32_MAX;
static volatile int32_t t94 = 0;
int16_t x453 = INT16_MIN;
uint32_t x454 = 28504U;
int8_t x457 = 25;
uint64_t x466 = 2LLU;
uint8_t x467 = 5U;
uint32_t x470 = UINT32_MAX;
uint8_t x471 = 2U;


void f0(void) {
	int64_t x1 = -900752424354223LL;
	static volatile uint32_t x2 = 69360720U;
	uint8_t x3 = 113U;
	int64_t x4 = -249512724502478532LL;
	int64_t t0 = -698615LL;

	t0 = (((x1-x2)<=x3)&x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	uint16_t x6 = UINT16_MAX;
	static uint16_t x7 = UINT16_MAX;
	volatile uint32_t x8 = UINT32_MAX;
	static uint32_t t1 = 946U;

	t1 = (((x5-x6)<=x7)&x8);

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	uint64_t x11 = 2489536016LLU;
	uint8_t x12 = 93U;
	volatile int32_t t2 = -934;

	t2 = (((x9-x10)<=x11)&x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x13 = UINT32_MAX;
	int64_t x14 = 4296LL;
	int32_t x15 = -1;
	static int8_t x16 = INT8_MIN;
	volatile int32_t t3 = 83;

	t3 = (((x13-x14)<=x15)&x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	int8_t x18 = -1;
	int16_t x19 = INT16_MAX;
	int32_t t4 = 154452;

	t4 = (((x17-x18)<=x19)&x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x21 = 1;
	int32_t x22 = -130486345;
	static uint8_t x23 = 0U;
	int8_t x24 = INT8_MIN;
	volatile int32_t t5 = 1;

	t5 = (((x21-x22)<=x23)&x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x26 = UINT64_MAX;
	int64_t x27 = INT64_MIN;
	uint16_t x28 = 70U;
	static volatile int32_t t6 = 64609;

	t6 = (((x25-x26)<=x27)&x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 2673U;
	int8_t x30 = -1;
	int64_t x31 = INT64_MAX;
	volatile int8_t x32 = -1;
	int32_t t7 = -2854158;

	t7 = (((x29-x30)<=x31)&x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 1413U;
	int8_t x35 = -22;
	int64_t x36 = -267240676LL;
	volatile int64_t t8 = 6114170718LL;

	t8 = (((x33-x34)<=x35)&x36);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x38 = INT64_MIN;
	volatile int16_t x39 = INT16_MAX;
	static uint64_t x40 = 19878113680927LLU;

	t9 = (((x37-x38)<=x39)&x40);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x42 = INT64_MAX;
	int32_t x44 = INT32_MIN;
	volatile int32_t t10 = 1;

	t10 = (((x41-x42)<=x43)&x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x53 = 0LLU;
	static uint64_t x55 = 819305786762873358LLU;
	int32_t x56 = INT32_MIN;
	int32_t t11 = 1;

	t11 = (((x53-x54)<=x55)&x56);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x57 = INT8_MIN;
	int32_t x59 = 20132;
	uint32_t x60 = 584U;
	volatile uint32_t t12 = 12960U;

	t12 = (((x57-x58)<=x59)&x60);

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x61 = UINT16_MAX;
	static int16_t x62 = INT16_MIN;
	int64_t x63 = 20928944080711LL;
	int32_t x64 = INT32_MIN;
	int32_t t13 = 66573033;

	t13 = (((x61-x62)<=x63)&x64);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x65 = INT16_MIN;
	volatile int64_t x66 = INT64_MIN;
	uint16_t x67 = UINT16_MAX;
	uint32_t x68 = UINT32_MAX;

	t14 = (((x65-x66)<=x67)&x68);

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x70 = 31860728U;
	volatile uint64_t x71 = 1541LLU;
	int8_t x72 = INT8_MAX;
	int32_t t15 = 957;

	t15 = (((x69-x70)<=x71)&x72);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x77 = 57000669920490LLU;
	uint64_t x79 = 69997575LLU;
	int32_t x80 = -1;
	int32_t t16 = 27706746;

	t16 = (((x77-x78)<=x79)&x80);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x85 = 1;
	int16_t x86 = -1;
	static int32_t t17 = -1975795;

	t17 = (((x85-x86)<=x87)&x88);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x89 = -1LL;
	int16_t x90 = INT16_MIN;
	int32_t x92 = INT32_MAX;
	volatile int32_t t18 = -3562;

	t18 = (((x89-x90)<=x91)&x92);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x93 = -1;
	int8_t x94 = INT8_MIN;
	int16_t x95 = -1;
	int16_t x96 = INT16_MAX;

	t19 = (((x93-x94)<=x95)&x96);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x98 = 121U;
	uint64_t x99 = 102980892999LLU;
	static volatile int8_t x100 = -1;

	t20 = (((x97-x98)<=x99)&x100);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x101 = INT8_MAX;
	static int64_t x103 = 36734805370572LL;
	static volatile int32_t t21 = -5175541;

	t21 = (((x101-x102)<=x103)&x104);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x105 = INT8_MIN;
	int8_t x106 = -1;
	int16_t x107 = -1;

	t22 = (((x105-x106)<=x107)&x108);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x109 = INT32_MIN;
	static int32_t x110 = -5656909;
	static int8_t x111 = INT8_MIN;
	static volatile int32_t t23 = 14779;

	t23 = (((x109-x110)<=x111)&x112);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x113 = INT16_MIN;
	int64_t x114 = 2024LL;
	int16_t x115 = INT16_MIN;
	int64_t x116 = INT64_MIN;
	volatile int64_t t24 = 8LL;

	t24 = (((x113-x114)<=x115)&x116);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x117 = 45;
	uint32_t x118 = 304U;
	uint64_t x119 = 535831092LLU;
	int8_t x120 = -44;
	static volatile int32_t t25 = 421;

	t25 = (((x117-x118)<=x119)&x120);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x121 = 26U;
	int16_t x123 = INT16_MIN;
	int64_t x124 = INT64_MIN;
	int64_t t26 = 7514LL;

	t26 = (((x121-x122)<=x123)&x124);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x129 = -1;
	static volatile uint32_t x130 = 795141U;
	volatile uint64_t x131 = 682LLU;
	int8_t x132 = -15;
	volatile int32_t t27 = -10910;

	t27 = (((x129-x130)<=x131)&x132);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x137 = -2;
	uint16_t x138 = UINT16_MAX;
	int32_t x139 = -1874;
	int32_t x140 = INT32_MIN;
	volatile int32_t t28 = 8523757;

	t28 = (((x137-x138)<=x139)&x140);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x141 = INT16_MIN;
	int32_t x143 = INT32_MIN;
	volatile int8_t x144 = -1;
	volatile int32_t t29 = 532;

	t29 = (((x141-x142)<=x143)&x144);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x145 = UINT64_MAX;
	uint8_t x146 = 125U;
	volatile int32_t t30 = -4685;

	t30 = (((x145-x146)<=x147)&x148);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x149 = 0U;
	int64_t x150 = INT64_MAX;
	int64_t x151 = -2493826862906238389LL;
	uint32_t x152 = 18U;
	uint32_t t31 = 347U;

	t31 = (((x149-x150)<=x151)&x152);

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x165 = -1LL;
	static int64_t x166 = -1LL;
	int32_t x167 = 2;

	t32 = (((x165-x166)<=x167)&x168);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint32_t x169 = 9U;
	uint16_t x170 = 0U;
	static int32_t x171 = -1;
	volatile int16_t x172 = -1;
	int32_t t33 = 85;

	t33 = (((x169-x170)<=x171)&x172);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x178 = 2LL;
	uint64_t x179 = 4296281083LLU;
	int32_t t34 = 71834512;

	t34 = (((x177-x178)<=x179)&x180);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x181 = 30;
	uint8_t x182 = 13U;
	uint64_t x183 = 0LLU;
	volatile uint8_t x184 = 98U;

	t35 = (((x181-x182)<=x183)&x184);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x185 = INT8_MAX;
	int8_t x186 = 4;
	static int8_t x188 = 3;
	volatile int32_t t36 = 61;

	t36 = (((x185-x186)<=x187)&x188);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x189 = INT8_MAX;
	volatile uint16_t x191 = UINT16_MAX;
	static int16_t x192 = -1;
	static int32_t t37 = -4966543;

	t37 = (((x189-x190)<=x191)&x192);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x194 = 619377U;
	static int32_t t38 = -232023;

	t38 = (((x193-x194)<=x195)&x196);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x197 = -55;
	uint64_t x198 = 208056289537LLU;
	static int64_t x199 = -1LL;
	int64_t t39 = -9LL;

	t39 = (((x197-x198)<=x199)&x200);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x203 = UINT16_MAX;
	volatile int16_t x204 = INT16_MAX;
	volatile int32_t t40 = -7265436;

	t40 = (((x201-x202)<=x203)&x204);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x205 = -1LL;
	int32_t x206 = INT32_MIN;
	static int32_t x207 = INT32_MAX;
	volatile int32_t x208 = -293000553;
	volatile int32_t t41 = 3405316;

	t41 = (((x205-x206)<=x207)&x208);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x209 = UINT16_MAX;
	uint16_t x210 = UINT16_MAX;
	int16_t x212 = 0;
	static int32_t t42 = 14;

	t42 = (((x209-x210)<=x211)&x212);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x213 = INT32_MIN;
	uint32_t x214 = 31U;
	static int16_t x215 = INT16_MIN;
	int64_t x216 = -1LL;
	volatile int64_t t43 = -139602276953926710LL;

	t43 = (((x213-x214)<=x215)&x216);

	if (t43 != 1LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x217 = INT8_MIN;
	volatile int32_t x218 = INT32_MIN;
	uint64_t x219 = UINT64_MAX;
	static uint64_t x220 = 164582878523LLU;
	volatile uint64_t t44 = 3797427444LLU;

	t44 = (((x217-x218)<=x219)&x220);

	if (t44 != 1LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x221 = -154221;
	uint32_t x222 = 73U;
	uint32_t x223 = UINT32_MAX;
	volatile int8_t x224 = -4;
	int32_t t45 = 82901388;

	t45 = (((x221-x222)<=x223)&x224);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x230 = 1;
	volatile int8_t x231 = -1;
	int16_t x232 = -1;
	volatile int32_t t46 = 99;

	t46 = (((x229-x230)<=x231)&x232);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x233 = 1507U;
	int8_t x234 = -1;
	static int64_t x235 = INT64_MIN;
	volatile uint32_t t47 = 9003810U;

	t47 = (((x233-x234)<=x235)&x236);

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x237 = -149;
	uint32_t x238 = 2U;
	volatile uint16_t x239 = 91U;
	volatile uint64_t x240 = 31892412129843588LLU;

	t48 = (((x237-x238)<=x239)&x240);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x241 = 3710U;
	int16_t x242 = -747;
	int8_t x243 = INT8_MIN;
	volatile uint64_t x244 = UINT64_MAX;

	t49 = (((x241-x242)<=x243)&x244);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x245 = 1;
	int64_t x246 = 1031LL;
	int32_t t50 = -1702;

	t50 = (((x245-x246)<=x247)&x248);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int64_t x249 = -4092082003833LL;
	int64_t x250 = -1LL;
	volatile int32_t x251 = INT32_MIN;
	volatile int32_t t51 = 85567010;

	t51 = (((x249-x250)<=x251)&x252);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x253 = INT16_MAX;
	uint16_t x254 = UINT16_MAX;
	volatile uint8_t x255 = 29U;
	int16_t x256 = 709;
	volatile int32_t t52 = -351452037;

	t52 = (((x253-x254)<=x255)&x256);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x257 = 32U;
	static volatile int8_t x259 = INT8_MIN;
	static volatile uint64_t x260 = 27936325105296549LLU;
	uint64_t t53 = 774226197676030478LLU;

	t53 = (((x257-x258)<=x259)&x260);

	if (t53 != 1LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x261 = -1LL;
	static volatile uint32_t x264 = UINT32_MAX;
	static volatile uint32_t t54 = 0U;

	t54 = (((x261-x262)<=x263)&x264);

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x266 = INT16_MAX;
	volatile int8_t x267 = INT8_MAX;
	volatile int64_t t55 = -126022725618855597LL;

	t55 = (((x265-x266)<=x267)&x268);

	if (t55 != 1LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint64_t x270 = 51384LLU;
	static uint64_t x271 = UINT64_MAX;
	static volatile int32_t x272 = 47852;
	volatile int32_t t56 = 33;

	t56 = (((x269-x270)<=x271)&x272);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int8_t x273 = -1;
	int32_t x274 = 1;
	int8_t x275 = INT8_MAX;

	t57 = (((x273-x274)<=x275)&x276);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x278 = 0;
	static volatile int64_t x279 = INT64_MIN;
	static int8_t x280 = -37;

	t58 = (((x277-x278)<=x279)&x280);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x281 = INT8_MAX;
	int8_t x283 = -10;
	uint8_t x284 = UINT8_MAX;
	volatile int32_t t59 = 154002313;

	t59 = (((x281-x282)<=x283)&x284);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x286 = 0U;
	uint64_t x287 = UINT64_MAX;
	int32_t x288 = 254;

	t60 = (((x285-x286)<=x287)&x288);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x290 = -1;
	volatile int32_t x291 = INT32_MIN;
	volatile int32_t t61 = -11304;

	t61 = (((x289-x290)<=x291)&x292);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x293 = 190LL;
	uint16_t x294 = 2U;
	static volatile int64_t x295 = 0LL;
	uint32_t t62 = 381719780U;

	t62 = (((x293-x294)<=x295)&x296);

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x297 = INT32_MAX;
	static int32_t x299 = -1;
	static int64_t x300 = INT64_MAX;
	int64_t t63 = -218792415LL;

	t63 = (((x297-x298)<=x299)&x300);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x301 = INT32_MIN;
	int8_t x302 = INT8_MIN;
	int64_t x303 = -1820668764176841490LL;
	uint32_t x304 = UINT32_MAX;
	uint32_t t64 = 720U;

	t64 = (((x301-x302)<=x303)&x304);

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x309 = -1LL;
	volatile int32_t x311 = 172137;
	volatile uint16_t x312 = 6926U;
	volatile int32_t t65 = -205;

	t65 = (((x309-x310)<=x311)&x312);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x313 = 939923421171LLU;
	int16_t x314 = INT16_MAX;
	volatile int8_t x315 = INT8_MIN;
	uint8_t x316 = UINT8_MAX;

	t66 = (((x313-x314)<=x315)&x316);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x317 = -1;
	static int16_t x318 = INT16_MIN;
	int8_t x319 = INT8_MIN;
	static int64_t x320 = INT64_MAX;
	static volatile int64_t t67 = -951240LL;

	t67 = (((x317-x318)<=x319)&x320);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x325 = -1LL;
	int64_t x327 = INT64_MIN;
	static uint16_t x328 = UINT16_MAX;
	int32_t t68 = 5357;

	t68 = (((x325-x326)<=x327)&x328);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x329 = 7908U;
	int16_t x330 = INT16_MIN;

	t69 = (((x329-x330)<=x331)&x332);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x334 = -1;
	uint16_t x335 = 1U;
	int8_t x336 = INT8_MAX;
	volatile int32_t t70 = -3854706;

	t70 = (((x333-x334)<=x335)&x336);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x337 = -8499929509466LL;
	uint8_t x338 = UINT8_MAX;
	int16_t x339 = -1;
	static uint32_t x340 = 50697911U;
	volatile uint32_t t71 = 10U;

	t71 = (((x337-x338)<=x339)&x340);

	if (t71 != 1U) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x346 = 188U;
	int16_t x347 = -144;
	int32_t x348 = INT32_MIN;

	t72 = (((x345-x346)<=x347)&x348);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint64_t x349 = 563848LLU;
	int16_t x351 = INT16_MIN;
	int32_t t73 = -166294626;

	t73 = (((x349-x350)<=x351)&x352);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x353 = -8;
	int8_t x354 = INT8_MAX;
	volatile int16_t x356 = INT16_MIN;
	volatile int32_t t74 = -115250;

	t74 = (((x353-x354)<=x355)&x356);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x357 = -1;
	static int64_t x359 = INT64_MIN;
	uint64_t x360 = 561360347098097356LLU;
	uint64_t t75 = 419LLU;

	t75 = (((x357-x358)<=x359)&x360);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x363 = INT8_MIN;
	volatile int64_t x364 = INT64_MIN;
	volatile int64_t t76 = 7528803LL;

	t76 = (((x361-x362)<=x363)&x364);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x366 = INT64_MIN;
	int8_t x367 = INT8_MAX;
	volatile uint64_t x368 = 5081095232337297LLU;
	uint64_t t77 = 1921411059106LLU;

	t77 = (((x365-x366)<=x367)&x368);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x369 = -1;
	int16_t x370 = -1;
	int32_t x371 = -1;
	int32_t x372 = INT32_MIN;
	int32_t t78 = -14;

	t78 = (((x369-x370)<=x371)&x372);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x377 = INT8_MIN;
	int32_t x379 = 426593916;
	uint32_t x380 = UINT32_MAX;
	uint32_t t79 = 52U;

	t79 = (((x377-x378)<=x379)&x380);

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x385 = -1LL;
	static uint8_t x386 = UINT8_MAX;
	int64_t x387 = INT64_MAX;
	uint64_t x388 = 32666055LLU;

	t80 = (((x385-x386)<=x387)&x388);

	if (t80 != 1LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x391 = INT32_MIN;
	uint64_t x392 = 363944136290752LLU;
	static uint64_t t81 = 479847499LLU;

	t81 = (((x389-x390)<=x391)&x392);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x393 = 1U;
	int16_t x394 = INT16_MIN;
	volatile int32_t x395 = -1;
	static uint16_t x396 = UINT16_MAX;

	t82 = (((x393-x394)<=x395)&x396);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x402 = UINT8_MAX;
	int16_t x403 = INT16_MIN;
	int64_t x404 = -1LL;

	t83 = (((x401-x402)<=x403)&x404);

	if (t83 != 1LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x405 = INT16_MAX;
	volatile int64_t x406 = 25LL;
	uint32_t x407 = UINT32_MAX;
	int64_t x408 = -1291964240885274357LL;
	int64_t t84 = 397512502135367294LL;

	t84 = (((x405-x406)<=x407)&x408);

	if (t84 != 1LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x409 = 1U;
	volatile int32_t x410 = -217991;
	volatile int32_t t85 = -14071208;

	t85 = (((x409-x410)<=x411)&x412);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x414 = 11U;
	uint16_t x415 = UINT16_MAX;
	int64_t x416 = INT64_MAX;
	static int64_t t86 = 7237127239LL;

	t86 = (((x413-x414)<=x415)&x416);

	if (t86 != 1LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x421 = 1193773LLU;
	static uint8_t x423 = 2U;
	static volatile int16_t x424 = -1;
	static int32_t t87 = -198753223;

	t87 = (((x421-x422)<=x423)&x424);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x426 = INT8_MIN;
	int8_t x427 = -1;
	int8_t x428 = INT8_MIN;

	t88 = (((x425-x426)<=x427)&x428);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x430 = 728729663U;
	int64_t x431 = INT64_MIN;
	volatile uint64_t t89 = 376LLU;

	t89 = (((x429-x430)<=x431)&x432);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x433 = 531618392U;
	uint64_t x434 = 467999LLU;
	volatile int8_t x436 = INT8_MIN;
	volatile int32_t t90 = -34120314;

	t90 = (((x433-x434)<=x435)&x436);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x439 = -1;
	static uint64_t x440 = 1LLU;
	volatile uint64_t t91 = 8LLU;

	t91 = (((x437-x438)<=x439)&x440);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x441 = INT16_MIN;
	int32_t x443 = -1;
	static uint64_t x444 = UINT64_MAX;
	static volatile uint64_t t92 = 2LLU;

	t92 = (((x441-x442)<=x443)&x444);

	if (t92 != 1LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x445 = INT8_MIN;
	volatile uint8_t x446 = UINT8_MAX;
	int32_t x447 = -1;
	volatile int32_t t93 = -1;

	t93 = (((x445-x446)<=x447)&x448);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x449 = 3;
	volatile int16_t x451 = INT16_MIN;
	volatile int32_t x452 = INT32_MIN;

	t94 = (((x449-x450)<=x451)&x452);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x455 = INT64_MIN;
	int64_t x456 = 1380610057670653LL;
	int64_t t95 = 9188997739LL;

	t95 = (((x453-x454)<=x455)&x456);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x458 = 59U;
	int8_t x459 = -1;
	int32_t x460 = INT32_MAX;
	volatile int32_t t96 = -693483607;

	t96 = (((x457-x458)<=x459)&x460);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x461 = -1271629620555LL;
	uint64_t x462 = 54648496903LLU;
	int8_t x463 = INT8_MAX;
	volatile int8_t x464 = 4;
	volatile int32_t t97 = 63698;

	t97 = (((x461-x462)<=x463)&x464);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x465 = 200527LLU;
	static volatile int64_t x468 = INT64_MIN;
	static volatile int64_t t98 = -3057489255LL;

	t98 = (((x465-x466)<=x467)&x468);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x469 = INT32_MIN;
	int8_t x472 = 2;
	static int32_t t99 = 529851883;

	t99 = (((x469-x470)<=x471)&x472);

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

