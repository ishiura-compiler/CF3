#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x1 = 43;
int8_t x2 = 16;
static int32_t x5 = 7;
int8_t x6 = INT8_MIN;
volatile uint8_t x8 = 47U;
static volatile uint64_t x13 = 3119574LLU;
uint16_t x14 = 4948U;
volatile uint32_t x24 = 1426780832U;
volatile int64_t t6 = 337521LL;
int8_t x50 = INT8_MIN;
uint16_t x61 = 3U;
static volatile uint32_t x64 = UINT32_MAX;
int16_t x81 = 16;
static int64_t x84 = -2499937340228091072LL;
volatile int32_t t14 = -211627;
int32_t x112 = INT32_MIN;
int64_t x132 = -1LL;
int8_t x146 = INT8_MIN;
static volatile int64_t x147 = -443730018LL;
volatile int64_t x148 = -1LL;
static volatile uint32_t x150 = 58U;
uint8_t x155 = 7U;
int32_t x157 = 5811658;
int32_t x164 = -1018;
static int8_t x170 = 28;
volatile int64_t x175 = INT64_MIN;
volatile uint8_t x178 = 7U;
uint16_t x179 = 3948U;
uint8_t x193 = 0U;
int32_t x201 = 14;
static uint64_t t33 = 5LLU;
int8_t x214 = -1;
int64_t x216 = INT64_MIN;
int16_t x243 = INT16_MIN;
uint16_t x245 = 64U;
int8_t x248 = -1;
int32_t t39 = 0;
int64_t x259 = INT64_MIN;
volatile int32_t t40 = 1;
uint64_t t42 = 501864731485721821LLU;
static uint16_t x273 = 4U;
volatile int16_t x275 = -641;
int16_t x276 = -1;
volatile int32_t t43 = -4;
volatile int32_t t44 = 11544197;
uint8_t x289 = 23U;
static int64_t x291 = INT64_MIN;
volatile uint32_t t46 = 215665U;
int32_t x301 = 120161039;
static uint16_t x306 = 4024U;
volatile uint16_t x318 = UINT16_MAX;
int32_t t49 = 1;
int64_t x322 = -1LL;
int8_t x323 = INT8_MIN;
uint64_t t50 = 16792099297LLU;
int64_t x332 = INT64_MIN;
uint16_t x340 = 418U;
uint16_t x346 = UINT16_MAX;
volatile uint32_t t54 = 12U;
uint8_t x353 = UINT8_MAX;
int16_t x354 = -1;
static volatile int64_t t57 = -200246384LL;
volatile int16_t x390 = 0;
int64_t t62 = 1915107LL;
uint64_t x445 = UINT64_MAX;
int64_t x447 = -1LL;
uint64_t t65 = 1160416363LLU;
static int64_t x454 = -202371615945057560LL;
uint32_t x455 = 114846817U;
uint64_t t67 = 203229713695LLU;
int8_t x486 = INT8_MIN;
volatile int32_t t69 = -88634;
int8_t x498 = INT8_MIN;
static int64_t t70 = -249186LL;
volatile int64_t x523 = INT64_MIN;
volatile int8_t x557 = 1;
uint8_t x577 = 115U;
uint64_t x580 = 1388LLU;
volatile int64_t x581 = INT64_MAX;
volatile int64_t x586 = INT64_MIN;
static int64_t x588 = -8458847438477804LL;
volatile uint64_t t81 = 320388787240LLU;
uint16_t x598 = 1U;
volatile uint8_t x615 = 3U;
static volatile int16_t x631 = 9;
int8_t x632 = -1;
int32_t x642 = -1;
int8_t x646 = -22;
int64_t x650 = -1LL;
int32_t x659 = -1006979;
uint64_t x669 = 3825253989030608384LLU;
int32_t x671 = INT32_MIN;
static uint64_t x684 = 62192589LLU;
int32_t x703 = -306754117;
int64_t x713 = INT64_MAX;
int64_t x714 = INT64_MIN;
volatile int64_t t95 = -28LL;
uint16_t x721 = UINT16_MAX;
uint8_t x725 = 5U;
int16_t x728 = INT16_MIN;
static int32_t x731 = INT32_MAX;
uint32_t x735 = 31736587U;


