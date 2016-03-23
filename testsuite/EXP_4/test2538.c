
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

static int16_t x4 = INT16_MIN;
int16_t x10 = INT16_MAX;
static int64_t t3 = 1LL;
int16_t x19 = -1;
int64_t x27 = INT64_MAX;
int64_t x28 = -3635791261942LL;
volatile uint64_t t6 = 1505252432975765LLU;
int8_t x42 = INT8_MAX;
int32_t x45 = 103634;
static uint8_t x64 = 3U;
int8_t x70 = INT8_MAX;
int32_t x73 = -1;
volatile int16_t x78 = INT16_MIN;
uint64_t x79 = UINT64_MAX;
static volatile uint8_t x85 = 24U;
int16_t x86 = INT16_MIN;
uint64_t x87 = UINT64_MAX;
int16_t x89 = -1;
uint8_t x90 = UINT8_MAX;
int16_t x98 = -1;
static uint8_t x119 = 27U;
int32_t t27 = -15;
static volatile int8_t x141 = INT8_MIN;
int16_t x144 = -13791;
uint16_t x148 = 6246U;
volatile uint8_t x151 = 1U;
uint64_t t31 = 1396962866504167826LLU;
static int64_t x157 = INT64_MIN;
int64_t x158 = INT64_MIN;
volatile int32_t x160 = -419258;
int8_t x168 = INT8_MIN;
volatile uint32_t t34 = 86513710U;
int8_t x169 = INT8_MIN;
volatile int16_t x172 = INT16_MIN;
volatile int64_t x174 = INT64_MAX;
volatile int8_t x177 = -1;
int8_t x187 = INT8_MIN;
volatile uint16_t x202 = 133U;
static uint8_t x205 = 0U;
int8_t x213 = INT8_MIN;
uint8_t x215 = UINT8_MAX;
volatile int32_t t45 = -7174;
int64_t x218 = INT64_MIN;
int64_t t46 = 70083676LL;
int32_t x221 = -56949;
volatile int8_t x222 = -1;
uint64_t t47 = 761255130LLU;
int64_t t50 = 478584818424088LL;
int8_t x244 = INT8_MIN;
int8_t x249 = -1;
int32_t x252 = INT32_MIN;
int16_t x261 = INT16_MIN;
int8_t x266 = 5;
int32_t x267 = INT32_MIN;
int16_t x278 = -4784;
static int8_t x281 = INT8_MIN;
uint16_t x283 = 18U;
static uint64_t t59 = 0LLU;
volatile int8_t x287 = 2;
int8_t x296 = INT8_MIN;
int32_t x298 = 1;
int64_t x300 = INT64_MIN;
uint64_t t63 = 1515LLU;
int64_t x303 = -1LL;
int64_t x305 = INT64_MIN;
int8_t x310 = -1;
static int32_t x317 = INT32_MAX;
int8_t x319 = -12;
static int32_t x320 = INT32_MIN;
static int64_t x328 = -2LL;
uint64_t x337 = UINT64_MAX;
uint64_t x339 = UINT64_MAX;
volatile uint64_t t72 = 25782869247201LLU;
static volatile int8_t x345 = INT8_MIN;
volatile int8_t x347 = -1;
volatile int64_t x354 = -1178323645485900856LL;
static uint64_t x365 = 356421007732417369LLU;
int64_t x377 = INT64_MIN;
static uint16_t x378 = 12843U;
volatile int8_t x380 = INT8_MIN;
volatile int32_t t81 = 8384334;
int32_t x389 = -1;
volatile int16_t x390 = -4;
int32_t x399 = INT32_MIN;
volatile uint64_t x401 = 45292LLU;
int16_t x402 = INT16_MIN;
int64_t x404 = -3757880391388403LL;
static uint64_t x407 = UINT64_MAX;
static int16_t x424 = INT16_MIN;
int64_t t88 = 25968839LL;
static volatile int64_t x426 = INT64_MIN;
static volatile uint32_t t94 = 3532U;
int32_t x450 = -211547238;
volatile int32_t t97 = -12870057;
volatile int32_t x461 = -61246;
volatile int8_t x462 = INT8_MIN;
uint64_t x468 = 1309LLU;
static volatile int16_t x470 = INT16_MIN;
int8_t x472 = INT8_MIN;
uint16_t x475 = 7072U;
volatile int32_t x476 = -229899548;
uint16_t x477 = UINT16_MAX;
int16_t x481 = -506;
volatile uint32_t t103 = 11776570U;
uint8_t x486 = 20U;
int16_t x488 = -7400;
int64_t x497 = -940LL;
int64_t t106 = -1247251501891532LL;
static int8_t x503 = INT8_MIN;
int32_t x519 = INT32_MIN;
static uint64_t x520 = 3581960977LLU;
int64_t x521 = -1LL;
int32_t x524 = -1;
static int16_t x533 = INT16_MIN;
int32_t t114 = -679599;
int16_t x537 = INT16_MIN;
volatile int64_t t118 = 12LL;
int32_t x553 = INT32_MIN;
static int64_t t119 = 1417333935831245LL;
int32_t x564 = INT32_MIN;
uint32_t x572 = UINT32_MAX;
int16_t x584 = INT16_MIN;
int16_t x587 = 5;
int64_t x589 = INT64_MIN;
int64_t t126 = 3LL;
int16_t x593 = -1;
uint64_t x595 = 133609844196042LLU;
uint8_t x603 = UINT8_MAX;
volatile int8_t x614 = -1;
int8_t x615 = 3;
uint8_t x619 = UINT8_MAX;
int8_t x622 = -1;
static volatile uint16_t x624 = 14U;
int32_t t134 = -42;
int32_t x625 = INT32_MIN;
static int16_t x628 = INT16_MAX;
uint16_t x630 = 110U;
static uint32_t x635 = UINT32_MAX;
int8_t x636 = -1;
uint64_t x637 = 0LLU;
int32_t x643 = INT32_MAX;
int32_t t139 = -23685;
int8_t x648 = -1;
volatile int64_t x649 = INT64_MIN;
int16_t x650 = INT16_MIN;
static int8_t x651 = INT8_MAX;
uint64_t x655 = 15619993557LLU;
int8_t x659 = -13;
static volatile uint8_t x660 = 103U;
uint16_t x669 = 6U;
uint64_t x670 = 98177LLU;
static int8_t x680 = 1;
uint16_t x681 = UINT16_MAX;
volatile int64_t t148 = -6706936LL;
uint8_t x691 = UINT8_MAX;
uint8_t x692 = 0U;
int16_t x698 = -908;
uint64_t t151 = 89861204627049950LLU;
uint8_t x703 = 68U;
int16_t x704 = INT16_MAX;
uint8_t x711 = 42U;
static int8_t x717 = INT8_MAX;
int32_t x720 = -1;
int8_t x721 = -1;
int64_t x725 = -1LL;
static int64_t x726 = INT64_MIN;
volatile int32_t x729 = INT32_MAX;
int16_t x736 = 613;
uint16_t x737 = UINT16_MAX;
static volatile int16_t x738 = INT16_MAX;
static int16_t x743 = 98;
volatile int64_t t163 = 3245219122374750LL;
static volatile int64_t x759 = INT64_MIN;
int64_t x760 = INT64_MIN;
static int16_t x763 = INT16_MIN;
static int32_t x772 = 2221;
int8_t x777 = 55;
int32_t x782 = INT32_MIN;
uint8_t x784 = 0U;
uint8_t x786 = UINT8_MAX;
uint8_t x789 = 19U;
uint16_t x790 = 37U;
volatile uint16_t x794 = UINT16_MAX;
int32_t x797 = INT32_MAX;
int8_t x803 = -1;
int32_t x810 = INT32_MIN;
static volatile int8_t x811 = INT8_MIN;
static volatile int32_t t181 = -30462794;
volatile int8_t x822 = 1;
volatile int16_t x833 = INT16_MAX;
int32_t x835 = INT32_MIN;
static volatile int64_t x839 = 167869880623638421LL;
volatile int64_t x840 = 17107916LL;
uint32_t x841 = UINT32_MAX;
volatile int64_t x845 = -1LL;
volatile int64_t t188 = -109LL;
uint32_t x850 = UINT32_MAX;
static volatile uint32_t x853 = 517U;
uint64_t t190 = 693471048308LLU;
int32_t x861 = -409;
uint32_t x862 = 169696U;
uint8_t x864 = 7U;
uint32_t t191 = 43577768U;
uint64_t t192 = 908609631707344096LLU;
static uint32_t x871 = UINT32_MAX;
uint16_t x874 = 56U;


