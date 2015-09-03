#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x2 = UINT32_MAX;
uint64_t x9 = 1334916849327259988LLU;
static int32_t t1 = 306086;
int16_t x14 = 102;
int32_t x15 = -7999;
volatile int64_t x31 = -1014330625975LL;
uint16_t x33 = 242U;
int8_t x41 = 2;
static uint8_t x43 = UINT8_MAX;
int64_t x68 = 1599664789LL;
volatile int32_t t8 = 15585159;
int32_t x97 = INT32_MAX;
static int32_t x117 = INT32_MAX;
static int32_t t13 = -713566;
int32_t x135 = INT32_MIN;
int32_t t16 = -268134;
uint16_t x146 = 4028U;
volatile int32_t x160 = 45;
int16_t x166 = -1;
volatile int16_t x167 = INT16_MAX;
static volatile int32_t t19 = 3560242;
uint16_t x199 = UINT16_MAX;
int32_t x212 = INT32_MIN;
volatile int32_t t25 = -1;
static volatile uint64_t x251 = 470LLU;
volatile uint32_t x285 = 0U;
static int32_t x286 = 1;
int32_t t32 = 58;
int32_t x308 = INT32_MIN;
static int32_t x312 = 15067;
uint64_t x314 = UINT64_MAX;
static int64_t x316 = -365985975699176240LL;
static volatile uint16_t x319 = 12118U;
int8_t x326 = -5;
volatile int16_t x328 = -12;
static volatile int32_t t37 = -374733;
static volatile uint64_t x350 = UINT64_MAX;
static int8_t x351 = 3;
uint8_t x367 = 1U;
static int32_t t42 = 983896087;
uint64_t x381 = 120871664727610LLU;
int16_t x397 = 1999;
int16_t x403 = -198;
int64_t x407 = INT64_MIN;
static volatile int32_t t48 = 228668813;
uint32_t x413 = UINT32_MAX;
int32_t x414 = INT32_MIN;
uint16_t x415 = 79U;
volatile int32_t t49 = 4452340;
static int16_t x424 = INT16_MAX;
int32_t x430 = -1;
static uint32_t x437 = 17582321U;
int32_t x474 = INT32_MIN;
static int32_t x475 = INT32_MIN;
int32_t t55 = -91631805;
int64_t x488 = INT64_MIN;
static uint8_t x524 = UINT8_MAX;
static uint8_t x527 = 57U;
int16_t x531 = 2;
int32_t x535 = 452;
int8_t x536 = INT8_MIN;
int32_t t62 = -299;
int64_t x544 = INT64_MIN;
volatile int32_t t63 = 15214520;
int16_t x546 = -1;
volatile int32_t t65 = -116386;
volatile int64_t x560 = INT64_MAX;
static volatile int32_t t68 = 100578995;
volatile uint64_t x583 = 62735LLU;
static int16_t x593 = INT16_MAX;
volatile uint8_t x597 = 23U;
int16_t x624 = INT16_MIN;
static volatile uint32_t x625 = 63383U;
int32_t x628 = 2;
int8_t x631 = 12;
uint32_t x639 = UINT32_MAX;
int32_t t79 = -3613;
static volatile int32_t t80 = -10932;
uint32_t x653 = 109U;
int8_t x654 = -1;
volatile int64_t x655 = INT64_MIN;
int32_t t84 = 79659;
uint8_t x673 = 3U;
int64_t x683 = INT64_MIN;
int32_t t87 = 124020058;
int8_t x707 = INT8_MIN;
static int8_t x718 = -7;
volatile int64_t x737 = 151386309957846102LL;
static volatile int32_t x739 = -127;
static volatile int32_t t98 = 66784913;


