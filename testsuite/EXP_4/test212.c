#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x19 = INT32_MIN;
uint16_t x60 = 259U;
int64_t x64 = 218970288357497LL;
int32_t x74 = -1;
static uint16_t x94 = UINT16_MAX;
uint32_t x101 = UINT32_MAX;
volatile int64_t t6 = -493163265534LL;
int32_t x108 = -13046;
int32_t x109 = 15765;
int16_t x115 = INT16_MAX;
volatile uint16_t x116 = 23U;
int64_t t10 = 588301935622LL;
static uint8_t x189 = 1U;
int64_t x190 = INT64_MIN;
int8_t x192 = INT8_MIN;
int16_t x203 = INT16_MIN;
int8_t x217 = INT8_MAX;
static volatile int32_t x226 = INT32_MAX;
uint8_t x227 = 12U;
static int16_t x235 = INT16_MIN;
volatile int64_t x242 = -1LL;
static uint64_t x243 = 2932028LLU;
volatile uint64_t t21 = 21219148997LLU;
static int32_t x278 = INT32_MAX;
int16_t x279 = -224;
int16_t x290 = INT16_MIN;
static int32_t x291 = 103;
uint8_t x292 = 4U;
int16_t x298 = INT16_MIN;
int16_t x309 = INT16_MIN;
static int16_t x311 = INT16_MIN;
volatile int8_t x341 = -1;
int8_t x352 = -14;
volatile uint32_t t29 = 5U;
volatile int32_t t30 = -6592;
int64_t t31 = -69589347748LL;
volatile uint32_t t32 = 202114216U;
static int32_t x414 = INT32_MIN;
volatile int64_t t34 = 0LL;
volatile uint64_t x422 = UINT64_MAX;
static int8_t x426 = INT8_MIN;
static uint32_t t36 = 17742085U;
static uint64_t x502 = UINT64_MAX;
volatile int16_t x524 = -1;
uint16_t x529 = UINT16_MAX;
uint16_t x534 = UINT16_MAX;
int16_t x535 = -1171;
int32_t x542 = INT32_MAX;
volatile int32_t t45 = 499164;
uint64_t x560 = 2413173011LLU;
volatile int16_t x601 = 1;
int32_t x625 = INT32_MIN;
int32_t x627 = 2061906;
volatile int8_t x628 = -1;
static volatile int64_t t50 = 11660467915882122LL;
volatile int64_t x650 = -3716LL;
int32_t x702 = -852654612;
int16_t x711 = INT16_MIN;
volatile int64_t x714 = 13746018777400221LL;
volatile int64_t t55 = -107326597076943656LL;
uint64_t x737 = UINT64_MAX;
volatile int64_t x739 = 0LL;
uint64_t t56 = 57352640810LLU;
int8_t x747 = 3;
static int8_t x748 = INT8_MAX;
int16_t x749 = -1;
int16_t x750 = INT16_MIN;
uint64_t x794 = 58584828802LLU;
int8_t x795 = 7;
static int8_t x803 = INT8_MIN;
uint16_t x808 = 27660U;
uint8_t x829 = 59U;
int32_t x830 = INT32_MIN;
volatile uint16_t x831 = 28037U;
volatile int64_t x842 = INT64_MAX;
int64_t x843 = 5172LL;
static uint32_t t70 = 208442687U;
static volatile uint64_t t71 = 83LLU;
static uint64_t x873 = 126604LLU;
volatile int8_t x876 = -53;
volatile int64_t x887 = 19937075815637858LL;
uint64_t x899 = 6256369432610138070LLU;
static uint64_t t74 = 717LLU;
static volatile int8_t x905 = INT8_MAX;
volatile int16_t x939 = INT16_MAX;
uint8_t x959 = 4U;
static volatile int64_t x964 = 6138217LL;
int16_t x994 = INT16_MIN;
int8_t x995 = INT8_MIN;
static int32_t t84 = -39;
int64_t x1001 = 750205LL;
volatile int32_t t86 = 162;
static uint16_t x1019 = 57U;
static int32_t x1032 = -1;
int32_t x1069 = INT32_MIN;
int64_t t90 = -196LL;
int8_t x1091 = -1;
static volatile uint32_t t93 = 136U;
uint16_t x1093 = UINT16_MAX;
volatile uint32_t t95 = 4928991U;
volatile uint8_t x1103 = 3U;
uint8_t x1104 = UINT8_MAX;
int64_t x1129 = INT64_MIN;


