#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = INT8_MIN;
volatile uint64_t t1 = 108407932955694LLU;
int16_t x13 = INT16_MIN;
int16_t x15 = INT16_MIN;
static int32_t x19 = 1;
int64_t t4 = INT64_MIN;
uint8_t x21 = 24U;
static int64_t x27 = -107233121925385346LL;
volatile uint32_t x40 = 6912U;
int64_t t10 = 2087565282661602LL;
int8_t x54 = 17;
volatile uint64_t x65 = 1774898152369189LLU;
int16_t x68 = INT16_MAX;
uint64_t x70 = 60043LLU;
uint32_t x71 = 1U;
uint8_t x86 = 15U;
uint64_t x88 = 0LLU;
int8_t x89 = INT8_MIN;
int8_t x90 = INT8_MIN;
int16_t x108 = INT16_MAX;
int64_t x112 = -1LL;
volatile int64_t t20 = -34323410464782508LL;
uint32_t x114 = 52U;
int32_t x118 = -1;
uint8_t x122 = UINT8_MAX;
int16_t x123 = -23;
static int64_t t23 = -3943080511192351113LL;
int8_t x138 = INT8_MAX;
uint16_t x139 = UINT16_MAX;
static volatile int32_t t26 = 61446;
int64_t x151 = -1LL;
uint64_t x152 = UINT64_MAX;
uint64_t x155 = 803866132508173980LLU;
int8_t x161 = INT8_MAX;
volatile uint32_t x165 = 639329U;
static volatile uint64_t x183 = 7LLU;
static volatile uint16_t x184 = 194U;
static uint32_t x185 = UINT32_MAX;
int64_t x196 = -16148648294LL;
int64_t x199 = INT64_MAX;
uint8_t x205 = UINT8_MAX;
volatile int64_t t36 = 871684LL;
volatile uint16_t x209 = 18035U;
uint8_t x211 = 61U;
volatile int32_t t38 = 15281;
uint32_t x224 = 5920987U;
static volatile int64_t x227 = INT64_MIN;
volatile int64_t x230 = -21LL;
uint64_t t42 = 930LLU;
static int16_t x234 = INT16_MIN;
int64_t t43 = -29532773161LL;
int8_t x247 = -2;
uint32_t x252 = UINT32_MAX;
static int64_t t46 = 11555LL;
uint16_t x258 = 0U;
int8_t x283 = 2;
int16_t x288 = 24;
static uint64_t x291 = 544979066813812272LLU;
uint16_t x294 = UINT16_MAX;
int32_t x295 = -1;
static volatile int64_t x297 = -33484LL;
volatile int64_t t53 = INT64_MIN;
volatile int64_t x308 = INT64_MIN;
int32_t x309 = INT32_MAX;
int32_t x310 = -1;
volatile int32_t x324 = 166800;
int32_t t57 = -3727837;
static uint8_t x336 = 1U;
volatile int8_t x345 = INT8_MIN;
uint64_t x348 = 8408893160704LLU;
uint64_t x350 = 118957778LLU;
volatile uint16_t x351 = 0U;
static volatile uint16_t x361 = 10898U;
uint32_t x370 = 0U;
volatile int8_t x371 = -3;
int8_t x375 = -11;
int64_t x379 = INT64_MIN;
static uint64_t x380 = UINT64_MAX;
int16_t x382 = -1;
int64_t t71 = 478294519LL;
int16_t x385 = -255;
uint64_t x406 = 2312179822008027LLU;
uint8_t x417 = 7U;
uint16_t x419 = 141U;
static volatile int64_t x421 = INT64_MAX;
uint8_t x423 = 9U;
volatile int16_t x428 = INT16_MAX;
int64_t x431 = INT64_MAX;
static volatile int64_t t82 = -78724722LL;
uint64_t t84 = 20883645020LLU;
uint32_t x447 = 1U;
int8_t x448 = 14;
volatile uint64_t t85 = 168LLU;
int64_t x451 = 13526085110LL;
volatile int64_t t86 = 55038083492530LL;
volatile int64_t x459 = INT64_MAX;
static int64_t x460 = INT64_MAX;
uint16_t x469 = 1908U;
uint64_t x473 = UINT64_MAX;
int16_t x481 = -1;
static uint64_t x483 = UINT64_MAX;
uint16_t x490 = 21U;
int16_t x491 = -1;
static int32_t x494 = 15;
static int32_t t95 = INT32_MIN;
volatile int64_t x500 = 18683434817356443LL;
uint8_t x504 = 1U;
int32_t x507 = INT32_MAX;
static uint64_t t99 = 235850804985LLU;


