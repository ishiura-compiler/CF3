
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

int8_t x3 = INT8_MAX;
int16_t x6 = INT16_MIN;
int32_t t1 = -1;
int8_t x10 = -5;
static uint16_t x12 = 15727U;
int8_t x14 = -1;
volatile int8_t x21 = -1;
uint32_t x22 = 910965U;
int16_t x24 = INT16_MAX;
int8_t x29 = INT8_MIN;
int32_t t8 = 731030;
int32_t x39 = -1;
int32_t t9 = -485576;
int32_t x52 = INT32_MIN;
static int32_t x66 = 175559;
static int32_t t16 = -41731;
uint8_t x78 = UINT8_MAX;
uint64_t x81 = 3807803849174332LLU;
int8_t x84 = INT8_MIN;
int32_t x87 = INT32_MAX;
uint8_t x100 = UINT8_MAX;
static int32_t t24 = 1;
uint8_t x108 = UINT8_MAX;
uint8_t x113 = UINT8_MAX;
int32_t x114 = INT32_MAX;
volatile int16_t x119 = INT16_MIN;
int8_t x120 = 7;
volatile int8_t x123 = -1;
volatile int32_t t30 = 44165;
static volatile int32_t x133 = -1;
static int8_t x135 = -1;
volatile uint16_t x141 = UINT16_MAX;
uint32_t x142 = 393450763U;
volatile int32_t t35 = 69822212;
uint32_t x147 = 82444149U;
volatile uint32_t x148 = 2687U;
volatile int32_t t37 = -849139;
static uint16_t x156 = 29U;
int16_t x163 = -510;
uint32_t x164 = 4670654U;
int32_t t40 = 1442;
static uint16_t x167 = 6U;
volatile uint64_t x169 = 19LLU;
static int16_t x171 = -1;
int32_t x172 = -20779168;
static int64_t x176 = -3048322LL;
volatile int32_t t45 = 906175;
int16_t x191 = INT16_MAX;
volatile int32_t t48 = 2256792;
int32_t x206 = INT32_MIN;
static int32_t x208 = INT32_MIN;
static uint8_t x209 = 0U;
int8_t x210 = -1;
int32_t x212 = INT32_MIN;
uint16_t x214 = 15612U;
uint16_t x215 = 132U;
int32_t x217 = -1;
volatile uint8_t x222 = UINT8_MAX;
int32_t x230 = INT32_MIN;
static int32_t x237 = 0;
volatile uint64_t x238 = UINT64_MAX;
volatile int32_t t59 = -13;
int8_t x246 = INT8_MAX;
int8_t x250 = -1;
int32_t t63 = -8905;
int16_t x257 = 1403;
volatile int32_t x261 = INT32_MAX;
volatile int32_t t65 = -1799111;
static int8_t x269 = INT8_MIN;
uint64_t x271 = UINT64_MAX;
uint64_t x272 = 20207550961801592LLU;
static uint32_t x276 = 7528472U;
int16_t x284 = INT16_MIN;
volatile int8_t x286 = -2;
int64_t x289 = 67831LL;
int64_t x291 = 19042723911LL;
int8_t x293 = INT8_MAX;
int16_t x294 = INT16_MIN;
static uint8_t x296 = 2U;
int32_t t73 = -254902;
int16_t x298 = INT16_MIN;
int64_t x300 = 8LL;
int64_t x301 = -739LL;
int8_t x307 = 3;
int32_t x313 = INT32_MAX;
int16_t x315 = -3454;
int64_t x319 = INT64_MIN;
int16_t x323 = 7548;
int16_t x328 = INT16_MAX;
int8_t x330 = INT8_MIN;
uint8_t x334 = 0U;
int32_t t83 = -3865;
static volatile uint32_t x338 = 330U;
volatile int32_t x342 = 108786;
volatile int32_t t85 = 3;
volatile int8_t x352 = -10;
int32_t x357 = -1;
int64_t x362 = 3981039575119LL;
volatile uint16_t x366 = 1U;
int32_t t92 = 245895194;
volatile int16_t x374 = -349;
static int16_t x376 = -1;
int32_t t93 = -29769974;
uint64_t x378 = 8373474381LLU;
int32_t t94 = 0;
int32_t x385 = 24103499;
int8_t x386 = 51;
int16_t x393 = 504;
int32_t x396 = INT32_MIN;
uint32_t x397 = UINT32_MAX;
static int8_t x398 = INT8_MIN;
int32_t t100 = -11274;
uint32_t x410 = 0U;
int16_t x413 = INT16_MIN;
int64_t x414 = INT64_MIN;
static volatile int32_t t103 = 3863986;
uint16_t x418 = 3075U;
volatile uint8_t x421 = 5U;
int8_t x422 = -1;
int8_t x424 = -1;
int8_t x426 = INT8_MAX;
int16_t x428 = -1;
int16_t x431 = INT16_MIN;
volatile int16_t x434 = 0;
volatile int32_t t108 = -1012;
volatile uint8_t x446 = UINT8_MAX;
volatile int16_t x457 = 0;
int32_t t114 = -244;
int64_t x469 = INT64_MAX;
int32_t t117 = -542;
int8_t x474 = 2;
uint16_t x475 = UINT16_MAX;
volatile int16_t x479 = 38;
int32_t x480 = INT32_MIN;
static uint64_t x481 = UINT64_MAX;
int32_t t120 = -4624318;
static int8_t x486 = INT8_MIN;
int32_t t121 = -7;
int32_t x489 = INT32_MAX;
volatile int8_t x490 = INT8_MAX;
int8_t x502 = INT8_MIN;
volatile int32_t x518 = INT32_MIN;
uint8_t x521 = 0U;
volatile uint8_t x522 = 2U;
int8_t x526 = INT8_MIN;
volatile int32_t x529 = INT32_MIN;
static uint32_t x532 = UINT32_MAX;
uint8_t x535 = UINT8_MAX;
static volatile int32_t t134 = -11;
int32_t t135 = -2761961;
int32_t t137 = -10299;
int64_t x556 = -1LL;
int32_t t138 = -8368;
static volatile int32_t t139 = 10;
volatile int32_t x565 = INT32_MIN;
volatile int32_t t141 = 1245915;
int8_t x571 = -9;
static volatile uint64_t x582 = 0LLU;
uint16_t x585 = 443U;
int32_t x586 = -1;
int64_t x588 = -6251LL;
int32_t t147 = -47550;
int64_t x601 = 39555LL;
int64_t x609 = -40557870364826711LL;
static int32_t t152 = 377;
static uint16_t x616 = 11U;
volatile int64_t x623 = -1LL;
volatile uint16_t x627 = 1929U;
uint8_t x629 = 7U;
volatile int64_t x630 = -63004650758878613LL;
volatile int32_t x632 = -1;
int16_t x636 = INT16_MAX;
volatile uint32_t x642 = UINT32_MAX;
uint32_t x644 = 259U;
uint16_t x651 = 34U;
uint16_t x652 = UINT16_MAX;
uint32_t x654 = UINT32_MAX;
static int16_t x656 = INT16_MIN;
uint16_t x659 = 43U;
int16_t x673 = 67;
int32_t t169 = -123;
static int16_t x685 = INT16_MIN;
static int16_t x686 = -1;
uint16_t x689 = UINT16_MAX;
int32_t x695 = INT32_MIN;
volatile uint64_t x697 = UINT64_MAX;
volatile uint32_t x698 = UINT32_MAX;
volatile int32_t t178 = -53080;
int64_t x731 = 990778LL;
int32_t x742 = INT32_MIN;
static int64_t x748 = INT64_MIN;
static volatile uint32_t x749 = 4U;
static int8_t x750 = -16;
volatile int64_t x753 = -1LL;
int8_t x760 = INT8_MIN;
volatile int32_t t189 = 1627;
int32_t x762 = -1;
uint32_t x767 = UINT32_MAX;
static volatile uint32_t x772 = 3611666U;
int32_t t194 = -921098;
int32_t t195 = -10479;
static volatile int32_t x792 = INT32_MIN;
volatile int32_t t197 = -14;
int16_t x796 = INT16_MIN;


