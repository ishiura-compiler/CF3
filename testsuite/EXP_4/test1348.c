
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

static int8_t x7 = INT8_MAX;
int32_t t3 = -37;
uint64_t x17 = UINT64_MAX;
uint64_t t4 = 56189112652878526LLU;
uint64_t x29 = 34571887658LLU;
volatile int16_t x36 = -1;
int32_t t8 = 3179;
int64_t x40 = 246165887583LL;
int32_t x42 = INT32_MIN;
volatile int64_t x45 = 153721836170703283LL;
int16_t x47 = INT16_MIN;
static int32_t x49 = INT32_MIN;
static int8_t x50 = INT8_MAX;
int16_t x52 = INT16_MIN;
uint16_t x54 = 2256U;
int64_t x55 = INT64_MAX;
int16_t x60 = INT16_MAX;
uint16_t x63 = 1U;
uint16_t x65 = 50U;
volatile int32_t x66 = INT32_MIN;
volatile int64_t t19 = -17940401057764669LL;
volatile int16_t x82 = INT16_MIN;
int8_t x84 = INT8_MAX;
uint32_t t20 = 263928U;
static int16_t x86 = INT16_MAX;
volatile int16_t x87 = -1;
static int64_t t21 = 1955LL;
int32_t x103 = -1;
volatile uint64_t x112 = UINT64_MAX;
static int16_t x120 = INT16_MIN;
int64_t t29 = -64516675864102LL;
uint8_t x129 = UINT8_MAX;
int32_t x133 = INT32_MIN;
uint8_t x136 = 3U;
uint32_t x138 = 47369U;
uint32_t t33 = 14U;
static uint32_t x144 = 1202154001U;
volatile int32_t t34 = -1;
int64_t x151 = INT64_MIN;
volatile int32_t x166 = 1495;
int32_t x176 = -1;
uint32_t x178 = UINT32_MAX;
uint16_t x179 = 12906U;
static int8_t x187 = 1;
static int32_t t46 = 724;
int16_t x201 = -1;
static uint64_t x203 = 117025939LLU;
uint64_t x204 = 20474370424615137LLU;
uint16_t x205 = UINT16_MAX;
static volatile int32_t t49 = -3;
int32_t t53 = 251;
int32_t x232 = INT32_MIN;
int16_t x245 = INT16_MIN;
int64_t t61 = -1244LL;
uint32_t x262 = 12102U;
static uint32_t t62 = 11785U;
volatile int64_t x267 = INT64_MAX;
volatile int32_t x270 = INT32_MIN;
uint8_t x274 = UINT8_MAX;
volatile int16_t x278 = 2158;
uint16_t x280 = UINT16_MAX;
volatile int16_t x283 = INT16_MIN;
int32_t t68 = 114;
static int8_t x290 = INT8_MAX;
int32_t t69 = -20254245;
static int32_t x296 = INT32_MAX;
static int32_t x303 = INT32_MIN;
uint64_t x306 = 70137121LLU;
volatile int16_t x307 = INT16_MIN;
volatile int32_t t74 = -1719;
int8_t x313 = 27;
int32_t x317 = INT32_MAX;
int32_t x320 = INT32_MIN;
volatile int32_t t76 = -41;
uint16_t x333 = UINT16_MAX;
int32_t t80 = -2950926;
uint32_t x337 = 0U;
volatile uint32_t t81 = 14693U;
uint32_t x342 = 122U;
int64_t x353 = 2047109LL;
int32_t x357 = -1;
int64_t x369 = INT64_MAX;
static int32_t x370 = -1;
uint32_t x371 = 1U;
static int64_t t90 = 2LL;
uint8_t x380 = 19U;
static uint64_t x387 = 1818384281516LLU;
int32_t x388 = INT32_MIN;
volatile uint16_t x391 = 7U;
volatile uint8_t x395 = 1U;
int64_t x397 = 434LL;
int64_t x401 = -1LL;
static int16_t x402 = INT16_MAX;
uint64_t x404 = 319781477545359LLU;
int32_t x408 = INT32_MIN;
uint8_t x409 = UINT8_MAX;
int64_t x411 = -1LL;
static int32_t x412 = -448122;
volatile int32_t t99 = -14071279;
int8_t x419 = INT8_MIN;
int32_t t102 = -1;
volatile int8_t x428 = 0;
static int32_t t103 = 24442129;
uint64_t x433 = UINT64_MAX;
uint32_t x435 = 6U;
uint64_t t105 = 3466941170LLU;
int16_t x437 = INT16_MAX;
volatile int32_t t108 = -601520;
uint16_t x450 = 7U;
int64_t t109 = -472743647LL;
int8_t x453 = -1;
int64_t x458 = -1LL;
int8_t x462 = 1;
int32_t x464 = 0;
static volatile int32_t t112 = -6;
volatile int32_t t113 = 125;
int64_t x469 = 1986LL;
volatile uint64_t x472 = 443744145LLU;
uint16_t x475 = UINT16_MAX;
volatile int64_t x479 = -1LL;
int16_t x480 = INT16_MAX;
static volatile uint64_t x485 = UINT64_MAX;
int64_t x494 = INT64_MIN;
volatile uint8_t x501 = UINT8_MAX;
int64_t x510 = INT64_MIN;
static volatile uint32_t t123 = 110U;
static int64_t x526 = 1080744979738400LL;
int32_t x528 = 5975801;
int64_t x532 = -102020598220LL;
int16_t x538 = -1;
uint16_t x539 = UINT16_MAX;
volatile int16_t x540 = INT16_MIN;
volatile int64_t x545 = -1LL;
volatile uint64_t t132 = 1293394014LLU;
uint64_t x555 = 43LLU;
uint8_t x567 = 13U;
static volatile int32_t t136 = 360979;
volatile uint32_t x569 = 2U;
volatile int64_t x570 = -1LL;
uint8_t x578 = UINT8_MAX;
volatile uint64_t x590 = 14569929LLU;
uint64_t x601 = UINT64_MAX;
int16_t x604 = INT16_MAX;
uint64_t x605 = 43004570LLU;
volatile uint64_t t146 = 7674LLU;
int16_t x633 = 58;
uint64_t x634 = 5582699178292622LLU;
int16_t x644 = 0;
int8_t x645 = INT8_MIN;
int8_t x648 = -16;
static int32_t x651 = INT32_MIN;
volatile uint32_t x652 = UINT32_MAX;
static uint64_t t157 = 27661043827LLU;
int32_t x657 = 1;
static volatile uint16_t x664 = 10912U;
uint64_t t160 = 2239199275455051725LLU;
uint16_t x666 = UINT16_MAX;
int32_t x670 = -1;
int16_t x672 = INT16_MAX;
uint64_t x673 = 8LLU;
volatile uint64_t t163 = 7722LLU;
int8_t x677 = 15;
static int16_t x684 = INT16_MIN;
volatile int32_t x688 = -1;
volatile int32_t t166 = 61518131;
int16_t x691 = INT16_MIN;
volatile uint64_t t167 = 1147935777921273LLU;
static int16_t x695 = 106;
int32_t t168 = 564;
uint8_t x697 = 25U;
int16_t x702 = -1;
static volatile int64_t x704 = INT64_MIN;
uint64_t x707 = UINT64_MAX;
int16_t x714 = INT16_MIN;
int64_t x716 = INT64_MIN;
uint64_t x717 = 929LLU;
uint32_t t175 = 1551052U;
int64_t x726 = INT64_MIN;
uint32_t x727 = 238784566U;
volatile int64_t t176 = 6732590729LL;
uint8_t x731 = 1U;
volatile int16_t x751 = INT16_MIN;
uint64_t x757 = 7455930321LLU;
uint32_t x761 = 2578791U;
volatile int64_t x763 = INT64_MIN;
uint32_t x766 = 116059548U;
uint64_t x775 = UINT64_MAX;
static volatile int8_t x776 = -1;
static int32_t t188 = 2741;
volatile uint64_t x779 = 13580891LLU;
int8_t x780 = INT8_MAX;
int32_t t189 = -1965;
int64_t x783 = INT64_MIN;
volatile int32_t t190 = 235353;
int32_t x788 = INT32_MIN;
volatile uint64_t t191 = 572120328382178383LLU;
int16_t x790 = INT16_MIN;
int32_t x796 = INT32_MIN;
int32_t x799 = INT32_MAX;
volatile int32_t t194 = -3;
uint8_t x804 = 5U;
volatile uint16_t x808 = 20574U;
int64_t t196 = 3523717658LL;
volatile uint16_t x809 = 144U;
int16_t x819 = INT16_MAX;


