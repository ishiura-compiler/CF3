
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

int32_t x3 = INT32_MAX;
uint8_t x8 = UINT8_MAX;
static int32_t t1 = 481040268;
uint64_t x10 = 9401997LLU;
static volatile uint32_t x11 = 667U;
uint32_t x16 = UINT32_MAX;
int16_t x20 = INT16_MIN;
int32_t t4 = -10579;
static int16_t x25 = -1;
volatile int32_t t9 = 243920;
volatile int16_t x42 = 61;
int64_t x47 = INT64_MIN;
static uint8_t x53 = UINT8_MAX;
volatile uint32_t x58 = 4U;
volatile int8_t x63 = INT8_MIN;
int8_t x73 = INT8_MAX;
volatile int8_t x95 = 27;
int32_t t23 = 3154;
volatile int32_t t26 = 1025655;
volatile uint8_t x110 = UINT8_MAX;
int64_t x117 = 388LL;
int32_t x123 = INT32_MIN;
int64_t x126 = INT64_MIN;
int32_t t31 = 496;
uint64_t x129 = 4676218LLU;
int8_t x137 = INT8_MIN;
int16_t x145 = INT16_MIN;
int32_t t36 = 327;
uint32_t x152 = 0U;
static volatile int32_t t37 = -9279;
int32_t t38 = 159;
static int64_t x160 = -1LL;
static int16_t x168 = -25;
int32_t t41 = 222266099;
static volatile int16_t x172 = INT16_MIN;
int8_t x176 = INT8_MAX;
uint8_t x184 = 72U;
static volatile uint16_t x188 = 3U;
int16_t x192 = 7794;
int16_t x199 = -1;
volatile int16_t x202 = -1906;
int32_t t50 = 939;
int16_t x210 = INT16_MIN;
static int32_t t52 = 15357532;
int16_t x220 = INT16_MIN;
static int8_t x221 = INT8_MIN;
uint32_t x224 = 298878U;
int32_t t55 = 2;
int64_t x230 = INT64_MIN;
static uint8_t x236 = UINT8_MAX;
volatile int32_t t58 = -404390732;
int32_t t59 = -14;
static volatile int64_t x243 = -1LL;
volatile uint64_t x244 = UINT64_MAX;
volatile int32_t t60 = 57;
int64_t x246 = INT64_MAX;
static int32_t t61 = 1332572;
int8_t x250 = -3;
uint32_t x255 = UINT32_MAX;
static int64_t x256 = INT64_MIN;
int8_t x258 = INT8_MIN;
uint16_t x260 = 1U;
volatile int32_t t65 = 392424380;
static int16_t x266 = -1;
uint16_t x272 = 198U;
int64_t x273 = 6490072656LL;
int32_t x283 = INT32_MAX;
int64_t x284 = INT64_MIN;
static uint32_t x286 = UINT32_MAX;
int32_t t71 = 4387;
volatile uint16_t x290 = UINT16_MAX;
uint32_t x291 = UINT32_MAX;
volatile int8_t x293 = INT8_MAX;
uint16_t x297 = UINT16_MAX;
volatile uint8_t x302 = 0U;
uint64_t x305 = 218162462920493504LLU;
int32_t t77 = 2439;
int8_t x313 = INT8_MIN;
static uint64_t x319 = 34771802LLU;
volatile uint64_t x321 = UINT64_MAX;
int8_t x325 = -1;
int32_t x326 = INT32_MIN;
volatile int32_t t82 = 475162;
int16_t x334 = INT16_MAX;
int32_t x339 = INT32_MIN;
int8_t x342 = -1;
volatile int32_t x343 = INT32_MIN;
uint32_t x344 = 246536299U;
uint8_t x348 = 1U;
uint64_t x349 = 34301572441542LLU;
uint16_t x350 = 755U;
int64_t x354 = -3216196589589541LL;
int16_t x367 = INT16_MIN;
volatile int8_t x369 = INT8_MAX;
int32_t t94 = -8115;
int64_t x384 = INT64_MIN;
int8_t x390 = INT8_MIN;
int64_t x398 = -1LL;
int32_t x400 = -1;
static volatile int32_t t99 = -12022;
int64_t x403 = INT64_MIN;
volatile uint64_t x405 = 6264813573248LLU;
volatile uint32_t x406 = 0U;
volatile int32_t t101 = -44989144;
uint8_t x409 = UINT8_MAX;
int8_t x410 = INT8_MIN;
uint64_t x415 = 2LLU;
int16_t x417 = INT16_MIN;
int8_t x418 = -14;
static uint16_t x427 = UINT16_MAX;
int64_t x434 = -1LL;
static int64_t x435 = 5762701517048792LL;
int16_t x438 = INT16_MIN;
static uint8_t x447 = UINT8_MAX;
static volatile int32_t x450 = -105;
uint32_t x462 = UINT32_MAX;
static int32_t x467 = INT32_MIN;
uint8_t x468 = UINT8_MAX;
volatile int32_t x472 = INT32_MAX;
int32_t t117 = 34781829;
int32_t x473 = INT32_MAX;
volatile int32_t t118 = 405324;
int32_t x477 = -79620;
volatile int32_t t121 = -92;
int32_t x491 = INT32_MAX;
uint64_t x495 = 1031194715432614LLU;
int16_t x498 = -1;
int8_t x510 = -2;
volatile int16_t x516 = INT16_MIN;
int64_t x520 = INT64_MIN;
int32_t x527 = INT32_MIN;
int32_t x529 = 360;
volatile int32_t t132 = -25424;
volatile int8_t x534 = INT8_MIN;
int32_t x536 = 56;
volatile int32_t x537 = 248886;
static int32_t t134 = 0;
uint32_t x542 = UINT32_MAX;
static int32_t x543 = INT32_MIN;
int8_t x544 = INT8_MAX;
int32_t x548 = -1;
volatile int32_t t136 = 15453128;
int8_t x550 = -1;
uint16_t x557 = 4U;
int8_t x561 = 0;
int64_t x566 = INT64_MAX;
uint64_t x567 = 1313199003LLU;
volatile uint32_t x568 = 124U;
volatile int8_t x584 = INT8_MIN;
int16_t x591 = INT16_MIN;
static uint8_t x594 = 37U;
int32_t t149 = 1;
volatile int32_t t152 = 352;
int64_t x616 = -1LL;
volatile int32_t t153 = -7516888;
int32_t x620 = -1;
volatile int16_t x623 = INT16_MAX;
int32_t t155 = -36469644;
int16_t x630 = INT16_MIN;
uint16_t x636 = 0U;
volatile uint64_t x637 = UINT64_MAX;
volatile int16_t x641 = INT16_MIN;
uint16_t x642 = UINT16_MAX;
volatile int64_t x648 = INT64_MIN;
static uint32_t x653 = 111524U;
int16_t x657 = INT16_MAX;
volatile uint8_t x663 = 1U;
int64_t x665 = 298565888LL;
uint8_t x668 = UINT8_MAX;
static volatile int64_t x670 = INT64_MIN;
int64_t x671 = INT64_MIN;
uint64_t x678 = 147117577357184LLU;
static volatile int64_t x680 = -1LL;
volatile uint8_t x681 = 57U;
int32_t x682 = INT32_MIN;
static int32_t x684 = -1;
static volatile int32_t t170 = -1838604;
uint16_t x691 = 6216U;
uint64_t x696 = 5990LLU;
static volatile int32_t t173 = -2;
volatile int32_t x701 = INT32_MIN;
volatile uint64_t x703 = 406481643LLU;
int32_t t176 = -30219867;
int32_t x709 = INT32_MIN;
uint64_t x712 = 1132890548111818658LLU;
static volatile int32_t t179 = 82148;
uint16_t x722 = 4795U;
uint8_t x725 = 5U;
uint64_t x727 = 1LLU;
static uint64_t x729 = UINT64_MAX;
volatile int16_t x731 = 0;
int8_t x732 = 5;
volatile int32_t x734 = -1;
int8_t x735 = INT8_MIN;
int32_t t184 = -511253714;
int64_t x744 = -1LL;
volatile uint64_t x747 = 22056LLU;
static int8_t x754 = -1;
int8_t x757 = -48;
static uint64_t x762 = UINT64_MAX;
int16_t x766 = 940;
volatile uint32_t x767 = 179U;
int64_t x775 = 185427158LL;
int8_t x779 = INT8_MAX;
int32_t x783 = -1;
int32_t t195 = 2038254;
static int32_t t197 = -53821;
uint8_t x793 = 36U;
static int16_t x794 = 52;


