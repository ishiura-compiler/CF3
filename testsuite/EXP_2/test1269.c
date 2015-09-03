#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x3 = -1;
volatile uint64_t x7 = 336321936377998LLU;
int32_t t2 = -867635927;
int64_t x40 = 24LL;
static int8_t x51 = INT8_MIN;
int32_t t6 = -74;
int8_t x60 = -1;
int32_t x70 = 1788902;
uint16_t x71 = 9885U;
volatile uint8_t x78 = UINT8_MAX;
volatile int16_t x79 = 1718;
volatile int32_t t14 = 17547;
uint32_t x107 = UINT32_MAX;
uint64_t x111 = 470196611LLU;
uint64_t x117 = 24400586614203LLU;
int8_t x120 = INT8_MAX;
int32_t x143 = 132200125;
uint32_t x150 = 27036U;
int8_t x151 = INT8_MAX;
uint8_t x157 = 0U;
uint32_t x162 = 16U;
int16_t x167 = INT16_MIN;
static int8_t x168 = INT8_MAX;
uint64_t x169 = UINT64_MAX;
int8_t x171 = 55;
int64_t x190 = INT64_MIN;
static int16_t x192 = -1;
int64_t x204 = -1LL;
int8_t x213 = INT8_MAX;
uint32_t x214 = 725U;
int8_t x234 = -1;
uint32_t x237 = UINT32_MAX;
int64_t x249 = INT64_MAX;
int16_t x252 = INT16_MIN;
volatile uint64_t x255 = 236856485LLU;
uint32_t x267 = 167722U;
volatile int32_t t39 = -1;
volatile uint32_t x289 = 4U;
volatile uint32_t x290 = 1U;
int64_t x297 = INT64_MAX;
volatile uint16_t x303 = 503U;
volatile int32_t t43 = -2;
uint64_t x310 = 585407LLU;
volatile int8_t x343 = INT8_MAX;
uint64_t x344 = 21LLU;
volatile int32_t t47 = -102;
int8_t x350 = INT8_MIN;
volatile int16_t x373 = 534;
uint64_t x378 = UINT64_MAX;
volatile uint64_t x381 = 89LLU;
static int32_t t54 = -75705;
uint16_t x410 = 18430U;
int16_t x426 = INT16_MIN;
int32_t t58 = 495683501;
uint32_t x429 = 3603U;
int8_t x430 = INT8_MAX;
uint16_t x432 = 0U;
static uint64_t x436 = 57315LLU;
uint16_t x438 = 1127U;
int8_t x463 = 59;
int8_t x474 = INT8_MAX;
int8_t x478 = -1;
static int32_t t67 = -98;
volatile int32_t t68 = 395125219;
int8_t x497 = INT8_MAX;
volatile int32_t t69 = 4616035;
static volatile int32_t t70 = 496055;
int8_t x531 = INT8_MIN;
int16_t x532 = 39;
volatile int32_t t71 = -38;
uint16_t x537 = 23890U;
static int32_t t73 = 205117;
static int32_t t75 = -51;
int16_t x590 = INT16_MIN;
int64_t x593 = INT64_MAX;
uint16_t x594 = 17U;
volatile int64_t x638 = INT64_MAX;
uint16_t x639 = UINT16_MAX;
uint16_t x659 = 406U;
volatile int32_t t88 = 33416633;
uint64_t x666 = UINT64_MAX;
uint32_t x668 = 60726866U;
volatile int32_t t91 = -660273216;
uint16_t x685 = 556U;
int16_t x691 = -1;
int64_t x704 = INT64_MIN;
volatile int32_t t95 = -11155451;
int32_t x716 = INT32_MIN;
int32_t t96 = -6569778;
static uint32_t x741 = UINT32_MAX;
static volatile uint64_t x742 = 240871293732LLU;


