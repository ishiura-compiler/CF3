#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x1 = 33530U;
static int64_t x4 = -1LL;
int16_t x7 = -17;
int64_t x21 = 10937390093515344LL;
static int32_t t3 = 12041447;
uint64_t x36 = UINT64_MAX;
int32_t x37 = 37;
int8_t x38 = 1;
volatile int32_t t5 = -61;
uint16_t x41 = 3U;
int32_t x44 = INT32_MIN;
volatile uint32_t x59 = UINT32_MAX;
static int8_t x72 = 53;
volatile int32_t t9 = -26592;
static int32_t t10 = 120872537;
uint32_t x77 = 1741U;
int32_t x80 = INT32_MAX;
static int64_t x92 = 6LL;
volatile uint32_t t12 = 14926U;
uint64_t x93 = 10894058273705LLU;
uint32_t x97 = 5783603U;
int8_t x98 = -1;
static int16_t x109 = INT16_MAX;
int8_t x111 = INT8_MIN;
volatile uint64_t x112 = 7668526442LLU;
volatile uint64_t x117 = 32706904LLU;
int8_t x123 = INT8_MAX;
static uint8_t x134 = UINT8_MAX;
uint32_t x141 = UINT32_MAX;
int8_t x153 = 0;
static int64_t x159 = INT64_MAX;
int32_t x176 = INT32_MIN;
volatile int8_t x198 = INT8_MIN;
int32_t t27 = -7692;
int8_t x201 = INT8_MAX;
static volatile uint8_t x204 = UINT8_MAX;
uint16_t x222 = 10626U;
int32_t t30 = -519901158;
int64_t x245 = INT64_MAX;
volatile int64_t x248 = -1LL;
int8_t x251 = INT8_MAX;
static volatile uint32_t t32 = 605423589U;
uint64_t x254 = 4140401537655834LLU;
int8_t x270 = INT8_MIN;
int32_t x271 = INT32_MIN;
int8_t x288 = INT8_MIN;
static int32_t t38 = -426054;
uint8_t x295 = 8U;
int64_t x296 = -2LL;
static int32_t x310 = -3;
int8_t x312 = 46;
volatile int32_t t40 = 0;
volatile int16_t x319 = INT16_MIN;
int64_t x328 = INT64_MIN;
volatile int64_t t43 = INT64_MAX;
int16_t x329 = 330;
int32_t t44 = -237;
static uint8_t x333 = 0U;
int16_t x337 = INT16_MAX;
int64_t x338 = 3841970LL;
volatile int32_t t46 = 225;
volatile int64_t x342 = -1LL;
volatile int16_t x346 = INT16_MIN;
int32_t t49 = 225;
int32_t x360 = 1769594;
static int32_t t53 = 13;
int8_t x407 = INT8_MIN;
int64_t t54 = INT64_MAX;
int8_t x411 = 3;
int16_t x415 = -1;
int32_t x452 = -1;
int32_t t58 = 13121742;
uint64_t x453 = 7836102073055368295LLU;
uint16_t x457 = UINT16_MAX;
int32_t x458 = -15581806;
uint64_t t61 = 55416LLU;
volatile int8_t x472 = INT8_MAX;
static volatile int32_t t63 = 0;
uint16_t x477 = UINT16_MAX;
int8_t x478 = 6;
int32_t t65 = -1;
int16_t x484 = INT16_MIN;
static volatile int16_t x487 = INT16_MAX;
static int16_t x493 = 1297;
int32_t t69 = -3759321;
int32_t x510 = -1;
uint8_t x514 = UINT8_MAX;
static int32_t t73 = -18;
uint8_t x533 = 78U;
uint64_t x534 = UINT64_MAX;
static int8_t x539 = 42;
volatile int32_t t75 = -46432;
static uint16_t x553 = 53U;
static int32_t x554 = INT32_MIN;
int8_t x566 = -1;
volatile int32_t x567 = INT32_MIN;
int8_t x575 = INT8_MIN;
volatile uint64_t x584 = UINT64_MAX;
static volatile int32_t t81 = 423135;
static uint8_t x598 = UINT8_MAX;
uint8_t x600 = UINT8_MAX;
uint32_t x615 = 621225954U;
int32_t t87 = -146611;
static uint16_t x631 = 19U;
int8_t x632 = 1;
int8_t x640 = -1;
volatile uint64_t t89 = 9LLU;
static volatile int64_t x678 = -414LL;
volatile uint16_t x680 = UINT16_MAX;
int8_t x684 = INT8_MIN;
int16_t x703 = INT16_MIN;
volatile int32_t t95 = -47199577;
uint32_t x713 = UINT32_MAX;
int64_t x716 = INT64_MIN;
volatile int32_t x717 = INT32_MAX;
int16_t x718 = -1;
volatile int8_t x721 = 1;
int64_t x748 = INT64_MIN;