void f0(void) {
    	uint64_t x1 = 14491112436LLU;
	uint64_t x2 = 81255LLU;
	volatile int32_t x3 = INT32_MIN;
	volatile int64_t x4 = 1157058LL;
	static volatile uint64_t t0 = 3880935263529246LLU;

    t0 = (x1/(x2|(x3!=x4)));

    if (t0 != 178341LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = -1;
	int16_t x6 = 3;
	uint16_t x8 = UINT16_MAX;
	static int32_t t1 = -40175;

    t1 = (x5/(x6|(x7!=x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = -3;
	uint32_t x10 = 18U;
	uint32_t x11 = 14402856U;
	static volatile int64_t x12 = INT64_MIN;
	uint32_t t2 = 0U;

    t2 = (x9/(x10|(x11!=x12)));

    if (t2 != 226050910U) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x13 = INT8_MAX;
	int32_t x14 = INT32_MIN;
	uint64_t x15 = UINT64_MAX;
	int16_t x16 = -1;

    t3 = (x13/(x14|(x15!=x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x18 = -83;
	uint8_t x19 = UINT8_MAX;
	volatile uint8_t x20 = UINT8_MAX;

    t4 = (x17/(x18|(x19!=x20)));

    if (t4 != 1LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = -1LL;
	volatile int64_t x22 = INT64_MAX;
	volatile uint16_t x23 = UINT16_MAX;
	int16_t x24 = INT16_MIN;
	int64_t t5 = -132610330186767406LL;

    t5 = (x21/(x22|(x23!=x24)));

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint32_t x25 = UINT32_MAX;
	int8_t x26 = 12;
	volatile int16_t x27 = INT16_MIN;
	static volatile int8_t x28 = INT8_MIN;
	volatile uint32_t t6 = 45U;

    t6 = (x25/(x26|(x27!=x28)));

    if (t6 != 330382099U) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x30 = -1;
	int16_t x31 = -1;
	int8_t x32 = INT8_MIN;
	volatile uint64_t t7 = 135831412278LLU;

    t7 = (x29/(x30|(x31!=x32)));

    if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = -38;
	int8_t x34 = -1;
	int64_t x35 = -1LL;

    t8 = (x33/(x34|(x35!=x36)));

    if (t8 != 38) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint16_t x37 = 624U;
	uint16_t x38 = 1U;
	volatile int8_t x39 = INT8_MIN;
	volatile int32_t t9 = -387052;

    t9 = (x37/(x38|(x39!=x40)));

    if (t9 != 624) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x41 = 174485211LLU;
	int16_t x43 = INT16_MIN;
	uint8_t x44 = 30U;
	static uint64_t t10 = 2757LLU;

    t10 = (x41/(x42|(x43!=x44)));

    if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x46 = 203397LL;
	volatile int32_t x48 = INT32_MIN;
	volatile int64_t t11 = -2467224531LL;

    t11 = (x45/(x46|(x47!=x48)));

    if (t11 != 755772386862LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x51 = 9;
	static int32_t t12 = 1610;

    t12 = (x49/(x50|(x51!=x52)));

    if (t12 != -16909320) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int64_t x53 = -1LL;
	uint16_t x56 = 2132U;
	volatile int64_t t13 = 0LL;

    t13 = (x53/(x54|(x55!=x56)));

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x57 = 2U;
	volatile int32_t x58 = -702272905;
	uint8_t x59 = 56U;
	static int32_t t14 = 141277528;

    t14 = (x57/(x58|(x59!=x60)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x61 = 127163U;
	uint64_t x62 = 193LLU;
	int16_t x64 = INT16_MIN;
	uint64_t t15 = 45200845492LLU;

    t15 = (x61/(x62|(x63!=x64)));

    if (t15 != 658LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int64_t x67 = INT64_MIN;
	int32_t x68 = 96719666;
	volatile int32_t t16 = -75024;

    t16 = (x65/(x66|(x67!=x68)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = INT32_MIN;
	static int64_t x70 = -4917085953647522LL;
	volatile int32_t x71 = INT32_MAX;
	volatile uint32_t x72 = 297990880U;
	static int64_t t17 = -247638461117224228LL;

    t17 = (x69/(x70|(x71!=x72)));

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x73 = UINT8_MAX;
	int64_t x74 = 18882058475214272LL;
	static int16_t x75 = INT16_MAX;
	int16_t x76 = INT16_MIN;
	int64_t t18 = -129947554287727983LL;

    t18 = (x73/(x74|(x75!=x76)));

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = -236601902546785737LL;
	int8_t x78 = INT8_MIN;
	static int32_t x79 = -15931278;
	int16_t x80 = INT16_MAX;

    t19 = (x77/(x78|(x79!=x80)));

    if (t19 != 1863007106667604LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x81 = UINT32_MAX;
	volatile uint64_t x83 = UINT64_MAX;

    t20 = (x81/(x82|(x83!=x84)));

    if (t20 != 1U) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = 1555157LL;
	static volatile int8_t x88 = 1;

    t21 = (x85/(x86|(x87!=x88)));

    if (t21 != 47LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile int64_t x89 = INT64_MIN;
	int16_t x90 = 0;
	uint64_t x91 = 2LLU;
	volatile uint16_t x92 = UINT16_MAX;
	volatile int64_t t22 = INT64_MIN;

    t22 = (x89/(x90|(x91!=x92)));

    if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = INT64_MIN;
	uint8_t x94 = UINT8_MAX;
	int16_t x95 = 10339;
	int8_t x96 = 2;
	volatile int64_t t23 = 11123348531508667LL;

    t23 = (x93/(x94|(x95!=x96)));

    if (t23 != -36170086419038336LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x97 = UINT64_MAX;
	int32_t x98 = -2657;
	uint32_t x99 = 1025249388U;
	int8_t x100 = -4;
	volatile uint64_t t24 = 585390429919133958LLU;

    t24 = (x97/(x98|(x99!=x100)));

    if (t24 != 1LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x101 = UINT32_MAX;
	uint32_t x102 = 32177U;
	volatile int64_t x104 = INT64_MIN;
	volatile uint32_t t25 = 176301576U;

    t25 = (x101/(x102|(x103!=x104)));

    if (t25 != 133479U) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = INT64_MIN;
	int32_t x106 = 864713980;
	volatile uint8_t x107 = 12U;
	volatile int16_t x108 = -1771;
	volatile int64_t t26 = 10LL;

    t26 = (x105/(x106|(x107!=x108)));

    if (t26 != -10666384769LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x109 = UINT8_MAX;
	int8_t x110 = INT8_MIN;
	volatile uint32_t x111 = 556U;
	volatile int32_t t27 = -1;

    t27 = (x109/(x110|(x111!=x112)));

    if (t27 != -2) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x117 = -1LL;
	int32_t x118 = -447;
	int64_t x119 = INT64_MAX;
	int64_t t28 = 384176409554LL;

    t28 = (x117/(x118|(x119!=x120)));

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x121 = -1;
	static int64_t x122 = INT64_MIN;
	uint32_t x123 = 1U;
	uint32_t x124 = 3212U;

    t29 = (x121/(x122|(x123!=x124)));

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint8_t x125 = 6U;
	volatile int16_t x126 = INT16_MIN;
	uint16_t x127 = UINT16_MAX;
	int8_t x128 = INT8_MAX;
	int32_t t30 = 1820931;

    t30 = (x125/(x126|(x127!=x128)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x130 = -1;
	int8_t x131 = -1;
	int32_t x132 = -4309379;
	int32_t t31 = -28;

    t31 = (x129/(x130|(x131!=x132)));

    if (t31 != -255) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile int32_t x134 = INT32_MIN;
	int32_t x135 = INT32_MIN;
	int32_t t32 = 15;

    t32 = (x133/(x134|(x135!=x136)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x137 = UINT8_MAX;
	int64_t x139 = INT64_MIN;
	int16_t x140 = INT16_MIN;

    t33 = (x137/(x138|(x139!=x140)));

    if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x141 = INT32_MIN;
	static int8_t x142 = INT8_MAX;
	int64_t x143 = INT64_MAX;

    t34 = (x141/(x142|(x143!=x144)));

    if (t34 != -16909320) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int32_t x145 = INT32_MIN;
	uint64_t x146 = UINT64_MAX;
	uint32_t x147 = 308U;
	uint8_t x148 = UINT8_MAX;
	volatile uint64_t t35 = 3633LLU;

    t35 = (x145/(x146|(x147!=x148)));

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x149 = -1;
	int64_t x150 = -1LL;
	int16_t x152 = INT16_MIN;
	static volatile int64_t t36 = -37957658333886LL;

    t36 = (x149/(x150|(x151!=x152)));

    if (t36 != 1LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x153 = INT64_MAX;
	static volatile uint16_t x154 = 1115U;
	static int64_t x155 = 2033360564LL;
	volatile int32_t x156 = -1;
	int64_t t37 = 8721207943257LL;

    t37 = (x153/(x154|(x155!=x156)));

    if (t37 != 8272082544264372LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x157 = -90378256814564575LL;
	uint32_t x158 = 1U;
	volatile int32_t x159 = INT32_MAX;
	int32_t x160 = INT32_MIN;
	static int64_t t38 = -1128404190387977658LL;

    t38 = (x157/(x158|(x159!=x160)));

    if (t38 != -90378256814564575LL) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint64_t x161 = UINT64_MAX;
	int64_t x162 = INT64_MIN;
	int64_t x163 = -1LL;
	volatile int16_t x164 = -2;
	uint64_t t39 = 155328399632LLU;

    t39 = (x161/(x162|(x163!=x164)));

    if (t39 != 1LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x165 = -1LL;
	static int16_t x167 = INT16_MAX;
	int16_t x168 = -1;
	static int64_t t40 = 69893216024381LL;

    t40 = (x165/(x166|(x167!=x168)));

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x169 = INT8_MIN;
	int16_t x170 = INT16_MAX;
	static uint64_t x171 = 40843224875LLU;
	static uint8_t x172 = 87U;
	static int32_t t41 = -266;

    t41 = (x169/(x170|(x171!=x172)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x173 = -1LL;
	int8_t x174 = INT8_MIN;
	int32_t x175 = INT32_MIN;
	int64_t t42 = 488931011684274LL;

    t42 = (x173/(x174|(x175!=x176)));

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint8_t x177 = 6U;
	volatile int32_t x180 = -1;
	volatile uint32_t t43 = 11U;

    t43 = (x177/(x178|(x179!=x180)));

    if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
    	static int32_t x185 = INT32_MAX;
	int64_t x186 = -155221450LL;
	int16_t x188 = -1324;
	int64_t t44 = 8565106918343896LL;

    t44 = (x185/(x186|(x187!=x188)));

    if (t44 != -13LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x193 = 3LLU;
	uint8_t x194 = 20U;
	int16_t x195 = INT16_MIN;
	static volatile int64_t x196 = INT64_MIN;
	volatile uint64_t t45 = 32587LLU;

    t45 = (x193/(x194|(x195!=x196)));

    if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x197 = INT8_MAX;
	int8_t x198 = -1;
	static volatile int16_t x199 = -1;
	int32_t x200 = INT32_MIN;

    t46 = (x197/(x198|(x199!=x200)));

    if (t46 != -127) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint32_t x202 = UINT32_MAX;
	uint32_t t47 = 12U;

    t47 = (x201/(x202|(x203!=x204)));

    if (t47 != 1U) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x206 = 49837LL;
	volatile int16_t x207 = INT16_MIN;
	int32_t x208 = 22742;
	int64_t t48 = -5LL;

    t48 = (x205/(x206|(x207!=x208)));

    if (t48 != 1LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x209 = 7;
	int8_t x210 = INT8_MIN;
	int64_t x211 = -155596858622LL;
	int64_t x212 = -1LL;

    t49 = (x209/(x210|(x211!=x212)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x213 = INT8_MIN;
	int16_t x214 = -1;
	volatile int8_t x215 = 1;
	static uint16_t x216 = 6103U;
	int32_t t50 = 4943520;

    t50 = (x213/(x214|(x215!=x216)));

    if (t50 != 128) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x217 = 44932702LLU;
	uint64_t x218 = 7530982054304635175LLU;
	int16_t x219 = INT16_MIN;
	static int16_t x220 = INT16_MAX;
	volatile uint64_t t51 = 5434LLU;

    t51 = (x217/(x218|(x219!=x220)));

    if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x221 = -1;
	static int64_t x222 = INT64_MAX;
	int8_t x223 = -1;
	int8_t x224 = 5;
	int64_t t52 = 785LL;

    t52 = (x221/(x222|(x223!=x224)));

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x225 = INT8_MIN;
	int32_t x226 = -1;
	volatile int8_t x227 = -1;
	int16_t x228 = 9;

    t53 = (x225/(x226|(x227!=x228)));

    if (t53 != 128) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int32_t x229 = -39;
	int64_t x230 = INT64_MIN;
	int64_t x231 = 389362153381LL;
	static int64_t t54 = -35LL;

    t54 = (x229/(x230|(x231!=x232)));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x233 = INT8_MAX;
	int64_t x234 = -2844019664449LL;
	int32_t x235 = 56;
	int64_t x236 = INT64_MIN;
	volatile int64_t t55 = 1010890LL;

    t55 = (x233/(x234|(x235!=x236)));

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint64_t x237 = UINT64_MAX;
	uint16_t x238 = 0U;
	uint32_t x239 = 144U;
	static int16_t x240 = 26;
	uint64_t t56 = UINT64_MAX;

    t56 = (x237/(x238|(x239!=x240)));

    if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x241 = INT16_MIN;
	uint8_t x242 = 7U;
	int32_t x243 = INT32_MIN;
	volatile int8_t x244 = INT8_MAX;
	volatile int32_t t57 = -11438;

    t57 = (x241/(x242|(x243!=x244)));

    if (t57 != -4681) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x246 = 87U;
	uint16_t x247 = 216U;
	static int8_t x248 = 2;
	static volatile int32_t t58 = -4735190;

    t58 = (x245/(x246|(x247!=x248)));

    if (t58 != -376) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x249 = INT32_MAX;
	uint64_t x250 = 1575847643361LLU;
	static int16_t x251 = -450;
	static int32_t x252 = INT32_MAX;
	uint64_t t59 = 114244LLU;

    t59 = (x249/(x250|(x251!=x252)));

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x253 = INT64_MIN;
	int8_t x254 = INT8_MAX;
	uint8_t x255 = UINT8_MAX;
	volatile int32_t x256 = 91;
	volatile int64_t t60 = -7100448589LL;

    t60 = (x253/(x254|(x255!=x256)));

    if (t60 != -72624976668147841LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x257 = INT32_MAX;
	int64_t x258 = INT64_MAX;
	volatile uint32_t x259 = 376U;
	volatile int8_t x260 = INT8_MAX;

    t61 = (x257/(x258|(x259!=x260)));

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x261 = INT16_MAX;
	int16_t x263 = -7;
	int64_t x264 = 1437LL;

    t62 = (x261/(x262|(x263!=x264)));

    if (t62 != 2U) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x265 = INT64_MAX;
	int16_t x266 = -1;
	int64_t x268 = 28162828LL;
	static int64_t t63 = 117540862LL;

    t63 = (x265/(x266|(x267!=x268)));

    if (t63 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x269 = INT8_MAX;
	static uint32_t x271 = UINT32_MAX;
	static int8_t x272 = 43;
	int32_t t64 = -74;

    t64 = (x269/(x270|(x271!=x272)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int32_t x273 = INT32_MIN;
	volatile int32_t x275 = -1;
	int32_t x276 = -1;
	int32_t t65 = 4408;

    t65 = (x273/(x274|(x275!=x276)));

    if (t65 != -8421504) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x277 = INT32_MIN;
	static int32_t x279 = 3;
	int32_t t66 = -1439;

    t66 = (x277/(x278|(x279!=x280)));

    if (t66 != -994665) { NG(); } else { ; }
	
}

void f67(void) {
    	static int32_t x281 = 4664;
	int8_t x282 = INT8_MAX;
	int8_t x284 = INT8_MIN;
	int32_t t67 = 184064;

    t67 = (x281/(x282|(x283!=x284)));

    if (t67 != 36) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int16_t x285 = 4403;
	int32_t x286 = -34019;
	static int64_t x287 = -193808978968832311LL;
	uint8_t x288 = UINT8_MAX;

    t68 = (x285/(x286|(x287!=x288)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x289 = INT16_MIN;
	int8_t x291 = -2;
	uint32_t x292 = UINT32_MAX;

    t69 = (x289/(x290|(x291!=x292)));

    if (t69 != -258) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x293 = -3500899;
	volatile uint64_t x294 = 3672656546LLU;
	volatile int32_t x295 = 42;
	volatile uint64_t t70 = 36706588875LLU;

    t70 = (x293/(x294|(x295!=x296)));

    if (t70 != 5022725059LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x297 = INT32_MIN;
	uint8_t x298 = 1U;
	uint8_t x299 = 19U;
	uint8_t x300 = 1U;
	int32_t t71 = INT32_MIN;

    t71 = (x297/(x298|(x299!=x300)));

    if (t71 != INT32_MIN) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int16_t x301 = INT16_MIN;
	int8_t x302 = INT8_MAX;
	int16_t x304 = -1;
	int32_t t72 = 15633976;

    t72 = (x301/(x302|(x303!=x304)));

    if (t72 != -258) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x305 = -1;
	uint32_t x308 = 449U;
	uint64_t t73 = 56064312663407708LLU;

    t73 = (x305/(x306|(x307!=x308)));

    if (t73 != 263009713126LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x309 = UINT16_MAX;
	uint8_t x310 = 4U;
	int16_t x311 = INT16_MAX;
	int8_t x312 = INT8_MIN;

    t74 = (x309/(x310|(x311!=x312)));

    if (t74 != 13107) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint64_t x314 = 16753414564041819LLU;
	int8_t x315 = INT8_MIN;
	uint64_t x316 = UINT64_MAX;
	volatile uint64_t t75 = 2211287408520LLU;

    t75 = (x313/(x314|(x315!=x316)));

    if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x318 = 1329U;
	int64_t x319 = -1LL;

    t76 = (x317/(x318|(x319!=x320)));

    if (t76 != 1615864) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint32_t x321 = 0U;
	volatile int64_t x322 = -1LL;
	volatile int32_t x323 = INT32_MIN;
	volatile int8_t x324 = INT8_MIN;
	int64_t t77 = 3885333936100LL;

    t77 = (x321/(x322|(x323!=x324)));

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x325 = UINT8_MAX;
	uint16_t x326 = UINT16_MAX;
	int8_t x327 = -1;
	static int16_t x328 = -1;
	int32_t t78 = 344;

    t78 = (x325/(x326|(x327!=x328)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x329 = UINT8_MAX;
	int8_t x330 = INT8_MIN;
	int8_t x331 = 6;
	uint64_t x332 = UINT64_MAX;
	static int32_t t79 = -213;

    t79 = (x329/(x330|(x331!=x332)));

    if (t79 != -2) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x334 = 3U;
	uint16_t x335 = 3220U;
	int8_t x336 = INT8_MIN;

    t80 = (x333/(x334|(x335!=x336)));

    if (t80 != 21845) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x338 = -7814;
	uint64_t x339 = 3LLU;
	int64_t x340 = -1LL;

    t81 = (x337/(x338|(x339!=x340)));

    if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x341 = -25;
	int32_t x343 = -1624622;
	int16_t x344 = -6;
	uint32_t t82 = 169444U;

    t82 = (x341/(x342|(x343!=x344)));

    if (t82 != 34918433U) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int8_t x345 = -1;
	uint16_t x346 = 5574U;
	int32_t x347 = 1841987;
	int8_t x348 = INT8_MIN;
	int32_t t83 = 2;

    t83 = (x345/(x346|(x347!=x348)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x349 = 5U;
	int32_t x350 = INT32_MIN;
	uint16_t x351 = 7U;
	uint16_t x352 = UINT16_MAX;
	volatile int32_t t84 = -1988232;

    t84 = (x349/(x350|(x351!=x352)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile int8_t x354 = -3;
	int8_t x355 = -1;
	volatile int8_t x356 = INT8_MAX;
	static int64_t t85 = -24281256134107LL;

    t85 = (x353/(x354|(x355!=x356)));

    if (t85 != -682369LL) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int8_t x358 = -1;
	uint8_t x359 = UINT8_MAX;
	static uint32_t x360 = UINT32_MAX;
	volatile int32_t t86 = 43093;

    t86 = (x357/(x358|(x359!=x360)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x361 = 59;
	int16_t x362 = INT16_MIN;
	uint64_t x363 = 133964681535903LLU;
	int8_t x364 = INT8_MIN;
	volatile int32_t t87 = 24518781;

    t87 = (x361/(x362|(x363!=x364)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x365 = INT32_MIN;
	static int64_t x366 = 3588072037702610LL;
	volatile int64_t x367 = INT64_MAX;
	int32_t x368 = -242;
	int64_t t88 = 284206545766046LL;

    t88 = (x365/(x366|(x367!=x368)));

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x372 = INT8_MAX;
	static int64_t t89 = -1LL;

    t89 = (x369/(x370|(x371!=x372)));

    if (t89 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x373 = INT16_MIN;
	static int64_t x374 = INT64_MIN;
	volatile int64_t x375 = -6773310LL;
	uint8_t x376 = 27U;

    t90 = (x373/(x374|(x375!=x376)));

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x377 = INT32_MIN;
	int32_t x378 = -1870;
	int16_t x379 = 48;
	volatile int32_t t91 = 20;

    t91 = (x377/(x378|(x379!=x380)));

    if (t91 != 1149001) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x381 = -1LL;
	volatile int64_t x382 = -1LL;
	int16_t x383 = INT16_MAX;
	int32_t x384 = INT32_MIN;
	int64_t t92 = -223919128322904LL;

    t92 = (x381/(x382|(x383!=x384)));

    if (t92 != 1LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x385 = 232U;
	int32_t x386 = 64409867;
	int32_t t93 = 8;

    t93 = (x385/(x386|(x387!=x388)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x389 = 0;
	volatile int32_t x390 = 258663530;
	int64_t x392 = 2681LL;
	int32_t t94 = -1076;

    t94 = (x389/(x390|(x391!=x392)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x393 = INT16_MIN;
	volatile int64_t x394 = INT64_MIN;
	uint32_t x396 = UINT32_MAX;
	volatile int64_t t95 = 25LL;

    t95 = (x393/(x394|(x395!=x396)));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x398 = INT64_MAX;
	int64_t x399 = INT64_MIN;
	int8_t x400 = INT8_MAX;
	int64_t t96 = 2176478270201470884LL;

    t96 = (x397/(x398|(x399!=x400)));

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x403 = INT64_MIN;
	volatile int64_t t97 = 284060645LL;

    t97 = (x401/(x402|(x403!=x404)));

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x405 = 3366U;
	uint16_t x406 = 32113U;
	int16_t x407 = 15353;
	volatile uint32_t t98 = 56927777U;

    t98 = (x405/(x406|(x407!=x408)));

    if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int8_t x410 = 3;

    t99 = (x409/(x410|(x411!=x412)));

    if (t99 != 85) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int8_t x413 = INT8_MIN;
	uint16_t x414 = 30571U;
	uint8_t x415 = UINT8_MAX;
	int64_t x416 = 4458587857253859456LL;
	int32_t t100 = 2186557;

    t100 = (x413/(x414|(x415!=x416)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint64_t x417 = UINT64_MAX;
	int64_t x418 = -66360059089LL;
	static uint64_t x420 = 246717LLU;
	static uint64_t t101 = 41053887820LLU;

    t101 = (x417/(x418|(x419!=x420)));

    if (t101 != 1LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x421 = UINT16_MAX;
	int16_t x422 = INT16_MIN;
	static volatile int8_t x423 = 7;
	int32_t x424 = -1;

    t102 = (x421/(x422|(x423!=x424)));

    if (t102 != -2) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x425 = INT32_MIN;
	int32_t x426 = INT32_MIN;
	int8_t x427 = 14;

    t103 = (x425/(x426|(x427!=x428)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x429 = UINT8_MAX;
	static volatile uint64_t x430 = 409LLU;
	static volatile uint8_t x431 = UINT8_MAX;
	uint16_t x432 = 4U;
	uint64_t t104 = 30LLU;

    t104 = (x429/(x430|(x431!=x432)));

    if (t104 != 0LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint32_t x434 = UINT32_MAX;
	static uint32_t x436 = 149U;

    t105 = (x433/(x434|(x435!=x436)));

    if (t105 != 4294967297LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x438 = -1;
	int64_t x439 = -1LL;
	uint16_t x440 = 1U;
	volatile int32_t t106 = -1988;

    t106 = (x437/(x438|(x439!=x440)));

    if (t106 != -32767) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x441 = -35074095LL;
	int8_t x442 = -1;
	static int32_t x443 = INT32_MIN;
	int8_t x444 = INT8_MIN;
	static int64_t t107 = -66486LL;

    t107 = (x441/(x442|(x443!=x444)));

    if (t107 != 35074095LL) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t x445 = 127599559;
	static int16_t x446 = 420;
	static int8_t x447 = 33;
	volatile int64_t x448 = INT64_MIN;

    t108 = (x445/(x446|(x447!=x448)));

    if (t108 != 303086) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int64_t x449 = INT64_MIN;
	uint64_t x451 = 1974096087155LLU;
	int16_t x452 = -1;

    t109 = (x449/(x450|(x451!=x452)));

    if (t109 != -1317624576693539401LL) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile uint8_t x454 = 6U;
	int32_t x455 = -1;
	uint8_t x456 = 3U;
	int32_t t110 = 617;

    t110 = (x453/(x454|(x455!=x456)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x457 = 1U;
	int32_t x459 = -1694;
	int16_t x460 = -315;
	int64_t t111 = 515LL;

    t111 = (x457/(x458|(x459!=x460)));

    if (t111 != -1LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x461 = -1;
	int8_t x463 = INT8_MIN;

    t112 = (x461/(x462|(x463!=x464)));

    if (t112 != -1) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x465 = INT32_MIN;
	int8_t x466 = INT8_MAX;
	int16_t x467 = INT16_MIN;
	uint8_t x468 = 85U;

    t113 = (x465/(x466|(x467!=x468)));

    if (t113 != -16909320) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint32_t x470 = 120441U;
	uint64_t x471 = UINT64_MAX;
	static volatile int64_t t114 = -1016545371025LL;

    t114 = (x469/(x470|(x471!=x472)));

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x473 = INT32_MIN;
	uint8_t x474 = UINT8_MAX;
	static int32_t x476 = INT32_MIN;
	static volatile int32_t t115 = 180302123;

    t115 = (x473/(x474|(x475!=x476)));

    if (t115 != -8421504) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x477 = -758981274;
	volatile int16_t x478 = INT16_MIN;
	volatile int32_t t116 = 315493460;

    t116 = (x477/(x478|(x479!=x480)));

    if (t116 != 23162) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x486 = 418215938260951LLU;
	int16_t x487 = INT16_MIN;
	int16_t x488 = 11940;
	uint64_t t117 = 8490887130744LLU;

    t117 = (x485/(x486|(x487!=x488)));

    if (t117 != 44108LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x493 = 301;
	volatile uint64_t x495 = 212235LLU;
	int16_t x496 = INT16_MIN;
	static volatile int64_t t118 = -21181575LL;

    t118 = (x493/(x494|(x495!=x496)));

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x497 = 11U;
	int16_t x498 = INT16_MAX;
	int64_t x499 = 4500629173817298LL;
	volatile int16_t x500 = INT16_MIN;
	static int32_t t119 = -137540;

    t119 = (x497/(x498|(x499!=x500)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x502 = 357329176U;
	int32_t x503 = -3252669;
	static uint16_t x504 = 78U;
	static volatile uint32_t t120 = 460093U;

    t120 = (x501/(x502|(x503!=x504)));

    if (t120 != 0U) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x505 = INT8_MAX;
	uint32_t x506 = 30U;
	static uint8_t x507 = UINT8_MAX;
	int16_t x508 = INT16_MIN;
	static uint32_t t121 = 3U;

    t121 = (x505/(x506|(x507!=x508)));

    if (t121 != 4U) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x509 = INT32_MIN;
	uint8_t x511 = 4U;
	int16_t x512 = INT16_MIN;
	int64_t t122 = 5638LL;

    t122 = (x509/(x510|(x511!=x512)));

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x513 = UINT32_MAX;
	static volatile int16_t x514 = -7;
	static int8_t x515 = -17;
	int32_t x516 = -1;

    t123 = (x513/(x514|(x515!=x516)));

    if (t123 != 1U) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x517 = 2LLU;
	uint32_t x518 = UINT32_MAX;
	static int32_t x519 = INT32_MIN;
	uint32_t x520 = UINT32_MAX;
	uint64_t t124 = 50918753LLU;

    t124 = (x517/(x518|(x519!=x520)));

    if (t124 != 0LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x521 = INT16_MIN;
	uint8_t x522 = UINT8_MAX;
	int64_t x523 = 927983907085248LL;
	volatile int32_t x524 = INT32_MIN;
	int32_t t125 = 429;

    t125 = (x521/(x522|(x523!=x524)));

    if (t125 != -128) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x525 = 3U;
	volatile int8_t x527 = INT8_MIN;
	static int64_t t126 = -32LL;

    t126 = (x525/(x526|(x527!=x528)));

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	static int16_t x529 = INT16_MAX;
	uint8_t x530 = 99U;
	static int16_t x531 = -1;
	static volatile int32_t t127 = -217;

    t127 = (x529/(x530|(x531!=x532)));

    if (t127 != 330) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x533 = 2U;
	int64_t x534 = INT64_MIN;
	int8_t x535 = INT8_MIN;
	int16_t x536 = INT16_MIN;
	volatile int64_t t128 = 337879LL;

    t128 = (x533/(x534|(x535!=x536)));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int32_t x537 = 7087372;
	volatile int32_t t129 = 1;

    t129 = (x537/(x538|(x539!=x540)));

    if (t129 != -7087372) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x541 = INT16_MAX;
	volatile uint64_t x542 = UINT64_MAX;
	int8_t x543 = -1;
	static int64_t x544 = -145586653019085LL;
	uint64_t t130 = 15323944092974739LLU;

    t130 = (x541/(x542|(x543!=x544)));

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x546 = INT32_MIN;
	static int8_t x547 = INT8_MAX;
	uint16_t x548 = UINT16_MAX;
	static int64_t t131 = 122366403002265LL;

    t131 = (x545/(x546|(x547!=x548)));

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x549 = UINT64_MAX;
	uint32_t x550 = UINT32_MAX;
	static int8_t x551 = INT8_MIN;
	int8_t x552 = INT8_MIN;

    t132 = (x549/(x550|(x551!=x552)));

    if (t132 != 4294967297LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	static int64_t x553 = -219648048172835LL;
	uint8_t x554 = 0U;
	uint16_t x556 = 0U;
	static int64_t t133 = -11242700265LL;

    t133 = (x553/(x554|(x555!=x556)));

    if (t133 != -219648048172835LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x557 = -1;
	uint64_t x558 = 61753237LLU;
	volatile uint16_t x559 = 19259U;
	int32_t x560 = INT32_MIN;
	static volatile uint64_t t134 = 504494766LLU;

    t134 = (x557/(x558|(x559!=x560)));

    if (t134 != 298717038488LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint32_t x561 = 1685557894U;
	static uint8_t x562 = 40U;
	static uint16_t x563 = UINT16_MAX;
	int16_t x564 = INT16_MIN;
	static volatile uint32_t t135 = 9129U;

    t135 = (x561/(x562|(x563!=x564)));

    if (t135 != 41111168U) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint8_t x565 = 80U;
	int16_t x566 = 1;
	int16_t x568 = -1;

    t136 = (x565/(x566|(x567!=x568)));

    if (t136 != 80) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x571 = UINT64_MAX;
	uint64_t x572 = UINT64_MAX;
	static volatile int64_t t137 = 189469138209932LL;

    t137 = (x569/(x570|(x571!=x572)));

    if (t137 != -2LL) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint64_t x573 = UINT64_MAX;
	static uint32_t x574 = 0U;
	volatile uint16_t x575 = UINT16_MAX;
	int64_t x576 = 18830869395285LL;
	volatile uint64_t t138 = UINT64_MAX;

    t138 = (x573/(x574|(x575!=x576)));

    if (t138 != UINT64_MAX) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint16_t x577 = UINT16_MAX;
	volatile int64_t x579 = INT64_MIN;
	int32_t x580 = -28632282;
	static int32_t t139 = -849627;

    t139 = (x577/(x578|(x579!=x580)));

    if (t139 != 257) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint64_t x581 = UINT64_MAX;
	int8_t x582 = INT8_MIN;
	int32_t x583 = 1188863;
	uint16_t x584 = 13190U;
	uint64_t t140 = 8642521LLU;

    t140 = (x581/(x582|(x583!=x584)));

    if (t140 != 1LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x585 = UINT32_MAX;
	int8_t x586 = -1;
	static uint16_t x587 = 4U;
	static uint16_t x588 = UINT16_MAX;
	volatile uint32_t t141 = 934981U;

    t141 = (x585/(x586|(x587!=x588)));

    if (t141 != 1U) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x589 = 204U;
	volatile uint64_t x591 = 35774389497LLU;
	static volatile int64_t x592 = -110912611235380818LL;
	static uint64_t t142 = 621368096175LLU;

    t142 = (x589/(x590|(x591!=x592)));

    if (t142 != 0LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x593 = 223349626LLU;
	static uint16_t x594 = UINT16_MAX;
	uint64_t x595 = 8LLU;
	int8_t x596 = INT8_MAX;
	uint64_t t143 = 17375LLU;

    t143 = (x593/(x594|(x595!=x596)));

    if (t143 != 3408LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint16_t x597 = 1U;
	int8_t x598 = 0;
	static int32_t x599 = INT32_MAX;
	int32_t x600 = INT32_MIN;
	int32_t t144 = -5;

    t144 = (x597/(x598|(x599!=x600)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x602 = -4;
	uint8_t x603 = 3U;
	uint64_t t145 = 181607337719785687LLU;

    t145 = (x601/(x602|(x603!=x604)));

    if (t145 != 1LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x606 = 0U;
	volatile int16_t x607 = -1;
	uint32_t x608 = 4214609U;

    t146 = (x605/(x606|(x607!=x608)));

    if (t146 != 43004570LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x609 = 4U;
	volatile int8_t x610 = -35;
	static int8_t x611 = 52;
	int16_t x612 = INT16_MIN;
	volatile int32_t t147 = -161496;

    t147 = (x609/(x610|(x611!=x612)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x613 = 304784374226908LL;
	int16_t x614 = 233;
	int32_t x615 = INT32_MAX;
	int16_t x616 = INT16_MAX;
	int64_t t148 = 5LL;

    t148 = (x613/(x614|(x615!=x616)));

    if (t148 != 1308087443033LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static int32_t x617 = INT32_MAX;
	uint64_t x618 = 484829633818664717LLU;
	static int8_t x619 = -1;
	int32_t x620 = -1;
	volatile uint64_t t149 = 949118747610078LLU;

    t149 = (x617/(x618|(x619!=x620)));

    if (t149 != 0LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint64_t x621 = 31397LLU;
	int16_t x622 = INT16_MIN;
	int8_t x623 = INT8_MIN;
	int64_t x624 = -17743899949215LL;
	uint64_t t150 = 272070666134457LLU;

    t150 = (x621/(x622|(x623!=x624)));

    if (t150 != 0LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x625 = 2064334LLU;
	uint16_t x626 = 47U;
	volatile int16_t x627 = INT16_MIN;
	int32_t x628 = INT32_MIN;
	uint64_t t151 = 4697030104LLU;

    t151 = (x625/(x626|(x627!=x628)));

    if (t151 != 43922LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x629 = INT32_MIN;
	int32_t x630 = INT32_MAX;
	uint64_t x631 = 280831LLU;
	uint8_t x632 = UINT8_MAX;
	volatile int32_t t152 = 52939988;

    t152 = (x629/(x630|(x631!=x632)));

    if (t152 != -1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x635 = 8U;
	uint64_t x636 = 204490493080438746LLU;
	static uint64_t t153 = 161631711786719LLU;

    t153 = (x633/(x634|(x635!=x636)));

    if (t153 != 0LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	static int8_t x637 = INT8_MIN;
	volatile int64_t x638 = INT64_MIN;
	static int32_t x639 = INT32_MAX;
	int32_t x640 = 91011598;
	int64_t t154 = -66903790947540LL;

    t154 = (x637/(x638|(x639!=x640)));

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x641 = INT32_MAX;
	volatile uint64_t x642 = 12559640725LLU;
	static volatile int8_t x643 = INT8_MIN;
	static uint64_t t155 = 3585543527101LLU;

    t155 = (x641/(x642|(x643!=x644)));

    if (t155 != 0LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x646 = UINT8_MAX;
	volatile uint32_t x647 = UINT32_MAX;
	volatile int32_t t156 = -31285093;

    t156 = (x645/(x646|(x647!=x648)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint64_t x649 = 185806097LLU;
	int64_t x650 = INT64_MIN;

    t157 = (x649/(x650|(x651!=x652)));

    if (t157 != 0LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x653 = 17938LL;
	uint8_t x654 = UINT8_MAX;
	uint8_t x655 = UINT8_MAX;
	static int64_t x656 = INT64_MAX;
	volatile int64_t t158 = -604648410932463650LL;

    t158 = (x653/(x654|(x655!=x656)));

    if (t158 != 70LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x658 = 5;
	static int8_t x659 = 5;
	int16_t x660 = -1;
	volatile int32_t t159 = -24931;

    t159 = (x657/(x658|(x659!=x660)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x661 = 1863U;
	uint64_t x662 = UINT64_MAX;
	uint64_t x663 = 2088575LLU;

    t160 = (x661/(x662|(x663!=x664)));

    if (t160 != 0LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x665 = INT64_MAX;
	static int32_t x667 = INT32_MIN;
	uint16_t x668 = 131U;
	static int64_t t161 = -88LL;

    t161 = (x665/(x666|(x667!=x668)));

    if (t161 != 140739635871744LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x669 = 114036U;
	int16_t x671 = 133;
	uint32_t t162 = 707542564U;

    t162 = (x669/(x670|(x671!=x672)));

    if (t162 != 0U) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x674 = -1;
	int8_t x675 = -1;
	volatile int16_t x676 = -4;

    t163 = (x673/(x674|(x675!=x676)));

    if (t163 != 0LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x678 = 43U;
	int16_t x679 = INT16_MIN;
	volatile uint8_t x680 = 2U;
	volatile int32_t t164 = 18555843;

    t164 = (x677/(x678|(x679!=x680)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x681 = INT16_MAX;
	uint32_t x682 = 337798U;
	int8_t x683 = 12;
	volatile uint32_t t165 = 21U;

    t165 = (x681/(x682|(x683!=x684)));

    if (t165 != 0U) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x685 = -11;
	uint16_t x686 = UINT16_MAX;
	int8_t x687 = -55;

    t166 = (x685/(x686|(x687!=x688)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x689 = 96228LLU;
	int32_t x690 = INT32_MAX;
	int32_t x692 = INT32_MAX;

    t167 = (x689/(x690|(x691!=x692)));

    if (t167 != 0LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x693 = -1;
	int32_t x694 = INT32_MAX;
	int32_t x696 = INT32_MIN;

    t168 = (x693/(x694|(x695!=x696)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x698 = 31U;
	int64_t x699 = 845820611LL;
	int64_t x700 = 1LL;
	volatile uint32_t t169 = 2222873U;

    t169 = (x697/(x698|(x699!=x700)));

    if (t169 != 0U) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x701 = INT16_MIN;
	uint16_t x703 = 1284U;
	volatile int32_t t170 = 27153635;

    t170 = (x701/(x702|(x703!=x704)));

    if (t170 != 32768) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x705 = 5406U;
	static uint32_t x706 = 1957039141U;
	uint16_t x708 = UINT16_MAX;
	volatile uint32_t t171 = 73U;

    t171 = (x705/(x706|(x707!=x708)));

    if (t171 != 0U) { NG(); } else { ; }
	
}

void f172(void) {
    	static int16_t x709 = -1;
	int32_t x710 = INT32_MIN;
	uint32_t x711 = 1237U;
	static int8_t x712 = -1;
	static int32_t t172 = 8335395;

    t172 = (x709/(x710|(x711!=x712)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x713 = UINT16_MAX;
	int32_t x715 = INT32_MAX;
	int32_t t173 = -966434;

    t173 = (x713/(x714|(x715!=x716)));

    if (t173 != -2) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int64_t x718 = INT64_MAX;
	int64_t x719 = INT64_MIN;
	volatile uint64_t x720 = 6LLU;
	static volatile uint64_t t174 = 2288LLU;

    t174 = (x717/(x718|(x719!=x720)));

    if (t174 != 0LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x721 = 2U;
	int16_t x722 = INT16_MIN;
	int64_t x723 = INT64_MIN;
	uint16_t x724 = 1652U;

    t175 = (x721/(x722|(x723!=x724)));

    if (t175 != 0U) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile int32_t x725 = -1;
	int32_t x728 = -1;

    t176 = (x725/(x726|(x727!=x728)));

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x729 = -1LL;
	uint16_t x730 = UINT16_MAX;
	int64_t x732 = -1LL;
	volatile int64_t t177 = -157224837203160150LL;

    t177 = (x729/(x730|(x731!=x732)));

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x733 = -1LL;
	volatile int8_t x734 = INT8_MIN;
	int32_t x735 = INT32_MAX;
	static int32_t x736 = INT32_MIN;
	int64_t t178 = 2759LL;

    t178 = (x733/(x734|(x735!=x736)));

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x737 = INT16_MIN;
	int16_t x738 = INT16_MAX;
	static uint16_t x739 = 14U;
	volatile int16_t x740 = INT16_MIN;
	volatile int32_t t179 = -2902006;

    t179 = (x737/(x738|(x739!=x740)));

    if (t179 != -1) { NG(); } else { ; }
	
}

void f180(void) {
    	static int8_t x741 = -1;
	static int8_t x742 = INT8_MIN;
	uint16_t x743 = 14800U;
	int16_t x744 = -1;
	volatile int32_t t180 = 200124856;

    t180 = (x741/(x742|(x743!=x744)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int32_t x745 = INT32_MIN;
	uint8_t x746 = 4U;
	static uint8_t x747 = UINT8_MAX;
	static volatile int64_t x748 = 0LL;
	volatile int32_t t181 = -82;

    t181 = (x745/(x746|(x747!=x748)));

    if (t181 != -429496729) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x749 = INT8_MIN;
	int16_t x750 = INT16_MIN;
	static uint32_t x752 = 239U;
	volatile int32_t t182 = -2;

    t182 = (x749/(x750|(x751!=x752)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile uint32_t x753 = 98282209U;
	uint16_t x754 = UINT16_MAX;
	static int16_t x755 = 3915;
	uint8_t x756 = UINT8_MAX;
	uint32_t t183 = 83106U;

    t183 = (x753/(x754|(x755!=x756)));

    if (t183 != 1499U) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x758 = -1LL;
	uint8_t x759 = UINT8_MAX;
	int16_t x760 = -1;
	uint64_t t184 = 58301129542LLU;

    t184 = (x757/(x758|(x759!=x760)));

    if (t184 != 0LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x762 = INT16_MIN;
	volatile int16_t x764 = INT16_MIN;
	uint32_t t185 = 254273097U;

    t185 = (x761/(x762|(x763!=x764)));

    if (t185 != 0U) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x765 = INT32_MIN;
	int64_t x767 = -1LL;
	static int64_t x768 = INT64_MIN;
	static uint32_t t186 = 36U;

    t186 = (x765/(x766|(x767!=x768)));

    if (t186 != 18U) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x769 = INT32_MIN;
	int64_t x770 = 125815980LL;
	int8_t x771 = INT8_MIN;
	int32_t x772 = -125;
	volatile int64_t t187 = 7844509LL;

    t187 = (x769/(x770|(x771!=x772)));

    if (t187 != -17LL) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int16_t x773 = 14;
	int32_t x774 = -1;

    t188 = (x773/(x774|(x775!=x776)));

    if (t188 != -14) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile uint16_t x777 = UINT16_MAX;
	static int8_t x778 = 4;

    t189 = (x777/(x778|(x779!=x780)));

    if (t189 != 13107) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint16_t x781 = 14U;
	static volatile uint16_t x782 = UINT16_MAX;
	uint16_t x784 = UINT16_MAX;

    t190 = (x781/(x782|(x783!=x784)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x785 = 2037183204LLU;
	int16_t x786 = 30;
	uint32_t x787 = 593244358U;

    t191 = (x785/(x786|(x787!=x788)));

    if (t191 != 65715587LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x789 = UINT16_MAX;
	int16_t x791 = 15265;
	static uint64_t x792 = 38LLU;
	static volatile int32_t t192 = 583512013;

    t192 = (x789/(x790|(x791!=x792)));

    if (t192 != -2) { NG(); } else { ; }
	
}

void f193(void) {
    	static int64_t x793 = 103476649354399223LL;
	int32_t x794 = -294191;
	int64_t x795 = INT64_MIN;
	volatile int64_t t193 = 125985204LL;

    t193 = (x793/(x794|(x795!=x796)));

    if (t193 != -351732885623LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x797 = 1U;
	int32_t x798 = 4603;
	int64_t x800 = INT64_MIN;

    t194 = (x797/(x798|(x799!=x800)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int64_t x801 = INT64_MIN;
	int64_t x802 = INT64_MIN;
	int16_t x803 = -1;
	int64_t t195 = 25282105646LL;

    t195 = (x801/(x802|(x803!=x804)));

    if (t195 != 1LL) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int64_t x805 = INT64_MAX;
	int8_t x806 = INT8_MAX;
	int64_t x807 = -1LL;

    t196 = (x805/(x806|(x807!=x808)));

    if (t196 != 72624976668147841LL) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint8_t x810 = 10U;
	static int16_t x811 = INT16_MAX;
	uint32_t x812 = 5879718U;
	int32_t t197 = -10;

    t197 = (x809/(x810|(x811!=x812)));

    if (t197 != 13) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint8_t x813 = 1U;
	int32_t x814 = INT32_MIN;
	volatile uint8_t x815 = UINT8_MAX;
	uint8_t x816 = 31U;
	volatile int32_t t198 = 87594024;

    t198 = (x813/(x814|(x815!=x816)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x817 = UINT8_MAX;
	int8_t x818 = INT8_MAX;
	int8_t x820 = INT8_MIN;
	static volatile int32_t t199 = -445556;

    t199 = (x817/(x818|(x819!=x820)));

    if (t199 != 2) { NG(); } else { ; }
	
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

