#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x2 = -7701LL;
static int16_t x11 = INT16_MIN;
static volatile uint32_t x13 = 1599651800U;
int16_t x14 = -4;
volatile int64_t x17 = 15161718422271LL;
int32_t x20 = INT32_MIN;
int64_t x36 = INT64_MIN;
int16_t x66 = 22;
volatile int64_t t5 = -160LL;
int64_t x73 = 4344220471494930LL;
static int64_t x74 = -1LL;
int16_t x80 = INT16_MAX;
static volatile int8_t x86 = -46;
int8_t x126 = INT8_MIN;
static uint16_t x137 = UINT16_MAX;
uint64_t t13 = 8739071LLU;
uint8_t x153 = UINT8_MAX;
int32_t x199 = -1;
int16_t x210 = INT16_MAX;
int32_t x225 = 1;
uint32_t x229 = UINT32_MAX;
static uint8_t x232 = 12U;
static volatile int32_t x235 = -90563;
int64_t t23 = 8333887440303LL;
uint32_t x241 = UINT32_MAX;
volatile uint32_t t24 = 1492U;
int8_t x247 = 2;
volatile uint64_t t25 = 6LLU;
int64_t x256 = INT64_MIN;
int16_t x266 = 2311;
static volatile int8_t x268 = INT8_MIN;
volatile int64_t x279 = INT64_MAX;
static volatile int32_t t28 = 77447;
int16_t x314 = 43;
uint8_t x334 = 17U;
int64_t x342 = -1689207736LL;
int64_t x344 = INT64_MIN;
int64_t t32 = -10554369213592LL;
int32_t x351 = INT32_MIN;
int32_t x363 = -15265106;
int8_t x365 = 3;
static int64_t x367 = 242378063956120LL;
int32_t t35 = 16090;
uint32_t x408 = 49402170U;
static uint64_t x418 = 7522256001016812959LLU;
static volatile int32_t t38 = 404187071;
int32_t x426 = 3887336;
volatile int64_t t39 = -513542487443708LL;
int16_t x430 = -1;
int32_t x467 = -1;
static volatile int64_t t42 = -3329926854LL;
int8_t x477 = INT8_MAX;
int8_t x479 = INT8_MIN;
uint8_t x490 = 3U;
int32_t x530 = INT32_MIN;
volatile int32_t x531 = INT32_MIN;
int16_t x549 = 0;
int8_t x550 = -1;
int8_t x563 = -26;
int8_t x568 = -47;
int8_t x570 = 18;
uint64_t x571 = 15038030212LLU;
int32_t x572 = -103;
int8_t x574 = INT8_MAX;
int32_t x589 = INT32_MAX;
static int64_t x592 = INT64_MIN;
uint64_t x616 = 90745882LLU;
int16_t x617 = INT16_MAX;
static int8_t x618 = -1;
volatile int32_t t57 = 1009621;
uint64_t x660 = 20995555608LLU;
uint64_t t58 = 14262701377357290LLU;
static int32_t x677 = 3;
int32_t t59 = 4553;
int16_t x685 = INT16_MAX;
int8_t x686 = INT8_MIN;
uint64_t x687 = UINT64_MAX;
static uint64_t x705 = UINT64_MAX;
int16_t x708 = INT16_MIN;
int64_t x715 = INT64_MIN;
volatile int64_t t62 = -641222879867801LL;
int16_t x720 = INT16_MAX;
int8_t x774 = 4;
int8_t x778 = -1;
volatile int64_t t67 = 33032489229760LL;
int16_t x824 = 1;
static uint64_t x837 = 17260862121933LLU;
uint64_t t70 = 269253748247LLU;
int64_t x846 = 136542882053822LL;
int8_t x848 = -2;
int8_t x855 = -1;
uint32_t t73 = 1825741U;
static int8_t x877 = 10;
static uint32_t x878 = 5751U;
static int32_t t74 = 48483160;
static volatile uint8_t x901 = 4U;
int64_t x911 = -924492212LL;
static int16_t x912 = -1;
int32_t x944 = INT32_MIN;
uint64_t t78 = 8130LLU;
int64_t x968 = INT64_MIN;
volatile int64_t t81 = 805LL;
uint64_t x981 = UINT64_MAX;
uint32_t x982 = 2728U;
static volatile uint64_t x984 = 5903090542LLU;
int8_t x1004 = INT8_MIN;
int64_t x1012 = INT64_MIN;
volatile int16_t x1041 = 22;
uint64_t t87 = 901482LLU;
static uint64_t x1066 = 5808320116LLU;
volatile int8_t x1086 = 0;
int64_t x1087 = -95428988LL;
int8_t x1090 = 0;
int16_t x1135 = INT16_MIN;
int64_t x1196 = INT64_MAX;
int64_t t95 = 2679623LL;
volatile uint8_t x1201 = UINT8_MAX;
uint16_t x1202 = UINT16_MAX;
int32_t x1203 = INT32_MIN;
uint8_t x1204 = UINT8_MAX;
volatile int32_t x1244 = INT32_MIN;


