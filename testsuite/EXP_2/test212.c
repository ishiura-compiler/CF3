#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t t1 = -2034614467312492259LL;
int8_t x11 = -16;
volatile uint16_t x20 = 26U;
int16_t x30 = INT16_MIN;
static int8_t x32 = INT8_MIN;
volatile int64_t t5 = -47258047LL;
static int32_t x43 = -1;
int64_t t9 = -482224858399943988LL;
int64_t x65 = -1LL;
static int32_t x66 = -1;
uint8_t x83 = UINT8_MAX;
int64_t x92 = -1LL;
static int32_t x96 = -433650567;
static volatile uint8_t x102 = 49U;
volatile uint16_t x105 = 0U;
volatile int16_t x112 = INT16_MAX;
int32_t x120 = INT32_MIN;
volatile uint32_t x123 = 1330256954U;
uint8_t x124 = 44U;
volatile uint32_t x132 = UINT32_MAX;
uint32_t x133 = UINT32_MAX;
int8_t x138 = 24;
uint16_t x140 = UINT16_MAX;
int8_t x141 = INT8_MIN;
int32_t x145 = INT32_MIN;
uint16_t x146 = 646U;
int64_t t27 = -187099193571745356LL;
uint8_t x153 = 86U;
int32_t x156 = INT32_MAX;
static int16_t x165 = -1;
volatile uint64_t t32 = 63LLU;
uint8_t x177 = UINT8_MAX;
int16_t x179 = INT16_MAX;
uint32_t t36 = 25549180U;
uint16_t x197 = UINT16_MAX;
volatile int32_t x218 = -1;
static uint32_t x228 = 1377683U;
int32_t x230 = 1036619;
int64_t x231 = -1LL;
int64_t x255 = INT64_MAX;
volatile int64_t x264 = INT64_MIN;
int64_t t47 = 23LL;
volatile uint64_t t48 = 1632LLU;
volatile int8_t x269 = -2;
int64_t x277 = INT64_MIN;
static int32_t x283 = 14;
static volatile int16_t x287 = INT16_MIN;
int8_t x298 = INT8_MIN;
volatile int16_t x300 = INT16_MIN;
int8_t x309 = INT8_MAX;
int16_t x311 = INT16_MAX;
int64_t x328 = -1LL;
volatile int8_t x336 = INT8_MIN;
volatile int64_t t65 = -9LL;
static volatile uint64_t x351 = 420641LLU;
static int16_t x353 = INT16_MAX;
int64_t x356 = -28590LL;
int64_t x358 = INT64_MIN;
volatile int8_t x359 = INT8_MIN;
int16_t x361 = INT16_MIN;
static uint16_t x364 = 1460U;
volatile int32_t t69 = -14;
static uint16_t x376 = UINT16_MAX;
volatile int32_t x383 = INT32_MIN;
volatile uint64_t x391 = 5184672965456525037LLU;
uint8_t x394 = 8U;
static uint32_t x399 = UINT32_MAX;
static uint32_t x400 = UINT32_MAX;
int8_t x402 = INT8_MIN;
volatile int8_t x406 = INT8_MAX;
uint32_t x409 = 1U;
uint32_t x410 = UINT32_MAX;
int16_t x414 = INT16_MIN;
volatile uint32_t t80 = 1402506263U;
volatile uint64_t t84 = 3624LLU;
int64_t x452 = -2798243318LL;
uint16_t x454 = 22258U;
int16_t x458 = -1;
uint64_t x463 = UINT64_MAX;
uint16_t x464 = 3967U;
int16_t x467 = -1;
volatile int64_t x468 = INT64_MAX;
volatile uint16_t x469 = 873U;
int64_t x477 = INT64_MAX;
int32_t x482 = INT32_MIN;
int64_t x485 = INT64_MIN;
volatile int8_t x493 = -1;
uint64_t x495 = 72811LLU;
int16_t x499 = -1549;
uint8_t x504 = UINT8_MAX;


