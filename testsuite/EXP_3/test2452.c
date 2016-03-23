
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

static int8_t x2 = INT8_MIN;
static uint32_t x5 = UINT32_MAX;
int32_t x6 = 49780;
static uint32_t x20 = 3637253U;
volatile int64_t x24 = INT64_MIN;
uint64_t x25 = UINT64_MAX;
int16_t x32 = -6;
static uint32_t x33 = 164845U;
volatile int64_t t10 = 344261LL;
volatile int64_t x46 = -1LL;
volatile uint16_t x47 = 12U;
int8_t x48 = -1;
int64_t t12 = -27647LL;
volatile uint16_t x65 = 83U;
uint16_t x69 = 2U;
volatile int16_t x77 = 19;
static int32_t x82 = INT32_MAX;
static int16_t x92 = 256;
uint64_t x96 = 538187LLU;
volatile int64_t x97 = INT64_MIN;
static int16_t x98 = -20;
int8_t x102 = INT8_MIN;
int64_t x110 = INT64_MIN;
uint64_t x111 = UINT64_MAX;
int8_t x124 = INT8_MAX;
volatile int32_t t32 = 6138394;
uint8_t x135 = 111U;
static uint64_t x137 = UINT64_MAX;
int16_t x139 = 1;
int32_t t35 = -1;
static int16_t x147 = INT16_MIN;
int8_t x148 = INT8_MIN;
int32_t t36 = -656550485;
volatile uint8_t x150 = UINT8_MAX;
int32_t x158 = INT32_MAX;
volatile uint64_t t39 = 10845166004151185LLU;
volatile int64_t x174 = 897690883428LL;
static volatile int32_t t43 = -874983052;
volatile int64_t x182 = INT64_MIN;
volatile int32_t t45 = 109;
uint16_t x188 = 6U;
int64_t t47 = 138075629232983221LL;
static uint8_t x196 = UINT8_MAX;
int64_t x198 = INT64_MIN;
int16_t x200 = 1586;
int64_t x201 = -204169535104044LL;
uint8_t x213 = UINT8_MAX;
uint64_t x215 = 124LLU;
uint64_t x217 = 454054827482588LLU;
uint64_t t54 = 208308561815653LLU;
volatile uint64_t x222 = UINT64_MAX;
int16_t x227 = -5;
volatile uint64_t x229 = 106LLU;
volatile int8_t x234 = INT8_MAX;
int32_t x235 = -1;
int32_t x237 = INT32_MIN;
int16_t x239 = INT16_MIN;
int16_t x242 = 13;
int32_t x248 = 2796;
int64_t x251 = INT64_MIN;
int64_t x254 = 22LL;
int32_t x256 = INT32_MAX;
volatile int8_t x258 = INT8_MIN;
int16_t x264 = INT16_MIN;
volatile uint64_t x265 = 14127847LLU;
static int32_t x266 = INT32_MIN;
uint32_t x268 = UINT32_MAX;
int16_t x269 = INT16_MAX;
uint64_t x276 = 88706LLU;
static int64_t x280 = INT64_MAX;
int8_t x283 = -1;
int16_t x286 = INT16_MAX;
int64_t x288 = -207168LL;
int32_t x292 = INT32_MIN;
volatile int32_t t73 = -1930515;
uint8_t x304 = 78U;
static int32_t t75 = 1865660;
uint8_t x306 = UINT8_MAX;
uint32_t x307 = 42U;
int32_t x313 = INT32_MAX;
int16_t x314 = -1;
int8_t x315 = INT8_MIN;
volatile int64_t t78 = 106152LL;
uint64_t x319 = UINT64_MAX;
volatile int8_t x321 = INT8_MIN;
static uint32_t x322 = 123417U;
volatile uint32_t x324 = 14960U;
int64_t x334 = 837776493434253175LL;
static uint16_t x336 = 1560U;
int64_t x338 = -1LL;
static uint16_t x340 = 472U;
int32_t x345 = INT32_MAX;
uint64_t x348 = 184531LLU;
static volatile int64_t x353 = INT64_MIN;
int8_t x355 = INT8_MIN;
volatile int32_t t88 = 223269;
int16_t x358 = INT16_MIN;
int8_t x362 = 5;
volatile uint64_t t90 = 191797231LLU;
volatile uint64_t t92 = 208532467807LLU;
int8_t x378 = INT8_MIN;
uint32_t x383 = 805U;
static volatile int64_t x384 = INT64_MIN;
int32_t t97 = 1121101;
uint8_t x395 = 0U;
volatile int8_t x405 = -1;
uint64_t x422 = UINT64_MAX;
int64_t t109 = 28003LL;
static int32_t x444 = -1;
static volatile int64_t x446 = 5497443954564925LL;
int32_t x447 = INT32_MIN;
int16_t x449 = INT16_MAX;
static int32_t x454 = INT32_MAX;
volatile int32_t t114 = 1029690;
int8_t x471 = -3;
uint64_t x472 = UINT64_MAX;
static int64_t x475 = -1LL;
int32_t x476 = -1;
int32_t t119 = 12309;
int64_t x481 = 208071137084071LL;
int8_t x483 = INT8_MAX;
static int64_t t120 = -13141285167236323LL;
int32_t x490 = INT32_MAX;
int32_t x491 = INT32_MIN;
volatile uint64_t t123 = 5484917323567774LLU;
static int32_t x498 = 1185;
int64_t t124 = 10312675063660831LL;
int8_t x504 = 42;
uint8_t x506 = UINT8_MAX;
int32_t x507 = 60424616;
int32_t x510 = -448217;
volatile int32_t t128 = -206012;
int8_t x522 = 1;
volatile int32_t x527 = 14505956;
int32_t x528 = -1;
uint64_t x543 = UINT64_MAX;
uint32_t x552 = 859403065U;
volatile int8_t x558 = -1;
volatile uint64_t x559 = UINT64_MAX;
volatile int32_t x565 = -1;
static uint64_t x569 = 1441741LLU;
uint8_t x573 = 115U;
static uint8_t x575 = 2U;
uint8_t x581 = 39U;
volatile uint64_t t147 = 7589559423548273LLU;
volatile int16_t x596 = INT16_MIN;
static int16_t x598 = -6;
uint32_t t149 = 1425880121U;
uint8_t x603 = 71U;
volatile uint32_t x606 = 28U;
uint32_t x611 = 44206257U;
static int64_t x614 = 541753425925452LL;
uint64_t x620 = UINT64_MAX;
volatile uint64_t t154 = 0LLU;
int32_t x621 = INT32_MAX;
volatile uint32_t x630 = 1206455U;
uint64_t x632 = 62563789LLU;
int16_t x634 = INT16_MIN;
int32_t x637 = -1;
int32_t x641 = INT32_MIN;
int32_t x645 = -1;
volatile int8_t x648 = -1;
int64_t x655 = -40902274797329LL;
static int8_t x659 = -3;
volatile int64_t x662 = INT64_MIN;
int64_t x667 = -41973539LL;
int64_t x668 = INT64_MIN;
static int16_t x681 = INT16_MIN;
volatile uint64_t x683 = 6992043593687LLU;
uint64_t t170 = 130788369LLU;
uint16_t x690 = 3U;
int16_t x691 = -21;
volatile uint32_t x695 = UINT32_MAX;
volatile int16_t x699 = -1;
int16_t x709 = 982;
uint8_t x713 = 6U;
volatile int32_t t178 = -15;
volatile int64_t x720 = INT64_MAX;
volatile int32_t t183 = 25083;
uint64_t x737 = 532780LLU;
static int32_t x738 = INT32_MIN;
int16_t x751 = INT16_MAX;
uint16_t x754 = 11U;
volatile int16_t x759 = -20;
volatile int64_t t189 = 7986891806680688LL;
volatile int8_t x763 = 2;
volatile uint16_t x764 = 337U;
int32_t t190 = 19;
volatile uint64_t x765 = UINT64_MAX;
static uint8_t x766 = 103U;
static int8_t x775 = INT8_MIN;
volatile int32_t t193 = -1;
static int64_t x780 = INT64_MAX;
int16_t x784 = INT16_MAX;
volatile int32_t t195 = -2762;
static int64_t x786 = INT64_MIN;
uint32_t t196 = 14U;
uint32_t x790 = 17616537U;
uint64_t x793 = 435612600618LLU;
volatile int64_t t198 = -1LL;
volatile int8_t x797 = -7;


