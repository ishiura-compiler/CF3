
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

static uint64_t x2 = UINT64_MAX;
int16_t x3 = 3178;
int64_t x12 = -1354LL;
int32_t x13 = INT32_MIN;
int8_t x20 = INT8_MAX;
uint8_t x21 = 27U;
volatile int64_t x23 = 24642014298569338LL;
volatile uint32_t x31 = UINT32_MAX;
uint64_t x34 = 166LLU;
int32_t t8 = -219770;
int16_t x39 = -1;
int8_t x40 = INT8_MIN;
volatile int32_t t9 = 27991;
uint16_t x41 = 6U;
int16_t x46 = -16321;
uint64_t x52 = UINT64_MAX;
int32_t t14 = -3;
static int8_t x61 = 7;
static uint8_t x62 = 40U;
int8_t x63 = 1;
uint8_t x64 = 0U;
int64_t x67 = INT64_MAX;
int16_t x68 = INT16_MIN;
static volatile int32_t t16 = 58620;
int16_t x73 = INT16_MIN;
static volatile int32_t t18 = 346;
static int16_t x85 = INT16_MIN;
volatile int32_t t21 = -121350;
static int64_t x93 = 7LL;
int64_t x96 = INT64_MIN;
static int8_t x109 = 5;
int8_t x113 = -1;
int8_t x114 = INT8_MIN;
volatile int32_t x116 = -1;
volatile int32_t t28 = 245074178;
uint32_t x121 = UINT32_MAX;
int64_t x124 = -1LL;
static int32_t x128 = -1;
int32_t t32 = 13026;
volatile int32_t t33 = 1;
int64_t x140 = INT64_MIN;
static uint16_t x141 = UINT16_MAX;
static int64_t x144 = INT64_MIN;
int8_t x146 = -1;
static volatile uint16_t x147 = 13U;
static int64_t x149 = INT64_MIN;
uint64_t x150 = 4171170714829775LLU;
static int8_t x155 = 42;
int64_t x159 = 958537LL;
int16_t x160 = -1;
int64_t x161 = INT64_MAX;
static int64_t x166 = INT64_MAX;
static volatile uint64_t x171 = 2LLU;
uint32_t x175 = 0U;
int32_t x179 = INT32_MAX;
static volatile int32_t t45 = -24608;
static volatile int32_t t49 = -54453;
int32_t t50 = -10749604;
static volatile int32_t x207 = -1;
int64_t x208 = INT64_MIN;
static int16_t x212 = INT16_MIN;
volatile int32_t t52 = -343827;
int32_t x214 = INT32_MAX;
int8_t x218 = -1;
int8_t x233 = 1;
int64_t x235 = 15LL;
int32_t x236 = 7971;
static volatile int32_t t58 = -1;
int8_t x240 = 6;
static uint32_t x241 = UINT32_MAX;
int8_t x242 = -1;
uint8_t x246 = 8U;
volatile int32_t t61 = 2;
uint64_t x249 = 81400LLU;
int32_t x252 = INT32_MAX;
static uint64_t x260 = 67081LLU;
volatile int64_t x267 = INT64_MIN;
int32_t t66 = 1;
static uint8_t x270 = 82U;
int32_t t67 = -776546;
int32_t t69 = 2986;
int32_t t71 = 434614685;
static uint16_t x291 = 1U;
volatile int32_t t73 = -670;
uint32_t x299 = 4811U;
int32_t t74 = -90550;
int32_t x305 = 1589580;
volatile int8_t x310 = -1;
uint64_t x312 = 0LLU;
int64_t x317 = INT64_MIN;
int16_t x328 = -1;
static volatile int32_t t81 = 0;
int8_t x332 = INT8_MAX;
int32_t x333 = INT32_MAX;
volatile int32_t t83 = -1;
int64_t x338 = 1LL;
int32_t t87 = 121677858;
int32_t x356 = INT32_MIN;
volatile int32_t t88 = 9;
int32_t t89 = 576431189;
int8_t x365 = INT8_MIN;
int16_t x366 = INT16_MIN;
volatile uint16_t x371 = 26745U;
static int8_t x372 = 3;
uint16_t x373 = 1687U;
int16_t x375 = INT16_MAX;
uint64_t x381 = 453059162074227LLU;
int32_t x384 = INT32_MAX;
int64_t x385 = -1LL;
int32_t x388 = -1;
volatile int32_t t96 = -152256874;
volatile int32_t t97 = -146405190;
int64_t x393 = 13109LL;
static uint16_t x394 = 23U;
int64_t x397 = -4382917945318638LL;
static int32_t x404 = -1;
static int32_t t100 = 880567;
uint32_t x408 = UINT32_MAX;
static int32_t t101 = -832;
uint64_t x410 = UINT64_MAX;
uint32_t x411 = UINT32_MAX;
static uint16_t x417 = 1010U;
uint64_t x422 = 43585824840712LLU;
int32_t t105 = 843520;
uint8_t x425 = 7U;
static uint64_t x426 = UINT64_MAX;
static uint32_t x428 = 908U;
volatile int8_t x430 = -1;
static uint8_t x437 = 31U;
int16_t x440 = -24;
volatile uint8_t x447 = UINT8_MAX;
int64_t x453 = -1LL;
uint32_t x455 = 809930373U;
volatile int32_t t116 = -144;
int16_t x475 = -1;
volatile int32_t t118 = -9996457;
uint64_t x478 = UINT64_MAX;
volatile int32_t t120 = -436899;
int16_t x489 = -37;
static int32_t x492 = 1;
volatile int16_t x504 = INT16_MAX;
uint32_t x507 = UINT32_MAX;
volatile int32_t t126 = 365653;
static int32_t x521 = INT32_MAX;
static int64_t x522 = INT64_MIN;
uint16_t x524 = 779U;
volatile uint32_t x527 = 190851857U;
volatile int32_t t131 = -352862;
volatile uint32_t x530 = UINT32_MAX;
volatile uint8_t x531 = 0U;
volatile int64_t x533 = -1LL;
int8_t x536 = 6;
int16_t x548 = INT16_MAX;
int32_t x550 = INT32_MIN;
static int16_t x551 = INT16_MAX;
static uint64_t x559 = 279823708082133LLU;
volatile int32_t t139 = -44314;
static volatile int16_t x561 = -3605;
int16_t x580 = 109;
volatile int8_t x584 = INT8_MIN;
int16_t x585 = -1;
int64_t x599 = INT64_MIN;
volatile uint32_t x603 = 4455136U;
static volatile int32_t t150 = 87776;
int16_t x606 = INT16_MAX;
int64_t x628 = -1LL;
uint16_t x633 = UINT16_MAX;
volatile int32_t x640 = INT32_MIN;
volatile int32_t t159 = -1047980499;
uint16_t x641 = UINT16_MAX;
int64_t x652 = -1LL;
int32_t t163 = -1;
static int64_t x659 = INT64_MAX;
static int16_t x662 = INT16_MIN;
static int8_t x667 = -3;
int32_t x671 = -10634287;
volatile int64_t x672 = -10582399460862LL;
uint8_t x674 = 7U;
int64_t x675 = -1LL;
uint16_t x678 = 10U;
uint64_t x696 = 524694LLU;
static int32_t t173 = -135674;
int8_t x709 = 2;
int64_t x716 = INT64_MAX;
int16_t x717 = INT16_MAX;
int32_t t179 = -177525;
static int16_t x726 = INT16_MIN;
static int16_t x729 = INT16_MIN;
uint64_t x731 = UINT64_MAX;
int64_t x733 = 24825848717744580LL;
volatile int8_t x734 = INT8_MIN;
volatile uint64_t x737 = 3664279965468586564LLU;
int32_t x738 = INT32_MAX;
volatile int32_t t185 = 1;
int16_t x745 = INT16_MIN;
int64_t x748 = -17LL;
static int8_t x751 = 46;
volatile int64_t x755 = INT64_MIN;
volatile int64_t x758 = INT64_MIN;
int64_t x764 = 1LL;
uint64_t x767 = 4010842059LLU;
int8_t x777 = INT8_MIN;
int8_t x778 = -1;
volatile uint16_t x784 = 3206U;
uint64_t x785 = 569252880366LLU;
uint32_t x788 = 105285550U;
int32_t t196 = 768325;
int64_t x796 = INT64_MIN;
int32_t x797 = -1;
static volatile int32_t x800 = INT32_MIN;


