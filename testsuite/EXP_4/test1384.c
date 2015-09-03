#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x29 = 3312U;
volatile int64_t x43 = INT64_MIN;
volatile uint32_t t2 = UINT32_MAX;
uint32_t x56 = 874057U;
int32_t t4 = INT32_MAX;
int32_t x57 = 44828335;
int32_t t7 = -2;
uint8_t x77 = UINT8_MAX;
int32_t x78 = INT32_MAX;
int64_t x79 = -619603LL;
volatile int64_t t9 = 348504LL;
static int64_t x145 = 14867157678LL;
static uint32_t x148 = 7U;
static uint8_t x164 = 2U;
static uint32_t x173 = 732U;
uint32_t t17 = 13246951U;
int8_t x191 = INT8_MAX;
int32_t t18 = -4;
int16_t x206 = INT16_MIN;
static volatile int32_t t22 = 6862261;
uint32_t x249 = UINT32_MAX;
int16_t x251 = INT16_MIN;
uint8_t x280 = 6U;
int16_t x308 = -1;
uint64_t x333 = 447LLU;
static int16_t x336 = INT16_MIN;
int16_t x354 = -1;
uint64_t x355 = UINT64_MAX;
int16_t x356 = INT16_MIN;
static volatile int32_t t28 = INT32_MAX;
int16_t x360 = -597;
int16_t x413 = 60;
uint8_t x417 = UINT8_MAX;
int32_t x418 = 1;
int8_t x419 = 0;
int8_t x420 = INT8_MIN;
uint32_t x426 = 2070263U;
int16_t x428 = -1;
volatile int32_t x430 = INT32_MIN;
volatile uint32_t t37 = UINT32_MAX;
int64_t x446 = INT64_MAX;
int64_t t39 = INT64_MAX;
volatile uint8_t x461 = 1U;
uint8_t x486 = UINT8_MAX;
int32_t x490 = INT32_MIN;
int32_t t43 = 186713;
volatile uint16_t x502 = 1U;
uint16_t x506 = UINT16_MAX;
static int16_t x507 = -1;
static volatile int32_t x521 = 534176;
uint16_t x548 = UINT16_MAX;
int64_t x556 = INT64_MIN;
int32_t t51 = -1;
volatile uint16_t x557 = 1132U;
volatile int32_t t52 = 30;
static volatile uint16_t x573 = 37U;
int64_t x574 = INT64_MIN;
volatile int32_t t54 = -135224;
volatile int32_t x583 = INT32_MAX;
volatile int32_t t56 = 12149663;
static int16_t x594 = -1;
int16_t x596 = -1;
uint16_t x611 = 2238U;
int64_t x633 = 313LL;
static volatile int32_t t60 = -94;
static int32_t x654 = INT32_MIN;
int32_t x663 = 7836;
static uint8_t x664 = 0U;
static int32_t t63 = -1;
volatile int8_t x714 = -3;
volatile int8_t x715 = INT8_MAX;
int32_t t65 = -994;
int32_t x718 = INT32_MIN;
static int64_t x720 = INT64_MIN;
int8_t x728 = INT8_MIN;
volatile int32_t t67 = -94851957;
static int8_t x730 = -1;
int32_t t68 = -15837328;
int64_t t69 = INT64_MAX;
int32_t x747 = 1259394;
volatile int16_t x748 = 155;
static int32_t x750 = 2;
static volatile int8_t x770 = INT8_MIN;
volatile uint32_t t72 = 28U;
static int8_t x788 = INT8_MIN;
volatile int32_t x796 = -1;
int8_t x809 = 1;
int64_t x817 = 2300418907057255313LL;
int64_t x841 = 373LL;
uint64_t x842 = UINT64_MAX;
uint16_t x843 = UINT16_MAX;
int64_t x852 = INT64_MIN;
uint64_t x878 = 0LLU;
int64_t x880 = INT64_MIN;
volatile uint32_t x897 = 4786U;
static int64_t x900 = -261944790189535LL;
static uint16_t x917 = 6U;
int32_t x958 = INT32_MAX;
int64_t x960 = -252168LL;
uint8_t x976 = 25U;
int8_t x980 = 0;
int32_t x983 = -12119;
int16_t x984 = INT16_MIN;
int8_t x1018 = -28;
uint8_t x1022 = 1U;
int16_t x1029 = 1;
uint32_t x1030 = UINT32_MAX;
uint8_t x1031 = UINT8_MAX;
uint32_t t99 = UINT32_MAX;