void f0(void) {
	volatile int16_t x2 = -1;
	static int64_t x3 = INT64_MAX;
	volatile uint32_t t0 = 912304U;

	t0 = (x1>>((x2<x3)<=x4));

	if (t0 != 33530U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MAX;
	static uint64_t x6 = 1204446383LLU;
	int8_t x8 = 1;
	volatile int32_t t1 = 640090;

	t1 = (x5>>((x6<x7)<=x8));

	if (t1 != 1073741823) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x22 = 0;
	int16_t x23 = -1;
	static int16_t x24 = 1;
	int64_t t2 = -6LL;

	t2 = (x21>>((x22<x23)<=x24));

	if (t2 != 5468695046757672LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x29 = 850807;
	static int16_t x30 = INT16_MAX;
	uint8_t x31 = UINT8_MAX;
	static int16_t x32 = -5287;

	t3 = (x29>>((x30<x31)<=x32));

	if (t3 != 850807) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x33 = 54U;
	volatile int8_t x34 = INT8_MIN;
	int16_t x35 = -1;
	int32_t t4 = -13;

	t4 = (x33>>((x34<x35)<=x36));

	if (t4 != 27) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint16_t x39 = UINT16_MAX;
	int64_t x40 = INT64_MIN;

	t5 = (x37>>((x38<x39)<=x40));

	if (t5 != 37) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x42 = -1LL;
	int64_t x43 = -67415LL;
	int32_t t6 = 125;

	t6 = (x41>>((x42<x43)<=x44));

	if (t6 != 3) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x53 = 1855499125642492244LLU;
	volatile int32_t x54 = INT32_MIN;
	int16_t x55 = INT16_MIN;
	volatile uint8_t x56 = 2U;
	uint64_t t7 = 458LLU;

	t7 = (x53>>((x54<x55)<=x56));

	if (t7 != 927749562821246122LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x57 = INT16_MAX;
	volatile int16_t x58 = -1;
	int64_t x60 = INT64_MIN;
	volatile int32_t t8 = -9968279;

	t8 = (x57>>((x58<x59)<=x60));

	if (t8 != 32767) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x69 = 5994;
	int8_t x70 = -1;
	int8_t x71 = INT8_MIN;

	t9 = (x69>>((x70<x71)<=x72));

	if (t9 != 2997) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x73 = 15U;
	static volatile uint8_t x74 = 1U;
	uint16_t x75 = 429U;
	int32_t x76 = -1;

	t10 = (x73>>((x74<x75)<=x76));

	if (t10 != 15) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x78 = 379LLU;
	uint32_t x79 = 1315543U;
	volatile uint32_t t11 = 697082629U;

	t11 = (x77>>((x78<x79)<=x80));

	if (t11 != 870U) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x89 = 11U;
	int8_t x90 = -2;
	volatile int64_t x91 = -1495972319776751LL;

	t12 = (x89>>((x90<x91)<=x92));

	if (t12 != 5U) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x94 = 32760197512584LLU;
	uint8_t x95 = 1U;
	static uint32_t x96 = 0U;
	uint64_t t13 = 147183958375LLU;

	t13 = (x93>>((x94<x95)<=x96));

	if (t13 != 5447029136852LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x99 = 53500LLU;
	static int32_t x100 = INT32_MIN;
	uint32_t t14 = 18201U;

	t14 = (x97>>((x98<x99)<=x100));

	if (t14 != 5783603U) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x101 = 1;
	int16_t x102 = -1;
	static uint16_t x103 = 0U;
	static int64_t x104 = INT64_MAX;
	volatile int32_t t15 = -1;

	t15 = (x101>>((x102<x103)<=x104));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x110 = INT32_MIN;
	volatile int32_t t16 = 1;

	t16 = (x109>>((x110<x111)<=x112));

	if (t16 != 16383) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x113 = INT16_MAX;
	static int16_t x114 = INT16_MIN;
	int16_t x115 = -10;
	volatile int64_t x116 = INT64_MIN;
	volatile int32_t t17 = -987070627;

	t17 = (x113>>((x114<x115)<=x116));

	if (t17 != 32767) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x118 = UINT32_MAX;
	static int64_t x119 = -1LL;
	int64_t x120 = -107LL;
	volatile uint64_t t18 = 8297LLU;

	t18 = (x117>>((x118<x119)<=x120));

	if (t18 != 32706904LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x121 = UINT8_MAX;
	int32_t x122 = 4524;
	uint64_t x124 = 1263761LLU;
	volatile int32_t t19 = -19423638;

	t19 = (x121>>((x122<x123)<=x124));

	if (t19 != 127) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x125 = 3U;
	int16_t x126 = 0;
	static int8_t x127 = -49;
	static volatile uint32_t x128 = UINT32_MAX;
	volatile int32_t t20 = -7;

	t20 = (x125>>((x126<x127)<=x128));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x133 = 30;
	uint64_t x135 = 682757LLU;
	int32_t x136 = INT32_MIN;
	int32_t t21 = 248;

	t21 = (x133>>((x134<x135)<=x136));

	if (t21 != 30) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x142 = 1992LL;
	int64_t x143 = 1260780867LL;
	int16_t x144 = -2;
	uint32_t t22 = UINT32_MAX;

	t22 = (x141>>((x142<x143)<=x144));

	if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x154 = UINT8_MAX;
	static volatile int64_t x155 = -1LL;
	int8_t x156 = 20;
	static volatile int32_t t23 = -206444;

	t23 = (x153>>((x154<x155)<=x156));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x157 = 1004U;
	static uint64_t x158 = 567613683LLU;
	volatile int32_t x160 = 3046;
	volatile int32_t t24 = -1400621;

	t24 = (x157>>((x158<x159)<=x160));

	if (t24 != 502) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x169 = INT16_MAX;
	int16_t x170 = -1;
	int32_t x171 = INT32_MIN;
	static volatile int8_t x172 = -7;
	int32_t t25 = -57;

	t25 = (x169>>((x170<x171)<=x172));

	if (t25 != 32767) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x173 = UINT64_MAX;
	uint32_t x174 = 57958960U;
	static int8_t x175 = 14;
	static uint64_t t26 = UINT64_MAX;

	t26 = (x173>>((x174<x175)<=x176));

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x197 = 0;
	uint32_t x199 = UINT32_MAX;
	volatile uint8_t x200 = 22U;

	t27 = (x197>>((x198<x199)<=x200));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x202 = -20014;
	uint32_t x203 = UINT32_MAX;
	volatile int32_t t28 = -10;

	t28 = (x201>>((x202<x203)<=x204));

	if (t28 != 63) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x205 = 29;
	int32_t x206 = -12998;
	static int16_t x207 = INT16_MIN;
	int32_t x208 = -1;
	volatile int32_t t29 = 10;

	t29 = (x205>>((x206<x207)<=x208));

	if (t29 != 29) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x221 = 41;
	uint8_t x223 = UINT8_MAX;
	int16_t x224 = INT16_MIN;

	t30 = (x221>>((x222<x223)<=x224));

	if (t30 != 41) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x246 = 873032;
	int32_t x247 = 1;
	static volatile int64_t t31 = INT64_MAX;

	t31 = (x245>>((x246<x247)<=x248));

	if (t31 != INT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x249 = 12U;
	volatile uint16_t x250 = 0U;
	int64_t x252 = -1LL;

	t32 = (x249>>((x250<x251)<=x252));

	if (t32 != 12U) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x253 = 207169907LLU;
	int32_t x255 = -1986;
	uint64_t x256 = 8498948LLU;
	uint64_t t33 = 1401288278LLU;

	t33 = (x253>>((x254<x255)<=x256));

	if (t33 != 103584953LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x261 = UINT32_MAX;
	int32_t x262 = INT32_MAX;
	volatile uint8_t x263 = 77U;
	volatile int8_t x264 = -2;
	uint32_t t34 = UINT32_MAX;

	t34 = (x261>>((x262<x263)<=x264));

	if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x265 = 9;
	int16_t x266 = INT16_MIN;
	int32_t x267 = -1;
	uint16_t x268 = 17603U;
	static int32_t t35 = 210065641;

	t35 = (x265>>((x266<x267)<=x268));

	if (t35 != 4) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x269 = 736754902;
	int8_t x272 = INT8_MIN;
	static volatile int32_t t36 = -1;

	t36 = (x269>>((x270<x271)<=x272));

	if (t36 != 736754902) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x277 = UINT16_MAX;
	uint64_t x278 = 66LLU;
	static int64_t x279 = -1LL;
	int64_t x280 = INT64_MAX;
	volatile int32_t t37 = 381;

	t37 = (x277>>((x278<x279)<=x280));

	if (t37 != 32767) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x285 = 27867U;
	int16_t x286 = INT16_MAX;
	uint64_t x287 = 2456706759LLU;

	t38 = (x285>>((x286<x287)<=x288));

	if (t38 != 27867) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x293 = 6689066912205591LL;
	int64_t x294 = INT64_MIN;
	volatile int64_t t39 = -49008316LL;

	t39 = (x293>>((x294<x295)<=x296));

	if (t39 != 6689066912205591LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x309 = 9;
	uint8_t x311 = 7U;

	t40 = (x309>>((x310<x311)<=x312));

	if (t40 != 4) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x313 = 4754U;
	int32_t x314 = INT32_MAX;
	uint32_t x315 = 23165949U;
	volatile int64_t x316 = -1LL;
	volatile int32_t t41 = -5157;

	t41 = (x313>>((x314<x315)<=x316));

	if (t41 != 4754) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x317 = INT32_MAX;
	uint8_t x318 = 51U;
	volatile uint8_t x320 = UINT8_MAX;
	int32_t t42 = -289038;

	t42 = (x317>>((x318<x319)<=x320));

	if (t42 != 1073741823) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int64_t x325 = INT64_MAX;
	uint64_t x326 = 2788346054255LLU;
	int64_t x327 = INT64_MIN;

	t43 = (x325>>((x326<x327)<=x328));

	if (t43 != INT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int16_t x330 = INT16_MIN;
	static int8_t x331 = INT8_MIN;
	int64_t x332 = -1LL;

	t44 = (x329>>((x330<x331)<=x332));

	if (t44 != 330) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x334 = -1;
	static uint64_t x335 = 44LLU;
	int64_t x336 = INT64_MIN;
	int32_t t45 = -873569338;

	t45 = (x333>>((x334<x335)<=x336));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x339 = -254438773535028LL;
	uint8_t x340 = UINT8_MAX;

	t46 = (x337>>((x338<x339)<=x340));

	if (t46 != 16383) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x341 = 557LL;
	volatile uint32_t x343 = UINT32_MAX;
	int32_t x344 = INT32_MAX;
	volatile int64_t t47 = 1509611LL;

	t47 = (x341>>((x342<x343)<=x344));

	if (t47 != 278LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x345 = 816580LLU;
	static int8_t x347 = 3;
	volatile int8_t x348 = -1;
	uint64_t t48 = 32LLU;

	t48 = (x345>>((x346<x347)<=x348));

	if (t48 != 816580LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x353 = 0;
	int64_t x354 = -3773761114LL;
	static int8_t x355 = -58;
	uint8_t x356 = 2U;

	t49 = (x353>>((x354<x355)<=x356));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x357 = INT8_MAX;
	uint32_t x358 = 213581948U;
	int16_t x359 = -1386;
	volatile int32_t t50 = -269;

	t50 = (x357>>((x358<x359)<=x360));

	if (t50 != 63) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x373 = 21320U;
	uint32_t x374 = 190418208U;
	uint8_t x375 = 38U;
	int8_t x376 = 15;
	uint32_t t51 = 11487U;

	t51 = (x373>>((x374<x375)<=x376));

	if (t51 != 10660U) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x397 = 0U;
	int64_t x398 = -1LL;
	uint8_t x399 = 3U;
	volatile int32_t x400 = INT32_MIN;
	volatile int32_t t52 = 60;

	t52 = (x397>>((x398<x399)<=x400));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint16_t x401 = 3U;
	int8_t x402 = -1;
	uint32_t x403 = 26U;
	volatile int32_t x404 = -1;

	t53 = (x401>>((x402<x403)<=x404));

	if (t53 != 3) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x405 = INT64_MAX;
	static int8_t x406 = INT8_MIN;
	int16_t x408 = -1;

	t54 = (x405>>((x406<x407)<=x408));

	if (t54 != INT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x409 = UINT32_MAX;
	int32_t x410 = INT32_MAX;
	static int8_t x412 = INT8_MIN;
	uint32_t t55 = UINT32_MAX;

	t55 = (x409>>((x410<x411)<=x412));

	if (t55 != UINT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x413 = UINT32_MAX;
	int16_t x414 = 1915;
	int32_t x416 = INT32_MIN;
	volatile uint32_t t56 = UINT32_MAX;

	t56 = (x413>>((x414<x415)<=x416));

	if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x433 = 491648LLU;
	int16_t x434 = -103;
	volatile uint8_t x435 = 0U;
	static volatile int32_t x436 = INT32_MIN;
	static volatile uint64_t t57 = 1858694922007676LLU;

	t57 = (x433>>((x434<x435)<=x436));

	if (t57 != 491648LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x449 = 3;
	volatile int8_t x450 = INT8_MIN;
	int8_t x451 = 3;

	t58 = (x449>>((x450<x451)<=x452));

	if (t58 != 3) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x454 = UINT32_MAX;
	int8_t x455 = -1;
	int16_t x456 = -1;
	volatile uint64_t t59 = 2453092135LLU;

	t59 = (x453>>((x454<x455)<=x456));

	if (t59 != 7836102073055368295LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x459 = 2713U;
	int64_t x460 = 538098697067748721LL;
	volatile int32_t t60 = 2433038;

	t60 = (x457>>((x458<x459)<=x460));

	if (t60 != 32767) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x461 = 0LLU;
	static uint64_t x462 = 16982LLU;
	uint32_t x463 = UINT32_MAX;
	static uint32_t x464 = 4230343U;

	t61 = (x461>>((x462<x463)<=x464));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x465 = INT64_MAX;
	int8_t x466 = INT8_MIN;
	static int64_t x467 = INT64_MAX;
	int8_t x468 = -1;
	int64_t t62 = INT64_MAX;

	t62 = (x465>>((x466<x467)<=x468));

	if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x469 = 5095;
	static int8_t x470 = INT8_MIN;
	static uint8_t x471 = 0U;

	t63 = (x469>>((x470<x471)<=x472));

	if (t63 != 2547) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint16_t x473 = 98U;
	volatile uint32_t x474 = 2227244U;
	uint64_t x475 = 49781LLU;
	int16_t x476 = INT16_MAX;
	volatile int32_t t64 = 354037;

	t64 = (x473>>((x474<x475)<=x476));

	if (t64 != 49) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x479 = 1;
	int16_t x480 = 3235;

	t65 = (x477>>((x478<x479)<=x480));

	if (t65 != 32767) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x481 = 95U;
	int64_t x482 = INT64_MIN;
	volatile uint64_t x483 = 31LLU;
	volatile int32_t t66 = 0;

	t66 = (x481>>((x482<x483)<=x484));

	if (t66 != 95) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x485 = 2U;
	static uint64_t x486 = 3212418525LLU;
	int64_t x488 = INT64_MIN;
	volatile uint32_t t67 = 2669U;

	t67 = (x485>>((x486<x487)<=x488));

	if (t67 != 2U) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x489 = INT8_MAX;
	int32_t x490 = -502881;
	uint8_t x491 = 62U;
	int32_t x492 = INT32_MIN;
	int32_t t68 = 447804891;

	t68 = (x489>>((x490<x491)<=x492));

	if (t68 != 127) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x494 = -1;
	uint32_t x495 = 45U;
	uint64_t x496 = 26744365445LLU;

	t69 = (x493>>((x494<x495)<=x496));

	if (t69 != 648) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x505 = 124569953089570LLU;
	static int32_t x506 = INT32_MIN;
	uint32_t x507 = 456854U;
	int32_t x508 = INT32_MIN;
	uint64_t t70 = 10094747860LLU;

	t70 = (x505>>((x506<x507)<=x508));

	if (t70 != 124569953089570LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x509 = 27793629;
	volatile uint32_t x511 = 337U;
	volatile uint32_t x512 = 412437U;
	volatile int32_t t71 = -27518492;

	t71 = (x509>>((x510<x511)<=x512));

	if (t71 != 13896814) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x513 = INT16_MAX;
	int16_t x515 = INT16_MIN;
	uint16_t x516 = 0U;
	static int32_t t72 = 3207;

	t72 = (x513>>((x514<x515)<=x516));

	if (t72 != 16383) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x529 = 997U;
	static int32_t x530 = INT32_MAX;
	static int16_t x531 = -1;
	uint32_t x532 = 217U;

	t73 = (x529>>((x530<x531)<=x532));

	if (t73 != 498) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x535 = 5866U;
	int64_t x536 = INT64_MIN;
	static volatile int32_t t74 = -367807;

	t74 = (x533>>((x534<x535)<=x536));

	if (t74 != 78) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x537 = 28;
	int32_t x538 = INT32_MAX;
	int8_t x540 = -1;

	t75 = (x537>>((x538<x539)<=x540));

	if (t75 != 28) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x555 = 209096520U;
	int64_t x556 = 14660956838LL;
	volatile int32_t t76 = -124694208;

	t76 = (x553>>((x554<x555)<=x556));

	if (t76 != 26) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x557 = 0U;
	int64_t x558 = INT64_MIN;
	int32_t x559 = INT32_MIN;
	uint16_t x560 = 1156U;
	static volatile int32_t t77 = -506308;

	t77 = (x557>>((x558<x559)<=x560));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint32_t x565 = UINT32_MAX;
	static int64_t x568 = INT64_MIN;
	static volatile uint32_t t78 = UINT32_MAX;

	t78 = (x565>>((x566<x567)<=x568));

	if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x573 = UINT64_MAX;
	int32_t x574 = INT32_MIN;
	static int16_t x576 = INT16_MIN;
	volatile uint64_t t79 = UINT64_MAX;

	t79 = (x573>>((x574<x575)<=x576));

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x577 = INT16_MAX;
	int8_t x578 = INT8_MAX;
	int16_t x579 = 1309;
	static volatile uint64_t x580 = 29LLU;
	static volatile int32_t t80 = 1061139232;

	t80 = (x577>>((x578<x579)<=x580));

	if (t80 != 16383) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x581 = 0U;
	int64_t x582 = INT64_MAX;
	volatile int16_t x583 = 3782;

	t81 = (x581>>((x582<x583)<=x584));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x589 = UINT8_MAX;
	int8_t x590 = -1;
	int64_t x591 = -129090632913LL;
	int8_t x592 = -5;
	volatile int32_t t82 = -15573642;

	t82 = (x589>>((x590<x591)<=x592));

	if (t82 != 255) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x593 = INT32_MAX;
	uint16_t x594 = UINT16_MAX;
	int64_t x595 = INT64_MIN;
	uint64_t x596 = 146LLU;
	static int32_t t83 = 277156296;

	t83 = (x593>>((x594<x595)<=x596));

	if (t83 != 1073741823) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x597 = 12946826136LLU;
	uint8_t x599 = 0U;
	static volatile uint64_t t84 = 68LLU;

	t84 = (x597>>((x598<x599)<=x600));

	if (t84 != 6473413068LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x613 = 1125LLU;
	uint8_t x614 = 14U;
	int64_t x616 = -1LL;
	uint64_t t85 = 4046212291973070691LLU;

	t85 = (x613>>((x614<x615)<=x616));

	if (t85 != 1125LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x617 = 7U;
	static int16_t x618 = INT16_MIN;
	volatile uint64_t x619 = 73218LLU;
	int32_t x620 = -95;
	int32_t t86 = -107281239;

	t86 = (x617>>((x618<x619)<=x620));

	if (t86 != 7) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x625 = 42U;
	int32_t x626 = -633099;
	int8_t x627 = 3;
	uint32_t x628 = 3944707U;

	t87 = (x625>>((x626<x627)<=x628));

	if (t87 != 21) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x629 = 4U;
	static int64_t x630 = INT64_MAX;
	int32_t t88 = 515871;

	t88 = (x629>>((x630<x631)<=x632));

	if (t88 != 2) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x637 = 20706348LLU;
	static uint64_t x638 = 2164LLU;
	int16_t x639 = INT16_MIN;

	t89 = (x637>>((x638<x639)<=x640));

	if (t89 != 20706348LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x661 = 0U;
	int8_t x662 = -18;
	uint64_t x663 = UINT64_MAX;
	int64_t x664 = INT64_MIN;
	static int32_t t90 = 0;

	t90 = (x661>>((x662<x663)<=x664));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x665 = 1713LLU;
	int16_t x666 = -1;
	uint16_t x667 = 23556U;
	volatile int64_t x668 = INT64_MAX;
	static volatile uint64_t t91 = 2174804275975204LLU;

	t91 = (x665>>((x666<x667)<=x668));

	if (t91 != 856LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x677 = 34U;
	uint16_t x679 = UINT16_MAX;
	volatile int32_t t92 = -44550018;

	t92 = (x677>>((x678<x679)<=x680));

	if (t92 != 17) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x681 = INT64_MAX;
	volatile int32_t x682 = -1;
	static int32_t x683 = 5;
	volatile int64_t t93 = INT64_MAX;

	t93 = (x681>>((x682<x683)<=x684));

	if (t93 != INT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x701 = 0U;
	volatile int8_t x702 = -1;
	uint16_t x704 = UINT16_MAX;
	volatile int32_t t94 = -113823;

	t94 = (x701>>((x702<x703)<=x704));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x705 = 0;
	volatile int16_t x706 = INT16_MAX;
	volatile int16_t x707 = -1;
	int8_t x708 = -1;

	t95 = (x705>>((x706<x707)<=x708));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x714 = 770254LLU;
	uint64_t x715 = 10LLU;
	uint32_t t96 = UINT32_MAX;

	t96 = (x713>>((x714<x715)<=x716));

	if (t96 != UINT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x719 = UINT32_MAX;
	volatile int32_t x720 = INT32_MIN;
	volatile int32_t t97 = INT32_MAX;

	t97 = (x717>>((x718<x719)<=x720));

	if (t97 != INT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x722 = 0;
	uint8_t x723 = UINT8_MAX;
	int32_t x724 = INT32_MAX;
	volatile int32_t t98 = -13222;

	t98 = (x721>>((x722<x723)<=x724));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x745 = UINT8_MAX;
	int8_t x746 = INT8_MAX;
	volatile uint32_t x747 = UINT32_MAX;
	static volatile int32_t t99 = -138799;

	t99 = (x745>>((x746<x747)<=x748));

	if (t99 != 255) { NG(); } else { ; }
	
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