void f0(void) {
    	int8_t x1 = -1;
	uint16_t x2 = UINT16_MAX;
	int32_t x4 = -2061281;
	volatile int32_t t0 = -3725690;

    t0 = (((x1<=x2)*x3)<=x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = 38571LLU;
	uint64_t x7 = UINT64_MAX;
	volatile int8_t x8 = INT8_MAX;

    t1 = (((x5<=x6)*x7)<=x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MAX;
	int16_t x11 = -1;
	volatile int32_t t2 = 7;

    t2 = (((x9<=x10)*x11)<=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint32_t x13 = 1U;
	static volatile uint16_t x15 = 0U;
	static int16_t x16 = -1;
	static int32_t t3 = 399;

    t3 = (((x13<=x14)*x15)<=x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = 14;
	int32_t x18 = -1;
	int16_t x19 = INT16_MAX;
	static uint16_t x20 = 0U;
	volatile int32_t t4 = 381617;

    t4 = (((x17<=x18)*x19)<=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x23 = INT64_MIN;
	static volatile int32_t t5 = -144233;

    t5 = (((x21<=x22)*x23)<=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static int64_t x25 = -1LL;
	static int32_t x26 = -1;
	int64_t x27 = 4094LL;
	static uint64_t x28 = 374227393961621166LLU;
	volatile int32_t t6 = 975317902;

    t6 = (((x25<=x26)*x27)<=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x30 = INT8_MAX;
	int32_t x31 = INT32_MIN;
	uint32_t x32 = UINT32_MAX;
	int32_t t7 = 97929;

    t7 = (((x29<=x30)*x31)<=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = INT64_MIN;
	int64_t x34 = INT64_MIN;
	int16_t x35 = -2956;
	int8_t x36 = INT8_MIN;

    t8 = (((x33<=x34)*x35)<=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x37 = 9019785506781754LLU;
	int16_t x38 = 0;
	int8_t x40 = -46;

    t9 = (((x37<=x38)*x39)<=x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = -1;
	int32_t x42 = INT32_MAX;
	uint16_t x43 = 1730U;
	int64_t x44 = INT64_MIN;
	int32_t t10 = -281857;

    t10 = (((x41<=x42)*x43)<=x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint64_t x45 = UINT64_MAX;
	volatile int64_t x46 = -131574624997588LL;
	int64_t x47 = -730885205624944LL;
	static int16_t x48 = -1;
	volatile int32_t t11 = -1;

    t11 = (((x45<=x46)*x47)<=x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x49 = INT16_MIN;
	static int8_t x50 = -1;
	uint16_t x51 = 0U;
	int32_t t12 = 149220;

    t12 = (((x49<=x50)*x51)<=x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x53 = UINT64_MAX;
	uint16_t x54 = UINT16_MAX;
	int8_t x55 = -1;
	volatile int16_t x56 = INT16_MIN;
	int32_t t13 = -2187634;

    t13 = (((x53<=x54)*x55)<=x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = -1;
	static uint32_t x58 = UINT32_MAX;
	int8_t x59 = INT8_MAX;
	volatile int64_t x60 = 0LL;
	volatile int32_t t14 = -2907;

    t14 = (((x57<=x58)*x59)<=x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = INT64_MIN;
	uint8_t x62 = 10U;
	uint32_t x63 = 3573U;
	int64_t x64 = 44084LL;
	int32_t t15 = -7;

    t15 = (((x61<=x62)*x63)<=x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int16_t x65 = INT16_MIN;
	volatile int8_t x67 = INT8_MIN;
	int64_t x68 = -1LL;

    t16 = (((x65<=x66)*x67)<=x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = -2434010638451LL;
	volatile uint64_t x70 = UINT64_MAX;
	int64_t x71 = INT64_MIN;
	volatile uint16_t x72 = 6U;
	static volatile int32_t t17 = 98922;

    t17 = (((x69<=x70)*x71)<=x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static int64_t x73 = INT64_MAX;
	volatile uint16_t x74 = UINT16_MAX;
	int16_t x75 = -9509;
	static int8_t x76 = INT8_MIN;
	int32_t t18 = 17;

    t18 = (((x73<=x74)*x75)<=x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x77 = INT32_MAX;
	int16_t x79 = INT16_MIN;
	static int8_t x80 = INT8_MIN;
	volatile int32_t t19 = 970368;

    t19 = (((x77<=x78)*x79)<=x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x82 = INT64_MIN;
	int8_t x83 = 29;
	volatile int32_t t20 = 0;

    t20 = (((x81<=x82)*x83)<=x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x85 = -1;
	int64_t x86 = INT64_MAX;
	static int32_t x88 = -6;
	static int32_t t21 = 581336703;

    t21 = (((x85<=x86)*x87)<=x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int32_t x89 = -1;
	volatile uint32_t x90 = 1978U;
	int8_t x91 = 55;
	static volatile uint8_t x92 = UINT8_MAX;
	static volatile int32_t t22 = 2369967;

    t22 = (((x89<=x90)*x91)<=x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static int8_t x93 = INT8_MAX;
	int8_t x94 = -21;
	static int32_t x95 = 0;
	int64_t x96 = -1LL;
	static int32_t t23 = -873271;

    t23 = (((x93<=x94)*x95)<=x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = 807303;
	int64_t x98 = INT64_MIN;
	uint8_t x99 = 0U;

    t24 = (((x97<=x98)*x99)<=x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x101 = -1;
	static uint64_t x102 = UINT64_MAX;
	int16_t x103 = INT16_MAX;
	int64_t x104 = 66970653204LL;
	volatile int32_t t25 = 27733127;

    t25 = (((x101<=x102)*x103)<=x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static int64_t x105 = -1LL;
	int64_t x106 = 186658761LL;
	static uint32_t x107 = UINT32_MAX;
	int32_t t26 = 0;

    t26 = (((x105<=x106)*x107)<=x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint16_t x109 = UINT16_MAX;
	static volatile int16_t x110 = 0;
	uint8_t x111 = UINT8_MAX;
	static int64_t x112 = -1LL;
	int32_t t27 = -46;

    t27 = (((x109<=x110)*x111)<=x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x115 = -4;
	static int64_t x116 = -1LL;
	volatile int32_t t28 = 278;

    t28 = (((x113<=x114)*x115)<=x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static int16_t x117 = INT16_MIN;
	int16_t x118 = INT16_MIN;
	volatile int32_t t29 = -4753461;

    t29 = (((x117<=x118)*x119)<=x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x121 = INT8_MAX;
	int16_t x122 = INT16_MIN;
	int32_t x124 = -1;

    t30 = (((x121<=x122)*x123)<=x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x125 = 114748606;
	static uint32_t x126 = UINT32_MAX;
	uint8_t x127 = UINT8_MAX;
	int64_t x128 = 2LL;
	static int32_t t31 = 60995;

    t31 = (((x125<=x126)*x127)<=x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = -1LL;
	static volatile int16_t x130 = INT16_MAX;
	volatile int8_t x131 = INT8_MAX;
	int16_t x132 = INT16_MIN;
	int32_t t32 = 13475;

    t32 = (((x129<=x130)*x131)<=x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x134 = -79;
	int16_t x136 = 126;
	volatile int32_t t33 = -3410447;

    t33 = (((x133<=x134)*x135)<=x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x137 = 536108010LL;
	uint64_t x138 = 5845732767043346237LLU;
	int32_t x139 = -1;
	int32_t x140 = 3849;
	int32_t t34 = 224501;

    t34 = (((x137<=x138)*x139)<=x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static int32_t x143 = -21854751;
	volatile int8_t x144 = 1;

    t35 = (((x141<=x142)*x143)<=x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = -1;
	static int16_t x146 = -1;
	int32_t t36 = 120;

    t36 = (((x145<=x146)*x147)<=x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = INT64_MAX;
	int64_t x150 = INT64_MAX;
	static uint8_t x151 = UINT8_MAX;
	static uint32_t x152 = UINT32_MAX;

    t37 = (((x149<=x150)*x151)<=x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static int32_t x153 = INT32_MIN;
	uint32_t x154 = UINT32_MAX;
	uint64_t x155 = 33105284023137023LLU;
	int32_t t38 = 77;

    t38 = (((x153<=x154)*x155)<=x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x157 = INT32_MAX;
	int8_t x158 = INT8_MAX;
	volatile int8_t x159 = INT8_MAX;
	int64_t x160 = INT64_MAX;
	int32_t t39 = 174;

    t39 = (((x157<=x158)*x159)<=x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x161 = -244;
	int32_t x162 = INT32_MAX;

    t40 = (((x161<=x162)*x163)<=x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x165 = 55LL;
	volatile int64_t x166 = 7328281866LL;
	int16_t x168 = -1769;
	int32_t t41 = -1;

    t41 = (((x165<=x166)*x167)<=x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x170 = INT8_MIN;
	int32_t t42 = -449;

    t42 = (((x169<=x170)*x171)<=x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint64_t x173 = 0LLU;
	int64_t x174 = INT64_MIN;
	static int64_t x175 = 26346405113511613LL;
	int32_t t43 = 10;

    t43 = (((x173<=x174)*x175)<=x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int32_t x177 = 18791329;
	int64_t x178 = -1LL;
	uint16_t x179 = 0U;
	static int16_t x180 = 5;
	int32_t t44 = 96752;

    t44 = (((x177<=x178)*x179)<=x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x181 = INT32_MAX;
	int64_t x182 = -1LL;
	int64_t x183 = -15293268030482LL;
	int64_t x184 = INT64_MIN;

    t45 = (((x181<=x182)*x183)<=x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x185 = INT32_MIN;
	uint64_t x186 = 52LLU;
	volatile int8_t x187 = -30;
	volatile int64_t x188 = INT64_MAX;
	int32_t t46 = 1135750;

    t46 = (((x185<=x186)*x187)<=x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x189 = 2207770521LLU;
	int16_t x190 = 123;
	static int8_t x192 = -1;
	volatile int32_t t47 = 25525;

    t47 = (((x189<=x190)*x191)<=x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int64_t x193 = -1LL;
	static int32_t x194 = INT32_MIN;
	uint16_t x195 = 18U;
	int16_t x196 = INT16_MAX;

    t48 = (((x193<=x194)*x195)<=x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x197 = 4;
	int8_t x198 = INT8_MIN;
	volatile uint8_t x199 = 1U;
	int64_t x200 = -1LL;
	int32_t t49 = 1;

    t49 = (((x197<=x198)*x199)<=x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x201 = INT16_MIN;
	static int8_t x202 = INT8_MIN;
	uint32_t x203 = 8U;
	volatile uint8_t x204 = 2U;
	int32_t t50 = -18874848;

    t50 = (((x201<=x202)*x203)<=x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x205 = 1;
	int8_t x207 = INT8_MIN;
	static int32_t t51 = 64971479;

    t51 = (((x205<=x206)*x207)<=x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x211 = -28;
	int32_t t52 = 1;

    t52 = (((x209<=x210)*x211)<=x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x213 = INT64_MAX;
	int8_t x216 = 7;
	int32_t t53 = -1677;

    t53 = (((x213<=x214)*x215)<=x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x218 = INT8_MAX;
	uint64_t x219 = 440553229705911545LLU;
	int64_t x220 = -429905LL;
	int32_t t54 = -6;

    t54 = (((x217<=x218)*x219)<=x220);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x221 = INT32_MIN;
	int8_t x223 = INT8_MAX;
	volatile uint32_t x224 = 1757949970U;
	volatile int32_t t55 = 68923;

    t55 = (((x221<=x222)*x223)<=x224);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x225 = 0U;
	uint32_t x226 = 35275145U;
	int16_t x227 = -10777;
	int16_t x228 = INT16_MAX;
	volatile int32_t t56 = 28161;

    t56 = (((x225<=x226)*x227)<=x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint64_t x229 = UINT64_MAX;
	volatile uint8_t x231 = UINT8_MAX;
	static int16_t x232 = 4;
	static int32_t t57 = -4;

    t57 = (((x229<=x230)*x231)<=x232);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x233 = INT16_MIN;
	volatile int8_t x234 = INT8_MIN;
	volatile int64_t x235 = INT64_MIN;
	uint64_t x236 = 1117911949088430LLU;
	volatile int32_t t58 = -56988861;

    t58 = (((x233<=x234)*x235)<=x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x239 = INT64_MIN;
	static int8_t x240 = 0;

    t59 = (((x237<=x238)*x239)<=x240);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x241 = UINT16_MAX;
	uint16_t x242 = UINT16_MAX;
	int32_t x243 = -1;
	static int64_t x244 = INT64_MIN;
	static volatile int32_t t60 = 74;

    t60 = (((x241<=x242)*x243)<=x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int64_t x245 = -1LL;
	uint16_t x247 = UINT16_MAX;
	int32_t x248 = -1;
	int32_t t61 = 940580425;

    t61 = (((x245<=x246)*x247)<=x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint32_t x249 = 3841U;
	int8_t x251 = -1;
	static int32_t x252 = -1;
	int32_t t62 = -386666339;

    t62 = (((x249<=x250)*x251)<=x252);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x253 = 5748;
	int8_t x254 = 2;
	int32_t x255 = -5;
	static uint16_t x256 = 0U;

    t63 = (((x253<=x254)*x255)<=x256);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint64_t x258 = 7258896509984487043LLU;
	int16_t x259 = INT16_MIN;
	int16_t x260 = 1587;
	volatile int32_t t64 = 235154161;

    t64 = (((x257<=x258)*x259)<=x260);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x262 = 22;
	volatile int8_t x263 = 1;
	uint64_t x264 = UINT64_MAX;

    t65 = (((x261<=x262)*x263)<=x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x265 = 8624779164510LL;
	static int64_t x266 = -3555222649306499LL;
	int32_t x267 = -1;
	static uint32_t x268 = 101370U;
	volatile int32_t t66 = 127;

    t66 = (((x265<=x266)*x267)<=x268);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x270 = 931;
	int32_t t67 = -1126;

    t67 = (((x269<=x270)*x271)<=x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int32_t x273 = 268;
	static int32_t x274 = INT32_MIN;
	static volatile int64_t x275 = INT64_MIN;
	volatile int32_t t68 = -228168893;

    t68 = (((x273<=x274)*x275)<=x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x277 = 499958283;
	int8_t x278 = INT8_MAX;
	uint32_t x279 = 22268U;
	uint64_t x280 = UINT64_MAX;
	volatile int32_t t69 = -335;

    t69 = (((x277<=x278)*x279)<=x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = 1;
	int32_t x282 = -35;
	int64_t x283 = 33695475582LL;
	int32_t t70 = 15;

    t70 = (((x281<=x282)*x283)<=x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static int16_t x285 = INT16_MIN;
	int32_t x287 = -3;
	int32_t x288 = 130219;
	int32_t t71 = -19;

    t71 = (((x285<=x286)*x287)<=x288);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x290 = -1;
	int8_t x292 = 0;
	volatile int32_t t72 = 2084066;

    t72 = (((x289<=x290)*x291)<=x292);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x295 = UINT64_MAX;

    t73 = (((x293<=x294)*x295)<=x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint64_t x297 = UINT64_MAX;
	static int32_t x299 = INT32_MIN;
	static int32_t t74 = -131861;

    t74 = (((x297<=x298)*x299)<=x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint8_t x302 = 34U;
	static int8_t x303 = 29;
	volatile int8_t x304 = INT8_MAX;
	int32_t t75 = -314;

    t75 = (((x301<=x302)*x303)<=x304);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x305 = INT8_MIN;
	int16_t x306 = -1;
	static volatile int32_t x308 = INT32_MAX;
	volatile int32_t t76 = -459481037;

    t76 = (((x305<=x306)*x307)<=x308);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x309 = INT16_MIN;
	uint32_t x310 = 160740U;
	volatile int16_t x311 = INT16_MIN;
	int32_t x312 = -6254;
	int32_t t77 = 23133277;

    t77 = (((x309<=x310)*x311)<=x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile uint32_t x314 = UINT32_MAX;
	uint32_t x316 = 953510891U;
	int32_t t78 = -22;

    t78 = (((x313<=x314)*x315)<=x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x317 = 1U;
	int16_t x318 = 15;
	int32_t x320 = 1555439;
	static int32_t t79 = -2171;

    t79 = (((x317<=x318)*x319)<=x320);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x321 = 1;
	static volatile int8_t x322 = -54;
	uint16_t x324 = UINT16_MAX;
	int32_t t80 = 25;

    t80 = (((x321<=x322)*x323)<=x324);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x325 = 8;
	uint64_t x326 = 7522LLU;
	static uint64_t x327 = 6782213378245155590LLU;
	volatile int32_t t81 = 58275;

    t81 = (((x325<=x326)*x327)<=x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x329 = 1;
	int8_t x331 = -1;
	int64_t x332 = -1LL;
	volatile int32_t t82 = 432;

    t82 = (((x329<=x330)*x331)<=x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x333 = UINT8_MAX;
	uint8_t x335 = 61U;
	volatile int8_t x336 = 1;

    t83 = (((x333<=x334)*x335)<=x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int64_t x337 = INT64_MIN;
	uint8_t x339 = 5U;
	int32_t x340 = INT32_MIN;
	int32_t t84 = 15926864;

    t84 = (((x337<=x338)*x339)<=x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x341 = -1LL;
	volatile uint16_t x343 = UINT16_MAX;
	int64_t x344 = INT64_MIN;

    t85 = (((x341<=x342)*x343)<=x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x345 = 80U;
	static int64_t x346 = INT64_MAX;
	static volatile int64_t x347 = INT64_MIN;
	uint16_t x348 = UINT16_MAX;
	volatile int32_t t86 = -7;

    t86 = (((x345<=x346)*x347)<=x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x349 = INT8_MIN;
	static int16_t x350 = 81;
	int32_t x351 = -6192581;
	volatile int32_t t87 = 0;

    t87 = (((x349<=x350)*x351)<=x352);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static int8_t x353 = INT8_MIN;
	static volatile int8_t x354 = INT8_MIN;
	uint32_t x355 = 16067U;
	volatile int64_t x356 = INT64_MAX;
	int32_t t88 = -34;

    t88 = (((x353<=x354)*x355)<=x356);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile uint8_t x358 = 112U;
	static uint32_t x359 = 14U;
	static int32_t x360 = INT32_MIN;
	volatile int32_t t89 = -446;

    t89 = (((x357<=x358)*x359)<=x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x361 = INT16_MIN;
	uint8_t x363 = UINT8_MAX;
	int8_t x364 = -1;
	int32_t t90 = 4;

    t90 = (((x361<=x362)*x363)<=x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x365 = -3LL;
	uint32_t x367 = UINT32_MAX;
	int16_t x368 = INT16_MIN;
	volatile int32_t t91 = -6073;

    t91 = (((x365<=x366)*x367)<=x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint64_t x369 = 1802LLU;
	uint64_t x370 = 112LLU;
	int32_t x371 = -160;
	volatile uint16_t x372 = 265U;

    t92 = (((x369<=x370)*x371)<=x372);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x373 = INT64_MIN;
	uint8_t x375 = 1U;

    t93 = (((x373<=x374)*x375)<=x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint64_t x377 = 0LLU;
	uint16_t x379 = UINT16_MAX;
	int64_t x380 = INT64_MAX;

    t94 = (((x377<=x378)*x379)<=x380);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x381 = 1U;
	int16_t x382 = INT16_MAX;
	int32_t x383 = -1;
	static int8_t x384 = INT8_MIN;
	volatile int32_t t95 = 357480;

    t95 = (((x381<=x382)*x383)<=x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x387 = INT16_MIN;
	volatile uint64_t x388 = UINT64_MAX;
	static int32_t t96 = -4017332;

    t96 = (((x385<=x386)*x387)<=x388);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static int32_t x389 = 52976;
	volatile int8_t x390 = 28;
	static uint32_t x391 = 0U;
	int64_t x392 = INT64_MIN;
	volatile int32_t t97 = 24027;

    t97 = (((x389<=x390)*x391)<=x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x394 = UINT16_MAX;
	int8_t x395 = INT8_MAX;
	volatile int32_t t98 = 10068;

    t98 = (((x393<=x394)*x395)<=x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x399 = INT16_MIN;
	int8_t x400 = 51;
	volatile int32_t t99 = 134965420;

    t99 = (((x397<=x398)*x399)<=x400);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x401 = INT32_MAX;
	static int16_t x402 = INT16_MAX;
	int64_t x403 = INT64_MIN;
	uint32_t x404 = 2039931357U;

    t100 = (((x401<=x402)*x403)<=x404);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x405 = 1871;
	int8_t x406 = -1;
	uint16_t x407 = UINT16_MAX;
	uint64_t x408 = 797430778696979LLU;
	volatile int32_t t101 = 6537666;

    t101 = (((x405<=x406)*x407)<=x408);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x409 = 1;
	int8_t x411 = INT8_MAX;
	int8_t x412 = INT8_MIN;
	int32_t t102 = 0;

    t102 = (((x409<=x410)*x411)<=x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint16_t x415 = 0U;
	static volatile uint16_t x416 = 167U;

    t103 = (((x413<=x414)*x415)<=x416);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x417 = INT8_MIN;
	static uint32_t x419 = 197845U;
	uint32_t x420 = 1545U;
	int32_t t104 = 1334;

    t104 = (((x417<=x418)*x419)<=x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint32_t x423 = 103589U;
	volatile int32_t t105 = -6;

    t105 = (((x421<=x422)*x423)<=x424);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x425 = -915364984;
	int64_t x427 = INT64_MIN;
	volatile int32_t t106 = -76;

    t106 = (((x425<=x426)*x427)<=x428);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x429 = UINT16_MAX;
	static int64_t x430 = INT64_MAX;
	int16_t x432 = INT16_MIN;
	int32_t t107 = -706399791;

    t107 = (((x429<=x430)*x431)<=x432);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile uint32_t x433 = 6067U;
	int16_t x435 = INT16_MAX;
	volatile int32_t x436 = -875626;

    t108 = (((x433<=x434)*x435)<=x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x437 = INT8_MIN;
	static int8_t x438 = INT8_MIN;
	volatile uint32_t x439 = 8234U;
	static uint64_t x440 = UINT64_MAX;
	volatile int32_t t109 = 75;

    t109 = (((x437<=x438)*x439)<=x440);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x441 = -1679539;
	volatile int8_t x442 = -1;
	volatile int64_t x443 = -557522452695537LL;
	uint16_t x444 = 23426U;
	int32_t t110 = 61903;

    t110 = (((x441<=x442)*x443)<=x444);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile int16_t x445 = -69;
	volatile uint8_t x447 = UINT8_MAX;
	static int16_t x448 = INT16_MAX;
	static int32_t t111 = -9;

    t111 = (((x445<=x446)*x447)<=x448);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x449 = INT64_MAX;
	uint64_t x450 = 2004591437831LLU;
	int64_t x451 = -1LL;
	int64_t x452 = -30LL;
	int32_t t112 = -19737;

    t112 = (((x449<=x450)*x451)<=x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x453 = 614;
	volatile uint8_t x454 = UINT8_MAX;
	int32_t x455 = 4;
	static uint8_t x456 = 5U;
	int32_t t113 = -288;

    t113 = (((x453<=x454)*x455)<=x456);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint64_t x458 = UINT64_MAX;
	static int32_t x459 = INT32_MAX;
	int8_t x460 = INT8_MIN;

    t114 = (((x457<=x458)*x459)<=x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile int8_t x461 = -1;
	int64_t x462 = INT64_MAX;
	int16_t x463 = 5;
	int64_t x464 = -1LL;
	static int32_t t115 = -10172790;

    t115 = (((x461<=x462)*x463)<=x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x465 = -1LL;
	volatile int64_t x466 = 602LL;
	uint16_t x467 = 39U;
	int32_t x468 = -256449115;
	volatile int32_t t116 = 490738;

    t116 = (((x465<=x466)*x467)<=x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x470 = 72571LLU;
	static uint64_t x471 = 363979263022073867LLU;
	uint16_t x472 = UINT16_MAX;

    t117 = (((x469<=x470)*x471)<=x472);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x473 = INT16_MIN;
	int16_t x476 = -111;
	volatile int32_t t118 = -7;

    t118 = (((x473<=x474)*x475)<=x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x477 = INT16_MIN;
	int32_t x478 = -18614;
	int32_t t119 = 316108;

    t119 = (((x477<=x478)*x479)<=x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int8_t x482 = INT8_MIN;
	volatile uint64_t x483 = UINT64_MAX;
	uint64_t x484 = 71799357126876292LLU;

    t120 = (((x481<=x482)*x483)<=x484);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x485 = UINT32_MAX;
	int32_t x487 = 1;
	static int32_t x488 = INT32_MIN;

    t121 = (((x485<=x486)*x487)<=x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x491 = INT64_MIN;
	static volatile int16_t x492 = INT16_MIN;
	static int32_t t122 = 39;

    t122 = (((x489<=x490)*x491)<=x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x493 = INT8_MIN;
	int16_t x494 = 159;
	uint64_t x495 = 191358580432646245LLU;
	int16_t x496 = 1367;
	int32_t t123 = 0;

    t123 = (((x493<=x494)*x495)<=x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x497 = 0;
	static int64_t x498 = -1015622990391LL;
	int16_t x499 = INT16_MIN;
	int8_t x500 = INT8_MIN;
	int32_t t124 = -1;

    t124 = (((x497<=x498)*x499)<=x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int32_t x501 = INT32_MIN;
	uint32_t x503 = 7654U;
	int64_t x504 = -235000LL;
	int32_t t125 = -127342;

    t125 = (((x501<=x502)*x503)<=x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint32_t x505 = 12U;
	volatile int64_t x506 = INT64_MIN;
	static uint64_t x507 = UINT64_MAX;
	volatile uint64_t x508 = 137060250616LLU;
	static volatile int32_t t126 = -5496488;

    t126 = (((x505<=x506)*x507)<=x508);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x509 = UINT8_MAX;
	uint16_t x510 = 9U;
	int16_t x511 = INT16_MAX;
	static volatile uint8_t x512 = UINT8_MAX;
	volatile int32_t t127 = -2;

    t127 = (((x509<=x510)*x511)<=x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x513 = UINT32_MAX;
	int8_t x514 = 3;
	uint32_t x515 = 2013410U;
	int64_t x516 = INT64_MIN;
	volatile int32_t t128 = -74301;

    t128 = (((x513<=x514)*x515)<=x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint32_t x517 = 933356U;
	int8_t x519 = -46;
	int64_t x520 = -1LL;
	volatile int32_t t129 = -96;

    t129 = (((x517<=x518)*x519)<=x520);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x523 = -46;
	int32_t x524 = -1;
	volatile int32_t t130 = 187;

    t130 = (((x521<=x522)*x523)<=x524);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint32_t x525 = UINT32_MAX;
	static int8_t x527 = INT8_MIN;
	volatile int16_t x528 = INT16_MAX;
	int32_t t131 = 104;

    t131 = (((x525<=x526)*x527)<=x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x530 = INT64_MIN;
	uint32_t x531 = UINT32_MAX;
	volatile int32_t t132 = 2436599;

    t132 = (((x529<=x530)*x531)<=x532);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x533 = -1;
	int16_t x534 = 1511;
	volatile int64_t x536 = INT64_MIN;
	volatile int32_t t133 = 41;

    t133 = (((x533<=x534)*x535)<=x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static int64_t x537 = -7263560862LL;
	static int32_t x538 = 1;
	int64_t x539 = 43165LL;
	volatile uint32_t x540 = UINT32_MAX;

    t134 = (((x537<=x538)*x539)<=x540);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x541 = INT8_MAX;
	static int8_t x542 = 0;
	int16_t x543 = -1;
	int16_t x544 = INT16_MAX;

    t135 = (((x541<=x542)*x543)<=x544);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x545 = UINT32_MAX;
	static int16_t x546 = -1;
	int16_t x547 = INT16_MIN;
	uint32_t x548 = 185458U;
	static int32_t t136 = -27993;

    t136 = (((x545<=x546)*x547)<=x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x549 = UINT8_MAX;
	int16_t x550 = 3;
	int16_t x551 = -9;
	int32_t x552 = INT32_MAX;

    t137 = (((x549<=x550)*x551)<=x552);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x553 = INT16_MAX;
	uint16_t x554 = 3U;
	uint32_t x555 = 729U;

    t138 = (((x553<=x554)*x555)<=x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x557 = 18826194221LLU;
	static int64_t x558 = INT64_MIN;
	static volatile int16_t x559 = -8686;
	static int64_t x560 = INT64_MAX;

    t139 = (((x557<=x558)*x559)<=x560);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile uint8_t x561 = 1U;
	int32_t x562 = -1;
	int32_t x563 = -9;
	uint16_t x564 = 217U;
	volatile int32_t t140 = 3;

    t140 = (((x561<=x562)*x563)<=x564);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x566 = INT8_MIN;
	uint32_t x567 = UINT32_MAX;
	int16_t x568 = -1;

    t141 = (((x565<=x566)*x567)<=x568);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x569 = -1;
	static volatile int16_t x570 = 0;
	uint64_t x572 = 8102146709694293938LLU;
	static volatile int32_t t142 = 33452727;

    t142 = (((x569<=x570)*x571)<=x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x573 = -1;
	static int32_t x574 = INT32_MIN;
	static uint64_t x575 = 5325LLU;
	uint64_t x576 = UINT64_MAX;
	static volatile int32_t t143 = -16341;

    t143 = (((x573<=x574)*x575)<=x576);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x577 = -2180;
	uint64_t x578 = 64335862LLU;
	int8_t x579 = -1;
	static volatile uint16_t x580 = 12361U;
	volatile int32_t t144 = 2430371;

    t144 = (((x577<=x578)*x579)<=x580);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x581 = 192;
	int8_t x583 = INT8_MAX;
	uint32_t x584 = 954670U;
	volatile int32_t t145 = 12483;

    t145 = (((x581<=x582)*x583)<=x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x587 = 23U;
	int32_t t146 = -448;

    t146 = (((x585<=x586)*x587)<=x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x589 = -1;
	int64_t x590 = INT64_MIN;
	int64_t x591 = -17LL;
	int64_t x592 = -5950650924398820LL;

    t147 = (((x589<=x590)*x591)<=x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static int8_t x593 = 0;
	static int64_t x594 = -28037LL;
	uint8_t x595 = 6U;
	static int16_t x596 = INT16_MIN;
	static int32_t t148 = 116113989;

    t148 = (((x593<=x594)*x595)<=x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x597 = 186U;
	int32_t x598 = -1;
	static uint16_t x599 = UINT16_MAX;
	volatile int16_t x600 = -1;
	int32_t t149 = -2;

    t149 = (((x597<=x598)*x599)<=x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x602 = -1;
	uint32_t x603 = UINT32_MAX;
	static uint64_t x604 = 540526478529682613LLU;
	int32_t t150 = -62554178;

    t150 = (((x601<=x602)*x603)<=x604);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x605 = INT32_MIN;
	int32_t x606 = -1;
	uint32_t x607 = 11094U;
	static int8_t x608 = -1;
	volatile int32_t t151 = -96032;

    t151 = (((x605<=x606)*x607)<=x608);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x610 = 71696806U;
	uint64_t x611 = 247LLU;
	static int16_t x612 = 7;

    t152 = (((x609<=x610)*x611)<=x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x613 = 48U;
	volatile int16_t x614 = INT16_MIN;
	uint16_t x615 = 451U;
	volatile int32_t t153 = 3120877;

    t153 = (((x613<=x614)*x615)<=x616);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x617 = 37;
	volatile int16_t x618 = -1;
	volatile uint64_t x619 = 523674009490192LLU;
	volatile int64_t x620 = INT64_MIN;
	volatile int32_t t154 = -17;

    t154 = (((x617<=x618)*x619)<=x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x621 = INT16_MIN;
	static uint8_t x622 = 11U;
	int32_t x624 = INT32_MIN;
	int32_t t155 = 0;

    t155 = (((x621<=x622)*x623)<=x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int16_t x625 = -1;
	int16_t x626 = -16;
	int32_t x628 = 35953;
	static volatile int32_t t156 = -12527;

    t156 = (((x625<=x626)*x627)<=x628);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x631 = 12U;
	static volatile int32_t t157 = 312592;

    t157 = (((x629<=x630)*x631)<=x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile uint8_t x633 = UINT8_MAX;
	int32_t x634 = 1886541;
	static int16_t x635 = INT16_MIN;
	int32_t t158 = 28927487;

    t158 = (((x633<=x634)*x635)<=x636);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x637 = INT8_MIN;
	int64_t x638 = INT64_MAX;
	uint8_t x639 = 1U;
	uint8_t x640 = 1U;
	int32_t t159 = -472871;

    t159 = (((x637<=x638)*x639)<=x640);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x641 = 33137443U;
	int32_t x643 = INT32_MAX;
	volatile int32_t t160 = -501;

    t160 = (((x641<=x642)*x643)<=x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x645 = INT8_MIN;
	volatile int8_t x646 = INT8_MIN;
	static volatile uint16_t x647 = 0U;
	int16_t x648 = INT16_MIN;
	volatile int32_t t161 = -1995802;

    t161 = (((x645<=x646)*x647)<=x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x649 = INT32_MIN;
	int8_t x650 = 0;
	volatile int32_t t162 = 1106;

    t162 = (((x649<=x650)*x651)<=x652);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int8_t x653 = -1;
	int64_t x655 = INT64_MAX;
	int32_t t163 = 0;

    t163 = (((x653<=x654)*x655)<=x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x657 = 72966288034066LLU;
	volatile int16_t x658 = INT16_MIN;
	int64_t x660 = INT64_MIN;
	int32_t t164 = 59408127;

    t164 = (((x657<=x658)*x659)<=x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = -1LL;
	volatile int64_t x662 = -8799875020LL;
	int16_t x663 = INT16_MIN;
	int8_t x664 = INT8_MAX;
	static volatile int32_t t165 = 386696169;

    t165 = (((x661<=x662)*x663)<=x664);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static int64_t x665 = INT64_MAX;
	int64_t x666 = 113815LL;
	int32_t x667 = 172;
	int32_t x668 = 5;
	static volatile int32_t t166 = 1;

    t166 = (((x665<=x666)*x667)<=x668);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x669 = 54U;
	uint16_t x670 = UINT16_MAX;
	static volatile int32_t x671 = -1;
	volatile int8_t x672 = -6;
	volatile int32_t t167 = 555729883;

    t167 = (((x669<=x670)*x671)<=x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x674 = 2U;
	uint16_t x675 = UINT16_MAX;
	static int64_t x676 = -1LL;
	int32_t t168 = 1053733662;

    t168 = (((x673<=x674)*x675)<=x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x677 = INT64_MIN;
	int8_t x678 = INT8_MIN;
	int32_t x679 = -1;
	volatile uint8_t x680 = 125U;

    t169 = (((x677<=x678)*x679)<=x680);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int16_t x681 = -96;
	static volatile int64_t x682 = INT64_MAX;
	uint32_t x683 = 1U;
	int64_t x684 = 33768541LL;
	static volatile int32_t t170 = -2;

    t170 = (((x681<=x682)*x683)<=x684);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile uint16_t x687 = 1784U;
	int16_t x688 = INT16_MAX;
	int32_t t171 = 87;

    t171 = (((x685<=x686)*x687)<=x688);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x690 = UINT32_MAX;
	int64_t x691 = INT64_MAX;
	int32_t x692 = INT32_MAX;
	volatile int32_t t172 = 4;

    t172 = (((x689<=x690)*x691)<=x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x693 = UINT32_MAX;
	uint8_t x694 = UINT8_MAX;
	volatile uint64_t x696 = 211LLU;
	static volatile int32_t t173 = -5293;

    t173 = (((x693<=x694)*x695)<=x696);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int8_t x699 = INT8_MIN;
	int8_t x700 = INT8_MIN;
	int32_t t174 = 3806960;

    t174 = (((x697<=x698)*x699)<=x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int64_t x701 = -1LL;
	int32_t x702 = -834569;
	volatile uint32_t x703 = 1307869U;
	uint64_t x704 = UINT64_MAX;
	static volatile int32_t t175 = 999;

    t175 = (((x701<=x702)*x703)<=x704);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x705 = UINT32_MAX;
	int32_t x706 = -535;
	int16_t x707 = 30;
	uint8_t x708 = 12U;
	volatile int32_t t176 = -80862;

    t176 = (((x705<=x706)*x707)<=x708);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x709 = 15683558691020LLU;
	int8_t x710 = 0;
	int32_t x711 = INT32_MIN;
	uint32_t x712 = UINT32_MAX;
	static volatile int32_t t177 = -1946667;

    t177 = (((x709<=x710)*x711)<=x712);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x713 = UINT64_MAX;
	static uint8_t x714 = UINT8_MAX;
	uint16_t x715 = 2U;
	uint32_t x716 = UINT32_MAX;

    t178 = (((x713<=x714)*x715)<=x716);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x717 = UINT64_MAX;
	int16_t x718 = INT16_MAX;
	int32_t x719 = INT32_MIN;
	uint32_t x720 = 14070171U;
	static volatile int32_t t179 = 1520480;

    t179 = (((x717<=x718)*x719)<=x720);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x721 = INT16_MIN;
	int32_t x722 = INT32_MIN;
	int8_t x723 = -1;
	uint16_t x724 = 209U;
	int32_t t180 = -167620;

    t180 = (((x721<=x722)*x723)<=x724);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x725 = 7;
	int16_t x726 = INT16_MIN;
	static uint16_t x727 = UINT16_MAX;
	static int16_t x728 = -1;
	int32_t t181 = 9683;

    t181 = (((x725<=x726)*x727)<=x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile int32_t x729 = 0;
	volatile int8_t x730 = INT8_MAX;
	static volatile int16_t x732 = -1;
	volatile int32_t t182 = 6818;

    t182 = (((x729<=x730)*x731)<=x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x733 = 812U;
	int32_t x734 = -1;
	static int64_t x735 = INT64_MAX;
	volatile int64_t x736 = -1LL;
	int32_t t183 = -1902;

    t183 = (((x733<=x734)*x735)<=x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x737 = UINT8_MAX;
	uint32_t x738 = 2874U;
	int32_t x739 = INT32_MAX;
	static int8_t x740 = INT8_MIN;
	int32_t t184 = 14303509;

    t184 = (((x737<=x738)*x739)<=x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint8_t x741 = 3U;
	int16_t x743 = 7500;
	volatile uint16_t x744 = UINT16_MAX;
	volatile int32_t t185 = -231258092;

    t185 = (((x741<=x742)*x743)<=x744);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint32_t x745 = UINT32_MAX;
	int32_t x746 = -2;
	int32_t x747 = 501809;
	volatile int32_t t186 = -12;

    t186 = (((x745<=x746)*x747)<=x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int64_t x751 = INT64_MAX;
	static uint16_t x752 = 10293U;
	int32_t t187 = -878;

    t187 = (((x749<=x750)*x751)<=x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint8_t x754 = 15U;
	static int8_t x755 = 1;
	int64_t x756 = INT64_MIN;
	volatile int32_t t188 = 1152958;

    t188 = (((x753<=x754)*x755)<=x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x757 = INT64_MIN;
	uint64_t x758 = 81424742764LLU;
	static uint32_t x759 = 203U;

    t189 = (((x757<=x758)*x759)<=x760);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x761 = INT16_MIN;
	int16_t x763 = INT16_MIN;
	int16_t x764 = -1;
	static volatile int32_t t190 = 7;

    t190 = (((x761<=x762)*x763)<=x764);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x765 = INT8_MIN;
	uint64_t x766 = 7594408559595LLU;
	int32_t x768 = INT32_MIN;
	static volatile int32_t t191 = 129426;

    t191 = (((x765<=x766)*x767)<=x768);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x769 = -1LL;
	uint32_t x770 = 10U;
	static int16_t x771 = INT16_MAX;
	volatile int32_t t192 = -4;

    t192 = (((x769<=x770)*x771)<=x772);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x773 = UINT8_MAX;
	uint64_t x774 = UINT64_MAX;
	static uint8_t x775 = 16U;
	volatile int8_t x776 = 47;
	int32_t t193 = -133007;

    t193 = (((x773<=x774)*x775)<=x776);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x777 = 1U;
	int32_t x778 = -1;
	uint32_t x779 = UINT32_MAX;
	volatile int32_t x780 = -1;

    t194 = (((x777<=x778)*x779)<=x780);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x781 = 350634987010198158LL;
	volatile int8_t x782 = -60;
	int64_t x783 = INT64_MAX;
	volatile int8_t x784 = INT8_MAX;

    t195 = (((x781<=x782)*x783)<=x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int16_t x785 = INT16_MAX;
	uint16_t x786 = UINT16_MAX;
	uint32_t x787 = 25U;
	int16_t x788 = 4;
	static volatile int32_t t196 = -32;

    t196 = (((x785<=x786)*x787)<=x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x789 = -1LL;
	int8_t x790 = INT8_MIN;
	static volatile int64_t x791 = INT64_MIN;

    t197 = (((x789<=x790)*x791)<=x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x793 = INT32_MIN;
	int8_t x794 = INT8_MIN;
	uint64_t x795 = UINT64_MAX;
	volatile int32_t t198 = 802069378;

    t198 = (((x793<=x794)*x795)<=x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint32_t x797 = 25389U;
	int64_t x798 = INT64_MAX;
	int16_t x799 = -1;
	volatile uint16_t x800 = UINT16_MAX;
	int32_t t199 = -6120575;

    t199 = (((x797<=x798)*x799)<=x800);

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