void f0(void) {
    	int32_t x1 = 3;
	int32_t x3 = -1302692;
	int32_t x4 = INT32_MIN;
	volatile int32_t t0 = -157187;

    t0 = ((x1==x2)-(x3|x4));

    if (t0 != 1302692) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x7 = -5;
	int64_t x8 = -1LL;
	int64_t t1 = -3LL;

    t1 = ((x5==x6)-(x7|x8));

    if (t1 != 1LL) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint64_t x9 = UINT64_MAX;
	int16_t x10 = INT16_MIN;
	static int32_t x11 = -1;
	uint64_t x12 = 858955860LLU;
	uint64_t t2 = 90LLU;

    t2 = ((x9==x10)-(x11|x12));

    if (t2 != 1LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = INT16_MIN;
	volatile int32_t x14 = 3545067;
	static uint8_t x15 = 53U;
	uint16_t x16 = UINT16_MAX;
	volatile int32_t t3 = -15789460;

    t3 = ((x13==x14)-(x15|x16));

    if (t3 != -65535) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = 0;
	static int32_t x18 = INT32_MAX;
	static int8_t x19 = INT8_MIN;
	volatile uint32_t t4 = 3U;

    t4 = ((x17==x18)-(x19|x20));

    if (t4 != 123U) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = 24221773;
	volatile int16_t x22 = INT16_MIN;
	uint8_t x23 = 73U;
	int64_t t5 = -4143962231LL;

    t5 = ((x21==x22)-(x23|x24));

    if (t5 != 9223372036854775735LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x26 = -1;
	volatile int64_t x27 = -30415125078543854LL;
	static int32_t x28 = -2336;
	volatile int64_t t6 = -228621LL;

    t6 = ((x25==x26)-(x27|x28));

    if (t6 != 2319LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = INT32_MIN;
	int8_t x30 = -30;
	volatile int64_t x31 = INT64_MIN;
	int64_t t7 = -405LL;

    t7 = ((x29==x30)-(x31|x32));

    if (t7 != 6LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x34 = 269937;
	static int32_t x35 = -113473805;
	int64_t x36 = -488649372762425LL;
	int64_t t8 = -108342LL;

    t8 = ((x33==x34)-(x35|x36));

    if (t8 != 71303433LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x37 = 0U;
	static volatile uint64_t x38 = UINT64_MAX;
	int64_t x39 = INT64_MIN;
	volatile int8_t x40 = 1;
	volatile int64_t t9 = INT64_MAX;

    t9 = ((x37==x38)-(x39|x40));

    if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = -1LL;
	int64_t x42 = -86206505647LL;
	int64_t x43 = INT64_MAX;
	volatile int8_t x44 = INT8_MIN;

    t10 = ((x41==x42)-(x43|x44));

    if (t10 != 1LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = INT32_MAX;
	int32_t t11 = -1792;

    t11 = ((x45==x46)-(x47|x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int32_t x49 = INT32_MIN;
	volatile int8_t x50 = -9;
	int16_t x51 = -1;
	int64_t x52 = 212193094064LL;

    t12 = ((x49==x50)-(x51|x52));

    if (t12 != 1LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x53 = UINT16_MAX;
	volatile int8_t x54 = -1;
	int16_t x55 = INT16_MAX;
	int64_t x56 = INT64_MAX;
	int64_t t13 = -7817LL;

    t13 = ((x53==x54)-(x55|x56));

    if (t13 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = INT64_MAX;
	uint16_t x58 = 62U;
	static int64_t x59 = -1LL;
	volatile int16_t x60 = INT16_MIN;
	volatile int64_t t14 = -1115246LL;

    t14 = ((x57==x58)-(x59|x60));

    if (t14 != 1LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = -1LL;
	static uint32_t x62 = 2827515U;
	static int64_t x63 = INT64_MIN;
	uint64_t x64 = 3744438514370753LLU;
	static uint64_t t15 = 1028016115695965LLU;

    t15 = ((x61==x62)-(x63|x64));

    if (t15 != 9219627598340405055LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x66 = UINT32_MAX;
	uint8_t x67 = 1U;
	static int32_t x68 = -1;
	static volatile int32_t t16 = 3;

    t16 = ((x65==x66)-(x67|x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x70 = 786;
	int8_t x71 = INT8_MAX;
	int64_t x72 = INT64_MAX;
	static volatile int64_t t17 = 26154767450LL;

    t17 = ((x69==x70)-(x71|x72));

    if (t17 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint32_t x73 = UINT32_MAX;
	static int16_t x74 = INT16_MIN;
	int64_t x75 = -246LL;
	volatile uint64_t x76 = UINT64_MAX;
	uint64_t t18 = 23046378451LLU;

    t18 = ((x73==x74)-(x75|x76));

    if (t18 != 1LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x78 = UINT32_MAX;
	uint64_t x79 = UINT64_MAX;
	int64_t x80 = INT64_MAX;
	volatile uint64_t t19 = 25287LLU;

    t19 = ((x77==x78)-(x79|x80));

    if (t19 != 1LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int16_t x81 = INT16_MIN;
	uint64_t x83 = 776906315747LLU;
	uint32_t x84 = UINT32_MAX;
	volatile uint64_t t20 = 89LLU;

    t20 = ((x81==x82)-(x83|x84));

    if (t20 != 18446743296320471041LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x85 = INT32_MIN;
	int64_t x86 = INT64_MIN;
	uint64_t x87 = 5929197LLU;
	int16_t x88 = INT16_MIN;
	uint64_t t21 = 13013069584997LLU;

    t21 = ((x85==x86)-(x87|x88));

    if (t21 != 1811LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint32_t x89 = 10394U;
	static int16_t x90 = -23;
	int8_t x91 = INT8_MAX;
	int32_t t22 = 413;

    t22 = ((x89==x90)-(x91|x92));

    if (t22 != -383) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x93 = INT32_MIN;
	int32_t x94 = -14204;
	int16_t x95 = -1;
	uint64_t t23 = 1LLU;

    t23 = ((x93==x94)-(x95|x96));

    if (t23 != 1LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x99 = INT64_MIN;
	uint32_t x100 = UINT32_MAX;
	volatile int64_t t24 = 172LL;

    t24 = ((x97==x98)-(x99|x100));

    if (t24 != 9223372032559808513LL) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x101 = -1;
	uint32_t x103 = 1398570806U;
	volatile uint64_t x104 = UINT64_MAX;
	uint64_t t25 = 19LLU;

    t25 = ((x101==x102)-(x103|x104));

    if (t25 != 1LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = INT32_MIN;
	uint8_t x106 = UINT8_MAX;
	int32_t x107 = INT32_MIN;
	static int16_t x108 = INT16_MAX;
	static volatile int32_t t26 = -7571863;

    t26 = ((x105==x106)-(x107|x108));

    if (t26 != 2147450881) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint8_t x109 = 30U;
	volatile int64_t x112 = -1LL;
	uint64_t t27 = 1101395487283698LLU;

    t27 = ((x109==x110)-(x111|x112));

    if (t27 != 1LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint8_t x113 = 101U;
	volatile uint16_t x114 = 11450U;
	static volatile int16_t x115 = 12156;
	static int8_t x116 = INT8_MAX;
	volatile int32_t t28 = -1829;

    t28 = ((x113==x114)-(x115|x116));

    if (t28 != -12159) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x117 = INT16_MIN;
	static int64_t x118 = 1743LL;
	int8_t x119 = INT8_MIN;
	int32_t x120 = INT32_MIN;
	int32_t t29 = 64537;

    t29 = ((x117==x118)-(x119|x120));

    if (t29 != 128) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x121 = 0;
	int32_t x122 = -43969;
	uint64_t x123 = 698087019208LLU;
	volatile uint64_t t30 = 0LLU;

    t30 = ((x121==x122)-(x123|x124));

    if (t30 != 18446743375622532353LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = 11;
	uint8_t x126 = UINT8_MAX;
	int32_t x127 = INT32_MIN;
	uint8_t x128 = 3U;
	int32_t t31 = -2565;

    t31 = ((x125==x126)-(x127|x128));

    if (t31 != 2147483645) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int64_t x129 = INT64_MIN;
	uint64_t x130 = UINT64_MAX;
	uint8_t x131 = UINT8_MAX;
	static volatile int16_t x132 = -1;

    t32 = ((x129==x130)-(x131|x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = 14931123;
	int64_t x134 = INT64_MIN;
	int16_t x136 = INT16_MAX;
	volatile int32_t t33 = 12;

    t33 = ((x133==x134)-(x135|x136));

    if (t33 != -32767) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint32_t x138 = UINT32_MAX;
	volatile int64_t x140 = -1LL;
	volatile int64_t t34 = 33317572945LL;

    t34 = ((x137==x138)-(x139|x140));

    if (t34 != 1LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x141 = -2803;
	int8_t x142 = INT8_MAX;
	int8_t x143 = -2;
	int32_t x144 = -1;

    t35 = ((x141==x142)-(x143|x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = -1;
	int64_t x146 = INT64_MIN;

    t36 = ((x145==x146)-(x147|x148));

    if (t36 != 128) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x149 = INT64_MAX;
	int16_t x151 = INT16_MAX;
	uint8_t x152 = 8U;
	int32_t t37 = 86400569;

    t37 = ((x149==x150)-(x151|x152));

    if (t37 != -32767) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = INT8_MIN;
	int32_t x154 = INT32_MAX;
	int16_t x155 = -1;
	int8_t x156 = -15;
	volatile int32_t t38 = -52002957;

    t38 = ((x153==x154)-(x155|x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x157 = -1;
	int8_t x159 = INT8_MIN;
	uint64_t x160 = 389LLU;

    t39 = ((x157==x158)-(x159|x160));

    if (t39 != 123LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x161 = INT8_MIN;
	int64_t x162 = 84075126393LL;
	int16_t x163 = INT16_MAX;
	int64_t x164 = -4012541LL;
	volatile int64_t t40 = -205417515367231LL;

    t40 = ((x161==x162)-(x163|x164));

    if (t40 != 3997697LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x165 = INT16_MAX;
	uint64_t x166 = UINT64_MAX;
	volatile int16_t x167 = INT16_MIN;
	static volatile uint64_t x168 = 885996615466909283LLU;
	static volatile uint64_t t41 = 8265LLU;

    t41 = ((x165==x166)-(x167|x168));

    if (t41 != 413LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x169 = INT32_MIN;
	static int64_t x170 = 80560452076483LL;
	static volatile int64_t x171 = 56LL;
	static int64_t x172 = 6305612205259LL;
	static volatile int64_t t42 = 726660LL;

    t42 = ((x169==x170)-(x171|x172));

    if (t42 != -6305612205307LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x173 = -50;
	static uint8_t x175 = UINT8_MAX;
	int8_t x176 = INT8_MAX;

    t43 = ((x173==x174)-(x175|x176));

    if (t43 != -255) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x177 = 2;
	int64_t x178 = INT64_MIN;
	int8_t x179 = -1;
	int16_t x180 = -1;
	volatile int32_t t44 = -4420;

    t44 = ((x177==x178)-(x179|x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x181 = -323;
	volatile int32_t x183 = INT32_MIN;
	uint8_t x184 = 41U;

    t45 = ((x181==x182)-(x183|x184));

    if (t45 != 2147483607) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = 6148;
	uint8_t x186 = 2U;
	volatile int64_t x187 = 3223108367413523LL;
	int64_t t46 = -2591LL;

    t46 = ((x185==x186)-(x187|x188));

    if (t46 != -3223108367413527LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = INT16_MIN;
	volatile uint64_t x190 = UINT64_MAX;
	volatile int64_t x191 = -136699LL;
	int8_t x192 = INT8_MIN;

    t47 = ((x189==x190)-(x191|x192));

    if (t47 != 123LL) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint64_t x193 = 65641021696035LLU;
	static int32_t x194 = INT32_MIN;
	int32_t x195 = 972434;
	int32_t t48 = -2;

    t48 = ((x193==x194)-(x195|x196));

    if (t48 != -972543) { NG(); } else { ; }
	
}

void f49(void) {
    	static int32_t x197 = 2043;
	uint8_t x199 = 1U;
	int32_t t49 = 29;

    t49 = ((x197==x198)-(x199|x200));

    if (t49 != -1587) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint64_t x202 = UINT64_MAX;
	int64_t x203 = INT64_MIN;
	uint16_t x204 = 26542U;
	volatile int64_t t50 = -929739373008832906LL;

    t50 = ((x201==x202)-(x203|x204));

    if (t50 != 9223372036854749266LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x205 = 0;
	uint8_t x206 = 15U;
	int32_t x207 = -258525;
	int64_t x208 = INT64_MIN;
	volatile int64_t t51 = 137546833366731550LL;

    t51 = ((x205==x206)-(x207|x208));

    if (t51 != 258525LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x209 = 510U;
	uint32_t x210 = 57U;
	uint64_t x211 = 203535752354LLU;
	uint8_t x212 = 5U;
	volatile uint64_t t52 = 1257LLU;

    t52 = ((x209==x210)-(x211|x212));

    if (t52 != 18446743870173799257LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x214 = INT8_MIN;
	int64_t x216 = -1LL;
	volatile uint64_t t53 = 4654255857LLU;

    t53 = ((x213==x214)-(x215|x216));

    if (t53 != 1LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x218 = -108;
	int8_t x219 = 0;
	uint64_t x220 = UINT64_MAX;

    t54 = ((x217==x218)-(x219|x220));

    if (t54 != 1LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x221 = INT64_MIN;
	int8_t x223 = -1;
	volatile uint64_t x224 = 49168LLU;
	uint64_t t55 = 15LLU;

    t55 = ((x221==x222)-(x223|x224));

    if (t55 != 1LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x225 = INT64_MAX;
	int16_t x226 = -1;
	volatile int16_t x228 = -1;
	volatile int32_t t56 = 15520;

    t56 = ((x225==x226)-(x227|x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x230 = UINT8_MAX;
	uint8_t x231 = UINT8_MAX;
	static int64_t x232 = -385739788830LL;
	static volatile int64_t t57 = -159301LL;

    t57 = ((x229==x230)-(x231|x232));

    if (t57 != 385739788801LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile uint32_t x233 = 26U;
	static int8_t x236 = 0;
	volatile int32_t t58 = -244558;

    t58 = ((x233==x234)-(x235|x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x238 = 859264632043LLU;
	uint8_t x240 = 108U;
	int32_t t59 = 110;

    t59 = ((x237==x238)-(x239|x240));

    if (t59 != 32660) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x241 = UINT32_MAX;
	static int8_t x243 = -1;
	int8_t x244 = -1;
	volatile int32_t t60 = 856536;

    t60 = ((x241==x242)-(x243|x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x245 = INT64_MIN;
	static volatile int64_t x246 = INT64_MIN;
	int8_t x247 = INT8_MIN;
	int32_t t61 = -343436;

    t61 = ((x245==x246)-(x247|x248));

    if (t61 != 21) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x249 = -1;
	int8_t x250 = INT8_MIN;
	uint8_t x252 = 1U;
	int64_t t62 = INT64_MAX;

    t62 = ((x249==x250)-(x251|x252));

    if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x253 = UINT8_MAX;
	int8_t x255 = 1;
	int32_t t63 = -7849079;

    t63 = ((x253==x254)-(x255|x256));

    if (t63 != -2147483647) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x257 = INT32_MIN;
	int8_t x259 = -1;
	int16_t x260 = INT16_MIN;
	volatile int32_t t64 = -85;

    t64 = ((x257==x258)-(x259|x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = INT32_MIN;
	uint8_t x262 = 1U;
	uint64_t x263 = UINT64_MAX;
	uint64_t t65 = 41888661157738LLU;

    t65 = ((x261==x262)-(x263|x264));

    if (t65 != 1LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint16_t x267 = 8736U;
	uint32_t t66 = 16541113U;

    t66 = ((x265==x266)-(x267|x268));

    if (t66 != 1U) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x270 = INT8_MIN;
	int32_t x271 = -1;
	int32_t x272 = -1;
	volatile int32_t t67 = -5067;

    t67 = ((x269==x270)-(x271|x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x273 = -1;
	int8_t x274 = -43;
	static int8_t x275 = 29;
	uint64_t t68 = 19018720385244755LLU;

    t68 = ((x273==x274)-(x275|x276));

    if (t68 != 18446744073709462881LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int64_t x277 = INT64_MIN;
	int32_t x278 = INT32_MAX;
	volatile int32_t x279 = -1;
	volatile int64_t t69 = 8997468040119547LL;

    t69 = ((x277==x278)-(x279|x280));

    if (t69 != 1LL) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint8_t x281 = 8U;
	uint16_t x282 = 15U;
	static int32_t x284 = INT32_MIN;
	volatile int32_t t70 = 1057118;

    t70 = ((x281==x282)-(x283|x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x285 = -8792103;
	volatile uint64_t x287 = UINT64_MAX;
	volatile uint64_t t71 = 5818026263936LLU;

    t71 = ((x285==x286)-(x287|x288));

    if (t71 != 1LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x289 = INT64_MIN;
	static uint16_t x290 = 1U;
	int32_t x291 = 112697489;
	int32_t t72 = 10;

    t72 = ((x289==x290)-(x291|x292));

    if (t72 != 2034786159) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x293 = -797266;
	static uint32_t x294 = UINT32_MAX;
	int16_t x295 = -1;
	static int32_t x296 = INT32_MIN;

    t73 = ((x293==x294)-(x295|x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint8_t x297 = UINT8_MAX;
	int64_t x298 = -29532LL;
	volatile uint16_t x299 = 199U;
	volatile uint64_t x300 = 3475642LLU;
	uint64_t t74 = 959923339529389LLU;

    t74 = ((x297==x298)-(x299|x300));

    if (t74 != 18446744073706075905LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x301 = INT64_MIN;
	static uint8_t x302 = 0U;
	uint8_t x303 = UINT8_MAX;

    t75 = ((x301==x302)-(x303|x304));

    if (t75 != -255) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x305 = 7U;
	uint64_t x308 = 109512970822457LLU;
	volatile uint64_t t76 = 104937LLU;

    t76 = ((x305==x306)-(x307|x308));

    if (t76 != 18446634560738729157LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x309 = INT8_MIN;
	static int32_t x310 = -1;
	uint32_t x311 = UINT32_MAX;
	static int32_t x312 = INT32_MIN;
	static volatile uint32_t t77 = 26U;

    t77 = ((x309==x310)-(x311|x312));

    if (t77 != 1U) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x316 = INT64_MIN;

    t78 = ((x313==x314)-(x315|x316));

    if (t78 != 128LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile uint64_t x317 = UINT64_MAX;
	volatile int16_t x318 = 13181;
	uint16_t x320 = 4348U;
	volatile uint64_t t79 = 2LLU;

    t79 = ((x317==x318)-(x319|x320));

    if (t79 != 1LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile uint8_t x323 = UINT8_MAX;
	static volatile uint32_t t80 = 176263944U;

    t80 = ((x321==x322)-(x323|x324));

    if (t80 != 4294952193U) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint64_t x325 = 29073LLU;
	int64_t x326 = INT64_MIN;
	int64_t x327 = INT64_MIN;
	static int16_t x328 = -1;
	volatile int64_t t81 = 2376482305052LL;

    t81 = ((x325==x326)-(x327|x328));

    if (t81 != 1LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static int32_t x329 = INT32_MIN;
	int32_t x330 = -1;
	volatile int32_t x331 = INT32_MAX;
	int64_t x332 = INT64_MIN;
	int64_t t82 = -11995948698073LL;

    t82 = ((x329==x330)-(x331|x332));

    if (t82 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint16_t x333 = UINT16_MAX;
	int32_t x335 = -718337171;
	volatile int32_t t83 = 3;

    t83 = ((x333==x334)-(x335|x336));

    if (t83 != 718336131) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x337 = INT32_MIN;
	int32_t x339 = INT32_MAX;
	volatile int32_t t84 = 29896;

    t84 = ((x337==x338)-(x339|x340));

    if (t84 != -2147483647) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x341 = INT64_MAX;
	uint8_t x342 = UINT8_MAX;
	volatile int32_t x343 = -1;
	int32_t x344 = INT32_MIN;
	int32_t t85 = 81054091;

    t85 = ((x341==x342)-(x343|x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint32_t x346 = 223799438U;
	int16_t x347 = INT16_MIN;
	uint64_t t86 = 5LLU;

    t86 = ((x345==x346)-(x347|x348));

    if (t86 != 12077LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static int16_t x349 = -1;
	uint16_t x350 = 115U;
	int16_t x351 = INT16_MAX;
	int64_t x352 = -1LL;
	volatile int64_t t87 = 670760LL;

    t87 = ((x349==x350)-(x351|x352));

    if (t87 != 1LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x354 = 18U;
	static uint8_t x356 = 3U;

    t88 = ((x353==x354)-(x355|x356));

    if (t88 != 125) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int32_t x357 = INT32_MIN;
	int64_t x359 = INT64_MAX;
	static uint16_t x360 = 0U;
	int64_t t89 = 58LL;

    t89 = ((x357==x358)-(x359|x360));

    if (t89 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x361 = INT16_MIN;
	int64_t x363 = -947242722543856856LL;
	volatile uint64_t x364 = 19408660LLU;

    t90 = ((x361==x362)-(x363|x364));

    if (t90 != 947242722526546116LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint16_t x365 = UINT16_MAX;
	volatile uint32_t x366 = 524216625U;
	uint32_t x367 = 132U;
	volatile int64_t x368 = INT64_MIN;
	static int64_t t91 = -496110865923168329LL;

    t91 = ((x365==x366)-(x367|x368));

    if (t91 != 9223372036854775676LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint64_t x369 = 2478063946057134119LLU;
	int32_t x370 = -1;
	int16_t x371 = INT16_MIN;
	uint64_t x372 = 4695674401396824343LLU;

    t92 = ((x369==x370)-(x371|x372));

    if (t92 != 26345LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x373 = 57U;
	int32_t x374 = INT32_MAX;
	uint16_t x375 = 93U;
	uint64_t x376 = 1097236308251856LLU;
	volatile uint64_t t93 = 196123788LLU;

    t93 = ((x373==x374)-(x375|x376));

    if (t93 != 18445646837401299747LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x377 = 3497044332958405LLU;
	volatile int16_t x379 = INT16_MIN;
	static uint8_t x380 = UINT8_MAX;
	static int32_t t94 = -829782;

    t94 = ((x377==x378)-(x379|x380));

    if (t94 != 32513) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int16_t x381 = 4826;
	static int8_t x382 = INT8_MIN;
	volatile int64_t t95 = -201567986LL;

    t95 = ((x381==x382)-(x383|x384));

    if (t95 != 9223372036854775003LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x385 = -1;
	uint32_t x386 = UINT32_MAX;
	uint64_t x387 = 19763790480053217LLU;
	int8_t x388 = INT8_MAX;
	uint64_t t96 = 269364668841LLU;

    t96 = ((x385==x386)-(x387|x388));

    if (t96 != 18426980283229498370LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	static int32_t x389 = INT32_MIN;
	int32_t x390 = INT32_MIN;
	uint16_t x391 = 8009U;
	int8_t x392 = INT8_MIN;

    t97 = ((x389==x390)-(x391|x392));

    if (t97 != 56) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x393 = INT8_MAX;
	int8_t x394 = INT8_MIN;
	int16_t x396 = INT16_MIN;
	int32_t t98 = 510481;

    t98 = ((x393==x394)-(x395|x396));

    if (t98 != 32768) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x397 = INT16_MAX;
	uint64_t x398 = UINT64_MAX;
	static int64_t x399 = -23675340979971LL;
	static int32_t x400 = INT32_MIN;
	volatile int64_t t99 = 564864236352236LL;

    t99 = ((x397==x398)-(x399|x400));

    if (t99 != 1481244419LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x401 = 14813LLU;
	int64_t x402 = INT64_MIN;
	int8_t x403 = 2;
	static int64_t x404 = INT64_MIN;
	volatile int64_t t100 = 2807929714LL;

    t100 = ((x401==x402)-(x403|x404));

    if (t100 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f101(void) {
    	static int64_t x406 = 15710353172LL;
	static int8_t x407 = -16;
	int16_t x408 = INT16_MIN;
	int32_t t101 = -5;

    t101 = ((x405==x406)-(x407|x408));

    if (t101 != 16) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int64_t x409 = -1LL;
	volatile int64_t x410 = -1LL;
	volatile int64_t x411 = -622163084257LL;
	int8_t x412 = 3;
	int64_t t102 = -226091LL;

    t102 = ((x409==x410)-(x411|x412));

    if (t102 != 622163084258LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile int8_t x413 = -1;
	uint32_t x414 = UINT32_MAX;
	int8_t x415 = -1;
	int32_t x416 = -1;
	int32_t t103 = 1226;

    t103 = ((x413==x414)-(x415|x416));

    if (t103 != 2) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x417 = UINT16_MAX;
	volatile uint16_t x418 = 11U;
	int32_t x419 = INT32_MAX;
	volatile int32_t x420 = -2078736;
	int32_t t104 = 3456;

    t104 = ((x417==x418)-(x419|x420));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static int16_t x421 = 13483;
	uint16_t x423 = 529U;
	uint16_t x424 = 0U;
	volatile int32_t t105 = 78305;

    t105 = ((x421==x422)-(x423|x424));

    if (t105 != -529) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint8_t x425 = 18U;
	int16_t x426 = -26;
	volatile int16_t x427 = INT16_MAX;
	int8_t x428 = INT8_MAX;
	volatile int32_t t106 = -67567257;

    t106 = ((x425==x426)-(x427|x428));

    if (t106 != -32767) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint64_t x429 = 2LLU;
	uint32_t x430 = UINT32_MAX;
	volatile int32_t x431 = -1;
	uint16_t x432 = 13225U;
	int32_t t107 = 2933;

    t107 = ((x429==x430)-(x431|x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x433 = 2171;
	uint8_t x434 = 4U;
	static uint32_t x435 = UINT32_MAX;
	uint8_t x436 = UINT8_MAX;
	volatile uint32_t t108 = 56U;

    t108 = ((x433==x434)-(x435|x436));

    if (t108 != 1U) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint32_t x437 = 9U;
	int8_t x438 = -8;
	uint16_t x439 = 19854U;
	int64_t x440 = INT64_MIN;

    t109 = ((x437==x438)-(x439|x440));

    if (t109 != 9223372036854755954LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x441 = 7821U;
	uint8_t x442 = 0U;
	static volatile uint8_t x443 = 24U;
	int32_t t110 = -3;

    t110 = ((x441==x442)-(x443|x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x445 = -1046673LL;
	int8_t x448 = -15;
	int32_t t111 = 16551978;

    t111 = ((x445==x446)-(x447|x448));

    if (t111 != 15) { NG(); } else { ; }
	
}

void f112(void) {
    	static int64_t x450 = 64333190436914LL;
	static int32_t x451 = INT32_MIN;
	static volatile uint64_t x452 = 528114502734280778LLU;
	volatile uint64_t t112 = 481009043058144965LLU;

    t112 = ((x449==x450)-(x451|x452));

    if (t112 != 1741326262LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x453 = UINT16_MAX;
	uint16_t x455 = UINT16_MAX;
	int32_t x456 = 6031;
	int32_t t113 = -1;

    t113 = ((x453==x454)-(x455|x456));

    if (t113 != -65535) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x457 = 23U;
	uint8_t x458 = 2U;
	int16_t x459 = 422;
	int32_t x460 = -1;

    t114 = ((x457==x458)-(x459|x460));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x461 = -68874534636630333LL;
	int64_t x462 = INT64_MIN;
	volatile int32_t x463 = INT32_MAX;
	int64_t x464 = INT64_MAX;
	int64_t t115 = 57951149821LL;

    t115 = ((x461==x462)-(x463|x464));

    if (t115 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = -1;
	int32_t x466 = INT32_MAX;
	int32_t x467 = 2;
	int32_t x468 = -1;
	static int32_t t116 = 58563;

    t116 = ((x465==x466)-(x467|x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x469 = 15297542LLU;
	volatile int32_t x470 = 471;
	volatile uint64_t t117 = 0LLU;

    t117 = ((x469==x470)-(x471|x472));

    if (t117 != 1LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x473 = INT32_MIN;
	int8_t x474 = -1;
	static int64_t t118 = 1772811LL;

    t118 = ((x473==x474)-(x475|x476));

    if (t118 != 1LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x477 = UINT8_MAX;
	uint32_t x478 = 28737U;
	volatile int32_t x479 = -1;
	uint16_t x480 = UINT16_MAX;

    t119 = ((x477==x478)-(x479|x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x482 = INT16_MIN;
	int64_t x484 = -1LL;

    t120 = ((x481==x482)-(x483|x484));

    if (t120 != 1LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x485 = 15U;
	int32_t x486 = INT32_MAX;
	uint64_t x487 = 1488168LLU;
	int8_t x488 = INT8_MIN;
	volatile uint64_t t121 = 10672441LLU;

    t121 = ((x485==x486)-(x487|x488));

    if (t121 != 88LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint8_t x489 = 40U;
	static uint16_t x492 = UINT16_MAX;
	volatile int32_t t122 = 14332821;

    t122 = ((x489==x490)-(x491|x492));

    if (t122 != 2147418113) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x493 = 14U;
	static int64_t x494 = -1LL;
	uint64_t x495 = 1LLU;
	int8_t x496 = INT8_MAX;

    t123 = ((x493==x494)-(x495|x496));

    if (t123 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint8_t x497 = 81U;
	int64_t x499 = INT64_MIN;
	int16_t x500 = -1;

    t124 = ((x497==x498)-(x499|x500));

    if (t124 != 1LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x501 = 34U;
	static int16_t x502 = -1;
	int32_t x503 = INT32_MIN;
	static volatile int32_t t125 = -265049677;

    t125 = ((x501==x502)-(x503|x504));

    if (t125 != 2147483606) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint8_t x505 = 42U;
	int16_t x508 = -1;
	int32_t t126 = -2368886;

    t126 = ((x505==x506)-(x507|x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x509 = -6;
	int16_t x511 = -1;
	static int16_t x512 = INT16_MIN;
	static int32_t t127 = -1;

    t127 = ((x509==x510)-(x511|x512));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x513 = INT32_MAX;
	int8_t x514 = -1;
	uint16_t x515 = 12U;
	volatile int8_t x516 = INT8_MIN;

    t128 = ((x513==x514)-(x515|x516));

    if (t128 != 116) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x517 = -1LL;
	volatile int16_t x518 = 1268;
	int8_t x519 = INT8_MAX;
	int8_t x520 = INT8_MAX;
	volatile int32_t t129 = 3794448;

    t129 = ((x517==x518)-(x519|x520));

    if (t129 != -127) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x521 = INT32_MIN;
	int8_t x523 = -20;
	uint8_t x524 = 1U;
	int32_t t130 = -1;

    t130 = ((x521==x522)-(x523|x524));

    if (t130 != 19) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x525 = -1;
	uint8_t x526 = 16U;
	int32_t t131 = 554;

    t131 = ((x525==x526)-(x527|x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x529 = -7394;
	volatile int16_t x530 = -14776;
	static uint32_t x531 = 9062499U;
	volatile uint64_t x532 = 4201968258LLU;
	volatile uint64_t t132 = 721497180360377LLU;

    t132 = ((x529==x530)-(x531|x532));

    if (t132 != 18446744069498537245LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int64_t x533 = INT64_MAX;
	int8_t x534 = INT8_MIN;
	uint64_t x535 = UINT64_MAX;
	volatile uint32_t x536 = 1U;
	volatile uint64_t t133 = 8469LLU;

    t133 = ((x533==x534)-(x535|x536));

    if (t133 != 1LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x537 = INT8_MIN;
	volatile uint8_t x538 = 61U;
	int16_t x539 = 92;
	int32_t x540 = -107025443;
	static volatile int32_t t134 = 1900216;

    t134 = ((x537==x538)-(x539|x540));

    if (t134 != 107025443) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x541 = 2847039182251254533LLU;
	uint8_t x542 = 6U;
	volatile uint32_t x544 = 58764U;
	uint64_t t135 = 1LLU;

    t135 = ((x541==x542)-(x543|x544));

    if (t135 != 1LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x545 = INT64_MIN;
	volatile int16_t x546 = -3;
	int8_t x547 = INT8_MIN;
	int16_t x548 = INT16_MAX;
	volatile int32_t t136 = 1650925;

    t136 = ((x545==x546)-(x547|x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x549 = -352126444LL;
	int32_t x550 = -181;
	int64_t x551 = INT64_MIN;
	int64_t t137 = -1116851135729297829LL;

    t137 = ((x549==x550)-(x551|x552));

    if (t137 != 9223372035995372743LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x553 = 33959204881LLU;
	static volatile int32_t x554 = INT32_MIN;
	int64_t x555 = INT64_MIN;
	int16_t x556 = INT16_MAX;
	static int64_t t138 = -217793455212LL;

    t138 = ((x553==x554)-(x555|x556));

    if (t138 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x557 = 42128381LLU;
	static int64_t x560 = 153997981808584567LL;
	uint64_t t139 = 86335LLU;

    t139 = ((x557==x558)-(x559|x560));

    if (t139 != 1LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x561 = 1721837U;
	int8_t x562 = INT8_MIN;
	int64_t x563 = INT64_MIN;
	int8_t x564 = -1;
	static volatile int64_t t140 = 827303544LL;

    t140 = ((x561==x562)-(x563|x564));

    if (t140 != 1LL) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint32_t x566 = 0U;
	int16_t x567 = -1;
	int32_t x568 = INT32_MIN;
	volatile int32_t t141 = -36;

    t141 = ((x565==x566)-(x567|x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x570 = 11;
	int32_t x571 = INT32_MAX;
	int16_t x572 = -112;
	static int32_t t142 = 105898390;

    t142 = ((x569==x570)-(x571|x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x574 = UINT64_MAX;
	uint32_t x576 = UINT32_MAX;
	volatile uint32_t t143 = 1035069712U;

    t143 = ((x573==x574)-(x575|x576));

    if (t143 != 1U) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x577 = -754LL;
	int16_t x578 = -1;
	int32_t x579 = 3;
	volatile uint8_t x580 = 25U;
	int32_t t144 = 255459;

    t144 = ((x577==x578)-(x579|x580));

    if (t144 != -27) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint64_t x582 = UINT64_MAX;
	int8_t x583 = 34;
	volatile int64_t x584 = 82910819LL;
	int64_t t145 = 14LL;

    t145 = ((x581==x582)-(x583|x584));

    if (t145 != -82910819LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x585 = INT32_MAX;
	static int16_t x586 = INT16_MIN;
	uint8_t x587 = 9U;
	uint64_t x588 = UINT64_MAX;
	static volatile uint64_t t146 = 1LLU;

    t146 = ((x585==x586)-(x587|x588));

    if (t146 != 1LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint8_t x589 = 5U;
	static int32_t x590 = -202916;
	volatile uint64_t x591 = 1190949839520LLU;
	uint8_t x592 = UINT8_MAX;

    t147 = ((x589==x590)-(x591|x592));

    if (t147 != 18446742882759712001LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint64_t x593 = 5269346630815784351LLU;
	volatile uint32_t x594 = 22124U;
	int64_t x595 = INT64_MAX;
	int64_t t148 = -351450937439LL;

    t148 = ((x593==x594)-(x595|x596));

    if (t148 != 1LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x597 = INT64_MIN;
	int16_t x599 = INT16_MIN;
	uint32_t x600 = 3258044U;

    t149 = ((x597==x598)-(x599|x600));

    if (t149 != 18756U) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x601 = INT64_MAX;
	int64_t x602 = INT64_MAX;
	int32_t x604 = INT32_MIN;
	volatile int32_t t150 = -722309;

    t150 = ((x601==x602)-(x603|x604));

    if (t150 != 2147483578) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x605 = 105986U;
	static volatile uint32_t x607 = 2929U;
	uint64_t x608 = 30220646802733LLU;
	volatile uint64_t t151 = 59557738895835284LLU;

    t151 = ((x605==x606)-(x607|x608));

    if (t151 != 18446713853062746243LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x609 = -1;
	static uint32_t x610 = 132U;
	uint32_t x612 = 90U;
	volatile uint32_t t152 = 488816U;

    t152 = ((x609==x610)-(x611|x612));

    if (t152 != 4250760965U) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x613 = INT64_MAX;
	static uint8_t x615 = UINT8_MAX;
	uint8_t x616 = 15U;
	int32_t t153 = -1462;

    t153 = ((x613==x614)-(x615|x616));

    if (t153 != -255) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x617 = -14011LL;
	int8_t x618 = 11;
	static uint32_t x619 = UINT32_MAX;

    t154 = ((x617==x618)-(x619|x620));

    if (t154 != 1LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x622 = -165166;
	int32_t x623 = -30078690;
	int64_t x624 = -1358166143639762727LL;
	int64_t t155 = 221763LL;

    t155 = ((x621==x622)-(x623|x624));

    if (t155 != 25703969LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x625 = 18U;
	volatile uint8_t x626 = 0U;
	static int16_t x627 = INT16_MIN;
	int32_t x628 = 13476252;
	static int32_t t156 = -15302722;

    t156 = ((x625==x626)-(x627|x628));

    if (t156 != 24164) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x629 = 1U;
	uint8_t x631 = 47U;
	uint64_t t157 = 3211LLU;

    t157 = ((x629==x630)-(x631|x632));

    if (t157 != 18446744073646987793LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x633 = INT32_MIN;
	volatile int32_t x635 = -1043;
	int32_t x636 = -1;
	static volatile int32_t t158 = 3;

    t158 = ((x633==x634)-(x635|x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x638 = INT8_MIN;
	static volatile int16_t x639 = -1;
	int64_t x640 = -1LL;
	int64_t t159 = -1LL;

    t159 = ((x637==x638)-(x639|x640));

    if (t159 != 1LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static int32_t x642 = 855056;
	uint64_t x643 = UINT64_MAX;
	int32_t x644 = INT32_MIN;
	uint64_t t160 = 3674732LLU;

    t160 = ((x641==x642)-(x643|x644));

    if (t160 != 1LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static int64_t x646 = INT64_MIN;
	volatile uint16_t x647 = 1U;
	volatile int32_t t161 = -666134782;

    t161 = ((x645==x646)-(x647|x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x649 = INT32_MIN;
	int64_t x650 = INT64_MAX;
	int16_t x651 = INT16_MAX;
	volatile uint16_t x652 = UINT16_MAX;
	volatile int32_t t162 = -524280203;

    t162 = ((x649==x650)-(x651|x652));

    if (t162 != -65535) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint16_t x653 = 56U;
	static int16_t x654 = INT16_MIN;
	uint64_t x656 = 199448LLU;
	uint64_t t163 = 4LLU;

    t163 = ((x653==x654)-(x655|x656));

    if (t163 != 40902274597889LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x657 = -1;
	static uint16_t x658 = UINT16_MAX;
	volatile int64_t x660 = INT64_MIN;
	volatile int64_t t164 = 91041948572900626LL;

    t164 = ((x657==x658)-(x659|x660));

    if (t164 != 3LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x661 = 115;
	volatile uint16_t x663 = UINT16_MAX;
	uint64_t x664 = 1279354595812228LLU;
	volatile uint64_t t165 = 1095079276491972LLU;

    t165 = ((x661==x662)-(x663|x664));

    if (t165 != 18445464719113715713LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x665 = -1541;
	int64_t x666 = -1LL;
	static volatile int64_t t166 = -111343886499199LL;

    t166 = ((x665==x666)-(x667|x668));

    if (t166 != 41973539LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x669 = -37828293075614LL;
	int8_t x670 = -1;
	volatile uint32_t x671 = 985660U;
	uint32_t x672 = 15287U;
	uint32_t t167 = 1066165U;

    t167 = ((x669==x670)-(x671|x672));

    if (t167 != 4293968961U) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile uint16_t x673 = 6564U;
	int16_t x674 = -1;
	uint8_t x675 = 1U;
	int16_t x676 = -1;
	volatile int32_t t168 = 488837669;

    t168 = ((x673==x674)-(x675|x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static int16_t x677 = INT16_MIN;
	int16_t x678 = 0;
	static int64_t x679 = -1LL;
	uint32_t x680 = 53U;
	int64_t t169 = 1LL;

    t169 = ((x677==x678)-(x679|x680));

    if (t169 != 1LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x682 = 73633185269139135LLU;
	static uint8_t x684 = UINT8_MAX;

    t170 = ((x681==x682)-(x683|x684));

    if (t170 != 18446737081665957889LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x685 = INT16_MIN;
	int32_t x686 = INT32_MIN;
	uint32_t x687 = 22U;
	int64_t x688 = 107494569920714LL;
	static int64_t t171 = 3380861333642044918LL;

    t171 = ((x685==x686)-(x687|x688));

    if (t171 != -107494569920734LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x689 = INT32_MIN;
	int64_t x692 = INT64_MIN;
	int64_t t172 = -1588481349348LL;

    t172 = ((x689==x690)-(x691|x692));

    if (t172 != 21LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x693 = INT64_MAX;
	uint8_t x694 = UINT8_MAX;
	static uint16_t x696 = UINT16_MAX;
	uint32_t t173 = 5U;

    t173 = ((x693==x694)-(x695|x696));

    if (t173 != 1U) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x697 = INT16_MIN;
	uint8_t x698 = UINT8_MAX;
	uint64_t x700 = UINT64_MAX;
	static uint64_t t174 = 1043492318421204452LLU;

    t174 = ((x697==x698)-(x699|x700));

    if (t174 != 1LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile int32_t x701 = -1049397073;
	int32_t x702 = INT32_MIN;
	int8_t x703 = -1;
	int16_t x704 = 2;
	volatile int32_t t175 = 1;

    t175 = ((x701==x702)-(x703|x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x705 = 2LL;
	int32_t x706 = INT32_MAX;
	static volatile uint32_t x707 = UINT32_MAX;
	int8_t x708 = INT8_MIN;
	volatile uint32_t t176 = 113546U;

    t176 = ((x705==x706)-(x707|x708));

    if (t176 != 1U) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x710 = INT64_MIN;
	static int8_t x711 = INT8_MIN;
	static volatile int8_t x712 = 0;
	volatile int32_t t177 = -7506550;

    t177 = ((x709==x710)-(x711|x712));

    if (t177 != 128) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int8_t x714 = INT8_MIN;
	uint16_t x715 = 1U;
	int16_t x716 = INT16_MIN;

    t178 = ((x713==x714)-(x715|x716));

    if (t178 != 32767) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x717 = 7509901LLU;
	volatile int64_t x718 = INT64_MAX;
	int32_t x719 = INT32_MIN;
	int64_t t179 = 5197LL;

    t179 = ((x717==x718)-(x719|x720));

    if (t179 != 1LL) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int32_t x721 = INT32_MIN;
	volatile uint64_t x722 = 4028979389LLU;
	uint64_t x723 = 63972854761746597LLU;
	volatile int64_t x724 = INT64_MIN;
	volatile uint64_t t180 = 2996875034734LLU;

    t180 = ((x721==x722)-(x723|x724));

    if (t180 != 9159399182093029211LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x725 = INT8_MIN;
	uint16_t x726 = 286U;
	int32_t x727 = 1192;
	int32_t x728 = -1;
	volatile int32_t t181 = -484098;

    t181 = ((x725==x726)-(x727|x728));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x729 = INT64_MAX;
	static int32_t x730 = INT32_MIN;
	int16_t x731 = INT16_MIN;
	int8_t x732 = INT8_MIN;
	volatile int32_t t182 = 864813;

    t182 = ((x729==x730)-(x731|x732));

    if (t182 != 128) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint16_t x733 = 12U;
	int8_t x734 = INT8_MAX;
	static volatile int8_t x735 = -1;
	volatile uint16_t x736 = 13U;

    t183 = ((x733==x734)-(x735|x736));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x739 = UINT16_MAX;
	int64_t x740 = INT64_MIN;
	volatile int64_t t184 = -62025366262LL;

    t184 = ((x737==x738)-(x739|x740));

    if (t184 != 9223372036854710273LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x741 = -1;
	int32_t x742 = INT32_MIN;
	static int32_t x743 = INT32_MIN;
	int8_t x744 = -1;
	int32_t t185 = 19;

    t185 = ((x741==x742)-(x743|x744));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x745 = INT32_MIN;
	uint64_t x746 = 494793LLU;
	static volatile int16_t x747 = 6672;
	volatile int64_t x748 = -184819681428LL;
	int64_t t186 = 65065LL;

    t186 = ((x745==x746)-(x747|x748));

    if (t186 != 184819679364LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x749 = INT64_MAX;
	static uint16_t x750 = 274U;
	uint32_t x752 = 7799U;
	uint32_t t187 = 454U;

    t187 = ((x749==x750)-(x751|x752));

    if (t187 != 4294934529U) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile uint64_t x753 = UINT64_MAX;
	uint8_t x755 = 97U;
	int8_t x756 = INT8_MAX;
	volatile int32_t t188 = -65;

    t188 = ((x753==x754)-(x755|x756));

    if (t188 != -127) { NG(); } else { ; }
	
}

void f189(void) {
    	static int64_t x757 = -1LL;
	int16_t x758 = INT16_MIN;
	int64_t x760 = 329505650720091822LL;

    t189 = ((x757==x758)-(x759|x760));

    if (t189 != 18LL) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x761 = 3235U;
	int32_t x762 = INT32_MAX;

    t190 = ((x761==x762)-(x763|x764));

    if (t190 != -339) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x767 = INT8_MIN;
	volatile uint64_t x768 = UINT64_MAX;
	volatile uint64_t t191 = 95LLU;

    t191 = ((x765==x766)-(x767|x768));

    if (t191 != 1LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x769 = -15;
	uint32_t x770 = 1756U;
	uint8_t x771 = 10U;
	uint64_t x772 = UINT64_MAX;
	volatile uint64_t t192 = 4LLU;

    t192 = ((x769==x770)-(x771|x772));

    if (t192 != 1LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x773 = INT64_MAX;
	int32_t x774 = INT32_MIN;
	uint8_t x776 = UINT8_MAX;

    t193 = ((x773==x774)-(x775|x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x777 = INT16_MIN;
	int8_t x778 = INT8_MIN;
	volatile uint32_t x779 = 2086U;
	volatile int64_t t194 = -23734LL;

    t194 = ((x777==x778)-(x779|x780));

    if (t194 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x781 = UINT64_MAX;
	int8_t x782 = 1;
	int16_t x783 = INT16_MIN;

    t195 = ((x781==x782)-(x783|x784));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x785 = INT8_MAX;
	int32_t x787 = INT32_MIN;
	uint32_t x788 = 11058060U;

    t196 = ((x785==x786)-(x787|x788));

    if (t196 != 2136425588U) { NG(); } else { ; }
	
}

void f197(void) {
    	static int8_t x789 = -1;
	int16_t x791 = -1;
	int8_t x792 = -1;
	int32_t t197 = 0;

    t197 = ((x789==x790)-(x791|x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x794 = 805U;
	int64_t x795 = -1LL;
	int64_t x796 = INT64_MIN;

    t198 = ((x793==x794)-(x795|x796));

    if (t198 != 1LL) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile uint8_t x798 = 1U;
	static uint8_t x799 = 29U;
	static volatile int64_t x800 = INT64_MIN;
	int64_t t199 = 98LL;

    t199 = ((x797==x798)-(x799|x800));

    if (t199 != 9223372036854775779LL) { NG(); } else { ; }
	
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