void f0(void) {
	static uint32_t x1 = UINT32_MAX;
	int16_t x3 = 10;
	int32_t x4 = 15912618;
	static volatile int32_t t0 = 1;

	t0 = ((x1>>(x2==x3))<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x10 = INT32_MIN;
	int64_t x11 = INT64_MAX;
	volatile int16_t x12 = INT16_MIN;

	t1 = ((x9>>(x10==x11))<x12);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = INT64_MAX;
	uint64_t x16 = 66LLU;
	volatile int32_t t2 = 9972324;

	t2 = ((x13>>(x14==x15))<x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x29 = UINT16_MAX;
	static int32_t x30 = INT32_MAX;
	uint8_t x32 = UINT8_MAX;
	static volatile int32_t t3 = 46;

	t3 = ((x29>>(x30==x31))<x32);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x34 = -38;
	int64_t x35 = INT64_MIN;
	int32_t x36 = INT32_MAX;
	static int32_t t4 = -74611;

	t4 = ((x33>>(x34==x35))<x36);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x42 = INT32_MIN;
	volatile int8_t x44 = -1;
	volatile int32_t t5 = 475524639;

	t5 = ((x41>>(x42==x43))<x44);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x65 = 4;
	static int16_t x66 = INT16_MAX;
	uint16_t x67 = UINT16_MAX;
	volatile int32_t t6 = -1717;

	t6 = ((x65>>(x66==x67))<x68);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x69 = 2U;
	int16_t x70 = -1;
	uint16_t x71 = 5180U;
	static uint64_t x72 = 4LLU;
	volatile int32_t t7 = -453150;

	t7 = ((x69>>(x70==x71))<x72);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x73 = INT64_MAX;
	static uint8_t x74 = 40U;
	int32_t x75 = -1;
	int64_t x76 = 3LL;

	t8 = ((x73>>(x74==x75))<x76);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x85 = 2445989LL;
	volatile int16_t x86 = INT16_MIN;
	static int8_t x87 = 1;
	static uint64_t x88 = UINT64_MAX;
	int32_t t9 = 14794636;

	t9 = ((x85>>(x86==x87))<x88);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x98 = 2U;
	int64_t x99 = INT64_MIN;
	static int64_t x100 = -1LL;
	static volatile int32_t t10 = -1;

	t10 = ((x97>>(x98==x99))<x100);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x101 = INT32_MAX;
	int64_t x102 = INT64_MIN;
	uint32_t x103 = UINT32_MAX;
	int64_t x104 = -101574227913297519LL;
	int32_t t11 = -200;

	t11 = ((x101>>(x102==x103))<x104);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x105 = 1649U;
	static int8_t x106 = INT8_MIN;
	uint8_t x107 = UINT8_MAX;
	int64_t x108 = -1LL;
	int32_t t12 = 2107;

	t12 = ((x105>>(x106==x107))<x108);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x118 = 2U;
	int8_t x119 = INT8_MIN;
	int8_t x120 = -1;

	t13 = ((x117>>(x118==x119))<x120);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x129 = 1;
	int32_t x130 = INT32_MAX;
	int64_t x131 = -4212295447LL;
	uint16_t x132 = UINT16_MAX;
	int32_t t14 = -138291408;

	t14 = ((x129>>(x130==x131))<x132);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x133 = 0U;
	uint32_t x134 = UINT32_MAX;
	int16_t x136 = -42;
	int32_t t15 = 0;

	t15 = ((x133>>(x134==x135))<x136);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x137 = 100285713349806205LLU;
	uint32_t x138 = 37636182U;
	int8_t x139 = INT8_MAX;
	static uint32_t x140 = UINT32_MAX;

	t16 = ((x137>>(x138==x139))<x140);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x145 = INT8_MAX;
	int8_t x147 = 0;
	static uint32_t x148 = 1841053U;
	volatile int32_t t17 = 8782934;

	t17 = ((x145>>(x146==x147))<x148);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x157 = 678;
	uint16_t x158 = 156U;
	volatile int8_t x159 = INT8_MAX;
	volatile int32_t t18 = -200;

	t18 = ((x157>>(x158==x159))<x160);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x165 = 17U;
	int16_t x168 = INT16_MIN;

	t19 = ((x165>>(x166==x167))<x168);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x173 = INT32_MAX;
	int32_t x174 = INT32_MIN;
	int32_t x175 = 192;
	int16_t x176 = -7575;
	volatile int32_t t20 = 15;

	t20 = ((x173>>(x174==x175))<x176);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x189 = 3U;
	int64_t x190 = -317623101LL;
	uint16_t x191 = UINT16_MAX;
	int64_t x192 = 208LL;
	volatile int32_t t21 = 51133;

	t21 = ((x189>>(x190==x191))<x192);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x197 = 2018U;
	int16_t x198 = INT16_MIN;
	int64_t x200 = INT64_MIN;
	static int32_t t22 = -196;

	t22 = ((x197>>(x198==x199))<x200);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x201 = 0U;
	uint16_t x202 = 15577U;
	static uint64_t x203 = 90405908LLU;
	uint16_t x204 = UINT16_MAX;
	static int32_t t23 = 1052;

	t23 = ((x201>>(x202==x203))<x204);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x205 = 28U;
	static int16_t x206 = -10;
	static volatile int64_t x207 = INT64_MAX;
	static volatile int8_t x208 = 2;
	volatile int32_t t24 = -461202515;

	t24 = ((x205>>(x206==x207))<x208);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x209 = 3;
	volatile int64_t x210 = INT64_MIN;
	int32_t x211 = INT32_MIN;

	t25 = ((x209>>(x210==x211))<x212);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x229 = 1;
	int32_t x230 = 3;
	volatile int16_t x231 = 1;
	static uint64_t x232 = UINT64_MAX;
	int32_t t26 = 30303;

	t26 = ((x229>>(x230==x231))<x232);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x237 = 0LL;
	uint8_t x238 = 11U;
	volatile int32_t x239 = 53856115;
	uint16_t x240 = 155U;
	volatile int32_t t27 = 44;

	t27 = ((x237>>(x238==x239))<x240);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x245 = 11U;
	int16_t x246 = 2;
	static volatile uint64_t x247 = 52139069983480474LLU;
	int16_t x248 = -6;
	int32_t t28 = 18926493;

	t28 = ((x245>>(x246==x247))<x248);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x249 = INT64_MAX;
	int32_t x250 = -1;
	int8_t x252 = 0;
	int32_t t29 = 0;

	t29 = ((x249>>(x250==x251))<x252);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x265 = 239;
	static uint64_t x266 = UINT64_MAX;
	int32_t x267 = INT32_MIN;
	int64_t x268 = 88345803305LL;
	static volatile int32_t t30 = 8098;

	t30 = ((x265>>(x266==x267))<x268);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x287 = -1;
	uint16_t x288 = 22U;
	volatile int32_t t31 = -363781313;

	t31 = ((x285>>(x286==x287))<x288);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x293 = 0U;
	static int32_t x294 = INT32_MIN;
	uint64_t x295 = 47309613788574861LLU;
	int16_t x296 = INT16_MIN;

	t32 = ((x293>>(x294==x295))<x296);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x305 = 158U;
	static int16_t x306 = 28;
	int16_t x307 = INT16_MIN;
	static volatile int32_t t33 = 35790733;

	t33 = ((x305>>(x306==x307))<x308);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x309 = 16;
	static int8_t x310 = 3;
	int8_t x311 = 3;
	int32_t t34 = 1008145;

	t34 = ((x309>>(x310==x311))<x312);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x313 = 7U;
	int64_t x315 = INT64_MIN;
	static int32_t t35 = -201111;

	t35 = ((x313>>(x314==x315))<x316);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x317 = INT8_MAX;
	uint8_t x318 = 18U;
	volatile uint32_t x320 = 7U;
	volatile int32_t t36 = 459158;

	t36 = ((x317>>(x318==x319))<x320);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x325 = 17;
	volatile int32_t x327 = 29;

	t37 = ((x325>>(x326==x327))<x328);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x333 = UINT64_MAX;
	int8_t x334 = INT8_MIN;
	volatile int64_t x335 = -1LL;
	static int32_t x336 = INT32_MIN;
	static int32_t t38 = 3881;

	t38 = ((x333>>(x334==x335))<x336);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x341 = 32637U;
	int32_t x342 = INT32_MAX;
	int8_t x343 = INT8_MIN;
	int8_t x344 = -1;
	volatile int32_t t39 = 90507;

	t39 = ((x341>>(x342==x343))<x344);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x349 = 799U;
	uint16_t x352 = 925U;
	static volatile int32_t t40 = -1;

	t40 = ((x349>>(x350==x351))<x352);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x361 = UINT8_MAX;
	int64_t x362 = -14319218453937LL;
	static uint32_t x363 = UINT32_MAX;
	volatile int32_t x364 = -1;
	int32_t t41 = -218370594;

	t41 = ((x361>>(x362==x363))<x364);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x365 = UINT32_MAX;
	static int32_t x366 = -6;
	int64_t x368 = INT64_MAX;

	t42 = ((x365>>(x366==x367))<x368);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x369 = 14U;
	int8_t x370 = INT8_MIN;
	volatile int32_t x371 = -115516;
	uint64_t x372 = 168868153043481LLU;
	static int32_t t43 = 29295151;

	t43 = ((x369>>(x370==x371))<x372);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x382 = INT64_MIN;
	uint8_t x383 = 63U;
	int32_t x384 = -502;
	int32_t t44 = 44;

	t44 = ((x381>>(x382==x383))<x384);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x389 = 3U;
	static uint32_t x390 = 233205684U;
	int8_t x391 = INT8_MAX;
	static int64_t x392 = 394LL;
	volatile int32_t t45 = 10266649;

	t45 = ((x389>>(x390==x391))<x392);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x398 = INT8_MIN;
	uint32_t x399 = 10U;
	int64_t x400 = -10028776844313LL;
	int32_t t46 = -1583048;

	t46 = ((x397>>(x398==x399))<x400);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x401 = 2U;
	volatile uint8_t x402 = 46U;
	int16_t x404 = INT16_MAX;
	int32_t t47 = -6678439;

	t47 = ((x401>>(x402==x403))<x404);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x405 = UINT8_MAX;
	int8_t x406 = INT8_MAX;
	int8_t x408 = INT8_MIN;

	t48 = ((x405>>(x406==x407))<x408);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x416 = -1LL;

	t49 = ((x413>>(x414==x415))<x416);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x421 = 3U;
	uint32_t x422 = 7754005U;
	int64_t x423 = 469621623995939578LL;
	volatile int32_t t50 = -263376439;

	t50 = ((x421>>(x422==x423))<x424);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x429 = INT16_MAX;
	int32_t x431 = -1;
	volatile int32_t x432 = -26773301;
	volatile int32_t t51 = -30;

	t51 = ((x429>>(x430==x431))<x432);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x438 = INT16_MIN;
	static int8_t x439 = -1;
	uint8_t x440 = UINT8_MAX;
	int32_t t52 = 850;

	t52 = ((x437>>(x438==x439))<x440);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x445 = 9U;
	static int32_t x446 = INT32_MAX;
	volatile int64_t x447 = -1945049216LL;
	volatile int64_t x448 = -1LL;
	volatile int32_t t53 = -163277870;

	t53 = ((x445>>(x446==x447))<x448);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x453 = INT32_MAX;
	int16_t x454 = INT16_MIN;
	static uint16_t x455 = 19582U;
	volatile int64_t x456 = -237LL;
	static volatile int32_t t54 = 0;

	t54 = ((x453>>(x454==x455))<x456);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x473 = 111U;
	int8_t x476 = 1;

	t55 = ((x473>>(x474==x475))<x476);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x485 = INT8_MAX;
	uint16_t x486 = UINT16_MAX;
	uint16_t x487 = 7777U;
	int32_t t56 = -19573;

	t56 = ((x485>>(x486==x487))<x488);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x517 = INT16_MAX;
	int64_t x518 = -97LL;
	int16_t x519 = INT16_MIN;
	volatile int32_t x520 = INT32_MIN;
	int32_t t57 = 2;

	t57 = ((x517>>(x518==x519))<x520);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x521 = INT16_MAX;
	int64_t x522 = 504600685LL;
	int16_t x523 = INT16_MIN;
	volatile int32_t t58 = 3;

	t58 = ((x521>>(x522==x523))<x524);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x525 = UINT64_MAX;
	static int8_t x526 = 1;
	volatile int64_t x528 = -1LL;
	volatile int32_t t59 = 2725030;

	t59 = ((x525>>(x526==x527))<x528);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x529 = INT64_MAX;
	int8_t x530 = INT8_MAX;
	uint8_t x532 = UINT8_MAX;
	int32_t t60 = 1;

	t60 = ((x529>>(x530==x531))<x532);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x533 = INT8_MAX;
	uint8_t x534 = 5U;
	static int32_t t61 = 0;

	t61 = ((x533>>(x534==x535))<x536);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x537 = 24192;
	volatile uint8_t x538 = 11U;
	int32_t x539 = INT32_MIN;
	int8_t x540 = INT8_MIN;

	t62 = ((x537>>(x538==x539))<x540);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x541 = 68491574LLU;
	uint16_t x542 = UINT16_MAX;
	static uint64_t x543 = UINT64_MAX;

	t63 = ((x541>>(x542==x543))<x544);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x545 = INT16_MAX;
	int16_t x547 = -1;
	static int16_t x548 = INT16_MIN;
	int32_t t64 = -759566;

	t64 = ((x545>>(x546==x547))<x548);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x553 = 32U;
	static int32_t x554 = -465769;
	uint16_t x555 = UINT16_MAX;
	uint64_t x556 = 126567440361414443LLU;

	t65 = ((x553>>(x554==x555))<x556);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x557 = 1690113961U;
	int32_t x558 = 21;
	volatile int64_t x559 = -1LL;
	int32_t t66 = 0;

	t66 = ((x557>>(x558==x559))<x560);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x561 = 189U;
	static volatile int64_t x562 = INT64_MIN;
	volatile int32_t x563 = 16368;
	uint32_t x564 = 8249527U;
	static volatile int32_t t67 = -1255974;

	t67 = ((x561>>(x562==x563))<x564);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x577 = UINT8_MAX;
	int32_t x578 = -7440;
	uint64_t x579 = 38069277LLU;
	static int64_t x580 = -2487LL;

	t68 = ((x577>>(x578==x579))<x580);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x581 = 1U;
	volatile int8_t x582 = -31;
	int64_t x584 = INT64_MAX;
	int32_t t69 = -28412978;

	t69 = ((x581>>(x582==x583))<x584);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x585 = 1369464U;
	int64_t x586 = 9501798LL;
	uint16_t x587 = UINT16_MAX;
	uint64_t x588 = 480417239LLU;
	int32_t t70 = 0;

	t70 = ((x585>>(x586==x587))<x588);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x589 = INT16_MAX;
	volatile int64_t x590 = 52305258171565LL;
	int16_t x591 = INT16_MIN;
	int32_t x592 = 33374;
	int32_t t71 = 6;

	t71 = ((x589>>(x590==x591))<x592);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x594 = UINT16_MAX;
	static int8_t x595 = -1;
	int64_t x596 = INT64_MAX;
	int32_t t72 = 760678;

	t72 = ((x593>>(x594==x595))<x596);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x598 = INT16_MAX;
	int64_t x599 = -1522226LL;
	volatile int32_t x600 = 3918;
	int32_t t73 = -60864031;

	t73 = ((x597>>(x598==x599))<x600);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x609 = UINT32_MAX;
	uint16_t x610 = 190U;
	int8_t x611 = INT8_MIN;
	volatile int8_t x612 = -1;
	int32_t t74 = 62;

	t74 = ((x609>>(x610==x611))<x612);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int32_t x613 = 511;
	int32_t x614 = 32231894;
	int32_t x615 = -1;
	int16_t x616 = INT16_MIN;
	int32_t t75 = -167243007;

	t75 = ((x613>>(x614==x615))<x616);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x621 = 8404678159439144198LLU;
	int32_t x622 = INT32_MIN;
	int64_t x623 = 2484032660592031892LL;
	volatile int32_t t76 = 1;

	t76 = ((x621>>(x622==x623))<x624);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x626 = 267194882242LLU;
	int16_t x627 = 14;
	static int32_t t77 = -632068470;

	t77 = ((x625>>(x626==x627))<x628);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x629 = UINT64_MAX;
	uint8_t x630 = UINT8_MAX;
	volatile int32_t x632 = -1667;
	int32_t t78 = -2576;

	t78 = ((x629>>(x630==x631))<x632);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x637 = 0;
	int16_t x638 = INT16_MIN;
	int16_t x640 = -1615;

	t79 = ((x637>>(x638==x639))<x640);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x641 = 4304U;
	int8_t x642 = 2;
	int32_t x643 = -1;
	uint16_t x644 = 1U;

	t80 = ((x641>>(x642==x643))<x644);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x649 = 0;
	volatile int64_t x650 = 0LL;
	static int32_t x651 = -1;
	uint16_t x652 = UINT16_MAX;
	static volatile int32_t t81 = 62557;

	t81 = ((x649>>(x650==x651))<x652);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x656 = UINT64_MAX;
	int32_t t82 = 42412;

	t82 = ((x653>>(x654==x655))<x656);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x657 = 257LL;
	static uint8_t x658 = 5U;
	volatile uint16_t x659 = 9027U;
	uint64_t x660 = UINT64_MAX;
	int32_t t83 = 880;

	t83 = ((x657>>(x658==x659))<x660);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x665 = 3888;
	int8_t x666 = 13;
	volatile int32_t x667 = -1;
	int64_t x668 = -407272646643LL;

	t84 = ((x665>>(x666==x667))<x668);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x674 = INT64_MIN;
	static int8_t x675 = -1;
	int64_t x676 = 59605239LL;
	volatile int32_t t85 = 885078990;

	t85 = ((x673>>(x674==x675))<x676);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x677 = 52559578959116351LL;
	int8_t x678 = -1;
	int32_t x679 = INT32_MIN;
	int8_t x680 = -1;
	volatile int32_t t86 = 73;

	t86 = ((x677>>(x678==x679))<x680);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x681 = INT16_MAX;
	int8_t x682 = -1;
	int32_t x684 = INT32_MIN;

	t87 = ((x681>>(x682==x683))<x684);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x685 = INT32_MAX;
	volatile uint8_t x686 = 46U;
	int8_t x687 = INT8_MAX;
	int16_t x688 = INT16_MIN;
	int32_t t88 = -3;

	t88 = ((x685>>(x686==x687))<x688);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x689 = UINT32_MAX;
	static int8_t x690 = -1;
	uint8_t x691 = UINT8_MAX;
	int8_t x692 = 4;
	static volatile int32_t t89 = 32211;

	t89 = ((x689>>(x690==x691))<x692);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x693 = 1;
	static int8_t x694 = -11;
	volatile int64_t x695 = 115589760446LL;
	volatile uint16_t x696 = 0U;
	static int32_t t90 = -62241103;

	t90 = ((x693>>(x694==x695))<x696);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x697 = 113U;
	volatile int16_t x698 = -1;
	int8_t x699 = -1;
	uint8_t x700 = 3U;
	volatile int32_t t91 = 0;

	t91 = ((x697>>(x698==x699))<x700);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x701 = INT64_MAX;
	int8_t x702 = INT8_MAX;
	static volatile int64_t x703 = INT64_MIN;
	int8_t x704 = INT8_MIN;
	volatile int32_t t92 = -2;

	t92 = ((x701>>(x702==x703))<x704);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x705 = UINT64_MAX;
	int64_t x706 = INT64_MAX;
	volatile uint16_t x708 = 15U;
	int32_t t93 = -2;

	t93 = ((x705>>(x706==x707))<x708);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x709 = UINT64_MAX;
	uint16_t x710 = UINT16_MAX;
	uint64_t x711 = 425786LLU;
	int8_t x712 = INT8_MIN;
	int32_t t94 = 1;

	t94 = ((x709>>(x710==x711))<x712);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x717 = INT64_MAX;
	int64_t x719 = INT64_MIN;
	static int32_t x720 = INT32_MIN;
	int32_t t95 = -161466835;

	t95 = ((x717>>(x718==x719))<x720);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x721 = INT32_MAX;
	static uint8_t x722 = 51U;
	uint8_t x723 = UINT8_MAX;
	int64_t x724 = INT64_MIN;
	volatile int32_t t96 = -185820;

	t96 = ((x721>>(x722==x723))<x724);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x738 = -1LL;
	int64_t x740 = INT64_MAX;
	int32_t t97 = 6;

	t97 = ((x737>>(x738==x739))<x740);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x741 = INT8_MAX;
	uint64_t x742 = 20859155LLU;
	int64_t x743 = INT64_MIN;
	int8_t x744 = -1;

	t98 = ((x741>>(x742==x743))<x744);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x745 = 9LLU;
	static uint8_t x746 = 11U;
	int8_t x747 = INT8_MAX;
	int16_t x748 = INT16_MIN;
	static volatile int32_t t99 = 1;

	t99 = ((x745>>(x746==x747))<x748);

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

