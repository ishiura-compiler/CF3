
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x2 = INT16_MAX;
static volatile int16_t x3 = INT16_MIN;
uint16_t x4 = UINT16_MAX;
uint64_t t0 = UINT64_MAX;
uint32_t t1 = 293754380U;
static uint8_t x16 = UINT8_MAX;
volatile uint64_t x29 = UINT64_MAX;
uint8_t x37 = 3U;
int32_t x39 = -1;
static volatile int16_t x40 = INT16_MAX;
static int8_t x47 = INT8_MIN;
static uint32_t t8 = 0U;
int8_t x49 = -2;
static volatile uint64_t t10 = 985792LLU;
int64_t x63 = -1LL;
int64_t t13 = -3LL;
uint32_t x83 = 91U;
volatile int16_t x85 = -1;
int16_t x87 = 813;
uint8_t x88 = 22U;
static int64_t x92 = INT64_MIN;
static int64_t x93 = INT64_MIN;
uint64_t t18 = 21LLU;
volatile int8_t x98 = INT8_MIN;
int32_t x106 = INT32_MIN;
uint64_t x114 = 2806928338LLU;
int64_t x115 = INT64_MAX;
int16_t x118 = INT16_MIN;
static int16_t x119 = INT16_MAX;
static int64_t x120 = 46422248LL;
volatile int32_t x122 = INT32_MAX;
volatile int16_t x124 = -6;
volatile int64_t x133 = -11314242LL;
volatile int16_t x135 = -142;
int64_t t27 = 4LL;
volatile int64_t t28 = 635334000104486458LL;
uint64_t x152 = 130401793057113146LLU;
static int16_t x170 = INT16_MIN;
int32_t x173 = 36653306;
volatile int64_t x174 = INT64_MIN;
int16_t x175 = -1;
uint64_t x182 = 20347820LLU;
static volatile int32_t t34 = INT32_MIN;
static int64_t x190 = INT64_MIN;
int8_t x198 = -1;
int64_t x199 = -1LL;
static int32_t x202 = INT32_MAX;
static int8_t x210 = INT8_MIN;
static volatile uint64_t x216 = 5577434LLU;
static volatile uint32_t x223 = 8U;
uint32_t x224 = 8308954U;
static volatile uint32_t t44 = 207262U;
static int32_t x258 = -6;
int64_t x267 = INT64_MIN;
int64_t x271 = -1117572LL;
uint64_t t53 = 67660178207LLU;
int32_t x273 = -1;
int16_t x275 = INT16_MIN;
int16_t x295 = INT16_MIN;
int32_t x297 = 1;
static int32_t x300 = INT32_MIN;
static uint8_t x322 = 24U;
uint16_t x323 = 8127U;
uint8_t x337 = 84U;
int8_t x338 = INT8_MAX;
int16_t x340 = 12175;
volatile int32_t t61 = 62;
volatile int16_t x347 = -3119;
int64_t x353 = -17291151913054LL;
int8_t x355 = -11;
int64_t x364 = INT64_MIN;
int64_t x365 = -1LL;
int16_t x367 = INT16_MAX;
volatile uint64_t t65 = 910776LLU;
static int16_t x370 = 1;
static int32_t x371 = -1;
volatile int8_t x372 = INT8_MIN;
volatile uint64_t t67 = 13232963860203LLU;
volatile int32_t t69 = 878868;
static int32_t t71 = -14209;
static uint64_t x399 = 161351LLU;
int64_t x400 = INT64_MAX;
static int8_t x404 = INT8_MAX;
uint32_t t73 = 231631931U;
int8_t x422 = 0;
static uint16_t x424 = 2705U;
int64_t x431 = -3264538LL;
uint32_t x432 = UINT32_MAX;
static int64_t t77 = -188478842LL;
volatile int16_t x440 = INT16_MIN;
int64_t x449 = 1582907231591LL;
int8_t x452 = INT8_MIN;
static int32_t x457 = 1;
volatile uint32_t x460 = 53408975U;
uint32_t x462 = 55U;
int64_t x465 = -1LL;
int8_t x466 = INT8_MIN;
int16_t x470 = INT16_MAX;
int64_t x471 = 4941LL;
uint8_t x472 = UINT8_MAX;
uint64_t x473 = 122LLU;
volatile int8_t x474 = -1;
int64_t x480 = -36154440934LL;
int8_t x486 = -31;
volatile uint64_t t89 = 2LLU;
uint16_t x489 = UINT16_MAX;
uint8_t x491 = 52U;
int64_t x527 = -1LL;
int64_t x528 = INT64_MIN;
volatile uint32_t x533 = 14841U;
volatile int64_t t98 = 919821061321055LL;
int8_t x542 = -11;
uint32_t x544 = 2U;
int32_t x545 = INT32_MIN;
static int32_t x546 = -5422991;
int16_t x552 = INT16_MIN;
volatile int64_t t102 = -6629LL;
uint64_t x568 = 3296LLU;
int16_t x576 = 7883;
uint8_t x590 = 60U;
static int64_t t108 = 188554LL;
int32_t x600 = -889239;
volatile uint64_t t109 = UINT64_MAX;
int16_t x607 = INT16_MAX;
int64_t t112 = INT64_MAX;
volatile int16_t x623 = -1;
int8_t x630 = -2;
volatile uint32_t x633 = 6706U;
static int8_t x651 = INT8_MIN;
static int64_t x656 = -1LL;
int16_t x665 = 6;
int16_t x673 = 146;
static volatile int16_t x676 = INT16_MIN;
int32_t x678 = INT32_MIN;
uint64_t x680 = 1116LLU;
int32_t t126 = 28909;
int64_t x691 = -1LL;
volatile int16_t x695 = INT16_MIN;
uint16_t x701 = UINT16_MAX;
int16_t x705 = INT16_MAX;
static int64_t x723 = -126LL;
static int8_t x728 = INT8_MIN;
uint32_t t135 = 912U;
uint32_t x733 = 17190682U;
int64_t t136 = 85546LL;
int16_t x739 = INT16_MAX;
volatile uint64_t x740 = 29LLU;
uint32_t x744 = UINT32_MAX;
int64_t x751 = -15913397LL;
volatile int8_t x764 = INT8_MIN;
int32_t x767 = -1;
int8_t x775 = INT8_MAX;
static int32_t t143 = 61135327;
int64_t x778 = INT64_MIN;
volatile uint64_t t144 = 391296LLU;
int8_t x784 = INT8_MIN;
int32_t x786 = INT32_MIN;
uint8_t x794 = UINT8_MAX;
uint32_t x796 = UINT32_MAX;
uint8_t x805 = 19U;
uint64_t x811 = 80LLU;
int64_t x812 = -43349032906233223LL;
int32_t x819 = -1;
volatile int64_t x825 = 3673380LL;
int8_t x826 = -1;
static volatile int64_t t154 = 50LL;
static volatile uint8_t x837 = 0U;
int64_t x838 = INT64_MAX;
static int8_t x839 = INT8_MIN;
int16_t x840 = INT16_MIN;
static volatile uint32_t t158 = 2U;
uint64_t x854 = 508637LLU;
uint64_t t159 = 107745709113912LLU;
uint32_t x861 = 650U;
uint16_t x871 = 3851U;
uint64_t t161 = 1283LLU;
int32_t x873 = 3477203;
int32_t x874 = INT32_MAX;
int32_t t162 = 1;
int64_t x878 = -1LL;
int8_t x881 = -1;
static int32_t x883 = 432273;
int16_t x885 = INT16_MAX;
uint64_t t165 = 734741060161024LLU;
volatile uint64_t t167 = 425935522323353LLU;
volatile uint64_t x901 = UINT64_MAX;
int8_t x905 = 1;
int64_t t169 = -342874963449970216LL;
int16_t x911 = -247;
volatile int16_t x915 = -1;
uint32_t x919 = UINT32_MAX;
volatile int32_t x927 = INT32_MAX;
int64_t t174 = INT64_MIN;
volatile int16_t x932 = -239;
volatile int32_t t175 = 6333839;
uint32_t x938 = 35876932U;
int8_t x939 = INT8_MIN;
static volatile uint16_t x948 = 1998U;
volatile uint64_t t179 = 2685LLU;
static uint16_t x953 = 46U;
int32_t x958 = 362;
int8_t x968 = INT8_MIN;
volatile int16_t x973 = INT16_MIN;
int32_t x976 = INT32_MIN;
int16_t x995 = INT16_MAX;
static int32_t x1013 = -7850346;
int8_t x1017 = INT8_MIN;
int64_t x1020 = -460LL;
static int64_t x1025 = 230317163881836LL;
int8_t x1026 = INT8_MIN;
int16_t x1028 = INT16_MAX;
static int32_t x1031 = INT32_MIN;
int16_t x1033 = INT16_MAX;
volatile int32_t x1042 = -1;
int64_t x1046 = INT64_MAX;
int64_t t195 = 1931450LL;
int16_t x1064 = -6676;