void f0(void) {
	int8_t x1 = 0;
	uint8_t x2 = 9U;
	int16_t x3 = -1;
	uint64_t x4 = 4121389571274055869LLU;
	uint64_t t0 = 268262923382LLU;

	t0 = ((x1/(x2-x3))/x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = -1;
	int8_t x6 = -1;
	static int64_t x7 = INT64_MIN;
	uint32_t x8 = UINT32_MAX;

	t1 = ((x5/(x6-x7))/x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -328;
	volatile uint16_t x10 = 7026U;
	uint64_t x12 = 549LLU;
	uint64_t t2 = 368894214256LLU;

	t2 = ((x9/(x10-x11))/x12);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 13U;
	static uint16_t x14 = 240U;
	int8_t x15 = 0;
	int64_t x16 = INT64_MIN;
	int64_t t3 = -24164607885LL;

	t3 = ((x13/(x14-x15))/x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -57239627;
	volatile int16_t x18 = INT16_MIN;
	static volatile int8_t x19 = -3;
	volatile int32_t t4 = 1943272;

	t4 = ((x17/(x18-x19))/x20);

	if (t4 != 67) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint8_t x29 = 62U;
	int64_t x31 = INT64_MIN;

	t5 = ((x29/(x30-x31))/x32);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x33 = -1;
	uint64_t x34 = 11749783LLU;
	volatile uint64_t x35 = 199585723LLU;
	uint32_t x36 = UINT32_MAX;
	uint64_t t6 = 3578820743LLU;

	t6 = ((x33/(x34-x35))/x36);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x37 = INT64_MAX;
	volatile int8_t x38 = INT8_MIN;
	int16_t x39 = INT16_MAX;
	static int8_t x40 = INT8_MIN;
	int64_t t7 = -14877LL;

	t7 = ((x37/(x38-x39))/x40);

	if (t7 != 2190533334486LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x41 = 2640647985704401973LLU;
	int16_t x42 = -51;
	uint8_t x44 = 1U;
	volatile uint64_t t8 = 345LLU;

	t8 = ((x41/(x42-x43))/x44);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x57 = INT64_MIN;
	static volatile int16_t x58 = INT16_MIN;
	static volatile int16_t x59 = INT16_MAX;
	int64_t x60 = INT64_MAX;

	t9 = ((x57/(x58-x59))/x60);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x67 = 0U;
	int32_t x68 = INT32_MIN;
	static volatile int64_t t10 = -31560329LL;

	t10 = ((x65/(x66-x67))/x68);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x69 = 6048118;
	uint32_t x70 = 937U;
	uint32_t x71 = 10U;
	static int32_t x72 = -1;
	static uint32_t t11 = 21445U;

	t11 = ((x69/(x70-x71))/x72);

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x73 = INT64_MIN;
	uint16_t x74 = 15745U;
	uint32_t x75 = 62090U;
	int8_t x76 = INT8_MIN;
	int64_t t12 = -19171596191434184LL;

	t12 = ((x73/(x74-x75))/x76);

	if (t12 != 16777397LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x81 = INT8_MAX;
	static int8_t x82 = -1;
	static int8_t x84 = -1;
	volatile int32_t t13 = 1947638;

	t13 = ((x81/(x82-x83))/x84);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x89 = INT64_MIN;
	static uint16_t x90 = 237U;
	static volatile int16_t x91 = INT16_MIN;
	int64_t t14 = -1525780LL;

	t14 = ((x89/(x90-x91))/x92);

	if (t14 != 279453780846986LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x93 = 6765428U;
	volatile int32_t x94 = INT32_MIN;
	static int64_t x95 = INT64_MIN;
	int64_t t15 = 346860079420LL;

	t15 = ((x93/(x94-x95))/x96);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x97 = UINT32_MAX;
	static int8_t x98 = -1;
	int64_t x99 = 4807LL;
	static uint32_t x100 = UINT32_MAX;
	int64_t t16 = 72039472LL;

	t16 = ((x97/(x98-x99))/x100);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x101 = -157755207000286LL;
	int16_t x103 = 2031;
	int8_t x104 = INT8_MAX;
	volatile int64_t t17 = -14253LL;

	t17 = ((x101/(x102-x103))/x104);

	if (t17 != 626724008LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x106 = 2U;
	int32_t x107 = INT32_MIN;
	int64_t x108 = -228217282LL;
	volatile int64_t t18 = -427993LL;

	t18 = ((x105/(x106-x107))/x108);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x109 = 471;
	int8_t x110 = -35;
	int8_t x111 = INT8_MIN;
	volatile int32_t t19 = -1612921;

	t19 = ((x109/(x110-x111))/x112);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x117 = INT32_MIN;
	volatile int16_t x118 = -1;
	uint8_t x119 = 6U;
	volatile int32_t t20 = -149;

	t20 = ((x117/(x118-x119))/x120);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x121 = 1136U;
	uint64_t x122 = 4132LLU;
	static volatile uint64_t t21 = 499925755077LLU;

	t21 = ((x121/(x122-x123))/x124);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x125 = 213752;
	static int8_t x126 = INT8_MIN;
	int64_t x127 = INT64_MIN;
	int64_t x128 = 49494LL;
	int64_t t22 = 1LL;

	t22 = ((x125/(x126-x127))/x128);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x129 = -1685546206331LL;
	int16_t x130 = INT16_MIN;
	volatile uint16_t x131 = 1385U;
	volatile int64_t t23 = 10866007LL;

	t23 = ((x129/(x130-x131))/x132);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x134 = -1LL;
	volatile int16_t x135 = INT16_MIN;
	uint64_t x136 = 1028325370057589LLU;
	uint64_t t24 = 619097333LLU;

	t24 = ((x133/(x134-x135))/x136);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x137 = -1;
	static volatile uint64_t x139 = 17368496415392828LLU;
	volatile uint64_t t25 = 4056671321LLU;

	t25 = ((x137/(x138-x139))/x140);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x142 = 191373;
	int64_t x143 = 77289407LL;
	int8_t x144 = -4;
	static volatile int64_t t26 = 709481285486558528LL;

	t26 = ((x141/(x142-x143))/x144);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x147 = 24;
	volatile int64_t x148 = -541953530LL;

	t27 = ((x145/(x146-x147))/x148);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x149 = INT16_MIN;
	int32_t x150 = INT32_MIN;
	int32_t x151 = -1;
	uint64_t x152 = 31LLU;
	volatile uint64_t t28 = 178LLU;

	t28 = ((x149/(x150-x151))/x152);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x154 = INT32_MIN;
	int8_t x155 = INT8_MIN;
	int32_t t29 = -68;

	t29 = ((x153/(x154-x155))/x156);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x161 = 1U;
	int16_t x162 = INT16_MIN;
	volatile uint8_t x163 = 2U;
	int16_t x164 = 1691;
	volatile int32_t t30 = 0;

	t30 = ((x161/(x162-x163))/x164);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x166 = -23762787111LL;
	int64_t x167 = -1LL;
	static int16_t x168 = 2080;
	volatile int64_t t31 = 374LL;

	t31 = ((x165/(x166-x167))/x168);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x173 = 468987U;
	static int16_t x174 = -28;
	volatile int16_t x175 = 0;
	uint64_t x176 = 1082373910770218LLU;

	t32 = ((x173/(x174-x175))/x176);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x178 = INT16_MIN;
	static volatile uint32_t x180 = 65U;
	static volatile uint32_t t33 = 3008U;

	t33 = ((x177/(x178-x179))/x180);

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x181 = -1LL;
	int8_t x182 = -1;
	uint32_t x183 = 1969149U;
	int32_t x184 = INT32_MIN;
	int64_t t34 = 454749237846LL;

	t34 = ((x181/(x182-x183))/x184);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x185 = INT32_MIN;
	volatile int8_t x186 = -1;
	volatile uint8_t x187 = UINT8_MAX;
	int64_t x188 = -1LL;
	int64_t t35 = 45537LL;

	t35 = ((x185/(x186-x187))/x188);

	if (t35 != -8388608LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x189 = 0;
	int16_t x190 = INT16_MAX;
	volatile uint8_t x191 = 53U;
	uint32_t x192 = 142U;

	t36 = ((x189/(x190-x191))/x192);

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x198 = INT16_MAX;
	int16_t x199 = -1;
	int32_t x200 = INT32_MIN;
	volatile int32_t t37 = 0;

	t37 = ((x197/(x198-x199))/x200);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x201 = 136745775383406658LLU;
	volatile uint32_t x202 = 3276918U;
	int64_t x203 = INT64_MAX;
	static int32_t x204 = INT32_MAX;
	uint64_t t38 = 33084748004000LLU;

	t38 = ((x201/(x202-x203))/x204);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x209 = 2U;
	uint32_t x210 = 270666U;
	uint64_t x211 = 9162681372LLU;
	int8_t x212 = INT8_MAX;
	volatile uint64_t t39 = 11139407LLU;

	t39 = ((x209/(x210-x211))/x212);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x217 = 242472215LL;
	static int32_t x219 = INT32_MIN;
	uint16_t x220 = UINT16_MAX;
	volatile int64_t t40 = 113006898133LL;

	t40 = ((x217/(x218-x219))/x220);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x225 = UINT16_MAX;
	uint8_t x226 = UINT8_MAX;
	int8_t x227 = INT8_MIN;
	volatile uint32_t t41 = 19671U;

	t41 = ((x225/(x226-x227))/x228);

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x229 = -1LL;
	int32_t x232 = INT32_MIN;
	volatile int64_t t42 = 40183LL;

	t42 = ((x229/(x230-x231))/x232);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x237 = 54279U;
	int16_t x238 = -1;
	int32_t x239 = INT32_MIN;
	int32_t x240 = INT32_MAX;
	uint32_t t43 = 1557U;

	t43 = ((x237/(x238-x239))/x240);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int16_t x241 = -920;
	static int8_t x242 = -1;
	static int64_t x243 = -7009LL;
	uint8_t x244 = UINT8_MAX;
	int64_t t44 = -46585342806LL;

	t44 = ((x241/(x242-x243))/x244);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x253 = 242375497628428LL;
	static volatile int32_t x254 = -1;
	int8_t x256 = 21;
	volatile int64_t t45 = -4830401527LL;

	t45 = ((x253/(x254-x255))/x256);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x257 = -1;
	uint8_t x258 = 117U;
	static uint8_t x259 = UINT8_MAX;
	uint16_t x260 = 1U;
	static volatile int32_t t46 = -9;

	t46 = ((x257/(x258-x259))/x260);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x261 = 23;
	static uint32_t x262 = 183U;
	int64_t x263 = 562162572133LL;

	t47 = ((x261/(x262-x263))/x264);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x265 = INT8_MIN;
	volatile uint16_t x266 = 45U;
	volatile uint64_t x267 = 210140702LLU;
	int64_t x268 = 813LL;

	t48 = ((x265/(x266-x267))/x268);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x270 = 113U;
	int64_t x271 = -1LL;
	uint16_t x272 = UINT16_MAX;
	int64_t t49 = 463894425LL;

	t49 = ((x269/(x270-x271))/x272);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x273 = 993;
	volatile int8_t x274 = INT8_MIN;
	static uint8_t x275 = UINT8_MAX;
	int32_t x276 = 34274896;
	static int32_t t50 = 126209025;

	t50 = ((x273/(x274-x275))/x276);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x278 = 28752744089474LL;
	int64_t x279 = -1702596074665LL;
	uint32_t x280 = UINT32_MAX;
	volatile int64_t t51 = -2029196509LL;

	t51 = ((x277/(x278-x279))/x280);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x281 = INT8_MAX;
	volatile uint64_t x282 = 657291111900263LLU;
	volatile int32_t x284 = -7;
	uint64_t t52 = 3078031505259194080LLU;

	t52 = ((x281/(x282-x283))/x284);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x285 = 18U;
	int8_t x286 = -1;
	uint8_t x288 = UINT8_MAX;
	volatile int32_t t53 = -117972;

	t53 = ((x285/(x286-x287))/x288);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x289 = -1;
	uint16_t x290 = 2U;
	uint32_t x291 = UINT32_MAX;
	volatile int8_t x292 = 2;
	uint32_t t54 = 21U;

	t54 = ((x289/(x290-x291))/x292);

	if (t54 != 715827882U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x293 = 1;
	static int16_t x294 = 960;
	int16_t x295 = -362;
	static uint8_t x296 = UINT8_MAX;
	int32_t t55 = -968567;

	t55 = ((x293/(x294-x295))/x296);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x297 = -21;
	static int16_t x299 = 1;
	int32_t t56 = -195001049;

	t56 = ((x297/(x298-x299))/x300);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x301 = -11060LL;
	int64_t x302 = -747395002LL;
	volatile int8_t x303 = INT8_MIN;
	volatile int32_t x304 = INT32_MIN;
	int64_t t57 = 4613700LL;

	t57 = ((x301/(x302-x303))/x304);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x305 = 2U;
	volatile int8_t x306 = INT8_MIN;
	int16_t x307 = 0;
	static int32_t x308 = INT32_MIN;
	volatile int32_t t58 = -6290792;

	t58 = ((x305/(x306-x307))/x308);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x310 = 2517677LLU;
	static volatile int16_t x312 = INT16_MIN;
	uint64_t t59 = 405LLU;

	t59 = ((x309/(x310-x311))/x312);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x313 = 12;
	int16_t x314 = INT16_MIN;
	static int16_t x315 = -1;
	volatile int16_t x316 = INT16_MIN;
	volatile int32_t t60 = 8013;

	t60 = ((x313/(x314-x315))/x316);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x317 = -4;
	volatile uint8_t x318 = UINT8_MAX;
	volatile uint32_t x319 = UINT32_MAX;
	int64_t x320 = -1280518139044LL;
	volatile int64_t t61 = 54LL;

	t61 = ((x317/(x318-x319))/x320);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x325 = -1;
	uint64_t x326 = 1LLU;
	int8_t x327 = INT8_MIN;
	volatile uint64_t t62 = 377050855380LLU;

	t62 = ((x325/(x326-x327))/x328);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x329 = INT8_MIN;
	int16_t x330 = INT16_MIN;
	int32_t x331 = -2757387;
	int64_t x332 = -1LL;
	volatile int64_t t63 = -1864403LL;

	t63 = ((x329/(x330-x331))/x332);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x333 = INT8_MIN;
	uint64_t x334 = 2233LLU;
	static volatile int16_t x335 = INT16_MAX;
	volatile uint64_t t64 = 613887LLU;

	t64 = ((x333/(x334-x335))/x336);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x341 = -1LL;
	volatile int16_t x342 = INT16_MAX;
	uint32_t x343 = 1U;
	int8_t x344 = INT8_MAX;

	t65 = ((x341/(x342-x343))/x344);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x349 = INT64_MIN;
	volatile uint64_t x350 = 2114532071269556095LLU;
	int64_t x352 = -1LL;
	uint64_t t66 = 211361922LLU;

	t66 = ((x349/(x350-x351))/x352);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x354 = -267440075;
	int64_t x355 = 855LL;
	int64_t t67 = -1132895476037250LL;

	t67 = ((x353/(x354-x355))/x356);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x357 = -4;
	static int8_t x360 = -1;
	int64_t t68 = 4310408LL;

	t68 = ((x357/(x358-x359))/x360);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x362 = -199;
	static int8_t x363 = 1;

	t69 = ((x361/(x362-x363))/x364);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x373 = 10780;
	int8_t x374 = 0;
	int32_t x375 = 49;
	volatile int32_t t70 = -97;

	t70 = ((x373/(x374-x375))/x376);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x377 = UINT8_MAX;
	static int16_t x378 = -1;
	int32_t x379 = INT32_MIN;
	int32_t x380 = INT32_MIN;
	volatile int32_t t71 = 97;

	t71 = ((x377/(x378-x379))/x380);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x381 = INT16_MIN;
	int32_t x382 = -2323713;
	int16_t x384 = INT16_MAX;
	static int32_t t72 = 517479365;

	t72 = ((x381/(x382-x383))/x384);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x385 = 12;
	volatile int8_t x386 = 7;
	int64_t x387 = INT64_MAX;
	static int8_t x388 = INT8_MIN;
	volatile int64_t t73 = -93530844304264LL;

	t73 = ((x385/(x386-x387))/x388);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x389 = -5567431LL;
	uint8_t x390 = 0U;
	uint32_t x392 = 221U;
	uint64_t t74 = 1140LLU;

	t74 = ((x389/(x390-x391))/x392);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x393 = 10U;
	uint32_t x395 = 1895864992U;
	int64_t x396 = INT64_MIN;
	volatile int64_t t75 = -3602664052510247LL;

	t75 = ((x393/(x394-x395))/x396);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x397 = 1;
	int8_t x398 = INT8_MAX;
	uint32_t t76 = 9705U;

	t76 = ((x397/(x398-x399))/x400);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x401 = -1;
	volatile uint8_t x403 = UINT8_MAX;
	uint8_t x404 = 28U;
	volatile int32_t t77 = 10956;

	t77 = ((x401/(x402-x403))/x404);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x405 = -1;
	static volatile uint8_t x407 = 13U;
	static int32_t x408 = -99;
	int32_t t78 = -399;

	t78 = ((x405/(x406-x407))/x408);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x411 = -658;
	uint32_t x412 = 283U;
	uint32_t t79 = 1U;

	t79 = ((x409/(x410-x411))/x412);

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x413 = UINT8_MAX;
	static volatile uint32_t x415 = UINT32_MAX;
	static int16_t x416 = -1;

	t80 = ((x413/(x414-x415))/x416);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x417 = UINT16_MAX;
	int8_t x418 = INT8_MIN;
	int64_t x419 = -1LL;
	int8_t x420 = -4;
	int64_t t81 = 1697439LL;

	t81 = ((x417/(x418-x419))/x420);

	if (t81 != 129LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x433 = INT64_MIN;
	int8_t x434 = 0;
	uint16_t x435 = 8U;
	static uint8_t x436 = 122U;
	int64_t t82 = -598039LL;

	t82 = ((x433/(x434-x435))/x436);

	if (t82 != 9450176267269237LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x437 = INT32_MAX;
	int8_t x438 = -1;
	uint16_t x439 = 3892U;
	static int64_t x440 = 5LL;
	static int64_t t83 = -47389LL;

	t83 = ((x437/(x438-x439))/x440);

	if (t83 != -110325LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x445 = 1;
	int32_t x446 = INT32_MAX;
	volatile uint64_t x447 = 6690344LLU;
	volatile int16_t x448 = INT16_MIN;

	t84 = ((x445/(x446-x447))/x448);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x449 = 257798;
	int64_t x450 = -1LL;
	volatile int64_t x451 = 28098595685LL;
	volatile int64_t t85 = 115194437263LL;

	t85 = ((x449/(x450-x451))/x452);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x453 = UINT64_MAX;
	static int64_t x455 = INT64_MAX;
	uint16_t x456 = UINT16_MAX;
	uint64_t t86 = 59006622227953LLU;

	t86 = ((x453/(x454-x455))/x456);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x457 = INT64_MIN;
	int16_t x459 = INT16_MAX;
	static int8_t x460 = -1;
	volatile int64_t t87 = -16LL;

	t87 = ((x457/(x458-x459))/x460);

	if (t87 != -281474976710656LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x461 = -1037020;
	int64_t x462 = INT64_MIN;
	uint64_t t88 = 215292LLU;

	t88 = ((x461/(x462-x463))/x464);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x465 = -1;
	int8_t x466 = -53;
	int64_t t89 = -46036LL;

	t89 = ((x465/(x466-x467))/x468);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x470 = 898U;
	int64_t x471 = INT64_MAX;
	int32_t x472 = INT32_MIN;
	volatile int64_t t90 = 48554888894LL;

	t90 = ((x469/(x470-x471))/x472);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x473 = UINT64_MAX;
	volatile int32_t x474 = -2952;
	int32_t x475 = -5720;
	int64_t x476 = INT64_MIN;
	uint64_t t91 = 725348835LLU;

	t91 = ((x473/(x474-x475))/x476);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x478 = 35312LLU;
	uint32_t x479 = 112551U;
	int8_t x480 = INT8_MAX;
	uint64_t t92 = 4652LLU;

	t92 = ((x477/(x478-x479))/x480);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x481 = INT8_MAX;
	int8_t x483 = INT8_MIN;
	int64_t x484 = INT64_MAX;
	int64_t t93 = -21756576764893LL;

	t93 = ((x481/(x482-x483))/x484);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x486 = 1U;
	uint16_t x487 = 22772U;
	uint64_t x488 = 584558982472351LLU;
	uint64_t t94 = 147960168878823LLU;

	t94 = ((x485/(x486-x487))/x488);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x489 = -1;
	int8_t x490 = INT8_MIN;
	volatile int16_t x491 = -1;
	int32_t x492 = -1;
	int32_t t95 = 61705991;

	t95 = ((x489/(x490-x491))/x492);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x494 = -1LL;
	int16_t x496 = INT16_MIN;
	volatile uint64_t t96 = 261081338748LLU;

	t96 = ((x493/(x494-x495))/x496);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x497 = -249878616;
	volatile int32_t x498 = INT32_MIN;
	volatile int8_t x500 = -1;
	int32_t t97 = -1;

	t97 = ((x497/(x498-x499))/x500);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x501 = 7;
	int16_t x502 = INT16_MIN;
	int8_t x503 = INT8_MAX;
	int32_t t98 = 4833249;

	t98 = ((x501/(x502-x503))/x504);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x505 = 6U;
	int32_t x506 = 4;
	int32_t x507 = INT32_MAX;
	int64_t x508 = 464614367771688LL;
	volatile int64_t t99 = 59404LL;

	t99 = ((x505/(x506-x507))/x508);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

