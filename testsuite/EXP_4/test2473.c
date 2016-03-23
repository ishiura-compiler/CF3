
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

int64_t x6 = INT64_MIN;
int8_t x7 = INT8_MIN;
int32_t x10 = INT32_MIN;
int32_t x13 = -1;
int32_t x16 = -2889520;
uint32_t x17 = 741U;
volatile uint64_t x18 = 3263847601619290LLU;
uint32_t x27 = 222U;
static volatile uint16_t x30 = 1375U;
volatile uint16_t x34 = 22428U;
int32_t x36 = INT32_MAX;
int32_t x37 = INT32_MAX;
int32_t x39 = -1;
static int8_t x43 = -1;
volatile int32_t x47 = INT32_MIN;
uint16_t x49 = 585U;
static volatile int8_t x53 = INT8_MIN;
volatile int32_t x54 = 16;
int16_t x59 = INT16_MIN;
int8_t x69 = 0;
volatile int32_t x73 = INT32_MIN;
uint16_t x76 = 435U;
uint8_t x79 = 11U;
uint64_t x85 = 1573148616243LLU;
uint64_t x87 = 120191842168LLU;
static volatile int32_t t21 = 1551779;
int64_t x90 = -1LL;
uint8_t x95 = UINT8_MAX;
int8_t x104 = -1;
uint8_t x107 = UINT8_MAX;
static volatile int32_t t28 = -2;
static uint16_t x122 = 0U;
static int64_t x123 = INT64_MAX;
static int32_t t30 = -1050;
static volatile int32_t x125 = 60;
static volatile int8_t x128 = 1;
volatile int32_t t31 = -509749218;
uint64_t x132 = 1341LLU;
volatile int32_t t32 = -50748949;
int16_t x140 = -563;
int32_t x150 = -2187315;
volatile int32_t t37 = 48816;
volatile int32_t x156 = -1;
volatile int32_t t38 = -3489674;
int8_t x159 = INT8_MAX;
volatile uint16_t x164 = 44U;
int16_t x166 = -23;
int32_t x167 = -2851077;
int8_t x169 = 0;
uint32_t x170 = UINT32_MAX;
volatile int64_t x176 = 432006684192144344LL;
uint32_t x180 = UINT32_MAX;
volatile int32_t t44 = 432504;
static int32_t t46 = -5009196;
static uint8_t x194 = UINT8_MAX;
int32_t x196 = INT32_MAX;
int32_t t49 = 25744257;
volatile int64_t x204 = INT64_MIN;
int8_t x211 = INT8_MIN;
uint64_t x213 = 557LLU;
volatile uint16_t x215 = 7U;
int64_t x216 = 35107282294535LL;
uint32_t x223 = 7748431U;
static int32_t x224 = 764778;
int32_t t56 = -5763;
volatile int16_t x229 = -955;
volatile int16_t x234 = INT16_MAX;
volatile int16_t x240 = -1;
int32_t t59 = 1;
uint8_t x241 = 4U;
uint16_t x243 = UINT16_MAX;
uint32_t x246 = 118U;
static uint8_t x250 = 49U;
static int32_t x251 = 1454430;
static volatile int32_t t63 = 0;
static uint8_t x257 = UINT8_MAX;
int64_t x259 = INT64_MIN;
int16_t x262 = -1;
volatile int8_t x276 = INT8_MAX;
static volatile int16_t x278 = 0;
int32_t t71 = -335;
static int32_t t72 = -14;
uint16_t x301 = 316U;
int64_t x303 = -1LL;
int32_t x305 = INT32_MIN;
static int8_t x310 = 1;
uint8_t x313 = UINT8_MAX;
uint8_t x314 = 26U;
uint32_t x316 = 830U;
volatile int32_t t79 = 103;
uint64_t x322 = UINT64_MAX;
static int32_t t80 = 1;
int16_t x326 = 2738;
int32_t x328 = INT32_MIN;
static int16_t x329 = INT16_MIN;
int32_t t82 = 275;
int32_t t83 = 505935;
int64_t x347 = INT64_MAX;
static int32_t t86 = 3;
int8_t x349 = -1;
int8_t x353 = -1;
static int64_t x354 = 3415495LL;
uint64_t x355 = 1243011282821LLU;
int16_t x364 = -452;
int32_t x366 = INT32_MIN;
static volatile int32_t t91 = -107772;
int32_t t93 = -459886218;
int8_t x378 = 30;
volatile int64_t x381 = -1LL;
static int16_t x384 = INT16_MIN;
int16_t x388 = INT16_MIN;
volatile int8_t x389 = INT8_MIN;
static volatile int8_t x390 = INT8_MIN;
int32_t t97 = 0;
volatile int64_t x394 = INT64_MAX;
volatile uint16_t x396 = 1329U;
static int8_t x403 = -1;
volatile int16_t x405 = 1044;
int16_t x416 = -10005;
int32_t x421 = -386;
uint8_t x425 = 98U;
int32_t x426 = INT32_MIN;
uint8_t x427 = 18U;
int8_t x433 = -1;
volatile int32_t t110 = -25438;
static uint16_t x449 = UINT16_MAX;
static int8_t x461 = -3;
uint8_t x469 = 0U;
volatile int32_t x473 = INT32_MIN;
static int16_t x474 = 18;
int32_t x478 = INT32_MIN;
volatile int32_t x480 = INT32_MIN;
int32_t t119 = 1021;
uint8_t x483 = UINT8_MAX;
static int32_t t122 = -1550;
static uint8_t x506 = 3U;
static int32_t x507 = INT32_MIN;
static int8_t x510 = INT8_MIN;
volatile int64_t x513 = INT64_MIN;
static uint16_t x515 = 3847U;
int32_t x520 = INT32_MAX;
int32_t x525 = INT32_MIN;
int8_t x529 = INT8_MIN;
int16_t x531 = -1;
int64_t x532 = 3889697475LL;
int32_t x534 = -86142;
int16_t x538 = -13;
volatile uint8_t x539 = UINT8_MAX;
uint64_t x543 = 103436641927335584LLU;
static int32_t t135 = 3245297;
int16_t x551 = INT16_MIN;
volatile int16_t x559 = -1653;
volatile int16_t x564 = 2;
static uint8_t x567 = UINT8_MAX;
int8_t x573 = INT8_MIN;
static volatile int32_t t143 = 1802054;
int32_t t145 = -1;
int64_t x591 = INT64_MIN;
uint32_t x592 = 493953339U;
static int64_t x596 = INT64_MAX;
uint32_t x608 = 1517775324U;
int32_t x612 = -1;
volatile int32_t t153 = 317;
volatile int8_t x619 = INT8_MIN;
static int32_t x626 = INT32_MIN;
uint32_t x628 = UINT32_MAX;
int16_t x629 = INT16_MIN;
static uint32_t x635 = 206U;
int8_t x636 = -38;
int64_t x643 = INT64_MIN;
static uint8_t x647 = UINT8_MAX;
volatile int32_t t161 = 9718;
static int32_t x649 = INT32_MAX;
static uint32_t x658 = UINT32_MAX;
volatile int32_t t164 = 33762774;
uint32_t x664 = 46536U;
int64_t x666 = -1LL;
static volatile uint64_t x669 = 8952038LLU;
uint32_t x671 = 1352554227U;
uint64_t x674 = UINT64_MAX;
uint16_t x675 = 1195U;
static int64_t x684 = INT64_MAX;
volatile int32_t t170 = -101169251;
int32_t x687 = -1675210;
static int16_t x688 = 2;
volatile int8_t x691 = INT8_MIN;
static uint8_t x695 = 11U;
volatile int8_t x700 = INT8_MIN;
volatile int32_t x703 = 10;
int32_t t175 = 545455414;
volatile int32_t t176 = -157;
int32_t x709 = INT32_MAX;
int16_t x713 = INT16_MIN;
uint64_t x720 = UINT64_MAX;
int32_t x725 = -8;
volatile int32_t t182 = 0;
static uint8_t x742 = UINT8_MAX;
static int32_t x747 = -1;
volatile int32_t t187 = 4109331;
int16_t x761 = -9524;
static volatile int64_t x762 = 60410789LL;
int64_t x774 = 2137297048910533LL;
int64_t x779 = 1791662LL;
static volatile uint16_t x784 = UINT16_MAX;
int16_t x785 = INT16_MIN;
uint64_t x788 = 11562283LLU;
volatile int64_t x796 = 2LL;