void f0(void) {
	static int64_t x2 = 26253317LL;
	uint16_t x3 = 1112U;
	int64_t x4 = 7994880LL;
	volatile int64_t t0 = 2LL;

	t0 = (((x1*x2)|x3)&x4);

	if (t0 != 3275776LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x5 = 4906LLU;
	int64_t x6 = INT64_MAX;
	int8_t x7 = INT8_MIN;
	uint32_t x8 = 414504462U;

	t1 = (((x5*x6)|x7)&x8);

	if (t1 != 414504454LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = -1;
	int8_t x10 = INT8_MAX;
	uint64_t x11 = 51LLU;
	volatile int64_t x12 = -3585446LL;
	uint64_t t2 = 3LLU;

	t2 = (((x9*x10)|x11)&x12);

	if (t2 != 18446744073705966098LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x14 = UINT32_MAX;
	uint64_t x16 = UINT64_MAX;
	static volatile uint64_t t3 = 595872961LLU;

	t3 = (((x13*x14)|x15)&x16);

	if (t3 != 4294934528LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = INT64_MIN;
	volatile int8_t x18 = 1;
	int64_t x20 = INT64_MIN;

	t4 = (((x17*x18)|x19)&x20);

	if (t4 != INT64_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x22 = 0U;
	int16_t x23 = -1;
	int16_t x24 = -1;
	static int32_t t5 = 116899;

	t5 = (((x21*x22)|x23)&x24);

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = 358;
	int8_t x26 = -1;
	int32_t x28 = 1;
	volatile int64_t t6 = 251LL;

	t6 = (((x25*x26)|x27)&x28);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x33 = UINT64_MAX;
	uint32_t x34 = 868629275U;
	uint16_t x35 = UINT16_MAX;
	volatile uint32_t x36 = 15470771U;
	volatile uint64_t t7 = 1LLU;

	t7 = (((x33*x34)|x35)&x36);

	if (t7 != 2625715LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = -1LL;
	uint64_t x38 = 31289519LLU;
	volatile int16_t x39 = -1;
	volatile uint64_t t8 = 158820847566LLU;

	t8 = (((x37*x38)|x39)&x40);

	if (t8 != 6912LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = INT32_MAX;
	static int16_t x42 = -1;
	int64_t x43 = -1LL;
	volatile int32_t x44 = -144177585;
	volatile int64_t t9 = -19468100851LL;

	t9 = (((x41*x42)|x43)&x44);

	if (t9 != -144177585LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x49 = -752;
	int64_t x50 = 73490604726223LL;
	uint16_t x51 = 26965U;
	volatile int8_t x52 = -33;

	t10 = (((x49*x50)|x51)&x52);

	if (t10 != -55264934754095147LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x53 = 1U;
	int32_t x55 = INT32_MIN;
	int32_t x56 = INT32_MIN;
	uint32_t t11 = 31218622U;

	t11 = (((x53*x54)|x55)&x56);

	if (t11 != 2147483648U) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x57 = 1534U;
	int16_t x58 = INT16_MIN;
	uint8_t x59 = 105U;
	int32_t x60 = INT32_MIN;
	static int32_t t12 = INT32_MIN;

	t12 = (((x57*x58)|x59)&x60);

	if (t12 != INT32_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x66 = -15;
	volatile int8_t x67 = -1;
	uint64_t t13 = 104882995390736427LLU;

	t13 = (((x65*x66)|x67)&x68);

	if (t13 != 32767LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x69 = 55U;
	uint8_t x72 = 12U;
	static uint64_t t14 = 105613125LLU;

	t14 = (((x69*x70)|x71)&x72);

	if (t14 != 12LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x73 = UINT32_MAX;
	int16_t x74 = -1;
	int64_t x75 = INT64_MAX;
	uint8_t x76 = UINT8_MAX;
	int64_t t15 = 217411484838628LL;

	t15 = (((x73*x74)|x75)&x76);

	if (t15 != 255LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x85 = -11721509017383LL;
	int8_t x87 = INT8_MIN;
	uint64_t t16 = 346LLU;

	t16 = (((x85*x86)|x87)&x88);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x91 = -1;
	int8_t x92 = INT8_MAX;
	volatile int32_t t17 = -4389329;

	t17 = (((x89*x90)|x91)&x92);

	if (t17 != 127) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x93 = -1;
	uint16_t x94 = 350U;
	static volatile int32_t x95 = -75;
	int32_t x96 = INT32_MIN;
	volatile int32_t t18 = INT32_MIN;

	t18 = (((x93*x94)|x95)&x96);

	if (t18 != INT32_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x105 = INT8_MIN;
	int16_t x106 = 412;
	static int32_t x107 = -1;
	static volatile int32_t t19 = 6446739;

	t19 = (((x105*x106)|x107)&x108);

	if (t19 != 32767) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x109 = 10U;
	static int8_t x110 = INT8_MIN;
	int64_t x111 = INT64_MAX;

	t20 = (((x109*x110)|x111)&x112);

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x113 = 377024344U;
	int8_t x115 = INT8_MIN;
	uint32_t x116 = 717U;
	static uint32_t t21 = 4U;

	t21 = (((x113*x114)|x115)&x116);

	if (t21 != 704U) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x117 = -1;
	uint64_t x119 = 241259284LLU;
	int16_t x120 = INT16_MIN;
	uint64_t t22 = 149LLU;

	t22 = (((x117*x118)|x119)&x120);

	if (t22 != 241238016LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x121 = INT8_MIN;
	int64_t x124 = 216LL;

	t23 = (((x121*x122)|x123)&x124);

	if (t23 != 200LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x125 = INT16_MIN;
	int16_t x126 = INT16_MIN;
	static int64_t x127 = INT64_MAX;
	int16_t x128 = INT16_MIN;
	static volatile int64_t t24 = -124892058475503286LL;

	t24 = (((x125*x126)|x127)&x128);

	if (t24 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x137 = INT8_MIN;
	volatile uint8_t x140 = 34U;
	int32_t t25 = -60;

	t25 = (((x137*x138)|x139)&x140);

	if (t25 != 34) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x141 = INT16_MAX;
	int8_t x142 = INT8_MIN;
	int8_t x143 = -1;
	uint8_t x144 = 101U;

	t26 = (((x141*x142)|x143)&x144);

	if (t26 != 101) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x149 = UINT32_MAX;
	uint8_t x150 = 18U;
	uint64_t t27 = UINT64_MAX;

	t27 = (((x149*x150)|x151)&x152);

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x153 = 497U;
	volatile uint8_t x154 = 0U;
	static int8_t x156 = INT8_MIN;
	volatile uint64_t t28 = 853039092941LLU;

	t28 = (((x153*x154)|x155)&x156);

	if (t28 != 803866132508173952LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x162 = 11LLU;
	static volatile int64_t x163 = INT64_MIN;
	volatile int16_t x164 = INT16_MIN;
	uint64_t t29 = 4704LLU;

	t29 = (((x161*x162)|x163)&x164);

	if (t29 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int32_t x166 = -289631;
	int8_t x167 = -1;
	uint16_t x168 = 6U;
	volatile uint32_t t30 = 3821739U;

	t30 = (((x165*x166)|x167)&x168);

	if (t30 != 6U) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x177 = 974LL;
	int32_t x178 = 5;
	volatile uint8_t x179 = UINT8_MAX;
	static int8_t x180 = INT8_MIN;
	int64_t t31 = -30896679843343LL;

	t31 = (((x177*x178)|x179)&x180);

	if (t31 != 4992LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x181 = 1532;
	volatile int16_t x182 = INT16_MAX;
	static uint64_t t32 = 2LLU;

	t32 = (((x181*x182)|x183)&x184);

	if (t32 != 2LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x186 = INT8_MIN;
	int64_t x187 = INT64_MAX;
	static uint16_t x188 = UINT16_MAX;
	static volatile int64_t t33 = 2121137560495179362LL;

	t33 = (((x185*x186)|x187)&x188);

	if (t33 != 65535LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x193 = INT64_MIN;
	static uint32_t x194 = 0U;
	int32_t x195 = INT32_MIN;
	static volatile int64_t t34 = 432LL;

	t34 = (((x193*x194)|x195)&x196);

	if (t34 != -17179869184LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x197 = 11633429657711LLU;
	int16_t x198 = -6;
	int8_t x200 = INT8_MIN;
	uint64_t t35 = 1034088076480404LLU;

	t35 = (((x197*x198)|x199)&x200);

	if (t35 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x206 = -1LL;
	uint16_t x207 = UINT16_MAX;
	volatile int32_t x208 = 0;

	t36 = (((x205*x206)|x207)&x208);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x210 = -1LL;
	volatile uint64_t x212 = 152073471LLU;
	volatile uint64_t t37 = 5855396LLU;

	t37 = (((x209*x210)|x211)&x212);

	if (t37 != 152055997LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x213 = 1U;
	static int16_t x214 = 30;
	int16_t x215 = INT16_MAX;
	static int16_t x216 = 197;

	t38 = (((x213*x214)|x215)&x216);

	if (t38 != 197) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x217 = UINT64_MAX;
	uint16_t x218 = 8857U;
	uint16_t x219 = 83U;
	int64_t x220 = INT64_MIN;
	volatile uint64_t t39 = 15754LLU;

	t39 = (((x217*x218)|x219)&x220);

	if (t39 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x221 = 17U;
	int64_t x222 = -11321481LL;
	volatile int16_t x223 = 1107;
	volatile int64_t t40 = -944194LL;

	t40 = (((x221*x222)|x223)&x224);

	if (t40 != 135379LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x225 = 40U;
	int8_t x226 = INT8_MAX;
	volatile uint32_t x228 = 16U;
	volatile int64_t t41 = -223807212343506LL;

	t41 = (((x225*x226)|x227)&x228);

	if (t41 != 16LL) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int16_t x229 = INT16_MIN;
	volatile uint64_t x231 = 2035597180458207LLU;
	volatile uint8_t x232 = 0U;

	t42 = (((x229*x230)|x231)&x232);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x233 = 0;
	int64_t x235 = -654703334LL;
	volatile uint32_t x236 = UINT32_MAX;

	t43 = (((x233*x234)|x235)&x236);

	if (t43 != 3640263962LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x241 = UINT64_MAX;
	uint32_t x242 = 57U;
	uint64_t x243 = UINT64_MAX;
	int32_t x244 = INT32_MIN;
	static uint64_t t44 = 1173121367682LLU;

	t44 = (((x241*x242)|x243)&x244);

	if (t44 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x245 = -1LL;
	uint16_t x246 = 3U;
	int8_t x248 = INT8_MIN;
	int64_t t45 = -655589179524448LL;

	t45 = (((x245*x246)|x247)&x248);

	if (t45 != -128LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x249 = -20;
	int32_t x250 = 17076;
	int64_t x251 = 673970LL;

	t46 = (((x249*x250)|x251)&x252);

	if (t46 != 4294625778LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x257 = INT32_MIN;
	int32_t x259 = -270080;
	int32_t x260 = -9;
	volatile int32_t t47 = 8922;

	t47 = (((x257*x258)|x259)&x260);

	if (t47 != -270080) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x269 = 4U;
	uint16_t x270 = UINT16_MAX;
	int32_t x271 = INT32_MAX;
	int32_t x272 = -14882076;
	volatile int32_t t48 = 120001;

	t48 = (((x269*x270)|x271)&x272);

	if (t48 != 2132601572) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x281 = -4;
	uint16_t x282 = 31487U;
	int32_t x284 = INT32_MIN;
	int32_t t49 = INT32_MIN;

	t49 = (((x281*x282)|x283)&x284);

	if (t49 != INT32_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x285 = -541;
	volatile int16_t x286 = INT16_MAX;
	uint16_t x287 = UINT16_MAX;
	int32_t t50 = 2;

	t50 = (((x285*x286)|x287)&x288);

	if (t50 != 24) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x289 = INT16_MAX;
	uint16_t x290 = UINT16_MAX;
	static int64_t x292 = -4944028512592LL;
	uint64_t t51 = 418725LLU;

	t51 = (((x289*x290)|x291)&x292);

	if (t51 != 544974591348346416LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x293 = 11U;
	volatile int64_t x296 = INT64_MIN;
	volatile int64_t t52 = INT64_MIN;

	t52 = (((x293*x294)|x295)&x296);

	if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x298 = 5U;
	volatile int8_t x299 = -1;
	int64_t x300 = INT64_MIN;

	t53 = (((x297*x298)|x299)&x300);

	if (t53 != INT64_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x305 = -1119LL;
	uint8_t x306 = UINT8_MAX;
	int8_t x307 = INT8_MAX;
	static volatile int64_t t54 = INT64_MIN;

	t54 = (((x305*x306)|x307)&x308);

	if (t54 != INT64_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x311 = INT64_MAX;
	int32_t x312 = -1;
	volatile int64_t t55 = 213536LL;

	t55 = (((x309*x310)|x311)&x312);

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x317 = -10104984346504LL;
	uint64_t x318 = 522934022LLU;
	int32_t x319 = INT32_MAX;
	int64_t x320 = INT64_MIN;
	volatile uint64_t t56 = 907878412423819652LLU;

	t56 = (((x317*x318)|x319)&x320);

	if (t56 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x321 = INT8_MAX;
	uint8_t x322 = 8U;
	static int16_t x323 = INT16_MIN;

	t57 = (((x321*x322)|x323)&x324);

	if (t57 != 164752) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x325 = INT8_MAX;
	int16_t x326 = -4456;
	volatile int64_t x327 = -1LL;
	uint8_t x328 = 1U;
	volatile int64_t t58 = 1586046LL;

	t58 = (((x325*x326)|x327)&x328);

	if (t58 != 1LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x329 = UINT32_MAX;
	uint8_t x330 = 63U;
	uint8_t x331 = 12U;
	int16_t x332 = INT16_MAX;
	static uint32_t t59 = 63U;

	t59 = (((x329*x330)|x331)&x332);

	if (t59 != 32717U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x333 = -5;
	volatile uint32_t x334 = 40798123U;
	static uint64_t x335 = 483LLU;
	uint64_t t60 = 458498382374089LLU;

	t60 = (((x333*x334)|x335)&x336);

	if (t60 != 1LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x337 = 28255402680744LLU;
	static int64_t x338 = INT64_MIN;
	uint64_t x339 = 4LLU;
	int32_t x340 = INT32_MAX;
	volatile uint64_t t61 = 563685LLU;

	t61 = (((x337*x338)|x339)&x340);

	if (t61 != 4LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x341 = INT16_MIN;
	volatile int16_t x342 = INT16_MIN;
	volatile int32_t x343 = INT32_MIN;
	static int32_t x344 = INT32_MAX;
	static volatile int32_t t62 = -875300602;

	t62 = (((x341*x342)|x343)&x344);

	if (t62 != 1073741824) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x346 = INT8_MIN;
	uint64_t x347 = 4088930LLU;
	static uint64_t t63 = 83564796593LLU;

	t63 = (((x345*x346)|x347)&x348);

	if (t63 != 1467392LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x349 = 5U;
	uint16_t x352 = 26161U;
	uint64_t t64 = 292707LLU;

	t64 = (((x349*x350)|x351)&x352);

	if (t64 != 16912LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x357 = -1;
	int8_t x358 = -1;
	volatile int16_t x359 = INT16_MIN;
	int16_t x360 = INT16_MAX;
	volatile int32_t t65 = -13286;

	t65 = (((x357*x358)|x359)&x360);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x362 = 6U;
	int32_t x363 = -13782;
	int64_t x364 = INT64_MIN;
	volatile int64_t t66 = 5620223086763832LL;

	t66 = (((x361*x362)|x363)&x364);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x365 = UINT16_MAX;
	volatile uint16_t x366 = 7U;
	int8_t x367 = INT8_MIN;
	int8_t x368 = INT8_MAX;
	int32_t t67 = -7416107;

	t67 = (((x365*x366)|x367)&x368);

	if (t67 != 121) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x369 = INT16_MIN;
	volatile uint16_t x372 = 322U;
	volatile uint32_t t68 = 444060U;

	t68 = (((x369*x370)|x371)&x372);

	if (t68 != 320U) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x373 = 1661LL;
	uint64_t x374 = 64587858751453295LLU;
	int8_t x376 = -18;
	uint64_t t69 = 31393397LLU;

	t69 = (((x373*x374)|x375)&x376);

	if (t69 != 18446744073709551590LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x377 = UINT16_MAX;
	uint64_t x378 = 126657LLU;
	uint64_t t70 = 4908929490033845117LLU;

	t70 = (((x377*x378)|x379)&x380);

	if (t70 != 9223372045155242303LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int16_t x381 = INT16_MAX;
	int64_t x383 = INT64_MAX;
	uint16_t x384 = UINT16_MAX;

	t71 = (((x381*x382)|x383)&x384);

	if (t71 != 65535LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x386 = 56193413LLU;
	uint16_t x387 = UINT16_MAX;
	static uint16_t x388 = 11U;
	volatile uint64_t t72 = 2LLU;

	t72 = (((x385*x386)|x387)&x388);

	if (t72 != 11LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint64_t x389 = 0LLU;
	int8_t x390 = INT8_MAX;
	static int16_t x391 = -1;
	int32_t x392 = INT32_MIN;
	volatile uint64_t t73 = 53491771396223LLU;

	t73 = (((x389*x390)|x391)&x392);

	if (t73 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x393 = 1U;
	static uint16_t x394 = UINT16_MAX;
	uint64_t x395 = 155LLU;
	uint32_t x396 = UINT32_MAX;
	static volatile uint64_t t74 = 242263408792LLU;

	t74 = (((x393*x394)|x395)&x396);

	if (t74 != 65535LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x397 = INT16_MIN;
	int8_t x398 = 1;
	static uint16_t x399 = 11172U;
	int8_t x400 = INT8_MAX;
	volatile int32_t t75 = 1559027;

	t75 = (((x397*x398)|x399)&x400);

	if (t75 != 36) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x405 = INT32_MAX;
	int64_t x407 = -99005LL;
	volatile int32_t x408 = INT32_MIN;
	volatile uint64_t t76 = 245874172661LLU;

	t76 = (((x405*x406)|x407)&x408);

	if (t76 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x409 = INT8_MIN;
	static int64_t x410 = -1LL;
	int8_t x411 = INT8_MIN;
	int16_t x412 = -16;
	static int64_t t77 = -18561LL;

	t77 = (((x409*x410)|x411)&x412);

	if (t77 != -128LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x413 = INT8_MAX;
	int16_t x414 = INT16_MAX;
	static uint32_t x415 = 20322932U;
	uint16_t x416 = UINT16_MAX;
	volatile uint32_t t78 = 200U;

	t78 = (((x413*x414)|x415)&x416);

	if (t78 != 32757U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x418 = -64097683;
	uint8_t x420 = 1U;
	static int32_t t79 = 357;

	t79 = (((x417*x418)|x419)&x420);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x422 = -1;
	int8_t x424 = -1;
	volatile int64_t t80 = 44340153LL;

	t80 = (((x421*x422)|x423)&x424);

	if (t80 != -9223372036854775799LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x425 = -36;
	uint32_t x426 = 918760U;
	int16_t x427 = 379;
	uint32_t t81 = 213370721U;

	t81 = (((x425*x426)|x427)&x428);

	if (t81 != 20347U) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x429 = 543811667U;
	int32_t x430 = 248296754;
	volatile uint32_t x432 = 3138038U;

	t82 = (((x429*x430)|x431)&x432);

	if (t82 != 3138038LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x433 = INT32_MAX;
	int16_t x434 = -1;
	volatile uint16_t x435 = 7U;
	int32_t x436 = INT32_MIN;
	static volatile int32_t t83 = INT32_MIN;

	t83 = (((x433*x434)|x435)&x436);

	if (t83 != INT32_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x441 = 2U;
	static volatile uint16_t x442 = 4729U;
	uint64_t x443 = 27LLU;
	volatile uint64_t x444 = UINT64_MAX;

	t84 = (((x441*x442)|x443)&x444);

	if (t84 != 9467LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x445 = UINT64_MAX;
	int64_t x446 = INT64_MAX;

	t85 = (((x445*x446)|x447)&x448);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x449 = -1;
	static int32_t x450 = INT32_MAX;
	volatile int64_t x452 = -2016346173718415LL;

	t86 = (((x449*x450)|x451)&x452);

	if (t86 != -2016347524300687LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x457 = 0U;
	volatile int64_t x458 = INT64_MIN;
	volatile int64_t t87 = INT64_MAX;

	t87 = (((x457*x458)|x459)&x460);

	if (t87 != INT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x461 = 1758LLU;
	int32_t x462 = INT32_MIN;
	volatile int64_t x463 = -1LL;
	int64_t x464 = -2720385856599389171LL;
	volatile uint64_t t88 = 22101187LLU;

	t88 = (((x461*x462)|x463)&x464);

	if (t88 != 15726358217110162445LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x470 = -1;
	int8_t x471 = INT8_MAX;
	volatile uint16_t x472 = 1891U;
	volatile int32_t t89 = -226856;

	t89 = (((x469*x470)|x471)&x472);

	if (t89 != 99) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x474 = 279543703125LLU;
	int16_t x475 = -1;
	uint16_t x476 = UINT16_MAX;
	volatile uint64_t t90 = 19325024252544426LLU;

	t90 = (((x473*x474)|x475)&x476);

	if (t90 != 65535LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x477 = 8389LL;
	static int32_t x478 = INT32_MAX;
	uint32_t x479 = UINT32_MAX;
	uint8_t x480 = 30U;
	volatile int64_t t91 = -2472924562184LL;

	t91 = (((x477*x478)|x479)&x480);

	if (t91 != 30LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x482 = 14114887LLU;
	int16_t x484 = INT16_MAX;
	static uint64_t t92 = 817728472LLU;

	t92 = (((x481*x482)|x483)&x484);

	if (t92 != 32767LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x485 = -1;
	uint32_t x486 = 593722797U;
	static int32_t x487 = 1;
	static int8_t x488 = 0;
	volatile uint32_t t93 = 4110U;

	t93 = (((x485*x486)|x487)&x488);

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x489 = -1LL;
	int64_t x492 = -1LL;
	int64_t t94 = 842437000419591LL;

	t94 = (((x489*x490)|x491)&x492);

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x493 = -5;
	static uint16_t x495 = 115U;
	int32_t x496 = INT32_MIN;

	t95 = (((x493*x494)|x495)&x496);

	if (t95 != INT32_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x497 = 1139444U;
	int8_t x498 = INT8_MIN;
	static int64_t x499 = INT64_MAX;
	static volatile int64_t t96 = -270336LL;

	t96 = (((x497*x498)|x499)&x500);

	if (t96 != 18683434817356443LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x501 = INT16_MIN;
	static int8_t x502 = INT8_MIN;
	int64_t x503 = -1LL;
	int64_t t97 = -1912486961LL;

	t97 = (((x501*x502)|x503)&x504);

	if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x505 = INT16_MIN;
	int16_t x506 = INT16_MIN;
	int8_t x508 = INT8_MIN;
	volatile int32_t t98 = 841184;

	t98 = (((x505*x506)|x507)&x508);

	if (t98 != 2147483520) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x509 = 4;
	volatile uint16_t x510 = 0U;
	int8_t x511 = -1;
	uint64_t x512 = 7188LLU;

	t99 = (((x509*x510)|x511)&x512);

	if (t99 != 7188LLU) { NG(); } else { ; }
	
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

