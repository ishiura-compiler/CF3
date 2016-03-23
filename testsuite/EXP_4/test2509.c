
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

static int16_t x1 = INT16_MAX;
int8_t x4 = 2;
static uint8_t x7 = UINT8_MAX;
int64_t t2 = -70LL;
volatile int64_t t3 = 258LL;
int64_t x25 = 1300902LL;
int64_t t5 = 729LL;
uint32_t x29 = UINT32_MAX;
int8_t x31 = INT8_MIN;
static int32_t x32 = -358;
static int8_t x39 = -12;
static volatile int32_t t8 = 31;
volatile int32_t x41 = -1;
int64_t x46 = 5629510994288LL;
volatile uint64_t t11 = 330712LLU;
static int8_t x58 = INT8_MAX;
int8_t x78 = INT8_MIN;
int8_t x80 = -1;
uint16_t x84 = UINT16_MAX;
volatile uint64_t t17 = 814108257749678070LLU;
int16_t x92 = 59;
volatile uint8_t x94 = 1U;
int32_t x96 = -1;
uint64_t t20 = 3468LLU;
uint64_t t21 = 119659640285399231LLU;
int16_t x104 = INT16_MIN;
static uint64_t x105 = 11761238462LLU;
uint64_t t23 = 35840453359038372LLU;
int64_t x109 = INT64_MAX;
uint64_t x111 = UINT64_MAX;
int64_t x114 = 58LL;
int16_t x121 = INT16_MIN;
volatile int64_t x123 = 76790333916189563LL;
volatile int64_t x132 = INT64_MAX;
volatile int64_t t28 = -210706118174LL;
int32_t x135 = 62;
volatile uint64_t t33 = 4657LLU;
static uint64_t x159 = UINT64_MAX;
uint16_t x166 = UINT16_MAX;
uint32_t t35 = 20U;
volatile uint8_t x179 = 2U;
static uint8_t x180 = 0U;
uint8_t x182 = 41U;
static uint64_t x187 = 124834307443603353LLU;
volatile uint64_t t40 = 421354990385LLU;
int8_t x190 = -1;
int64_t x192 = INT64_MIN;
static int8_t x200 = INT8_MAX;
int16_t x206 = INT16_MAX;
int8_t x208 = INT8_MIN;
volatile int16_t x210 = -1;
int64_t x211 = INT64_MIN;
static int16_t x213 = INT16_MIN;
volatile int8_t x217 = INT8_MIN;
uint32_t t47 = 333338U;
int64_t x238 = -1LL;
uint8_t x251 = 3U;
static volatile int32_t x254 = INT32_MIN;
uint64_t t54 = 2833219986504LLU;
int8_t x261 = INT8_MIN;
uint64_t t56 = 512547728LLU;
uint8_t x266 = 37U;
int32_t t57 = 566310284;
int8_t x271 = INT8_MIN;
volatile uint64_t t58 = 609629209102910LLU;
static volatile uint32_t t59 = 18373001U;
int16_t x278 = 0;
uint16_t x280 = 25U;
int8_t x283 = 15;
int16_t x286 = INT16_MIN;
uint64_t x287 = UINT64_MAX;
int64_t t63 = 4LL;
int16_t x296 = 26;
int32_t t64 = -128800604;
int32_t t65 = -155548765;
uint64_t x313 = 339300LLU;
uint64_t t69 = 622055618224624807LLU;
int16_t x326 = -610;
int64_t x345 = -1LL;
uint16_t x347 = 99U;
int8_t x349 = INT8_MIN;
int8_t x370 = INT8_MIN;
uint64_t x371 = UINT64_MAX;
static uint32_t x374 = UINT32_MAX;
volatile uint16_t x378 = UINT16_MAX;
int32_t x398 = -1;
uint64_t t86 = 70155276849LLU;
static volatile int32_t x403 = 106589940;
volatile int16_t x404 = -821;
volatile uint64_t t87 = 44769223LLU;
int16_t x409 = -1;
int8_t x413 = INT8_MIN;
volatile uint8_t x415 = UINT8_MAX;
int64_t x424 = -1LL;
int64_t x427 = INT64_MIN;
static volatile int64_t t92 = 223LL;
uint16_t x430 = UINT16_MAX;
int64_t x431 = INT64_MIN;
volatile uint64_t x433 = UINT64_MAX;
int32_t x441 = -1;
static volatile int32_t t96 = 2;
int64_t x449 = 12033283LL;
volatile int16_t x451 = INT16_MAX;
volatile int64_t x457 = -1LL;
int8_t x459 = -2;
int16_t x465 = 4764;
static uint8_t x467 = 0U;
uint64_t x473 = UINT64_MAX;
int64_t t103 = -24364810LL;
uint8_t x483 = 120U;
uint64_t x484 = 439LLU;
static uint8_t x492 = 16U;
static uint64_t t105 = 9LLU;
int32_t x510 = INT32_MIN;
static uint64_t t110 = 30330LLU;
int16_t x518 = 0;
volatile int32_t x522 = 1496692;
int32_t x524 = 1;
volatile uint64_t t117 = 90795936145LLU;
int8_t x558 = INT8_MIN;
uint32_t x560 = 198595702U;
volatile int64_t t119 = -1974806241452LL;
int8_t x568 = INT8_MIN;
static uint8_t x570 = 19U;
int16_t x579 = INT16_MIN;
static volatile uint64_t t122 = 212LLU;
int32_t t124 = 686625184;
static int32_t x589 = 6619812;
uint64_t x590 = 17891887504LLU;
int64_t x592 = INT64_MIN;
volatile uint64_t t125 = 27591257824272632LLU;
static volatile int8_t x593 = 1;
static uint32_t x602 = UINT32_MAX;
volatile uint64_t x604 = 48378056LLU;
int64_t x605 = -1LL;
uint8_t x606 = UINT8_MAX;
int64_t x607 = INT64_MIN;
static volatile int64_t t130 = -3231221285197708766LL;
static volatile int16_t x619 = INT16_MIN;
uint32_t x625 = 437U;
int8_t x635 = -1;
static volatile int32_t t138 = -386428965;
volatile int8_t x672 = INT8_MAX;
int32_t x681 = 4;
volatile uint8_t x686 = 2U;
static uint8_t x692 = 7U;
static int16_t x697 = INT16_MAX;
volatile uint8_t x700 = 19U;
volatile int64_t t150 = -3347835799505478LL;
int16_t x702 = 1342;
int8_t x703 = -1;
uint8_t x714 = 22U;
volatile int16_t x721 = INT16_MIN;
int8_t x725 = 1;
volatile uint32_t x726 = UINT32_MAX;
volatile uint8_t x728 = 42U;
volatile int64_t t158 = 6509156997548LL;
uint8_t x737 = UINT8_MAX;
volatile int32_t t159 = 63;
int16_t x750 = -1741;
static int8_t x751 = -1;
int8_t x754 = -1;
volatile int64_t t163 = 14329332180211179LL;
uint64_t x759 = 2010632LLU;
uint8_t x765 = 9U;
int8_t x771 = INT8_MAX;
uint16_t x772 = UINT16_MAX;
volatile int32_t t166 = 316473;
volatile uint16_t x781 = 563U;
int16_t x784 = -7558;
int32_t t169 = -174632;
uint8_t x790 = 10U;
volatile int8_t x794 = INT8_MIN;
uint8_t x796 = 23U;
volatile int32_t t173 = -53;
int64_t x817 = 29842637935890LL;
static int8_t x818 = -1;
uint16_t x820 = UINT16_MAX;
uint32_t x821 = UINT32_MAX;
static int32_t x823 = INT32_MAX;
static volatile uint64_t t178 = 58262733378258959LLU;
int64_t x829 = INT64_MAX;
uint64_t x836 = 35349793165LLU;
static int16_t x842 = INT16_MIN;
uint8_t x843 = 113U;
volatile int16_t x846 = 3;
volatile uint64_t x849 = UINT64_MAX;
uint16_t x850 = 609U;
int8_t x870 = INT8_MIN;
volatile int16_t x872 = INT16_MIN;
int32_t t186 = 33166664;
uint32_t x878 = 227225U;
uint16_t x879 = 5349U;
int16_t x880 = INT16_MIN;
int8_t x889 = INT8_MAX;
uint8_t x890 = 126U;
uint64_t t191 = 27216438229588916LLU;
volatile uint64_t x912 = UINT64_MAX;
int64_t x915 = INT64_MIN;
int8_t x920 = INT8_MIN;
static volatile int32_t x922 = 251317;
uint64_t x926 = UINT64_MAX;
int32_t x927 = INT32_MAX;
volatile int64_t x932 = -5905LL;


