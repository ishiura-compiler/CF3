#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x10 = -1LL;
static int64_t x11 = -1LL;
int32_t x19 = INT32_MAX;
int32_t t1 = -3;
uint32_t x29 = 8663U;
uint16_t x41 = 9U;
int8_t x50 = INT8_MIN;
volatile uint16_t x57 = 1564U;
volatile int32_t t8 = 53526875;
uint8_t x81 = 5U;
volatile int64_t x82 = INT64_MIN;
uint64_t x94 = UINT64_MAX;
int32_t t12 = -498;
int8_t x117 = INT8_MAX;
volatile int32_t t13 = -185865267;
volatile uint16_t x122 = 372U;
int32_t x129 = 677;
static int8_t x136 = INT8_MAX;
uint16_t x141 = UINT16_MAX;
volatile int32_t x148 = INT32_MIN;
int32_t x184 = INT32_MAX;
volatile int32_t t21 = 6;
int16_t x189 = INT16_MAX;
static uint16_t x191 = 1U;
int8_t x211 = 0;
int64_t x213 = 628LL;
volatile int64_t x215 = -6163814004LL;
static uint16_t x221 = UINT16_MAX;
static int64_t x226 = INT64_MAX;
volatile int16_t x246 = 6;
volatile int16_t x247 = -13749;
int16_t x257 = 1;
int16_t x261 = 602;
int32_t t30 = 4795003;
int8_t x279 = 22;
int64_t x280 = 807511012LL;
uint32_t x289 = 362257988U;
volatile int64_t x302 = INT64_MIN;
int16_t x325 = INT16_MAX;
volatile uint16_t x326 = 2U;
uint64_t x331 = 377LLU;
volatile int32_t t40 = 428215508;
static volatile int32_t x336 = -1;
volatile int8_t x347 = INT8_MAX;
int8_t x349 = 4;
static int16_t x350 = -2923;
uint8_t x352 = 6U;
static uint64_t x381 = 620510922643521667LLU;
static int32_t x384 = INT32_MIN;
volatile int8_t x386 = INT8_MIN;
static int32_t x387 = INT32_MIN;
int8_t x388 = INT8_MAX;
static volatile int64_t x405 = INT64_MAX;
uint64_t x407 = UINT64_MAX;
uint64_t x408 = UINT64_MAX;
volatile uint64_t x433 = 234981LLU;
static int32_t x435 = -958073;
volatile int32_t t52 = -6087035;
volatile int32_t t53 = -795;
volatile int64_t x451 = INT64_MIN;
volatile int32_t t54 = 565490850;
int64_t x481 = INT64_MAX;
int8_t x482 = INT8_MIN;
volatile int32_t t58 = -367035;
int8_t x491 = INT8_MAX;
static uint32_t x493 = UINT32_MAX;
static int32_t x497 = INT32_MAX;
uint16_t x514 = 0U;
uint64_t x516 = 30395LLU;
volatile int64_t x521 = INT64_MAX;
static volatile int64_t x525 = INT64_MAX;
volatile uint8_t x546 = UINT8_MAX;
uint8_t x547 = 3U;
int16_t x548 = 134;
static uint64_t x551 = UINT64_MAX;
int8_t x552 = INT8_MAX;
volatile uint16_t x564 = UINT16_MAX;
uint8_t x580 = 26U;
volatile int32_t t72 = 16;
static volatile uint16_t x586 = 229U;
volatile int32_t t74 = 45;
volatile int32_t t75 = -3;
static int8_t x627 = INT8_MIN;
uint16_t x628 = 226U;
uint16_t x669 = 245U;
uint64_t x670 = 48312526994549LLU;
int32_t t80 = 3602;
static int8_t x675 = INT8_MAX;
static int32_t t82 = 1;
int64_t x687 = INT64_MAX;
static volatile uint64_t x693 = UINT64_MAX;
uint64_t x694 = 46985037862145LLU;
int32_t x696 = 10528;
uint16_t x698 = 186U;
int64_t x699 = INT64_MAX;
uint8_t x720 = 10U;
int8_t x731 = INT8_MIN;
int32_t t90 = -153;
int32_t t91 = 527122004;
int8_t x745 = 62;
int32_t t93 = -487613;
int32_t x780 = INT32_MIN;
uint64_t x785 = 4090932386LLU;
static uint8_t x795 = UINT8_MAX;
int32_t t99 = 14;