void f0(void) {
	uint32_t x1 = 2662021U;
	int64_t x3 = INT64_MAX;
	int8_t x4 = INT8_MIN;
	volatile uint32_t t0 = 135462U;

	t0 = ((x1>>(x2/x3))%x4);

	if (t0 != 2662021U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x9 = 0U;
	static uint8_t x10 = UINT8_MAX;
	static uint32_t x12 = 23U;
	uint32_t t1 = 190U;

	t1 = ((x9>>(x10/x11))%x12);

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x15 = INT16_MIN;
	int64_t x16 = 8301943036353LL;
	volatile int64_t t2 = 100708148LL;

	t2 = ((x13>>(x14/x15))%x16);

	if (t2 != 1599651800LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x18 = 107U;
	int32_t x19 = INT32_MAX;
	static volatile int64_t t3 = -79537827425715LL;

	t3 = ((x17>>(x18/x19))%x20);

	if (t3 != 483867391LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x33 = INT16_MAX;
	int8_t x34 = INT8_MIN;
	int16_t x35 = INT16_MIN;
	static volatile int64_t t4 = -19646371306198839LL;

	t4 = ((x33>>(x34/x35))%x36);

	if (t4 != 32767LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x65 = INT64_MAX;
	int32_t x67 = INT32_MAX;
	uint16_t x68 = 251U;

	t5 = ((x65>>(x66/x67))%x68);

	if (t5 != 159LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x69 = 4U;
	int32_t x70 = -1;
	int32_t x71 = -1;
	int32_t x72 = INT32_MIN;
	volatile int32_t t6 = -5109;

	t6 = ((x69>>(x70/x71))%x72);

	if (t6 != 2) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x75 = UINT8_MAX;
	int32_t x76 = INT32_MIN;
	volatile int64_t t7 = -413257991316LL;

	t7 = ((x73>>(x74/x75))%x76);

	if (t7 != 638028050LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x77 = 7U;
	static int8_t x78 = INT8_MAX;
	static int16_t x79 = INT16_MIN;
	volatile int32_t t8 = 31157456;

	t8 = ((x77>>(x78/x79))%x80);

	if (t8 != 7) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x85 = INT8_MAX;
	uint16_t x87 = UINT16_MAX;
	int32_t x88 = INT32_MIN;
	static volatile int32_t t9 = 14145;

	t9 = ((x85>>(x86/x87))%x88);

	if (t9 != 127) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x117 = INT16_MAX;
	static uint64_t x118 = UINT64_MAX;
	int64_t x119 = INT64_MAX;
	uint32_t x120 = 1297044536U;
	static volatile uint32_t t10 = 25313U;

	t10 = ((x117>>(x118/x119))%x120);

	if (t10 != 8191U) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x125 = UINT16_MAX;
	int16_t x127 = 4045;
	int64_t x128 = INT64_MIN;
	int64_t t11 = -54LL;

	t11 = ((x125>>(x126/x127))%x128);

	if (t11 != 65535LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x138 = INT8_MIN;
	static int8_t x139 = INT8_MIN;
	static int32_t x140 = -1;
	volatile int32_t t12 = -476;

	t12 = ((x137>>(x138/x139))%x140);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x145 = 59026LLU;
	int32_t x146 = -1;
	int32_t x147 = INT32_MIN;
	static int8_t x148 = INT8_MIN;

	t13 = ((x145>>(x146/x147))%x148);

	if (t13 != 59026LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x154 = UINT32_MAX;
	volatile int64_t x155 = 997840490924807809LL;
	static int64_t x156 = 2LL;
	static volatile int64_t t14 = -6998LL;

	t14 = ((x153>>(x154/x155))%x156);

	if (t14 != 1LL) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x173 = UINT16_MAX;
	int8_t x174 = -1;
	int64_t x175 = -1LL;
	volatile int16_t x176 = -1;
	int32_t t15 = -254525;

	t15 = ((x173>>(x174/x175))%x176);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x177 = UINT32_MAX;
	static volatile int16_t x178 = INT16_MIN;
	static int32_t x179 = INT32_MAX;
	uint64_t x180 = 279720457709LLU;
	volatile uint64_t t16 = 243663148366LLU;

	t16 = ((x177>>(x178/x179))%x180);

	if (t16 != 4294967295LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x181 = INT64_MAX;
	uint8_t x182 = 12U;
	uint64_t x183 = UINT64_MAX;
	int64_t x184 = INT64_MIN;
	volatile int64_t t17 = INT64_MAX;

	t17 = ((x181>>(x182/x183))%x184);

	if (t17 != INT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x185 = 5144;
	int8_t x186 = -1;
	int8_t x187 = INT8_MIN;
	int64_t x188 = INT64_MAX;
	static int64_t t18 = 35626LL;

	t18 = ((x185>>(x186/x187))%x188);

	if (t18 != 5144LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x197 = UINT32_MAX;
	static uint16_t x198 = 0U;
	int16_t x200 = INT16_MIN;
	volatile uint32_t t19 = 10U;

	t19 = ((x197>>(x198/x199))%x200);

	if (t19 != 32767U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x209 = 6;
	uint64_t x211 = UINT64_MAX;
	int64_t x212 = -92LL;
	static volatile int64_t t20 = 10004777459383232LL;

	t20 = ((x209>>(x210/x211))%x212);

	if (t20 != 6LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x226 = INT32_MAX;
	int64_t x227 = INT64_MIN;
	int8_t x228 = INT8_MIN;
	int32_t t21 = 298065090;

	t21 = ((x225>>(x226/x227))%x228);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x230 = -100;
	static int64_t x231 = INT64_MAX;
	uint32_t t22 = 20248780U;

	t22 = ((x229>>(x230/x231))%x232);

	if (t22 != 3U) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x233 = 886U;
	uint64_t x234 = UINT64_MAX;
	static int64_t x236 = INT64_MIN;

	t23 = ((x233>>(x234/x235))%x236);

	if (t23 != 443LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x242 = 1;
	int32_t x243 = 27474002;
	int16_t x244 = INT16_MIN;

	t24 = ((x241>>(x242/x243))%x244);

	if (t24 != 32767U) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x245 = 35635078726024LLU;
	int8_t x246 = -1;
	int8_t x248 = -1;

	t25 = ((x245>>(x246/x247))%x248);

	if (t25 != 35635078726024LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x253 = 102052290LLU;
	static int64_t x254 = -7LL;
	static int8_t x255 = INT8_MIN;
	volatile uint64_t t26 = 227435020LLU;

	t26 = ((x253>>(x254/x255))%x256);

	if (t26 != 102052290LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x265 = 27889846;
	volatile int16_t x267 = INT16_MIN;
	static volatile int32_t t27 = 1;

	t27 = ((x265>>(x266/x267))%x268);

	if (t27 != 54) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x277 = 24199U;
	int16_t x278 = INT16_MIN;
	int32_t x280 = 124;

	t28 = ((x277>>(x278/x279))%x280);

	if (t28 != 19) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x301 = 0U;
	uint64_t x302 = 134313053910LLU;
	int16_t x303 = INT16_MIN;
	uint32_t x304 = UINT32_MAX;
	static volatile uint32_t t29 = 2752U;

	t29 = ((x301>>(x302/x303))%x304);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x313 = UINT16_MAX;
	static int8_t x315 = INT8_MIN;
	static uint64_t x316 = UINT64_MAX;
	uint64_t t30 = 83994471251645506LLU;

	t30 = ((x313>>(x314/x315))%x316);

	if (t30 != 65535LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x333 = 67U;
	int64_t x335 = -1976793545235538LL;
	int16_t x336 = INT16_MIN;
	int32_t t31 = 93827999;

	t31 = ((x333>>(x334/x335))%x336);

	if (t31 != 67) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x341 = 3302U;
	uint64_t x343 = UINT64_MAX;

	t32 = ((x341>>(x342/x343))%x344);

	if (t32 != 3302LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x349 = 139221;
	int64_t x350 = -9590LL;
	int8_t x352 = INT8_MIN;
	volatile int32_t t33 = 286;

	t33 = ((x349>>(x350/x351))%x352);

	if (t33 != 85) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x361 = 22666;
	volatile int8_t x362 = INT8_MIN;
	uint64_t x364 = UINT64_MAX;
	uint64_t t34 = 1LLU;

	t34 = ((x361>>(x362/x363))%x364);

	if (t34 != 22666LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x366 = -93481;
	int8_t x368 = INT8_MIN;

	t35 = ((x365>>(x366/x367))%x368);

	if (t35 != 3) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x369 = 0;
	int8_t x370 = INT8_MIN;
	static int32_t x371 = INT32_MIN;
	static volatile int32_t x372 = -1;
	volatile int32_t t36 = -818;

	t36 = ((x369>>(x370/x371))%x372);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x405 = UINT32_MAX;
	uint32_t x406 = 683665852U;
	int32_t x407 = -1;
	volatile uint32_t t37 = 1915512U;

	t37 = ((x405>>(x406/x407))%x408);

	if (t37 != 46380675U) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x417 = 33U;
	static int8_t x419 = INT8_MIN;
	int32_t x420 = -1;

	t38 = ((x417>>(x418/x419))%x420);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x425 = INT32_MAX;
	int64_t x427 = INT64_MIN;
	int64_t x428 = -1LL;

	t39 = ((x425>>(x426/x427))%x428);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x429 = 16555624437055LL;
	int64_t x431 = 26527560647322LL;
	static int8_t x432 = INT8_MIN;
	static int64_t t40 = -159748759375398LL;

	t40 = ((x429>>(x430/x431))%x432);

	if (t40 != 63LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x437 = 176273390586328071LLU;
	int16_t x438 = INT16_MAX;
	static uint32_t x439 = UINT32_MAX;
	static int32_t x440 = INT32_MIN;
	uint64_t t41 = 14LLU;

	t41 = ((x437>>(x438/x439))%x440);

	if (t41 != 176273390586328071LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x465 = 30U;
	uint8_t x466 = 0U;
	static int64_t x468 = INT64_MIN;

	t42 = ((x465>>(x466/x467))%x468);

	if (t42 != 30LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x478 = -1;
	int64_t x480 = -1859027561685662592LL;
	static volatile int64_t t43 = 119575LL;

	t43 = ((x477>>(x478/x479))%x480);

	if (t43 != 127LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x489 = 6U;
	int16_t x491 = INT16_MIN;
	volatile uint16_t x492 = 8503U;
	int32_t t44 = 92931;

	t44 = ((x489>>(x490/x491))%x492);

	if (t44 != 6) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x513 = 1029060235LL;
	uint32_t x514 = UINT32_MAX;
	static int16_t x515 = INT16_MIN;
	int64_t x516 = INT64_MIN;
	int64_t t45 = 1860794962789875910LL;

	t45 = ((x513>>(x514/x515))%x516);

	if (t45 != 514530117LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x525 = 82U;
	int8_t x526 = -6;
	volatile int32_t x527 = INT32_MIN;
	int16_t x528 = -1;
	volatile uint32_t t46 = 17262U;

	t46 = ((x525>>(x526/x527))%x528);

	if (t46 != 82U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x529 = 28U;
	volatile uint64_t x532 = 1356599454952381915LLU;
	static uint64_t t47 = 5748588548185311LLU;

	t47 = ((x529>>(x530/x531))%x532);

	if (t47 != 14LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x533 = 7U;
	static uint8_t x534 = UINT8_MAX;
	int64_t x535 = INT64_MIN;
	int8_t x536 = INT8_MIN;
	int32_t t48 = 666931643;

	t48 = ((x533>>(x534/x535))%x536);

	if (t48 != 7) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x551 = INT8_MAX;
	static uint64_t x552 = UINT64_MAX;
	uint64_t t49 = 650287294LLU;

	t49 = ((x549>>(x550/x551))%x552);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x561 = INT32_MAX;
	uint32_t x562 = 1771739U;
	uint64_t x564 = UINT64_MAX;
	uint64_t t50 = 3833702LLU;

	t50 = ((x561>>(x562/x563))%x564);

	if (t50 != 2147483647LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x565 = UINT8_MAX;
	volatile int8_t x566 = -1;
	int32_t x567 = -12228;
	static int32_t t51 = 11;

	t51 = ((x565>>(x566/x567))%x568);

	if (t51 != 20) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x569 = 72617883U;
	uint32_t t52 = 129232846U;

	t52 = ((x569>>(x570/x571))%x572);

	if (t52 != 72617883U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x573 = 0;
	int8_t x575 = INT8_MIN;
	int8_t x576 = INT8_MAX;
	int32_t t53 = -1106;

	t53 = ((x573>>(x574/x575))%x576);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x581 = UINT32_MAX;
	int16_t x582 = INT16_MIN;
	int16_t x583 = INT16_MIN;
	volatile uint64_t x584 = 426LLU;
	volatile uint64_t t54 = 3231512934978LLU;

	t54 = ((x581>>(x582/x583))%x584);

	if (t54 != 181LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x590 = 14;
	int16_t x591 = -721;
	volatile int64_t t55 = -1120711482427LL;

	t55 = ((x589>>(x590/x591))%x592);

	if (t55 != 2147483647LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x613 = UINT16_MAX;
	static uint16_t x614 = UINT16_MAX;
	int32_t x615 = INT32_MAX;
	static volatile uint64_t t56 = 0LLU;

	t56 = ((x613>>(x614/x615))%x616);

	if (t56 != 65535LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x619 = UINT8_MAX;
	int8_t x620 = INT8_MIN;

	t57 = ((x617>>(x618/x619))%x620);

	if (t57 != 127) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x657 = 71090LL;
	uint32_t x658 = UINT32_MAX;
	int64_t x659 = 62696503698557766LL;

	t58 = ((x657>>(x658/x659))%x660);

	if (t58 != 71090LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x678 = -9;
	int8_t x679 = INT8_MIN;
	int8_t x680 = 1;

	t59 = ((x677>>(x678/x679))%x680);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x688 = 185231385906106LLU;
	uint64_t t60 = 46673624544786LLU;

	t60 = ((x685>>(x686/x687))%x688);

	if (t60 != 32767LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x706 = INT16_MAX;
	uint32_t x707 = UINT32_MAX;
	static volatile uint64_t t61 = 162653254086LLU;

	t61 = ((x705>>(x706/x707))%x708);

	if (t61 != 32767LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x713 = UINT8_MAX;
	uint16_t x714 = UINT16_MAX;
	static int64_t x716 = -4798360689390LL;

	t62 = ((x713>>(x714/x715))%x716);

	if (t62 != 255LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x717 = 408;
	volatile uint32_t x718 = UINT32_MAX;
	int64_t x719 = INT64_MIN;
	volatile int32_t t63 = 4187439;

	t63 = ((x717>>(x718/x719))%x720);

	if (t63 != 408) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x761 = 1889U;
	static uint16_t x762 = 0U;
	int8_t x763 = INT8_MIN;
	volatile int32_t x764 = -7657;
	int32_t t64 = -28048;

	t64 = ((x761>>(x762/x763))%x764);

	if (t64 != 1889) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x773 = 3448;
	uint32_t x775 = 7928U;
	static int16_t x776 = -1;
	static int32_t t65 = 0;

	t65 = ((x773>>(x774/x775))%x776);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x777 = UINT32_MAX;
	static volatile int8_t x779 = INT8_MIN;
	int32_t x780 = INT32_MIN;
	uint32_t t66 = 8178U;

	t66 = ((x777>>(x778/x779))%x780);

	if (t66 != 2147483647U) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x781 = INT64_MAX;
	static int64_t x782 = -16709355509LL;
	static volatile uint64_t x783 = UINT64_MAX;
	int16_t x784 = INT16_MAX;

	t67 = ((x781>>(x782/x783))%x784);

	if (t67 != 7LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x821 = 357394749154662LL;
	volatile int16_t x822 = 240;
	uint16_t x823 = UINT16_MAX;
	volatile int64_t t68 = 1102078888329762LL;

	t68 = ((x821>>(x822/x823))%x824);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x829 = 2133648909177159817LLU;
	static volatile uint8_t x830 = 2U;
	volatile int32_t x831 = -959;
	int32_t x832 = -29629;
	volatile uint64_t t69 = 123253LLU;

	t69 = ((x829>>(x830/x831))%x832);

	if (t69 != 2133648909177159817LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x838 = 3646142336LLU;
	int64_t x839 = -1LL;
	static uint32_t x840 = 927U;

	t70 = ((x837>>(x838/x839))%x840);

	if (t70 != 807LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x845 = 0LL;
	uint64_t x847 = UINT64_MAX;
	static volatile int64_t t71 = 1062807410436LL;

	t71 = ((x845>>(x846/x847))%x848);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x853 = 213508162LL;
	int32_t x854 = -1;
	uint32_t x856 = 37289U;
	volatile int64_t t72 = -9356592463106LL;

	t72 = ((x853>>(x854/x855))%x856);

	if (t72 != 32963LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x865 = UINT32_MAX;
	uint8_t x866 = 104U;
	static int64_t x867 = INT64_MIN;
	int8_t x868 = INT8_MIN;

	t73 = ((x865>>(x866/x867))%x868);

	if (t73 != 127U) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x879 = UINT8_MAX;
	int8_t x880 = -1;

	t74 = ((x877>>(x878/x879))%x880);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x885 = UINT64_MAX;
	uint8_t x886 = UINT8_MAX;
	int32_t x887 = INT32_MAX;
	int64_t x888 = INT64_MIN;
	static volatile uint64_t t75 = 7543967057575891LLU;

	t75 = ((x885>>(x886/x887))%x888);

	if (t75 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x902 = 4U;
	uint64_t x903 = 514093LLU;
	static int64_t x904 = 75731461LL;
	volatile int64_t t76 = -7207015650723535LL;

	t76 = ((x901>>(x902/x903))%x904);

	if (t76 != 4LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x909 = INT8_MAX;
	int16_t x910 = INT16_MAX;
	volatile int32_t t77 = -3897567;

	t77 = ((x909>>(x910/x911))%x912);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x941 = 537135LLU;
	int8_t x942 = -3;
	int64_t x943 = -1LL;

	t78 = ((x941>>(x942/x943))%x944);

	if (t78 != 67141LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x945 = INT64_MAX;
	int8_t x946 = -24;
	static int8_t x947 = -1;
	int8_t x948 = INT8_MAX;
	int64_t t79 = -165678LL;

	t79 = ((x945>>(x946/x947))%x948);

	if (t79 != 15LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x961 = 2U;
	uint16_t x962 = 396U;
	int64_t x963 = INT64_MIN;
	int32_t x964 = 7625274;
	volatile int32_t t80 = 15;

	t80 = ((x961>>(x962/x963))%x964);

	if (t80 != 2) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x965 = UINT8_MAX;
	int32_t x966 = INT32_MIN;
	static uint32_t x967 = UINT32_MAX;

	t81 = ((x965>>(x966/x967))%x968);

	if (t81 != 255LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x969 = INT32_MAX;
	static int16_t x970 = INT16_MIN;
	uint64_t x971 = UINT64_MAX;
	uint16_t x972 = 31664U;
	volatile int32_t t82 = -2886;

	t82 = ((x969>>(x970/x971))%x972);

	if (t82 != 31167) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x983 = 24139LLU;
	volatile uint64_t t83 = 45003LLU;

	t83 = ((x981>>(x982/x983))%x984);

	if (t83 != 1540541777LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x1001 = 6757U;
	static uint32_t x1002 = 1765U;
	int16_t x1003 = INT16_MAX;
	volatile uint32_t t84 = 6U;

	t84 = ((x1001>>(x1002/x1003))%x1004);

	if (t84 != 6757U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x1009 = INT8_MAX;
	uint8_t x1010 = 31U;
	static uint64_t x1011 = UINT64_MAX;
	volatile int64_t t85 = 14532143425927LL;

	t85 = ((x1009>>(x1010/x1011))%x1012);

	if (t85 != 127LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x1042 = 22002U;
	volatile uint64_t x1043 = UINT64_MAX;
	static volatile int64_t x1044 = INT64_MAX;
	static int64_t t86 = -1037832675LL;

	t86 = ((x1041>>(x1042/x1043))%x1044);

	if (t86 != 22LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x1045 = 51U;
	static volatile uint32_t x1046 = 50U;
	int16_t x1047 = INT16_MIN;
	volatile uint64_t x1048 = 851264635788662LLU;

	t87 = ((x1045>>(x1046/x1047))%x1048);

	if (t87 != 51LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x1065 = 254331U;
	int16_t x1067 = -1;
	int64_t x1068 = INT64_MAX;
	volatile int64_t t88 = -2338911594LL;

	t88 = ((x1065>>(x1066/x1067))%x1068);

	if (t88 != 254331LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x1073 = UINT16_MAX;
	uint32_t x1074 = 26034158U;
	static int64_t x1075 = 11906903LL;
	int64_t x1076 = INT64_MIN;
	volatile int64_t t89 = -2269651476809375LL;

	t89 = ((x1073>>(x1074/x1075))%x1076);

	if (t89 != 16383LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x1085 = 0;
	uint8_t x1088 = 31U;
	volatile int32_t t90 = 18147;

	t90 = ((x1085>>(x1086/x1087))%x1088);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int64_t x1089 = INT64_MAX;
	uint32_t x1091 = 1643299U;
	int64_t x1092 = INT64_MAX;
	int64_t t91 = 6LL;

	t91 = ((x1089>>(x1090/x1091))%x1092);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x1133 = 9U;
	uint8_t x1134 = 35U;
	volatile int8_t x1136 = INT8_MAX;
	volatile int32_t t92 = -53218;

	t92 = ((x1133>>(x1134/x1135))%x1136);

	if (t92 != 9) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x1169 = 61131998U;
	volatile uint32_t x1170 = 8374168U;
	uint32_t x1171 = UINT32_MAX;
	int8_t x1172 = INT8_MAX;
	static uint32_t t93 = 16042259U;

	t93 = ((x1169>>(x1170/x1171))%x1172);

	if (t93 != 40U) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x1189 = 45U;
	int16_t x1190 = 1;
	uint32_t x1191 = 3927536U;
	volatile int64_t x1192 = 2LL;
	static int64_t t94 = -4248284586205183LL;

	t94 = ((x1189>>(x1190/x1191))%x1192);

	if (t94 != 1LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x1193 = 0;
	int8_t x1194 = 1;
	int64_t x1195 = INT64_MIN;

	t95 = ((x1193>>(x1194/x1195))%x1196);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x1197 = UINT16_MAX;
	static uint32_t x1198 = 0U;
	int8_t x1199 = -1;
	volatile int8_t x1200 = INT8_MAX;
	static volatile int32_t t96 = 28584462;

	t96 = ((x1197>>(x1198/x1199))%x1200);

	if (t96 != 3) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t t97 = -1;

	t97 = ((x1201>>(x1202/x1203))%x1204);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x1205 = 6124022058960LLU;
	int8_t x1206 = INT8_MIN;
	int32_t x1207 = -1814;
	static uint8_t x1208 = UINT8_MAX;
	uint64_t t98 = 753457679LLU;

	t98 = ((x1205>>(x1206/x1207))%x1208);

	if (t98 != 60LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x1241 = 49;
	int8_t x1242 = INT8_MIN;
	uint16_t x1243 = UINT16_MAX;
	int32_t t99 = -10133790;

	t99 = ((x1241>>(x1242/x1243))%x1244);

	if (t99 != 49) { NG(); } else { ; }
	
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