void f0(void) {
    	int8_t x1 = INT8_MIN;
	volatile int32_t x4 = 1;
	volatile int32_t t0 = -5617065;

    t0 = (((x1==x2)*x3)!=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MIN;
	int8_t x6 = INT8_MIN;
	uint64_t x7 = UINT64_MAX;
	int32_t x8 = -1;
	volatile int32_t t1 = -1;

    t1 = (((x5==x6)*x7)!=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MAX;
	int64_t x10 = INT64_MAX;
	int16_t x11 = 1;
	int32_t t2 = 7537;

    t2 = (((x9==x10)*x11)!=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x14 = -1;
	int8_t x15 = INT8_MAX;
	int16_t x16 = 0;
	int32_t t3 = 151;

    t3 = (((x13==x14)*x15)!=x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x17 = 223249945U;
	static int8_t x18 = INT8_MIN;
	static uint8_t x19 = 4U;
	int32_t t4 = 1063927203;

    t4 = (((x17==x18)*x19)!=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x22 = INT8_MIN;
	static int16_t x24 = -69;
	int32_t t5 = 441;

    t5 = (((x21==x22)*x23)!=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint64_t x25 = 38LLU;
	uint16_t x26 = UINT16_MAX;
	uint16_t x27 = 15U;
	int32_t x28 = INT32_MIN;
	static volatile int32_t t6 = 9805;

    t6 = (((x25==x26)*x27)!=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x29 = 122556152780877645LLU;
	uint64_t x30 = 717LLU;
	int16_t x32 = -1;
	volatile int32_t t7 = 58099;

    t7 = (((x29==x30)*x31)!=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint16_t x33 = 2U;
	int16_t x35 = 0;
	int16_t x36 = 619;

    t8 = (((x33==x34)*x35)!=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x37 = 0;
	static int16_t x38 = INT16_MIN;

    t9 = (((x37==x38)*x39)!=x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x42 = 0;
	int8_t x43 = INT8_MIN;
	uint32_t x44 = 28U;
	int32_t t10 = 24023;

    t10 = (((x41==x42)*x43)!=x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x45 = INT32_MAX;
	int16_t x47 = INT16_MAX;
	static volatile int32_t x48 = -49719144;
	static volatile int32_t t11 = -17097;

    t11 = (((x45==x46)*x47)!=x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = -178993007;
	volatile int16_t x50 = INT16_MIN;
	volatile uint64_t x51 = 59LLU;
	int32_t t12 = -1;

    t12 = (((x49==x50)*x51)!=x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x53 = INT8_MAX;
	int64_t x54 = INT64_MAX;
	int16_t x55 = 1599;
	volatile int64_t x56 = -1LL;
	volatile int32_t t13 = 916;

    t13 = (((x53==x54)*x55)!=x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = INT8_MIN;
	volatile int64_t x58 = INT64_MIN;
	volatile int32_t x59 = -1;
	static int32_t x60 = 1343535;

    t14 = (((x57==x58)*x59)!=x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t t15 = -187443526;

    t15 = (((x61==x62)*x63)!=x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint8_t x65 = 7U;
	int16_t x66 = INT16_MIN;

    t16 = (((x65==x66)*x67)!=x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x69 = 11133U;
	volatile uint64_t x70 = 2812885529288211LLU;
	int64_t x71 = INT64_MAX;
	uint8_t x72 = 3U;
	int32_t t17 = -823;

    t17 = (((x69==x70)*x71)!=x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static int16_t x74 = -412;
	int8_t x75 = INT8_MIN;
	uint16_t x76 = UINT16_MAX;

    t18 = (((x73==x74)*x75)!=x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = -1;
	volatile uint32_t x78 = 162U;
	uint64_t x79 = 27732488LLU;
	volatile int8_t x80 = INT8_MIN;
	volatile int32_t t19 = 27;

    t19 = (((x77==x78)*x79)!=x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x81 = 14356U;
	int8_t x82 = -11;
	int32_t x83 = INT32_MIN;
	volatile uint16_t x84 = 1U;
	int32_t t20 = -1107;

    t20 = (((x81==x82)*x83)!=x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x86 = -1;
	static int8_t x87 = INT8_MAX;
	uint16_t x88 = 24U;

    t21 = (((x85==x86)*x87)!=x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x89 = INT16_MIN;
	int32_t x90 = 3420409;
	static uint64_t x91 = 16LLU;
	uint32_t x92 = UINT32_MAX;
	static int32_t t22 = -7822;

    t22 = (((x89==x90)*x91)!=x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x94 = -1;
	uint16_t x95 = 205U;
	volatile int32_t t23 = 0;

    t23 = (((x93==x94)*x95)!=x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x97 = -7083;
	volatile int8_t x98 = -1;
	int32_t x99 = INT32_MAX;
	volatile int8_t x100 = INT8_MIN;
	static volatile int32_t t24 = -482;

    t24 = (((x97==x98)*x99)!=x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = INT64_MIN;
	int64_t x102 = 245643974LL;
	int8_t x103 = 12;
	int16_t x104 = -1942;
	static volatile int32_t t25 = -551483;

    t25 = (((x101==x102)*x103)!=x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = INT32_MIN;
	volatile int64_t x106 = INT64_MAX;
	int64_t x107 = INT64_MAX;
	static int16_t x108 = 13;
	volatile int32_t t26 = -5;

    t26 = (((x105==x106)*x107)!=x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x110 = 0U;
	int64_t x111 = 61026LL;
	int8_t x112 = INT8_MIN;
	int32_t t27 = -5412953;

    t27 = (((x109==x110)*x111)!=x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x115 = INT32_MAX;

    t28 = (((x113==x114)*x115)!=x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint32_t x117 = 6658U;
	uint8_t x118 = 1U;
	uint16_t x119 = 2U;
	int8_t x120 = -1;
	int32_t t29 = 12;

    t29 = (((x117==x118)*x119)!=x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint64_t x122 = 811095035011108LLU;
	int64_t x123 = INT64_MAX;
	int32_t t30 = -235380;

    t30 = (((x121==x122)*x123)!=x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x125 = UINT32_MAX;
	volatile int32_t x126 = -1;
	int64_t x127 = INT64_MIN;
	volatile int32_t t31 = -19379;

    t31 = (((x125==x126)*x127)!=x128);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x129 = 6U;
	int64_t x130 = INT64_MAX;
	volatile int32_t x131 = INT32_MIN;
	int32_t x132 = INT32_MIN;

    t32 = (((x129==x130)*x131)!=x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = INT8_MIN;
	uint8_t x134 = UINT8_MAX;
	static int32_t x135 = INT32_MIN;
	volatile int8_t x136 = INT8_MIN;

    t33 = (((x133==x134)*x135)!=x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint8_t x137 = 60U;
	volatile int32_t x138 = 366934661;
	int8_t x139 = INT8_MAX;
	int32_t t34 = 3;

    t34 = (((x137==x138)*x139)!=x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static int8_t x142 = INT8_MIN;
	uint8_t x143 = 123U;
	int32_t t35 = 12;

    t35 = (((x141==x142)*x143)!=x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x145 = 1U;
	uint8_t x148 = UINT8_MAX;
	int32_t t36 = 733658276;

    t36 = (((x145==x146)*x147)!=x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x151 = 507U;
	volatile uint16_t x152 = 325U;
	int32_t t37 = 3527;

    t37 = (((x149==x150)*x151)!=x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = INT16_MIN;
	static int16_t x154 = 1;
	uint8_t x156 = 36U;
	static int32_t t38 = 110;

    t38 = (((x153==x154)*x155)!=x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x157 = -302178857;
	int16_t x158 = -3;
	volatile int32_t t39 = 600429054;

    t39 = (((x157==x158)*x159)!=x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x162 = -2;
	int64_t x163 = -235165711035749LL;
	static uint8_t x164 = 10U;
	static volatile int32_t t40 = 16819;

    t40 = (((x161==x162)*x163)!=x164);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x165 = -1;
	volatile int64_t x167 = INT64_MAX;
	int8_t x168 = INT8_MIN;
	volatile int32_t t41 = 80933051;

    t41 = (((x165==x166)*x167)!=x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x169 = 204U;
	int32_t x170 = -1;
	int64_t x172 = -1LL;
	int32_t t42 = -347630;

    t42 = (((x169==x170)*x171)!=x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x173 = INT32_MIN;
	int64_t x174 = -3645871744074192LL;
	uint32_t x176 = 7902U;
	volatile int32_t t43 = -362145;

    t43 = (((x173==x174)*x175)!=x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = -2659550925775825LL;
	volatile int8_t x178 = -1;
	static uint16_t x180 = 7U;
	int32_t t44 = -15;

    t44 = (((x177==x178)*x179)!=x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static int8_t x181 = INT8_MAX;
	static uint8_t x182 = 3U;
	static volatile int32_t x183 = -1;
	volatile int32_t x184 = INT32_MAX;

    t45 = (((x181==x182)*x183)!=x184);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = INT16_MAX;
	static volatile int8_t x186 = -1;
	int16_t x187 = INT16_MIN;
	volatile int32_t x188 = -1;
	volatile int32_t t46 = 3425;

    t46 = (((x185==x186)*x187)!=x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x189 = 10087U;
	volatile int8_t x190 = INT8_MAX;
	static int32_t x191 = INT32_MIN;
	uint32_t x192 = 957U;
	int32_t t47 = -699;

    t47 = (((x189==x190)*x191)!=x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int64_t x193 = INT64_MIN;
	int32_t x194 = -1709;
	static uint32_t x195 = 12U;
	volatile int8_t x196 = 11;
	int32_t t48 = 182882149;

    t48 = (((x193==x194)*x195)!=x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x197 = -1;
	uint64_t x198 = 249LLU;
	int64_t x199 = -797330LL;
	volatile uint64_t x200 = UINT64_MAX;

    t49 = (((x197==x198)*x199)!=x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int16_t x201 = -2;
	volatile int64_t x202 = 209673LL;
	int8_t x203 = INT8_MIN;
	int8_t x204 = 0;

    t50 = (((x201==x202)*x203)!=x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x205 = 14U;
	int16_t x206 = INT16_MIN;
	int32_t t51 = 0;

    t51 = (((x205==x206)*x207)!=x208);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint32_t x209 = 132933U;
	static volatile int32_t x210 = -18287;
	int32_t x211 = 7;

    t52 = (((x209==x210)*x211)!=x212);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = -333167;
	volatile uint32_t x215 = 37293722U;
	static volatile int32_t x216 = INT32_MIN;
	int32_t t53 = 68683;

    t53 = (((x213==x214)*x215)!=x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x217 = INT16_MIN;
	int64_t x219 = -7551803LL;
	int32_t x220 = INT32_MIN;
	volatile int32_t t54 = 41104962;

    t54 = (((x217==x218)*x219)!=x220);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x221 = -1;
	static int16_t x222 = -3;
	int8_t x223 = 13;
	int64_t x224 = INT64_MIN;
	int32_t t55 = -150867370;

    t55 = (((x221==x222)*x223)!=x224);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x225 = INT8_MIN;
	uint16_t x226 = UINT16_MAX;
	uint32_t x227 = UINT32_MAX;
	int32_t x228 = INT32_MAX;
	volatile int32_t t56 = -187871051;

    t56 = (((x225==x226)*x227)!=x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x229 = -1;
	int64_t x230 = INT64_MIN;
	int8_t x231 = INT8_MIN;
	uint32_t x232 = 972U;
	volatile int32_t t57 = -126;

    t57 = (((x229==x230)*x231)!=x232);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x234 = INT16_MAX;

    t58 = (((x233==x234)*x235)!=x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x237 = 41;
	int32_t x238 = -427090;
	volatile uint64_t x239 = UINT64_MAX;
	volatile int32_t t59 = -47906333;

    t59 = (((x237==x238)*x239)!=x240);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x243 = INT64_MIN;
	volatile int16_t x244 = -1;
	volatile int32_t t60 = -6;

    t60 = (((x241==x242)*x243)!=x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x245 = 2801874186LLU;
	uint16_t x247 = 20908U;
	int8_t x248 = -41;

    t61 = (((x245==x246)*x247)!=x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x250 = 1098502LLU;
	int8_t x251 = -1;
	volatile int32_t t62 = 1933;

    t62 = (((x249==x250)*x251)!=x252);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x253 = -6;
	int8_t x254 = INT8_MIN;
	int16_t x255 = -1;
	volatile int8_t x256 = INT8_MIN;
	int32_t t63 = 5238370;

    t63 = (((x253==x254)*x255)!=x256);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x257 = -1LL;
	static int32_t x258 = INT32_MIN;
	uint32_t x259 = 1981865U;
	int32_t t64 = -2544;

    t64 = (((x257==x258)*x259)!=x260);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x261 = -1;
	int8_t x262 = -3;
	static uint64_t x263 = UINT64_MAX;
	static volatile int32_t x264 = INT32_MAX;
	int32_t t65 = -31574;

    t65 = (((x261==x262)*x263)!=x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x265 = -1;
	int32_t x266 = -33;
	uint64_t x268 = 2997185056695709569LLU;

    t66 = (((x265==x266)*x267)!=x268);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int8_t x269 = INT8_MIN;
	int64_t x271 = INT64_MAX;
	static uint32_t x272 = 3987149U;

    t67 = (((x269==x270)*x271)!=x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int32_t x273 = 23920767;
	int32_t x274 = INT32_MIN;
	static int32_t x275 = INT32_MIN;
	uint16_t x276 = 55U;
	volatile int32_t t68 = -10;

    t68 = (((x273==x274)*x275)!=x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x277 = INT32_MIN;
	int16_t x278 = INT16_MIN;
	int64_t x279 = INT64_MAX;
	volatile int16_t x280 = 1;

    t69 = (((x277==x278)*x279)!=x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint8_t x281 = 3U;
	volatile int8_t x282 = -5;
	int16_t x283 = INT16_MIN;
	static uint32_t x284 = 940187U;
	int32_t t70 = 57640;

    t70 = (((x281==x282)*x283)!=x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x285 = 175152591U;
	int64_t x286 = INT64_MIN;
	int64_t x287 = INT64_MIN;
	volatile int8_t x288 = 3;

    t71 = (((x285==x286)*x287)!=x288);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x289 = INT16_MAX;
	uint32_t x290 = UINT32_MAX;
	static uint16_t x292 = 27829U;
	static int32_t t72 = -897;

    t72 = (((x289==x290)*x291)!=x292);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x293 = 24000U;
	int64_t x294 = INT64_MAX;
	static volatile uint8_t x295 = 88U;
	uint16_t x296 = 23U;

    t73 = (((x293==x294)*x295)!=x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int32_t x297 = -61049175;
	volatile int32_t x298 = INT32_MIN;
	uint8_t x300 = 8U;

    t74 = (((x297==x298)*x299)!=x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x301 = -1;
	uint32_t x302 = 2066199906U;
	int8_t x303 = -2;
	uint64_t x304 = UINT64_MAX;
	static volatile int32_t t75 = 12;

    t75 = (((x301==x302)*x303)!=x304);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x306 = -1;
	uint32_t x307 = 109938456U;
	volatile int32_t x308 = 942913139;
	int32_t t76 = 19445785;

    t76 = (((x305==x306)*x307)!=x308);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x309 = 26535U;
	int32_t x311 = -1;
	int32_t t77 = 673845;

    t77 = (((x309==x310)*x311)!=x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x313 = 31U;
	uint16_t x314 = 29U;
	int64_t x315 = -616236230LL;
	uint64_t x316 = 962LLU;
	volatile int32_t t78 = 468013297;

    t78 = (((x313==x314)*x315)!=x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x318 = INT16_MIN;
	uint16_t x319 = 380U;
	static int32_t x320 = 846;
	int32_t t79 = -878;

    t79 = (((x317==x318)*x319)!=x320);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x321 = INT32_MAX;
	static int32_t x322 = 44;
	volatile int16_t x323 = -1;
	int8_t x324 = -1;
	static volatile int32_t t80 = -147147602;

    t80 = (((x321==x322)*x323)!=x324);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x325 = 968505819025876LL;
	int8_t x326 = -4;
	int64_t x327 = -259908765576894LL;

    t81 = (((x325==x326)*x327)!=x328);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int8_t x329 = -1;
	int32_t x330 = INT32_MAX;
	int32_t x331 = -1;
	int32_t t82 = 5;

    t82 = (((x329==x330)*x331)!=x332);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int16_t x334 = INT16_MIN;
	static uint16_t x335 = 13809U;
	static uint64_t x336 = 7549983758047LLU;

    t83 = (((x333==x334)*x335)!=x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x337 = -4985480;
	uint16_t x339 = 499U;
	int16_t x340 = 0;
	int32_t t84 = -96;

    t84 = (((x337==x338)*x339)!=x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int32_t x341 = -592;
	static int64_t x342 = -1LL;
	uint16_t x343 = 112U;
	volatile uint32_t x344 = 94U;
	static volatile int32_t t85 = 939515;

    t85 = (((x341==x342)*x343)!=x344);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static int32_t x345 = -621602421;
	int64_t x346 = INT64_MIN;
	static int32_t x347 = 1;
	volatile int32_t x348 = INT32_MAX;
	int32_t t86 = 104180;

    t86 = (((x345==x346)*x347)!=x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x349 = -1;
	volatile uint32_t x350 = 1195727761U;
	uint64_t x351 = UINT64_MAX;
	int16_t x352 = -693;

    t87 = (((x349==x350)*x351)!=x352);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int64_t x353 = 4156639921977LL;
	int8_t x354 = -3;
	static int8_t x355 = -2;

    t88 = (((x353==x354)*x355)!=x356);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x357 = -1;
	static int16_t x358 = INT16_MIN;
	static volatile int64_t x359 = INT64_MIN;
	int32_t x360 = -1;

    t89 = (((x357==x358)*x359)!=x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint64_t x361 = 37LLU;
	uint32_t x362 = 243064447U;
	int16_t x363 = INT16_MAX;
	int16_t x364 = INT16_MIN;
	int32_t t90 = 23542243;

    t90 = (((x361==x362)*x363)!=x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint16_t x367 = 26153U;
	uint64_t x368 = 6219225LLU;
	volatile int32_t t91 = -2029919;

    t91 = (((x365==x366)*x367)!=x368);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static int16_t x369 = INT16_MIN;
	static volatile uint16_t x370 = UINT16_MAX;
	int32_t t92 = -32;

    t92 = (((x369==x370)*x371)!=x372);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int64_t x374 = -1LL;
	static uint8_t x376 = UINT8_MAX;
	static int32_t t93 = -3949876;

    t93 = (((x373==x374)*x375)!=x376);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int64_t x377 = -78349389416457LL;
	static volatile int64_t x378 = INT64_MIN;
	static int8_t x379 = -48;
	volatile int16_t x380 = INT16_MAX;
	volatile int32_t t94 = -900181;

    t94 = (((x377==x378)*x379)!=x380);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x382 = -1;
	int8_t x383 = 4;
	int32_t t95 = 50181;

    t95 = (((x381==x382)*x383)!=x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint64_t x386 = 54702044LLU;
	static uint64_t x387 = UINT64_MAX;

    t96 = (((x385==x386)*x387)!=x388);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x389 = INT16_MIN;
	static volatile int32_t x390 = -215092785;
	int64_t x391 = -496193965289LL;
	int8_t x392 = INT8_MIN;

    t97 = (((x389==x390)*x391)!=x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x395 = INT16_MIN;
	static int64_t x396 = INT64_MIN;
	int32_t t98 = -57081;

    t98 = (((x393==x394)*x395)!=x396);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint8_t x398 = 1U;
	static uint64_t x399 = 450395LLU;
	uint8_t x400 = 0U;
	int32_t t99 = 0;

    t99 = (((x397==x398)*x399)!=x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x401 = -599621534LL;
	int64_t x402 = INT64_MAX;
	int8_t x403 = INT8_MAX;

    t100 = (((x401==x402)*x403)!=x404);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x405 = -1LL;
	int32_t x406 = -1;
	static int64_t x407 = INT64_MAX;

    t101 = (((x405==x406)*x407)!=x408);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int32_t x409 = 70738;
	volatile int8_t x412 = INT8_MIN;
	static int32_t t102 = -15871378;

    t102 = (((x409==x410)*x411)!=x412);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static int64_t x413 = 41LL;
	volatile int64_t x414 = INT64_MIN;
	int64_t x415 = INT64_MIN;
	int64_t x416 = INT64_MIN;
	volatile int32_t t103 = -406;

    t103 = (((x413==x414)*x415)!=x416);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x418 = -2;
	int16_t x419 = -5044;
	int16_t x420 = INT16_MAX;
	int32_t t104 = 1191;

    t104 = (((x417==x418)*x419)!=x420);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = -4497;
	uint16_t x423 = UINT16_MAX;
	volatile uint64_t x424 = 948653641057474303LLU;

    t105 = (((x421==x422)*x423)!=x424);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int8_t x427 = -1;
	int32_t t106 = -2952;

    t106 = (((x425==x426)*x427)!=x428);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x429 = -7;
	uint32_t x431 = UINT32_MAX;
	int16_t x432 = INT16_MIN;
	int32_t t107 = 10896207;

    t107 = (((x429==x430)*x431)!=x432);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x433 = 4066518875LLU;
	uint8_t x434 = UINT8_MAX;
	int32_t x435 = -1;
	int32_t x436 = INT32_MAX;
	static volatile int32_t t108 = -597251;

    t108 = (((x433==x434)*x435)!=x436);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x438 = INT8_MIN;
	uint32_t x439 = 13U;
	int32_t t109 = 1;

    t109 = (((x437==x438)*x439)!=x440);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x441 = -10;
	static int64_t x442 = INT64_MIN;
	static uint64_t x443 = UINT64_MAX;
	volatile int16_t x444 = INT16_MAX;
	volatile int32_t t110 = 1920329;

    t110 = (((x441==x442)*x443)!=x444);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x445 = INT32_MIN;
	int8_t x446 = -6;
	int64_t x448 = INT64_MIN;
	int32_t t111 = -51569898;

    t111 = (((x445==x446)*x447)!=x448);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile int16_t x449 = INT16_MIN;
	static volatile uint16_t x450 = 63U;
	static int16_t x451 = INT16_MIN;
	uint32_t x452 = UINT32_MAX;
	volatile int32_t t112 = 1722750;

    t112 = (((x449==x450)*x451)!=x452);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x454 = INT64_MIN;
	volatile int8_t x456 = INT8_MAX;
	volatile int32_t t113 = 0;

    t113 = (((x453==x454)*x455)!=x456);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x457 = 160U;
	int64_t x458 = INT64_MIN;
	int8_t x459 = -1;
	uint16_t x460 = UINT16_MAX;
	volatile int32_t t114 = -237;

    t114 = (((x457==x458)*x459)!=x460);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x461 = INT16_MIN;
	int32_t x462 = 447596;
	int16_t x463 = INT16_MIN;
	int32_t x464 = -20547;
	int32_t t115 = -57444510;

    t115 = (((x461==x462)*x463)!=x464);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int16_t x465 = 3;
	int16_t x466 = INT16_MIN;
	int16_t x467 = INT16_MAX;
	static uint32_t x468 = 3861406U;

    t116 = (((x465==x466)*x467)!=x468);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int8_t x469 = INT8_MAX;
	uint32_t x470 = 48U;
	volatile uint32_t x471 = 1416U;
	int8_t x472 = -1;
	volatile int32_t t117 = 55688228;

    t117 = (((x469==x470)*x471)!=x472);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x473 = 12U;
	volatile int16_t x474 = INT16_MIN;
	static int8_t x476 = 1;

    t118 = (((x473==x474)*x475)!=x476);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x477 = INT16_MIN;
	volatile int16_t x479 = 8587;
	uint8_t x480 = UINT8_MAX;
	volatile int32_t t119 = 1;

    t119 = (((x477==x478)*x479)!=x480);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x481 = 14798;
	uint8_t x482 = 98U;
	volatile int32_t x483 = -4960338;
	int16_t x484 = 2;

    t120 = (((x481==x482)*x483)!=x484);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x485 = INT32_MAX;
	uint16_t x486 = UINT16_MAX;
	uint16_t x487 = 0U;
	uint64_t x488 = 11132889849163LLU;
	static volatile int32_t t121 = 378;

    t121 = (((x485==x486)*x487)!=x488);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x490 = INT32_MIN;
	int16_t x491 = INT16_MIN;
	int32_t t122 = 22640;

    t122 = (((x489==x490)*x491)!=x492);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x493 = UINT16_MAX;
	int16_t x494 = -7;
	uint8_t x495 = 0U;
	int32_t x496 = 1144;
	static volatile int32_t t123 = -61530077;

    t123 = (((x493==x494)*x495)!=x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x497 = -1LL;
	int8_t x498 = INT8_MIN;
	int64_t x499 = INT64_MAX;
	static int32_t x500 = -8812;
	volatile int32_t t124 = -14;

    t124 = (((x497==x498)*x499)!=x500);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static int64_t x501 = INT64_MIN;
	uint16_t x502 = UINT16_MAX;
	volatile int16_t x503 = 32;
	static int32_t t125 = 1;

    t125 = (((x501==x502)*x503)!=x504);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint32_t x505 = 477530U;
	volatile int16_t x506 = -74;
	uint8_t x508 = UINT8_MAX;

    t126 = (((x505==x506)*x507)!=x508);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x509 = 58U;
	uint32_t x510 = UINT32_MAX;
	uint16_t x511 = 7U;
	static volatile int8_t x512 = -1;
	int32_t t127 = -66549;

    t127 = (((x509==x510)*x511)!=x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x513 = 5U;
	static int32_t x514 = INT32_MAX;
	int8_t x515 = INT8_MIN;
	static volatile int32_t x516 = 11368;
	static int32_t t128 = -915610251;

    t128 = (((x513==x514)*x515)!=x516);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint16_t x517 = 92U;
	uint16_t x518 = 2U;
	static volatile int8_t x519 = 0;
	uint64_t x520 = 5056740615LLU;
	int32_t t129 = -248216252;

    t129 = (((x517==x518)*x519)!=x520);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x523 = UINT8_MAX;
	int32_t t130 = 174;

    t130 = (((x521==x522)*x523)!=x524);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x525 = UINT16_MAX;
	static int16_t x526 = -2;
	static volatile int8_t x528 = INT8_MAX;

    t131 = (((x525==x526)*x527)!=x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x529 = INT32_MIN;
	int64_t x532 = INT64_MIN;
	int32_t t132 = -5635;

    t132 = (((x529==x530)*x531)!=x532);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int64_t x534 = 2267312980355365271LL;
	uint32_t x535 = UINT32_MAX;
	int32_t t133 = -14008;

    t133 = (((x533==x534)*x535)!=x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x537 = -268322;
	int64_t x538 = -130379487954LL;
	int64_t x539 = -1592LL;
	static int64_t x540 = -4105851016349LL;
	volatile int32_t t134 = -415966;

    t134 = (((x537==x538)*x539)!=x540);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x541 = 56;
	int32_t x542 = INT32_MAX;
	static int32_t x543 = 908224;
	int32_t x544 = 383036904;
	static int32_t t135 = 147409;

    t135 = (((x541==x542)*x543)!=x544);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x545 = INT64_MIN;
	uint32_t x546 = 112417976U;
	int64_t x547 = INT64_MIN;
	int32_t t136 = 6953137;

    t136 = (((x545==x546)*x547)!=x548);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x549 = INT32_MIN;
	volatile int16_t x552 = INT16_MAX;
	int32_t t137 = 260643;

    t137 = (((x549==x550)*x551)!=x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x553 = 7U;
	int8_t x554 = INT8_MAX;
	int8_t x555 = 12;
	static int32_t x556 = -78187601;
	int32_t t138 = -13;

    t138 = (((x553==x554)*x555)!=x556);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x557 = UINT16_MAX;
	int64_t x558 = INT64_MAX;
	uint32_t x560 = 190904048U;

    t139 = (((x557==x558)*x559)!=x560);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int64_t x562 = 0LL;
	int64_t x563 = INT64_MIN;
	int32_t x564 = -208739;
	int32_t t140 = 0;

    t140 = (((x561==x562)*x563)!=x564);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x565 = -1;
	int16_t x566 = -4;
	int16_t x567 = INT16_MAX;
	volatile int64_t x568 = -71323236465891161LL;
	int32_t t141 = 17497;

    t141 = (((x565==x566)*x567)!=x568);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x569 = 2U;
	static int8_t x570 = INT8_MIN;
	uint8_t x571 = 2U;
	uint64_t x572 = 20852723257299092LLU;
	int32_t t142 = 3519;

    t142 = (((x569==x570)*x571)!=x572);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x573 = INT16_MAX;
	int32_t x574 = 3592;
	static int32_t x575 = 1;
	int64_t x576 = 197053330LL;
	int32_t t143 = -1;

    t143 = (((x573==x574)*x575)!=x576);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x577 = 8137;
	int16_t x578 = -1;
	volatile uint16_t x579 = 1U;
	static int32_t t144 = -400;

    t144 = (((x577==x578)*x579)!=x580);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x581 = 152U;
	static int16_t x582 = -1;
	int64_t x583 = -1LL;
	int32_t t145 = -5183;

    t145 = (((x581==x582)*x583)!=x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x586 = -1;
	volatile int8_t x587 = INT8_MIN;
	volatile uint64_t x588 = 400912009524359LLU;
	volatile int32_t t146 = 8;

    t146 = (((x585==x586)*x587)!=x588);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x589 = INT32_MIN;
	int8_t x590 = INT8_MIN;
	volatile uint16_t x591 = 363U;
	int8_t x592 = INT8_MIN;
	int32_t t147 = 1248839;

    t147 = (((x589==x590)*x591)!=x592);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint8_t x593 = 0U;
	static volatile int16_t x594 = INT16_MIN;
	uint64_t x595 = 5149091530046LLU;
	static int64_t x596 = 64786104LL;
	volatile int32_t t148 = 1;

    t148 = (((x593==x594)*x595)!=x596);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint16_t x597 = 640U;
	uint64_t x598 = UINT64_MAX;
	int64_t x600 = -1LL;
	volatile int32_t t149 = -918;

    t149 = (((x597==x598)*x599)!=x600);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static int8_t x601 = -3;
	static int8_t x602 = INT8_MIN;
	volatile uint32_t x604 = 16865363U;

    t150 = (((x601==x602)*x603)!=x604);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile uint64_t x605 = UINT64_MAX;
	int32_t x607 = INT32_MAX;
	static int8_t x608 = INT8_MAX;
	volatile int32_t t151 = 66490259;

    t151 = (((x605==x606)*x607)!=x608);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x609 = INT16_MAX;
	int64_t x610 = 1LL;
	uint16_t x611 = UINT16_MAX;
	volatile int8_t x612 = -1;
	int32_t t152 = 64539;

    t152 = (((x609==x610)*x611)!=x612);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x613 = UINT64_MAX;
	uint64_t x614 = 6702657LLU;
	int8_t x615 = INT8_MAX;
	int8_t x616 = -6;
	int32_t t153 = -169;

    t153 = (((x613==x614)*x615)!=x616);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x617 = 0U;
	uint8_t x618 = UINT8_MAX;
	int64_t x619 = INT64_MIN;
	uint8_t x620 = 0U;
	volatile int32_t t154 = 24;

    t154 = (((x617==x618)*x619)!=x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x621 = INT8_MIN;
	int16_t x622 = -1;
	int64_t x623 = INT64_MIN;
	static volatile int16_t x624 = 1;
	int32_t t155 = -120915;

    t155 = (((x621==x622)*x623)!=x624);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x625 = INT32_MAX;
	int32_t x626 = INT32_MIN;
	uint32_t x627 = 14883036U;
	static int32_t t156 = 124870309;

    t156 = (((x625==x626)*x627)!=x628);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x629 = -10;
	uint8_t x630 = 38U;
	static int8_t x631 = -1;
	volatile int64_t x632 = -8718275205993LL;
	volatile int32_t t157 = -7;

    t157 = (((x629==x630)*x631)!=x632);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x634 = 2805U;
	int8_t x635 = INT8_MIN;
	static volatile int32_t x636 = -1;
	volatile int32_t t158 = 44;

    t158 = (((x633==x634)*x635)!=x636);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static int32_t x637 = INT32_MAX;
	int32_t x638 = -1;
	int16_t x639 = INT16_MAX;

    t159 = (((x637==x638)*x639)!=x640);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x642 = 4537453LL;
	int64_t x643 = -1LL;
	uint64_t x644 = 172LLU;
	static int32_t t160 = -963233952;

    t160 = (((x641==x642)*x643)!=x644);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x645 = -1;
	volatile int64_t x646 = INT64_MIN;
	int64_t x647 = INT64_MIN;
	static int16_t x648 = -1;
	int32_t t161 = 1956338;

    t161 = (((x645==x646)*x647)!=x648);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static int64_t x649 = INT64_MIN;
	volatile int64_t x650 = 516LL;
	int64_t x651 = INT64_MIN;
	int32_t t162 = 660;

    t162 = (((x649==x650)*x651)!=x652);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint8_t x653 = 27U;
	uint32_t x654 = 54282957U;
	int64_t x655 = INT64_MAX;
	uint16_t x656 = 3U;

    t163 = (((x653==x654)*x655)!=x656);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint64_t x657 = 7348LLU;
	int16_t x658 = 226;
	volatile int8_t x660 = 44;
	static volatile int32_t t164 = -504926;

    t164 = (((x657==x658)*x659)!=x660);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x661 = 294577380U;
	uint8_t x663 = 0U;
	int32_t x664 = INT32_MIN;
	int32_t t165 = 281815;

    t165 = (((x661==x662)*x663)!=x664);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x665 = INT64_MAX;
	int16_t x666 = INT16_MAX;
	static int32_t x668 = INT32_MAX;
	volatile int32_t t166 = 38;

    t166 = (((x665==x666)*x667)!=x668);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x669 = 6U;
	int16_t x670 = INT16_MAX;
	int32_t t167 = -5079639;

    t167 = (((x669==x670)*x671)!=x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int32_t x673 = 1012;
	int8_t x676 = INT8_MIN;
	volatile int32_t t168 = 0;

    t168 = (((x673==x674)*x675)!=x676);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x677 = INT64_MIN;
	int64_t x679 = -22719308LL;
	int8_t x680 = INT8_MIN;
	static int32_t t169 = 0;

    t169 = (((x677==x678)*x679)!=x680);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x681 = INT8_MIN;
	static int32_t x682 = INT32_MIN;
	int16_t x683 = -1;
	int64_t x684 = -1LL;
	int32_t t170 = 822;

    t170 = (((x681==x682)*x683)!=x684);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int64_t x685 = -1LL;
	int8_t x686 = INT8_MAX;
	uint16_t x687 = 323U;
	int8_t x688 = 0;
	volatile int32_t t171 = -2640493;

    t171 = (((x685==x686)*x687)!=x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x689 = UINT32_MAX;
	int16_t x690 = INT16_MIN;
	static int8_t x691 = INT8_MIN;
	static uint32_t x692 = UINT32_MAX;
	int32_t t172 = -156673;

    t172 = (((x689==x690)*x691)!=x692);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x693 = INT64_MIN;
	static int8_t x694 = INT8_MIN;
	volatile uint32_t x695 = UINT32_MAX;

    t173 = (((x693==x694)*x695)!=x696);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint32_t x697 = 129186U;
	int16_t x698 = -1;
	uint32_t x699 = UINT32_MAX;
	static uint64_t x700 = 65946560LLU;
	static volatile int32_t t174 = 1551;

    t174 = (((x697==x698)*x699)!=x700);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x701 = INT64_MIN;
	static int32_t x702 = INT32_MIN;
	volatile int64_t x703 = INT64_MIN;
	uint16_t x704 = UINT16_MAX;
	static int32_t t175 = -21;

    t175 = (((x701==x702)*x703)!=x704);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x705 = INT32_MIN;
	int16_t x706 = INT16_MIN;
	volatile uint8_t x707 = 7U;
	int16_t x708 = INT16_MIN;
	volatile int32_t t176 = -64747;

    t176 = (((x705==x706)*x707)!=x708);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x710 = -2;
	uint32_t x711 = 492129901U;
	static int16_t x712 = -6;
	volatile int32_t t177 = -781191;

    t177 = (((x709==x710)*x711)!=x712);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x713 = UINT16_MAX;
	int32_t x714 = -9673898;
	uint64_t x715 = 5LLU;
	int32_t t178 = -205770842;

    t178 = (((x713==x714)*x715)!=x716);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int16_t x718 = INT16_MIN;
	uint16_t x719 = 14U;
	static uint16_t x720 = 5794U;

    t179 = (((x717==x718)*x719)!=x720);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x721 = INT32_MAX;
	int32_t x722 = INT32_MIN;
	volatile uint32_t x723 = 59U;
	volatile int16_t x724 = INT16_MAX;
	static int32_t t180 = -2;

    t180 = (((x721==x722)*x723)!=x724);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x725 = 2U;
	uint64_t x727 = 4271802463772691195LLU;
	int8_t x728 = INT8_MIN;
	int32_t t181 = 0;

    t181 = (((x725==x726)*x727)!=x728);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x730 = 589U;
	uint16_t x732 = 3U;
	volatile int32_t t182 = -127;

    t182 = (((x729==x730)*x731)!=x732);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x735 = INT8_MIN;
	int64_t x736 = -1LL;
	int32_t t183 = -1350714;

    t183 = (((x733==x734)*x735)!=x736);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x739 = INT16_MIN;
	uint32_t x740 = 221854U;
	int32_t t184 = -1;

    t184 = (((x737==x738)*x739)!=x740);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x741 = 1854697U;
	int16_t x742 = INT16_MIN;
	int32_t x743 = INT32_MAX;
	static int32_t x744 = 1;

    t185 = (((x741==x742)*x743)!=x744);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x746 = UINT32_MAX;
	int32_t x747 = -1;
	static int32_t t186 = -42;

    t186 = (((x745==x746)*x747)!=x748);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x749 = -1LL;
	uint64_t x750 = 16597607792LLU;
	volatile int64_t x752 = INT64_MAX;
	int32_t t187 = 2356930;

    t187 = (((x749==x750)*x751)!=x752);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile uint32_t x753 = 15314944U;
	static uint64_t x754 = UINT64_MAX;
	int32_t x756 = INT32_MIN;
	volatile int32_t t188 = 45807818;

    t188 = (((x753==x754)*x755)!=x756);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint16_t x757 = 2237U;
	int32_t x759 = INT32_MIN;
	static uint64_t x760 = 120558LLU;
	volatile int32_t t189 = -1003303144;

    t189 = (((x757==x758)*x759)!=x760);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x761 = -12644;
	int16_t x762 = INT16_MIN;
	uint8_t x763 = 0U;
	volatile int32_t t190 = -10866;

    t190 = (((x761==x762)*x763)!=x764);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int16_t x765 = -1;
	volatile uint8_t x766 = 120U;
	volatile int8_t x768 = INT8_MIN;
	volatile int32_t t191 = -39;

    t191 = (((x765==x766)*x767)!=x768);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x769 = -7;
	uint64_t x770 = 885663LLU;
	volatile int8_t x771 = -1;
	static int16_t x772 = INT16_MAX;
	volatile int32_t t192 = 4033069;

    t192 = (((x769==x770)*x771)!=x772);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int8_t x773 = -9;
	volatile uint32_t x774 = 356759U;
	int32_t x775 = INT32_MIN;
	volatile int16_t x776 = INT16_MAX;
	volatile int32_t t193 = 3174;

    t193 = (((x773==x774)*x775)!=x776);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x779 = 5;
	uint16_t x780 = UINT16_MAX;
	static int32_t t194 = -1516;

    t194 = (((x777==x778)*x779)!=x780);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x781 = 29;
	uint8_t x782 = UINT8_MAX;
	static int32_t x783 = -1;
	volatile int32_t t195 = -315099;

    t195 = (((x781==x782)*x783)!=x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int64_t x786 = -2867952951501590690LL;
	int32_t x787 = -1;

    t196 = (((x785==x786)*x787)!=x788);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x789 = INT16_MAX;
	volatile int8_t x790 = INT8_MAX;
	volatile int8_t x791 = -22;
	uint64_t x792 = UINT64_MAX;
	static int32_t t197 = 10;

    t197 = (((x789==x790)*x791)!=x792);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x793 = -7105;
	int64_t x794 = -1LL;
	int8_t x795 = INT8_MIN;
	volatile int32_t t198 = 1243332;

    t198 = (((x793==x794)*x795)!=x796);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int8_t x798 = INT8_MAX;
	int32_t x799 = -173509;
	volatile int32_t t199 = -7015;

    t199 = (((x797==x798)*x799)!=x800);

    if (t199 != 1) { NG(); } else { ; }
	
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