void f0(void) {
    	int32_t x1 = INT32_MIN;
	uint16_t x2 = UINT16_MAX;
	static uint8_t x4 = 0U;
	volatile int32_t t0 = 9366;

    t0 = ((x1!=x2)>(x3&x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint8_t x5 = 13U;
	int32_t x6 = INT32_MIN;
	static volatile uint32_t x7 = 434624274U;

    t1 = ((x5!=x6)>(x7&x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = INT64_MIN;
	volatile int16_t x12 = INT16_MIN;
	int32_t t2 = 1000455559;

    t2 = ((x9!=x10)>(x11&x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MIN;
	int16_t x14 = INT16_MIN;
	int32_t x15 = INT32_MAX;
	int32_t t3 = 849;

    t3 = ((x13!=x14)>(x15&x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x17 = UINT32_MAX;
	int64_t x18 = 40763202042LL;
	int32_t x19 = 0;

    t4 = ((x17!=x18)>(x19&x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x21 = 1U;
	volatile int8_t x22 = INT8_MIN;
	uint16_t x23 = UINT16_MAX;
	uint16_t x24 = 282U;
	volatile int32_t t5 = -1;

    t5 = ((x21!=x22)>(x23&x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x26 = INT16_MIN;
	volatile uint64_t x27 = 392845935338393LLU;
	static int16_t x28 = INT16_MIN;
	int32_t t6 = -130834;

    t6 = ((x25!=x26)>(x27&x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = INT64_MIN;
	uint16_t x30 = 50U;
	uint16_t x31 = 2623U;
	int64_t x32 = 1909LL;
	volatile int32_t t7 = 2233;

    t7 = ((x29!=x30)>(x31&x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = -13;
	int32_t x34 = INT32_MIN;
	int8_t x35 = INT8_MAX;
	int8_t x36 = 0;
	volatile int32_t t8 = -55618690;

    t8 = ((x33!=x34)>(x35&x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = INT64_MIN;
	int64_t x38 = INT64_MAX;
	int64_t x39 = INT64_MIN;
	static int16_t x40 = 77;

    t9 = ((x37!=x38)>(x39&x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x41 = -46302454415515LL;
	static int8_t x43 = -7;
	static int64_t x44 = -7078131431958LL;
	int32_t t10 = 1;

    t10 = ((x41!=x42)>(x43&x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x45 = UINT32_MAX;
	volatile int8_t x46 = -1;
	int64_t x48 = INT64_MIN;
	int32_t t11 = -13916106;

    t11 = ((x45!=x46)>(x47&x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = INT32_MIN;
	int32_t x50 = INT32_MIN;
	static uint64_t x51 = 1LLU;
	int64_t x52 = INT64_MAX;
	volatile int32_t t12 = -140009;

    t12 = ((x49!=x50)>(x51&x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x54 = UINT8_MAX;
	int8_t x55 = -28;
	int8_t x56 = -1;
	volatile int32_t t13 = 85;

    t13 = ((x53!=x54)>(x55&x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x57 = -14076446880LL;
	uint16_t x59 = UINT16_MAX;
	volatile int8_t x60 = INT8_MIN;
	volatile int32_t t14 = -44866958;

    t14 = ((x57!=x58)>(x59&x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint64_t x61 = 487321794635LLU;
	int64_t x62 = INT64_MAX;
	int16_t x64 = INT16_MIN;
	volatile int32_t t15 = 632;

    t15 = ((x61!=x62)>(x63&x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x65 = 372550504710534LL;
	uint64_t x66 = 265997030070806118LLU;
	static uint8_t x67 = 24U;
	uint8_t x68 = 55U;
	volatile int32_t t16 = -472460;

    t16 = ((x65!=x66)>(x67&x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = INT32_MIN;
	uint16_t x70 = 3619U;
	static volatile int16_t x71 = 1;
	uint16_t x72 = 30U;
	int32_t t17 = -837549223;

    t17 = ((x69!=x70)>(x71&x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x74 = UINT64_MAX;
	int16_t x75 = -1;
	static uint16_t x76 = UINT16_MAX;
	static int32_t t18 = 391;

    t18 = ((x73!=x74)>(x75&x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x77 = -1;
	volatile int8_t x78 = INT8_MIN;
	int8_t x79 = -12;
	uint8_t x80 = 112U;
	int32_t t19 = 54581415;

    t19 = ((x77!=x78)>(x79&x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int32_t x81 = INT32_MAX;
	volatile int64_t x82 = -1LL;
	uint16_t x83 = 6U;
	uint8_t x84 = 2U;
	int32_t t20 = -22;

    t20 = ((x81!=x82)>(x83&x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile int8_t x85 = INT8_MAX;
	uint16_t x86 = 15730U;
	int8_t x87 = INT8_MAX;
	uint8_t x88 = UINT8_MAX;
	int32_t t21 = 201;

    t21 = ((x85!=x86)>(x87&x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x89 = UINT32_MAX;
	int64_t x90 = -1LL;
	uint64_t x91 = UINT64_MAX;
	int64_t x92 = -1LL;
	int32_t t22 = 11;

    t22 = ((x89!=x90)>(x91&x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x93 = 44253467LLU;
	uint32_t x94 = 2083117931U;
	int8_t x96 = -6;

    t23 = ((x93!=x94)>(x95&x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = 0;
	static int64_t x98 = INT64_MIN;
	static uint32_t x99 = 3781310U;
	static uint32_t x100 = 1591U;
	static int32_t t24 = -121995890;

    t24 = ((x97!=x98)>(x99&x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x101 = INT32_MIN;
	static volatile uint8_t x102 = 27U;
	volatile int16_t x103 = -1;
	volatile int8_t x104 = 45;
	int32_t t25 = 0;

    t25 = ((x101!=x102)>(x103&x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int32_t x105 = -122432139;
	int16_t x106 = -84;
	static int16_t x107 = INT16_MAX;
	int32_t x108 = 44320371;

    t26 = ((x105!=x106)>(x107&x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int64_t x109 = -380655694830530842LL;
	int64_t x111 = INT64_MAX;
	int64_t x112 = 8429943000599569LL;
	int32_t t27 = -31447211;

    t27 = ((x109!=x110)>(x111&x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x113 = 81U;
	int32_t x114 = INT32_MAX;
	int64_t x115 = INT64_MAX;
	int64_t x116 = INT64_MAX;
	volatile int32_t t28 = -63845;

    t28 = ((x113!=x114)>(x115&x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x118 = UINT32_MAX;
	static uint64_t x119 = UINT64_MAX;
	int32_t x120 = INT32_MIN;
	volatile int32_t t29 = -21921;

    t29 = ((x117!=x118)>(x119&x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x121 = 51U;
	static int8_t x122 = INT8_MIN;
	int8_t x124 = INT8_MAX;
	int32_t t30 = 10773;

    t30 = ((x121!=x122)>(x123&x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile int16_t x125 = INT16_MIN;
	int16_t x127 = INT16_MAX;
	int16_t x128 = INT16_MIN;

    t31 = ((x125!=x126)>(x127&x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x130 = INT8_MAX;
	int32_t x131 = -31816065;
	static int8_t x132 = -62;
	int32_t t32 = -1764;

    t32 = ((x129!=x130)>(x131&x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = 1;
	static volatile int32_t x134 = -934;
	uint64_t x135 = UINT64_MAX;
	int8_t x136 = -1;
	volatile int32_t t33 = -107;

    t33 = ((x133!=x134)>(x135&x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x138 = 15170927U;
	static int32_t x139 = INT32_MIN;
	static volatile uint64_t x140 = UINT64_MAX;
	volatile int32_t t34 = 0;

    t34 = ((x137!=x138)>(x139&x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x141 = 394795765;
	int32_t x142 = INT32_MAX;
	int8_t x143 = INT8_MAX;
	static uint16_t x144 = 1U;
	static volatile int32_t t35 = 332361;

    t35 = ((x141!=x142)>(x143&x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x146 = 122U;
	int64_t x147 = -192263459237LL;
	int8_t x148 = INT8_MAX;

    t36 = ((x145!=x146)>(x147&x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = INT64_MIN;
	int8_t x150 = INT8_MIN;
	int8_t x151 = -1;

    t37 = ((x149!=x150)>(x151&x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x153 = UINT32_MAX;
	int8_t x154 = 1;
	volatile uint32_t x155 = UINT32_MAX;
	static uint32_t x156 = 112047927U;

    t38 = ((x153!=x154)>(x155&x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile uint64_t x157 = 161LLU;
	static int8_t x158 = 3;
	int32_t x159 = INT32_MAX;
	int32_t t39 = -1;

    t39 = ((x157!=x158)>(x159&x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x161 = 11068565157LLU;
	volatile int16_t x162 = -15;
	static int32_t x163 = -5980223;
	int8_t x164 = -1;
	int32_t t40 = 63;

    t40 = ((x161!=x162)>(x163&x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int64_t x165 = -1LL;
	int16_t x166 = INT16_MAX;
	uint16_t x167 = 22U;

    t41 = ((x165!=x166)>(x167&x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x169 = 2U;
	volatile int16_t x170 = INT16_MIN;
	static int64_t x171 = -302127LL;
	static int32_t t42 = -655627;

    t42 = ((x169!=x170)>(x171&x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x173 = INT8_MAX;
	int32_t x174 = INT32_MIN;
	uint8_t x175 = UINT8_MAX;
	volatile int32_t t43 = 1307839;

    t43 = ((x173!=x174)>(x175&x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x177 = INT16_MIN;
	static int32_t x178 = INT32_MIN;
	static int64_t x179 = INT64_MAX;
	int16_t x180 = 11089;
	volatile int32_t t44 = -182150648;

    t44 = ((x177!=x178)>(x179&x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint8_t x181 = UINT8_MAX;
	uint32_t x182 = UINT32_MAX;
	static int64_t x183 = INT64_MIN;
	int32_t t45 = 385799;

    t45 = ((x181!=x182)>(x183&x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x185 = -1;
	int32_t x186 = 91197948;
	int32_t x187 = INT32_MAX;
	volatile int32_t t46 = -432;

    t46 = ((x185!=x186)>(x187&x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int32_t x189 = -1;
	int32_t x190 = INT32_MAX;
	int64_t x191 = INT64_MIN;
	int32_t t47 = 1;

    t47 = ((x189!=x190)>(x191&x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x193 = INT32_MIN;
	int8_t x194 = 1;
	int16_t x195 = 1;
	volatile uint16_t x196 = UINT16_MAX;
	volatile int32_t t48 = -2213;

    t48 = ((x193!=x194)>(x195&x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint16_t x197 = UINT16_MAX;
	int16_t x198 = 5;
	volatile int8_t x200 = INT8_MIN;
	volatile int32_t t49 = -47261489;

    t49 = ((x197!=x198)>(x199&x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = 2435120;
	uint8_t x203 = 90U;
	static int32_t x204 = 3214930;

    t50 = ((x201!=x202)>(x203&x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x205 = 39159U;
	uint16_t x206 = UINT16_MAX;
	uint16_t x207 = UINT16_MAX;
	uint16_t x208 = 9549U;
	volatile int32_t t51 = -245503;

    t51 = ((x205!=x206)>(x207&x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x209 = INT32_MIN;
	int8_t x211 = -1;
	static volatile int32_t x212 = INT32_MAX;

    t52 = ((x209!=x210)>(x211&x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint16_t x213 = UINT16_MAX;
	volatile int8_t x214 = 12;
	int16_t x215 = -1;
	int32_t x216 = -13;
	volatile int32_t t53 = 0;

    t53 = ((x213!=x214)>(x215&x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x217 = 6;
	static uint32_t x218 = 1107561U;
	static uint8_t x219 = 1U;
	volatile int32_t t54 = -54008891;

    t54 = ((x217!=x218)>(x219&x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x222 = -278;
	uint8_t x223 = 109U;

    t55 = ((x221!=x222)>(x223&x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x225 = 8118644673505622LLU;
	uint16_t x226 = 2851U;
	int32_t x227 = INT32_MIN;
	uint64_t x228 = 6790LLU;
	volatile int32_t t56 = 7;

    t56 = ((x225!=x226)>(x227&x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x229 = INT8_MAX;
	uint32_t x231 = UINT32_MAX;
	int64_t x232 = 3106969LL;
	int32_t t57 = -1027912;

    t57 = ((x229!=x230)>(x231&x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x233 = 0;
	static int8_t x234 = 13;
	int64_t x235 = INT64_MIN;

    t58 = ((x233!=x234)>(x235&x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static int64_t x237 = 29005473881370796LL;
	uint32_t x238 = UINT32_MAX;
	uint64_t x239 = 3678808LLU;
	int64_t x240 = INT64_MIN;

    t59 = ((x237!=x238)>(x239&x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int8_t x241 = 0;
	static uint32_t x242 = 123799U;

    t60 = ((x241!=x242)>(x243&x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int64_t x245 = INT64_MIN;
	uint64_t x247 = 638839033LLU;
	int16_t x248 = INT16_MIN;

    t61 = ((x245!=x246)>(x247&x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x249 = INT32_MIN;
	int16_t x251 = INT16_MIN;
	uint8_t x252 = 12U;
	int32_t t62 = 97541;

    t62 = ((x249!=x250)>(x251&x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint32_t x253 = UINT32_MAX;
	int8_t x254 = INT8_MAX;
	int32_t t63 = -221028124;

    t63 = ((x253!=x254)>(x255&x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x257 = 1;
	static int64_t x259 = INT64_MAX;
	int32_t t64 = 180251813;

    t64 = ((x257!=x258)>(x259&x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = 967405701;
	int16_t x262 = INT16_MIN;
	uint32_t x263 = 1154219U;
	volatile int16_t x264 = -2;

    t65 = ((x261!=x262)>(x263&x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x265 = 0U;
	int8_t x267 = 0;
	int64_t x268 = -1LL;
	int32_t t66 = 4;

    t66 = ((x265!=x266)>(x267&x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x269 = INT32_MAX;
	volatile int8_t x270 = 12;
	static uint64_t x271 = UINT64_MAX;
	static volatile int32_t t67 = 219;

    t67 = ((x269!=x270)>(x271&x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x274 = -1170;
	int8_t x275 = -1;
	int32_t x276 = INT32_MIN;
	volatile int32_t t68 = 8429188;

    t68 = ((x273!=x274)>(x275&x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x277 = 0U;
	int8_t x278 = 1;
	static volatile int16_t x279 = INT16_MAX;
	uint64_t x280 = UINT64_MAX;
	int32_t t69 = 23044504;

    t69 = ((x277!=x278)>(x279&x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x281 = -834596906;
	static int32_t x282 = 2;
	int32_t t70 = 22163678;

    t70 = ((x281!=x282)>(x283&x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x285 = INT16_MIN;
	int8_t x287 = -1;
	int32_t x288 = 0;

    t71 = ((x285!=x286)>(x287&x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x289 = -811233971;
	static int64_t x292 = -7701177446LL;
	static volatile int32_t t72 = 5683520;

    t72 = ((x289!=x290)>(x291&x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x294 = 7917;
	static int32_t x295 = -1;
	int8_t x296 = INT8_MIN;
	int32_t t73 = -50325828;

    t73 = ((x293!=x294)>(x295&x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x298 = -1;
	int64_t x299 = INT64_MIN;
	int8_t x300 = -1;
	volatile int32_t t74 = 2;

    t74 = ((x297!=x298)>(x299&x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x301 = -1LL;
	static int32_t x303 = INT32_MIN;
	int16_t x304 = -1;
	static volatile int32_t t75 = -1;

    t75 = ((x301!=x302)>(x303&x304));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x306 = 31LL;
	uint64_t x307 = 2443514632LLU;
	uint32_t x308 = UINT32_MAX;
	int32_t t76 = 3964;

    t76 = ((x305!=x306)>(x307&x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x309 = UINT16_MAX;
	int8_t x310 = 5;
	static volatile int16_t x311 = INT16_MAX;
	int32_t x312 = 73;

    t77 = ((x309!=x310)>(x311&x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint32_t x314 = UINT32_MAX;
	int8_t x315 = INT8_MIN;
	uint64_t x316 = UINT64_MAX;
	static volatile int32_t t78 = 126061051;

    t78 = ((x313!=x314)>(x315&x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x317 = 2U;
	int64_t x318 = -1LL;
	int32_t x320 = INT32_MIN;
	volatile int32_t t79 = -260085;

    t79 = ((x317!=x318)>(x319&x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x322 = -1LL;
	static volatile int16_t x323 = INT16_MAX;
	int64_t x324 = 132316993LL;
	volatile int32_t t80 = 6;

    t80 = ((x321!=x322)>(x323&x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x327 = 3;
	int64_t x328 = INT64_MAX;
	volatile int32_t t81 = -7;

    t81 = ((x325!=x326)>(x327&x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x329 = -14;
	static volatile int64_t x330 = -1LL;
	static int16_t x331 = INT16_MIN;
	uint32_t x332 = 2446U;

    t82 = ((x329!=x330)>(x331&x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint16_t x333 = UINT16_MAX;
	uint64_t x335 = 451196966LLU;
	static volatile int16_t x336 = INT16_MAX;
	int32_t t83 = -34;

    t83 = ((x333!=x334)>(x335&x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x337 = INT32_MIN;
	int8_t x338 = -2;
	static int8_t x340 = INT8_MAX;
	int32_t t84 = -220;

    t84 = ((x337!=x338)>(x339&x340));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x341 = INT64_MIN;
	int32_t t85 = 63;

    t85 = ((x341!=x342)>(x343&x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint16_t x345 = 5246U;
	uint16_t x346 = 0U;
	int8_t x347 = -1;
	volatile int32_t t86 = 115903128;

    t86 = ((x345!=x346)>(x347&x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int16_t x351 = INT16_MIN;
	uint8_t x352 = 1U;
	int32_t t87 = 10507596;

    t87 = ((x349!=x350)>(x351&x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static int32_t x353 = -1;
	int16_t x355 = -1735;
	int32_t x356 = 809838614;
	volatile int32_t t88 = 16254637;

    t88 = ((x353!=x354)>(x355&x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int64_t x357 = -101344LL;
	uint64_t x358 = UINT64_MAX;
	int8_t x359 = INT8_MIN;
	static int32_t x360 = INT32_MIN;
	volatile int32_t t89 = 6245855;

    t89 = ((x357!=x358)>(x359&x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x361 = INT16_MAX;
	int64_t x362 = -1LL;
	int64_t x363 = INT64_MAX;
	int64_t x364 = -1LL;
	static volatile int32_t t90 = 176418040;

    t90 = ((x361!=x362)>(x363&x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x365 = -2;
	int8_t x366 = INT8_MAX;
	volatile int16_t x368 = -1;
	static int32_t t91 = -82;

    t91 = ((x365!=x366)>(x367&x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x370 = -50;
	int8_t x371 = INT8_MIN;
	int16_t x372 = 7028;
	volatile int32_t t92 = 3095;

    t92 = ((x369!=x370)>(x371&x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x373 = INT32_MAX;
	static int8_t x374 = INT8_MAX;
	uint8_t x375 = 0U;
	uint16_t x376 = UINT16_MAX;
	volatile int32_t t93 = -1827;

    t93 = ((x373!=x374)>(x375&x376));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int8_t x377 = INT8_MIN;
	int16_t x378 = 488;
	volatile uint16_t x379 = UINT16_MAX;
	int16_t x380 = INT16_MIN;

    t94 = ((x377!=x378)>(x379&x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static int8_t x381 = -1;
	static int8_t x382 = -2;
	uint8_t x383 = 16U;
	int32_t t95 = 115;

    t95 = ((x381!=x382)>(x383&x384));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static int8_t x385 = INT8_MIN;
	int64_t x386 = INT64_MIN;
	int64_t x387 = INT64_MIN;
	uint64_t x388 = 3175498503664246638LLU;
	int32_t t96 = 56;

    t96 = ((x385!=x386)>(x387&x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x389 = -1;
	static uint32_t x391 = 114970U;
	static int32_t x392 = INT32_MAX;
	volatile int32_t t97 = 425859096;

    t97 = ((x389!=x390)>(x391&x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x393 = UINT64_MAX;
	static int64_t x394 = INT64_MIN;
	volatile int8_t x395 = INT8_MIN;
	int8_t x396 = INT8_MAX;
	static int32_t t98 = -18262949;

    t98 = ((x393!=x394)>(x395&x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x397 = INT8_MAX;
	volatile int64_t x399 = INT64_MAX;

    t99 = ((x397!=x398)>(x399&x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = 0;
	volatile int16_t x402 = INT16_MAX;
	volatile uint16_t x404 = 252U;
	static volatile int32_t t100 = -9258;

    t100 = ((x401!=x402)>(x403&x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static int8_t x407 = INT8_MAX;
	uint8_t x408 = 83U;

    t101 = ((x405!=x406)>(x407&x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x411 = INT8_MIN;
	int32_t x412 = INT32_MIN;
	static int32_t t102 = 1792359;

    t102 = ((x409!=x410)>(x411&x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x413 = 7;
	int64_t x414 = INT64_MIN;
	volatile int16_t x416 = INT16_MAX;
	static int32_t t103 = -490;

    t103 = ((x413!=x414)>(x415&x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x419 = INT64_MIN;
	uint8_t x420 = 2U;
	int32_t t104 = 1;

    t104 = ((x417!=x418)>(x419&x420));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x421 = INT32_MAX;
	static uint32_t x422 = 4U;
	uint16_t x423 = 13U;
	int16_t x424 = 3;
	volatile int32_t t105 = -1214;

    t105 = ((x421!=x422)>(x423&x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x425 = UINT32_MAX;
	static int64_t x426 = -23LL;
	static volatile int16_t x428 = INT16_MAX;
	static int32_t t106 = -110;

    t106 = ((x425!=x426)>(x427&x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x429 = 2U;
	int8_t x430 = INT8_MAX;
	volatile int16_t x431 = -1;
	volatile int8_t x432 = -4;
	int32_t t107 = -265850291;

    t107 = ((x429!=x430)>(x431&x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x433 = -2;
	uint64_t x436 = 259446690LLU;
	volatile int32_t t108 = -18328756;

    t108 = ((x433!=x434)>(x435&x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x437 = INT64_MIN;
	int16_t x439 = INT16_MAX;
	int32_t x440 = -1;
	volatile int32_t t109 = 10;

    t109 = ((x437!=x438)>(x439&x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int8_t x441 = -1;
	static int16_t x442 = 1;
	static int16_t x443 = INT16_MAX;
	uint8_t x444 = 1U;
	static volatile int32_t t110 = 6781057;

    t110 = ((x441!=x442)>(x443&x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x445 = -1LL;
	int32_t x446 = 301619;
	int8_t x448 = 16;
	static int32_t t111 = 0;

    t111 = ((x445!=x446)>(x447&x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x449 = 2370LL;
	int64_t x451 = -1LL;
	uint8_t x452 = 0U;
	int32_t t112 = -291380;

    t112 = ((x449!=x450)>(x451&x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x453 = -1;
	int64_t x454 = -1LL;
	int16_t x455 = INT16_MAX;
	uint32_t x456 = UINT32_MAX;
	volatile int32_t t113 = -68891;

    t113 = ((x453!=x454)>(x455&x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x457 = 2759860668350609LLU;
	int32_t x458 = -3857663;
	uint16_t x459 = 1U;
	int64_t x460 = -3546133665LL;
	volatile int32_t t114 = -3235;

    t114 = ((x457!=x458)>(x459&x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x461 = INT8_MIN;
	static volatile int8_t x463 = INT8_MIN;
	int16_t x464 = 4705;
	volatile int32_t t115 = 189;

    t115 = ((x461!=x462)>(x463&x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x465 = 4;
	static int16_t x466 = -60;
	static volatile int32_t t116 = 1;

    t116 = ((x465!=x466)>(x467&x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint32_t x469 = 1430U;
	int64_t x470 = INT64_MAX;
	static int32_t x471 = -5025984;

    t117 = ((x469!=x470)>(x471&x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int8_t x474 = -1;
	int8_t x475 = -1;
	int8_t x476 = INT8_MIN;

    t118 = ((x473!=x474)>(x475&x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint64_t x478 = 46813217843LLU;
	uint8_t x479 = 109U;
	int16_t x480 = INT16_MIN;
	static volatile int32_t t119 = 1;

    t119 = ((x477!=x478)>(x479&x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint32_t x481 = 1070298123U;
	uint32_t x482 = 236223197U;
	volatile uint8_t x483 = 63U;
	static int64_t x484 = INT64_MIN;
	volatile int32_t t120 = 3;

    t120 = ((x481!=x482)>(x483&x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x485 = INT8_MIN;
	int64_t x486 = INT64_MAX;
	uint64_t x487 = 31778LLU;
	int8_t x488 = -1;

    t121 = ((x485!=x486)>(x487&x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int32_t x489 = INT32_MAX;
	uint8_t x490 = 1U;
	int64_t x492 = INT64_MIN;
	volatile int32_t t122 = -15552408;

    t122 = ((x489!=x490)>(x491&x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x493 = INT64_MIN;
	volatile int16_t x494 = INT16_MIN;
	static uint16_t x496 = 10U;
	volatile int32_t t123 = -5764303;

    t123 = ((x493!=x494)>(x495&x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x497 = -37292LL;
	uint32_t x499 = 289256U;
	volatile int64_t x500 = 38398264115LL;
	volatile int32_t t124 = 40045;

    t124 = ((x497!=x498)>(x499&x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint16_t x501 = UINT16_MAX;
	int64_t x502 = -4716941691126788LL;
	uint64_t x503 = 545039215356666LLU;
	volatile int16_t x504 = INT16_MAX;
	volatile int32_t t125 = -73;

    t125 = ((x501!=x502)>(x503&x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x505 = UINT8_MAX;
	static int8_t x506 = INT8_MIN;
	uint64_t x507 = UINT64_MAX;
	uint32_t x508 = UINT32_MAX;
	volatile int32_t t126 = -192;

    t126 = ((x505!=x506)>(x507&x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x509 = UINT64_MAX;
	int32_t x511 = INT32_MIN;
	int32_t x512 = INT32_MIN;
	static volatile int32_t t127 = -23889;

    t127 = ((x509!=x510)>(x511&x512));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x513 = INT64_MIN;
	volatile uint64_t x514 = 3LLU;
	uint32_t x515 = UINT32_MAX;
	int32_t t128 = 1;

    t128 = ((x513!=x514)>(x515&x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x517 = -1LL;
	int16_t x518 = INT16_MIN;
	int64_t x519 = -1LL;
	static int32_t t129 = -3217;

    t129 = ((x517!=x518)>(x519&x520));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x521 = -1;
	volatile int16_t x522 = 4;
	uint8_t x523 = 19U;
	volatile uint32_t x524 = 122033266U;
	int32_t t130 = -154176600;

    t130 = ((x521!=x522)>(x523&x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x525 = -5;
	int8_t x526 = INT8_MIN;
	int32_t x528 = INT32_MAX;
	int32_t t131 = 1;

    t131 = ((x525!=x526)>(x527&x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static int32_t x530 = INT32_MIN;
	uint64_t x531 = UINT64_MAX;
	static uint64_t x532 = 267553867710673603LLU;

    t132 = ((x529!=x530)>(x531&x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint32_t x533 = 1023947941U;
	static int16_t x535 = 108;
	int32_t t133 = 12112;

    t133 = ((x533!=x534)>(x535&x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x538 = INT8_MIN;
	volatile int32_t x539 = -819;
	static int16_t x540 = INT16_MAX;

    t134 = ((x537!=x538)>(x539&x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x541 = INT16_MIN;
	volatile int32_t t135 = -19875;

    t135 = ((x541!=x542)>(x543&x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint32_t x545 = 501U;
	volatile int64_t x546 = INT64_MIN;
	uint64_t x547 = 1189LLU;

    t136 = ((x545!=x546)>(x547&x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x549 = INT64_MIN;
	static int64_t x551 = INT64_MIN;
	int32_t x552 = INT32_MAX;
	int32_t t137 = 7;

    t137 = ((x549!=x550)>(x551&x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x553 = INT16_MIN;
	int32_t x554 = -171300959;
	int8_t x555 = -1;
	int16_t x556 = INT16_MIN;
	volatile int32_t t138 = 21818157;

    t138 = ((x553!=x554)>(x555&x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x558 = UINT16_MAX;
	static uint32_t x559 = 3733289U;
	uint16_t x560 = 0U;
	volatile int32_t t139 = 0;

    t139 = ((x557!=x558)>(x559&x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x562 = 4;
	static int16_t x563 = INT16_MAX;
	int16_t x564 = INT16_MIN;
	volatile int32_t t140 = 6871274;

    t140 = ((x561!=x562)>(x563&x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x565 = 4695985U;
	int32_t t141 = 46;

    t141 = ((x565!=x566)>(x567&x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x569 = -1;
	int16_t x570 = INT16_MIN;
	int32_t x571 = -1;
	int32_t x572 = INT32_MIN;
	volatile int32_t t142 = 364068001;

    t142 = ((x569!=x570)>(x571&x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x573 = 367334;
	uint64_t x574 = 109839960LLU;
	int16_t x575 = INT16_MIN;
	static int64_t x576 = INT64_MIN;
	volatile int32_t t143 = -10;

    t143 = ((x573!=x574)>(x575&x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x577 = INT64_MAX;
	int8_t x578 = INT8_MAX;
	uint64_t x579 = 0LLU;
	static volatile int64_t x580 = 175773667058155395LL;
	volatile int32_t t144 = 230;

    t144 = ((x577!=x578)>(x579&x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x581 = INT16_MIN;
	uint64_t x582 = UINT64_MAX;
	static int64_t x583 = 30828607641LL;
	int32_t t145 = 148069248;

    t145 = ((x581!=x582)>(x583&x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint64_t x585 = UINT64_MAX;
	uint16_t x586 = 787U;
	volatile int16_t x587 = -11193;
	uint16_t x588 = 7U;
	volatile int32_t t146 = 116774652;

    t146 = ((x585!=x586)>(x587&x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x589 = INT8_MIN;
	int8_t x590 = -9;
	int64_t x592 = INT64_MIN;
	volatile int32_t t147 = 0;

    t147 = ((x589!=x590)>(x591&x592));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint32_t x593 = 7U;
	int16_t x595 = -882;
	int16_t x596 = 3;
	volatile int32_t t148 = -11343939;

    t148 = ((x593!=x594)>(x595&x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x597 = 103;
	uint64_t x598 = 201720160618LLU;
	static int64_t x599 = -554LL;
	int16_t x600 = INT16_MIN;

    t149 = ((x597!=x598)>(x599&x600));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static int16_t x601 = -1;
	int64_t x602 = INT64_MIN;
	int32_t x603 = -396;
	volatile uint64_t x604 = UINT64_MAX;
	volatile int32_t t150 = 810663;

    t150 = ((x601!=x602)>(x603&x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x605 = -1;
	static int32_t x606 = 195398;
	uint16_t x607 = 8945U;
	volatile int64_t x608 = -161957030038180762LL;
	volatile int32_t t151 = -12628428;

    t151 = ((x605!=x606)>(x607&x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x609 = 146233LL;
	volatile int32_t x610 = INT32_MIN;
	int8_t x611 = -1;
	volatile uint64_t x612 = 1064201866479441LLU;

    t152 = ((x609!=x610)>(x611&x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x613 = 40U;
	int8_t x614 = INT8_MIN;
	static volatile int64_t x615 = -1LL;

    t153 = ((x613!=x614)>(x615&x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static int8_t x617 = INT8_MAX;
	uint16_t x618 = UINT16_MAX;
	uint32_t x619 = UINT32_MAX;
	int32_t t154 = -310;

    t154 = ((x617!=x618)>(x619&x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x621 = -3;
	volatile uint32_t x622 = 23756U;
	static int64_t x624 = 7372LL;

    t155 = ((x621!=x622)>(x623&x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x625 = -257180710742364LL;
	int8_t x626 = 4;
	int16_t x627 = -1;
	uint32_t x628 = UINT32_MAX;
	int32_t t156 = -56820786;

    t156 = ((x625!=x626)>(x627&x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x629 = INT8_MAX;
	int32_t x631 = INT32_MIN;
	int64_t x632 = INT64_MIN;
	volatile int32_t t157 = 101;

    t157 = ((x629!=x630)>(x631&x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint32_t x633 = 567238420U;
	int16_t x634 = 3;
	int8_t x635 = -1;
	int32_t t158 = 13;

    t158 = ((x633!=x634)>(x635&x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static int64_t x638 = INT64_MAX;
	uint8_t x639 = 29U;
	uint8_t x640 = UINT8_MAX;
	static int32_t t159 = -107948;

    t159 = ((x637!=x638)>(x639&x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x643 = 32898843136LLU;
	uint16_t x644 = 15U;
	int32_t t160 = 1;

    t160 = ((x641!=x642)>(x643&x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static int64_t x645 = 7046LL;
	uint32_t x646 = 490333292U;
	int8_t x647 = -1;
	int32_t t161 = 58862223;

    t161 = ((x645!=x646)>(x647&x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x649 = -1;
	int32_t x650 = 5;
	int64_t x651 = 93465695081560LL;
	static volatile uint32_t x652 = UINT32_MAX;
	static volatile int32_t t162 = -156183169;

    t162 = ((x649!=x650)>(x651&x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int32_t x654 = INT32_MIN;
	uint8_t x655 = UINT8_MAX;
	static int32_t x656 = INT32_MIN;
	volatile int32_t t163 = 10766056;

    t163 = ((x653!=x654)>(x655&x656));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static int64_t x658 = -159965505821331899LL;
	int8_t x659 = INT8_MAX;
	static volatile int16_t x660 = -1;
	int32_t t164 = -13938;

    t164 = ((x657!=x658)>(x659&x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x661 = 1;
	uint64_t x662 = UINT64_MAX;
	int8_t x664 = 0;
	volatile int32_t t165 = 49;

    t165 = ((x661!=x662)>(x663&x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x666 = INT64_MAX;
	uint64_t x667 = UINT64_MAX;
	volatile int32_t t166 = 285;

    t166 = ((x665!=x666)>(x667&x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x669 = -1LL;
	static int16_t x672 = INT16_MIN;
	static int32_t t167 = -2;

    t167 = ((x669!=x670)>(x671&x672));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x673 = -1;
	volatile int32_t x674 = INT32_MIN;
	int16_t x675 = INT16_MIN;
	static uint16_t x676 = UINT16_MAX;
	static int32_t t168 = 998247;

    t168 = ((x673!=x674)>(x675&x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x677 = INT32_MIN;
	uint8_t x679 = 10U;
	volatile int32_t t169 = -39695;

    t169 = ((x677!=x678)>(x679&x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int16_t x683 = INT16_MIN;

    t170 = ((x681!=x682)>(x683&x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static int64_t x685 = INT64_MAX;
	volatile uint64_t x686 = 106985288979874140LLU;
	volatile int16_t x687 = -1;
	uint16_t x688 = 378U;
	static int32_t t171 = -789;

    t171 = ((x685!=x686)>(x687&x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x689 = 33298276LLU;
	volatile int32_t x690 = INT32_MIN;
	uint32_t x692 = 422326U;
	int32_t t172 = 69532;

    t172 = ((x689!=x690)>(x691&x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x693 = INT64_MIN;
	uint64_t x694 = 21725150059LLU;
	uint8_t x695 = 55U;

    t173 = ((x693!=x694)>(x695&x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x697 = INT32_MAX;
	int64_t x698 = INT64_MIN;
	int64_t x699 = INT64_MIN;
	int16_t x700 = -1;
	static int32_t t174 = 7;

    t174 = ((x697!=x698)>(x699&x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x702 = INT64_MIN;
	int64_t x704 = 102958935545924754LL;
	int32_t t175 = 296207;

    t175 = ((x701!=x702)>(x703&x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x705 = INT32_MAX;
	uint8_t x706 = 13U;
	int16_t x707 = 38;
	static uint16_t x708 = 5254U;

    t176 = ((x705!=x706)>(x707&x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x710 = -1;
	int16_t x711 = INT16_MAX;
	volatile int32_t t177 = -37341550;

    t177 = ((x709!=x710)>(x711&x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint16_t x713 = 53U;
	uint64_t x714 = 30940022974LLU;
	uint16_t x715 = UINT16_MAX;
	volatile int64_t x716 = 7080LL;
	volatile int32_t t178 = 52;

    t178 = ((x713!=x714)>(x715&x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile int8_t x717 = -3;
	volatile int32_t x718 = INT32_MIN;
	static uint16_t x719 = 1U;
	uint64_t x720 = 6932LLU;

    t179 = ((x717!=x718)>(x719&x720));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x721 = 179;
	uint8_t x723 = 1U;
	static int16_t x724 = -4840;
	int32_t t180 = 425;

    t180 = ((x721!=x722)>(x723&x724));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x726 = UINT32_MAX;
	volatile int64_t x728 = INT64_MIN;
	volatile int32_t t181 = 123076784;

    t181 = ((x725!=x726)>(x727&x728));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x730 = INT16_MIN;
	int32_t t182 = 2;

    t182 = ((x729!=x730)>(x731&x732));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x733 = UINT8_MAX;
	int64_t x736 = INT64_MIN;
	int32_t t183 = -6;

    t183 = ((x733!=x734)>(x735&x736));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x737 = -54;
	int16_t x738 = INT16_MIN;
	int16_t x739 = -1;
	static int32_t x740 = INT32_MIN;

    t184 = ((x737!=x738)>(x739&x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x741 = -29114LL;
	uint32_t x742 = UINT32_MAX;
	int32_t x743 = 2688252;
	int32_t t185 = 1;

    t185 = ((x741!=x742)>(x743&x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x745 = 73018LL;
	int64_t x746 = INT64_MIN;
	uint32_t x748 = UINT32_MAX;
	static volatile int32_t t186 = -811298830;

    t186 = ((x745!=x746)>(x747&x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static int32_t x749 = 412;
	int16_t x750 = -1;
	int64_t x751 = INT64_MIN;
	int16_t x752 = INT16_MAX;
	int32_t t187 = 2575;

    t187 = ((x749!=x750)>(x751&x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int32_t x753 = INT32_MAX;
	int64_t x755 = INT64_MIN;
	int32_t x756 = -1;
	static int32_t t188 = 1;

    t188 = ((x753!=x754)>(x755&x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint32_t x758 = UINT32_MAX;
	static volatile uint16_t x759 = UINT16_MAX;
	int32_t x760 = -1;
	volatile int32_t t189 = 60;

    t189 = ((x757!=x758)>(x759&x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x761 = UINT32_MAX;
	volatile uint64_t x763 = 3LLU;
	int64_t x764 = 1LL;
	volatile int32_t t190 = -185;

    t190 = ((x761!=x762)>(x763&x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x765 = INT32_MIN;
	static int16_t x768 = 14;
	int32_t t191 = -118;

    t191 = ((x765!=x766)>(x767&x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint64_t x769 = 5364LLU;
	uint8_t x770 = 9U;
	int16_t x771 = INT16_MAX;
	uint32_t x772 = UINT32_MAX;
	volatile int32_t t192 = -506983;

    t192 = ((x769!=x770)>(x771&x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int64_t x773 = 12LL;
	int32_t x774 = 18290438;
	static int16_t x776 = -1;
	static int32_t t193 = -1049397865;

    t193 = ((x773!=x774)>(x775&x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x777 = INT32_MAX;
	int16_t x778 = -3;
	int16_t x780 = -1;
	int32_t t194 = 60199020;

    t194 = ((x777!=x778)>(x779&x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static int8_t x781 = -4;
	int8_t x782 = 3;
	int8_t x784 = INT8_MAX;

    t195 = ((x781!=x782)>(x783&x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint32_t x785 = UINT32_MAX;
	static uint8_t x786 = UINT8_MAX;
	int8_t x787 = INT8_MIN;
	volatile uint8_t x788 = 1U;
	int32_t t196 = 49;

    t196 = ((x785!=x786)>(x787&x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x789 = -1;
	uint64_t x790 = UINT64_MAX;
	volatile int32_t x791 = INT32_MAX;
	int8_t x792 = -20;

    t197 = ((x789!=x790)>(x791&x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile uint32_t x795 = 131U;
	volatile int64_t x796 = -1LL;
	volatile int32_t t198 = 473;

    t198 = ((x793!=x794)>(x795&x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint16_t x797 = 3U;
	static int8_t x798 = 1;
	int64_t x799 = INT64_MIN;
	int8_t x800 = INT8_MAX;
	static int32_t t199 = 10283;

    t199 = ((x797!=x798)>(x799&x800));

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