void f0(void) {
	uint32_t x17 = 13057378U;
	int8_t x18 = INT8_MIN;
	uint64_t x20 = UINT64_MAX;
	static uint64_t t0 = 431308899LLU;

	t0 = (x17/(x18/(x19-x20)));

	if (t0 != 13057378LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x57 = -1;
	volatile int8_t x58 = INT8_MIN;
	uint8_t x59 = UINT8_MAX;
	int32_t t1 = -2192642;

	t1 = (x57/(x58/(x59-x60)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x61 = INT32_MIN;
	int64_t x62 = -132563724021009407LL;
	int16_t x63 = 237;
	volatile int64_t t2 = -55LL;

	t2 = (x61/(x62/(x63-x64)));

	if (t2 != -3549559LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x73 = INT32_MAX;
	int8_t x75 = INT8_MIN;
	volatile uint64_t x76 = UINT64_MAX;
	volatile uint64_t t3 = 214209865LLU;

	t3 = (x73/(x74/(x75-x76)));

	if (t3 != 2147483647LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x89 = 569U;
	static uint64_t x90 = UINT64_MAX;
	volatile uint32_t x91 = 246488965U;
	uint16_t x92 = 5913U;
	uint64_t t4 = 44422926367213LLU;

	t4 = (x89/(x90/(x91-x92)));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x93 = 223;
	volatile uint16_t x95 = 38U;
	int32_t x96 = -1;
	volatile int32_t t5 = -823750103;

	t5 = (x93/(x94/(x95-x96)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x102 = INT16_MIN;
	int64_t x103 = -1LL;
	uint16_t x104 = 21815U;

	t6 = (x101/(x102/(x103-x104)));

	if (t6 != 4294967295LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x105 = UINT64_MAX;
	int16_t x106 = -231;
	uint64_t x107 = 0LLU;
	static uint64_t t7 = 898374792497LLU;

	t7 = (x105/(x106/(x107-x108)));

	if (t7 != 13046LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x110 = INT16_MIN;
	static volatile uint8_t x111 = 0U;
	volatile uint8_t x112 = UINT8_MAX;
	static volatile int32_t t8 = -1248122;

	t8 = (x109/(x110/(x111-x112)));

	if (t8 != 123) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x113 = UINT16_MAX;
	uint32_t x114 = UINT32_MAX;
	volatile uint32_t t9 = 594093732U;

	t9 = (x113/(x114/(x115-x116)));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x121 = 3;
	static volatile int64_t x122 = INT64_MAX;
	uint32_t x123 = UINT32_MAX;
	int16_t x124 = INT16_MIN;

	t10 = (x121/(x122/(x123-x124)));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x145 = UINT8_MAX;
	volatile int16_t x146 = -20;
	uint64_t x147 = 237LLU;
	int16_t x148 = INT16_MIN;
	uint64_t t11 = 351864146876260LLU;

	t11 = (x145/(x146/(x147-x148)));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x149 = INT16_MIN;
	static uint64_t x150 = UINT64_MAX;
	volatile int16_t x151 = -6;
	uint8_t x152 = UINT8_MAX;
	volatile uint64_t t12 = 147260742LLU;

	t12 = (x149/(x150/(x151-x152)));

	if (t12 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x191 = 3130136;
	int64_t t13 = -2130860635625LL;

	t13 = (x189/(x190/(x191-x192)));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int16_t x201 = INT16_MIN;
	int64_t x202 = INT64_MIN;
	int32_t x204 = 64;
	volatile int64_t t14 = -42639LL;

	t14 = (x201/(x202/(x203-x204)));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x205 = -10LL;
	int64_t x206 = INT64_MIN;
	volatile int32_t x207 = -1067619280;
	int16_t x208 = -1;
	int64_t t15 = -10LL;

	t15 = (x205/(x206/(x207-x208)));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x213 = INT16_MIN;
	volatile int8_t x214 = -60;
	volatile int32_t x215 = INT32_MIN;
	uint64_t x216 = 10929LLU;
	uint64_t t16 = 105711LLU;

	t16 = (x213/(x214/(x215-x216)));

	if (t16 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x218 = INT64_MAX;
	uint8_t x219 = UINT8_MAX;
	static volatile uint32_t x220 = 8U;
	volatile int64_t t17 = -25876171376231LL;

	t17 = (x217/(x218/(x219-x220)));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x225 = UINT16_MAX;
	static volatile int16_t x228 = INT16_MAX;
	volatile int32_t t18 = 888044;

	t18 = (x225/(x226/(x227-x228)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x233 = INT64_MIN;
	uint64_t x234 = UINT64_MAX;
	volatile uint64_t x236 = 722LLU;
	volatile uint64_t t19 = 278677383LLU;

	t19 = (x233/(x234/(x235-x236)));

	if (t19 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x241 = INT8_MAX;
	volatile uint64_t x244 = UINT64_MAX;
	uint64_t t20 = 3985760LLU;

	t20 = (x241/(x242/(x243-x244)));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x257 = 0;
	volatile uint64_t x258 = 4211315387303440LLU;
	int8_t x259 = 14;
	uint32_t x260 = 206279U;

	t21 = (x257/(x258/(x259-x260)));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x277 = 6;
	static uint8_t x280 = UINT8_MAX;
	static volatile int32_t t22 = -11707;

	t22 = (x277/(x278/(x279-x280)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x289 = -1;
	int32_t t23 = -7519541;

	t23 = (x289/(x290/(x291-x292)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x297 = -1;
	int64_t x299 = INT64_MIN;
	uint64_t x300 = UINT64_MAX;
	uint64_t t24 = UINT64_MAX;

	t24 = (x297/(x298/(x299-x300)));

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x310 = UINT16_MAX;
	int64_t x312 = 5LL;
	int64_t t25 = -108192LL;

	t25 = (x309/(x310/(x311-x312)));

	if (t25 != 32768LL) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int64_t x333 = INT64_MAX;
	int32_t x334 = INT32_MAX;
	uint32_t x335 = 210384197U;
	uint8_t x336 = UINT8_MAX;
	volatile int64_t t26 = 1694499LL;

	t26 = (x333/(x334/(x335-x336)));

	if (t26 != 922337203685477580LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x337 = 3;
	uint64_t x338 = 890LLU;
	int8_t x339 = INT8_MAX;
	static int16_t x340 = -1;
	uint64_t t27 = 239176288891LLU;

	t27 = (x337/(x338/(x339-x340)));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x342 = 15;
	static int16_t x343 = 8;
	int16_t x344 = -1;
	volatile int32_t t28 = 19223183;

	t28 = (x341/(x342/(x343-x344)));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x349 = INT16_MIN;
	int16_t x350 = INT16_MIN;
	uint32_t x351 = 1091348U;

	t29 = (x349/(x350/(x351-x352)));

	if (t29 != 1091470U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x369 = -1;
	uint8_t x370 = UINT8_MAX;
	int8_t x371 = INT8_MIN;
	volatile int32_t x372 = -13;

	t30 = (x369/(x370/(x371-x372)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x373 = -3;
	int64_t x374 = -355754597341LL;
	volatile uint8_t x375 = 30U;
	int16_t x376 = -1;

	t31 = (x373/(x374/(x375-x376)));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x377 = 53U;
	volatile int32_t x378 = INT32_MAX;
	uint32_t x379 = 673524496U;
	volatile int32_t x380 = -689;

	t32 = (x377/(x378/(x379-x380)));

	if (t32 != 17U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x389 = INT16_MIN;
	static int16_t x390 = -1;
	uint64_t x391 = UINT64_MAX;
	uint16_t x392 = 3U;
	static volatile uint64_t t33 = 807216LLU;

	t33 = (x389/(x390/(x391-x392)));

	if (t33 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x413 = 13U;
	int64_t x415 = -1LL;
	uint16_t x416 = 1711U;

	t34 = (x413/(x414/(x415-x416)));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x421 = 5;
	static int64_t x423 = 31913665140690511LL;
	int8_t x424 = -4;
	uint64_t t35 = 315910321814767LLU;

	t35 = (x421/(x422/(x423-x424)));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x425 = 273;
	uint32_t x427 = 0U;
	volatile int16_t x428 = -1;

	t36 = (x425/(x426/(x427-x428)));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x441 = INT64_MIN;
	static int16_t x442 = INT16_MIN;
	static int16_t x443 = INT16_MIN;
	uint32_t x444 = 107416199U;
	int64_t t37 = INT64_MIN;

	t37 = (x441/(x442/(x443-x444)));

	if (t37 != INT64_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x473 = INT16_MAX;
	int16_t x474 = INT16_MIN;
	int8_t x475 = INT8_MIN;
	int8_t x476 = -1;
	static int32_t t38 = 389;

	t38 = (x473/(x474/(x475-x476)));

	if (t38 != 127) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x489 = 3U;
	static int64_t x490 = -3215252141992438194LL;
	uint32_t x491 = UINT32_MAX;
	static volatile int64_t x492 = -3270391595164987LL;
	int64_t t39 = -2959597212214551991LL;

	t39 = (x489/(x490/(x491-x492)));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x501 = INT16_MAX;
	int8_t x503 = -3;
	int16_t x504 = INT16_MIN;
	volatile uint64_t t40 = 174356LLU;

	t40 = (x501/(x502/(x503-x504)));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x521 = 4174;
	int64_t x522 = INT64_MIN;
	int16_t x523 = INT16_MAX;
	volatile int64_t t41 = 4102311357LL;

	t41 = (x521/(x522/(x523-x524)));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x525 = 1431U;
	int64_t x526 = INT64_MAX;
	int64_t x527 = -1LL;
	uint32_t x528 = 194211U;
	int64_t t42 = -15400674013091LL;

	t42 = (x525/(x526/(x527-x528)));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x530 = INT16_MIN;
	int64_t x531 = -1LL;
	volatile int16_t x532 = -9;
	static volatile int64_t t43 = -1LL;

	t43 = (x529/(x530/(x531-x532)));

	if (t43 != -15LL) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x533 = 4316707517981635305LLU;
	uint8_t x536 = 1U;
	volatile uint64_t t44 = 457128851497LLU;

	t44 = (x533/(x534/(x535-x536)));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int8_t x541 = INT8_MAX;
	int32_t x543 = 1;
	int16_t x544 = 1850;

	t45 = (x541/(x542/(x543-x544)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x553 = INT16_MIN;
	volatile int32_t x554 = INT32_MIN;
	int8_t x555 = -6;
	int8_t x556 = INT8_MIN;
	volatile int32_t t46 = 27413;

	t46 = (x553/(x554/(x555-x556)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x557 = INT64_MIN;
	int32_t x558 = -7;
	int16_t x559 = INT16_MAX;
	uint64_t t47 = 1276505146267456669LLU;

	t47 = (x557/(x558/(x559-x560)));

	if (t47 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x573 = UINT64_MAX;
	int32_t x574 = -1;
	static int32_t x575 = -1;
	volatile uint64_t x576 = 3883671006LLU;
	static uint64_t t48 = UINT64_MAX;

	t48 = (x573/(x574/(x575-x576)));

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x602 = -103;
	int8_t x603 = INT8_MIN;
	volatile uint32_t x604 = UINT32_MAX;
	volatile uint32_t t49 = 10084448U;

	t49 = (x601/(x602/(x603-x604)));

	if (t49 != 1U) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x626 = INT64_MAX;

	t50 = (x625/(x626/(x627-x628)));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x633 = UINT64_MAX;
	int16_t x634 = INT16_MIN;
	int8_t x635 = -1;
	uint8_t x636 = 3U;
	uint64_t t51 = 1861LLU;

	t51 = (x633/(x634/(x635-x636)));

	if (t51 != 2251799813685247LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x649 = INT16_MAX;
	uint16_t x651 = 3U;
	static int16_t x652 = -1;
	static volatile int64_t t52 = -43609LL;

	t52 = (x649/(x650/(x651-x652)));

	if (t52 != -35LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x701 = 2920019LLU;
	static int8_t x703 = -1;
	uint16_t x704 = 7U;
	static uint64_t t53 = 7006676986136957LLU;

	t53 = (x701/(x702/(x703-x704)));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x709 = -252;
	int64_t x710 = INT64_MIN;
	static uint8_t x712 = 3U;
	int64_t t54 = -4632586580LL;

	t54 = (x709/(x710/(x711-x712)));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x713 = 4U;
	int8_t x715 = INT8_MAX;
	int16_t x716 = 288;

	t55 = (x713/(x714/(x715-x716)));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x738 = -12;
	static int16_t x740 = -1;

	t56 = (x737/(x738/(x739-x740)));

	if (t56 != 1LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint16_t x745 = 3U;
	int8_t x746 = INT8_MIN;
	volatile int32_t t57 = 3;

	t57 = (x745/(x746/(x747-x748)));

	if (t57 != 3) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x751 = 300039713411LLU;
	volatile int8_t x752 = INT8_MIN;
	uint64_t t58 = 107158468915LLU;

	t58 = (x749/(x750/(x751-x752)));

	if (t58 != 300039714275LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x757 = 111U;
	int64_t x758 = INT64_MAX;
	int8_t x759 = INT8_MIN;
	static volatile int16_t x760 = -2;
	int64_t t59 = 1329098072855546LL;

	t59 = (x757/(x758/(x759-x760)));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x765 = 45U;
	static int16_t x766 = INT16_MIN;
	uint64_t x767 = 824163859LLU;
	static int32_t x768 = INT32_MIN;
	volatile uint64_t t60 = 6452LLU;

	t60 = (x765/(x766/(x767-x768)));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x769 = 3;
	static volatile int16_t x770 = INT16_MIN;
	uint64_t x771 = 22LLU;
	int64_t x772 = 20LL;
	uint64_t t61 = 1960941364050497533LLU;

	t61 = (x769/(x770/(x771-x772)));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x777 = INT64_MAX;
	volatile int64_t x778 = INT64_MAX;
	static int64_t x779 = INT64_MIN;
	int64_t x780 = -562226526452LL;
	int64_t t62 = -28LL;

	t62 = (x777/(x778/(x779-x780)));

	if (t62 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x781 = UINT8_MAX;
	int32_t x782 = 1291853;
	uint8_t x783 = 29U;
	int16_t x784 = -1;
	int32_t t63 = -22917;

	t63 = (x781/(x782/(x783-x784)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x793 = -1;
	int8_t x796 = INT8_MIN;
	volatile uint64_t t64 = 27977LLU;

	t64 = (x793/(x794/(x795-x796)));

	if (t64 != 42507770452LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x801 = INT32_MIN;
	int8_t x802 = INT8_MIN;
	static uint64_t x804 = 191LLU;
	uint64_t t65 = 7244440902262LLU;

	t65 = (x801/(x802/(x803-x804)));

	if (t65 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x805 = 0LL;
	uint16_t x806 = UINT16_MAX;
	volatile int16_t x807 = INT16_MIN;
	volatile int64_t t66 = 306680LL;

	t66 = (x805/(x806/(x807-x808)));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x821 = 8006U;
	static int64_t x822 = INT64_MAX;
	int16_t x823 = -789;
	static volatile int8_t x824 = 0;
	static volatile int64_t t67 = -236555584848130LL;

	t67 = (x821/(x822/(x823-x824)));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x832 = 13226;
	volatile int32_t t68 = -8375;

	t68 = (x829/(x830/(x831-x832)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x841 = INT64_MAX;
	uint8_t x844 = UINT8_MAX;
	static int64_t t69 = 44189007408831LL;

	t69 = (x841/(x842/(x843-x844)));

	if (t69 != 4917LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x857 = -1;
	int8_t x858 = -1;
	uint32_t x859 = UINT32_MAX;
	int32_t x860 = INT32_MIN;

	t70 = (x857/(x858/(x859-x860)));

	if (t70 != 2147483647U) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x861 = 437U;
	volatile uint64_t x862 = 7959433501185111144LLU;
	volatile int16_t x863 = INT16_MAX;
	static uint32_t x864 = UINT32_MAX;

	t71 = (x861/(x862/(x863-x864)));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x874 = INT64_MIN;
	int32_t x875 = -162;
	volatile uint64_t t72 = 601446953LLU;

	t72 = (x873/(x874/(x875-x876)));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x885 = 20678U;
	static int64_t x886 = INT64_MIN;
	int8_t x888 = -1;
	volatile int64_t t73 = -67846093LL;

	t73 = (x885/(x886/(x887-x888)));

	if (t73 != -44LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x897 = -1LL;
	int32_t x898 = -8;
	int8_t x900 = 1;

	t74 = (x897/(x898/(x899-x900)));

	if (t74 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x901 = -13;
	int32_t x902 = -1;
	uint64_t x903 = 2LLU;
	static volatile int16_t x904 = -1;
	uint64_t t75 = 8044059765782LLU;

	t75 = (x901/(x902/(x903-x904)));

	if (t75 != 2LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x906 = 3961072240592886LL;
	uint8_t x907 = UINT8_MAX;
	int8_t x908 = -1;
	volatile int64_t t76 = -16515688023274LL;

	t76 = (x905/(x906/(x907-x908)));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x913 = -4;
	volatile int8_t x914 = -1;
	uint8_t x915 = 23U;
	uint64_t x916 = UINT64_MAX;
	volatile uint64_t t77 = 156785381478LLU;

	t77 = (x913/(x914/(x915-x916)));

	if (t77 != 24LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x925 = 1U;
	int32_t x926 = -8;
	int16_t x927 = INT16_MIN;
	uint64_t x928 = 246120470712LLU;
	static volatile uint64_t t78 = 557035LLU;

	t78 = (x925/(x926/(x927-x928)));

	if (t78 != 1LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x929 = INT64_MIN;
	static int32_t x930 = -15587824;
	int8_t x931 = -1;
	static uint8_t x932 = 3U;
	int64_t t79 = 640622731607705LL;

	t79 = (x929/(x930/(x931-x932)));

	if (t79 != -2366814518012LL) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int16_t x937 = INT16_MIN;
	int32_t x938 = INT32_MIN;
	static uint8_t x940 = 29U;
	static int32_t t80 = 153;

	t80 = (x937/(x938/(x939-x940)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x957 = 368U;
	int32_t x958 = -97721;
	volatile int8_t x960 = INT8_MIN;
	volatile int32_t t81 = 223561;

	t81 = (x957/(x958/(x959-x960)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x961 = -11777113682LL;
	volatile int64_t x962 = 360006021082LL;
	uint64_t x963 = 256620733LLU;
	uint64_t t82 = 1010871LLU;

	t82 = (x961/(x962/(x963-x964)));

	if (t82 != 12836982645742823LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x977 = 1;
	uint32_t x978 = 10388U;
	uint8_t x979 = 41U;
	volatile uint32_t x980 = UINT32_MAX;
	uint32_t t83 = 2117195241U;

	t83 = (x977/(x978/(x979-x980)));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x993 = -1;
	volatile int16_t x996 = 31;

	t84 = (x993/(x994/(x995-x996)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x1002 = INT8_MAX;
	int8_t x1003 = -1;
	uint16_t x1004 = 57U;
	int64_t t85 = -32505889355LL;

	t85 = (x1001/(x1002/(x1003-x1004)));

	if (t85 != -375102LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x1013 = -3;
	uint8_t x1014 = UINT8_MAX;
	int8_t x1015 = INT8_MIN;
	int8_t x1016 = -1;

	t86 = (x1013/(x1014/(x1015-x1016)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint8_t x1017 = UINT8_MAX;
	int16_t x1018 = INT16_MIN;
	int8_t x1020 = INT8_MAX;
	volatile int32_t t87 = -410168109;

	t87 = (x1017/(x1018/(x1019-x1020)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x1029 = -1LL;
	volatile uint16_t x1030 = 996U;
	static int8_t x1031 = -15;
	int64_t t88 = -4LL;

	t88 = (x1029/(x1030/(x1031-x1032)));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x1037 = INT32_MIN;
	int64_t x1038 = INT64_MAX;
	static volatile int32_t x1039 = -1;
	volatile uint32_t x1040 = 2974422U;
	int64_t t89 = 3713230LL;

	t89 = (x1037/(x1038/(x1039-x1040)));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x1070 = INT64_MIN;
	int64_t x1071 = -1LL;
	int16_t x1072 = -47;

	t90 = (x1069/(x1070/(x1071-x1072)));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x1073 = 13146490LLU;
	static int64_t x1074 = INT64_MIN;
	volatile int16_t x1075 = INT16_MIN;
	uint8_t x1076 = UINT8_MAX;
	uint64_t t91 = 543192552110LLU;

	t91 = (x1073/(x1074/(x1075-x1076)));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x1077 = 4608465U;
	volatile int64_t x1078 = INT64_MIN;
	static int16_t x1079 = 3260;
	uint32_t x1080 = 2U;
	volatile int64_t t92 = -761638689823796LL;

	t92 = (x1077/(x1078/(x1079-x1080)));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int32_t x1089 = INT32_MIN;
	uint32_t x1090 = 224499U;
	int8_t x1092 = INT8_MIN;

	t93 = (x1089/(x1090/(x1091-x1092)));

	if (t93 != 1215327U) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x1094 = INT16_MIN;
	uint8_t x1095 = UINT8_MAX;
	uint8_t x1096 = 3U;
	int32_t t94 = 891520;

	t94 = (x1093/(x1094/(x1095-x1096)));

	if (t94 != -504) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x1097 = 3683U;
	int32_t x1098 = -1;
	uint8_t x1099 = UINT8_MAX;
	uint32_t x1100 = 246753U;

	t95 = (x1097/(x1098/(x1099-x1100)));

	if (t95 != 3683U) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x1101 = UINT8_MAX;
	static int32_t x1102 = INT32_MAX;
	volatile int32_t t96 = 41;

	t96 = (x1101/(x1102/(x1103-x1104)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x1105 = 23;
	int16_t x1106 = 56;
	int8_t x1107 = 7;
	int8_t x1108 = -1;
	int32_t t97 = -173;

	t97 = (x1105/(x1106/(x1107-x1108)));

	if (t97 != 3) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x1130 = 5695U;
	int64_t x1131 = -330LL;
	uint16_t x1132 = 2161U;
	volatile int64_t t98 = -69538451429591LL;

	t98 = (x1129/(x1130/(x1131-x1132)));

	if (t98 != 4611686018427387904LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x1149 = INT16_MAX;
	volatile uint64_t x1150 = UINT64_MAX;
	int64_t x1151 = -274039513188946783LL;
	int32_t x1152 = INT32_MIN;
	static uint64_t t99 = 1725334473LLU;

	t99 = (x1149/(x1150/(x1151-x1152)));

	if (t99 != 32767LLU) { NG(); } else { ; }
	
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