void f0(void) {
	int8_t x1 = 0;
	volatile int16_t x2 = 635;
	uint64_t x4 = 90LLU;
	static volatile int32_t t0 = -1628;

	t0 = ((x1>>(x2==x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MAX;
	uint8_t x6 = UINT8_MAX;
	static volatile int64_t x8 = -1LL;
	volatile int32_t t1 = 12;

	t1 = ((x5>>(x6==x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x17 = 37U;
	volatile int32_t x18 = -2139;
	volatile uint32_t x19 = 10853U;
	int64_t x20 = INT64_MIN;

	t2 = ((x17>>(x18==x19))==x20);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x21 = 47U;
	int64_t x22 = INT64_MIN;
	uint8_t x23 = 16U;
	volatile uint64_t x24 = 20550967LLU;
	static volatile int32_t t3 = -734946844;

	t3 = ((x21>>(x22==x23))==x24);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x37 = INT16_MAX;
	int64_t x38 = INT64_MIN;
	int16_t x39 = INT16_MIN;
	int32_t t4 = -280495;

	t4 = ((x37>>(x38==x39))==x40);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x45 = UINT8_MAX;
	uint16_t x46 = 21U;
	static int8_t x47 = INT8_MAX;
	int32_t x48 = -1;
	volatile int32_t t5 = -26764801;

	t5 = ((x45>>(x46==x47))==x48);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x49 = UINT64_MAX;
	uint16_t x50 = 106U;
	uint32_t x52 = 0U;

	t6 = ((x49>>(x50==x51))==x52);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x57 = 12;
	int32_t x58 = 524;
	volatile uint16_t x59 = 1696U;
	volatile int32_t t7 = 100557145;

	t7 = ((x57>>(x58==x59))==x60);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x69 = 25U;
	uint32_t x72 = 5U;
	int32_t t8 = -13387;

	t8 = ((x69>>(x70==x71))==x72);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x77 = 3568041LL;
	uint32_t x80 = UINT32_MAX;
	volatile int32_t t9 = 1;

	t9 = ((x77>>(x78==x79))==x80);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x81 = 21;
	int8_t x82 = INT8_MIN;
	volatile int64_t x83 = 321807665370LL;
	uint64_t x84 = UINT64_MAX;
	volatile int32_t t10 = 1948;

	t10 = ((x81>>(x82==x83))==x84);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x85 = UINT16_MAX;
	int16_t x86 = -1;
	int16_t x87 = -1;
	int64_t x88 = 29215528LL;
	int32_t t11 = 3;

	t11 = ((x85>>(x86==x87))==x88);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x89 = INT32_MAX;
	uint32_t x90 = 10642U;
	int8_t x91 = -2;
	static volatile int64_t x92 = -1LL;
	int32_t t12 = -97;

	t12 = ((x89>>(x90==x91))==x92);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int8_t x93 = 30;
	int32_t x94 = -76;
	volatile int64_t x95 = INT64_MIN;
	volatile int16_t x96 = INT16_MIN;
	static volatile int32_t t13 = 8201;

	t13 = ((x93>>(x94==x95))==x96);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x97 = 728U;
	uint32_t x98 = 296064U;
	static uint16_t x99 = 0U;
	uint16_t x100 = 1U;

	t14 = ((x97>>(x98==x99))==x100);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int8_t x101 = INT8_MAX;
	int16_t x102 = INT16_MIN;
	static int8_t x103 = INT8_MAX;
	int64_t x104 = INT64_MIN;
	volatile int32_t t15 = -3;

	t15 = ((x101>>(x102==x103))==x104);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x105 = 132481LLU;
	uint8_t x106 = 2U;
	uint64_t x108 = 120047071298856LLU;
	volatile int32_t t16 = 23;

	t16 = ((x105>>(x106==x107))==x108);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint8_t x109 = 1U;
	int16_t x110 = -1;
	int64_t x112 = -1444332851105030103LL;
	static volatile int32_t t17 = 26221312;

	t17 = ((x109>>(x110==x111))==x112);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x118 = INT8_MIN;
	int32_t x119 = INT32_MAX;
	static int32_t t18 = 16360307;

	t18 = ((x117>>(x118==x119))==x120);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x125 = UINT8_MAX;
	int8_t x126 = INT8_MIN;
	int64_t x127 = INT64_MIN;
	int16_t x128 = -1;
	volatile int32_t t19 = -182244069;

	t19 = ((x125>>(x126==x127))==x128);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x129 = 218U;
	uint16_t x130 = UINT16_MAX;
	uint8_t x131 = UINT8_MAX;
	uint16_t x132 = 0U;
	int32_t t20 = -1;

	t20 = ((x129>>(x130==x131))==x132);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x141 = INT16_MAX;
	static volatile int16_t x142 = INT16_MIN;
	volatile uint32_t x144 = 931U;
	int32_t t21 = -2742;

	t21 = ((x141>>(x142==x143))==x144);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x149 = 0;
	int64_t x152 = INT64_MAX;
	int32_t t22 = -6353833;

	t22 = ((x149>>(x150==x151))==x152);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x158 = UINT8_MAX;
	static int16_t x159 = 12;
	volatile int8_t x160 = INT8_MIN;
	int32_t t23 = 369;

	t23 = ((x157>>(x158==x159))==x160);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x161 = 206U;
	int64_t x163 = 13LL;
	uint8_t x164 = 30U;
	volatile int32_t t24 = 55163;

	t24 = ((x161>>(x162==x163))==x164);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x165 = INT8_MAX;
	int32_t x166 = 42147679;
	int32_t t25 = 5;

	t25 = ((x165>>(x166==x167))==x168);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x170 = INT16_MAX;
	int16_t x172 = INT16_MIN;
	static volatile int32_t t26 = 59523771;

	t26 = ((x169>>(x170==x171))==x172);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x189 = 0U;
	int32_t x191 = -1;
	static volatile int32_t t27 = -84;

	t27 = ((x189>>(x190==x191))==x192);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x201 = 60519379322946034LLU;
	int8_t x202 = INT8_MIN;
	volatile uint16_t x203 = UINT16_MAX;
	int32_t t28 = -3129737;

	t28 = ((x201>>(x202==x203))==x204);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x215 = -1LL;
	static int16_t x216 = INT16_MIN;
	volatile int32_t t29 = -872239;

	t29 = ((x213>>(x214==x215))==x216);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x225 = INT32_MAX;
	volatile int8_t x226 = 0;
	static int32_t x227 = -26105769;
	uint32_t x228 = 14532U;
	volatile int32_t t30 = -6526256;

	t30 = ((x225>>(x226==x227))==x228);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x229 = UINT16_MAX;
	int16_t x230 = -1;
	int8_t x231 = INT8_MIN;
	static volatile int64_t x232 = -1LL;
	int32_t t31 = 26843;

	t31 = ((x229>>(x230==x231))==x232);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x233 = 46699U;
	uint64_t x235 = 1690679075277962221LLU;
	int64_t x236 = -1LL;
	volatile int32_t t32 = 38;

	t32 = ((x233>>(x234==x235))==x236);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x238 = -1;
	static uint32_t x239 = UINT32_MAX;
	int32_t x240 = -1;
	volatile int32_t t33 = -21;

	t33 = ((x237>>(x238==x239))==x240);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x241 = 25534U;
	uint8_t x242 = UINT8_MAX;
	int32_t x243 = -4;
	volatile int8_t x244 = -1;
	volatile int32_t t34 = -751;

	t34 = ((x241>>(x242==x243))==x244);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x245 = 8U;
	static uint64_t x246 = UINT64_MAX;
	int64_t x247 = -1LL;
	int16_t x248 = -7572;
	volatile int32_t t35 = 0;

	t35 = ((x245>>(x246==x247))==x248);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x250 = UINT64_MAX;
	static int64_t x251 = -1LL;
	volatile int32_t t36 = -1;

	t36 = ((x249>>(x250==x251))==x252);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x253 = 0U;
	volatile int16_t x254 = 1;
	uint16_t x256 = 1840U;
	static int32_t t37 = 57266;

	t37 = ((x253>>(x254==x255))==x256);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x265 = UINT64_MAX;
	static int16_t x266 = INT16_MIN;
	int8_t x268 = INT8_MIN;
	int32_t t38 = -10789828;

	t38 = ((x265>>(x266==x267))==x268);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x273 = 0;
	uint64_t x274 = 115055251098LLU;
	static volatile int8_t x275 = 1;
	int8_t x276 = -1;

	t39 = ((x273>>(x274==x275))==x276);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x291 = -1;
	int64_t x292 = 139467175716365457LL;
	volatile int32_t t40 = -123996;

	t40 = ((x289>>(x290==x291))==x292);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x293 = 75U;
	int32_t x294 = INT32_MAX;
	int8_t x295 = INT8_MIN;
	uint64_t x296 = 4LLU;
	int32_t t41 = -23643;

	t41 = ((x293>>(x294==x295))==x296);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x298 = 28226U;
	uint8_t x299 = 0U;
	static int64_t x300 = -1LL;
	int32_t t42 = -616;

	t42 = ((x297>>(x298==x299))==x300);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x301 = UINT16_MAX;
	int16_t x302 = INT16_MIN;
	int16_t x304 = 2014;

	t43 = ((x301>>(x302==x303))==x304);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x309 = 102U;
	uint16_t x311 = UINT16_MAX;
	int16_t x312 = -1;
	static int32_t t44 = -23504;

	t44 = ((x309>>(x310==x311))==x312);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x313 = 20U;
	uint8_t x314 = 24U;
	volatile int64_t x315 = 2440LL;
	int32_t x316 = -1;
	int32_t t45 = 31646;

	t45 = ((x313>>(x314==x315))==x316);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x317 = 35145518LLU;
	int8_t x318 = INT8_MAX;
	uint64_t x319 = 6477707784492100LLU;
	int32_t x320 = INT32_MAX;
	int32_t t46 = -165768;

	t46 = ((x317>>(x318==x319))==x320);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x341 = 126U;
	int8_t x342 = INT8_MAX;

	t47 = ((x341>>(x342==x343))==x344);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x349 = UINT32_MAX;
	uint32_t x351 = 2078462432U;
	uint8_t x352 = 7U;
	int32_t t48 = -70;

	t48 = ((x349>>(x350==x351))==x352);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x365 = UINT64_MAX;
	static int32_t x366 = 1;
	uint32_t x367 = 155610U;
	uint16_t x368 = UINT16_MAX;
	static int32_t t49 = 660568565;

	t49 = ((x365>>(x366==x367))==x368);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x374 = INT8_MIN;
	int32_t x375 = 99;
	volatile int16_t x376 = -23;
	int32_t t50 = 3415815;

	t50 = ((x373>>(x374==x375))==x376);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x377 = UINT8_MAX;
	int8_t x379 = 29;
	volatile uint8_t x380 = UINT8_MAX;
	volatile int32_t t51 = -15828400;

	t51 = ((x377>>(x378==x379))==x380);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x382 = 15672U;
	static int8_t x383 = 1;
	volatile int16_t x384 = -1;
	static int32_t t52 = 228977;

	t52 = ((x381>>(x382==x383))==x384);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x385 = INT32_MAX;
	uint64_t x386 = 417284433172LLU;
	int32_t x387 = -1;
	int32_t x388 = INT32_MIN;
	volatile int32_t t53 = -60729;

	t53 = ((x385>>(x386==x387))==x388);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x389 = INT32_MAX;
	static int16_t x390 = INT16_MIN;
	static volatile uint8_t x391 = 1U;
	static volatile uint64_t x392 = UINT64_MAX;

	t54 = ((x389>>(x390==x391))==x392);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x397 = 10419U;
	static int32_t x398 = INT32_MIN;
	uint32_t x399 = 1U;
	int16_t x400 = INT16_MIN;
	volatile int32_t t55 = 0;

	t55 = ((x397>>(x398==x399))==x400);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x405 = 14012U;
	uint32_t x406 = 9U;
	volatile int32_t x407 = -3978029;
	int32_t x408 = INT32_MIN;
	static volatile int32_t t56 = 995;

	t56 = ((x405>>(x406==x407))==x408);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x409 = 1069943315842LL;
	int32_t x411 = -1;
	static volatile uint16_t x412 = 14U;
	static int32_t t57 = 2313473;

	t57 = ((x409>>(x410==x411))==x412);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x425 = 14U;
	uint64_t x427 = UINT64_MAX;
	uint8_t x428 = UINT8_MAX;

	t58 = ((x425>>(x426==x427))==x428);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x431 = -1;
	volatile int32_t t59 = 32464016;

	t59 = ((x429>>(x430==x431))==x432);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x433 = 488271074;
	volatile int8_t x434 = -1;
	int8_t x435 = INT8_MIN;
	volatile int32_t t60 = -30;

	t60 = ((x433>>(x434==x435))==x436);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x437 = 21108U;
	int32_t x439 = -58032;
	static volatile int64_t x440 = -1LL;
	static volatile int32_t t61 = 153239806;

	t61 = ((x437>>(x438==x439))==x440);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x441 = UINT8_MAX;
	volatile int8_t x442 = 0;
	int16_t x443 = -19;
	uint8_t x444 = 5U;
	int32_t t62 = 105256431;

	t62 = ((x441>>(x442==x443))==x444);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x449 = 50U;
	int8_t x450 = -1;
	volatile uint16_t x451 = UINT16_MAX;
	uint16_t x452 = 102U;
	volatile int32_t t63 = 169363048;

	t63 = ((x449>>(x450==x451))==x452);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x461 = 2096270U;
	int16_t x462 = INT16_MAX;
	static volatile int16_t x464 = INT16_MAX;
	int32_t t64 = 6912;

	t64 = ((x461>>(x462==x463))==x464);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x473 = 3U;
	static uint64_t x475 = 7634391490317469752LLU;
	uint64_t x476 = 285486924653840LLU;
	int32_t t65 = -642;

	t65 = ((x473>>(x474==x475))==x476);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x477 = 0;
	static int16_t x479 = -1;
	uint32_t x480 = UINT32_MAX;
	volatile int32_t t66 = 25032895;

	t66 = ((x477>>(x478==x479))==x480);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x485 = INT16_MAX;
	int32_t x486 = 25970;
	volatile int16_t x487 = INT16_MAX;
	uint32_t x488 = 1389348U;

	t67 = ((x485>>(x486==x487))==x488);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x489 = INT32_MAX;
	static volatile uint16_t x490 = 424U;
	uint64_t x491 = 878419931LLU;
	volatile uint64_t x492 = 4656LLU;

	t68 = ((x489>>(x490==x491))==x492);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x498 = -1;
	uint32_t x499 = 783315U;
	uint16_t x500 = UINT16_MAX;

	t69 = ((x497>>(x498==x499))==x500);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x509 = 165358400;
	int64_t x510 = INT64_MIN;
	int16_t x511 = INT16_MIN;
	static volatile int32_t x512 = INT32_MAX;

	t70 = ((x509>>(x510==x511))==x512);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x529 = 5U;
	int64_t x530 = INT64_MIN;

	t71 = ((x529>>(x530==x531))==x532);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x538 = 7473U;
	volatile int32_t x539 = -1;
	int16_t x540 = INT16_MIN;
	int32_t t72 = 1867;

	t72 = ((x537>>(x538==x539))==x540);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x549 = UINT32_MAX;
	volatile int32_t x550 = -11539;
	uint64_t x551 = 86571624742531813LLU;
	static volatile int32_t x552 = INT32_MAX;

	t73 = ((x549>>(x550==x551))==x552);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x561 = UINT8_MAX;
	static int8_t x562 = INT8_MIN;
	static volatile int64_t x563 = INT64_MIN;
	volatile int8_t x564 = -3;
	volatile int32_t t74 = 12284046;

	t74 = ((x561>>(x562==x563))==x564);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x565 = 37U;
	static uint8_t x566 = UINT8_MAX;
	int16_t x567 = -1;
	int16_t x568 = INT16_MIN;

	t75 = ((x565>>(x566==x567))==x568);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x569 = 0;
	uint64_t x570 = 1293102877857635LLU;
	static int64_t x571 = INT64_MAX;
	volatile uint8_t x572 = 65U;
	static volatile int32_t t76 = -30054;

	t76 = ((x569>>(x570==x571))==x572);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x573 = UINT64_MAX;
	int16_t x574 = INT16_MAX;
	static int8_t x575 = INT8_MAX;
	uint64_t x576 = 38270LLU;
	int32_t t77 = 6;

	t77 = ((x573>>(x574==x575))==x576);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x589 = 0U;
	int16_t x591 = -994;
	volatile int32_t x592 = 438838;
	volatile int32_t t78 = 1;

	t78 = ((x589>>(x590==x591))==x592);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x595 = 1034595542;
	int32_t x596 = INT32_MIN;
	volatile int32_t t79 = 15951639;

	t79 = ((x593>>(x594==x595))==x596);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x597 = 5306U;
	int64_t x598 = 62336870080LL;
	uint8_t x599 = UINT8_MAX;
	int32_t x600 = INT32_MIN;
	static int32_t t80 = 3386312;

	t80 = ((x597>>(x598==x599))==x600);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x601 = UINT64_MAX;
	uint16_t x602 = 12U;
	int64_t x603 = INT64_MIN;
	int64_t x604 = INT64_MAX;
	static int32_t t81 = 5154;

	t81 = ((x601>>(x602==x603))==x604);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x605 = 275U;
	static int8_t x606 = 9;
	uint64_t x607 = UINT64_MAX;
	static int8_t x608 = INT8_MAX;
	int32_t t82 = 44447515;

	t82 = ((x605>>(x606==x607))==x608);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x609 = UINT64_MAX;
	static uint8_t x610 = 91U;
	int32_t x611 = 1062;
	uint16_t x612 = 56U;
	static int32_t t83 = -17160;

	t83 = ((x609>>(x610==x611))==x612);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x621 = 24667LLU;
	uint32_t x622 = UINT32_MAX;
	static uint8_t x623 = 4U;
	uint16_t x624 = 982U;
	int32_t t84 = -56153;

	t84 = ((x621>>(x622==x623))==x624);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x625 = UINT8_MAX;
	static int8_t x626 = 1;
	volatile uint16_t x627 = 3775U;
	int64_t x628 = INT64_MIN;
	volatile int32_t t85 = 4;

	t85 = ((x625>>(x626==x627))==x628);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x637 = UINT16_MAX;
	uint32_t x640 = 16U;
	int32_t t86 = -124481;

	t86 = ((x637>>(x638==x639))==x640);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x641 = INT64_MAX;
	int8_t x642 = INT8_MIN;
	uint16_t x643 = UINT16_MAX;
	static int64_t x644 = 117731LL;
	int32_t t87 = 86;

	t87 = ((x641>>(x642==x643))==x644);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x657 = 6;
	uint8_t x658 = UINT8_MAX;
	int32_t x660 = -32;

	t88 = ((x657>>(x658==x659))==x660);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x661 = UINT64_MAX;
	int8_t x662 = 0;
	static int8_t x663 = INT8_MAX;
	int16_t x664 = 3571;
	int32_t t89 = -56;

	t89 = ((x661>>(x662==x663))==x664);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x665 = 8613316008LL;
	int32_t x667 = INT32_MIN;
	static volatile int32_t t90 = -477257619;

	t90 = ((x665>>(x666==x667))==x668);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x673 = INT64_MAX;
	int16_t x674 = INT16_MIN;
	int16_t x675 = INT16_MIN;
	int32_t x676 = -6994;

	t91 = ((x673>>(x674==x675))==x676);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x686 = 140926732U;
	int16_t x687 = -1;
	int32_t x688 = INT32_MIN;
	int32_t t92 = -4943;

	t92 = ((x685>>(x686==x687))==x688);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x689 = 105;
	uint64_t x690 = UINT64_MAX;
	int32_t x692 = -11053;
	volatile int32_t t93 = -157;

	t93 = ((x689>>(x690==x691))==x692);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint8_t x697 = UINT8_MAX;
	int8_t x698 = 25;
	volatile uint8_t x699 = UINT8_MAX;
	volatile uint32_t x700 = 136130U;
	volatile int32_t t94 = 3829;

	t94 = ((x697>>(x698==x699))==x700);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x701 = 18;
	int8_t x702 = INT8_MAX;
	int8_t x703 = INT8_MIN;

	t95 = ((x701>>(x702==x703))==x704);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x713 = 908794431U;
	int32_t x714 = -1;
	uint8_t x715 = UINT8_MAX;

	t96 = ((x713>>(x714==x715))==x716);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint32_t x733 = 3197820U;
	uint8_t x734 = 55U;
	volatile int8_t x735 = 63;
	static uint16_t x736 = 0U;
	volatile int32_t t97 = 1772681;

	t97 = ((x733>>(x734==x735))==x736);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x743 = 16847914U;
	int8_t x744 = -1;
	volatile int32_t t98 = -93136565;

	t98 = ((x741>>(x742==x743))==x744);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x753 = 19746297LLU;
	static uint32_t x754 = 81436U;
	static int64_t x755 = INT64_MIN;
	int64_t x756 = INT64_MIN;
	volatile int32_t t99 = -1;

	t99 = ((x753>>(x754==x755))==x756);

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

