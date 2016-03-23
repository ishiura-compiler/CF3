
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

static int32_t x4 = INT32_MAX;
uint8_t x5 = 1U;
int8_t x6 = 3;
int16_t x9 = -3432;
int32_t x16 = INT32_MAX;
uint64_t t3 = 37733784LLU;
int8_t x18 = 2;
int64_t x21 = INT64_MIN;
int8_t x23 = INT8_MIN;
int64_t x29 = INT64_MAX;
uint16_t x43 = UINT16_MAX;
int8_t x45 = INT8_MIN;
uint16_t x48 = UINT16_MAX;
volatile uint64_t x50 = 464052916722154LLU;
static int8_t x55 = 3;
uint8_t x63 = 23U;
static uint64_t x64 = 1595665472LLU;
uint64_t x70 = 107645852763LLU;
volatile uint64_t t17 = 143LLU;
uint64_t t18 = UINT64_MAX;
volatile int32_t x77 = 1;
int8_t x80 = INT8_MAX;
static int64_t t19 = 58372044789965LL;
static volatile uint64_t t22 = 1165LLU;
int64_t x101 = INT64_MIN;
int16_t x103 = -1;
int64_t t25 = 0LL;
volatile int32_t t26 = INT32_MIN;
int32_t t27 = -369522;
uint32_t x116 = UINT32_MAX;
int8_t x121 = INT8_MIN;
int32_t x128 = 14;
int32_t x142 = INT32_MIN;
int64_t x149 = INT64_MIN;
uint16_t x152 = UINT16_MAX;
int32_t x155 = INT32_MAX;
volatile uint32_t t38 = 2U;
uint8_t x159 = 6U;
static int64_t x174 = -1LL;
volatile int32_t x177 = -1998142;
uint64_t t44 = 1814594LLU;
int32_t x184 = 1;
volatile int8_t x185 = INT8_MIN;
volatile uint32_t t47 = 518U;
static volatile uint8_t x197 = 19U;
int64_t x198 = -3365329587898LL;
int8_t x203 = 59;
static int16_t x204 = -1155;
int64_t x206 = -390280905186133159LL;
uint64_t x215 = UINT64_MAX;
int8_t x221 = -1;
int8_t x224 = 3;
int8_t x227 = -1;
uint16_t x238 = 270U;
int16_t x240 = INT16_MIN;
int64_t t59 = -66LL;
int8_t x242 = -1;
int64_t x250 = INT64_MIN;
volatile uint64_t t62 = 1LLU;
static int64_t x257 = -1LL;
static volatile uint32_t x261 = UINT32_MAX;
volatile uint16_t x263 = 30U;
int64_t x281 = INT64_MAX;
static int8_t x282 = -1;
int8_t x283 = -1;
int8_t x284 = -1;
int64_t x287 = INT64_MAX;
static uint32_t x290 = 83015U;
volatile int8_t x291 = -1;
uint64_t t72 = 15326618942096LLU;
int16_t x299 = -1;
uint8_t x306 = 2U;
static uint64_t x317 = 90766LLU;
int64_t x319 = INT64_MIN;
int16_t x325 = INT16_MAX;
volatile uint8_t x329 = 0U;
static int32_t x331 = -1;
volatile uint32_t t82 = 99729106U;
volatile uint8_t x339 = UINT8_MAX;
volatile int64_t t84 = -5882203280626832LL;
int64_t x341 = 1635912059405LL;
uint8_t x347 = 2U;
uint8_t x359 = UINT8_MAX;
int64_t t89 = 63LL;
uint8_t x363 = 1U;
static int8_t x364 = -14;
int32_t x368 = -175;
uint16_t x372 = 1U;
int32_t t93 = 21275215;
int64_t x377 = 14606748797659589LL;
volatile uint8_t x380 = 28U;
int16_t x384 = INT16_MIN;
int64_t x395 = -1LL;
int32_t x400 = INT32_MIN;
uint16_t x408 = UINT16_MAX;
int32_t x415 = -1400588;
int16_t x416 = 0;
static int16_t x420 = INT16_MIN;
int16_t x425 = INT16_MIN;
int16_t x432 = INT16_MIN;
volatile int32_t x438 = -34;
int32_t x447 = INT32_MAX;
volatile int32_t t111 = -4;
static int32_t x451 = 41;
int64_t x454 = INT64_MIN;
volatile int8_t x455 = -2;
static int64_t t113 = 1118860592LL;
int16_t x474 = -3;
int8_t x477 = -1;
int8_t x478 = -1;
int64_t x482 = -1LL;
uint32_t x484 = 85744U;
int64_t t120 = -120898735489LL;
int32_t x488 = INT32_MIN;
volatile int64_t x490 = -1LL;
volatile int64_t t122 = -1LL;
uint32_t x496 = UINT32_MAX;
static uint16_t x498 = 9U;
static int8_t x504 = INT8_MAX;
int64_t t125 = INT64_MAX;
int16_t x505 = 989;
int16_t x506 = -1;
int32_t x507 = INT32_MIN;
static volatile int64_t x508 = INT64_MIN;
int64_t x515 = -60430LL;
int32_t x516 = INT32_MIN;
volatile int8_t x524 = -1;
static volatile int64_t t130 = 1603LL;
static volatile int64_t x526 = INT64_MAX;
volatile uint64_t t132 = 12483990606091LLU;
int8_t x534 = INT8_MAX;
int64_t x539 = INT64_MIN;
int64_t t134 = -717765LL;
uint16_t x541 = UINT16_MAX;
volatile int32_t t137 = -199741;
int64_t x555 = INT64_MAX;
int64_t t138 = 900264120920LL;
static volatile int32_t t139 = 15417620;
uint16_t x562 = 2739U;
int8_t x564 = INT8_MIN;
volatile int32_t t140 = 59;
volatile int8_t x573 = INT8_MAX;
static uint32_t t143 = UINT32_MAX;
uint16_t x583 = 1U;
int64_t x586 = INT64_MAX;
int8_t x587 = -1;
volatile int8_t x590 = INT8_MIN;
volatile int64_t t147 = 2579089966LL;
static int8_t x594 = INT8_MAX;
int16_t x601 = INT16_MIN;
static uint32_t x609 = 103717U;
volatile uint8_t x615 = 0U;
int8_t x625 = 24;
volatile int32_t x627 = INT32_MIN;
uint32_t x630 = 0U;
static uint32_t t158 = 2U;
static int32_t x640 = -1;
int32_t t159 = 21;
int64_t t163 = 187534LL;
int64_t x657 = INT64_MIN;
volatile uint64_t t167 = 535295LLU;
int64_t x677 = INT64_MIN;
uint32_t x680 = UINT32_MAX;
int32_t x683 = INT32_MIN;
uint32_t t170 = UINT32_MAX;
static uint64_t x689 = 47897963816LLU;
int64_t t173 = -34162118493558838LL;
int64_t x697 = INT64_MAX;
int32_t x704 = -1;
int32_t t175 = 464550881;
static int32_t x719 = 786489004;
uint32_t x723 = 12301U;
uint64_t x728 = UINT64_MAX;
int8_t x736 = -1;
uint32_t x748 = UINT32_MAX;
uint64_t t188 = 25951LLU;
static uint64_t x757 = 123844805511568LLU;
int16_t x758 = -1;
static uint64_t t190 = 788955747517LLU;
volatile uint8_t x770 = 0U;
static int64_t x772 = -1LL;
volatile uint64_t x773 = 1997689192LLU;
static uint64_t x787 = 6LLU;
int8_t x788 = -1;
volatile uint8_t x790 = 0U;
static volatile int16_t x800 = INT16_MAX;


