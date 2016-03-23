
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

static int32_t x3 = 10725140;
uint8_t x10 = 61U;
uint32_t x12 = UINT32_MAX;
int32_t x15 = INT32_MIN;
volatile uint32_t x24 = UINT32_MAX;
static int32_t x30 = -1115;
volatile int8_t x32 = -2;
static int64_t t8 = -28102LL;
int32_t x39 = INT32_MAX;
static int8_t x51 = INT8_MIN;
volatile int64_t x56 = -9940850312LL;
volatile int32_t x64 = -1;
int32_t t15 = 235128855;
int8_t x70 = -1;
volatile int16_t x73 = INT16_MAX;
uint64_t t19 = 4517LLU;
static int32_t x81 = INT32_MAX;
int16_t x83 = INT16_MIN;
int8_t x84 = INT8_MIN;
volatile int16_t x89 = INT16_MAX;
int32_t t22 = -30;
int64_t x97 = 13196004LL;
static uint64_t x98 = 92LLU;
volatile int16_t x99 = INT16_MAX;
int64_t x103 = -7LL;
volatile int32_t t25 = 135;
int64_t x107 = INT64_MIN;
int8_t x113 = -1;
int32_t t28 = -1;
int32_t t29 = -7708297;
int8_t x123 = INT8_MIN;
static volatile int64_t t30 = 2972919720524856504LL;
volatile int32_t t31 = -7146251;
int64_t x135 = -2419947982370LL;
uint32_t x138 = 13U;
int8_t x140 = INT8_MAX;
uint32_t x145 = 12807670U;
int64_t x153 = 1LL;
uint64_t x154 = 29039913069365354LLU;
int8_t x158 = -1;
int16_t x159 = INT16_MAX;
uint32_t t40 = 983U;
volatile int32_t t41 = -2;
int64_t t42 = -4619560009381LL;
static int16_t x175 = INT16_MAX;
int16_t x181 = INT16_MIN;
uint32_t x185 = 142270U;
int32_t x188 = -1;
int16_t x190 = INT16_MIN;
volatile int16_t x200 = 104;
int32_t t49 = -142;
int8_t x202 = INT8_MAX;
int32_t x205 = INT32_MIN;
volatile int16_t x207 = INT16_MIN;
volatile int32_t t51 = 1;
uint8_t x216 = 23U;
uint32_t t53 = 6141928U;
static uint16_t x228 = UINT16_MAX;
uint16_t x232 = 3U;
int32_t t57 = -293241891;
volatile int32_t t58 = 1;
static uint64_t x237 = 82413719963565LLU;
int8_t x243 = INT8_MIN;
int8_t x245 = INT8_MIN;
int64_t x246 = INT64_MIN;
volatile int8_t x267 = INT8_MIN;
uint64_t x269 = 48769629360LLU;
static int32_t x270 = INT32_MIN;
static int8_t x271 = -1;
int16_t x273 = INT16_MIN;
static uint16_t x277 = 24U;
int64_t x278 = -12LL;
volatile int32_t t69 = -5906;
int32_t x281 = -83909965;
static uint16_t x284 = 0U;
volatile int32_t t70 = -56448;
int32_t t71 = 945023;
int32_t t73 = -449817;
uint32_t t74 = 0U;
uint32_t x307 = 140689U;
int64_t x309 = 4616940914LL;
int16_t x310 = INT16_MAX;
static int8_t x312 = -1;
volatile uint32_t x318 = UINT32_MAX;
uint64_t t79 = 723654820054837LLU;
static int32_t x322 = -66031916;
volatile int32_t t81 = 4;
int16_t x334 = INT16_MAX;
volatile int8_t x341 = INT8_MIN;
int16_t x350 = -3071;
int32_t x354 = -47822;
int16_t x355 = INT16_MIN;
static int32_t x362 = INT32_MAX;
static uint32_t x364 = 1234U;
volatile int32_t t92 = -25;
uint32_t x383 = 206U;
int64_t x385 = -1LL;
volatile int32_t x386 = -1;
int64_t t96 = -355778925031141LL;
static volatile int64_t x399 = 67748095LL;
int16_t x405 = -1;
volatile int16_t x407 = 1;
int32_t t101 = -3705;
uint16_t x418 = UINT16_MAX;
uint16_t x424 = 82U;
static int16_t x425 = 0;
int64_t x431 = -1LL;
int16_t x432 = 43;
static uint32_t t108 = 36U;
int32_t t110 = 10913159;
int16_t x451 = -1;
int16_t x452 = -1;
int64_t x455 = INT64_MIN;
int32_t x456 = INT32_MIN;
uint32_t t113 = 25U;
volatile int32_t x464 = 2253528;
volatile int32_t t115 = 3;
int16_t x468 = INT16_MAX;
volatile int8_t x470 = -1;
uint64_t x472 = 399LLU;
int32_t x480 = INT32_MIN;
uint8_t x484 = UINT8_MAX;
uint32_t x485 = 405822U;
uint64_t x486 = 38349504168581947LLU;
volatile uint64_t x491 = UINT64_MAX;
int8_t x498 = 43;
uint32_t x501 = 6163010U;
int64_t x507 = INT64_MIN;
int8_t x509 = INT8_MIN;
uint16_t x512 = UINT16_MAX;
uint16_t x523 = UINT16_MAX;
volatile int32_t t130 = -36736;
uint8_t x525 = 29U;
int32_t x526 = 4048011;
static int32_t t131 = -4801;
int32_t t132 = -21740;
int16_t x534 = 20;
static uint64_t x537 = 680395808422726LLU;
int32_t x538 = INT32_MIN;
int64_t x540 = -1LL;
volatile uint64_t x542 = 80657996486LLU;
static volatile int8_t x543 = -1;
int16_t x548 = 1;
static int32_t t136 = 13090;
volatile int32_t t138 = -38;
static volatile uint32_t x557 = 150761U;
uint64_t x563 = 781530LLU;
int64_t x564 = -2206355579120LL;
volatile int32_t t140 = 425440744;
volatile int32_t x569 = -2;
static int32_t t142 = 651;
volatile int8_t x574 = -19;
int32_t x579 = -154;
static int16_t x580 = -1;
volatile int8_t x589 = -1;
volatile int32_t x593 = INT32_MIN;
int64_t x598 = -31842915631LL;
static volatile int8_t x603 = INT8_MAX;
uint16_t x605 = UINT16_MAX;
int8_t x607 = 0;
int32_t t152 = 3883844;
int16_t x613 = INT16_MAX;
uint16_t x616 = 80U;
int32_t t153 = 65;
volatile uint64_t x619 = UINT64_MAX;
static int32_t x620 = -1;
int32_t x622 = 59650;
static volatile uint16_t x624 = UINT16_MAX;
static int32_t x633 = INT32_MIN;
int8_t x634 = -18;
int32_t x640 = -1;
volatile int64_t x641 = 1211816268586527980LL;
int32_t x643 = INT32_MAX;
volatile int16_t x650 = 1;
uint8_t x651 = UINT8_MAX;
int16_t x653 = INT16_MIN;
volatile int64_t x654 = INT64_MIN;
volatile int16_t x661 = -1;
static uint16_t x664 = 1508U;
int8_t x665 = INT8_MIN;
int8_t x667 = 9;
int8_t x668 = -1;
int32_t x671 = 1;
uint32_t t167 = 447665617U;
int64_t x678 = INT64_MIN;
int8_t x680 = -4;
static int8_t x689 = -1;
int16_t x691 = 1230;
int16_t x703 = 0;
volatile uint8_t x707 = UINT8_MAX;
uint64_t x713 = 1210757LLU;
static int32_t x715 = INT32_MAX;
static volatile uint8_t x716 = UINT8_MAX;
uint64_t t178 = 504538LLU;
volatile int16_t x723 = -1;
int16_t x725 = 0;
int64_t x726 = INT64_MIN;
uint8_t x728 = UINT8_MAX;
int16_t x730 = INT16_MIN;
int8_t x731 = -1;
int32_t x736 = -1;
int16_t x739 = INT16_MIN;
static volatile uint32_t x742 = 68965U;
volatile int16_t x745 = INT16_MIN;
volatile uint8_t x753 = 10U;
uint16_t x754 = 6699U;
int32_t x758 = INT32_MIN;
int16_t x761 = -1;
uint64_t x765 = 75547LLU;
static uint64_t t191 = 27234399920244735LLU;
int16_t x770 = 13218;
volatile int32_t x776 = -1;
int8_t x780 = INT8_MIN;
uint8_t x782 = 3U;
static int16_t x783 = INT16_MAX;
static uint16_t x787 = 7U;
uint64_t x793 = UINT64_MAX;
uint8_t x797 = UINT8_MAX;
volatile int32_t x798 = INT32_MIN;
int8_t x799 = INT8_MIN;