void f0(void) {
	int64_t x3 = -1LL;
	int32_t x4 = -50337003;
	static volatile int32_t t0 = 8999727;

	t0 = ((x1>>(x2<x3))/x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x7 = -1;
	volatile int32_t t1 = 2;

	t1 = ((x5>>(x6<x7))/x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MAX;
	volatile uint64_t x10 = 50337911LLU;
	static int64_t x11 = 6LL;
	volatile int32_t x12 = -16858;
	volatile int32_t t2 = 49136132;

	t2 = ((x9>>(x10<x11))/x12);

	if (t2 != -127386) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x15 = -35;
	int8_t x16 = INT8_MIN;
	static uint64_t t3 = 648256444LLU;

	t3 = ((x13>>(x14<x15))/x16);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = UINT32_MAX;
	uint8_t x18 = 13U;
	static volatile int8_t x19 = 40;
	volatile uint32_t x20 = 345315U;
	uint32_t t4 = 5951U;

	t4 = ((x17>>(x18<x19))/x20);

	if (t4 != 6218U) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = UINT8_MAX;
	volatile int64_t x22 = 5817296849655625LL;
	int8_t x23 = INT8_MAX;
	volatile uint32_t t5 = 117577U;

	t5 = ((x21>>(x22<x23))/x24);

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x45 = UINT16_MAX;
	int16_t x46 = INT16_MAX;
	int64_t x47 = -1LL;
	int64_t x48 = -145227112LL;

	t6 = ((x45>>(x46<x47))/x48);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x49 = 32;
	int8_t x51 = -10;
	int8_t x52 = 7;
	int32_t t7 = 1296062;

	t7 = ((x49>>(x50<x51))/x52);

	if (t7 != 2) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x62 = 26373085LL;
	static int16_t x63 = INT16_MIN;
	volatile uint32_t t8 = 5470U;

	t8 = ((x61>>(x62<x63))/x64);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x65 = 1;
	static uint16_t x66 = 54U;
	int16_t x67 = -1;
	volatile uint16_t x68 = 1U;
	int32_t t9 = 103;

	t9 = ((x65>>(x66<x67))/x68);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x69 = 4U;
	int32_t x70 = -1;
	volatile uint32_t x71 = 1513735U;
	volatile uint32_t x72 = 54U;
	static uint32_t t10 = 3976031U;

	t10 = ((x69>>(x70<x71))/x72);

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x82 = 1;
	int8_t x83 = INT8_MAX;
	int64_t t11 = -13382171339964946LL;

	t11 = ((x81>>(x82<x83))/x84);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x85 = UINT16_MAX;
	uint8_t x86 = 4U;
	uint8_t x87 = UINT8_MAX;
	int64_t x88 = INT64_MIN;
	int64_t t12 = 63692917LL;

	t12 = ((x85>>(x86<x87))/x88);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x89 = 19;
	int64_t x90 = 488785987064328LL;
	static uint8_t x91 = UINT8_MAX;
	int32_t x92 = INT32_MIN;
	static volatile int32_t t13 = 653;

	t13 = ((x89>>(x90<x91))/x92);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x93 = 1;
	static uint64_t x94 = UINT64_MAX;
	volatile uint16_t x95 = 3U;
	int8_t x96 = -1;

	t14 = ((x93>>(x94<x95))/x96);

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x101 = 0;
	volatile uint16_t x102 = 5169U;
	static uint8_t x103 = 0U;
	static volatile int8_t x104 = -11;
	static volatile int32_t t15 = 19145355;

	t15 = ((x101>>(x102<x103))/x104);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x109 = 46778989985318LL;
	static uint16_t x110 = UINT16_MAX;
	int16_t x111 = INT16_MIN;
	volatile int64_t t16 = 39LL;

	t16 = ((x109>>(x110<x111))/x112);

	if (t16 != -21783LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x113 = UINT32_MAX;
	static int32_t x114 = INT32_MIN;
	volatile int64_t x115 = 59222852729170LL;
	uint32_t x116 = 76U;
	uint32_t t17 = 3U;

	t17 = ((x113>>(x114<x115))/x116);

	if (t17 != 28256363U) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x117 = UINT32_MAX;
	static volatile uint64_t x118 = 2395539217111LLU;
	uint16_t x119 = 399U;
	int16_t x120 = -1;
	uint32_t t18 = 577U;

	t18 = ((x117>>(x118<x119))/x120);

	if (t18 != 1U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x129 = 363464947207LL;
	static int64_t x130 = 343793739727LL;
	int32_t x131 = INT32_MIN;
	volatile int64_t t19 = -465372603357706070LL;

	t19 = ((x129>>(x130<x131))/x132);

	if (t19 != -363464947207LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x133 = 112U;
	int8_t x134 = INT8_MIN;
	volatile int16_t x135 = INT16_MIN;
	volatile int8_t x136 = -1;
	int32_t t20 = 13858;

	t20 = ((x133>>(x134<x135))/x136);

	if (t20 != -112) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x145 = UINT32_MAX;
	static int64_t t21 = -7231151LL;

	t21 = ((x145>>(x146<x147))/x148);

	if (t21 != -4294967295LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x149 = 124777760U;
	uint32_t x151 = UINT32_MAX;
	int64_t x152 = 957620104798737081LL;
	int64_t t22 = 14LL;

	t22 = ((x149>>(x150<x151))/x152);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x153 = 0U;
	int64_t x154 = -1LL;
	int32_t x156 = INT32_MAX;
	volatile int32_t t23 = -140;

	t23 = ((x153>>(x154<x155))/x156);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x158 = INT16_MIN;
	volatile int64_t x159 = INT64_MIN;
	uint8_t x160 = UINT8_MAX;
	int32_t t24 = -530;

	t24 = ((x157>>(x158<x159))/x160);

	if (t24 != 22790) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x161 = INT32_MAX;
	static int8_t x162 = INT8_MIN;
	int64_t x163 = -1188002630644LL;
	int32_t t25 = 32074345;

	t25 = ((x161>>(x162<x163))/x164);

	if (t25 != -2109512) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x165 = UINT32_MAX;
	uint8_t x166 = 79U;
	int8_t x167 = INT8_MIN;
	int16_t x168 = -1;
	uint32_t t26 = 18U;

	t26 = ((x165>>(x166<x167))/x168);

	if (t26 != 1U) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x169 = UINT8_MAX;
	uint64_t x171 = UINT64_MAX;
	uint64_t x172 = 665LLU;
	static volatile uint64_t t27 = 125384294039369716LLU;

	t27 = ((x169>>(x170<x171))/x172);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x173 = UINT64_MAX;
	int64_t x174 = INT64_MIN;
	int16_t x176 = 15;
	static uint64_t t28 = 118936LLU;

	t28 = ((x173>>(x174<x175))/x176);

	if (t28 != 1229782938247303441LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x177 = 38U;
	int8_t x180 = INT8_MAX;
	volatile int32_t t29 = 1917;

	t29 = ((x177>>(x178<x179))/x180);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x181 = 7730;
	int64_t x182 = 15731LL;
	uint32_t x183 = 794154U;
	volatile int8_t x184 = INT8_MIN;
	volatile int32_t t30 = -12699;

	t30 = ((x181>>(x182<x183))/x184);

	if (t30 != -30) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x185 = INT32_MAX;
	int8_t x186 = INT8_MIN;
	uint16_t x187 = 202U;
	static volatile uint8_t x188 = 20U;
	volatile int32_t t31 = 6781354;

	t31 = ((x185>>(x186<x187))/x188);

	if (t31 != 53687091) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x194 = -1;
	int16_t x195 = INT16_MAX;
	int16_t x196 = INT16_MIN;
	int32_t t32 = -1228;

	t32 = ((x193>>(x194<x195))/x196);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x202 = UINT32_MAX;
	int64_t x203 = -527172275LL;
	uint64_t x204 = UINT64_MAX;

	t33 = ((x201>>(x202<x203))/x204);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x209 = 5U;
	uint8_t x210 = UINT8_MAX;
	int16_t x211 = INT16_MIN;
	volatile int8_t x212 = 29;
	volatile int32_t t34 = -61;

	t34 = ((x209>>(x210<x211))/x212);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x213 = 3562U;
	int64_t x215 = 117011324257731365LL;
	int64_t t35 = -13135LL;

	t35 = ((x213>>(x214<x215))/x216);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x221 = 84U;
	int8_t x222 = INT8_MIN;
	uint64_t x223 = UINT64_MAX;
	volatile int32_t x224 = -38564200;
	int32_t t36 = 880;

	t36 = ((x221>>(x222<x223))/x224);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x237 = 1556003LL;
	static int8_t x238 = 23;
	volatile uint8_t x239 = 6U;
	int64_t x240 = -187088362353065LL;
	int64_t t37 = -453805548362865339LL;

	t37 = ((x237>>(x238<x239))/x240);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x241 = 1;
	int16_t x242 = INT16_MIN;
	volatile int16_t x244 = -3;
	volatile int32_t t38 = 127811;

	t38 = ((x241>>(x242<x243))/x244);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x246 = UINT64_MAX;
	int16_t x247 = INT16_MIN;

	t39 = ((x245>>(x246<x247))/x248);

	if (t39 != -64) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x257 = 1;
	uint16_t x258 = UINT16_MAX;
	int8_t x260 = INT8_MIN;

	t40 = ((x257>>(x258<x259))/x260);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x265 = UINT16_MAX;
	volatile int8_t x266 = -1;
	int64_t x267 = -1LL;
	int16_t x268 = 11562;
	int32_t t41 = -3323305;

	t41 = ((x265>>(x266<x267))/x268);

	if (t41 != 5) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x269 = 503089LLU;
	static volatile int8_t x270 = INT8_MAX;
	int16_t x271 = -1;
	static int32_t x272 = -15;

	t42 = ((x269>>(x270<x271))/x272);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x274 = 9671876U;

	t43 = ((x273>>(x274<x275))/x276);

	if (t43 != -2) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x281 = INT32_MAX;
	uint8_t x282 = UINT8_MAX;
	int16_t x283 = INT16_MIN;
	int16_t x284 = INT16_MAX;

	t44 = ((x281>>(x282<x283))/x284);

	if (t44 != 65538) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x290 = INT64_MIN;
	int8_t x292 = 41;
	int32_t t45 = -621248592;

	t45 = ((x289>>(x290<x291))/x292);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x297 = UINT8_MAX;
	uint16_t x298 = 18391U;
	int8_t x299 = INT8_MIN;
	uint32_t x300 = UINT32_MAX;

	t46 = ((x297>>(x298<x299))/x300);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int8_t x302 = INT8_MAX;
	static int16_t x303 = INT16_MAX;
	volatile uint64_t x304 = 908826579365824LLU;
	volatile uint64_t t47 = 179440LLU;

	t47 = ((x301>>(x302<x303))/x304);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x305 = 3665U;
	int16_t x307 = INT16_MIN;
	int8_t x308 = INT8_MIN;
	volatile uint32_t t48 = 1519828U;

	t48 = ((x305>>(x306<x307))/x308);

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x317 = UINT8_MAX;
	uint32_t x319 = 319U;
	uint16_t x320 = 20U;

	t49 = ((x317>>(x318<x319))/x320);

	if (t49 != 12) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x321 = 2U;
	uint64_t x324 = 1209592LLU;

	t50 = ((x321>>(x322<x323))/x324);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x329 = INT32_MAX;
	volatile int16_t x330 = INT16_MIN;
	int16_t x331 = INT16_MAX;
	static int64_t t51 = -12LL;

	t51 = ((x329>>(x330<x331))/x332);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x337 = 1106710082602390173LL;
	static uint8_t x338 = 8U;
	int16_t x339 = INT16_MIN;
	int64_t t52 = 5042835537327LL;

	t52 = ((x337>>(x338<x339))/x340);

	if (t52 != 2647631776560742LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x341 = INT32_MAX;
	uint8_t x342 = 1U;
	static int64_t x343 = INT64_MIN;
	int16_t x344 = INT16_MIN;
	volatile int32_t t53 = -1;

	t53 = ((x341>>(x342<x343))/x344);

	if (t53 != -65535) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x345 = 385513U;
	static int32_t x347 = INT32_MIN;
	uint32_t x348 = 4114001U;

	t54 = ((x345>>(x346<x347))/x348);

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x355 = INT32_MIN;
	int32_t x356 = INT32_MAX;
	int32_t t55 = 366046;

	t55 = ((x353>>(x354<x355))/x356);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x357 = INT8_MAX;
	uint64_t x358 = 285043LLU;
	int16_t x359 = -1741;
	int32_t x360 = 60314163;
	int32_t t56 = -1016;

	t56 = ((x357>>(x358<x359))/x360);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x373 = 56880319149636LL;
	int32_t x374 = INT32_MIN;
	static int32_t x375 = 1391078;
	int16_t x376 = INT16_MIN;

	t57 = ((x373>>(x374<x375))/x376);

	if (t57 != -867924791LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x377 = UINT32_MAX;
	static volatile int16_t x378 = 21;
	int64_t x379 = -1LL;
	uint16_t x380 = UINT16_MAX;
	volatile uint32_t t58 = 1505760U;

	t58 = ((x377>>(x378<x379))/x380);

	if (t58 != 65537U) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x385 = UINT32_MAX;
	uint32_t x386 = 267582U;
	volatile int64_t x387 = INT64_MIN;
	int32_t x388 = 59;
	uint32_t t59 = 98524156U;

	t59 = ((x385>>(x386<x387))/x388);

	if (t59 != 72796055U) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x389 = INT64_MAX;
	int32_t x391 = -1;
	volatile int16_t x392 = INT16_MIN;
	int64_t t60 = -241740276404LL;

	t60 = ((x389>>(x390<x391))/x392);

	if (t60 != -281474976710655LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x409 = UINT16_MAX;
	uint32_t x410 = UINT32_MAX;
	static int8_t x411 = 0;
	int32_t x412 = INT32_MIN;
	volatile int32_t t61 = -51;

	t61 = ((x409>>(x410<x411))/x412);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x413 = UINT16_MAX;
	uint32_t x414 = UINT32_MAX;
	int32_t x415 = -4;
	int64_t x416 = INT64_MIN;

	t62 = ((x413>>(x414<x415))/x416);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x417 = 467407U;
	static volatile int8_t x418 = 1;
	static volatile int8_t x419 = 0;
	int8_t x420 = -1;
	static volatile uint32_t t63 = 7U;

	t63 = ((x417>>(x418<x419))/x420);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x429 = 14U;
	int16_t x430 = INT16_MAX;
	int8_t x431 = INT8_MAX;
	int16_t x432 = -2;
	int32_t t64 = 120501766;

	t64 = ((x429>>(x430<x431))/x432);

	if (t64 != -7) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int8_t x446 = INT8_MIN;
	uint32_t x448 = 614983577U;

	t65 = ((x445>>(x446<x447))/x448);

	if (t65 != 14997753406LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x453 = 107U;
	static int16_t x456 = INT16_MAX;
	int32_t t66 = -107100;

	t66 = ((x453>>(x454<x455))/x456);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint64_t x461 = 5303569LLU;
	int16_t x462 = INT16_MIN;
	uint64_t x463 = UINT64_MAX;
	int32_t x464 = INT32_MAX;

	t67 = ((x461>>(x462<x463))/x464);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x485 = INT8_MAX;
	int16_t x487 = 827;
	int32_t x488 = -3;
	int32_t t68 = -87476;

	t68 = ((x485>>(x486<x487))/x488);

	if (t68 != -21) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x493 = 273471290;
	uint16_t x494 = 65U;
	uint32_t x495 = UINT32_MAX;
	uint16_t x496 = 363U;

	t69 = ((x493>>(x494<x495))/x496);

	if (t69 != 376682) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x497 = UINT16_MAX;
	volatile uint64_t x499 = UINT64_MAX;
	int64_t x500 = -26767174041134LL;

	t70 = ((x497>>(x498<x499))/x500);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x505 = 24030U;
	uint16_t x506 = UINT16_MAX;
	volatile int16_t x507 = INT16_MIN;
	int64_t x508 = INT64_MIN;
	volatile int64_t t71 = -1350203LL;

	t71 = ((x505>>(x506<x507))/x508);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x509 = 7322797636LLU;
	uint8_t x510 = UINT8_MAX;
	int8_t x511 = -1;
	int32_t x512 = 29289;
	volatile uint64_t t72 = 6LLU;

	t72 = ((x509>>(x510<x511))/x512);

	if (t72 != 250018LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x513 = UINT8_MAX;
	volatile int8_t x514 = INT8_MIN;
	uint64_t x515 = UINT64_MAX;
	int16_t x516 = -1;
	static volatile int32_t t73 = 2397178;

	t73 = ((x513>>(x514<x515))/x516);

	if (t73 != -127) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x521 = 20U;
	int64_t x522 = INT64_MIN;
	static int32_t x524 = INT32_MIN;
	static volatile uint32_t t74 = 1599550737U;

	t74 = ((x521>>(x522<x523))/x524);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x541 = 0LL;
	int16_t x542 = -427;
	static int64_t x543 = INT64_MIN;
	int8_t x544 = INT8_MAX;
	int64_t t75 = -1710959281LL;

	t75 = ((x541>>(x542<x543))/x544);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x549 = 4U;
	int16_t x550 = INT16_MIN;
	uint8_t x551 = UINT8_MAX;
	int8_t x552 = 3;
	volatile uint32_t t76 = 128682U;

	t76 = ((x549>>(x550<x551))/x552);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x558 = UINT8_MAX;
	uint8_t x559 = 10U;
	int16_t x560 = 1;
	volatile int32_t t77 = -1381;

	t77 = ((x557>>(x558<x559))/x560);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x578 = 712473U;
	int64_t x579 = -1066LL;
	volatile uint64_t t78 = 0LLU;

	t78 = ((x577>>(x578<x579))/x580);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x582 = 1555U;
	static int32_t x583 = INT32_MAX;
	int64_t x584 = -10007LL;
	int64_t t79 = -2010274483246240LL;

	t79 = ((x581>>(x582<x583))/x584);

	if (t79 != -460846009635993LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x585 = INT64_MAX;
	static volatile int64_t x587 = -1LL;
	int64_t t80 = -1LL;

	t80 = ((x585>>(x586<x587))/x588);

	if (t80 != -545LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x589 = 186930947U;
	int32_t x590 = INT32_MIN;
	volatile int8_t x591 = 1;
	uint64_t x592 = 1277467LLU;

	t81 = ((x589>>(x590<x591))/x592);

	if (t81 != 73LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x597 = 5769U;
	static int16_t x599 = INT16_MIN;
	int16_t x600 = -1;
	volatile uint32_t t82 = 23054U;

	t82 = ((x597>>(x598<x599))/x600);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x613 = 44343216513LLU;
	uint16_t x614 = 2U;
	volatile int32_t x616 = INT32_MIN;
	volatile uint64_t t83 = 0LLU;

	t83 = ((x613>>(x614<x615))/x616);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x617 = 1017577U;
	static int16_t x618 = INT16_MAX;
	volatile int32_t x619 = INT32_MAX;
	int8_t x620 = 13;
	volatile uint32_t t84 = 500389715U;

	t84 = ((x617>>(x618<x619))/x620);

	if (t84 != 39137U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x629 = 430408183241LL;
	uint64_t x630 = 137720310214728LLU;
	int64_t t85 = -22528LL;

	t85 = ((x629>>(x630<x631))/x632);

	if (t85 != -430408183241LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x641 = 246LLU;
	int8_t x643 = -1;
	static uint32_t x644 = 5U;
	static uint64_t t86 = 54887173128701451LLU;

	t86 = ((x641>>(x642<x643))/x644);

	if (t86 != 49LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x645 = 444377LLU;
	static volatile int64_t x647 = 1LL;
	uint8_t x648 = 13U;
	static volatile uint64_t t87 = 74LLU;

	t87 = ((x645>>(x646<x647))/x648);

	if (t87 != 17091LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x649 = UINT16_MAX;
	static int32_t x651 = 1914572;
	static uint32_t x652 = 1U;
	volatile uint32_t t88 = 788U;

	t88 = ((x649>>(x650<x651))/x652);

	if (t88 != 32767U) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x657 = 1U;
	uint64_t x658 = UINT64_MAX;
	int64_t x660 = INT64_MAX;
	int64_t t89 = -7LL;

	t89 = ((x657>>(x658<x659))/x660);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x665 = 6560900;
	uint64_t x666 = UINT64_MAX;
	volatile uint64_t x667 = 1490367984569602LLU;
	int8_t x668 = INT8_MIN;
	volatile int32_t t90 = -168903;

	t90 = ((x665>>(x666<x667))/x668);

	if (t90 != -51257) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x670 = -1;
	int16_t x672 = INT16_MAX;
	volatile uint64_t t91 = 243349828LLU;

	t91 = ((x669>>(x670<x671))/x672);

	if (t91 != 116741050112326LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x677 = 31U;
	int16_t x678 = 39;
	int32_t x679 = INT32_MIN;
	static int64_t x680 = -171251LL;
	int64_t t92 = -60345596LL;

	t92 = ((x677>>(x678<x679))/x680);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x681 = 3886U;
	int32_t x682 = 15401440;
	int16_t x683 = INT16_MIN;
	static uint64_t t93 = 8854223935161314094LLU;

	t93 = ((x681>>(x682<x683))/x684);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x701 = 92;
	uint64_t x702 = 145502432762338749LLU;
	static uint32_t x704 = 1530433399U;
	static volatile uint32_t t94 = 29819U;

	t94 = ((x701>>(x702<x703))/x704);

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x715 = INT32_MIN;
	int64_t x716 = -1LL;

	t95 = ((x713>>(x714<x715))/x716);

	if (t95 != -4611686018427387903LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x722 = 4367078571LLU;
	int16_t x723 = 47;
	static volatile int8_t x724 = -1;
	volatile int32_t t96 = -65;

	t96 = ((x721>>(x722<x723))/x724);

	if (t96 != -65535) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x726 = -56328986569LL;
	volatile int64_t x727 = 166261LL;
	volatile int32_t t97 = 30250282;

	t97 = ((x725>>(x726<x727))/x728);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x729 = 7U;
	int16_t x730 = INT16_MAX;
	volatile int8_t x732 = 1;
	int32_t t98 = 2;

	t98 = ((x729>>(x730<x731))/x732);

	if (t98 != 3) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x733 = 22572U;
	uint32_t x734 = 1320510U;
	int8_t x736 = -1;
	int32_t t99 = 7356904;

	t99 = ((x733>>(x734<x735))/x736);

	if (t99 != -11286) { NG(); } else { ; }
	
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