void f0(void) {
    	int16_t x1 = 20;
	uint8_t x2 = UINT8_MAX;
	int8_t x3 = -36;
	int32_t t0 = INT32_MAX;

    t0 = ((x1&(x2^x3))|x4);

    if (t0 != INT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x7 = INT8_MAX;
	uint16_t x8 = UINT16_MAX;
	static volatile int32_t t1 = -3;

    t1 = ((x5&(x6^x7))|x8);

    if (t1 != 65535) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x10 = INT64_MAX;
	uint16_t x11 = 13549U;
	volatile int8_t x12 = -1;
	int64_t t2 = 242793LL;

    t2 = ((x9&(x10^x11))|x12);

    if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint64_t x13 = 4530989320LLU;
	static volatile int64_t x14 = -1LL;
	volatile uint16_t x15 = 9U;

    t3 = ((x13&(x14^x15))|x16);

    if (t3 != 6442450943LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = -1;
	volatile uint8_t x19 = 115U;
	uint8_t x20 = 0U;
	static volatile int32_t t4 = 2574217;

    t4 = ((x17&(x18^x19))|x20);

    if (t4 != 113) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x22 = INT32_MAX;
	static int8_t x24 = 1;
	int64_t t5 = -7891622633804171LL;

    t5 = ((x21&(x22^x23))|x24);

    if (t5 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = INT8_MIN;
	uint64_t x26 = 96001566863018LLU;
	volatile int64_t x27 = -125560611LL;
	int64_t x28 = INT64_MAX;
	uint64_t t6 = UINT64_MAX;

    t6 = ((x25&(x26^x27))|x28);

    if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x30 = -16455524033LL;
	static int8_t x31 = INT8_MAX;
	int8_t x32 = 28;
	volatile int64_t t7 = -9503311573238LL;

    t7 = ((x29&(x30^x31))|x32);

    if (t7 != 9223372020399251804LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = 1;
	uint8_t x34 = 0U;
	int16_t x35 = INT16_MIN;
	uint8_t x36 = 2U;
	volatile int32_t t8 = -1313;

    t8 = ((x33&(x34^x35))|x36);

    if (t8 != 2) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = 18069064189488081LL;
	int64_t x38 = INT64_MAX;
	int32_t x39 = 15;
	static volatile int32_t x40 = -869908682;
	volatile int64_t t9 = -5284052259911447LL;

    t9 = ((x37&(x38^x39))|x40);

    if (t9 != -596230154LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = -1;
	static int32_t x42 = -1;
	int32_t x44 = -30;
	static int32_t t10 = 1301649;

    t10 = ((x41&(x42^x43))|x44);

    if (t10 != -30) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint8_t x46 = UINT8_MAX;
	int64_t x47 = -1LL;
	static volatile int64_t t11 = -41281405714LL;

    t11 = ((x45&(x46^x47))|x48);

    if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int32_t x49 = 691;
	int8_t x51 = 4;
	static int32_t x52 = -1;
	static uint64_t t12 = UINT64_MAX;

    t12 = ((x49&(x50^x51))|x52);

    if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x53 = INT64_MIN;
	static uint16_t x54 = UINT16_MAX;
	int16_t x56 = -1;
	int64_t t13 = 366158556485LL;

    t13 = ((x53&(x54^x55))|x56);

    if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = INT16_MIN;
	int16_t x58 = -1;
	uint16_t x59 = UINT16_MAX;
	uint64_t x60 = 271596549384LLU;
	volatile uint64_t t14 = 68934205167510623LLU;

    t14 = ((x57&(x58^x59))|x60);

    if (t14 != 18446744073709516040LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = INT16_MAX;
	static int32_t x62 = INT32_MIN;
	static volatile uint64_t t15 = 149668532750042062LLU;

    t15 = ((x61&(x62^x63))|x64);

    if (t15 != 1595665495LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = INT8_MIN;
	int64_t x66 = 7834834688215LL;
	volatile int32_t x67 = 52;
	int64_t x68 = INT64_MIN;
	volatile int64_t t16 = 8949791297911801LL;

    t16 = ((x65&(x66^x67))|x68);

    if (t16 != -9223364202020087680LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x69 = UINT16_MAX;
	uint8_t x71 = UINT8_MAX;
	int32_t x72 = INT32_MIN;

    t17 = ((x69&(x70^x71))|x72);

    if (t17 != 18446744071562091684LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint16_t x73 = UINT16_MAX;
	uint64_t x74 = 352371453923156273LLU;
	volatile uint64_t x75 = 16681292334LLU;
	int64_t x76 = -1LL;

    t18 = ((x73&(x74^x75))|x76);

    if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x78 = INT64_MAX;
	int8_t x79 = -1;

    t19 = ((x77&(x78^x79))|x80);

    if (t19 != 127LL) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int16_t x81 = -1;
	volatile int64_t x82 = -137LL;
	volatile int64_t x83 = INT64_MAX;
	int8_t x84 = -1;
	volatile int64_t t20 = 2098038LL;

    t20 = ((x81&(x82^x83))|x84);

    if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x85 = 16854U;
	int16_t x86 = 0;
	volatile uint32_t x87 = UINT32_MAX;
	int64_t x88 = INT64_MIN;
	static int64_t t21 = -76417778285669617LL;

    t21 = ((x85&(x86^x87))|x88);

    if (t21 != -9223372036854758954LL) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint8_t x89 = UINT8_MAX;
	volatile uint64_t x90 = 12562359851384LLU;
	int32_t x91 = 75;
	uint64_t x92 = 531718413700061LLU;

    t22 = ((x89&(x90^x91))|x92);

    if (t22 != 531718413700095LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x93 = 0;
	int16_t x94 = -1;
	uint16_t x95 = 25169U;
	uint16_t x96 = 3838U;
	int32_t t23 = -1496110;

    t23 = ((x93&(x94^x95))|x96);

    if (t23 != 3838) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = INT32_MIN;
	int64_t x98 = -1LL;
	uint64_t x99 = UINT64_MAX;
	int64_t x100 = -1973237851LL;
	uint64_t t24 = 1732064126538382762LLU;

    t24 = ((x97&(x98^x99))|x100);

    if (t24 != 18446744071736313765LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x102 = UINT16_MAX;
	int8_t x104 = -1;

    t25 = ((x101&(x102^x103))|x104);

    if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int32_t x105 = INT32_MIN;
	uint8_t x106 = 5U;
	int32_t x107 = INT32_MIN;
	int8_t x108 = 0;

    t26 = ((x105&(x106^x107))|x108);

    if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = 20;
	int32_t x110 = -1;
	int16_t x111 = INT16_MIN;
	int32_t x112 = -60599282;

    t27 = ((x109&(x110^x111))|x112);

    if (t27 != -60599266) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x113 = 15LLU;
	int32_t x114 = 2;
	int64_t x115 = INT64_MIN;
	uint64_t t28 = 140915225361LLU;

    t28 = ((x113&(x114^x115))|x116);

    if (t28 != 4294967295LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int32_t x117 = 536584493;
	int64_t x118 = 2985LL;
	uint32_t x119 = 12226547U;
	static volatile int16_t x120 = INT16_MIN;
	volatile int64_t t29 = -1506378490701LL;

    t29 = ((x117&(x118^x119))|x120);

    if (t29 != -32760LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x122 = 490U;
	int16_t x123 = -1;
	int16_t x124 = INT16_MIN;
	static volatile uint32_t t30 = 372206U;

    t30 = ((x121&(x122^x123))|x124);

    if (t30 != 4294966784U) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x125 = 22749602U;
	static volatile int16_t x126 = INT16_MAX;
	int64_t x127 = INT64_MIN;
	int64_t t31 = -6127LL;

    t31 = ((x125&(x126^x127))|x128);

    if (t31 != 8622LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = 2761564957309990612LL;
	int64_t x130 = INT64_MAX;
	static int16_t x131 = -5;
	uint64_t x132 = UINT64_MAX;
	volatile uint64_t t32 = UINT64_MAX;

    t32 = ((x129&(x130^x131))|x132);

    if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = INT32_MIN;
	uint32_t x134 = 6U;
	volatile uint8_t x135 = 30U;
	static int64_t x136 = -4010LL;
	static volatile int64_t t33 = 14195LL;

    t33 = ((x133&(x134^x135))|x136);

    if (t33 != -4010LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x137 = 110U;
	static int8_t x138 = INT8_MIN;
	uint64_t x139 = 88707070177LLU;
	int64_t x140 = INT64_MAX;
	static volatile uint64_t t34 = 5591509692056803091LLU;

    t34 = ((x137&(x138^x139))|x140);

    if (t34 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint64_t x141 = 394613181LLU;
	uint64_t x143 = 1752406LLU;
	uint32_t x144 = 1388U;
	volatile uint64_t t35 = 3587715846LLU;

    t35 = ((x141&(x142^x143))|x144);

    if (t35 != 5500LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = 2268;
	int8_t x146 = -1;
	static int16_t x147 = INT16_MAX;
	static int8_t x148 = INT8_MIN;
	int32_t t36 = -14843989;

    t36 = ((x145&(x146^x147))|x148);

    if (t36 != -128) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x150 = 1U;
	int64_t x151 = 26LL;
	volatile int64_t t37 = 8373LL;

    t37 = ((x149&(x150^x151))|x152);

    if (t37 != 65535LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x153 = 11711U;
	static uint16_t x154 = UINT16_MAX;
	static int32_t x156 = INT32_MIN;

    t38 = ((x153&(x154^x155))|x156);

    if (t38 != 2147483648U) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x157 = INT16_MAX;
	static uint64_t x158 = 52LLU;
	static int16_t x160 = INT16_MAX;
	volatile uint64_t t39 = 404081301414LLU;

    t39 = ((x157&(x158^x159))|x160);

    if (t39 != 32767LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x161 = UINT32_MAX;
	static int8_t x162 = 0;
	int32_t x163 = INT32_MIN;
	static uint8_t x164 = 5U;
	uint32_t t40 = 1377775U;

    t40 = ((x161&(x162^x163))|x164);

    if (t40 != 2147483653U) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x165 = -421169170430328LL;
	uint32_t x166 = 27745U;
	volatile int32_t x167 = INT32_MAX;
	static volatile int64_t x168 = -924LL;
	volatile int64_t t41 = 88102121LL;

    t41 = ((x165&(x166^x167))|x168);

    if (t41 != -276LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x169 = 25588;
	uint8_t x170 = UINT8_MAX;
	volatile int32_t x171 = INT32_MAX;
	int16_t x172 = INT16_MIN;
	int32_t t42 = -6372670;

    t42 = ((x169&(x170^x171))|x172);

    if (t42 != -7424) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x173 = INT8_MAX;
	static volatile int8_t x175 = -1;
	int32_t x176 = 19789;
	int64_t t43 = 1609LL;

    t43 = ((x173&(x174^x175))|x176);

    if (t43 != 19789LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x178 = -1LL;
	volatile uint64_t x179 = 51022153LLU;
	uint64_t x180 = 37059229300LLU;

    t44 = ((x177&(x178^x179))|x180);

    if (t44 != 18446744073657644790LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x181 = 21;
	volatile int64_t x182 = INT64_MIN;
	int16_t x183 = 0;
	volatile int64_t t45 = -12007014787280LL;

    t45 = ((x181&(x182^x183))|x184);

    if (t45 != 1LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x186 = INT32_MIN;
	volatile uint16_t x187 = 163U;
	int64_t x188 = INT64_MIN;
	volatile int64_t t46 = 3674925227122712062LL;

    t46 = ((x185&(x186^x187))|x188);

    if (t46 != -2147483520LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x189 = -19;
	uint32_t x190 = 63967528U;
	int8_t x191 = INT8_MIN;
	uint32_t x192 = 98264691U;

    t47 = ((x189&(x190^x191))|x192);

    if (t47 != 4261408507U) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x193 = UINT8_MAX;
	static uint16_t x194 = UINT16_MAX;
	uint16_t x195 = UINT16_MAX;
	uint16_t x196 = UINT16_MAX;
	volatile int32_t t48 = -1012;

    t48 = ((x193&(x194^x195))|x196);

    if (t48 != 65535) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x199 = INT16_MAX;
	int8_t x200 = 17;
	static volatile int64_t t49 = 3460LL;

    t49 = ((x197&(x198^x199))|x200);

    if (t49 != 17LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x201 = 3;
	uint8_t x202 = 26U;
	volatile int32_t t50 = 0;

    t50 = ((x201&(x202^x203))|x204);

    if (t50 != -1155) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x205 = INT8_MIN;
	volatile uint32_t x207 = 1630660U;
	uint16_t x208 = 195U;
	int64_t t51 = 78490130046551LL;

    t51 = ((x205&(x206^x207))|x208);

    if (t51 != -390280905184519485LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint8_t x209 = UINT8_MAX;
	uint16_t x210 = 3U;
	volatile uint16_t x211 = UINT16_MAX;
	static int8_t x212 = 2;
	volatile int32_t t52 = 23923;

    t52 = ((x209&(x210^x211))|x212);

    if (t52 != 254) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = INT32_MAX;
	uint32_t x214 = UINT32_MAX;
	int8_t x216 = INT8_MIN;
	volatile uint64_t t53 = 2459604LLU;

    t53 = ((x213&(x214^x215))|x216);

    if (t53 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x217 = INT32_MIN;
	int64_t x218 = INT64_MAX;
	static int32_t x219 = INT32_MIN;
	int8_t x220 = 18;
	volatile int64_t t54 = -494LL;

    t54 = ((x217&(x218^x219))|x220);

    if (t54 != -9223372036854775790LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x222 = -1;
	static int8_t x223 = INT8_MIN;
	int32_t t55 = 3;

    t55 = ((x221&(x222^x223))|x224);

    if (t55 != 127) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x225 = 0U;
	uint16_t x226 = 4774U;
	static volatile int64_t x228 = -1LL;
	volatile int64_t t56 = -538584LL;

    t56 = ((x225&(x226^x227))|x228);

    if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int16_t x229 = 180;
	int64_t x230 = -27421LL;
	uint16_t x231 = 0U;
	int16_t x232 = 1;
	volatile int64_t t57 = 318123130LL;

    t57 = ((x229&(x230^x231))|x232);

    if (t57 != 161LL) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x233 = 97653744U;
	static int8_t x234 = INT8_MAX;
	int32_t x235 = INT32_MIN;
	volatile uint8_t x236 = 0U;
	uint32_t t58 = 105457U;

    t58 = ((x233&(x234^x235))|x236);

    if (t58 != 112U) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x237 = INT64_MIN;
	uint8_t x239 = UINT8_MAX;

    t59 = ((x237&(x238^x239))|x240);

    if (t59 != -32768LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x241 = INT32_MIN;
	int8_t x243 = INT8_MAX;
	int32_t x244 = 40084;
	static int32_t t60 = 502478531;

    t60 = ((x241&(x242^x243))|x244);

    if (t60 != -2147443564) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x245 = INT16_MAX;
	int8_t x246 = INT8_MIN;
	int16_t x247 = INT16_MIN;
	static int64_t x248 = 82357705561LL;
	static volatile int64_t t61 = -2687LL;

    t61 = ((x245&(x246^x247))|x248);

    if (t61 != 82357714905LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x249 = 10071U;
	volatile uint64_t x251 = 454756239062364LLU;
	int8_t x252 = INT8_MIN;

    t62 = ((x249&(x250^x251))|x252);

    if (t62 != 18446744073709551572LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x253 = 6005U;
	int16_t x254 = INT16_MIN;
	volatile int16_t x255 = INT16_MIN;
	uint16_t x256 = 6746U;
	volatile uint32_t t63 = 17398U;

    t63 = ((x253&(x254^x255))|x256);

    if (t63 != 6746U) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x258 = INT16_MIN;
	int16_t x259 = INT16_MIN;
	static int64_t x260 = INT64_MIN;
	volatile int64_t t64 = INT64_MIN;

    t64 = ((x257&(x258^x259))|x260);

    if (t64 != INT64_MIN) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x262 = INT16_MIN;
	int64_t x264 = -2098279515552990LL;
	static volatile int64_t t65 = 621236692488521LL;

    t65 = ((x261&(x262^x263))|x264);

    if (t65 != -2098276207721666LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x265 = 735356117015253LLU;
	int8_t x266 = -1;
	uint32_t x267 = 1661U;
	volatile uint16_t x268 = 3866U;
	volatile uint64_t t66 = 8604987885045281751LLU;

    t66 = ((x265&(x266^x267))|x268);

    if (t66 != 1881366426LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint32_t x269 = UINT32_MAX;
	static int16_t x270 = INT16_MIN;
	static int64_t x271 = INT64_MAX;
	static volatile int8_t x272 = -1;
	volatile int64_t t67 = -1112LL;

    t67 = ((x269&(x270^x271))|x272);

    if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x273 = 1684281279562475LLU;
	uint16_t x274 = 925U;
	int16_t x275 = 2;
	int32_t x276 = INT32_MIN;
	uint64_t t68 = 2099159764832396737LLU;

    t68 = ((x273&(x274^x275))|x276);

    if (t68 != 18446744071562068619LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int8_t x277 = INT8_MIN;
	int8_t x278 = 2;
	uint32_t x279 = UINT32_MAX;
	int16_t x280 = 9964;
	static uint32_t t69 = 10674846U;

    t69 = ((x277&(x278^x279))|x280);

    if (t69 != 4294967276U) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int64_t t70 = 358325616353967797LL;

    t70 = ((x281&(x282^x283))|x284);

    if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x285 = INT32_MIN;
	int16_t x286 = INT16_MIN;
	uint8_t x288 = UINT8_MAX;
	volatile int64_t t71 = -4729803063937779LL;

    t71 = ((x285&(x286^x287))|x288);

    if (t71 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x289 = 1LLU;
	int64_t x292 = INT64_MIN;

    t72 = ((x289&(x290^x291))|x292);

    if (t72 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int32_t x293 = INT32_MIN;
	int16_t x294 = INT16_MIN;
	static int32_t x295 = INT32_MIN;
	volatile int64_t x296 = INT64_MAX;
	static volatile int64_t t73 = INT64_MAX;

    t73 = ((x293&(x294^x295))|x296);

    if (t73 != INT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x297 = 1U;
	volatile int16_t x298 = INT16_MAX;
	int8_t x300 = -1;
	static int32_t t74 = -10;

    t74 = ((x297&(x298^x299))|x300);

    if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x301 = INT64_MAX;
	int32_t x302 = INT32_MIN;
	volatile int16_t x303 = 0;
	volatile int64_t x304 = -1732631320732347LL;
	volatile int64_t t75 = -1922575510646950LL;

    t75 = ((x301&(x302^x303))|x304);

    if (t75 != -711336635LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x305 = 97U;
	uint32_t x307 = UINT32_MAX;
	uint16_t x308 = 19U;
	volatile uint32_t t76 = 158278U;

    t76 = ((x305&(x306^x307))|x308);

    if (t76 != 115U) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x309 = UINT64_MAX;
	volatile int16_t x310 = INT16_MIN;
	static volatile uint8_t x311 = 25U;
	int16_t x312 = INT16_MIN;
	volatile uint64_t t77 = 150639187571LLU;

    t77 = ((x309&(x310^x311))|x312);

    if (t77 != 18446744073709518873LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x313 = -3;
	int64_t x314 = INT64_MIN;
	int64_t x315 = INT64_MIN;
	volatile uint16_t x316 = 50U;
	int64_t t78 = 3573944300339013LL;

    t78 = ((x313&(x314^x315))|x316);

    if (t78 != 50LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x318 = INT16_MIN;
	int32_t x320 = -6;
	volatile uint64_t t79 = 521940060301109533LLU;

    t79 = ((x317&(x318^x319))|x320);

    if (t79 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static int64_t x321 = INT64_MAX;
	uint32_t x322 = UINT32_MAX;
	static uint8_t x323 = UINT8_MAX;
	int32_t x324 = INT32_MIN;
	int64_t t80 = -106437280364403212LL;

    t80 = ((x321&(x322^x323))|x324);

    if (t80 != -256LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x326 = -1;
	volatile uint16_t x327 = 208U;
	int64_t x328 = INT64_MIN;
	int64_t t81 = -611967900LL;

    t81 = ((x325&(x326^x327))|x328);

    if (t81 != -9223372036854743249LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x330 = -1;
	uint32_t x332 = 7697U;

    t82 = ((x329&(x330^x331))|x332);

    if (t82 != 7697U) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x333 = -1;
	int16_t x334 = -1;
	volatile int64_t x335 = INT64_MIN;
	int8_t x336 = INT8_MIN;
	int64_t t83 = 1LL;

    t83 = ((x333&(x334^x335))|x336);

    if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x337 = 10098LL;
	uint32_t x338 = 2U;
	volatile int16_t x340 = INT16_MIN;

    t84 = ((x337&(x338^x339))|x340);

    if (t84 != -32656LL) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int16_t x342 = -122;
	int64_t x343 = 1758814039LL;
	uint16_t x344 = 6379U;
	volatile int64_t t85 = 64383LL;

    t85 = ((x341&(x342^x343))|x344);

    if (t85 != 1634287491307LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint8_t x345 = 0U;
	int64_t x346 = -51566LL;
	int64_t x348 = INT64_MAX;
	static int64_t t86 = INT64_MAX;

    t86 = ((x345&(x346^x347))|x348);

    if (t86 != INT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x349 = INT8_MAX;
	int32_t x350 = INT32_MIN;
	int32_t x351 = INT32_MAX;
	volatile int8_t x352 = INT8_MAX;
	static volatile int32_t t87 = -2;

    t87 = ((x349&(x350^x351))|x352);

    if (t87 != 127) { NG(); } else { ; }
	
}

void f88(void) {
    	static int64_t x353 = -13814505483199LL;
	int32_t x354 = 19038;
	int32_t x355 = -177641;
	static uint16_t x356 = 365U;
	volatile int64_t t88 = -202LL;

    t88 = ((x353&(x354^x355))|x356);

    if (t88 != -13814505668243LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x357 = 4;
	static int32_t x358 = INT32_MIN;
	static int64_t x360 = -248610027LL;

    t89 = ((x357&(x358^x359))|x360);

    if (t89 != -248610027LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x361 = UINT32_MAX;
	int32_t x362 = -1;
	uint32_t t90 = 210205591U;

    t90 = ((x361&(x362^x363))|x364);

    if (t90 != 4294967294U) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int8_t x365 = INT8_MIN;
	static int8_t x366 = INT8_MIN;
	static int16_t x367 = INT16_MIN;
	int32_t t91 = 50;

    t91 = ((x365&(x366^x367))|x368);

    if (t91 != -47) { NG(); } else { ; }
	
}

void f92(void) {
    	static int16_t x369 = INT16_MIN;
	uint32_t x370 = UINT32_MAX;
	volatile int64_t x371 = INT64_MIN;
	int64_t t92 = 768LL;

    t92 = ((x369&(x370^x371))|x372);

    if (t92 != -9223372032559841279LL) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint16_t x373 = UINT16_MAX;
	uint16_t x374 = UINT16_MAX;
	volatile int16_t x375 = 0;
	static uint8_t x376 = 7U;

    t93 = ((x373&(x374^x375))|x376);

    if (t93 != 65535) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x378 = INT64_MIN;
	static uint8_t x379 = UINT8_MAX;
	volatile int64_t t94 = -417572156LL;

    t94 = ((x377&(x378^x379))|x380);

    if (t94 != 221LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static int16_t x381 = 1;
	uint16_t x382 = UINT16_MAX;
	static int32_t x383 = -1;
	int32_t t95 = -587582976;

    t95 = ((x381&(x382^x383))|x384);

    if (t95 != -32768) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x385 = -1;
	uint64_t x386 = 69LLU;
	int16_t x387 = INT16_MIN;
	int16_t x388 = INT16_MIN;
	static uint64_t t96 = 398862210467LLU;

    t96 = ((x385&(x386^x387))|x388);

    if (t96 != 18446744073709518917LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint32_t x389 = UINT32_MAX;
	volatile int16_t x390 = INT16_MIN;
	uint32_t x391 = 527225U;
	static int64_t x392 = 9607363201249019LL;
	volatile int64_t t97 = -25954786458700169LL;

    t97 = ((x389&(x390^x391))|x392);

    if (t97 != 9607365099237371LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x393 = 5;
	uint16_t x394 = 992U;
	int32_t x396 = INT32_MAX;
	static volatile int64_t t98 = 1205397184358741LL;

    t98 = ((x393&(x394^x395))|x396);

    if (t98 != 2147483647LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x397 = 831LLU;
	int32_t x398 = 795541129;
	static uint64_t x399 = 25952777539827888LLU;
	uint64_t t99 = 3515687739269173LLU;

    t99 = ((x397&(x398^x399))|x400);

    if (t99 != 18446744071562068537LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x401 = INT64_MIN;
	volatile int64_t x402 = -27161860288LL;
	static int32_t x403 = 92886;
	volatile int32_t x404 = 2026;
	volatile int64_t t100 = 500LL;

    t100 = ((x401&(x402^x403))|x404);

    if (t100 != -9223372036854773782LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x405 = UINT64_MAX;
	uint64_t x406 = 3823LLU;
	volatile uint16_t x407 = 1827U;
	uint64_t t101 = 1848LLU;

    t101 = ((x405&(x406^x407))|x408);

    if (t101 != 65535LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x409 = 13U;
	volatile int32_t x410 = -1;
	int8_t x411 = INT8_MIN;
	static int64_t x412 = INT64_MIN;
	static volatile int64_t t102 = 73231788506362266LL;

    t102 = ((x409&(x410^x411))|x412);

    if (t102 != -9223372036854775795LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static int64_t x413 = INT64_MIN;
	int8_t x414 = INT8_MIN;
	static volatile int64_t t103 = -378590266013914173LL;

    t103 = ((x413&(x414^x415))|x416);

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x417 = -1;
	int64_t x418 = INT64_MIN;
	volatile int64_t x419 = INT64_MAX;
	static int64_t t104 = 1134237221490588634LL;

    t104 = ((x417&(x418^x419))|x420);

    if (t104 != -1LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = INT16_MIN;
	int16_t x422 = INT16_MAX;
	int32_t x423 = INT32_MIN;
	volatile int32_t x424 = -225681939;
	int32_t t105 = 6;

    t105 = ((x421&(x422^x423))|x424);

    if (t105 != -225681939) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x426 = -1;
	int64_t x427 = INT64_MIN;
	uint8_t x428 = 6U;
	int64_t t106 = -44304127499LL;

    t106 = ((x425&(x426^x427))|x428);

    if (t106 != 9223372036854743046LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int64_t x429 = 219454386002LL;
	volatile uint64_t x430 = 456LLU;
	volatile uint16_t x431 = UINT16_MAX;
	uint64_t t107 = 71789LLU;

    t107 = ((x429&(x430^x431))|x432);

    if (t107 != 18446744073709530642LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint32_t x433 = UINT32_MAX;
	static int32_t x434 = INT32_MAX;
	int8_t x435 = INT8_MIN;
	int64_t x436 = INT64_MAX;
	static int64_t t108 = INT64_MAX;

    t108 = ((x433&(x434^x435))|x436);

    if (t108 != INT64_MAX) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x437 = 685884;
	int16_t x439 = INT16_MIN;
	int8_t x440 = INT8_MAX;
	int32_t t109 = 5;

    t109 = ((x437&(x438^x439))|x440);

    if (t109 != 30591) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x441 = 39;
	uint16_t x442 = 1U;
	uint32_t x443 = UINT32_MAX;
	int64_t x444 = INT64_MAX;
	volatile int64_t t110 = INT64_MAX;

    t110 = ((x441&(x442^x443))|x444);

    if (t110 != INT64_MAX) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int8_t x445 = 0;
	int16_t x446 = INT16_MIN;
	uint8_t x448 = 13U;

    t111 = ((x445&(x446^x447))|x448);

    if (t111 != 13) { NG(); } else { ; }
	
}

void f112(void) {
    	static int8_t x449 = INT8_MIN;
	int32_t x450 = 8;
	int64_t x452 = 628144035332662788LL;
	int64_t t112 = -126541142979LL;

    t112 = ((x449&(x450^x451))|x452);

    if (t112 != 628144035332662788LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x453 = 11U;
	volatile uint32_t x456 = 54560U;

    t113 = ((x453&(x454^x455))|x456);

    if (t113 != 54570LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x457 = 7U;
	int32_t x458 = -66035662;
	volatile uint64_t x459 = 214LLU;
	static int64_t x460 = INT64_MIN;
	static volatile uint64_t t114 = 106572LLU;

    t114 = ((x457&(x458^x459))|x460);

    if (t114 != 9223372036854775812LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x461 = INT32_MIN;
	static int64_t x462 = -29291LL;
	int32_t x463 = -4;
	int16_t x464 = -7300;
	static volatile int64_t t115 = 46320554515LL;

    t115 = ((x461&(x462^x463))|x464);

    if (t115 != -7300LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x465 = INT16_MAX;
	static int32_t x466 = 277754;
	int32_t x467 = -1;
	int64_t x468 = INT64_MIN;
	int64_t t116 = -15532349LL;

    t116 = ((x465&(x466^x467))|x468);

    if (t116 != -9223372036854758651LL) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x469 = UINT64_MAX;
	int32_t x470 = INT32_MIN;
	volatile uint64_t x471 = UINT64_MAX;
	int8_t x472 = -22;
	uint64_t t117 = UINT64_MAX;

    t117 = ((x469&(x470^x471))|x472);

    if (t117 != UINT64_MAX) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x473 = INT32_MIN;
	int16_t x475 = INT16_MIN;
	int64_t x476 = -13LL;
	static volatile int64_t t118 = -251299637641167743LL;

    t118 = ((x473&(x474^x475))|x476);

    if (t118 != -13LL) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint16_t x479 = UINT16_MAX;
	uint64_t x480 = 31LLU;
	volatile uint64_t t119 = 7489473LLU;

    t119 = ((x477&(x478^x479))|x480);

    if (t119 != 18446744073709486111LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x481 = 671909747793885424LL;
	int64_t x483 = INT64_MAX;

    t120 = ((x481&(x482^x483))|x484);

    if (t120 != 85744LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x485 = 27U;
	volatile int16_t x486 = -1;
	int32_t x487 = INT32_MIN;
	volatile int32_t t121 = 2227;

    t121 = ((x485&(x486^x487))|x488);

    if (t121 != -2147483621) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x489 = 670U;
	volatile uint16_t x491 = UINT16_MAX;
	int8_t x492 = INT8_MIN;

    t122 = ((x489&(x490^x491))|x492);

    if (t122 != -128LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x493 = -1;
	int8_t x494 = 23;
	int32_t x495 = INT32_MAX;
	uint32_t t123 = UINT32_MAX;

    t123 = ((x493&(x494^x495))|x496);

    if (t123 != UINT32_MAX) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x497 = INT32_MIN;
	int32_t x499 = INT32_MAX;
	uint16_t x500 = 107U;
	int32_t t124 = 234693;

    t124 = ((x497&(x498^x499))|x500);

    if (t124 != 107) { NG(); } else { ; }
	
}

void f125(void) {
    	static int64_t x501 = -1LL;
	volatile int16_t x502 = -1;
	int64_t x503 = INT64_MIN;

    t125 = ((x501&(x502^x503))|x504);

    if (t125 != INT64_MAX) { NG(); } else { ; }
	
}

void f126(void) {
    	static int64_t t126 = 5799022974LL;

    t126 = ((x505&(x506^x507))|x508);

    if (t126 != -9223372036854774819LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x509 = -8;
	static int32_t x510 = INT32_MIN;
	int8_t x511 = INT8_MAX;
	uint64_t x512 = 5131918363LLU;
	static uint64_t t127 = 1LLU;

    t127 = ((x509&(x510^x511))|x512);

    if (t127 != 18446744072399019131LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int16_t x513 = -1;
	int64_t x514 = 275LL;
	static int64_t t128 = 8LL;

    t128 = ((x513&(x514^x515))|x516);

    if (t128 != -60703LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x517 = INT64_MIN;
	volatile int64_t x518 = -277744811441798987LL;
	int8_t x519 = -1;
	int16_t x520 = INT16_MIN;
	int64_t t129 = 3LL;

    t129 = ((x517&(x518^x519))|x520);

    if (t129 != -32768LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int16_t x521 = INT16_MIN;
	int64_t x522 = -129710008221LL;
	volatile uint8_t x523 = UINT8_MAX;

    t130 = ((x521&(x522^x523))|x524);

    if (t130 != -1LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x525 = 0;
	int64_t x527 = INT64_MIN;
	volatile int16_t x528 = INT16_MIN;
	volatile int64_t t131 = 401908067LL;

    t131 = ((x525&(x526^x527))|x528);

    if (t131 != -32768LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x529 = UINT16_MAX;
	int64_t x530 = 3963385170178LL;
	uint64_t x531 = UINT64_MAX;
	int8_t x532 = INT8_MAX;

    t132 = ((x529&(x530^x531))|x532);

    if (t132 != 46847LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x533 = 40647192;
	int8_t x535 = 30;
	uint64_t x536 = 484079068507302858LLU;
	uint64_t t133 = 108LLU;

    t133 = ((x533&(x534^x535))|x536);

    if (t133 != 484079068507302858LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x537 = INT16_MIN;
	int64_t x538 = INT64_MIN;
	int8_t x540 = 0;

    t134 = ((x537&(x538^x539))|x540);

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x542 = 10251785LLU;
	uint16_t x543 = 0U;
	int64_t x544 = -1LL;
	static volatile uint64_t t135 = UINT64_MAX;

    t135 = ((x541&(x542^x543))|x544);

    if (t135 != UINT64_MAX) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x545 = 8584507619455190LL;
	static int32_t x546 = INT32_MIN;
	static uint64_t x547 = 657597895970LLU;
	volatile uint8_t x548 = UINT8_MAX;
	uint64_t t136 = 1220460813565491301LLU;

    t136 = ((x545&(x546^x547))|x548);

    if (t136 != 8583887464861951LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x549 = INT32_MIN;
	uint16_t x550 = UINT16_MAX;
	static int16_t x551 = 169;
	int16_t x552 = 1;

    t137 = ((x549&(x550^x551))|x552);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x553 = 97U;
	volatile uint32_t x554 = UINT32_MAX;
	int16_t x556 = -1;

    t138 = ((x553&(x554^x555))|x556);

    if (t138 != -1LL) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int32_t x557 = -1;
	static volatile int32_t x558 = INT32_MIN;
	int32_t x559 = INT32_MAX;
	static volatile int16_t x560 = INT16_MIN;

    t139 = ((x557&(x558^x559))|x560);

    if (t139 != -1) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x561 = -46537326;
	volatile int8_t x563 = -1;

    t140 = ((x561&(x562^x563))|x564);

    if (t140 != -128) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x565 = 1649U;
	int64_t x566 = INT64_MIN;
	int16_t x567 = INT16_MIN;
	uint8_t x568 = UINT8_MAX;
	int64_t t141 = 116863583587592073LL;

    t141 = ((x565&(x566^x567))|x568);

    if (t141 != 255LL) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x569 = INT16_MIN;
	static uint16_t x570 = UINT16_MAX;
	uint32_t x571 = UINT32_MAX;
	uint64_t x572 = UINT64_MAX;
	volatile uint64_t t142 = UINT64_MAX;

    t142 = ((x569&(x570^x571))|x572);

    if (t142 != UINT64_MAX) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x574 = INT8_MIN;
	uint32_t x575 = 1U;
	int16_t x576 = -1;

    t143 = ((x573&(x574^x575))|x576);

    if (t143 != UINT32_MAX) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x577 = -1;
	uint32_t x578 = 349669U;
	volatile int16_t x579 = INT16_MAX;
	int8_t x580 = INT8_MAX;
	static volatile uint32_t t144 = 188495243U;

    t144 = ((x577&(x578^x579))|x580);

    if (t144 != 338559U) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile int8_t x581 = 3;
	int16_t x582 = 78;
	int32_t x584 = INT32_MIN;
	static int32_t t145 = 13286;

    t145 = ((x581&(x582^x583))|x584);

    if (t145 != -2147483645) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x585 = UINT8_MAX;
	int8_t x588 = INT8_MAX;
	static volatile int64_t t146 = 1472550094197LL;

    t146 = ((x585&(x586^x587))|x588);

    if (t146 != 127LL) { NG(); } else { ; }
	
}

void f147(void) {
    	static int64_t x589 = INT64_MAX;
	static volatile int8_t x591 = INT8_MIN;
	volatile int16_t x592 = -1;

    t147 = ((x589&(x590^x591))|x592);

    if (t147 != -1LL) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int32_t x593 = INT32_MAX;
	int64_t x595 = INT64_MAX;
	int64_t x596 = -1LL;
	int64_t t148 = -1LL;

    t148 = ((x593&(x594^x595))|x596);

    if (t148 != -1LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static int64_t x597 = INT64_MIN;
	int64_t x598 = -676720953655661994LL;
	static int64_t x599 = INT64_MIN;
	static uint8_t x600 = 6U;
	static volatile int64_t t149 = -472036247LL;

    t149 = ((x597&(x598^x599))|x600);

    if (t149 != 6LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x602 = 60U;
	int8_t x603 = 0;
	int16_t x604 = -1;
	static int32_t t150 = 4;

    t150 = ((x601&(x602^x603))|x604);

    if (t150 != -1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x605 = 1153679484U;
	volatile uint32_t x606 = 1001719885U;
	int8_t x607 = INT8_MIN;
	int16_t x608 = -255;
	uint32_t t151 = 4U;

    t151 = ((x605&(x606^x607))|x608);

    if (t151 != 4294967117U) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x610 = INT64_MIN;
	uint32_t x611 = UINT32_MAX;
	int16_t x612 = INT16_MIN;
	static volatile int64_t t152 = 1961LL;

    t152 = ((x609&(x610^x611))|x612);

    if (t152 != -27355LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x613 = INT64_MIN;
	int8_t x614 = -1;
	int64_t x616 = INT64_MAX;
	volatile int64_t t153 = -1010LL;

    t153 = ((x613&(x614^x615))|x616);

    if (t153 != -1LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x617 = INT32_MIN;
	volatile uint32_t x618 = 55825022U;
	uint32_t x619 = UINT32_MAX;
	uint16_t x620 = UINT16_MAX;
	volatile uint32_t t154 = 10293U;

    t154 = ((x617&(x618^x619))|x620);

    if (t154 != 2147549183U) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x621 = UINT8_MAX;
	static int64_t x622 = INT64_MAX;
	volatile uint32_t x623 = 56294U;
	int32_t x624 = INT32_MIN;
	int64_t t155 = -23974690LL;

    t155 = ((x621&(x622^x623))|x624);

    if (t155 != -2147483623LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x626 = 0U;
	int32_t x628 = -1;
	int32_t t156 = 243;

    t156 = ((x625&(x626^x627))|x628);

    if (t156 != -1) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x629 = INT32_MAX;
	volatile int8_t x631 = 6;
	static int8_t x632 = INT8_MIN;
	static uint32_t t157 = 47316227U;

    t157 = ((x629&(x630^x631))|x632);

    if (t157 != 4294967174U) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint32_t x633 = UINT32_MAX;
	volatile int8_t x634 = INT8_MIN;
	int16_t x635 = INT16_MIN;
	int32_t x636 = INT32_MIN;

    t158 = ((x633&(x634^x635))|x636);

    if (t158 != 2147516288U) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x637 = INT16_MIN;
	volatile int8_t x638 = -36;
	int32_t x639 = INT32_MIN;

    t159 = ((x637&(x638^x639))|x640);

    if (t159 != -1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int64_t x641 = INT64_MAX;
	uint32_t x642 = UINT32_MAX;
	int16_t x643 = INT16_MAX;
	int16_t x644 = -1;
	volatile int64_t t160 = -334650714886312LL;

    t160 = ((x641&(x642^x643))|x644);

    if (t160 != -1LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile uint8_t x645 = UINT8_MAX;
	volatile int64_t x646 = -1LL;
	volatile int16_t x647 = -1;
	volatile int8_t x648 = -1;
	volatile int64_t t161 = 325059399428182LL;

    t161 = ((x645&(x646^x647))|x648);

    if (t161 != -1LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x649 = INT8_MIN;
	volatile uint64_t x650 = UINT64_MAX;
	uint32_t x651 = 3U;
	int16_t x652 = INT16_MIN;
	static volatile uint64_t t162 = 12280LLU;

    t162 = ((x649&(x650^x651))|x652);

    if (t162 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x653 = INT16_MAX;
	static uint8_t x654 = 1U;
	int32_t x655 = INT32_MIN;
	static int64_t x656 = -1LL;

    t163 = ((x653&(x654^x655))|x656);

    if (t163 != -1LL) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int8_t x658 = -1;
	static int64_t x659 = INT64_MAX;
	static int32_t x660 = -1;
	static int64_t t164 = -18LL;

    t164 = ((x657&(x658^x659))|x660);

    if (t164 != -1LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x661 = UINT16_MAX;
	uint8_t x662 = 1U;
	int32_t x663 = INT32_MAX;
	int16_t x664 = 56;
	volatile int32_t t165 = 0;

    t165 = ((x661&(x662^x663))|x664);

    if (t165 != 65534) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint16_t x665 = 59U;
	static uint32_t x666 = UINT32_MAX;
	uint16_t x667 = UINT16_MAX;
	volatile int64_t x668 = INT64_MAX;
	int64_t t166 = INT64_MAX;

    t166 = ((x665&(x666^x667))|x668);

    if (t166 != INT64_MAX) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x669 = 368U;
	int8_t x670 = -15;
	uint8_t x671 = 0U;
	volatile uint64_t x672 = 1848513271831LLU;

    t167 = ((x669&(x670^x671))|x672);

    if (t167 != 1848513272183LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	static int16_t x673 = 40;
	static int8_t x674 = INT8_MAX;
	int32_t x675 = 1311;
	uint8_t x676 = 3U;
	volatile int32_t t168 = -358;

    t168 = ((x673&(x674^x675))|x676);

    if (t168 != 35) { NG(); } else { ; }
	
}

void f169(void) {
    	static int16_t x678 = -1;
	uint8_t x679 = 40U;
	volatile int64_t t169 = 523776698603200LL;

    t169 = ((x677&(x678^x679))|x680);

    if (t169 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint32_t x681 = 40907U;
	static volatile int32_t x682 = -1;
	static volatile uint32_t x684 = UINT32_MAX;

    t170 = ((x681&(x682^x683))|x684);

    if (t170 != UINT32_MAX) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x685 = 21;
	uint64_t x686 = UINT64_MAX;
	int32_t x687 = INT32_MIN;
	uint64_t x688 = 410932094LLU;
	volatile uint64_t t171 = 25469198697585404LLU;

    t171 = ((x685&(x686^x687))|x688);

    if (t171 != 410932095LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x690 = INT16_MAX;
	int64_t x691 = 35747442LL;
	int16_t x692 = INT16_MIN;
	uint64_t t172 = 326LLU;

    t172 = ((x689&(x690^x691))|x692);

    if (t172 != 18446744073709521160LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x693 = INT16_MAX;
	int32_t x694 = -84;
	static volatile uint8_t x695 = 20U;
	static int64_t x696 = -3461550323500493LL;

    t173 = ((x693&(x694^x695))|x696);

    if (t173 != -3461550323499077LL) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint32_t x698 = UINT32_MAX;
	int64_t x699 = INT64_MAX;
	static int8_t x700 = INT8_MIN;
	volatile int64_t t174 = -531124553904LL;

    t174 = ((x697&(x698^x699))|x700);

    if (t174 != -128LL) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int32_t x701 = 9548664;
	int32_t x702 = INT32_MIN;
	int32_t x703 = INT32_MIN;

    t175 = ((x701&(x702^x703))|x704);

    if (t175 != -1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x705 = 148LLU;
	uint16_t x706 = 2039U;
	int64_t x707 = INT64_MAX;
	static int32_t x708 = INT32_MAX;
	volatile uint64_t t176 = 72176LLU;

    t176 = ((x705&(x706^x707))|x708);

    if (t176 != 2147483647LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x709 = 1584LLU;
	int32_t x710 = -1;
	int16_t x711 = INT16_MIN;
	uint16_t x712 = 3U;
	static uint64_t t177 = 141LLU;

    t177 = ((x709&(x710^x711))|x712);

    if (t177 != 1587LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x713 = 1U;
	int16_t x714 = INT16_MIN;
	int16_t x715 = -216;
	int8_t x716 = INT8_MAX;
	volatile int32_t t178 = 243351;

    t178 = ((x713&(x714^x715))|x716);

    if (t178 != 127) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x717 = INT32_MAX;
	int32_t x718 = INT32_MIN;
	int64_t x720 = INT64_MIN;
	int64_t t179 = 20262859289LL;

    t179 = ((x717&(x718^x719))|x720);

    if (t179 != -9223372036068286804LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x721 = 38;
	static int64_t x722 = -1LL;
	int8_t x724 = INT8_MAX;
	volatile int64_t t180 = 40811LL;

    t180 = ((x721&(x722^x723))|x724);

    if (t180 != 127LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x725 = INT8_MIN;
	static int64_t x726 = INT64_MIN;
	volatile int64_t x727 = INT64_MIN;
	uint64_t t181 = UINT64_MAX;

    t181 = ((x725&(x726^x727))|x728);

    if (t181 != UINT64_MAX) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint64_t x729 = UINT64_MAX;
	int8_t x730 = INT8_MAX;
	static int16_t x731 = 66;
	static uint32_t x732 = UINT32_MAX;
	volatile uint64_t t182 = 34501191567174062LLU;

    t182 = ((x729&(x730^x731))|x732);

    if (t182 != 4294967295LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x733 = INT8_MIN;
	uint32_t x734 = UINT32_MAX;
	static uint8_t x735 = 18U;
	static uint32_t t183 = UINT32_MAX;

    t183 = ((x733&(x734^x735))|x736);

    if (t183 != UINT32_MAX) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint64_t x737 = 69LLU;
	volatile uint32_t x738 = 394672U;
	volatile uint64_t x739 = 8902762669492LLU;
	int32_t x740 = 750410696;
	volatile uint64_t t184 = 504560326302605LLU;

    t184 = ((x737&(x738^x739))|x740);

    if (t184 != 750410700LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x741 = 7688U;
	uint8_t x742 = 0U;
	static int8_t x743 = -1;
	int8_t x744 = -16;
	int32_t t185 = -12029;

    t185 = ((x741&(x742^x743))|x744);

    if (t185 != -8) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x745 = INT64_MIN;
	int64_t x746 = INT64_MIN;
	int8_t x747 = -8;
	int64_t t186 = 3920LL;

    t186 = ((x745&(x746^x747))|x748);

    if (t186 != 4294967295LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x749 = INT32_MIN;
	int8_t x750 = 0;
	int64_t x751 = INT64_MIN;
	volatile int16_t x752 = -219;
	int64_t t187 = 85759428140900LL;

    t187 = ((x749&(x750^x751))|x752);

    if (t187 != -219LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x753 = INT8_MAX;
	static volatile int32_t x754 = -1;
	uint32_t x755 = 948U;
	static uint64_t x756 = 11263973467199204LLU;

    t188 = ((x753&(x754^x755))|x756);

    if (t188 != 11263973467199215LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x759 = -1;
	uint8_t x760 = 1U;
	uint64_t t189 = 3264651279LLU;

    t189 = ((x757&(x758^x759))|x760);

    if (t189 != 1LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x761 = INT32_MAX;
	int8_t x762 = 0;
	uint64_t x763 = UINT64_MAX;
	volatile uint64_t x764 = 8858071199032LLU;

    t190 = ((x761&(x762^x763))|x764);

    if (t190 != 8858370047999LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint64_t x765 = 2LLU;
	int32_t x766 = INT32_MAX;
	int32_t x767 = INT32_MIN;
	int8_t x768 = 1;
	uint64_t t191 = 1726762944700967LLU;

    t191 = ((x765&(x766^x767))|x768);

    if (t191 != 3LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x769 = INT8_MIN;
	int8_t x771 = -1;
	volatile int64_t t192 = -7301197241LL;

    t192 = ((x769&(x770^x771))|x772);

    if (t192 != -1LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint16_t x774 = UINT16_MAX;
	volatile int32_t x775 = INT32_MIN;
	volatile uint64_t x776 = UINT64_MAX;
	volatile uint64_t t193 = UINT64_MAX;

    t193 = ((x773&(x774^x775))|x776);

    if (t193 != UINT64_MAX) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint16_t x777 = 453U;
	uint8_t x778 = 3U;
	int32_t x779 = 1985995;
	volatile uint32_t x780 = UINT32_MAX;
	static uint32_t t194 = UINT32_MAX;

    t194 = ((x777&(x778^x779))|x780);

    if (t194 != UINT32_MAX) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x781 = INT32_MIN;
	volatile int8_t x782 = -1;
	int16_t x783 = INT16_MIN;
	int32_t x784 = -257571;
	int32_t t195 = 25673674;

    t195 = ((x781&(x782^x783))|x784);

    if (t195 != -257571) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x785 = -964115LL;
	uint32_t x786 = 15140935U;
	uint64_t t196 = UINT64_MAX;

    t196 = ((x785&(x786^x787))|x788);

    if (t196 != UINT64_MAX) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x789 = INT64_MAX;
	int64_t x791 = -352674LL;
	int64_t x792 = -456882492397LL;
	int64_t t197 = -58033791356LL;

    t197 = ((x789&(x790^x791))|x792);

    if (t197 != -65953LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint32_t x793 = 2413U;
	uint8_t x794 = 3U;
	uint64_t x795 = 2LLU;
	int8_t x796 = INT8_MIN;
	volatile uint64_t t198 = 1194517617062501LLU;

    t198 = ((x793&(x794^x795))|x796);

    if (t198 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x797 = UINT16_MAX;
	int64_t x798 = INT64_MIN;
	int32_t x799 = -1;
	int64_t t199 = -17LL;

    t199 = ((x797&(x798^x799))|x800);

    if (t199 != 65535LL) { NG(); } else { ; }
	
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