void f0(void) {
    	int16_t x1 = -151;
	uint32_t x2 = UINT32_MAX;
	int16_t x3 = -1;
	volatile int16_t x4 = -1;
	int32_t t0 = -1;

    t0 = (x1>(x2>(x3|x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x5 = INT8_MAX;
	volatile uint32_t x8 = UINT32_MAX;
	int32_t t1 = -269;

    t1 = (x5>(x6>(x7|x8)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x9 = 47167507;
	int16_t x11 = INT16_MIN;
	uint16_t x12 = 3176U;
	volatile int32_t t2 = -213;

    t2 = (x9>(x10>(x11|x12)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x14 = INT16_MIN;
	int32_t x15 = -1;
	int32_t t3 = -610;

    t3 = (x13>(x14>(x15|x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x19 = INT16_MAX;
	static int32_t x20 = INT32_MAX;
	volatile int32_t t4 = 213;

    t4 = (x17>(x18>(x19|x20)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = INT8_MAX;
	int8_t x22 = INT8_MIN;
	static int16_t x23 = INT16_MAX;
	int32_t x24 = 12;
	static volatile int32_t t5 = 113780910;

    t5 = (x21>(x22>(x23|x24)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = -121;
	uint16_t x26 = UINT16_MAX;
	uint16_t x28 = 325U;
	volatile int32_t t6 = -19;

    t6 = (x25>(x26>(x27|x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x29 = UINT8_MAX;
	uint32_t x31 = 42387872U;
	int8_t x32 = -1;
	static volatile int32_t t7 = 28;

    t7 = (x29>(x30>(x31|x32)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = INT64_MAX;
	int16_t x35 = INT16_MAX;
	int32_t t8 = -3;

    t8 = (x33>(x34>(x35|x36)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x38 = -7;
	int64_t x40 = 509525211682LL;
	static int32_t t9 = 0;

    t9 = (x37>(x38>(x39|x40)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x41 = UINT8_MAX;
	int8_t x42 = 13;
	volatile int64_t x44 = 237600LL;
	int32_t t10 = -1;

    t10 = (x41>(x42>(x43|x44)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = 41978680;
	int16_t x46 = INT16_MAX;
	static uint64_t x48 = UINT64_MAX;
	int32_t t11 = -94;

    t11 = (x45>(x46>(x47|x48)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x50 = -1;
	volatile int32_t x51 = INT32_MIN;
	volatile int16_t x52 = -1;
	volatile int32_t t12 = -1;

    t12 = (x49>(x50>(x51|x52)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x55 = INT16_MIN;
	uint32_t x56 = UINT32_MAX;
	volatile int32_t t13 = 595669767;

    t13 = (x53>(x54>(x55|x56)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x57 = 56U;
	int32_t x58 = INT32_MIN;
	volatile int8_t x60 = -1;
	volatile int32_t t14 = -35368;

    t14 = (x57>(x58>(x59|x60)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int64_t x61 = INT64_MAX;
	uint8_t x62 = 0U;
	uint64_t x63 = 1340217629LLU;
	int64_t x64 = 47724968LL;
	int32_t t15 = 6962;

    t15 = (x61>(x62>(x63|x64)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint16_t x65 = 213U;
	int32_t x66 = -1;
	volatile uint32_t x67 = UINT32_MAX;
	static int8_t x68 = -2;
	int32_t t16 = -171388;

    t16 = (x65>(x66>(x67|x68)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x70 = INT64_MIN;
	int16_t x71 = -2;
	static int8_t x72 = INT8_MIN;
	volatile int32_t t17 = 904;

    t17 = (x69>(x70>(x71|x72)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint8_t x74 = UINT8_MAX;
	volatile uint64_t x75 = UINT64_MAX;
	static int32_t t18 = 594309958;

    t18 = (x73>(x74>(x75|x76)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = INT32_MIN;
	int32_t x78 = INT32_MIN;
	uint16_t x80 = UINT16_MAX;
	volatile int32_t t19 = 554911247;

    t19 = (x77>(x78>(x79|x80)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x81 = 138056035525672173LLU;
	uint8_t x82 = 9U;
	uint8_t x83 = UINT8_MAX;
	int64_t x84 = -1LL;
	volatile int32_t t20 = 114510633;

    t20 = (x81>(x82>(x83|x84)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x86 = INT16_MAX;
	static int32_t x88 = INT32_MIN;

    t21 = (x85>(x86>(x87|x88)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x89 = 1401;
	volatile int64_t x91 = 6983193LL;
	int8_t x92 = INT8_MAX;
	volatile int32_t t22 = 4574;

    t22 = (x89>(x90>(x91|x92)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = -1LL;
	int16_t x94 = INT16_MAX;
	uint64_t x96 = UINT64_MAX;
	int32_t t23 = 2117;

    t23 = (x93>(x94>(x95|x96)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x97 = INT64_MIN;
	int32_t x98 = INT32_MIN;
	int64_t x99 = INT64_MIN;
	static int16_t x100 = 8018;
	static volatile int32_t t24 = 302716598;

    t24 = (x97>(x98>(x99|x100)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x101 = INT32_MIN;
	uint8_t x102 = 9U;
	uint32_t x103 = UINT32_MAX;
	volatile int32_t t25 = -66741609;

    t25 = (x101>(x102>(x103|x104)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int32_t x105 = -13;
	static volatile uint8_t x106 = UINT8_MAX;
	volatile int32_t x108 = INT32_MAX;
	volatile int32_t t26 = -1;

    t26 = (x105>(x106>(x107|x108)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x109 = 4U;
	int32_t x110 = INT32_MIN;
	int32_t x111 = -1;
	int64_t x112 = 14058678LL;
	static int32_t t27 = -39974203;

    t27 = (x109>(x110>(x111|x112)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x113 = INT8_MIN;
	int64_t x114 = INT64_MIN;
	uint64_t x115 = 919301562200LLU;
	int64_t x116 = INT64_MAX;

    t28 = (x113>(x114>(x115|x116)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x117 = 5033U;
	int64_t x118 = -267058383034LL;
	uint8_t x119 = 14U;
	int64_t x120 = INT64_MIN;
	static int32_t t29 = 0;

    t29 = (x117>(x118>(x119|x120)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = -7694523;
	int16_t x124 = -16;

    t30 = (x121>(x122>(x123|x124)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int16_t x126 = INT16_MAX;
	int16_t x127 = -7;

    t31 = (x125>(x126>(x127|x128)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x129 = -376065656LL;
	volatile int16_t x130 = -10;
	static int64_t x131 = INT64_MIN;

    t32 = (x129>(x130>(x131|x132)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int64_t x133 = INT64_MIN;
	int64_t x134 = INT64_MIN;
	int8_t x135 = -1;
	int8_t x136 = -1;
	volatile int32_t t33 = 8;

    t33 = (x133>(x134>(x135|x136)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x137 = INT32_MIN;
	uint8_t x138 = UINT8_MAX;
	int32_t x139 = INT32_MIN;
	int32_t t34 = 51387;

    t34 = (x137>(x138>(x139|x140)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = -1LL;
	static uint16_t x142 = 6U;
	static int16_t x143 = INT16_MIN;
	int8_t x144 = INT8_MIN;
	volatile int32_t t35 = 0;

    t35 = (x141>(x142>(x143|x144)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x145 = INT16_MIN;
	uint8_t x146 = 1U;
	volatile int64_t x147 = -1LL;
	int64_t x148 = -1LL;
	int32_t t36 = -1;

    t36 = (x145>(x146>(x147|x148)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x149 = INT32_MIN;
	static int32_t x151 = 1771;
	uint32_t x152 = 29740U;

    t37 = (x149>(x150>(x151|x152)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = -1;
	uint64_t x154 = UINT64_MAX;
	volatile uint16_t x155 = 1U;

    t38 = (x153>(x154>(x155|x156)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int8_t x157 = INT8_MAX;
	volatile uint8_t x158 = 7U;
	int32_t x160 = INT32_MAX;
	volatile int32_t t39 = 0;

    t39 = (x157>(x158>(x159|x160)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x161 = UINT16_MAX;
	int64_t x162 = 27173959LL;
	static uint8_t x163 = 53U;
	static volatile int32_t t40 = -138038;

    t40 = (x161>(x162>(x163|x164)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile int32_t x165 = INT32_MIN;
	int16_t x168 = INT16_MIN;
	int32_t t41 = 634803760;

    t41 = (x165>(x166>(x167|x168)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x171 = 3U;
	uint8_t x172 = UINT8_MAX;
	static volatile int32_t t42 = 13332;

    t42 = (x169>(x170>(x171|x172)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x173 = UINT32_MAX;
	int16_t x174 = 3059;
	int32_t x175 = -1;
	int32_t t43 = -62272231;

    t43 = (x173>(x174>(x175|x176)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x177 = 3U;
	int8_t x178 = 12;
	int16_t x179 = INT16_MIN;

    t44 = (x177>(x178>(x179|x180)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x181 = INT32_MAX;
	uint16_t x182 = 53U;
	uint8_t x183 = 48U;
	volatile int8_t x184 = INT8_MIN;
	static volatile int32_t t45 = 103285;

    t45 = (x181>(x182>(x183|x184)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static int8_t x185 = INT8_MAX;
	static int8_t x186 = 11;
	static uint64_t x187 = 535809646LLU;
	uint16_t x188 = UINT16_MAX;

    t46 = (x185>(x186>(x187|x188)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint8_t x189 = 17U;
	int64_t x190 = -1LL;
	int64_t x191 = INT64_MIN;
	int8_t x192 = INT8_MIN;
	static volatile int32_t t47 = -1;

    t47 = (x189>(x190>(x191|x192)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x193 = -54;
	uint32_t x195 = 365058209U;
	int32_t t48 = -344636521;

    t48 = (x193>(x194>(x195|x196)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint32_t x197 = 171750U;
	volatile int32_t x198 = INT32_MIN;
	int32_t x199 = INT32_MIN;
	static uint16_t x200 = UINT16_MAX;

    t49 = (x197>(x198>(x199|x200)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile uint16_t x201 = 4048U;
	int64_t x202 = 3239545434LL;
	int32_t x203 = 24;
	int32_t t50 = -1;

    t50 = (x201>(x202>(x203|x204)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x205 = -15621933;
	volatile int32_t x206 = INT32_MAX;
	int32_t x207 = INT32_MIN;
	int32_t x208 = INT32_MAX;
	static int32_t t51 = 416669346;

    t51 = (x205>(x206>(x207|x208)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x209 = 181438358U;
	int64_t x210 = -93979598LL;
	int16_t x212 = INT16_MIN;
	int32_t t52 = -105970805;

    t52 = (x209>(x210>(x211|x212)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x214 = -1183;
	int32_t t53 = 45;

    t53 = (x213>(x214>(x215|x216)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x217 = INT8_MAX;
	static int16_t x218 = INT16_MAX;
	uint64_t x219 = 7241823564LLU;
	int64_t x220 = 5288469LL;
	int32_t t54 = -1;

    t54 = (x217>(x218>(x219|x220)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = -1;
	int64_t x222 = 19443393098LL;
	volatile int32_t t55 = -11;

    t55 = (x221>(x222>(x223|x224)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x225 = 14940522;
	int32_t x226 = -1;
	volatile int64_t x227 = INT64_MIN;
	int64_t x228 = 876753589LL;

    t56 = (x225>(x226>(x227|x228)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x230 = INT32_MAX;
	static int64_t x231 = INT64_MIN;
	static int8_t x232 = -9;
	volatile int32_t t57 = 5256880;

    t57 = (x229>(x230>(x231|x232)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint64_t x233 = UINT64_MAX;
	int8_t x235 = INT8_MIN;
	int64_t x236 = INT64_MAX;
	int32_t t58 = -231116924;

    t58 = (x233>(x234>(x235|x236)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int16_t x237 = INT16_MIN;
	int8_t x238 = INT8_MIN;
	uint8_t x239 = UINT8_MAX;

    t59 = (x237>(x238>(x239|x240)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x242 = 6LLU;
	volatile int32_t x244 = -1;
	int32_t t60 = -4343;

    t60 = (x241>(x242>(x243|x244)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x245 = INT8_MIN;
	int64_t x247 = -1LL;
	int32_t x248 = -7401508;
	int32_t t61 = 650204500;

    t61 = (x245>(x246>(x247|x248)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int16_t x249 = -2353;
	int16_t x252 = INT16_MAX;
	int32_t t62 = -10268;

    t62 = (x249>(x250>(x251|x252)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x253 = INT8_MIN;
	int32_t x254 = -1;
	static uint64_t x255 = UINT64_MAX;
	volatile uint8_t x256 = 41U;

    t63 = (x253>(x254>(x255|x256)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x258 = 28275;
	uint16_t x260 = UINT16_MAX;
	volatile int32_t t64 = -842570679;

    t64 = (x257>(x258>(x259|x260)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x261 = INT16_MIN;
	int64_t x263 = INT64_MAX;
	int16_t x264 = -3533;
	int32_t t65 = -66;

    t65 = (x261>(x262>(x263|x264)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x265 = 820286454597759LL;
	volatile int32_t x266 = INT32_MIN;
	volatile int64_t x267 = INT64_MIN;
	uint16_t x268 = 1U;
	int32_t t66 = -1;

    t66 = (x265>(x266>(x267|x268)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x269 = 43920LL;
	int64_t x270 = INT64_MIN;
	static uint64_t x271 = 238510LLU;
	int32_t x272 = INT32_MIN;
	volatile int32_t t67 = 1324;

    t67 = (x269>(x270>(x271|x272)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x273 = INT64_MAX;
	int64_t x274 = INT64_MIN;
	static uint32_t x275 = UINT32_MAX;
	static int32_t t68 = -10307;

    t68 = (x273>(x274>(x275|x276)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int8_t x277 = INT8_MIN;
	volatile int16_t x279 = -1;
	uint8_t x280 = 1U;
	int32_t t69 = -55923;

    t69 = (x277>(x278>(x279|x280)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x281 = INT32_MAX;
	volatile int16_t x282 = INT16_MAX;
	int8_t x283 = -1;
	volatile int64_t x284 = -1034339744796LL;
	volatile int32_t t70 = 87218380;

    t70 = (x281>(x282>(x283|x284)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int64_t x285 = INT64_MAX;
	int8_t x286 = 1;
	uint16_t x287 = 26540U;
	volatile int8_t x288 = INT8_MIN;

    t71 = (x285>(x286>(x287|x288)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint32_t x289 = 691U;
	int64_t x290 = -1LL;
	int64_t x291 = -1580304690652LL;
	int64_t x292 = 5040093980674638LL;

    t72 = (x289>(x290>(x291|x292)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x293 = INT32_MIN;
	uint32_t x294 = 4887347U;
	int32_t x295 = INT32_MIN;
	uint64_t x296 = UINT64_MAX;
	static volatile int32_t t73 = 53407464;

    t73 = (x293>(x294>(x295|x296)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x297 = 5U;
	volatile int64_t x298 = INT64_MIN;
	static volatile int32_t x299 = INT32_MIN;
	volatile int32_t x300 = 90274851;
	volatile int32_t t74 = 21024;

    t74 = (x297>(x298>(x299|x300)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x302 = -3629874;
	uint8_t x304 = 42U;
	static int32_t t75 = -3;

    t75 = (x301>(x302>(x303|x304)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x306 = INT16_MAX;
	static int64_t x307 = INT64_MAX;
	int8_t x308 = 8;
	volatile int32_t t76 = -1228466;

    t76 = (x305>(x306>(x307|x308)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x309 = INT16_MIN;
	int16_t x311 = -1;
	int8_t x312 = INT8_MAX;
	int32_t t77 = -16679296;

    t77 = (x309>(x310>(x311|x312)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x315 = UINT32_MAX;
	static volatile int32_t t78 = -347376873;

    t78 = (x313>(x314>(x315|x316)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x317 = 7U;
	int8_t x318 = INT8_MIN;
	volatile int16_t x319 = INT16_MIN;
	int32_t x320 = INT32_MIN;

    t79 = (x317>(x318>(x319|x320)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x321 = -3852;
	uint8_t x323 = 0U;
	int64_t x324 = -1LL;

    t80 = (x321>(x322>(x323|x324)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile uint8_t x325 = 1U;
	volatile int64_t x327 = 2101654531LL;
	volatile int32_t t81 = 0;

    t81 = (x325>(x326>(x327|x328)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint64_t x330 = UINT64_MAX;
	static uint8_t x331 = 49U;
	int16_t x332 = 3915;

    t82 = (x329>(x330>(x331|x332)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint16_t x333 = 2U;
	int16_t x334 = -1;
	uint64_t x335 = UINT64_MAX;
	int64_t x336 = INT64_MIN;

    t83 = (x333>(x334>(x335|x336)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x337 = INT32_MIN;
	int32_t x338 = -924456;
	volatile uint8_t x339 = 1U;
	uint16_t x340 = 4U;
	volatile int32_t t84 = -835;

    t84 = (x337>(x338>(x339|x340)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x341 = -1;
	static int32_t x342 = INT32_MIN;
	static int8_t x343 = -1;
	static uint32_t x344 = 1013065U;
	volatile int32_t t85 = 1;

    t85 = (x341>(x342>(x343|x344)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x345 = INT16_MAX;
	int16_t x346 = 4143;
	uint8_t x348 = 4U;

    t86 = (x345>(x346>(x347|x348)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x350 = INT8_MIN;
	int8_t x351 = INT8_MIN;
	static uint8_t x352 = 9U;
	int32_t t87 = 742;

    t87 = (x349>(x350>(x351|x352)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x356 = INT32_MIN;
	volatile int32_t t88 = 715850;

    t88 = (x353>(x354>(x355|x356)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x357 = 0U;
	int64_t x358 = -1LL;
	uint64_t x359 = 258223LLU;
	int8_t x360 = -1;
	int32_t t89 = 4;

    t89 = (x357>(x358>(x359|x360)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint16_t x361 = UINT16_MAX;
	int64_t x362 = 23454LL;
	uint64_t x363 = 707105790461LLU;
	volatile int32_t t90 = 1019120176;

    t90 = (x361>(x362>(x363|x364)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint16_t x365 = UINT16_MAX;
	uint32_t x367 = 14940873U;
	int8_t x368 = 20;

    t91 = (x365>(x366>(x367|x368)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x369 = 17946227527LLU;
	int16_t x370 = -1;
	uint32_t x371 = 24U;
	int16_t x372 = INT16_MAX;
	volatile int32_t t92 = 531175;

    t92 = (x369>(x370>(x371|x372)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint16_t x373 = 3U;
	static int32_t x374 = INT32_MIN;
	int16_t x375 = INT16_MAX;
	volatile int64_t x376 = INT64_MAX;

    t93 = (x373>(x374>(x375|x376)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x377 = INT8_MIN;
	int32_t x379 = -583940079;
	static int64_t x380 = -1LL;
	volatile int32_t t94 = 214534;

    t94 = (x377>(x378>(x379|x380)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int32_t x382 = -2257;
	int32_t x383 = INT32_MIN;
	int32_t t95 = 0;

    t95 = (x381>(x382>(x383|x384)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x385 = 4U;
	volatile int64_t x386 = -1LL;
	static int8_t x387 = -1;
	volatile int32_t t96 = 1;

    t96 = (x385>(x386>(x387|x388)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x391 = 11U;
	uint16_t x392 = UINT16_MAX;

    t97 = (x389>(x390>(x391|x392)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x393 = 331U;
	static int8_t x395 = INT8_MIN;
	volatile int32_t t98 = -1;

    t98 = (x393>(x394>(x395|x396)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x397 = INT32_MAX;
	int32_t x398 = 673749;
	uint64_t x399 = 31LLU;
	int16_t x400 = INT16_MIN;
	static int32_t t99 = -151256;

    t99 = (x397>(x398>(x399|x400)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x401 = -1;
	volatile uint64_t x402 = 14654181967154110LLU;
	int64_t x404 = 850295LL;
	volatile int32_t t100 = 198;

    t100 = (x401>(x402>(x403|x404)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x406 = INT16_MAX;
	static volatile uint16_t x407 = UINT16_MAX;
	int32_t x408 = -195;
	volatile int32_t t101 = 357989653;

    t101 = (x405>(x406>(x407|x408)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x409 = 1169U;
	static int32_t x410 = INT32_MAX;
	volatile uint8_t x411 = 2U;
	volatile uint8_t x412 = 4U;
	static volatile int32_t t102 = -17687522;

    t102 = (x409>(x410>(x411|x412)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x413 = 1684;
	uint8_t x414 = 54U;
	uint16_t x415 = 70U;
	volatile int32_t t103 = 217860128;

    t103 = (x413>(x414>(x415|x416)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x417 = -180;
	static int8_t x418 = INT8_MAX;
	uint64_t x419 = 230991433255286LLU;
	uint16_t x420 = UINT16_MAX;
	volatile int32_t t104 = 3240494;

    t104 = (x417>(x418>(x419|x420)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x422 = INT16_MIN;
	static uint16_t x423 = 2493U;
	int8_t x424 = -28;
	static int32_t t105 = 30920071;

    t105 = (x421>(x422>(x423|x424)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x428 = 28978444U;
	int32_t t106 = 1379349;

    t106 = (x425>(x426>(x427|x428)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x429 = INT16_MAX;
	static int16_t x430 = -1;
	volatile int64_t x431 = 46454542LL;
	int8_t x432 = INT8_MIN;
	volatile int32_t t107 = 59790854;

    t107 = (x429>(x430>(x431|x432)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x434 = INT8_MIN;
	uint16_t x435 = UINT16_MAX;
	uint32_t x436 = UINT32_MAX;
	volatile int32_t t108 = 7195781;

    t108 = (x433>(x434>(x435|x436)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x437 = UINT8_MAX;
	static uint8_t x438 = 6U;
	uint16_t x439 = UINT16_MAX;
	volatile uint32_t x440 = 102026860U;
	volatile int32_t t109 = -1967182;

    t109 = (x437>(x438>(x439|x440)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x441 = -1005999425;
	int8_t x442 = INT8_MIN;
	static uint8_t x443 = UINT8_MAX;
	int64_t x444 = 274324134667759LL;

    t110 = (x441>(x442>(x443|x444)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x445 = UINT8_MAX;
	int64_t x446 = -1LL;
	uint8_t x447 = UINT8_MAX;
	int8_t x448 = -24;
	volatile int32_t t111 = 290138161;

    t111 = (x445>(x446>(x447|x448)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x450 = INT8_MIN;
	volatile int32_t x451 = -1;
	static int32_t x452 = INT32_MIN;
	static volatile int32_t t112 = -121;

    t112 = (x449>(x450>(x451|x452)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint32_t x453 = 3660999U;
	uint16_t x454 = UINT16_MAX;
	int64_t x455 = -1LL;
	static int16_t x456 = -1;
	int32_t t113 = 96;

    t113 = (x453>(x454>(x455|x456)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x457 = 10U;
	int16_t x458 = 0;
	uint16_t x459 = 9U;
	static int64_t x460 = INT64_MAX;
	int32_t t114 = 38;

    t114 = (x457>(x458>(x459|x460)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x462 = INT8_MIN;
	volatile int64_t x463 = INT64_MAX;
	static int16_t x464 = INT16_MIN;
	volatile int32_t t115 = -724893778;

    t115 = (x461>(x462>(x463|x464)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x465 = 6660LLU;
	int8_t x466 = INT8_MAX;
	uint32_t x467 = 181889585U;
	volatile int64_t x468 = INT64_MAX;
	volatile int32_t t116 = -273375492;

    t116 = (x465>(x466>(x467|x468)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint16_t x470 = UINT16_MAX;
	uint64_t x471 = 328014525385499LLU;
	volatile int16_t x472 = -1;
	volatile int32_t t117 = -9634176;

    t117 = (x469>(x470>(x471|x472)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int64_t x475 = INT64_MIN;
	uint16_t x476 = UINT16_MAX;
	static volatile int32_t t118 = -12946948;

    t118 = (x473>(x474>(x475|x476)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x477 = INT64_MAX;
	static uint64_t x479 = UINT64_MAX;

    t119 = (x477>(x478>(x479|x480)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x481 = INT64_MAX;
	uint64_t x482 = 661LLU;
	int8_t x484 = INT8_MAX;
	int32_t t120 = 245490;

    t120 = (x481>(x482>(x483|x484)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x485 = -1;
	static int8_t x486 = 2;
	static uint16_t x487 = 1U;
	static uint16_t x488 = 251U;
	volatile int32_t t121 = 1637318;

    t121 = (x485>(x486>(x487|x488)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint32_t x489 = 384832U;
	uint8_t x490 = 0U;
	int64_t x491 = INT64_MIN;
	int8_t x492 = INT8_MAX;

    t122 = (x489>(x490>(x491|x492)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x493 = INT32_MIN;
	static int8_t x494 = INT8_MIN;
	int32_t x495 = 1316;
	uint32_t x496 = UINT32_MAX;
	int32_t t123 = -391;

    t123 = (x493>(x494>(x495|x496)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x497 = -1408620;
	int8_t x498 = 1;
	static volatile int16_t x499 = -1;
	int8_t x500 = INT8_MIN;
	static volatile int32_t t124 = -34337;

    t124 = (x497>(x498>(x499|x500)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x501 = INT16_MIN;
	uint8_t x502 = UINT8_MAX;
	int16_t x503 = -1;
	uint16_t x504 = 6U;
	int32_t t125 = -971973527;

    t125 = (x501>(x502>(x503|x504)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x505 = -2;
	int8_t x508 = -1;
	int32_t t126 = -159;

    t126 = (x505>(x506>(x507|x508)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x509 = INT16_MIN;
	volatile int8_t x511 = INT8_MIN;
	int64_t x512 = -2864047538368LL;
	static volatile int32_t t127 = 60;

    t127 = (x509>(x510>(x511|x512)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint16_t x514 = UINT16_MAX;
	int8_t x516 = INT8_MAX;
	int32_t t128 = 158079231;

    t128 = (x513>(x514>(x515|x516)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x517 = -1;
	static uint16_t x518 = 29U;
	uint64_t x519 = UINT64_MAX;
	int32_t t129 = 1807126;

    t129 = (x517>(x518>(x519|x520)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint16_t x521 = UINT16_MAX;
	volatile int8_t x522 = -7;
	uint64_t x523 = 94652LLU;
	static int64_t x524 = 313341549231948LL;
	static int32_t t130 = -115;

    t130 = (x521>(x522>(x523|x524)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x526 = INT64_MIN;
	static int16_t x527 = 3;
	uint16_t x528 = 58U;
	volatile int32_t t131 = -4080;

    t131 = (x525>(x526>(x527|x528)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x530 = 12922657094110LLU;
	int32_t t132 = 1882448;

    t132 = (x529>(x530>(x531|x532)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x533 = -13LL;
	int32_t x535 = INT32_MIN;
	static int16_t x536 = -1;
	static volatile int32_t t133 = -1320;

    t133 = (x533>(x534>(x535|x536)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x537 = 110723LLU;
	int8_t x540 = INT8_MIN;
	volatile int32_t t134 = 1;

    t134 = (x537>(x538>(x539|x540)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x541 = 12U;
	static int8_t x542 = 1;
	volatile uint64_t x544 = 6LLU;

    t135 = (x541>(x542>(x543|x544)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x545 = INT64_MIN;
	volatile int32_t x546 = -1;
	int32_t x547 = INT32_MIN;
	static volatile int8_t x548 = INT8_MIN;
	int32_t t136 = -321;

    t136 = (x545>(x546>(x547|x548)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x549 = 183793LLU;
	int32_t x550 = INT32_MIN;
	int64_t x552 = INT64_MAX;
	static volatile int32_t t137 = -11812262;

    t137 = (x549>(x550>(x551|x552)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x553 = 116U;
	uint8_t x554 = 0U;
	uint8_t x555 = 80U;
	int32_t x556 = INT32_MIN;
	volatile int32_t t138 = 4920;

    t138 = (x553>(x554>(x555|x556)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x557 = INT64_MIN;
	uint16_t x558 = 4U;
	uint16_t x560 = 1U;
	static int32_t t139 = -123;

    t139 = (x557>(x558>(x559|x560)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x561 = 373831614501LL;
	volatile uint8_t x562 = 13U;
	int32_t x563 = 14735;
	volatile int32_t t140 = 21;

    t140 = (x561>(x562>(x563|x564)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x565 = 26844U;
	int64_t x566 = 31616LL;
	volatile uint64_t x568 = 43213251992166LLU;
	volatile int32_t t141 = -7;

    t141 = (x565>(x566>(x567|x568)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x569 = INT32_MIN;
	int32_t x570 = INT32_MIN;
	uint64_t x571 = 12LLU;
	int64_t x572 = INT64_MIN;
	int32_t t142 = -89127;

    t142 = (x569>(x570>(x571|x572)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x574 = INT8_MIN;
	int64_t x575 = INT64_MIN;
	int8_t x576 = 29;

    t143 = (x573>(x574>(x575|x576)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x577 = INT16_MIN;
	uint32_t x578 = 21U;
	int32_t x579 = INT32_MAX;
	volatile uint64_t x580 = UINT64_MAX;
	volatile int32_t t144 = -233104411;

    t144 = (x577>(x578>(x579|x580)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x581 = UINT32_MAX;
	static int64_t x582 = -1LL;
	static uint64_t x583 = 269227589479054LLU;
	int64_t x584 = -1LL;

    t145 = (x581>(x582>(x583|x584)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x585 = INT64_MAX;
	int64_t x586 = INT64_MIN;
	uint64_t x587 = UINT64_MAX;
	int64_t x588 = INT64_MAX;
	int32_t t146 = -3938;

    t146 = (x585>(x586>(x587|x588)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x589 = UINT64_MAX;
	int64_t x590 = 336631256LL;
	volatile int32_t t147 = -30554;

    t147 = (x589>(x590>(x591|x592)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int8_t x593 = INT8_MIN;
	int64_t x594 = INT64_MIN;
	int8_t x595 = INT8_MIN;
	int32_t t148 = 608;

    t148 = (x593>(x594>(x595|x596)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x597 = -1;
	int64_t x598 = 272454281516915074LL;
	static int64_t x599 = INT64_MIN;
	volatile uint64_t x600 = UINT64_MAX;
	volatile int32_t t149 = 934279;

    t149 = (x597>(x598>(x599|x600)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x601 = INT8_MAX;
	static int8_t x602 = -1;
	static volatile int8_t x603 = 1;
	uint64_t x604 = 10938352306420175LLU;
	volatile int32_t t150 = -187394883;

    t150 = (x601>(x602>(x603|x604)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x605 = -1;
	volatile uint64_t x606 = 72305248876140LLU;
	uint16_t x607 = UINT16_MAX;
	volatile int32_t t151 = -850995;

    t151 = (x605>(x606>(x607|x608)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint64_t x609 = 222934120845LLU;
	uint8_t x610 = UINT8_MAX;
	int32_t x611 = 4814;
	volatile int32_t t152 = 234;

    t152 = (x609>(x610>(x611|x612)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x613 = INT8_MAX;
	uint8_t x614 = 2U;
	uint8_t x615 = 0U;
	static int64_t x616 = -1LL;

    t153 = (x613>(x614>(x615|x616)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile int8_t x617 = -1;
	volatile uint64_t x618 = UINT64_MAX;
	int8_t x620 = -3;
	static int32_t t154 = -15392;

    t154 = (x617>(x618>(x619|x620)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint64_t x621 = UINT64_MAX;
	int8_t x622 = INT8_MAX;
	int8_t x623 = INT8_MAX;
	int64_t x624 = -8653040LL;
	int32_t t155 = -865470;

    t155 = (x621>(x622>(x623|x624)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int16_t x625 = -327;
	uint32_t x627 = 707045U;
	volatile int32_t t156 = -6126520;

    t156 = (x625>(x626>(x627|x628)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x630 = INT8_MIN;
	int16_t x631 = INT16_MAX;
	int64_t x632 = -1LL;
	int32_t t157 = -430365;

    t157 = (x629>(x630>(x631|x632)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x633 = INT16_MIN;
	static int16_t x634 = INT16_MIN;
	volatile int32_t t158 = 9968;

    t158 = (x633>(x634>(x635|x636)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x637 = -1;
	volatile uint64_t x638 = 257LLU;
	volatile uint32_t x639 = 26903861U;
	uint32_t x640 = UINT32_MAX;
	int32_t t159 = -3;

    t159 = (x637>(x638>(x639|x640)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static int64_t x641 = INT64_MIN;
	int32_t x642 = -46185338;
	static uint64_t x644 = 8300952199714LLU;
	volatile int32_t t160 = -12380811;

    t160 = (x641>(x642>(x643|x644)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int64_t x645 = -1LL;
	uint64_t x646 = 1LLU;
	int64_t x648 = -1LL;

    t161 = (x645>(x646>(x647|x648)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x650 = 412759796U;
	uint16_t x651 = UINT16_MAX;
	int32_t x652 = INT32_MIN;
	volatile int32_t t162 = -3076522;

    t162 = (x649>(x650>(x651|x652)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x653 = 1U;
	int16_t x654 = -8;
	uint8_t x655 = 40U;
	volatile uint8_t x656 = UINT8_MAX;
	int32_t t163 = -8238709;

    t163 = (x653>(x654>(x655|x656)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint16_t x657 = 1U;
	int64_t x659 = -1LL;
	int8_t x660 = -25;

    t164 = (x657>(x658>(x659|x660)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = 0LL;
	int16_t x662 = INT16_MIN;
	int16_t x663 = 39;
	static int32_t t165 = -11749;

    t165 = (x661>(x662>(x663|x664)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static int64_t x665 = INT64_MIN;
	static int32_t x667 = INT32_MIN;
	int32_t x668 = -1;
	int32_t t166 = 454;

    t166 = (x665>(x666>(x667|x668)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x670 = UINT16_MAX;
	static int8_t x672 = -1;
	volatile int32_t t167 = 29464065;

    t167 = (x669>(x670>(x671|x672)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x673 = -24359;
	static int8_t x676 = INT8_MIN;
	volatile int32_t t168 = -442809;

    t168 = (x673>(x674>(x675|x676)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x677 = INT32_MIN;
	int32_t x678 = INT32_MIN;
	int8_t x679 = INT8_MAX;
	static int8_t x680 = 41;
	int32_t t169 = -1538292;

    t169 = (x677>(x678>(x679|x680)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x681 = UINT32_MAX;
	int64_t x682 = INT64_MIN;
	volatile uint64_t x683 = 22108702148LLU;

    t170 = (x681>(x682>(x683|x684)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x685 = 1U;
	volatile uint16_t x686 = 44U;
	int32_t t171 = -210;

    t171 = (x685>(x686>(x687|x688)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x689 = -91421401;
	int8_t x690 = INT8_MIN;
	uint8_t x692 = 2U;
	int32_t t172 = 11;

    t172 = (x689>(x690>(x691|x692)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x693 = 0;
	int64_t x694 = 173962900924LL;
	uint8_t x696 = UINT8_MAX;
	int32_t t173 = -1909650;

    t173 = (x693>(x694>(x695|x696)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x697 = 6226395267812LLU;
	int64_t x698 = INT64_MIN;
	uint16_t x699 = UINT16_MAX;
	static volatile int32_t t174 = 7110374;

    t174 = (x697>(x698>(x699|x700)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x701 = 16130602U;
	volatile int8_t x702 = -1;
	static uint64_t x704 = UINT64_MAX;

    t175 = (x701>(x702>(x703|x704)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int64_t x705 = 1LL;
	int16_t x706 = INT16_MIN;
	int64_t x707 = -1LL;
	int16_t x708 = INT16_MAX;

    t176 = (x705>(x706>(x707|x708)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x710 = 62494LLU;
	volatile int64_t x711 = INT64_MAX;
	int8_t x712 = -1;
	volatile int32_t t177 = -3;

    t177 = (x709>(x710>(x711|x712)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x714 = INT8_MAX;
	uint8_t x715 = 13U;
	int64_t x716 = -1LL;
	int32_t t178 = 371358067;

    t178 = (x713>(x714>(x715|x716)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint32_t x717 = 878U;
	int64_t x718 = INT64_MAX;
	volatile int64_t x719 = INT64_MIN;
	int32_t t179 = 1;

    t179 = (x717>(x718>(x719|x720)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x721 = -1;
	int64_t x722 = INT64_MAX;
	int16_t x723 = INT16_MIN;
	uint32_t x724 = 593U;
	static volatile int32_t t180 = 3;

    t180 = (x721>(x722>(x723|x724)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x726 = 12;
	uint16_t x727 = UINT16_MAX;
	uint8_t x728 = 47U;
	static volatile int32_t t181 = 347;

    t181 = (x725>(x726>(x727|x728)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x729 = 0U;
	uint64_t x730 = UINT64_MAX;
	uint16_t x731 = UINT16_MAX;
	int64_t x732 = INT64_MIN;

    t182 = (x729>(x730>(x731|x732)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x733 = INT16_MIN;
	int8_t x734 = -1;
	static int64_t x735 = 12174LL;
	static int8_t x736 = INT8_MIN;
	volatile int32_t t183 = -18506915;

    t183 = (x733>(x734>(x735|x736)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x737 = UINT32_MAX;
	int8_t x738 = -1;
	static int8_t x739 = -2;
	int64_t x740 = INT64_MAX;
	volatile int32_t t184 = 749;

    t184 = (x737>(x738>(x739|x740)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x741 = INT8_MIN;
	int8_t x743 = INT8_MIN;
	static int8_t x744 = 1;
	volatile int32_t t185 = 27;

    t185 = (x741>(x742>(x743|x744)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static int64_t x745 = INT64_MIN;
	static volatile uint64_t x746 = 28671903790LLU;
	uint8_t x748 = 0U;
	volatile int32_t t186 = -1;

    t186 = (x745>(x746>(x747|x748)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint64_t x749 = 131264738584LLU;
	int64_t x750 = 291034LL;
	static uint16_t x751 = 53U;
	uint8_t x752 = UINT8_MAX;

    t187 = (x749>(x750>(x751|x752)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x753 = INT64_MAX;
	static volatile int32_t x754 = -1;
	int16_t x755 = INT16_MIN;
	uint8_t x756 = 31U;
	int32_t t188 = -51758;

    t188 = (x753>(x754>(x755|x756)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x757 = UINT32_MAX;
	int64_t x758 = INT64_MIN;
	static volatile uint8_t x759 = 1U;
	int8_t x760 = INT8_MIN;
	int32_t t189 = -1;

    t189 = (x757>(x758>(x759|x760)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int16_t x763 = -21;
	int64_t x764 = -1LL;
	int32_t t190 = 1;

    t190 = (x761>(x762>(x763|x764)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x765 = INT8_MIN;
	volatile int64_t x766 = -1LL;
	int8_t x767 = -1;
	static int16_t x768 = -2760;
	volatile int32_t t191 = 5826653;

    t191 = (x765>(x766>(x767|x768)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int64_t x769 = -35282548LL;
	uint8_t x770 = UINT8_MAX;
	uint8_t x771 = 2U;
	uint16_t x772 = 157U;
	int32_t t192 = 82654;

    t192 = (x769>(x770>(x771|x772)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x773 = -1LL;
	int64_t x775 = -4208984732599LL;
	volatile int32_t x776 = INT32_MAX;
	volatile int32_t t193 = -20360;

    t193 = (x773>(x774>(x775|x776)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x777 = -6826;
	int64_t x778 = -1LL;
	int64_t x780 = 35900472581LL;
	static volatile int32_t t194 = -576593;

    t194 = (x777>(x778>(x779|x780)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x781 = INT16_MIN;
	int16_t x782 = -1;
	int8_t x783 = -1;
	int32_t t195 = -15719;

    t195 = (x781>(x782>(x783|x784)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x786 = INT8_MIN;
	uint32_t x787 = UINT32_MAX;
	int32_t t196 = -1796;

    t196 = (x785>(x786>(x787|x788)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int32_t x789 = -1;
	int32_t x790 = -1272;
	uint64_t x791 = 270328382440LLU;
	static uint32_t x792 = UINT32_MAX;
	int32_t t197 = 294217;

    t197 = (x789>(x790>(x791|x792)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint8_t x793 = 0U;
	int32_t x794 = -1;
	volatile int64_t x795 = INT64_MAX;
	volatile int32_t t198 = -1;

    t198 = (x793>(x794>(x795|x796)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x797 = 523700042164284359LL;
	uint16_t x798 = UINT16_MAX;
	int8_t x799 = -49;
	volatile int8_t x800 = -1;
	volatile int32_t t199 = 1;

    t199 = (x797>(x798>(x799|x800)));

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