void f0(void) {
	static volatile int16_t x30 = INT16_MIN;
	int8_t x31 = INT8_MIN;
	volatile uint64_t x32 = 4439475599310677LLU;
	volatile int32_t t0 = -23;

	t0 = (x29<<(x30*(x31<x32)));

	if (t0 != 3312) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x33 = 1U;
	uint16_t x34 = 43U;
	int32_t x35 = -1;
	int64_t x36 = -7965188LL;
	volatile int32_t t1 = -306352323;

	t1 = (x33<<(x34*(x35<x36)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x41 = UINT32_MAX;
	int16_t x42 = -95;
	static uint64_t x44 = 10560LLU;

	t2 = (x41<<(x42*(x43<x44)));

	if (t2 != UINT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x45 = 1491305;
	int16_t x46 = INT16_MIN;
	uint32_t x47 = 3754146U;
	static int16_t x48 = INT16_MAX;
	int32_t t3 = 16183651;

	t3 = (x45<<(x46*(x47<x48)));

	if (t3 != 1491305) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x53 = INT32_MAX;
	int8_t x54 = INT8_MIN;
	int32_t x55 = INT32_MAX;

	t4 = (x53<<(x54*(x55<x56)));

	if (t4 != INT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x58 = INT16_MIN;
	uint16_t x59 = 1363U;
	int64_t x60 = INT64_MIN;
	int32_t t5 = -1;

	t5 = (x57<<(x58*(x59<x60)));

	if (t5 != 44828335) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x69 = 8U;
	uint16_t x70 = 111U;
	volatile int64_t x71 = INT64_MIN;
	uint64_t x72 = 260044LLU;
	int32_t t6 = -4254032;

	t6 = (x69<<(x70*(x71<x72)));

	if (t6 != 8) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x73 = 1U;
	uint8_t x74 = 3U;
	uint8_t x75 = UINT8_MAX;
	uint32_t x76 = 305116U;

	t7 = (x73<<(x74*(x75<x76)));

	if (t7 != 8) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x80 = INT32_MIN;
	int32_t t8 = 0;

	t8 = (x77<<(x78*(x79<x80)));

	if (t8 != 255) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x85 = 16663055485650LL;
	int64_t x86 = INT64_MIN;
	uint8_t x87 = 47U;
	int64_t x88 = -88LL;

	t9 = (x85<<(x86*(x87<x88)));

	if (t9 != 16663055485650LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x89 = 0;
	volatile int64_t x90 = INT64_MAX;
	volatile int64_t x91 = -1LL;
	volatile int16_t x92 = -1;
	volatile int32_t t10 = 249178974;

	t10 = (x89<<(x90*(x91<x92)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x93 = 2U;
	uint64_t x94 = 27909589LLU;
	int8_t x95 = INT8_MAX;
	int32_t x96 = INT32_MIN;
	int32_t t11 = 28172;

	t11 = (x93<<(x94*(x95<x96)));

	if (t11 != 2) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x121 = UINT16_MAX;
	int32_t x122 = INT32_MAX;
	volatile int8_t x123 = INT8_MIN;
	volatile int8_t x124 = INT8_MIN;
	int32_t t12 = 242701;

	t12 = (x121<<(x122*(x123<x124)));

	if (t12 != 65535) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x133 = 1;
	static uint16_t x134 = 71U;
	int32_t x135 = INT32_MAX;
	int8_t x136 = -62;
	static int32_t t13 = 3;

	t13 = (x133<<(x134*(x135<x136)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x146 = -1;
	int64_t x147 = 424935165527180LL;
	int64_t t14 = 15345636784LL;

	t14 = (x145<<(x146*(x147<x148)));

	if (t14 != 14867157678LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x157 = 2934114559901078457LLU;
	int8_t x158 = INT8_MIN;
	int32_t x159 = -1;
	static volatile uint32_t x160 = 112U;
	uint64_t t15 = 241588155LLU;

	t15 = (x157<<(x158*(x159<x160)));

	if (t15 != 2934114559901078457LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x161 = 27U;
	uint8_t x162 = 2U;
	int64_t x163 = 6LL;
	volatile uint32_t t16 = 12U;

	t16 = (x161<<(x162*(x163<x164)));

	if (t16 != 27U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x174 = -1LL;
	int64_t x175 = INT64_MAX;
	uint8_t x176 = 13U;

	t17 = (x173<<(x174*(x175<x176)));

	if (t17 != 732U) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x189 = 56U;
	static int8_t x190 = -1;
	int64_t x192 = INT64_MIN;

	t18 = (x189<<(x190*(x191<x192)));

	if (t18 != 56) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x205 = 1LL;
	int32_t x207 = 13219;
	static uint32_t x208 = 30U;
	volatile int64_t t19 = -30990027646582525LL;

	t19 = (x205<<(x206*(x207<x208)));

	if (t19 != 1LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x225 = 1U;
	volatile uint64_t x226 = UINT64_MAX;
	uint64_t x227 = 1738076340LLU;
	uint8_t x228 = 3U;
	volatile int32_t t20 = 6520086;

	t20 = (x225<<(x226*(x227<x228)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x233 = 0U;
	int64_t x234 = -1LL;
	int32_t x235 = INT32_MIN;
	int64_t x236 = INT64_MIN;
	static volatile int32_t t21 = -199224;

	t21 = (x233<<(x234*(x235<x236)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x241 = 1U;
	int64_t x242 = INT64_MAX;
	uint64_t x243 = 67552870908654LLU;
	volatile uint64_t x244 = 5577LLU;

	t22 = (x241<<(x242*(x243<x244)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int64_t x250 = INT64_MAX;
	int64_t x252 = INT64_MIN;
	volatile uint32_t t23 = UINT32_MAX;

	t23 = (x249<<(x250*(x251<x252)));

	if (t23 != UINT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x265 = 249;
	int32_t x266 = INT32_MIN;
	volatile int32_t x267 = -1;
	int16_t x268 = -1;
	int32_t t24 = -124801083;

	t24 = (x265<<(x266*(x267<x268)));

	if (t24 != 249) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x277 = INT16_MAX;
	int32_t x278 = INT32_MAX;
	uint16_t x279 = 7U;
	static volatile int32_t t25 = -240;

	t25 = (x277<<(x278*(x279<x280)));

	if (t25 != 32767) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x305 = 0;
	int8_t x306 = 0;
	uint32_t x307 = 532012563U;
	volatile int32_t t26 = 8;

	t26 = (x305<<(x306*(x307<x308)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x334 = -360310;
	static int8_t x335 = 31;
	uint64_t t27 = 23646581508111729LLU;

	t27 = (x333<<(x334*(x335<x336)));

	if (t27 != 447LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x353 = INT32_MAX;

	t28 = (x353<<(x354*(x355<x356)));

	if (t28 != INT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x357 = 8168335U;
	int16_t x358 = INT16_MAX;
	static uint32_t x359 = UINT32_MAX;
	static uint32_t t29 = 1924956636U;

	t29 = (x357<<(x358*(x359<x360)));

	if (t29 != 8168335U) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x373 = 127U;
	int16_t x374 = 18;
	volatile uint64_t x375 = 33611994049409LLU;
	int8_t x376 = -24;
	static uint32_t t30 = 61105U;

	t30 = (x373<<(x374*(x375<x376)));

	if (t30 != 33292288U) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x381 = UINT32_MAX;
	volatile int8_t x382 = INT8_MIN;
	uint64_t x383 = 61260737LLU;
	static volatile int32_t x384 = 915;
	uint32_t t31 = UINT32_MAX;

	t31 = (x381<<(x382*(x383<x384)));

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x385 = 187;
	int8_t x386 = INT8_MIN;
	uint8_t x387 = UINT8_MAX;
	static int16_t x388 = -1;
	volatile int32_t t32 = -2739;

	t32 = (x385<<(x386*(x387<x388)));

	if (t32 != 187) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x401 = 57466282LLU;
	uint16_t x402 = UINT16_MAX;
	static uint8_t x403 = UINT8_MAX;
	uint32_t x404 = 5U;
	volatile uint64_t t33 = 85691LLU;

	t33 = (x401<<(x402*(x403<x404)));

	if (t33 != 57466282LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x414 = INT8_MIN;
	static uint64_t x415 = UINT64_MAX;
	static volatile int16_t x416 = INT16_MIN;
	int32_t t34 = -1;

	t34 = (x413<<(x414*(x415<x416)));

	if (t34 != 60) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t t35 = -470535;

	t35 = (x417<<(x418*(x419<x420)));

	if (t35 != 255) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x425 = UINT32_MAX;
	uint64_t x427 = UINT64_MAX;
	uint32_t t36 = UINT32_MAX;

	t36 = (x425<<(x426*(x427<x428)));

	if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x429 = UINT32_MAX;
	int64_t x431 = -1LL;
	volatile int8_t x432 = INT8_MIN;

	t37 = (x429<<(x430*(x431<x432)));

	if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x441 = UINT64_MAX;
	volatile int8_t x442 = -5;
	static volatile int16_t x443 = 0;
	int64_t x444 = INT64_MIN;
	uint64_t t38 = UINT64_MAX;

	t38 = (x441<<(x442*(x443<x444)));

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x445 = INT64_MAX;
	volatile uint32_t x447 = UINT32_MAX;
	int16_t x448 = -1;

	t39 = (x445<<(x446*(x447<x448)));

	if (t39 != INT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x462 = -864687125LL;
	volatile int32_t x463 = -1;
	int8_t x464 = INT8_MIN;
	int32_t t40 = 197;

	t40 = (x461<<(x462*(x463<x464)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x481 = UINT8_MAX;
	static uint32_t x482 = 467U;
	uint32_t x483 = UINT32_MAX;
	volatile uint16_t x484 = 3382U;
	static int32_t t41 = 39783556;

	t41 = (x481<<(x482*(x483<x484)));

	if (t41 != 255) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x485 = UINT16_MAX;
	int64_t x487 = INT64_MAX;
	volatile int16_t x488 = INT16_MIN;
	volatile int32_t t42 = -120890555;

	t42 = (x485<<(x486*(x487<x488)));

	if (t42 != 65535) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x489 = 3;
	int32_t x491 = INT32_MAX;
	static int8_t x492 = INT8_MAX;

	t43 = (x489<<(x490*(x491<x492)));

	if (t43 != 3) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x501 = 4225;
	uint32_t x503 = UINT32_MAX;
	int64_t x504 = 2823190LL;
	static volatile int32_t t44 = -22146102;

	t44 = (x501<<(x502*(x503<x504)));

	if (t44 != 4225) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x505 = INT32_MAX;
	volatile int8_t x508 = -1;
	static int32_t t45 = INT32_MAX;

	t45 = (x505<<(x506*(x507<x508)));

	if (t45 != INT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x517 = 6U;
	uint64_t x518 = UINT64_MAX;
	int64_t x519 = 740805572018LL;
	volatile uint8_t x520 = 0U;
	static int32_t t46 = 665;

	t46 = (x517<<(x518*(x519<x520)));

	if (t46 != 6) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int8_t x522 = INT8_MIN;
	int64_t x523 = INT64_MAX;
	int32_t x524 = -1;
	int32_t t47 = -692200;

	t47 = (x521<<(x522*(x523<x524)));

	if (t47 != 534176) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x533 = INT32_MAX;
	uint16_t x534 = 1375U;
	int64_t x535 = 36326110755LL;
	volatile int32_t x536 = INT32_MAX;
	static volatile int32_t t48 = INT32_MAX;

	t48 = (x533<<(x534*(x535<x536)));

	if (t48 != INT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x545 = UINT64_MAX;
	uint32_t x546 = 108912U;
	int32_t x547 = INT32_MAX;
	volatile uint64_t t49 = UINT64_MAX;

	t49 = (x545<<(x546*(x547<x548)));

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x549 = 119286055U;
	int16_t x550 = INT16_MAX;
	volatile uint64_t x551 = UINT64_MAX;
	int8_t x552 = -1;
	volatile uint32_t t50 = 12U;

	t50 = (x549<<(x550*(x551<x552)));

	if (t50 != 119286055U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x553 = 21973U;
	int32_t x554 = INT32_MIN;
	int8_t x555 = 0;

	t51 = (x553<<(x554*(x555<x556)));

	if (t51 != 21973) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x558 = 73;
	int16_t x559 = -66;
	int64_t x560 = INT64_MIN;

	t52 = (x557<<(x558*(x559<x560)));

	if (t52 != 1132) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x569 = 24463U;
	static uint16_t x570 = 8261U;
	uint8_t x571 = 7U;
	uint8_t x572 = 3U;
	volatile uint32_t t53 = 1U;

	t53 = (x569<<(x570*(x571<x572)));

	if (t53 != 24463U) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x575 = 17U;
	int64_t x576 = -1LL;

	t54 = (x573<<(x574*(x575<x576)));

	if (t54 != 37) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x577 = UINT8_MAX;
	static uint64_t x578 = UINT64_MAX;
	uint16_t x579 = 10873U;
	int32_t x580 = 33;
	volatile int32_t t55 = -2242;

	t55 = (x577<<(x578*(x579<x580)));

	if (t55 != 255) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x581 = INT16_MAX;
	volatile uint16_t x582 = UINT16_MAX;
	int16_t x584 = INT16_MAX;

	t56 = (x581<<(x582*(x583<x584)));

	if (t56 != 32767) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x593 = INT32_MAX;
	uint8_t x595 = 11U;
	int32_t t57 = INT32_MAX;

	t57 = (x593<<(x594*(x595<x596)));

	if (t57 != INT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x609 = INT64_MAX;
	volatile uint16_t x610 = 14U;
	uint16_t x612 = 491U;
	volatile int64_t t58 = INT64_MAX;

	t58 = (x609<<(x610*(x611<x612)));

	if (t58 != INT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x634 = INT64_MIN;
	int8_t x635 = -6;
	volatile int32_t x636 = INT32_MIN;
	static volatile int64_t t59 = 122162LL;

	t59 = (x633<<(x634*(x635<x636)));

	if (t59 != 313LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x645 = INT8_MAX;
	int8_t x646 = 3;
	int32_t x647 = -1;
	int16_t x648 = INT16_MIN;

	t60 = (x645<<(x646*(x647<x648)));

	if (t60 != 127) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x653 = UINT32_MAX;
	static int64_t x655 = 217820LL;
	int64_t x656 = 343LL;
	static uint32_t t61 = UINT32_MAX;

	t61 = (x653<<(x654*(x655<x656)));

	if (t61 != UINT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x661 = 59608360102LL;
	volatile uint16_t x662 = UINT16_MAX;
	volatile int64_t t62 = 8007213005LL;

	t62 = (x661<<(x662*(x663<x664)));

	if (t62 != 59608360102LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x689 = 0U;
	int32_t x690 = -380;
	int64_t x691 = INT64_MAX;
	volatile int64_t x692 = 527545352365061LL;

	t63 = (x689<<(x690*(x691<x692)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x697 = 46132666308687129LL;
	volatile int16_t x698 = INT16_MAX;
	int8_t x699 = INT8_MIN;
	static int32_t x700 = -1047138;
	volatile int64_t t64 = -1LL;

	t64 = (x697<<(x698*(x699<x700)));

	if (t64 != 46132666308687129LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x713 = 230821;
	int8_t x716 = -1;

	t65 = (x713<<(x714*(x715<x716)));

	if (t65 != 230821) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x717 = 6206LLU;
	int32_t x719 = -3;
	uint64_t t66 = 446702788950281LLU;

	t66 = (x717<<(x718*(x719<x720)));

	if (t66 != 6206LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x725 = INT8_MAX;
	int64_t x726 = -1LL;
	int64_t x727 = INT64_MAX;

	t67 = (x725<<(x726*(x727<x728)));

	if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x729 = UINT16_MAX;
	int32_t x731 = -1;
	static volatile int64_t x732 = -1338275069185240LL;

	t68 = (x729<<(x730*(x731<x732)));

	if (t68 != 65535) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x733 = INT64_MAX;
	int8_t x734 = INT8_MIN;
	int64_t x735 = 1909224727928LL;
	int32_t x736 = -1;

	t69 = (x733<<(x734*(x735<x736)));

	if (t69 != INT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x745 = UINT64_MAX;
	uint64_t x746 = UINT64_MAX;
	uint64_t t70 = UINT64_MAX;

	t70 = (x745<<(x746*(x747<x748)));

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x749 = UINT32_MAX;
	volatile int64_t x751 = -1LL;
	int64_t x752 = -1LL;
	uint32_t t71 = UINT32_MAX;

	t71 = (x749<<(x750*(x751<x752)));

	if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x769 = 41069U;
	int8_t x771 = -54;
	volatile int16_t x772 = INT16_MIN;

	t72 = (x769<<(x770*(x771<x772)));

	if (t72 != 41069U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x785 = UINT64_MAX;
	int32_t x786 = INT32_MIN;
	int32_t x787 = INT32_MAX;
	volatile uint64_t t73 = UINT64_MAX;

	t73 = (x785<<(x786*(x787<x788)));

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x793 = INT8_MAX;
	uint32_t x794 = 389151U;
	static int64_t x795 = -1LL;
	int32_t t74 = 955756;

	t74 = (x793<<(x794*(x795<x796)));

	if (t74 != 127) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x805 = INT32_MAX;
	static int8_t x806 = INT8_MIN;
	static int32_t x807 = 336868854;
	int16_t x808 = -5;
	volatile int32_t t75 = INT32_MAX;

	t75 = (x805<<(x806*(x807<x808)));

	if (t75 != INT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x810 = 81504LL;
	volatile uint32_t x811 = UINT32_MAX;
	volatile uint8_t x812 = 6U;
	volatile int32_t t76 = 7009410;

	t76 = (x809<<(x810*(x811<x812)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x813 = 1U;
	volatile int64_t x814 = -1356730802LL;
	static uint8_t x815 = 59U;
	int64_t x816 = INT64_MIN;
	int32_t t77 = -58;

	t77 = (x813<<(x814*(x815<x816)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x818 = UINT8_MAX;
	int8_t x819 = -1;
	volatile int16_t x820 = -1;
	int64_t t78 = 1774346176LL;

	t78 = (x817<<(x818*(x819<x820)));

	if (t78 != 2300418907057255313LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x837 = INT16_MAX;
	static int16_t x838 = INT16_MIN;
	int8_t x839 = -1;
	static int8_t x840 = -3;
	static int32_t t79 = 802;

	t79 = (x837<<(x838*(x839<x840)));

	if (t79 != 32767) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x844 = INT16_MAX;
	int64_t t80 = 51873065916LL;

	t80 = (x841<<(x842*(x843<x844)));

	if (t80 != 373LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x849 = 0;
	int32_t x850 = -1;
	static volatile int64_t x851 = -1LL;
	int32_t t81 = -1000479;

	t81 = (x849<<(x850*(x851<x852)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x873 = INT32_MAX;
	volatile int8_t x874 = 2;
	static volatile uint8_t x875 = 124U;
	uint8_t x876 = 0U;
	int32_t t82 = INT32_MAX;

	t82 = (x873<<(x874*(x875<x876)));

	if (t82 != INT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x877 = 166749U;
	uint16_t x879 = UINT16_MAX;
	volatile uint32_t t83 = 954361869U;

	t83 = (x877<<(x878*(x879<x880)));

	if (t83 != 166749U) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int16_t x898 = INT16_MIN;
	int64_t x899 = -48989LL;
	uint32_t t84 = 728584U;

	t84 = (x897<<(x898*(x899<x900)));

	if (t84 != 4786U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x918 = INT8_MIN;
	volatile uint64_t x919 = UINT64_MAX;
	int32_t x920 = 6;
	volatile int32_t t85 = -949;

	t85 = (x917<<(x918*(x919<x920)));

	if (t85 != 6) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x929 = UINT16_MAX;
	int8_t x930 = -21;
	volatile uint32_t x931 = UINT32_MAX;
	int16_t x932 = -1;
	volatile int32_t t86 = -30232550;

	t86 = (x929<<(x930*(x931<x932)));

	if (t86 != 65535) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x945 = 26325;
	int32_t x946 = INT32_MAX;
	volatile int64_t x947 = 5373906358LL;
	static int16_t x948 = -400;
	volatile int32_t t87 = 7;

	t87 = (x945<<(x946*(x947<x948)));

	if (t87 != 26325) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int16_t x957 = INT16_MAX;
	int64_t x959 = -1LL;
	volatile int32_t t88 = -1165820;

	t88 = (x957<<(x958*(x959<x960)));

	if (t88 != 32767) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x973 = 3126995U;
	int64_t x974 = -3LL;
	int64_t x975 = INT64_MAX;
	uint32_t t89 = 11U;

	t89 = (x973<<(x974*(x975<x976)));

	if (t89 != 3126995U) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x977 = UINT32_MAX;
	int8_t x978 = 55;
	uint64_t x979 = 266940127723073241LLU;
	volatile uint32_t t90 = UINT32_MAX;

	t90 = (x977<<(x978*(x979<x980)));

	if (t90 != UINT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x981 = 392057U;
	int64_t x982 = INT64_MAX;
	volatile uint32_t t91 = 1787235702U;

	t91 = (x981<<(x982*(x983<x984)));

	if (t91 != 392057U) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x985 = UINT32_MAX;
	uint16_t x986 = UINT16_MAX;
	volatile uint16_t x987 = 173U;
	uint16_t x988 = 84U;
	static uint32_t t92 = UINT32_MAX;

	t92 = (x985<<(x986*(x987<x988)));

	if (t92 != UINT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x1017 = 0U;
	volatile uint32_t x1019 = UINT32_MAX;
	static int32_t x1020 = -316;
	static int32_t t93 = -5064;

	t93 = (x1017<<(x1018*(x1019<x1020)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x1021 = 4U;
	uint16_t x1023 = 7U;
	int16_t x1024 = -1;
	static int32_t t94 = -47040582;

	t94 = (x1021<<(x1022*(x1023<x1024)));

	if (t94 != 4) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x1032 = INT16_MIN;
	static int32_t t95 = -62906507;

	t95 = (x1029<<(x1030*(x1031<x1032)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x1045 = 204U;
	int8_t x1046 = -12;
	int32_t x1047 = INT32_MAX;
	int32_t x1048 = INT32_MAX;
	volatile uint32_t t96 = 3575479U;

	t96 = (x1045<<(x1046*(x1047<x1048)));

	if (t96 != 204U) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x1065 = 133851607LLU;
	int64_t x1066 = -7258437LL;
	int64_t x1067 = -1LL;
	int32_t x1068 = INT32_MIN;
	uint64_t t97 = 1529LLU;

	t97 = (x1065<<(x1066*(x1067<x1068)));

	if (t97 != 133851607LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x1089 = 52U;
	volatile int32_t x1090 = -224;
	int32_t x1091 = -1;
	volatile uint32_t x1092 = 1896245106U;
	int32_t t98 = -3;

	t98 = (x1089<<(x1090*(x1091<x1092)));

	if (t98 != 52) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x1097 = UINT32_MAX;
	uint8_t x1098 = UINT8_MAX;
	int8_t x1099 = -1;
	int16_t x1100 = -54;

	t99 = (x1097<<(x1098*(x1099<x1100)));

	if (t99 != UINT32_MAX) { NG(); } else { ; }
	
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