void f0(void) {
    	static uint16_t x1 = 2U;
	static volatile int64_t x2 = 1131LL;
	int16_t x3 = INT16_MAX;
	volatile int64_t t0 = 66237749846039198LL;

    t0 = (x1/(x2^(x3|x4)));

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x5 = -8;
	static uint32_t x6 = UINT32_MAX;
	static int64_t x7 = -1LL;
	static uint16_t x8 = 1U;
	volatile int64_t t1 = 249718942096415101LL;

    t1 = (x5/(x6^(x7|x8)));

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	static int64_t x9 = INT64_MIN;
	int64_t x11 = -1LL;
	int8_t x12 = -1;
	int64_t t2 = -55367LL;

    t2 = (x9/(x10^(x11|x12)));

    if (t2 != 281474976710656LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x13 = 1960U;
	int16_t x14 = INT16_MAX;
	int64_t x15 = INT64_MAX;
	volatile int8_t x16 = -6;

    t3 = (x13/(x14^(x15|x16)));

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = 1;
	int32_t x18 = 82;
	volatile int32_t x20 = INT32_MAX;
	static volatile int32_t t4 = 15122547;

    t4 = (x17/(x18^(x19|x20)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint8_t x21 = UINT8_MAX;
	int8_t x22 = INT8_MIN;
	static int32_t x23 = 43792;
	uint32_t x24 = UINT32_MAX;
	static volatile uint32_t t5 = 22U;

    t5 = (x21/(x22^(x23|x24)));

    if (t5 != 2U) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = UINT64_MAX;
	uint8_t x26 = UINT8_MAX;

    t6 = (x25/(x26^(x27|x28)));

    if (t6 != 1LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = INT32_MIN;
	volatile int64_t x30 = INT64_MAX;
	int64_t x31 = 3749786115672381857LL;
	volatile int8_t x32 = -1;
	int64_t t7 = 259376LL;

    t7 = (x29/(x30^(x31|x32)));

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x37 = -49;
	int32_t x38 = -309;
	int64_t x39 = -1LL;
	int16_t x40 = INT16_MIN;
	int64_t t8 = 51327348866380LL;

    t8 = (x37/(x38^(x39|x40)));

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x41 = UINT8_MAX;
	static int64_t x43 = INT64_MIN;
	uint16_t x44 = 12890U;
	static volatile int64_t t9 = -13LL;

    t9 = (x41/(x42^(x43|x44)));

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x46 = -1;
	volatile int16_t x47 = 1550;
	static uint8_t x48 = 6U;
	int32_t t10 = 10;

    t10 = (x45/(x46^(x47|x48)));

    if (t10 != -66) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x49 = UINT64_MAX;
	int64_t x50 = INT64_MIN;
	volatile int32_t x51 = INT32_MAX;
	volatile int64_t x52 = 2588410455334464LL;
	uint64_t t11 = 497678443211447LLU;

    t11 = (x49/(x50^(x51|x52)));

    if (t11 != 1LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static int32_t x53 = INT32_MAX;
	int8_t x54 = INT8_MIN;
	volatile int8_t x55 = 34;
	int16_t x56 = -60;
	volatile int32_t t12 = -63;

    t12 = (x53/(x54^(x55|x56)));

    if (t12 != 21053761) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint64_t x61 = 3632LLU;
	uint8_t x62 = UINT8_MAX;
	int32_t x63 = INT32_MIN;
	uint64_t t13 = 1066044143595854515LLU;

    t13 = (x61/(x62^(x63|x64)));

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x65 = -1;
	volatile int64_t x66 = 25265481129LL;
	volatile int8_t x67 = INT8_MIN;
	int16_t x68 = INT16_MAX;
	volatile int64_t t14 = 173095588161269LL;

    t14 = (x65/(x66^(x67|x68)));

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x69 = -1;
	uint16_t x71 = 2834U;
	static int64_t x72 = INT64_MAX;
	static int64_t t15 = -22727859059LL;

    t15 = (x69/(x70^(x71|x72)));

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static int16_t x74 = INT16_MIN;
	int32_t x75 = -1;
	uint8_t x76 = UINT8_MAX;
	static int32_t t16 = 2496;

    t16 = (x73/(x74^(x75|x76)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x77 = -1;
	int8_t x80 = -1;
	uint64_t t17 = 501LLU;

    t17 = (x77/(x78^(x79|x80)));

    if (t17 != 562967133814800LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x88 = -1;
	volatile uint64_t t18 = 21040466629779LLU;

    t18 = (x85/(x86^(x87|x88)));

    if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x91 = INT16_MIN;
	int8_t x92 = 3;
	int32_t t19 = 0;

    t19 = (x89/(x90^(x91|x92)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x93 = 5972U;
	uint8_t x94 = 57U;
	int8_t x95 = -60;
	static volatile int64_t x96 = INT64_MAX;
	volatile int64_t t20 = -176404LL;

    t20 = (x93/(x94^(x95|x96)));

    if (t20 != -102LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x97 = INT8_MIN;
	uint32_t x99 = 2072070U;
	uint8_t x100 = 2U;
	volatile uint32_t t21 = 22U;

    t21 = (x97/(x98^(x99|x100)));

    if (t21 != 1U) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int8_t x101 = -1;
	int16_t x102 = INT16_MIN;
	static int16_t x103 = 1;
	int64_t x104 = INT64_MIN;
	volatile int64_t t22 = -3LL;

    t22 = (x101/(x102^(x103|x104)));

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x105 = -1;
	uint8_t x106 = 1U;
	int8_t x107 = INT8_MIN;
	volatile uint32_t x108 = 1548269427U;
	uint32_t t23 = 2537082U;

    t23 = (x105/(x106^(x107|x108)));

    if (t23 != 1U) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint64_t x113 = 73147LLU;
	int8_t x114 = 1;
	int8_t x115 = INT8_MAX;
	int16_t x116 = INT16_MIN;
	volatile uint64_t t24 = 8253105663952LLU;

    t24 = (x113/(x114^(x115|x116)));

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x117 = UINT64_MAX;
	int8_t x118 = -29;
	uint16_t x120 = UINT16_MAX;
	uint64_t t25 = 84484050122401LLU;

    t25 = (x117/(x118^(x119|x120)));

    if (t25 != 1LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x125 = 3;
	uint64_t x126 = UINT64_MAX;
	uint16_t x127 = UINT16_MAX;
	uint8_t x128 = 2U;
	volatile uint64_t t26 = 3LLU;

    t26 = (x125/(x126^(x127|x128)));

    if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x129 = INT32_MIN;
	static int32_t x130 = INT32_MAX;
	uint8_t x131 = 6U;
	volatile int16_t x132 = INT16_MIN;

    t27 = (x129/(x130^(x131|x132)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x133 = UINT32_MAX;
	static volatile int32_t x134 = -1325;
	static int16_t x135 = 6;
	volatile int8_t x136 = -1;
	uint32_t t28 = 14U;

    t28 = (x133/(x134^(x135|x136)));

    if (t28 != 3243933U) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x142 = INT16_MIN;
	int64_t x143 = 968812097162344058LL;
	volatile int64_t t29 = 400264959983380LL;

    t29 = (x141/(x142^(x143|x144)));

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x145 = INT32_MIN;
	int8_t x146 = 1;
	uint32_t x147 = 348882U;
	volatile uint32_t t30 = 0U;

    t30 = (x145/(x146^(x147|x148)));

    if (t30 != 6118U) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint64_t x149 = 3929007428215477384LLU;
	static int16_t x150 = INT16_MIN;
	uint64_t x152 = 77036751835825296LLU;

    t31 = (x149/(x150^(x151|x152)));

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint16_t x153 = 0U;
	static int16_t x154 = 9727;
	static volatile int8_t x155 = INT8_MAX;
	int8_t x156 = INT8_MAX;
	volatile int32_t t32 = 324605;

    t32 = (x153/(x154^(x155|x156)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x159 = 21336217LLU;
	volatile uint64_t t33 = 52883905367LLU;

    t33 = (x157/(x158^(x159|x160)));

    if (t33 != 1LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x165 = 32;
	int16_t x166 = INT16_MIN;
	volatile uint32_t x167 = 1518676064U;

    t34 = (x165/(x166^(x167|x168)));

    if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x170 = -1;
	int64_t x171 = -2108522455126LL;
	static int64_t t35 = -27LL;

    t35 = (x169/(x170^(x171|x172)));

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x173 = INT32_MIN;
	uint16_t x175 = 16078U;
	int16_t x176 = -1;
	volatile int64_t t36 = 16261LL;

    t36 = (x173/(x174^(x175|x176)));

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x178 = 3812U;
	volatile int32_t x179 = 1;
	int64_t x180 = INT64_MIN;
	volatile int64_t t37 = -137197152787219624LL;

    t37 = (x177/(x178^(x179|x180)));

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x181 = INT32_MAX;
	static uint16_t x182 = UINT16_MAX;
	int32_t x183 = INT32_MIN;
	static int32_t x184 = -1;
	int32_t t38 = 11242328;

    t38 = (x181/(x182^(x183|x184)));

    if (t38 != -32767) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x185 = UINT32_MAX;
	uint16_t x186 = 110U;
	int64_t x188 = 2630LL;
	volatile int64_t t39 = -100147506811886LL;

    t39 = (x185/(x186^(x187|x188)));

    if (t39 != -48806446LL) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint64_t x189 = UINT64_MAX;
	static uint8_t x190 = 60U;
	uint16_t x191 = 26888U;
	uint32_t x192 = 17U;
	uint64_t t40 = 2393749630LLU;

    t40 = (x189/(x190^(x191|x192)));

    if (t40 != 685319466274456LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint32_t x193 = 63U;
	uint32_t x194 = UINT32_MAX;
	uint64_t x195 = 89138363538405202LLU;
	int64_t x196 = INT64_MIN;
	uint64_t t41 = 3301LLU;

    t41 = (x193/(x194^(x195|x196)));

    if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x197 = -294272414LL;
	uint32_t x198 = 3640U;
	uint8_t x199 = UINT8_MAX;
	uint16_t x200 = 6239U;
	volatile int64_t t42 = -7768334107446LL;

    t42 = (x197/(x198^(x199|x200)));

    if (t42 != -50466LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x201 = INT16_MIN;
	uint16_t x203 = 28862U;
	volatile uint32_t x204 = 25806884U;
	uint32_t t43 = 24440199U;

    t43 = (x201/(x202^(x203|x204)));

    if (t43 != 166U) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x206 = INT8_MAX;
	volatile int64_t x207 = 0LL;
	volatile uint64_t x208 = UINT64_MAX;
	uint64_t t44 = 3120726106460LLU;

    t44 = (x205/(x206^(x207|x208)));

    if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int32_t x214 = -1;
	uint16_t x216 = 1U;

    t45 = (x213/(x214^(x215|x216)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x217 = 74U;
	int16_t x219 = INT16_MAX;
	int64_t x220 = 482655314LL;

    t46 = (x217/(x218^(x219|x220)));

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x223 = -16;
	uint64_t x224 = 216522621315000LLU;

    t47 = (x221/(x222^(x223|x224)));

    if (t47 != 2635249153387070666LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint64_t x229 = UINT64_MAX;
	uint64_t x230 = 5858410882LLU;
	uint64_t x231 = 53662240LLU;
	static uint64_t x232 = UINT64_MAX;
	volatile uint64_t t48 = 2434025964040359LLU;

    t48 = (x229/(x230^(x231|x232)));

    if (t48 != 1LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint16_t x233 = 38U;
	int32_t x234 = 17512;
	static int32_t x235 = -9162;
	volatile int64_t x236 = -1LL;
	volatile int64_t t49 = 22536893894LL;

    t49 = (x233/(x234^(x235|x236)));

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x237 = -1;
	int64_t x238 = INT64_MAX;
	volatile int32_t x239 = -6924663;
	int8_t x240 = 44;

    t50 = (x237/(x238^(x239|x240)));

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint8_t x241 = UINT8_MAX;
	uint8_t x242 = 3U;
	int32_t x243 = -1;
	static int32_t t51 = -2446;

    t51 = (x241/(x242^(x243|x244)));

    if (t51 != -63) { NG(); } else { ; }
	
}

void f52(void) {
    	static int32_t x250 = -1;
	uint8_t x251 = 0U;
	int32_t t52 = -2597346;

    t52 = (x249/(x250^(x251|x252)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x253 = INT16_MAX;
	volatile uint16_t x254 = 7U;
	int16_t x255 = -2;
	int16_t x256 = 14299;
	int32_t t53 = -217145272;

    t53 = (x253/(x254^(x255|x256)));

    if (t53 != -4095) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x257 = 86501;
	int64_t x258 = 2801269297441LL;
	int8_t x259 = INT8_MIN;
	uint8_t x260 = UINT8_MAX;
	volatile int64_t t54 = 800762385LL;

    t54 = (x257/(x258^(x259|x260)));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile uint32_t x262 = 12U;
	int32_t x263 = -1;
	int16_t x264 = 12;
	uint32_t t55 = 1147784903U;

    t55 = (x261/(x262^(x263|x264)));

    if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x265 = 1LL;
	int16_t x268 = INT16_MAX;
	static int64_t t56 = -648403946483LL;

    t56 = (x265/(x266^(x267|x268)));

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile uint16_t x269 = 12049U;
	int16_t x270 = INT16_MIN;
	volatile int32_t x271 = -1823350;
	int64_t x272 = INT64_MIN;
	static int64_t t57 = -1023012995520079224LL;

    t57 = (x269/(x270^(x271|x272)));

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x277 = -742;
	uint16_t x279 = UINT16_MAX;
	int64_t x280 = 22LL;
	int64_t t58 = 20125863113529LL;

    t58 = (x277/(x278^(x279|x280)));

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x282 = INT8_MAX;
	uint64_t x284 = 713427278558294036LLU;

    t59 = (x281/(x282^(x283|x284)));

    if (t59 != 25LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static int64_t x285 = INT64_MIN;
	static int16_t x286 = -192;
	int16_t x288 = INT16_MIN;
	int64_t t60 = 1057294284527928663LL;

    t60 = (x285/(x286^(x287|x288)));

    if (t60 != -283116582873558LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x289 = 2997LLU;
	int8_t x290 = 3;
	int8_t x291 = 9;
	uint8_t x292 = UINT8_MAX;
	uint64_t t61 = 437829111LLU;

    t61 = (x289/(x290^(x291|x292)));

    if (t61 != 11LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x293 = 9;
	int32_t x294 = 83489;
	uint32_t x295 = 25U;
	volatile uint32_t t62 = 1956486U;

    t62 = (x293/(x294^(x295|x296)));

    if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x297 = 116LLU;
	int16_t x299 = 0;

    t63 = (x297/(x298^(x299|x300)));

    if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint32_t x301 = UINT32_MAX;
	int16_t x302 = INT16_MIN;
	uint8_t x304 = 1U;
	volatile int64_t t64 = -2749954697919508LL;

    t64 = (x301/(x302^(x303|x304)));

    if (t64 != 131076LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x306 = UINT16_MAX;
	static int32_t x307 = -17683499;
	static uint32_t x308 = 216U;
	static int64_t t65 = -10998915698989LL;

    t65 = (x305/(x306^(x307|x308)));

    if (t65 != -2156340231LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x309 = 51U;
	int8_t x311 = INT8_MIN;
	volatile uint8_t x312 = 0U;
	int32_t t66 = -551004;

    t66 = (x309/(x310^(x311|x312)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x313 = UINT64_MAX;
	volatile int8_t x314 = -4;
	uint64_t x315 = UINT64_MAX;
	int8_t x316 = 1;
	static uint64_t t67 = 0LLU;

    t67 = (x313/(x314^(x315|x316)));

    if (t67 != 6148914691236517205LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x318 = -16;
	volatile int32_t t68 = 2285;

    t68 = (x317/(x318^(x319|x320)));

    if (t68 != 536870911) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x321 = -1;
	int32_t x322 = INT32_MIN;
	volatile uint32_t x323 = 1201U;
	static uint8_t x324 = 55U;
	uint32_t t69 = 8018479U;

    t69 = (x321/(x322^(x323|x324)));

    if (t69 != 1U) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x325 = INT32_MIN;
	uint8_t x326 = 60U;
	static int64_t x327 = INT64_MAX;
	volatile int64_t t70 = 4603652374764442LL;

    t70 = (x325/(x326^(x327|x328)));

    if (t70 != 35204649LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint8_t x333 = 2U;
	uint8_t x334 = UINT8_MAX;
	static volatile int8_t x335 = 0;
	uint16_t x336 = 0U;
	volatile int32_t t71 = 128354074;

    t71 = (x333/(x334^(x335|x336)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x338 = INT64_MAX;
	int16_t x340 = 14;

    t72 = (x337/(x338^(x339|x340)));

    if (t72 != 1LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x346 = UINT16_MAX;
	static uint32_t x348 = 27930282U;
	volatile uint32_t t73 = 864253325U;

    t73 = (x345/(x346^(x347|x348)));

    if (t73 != 1U) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x349 = 6;
	int8_t x350 = 11;
	int16_t x351 = INT16_MIN;
	volatile uint32_t x352 = 2098671223U;
	volatile uint32_t t74 = 225984332U;

    t74 = (x349/(x350^(x351|x352)));

    if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x353 = INT16_MIN;
	int32_t x355 = -1;
	static int32_t x356 = INT32_MIN;
	volatile int64_t t75 = 898436758203612791LL;

    t75 = (x353/(x354^(x355|x356)));

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x357 = -14;
	volatile uint8_t x358 = UINT8_MAX;
	int8_t x359 = -25;
	static uint32_t x360 = 325U;
	uint32_t t76 = 1885561340U;

    t76 = (x357/(x358^(x359|x360)));

    if (t76 != 1U) { NG(); } else { ; }
	
}

void f77(void) {
    	static int64_t x361 = INT64_MIN;
	int16_t x362 = 362;
	static int16_t x363 = 37;
	static volatile uint8_t x364 = UINT8_MAX;
	int64_t t77 = -3667LL;

    t77 = (x361/(x362^(x363|x364)));

    if (t77 != -22773758115690804LL) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int8_t x366 = 0;
	int64_t x367 = INT64_MAX;
	int64_t x368 = -49LL;
	uint64_t t78 = 403663102144558040LLU;

    t78 = (x365/(x366^(x367|x368)));

    if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	static int16_t x379 = -3;
	int64_t t79 = 6115636LL;

    t79 = (x377/(x378^(x379|x380)));

    if (t79 != 718219283355768LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x381 = -23;
	uint64_t x382 = 2718577330072505736LLU;
	volatile int64_t x383 = 20LL;
	static uint32_t x384 = 645654784U;
	static volatile uint64_t t80 = 1666210LLU;

    t80 = (x381/(x382^(x383|x384)));

    if (t80 != 6LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	static int16_t x385 = INT16_MIN;
	int8_t x386 = INT8_MIN;
	static uint16_t x387 = 4805U;
	uint16_t x388 = 247U;

    t81 = (x385/(x386^(x387|x388)));

    if (t81 != 6) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x391 = -12;
	int64_t x392 = -1LL;
	volatile int64_t t82 = -202858726LL;

    t82 = (x389/(x390^(x391|x392)));

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int64_t x393 = 10746LL;
	static volatile uint64_t x394 = 783180690LLU;
	volatile int64_t x395 = INT64_MIN;
	volatile int32_t x396 = INT32_MIN;
	volatile uint64_t t83 = 42647184581416176LLU;

    t83 = (x393/(x394^(x395|x396)));

    if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int64_t x397 = INT64_MIN;
	int8_t x398 = -27;
	int64_t x400 = -1LL;
	volatile int64_t t84 = -112450882560457982LL;

    t84 = (x397/(x398^(x399|x400)));

    if (t84 != -354745078340568300LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x403 = INT32_MIN;
	uint64_t t85 = 98876634LLU;

    t85 = (x401/(x402^(x403|x404)));

    if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint8_t x405 = 1U;
	int64_t x406 = -77130268LL;
	int32_t x408 = -141;
	volatile uint64_t t86 = 250915082767LLU;

    t86 = (x405/(x406^(x407|x408)));

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x413 = -2453LL;
	int64_t x414 = -1LL;
	static int16_t x415 = INT16_MAX;
	static int64_t x416 = INT64_MIN;
	static volatile int64_t t87 = -20LL;

    t87 = (x413/(x414^(x415|x416)));

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int64_t x421 = INT64_MIN;
	int16_t x422 = 2889;
	int8_t x423 = INT8_MIN;

    t88 = (x421/(x422^(x423|x424)));

    if (t88 != 3212599107229110LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x425 = 2358U;
	uint8_t x427 = UINT8_MAX;
	int64_t x428 = INT64_MIN;
	static int64_t t89 = 3273056871031LL;

    t89 = (x425/(x426^(x427|x428)));

    if (t89 != 9LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x429 = 38764LLU;
	static int64_t x430 = INT64_MIN;
	int8_t x431 = -1;
	int64_t x432 = 53048642851277646LL;
	static volatile uint64_t t90 = 4096899906639LLU;

    t90 = (x429/(x430^(x431|x432)));

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x433 = INT16_MIN;
	uint8_t x434 = 0U;
	int16_t x435 = INT16_MIN;
	uint32_t x436 = 0U;
	uint32_t t91 = 231U;

    t91 = (x433/(x434^(x435|x436)));

    if (t91 != 1U) { NG(); } else { ; }
	
}

void f92(void) {
    	static int64_t x437 = INT64_MAX;
	int64_t x438 = INT64_MIN;
	static int8_t x439 = -1;
	volatile int8_t x440 = INT8_MIN;
	volatile int64_t t92 = 66888317228667313LL;

    t92 = (x437/(x438^(x439|x440)));

    if (t92 != 1LL) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int64_t x441 = INT64_MAX;
	uint8_t x442 = 25U;
	uint32_t x443 = 422723U;
	int16_t x444 = 0;
	volatile int64_t t93 = 2979251612131491LL;

    t93 = (x441/(x442^(x443|x444)));

    if (t93 != 21817762999188LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x445 = UINT32_MAX;
	int32_t x446 = INT32_MIN;
	volatile int8_t x447 = INT8_MIN;
	static int8_t x448 = 14;

    t94 = (x445/(x446^(x447|x448)));

    if (t94 != 2U) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int16_t x449 = 12;
	uint32_t x451 = 2964857U;
	uint8_t x452 = 20U;
	volatile uint32_t t95 = 222287185U;

    t95 = (x449/(x450^(x451|x452)));

    if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x453 = INT64_MIN;
	volatile int64_t x454 = INT64_MIN;
	int32_t x455 = INT32_MAX;
	uint16_t x456 = 2U;
	volatile int64_t t96 = -239550LL;

    t96 = (x453/(x454^(x455|x456)));

    if (t96 != 1LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint8_t x457 = 51U;
	volatile int32_t x458 = 3371;
	int8_t x459 = INT8_MIN;
	int32_t x460 = -733;

    t97 = (x457/(x458^(x459|x460)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint16_t x463 = 3U;
	int8_t x464 = -1;
	static volatile int32_t t98 = 51827428;

    t98 = (x461/(x462^(x463|x464)));

    if (t98 != -482) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile int16_t x465 = INT16_MAX;
	volatile int32_t x466 = INT32_MIN;
	volatile int64_t x467 = -24LL;
	volatile uint64_t t99 = 12LLU;

    t99 = (x465/(x466^(x467|x468)));

    if (t99 != 0LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint64_t x469 = 3LLU;
	int8_t x471 = INT8_MIN;
	volatile uint64_t t100 = 766606133485718LLU;

    t100 = (x469/(x470^(x471|x472)));

    if (t100 != 0LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static int32_t x473 = 14;
	uint64_t x474 = UINT64_MAX;
	volatile uint64_t t101 = 337979234800LLU;

    t101 = (x473/(x474^(x475|x476)));

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x478 = UINT16_MAX;
	int16_t x479 = -1;
	volatile uint64_t x480 = UINT64_MAX;
	volatile uint64_t t102 = 416226LLU;

    t102 = (x477/(x478^(x479|x480)));

    if (t102 != 0LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint32_t x482 = 297793U;
	volatile int32_t x483 = INT32_MIN;
	static int32_t x484 = -1;

    t103 = (x481/(x482^(x483|x484)));

    if (t103 != 1U) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint16_t x485 = UINT16_MAX;
	uint32_t x487 = 529692677U;
	uint32_t t104 = 1U;

    t104 = (x485/(x486^(x487|x488)));

    if (t104 != 0U) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x493 = -1;
	int16_t x494 = INT16_MIN;
	volatile int64_t x495 = -279946194603826784LL;
	volatile uint8_t x496 = 95U;
	int64_t t105 = -7043640050735843LL;

    t105 = (x493/(x494^(x495|x496)));

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint32_t x498 = 57U;
	volatile int32_t x499 = INT32_MIN;
	uint32_t x500 = 17140940U;

    t106 = (x497/(x498^(x499|x500)));

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x501 = -1;
	int8_t x502 = 0;
	static uint32_t x504 = 68U;
	volatile uint32_t t107 = 1188189441U;

    t107 = (x501/(x502^(x503|x504)));

    if (t107 != 1U) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x505 = 0;
	static int64_t x506 = INT64_MIN;
	int64_t x507 = -1LL;
	uint8_t x508 = 73U;
	int64_t t108 = -65149865752654LL;

    t108 = (x505/(x506^(x507|x508)));

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x509 = INT64_MIN;
	int64_t x510 = -561LL;
	int8_t x511 = 14;
	static int32_t x512 = -1;
	int64_t t109 = -696789117410756758LL;

    t109 = (x509/(x510^(x511|x512)));

    if (t109 != -16470307208669242LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x513 = UINT16_MAX;
	volatile uint16_t x514 = UINT16_MAX;
	int64_t x515 = -1LL;
	int8_t x516 = INT8_MIN;
	static volatile int64_t t110 = 64940897LL;

    t110 = (x513/(x514^(x515|x516)));

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x517 = -21;
	volatile uint64_t x518 = 243618639196LLU;
	volatile uint64_t t111 = 203LLU;

    t111 = (x517/(x518^(x519|x520)));

    if (t111 != 1LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile uint32_t x522 = 9105U;
	static int8_t x523 = -22;
	volatile int64_t t112 = 123772372330LL;

    t112 = (x521/(x522^(x523|x524)));

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x525 = INT8_MIN;
	int8_t x526 = -15;
	int8_t x527 = INT8_MIN;
	volatile int64_t x528 = -1LL;
	volatile int64_t t113 = 712665488677638LL;

    t113 = (x525/(x526^(x527|x528)));

    if (t113 != -9LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x534 = 5110;
	uint8_t x535 = 67U;
	volatile int16_t x536 = 10754;

    t114 = (x533/(x534^(x535|x536)));

    if (t114 != -2) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int32_t x538 = 119880;
	int32_t x539 = 19243;
	static uint16_t x540 = 405U;
	int32_t t115 = 96;

    t115 = (x537/(x538^(x539|x540)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x541 = INT16_MIN;
	volatile int64_t x542 = INT64_MIN;
	int8_t x543 = 4;
	int16_t x544 = INT16_MAX;
	int64_t t116 = -16LL;

    t116 = (x541/(x542^(x543|x544)));

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x545 = 181805476802LL;
	volatile int64_t x546 = INT64_MAX;
	int16_t x547 = 393;
	int32_t x548 = INT32_MIN;
	int64_t t117 = 41LL;

    t117 = (x545/(x546^(x547|x548)));

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x549 = -3;
	volatile int64_t x550 = INT64_MIN;
	int32_t x551 = INT32_MIN;
	volatile uint32_t x552 = 166U;

    t118 = (x549/(x550^(x551|x552)));

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x554 = INT64_MIN;
	int32_t x555 = 1846;
	int64_t x556 = INT64_MIN;

    t119 = (x553/(x554^(x555|x556)));

    if (t119 != -1163317LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x561 = -7;
	uint32_t x562 = 247798138U;
	uint16_t x563 = UINT16_MAX;
	static uint32_t t120 = 1322194U;

    t120 = (x561/(x562^(x563|x564)));

    if (t120 != 1U) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int32_t x565 = INT32_MIN;
	uint8_t x566 = 14U;
	int32_t x567 = INT32_MAX;
	static uint32_t x568 = 3590324U;
	volatile uint32_t t121 = 36U;

    t121 = (x565/(x566^(x567|x568)));

    if (t121 != 1U) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x569 = UINT32_MAX;
	int32_t x570 = INT32_MIN;
	int64_t x571 = -351648696LL;
	static volatile int64_t t122 = 34709656896824707LL;

    t122 = (x569/(x570^(x571|x572)));

    if (t122 != 2LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x573 = UINT8_MAX;
	int8_t x574 = INT8_MAX;
	uint32_t x575 = 3064969U;
	int32_t x576 = -60;
	uint32_t t123 = 0U;

    t123 = (x573/(x574^(x575|x576)));

    if (t123 != 0U) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x581 = 57823U;
	uint8_t x582 = 6U;
	uint64_t x583 = 525302689884LLU;
	volatile uint64_t t124 = 67863196472LLU;

    t124 = (x581/(x582^(x583|x584)));

    if (t124 != 0LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int8_t x585 = INT8_MIN;
	uint64_t x586 = UINT64_MAX;
	int32_t x588 = INT32_MAX;
	uint64_t t125 = 38LLU;

    t125 = (x585/(x586^(x587|x588)));

    if (t125 != 1LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x590 = -10184LL;
	volatile int16_t x591 = -1305;
	uint16_t x592 = UINT16_MAX;

    t126 = (x589/(x590^(x591|x592)));

    if (t126 != -905761763414983LL) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint64_t x594 = 85327906802993LLU;
	uint8_t x596 = 94U;
	uint64_t t127 = 16822LLU;

    t127 = (x593/(x594^(x595|x596)));

    if (t127 != 321900LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x597 = INT64_MIN;
	int32_t x598 = INT32_MAX;
	int32_t x599 = INT32_MIN;
	int64_t x600 = -1LL;
	int64_t t128 = 3004866015571870LL;

    t128 = (x597/(x598^(x599|x600)));

    if (t128 != 4294967296LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x601 = -1;
	uint16_t x602 = 13U;
	volatile int32_t x604 = INT32_MIN;
	int32_t t129 = 1;

    t129 = (x601/(x602^(x603|x604)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int32_t x605 = INT32_MIN;
	int64_t x606 = -2532890378LL;
	static int8_t x607 = INT8_MIN;
	volatile int64_t x608 = 89122558980970043LL;
	int64_t t130 = -7101LL;

    t130 = (x605/(x606^(x607|x608)));

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int8_t x609 = INT8_MIN;
	int8_t x610 = 0;
	int64_t x611 = INT64_MAX;
	uint32_t x612 = 27442U;
	volatile int64_t t131 = -22494550969260LL;

    t131 = (x609/(x610^(x611|x612)));

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x613 = 0;
	int8_t x616 = -30;
	volatile int32_t t132 = 0;

    t132 = (x613/(x614^(x615|x616)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x617 = 3;
	int32_t x618 = 0;
	uint64_t x620 = 212540395547LLU;
	static uint64_t t133 = 420603027LLU;

    t133 = (x617/(x618^(x619|x620)));

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x621 = 7U;
	volatile uint8_t x623 = 7U;

    t134 = (x621/(x622^(x623|x624)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint16_t x626 = UINT16_MAX;
	int16_t x627 = INT16_MIN;
	int32_t t135 = 5771;

    t135 = (x625/(x626^(x627|x628)));

    if (t135 != 32768) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x629 = INT16_MIN;
	static int64_t x631 = INT64_MIN;
	uint16_t x632 = 1U;
	volatile int64_t t136 = -926158030327439LL;

    t136 = (x629/(x630^(x631|x632)));

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x633 = INT32_MIN;
	int64_t x634 = -1LL;
	int64_t t137 = -15174078564764LL;

    t137 = (x633/(x634^(x635|x636)));

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static int64_t x638 = -1LL;
	int32_t x639 = INT32_MAX;
	int8_t x640 = 0;
	volatile uint64_t t138 = 10908146728495LLU;

    t138 = (x637/(x638^(x639|x640)));

    if (t138 != 0LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x641 = INT16_MIN;
	int32_t x642 = 2146;
	volatile int8_t x644 = 11;

    t139 = (x641/(x642^(x643|x644)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int64_t x645 = -1LL;
	static int64_t x646 = INT64_MIN;
	int16_t x647 = -43;
	volatile int64_t t140 = -134969641578843203LL;

    t140 = (x645/(x646^(x647|x648)));

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x652 = 1U;
	int64_t t141 = 1LL;

    t141 = (x649/(x650^(x651|x652)));

    if (t141 != 282570142975238LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x653 = 60U;
	int64_t x654 = 1092484691595025LL;
	int64_t x656 = -552347014302998878LL;
	uint64_t t142 = 176631710817LLU;

    t142 = (x653/(x654^(x655|x656)));

    if (t142 != 0LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	static int16_t x657 = -1;
	uint32_t x658 = 41556891U;
	volatile uint32_t t143 = 20U;

    t143 = (x657/(x658^(x659|x660)));

    if (t143 != 1U) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int8_t x661 = INT8_MIN;
	int8_t x662 = -1;
	int8_t x663 = INT8_MAX;
	int32_t x664 = INT32_MIN;
	static int32_t t144 = -229507417;

    t144 = (x661/(x662^(x663|x664)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int16_t x671 = -7750;
	static int8_t x672 = INT8_MIN;
	volatile uint64_t t145 = 6206379764LLU;

    t145 = (x669/(x670^(x671|x672)));

    if (t145 != 0LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x673 = INT16_MIN;
	uint32_t x674 = 514858170U;
	int32_t x675 = INT32_MIN;
	int16_t x676 = -1;
	uint32_t t146 = 339879U;

    t146 = (x673/(x674^(x675|x676)));

    if (t146 != 1U) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x677 = INT16_MAX;
	int8_t x678 = -1;
	int32_t x679 = INT32_MAX;
	int32_t t147 = 509618;

    t147 = (x677/(x678^(x679|x680)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint16_t x682 = UINT16_MAX;
	volatile int64_t x683 = INT64_MIN;
	volatile int64_t x684 = -1LL;

    t148 = (x681/(x682^(x683|x684)));

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x689 = -7LL;
	int32_t x690 = -1;
	int64_t t149 = -1428LL;

    t149 = (x689/(x690^(x691|x692)));

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int32_t x693 = 3661;
	static volatile int64_t x694 = INT64_MIN;
	uint8_t x695 = UINT8_MAX;
	static int64_t x696 = INT64_MIN;
	int64_t t150 = -159011106108324LL;

    t150 = (x693/(x694^(x695|x696)));

    if (t150 != 14LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x697 = -23;
	volatile int8_t x699 = INT8_MIN;
	uint64_t x700 = 106625377007735687LLU;

    t151 = (x697/(x698^(x699|x700)));

    if (t151 != 18246037659455540LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile uint64_t x701 = 6807963326185790LLU;
	volatile int16_t x702 = 1403;
	static uint64_t t152 = 4428233LLU;

    t152 = (x701/(x702^(x703|x704)));

    if (t152 != 217062980684LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x705 = 136714632U;
	static int8_t x706 = INT8_MAX;
	int64_t x707 = INT64_MAX;
	int8_t x708 = INT8_MIN;
	int64_t t153 = -14051857946LL;

    t153 = (x705/(x706^(x707|x708)));

    if (t153 != -1068083LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x709 = INT64_MAX;
	uint64_t x710 = 441258594LLU;
	int32_t x712 = 882167641;
	volatile uint64_t t154 = 9570666LLU;

    t154 = (x709/(x710^(x711|x712)));

    if (t154 != 11734124408LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x713 = -393;
	uint32_t x714 = 176U;
	static int32_t x715 = -1;
	int64_t x716 = INT64_MIN;
	int64_t t155 = 14831458031823LL;

    t155 = (x713/(x714^(x715|x716)));

    if (t155 != 2LL) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x718 = -12;
	uint16_t x719 = 25427U;
	int32_t t156 = 32052;

    t156 = (x717/(x718^(x719|x720)));

    if (t156 != 11) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile int8_t x722 = 0;
	int16_t x723 = INT16_MAX;
	uint16_t x724 = 3U;
	int32_t t157 = -15090529;

    t157 = (x721/(x722^(x723|x724)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x727 = INT8_MAX;
	int32_t x728 = -1;
	volatile int64_t t158 = 11957LL;

    t158 = (x725/(x726^(x727|x728)));

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x730 = 3U;
	int32_t x731 = -1;
	static int16_t x732 = -1;
	int32_t t159 = -6807785;

    t159 = (x729/(x730^(x731|x732)));

    if (t159 != -536870911) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x733 = 86U;
	int8_t x734 = INT8_MAX;
	int64_t x735 = INT64_MIN;
	int64_t t160 = 35LL;

    t160 = (x733/(x734^(x735|x736)));

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x739 = INT16_MIN;
	uint32_t x740 = 50U;
	uint32_t t161 = 27684235U;

    t161 = (x737/(x738^(x739|x740)));

    if (t161 != 0U) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x741 = INT64_MIN;
	uint8_t x742 = 47U;
	static int8_t x744 = INT8_MIN;
	static volatile int64_t t162 = -230LL;

    t162 = (x741/(x742^(x743|x744)));

    if (t162 != 180850432095191682LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x745 = -8078LL;
	int32_t x746 = INT32_MIN;
	static int64_t x747 = -1LL;
	static int64_t x748 = -17002053205782LL;

    t163 = (x745/(x746^(x747|x748)));

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int64_t x749 = INT64_MAX;
	static uint32_t x750 = 1494U;
	uint16_t x751 = 10757U;
	volatile int8_t x752 = INT8_MIN;
	volatile int64_t t164 = 1828LL;

    t164 = (x749/(x750^(x751|x752)));

    if (t164 != 2147484374LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x753 = 11U;
	int32_t x754 = INT32_MIN;
	int64_t x755 = 63110949944186730LL;
	int16_t x756 = -750;
	int64_t t165 = 1315019352002LL;

    t165 = (x753/(x754^(x755|x756)));

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x757 = UINT8_MAX;
	static int32_t x758 = -4;
	int64_t t166 = 600204799158LL;

    t166 = (x757/(x758^(x759|x760)));

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x761 = 13326549;
	volatile uint16_t x762 = UINT16_MAX;
	uint16_t x764 = 3864U;
	int32_t t167 = 0;

    t167 = (x761/(x762^(x763|x764)));

    if (t167 != -363) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x765 = INT16_MIN;
	static uint16_t x766 = 2399U;
	int16_t x767 = -1;
	int8_t x768 = INT8_MIN;
	int32_t t168 = -6;

    t168 = (x765/(x766^(x767|x768)));

    if (t168 != 13) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x769 = -1454005;
	static uint32_t x770 = 212490U;
	int32_t x771 = -1;
	uint32_t t169 = 7624U;

    t169 = (x769/(x770^(x771|x772)));

    if (t169 != 0U) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x773 = INT8_MIN;
	volatile int8_t x774 = INT8_MAX;
	int8_t x775 = INT8_MAX;
	int8_t x776 = -1;
	volatile int32_t t170 = 1;

    t170 = (x773/(x774^(x775|x776)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile uint32_t x778 = 5582560U;
	volatile int8_t x779 = INT8_MIN;
	uint8_t x780 = UINT8_MAX;
	uint32_t t171 = 5U;

    t171 = (x777/(x778^(x779|x780)));

    if (t171 != 0U) { NG(); } else { ; }
	
}

void f172(void) {
    	static int16_t x781 = -9841;
	uint16_t x783 = UINT16_MAX;
	int32_t t172 = -2817549;

    t172 = (x781/(x782^(x783|x784)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x785 = INT8_MIN;
	uint16_t x787 = 19U;
	uint64_t x788 = 9342354LLU;
	volatile uint64_t t173 = 19706987170LLU;

    t173 = (x785/(x786^(x787|x788)));

    if (t173 != 1974536514683LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x791 = 1;
	int16_t x792 = -1;
	volatile int32_t t174 = -211165;

    t174 = (x789/(x790^(x791|x792)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int16_t x793 = -2114;
	int16_t x795 = -639;
	static volatile uint64_t x796 = UINT64_MAX;
	uint64_t t175 = 1201923LLU;

    t175 = (x793/(x794^(x795|x796)));

    if (t175 != 1LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x798 = UINT8_MAX;
	uint64_t x799 = UINT64_MAX;
	int64_t x800 = INT64_MIN;
	static uint64_t t176 = 70043LLU;

    t176 = (x797/(x798^(x799|x800)));

    if (t176 != 0LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int64_t x801 = -354192140757028513LL;
	volatile int32_t x802 = -260027;
	int64_t x804 = INT64_MAX;
	volatile int64_t t177 = 3439298572427732249LL;

    t177 = (x801/(x802^(x803|x804)));

    if (t177 != -1362141250325LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int16_t x805 = 3571;
	int8_t x806 = INT8_MIN;
	uint8_t x807 = 0U;
	uint16_t x808 = 3821U;
	int32_t t178 = 55;

    t178 = (x805/(x806^(x807|x808)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x809 = INT16_MIN;
	uint8_t x812 = 103U;
	static volatile int32_t t179 = 0;

    t179 = (x809/(x810^(x811|x812)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int64_t x813 = INT64_MIN;
	uint8_t x814 = 8U;
	int8_t x815 = INT8_MIN;
	int64_t x816 = -22421LL;
	volatile int64_t t180 = -58937899LL;

    t180 = (x813/(x814^(x815|x816)));

    if (t180 != 318047311615681924LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x817 = 123U;
	int32_t x818 = INT32_MIN;
	static int32_t x819 = INT32_MAX;
	volatile uint16_t x820 = 10U;

    t181 = (x817/(x818^(x819|x820)));

    if (t181 != -123) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x821 = INT16_MIN;
	volatile uint16_t x823 = 30U;
	volatile int32_t x824 = -995418;
	int32_t t182 = -15698;

    t182 = (x821/(x822^(x823|x824)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x825 = -1LL;
	int32_t x826 = INT32_MIN;
	int8_t x827 = -4;
	int16_t x828 = -5;
	static volatile int64_t t183 = 31001875012LL;

    t183 = (x825/(x826^(x827|x828)));

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x829 = INT8_MIN;
	volatile int8_t x830 = INT8_MAX;
	uint16_t x831 = UINT16_MAX;
	int16_t x832 = -7202;
	int32_t t184 = 5261945;

    t184 = (x829/(x830^(x831|x832)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x834 = INT32_MAX;
	uint16_t x836 = 5191U;
	volatile int32_t t185 = 771;

    t185 = (x833/(x834^(x835|x836)));

    if (t185 != -6) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int8_t x837 = INT8_MIN;
	int16_t x838 = INT16_MIN;
	static int64_t t186 = 2923358303782828LL;

    t186 = (x837/(x838^(x839|x840)));

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x842 = -1;
	volatile int16_t x843 = INT16_MAX;
	int32_t x844 = INT32_MAX;
	uint32_t t187 = 120186U;

    t187 = (x841/(x842^(x843|x844)));

    if (t187 != 1U) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x846 = -3881;
	int8_t x847 = -54;
	int8_t x848 = 0;

    t188 = (x845/(x846^(x847|x848)));

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x849 = -1264264;
	int64_t x851 = 0LL;
	uint8_t x852 = UINT8_MAX;
	int64_t t189 = -1LL;

    t189 = (x849/(x850^(x851|x852)));

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x854 = INT8_MIN;
	uint64_t x855 = 238728LLU;
	static int64_t x856 = 1LL;

    t190 = (x853/(x854^(x855|x856)));

    if (t190 != 0LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x863 = INT8_MIN;

    t191 = (x861/(x862^(x863|x864)));

    if (t191 != 1U) { NG(); } else { ; }
	
}

void f192(void) {
    	static int32_t x865 = INT32_MIN;
	int64_t x866 = -1LL;
	volatile int16_t x867 = 10611;
	uint64_t x868 = 0LLU;

    t192 = (x865/(x866^(x867|x868)));

    if (t192 != 0LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x869 = INT64_MAX;
	int32_t x870 = INT32_MIN;
	uint16_t x872 = 33U;
	static int64_t t193 = 102562262849280318LL;

    t193 = (x869/(x870^(x871|x872)));

    if (t193 != 4294967298LL) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile int16_t x873 = INT16_MIN;
	int8_t x875 = -1;
	uint64_t x876 = UINT64_MAX;
	volatile uint64_t t194 = 298LLU;

    t194 = (x873/(x874^(x875|x876)));

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int8_t x877 = 6;
	uint32_t x878 = 650U;
	int16_t x879 = INT16_MAX;
	int64_t x880 = -109608887378948LL;
	int64_t t195 = 56426998LL;

    t195 = (x877/(x878^(x879|x880)));

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static int64_t x881 = INT64_MAX;
	int64_t x882 = -7222LL;
	static uint8_t x883 = UINT8_MAX;
	static int16_t x884 = INT16_MIN;
	volatile int64_t t196 = -1LL;

    t196 = (x881/(x882^(x883|x884)));

    if (t196 != 363167777172688LL) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int32_t x885 = -794133218;
	int8_t x886 = INT8_MIN;
	int64_t x887 = 1539678351LL;
	static uint64_t x888 = UINT64_MAX;
	volatile uint64_t t197 = 17054224346LLU;

    t197 = (x885/(x886^(x887|x888)));

    if (t197 != 145249953330042664LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x889 = -1;
	static volatile uint8_t x890 = 0U;
	volatile uint16_t x891 = 15961U;
	int64_t x892 = -1LL;
	int64_t t198 = 219LL;

    t198 = (x889/(x890^(x891|x892)));

    if (t198 != 1LL) { NG(); } else { ; }
	
}

void f199(void) {
    	static int64_t x893 = INT64_MIN;
	int64_t x894 = -101986659123LL;
	static int16_t x895 = INT16_MAX;
	uint32_t x896 = 38845U;
	int64_t t199 = 63LL;

    t199 = (x893/(x894^(x895|x896)));

    if (t199 != 90437093LL) { NG(); } else { ; }
	
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