void f0(void) {
	uint64_t x9 = 1845648614208352828LLU;
	int8_t x12 = INT8_MIN;
	volatile int32_t t0 = 8836855;

	t0 = ((x9<<(x10<x11))<x12);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x17 = 681502172603799LLU;
	static int64_t x18 = -20093531883368850LL;
	int8_t x20 = INT8_MIN;

	t1 = ((x17<<(x18<x19))<x20);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x30 = 109U;
	int16_t x31 = 0;
	int64_t x32 = -1LL;
	int32_t t2 = -631;

	t2 = ((x29<<(x30<x31))<x32);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x33 = UINT16_MAX;
	uint32_t x34 = UINT32_MAX;
	static uint32_t x35 = 25U;
	int8_t x36 = INT8_MAX;
	volatile int32_t t3 = -1;

	t3 = ((x33<<(x34<x35))<x36);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x42 = INT8_MIN;
	uint64_t x43 = UINT64_MAX;
	int16_t x44 = 20;
	int32_t t4 = -176709;

	t4 = ((x41<<(x42<x43))<x44);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x49 = UINT32_MAX;
	uint32_t x51 = UINT32_MAX;
	int16_t x52 = 99;
	volatile int32_t t5 = -12049;

	t5 = ((x49<<(x50<x51))<x52);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x53 = 601679510U;
	int8_t x54 = INT8_MIN;
	static uint8_t x55 = UINT8_MAX;
	volatile uint16_t x56 = 3154U;
	static int32_t t6 = 2;

	t6 = ((x53<<(x54<x55))<x56);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x58 = UINT16_MAX;
	static int8_t x59 = -1;
	volatile uint64_t x60 = 12064730763LLU;
	volatile int32_t t7 = -6770;

	t7 = ((x57<<(x58<x59))<x60);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x73 = 312492091LLU;
	uint16_t x74 = UINT16_MAX;
	int32_t x75 = 3707465;
	static int8_t x76 = INT8_MAX;

	t8 = ((x73<<(x74<x75))<x76);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x77 = 5U;
	volatile int8_t x78 = -1;
	uint8_t x79 = UINT8_MAX;
	int8_t x80 = INT8_MAX;
	static volatile int32_t t9 = -67863;

	t9 = ((x77<<(x78<x79))<x80);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x83 = 3664100;
	uint16_t x84 = 4636U;
	volatile int32_t t10 = -148881;

	t10 = ((x81<<(x82<x83))<x84);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x93 = UINT8_MAX;
	uint32_t x95 = 532837053U;
	int64_t x96 = -1LL;
	int32_t t11 = 33093;

	t11 = ((x93<<(x94<x95))<x96);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x109 = 5LLU;
	static int32_t x110 = INT32_MIN;
	int32_t x111 = -100374724;
	volatile int64_t x112 = 4038115192944923LL;

	t12 = ((x109<<(x110<x111))<x112);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x118 = UINT32_MAX;
	static int64_t x119 = INT64_MIN;
	int16_t x120 = -1;

	t13 = ((x117<<(x118<x119))<x120);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x121 = 792U;
	static volatile int16_t x123 = 355;
	uint32_t x124 = 1232524U;
	static int32_t t14 = 15;

	t14 = ((x121<<(x122<x123))<x124);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x125 = 198LLU;
	int32_t x126 = INT32_MIN;
	int16_t x127 = -1;
	int64_t x128 = -1LL;
	volatile int32_t t15 = 8;

	t15 = ((x125<<(x126<x127))<x128);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x130 = INT8_MIN;
	int32_t x131 = INT32_MIN;
	uint8_t x132 = 6U;
	static volatile int32_t t16 = 0;

	t16 = ((x129<<(x130<x131))<x132);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x133 = 12;
	volatile int16_t x134 = -12437;
	uint16_t x135 = 2044U;
	volatile int32_t t17 = 22662;

	t17 = ((x133<<(x134<x135))<x136);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x142 = -415764;
	int64_t x143 = 6003088630286190LL;
	uint32_t x144 = 18U;
	static int32_t t18 = -84;

	t18 = ((x141<<(x142<x143))<x144);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x145 = UINT16_MAX;
	int8_t x146 = INT8_MAX;
	int8_t x147 = INT8_MIN;
	int32_t t19 = 1982711;

	t19 = ((x145<<(x146<x147))<x148);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x165 = UINT8_MAX;
	int16_t x166 = -2;
	volatile uint8_t x167 = UINT8_MAX;
	uint64_t x168 = 187LLU;
	static volatile int32_t t20 = 217993;

	t20 = ((x165<<(x166<x167))<x168);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x181 = 994198970LLU;
	int16_t x182 = INT16_MIN;
	volatile uint8_t x183 = UINT8_MAX;

	t21 = ((x181<<(x182<x183))<x184);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int16_t x190 = 1;
	int16_t x192 = 29;
	volatile int32_t t22 = -10589;

	t22 = ((x189<<(x190<x191))<x192);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x209 = 7641U;
	volatile int32_t x210 = INT32_MAX;
	volatile int32_t x212 = INT32_MIN;
	int32_t t23 = 18;

	t23 = ((x209<<(x210<x211))<x212);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x214 = 1446;
	int16_t x216 = INT16_MIN;
	int32_t t24 = 199;

	t24 = ((x213<<(x214<x215))<x216);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x222 = -1;
	static int16_t x223 = INT16_MAX;
	int64_t x224 = -1LL;
	volatile int32_t t25 = 2;

	t25 = ((x221<<(x222<x223))<x224);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x225 = INT32_MAX;
	uint8_t x227 = 3U;
	static int64_t x228 = INT64_MIN;
	int32_t t26 = 303545;

	t26 = ((x225<<(x226<x227))<x228);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x229 = UINT32_MAX;
	static uint32_t x230 = UINT32_MAX;
	uint8_t x231 = 40U;
	uint16_t x232 = 149U;
	volatile int32_t t27 = -785548;

	t27 = ((x229<<(x230<x231))<x232);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int8_t x245 = 0;
	uint16_t x248 = 4386U;
	static int32_t t28 = 172;

	t28 = ((x245<<(x246<x247))<x248);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x258 = 531LLU;
	int64_t x259 = -239869LL;
	static uint32_t x260 = 417497179U;
	volatile int32_t t29 = -67759;

	t29 = ((x257<<(x258<x259))<x260);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint16_t x262 = 2U;
	volatile int8_t x263 = 10;
	int32_t x264 = 654257;

	t30 = ((x261<<(x262<x263))<x264);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x269 = 0;
	int8_t x270 = INT8_MIN;
	int64_t x271 = INT64_MAX;
	int16_t x272 = 1;
	volatile int32_t t31 = 5;

	t31 = ((x269<<(x270<x271))<x272);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x273 = 35426LL;
	uint64_t x274 = UINT64_MAX;
	int16_t x275 = -15;
	int32_t x276 = 11670174;
	int32_t t32 = 29;

	t32 = ((x273<<(x274<x275))<x276);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x277 = INT64_MAX;
	uint64_t x278 = UINT64_MAX;
	int32_t t33 = 65244;

	t33 = ((x277<<(x278<x279))<x280);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x290 = 5471;
	int64_t x291 = INT64_MAX;
	int16_t x292 = -1081;
	volatile int32_t t34 = -10522671;

	t34 = ((x289<<(x290<x291))<x292);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x293 = INT16_MAX;
	int64_t x294 = INT64_MIN;
	uint16_t x295 = UINT16_MAX;
	uint8_t x296 = 8U;
	volatile int32_t t35 = 532508284;

	t35 = ((x293<<(x294<x295))<x296);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint8_t x301 = 1U;
	uint16_t x303 = UINT16_MAX;
	static uint32_t x304 = 6477835U;
	volatile int32_t t36 = 32734164;

	t36 = ((x301<<(x302<x303))<x304);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x313 = 17;
	int8_t x314 = INT8_MIN;
	int16_t x315 = -1;
	uint64_t x316 = 283851228693136LLU;
	static volatile int32_t t37 = -59676596;

	t37 = ((x313<<(x314<x315))<x316);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x317 = 166U;
	static volatile int8_t x318 = -11;
	int32_t x319 = 12798572;
	uint8_t x320 = 0U;
	static int32_t t38 = -12432017;

	t38 = ((x317<<(x318<x319))<x320);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x327 = 0U;
	volatile uint64_t x328 = UINT64_MAX;
	volatile int32_t t39 = 48536267;

	t39 = ((x325<<(x326<x327))<x328);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x329 = 3120925U;
	uint64_t x330 = 868120084468492LLU;
	uint8_t x332 = 57U;

	t40 = ((x329<<(x330<x331))<x332);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x333 = 18804290906LLU;
	uint16_t x334 = 12U;
	static int8_t x335 = -37;
	static int32_t t41 = 3062;

	t41 = ((x333<<(x334<x335))<x336);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x341 = 7;
	int8_t x342 = INT8_MIN;
	static int8_t x343 = INT8_MIN;
	static int8_t x344 = 12;
	int32_t t42 = -217;

	t42 = ((x341<<(x342<x343))<x344);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x345 = 22;
	int64_t x346 = INT64_MIN;
	int64_t x348 = -1LL;
	volatile int32_t t43 = 11;

	t43 = ((x345<<(x346<x347))<x348);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x351 = 973181LLU;
	static volatile int32_t t44 = 12234;

	t44 = ((x349<<(x350<x351))<x352);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x365 = 121226712U;
	static int64_t x366 = INT64_MAX;
	int64_t x367 = INT64_MIN;
	volatile uint64_t x368 = UINT64_MAX;
	volatile int32_t t45 = 1845704;

	t45 = ((x365<<(x366<x367))<x368);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x369 = 23;
	uint16_t x370 = 11609U;
	static volatile uint32_t x371 = 236730055U;
	uint32_t x372 = UINT32_MAX;
	static int32_t t46 = 122647758;

	t46 = ((x369<<(x370<x371))<x372);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int64_t x382 = -9110LL;
	volatile int64_t x383 = -1LL;
	int32_t t47 = -174081844;

	t47 = ((x381<<(x382<x383))<x384);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x385 = INT16_MAX;
	int32_t t48 = 0;

	t48 = ((x385<<(x386<x387))<x388);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x389 = 83378U;
	static uint16_t x390 = 2U;
	int16_t x391 = 16;
	int64_t x392 = INT64_MIN;
	volatile int32_t t49 = -65835;

	t49 = ((x389<<(x390<x391))<x392);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x406 = -1;
	int32_t t50 = -94075273;

	t50 = ((x405<<(x406<x407))<x408);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x417 = INT16_MAX;
	static int32_t x418 = INT32_MIN;
	int16_t x419 = INT16_MIN;
	static uint16_t x420 = 2226U;
	volatile int32_t t51 = -2833;

	t51 = ((x417<<(x418<x419))<x420);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x434 = 10LL;
	static uint8_t x436 = 89U;

	t52 = ((x433<<(x434<x435))<x436);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint8_t x437 = 31U;
	uint32_t x438 = 63U;
	int16_t x439 = -1;
	static volatile int32_t x440 = INT32_MAX;

	t53 = ((x437<<(x438<x439))<x440);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x449 = INT8_MAX;
	int32_t x450 = -1;
	int32_t x452 = 216951755;

	t54 = ((x449<<(x450<x451))<x452);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x453 = 183U;
	static volatile int32_t x454 = 13209893;
	volatile int64_t x455 = 1LL;
	volatile uint16_t x456 = 1016U;
	int32_t t55 = -350174355;

	t55 = ((x453<<(x454<x455))<x456);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x465 = 42U;
	static int16_t x466 = -1;
	int16_t x467 = -96;
	uint8_t x468 = 1U;
	int32_t t56 = -101471148;

	t56 = ((x465<<(x466<x467))<x468);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x483 = 6747LLU;
	static volatile int16_t x484 = -47;
	static int32_t t57 = -736439;

	t57 = ((x481<<(x482<x483))<x484);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x485 = 6;
	volatile uint8_t x486 = 83U;
	volatile int8_t x487 = 4;
	int8_t x488 = -1;

	t58 = ((x485<<(x486<x487))<x488);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x489 = 7924016;
	volatile uint8_t x490 = 1U;
	uint16_t x492 = UINT16_MAX;
	static volatile int32_t t59 = 62;

	t59 = ((x489<<(x490<x491))<x492);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x494 = 299193774018084864LL;
	int32_t x495 = INT32_MIN;
	static int64_t x496 = -1LL;
	volatile int32_t t60 = -129640472;

	t60 = ((x493<<(x494<x495))<x496);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x498 = 1439282U;
	uint8_t x499 = 17U;
	uint32_t x500 = UINT32_MAX;
	int32_t t61 = 15952395;

	t61 = ((x497<<(x498<x499))<x500);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x509 = INT64_MAX;
	int8_t x510 = -5;
	int64_t x511 = INT64_MIN;
	uint64_t x512 = 2809677713009LLU;
	volatile int32_t t62 = 3;

	t62 = ((x509<<(x510<x511))<x512);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x513 = INT8_MAX;
	int64_t x515 = -1LL;
	int32_t t63 = -1;

	t63 = ((x513<<(x514<x515))<x516);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x522 = 299U;
	static int16_t x523 = -75;
	int64_t x524 = INT64_MIN;
	int32_t t64 = -16268512;

	t64 = ((x521<<(x522<x523))<x524);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x526 = 12921LL;
	int32_t x527 = INT32_MIN;
	int16_t x528 = -1;
	int32_t t65 = -951785615;

	t65 = ((x525<<(x526<x527))<x528);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x533 = 2232U;
	uint32_t x534 = 1568U;
	int64_t x535 = INT64_MAX;
	int32_t x536 = INT32_MIN;
	int32_t t66 = 0;

	t66 = ((x533<<(x534<x535))<x536);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x545 = 11181;
	int32_t t67 = 129811;

	t67 = ((x545<<(x546<x547))<x548);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x549 = 8166U;
	static int32_t x550 = -1;
	volatile int32_t t68 = 134328438;

	t68 = ((x549<<(x550<x551))<x552);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x553 = INT64_MAX;
	static int8_t x554 = INT8_MIN;
	int32_t x555 = INT32_MIN;
	uint32_t x556 = 2696122U;
	int32_t t69 = 130155222;

	t69 = ((x553<<(x554<x555))<x556);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint8_t x561 = UINT8_MAX;
	int8_t x562 = INT8_MIN;
	static int32_t x563 = INT32_MIN;
	volatile int32_t t70 = 2;

	t70 = ((x561<<(x562<x563))<x564);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x569 = 0;
	uint16_t x570 = 14461U;
	volatile int32_t x571 = INT32_MIN;
	int16_t x572 = 88;
	volatile int32_t t71 = -15908929;

	t71 = ((x569<<(x570<x571))<x572);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x577 = 21781871;
	int16_t x578 = -1;
	int32_t x579 = INT32_MIN;

	t72 = ((x577<<(x578<x579))<x580);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x585 = 3926;
	static int64_t x587 = INT64_MAX;
	volatile int8_t x588 = -1;
	volatile int32_t t73 = 232543;

	t73 = ((x585<<(x586<x587))<x588);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x597 = UINT64_MAX;
	static uint32_t x598 = 2424931U;
	uint16_t x599 = 16U;
	int16_t x600 = -1708;

	t74 = ((x597<<(x598<x599))<x600);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x613 = 157998010440975549LLU;
	int8_t x614 = INT8_MIN;
	int8_t x615 = INT8_MAX;
	static int8_t x616 = INT8_MAX;

	t75 = ((x613<<(x614<x615))<x616);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x617 = UINT64_MAX;
	static int32_t x618 = INT32_MIN;
	uint8_t x619 = 28U;
	uint8_t x620 = 10U;
	volatile int32_t t76 = -8643;

	t76 = ((x617<<(x618<x619))<x620);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x625 = 17667037U;
	static uint64_t x626 = UINT64_MAX;
	static int32_t t77 = 251;

	t77 = ((x625<<(x626<x627))<x628);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x629 = 25U;
	volatile uint32_t x630 = 15U;
	uint8_t x631 = 3U;
	int16_t x632 = -817;
	int32_t t78 = -886623;

	t78 = ((x629<<(x630<x631))<x632);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x653 = 6U;
	int64_t x654 = INT64_MIN;
	uint8_t x655 = UINT8_MAX;
	uint32_t x656 = UINT32_MAX;
	volatile int32_t t79 = 24;

	t79 = ((x653<<(x654<x655))<x656);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x671 = -1;
	volatile int16_t x672 = INT16_MIN;

	t80 = ((x669<<(x670<x671))<x672);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x673 = UINT16_MAX;
	static uint32_t x674 = UINT32_MAX;
	int64_t x676 = INT64_MIN;
	int32_t t81 = 385827;

	t81 = ((x673<<(x674<x675))<x676);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x677 = UINT32_MAX;
	int64_t x678 = -32527782500909LL;
	int8_t x679 = INT8_MIN;
	static volatile int64_t x680 = -1LL;

	t82 = ((x677<<(x678<x679))<x680);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x685 = 3869370227977510LLU;
	static volatile int64_t x686 = -1LL;
	uint16_t x688 = 4U;
	volatile int32_t t83 = 252902421;

	t83 = ((x685<<(x686<x687))<x688);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x689 = UINT64_MAX;
	int16_t x690 = INT16_MAX;
	volatile int64_t x691 = 1113002237044115332LL;
	volatile int8_t x692 = INT8_MIN;
	volatile int32_t t84 = 4672884;

	t84 = ((x689<<(x690<x691))<x692);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x695 = UINT8_MAX;
	volatile int32_t t85 = 3935272;

	t85 = ((x693<<(x694<x695))<x696);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x697 = UINT64_MAX;
	int8_t x700 = 0;
	int32_t t86 = 3281580;

	t86 = ((x697<<(x698<x699))<x700);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x709 = 7415444U;
	static volatile int8_t x710 = -1;
	int64_t x711 = INT64_MAX;
	int8_t x712 = INT8_MIN;
	int32_t t87 = 6367;

	t87 = ((x709<<(x710<x711))<x712);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x713 = INT8_MAX;
	uint8_t x714 = 65U;
	static volatile int64_t x715 = 678LL;
	int8_t x716 = -6;
	int32_t t88 = -490214930;

	t88 = ((x713<<(x714<x715))<x716);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x717 = 238;
	static volatile int32_t x718 = INT32_MIN;
	uint8_t x719 = 63U;
	volatile int32_t t89 = -5273568;

	t89 = ((x717<<(x718<x719))<x720);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x729 = UINT8_MAX;
	static int64_t x730 = -1LL;
	int16_t x732 = -1;

	t90 = ((x729<<(x730<x731))<x732);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x741 = 2617U;
	static uint16_t x742 = UINT16_MAX;
	uint32_t x743 = 44U;
	volatile uint32_t x744 = UINT32_MAX;

	t91 = ((x741<<(x742<x743))<x744);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x746 = 86U;
	uint8_t x747 = 23U;
	int16_t x748 = -2591;
	volatile int32_t t92 = 1904776;

	t92 = ((x745<<(x746<x747))<x748);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x749 = 6;
	int64_t x750 = -1LL;
	static uint64_t x751 = 3338276519LLU;
	static int8_t x752 = INT8_MIN;

	t93 = ((x749<<(x750<x751))<x752);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x757 = INT16_MAX;
	volatile int32_t x758 = INT32_MIN;
	int16_t x759 = INT16_MAX;
	int64_t x760 = 7416LL;
	volatile int32_t t94 = 13084;

	t94 = ((x757<<(x758<x759))<x760);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x761 = UINT64_MAX;
	int64_t x762 = 540981089488472LL;
	uint8_t x763 = 17U;
	volatile int64_t x764 = INT64_MAX;
	static volatile int32_t t95 = -1121372;

	t95 = ((x761<<(x762<x763))<x764);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x773 = UINT8_MAX;
	int16_t x774 = -4;
	volatile uint64_t x775 = UINT64_MAX;
	uint64_t x776 = UINT64_MAX;
	int32_t t96 = -34;

	t96 = ((x773<<(x774<x775))<x776);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x777 = UINT64_MAX;
	uint64_t x778 = 97LLU;
	int8_t x779 = -1;
	volatile int32_t t97 = 36;

	t97 = ((x777<<(x778<x779))<x780);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x786 = INT16_MIN;
	int8_t x787 = 22;
	int16_t x788 = INT16_MIN;
	int32_t t98 = -14631523;

	t98 = ((x785<<(x786<x787))<x788);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x793 = UINT64_MAX;
	static int16_t x794 = -1;
	uint32_t x796 = UINT32_MAX;

	t99 = ((x793<<(x794<x795))<x796);

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