void f0(void) {
    	int64_t x2 = INT64_MIN;
	uint64_t x3 = 76LLU;
	static uint64_t t0 = 6192895335LLU;

    t0 = (x1*(x2&(x3|x4)));

    if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = 1655;
	static int32_t x6 = INT32_MAX;
	int8_t x8 = 15;
	volatile int32_t t1 = -173988577;

    t1 = (x5*(x6&(x7|x8)));

    if (t1 != 422025) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x13 = 11;
	int64_t x14 = -1LL;
	volatile int64_t x15 = 69200707451LL;
	volatile int16_t x16 = -16056;

    t2 = (x13*(x14&(x15|x16)));

    if (t2 != -1463LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x17 = -1;
	static int64_t x18 = -1LL;
	int32_t x19 = INT32_MIN;
	static int32_t x20 = 72689663;

    t3 = (x17*(x18&(x19|x20)));

    if (t3 != 2074793985LL) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x21 = 0;
	int16_t x22 = 132;
	uint16_t x23 = 502U;
	uint32_t x24 = 3152U;
	volatile uint32_t t4 = 0U;

    t4 = (x21*(x22&(x23|x24)));

    if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x26 = INT16_MAX;
	static volatile int8_t x27 = 1;
	int16_t x28 = INT16_MIN;

    t5 = (x25*(x26&(x27|x28)));

    if (t5 != 1300902LL) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint16_t x30 = 287U;
	uint32_t t6 = 9366544U;

    t6 = (x29*(x30&(x31|x32)));

    if (t6 != 4294967014U) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x33 = 24;
	int16_t x34 = INT16_MIN;
	volatile int64_t x35 = -1LL;
	uint32_t x36 = 10U;
	int64_t t7 = 471LL;

    t7 = (x33*(x34&(x35|x36)));

    if (t7 != -786432LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int8_t x37 = INT8_MIN;
	int8_t x38 = INT8_MIN;
	static int32_t x40 = INT32_MAX;

    t8 = (x37*(x38&(x39|x40)));

    if (t8 != 16384) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x42 = 75811U;
	volatile int32_t x43 = INT32_MIN;
	volatile uint64_t x44 = 4278LLU;
	static volatile uint64_t t9 = 4790051275994LLU;

    t9 = (x41*(x42&(x43|x44)));

    if (t9 != 18446744073709551582LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int32_t x45 = 132;
	uint16_t x47 = UINT16_MAX;
	static volatile int16_t x48 = -1;
	int64_t t10 = -6703437205266148LL;

    t10 = (x45*(x46&(x47|x48)));

    if (t10 != 743095451246016LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint8_t x49 = 110U;
	int32_t x50 = 1;
	static uint64_t x51 = 114LLU;
	int8_t x52 = -6;

    t11 = (x49*(x50&(x51|x52)));

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x53 = -1LL;
	volatile int64_t x54 = -1LL;
	int64_t x55 = INT64_MAX;
	int16_t x56 = -66;
	int64_t t12 = 517763LL;

    t12 = (x53*(x54&(x55|x56)));

    if (t12 != 1LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x57 = 28866772786779LLU;
	uint32_t x59 = 1830291U;
	static uint8_t x60 = 39U;
	static volatile uint64_t t13 = 314265256LLU;

    t13 = (x57*(x58&(x59|x60)));

    if (t13 != 1587672503272845LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint64_t x69 = 261870LLU;
	uint8_t x70 = 1U;
	static int32_t x71 = INT32_MIN;
	int16_t x72 = -1;
	volatile uint64_t t14 = 1266LLU;

    t14 = (x69*(x70&(x71|x72)));

    if (t14 != 261870LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x73 = -1;
	int64_t x74 = 1LL;
	static int64_t x75 = 23405949195LL;
	int32_t x76 = 3091;
	static int64_t t15 = 76996410LL;

    t15 = (x73*(x74&(x75|x76)));

    if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x77 = INT8_MAX;
	volatile int32_t x79 = -1;
	int32_t t16 = -5;

    t16 = (x77*(x78&(x79|x80)));

    if (t16 != -16256) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x81 = 1555LLU;
	volatile int16_t x82 = INT16_MIN;
	int64_t x83 = -9LL;

    t17 = (x81*(x82&(x83|x84)));

    if (t17 != 18446744073658597376LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint64_t x85 = 13762627605179LLU;
	int32_t x86 = INT32_MAX;
	int8_t x87 = -2;
	volatile int8_t x88 = -1;
	volatile uint64_t t18 = 2045168325093902LLU;

    t18 = (x85*(x86&(x87|x88)));

    if (t18 != 3333715789973318981LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static int64_t x89 = -1LL;
	volatile uint8_t x90 = 111U;
	uint64_t x91 = UINT64_MAX;
	static uint64_t t19 = 303876754106LLU;

    t19 = (x89*(x90&(x91|x92)));

    if (t19 != 18446744073709551505LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x93 = 47LLU;
	int32_t x95 = 401293;

    t20 = (x93*(x94&(x95|x96)));

    if (t20 != 47LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x97 = UINT32_MAX;
	uint64_t x98 = UINT64_MAX;
	volatile int8_t x99 = INT8_MAX;
	uint64_t x100 = UINT64_MAX;

    t21 = (x97*(x98&(x99|x100)));

    if (t21 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x101 = 322LL;
	int8_t x102 = INT8_MAX;
	uint16_t x103 = 207U;
	volatile int64_t t22 = 3942431532LL;

    t22 = (x101*(x102&(x103|x104)));

    if (t22 != 25438LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x106 = 30657;
	int8_t x107 = -9;
	int64_t x108 = INT64_MAX;

    t23 = (x105*(x106&(x107|x108)));

    if (t23 != 360564287529534LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x110 = INT8_MIN;
	int64_t x112 = INT64_MAX;
	volatile uint64_t t24 = 2017475267836LLU;

    t24 = (x109*(x110&(x111|x112)));

    if (t24 != 128LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x113 = -1;
	static int16_t x115 = INT16_MAX;
	volatile uint64_t x116 = UINT64_MAX;
	volatile uint64_t t25 = 46668812506LLU;

    t25 = (x113*(x114&(x115|x116)));

    if (t25 != 18446744073709551558LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x122 = -1;
	uint64_t x124 = 855056964391LLU;
	uint64_t t26 = 3047272148878LLU;

    t26 = (x121*(x122&(x123|x124)));

    if (t26 != 10920121132556255232LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x125 = 195425865176238LLU;
	volatile int64_t x126 = -55969LL;
	volatile uint32_t x127 = 1550U;
	int8_t x128 = 1;
	uint64_t t27 = 464637732918LLU;

    t27 = (x125*(x126&(x127|x128)));

    if (t27 != 203047473918111282LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x129 = 7U;
	static int8_t x130 = INT8_MIN;
	int64_t x131 = INT64_MIN;

    t28 = (x129*(x130&(x131|x132)));

    if (t28 != -896LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x133 = INT16_MAX;
	uint8_t x134 = 51U;
	static volatile int8_t x136 = -2;
	int32_t t29 = 359760;

    t29 = (x133*(x134&(x135|x136)));

    if (t29 != 1638350) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint32_t x137 = 10U;
	static int16_t x138 = -1;
	int16_t x139 = INT16_MAX;
	int8_t x140 = INT8_MAX;
	uint32_t t30 = 329U;

    t30 = (x137*(x138&(x139|x140)));

    if (t30 != 327670U) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int64_t x145 = -1LL;
	static int64_t x146 = -442774815667LL;
	int32_t x147 = INT32_MAX;
	int32_t x148 = 224663517;
	int64_t t31 = 175888LL;

    t31 = (x145*(x146&(x147|x148)));

    if (t31 != -1754299469LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x149 = INT8_MIN;
	uint32_t x150 = 407364324U;
	static int64_t x151 = INT64_MIN;
	int8_t x152 = 10;
	int64_t t32 = 126240667LL;

    t32 = (x149*(x150&(x151|x152)));

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x153 = INT8_MIN;
	volatile uint64_t x154 = 247914987655103LLU;
	volatile int16_t x155 = INT16_MIN;
	int32_t x156 = -1;

    t33 = (x153*(x154&(x155|x156)));

    if (t33 != 18415010955289698432LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x157 = -1LL;
	uint32_t x158 = UINT32_MAX;
	static int16_t x160 = INT16_MIN;
	uint64_t t34 = 354305241208225525LLU;

    t34 = (x157*(x158&(x159|x160)));

    if (t34 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x165 = -439;
	int16_t x167 = INT16_MIN;
	volatile uint32_t x168 = 887U;

    t35 = (x165*(x166&(x167|x168)));

    if (t35 != 4280192751U) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x169 = 8LL;
	int8_t x170 = 14;
	int16_t x171 = 218;
	int32_t x172 = INT32_MIN;
	volatile int64_t t36 = 151LL;

    t36 = (x169*(x170&(x171|x172)));

    if (t36 != 80LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint16_t x173 = 2U;
	int16_t x174 = 4;
	int8_t x175 = -49;
	int16_t x176 = INT16_MAX;
	volatile int32_t t37 = -11935543;

    t37 = (x173*(x174&(x175|x176)));

    if (t37 != 8) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x177 = INT64_MAX;
	int32_t x178 = INT32_MIN;
	volatile int64_t t38 = 7295080499128711LL;

    t38 = (x177*(x178&(x179|x180)));

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint8_t x181 = UINT8_MAX;
	int32_t x183 = INT32_MIN;
	int16_t x184 = 0;
	volatile int32_t t39 = -48707237;

    t39 = (x181*(x182&(x183|x184)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x185 = INT8_MIN;
	uint8_t x186 = UINT8_MAX;
	int8_t x188 = INT8_MIN;

    t40 = (x185*(x186&(x187|x188)));

    if (t40 != 18446744073709532032LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x189 = -1;
	int16_t x191 = -14855;
	int64_t t41 = -2LL;

    t41 = (x189*(x190&(x191|x192)));

    if (t41 != 14855LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x197 = INT16_MIN;
	int16_t x198 = INT16_MAX;
	int64_t x199 = INT64_MIN;
	int64_t t42 = -272882LL;

    t42 = (x197*(x198&(x199|x200)));

    if (t42 != -4161536LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile uint32_t x205 = UINT32_MAX;
	int16_t x207 = INT16_MIN;
	static uint32_t t43 = 626U;

    t43 = (x205*(x206&(x207|x208)));

    if (t43 != 4294934656U) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint16_t x209 = 433U;
	int64_t x212 = -1LL;
	volatile int64_t t44 = -1LL;

    t44 = (x209*(x210&(x211|x212)));

    if (t44 != -433LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x214 = 30U;
	int32_t x215 = INT32_MIN;
	int64_t x216 = INT64_MAX;
	int64_t t45 = 4376489359630LL;

    t45 = (x213*(x214&(x215|x216)));

    if (t45 != -983040LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x218 = 1;
	int64_t x219 = -8135926662LL;
	uint32_t x220 = 6289U;
	static int64_t t46 = 30229550901147638LL;

    t46 = (x217*(x218&(x219|x220)));

    if (t46 != -128LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x221 = 5710U;
	static int16_t x222 = INT16_MIN;
	int16_t x223 = INT16_MIN;
	uint32_t x224 = 11385652U;

    t47 = (x221*(x222&(x223|x224)));

    if (t47 != 4107862016U) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x225 = -1;
	volatile uint8_t x226 = 96U;
	volatile int32_t x227 = 744593765;
	int16_t x228 = 0;
	int32_t t48 = -478034566;

    t48 = (x225*(x226&(x227|x228)));

    if (t48 != -96) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x229 = UINT8_MAX;
	int8_t x230 = INT8_MAX;
	int8_t x231 = -1;
	uint8_t x232 = 5U;
	int32_t t49 = 198;

    t49 = (x229*(x230&(x231|x232)));

    if (t49 != 32385) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x237 = INT16_MAX;
	static volatile int16_t x239 = 9991;
	int8_t x240 = -29;
	int64_t t50 = -3629847391986LL;

    t50 = (x237*(x238&(x239|x240)));

    if (t50 != -819175LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x241 = -833159;
	uint16_t x242 = 254U;
	volatile uint16_t x243 = UINT16_MAX;
	uint32_t x244 = 29769910U;
	uint32_t t51 = 58292U;

    t51 = (x241*(x242&(x243|x244)));

    if (t51 != 4083344910U) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x245 = 0;
	volatile int64_t x246 = -45684249992989LL;
	static uint8_t x247 = 58U;
	int64_t x248 = -28436272506LL;
	volatile int64_t t52 = 610997LL;

    t52 = (x245*(x246&(x247|x248)));

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x249 = 2356U;
	uint16_t x250 = 8U;
	static volatile int32_t x252 = INT32_MIN;
	static int32_t t53 = 3644;

    t53 = (x249*(x250&(x251|x252)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int64_t x253 = 1147847260351LL;
	int8_t x255 = INT8_MAX;
	uint64_t x256 = 1LLU;

    t54 = (x253*(x254&(x255|x256)));

    if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x257 = INT16_MIN;
	uint64_t x258 = 232408687174LLU;
	uint8_t x259 = 88U;
	volatile int8_t x260 = 8;
	static uint64_t t55 = 12LLU;

    t55 = (x257*(x258&(x259|x260)));

    if (t55 != 18446744073707454464LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x262 = 95798LLU;
	int16_t x263 = -1;
	int64_t x264 = INT64_MAX;

    t56 = (x261*(x262&(x263|x264)));

    if (t56 != 18446744073697289472LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x265 = 1;
	volatile int8_t x267 = INT8_MIN;
	int32_t x268 = INT32_MAX;

    t57 = (x265*(x266&(x267|x268)));

    if (t57 != 37) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x269 = UINT64_MAX;
	static volatile uint64_t x270 = UINT64_MAX;
	volatile uint8_t x272 = 11U;

    t58 = (x269*(x270&(x271|x272)));

    if (t58 != 117LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int32_t x273 = -64076686;
	int16_t x274 = INT16_MIN;
	int32_t x275 = INT32_MIN;
	uint32_t x276 = UINT32_MAX;

    t59 = (x273*(x274&(x275|x276)));

    if (t59 != 3720806400U) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int16_t x277 = INT16_MIN;
	int32_t x279 = INT32_MIN;
	static volatile int32_t t60 = 249793;

    t60 = (x277*(x278&(x279|x280)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x281 = 5U;
	uint32_t x282 = 5U;
	int16_t x284 = INT16_MIN;
	volatile uint32_t t61 = 390294U;

    t61 = (x281*(x282&(x283|x284)));

    if (t61 != 25U) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x285 = UINT64_MAX;
	int16_t x288 = -1;
	uint64_t t62 = 406585035363063208LLU;

    t62 = (x285*(x286&(x287|x288)));

    if (t62 != 32768LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x289 = UINT32_MAX;
	uint16_t x290 = 364U;
	volatile int64_t x291 = INT64_MIN;
	int16_t x292 = -1;

    t63 = (x289*(x290&(x291|x292)));

    if (t63 != 1563368095380LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x293 = -1;
	uint16_t x294 = UINT16_MAX;
	volatile uint8_t x295 = UINT8_MAX;

    t64 = (x293*(x294&(x295|x296)));

    if (t64 != -255) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x297 = -2;
	uint16_t x298 = UINT16_MAX;
	int32_t x299 = -130;
	int32_t x300 = -1;

    t65 = (x297*(x298&(x299|x300)));

    if (t65 != -131070) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x301 = UINT32_MAX;
	int8_t x302 = INT8_MIN;
	int64_t x303 = 1LL;
	int8_t x304 = INT8_MIN;
	static volatile int64_t t66 = 83799401LL;

    t66 = (x301*(x302&(x303|x304)));

    if (t66 != -549755813760LL) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int32_t x305 = -1;
	int64_t x306 = INT64_MIN;
	volatile int32_t x307 = INT32_MIN;
	volatile uint32_t x308 = 3896228U;
	int64_t t67 = -213995639892071663LL;

    t67 = (x305*(x306&(x307|x308)));

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x309 = -1;
	int16_t x310 = -1;
	static int16_t x311 = INT16_MIN;
	int8_t x312 = -1;
	volatile int32_t t68 = 627;

    t68 = (x309*(x310&(x311|x312)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x314 = UINT16_MAX;
	int32_t x315 = INT32_MIN;
	static uint8_t x316 = UINT8_MAX;

    t69 = (x313*(x314&(x315|x316)));

    if (t69 != 86521500LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint32_t x317 = 73509935U;
	int32_t x318 = 1;
	uint8_t x319 = 1U;
	int16_t x320 = INT16_MAX;
	volatile uint32_t t70 = 222620U;

    t70 = (x317*(x318&(x319|x320)));

    if (t70 != 73509935U) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x321 = INT8_MIN;
	int32_t x322 = 16774509;
	int32_t x323 = INT32_MAX;
	int32_t x324 = INT32_MIN;
	volatile int32_t t71 = -10247;

    t71 = (x321*(x322&(x323|x324)));

    if (t71 != -2147137152) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x325 = -1;
	static int64_t x327 = INT64_MAX;
	uint64_t x328 = 754928812LLU;
	uint64_t t72 = 3126158091929LLU;

    t72 = (x325*(x326&(x327|x328)));

    if (t72 != 9223372036854776418LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x329 = INT32_MIN;
	static int8_t x330 = INT8_MIN;
	uint64_t x331 = 1LLU;
	static volatile int64_t x332 = INT64_MAX;
	uint64_t t73 = 2LLU;

    t73 = (x329*(x330&(x331|x332)));

    if (t73 != 274877906944LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x333 = -1;
	int32_t x334 = 0;
	static uint64_t x335 = UINT64_MAX;
	int32_t x336 = -1;
	uint64_t t74 = 184892295693608410LLU;

    t74 = (x333*(x334&(x335|x336)));

    if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	static int32_t x337 = -1;
	static int16_t x338 = INT16_MIN;
	int64_t x339 = -1LL;
	static uint32_t x340 = 15660U;
	volatile int64_t t75 = -109171LL;

    t75 = (x337*(x338&(x339|x340)));

    if (t75 != 32768LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x341 = INT16_MIN;
	int16_t x342 = INT16_MIN;
	int16_t x343 = INT16_MIN;
	uint16_t x344 = 9679U;
	volatile int32_t t76 = 4495;

    t76 = (x341*(x342&(x343|x344)));

    if (t76 != 1073741824) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int16_t x346 = INT16_MIN;
	volatile uint64_t x348 = UINT64_MAX;
	volatile uint64_t t77 = 125054391LLU;

    t77 = (x345*(x346&(x347|x348)));

    if (t77 != 32768LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int64_t x350 = -1LL;
	volatile uint32_t x351 = UINT32_MAX;
	int16_t x352 = INT16_MAX;
	volatile int64_t t78 = 1435859781836692699LL;

    t78 = (x349*(x350&(x351|x352)));

    if (t78 != -549755813760LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile uint16_t x353 = 23U;
	int16_t x354 = INT16_MAX;
	volatile uint8_t x355 = UINT8_MAX;
	static int8_t x356 = -1;
	volatile int32_t t79 = -91236;

    t79 = (x353*(x354&(x355|x356)));

    if (t79 != 753641) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x361 = -1;
	int16_t x362 = 6;
	volatile int16_t x363 = INT16_MAX;
	static uint64_t x364 = 95900910LLU;
	static uint64_t t80 = 389106394LLU;

    t80 = (x361*(x362&(x363|x364)));

    if (t80 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x369 = 21;
	int32_t x372 = -62213;
	static volatile uint64_t t81 = 2224008LLU;

    t81 = (x369*(x370&(x371|x372)));

    if (t81 != 18446744073709548928LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x373 = INT16_MAX;
	static volatile int64_t x375 = INT64_MAX;
	uint32_t x376 = 62266859U;
	volatile int64_t t82 = 28536517220LL;

    t82 = (x373*(x374&(x375|x376)));

    if (t82 != 140733193355265LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x377 = INT8_MIN;
	volatile int16_t x379 = 15956;
	uint64_t x380 = UINT64_MAX;
	uint64_t t83 = 1091LLU;

    t83 = (x377*(x378&(x379|x380)));

    if (t83 != 18446744073701163136LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x389 = 30365168688LL;
	static volatile uint16_t x390 = UINT16_MAX;
	uint64_t x391 = UINT64_MAX;
	static uint8_t x392 = UINT8_MAX;
	uint64_t t84 = 6389927091LLU;

    t84 = (x389*(x390&(x391|x392)));

    if (t84 != 1989981329968080LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x393 = -1;
	static uint32_t x394 = UINT32_MAX;
	int32_t x395 = -1;
	int16_t x396 = -24;
	volatile uint32_t t85 = 17579U;

    t85 = (x393*(x394&(x395|x396)));

    if (t85 != 1U) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x397 = UINT64_MAX;
	int8_t x399 = INT8_MIN;
	int64_t x400 = INT64_MIN;

    t86 = (x397*(x398&(x399|x400)));

    if (t86 != 128LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x401 = 1039633719675900LLU;
	volatile int32_t x402 = INT32_MAX;

    t87 = (x401*(x402&(x403|x404)));

    if (t87 != 5157230551830444036LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x410 = 106U;
	static int32_t x411 = -104702443;
	int64_t x412 = 5821593559876933LL;
	int64_t t88 = 58LL;

    t88 = (x409*(x410&(x411|x412)));

    if (t88 != -64LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x414 = -652889562962550LL;
	static int64_t x416 = -1LL;
	volatile int64_t t89 = 385708538331LL;

    t89 = (x413*(x414&(x415|x416)));

    if (t89 != 83569864059206400LL) { NG(); } else { ; }
	
}

void f90(void) {
    	static int64_t x417 = -1LL;
	int8_t x418 = -46;
	static volatile int32_t x419 = -1;
	int64_t x420 = 649501LL;
	static volatile int64_t t90 = -165924991907777686LL;

    t90 = (x417*(x418&(x419|x420)));

    if (t90 != 46LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x421 = INT32_MIN;
	int8_t x422 = INT8_MAX;
	int16_t x423 = INT16_MIN;
	static int64_t t91 = -4813502872084LL;

    t91 = (x421*(x422&(x423|x424)));

    if (t91 != -272730423296LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x425 = INT32_MIN;
	uint16_t x426 = UINT16_MAX;
	int16_t x428 = 0;

    t92 = (x425*(x426&(x427|x428)));

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x429 = INT32_MAX;
	int32_t x432 = INT32_MIN;
	static int64_t t93 = -6244549619LL;

    t93 = (x429*(x430&(x431|x432)));

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x434 = 2134200249262156505LL;
	volatile int16_t x435 = -1;
	static int8_t x436 = INT8_MAX;
	uint64_t t94 = 927867909476026LLU;

    t94 = (x433*(x434&(x435|x436)));

    if (t94 != 16312543824447395111LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static int8_t x437 = -1;
	int64_t x438 = INT64_MIN;
	int32_t x439 = INT32_MAX;
	volatile uint8_t x440 = 0U;
	int64_t t95 = 6307489410502529LL;

    t95 = (x437*(x438&(x439|x440)));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x442 = INT8_MIN;
	volatile int32_t x443 = -1;
	int32_t x444 = -1;

    t96 = (x441*(x442&(x443|x444)));

    if (t96 != 128) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x450 = 24U;
	int32_t x452 = -13034;
	int64_t t97 = 2034543911238367851LL;

    t97 = (x449*(x450&(x451|x452)));

    if (t97 != 288798792LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x453 = 56U;
	int64_t x454 = 59LL;
	int16_t x455 = -1;
	int8_t x456 = INT8_MAX;
	static int64_t t98 = 36989958543LL;

    t98 = (x453*(x454&(x455|x456)));

    if (t98 != 3304LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x458 = 0;
	static volatile int32_t x460 = INT32_MIN;
	volatile int64_t t99 = 188859LL;

    t99 = (x457*(x458&(x459|x460)));

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x461 = 3U;
	uint64_t x462 = UINT64_MAX;
	static int32_t x463 = INT32_MIN;
	uint64_t x464 = 184LLU;
	uint64_t t100 = 108517003197676315LLU;

    t100 = (x461*(x462&(x463|x464)));

    if (t100 != 18446744067267101224LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint8_t x466 = 0U;
	volatile int32_t x468 = INT32_MIN;
	int32_t t101 = -14012;

    t101 = (x465*(x466&(x467|x468)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int32_t x474 = INT32_MIN;
	int8_t x475 = INT8_MIN;
	int16_t x476 = -1;
	uint64_t t102 = 11526LLU;

    t102 = (x473*(x474&(x475|x476)));

    if (t102 != 2147483648LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	static int8_t x477 = -1;
	int64_t x478 = -12986LL;
	volatile int16_t x479 = -1;
	uint8_t x480 = UINT8_MAX;

    t103 = (x477*(x478&(x479|x480)));

    if (t103 != 12986LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint32_t x481 = 110554U;
	int32_t x482 = 122963902;
	uint64_t t104 = 5709105606LLU;

    t104 = (x481*(x482&(x483|x484)));

    if (t104 != 49307084LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x489 = -1;
	uint64_t x490 = 28366776597403LLU;
	int32_t x491 = -65607913;

    t105 = (x489*(x490&(x491|x492)));

    if (t105 != 18446715706993777901LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint32_t x493 = 77581354U;
	volatile uint32_t x494 = 549185U;
	int32_t x495 = 256359940;
	uint8_t x496 = 27U;
	volatile uint32_t t106 = 817U;

    t106 = (x493*(x494&(x495|x496)));

    if (t106 != 4263840810U) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x497 = -24;
	volatile int64_t x498 = INT64_MIN;
	int32_t x499 = 3694186;
	int8_t x500 = INT8_MAX;
	static int64_t t107 = 14LL;

    t107 = (x497*(x498&(x499|x500)));

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t x505 = -25;
	int16_t x506 = INT16_MIN;
	int32_t x507 = -1;
	volatile int16_t x508 = INT16_MAX;
	int32_t t108 = 230;

    t108 = (x505*(x506&(x507|x508)));

    if (t108 != 819200) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int32_t x509 = INT32_MAX;
	static volatile int32_t x511 = 29;
	int16_t x512 = 112;
	volatile int32_t t109 = -2939;

    t109 = (x509*(x510&(x511|x512)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint64_t x513 = UINT64_MAX;
	int8_t x514 = -1;
	uint8_t x515 = 65U;
	int8_t x516 = INT8_MIN;

    t110 = (x513*(x514&(x515|x516)));

    if (t110 != 63LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x517 = -34;
	int64_t x519 = INT64_MIN;
	static int64_t x520 = -1LL;
	volatile int64_t t111 = 2320840485742285LL;

    t111 = (x517*(x518&(x519|x520)));

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x521 = 30;
	int16_t x523 = -1;
	int32_t t112 = 200204;

    t112 = (x521*(x522&(x523|x524)));

    if (t112 != 44900760) { NG(); } else { ; }
	
}

void f113(void) {
    	static int32_t x529 = -1;
	int64_t x530 = INT64_MIN;
	int64_t x531 = -1LL;
	uint64_t x532 = 11679801LLU;
	uint64_t t113 = 61048335668LLU;

    t113 = (x529*(x530&(x531|x532)));

    if (t113 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x533 = INT16_MIN;
	uint8_t x534 = UINT8_MAX;
	int8_t x535 = INT8_MIN;
	volatile uint32_t x536 = UINT32_MAX;
	uint32_t t114 = 37437453U;

    t114 = (x533*(x534&(x535|x536)));

    if (t114 != 4286611456U) { NG(); } else { ; }
	
}

void f115(void) {
    	static int8_t x537 = -1;
	static int32_t x538 = -1;
	volatile int16_t x539 = INT16_MAX;
	static int16_t x540 = INT16_MAX;
	volatile int32_t t115 = -12081176;

    t115 = (x537*(x538&(x539|x540)));

    if (t115 != -32767) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int8_t x541 = -1;
	int64_t x542 = -1LL;
	volatile uint32_t x543 = 122138403U;
	uint64_t x544 = UINT64_MAX;
	uint64_t t116 = 2648732729658787667LLU;

    t116 = (x541*(x542&(x543|x544)));

    if (t116 != 1LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x549 = INT8_MIN;
	static int32_t x550 = 229178;
	uint64_t x551 = UINT64_MAX;
	static uint32_t x552 = 21925120U;

    t117 = (x549*(x550&(x551|x552)));

    if (t117 != 18446744073680216832LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x557 = 174317U;
	uint8_t x559 = 122U;
	volatile uint32_t t118 = 14147305U;

    t118 = (x557*(x558&(x559|x560)));

    if (t118 != 1150010368U) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x561 = 124U;
	static uint16_t x562 = 3U;
	int64_t x563 = 3940125124731486LL;
	int64_t x564 = INT64_MAX;

    t119 = (x561*(x562&(x563|x564)));

    if (t119 != 372LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x565 = 835747594322791243LLU;
	uint8_t x566 = 126U;
	uint64_t x567 = UINT64_MAX;
	static uint64_t t120 = 2354690LLU;

    t120 = (x565*(x566&(x567|x568)));

    if (t120 != 13070476516123938538LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x569 = 0U;
	int32_t x571 = INT32_MIN;
	static int8_t x572 = INT8_MIN;
	volatile int32_t t121 = 541;

    t121 = (x569*(x570&(x571|x572)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint64_t x577 = 49261LLU;
	static int16_t x578 = 16;
	static uint16_t x580 = UINT16_MAX;

    t122 = (x577*(x578&(x579|x580)));

    if (t122 != 788176LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x581 = 8;
	volatile int64_t x582 = -1637617644905LL;
	int32_t x583 = INT32_MIN;
	uint8_t x584 = 1U;
	int64_t t123 = 122LL;

    t123 = (x581*(x582&(x583|x584)));

    if (t123 != -13108240187384LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static int32_t x585 = -1;
	volatile uint8_t x586 = 7U;
	int8_t x587 = INT8_MIN;
	int8_t x588 = -1;

    t124 = (x585*(x586&(x587|x588)));

    if (t124 != -7) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x591 = INT16_MAX;

    t125 = (x589*(x590&(x591|x592)));

    if (t125 != 16205299776LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x594 = INT16_MAX;
	uint32_t x595 = 839267U;
	uint16_t x596 = UINT16_MAX;
	uint32_t t126 = 1U;

    t126 = (x593*(x594&(x595|x596)));

    if (t126 != 32767U) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x597 = INT16_MIN;
	volatile int32_t x598 = -1;
	int8_t x599 = INT8_MIN;
	int64_t x600 = INT64_MIN;
	static volatile int64_t t127 = 5188789LL;

    t127 = (x597*(x598&(x599|x600)));

    if (t127 != 4194304LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x601 = 30454224LL;
	int8_t x603 = -1;
	static volatile uint64_t t128 = 14709201621643LLU;

    t128 = (x601*(x602&(x603|x604)));

    if (t128 != 130799896074604080LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x608 = 5641U;
	static int64_t t129 = -509290LL;

    t129 = (x605*(x606&(x607|x608)));

    if (t129 != -9LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static int16_t x609 = -1;
	int64_t x610 = -1LL;
	uint32_t x611 = 32953591U;
	int16_t x612 = INT16_MAX;

    t130 = (x609*(x610&(x611|x612)));

    if (t130 != -32964607LL) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint16_t x613 = 11U;
	uint16_t x614 = 75U;
	int8_t x615 = INT8_MIN;
	uint8_t x616 = UINT8_MAX;
	int32_t t131 = 37;

    t131 = (x613*(x614&(x615|x616)));

    if (t131 != 825) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x617 = INT16_MIN;
	uint16_t x618 = 0U;
	uint16_t x620 = UINT16_MAX;
	int32_t t132 = -926373019;

    t132 = (x617*(x618&(x619|x620)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x621 = INT8_MIN;
	int64_t x622 = INT64_MIN;
	int32_t x623 = INT32_MAX;
	uint64_t x624 = 1337564LLU;
	uint64_t t133 = 3126LLU;

    t133 = (x621*(x622&(x623|x624)));

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x626 = 9U;
	int16_t x627 = 643;
	uint8_t x628 = 0U;
	static uint32_t t134 = 9757U;

    t134 = (x625*(x626&(x627|x628)));

    if (t134 != 437U) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x629 = -1;
	static int16_t x630 = INT16_MIN;
	volatile int8_t x631 = -1;
	uint32_t x632 = 16602102U;
	volatile uint32_t t135 = 0U;

    t135 = (x629*(x630&(x631|x632)));

    if (t135 != 32768U) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x633 = -1LL;
	int16_t x634 = INT16_MIN;
	int32_t x636 = INT32_MAX;
	int64_t t136 = 9645856LL;

    t136 = (x633*(x634&(x635|x636)));

    if (t136 != 32768LL) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x641 = INT8_MAX;
	int32_t x642 = -1;
	uint32_t x643 = 1U;
	int32_t x644 = -1;
	uint32_t t137 = 1889U;

    t137 = (x641*(x642&(x643|x644)));

    if (t137 != 4294967169U) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x645 = -1;
	uint16_t x646 = UINT16_MAX;
	static volatile int8_t x647 = 35;
	static int32_t x648 = 9463078;

    t138 = (x645*(x646&(x647|x648)));

    if (t138 != -25895) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile int32_t x653 = 6;
	int64_t x654 = 233972426335965LL;
	int16_t x655 = 862;
	uint16_t x656 = 37U;
	static volatile int64_t t139 = 69694575410LL;

    t139 = (x653*(x654&(x655|x656)));

    if (t139 != 3630LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static int64_t x657 = INT64_MIN;
	volatile int8_t x658 = 0;
	uint64_t x659 = UINT64_MAX;
	int16_t x660 = -1;
	volatile uint64_t t140 = 7LLU;

    t140 = (x657*(x658&(x659|x660)));

    if (t140 != 0LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x661 = -1LL;
	volatile uint16_t x662 = 28U;
	volatile int64_t x663 = INT64_MIN;
	uint64_t x664 = UINT64_MAX;
	uint64_t t141 = 106617000LLU;

    t141 = (x661*(x662&(x663|x664)));

    if (t141 != 18446744073709551588LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x665 = 0U;
	int8_t x666 = 22;
	static int8_t x667 = -1;
	int8_t x668 = 12;
	int32_t t142 = -848899049;

    t142 = (x665*(x666&(x667|x668)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x669 = 326U;
	uint8_t x670 = UINT8_MAX;
	volatile int64_t x671 = INT64_MIN;
	volatile int64_t t143 = -535562236LL;

    t143 = (x669*(x670&(x671|x672)));

    if (t143 != 41402LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x673 = 14248957277534LL;
	uint8_t x674 = UINT8_MAX;
	static volatile int8_t x675 = INT8_MIN;
	volatile int64_t x676 = INT64_MIN;
	int64_t t144 = -95224LL;

    t144 = (x673*(x674&(x675|x676)));

    if (t144 != 1823866531524352LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x677 = UINT16_MAX;
	int32_t x678 = INT32_MAX;
	static uint8_t x679 = 9U;
	int64_t x680 = INT64_MAX;
	int64_t t145 = -140027194955110085LL;

    t145 = (x677*(x678&(x679|x680)));

    if (t145 != 140735340806145LL) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint8_t x682 = UINT8_MAX;
	int64_t x683 = -1LL;
	int8_t x684 = 10;
	int64_t t146 = -156117207642555LL;

    t146 = (x681*(x682&(x683|x684)));

    if (t146 != 1020LL) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint8_t x685 = UINT8_MAX;
	int64_t x687 = INT64_MIN;
	static int16_t x688 = INT16_MIN;
	volatile int64_t t147 = -61210001LL;

    t147 = (x685*(x686&(x687|x688)));

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x689 = 5434898459211LLU;
	int8_t x690 = -4;
	int8_t x691 = INT8_MAX;
	volatile uint64_t t148 = 3957401788LLU;

    t148 = (x689*(x690&(x691|x692)));

    if (t148 != 673927408942164LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x693 = 3U;
	volatile uint8_t x694 = UINT8_MAX;
	volatile int16_t x695 = 40;
	int16_t x696 = INT16_MIN;
	volatile uint32_t t149 = 31019047U;

    t149 = (x693*(x694&(x695|x696)));

    if (t149 != 120U) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x698 = -1LL;
	volatile int8_t x699 = -16;

    t150 = (x697*(x698&(x699|x700)));

    if (t150 != -425971LL) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int8_t x701 = -1;
	volatile int32_t x704 = INT32_MIN;
	int32_t t151 = 1402;

    t151 = (x701*(x702&(x703|x704)));

    if (t151 != -1342) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x705 = 3;
	static int32_t x706 = -1;
	static int8_t x707 = INT8_MIN;
	uint64_t x708 = 4LLU;
	uint64_t t152 = 9562323LLU;

    t152 = (x705*(x706&(x707|x708)));

    if (t152 != 18446744073709551244LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x709 = INT32_MAX;
	int32_t x710 = INT32_MIN;
	int32_t x711 = 0;
	int32_t x712 = INT32_MAX;
	volatile int32_t t153 = -287546601;

    t153 = (x709*(x710&(x711|x712)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile int16_t x713 = -1;
	static volatile int32_t x715 = -1;
	static uint16_t x716 = UINT16_MAX;
	volatile int32_t t154 = 39;

    t154 = (x713*(x714&(x715|x716)));

    if (t154 != -22) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x717 = 30U;
	static volatile int32_t x718 = -8487;
	volatile int64_t x719 = INT64_MAX;
	static int64_t x720 = INT64_MIN;
	int64_t t155 = 1031158791LL;

    t155 = (x717*(x718&(x719|x720)));

    if (t155 != -254610LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x722 = -3881639;
	static int64_t x723 = INT64_MIN;
	volatile int8_t x724 = INT8_MIN;
	static volatile int64_t t156 = -3544629027249028LL;

    t156 = (x721*(x722&(x723|x724)));

    if (t156 != 127196463104LL) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int64_t x727 = INT64_MAX;
	int64_t t157 = 1224LL;

    t157 = (x725*(x726&(x727|x728)));

    if (t157 != 4294967295LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x729 = 13U;
	int32_t x730 = INT32_MAX;
	volatile int64_t x731 = -1LL;
	volatile int16_t x732 = INT16_MAX;

    t158 = (x729*(x730&(x731|x732)));

    if (t158 != 27917287411LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x738 = -815;
	volatile uint16_t x739 = 0U;
	volatile int32_t x740 = 687;

    t159 = (x737*(x738&(x739|x740)));

    if (t159 != 32895) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint16_t x741 = 1400U;
	volatile uint64_t x742 = UINT64_MAX;
	uint64_t x743 = 12895437422839293LLU;
	uint8_t x744 = 8U;
	uint64_t t160 = 246621129013LLU;

    t160 = (x741*(x742&(x743|x744)));

    if (t160 != 18053612391975010200LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x745 = 434U;
	uint8_t x746 = 18U;
	volatile int16_t x747 = INT16_MIN;
	int64_t x748 = -1LL;
	static volatile int64_t t161 = 1LL;

    t161 = (x745*(x746&(x747|x748)));

    if (t161 != 7812LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x749 = INT8_MAX;
	static uint32_t x752 = 248992U;
	uint32_t t162 = 233U;

    t162 = (x749*(x750&(x751|x752)));

    if (t162 != 4294746189U) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x753 = 2438;
	int64_t x755 = INT64_MIN;
	int64_t x756 = INT64_MAX;

    t163 = (x753*(x754&(x755|x756)));

    if (t163 != -2438LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x757 = 0U;
	uint32_t x758 = UINT32_MAX;
	uint32_t x760 = 63668U;
	uint64_t t164 = 43357323LLU;

    t164 = (x757*(x758&(x759|x760)));

    if (t164 != 0LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x766 = -4191;
	uint32_t x767 = 1001U;
	int8_t x768 = -1;
	static volatile uint32_t t165 = 482U;

    t165 = (x765*(x766&(x767|x768)));

    if (t165 != 4294929577U) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x769 = 110U;
	static volatile uint16_t x770 = 15U;

    t166 = (x769*(x770&(x771|x772)));

    if (t166 != 1650) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int64_t x773 = -778540634704769LL;
	int8_t x774 = -1;
	uint16_t x775 = UINT16_MAX;
	static int16_t x776 = INT16_MIN;
	volatile int64_t t167 = -45982664LL;

    t167 = (x773*(x774&(x775|x776)));

    if (t167 != 778540634704769LL) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint32_t x777 = UINT32_MAX;
	uint16_t x778 = 0U;
	uint32_t x779 = 59552U;
	uint8_t x780 = UINT8_MAX;
	volatile uint32_t t168 = 108944774U;

    t168 = (x777*(x778&(x779|x780)));

    if (t168 != 0U) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x782 = -1;
	int8_t x783 = INT8_MIN;

    t169 = (x781*(x782&(x783|x784)));

    if (t169 != -3378) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x785 = 3;
	static volatile uint8_t x786 = 104U;
	uint64_t x787 = UINT64_MAX;
	uint8_t x788 = 6U;
	uint64_t t170 = 984LLU;

    t170 = (x785*(x786&(x787|x788)));

    if (t170 != 312LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	static int16_t x789 = 1;
	static int16_t x791 = INT16_MIN;
	volatile int64_t x792 = -3376LL;
	int64_t t171 = 39975019886412992LL;

    t171 = (x789*(x790&(x791|x792)));

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x793 = INT8_MIN;
	volatile int8_t x795 = -1;
	int32_t t172 = 59;

    t172 = (x793*(x794&(x795|x796)));

    if (t172 != 16384) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x801 = -1;
	int16_t x802 = -1;
	int32_t x803 = -1;
	uint8_t x804 = UINT8_MAX;

    t173 = (x801*(x802&(x803|x804)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static int64_t x805 = INT64_MIN;
	int16_t x806 = -1;
	uint64_t x807 = 8472LLU;
	volatile int16_t x808 = 1;
	static uint64_t t174 = 877299061548651LLU;

    t174 = (x805*(x806&(x807|x808)));

    if (t174 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static int32_t x809 = INT32_MIN;
	static uint32_t x810 = 674665U;
	volatile uint64_t x811 = 42022610327LLU;
	volatile int64_t x812 = INT64_MIN;
	volatile uint64_t t175 = 109277815LLU;

    t175 = (x809*(x810&(x811|x812)));

    if (t175 != 18445336146922700800LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x819 = 1612U;
	int64_t t176 = -212163LL;

    t176 = (x817*(x818&(x819|x820)));

    if (t176 != 1955737277128551150LL) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint16_t x822 = 7948U;
	int32_t x824 = INT32_MAX;
	volatile uint32_t t177 = 102794U;

    t177 = (x821*(x822&(x823|x824)));

    if (t177 != 4294959348U) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x825 = INT8_MIN;
	int64_t x826 = INT64_MIN;
	uint16_t x827 = 30U;
	uint64_t x828 = 305737096713740LLU;

    t178 = (x825*(x826&(x827|x828)));

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x830 = UINT64_MAX;
	int64_t x831 = INT64_MIN;
	static uint64_t x832 = 1026005LLU;
	static uint64_t t179 = 13111211007LLU;

    t179 = (x829*(x830&(x831|x832)));

    if (t179 != 18446744073708525611LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x833 = -1;
	volatile int64_t x834 = INT64_MIN;
	static int64_t x835 = 60019146555LL;
	static volatile uint64_t t180 = 478052319060749512LLU;

    t180 = (x833*(x834&(x835|x836)));

    if (t180 != 0LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x841 = UINT64_MAX;
	volatile int32_t x844 = -60;
	volatile uint64_t t181 = 2LLU;

    t181 = (x841*(x842&(x843|x844)));

    if (t181 != 32768LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x845 = 41454848;
	int8_t x847 = INT8_MIN;
	uint16_t x848 = 141U;
	volatile int32_t t182 = -3262;

    t182 = (x845*(x846&(x847|x848)));

    if (t182 != 41454848) { NG(); } else { ; }
	
}

void f183(void) {
    	static int64_t x851 = INT64_MIN;
	int32_t x852 = INT32_MIN;
	volatile uint64_t t183 = 1714755981LLU;

    t183 = (x849*(x850&(x851|x852)));

    if (t183 != 0LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x857 = 41375LLU;
	uint64_t x858 = 46065897967LLU;
	uint64_t x859 = 556910216598681930LLU;
	uint8_t x860 = 25U;
	uint64_t t184 = 52829646040403025LLU;

    t184 = (x857*(x858&(x859|x860)));

    if (t184 != 33418027903125LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x865 = -5617535378LL;
	uint8_t x866 = 1U;
	static volatile int32_t x867 = INT32_MAX;
	int32_t x868 = -66437193;
	int64_t t185 = -3532723LL;

    t185 = (x865*(x866&(x867|x868)));

    if (t185 != -5617535378LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x869 = INT16_MAX;
	static int16_t x871 = -1;

    t186 = (x869*(x870&(x871|x872)));

    if (t186 != -4194176) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x873 = INT8_MIN;
	static volatile uint64_t x874 = 28074050627LLU;
	uint64_t x875 = 25244550651741LLU;
	int8_t x876 = -14;
	uint64_t t187 = 15808LLU;

    t187 = (x873*(x874&(x875|x876)));

    if (t187 != 18446740480231071360LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x877 = 0;
	volatile uint32_t t188 = 1813038231U;

    t188 = (x877*(x878&(x879|x880)));

    if (t188 != 0U) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x881 = INT32_MIN;
	int16_t x882 = 482;
	static int64_t x883 = 78981LL;
	int64_t x884 = -1LL;
	int64_t t189 = -8LL;

    t189 = (x881*(x882&(x883|x884)));

    if (t189 != -1035087118336LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x891 = -1LL;
	static volatile int16_t x892 = -1;
	int64_t t190 = 13913027036476LL;

    t190 = (x889*(x890&(x891|x892)));

    if (t190 != 16002LL) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int8_t x893 = -2;
	volatile uint64_t x894 = 82648158LLU;
	volatile int8_t x895 = INT8_MIN;
	static int64_t x896 = INT64_MIN;

    t191 = (x893*(x894&(x895|x896)));

    if (t191 != 18446744073544255488LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	static int32_t x897 = INT32_MAX;
	volatile int8_t x898 = INT8_MAX;
	volatile int16_t x899 = -211;
	uint32_t x900 = 214326U;
	uint32_t t192 = 12428U;

    t192 = (x897*(x898&(x899|x900)));

    if (t192 != 2147483585U) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x905 = INT32_MAX;
	int8_t x906 = INT8_MIN;
	uint32_t x907 = 47U;
	int8_t x908 = 2;
	static volatile uint32_t t193 = 7701914U;

    t193 = (x905*(x906&(x907|x908)));

    if (t193 != 0U) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x909 = -1;
	int16_t x910 = -624;
	static int8_t x911 = INT8_MIN;
	volatile uint64_t t194 = 2177799404877788LLU;

    t194 = (x909*(x910&(x911|x912)));

    if (t194 != 624LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	static int8_t x913 = -1;
	int8_t x914 = INT8_MIN;
	uint16_t x916 = 255U;
	int64_t t195 = 17547002755LL;

    t195 = (x913*(x914&(x915|x916)));

    if (t195 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint16_t x917 = UINT16_MAX;
	uint16_t x918 = 4047U;
	int16_t x919 = 1231;
	volatile int32_t t196 = -368606812;

    t196 = (x917*(x918&(x919|x920)));

    if (t196 != 265220145) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x921 = -1;
	uint8_t x923 = UINT8_MAX;
	volatile int64_t x924 = INT64_MIN;
	static volatile int64_t t197 = 43096791168459872LL;

    t197 = (x921*(x922&(x923|x924)));

    if (t197 != -181LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint32_t x925 = 91984U;
	volatile int64_t x928 = INT64_MIN;
	volatile uint64_t t198 = 7746339312323550747LLU;

    t198 = (x925*(x926&(x927|x928)));

    if (t198 != 197534135785648LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x929 = -1;
	uint64_t x930 = 271559644LLU;
	volatile int16_t x931 = -1;
	static volatile uint64_t t199 = 1926931449LLU;

    t199 = (x929*(x930&(x931|x932)));

    if (t199 != 18446744073437991972LLU) { NG(); } else { ; }
	
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