void f0(void) {
    	static uint64_t x1 = UINT64_MAX;

    t0 = (x1^(x2/(x3&x4)));

    if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = UINT32_MAX;
	uint16_t x6 = 692U;
	int8_t x7 = -6;
	int8_t x8 = -3;

    t1 = (x5^(x6/(x7&x8)));

    if (t1 != 85U) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x13 = INT16_MAX;
	int64_t x14 = -1LL;
	static uint8_t x15 = 6U;
	int64_t t2 = -1487LL;

    t2 = (x13^(x14/(x15&x16)));

    if (t2 != 32767LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x17 = 24U;
	int32_t x18 = INT32_MIN;
	int64_t x19 = INT64_MIN;
	int64_t x20 = INT64_MIN;
	int64_t t3 = 4247LL;

    t3 = (x17^(x18/(x19&x20)));

    if (t3 != 24LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x30 = INT16_MIN;
	volatile int8_t x31 = -1;
	int16_t x32 = INT16_MAX;
	volatile uint64_t t4 = 1LLU;

    t4 = (x29^(x30/(x31&x32)));

    if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x33 = INT16_MAX;
	uint8_t x34 = UINT8_MAX;
	static volatile int16_t x35 = 6964;
	int16_t x36 = INT16_MAX;
	static int32_t t5 = 5;

    t5 = (x33^(x34/(x35&x36)));

    if (t5 != 32767) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x38 = INT64_MAX;
	int64_t t6 = 515LL;

    t6 = (x37^(x38/(x39&x40)));

    if (t6 != 281483566907403LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x41 = 9U;
	int64_t x42 = INT64_MIN;
	int16_t x43 = INT16_MAX;
	static int8_t x44 = INT8_MAX;
	volatile int64_t t7 = 1166216059264233LL;

    t7 = (x41^(x42/(x43&x44)));

    if (t7 != -72624976668147850LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x45 = INT8_MAX;
	int8_t x46 = INT8_MIN;
	static uint32_t x48 = UINT32_MAX;

    t8 = (x45^(x46/(x47&x48)));

    if (t8 != 126U) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x50 = 45U;
	volatile int64_t x51 = 1222898LL;
	int16_t x52 = 720;
	volatile int64_t t9 = 0LL;

    t9 = (x49^(x50/(x51&x52)));

    if (t9 != -2LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint64_t x57 = UINT64_MAX;
	int32_t x58 = INT32_MAX;
	int16_t x59 = -311;
	static int8_t x60 = INT8_MIN;

    t10 = (x57^(x58/(x59&x60)));

    if (t10 != 5592404LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x61 = 34U;
	int8_t x62 = INT8_MAX;
	volatile uint64_t x64 = 461834281LLU;
	uint64_t t11 = 3577508LLU;

    t11 = (x61^(x62/(x63&x64)));

    if (t11 != 34LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x69 = 0LL;
	static int16_t x70 = INT16_MAX;
	int32_t x71 = -1;
	int64_t x72 = INT64_MIN;
	static volatile int64_t t12 = 50689007508LL;

    t12 = (x69^(x70/(x71&x72)));

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x73 = INT64_MAX;
	int32_t x74 = INT32_MIN;
	int8_t x75 = 2;
	uint8_t x76 = UINT8_MAX;

    t13 = (x73^(x74/(x75&x76)));

    if (t13 != -9223372035781033985LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int64_t x77 = INT64_MIN;
	int32_t x78 = -1;
	int32_t x79 = INT32_MAX;
	static int16_t x80 = INT16_MIN;
	static volatile int64_t t14 = INT64_MIN;

    t14 = (x77^(x78/(x79&x80)));

    if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int64_t x81 = INT64_MAX;
	int16_t x82 = INT16_MAX;
	int16_t x84 = -1;
	static int64_t t15 = 60821LL;

    t15 = (x81^(x82/(x83&x84)));

    if (t15 != 9223372036854775447LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x86 = INT64_MAX;
	volatile int64_t t16 = 573464530215LL;

    t16 = (x85^(x86/(x87&x88)));

    if (t16 != -2305843009213693952LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x89 = 11U;
	volatile int16_t x90 = INT16_MIN;
	static int16_t x91 = INT16_MIN;
	static volatile int64_t t17 = -199691572LL;

    t17 = (x89^(x90/(x91&x92)));

    if (t17 != 11LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x94 = 16U;
	volatile uint64_t x95 = UINT64_MAX;
	uint16_t x96 = UINT16_MAX;

    t18 = (x93^(x94/(x95&x96)));

    if (t18 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x97 = INT16_MIN;
	static uint64_t x99 = 14563LLU;
	uint8_t x100 = 72U;
	uint64_t t19 = 2835LLU;

    t19 = (x97^(x98/(x99&x100)));

    if (t19 != 18158513697557872638LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x105 = INT64_MIN;
	uint8_t x107 = UINT8_MAX;
	volatile int16_t x108 = 7;
	volatile int64_t t20 = -156576012LL;

    t20 = (x105^(x106/(x107&x108)));

    if (t20 != 9223372036547992430LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x109 = UINT64_MAX;
	uint32_t x110 = UINT32_MAX;
	int16_t x111 = -3;
	uint64_t x112 = UINT64_MAX;
	uint64_t t21 = UINT64_MAX;

    t21 = (x109^(x110/(x111&x112)));

    if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
    	static int8_t x113 = 7;
	volatile uint8_t x116 = 24U;
	volatile uint64_t t22 = 285733237860434LLU;

    t22 = (x113^(x114/(x115&x116)));

    if (t22 != 116955348LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint8_t x117 = 94U;
	int64_t t23 = -306266294156730LL;

    t23 = (x117^(x118/(x119&x120)));

    if (t23 != -95LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x121 = -1;
	int8_t x123 = INT8_MIN;
	volatile int32_t t24 = -328716384;

    t24 = (x121^(x122/(x123&x124)));

    if (t24 != 16777214) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x125 = 6464;
	int8_t x126 = -7;
	int32_t x127 = -106130;
	volatile int16_t x128 = -202;
	volatile int32_t t25 = 599;

    t25 = (x125^(x126/(x127&x128)));

    if (t25 != 6464) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x134 = INT32_MAX;
	volatile uint64_t x136 = 2722LLU;
	volatile uint64_t t26 = 3172157LLU;

    t26 = (x133^(x134/(x135&x136)));

    if (t26 != 18446744073699064423LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x137 = 60;
	int64_t x138 = -43LL;
	int16_t x139 = INT16_MIN;
	int32_t x140 = INT32_MIN;

    t27 = (x137^(x138/(x139&x140)));

    if (t27 != 60LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x145 = 82U;
	uint16_t x146 = 15U;
	int8_t x147 = 2;
	int64_t x148 = INT64_MAX;

    t28 = (x145^(x146/(x147&x148)));

    if (t28 != 85LL) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint16_t x149 = 2909U;
	int16_t x150 = 46;
	static uint16_t x151 = UINT16_MAX;
	static uint64_t t29 = 17370008458LLU;

    t29 = (x149^(x150/(x151&x152)));

    if (t29 != 2909LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint16_t x169 = 2501U;
	int8_t x171 = INT8_MIN;
	int64_t x172 = INT64_MIN;
	int64_t t30 = 712562226038774650LL;

    t30 = (x169^(x170/(x171&x172)));

    if (t30 != 2501LL) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint32_t x176 = UINT32_MAX;
	volatile int64_t t31 = -21100573167LL;

    t31 = (x173^(x174/(x175&x176)));

    if (t31 != -2110830342LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x177 = 4251743255292LLU;
	uint16_t x178 = UINT16_MAX;
	int16_t x179 = INT16_MIN;
	static volatile int16_t x180 = INT16_MIN;
	volatile uint64_t t32 = 3114399030565141256LLU;

    t32 = (x177^(x178/(x179&x180)));

    if (t32 != 18446739821966296323LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x181 = -1;
	int32_t x183 = -2738;
	static volatile int16_t x184 = INT16_MIN;
	uint64_t t33 = UINT64_MAX;

    t33 = (x181^(x182/(x183&x184)));

    if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x185 = INT32_MIN;
	int16_t x186 = INT16_MAX;
	int32_t x187 = INT32_MIN;
	volatile int32_t x188 = INT32_MIN;

    t34 = (x185^(x186/(x187&x188)));

    if (t34 != INT32_MIN) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x189 = 25;
	uint8_t x191 = UINT8_MAX;
	uint64_t x192 = UINT64_MAX;
	static uint64_t t35 = 16LLU;

    t35 = (x189^(x190/(x191&x192)));

    if (t35 != 36170086419038361LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x197 = 563474760679LL;
	int32_t x200 = -8239;
	volatile int64_t t36 = 0LL;

    t36 = (x197^(x198/(x199&x200)));

    if (t36 != 563474760679LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x201 = INT16_MAX;
	uint32_t x203 = UINT32_MAX;
	static int8_t x204 = INT8_MAX;
	static uint32_t t37 = 56379U;

    t37 = (x201^(x202/(x203&x204)));

    if (t37 != 16940023U) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x205 = 1U;
	uint32_t x206 = 1435079153U;
	volatile int64_t x207 = INT64_MAX;
	int64_t x208 = INT64_MAX;
	int64_t t38 = 1504113152LL;

    t38 = (x205^(x206/(x207&x208)));

    if (t38 != 1LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x209 = INT16_MIN;
	int16_t x211 = -1;
	int8_t x212 = 2;
	volatile int32_t t39 = -1;

    t39 = (x209^(x210/(x211&x212)));

    if (t39 != 32704) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x213 = INT16_MAX;
	volatile uint16_t x214 = UINT16_MAX;
	uint64_t x215 = UINT64_MAX;
	uint64_t t40 = 3LLU;

    t40 = (x213^(x214/(x215&x216)));

    if (t40 != 32767LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile int32_t x217 = -1;
	int32_t x218 = INT32_MIN;
	uint32_t x219 = UINT32_MAX;
	static uint64_t x220 = UINT64_MAX;
	uint64_t t41 = 414303222LLU;

    t41 = (x217^(x218/(x219&x220)));

    if (t41 != 18446744069414584319LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x221 = INT64_MAX;
	int8_t x222 = -1;
	int64_t t42 = -2756117781801LL;

    t42 = (x221^(x222/(x223&x224)));

    if (t42 != 9223372036317904896LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x225 = 48679933LLU;
	volatile int32_t x226 = INT32_MIN;
	int64_t x227 = -1LL;
	int16_t x228 = INT16_MIN;
	volatile uint64_t t43 = 852282LLU;

    t43 = (x225^(x226/(x227&x228)));

    if (t43 != 48745469LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint8_t x229 = UINT8_MAX;
	volatile uint32_t x230 = UINT32_MAX;
	static volatile uint32_t x231 = UINT32_MAX;
	uint16_t x232 = UINT16_MAX;

    t44 = (x229^(x230/(x231&x232)));

    if (t44 != 65790U) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x233 = UINT8_MAX;
	int16_t x234 = INT16_MAX;
	uint16_t x235 = 14408U;
	uint64_t x236 = UINT64_MAX;
	static uint64_t t45 = 2983454638822925LLU;

    t45 = (x233^(x234/(x235&x236)));

    if (t45 != 253LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint16_t x237 = 629U;
	volatile uint64_t x238 = UINT64_MAX;
	int8_t x239 = -47;
	int64_t x240 = INT64_MIN;
	volatile uint64_t t46 = 283953330055072343LLU;

    t46 = (x237^(x238/(x239&x240)));

    if (t46 != 628LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x241 = INT16_MAX;
	int64_t x242 = 58LL;
	int8_t x243 = -1;
	uint64_t x244 = UINT64_MAX;
	volatile uint64_t t47 = 2LLU;

    t47 = (x241^(x242/(x243&x244)));

    if (t47 != 32767LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x249 = UINT16_MAX;
	static int32_t x250 = -1;
	volatile int64_t x251 = INT64_MIN;
	int64_t x252 = INT64_MIN;
	volatile int64_t t48 = 66644193397LL;

    t48 = (x249^(x250/(x251&x252)));

    if (t48 != 65535LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x253 = 7U;
	uint32_t x254 = UINT32_MAX;
	static volatile int32_t x255 = -1;
	int16_t x256 = -6;
	volatile uint32_t t49 = 15U;

    t49 = (x253^(x254/(x255&x256)));

    if (t49 != 6U) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x257 = UINT8_MAX;
	uint64_t x259 = UINT64_MAX;
	uint32_t x260 = UINT32_MAX;
	volatile uint64_t t50 = 4263LLU;

    t50 = (x257^(x258/(x259&x260)));

    if (t50 != 4294967551LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x261 = INT16_MIN;
	volatile uint64_t x262 = UINT64_MAX;
	uint32_t x263 = UINT32_MAX;
	uint32_t x264 = 509535U;
	volatile uint64_t t51 = 5060760113992983671LLU;

    t51 = (x261^(x262/(x263&x264)));

    if (t51 != 18446707870614447575LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint64_t x265 = UINT64_MAX;
	static volatile int32_t x266 = -1;
	int64_t x268 = -6782496328967314LL;
	uint64_t t52 = UINT64_MAX;

    t52 = (x265^(x266/(x267&x268)));

    if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x269 = INT8_MAX;
	static uint64_t x270 = 38638118704LLU;
	volatile int8_t x272 = -1;

    t53 = (x269^(x270/(x271&x272)));

    if (t53 != 127LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x274 = 42680607167837322LL;
	int16_t x276 = -10905;
	volatile int64_t t54 = -294LL;

    t54 = (x273^(x274/(x275&x276)));

    if (t54 != 1302508763665LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x281 = 1U;
	int64_t x282 = INT64_MIN;
	uint32_t x283 = 106621U;
	int16_t x284 = INT16_MAX;
	volatile int64_t t55 = 40081LL;

    t55 = (x281^(x282/(x283&x284)));

    if (t55 != -1108978241776453LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint64_t x293 = 2895569LLU;
	volatile uint16_t x294 = 18480U;
	volatile int16_t x296 = INT16_MIN;
	static volatile uint64_t t56 = 7967LLU;

    t56 = (x293^(x294/(x295&x296)));

    if (t56 != 2895569LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x298 = INT8_MAX;
	uint64_t x299 = UINT64_MAX;
	uint64_t t57 = 35403109903957342LLU;

    t57 = (x297^(x298/(x299&x300)));

    if (t57 != 1LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint32_t x301 = 38U;
	int8_t x302 = -1;
	int32_t x303 = INT32_MIN;
	volatile int32_t x304 = INT32_MIN;
	uint32_t t58 = 13971U;

    t58 = (x301^(x302/(x303&x304)));

    if (t58 != 38U) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x317 = INT16_MAX;
	int64_t x318 = -1LL;
	int32_t x319 = INT32_MAX;
	uint8_t x320 = UINT8_MAX;
	static volatile int64_t t59 = -50LL;

    t59 = (x317^(x318/(x319&x320)));

    if (t59 != 32767LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x321 = INT8_MIN;
	volatile int32_t x324 = 6;
	volatile int32_t t60 = 1;

    t60 = (x321^(x322/(x323&x324)));

    if (t60 != -124) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x339 = INT8_MAX;

    t61 = (x337^(x338/(x339&x340)));

    if (t61 != 92) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x345 = INT64_MIN;
	int16_t x346 = INT16_MIN;
	uint64_t x348 = UINT64_MAX;
	volatile uint64_t t62 = 111291403LLU;

    t62 = (x345^(x346/(x347&x348)));

    if (t62 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int32_t x354 = INT32_MIN;
	volatile int8_t x356 = INT8_MAX;
	int64_t t63 = 1069134131406538821LL;

    t63 = (x353^(x354/(x355&x356)));

    if (t63 != 17291168162269LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int64_t x361 = INT64_MIN;
	int32_t x362 = INT32_MAX;
	static uint64_t x363 = UINT64_MAX;
	volatile uint64_t t64 = 202LLU;

    t64 = (x361^(x362/(x363&x364)));

    if (t64 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x366 = -1;
	uint64_t x368 = UINT64_MAX;

    t65 = (x365^(x366/(x367&x368)));

    if (t65 != 18446181106575736815LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x369 = 54LL;
	volatile int64_t t66 = 506LL;

    t66 = (x369^(x370/(x371&x372)));

    if (t66 != 54LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x373 = 37667180758368LLU;
	uint8_t x374 = UINT8_MAX;
	int32_t x375 = -1;
	static volatile int16_t x376 = 67;

    t67 = (x373^(x374/(x375&x376)));

    if (t67 != 37667180758371LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x377 = 15;
	uint64_t x378 = UINT64_MAX;
	int64_t x379 = INT64_MAX;
	int32_t x380 = -1;
	volatile uint64_t t68 = 36643LLU;

    t68 = (x377^(x378/(x379&x380)));

    if (t68 != 13LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x385 = -1;
	int8_t x386 = 0;
	static int32_t x387 = -105627;
	int8_t x388 = INT8_MIN;

    t69 = (x385^(x386/(x387&x388)));

    if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x389 = INT16_MIN;
	int64_t x390 = INT64_MAX;
	volatile int8_t x391 = -1;
	static int32_t x392 = INT32_MIN;
	static int64_t t70 = -28580LL;

    t70 = (x389^(x390/(x391&x392)));

    if (t70 != 4294934529LL) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x393 = INT32_MAX;
	int8_t x394 = INT8_MAX;
	volatile uint8_t x395 = 5U;
	static int16_t x396 = INT16_MAX;

    t71 = (x393^(x394/(x395&x396)));

    if (t71 != 2147483622) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x397 = -1957;
	static int64_t x398 = INT64_MAX;
	volatile uint64_t t72 = 237LLU;

    t72 = (x397^(x398/(x399&x400)));

    if (t72 != 18446686910307792909LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x401 = 11;
	int32_t x402 = INT32_MAX;
	uint32_t x403 = UINT32_MAX;

    t73 = (x401^(x402/(x403&x404)));

    if (t73 != 16909315U) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int64_t x413 = 0LL;
	uint64_t x414 = 121987937616032LLU;
	int8_t x415 = 3;
	int16_t x416 = -1;
	volatile uint64_t t74 = 1548058300761311LLU;

    t74 = (x413^(x414/(x415&x416)));

    if (t74 != 40662645872010LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int64_t x417 = INT64_MAX;
	int64_t x418 = -270739435LL;
	int8_t x419 = -1;
	volatile int32_t x420 = 11310917;
	volatile int64_t t75 = -15764507458LL;

    t75 = (x417^(x418/(x419&x420)));

    if (t75 != -9223372036854775786LL) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint64_t x421 = 146831968376303789LLU;
	static int16_t x423 = 1;
	volatile uint64_t t76 = 111910330820162603LLU;

    t76 = (x421^(x422/(x423&x424)));

    if (t76 != 146831968376303789LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x429 = -1;
	int16_t x430 = INT16_MAX;

    t77 = (x429^(x430/(x431&x432)));

    if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x433 = 41LL;
	uint8_t x434 = UINT8_MAX;
	volatile int8_t x435 = -2;
	int16_t x436 = -1;
	static int64_t t78 = 293380388971075115LL;

    t78 = (x433^(x434/(x435&x436)));

    if (t78 != -88LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile int16_t x437 = -1;
	int64_t x438 = INT64_MIN;
	volatile int64_t x439 = -3739407430LL;
	volatile int64_t t79 = 72LL;

    t79 = (x437^(x438/(x439&x440)));

    if (t79 != -2466525673LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x450 = INT16_MAX;
	volatile int64_t x451 = INT64_MIN;
	int64_t t80 = 65402LL;

    t80 = (x449^(x450/(x451&x452)));

    if (t80 != 1582907231591LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x453 = 11U;
	uint32_t x454 = UINT32_MAX;
	int8_t x455 = INT8_MAX;
	static uint8_t x456 = 40U;
	uint32_t t81 = 2974U;

    t81 = (x453^(x454/(x455&x456)));

    if (t81 != 107374189U) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x458 = 82050925U;
	int8_t x459 = INT8_MIN;
	static uint32_t t82 = 30305U;

    t82 = (x457^(x458/(x459&x460)));

    if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int32_t x461 = -1;
	static uint32_t x463 = 378320U;
	uint64_t x464 = UINT64_MAX;
	uint64_t t83 = UINT64_MAX;

    t83 = (x461^(x462/(x463&x464)));

    if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x467 = -4;
	static volatile int32_t x468 = -3531;
	volatile int64_t t84 = -3025014063216711LL;

    t84 = (x465^(x466/(x467&x468)));

    if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x469 = 2011573183LLU;
	volatile uint64_t t85 = 311349203LLU;

    t85 = (x469^(x470/(x471&x472)));

    if (t85 != 2011572758LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	static int64_t x475 = -4374543890493942LL;
	int8_t x476 = INT8_MIN;
	volatile uint64_t t86 = 176873917014LLU;

    t86 = (x473^(x474/(x475&x476)));

    if (t86 != 122LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x477 = -1;
	uint32_t x478 = 71587U;
	static volatile int32_t x479 = 67;
	int64_t t87 = 1321014612775463LL;

    t87 = (x477^(x478/(x479&x480)));

    if (t87 != -35794LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x481 = INT64_MAX;
	uint64_t x482 = 89737809LLU;
	volatile uint64_t x483 = 121560257LLU;
	int32_t x484 = -2206504;
	uint64_t t88 = 1174890LLU;

    t88 = (x481^(x482/(x483&x484)));

    if (t88 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x485 = INT16_MIN;
	uint64_t x487 = 638750518261LLU;
	static int32_t x488 = INT32_MAX;

    t89 = (x485^(x486/(x487&x488)));

    if (t89 != 18446744054248390575LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x490 = INT32_MIN;
	static int32_t x492 = -6408677;
	static volatile int32_t t90 = -76598979;

    t90 = (x489^(x490/(x491&x492)));

    if (t90 != -134152193) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x501 = UINT8_MAX;
	static int32_t x502 = 309653;
	int16_t x503 = -1;
	static uint64_t x504 = UINT64_MAX;
	uint64_t t91 = 6593391023584LLU;

    t91 = (x501^(x502/(x503&x504)));

    if (t91 != 255LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x505 = 6140750;
	int32_t x506 = INT32_MIN;
	static uint16_t x507 = UINT16_MAX;
	int8_t x508 = 1;
	volatile int32_t t92 = -2;

    t92 = (x505^(x506/(x507&x508)));

    if (t92 != -2141342898) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x509 = INT8_MAX;
	static int8_t x510 = INT8_MIN;
	int32_t x511 = 27;
	int64_t x512 = 14472221454LL;
	int64_t t93 = 2795279879836797LL;

    t93 = (x509^(x510/(x511&x512)));

    if (t93 != -117LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x513 = UINT16_MAX;
	int32_t x514 = INT32_MAX;
	int8_t x515 = INT8_MIN;
	int16_t x516 = INT16_MAX;
	volatile int32_t t94 = -4766;

    t94 = (x513^(x514/(x515&x516)));

    if (t94 != 130814) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x521 = UINT64_MAX;
	volatile int16_t x522 = INT16_MIN;
	int8_t x523 = -1;
	static uint32_t x524 = 2071646U;
	volatile uint64_t t95 = 337084457151203LLU;

    t95 = (x521^(x522/(x523&x524)));

    if (t95 != 18446744073709549542LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x525 = INT16_MIN;
	int64_t x526 = -17LL;
	static int64_t t96 = 0LL;

    t96 = (x525^(x526/(x527&x528)));

    if (t96 != -32768LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x529 = 1;
	static volatile int64_t x530 = INT64_MIN;
	static int32_t x531 = INT32_MAX;
	static uint32_t x532 = 1940682U;
	volatile int64_t t97 = -431173878929218721LL;

    t97 = (x529^(x530/(x531&x532)));

    if (t97 != -4752644707815LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x534 = -1LL;
	volatile int32_t x535 = INT32_MAX;
	static volatile int64_t x536 = -1LL;

    t98 = (x533^(x534/(x535&x536)));

    if (t98 != 14841LL) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint64_t x537 = 4462237008008419LLU;
	int32_t x538 = INT32_MIN;
	int32_t x539 = -507475;
	static volatile int32_t x540 = INT32_MAX;
	uint64_t t99 = 38198042297734LLU;

    t99 = (x537^(x538/(x539&x540)));

    if (t99 != 18442281836701543196LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x541 = 1662U;
	int8_t x543 = -1;
	volatile uint32_t t100 = 10954421U;

    t100 = (x541^(x542/(x543&x544)));

    if (t100 != 2147481988U) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint8_t x547 = 10U;
	static volatile int32_t x548 = -1;
	int32_t t101 = 1365916;

    t101 = (x545^(x546/(x547&x548)));

    if (t101 != 2146941349) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x549 = 81U;
	int64_t x550 = -1LL;
	int64_t x551 = 427906864LL;

    t102 = (x549^(x550/(x551&x552)));

    if (t102 != 81LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static int32_t x557 = -1;
	volatile int64_t x558 = 37581405567050948LL;
	int16_t x559 = INT16_MIN;
	int32_t x560 = INT32_MIN;
	int64_t t103 = 39408014LL;

    t103 = (x557^(x558/(x559&x560)));

    if (t103 != 17500204LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint32_t x565 = 21706927U;
	volatile int32_t x566 = INT32_MIN;
	int8_t x567 = INT8_MAX;
	volatile uint64_t t104 = 1LLU;

    t104 = (x565^(x566/(x567&x568)));

    if (t104 != 192153584058396154LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x569 = -1397472153952LL;
	volatile int8_t x570 = 24;
	int32_t x571 = -948;
	uint64_t x572 = 1101664522475862388LLU;
	uint64_t t105 = 16865865LLU;

    t105 = (x569^(x570/(x571&x572)));

    if (t105 != 18446742676237397664LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x573 = INT8_MAX;
	int64_t x574 = INT64_MIN;
	static int64_t x575 = INT64_MAX;
	volatile int64_t t106 = -9066LL;

    t106 = (x573^(x574/(x575&x576)));

    if (t106 != -1170033240752808LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x589 = UINT64_MAX;
	int16_t x591 = INT16_MIN;
	int8_t x592 = INT8_MIN;
	volatile uint64_t t107 = UINT64_MAX;

    t107 = (x589^(x590/(x591&x592)));

    if (t107 != UINT64_MAX) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x593 = INT8_MIN;
	int16_t x594 = INT16_MAX;
	int64_t x595 = INT64_MIN;
	int32_t x596 = INT32_MIN;

    t108 = (x593^(x594/(x595&x596)));

    if (t108 != -128LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x597 = UINT64_MAX;
	uint16_t x598 = UINT16_MAX;
	int32_t x599 = INT32_MIN;

    t109 = (x597^(x598/(x599&x600)));

    if (t109 != UINT64_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x601 = UINT8_MAX;
	static volatile int8_t x602 = -25;
	uint16_t x603 = 486U;
	static uint16_t x604 = 2U;
	volatile int32_t t110 = -5082;

    t110 = (x601^(x602/(x603&x604)));

    if (t110 != -245) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x605 = UINT8_MAX;
	static volatile uint8_t x606 = 54U;
	volatile int8_t x608 = -1;
	volatile int32_t t111 = -46028;

    t111 = (x605^(x606/(x607&x608)));

    if (t111 != 255) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x609 = INT64_MIN;
	static uint8_t x610 = UINT8_MAX;
	volatile int8_t x611 = INT8_MIN;
	int16_t x612 = -1;

    t112 = (x609^(x610/(x611&x612)));

    if (t112 != INT64_MAX) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x613 = 2LLU;
	int32_t x614 = -986;
	int32_t x615 = -1;
	static int8_t x616 = -1;
	volatile uint64_t t113 = 5298051637347175052LLU;

    t113 = (x613^(x614/(x615&x616)));

    if (t113 != 984LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x621 = INT8_MIN;
	uint32_t x622 = 10675U;
	volatile uint8_t x624 = UINT8_MAX;
	volatile uint32_t t114 = 1553491605U;

    t114 = (x621^(x622/(x623&x624)));

    if (t114 != 4294967209U) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x629 = 10U;
	int32_t x631 = 288862;
	static int8_t x632 = INT8_MAX;
	volatile int32_t t115 = 257866216;

    t115 = (x629^(x630/(x631&x632)));

    if (t115 != 10) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int64_t x634 = INT64_MAX;
	uint32_t x635 = 5U;
	static uint8_t x636 = UINT8_MAX;
	int64_t t116 = -1LL;

    t116 = (x633^(x634/(x635&x636)));

    if (t116 != 1844674407370949547LL) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x645 = 7465U;
	int32_t x646 = INT32_MAX;
	int64_t x647 = -564085877LL;
	int64_t x648 = -11LL;
	static volatile int64_t t117 = -487636915LL;

    t117 = (x645^(x646/(x647&x648)));

    if (t117 != -7468LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x649 = 595118LLU;
	int64_t x650 = 40LL;
	static int64_t x652 = -1LL;
	volatile uint64_t t118 = 17559737510183LLU;

    t118 = (x649^(x650/(x651&x652)));

    if (t118 != 595118LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int16_t x653 = -1;
	volatile int8_t x654 = -1;
	int64_t x655 = 5LL;
	volatile int64_t t119 = 5273627LL;

    t119 = (x653^(x654/(x655&x656)));

    if (t119 != -1LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint16_t x657 = 1000U;
	int32_t x658 = INT32_MIN;
	static uint8_t x659 = 6U;
	volatile uint64_t x660 = 492LLU;
	uint64_t t120 = 1182LLU;

    t120 = (x657^(x658/(x659&x660)));

    if (t120 != 4611686017890517992LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x661 = -1;
	static int8_t x662 = INT8_MIN;
	int64_t x663 = -2563203876003LL;
	static int8_t x664 = INT8_MIN;
	volatile int64_t t121 = -874493266LL;

    t121 = (x661^(x662/(x663&x664)));

    if (t121 != -1LL) { NG(); } else { ; }
	
}

void f122(void) {
    	static int32_t x666 = 5767512;
	uint32_t x667 = 11501U;
	uint64_t x668 = UINT64_MAX;
	volatile uint64_t t122 = 4299240269020LLU;

    t122 = (x665^(x666/(x667&x668)));

    if (t122 != 499LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x669 = INT16_MIN;
	volatile int8_t x670 = INT8_MIN;
	volatile uint64_t x671 = 425109894930015LLU;
	static int16_t x672 = 2;
	static volatile uint64_t t123 = 3085345370956LLU;

    t123 = (x669^(x670/(x671&x672)));

    if (t123 != 9223372036854808512LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x674 = 1;
	int8_t x675 = -1;
	volatile int32_t t124 = 148015;

    t124 = (x673^(x674/(x675&x676)));

    if (t124 != 146) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int64_t x677 = INT64_MIN;
	uint8_t x679 = 28U;
	uint64_t t125 = 4084LLU;

    t125 = (x677^(x678/(x679&x680)));

    if (t125 != 9882184325124849664LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint16_t x681 = 4168U;
	int32_t x682 = INT32_MAX;
	uint16_t x683 = UINT16_MAX;
	int8_t x684 = -1;

    t126 = (x681^(x682/(x683&x684)));

    if (t126 != 36936) { NG(); } else { ; }
	
}

void f127(void) {
    	static int16_t x689 = INT16_MIN;
	int64_t x690 = -504133653242LL;
	int32_t x692 = INT32_MIN;
	int64_t t127 = -416135075860LL;

    t127 = (x689^(x690/(x691&x692)));

    if (t127 != -32534LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint16_t x693 = 10U;
	int8_t x694 = INT8_MIN;
	uint32_t x696 = 310647870U;
	uint32_t t128 = 9U;

    t128 = (x693^(x694/(x695&x696)));

    if (t128 != 7U) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x697 = 192833U;
	volatile uint32_t x698 = 3639139U;
	static volatile int64_t x699 = -1LL;
	uint16_t x700 = 7091U;
	volatile int64_t t129 = -8389500569684LL;

    t129 = (x697^(x698/(x699&x700)));

    if (t129 != 193344LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x702 = INT8_MIN;
	uint64_t x703 = 22400905992237005LLU;
	int8_t x704 = INT8_MAX;
	volatile uint64_t t130 = 1570953752LLU;

    t130 = (x701^(x702/(x703&x704)));

    if (t130 != 239568104853375057LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x706 = -1;
	static volatile uint16_t x707 = 86U;
	int8_t x708 = INT8_MAX;
	static int32_t t131 = -1189184;

    t131 = (x705^(x706/(x707&x708)));

    if (t131 != 32767) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x713 = INT32_MIN;
	int64_t x714 = -1LL;
	int8_t x715 = -15;
	volatile int64_t x716 = INT64_MAX;
	int64_t t132 = -196210LL;

    t132 = (x713^(x714/(x715&x716)));

    if (t132 != -2147483648LL) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint32_t x717 = 7386U;
	int32_t x718 = INT32_MIN;
	int8_t x719 = INT8_MIN;
	uint64_t x720 = 388145LLU;
	volatile uint64_t t133 = 1LLU;

    t133 = (x717^(x718/(x719&x720)));

    if (t133 != 47531394477345LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x721 = UINT8_MAX;
	int32_t x722 = -2186;
	volatile int8_t x724 = INT8_MAX;
	int64_t t134 = -1013181LL;

    t134 = (x721^(x722/(x723&x724)));

    if (t134 != -1212LL) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile uint16_t x725 = 7U;
	int8_t x726 = -5;
	uint32_t x727 = 75425U;

    t135 = (x725^(x726/(x727&x728)));

    if (t135 != 56975U) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint16_t x734 = 14U;
	int8_t x735 = -1;
	int64_t x736 = INT64_MIN;

    t136 = (x733^(x734/(x735&x736)));

    if (t136 != 17190682LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x737 = 0U;
	volatile uint32_t x738 = UINT32_MAX;
	uint64_t t137 = 4037377LLU;

    t137 = (x737^(x738/(x739&x740)));

    if (t137 != 148102320LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x741 = 8U;
	volatile uint16_t x742 = 1U;
	int16_t x743 = INT16_MIN;
	uint32_t t138 = 60683U;

    t138 = (x741^(x742/(x743&x744)));

    if (t138 != 8U) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x749 = INT32_MIN;
	volatile int32_t x750 = INT32_MIN;
	int8_t x752 = -1;
	volatile int64_t t139 = 14LL;

    t139 = (x749^(x750/(x751&x752)));

    if (t139 != -2147483514LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x761 = -15;
	static int16_t x762 = INT16_MAX;
	int32_t x763 = INT32_MIN;
	int32_t t140 = -22906;

    t140 = (x761^(x762/(x763&x764)));

    if (t140 != -15) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x765 = -11;
	uint8_t x766 = 14U;
	uint8_t x768 = 1U;
	static volatile int32_t t141 = 184145848;

    t141 = (x765^(x766/(x767&x768)));

    if (t141 != -5) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile uint32_t x769 = 1404564833U;
	static volatile int16_t x770 = -1604;
	int8_t x771 = INT8_MIN;
	int64_t x772 = INT64_MIN;
	volatile int64_t t142 = -35675LL;

    t142 = (x769^(x770/(x771&x772)));

    if (t142 != 1404564833LL) { NG(); } else { ; }
	
}

void f143(void) {
    	static int8_t x773 = -1;
	int32_t x774 = INT32_MIN;
	uint16_t x776 = UINT16_MAX;

    t143 = (x773^(x774/(x775&x776)));

    if (t143 != 16909319) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x777 = UINT64_MAX;
	int8_t x779 = INT8_MIN;
	int32_t x780 = 2411415;

    t144 = (x777^(x778/(x779&x780)));

    if (t144 != 3824916080360LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x781 = 13U;
	int16_t x782 = -1387;
	uint32_t x783 = UINT32_MAX;
	volatile uint32_t t145 = 3U;

    t145 = (x781^(x782/(x783&x784)));

    if (t145 != 13U) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x785 = -1;
	uint32_t x787 = UINT32_MAX;
	static int64_t x788 = 63808148565052582LL;
	volatile int64_t t146 = 128705425537905982LL;

    t146 = (x785^(x786/(x787&x788)));

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint16_t x789 = UINT16_MAX;
	int8_t x790 = 12;
	int16_t x791 = 31;
	int8_t x792 = INT8_MAX;
	int32_t t147 = 13;

    t147 = (x789^(x790/(x791&x792)));

    if (t147 != 65535) { NG(); } else { ; }
	
}

void f148(void) {
    	static int64_t x793 = -1LL;
	int8_t x795 = INT8_MIN;
	volatile int64_t t148 = -233987478885LL;

    t148 = (x793^(x794/(x795&x796)));

    if (t148 != -1LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x806 = INT64_MIN;
	static int32_t x807 = -1;
	uint16_t x808 = UINT16_MAX;
	volatile int64_t t149 = 903806LL;

    t149 = (x805^(x806/(x807&x808)));

    if (t149 != -140739635871725LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static int32_t x809 = -6139525;
	int32_t x810 = INT32_MIN;
	uint64_t t150 = 0LLU;

    t150 = (x809^(x810/(x811&x812)));

    if (t150 != 18216159772812232930LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int64_t x813 = -1LL;
	volatile int64_t x814 = -1LL;
	uint64_t x815 = 221250LLU;
	int64_t x816 = INT64_MAX;
	volatile uint64_t t151 = 7LLU;

    t151 = (x813^(x814/(x815&x816)));

    if (t151 != 18446660698595094171LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int32_t x817 = INT32_MAX;
	static int64_t x818 = INT64_MIN;
	int64_t x820 = INT64_MIN;
	static int64_t t152 = -355187969006LL;

    t152 = (x817^(x818/(x819&x820)));

    if (t152 != 2147483646LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x821 = 1;
	uint64_t x822 = 103462801LLU;
	uint16_t x823 = 4677U;
	uint64_t x824 = UINT64_MAX;
	uint64_t t153 = 22760LLU;

    t153 = (x821^(x822/(x823&x824)));

    if (t153 != 22120LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x827 = -1;
	int64_t x828 = INT64_MIN;

    t154 = (x825^(x826/(x827&x828)));

    if (t154 != 3673380LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x829 = 6312212LLU;
	static int64_t x830 = INT64_MAX;
	int64_t x831 = INT64_MAX;
	int8_t x832 = 6;
	uint64_t t155 = 124LLU;

    t155 = (x829^(x830/(x831&x832)));

    if (t155 != 1537228672807011393LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int64_t t156 = -1983092215648LL;

    t156 = (x837^(x838/(x839&x840)));

    if (t156 != -281474976710655LL) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint16_t x841 = UINT16_MAX;
	static uint32_t x842 = 37U;
	uint64_t x843 = UINT64_MAX;
	int16_t x844 = INT16_MIN;
	uint64_t t157 = 59401192LLU;

    t157 = (x841^(x842/(x843&x844)));

    if (t157 != 65535LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int32_t x845 = -25164;
	volatile uint8_t x846 = UINT8_MAX;
	static uint32_t x847 = 222U;
	volatile uint8_t x848 = 68U;

    t158 = (x845^(x846/(x847&x848)));

    if (t158 != 4294942135U) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint64_t x853 = 23LLU;
	int64_t x855 = -1LL;
	static uint32_t x856 = UINT32_MAX;

    t159 = (x853^(x854/(x855&x856)));

    if (t159 != 23LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x862 = INT8_MIN;
	int16_t x863 = -7;
	int32_t x864 = -1;
	static volatile uint32_t t160 = 16352719U;

    t160 = (x861^(x862/(x863&x864)));

    if (t160 != 664U) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x869 = -18;
	int64_t x870 = -28559370142720LL;
	uint64_t x872 = 36395652265729LLU;

    t161 = (x869^(x870/(x871&x872)));

    if (t161 != 18436455888815887710LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x875 = INT8_MIN;
	int16_t x876 = INT16_MIN;

    t162 = (x873^(x874/(x875&x876)));

    if (t162 != -3535150) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile uint64_t x877 = 28547525641LLU;
	volatile uint32_t x879 = 7U;
	volatile int32_t x880 = -1;
	static uint64_t t163 = 52930087LLU;

    t163 = (x877^(x878/(x879&x880)));

    if (t163 != 28547525641LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x882 = 8;
	static int16_t x884 = INT16_MIN;
	static volatile int32_t t164 = -3;

    t164 = (x881^(x882/(x883&x884)));

    if (t164 != -1) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x886 = -1;
	uint64_t x887 = 788LLU;
	volatile uint32_t x888 = UINT32_MAX;

    t165 = (x885^(x886/(x887&x888)));

    if (t165 != 23409573697602118LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x889 = INT32_MIN;
	uint16_t x890 = 248U;
	static int16_t x891 = INT16_MIN;
	int64_t x892 = -1LL;
	int64_t t166 = -478237512101LL;

    t166 = (x889^(x890/(x891&x892)));

    if (t166 != -2147483648LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x897 = UINT64_MAX;
	static int32_t x898 = INT32_MIN;
	volatile int16_t x899 = -59;
	int8_t x900 = INT8_MIN;

    t167 = (x897^(x898/(x899&x900)));

    if (t167 != 18446744073692774399LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int32_t x902 = INT32_MIN;
	int8_t x903 = -1;
	int8_t x904 = -48;
	volatile uint64_t t168 = 4998173LLU;

    t168 = (x901^(x902/(x903&x904)));

    if (t168 != 18446744073664812373LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int64_t x906 = INT64_MAX;
	int8_t x907 = -2;
	uint16_t x908 = UINT16_MAX;

    t169 = (x905^(x906/(x907&x908)));

    if (t169 != 140741783453701LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x909 = 26542U;
	static uint64_t x910 = UINT64_MAX;
	uint16_t x912 = 27U;
	uint64_t t170 = 3815914344310LLU;

    t170 = (x909^(x910/(x911&x912)));

    if (t170 != 2049638230412196831LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int64_t x913 = INT64_MAX;
	uint16_t x914 = 4127U;
	int8_t x916 = INT8_MIN;
	volatile int64_t t171 = 1677749LL;

    t171 = (x913^(x914/(x915&x916)));

    if (t171 != -9223372036854775777LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x917 = INT32_MIN;
	uint16_t x918 = 565U;
	static int16_t x920 = INT16_MIN;
	uint32_t t172 = 458U;

    t172 = (x917^(x918/(x919&x920)));

    if (t172 != 2147483648U) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x921 = UINT64_MAX;
	int8_t x922 = INT8_MIN;
	uint32_t x923 = 4390U;
	static volatile int16_t x924 = 441;
	uint64_t t173 = 214612LLU;

    t173 = (x921^(x922/(x923&x924)));

    if (t173 != 18446744073694638535LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x925 = INT64_MIN;
	uint8_t x926 = 30U;
	int16_t x928 = INT16_MAX;

    t174 = (x925^(x926/(x927&x928)));

    if (t174 != INT64_MIN) { NG(); } else { ; }
	
}

void f175(void) {
    	static int8_t x929 = INT8_MIN;
	int32_t x930 = INT32_MIN;
	uint16_t x931 = UINT16_MAX;

    t175 = (x929^(x930/(x931&x932)));

    if (t175 != 32777) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile int16_t x933 = INT16_MIN;
	uint32_t x934 = UINT32_MAX;
	volatile int32_t x935 = -1;
	volatile int16_t x936 = INT16_MIN;
	volatile uint32_t t176 = 2434167U;

    t176 = (x933^(x934/(x935&x936)));

    if (t176 != 4294934529U) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x937 = INT8_MAX;
	int64_t x940 = -151038LL;
	static volatile int64_t t177 = 127LL;

    t177 = (x937^(x938/(x939&x940)));

    if (t177 != -148LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x945 = -1;
	int8_t x946 = INT8_MIN;
	volatile int16_t x947 = INT16_MAX;
	int32_t t178 = 13123;

    t178 = (x945^(x946/(x947&x948)));

    if (t178 != -1) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x949 = INT64_MIN;
	volatile uint32_t x950 = 2728182U;
	static uint64_t x951 = UINT64_MAX;
	static uint16_t x952 = 13857U;

    t179 = (x949^(x950/(x951&x952)));

    if (t179 != 9223372036854776004LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x954 = -1;
	volatile int8_t x955 = -1;
	int8_t x956 = -1;
	volatile int32_t t180 = -24;

    t180 = (x953^(x954/(x955&x956)));

    if (t180 != 47) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x957 = INT64_MIN;
	volatile uint64_t x959 = 551358928LLU;
	static int32_t x960 = -1;
	static uint64_t t181 = 99163838588LLU;

    t181 = (x957^(x958/(x959&x960)));

    if (t181 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x965 = 3903817U;
	static int8_t x966 = -2;
	volatile int16_t x967 = -1;
	volatile uint32_t t182 = 173183037U;

    t182 = (x965^(x966/(x967&x968)));

    if (t182 != 3903817U) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint64_t x969 = 1534LLU;
	uint8_t x970 = 3U;
	int32_t x971 = INT32_MAX;
	int32_t x972 = 7578645;
	volatile uint64_t t183 = 4003214156LLU;

    t183 = (x969^(x970/(x971&x972)));

    if (t183 != 1534LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static int32_t x974 = INT32_MIN;
	int8_t x975 = INT8_MIN;
	volatile int32_t t184 = 6685;

    t184 = (x973^(x974/(x975&x976)));

    if (t184 != -32767) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint64_t x981 = UINT64_MAX;
	int64_t x982 = -2033339108136115LL;
	volatile uint8_t x983 = 3U;
	uint8_t x984 = 31U;
	uint64_t t185 = 9932LLU;

    t185 = (x981^(x982/(x983&x984)));

    if (t185 != 677779702712037LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x989 = 1U;
	static int32_t x990 = -94052175;
	uint8_t x991 = 10U;
	uint32_t x992 = UINT32_MAX;
	volatile uint32_t t186 = 94226441U;

    t186 = (x989^(x990/(x991&x992)));

    if (t186 != 420091513U) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x993 = 25U;
	volatile int64_t x994 = INT64_MIN;
	int8_t x996 = INT8_MIN;
	static int64_t t187 = 27856LL;

    t187 = (x993^(x994/(x995&x996)));

    if (t187 != -282578800148762LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x1001 = -1;
	uint32_t x1002 = 0U;
	int16_t x1003 = 115;
	int8_t x1004 = -9;
	volatile uint32_t t188 = UINT32_MAX;

    t188 = (x1001^(x1002/(x1003&x1004)));

    if (t188 != UINT32_MAX) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x1014 = UINT32_MAX;
	int64_t x1015 = 438723930LL;
	uint8_t x1016 = 50U;
	volatile int64_t t189 = -1354429195LL;

    t189 = (x1013^(x1014/(x1015&x1016)));

    if (t189 != -240069352LL) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint8_t x1018 = 0U;
	int64_t x1019 = -7053082LL;
	int64_t t190 = 98230368322030676LL;

    t190 = (x1017^(x1018/(x1019&x1020)));

    if (t190 != -128LL) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint64_t x1027 = UINT64_MAX;
	volatile uint64_t t191 = 160593307131728398LLU;

    t191 = (x1025^(x1026/(x1027&x1028)));

    if (t191 != 793284296648035LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int64_t x1029 = 7855293987LL;
	int16_t x1030 = 1;
	static int32_t x1032 = -5;
	volatile int64_t t192 = 8154292082868633LL;

    t192 = (x1029^(x1030/(x1031&x1032)));

    if (t192 != 7855293987LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x1034 = 0;
	volatile uint64_t x1035 = UINT64_MAX;
	static volatile uint16_t x1036 = 2U;
	uint64_t t193 = 7868140LLU;

    t193 = (x1033^(x1034/(x1035&x1036)));

    if (t193 != 32767LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x1041 = INT8_MIN;
	uint8_t x1043 = 45U;
	volatile int64_t x1044 = -253239161969LL;
	int64_t t194 = 85939211415LL;

    t194 = (x1041^(x1042/(x1043&x1044)));

    if (t194 != -128LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint8_t x1045 = 1U;
	static int8_t x1047 = INT8_MIN;
	volatile int8_t x1048 = -1;

    t195 = (x1045^(x1046/(x1047&x1048)));

    if (t195 != -72057594037927936LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x1049 = -1;
	static int32_t x1050 = INT32_MIN;
	uint64_t x1051 = 16444055LLU;
	uint8_t x1052 = UINT8_MAX;
	uint64_t t196 = 11850017000LLU;

    t196 = (x1049^(x1050/(x1051&x1052)));

    if (t196 != 18324580205685961761LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x1053 = INT64_MIN;
	uint64_t x1054 = UINT64_MAX;
	static int8_t x1055 = INT8_MAX;
	int32_t x1056 = INT32_MAX;
	static uint64_t t197 = 270159997024977LLU;

    t197 = (x1053^(x1054/(x1055&x1056)));

    if (t197 != 9368621990191071490LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x1057 = INT64_MIN;
	volatile int32_t x1058 = INT32_MIN;
	volatile uint32_t x1059 = 35U;
	uint8_t x1060 = 11U;
	volatile int64_t t198 = 0LL;

    t198 = (x1057^(x1058/(x1059&x1060)));

    if (t198 != -9223372036138947926LL) { NG(); } else { ; }
	
}

void f199(void) {
    	static int64_t x1061 = 11LL;
	static int64_t x1062 = INT64_MIN;
	int64_t x1063 = INT64_MAX;
	int64_t t199 = -261537476059LL;

    t199 = (x1061^(x1062/(x1063&x1064)));

    if (t199 != -12LL) { NG(); } else { ; }
	
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
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