void f0(void) {
    	static int64_t x1 = INT64_MIN;
	static int32_t x2 = INT32_MIN;
	int64_t x4 = INT64_MIN;
	int64_t t0 = 13874732012LL;

    t0 = (x1&(x2>(x3^x4)));

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MAX;
	uint32_t x6 = UINT32_MAX;
	int32_t x7 = -248;
	int64_t x8 = -10320174811525765LL;
	volatile int64_t t1 = -255642542LL;

    t1 = (x5&(x6>(x7^x8)));

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = -1;
	int32_t x11 = INT32_MIN;
	int32_t t2 = -897;

    t2 = (x9&(x10>(x11^x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x13 = UINT16_MAX;
	static volatile int32_t x14 = 2998759;
	static int64_t x16 = -1LL;
	volatile int32_t t3 = -7;

    t3 = (x13&(x14>(x15^x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = -1;
	static int8_t x18 = INT8_MIN;
	int16_t x19 = 2;
	static int32_t x20 = INT32_MAX;
	volatile int32_t t4 = -1;

    t4 = (x17&(x18>(x19^x20)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = -1;
	int8_t x22 = -1;
	uint64_t x23 = 2062100193409305916LLU;
	volatile int32_t t5 = -26;

    t5 = (x21&(x22>(x23^x24)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = INT32_MIN;
	static uint8_t x26 = UINT8_MAX;
	uint16_t x27 = UINT16_MAX;
	int8_t x28 = INT8_MIN;
	int32_t t6 = -31013705;

    t6 = (x25&(x26>(x27^x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = INT64_MAX;
	uint32_t x31 = 152U;
	volatile int64_t t7 = -4162009103839712LL;

    t7 = (x29&(x30>(x31^x32)));

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = INT64_MAX;
	uint32_t x34 = 182090U;
	uint16_t x35 = 4515U;
	volatile uint8_t x36 = UINT8_MAX;

    t8 = (x33&(x34>(x35^x36)));

    if (t8 != 1LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = INT64_MIN;
	uint8_t x38 = 3U;
	int32_t x40 = INT32_MIN;
	static volatile int64_t t9 = -1LL;

    t9 = (x37&(x38>(x39^x40)));

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x41 = 7406298U;
	int64_t x42 = INT64_MIN;
	volatile int16_t x43 = 4820;
	static uint16_t x44 = UINT16_MAX;
	uint32_t t10 = 8U;

    t10 = (x41&(x42>(x43^x44)));

    if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x45 = 1696789812U;
	int16_t x46 = -1;
	static int64_t x47 = INT64_MAX;
	uint16_t x48 = UINT16_MAX;
	uint32_t t11 = 699755U;

    t11 = (x45&(x46>(x47^x48)));

    if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int8_t x49 = 1;
	int16_t x50 = -19;
	int16_t x52 = -3436;
	volatile int32_t t12 = 30912710;

    t12 = (x49&(x50>(x51^x52)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x53 = -1LL;
	int32_t x54 = INT32_MAX;
	volatile int16_t x55 = 599;
	volatile int64_t t13 = 19636835234LL;

    t13 = (x53&(x54>(x55^x56)));

    if (t13 != 1LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint16_t x57 = 32713U;
	static int32_t x58 = -1163;
	volatile int8_t x59 = INT8_MIN;
	volatile uint16_t x60 = 173U;
	int32_t t14 = 2;

    t14 = (x57&(x58>(x59^x60)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x61 = UINT16_MAX;
	int64_t x62 = 1LL;
	int32_t x63 = INT32_MIN;

    t15 = (x61&(x62>(x63^x64)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x65 = 2438U;
	static int64_t x66 = INT64_MIN;
	uint32_t x67 = 5413U;
	static int64_t x68 = INT64_MIN;
	uint32_t t16 = 56023U;

    t16 = (x65&(x66>(x67^x68)));

    if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = INT32_MIN;
	int16_t x71 = INT16_MAX;
	int8_t x72 = INT8_MAX;
	volatile int32_t t17 = 1;

    t17 = (x69&(x70>(x71^x72)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int16_t x74 = INT16_MAX;
	uint32_t x75 = 41889U;
	int16_t x76 = 632;
	static int32_t t18 = 67726;

    t18 = (x73&(x74>(x75^x76)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x77 = 115384214588228LLU;
	uint64_t x78 = 15281547670180LLU;
	volatile int32_t x79 = 32845395;
	int64_t x80 = -8482733208LL;

    t19 = (x77&(x78>(x79^x80)));

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x82 = 0;
	int32_t t20 = -103;

    t20 = (x81&(x82>(x83^x84)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x85 = 8293U;
	volatile int64_t x86 = INT64_MIN;
	static uint16_t x87 = 11791U;
	int16_t x88 = -1;
	int32_t t21 = -1867;

    t21 = (x85&(x86>(x87^x88)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x90 = INT16_MIN;
	int64_t x91 = -18937LL;
	uint8_t x92 = UINT8_MAX;

    t22 = (x89&(x90>(x91^x92)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = 110579;
	static int64_t x94 = -2743302216452210713LL;
	int8_t x95 = 22;
	volatile int64_t x96 = INT64_MAX;
	volatile int32_t t23 = 1;

    t23 = (x93&(x94>(x95^x96)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int64_t x100 = INT64_MIN;
	int64_t t24 = -40056778589480646LL;

    t24 = (x97&(x98>(x99^x100)));

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x101 = 101U;
	uint8_t x102 = 45U;
	uint16_t x104 = 2810U;

    t25 = (x101&(x102>(x103^x104)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int16_t x105 = INT16_MAX;
	volatile uint8_t x106 = 52U;
	int32_t x108 = 588280;
	volatile int32_t t26 = -12976;

    t26 = (x105&(x106>(x107^x108)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x109 = -1;
	uint64_t x110 = 294LLU;
	int64_t x111 = 13149596825053LL;
	int16_t x112 = -4;
	int32_t t27 = -5974711;

    t27 = (x109&(x110>(x111^x112)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x114 = 3860U;
	static int64_t x115 = 0LL;
	int16_t x116 = 3873;

    t28 = (x113&(x114>(x115^x116)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x117 = -1;
	uint32_t x118 = 58U;
	uint8_t x119 = UINT8_MAX;
	static int8_t x120 = INT8_MIN;

    t29 = (x117&(x118>(x119^x120)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x121 = -1LL;
	int64_t x122 = -423LL;
	uint64_t x124 = 9074533193661LLU;

    t30 = (x121&(x122>(x123^x124)));

    if (t30 != 1LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = INT8_MAX;
	int32_t x126 = INT32_MIN;
	static int16_t x127 = INT16_MAX;
	int32_t x128 = INT32_MIN;

    t31 = (x125&(x126>(x127^x128)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = INT64_MIN;
	int64_t x130 = INT64_MIN;
	volatile int32_t x131 = INT32_MAX;
	uint32_t x132 = 55U;
	int64_t t32 = -12996LL;

    t32 = (x129&(x130>(x131^x132)));

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x133 = -793906234;
	volatile int64_t x134 = INT64_MAX;
	static int32_t x136 = INT32_MAX;
	int32_t t33 = -12544152;

    t33 = (x133&(x134>(x135^x136)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x137 = 1U;
	static int16_t x139 = -97;
	volatile int32_t t34 = -37;

    t34 = (x137&(x138>(x139^x140)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int32_t x141 = -1;
	static uint64_t x142 = 14027052384926LLU;
	static int8_t x143 = 0;
	uint32_t x144 = UINT32_MAX;
	volatile int32_t t35 = 99;

    t35 = (x141&(x142>(x143^x144)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x146 = 321413U;
	uint16_t x147 = 6U;
	volatile uint32_t x148 = 1932768U;
	uint32_t t36 = 37217770U;

    t36 = (x145&(x146>(x147^x148)));

    if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x149 = -1;
	uint64_t x150 = UINT64_MAX;
	int8_t x151 = INT8_MIN;
	int64_t x152 = INT64_MIN;
	int32_t t37 = 17;

    t37 = (x149&(x150>(x151^x152)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x155 = -7963;
	static int64_t x156 = -1220LL;
	int64_t t38 = -1171353LL;

    t38 = (x153&(x154>(x155^x156)));

    if (t38 != 1LL) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x157 = 75637713LL;
	uint64_t x160 = 10970LLU;
	static volatile int64_t t39 = -13729629LL;

    t39 = (x157&(x158>(x159^x160)));

    if (t39 != 1LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint32_t x161 = 1334U;
	volatile uint16_t x162 = 424U;
	int32_t x163 = INT32_MIN;
	uint8_t x164 = 1U;

    t40 = (x161&(x162>(x163^x164)));

    if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x165 = 11516U;
	static uint32_t x166 = 3957732U;
	static int32_t x167 = INT32_MIN;
	int32_t x168 = 220840425;

    t41 = (x165&(x166>(x167^x168)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = 279254344163LL;
	uint64_t x170 = 1443817LLU;
	uint16_t x171 = UINT16_MAX;
	int32_t x172 = INT32_MAX;

    t42 = (x169&(x170>(x171^x172)));

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int8_t x173 = 16;
	int16_t x174 = INT16_MIN;
	int64_t x176 = -271775531068101453LL;
	volatile int32_t t43 = -284523739;

    t43 = (x173&(x174>(x175^x176)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = INT64_MIN;
	static int16_t x178 = 1520;
	int64_t x179 = 14LL;
	int32_t x180 = INT32_MAX;
	volatile int64_t t44 = -92548274640049LL;

    t44 = (x177&(x178>(x179^x180)));

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x182 = -14;
	int8_t x183 = INT8_MIN;
	int16_t x184 = INT16_MAX;
	int32_t t45 = 106;

    t45 = (x181&(x182>(x183^x184)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int64_t x186 = -204975144513951713LL;
	int64_t x187 = INT64_MAX;
	volatile uint32_t t46 = 15176U;

    t46 = (x185&(x186>(x187^x188)));

    if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint16_t x189 = 32698U;
	uint8_t x191 = 1U;
	uint64_t x192 = 80LLU;
	int32_t t47 = -11286428;

    t47 = (x189&(x190>(x191^x192)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x193 = INT8_MIN;
	uint8_t x194 = 28U;
	static uint32_t x195 = 39U;
	uint32_t x196 = 3528U;
	int32_t t48 = 304597;

    t48 = (x193&(x194>(x195^x196)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x197 = 1;
	volatile uint16_t x198 = 125U;
	int32_t x199 = -1;

    t49 = (x197&(x198>(x199^x200)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x201 = 93;
	int64_t x203 = INT64_MAX;
	int64_t x204 = INT64_MIN;
	static int32_t t50 = 1103005;

    t50 = (x201&(x202>(x203^x204)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x206 = INT8_MAX;
	static int16_t x208 = INT16_MIN;

    t51 = (x205&(x206>(x207^x208)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x209 = 9LLU;
	int32_t x210 = -1;
	int32_t x211 = INT32_MAX;
	volatile int32_t x212 = -2;
	volatile uint64_t t52 = 900828690701LLU;

    t52 = (x209&(x210>(x211^x212)));

    if (t52 != 1LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint32_t x213 = UINT32_MAX;
	uint8_t x214 = UINT8_MAX;
	int8_t x215 = INT8_MAX;

    t53 = (x213&(x214>(x215^x216)));

    if (t53 != 1U) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x217 = 57U;
	int16_t x218 = -1;
	static int16_t x219 = INT16_MIN;
	int32_t x220 = INT32_MAX;
	volatile int32_t t54 = -4;

    t54 = (x217&(x218>(x219^x220)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint8_t x221 = 3U;
	uint32_t x222 = 117835632U;
	int32_t x223 = INT32_MIN;
	int8_t x224 = -27;
	static volatile int32_t t55 = 0;

    t55 = (x221&(x222>(x223^x224)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x225 = -124099;
	int64_t x226 = INT64_MAX;
	static volatile int8_t x227 = -15;
	int32_t t56 = -10903;

    t56 = (x225&(x226>(x227^x228)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x229 = INT16_MIN;
	int16_t x230 = 0;
	int8_t x231 = INT8_MIN;

    t57 = (x229&(x230>(x231^x232)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x233 = 14U;
	static int32_t x234 = INT32_MIN;
	volatile uint16_t x235 = 96U;
	int8_t x236 = INT8_MIN;

    t58 = (x233&(x234>(x235^x236)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x238 = -1;
	int16_t x239 = -1;
	int16_t x240 = INT16_MIN;
	volatile uint64_t t59 = 4210875705397745LLU;

    t59 = (x237&(x238>(x239^x240)));

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x241 = 25905U;
	static uint32_t x242 = 1U;
	uint8_t x244 = 48U;
	volatile uint32_t t60 = 6U;

    t60 = (x241&(x242>(x243^x244)));

    if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x247 = INT16_MIN;
	int8_t x248 = 0;
	static volatile int32_t t61 = -6702;

    t61 = (x245&(x246>(x247^x248)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x249 = INT8_MIN;
	int16_t x250 = 0;
	static int8_t x251 = 13;
	uint64_t x252 = 950LLU;
	volatile int32_t t62 = -10;

    t62 = (x249&(x250>(x251^x252)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x253 = UINT32_MAX;
	int8_t x254 = INT8_MAX;
	uint8_t x255 = UINT8_MAX;
	volatile int16_t x256 = INT16_MIN;
	volatile uint32_t t63 = 7382U;

    t63 = (x253&(x254>(x255^x256)));

    if (t63 != 1U) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x257 = INT8_MIN;
	static int8_t x258 = -14;
	uint64_t x259 = 418582979LLU;
	static int8_t x260 = INT8_MIN;
	volatile int32_t t64 = 4843690;

    t64 = (x257&(x258>(x259^x260)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x261 = 26928784LL;
	static uint64_t x262 = UINT64_MAX;
	static int64_t x263 = INT64_MIN;
	volatile uint16_t x264 = UINT16_MAX;
	volatile int64_t t65 = 67474056653137LL;

    t65 = (x261&(x262>(x263^x264)));

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x265 = UINT64_MAX;
	volatile uint8_t x266 = 111U;
	int32_t x268 = INT32_MIN;
	uint64_t t66 = 1249444LLU;

    t66 = (x265&(x266>(x267^x268)));

    if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x272 = UINT64_MAX;
	static volatile uint64_t t67 = 20934103135LLU;

    t67 = (x269&(x270>(x271^x272)));

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static int32_t x274 = INT32_MAX;
	int16_t x275 = -1;
	volatile int16_t x276 = INT16_MIN;
	volatile int32_t t68 = 298937896;

    t68 = (x273&(x274>(x275^x276)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x279 = INT16_MIN;
	static volatile int64_t x280 = -1LL;

    t69 = (x277&(x278>(x279^x280)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x282 = INT32_MIN;
	int16_t x283 = -59;

    t70 = (x281&(x282>(x283^x284)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x285 = INT8_MIN;
	uint32_t x286 = 3451U;
	volatile int32_t x287 = 1531515;
	int16_t x288 = -3;

    t71 = (x285&(x286>(x287^x288)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x289 = INT32_MAX;
	uint16_t x290 = 0U;
	int16_t x291 = INT16_MIN;
	static uint64_t x292 = 3898187519520586LLU;
	int32_t t72 = 23604919;

    t72 = (x289&(x290>(x291^x292)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x293 = 109U;
	volatile int16_t x294 = INT16_MIN;
	volatile int32_t x295 = -1;
	int64_t x296 = -1LL;

    t73 = (x293&(x294>(x295^x296)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint32_t x297 = 11871752U;
	int64_t x298 = -337809938323LL;
	int32_t x299 = INT32_MAX;
	volatile int32_t x300 = INT32_MIN;

    t74 = (x297&(x298>(x299^x300)));

    if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint64_t x301 = 235155375801846LLU;
	volatile uint8_t x302 = 74U;
	int32_t x303 = -12319006;
	uint8_t x304 = 2U;
	volatile uint64_t t75 = 193886LLU;

    t75 = (x301&(x302>(x303^x304)));

    if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x305 = INT64_MIN;
	static uint32_t x306 = UINT32_MAX;
	static uint16_t x308 = 3686U;
	static volatile int64_t t76 = -5074104270675LL;

    t76 = (x305&(x306>(x307^x308)));

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x311 = INT8_MIN;
	int64_t t77 = 251431473284LL;

    t77 = (x309&(x310>(x311^x312)));

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x313 = INT8_MAX;
	int32_t x314 = INT32_MIN;
	int16_t x315 = 98;
	static int32_t x316 = 168966812;
	static volatile int32_t t78 = -8707507;

    t78 = (x313&(x314>(x315^x316)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x317 = 0LLU;
	int16_t x319 = -24;
	int8_t x320 = 27;

    t79 = (x317&(x318>(x319^x320)));

    if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x321 = 0;
	static uint32_t x323 = UINT32_MAX;
	int64_t x324 = INT64_MIN;
	volatile int32_t t80 = 648;

    t80 = (x321&(x322>(x323^x324)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int8_t x325 = 1;
	int32_t x326 = INT32_MIN;
	int32_t x327 = -8112;
	uint16_t x328 = 3712U;

    t81 = (x325&(x326>(x327^x328)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x329 = INT8_MAX;
	static int64_t x330 = -3015385221016468068LL;
	int16_t x331 = -241;
	volatile int32_t x332 = -879;
	static volatile int32_t t82 = -4572902;

    t82 = (x329&(x330>(x331^x332)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x333 = INT16_MIN;
	uint16_t x335 = 12U;
	int16_t x336 = 248;
	volatile int32_t t83 = 255964;

    t83 = (x333&(x334>(x335^x336)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x337 = UINT16_MAX;
	int8_t x338 = -1;
	int8_t x339 = INT8_MAX;
	int16_t x340 = INT16_MIN;
	int32_t t84 = -1;

    t84 = (x337&(x338>(x339^x340)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x342 = 6796917066LL;
	int64_t x343 = 981225720387LL;
	int32_t x344 = 6394318;
	volatile int32_t t85 = -1014412961;

    t85 = (x341&(x342>(x343^x344)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x345 = INT8_MIN;
	volatile int8_t x346 = INT8_MIN;
	int32_t x347 = -91798;
	uint8_t x348 = UINT8_MAX;
	int32_t t86 = 61;

    t86 = (x345&(x346>(x347^x348)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x349 = 14U;
	uint32_t x351 = UINT32_MAX;
	int16_t x352 = INT16_MAX;
	volatile int32_t t87 = -312492158;

    t87 = (x349&(x350>(x351^x352)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x353 = 598090;
	volatile uint64_t x356 = 5900228633098LLU;
	int32_t t88 = 57563;

    t88 = (x353&(x354>(x355^x356)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x357 = 5839U;
	int64_t x358 = -1LL;
	int8_t x359 = -8;
	int64_t x360 = 1213733919440LL;
	volatile int32_t t89 = -1005157;

    t89 = (x357&(x358>(x359^x360)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint8_t x361 = UINT8_MAX;
	int32_t x363 = -1;
	int32_t t90 = -176;

    t90 = (x361&(x362>(x363^x364)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x365 = INT64_MIN;
	static int16_t x366 = INT16_MIN;
	int64_t x367 = -1249LL;
	volatile int32_t x368 = -1;
	static int64_t t91 = -672711878265775LL;

    t91 = (x365&(x366>(x367^x368)));

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x369 = 3;
	volatile int16_t x370 = INT16_MAX;
	volatile uint32_t x371 = UINT32_MAX;
	volatile uint64_t x372 = 23811951905LLU;

    t92 = (x369&(x370>(x371^x372)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x373 = INT32_MIN;
	uint8_t x374 = 0U;
	volatile int64_t x375 = INT64_MAX;
	int16_t x376 = -43;
	static volatile int32_t t93 = 2589988;

    t93 = (x373&(x374>(x375^x376)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint8_t x377 = 1U;
	static uint64_t x378 = UINT64_MAX;
	int64_t x379 = 2935620571LL;
	int64_t x380 = 1730667415136139791LL;
	int32_t t94 = -29;

    t94 = (x377&(x378>(x379^x380)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x381 = -1LL;
	static uint8_t x382 = 5U;
	uint64_t x384 = UINT64_MAX;
	int64_t t95 = 14275315LL;

    t95 = (x381&(x382>(x383^x384)));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int16_t x387 = INT16_MIN;
	int64_t x388 = -70339363482516093LL;

    t96 = (x385&(x386>(x387^x388)));

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x389 = -2;
	int8_t x390 = INT8_MAX;
	int64_t x391 = INT64_MAX;
	uint32_t x392 = 5U;
	static volatile int32_t t97 = -321;

    t97 = (x389&(x390>(x391^x392)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int8_t x393 = INT8_MIN;
	int8_t x394 = -1;
	volatile uint16_t x395 = 92U;
	uint8_t x396 = 127U;
	volatile int32_t t98 = 30;

    t98 = (x393&(x394>(x395^x396)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int8_t x397 = -1;
	static int16_t x398 = INT16_MAX;
	int8_t x400 = -3;
	int32_t t99 = -524012;

    t99 = (x397&(x398>(x399^x400)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x401 = INT64_MIN;
	volatile int16_t x402 = -1;
	static int32_t x403 = 215;
	int64_t x404 = -1LL;
	static volatile int64_t t100 = -3475240927LL;

    t100 = (x401&(x402>(x403^x404)));

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x406 = -1;
	uint32_t x408 = 4627147U;

    t101 = (x405&(x406>(x407^x408)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x409 = 24853;
	uint64_t x410 = 1358581261012446LLU;
	int8_t x411 = -1;
	uint8_t x412 = 43U;
	int32_t t102 = -165;

    t102 = (x409&(x410>(x411^x412)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x413 = INT32_MIN;
	int32_t x414 = INT32_MIN;
	int8_t x415 = INT8_MAX;
	int32_t x416 = 325189;
	static volatile int32_t t103 = -13790;

    t103 = (x413&(x414>(x415^x416)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x417 = -67291LL;
	int64_t x419 = 14041716198298367LL;
	int8_t x420 = INT8_MIN;
	static volatile int64_t t104 = -9794254105LL;

    t104 = (x417&(x418>(x419^x420)));

    if (t104 != 1LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x421 = 166419;
	int8_t x422 = -1;
	uint8_t x423 = UINT8_MAX;
	int32_t t105 = 54;

    t105 = (x421&(x422>(x423^x424)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x426 = -1;
	int16_t x427 = INT16_MIN;
	uint64_t x428 = 0LLU;
	int32_t t106 = -23966;

    t106 = (x425&(x426>(x427^x428)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x429 = 112U;
	uint64_t x430 = 19612006LLU;
	volatile int32_t t107 = -515294;

    t107 = (x429&(x430>(x431^x432)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint32_t x433 = 442624U;
	int32_t x434 = -7;
	int8_t x435 = INT8_MAX;
	static volatile int16_t x436 = -1;

    t108 = (x433&(x434>(x435^x436)));

    if (t108 != 0U) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x437 = INT64_MIN;
	int16_t x438 = INT16_MAX;
	volatile int8_t x439 = INT8_MIN;
	int8_t x440 = -1;
	int64_t t109 = 72862849239700803LL;

    t109 = (x437&(x438>(x439^x440)));

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x441 = -1;
	int64_t x442 = 2LL;
	int32_t x443 = INT32_MIN;
	volatile int16_t x444 = -175;

    t110 = (x441&(x442>(x443^x444)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x445 = 442241U;
	uint8_t x446 = 65U;
	int32_t x447 = 750994;
	int16_t x448 = 35;
	static volatile uint32_t t111 = 7U;

    t111 = (x445&(x446>(x447^x448)));

    if (t111 != 0U) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x449 = 89;
	static int64_t x450 = -1LL;
	volatile int32_t t112 = -1;

    t112 = (x449&(x450>(x451^x452)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x453 = 37284791U;
	uint16_t x454 = 3U;

    t113 = (x453&(x454>(x455^x456)));

    if (t113 != 0U) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x457 = 35669690430739122LL;
	volatile int32_t x458 = -1;
	int64_t x459 = 56260LL;
	int16_t x460 = INT16_MAX;
	volatile int64_t t114 = -11634LL;

    t114 = (x457&(x458>(x459^x460)));

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x461 = -205;
	int8_t x462 = INT8_MAX;
	volatile int64_t x463 = -1LL;

    t115 = (x461&(x462>(x463^x464)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint64_t x465 = UINT64_MAX;
	static uint8_t x466 = 2U;
	int64_t x467 = -1LL;
	uint64_t t116 = 14118691350233347LLU;

    t116 = (x465&(x466>(x467^x468)));

    if (t116 != 1LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x469 = INT32_MIN;
	volatile int16_t x471 = -4498;
	volatile int32_t t117 = -58;

    t117 = (x469&(x470>(x471^x472)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x473 = 42488306LL;
	uint64_t x474 = 23925761962858LLU;
	volatile int8_t x475 = INT8_MIN;
	int8_t x476 = INT8_MIN;
	volatile int64_t t118 = 3642504341LL;

    t118 = (x473&(x474>(x475^x476)));

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x477 = INT32_MIN;
	int16_t x478 = INT16_MIN;
	int16_t x479 = 2189;
	volatile int32_t t119 = -3;

    t119 = (x477&(x478>(x479^x480)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x481 = INT64_MAX;
	static int64_t x482 = INT64_MIN;
	int64_t x483 = INT64_MIN;
	volatile int64_t t120 = 535744584174LL;

    t120 = (x481&(x482>(x483^x484)));

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int32_t x487 = -3926452;
	uint16_t x488 = UINT16_MAX;
	static volatile uint32_t t121 = 176U;

    t121 = (x485&(x486>(x487^x488)));

    if (t121 != 0U) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint64_t x489 = 121490873LLU;
	uint64_t x490 = 578336415LLU;
	volatile int8_t x492 = 5;
	static uint64_t t122 = 896920LLU;

    t122 = (x489&(x490>(x491^x492)));

    if (t122 != 0LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x493 = UINT16_MAX;
	int32_t x494 = INT32_MIN;
	int16_t x495 = -1;
	uint64_t x496 = UINT64_MAX;
	static volatile int32_t t123 = 3964341;

    t123 = (x493&(x494>(x495^x496)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x497 = -1LL;
	static int64_t x499 = INT64_MIN;
	uint8_t x500 = 3U;
	int64_t t124 = -18611257906303LL;

    t124 = (x497&(x498>(x499^x500)));

    if (t124 != 1LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x502 = UINT16_MAX;
	int32_t x503 = INT32_MIN;
	volatile uint8_t x504 = 7U;
	static volatile uint32_t t125 = 7058U;

    t125 = (x501&(x502>(x503^x504)));

    if (t125 != 0U) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x505 = INT64_MAX;
	static volatile int32_t x506 = INT32_MIN;
	volatile uint32_t x508 = 3982U;
	int64_t t126 = 1146LL;

    t126 = (x505&(x506>(x507^x508)));

    if (t126 != 1LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x510 = INT16_MIN;
	int64_t x511 = -189478160040546LL;
	static volatile int32_t t127 = -137460;

    t127 = (x509&(x510>(x511^x512)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x513 = 6997U;
	volatile uint64_t x514 = 386387LLU;
	int32_t x515 = INT32_MAX;
	volatile int64_t x516 = -4574925419499667429LL;
	uint32_t t128 = 539U;

    t128 = (x513&(x514>(x515^x516)));

    if (t128 != 0U) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x517 = INT8_MIN;
	static int64_t x518 = INT64_MAX;
	static uint32_t x519 = 2480326U;
	static int8_t x520 = -19;
	int32_t t129 = 7462623;

    t129 = (x517&(x518>(x519^x520)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x521 = UINT16_MAX;
	uint64_t x522 = UINT64_MAX;
	uint32_t x524 = 930780807U;

    t130 = (x521&(x522>(x523^x524)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x527 = 78U;
	int8_t x528 = -1;

    t131 = (x525&(x526>(x527^x528)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int32_t x529 = INT32_MIN;
	static int8_t x530 = INT8_MIN;
	uint64_t x531 = UINT64_MAX;
	static volatile int32_t x532 = -52;

    t132 = (x529&(x530>(x531^x532)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x533 = 94U;
	int8_t x535 = -1;
	int32_t x536 = -135727;
	static uint32_t t133 = 387135639U;

    t133 = (x533&(x534>(x535^x536)));

    if (t133 != 0U) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x539 = INT8_MAX;
	uint64_t t134 = 416250844463LLU;

    t134 = (x537&(x538>(x539^x540)));

    if (t134 != 0LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x541 = -1;
	int16_t x544 = INT16_MAX;
	int32_t t135 = 411784;

    t135 = (x541&(x542>(x543^x544)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint16_t x545 = UINT16_MAX;
	int32_t x546 = INT32_MIN;
	volatile uint16_t x547 = UINT16_MAX;

    t136 = (x545&(x546>(x547^x548)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x549 = INT16_MIN;
	static int64_t x550 = INT64_MIN;
	static int64_t x551 = INT64_MIN;
	static uint8_t x552 = 1U;
	static volatile int32_t t137 = -3;

    t137 = (x549&(x550>(x551^x552)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x553 = INT8_MIN;
	volatile int16_t x554 = 4;
	int32_t x555 = -109301160;
	static uint32_t x556 = UINT32_MAX;

    t138 = (x553&(x554>(x555^x556)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x558 = INT16_MIN;
	uint8_t x559 = 24U;
	int64_t x560 = INT64_MIN;
	volatile uint32_t t139 = 2U;

    t139 = (x557&(x558>(x559^x560)));

    if (t139 != 1U) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x561 = INT32_MIN;
	uint64_t x562 = 633780286631606LLU;

    t140 = (x561&(x562>(x563^x564)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x565 = 1;
	static uint32_t x566 = 854U;
	static int64_t x567 = -1LL;
	int64_t x568 = -1LL;
	static int32_t t141 = -64090214;

    t141 = (x565&(x566>(x567^x568)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x570 = INT32_MIN;
	int32_t x571 = INT32_MIN;
	volatile uint8_t x572 = 3U;

    t142 = (x569&(x570>(x571^x572)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int8_t x573 = -1;
	uint32_t x575 = 55841U;
	uint64_t x576 = UINT64_MAX;
	volatile int32_t t143 = 25;

    t143 = (x573&(x574>(x575^x576)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x577 = INT16_MAX;
	volatile int64_t x578 = INT64_MIN;
	volatile int32_t t144 = 99987725;

    t144 = (x577&(x578>(x579^x580)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x581 = 8U;
	int16_t x582 = 0;
	int32_t x583 = INT32_MIN;
	uint64_t x584 = 7550LLU;
	int32_t t145 = 1;

    t145 = (x581&(x582>(x583^x584)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x585 = -4;
	int32_t x586 = INT32_MIN;
	int8_t x587 = INT8_MIN;
	uint32_t x588 = 369481266U;
	volatile int32_t t146 = -106038518;

    t146 = (x585&(x586>(x587^x588)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x590 = 3U;
	volatile uint32_t x591 = 13U;
	uint16_t x592 = UINT16_MAX;
	int32_t t147 = -269906;

    t147 = (x589&(x590>(x591^x592)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint32_t x594 = UINT32_MAX;
	volatile uint32_t x595 = UINT32_MAX;
	uint64_t x596 = UINT64_MAX;
	int32_t t148 = 2559;

    t148 = (x593&(x594>(x595^x596)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int8_t x597 = -1;
	uint32_t x599 = 0U;
	volatile uint16_t x600 = 2052U;
	volatile int32_t t149 = 2014940;

    t149 = (x597&(x598>(x599^x600)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x601 = INT32_MIN;
	int8_t x602 = INT8_MAX;
	int8_t x604 = INT8_MIN;
	int32_t t150 = 23952685;

    t150 = (x601&(x602>(x603^x604)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x606 = INT16_MIN;
	static uint32_t x608 = 0U;
	int32_t t151 = -45;

    t151 = (x605&(x606>(x607^x608)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x609 = 111U;
	int8_t x610 = INT8_MIN;
	int32_t x611 = 688097111;
	volatile int64_t x612 = INT64_MIN;

    t152 = (x609&(x610>(x611^x612)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x614 = 5U;
	int16_t x615 = 5719;

    t153 = (x613&(x614>(x615^x616)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x617 = -13;
	volatile int64_t x618 = 125151514100LL;
	volatile int32_t t154 = -842011286;

    t154 = (x617&(x618>(x619^x620)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint8_t x621 = UINT8_MAX;
	volatile int32_t x623 = INT32_MAX;
	static int32_t t155 = 1554969;

    t155 = (x621&(x622>(x623^x624)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x625 = 22LLU;
	volatile int32_t x626 = INT32_MAX;
	static int8_t x627 = -7;
	volatile uint16_t x628 = UINT16_MAX;
	uint64_t t156 = 12574515849LLU;

    t156 = (x625&(x626>(x627^x628)));

    if (t156 != 0LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x629 = INT8_MIN;
	int8_t x630 = -1;
	volatile uint64_t x631 = 1446023LLU;
	uint64_t x632 = 56079102391454LLU;
	volatile int32_t t157 = -873193;

    t157 = (x629&(x630>(x631^x632)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x635 = -1;
	static int64_t x636 = INT64_MIN;
	volatile int32_t t158 = 140407184;

    t158 = (x633&(x634>(x635^x636)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile int64_t x637 = INT64_MIN;
	int16_t x638 = 107;
	uint32_t x639 = 1959U;
	volatile int64_t t159 = -649685LL;

    t159 = (x637&(x638>(x639^x640)));

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int64_t x642 = 80820420598805LL;
	volatile uint32_t x644 = UINT32_MAX;
	volatile int64_t t160 = -69010919168199LL;

    t160 = (x641&(x642>(x643^x644)));

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x645 = INT8_MIN;
	static volatile int8_t x646 = INT8_MAX;
	int64_t x647 = INT64_MIN;
	int32_t x648 = -1;
	int32_t t161 = -60;

    t161 = (x645&(x646>(x647^x648)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x649 = UINT16_MAX;
	volatile uint16_t x652 = 28U;
	int32_t t162 = 51578;

    t162 = (x649&(x650>(x651^x652)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x655 = 167;
	uint32_t x656 = 25U;
	int32_t t163 = -1;

    t163 = (x653&(x654>(x655^x656)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x657 = INT32_MIN;
	static int32_t x658 = -1;
	uint64_t x659 = UINT64_MAX;
	volatile int8_t x660 = -1;
	volatile int32_t t164 = 10;

    t164 = (x657&(x658>(x659^x660)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x662 = -4635838210072LL;
	uint16_t x663 = 12U;
	static int32_t t165 = 219013;

    t165 = (x661&(x662>(x663^x664)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x666 = -1;
	int32_t t166 = 140;

    t166 = (x665&(x666>(x667^x668)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x669 = 26079U;
	uint8_t x670 = 17U;
	int8_t x672 = INT8_MAX;

    t167 = (x669&(x670>(x671^x672)));

    if (t167 != 0U) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x673 = -11512;
	static volatile int16_t x674 = INT16_MIN;
	int16_t x675 = 117;
	static uint32_t x676 = 237U;
	volatile int32_t t168 = -482619;

    t168 = (x673&(x674>(x675^x676)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x677 = -456088485;
	uint64_t x679 = UINT64_MAX;
	int32_t t169 = -27;

    t169 = (x677&(x678>(x679^x680)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint32_t x681 = UINT32_MAX;
	uint64_t x682 = 2381582701998LLU;
	uint8_t x683 = 12U;
	volatile int16_t x684 = INT16_MAX;
	volatile uint32_t t170 = 328U;

    t170 = (x681&(x682>(x683^x684)));

    if (t170 != 1U) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint8_t x685 = 3U;
	int8_t x686 = INT8_MIN;
	int32_t x687 = -1;
	static int32_t x688 = INT32_MIN;
	volatile int32_t t171 = -226781912;

    t171 = (x685&(x686>(x687^x688)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint8_t x690 = 9U;
	static volatile int32_t x692 = -1;
	volatile int32_t t172 = -1;

    t172 = (x689&(x690>(x691^x692)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x693 = INT16_MIN;
	static uint8_t x694 = 2U;
	uint64_t x695 = 3691041638182423LLU;
	volatile int32_t x696 = INT32_MAX;
	int32_t t173 = 8075;

    t173 = (x693&(x694>(x695^x696)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x697 = UINT8_MAX;
	uint32_t x698 = UINT32_MAX;
	static int32_t x699 = 4028015;
	int64_t x700 = INT64_MIN;
	static volatile int32_t t174 = -11;

    t174 = (x697&(x698>(x699^x700)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x701 = INT16_MAX;
	static uint32_t x702 = 14783354U;
	uint64_t x704 = UINT64_MAX;
	int32_t t175 = 4730199;

    t175 = (x701&(x702>(x703^x704)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int32_t x705 = 567208;
	int16_t x706 = INT16_MAX;
	int64_t x708 = INT64_MIN;
	int32_t t176 = -82;

    t176 = (x705&(x706>(x707^x708)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x709 = INT16_MIN;
	uint32_t x710 = 16169488U;
	volatile int32_t x711 = INT32_MIN;
	static int8_t x712 = INT8_MIN;
	volatile int32_t t177 = 1;

    t177 = (x709&(x710>(x711^x712)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint16_t x714 = 191U;

    t178 = (x713&(x714>(x715^x716)));

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x717 = 333543206451LL;
	int16_t x718 = -1;
	static uint16_t x719 = 21U;
	int32_t x720 = -1;
	int64_t t179 = 3537522630LL;

    t179 = (x717&(x718>(x719^x720)));

    if (t179 != 1LL) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x721 = -1;
	static volatile uint32_t x722 = 1U;
	uint64_t x724 = 33540433572420LLU;
	volatile int32_t t180 = 385220;

    t180 = (x721&(x722>(x723^x724)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x727 = INT8_MIN;
	static volatile int32_t t181 = -46;

    t181 = (x725&(x726>(x727^x728)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint16_t x729 = 232U;
	volatile int16_t x732 = INT16_MAX;
	volatile int32_t t182 = 48;

    t182 = (x729&(x730>(x731^x732)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x733 = INT64_MAX;
	int16_t x734 = INT16_MAX;
	int64_t x735 = INT64_MAX;
	int64_t t183 = 560642285527054762LL;

    t183 = (x733&(x734>(x735^x736)));

    if (t183 != 1LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x737 = UINT32_MAX;
	volatile int8_t x738 = -1;
	volatile int32_t x740 = -16;
	volatile uint32_t t184 = 52628U;

    t184 = (x737&(x738>(x739^x740)));

    if (t184 != 0U) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint64_t x741 = UINT64_MAX;
	int16_t x743 = INT16_MIN;
	uint64_t x744 = 100670608065862LLU;
	static volatile uint64_t t185 = 139483172376801LLU;

    t185 = (x741&(x742>(x743^x744)));

    if (t185 != 0LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x746 = -1;
	volatile uint64_t x747 = 1LLU;
	uint8_t x748 = 42U;
	static volatile int32_t t186 = -810;

    t186 = (x745&(x746>(x747^x748)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x749 = -1;
	int16_t x750 = INT16_MIN;
	int16_t x751 = -12104;
	int64_t x752 = -93307806634382967LL;
	volatile int32_t t187 = -12170;

    t187 = (x749&(x750>(x751^x752)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x755 = -1LL;
	int8_t x756 = INT8_MIN;
	volatile int32_t t188 = -67903143;

    t188 = (x753&(x754>(x755^x756)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x757 = -1;
	static uint8_t x759 = 46U;
	int8_t x760 = 4;
	int32_t t189 = 4012;

    t189 = (x757&(x758>(x759^x760)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x762 = UINT16_MAX;
	uint64_t x763 = UINT64_MAX;
	static int8_t x764 = 5;
	volatile int32_t t190 = 16696525;

    t190 = (x761&(x762>(x763^x764)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x766 = 3U;
	int64_t x767 = INT64_MIN;
	static volatile int64_t x768 = INT64_MIN;

    t191 = (x765&(x766>(x767^x768)));

    if (t191 != 1LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x769 = INT64_MAX;
	static uint8_t x771 = UINT8_MAX;
	static int64_t x772 = -1LL;
	static int64_t t192 = -58961189840565LL;

    t192 = (x769&(x770>(x771^x772)));

    if (t192 != 1LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x773 = -33;
	int16_t x774 = INT16_MIN;
	int64_t x775 = -1LL;
	int32_t t193 = 44789271;

    t193 = (x773&(x774>(x775^x776)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x777 = 9U;
	int8_t x778 = INT8_MIN;
	volatile int64_t x779 = -3589177LL;
	int32_t t194 = -8622;

    t194 = (x777&(x778>(x779^x780)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x781 = UINT16_MAX;
	uint32_t x784 = UINT32_MAX;
	int32_t t195 = -1;

    t195 = (x781&(x782>(x783^x784)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x785 = INT32_MIN;
	uint64_t x786 = UINT64_MAX;
	static uint16_t x788 = UINT16_MAX;
	int32_t t196 = 2040;

    t196 = (x785&(x786>(x787^x788)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int16_t x789 = INT16_MAX;
	volatile int32_t x790 = -23805623;
	int32_t x791 = -217;
	uint8_t x792 = UINT8_MAX;
	volatile int32_t t197 = 481260;

    t197 = (x789&(x790>(x791^x792)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x794 = INT32_MAX;
	static int64_t x795 = -1LL;
	int8_t x796 = -49;
	uint64_t t198 = 37180302LLU;

    t198 = (x793&(x794>(x795^x796)));

    if (t198 != 1LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x800 = -1LL;
	int32_t t199 = 2;

    t199 = (x797&(x798>(x799^x800)));

    if (t199 != 0) { NG(); } else { ; }
	
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

