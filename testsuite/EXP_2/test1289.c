
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

static int32_t x1 = -1;
static volatile uint64_t x4 = UINT64_MAX;
int64_t x6 = -1LL;
uint8_t x22 = UINT8_MAX;
volatile int64_t t5 = 51207LL;
int32_t t7 = 0;
volatile int32_t t8 = 255;
uint8_t x46 = 6U;
volatile uint8_t x47 = 27U;
int32_t x48 = INT32_MIN;
int16_t x51 = 1;
volatile uint64_t x53 = 59356986164536797LLU;
volatile uint16_t x62 = 1633U;
static int64_t x63 = -1LL;
static int8_t x73 = -1;
int32_t t17 = 22;
int64_t x83 = INT64_MAX;
volatile int32_t t20 = -454;
static volatile int8_t x89 = 3;
int8_t x93 = INT8_MIN;
int16_t x94 = 1;
static int32_t x95 = -1;
static int64_t x96 = INT64_MAX;
static int64_t x97 = -1LL;
int32_t x103 = INT32_MIN;
volatile uint16_t x107 = 86U;
static uint16_t x113 = UINT16_MAX;
int8_t x115 = INT8_MIN;
static uint64_t x119 = UINT64_MAX;
volatile int32_t t28 = -18;
int32_t x121 = -1872881;
volatile int8_t x123 = -2;
int32_t t29 = -13056;
int16_t x125 = -5;
volatile uint16_t x131 = 496U;
static uint32_t x134 = UINT32_MAX;
static int32_t x138 = INT32_MAX;
uint32_t t33 = 56465U;
static uint32_t t35 = 485738878U;
volatile int32_t t36 = -474;
int32_t x153 = -337;
volatile int64_t x156 = 9673405LL;
int64_t x157 = INT64_MIN;
int64_t x158 = INT64_MIN;
int16_t x162 = INT16_MAX;
static uint16_t x163 = UINT16_MAX;
static uint16_t x170 = 19148U;
int32_t t42 = INT32_MIN;
volatile int8_t x179 = -1;
volatile int32_t t43 = -1;
volatile uint32_t t44 = 8970U;
int32_t x185 = INT32_MAX;
int64_t x191 = INT64_MAX;
volatile int32_t t49 = 390914419;
uint32_t x205 = 62887119U;
uint8_t x214 = 0U;
uint8_t x219 = 7U;
int32_t x221 = INT32_MIN;
int64_t x224 = -1LL;
int8_t x226 = INT8_MIN;
int32_t t56 = -3;
int8_t x238 = INT8_MIN;
int32_t x248 = INT32_MIN;
static uint8_t x251 = UINT8_MAX;
volatile int64_t x252 = -15187083LL;
uint64_t x257 = 30LLU;
uint32_t t64 = UINT32_MAX;
int64_t x265 = -11LL;
volatile int32_t t67 = INT32_MAX;
int16_t x286 = INT16_MIN;
volatile int32_t t70 = -124411;
int16_t x289 = INT16_MAX;
uint32_t x294 = 289914290U;
int16_t x299 = INT16_MIN;
static int16_t x301 = INT16_MIN;
int8_t x307 = -1;
int8_t x312 = -7;
volatile int32_t x316 = INT32_MIN;
int32_t t78 = -2087;
volatile int8_t x323 = INT8_MAX;
int32_t t79 = 2;
volatile int8_t x326 = INT8_MAX;
int8_t x329 = 1;
static int64_t x334 = 1660854LL;
volatile int16_t x336 = INT16_MIN;
uint32_t x342 = 484558314U;
int64_t x343 = INT64_MIN;
int8_t x349 = INT8_MAX;
uint64_t x360 = 3085083817LLU;
volatile uint64_t t88 = 192877247LLU;
int64_t x363 = INT64_MAX;
volatile uint32_t t89 = 21029U;
static int32_t x365 = -1;
int32_t t92 = -77;
uint64_t x380 = UINT64_MAX;
uint32_t x381 = UINT32_MAX;
int32_t t94 = -123224;
volatile int64_t x389 = 506700LL;
static int16_t x394 = -827;
int8_t x396 = INT8_MIN;
int32_t t97 = 10;
int32_t x399 = INT32_MIN;
uint64_t t98 = 45352513059233078LLU;
static int32_t x401 = -1;
uint32_t x404 = 37939U;
int8_t x409 = -11;
int32_t x411 = -26717881;
static int8_t x412 = INT8_MIN;
int32_t t101 = -13466701;
int16_t x417 = -1;
static int32_t t104 = -125;
int64_t x429 = -2171698028526038LL;
uint8_t x433 = 0U;
volatile int16_t x434 = 1309;
volatile int32_t t108 = 995425;
int32_t x442 = -21876942;
int64_t x443 = 36684538LL;
int32_t t109 = 4;
int16_t x454 = INT16_MIN;
int64_t x460 = 11074932540974LL;
int8_t x461 = INT8_MIN;
static int32_t x467 = -5;
static int32_t x480 = INT32_MIN;
volatile int8_t x481 = INT8_MIN;
static int32_t x486 = INT32_MIN;
int64_t x494 = INT64_MAX;
uint32_t t122 = 150785U;
uint16_t x497 = UINT16_MAX;
static volatile int32_t t125 = 258839483;
int32_t x512 = 14;
uint8_t x514 = 0U;
uint16_t x516 = UINT16_MAX;
int32_t x518 = INT32_MIN;
int16_t x535 = 5;
uint16_t x536 = 90U;
int8_t x547 = -1;
int32_t x548 = 156082709;
volatile int32_t t135 = -5;
int16_t x561 = INT16_MIN;
uint32_t x562 = UINT32_MAX;
int16_t x563 = INT16_MAX;
uint64_t x576 = 3108286LLU;
static uint16_t x583 = UINT16_MAX;
volatile int8_t x585 = INT8_MAX;
static int16_t x600 = INT16_MAX;
volatile int32_t t150 = 243;
volatile int32_t x611 = -1;
uint64_t x612 = 5LLU;
int16_t x614 = INT16_MIN;
static uint32_t x615 = UINT32_MAX;
volatile uint64_t x616 = 1679018LLU;
volatile uint64_t t152 = 16827217418762165LLU;
static volatile uint32_t t153 = 41U;
uint32_t x621 = 109019986U;
volatile uint32_t x622 = 12U;
volatile uint32_t t155 = 324415U;
int8_t x637 = 7;
static int32_t x638 = INT32_MAX;
int32_t x639 = INT32_MIN;
uint16_t x642 = 23837U;
int16_t x647 = 10284;
int64_t x649 = INT64_MIN;
static volatile uint16_t x650 = 14012U;
volatile int32_t x651 = 13475811;
volatile uint32_t x653 = 2057131274U;
int32_t x654 = INT32_MIN;
uint16_t x658 = 0U;
static int64_t x661 = INT64_MAX;
static uint16_t x663 = 21U;
volatile int32_t t163 = 1;
uint16_t x674 = UINT16_MAX;
int16_t x675 = INT16_MAX;
static uint16_t x684 = 26U;
volatile uint64_t x692 = 42525082LLU;
int32_t x698 = INT32_MAX;
static uint32_t t171 = 127U;
int16_t x704 = INT16_MAX;
int64_t x706 = INT64_MAX;
int16_t x714 = -1;
static int64_t x718 = 255527997784940776LL;
int16_t x719 = -1;
static int16_t x726 = -45;
int64_t x730 = -4541099716929130873LL;
volatile int16_t x732 = INT16_MAX;
volatile int32_t x735 = 1781;
int32_t x738 = 106;
uint64_t x742 = UINT64_MAX;
volatile int64_t x746 = INT64_MIN;
uint16_t x751 = UINT16_MAX;
int64_t t184 = INT64_MIN;
int64_t x756 = INT64_MAX;
int32_t t186 = 7878504;
static volatile int64_t x763 = 3007LL;
int32_t x773 = 2306995;
static int8_t x788 = INT8_MIN;
int64_t x793 = -10672187LL;
int32_t x795 = -1;
int32_t t195 = 1;
uint16_t x797 = 878U;
int32_t x807 = -1;
int16_t x808 = INT16_MIN;
uint64_t x811 = 37673137242989LLU;


void f0(void) {
    	int8_t x2 = INT8_MAX;
	volatile uint16_t x3 = 12U;
	volatile uint64_t t0 = UINT64_MAX;

    t0 = ((x1>(x2!=x3))+x4);

    if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x5 = -5489;
	int16_t x7 = INT16_MAX;
	static uint16_t x8 = UINT16_MAX;
	static volatile int32_t t1 = 55939430;

    t1 = ((x5>(x6!=x7))+x8);

    if (t1 != 65535) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = 60;
	int8_t x10 = -1;
	int32_t x11 = INT32_MIN;
	int8_t x12 = INT8_MIN;
	int32_t t2 = -66;

    t2 = ((x9>(x10!=x11))+x12);

    if (t2 != -127) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = -22230;
	int64_t x14 = INT64_MAX;
	int8_t x15 = INT8_MIN;
	static int64_t x16 = INT64_MAX;
	volatile int64_t t3 = INT64_MAX;

    t3 = ((x13>(x14!=x15))+x16);

    if (t3 != INT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x17 = UINT8_MAX;
	static volatile int32_t x18 = INT32_MIN;
	int16_t x19 = INT16_MIN;
	int32_t x20 = -1;
	int32_t t4 = -4421217;

    t4 = ((x17>(x18!=x19))+x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = INT64_MAX;
	int8_t x23 = 1;
	volatile int64_t x24 = -19924354LL;

    t5 = ((x21>(x22!=x23))+x24);

    if (t5 != -19924353LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = -1;
	volatile int32_t x26 = INT32_MAX;
	volatile uint16_t x27 = UINT16_MAX;
	int32_t x28 = -250066;
	int32_t t6 = 298694229;

    t6 = ((x25>(x26!=x27))+x28);

    if (t6 != -250066) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = INT16_MAX;
	volatile int32_t x30 = INT32_MAX;
	static int8_t x31 = -1;
	uint8_t x32 = 3U;

    t7 = ((x29>(x30!=x31))+x32);

    if (t7 != 4) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = INT64_MAX;
	uint16_t x34 = 779U;
	uint32_t x35 = 0U;
	static volatile int32_t x36 = 835;

    t8 = ((x33>(x34!=x35))+x36);

    if (t8 != 836) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x37 = 3U;
	volatile uint32_t x38 = 0U;
	int32_t x39 = INT32_MIN;
	int64_t x40 = INT64_MIN;
	volatile int64_t t9 = -2575282446035LL;

    t9 = ((x37>(x38!=x39))+x40);

    if (t9 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = INT8_MIN;
	int64_t x42 = INT64_MIN;
	static int64_t x43 = -1LL;
	uint8_t x44 = 1U;
	volatile int32_t t10 = -8;

    t10 = ((x41>(x42!=x43))+x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x45 = UINT8_MAX;
	int32_t t11 = 808694;

    t11 = ((x45>(x46!=x47))+x48);

    if (t11 != -2147483647) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = INT32_MIN;
	uint8_t x50 = 7U;
	volatile uint64_t x52 = 4881723LLU;
	volatile uint64_t t12 = 13530LLU;

    t12 = ((x49>(x50!=x51))+x52);

    if (t12 != 4881723LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x54 = -12115064589279958LL;
	int8_t x55 = INT8_MIN;
	static int32_t x56 = 0;
	int32_t t13 = -61526455;

    t13 = ((x53>(x54!=x55))+x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x61 = INT32_MAX;
	volatile uint32_t x64 = UINT32_MAX;
	volatile uint32_t t14 = 381179517U;

    t14 = ((x61>(x62!=x63))+x64);

    if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x65 = INT16_MAX;
	static int64_t x66 = -1LL;
	volatile int16_t x67 = 118;
	volatile int64_t x68 = INT64_MIN;
	static int64_t t15 = 7412939440056LL;

    t15 = ((x65>(x66!=x67))+x68);

    if (t15 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x69 = 293U;
	int8_t x70 = -1;
	uint16_t x71 = 12U;
	uint32_t x72 = UINT32_MAX;
	volatile uint32_t t16 = 27317U;

    t16 = ((x69>(x70!=x71))+x72);

    if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x74 = -1;
	int8_t x75 = INT8_MAX;
	int8_t x76 = INT8_MIN;

    t17 = ((x73>(x74!=x75))+x76);

    if (t17 != -128) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x77 = -21;
	static volatile uint16_t x78 = 5194U;
	int16_t x79 = INT16_MAX;
	uint64_t x80 = UINT64_MAX;
	volatile uint64_t t18 = UINT64_MAX;

    t18 = ((x77>(x78!=x79))+x80);

    if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x81 = INT16_MIN;
	volatile uint16_t x82 = 0U;
	int32_t x84 = INT32_MIN;
	volatile int32_t t19 = INT32_MIN;

    t19 = ((x81>(x82!=x83))+x84);

    if (t19 != INT32_MIN) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x85 = -1;
	uint64_t x86 = UINT64_MAX;
	uint8_t x87 = 122U;
	uint16_t x88 = 16U;

    t20 = ((x85>(x86!=x87))+x88);

    if (t20 != 16) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint16_t x90 = 1406U;
	volatile int16_t x91 = -1;
	uint16_t x92 = 169U;
	volatile int32_t t21 = -796760247;

    t21 = ((x89>(x90!=x91))+x92);

    if (t21 != 170) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t t22 = INT64_MAX;

    t22 = ((x93>(x94!=x95))+x96);

    if (t22 != INT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x98 = -1;
	volatile uint64_t x99 = 1LLU;
	int8_t x100 = INT8_MIN;
	int32_t t23 = -437594;

    t23 = ((x97>(x98!=x99))+x100);

    if (t23 != -128) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x101 = INT16_MAX;
	int16_t x102 = -3;
	uint32_t x104 = UINT32_MAX;
	uint32_t t24 = 1450U;

    t24 = ((x101>(x102!=x103))+x104);

    if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x105 = 848178753;
	uint64_t x106 = UINT64_MAX;
	int16_t x108 = INT16_MIN;
	int32_t t25 = -235468779;

    t25 = ((x105>(x106!=x107))+x108);

    if (t25 != -32767) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x109 = -1;
	int16_t x110 = -1901;
	int16_t x111 = INT16_MAX;
	int64_t x112 = 1241LL;
	int64_t t26 = -1211LL;

    t26 = ((x109>(x110!=x111))+x112);

    if (t26 != 1241LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x114 = INT16_MIN;
	uint8_t x116 = 26U;
	static volatile int32_t t27 = 877;

    t27 = ((x113>(x114!=x115))+x116);

    if (t27 != 27) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x117 = INT16_MIN;
	uint8_t x118 = UINT8_MAX;
	volatile int32_t x120 = -1432;

    t28 = ((x117>(x118!=x119))+x120);

    if (t28 != -1432) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x122 = 8U;
	volatile uint16_t x124 = UINT16_MAX;

    t29 = ((x121>(x122!=x123))+x124);

    if (t29 != 65535) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x126 = 28256LLU;
	uint8_t x127 = UINT8_MAX;
	static int8_t x128 = INT8_MIN;
	int32_t t30 = -3;

    t30 = ((x125>(x126!=x127))+x128);

    if (t30 != -128) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x129 = 3LLU;
	int16_t x130 = INT16_MAX;
	volatile uint64_t x132 = 239240841503015LLU;
	volatile uint64_t t31 = 408200LLU;

    t31 = ((x129>(x130!=x131))+x132);

    if (t31 != 239240841503016LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x133 = INT32_MIN;
	int32_t x135 = INT32_MIN;
	int64_t x136 = INT64_MIN;
	volatile int64_t t32 = INT64_MIN;

    t32 = ((x133>(x134!=x135))+x136);

    if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint8_t x137 = UINT8_MAX;
	volatile uint64_t x139 = 10LLU;
	uint32_t x140 = 485150U;

    t33 = ((x137>(x138!=x139))+x140);

    if (t33 != 485151U) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x141 = INT16_MAX;
	uint16_t x142 = 0U;
	volatile uint8_t x143 = UINT8_MAX;
	int16_t x144 = INT16_MIN;
	volatile int32_t t34 = 3203781;

    t34 = ((x141>(x142!=x143))+x144);

    if (t34 != -32767) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x145 = UINT16_MAX;
	int32_t x146 = INT32_MIN;
	uint8_t x147 = 1U;
	static volatile uint32_t x148 = 8728U;

    t35 = ((x145>(x146!=x147))+x148);

    if (t35 != 8729U) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x149 = UINT64_MAX;
	static uint64_t x150 = UINT64_MAX;
	uint8_t x151 = UINT8_MAX;
	int32_t x152 = 62;

    t36 = ((x149>(x150!=x151))+x152);

    if (t36 != 63) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x154 = INT16_MAX;
	static uint32_t x155 = 2984590U;
	volatile int64_t t37 = 7704LL;

    t37 = ((x153>(x154!=x155))+x156);

    if (t37 != 9673405LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x159 = INT64_MIN;
	uint8_t x160 = UINT8_MAX;
	int32_t t38 = -1957;

    t38 = ((x157>(x158!=x159))+x160);

    if (t38 != 255) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x161 = -88379671278069274LL;
	uint64_t x164 = 420980887LLU;
	volatile uint64_t t39 = 218LLU;

    t39 = ((x161>(x162!=x163))+x164);

    if (t39 != 420980887LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static int8_t x165 = INT8_MAX;
	int32_t x166 = -1;
	static uint16_t x167 = 7375U;
	volatile int32_t x168 = INT32_MIN;
	volatile int32_t t40 = 0;

    t40 = ((x165>(x166!=x167))+x168);

    if (t40 != -2147483647) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x169 = INT16_MIN;
	int64_t x171 = -1LL;
	volatile int16_t x172 = 2142;
	volatile int32_t t41 = 973633495;

    t41 = ((x169>(x170!=x171))+x172);

    if (t41 != 2142) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x173 = -2;
	uint8_t x174 = UINT8_MAX;
	static int32_t x175 = -1;
	volatile int32_t x176 = INT32_MIN;

    t42 = ((x173>(x174!=x175))+x176);

    if (t42 != INT32_MIN) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x177 = -21994464919LL;
	uint8_t x178 = 3U;
	int8_t x180 = 3;

    t43 = ((x177>(x178!=x179))+x180);

    if (t43 != 3) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x181 = INT32_MIN;
	static int32_t x182 = 205342;
	volatile int64_t x183 = INT64_MAX;
	uint32_t x184 = 219975U;

    t44 = ((x181>(x182!=x183))+x184);

    if (t44 != 219975U) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x186 = 95U;
	uint64_t x187 = 313742662513581537LLU;
	uint32_t x188 = 3646U;
	uint32_t t45 = 29261381U;

    t45 = ((x185>(x186!=x187))+x188);

    if (t45 != 3647U) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int64_t x189 = INT64_MAX;
	uint64_t x190 = 483627LLU;
	volatile int16_t x192 = INT16_MIN;
	static int32_t t46 = -599;

    t46 = ((x189>(x190!=x191))+x192);

    if (t46 != -32767) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint16_t x193 = 5109U;
	int16_t x194 = -1;
	int8_t x195 = 4;
	static int64_t x196 = INT64_MIN;
	int64_t t47 = -32452193392893LL;

    t47 = ((x193>(x194!=x195))+x196);

    if (t47 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x197 = INT64_MIN;
	static int64_t x198 = INT64_MAX;
	volatile int16_t x199 = 365;
	int64_t x200 = -2007634534496LL;
	volatile int64_t t48 = 305170553479LL;

    t48 = ((x197>(x198!=x199))+x200);

    if (t48 != -2007634534496LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x201 = 604836LLU;
	int64_t x202 = 344442401731LL;
	static int32_t x203 = -1;
	static volatile int32_t x204 = INT32_MIN;

    t49 = ((x201>(x202!=x203))+x204);

    if (t49 != -2147483647) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x206 = INT16_MAX;
	int64_t x207 = 1356137LL;
	static volatile int64_t x208 = INT64_MIN;
	volatile int64_t t50 = -5075666LL;

    t50 = ((x205>(x206!=x207))+x208);

    if (t50 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x209 = 9992205539747LLU;
	int8_t x210 = INT8_MIN;
	int64_t x211 = INT64_MIN;
	int16_t x212 = -6;
	int32_t t51 = 47;

    t51 = ((x209>(x210!=x211))+x212);

    if (t51 != -5) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x213 = 3U;
	int16_t x215 = INT16_MIN;
	static int16_t x216 = INT16_MAX;
	int32_t t52 = -119463;

    t52 = ((x213>(x214!=x215))+x216);

    if (t52 != 32768) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x217 = 26U;
	static int8_t x218 = INT8_MIN;
	int32_t x220 = INT32_MIN;
	volatile int32_t t53 = -172824;

    t53 = ((x217>(x218!=x219))+x220);

    if (t53 != -2147483647) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x222 = UINT16_MAX;
	static uint16_t x223 = UINT16_MAX;
	volatile int64_t t54 = -717690287852LL;

    t54 = ((x221>(x222!=x223))+x224);

    if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x225 = 10414285778LL;
	int32_t x227 = INT32_MAX;
	int16_t x228 = -2;
	volatile int32_t t55 = 10589653;

    t55 = ((x225>(x226!=x227))+x228);

    if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x229 = -218;
	uint32_t x230 = UINT32_MAX;
	static uint32_t x231 = 6959660U;
	int16_t x232 = INT16_MIN;

    t56 = ((x229>(x230!=x231))+x232);

    if (t56 != -32768) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x233 = -14;
	int32_t x234 = INT32_MIN;
	int8_t x235 = INT8_MIN;
	static uint64_t x236 = 1695672555696129LLU;
	static volatile uint64_t t57 = 811825439LLU;

    t57 = ((x233>(x234!=x235))+x236);

    if (t57 != 1695672555696129LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile int16_t x237 = -1;
	int8_t x239 = -1;
	int16_t x240 = -628;
	int32_t t58 = -72234394;

    t58 = ((x237>(x238!=x239))+x240);

    if (t58 != -628) { NG(); } else { ; }
	
}

void f59(void) {
    	static int32_t x241 = 329;
	int8_t x242 = -1;
	int8_t x243 = INT8_MIN;
	uint16_t x244 = 7U;
	volatile int32_t t59 = -1;

    t59 = ((x241>(x242!=x243))+x244);

    if (t59 != 8) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint32_t x245 = UINT32_MAX;
	int32_t x246 = INT32_MIN;
	int8_t x247 = -1;
	volatile int32_t t60 = -7139387;

    t60 = ((x245>(x246!=x247))+x248);

    if (t60 != -2147483647) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x249 = -1;
	int16_t x250 = -4882;
	int64_t t61 = 29372123124322008LL;

    t61 = ((x249>(x250!=x251))+x252);

    if (t61 != -15187083LL) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint64_t x253 = 1817627729009LLU;
	int16_t x254 = -8144;
	int16_t x255 = INT16_MIN;
	int64_t x256 = INT64_MIN;
	volatile int64_t t62 = -392785625603LL;

    t62 = ((x253>(x254!=x255))+x256);

    if (t62 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int64_t x258 = INT64_MIN;
	int8_t x259 = -1;
	static uint8_t x260 = 1U;
	int32_t t63 = -6941;

    t63 = ((x257>(x258!=x259))+x260);

    if (t63 != 2) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int64_t x261 = INT64_MIN;
	int32_t x262 = INT32_MIN;
	uint64_t x263 = 202944LLU;
	static uint32_t x264 = UINT32_MAX;

    t64 = ((x261>(x262!=x263))+x264);

    if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x266 = INT64_MIN;
	int8_t x267 = INT8_MAX;
	uint8_t x268 = UINT8_MAX;
	int32_t t65 = -3;

    t65 = ((x265>(x266!=x267))+x268);

    if (t65 != 255) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint64_t x269 = 45086124LLU;
	volatile int8_t x270 = 1;
	int32_t x271 = -3;
	volatile int8_t x272 = INT8_MAX;
	volatile int32_t t66 = 223;

    t66 = ((x269>(x270!=x271))+x272);

    if (t66 != 128) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int64_t x273 = -1LL;
	int16_t x274 = -12;
	int64_t x275 = 2653755537873786304LL;
	int32_t x276 = INT32_MAX;

    t67 = ((x273>(x274!=x275))+x276);

    if (t67 != INT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x277 = UINT64_MAX;
	volatile uint16_t x278 = 4U;
	uint8_t x279 = UINT8_MAX;
	volatile uint32_t x280 = 173762802U;
	uint32_t t68 = 18321995U;

    t68 = ((x277>(x278!=x279))+x280);

    if (t68 != 173762803U) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x281 = -8017978;
	static volatile int64_t x282 = -116144LL;
	int64_t x283 = INT64_MIN;
	volatile uint64_t x284 = 81629315399LLU;
	uint64_t t69 = 3910968083095LLU;

    t69 = ((x281>(x282!=x283))+x284);

    if (t69 != 81629315399LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x285 = UINT16_MAX;
	int64_t x287 = 31250589051LL;
	int16_t x288 = 69;

    t70 = ((x285>(x286!=x287))+x288);

    if (t70 != 70) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x290 = INT32_MAX;
	uint16_t x291 = UINT16_MAX;
	static int8_t x292 = INT8_MAX;
	static volatile int32_t t71 = 0;

    t71 = ((x289>(x290!=x291))+x292);

    if (t71 != 128) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x293 = INT64_MAX;
	volatile int32_t x295 = -3366148;
	uint64_t x296 = 2LLU;
	static uint64_t t72 = 2LLU;

    t72 = ((x293>(x294!=x295))+x296);

    if (t72 != 3LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x297 = INT64_MIN;
	int32_t x298 = INT32_MIN;
	volatile int8_t x300 = INT8_MAX;
	static int32_t t73 = -1;

    t73 = ((x297>(x298!=x299))+x300);

    if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x302 = 0U;
	uint8_t x303 = UINT8_MAX;
	uint8_t x304 = 55U;
	volatile int32_t t74 = 241;

    t74 = ((x301>(x302!=x303))+x304);

    if (t74 != 55) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x305 = -71135;
	int64_t x306 = INT64_MIN;
	int32_t x308 = INT32_MIN;
	int32_t t75 = INT32_MIN;

    t75 = ((x305>(x306!=x307))+x308);

    if (t75 != INT32_MIN) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile uint16_t x309 = 989U;
	uint16_t x310 = 961U;
	int8_t x311 = -7;
	int32_t t76 = 111129;

    t76 = ((x309>(x310!=x311))+x312);

    if (t76 != -6) { NG(); } else { ; }
	
}

void f77(void) {
    	static int64_t x313 = -1LL;
	static int64_t x314 = 243729769491343584LL;
	static volatile uint16_t x315 = UINT16_MAX;
	volatile int32_t t77 = INT32_MIN;

    t77 = ((x313>(x314!=x315))+x316);

    if (t77 != INT32_MIN) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint8_t x317 = 25U;
	int16_t x318 = -254;
	int32_t x319 = INT32_MIN;
	volatile int16_t x320 = -2381;

    t78 = ((x317>(x318!=x319))+x320);

    if (t78 != -2380) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint8_t x321 = 28U;
	uint8_t x322 = 0U;
	int8_t x324 = 60;

    t79 = ((x321>(x322!=x323))+x324);

    if (t79 != 61) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x325 = INT32_MAX;
	static int32_t x327 = INT32_MIN;
	uint32_t x328 = UINT32_MAX;
	uint32_t t80 = 986457539U;

    t80 = ((x325>(x326!=x327))+x328);

    if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x330 = INT32_MAX;
	volatile int64_t x331 = 0LL;
	static volatile int16_t x332 = 7492;
	int32_t t81 = -27646;

    t81 = ((x329>(x330!=x331))+x332);

    if (t81 != 7492) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x333 = -1;
	volatile int8_t x335 = -1;
	volatile int32_t t82 = -132895847;

    t82 = ((x333>(x334!=x335))+x336);

    if (t82 != -32768) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint8_t x337 = 7U;
	int16_t x338 = INT16_MIN;
	int16_t x339 = INT16_MAX;
	int32_t x340 = 125639;
	int32_t t83 = -1;

    t83 = ((x337>(x338!=x339))+x340);

    if (t83 != 125640) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x341 = -188570;
	uint32_t x344 = 408318416U;
	volatile uint32_t t84 = 646U;

    t84 = ((x341>(x342!=x343))+x344);

    if (t84 != 408318416U) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x345 = -108;
	int32_t x346 = -1;
	volatile int8_t x347 = 7;
	static int32_t x348 = INT32_MIN;
	static volatile int32_t t85 = INT32_MIN;

    t85 = ((x345>(x346!=x347))+x348);

    if (t85 != INT32_MIN) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x350 = -242365;
	int16_t x351 = 668;
	int16_t x352 = INT16_MIN;
	static int32_t t86 = 0;

    t86 = ((x349>(x350!=x351))+x352);

    if (t86 != -32767) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x353 = -1;
	int8_t x354 = INT8_MAX;
	static volatile int64_t x355 = INT64_MIN;
	int32_t x356 = 761453915;
	int32_t t87 = 746331;

    t87 = ((x353>(x354!=x355))+x356);

    if (t87 != 761453915) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x357 = INT32_MAX;
	static int64_t x358 = INT64_MAX;
	int32_t x359 = -1;

    t88 = ((x357>(x358!=x359))+x360);

    if (t88 != 3085083818LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static int32_t x361 = INT32_MAX;
	static int8_t x362 = 0;
	uint32_t x364 = 1317U;

    t89 = ((x361>(x362!=x363))+x364);

    if (t89 != 1318U) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x366 = INT64_MIN;
	uint16_t x367 = 40U;
	uint16_t x368 = 1929U;
	volatile int32_t t90 = 41;

    t90 = ((x365>(x366!=x367))+x368);

    if (t90 != 1929) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint64_t x369 = 23697818813402608LLU;
	int16_t x370 = INT16_MIN;
	int8_t x371 = INT8_MAX;
	int16_t x372 = -1;
	volatile int32_t t91 = -180;

    t91 = ((x369>(x370!=x371))+x372);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x373 = 1849086603030547526LLU;
	volatile int16_t x374 = INT16_MIN;
	static int64_t x375 = -1LL;
	uint16_t x376 = 4U;

    t92 = ((x373>(x374!=x375))+x376);

    if (t92 != 5) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x377 = 8014335749LLU;
	static volatile uint16_t x378 = 2U;
	static int64_t x379 = 10751163438LL;
	uint64_t t93 = 33LLU;

    t93 = ((x377>(x378!=x379))+x380);

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x382 = UINT64_MAX;
	int32_t x383 = 71367;
	int16_t x384 = INT16_MAX;

    t94 = ((x381>(x382!=x383))+x384);

    if (t94 != 32768) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x385 = INT32_MAX;
	static uint8_t x386 = 3U;
	static uint8_t x387 = UINT8_MAX;
	uint32_t x388 = 202052U;
	static volatile uint32_t t95 = 3730U;

    t95 = ((x385>(x386!=x387))+x388);

    if (t95 != 202053U) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int16_t x390 = INT16_MIN;
	int8_t x391 = INT8_MAX;
	uint8_t x392 = UINT8_MAX;
	volatile int32_t t96 = 13229;

    t96 = ((x389>(x390!=x391))+x392);

    if (t96 != 256) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x393 = INT32_MIN;
	int16_t x395 = INT16_MIN;

    t97 = ((x393>(x394!=x395))+x396);

    if (t97 != -128) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint32_t x397 = 17U;
	int64_t x398 = -14643173LL;
	uint64_t x400 = UINT64_MAX;

    t98 = ((x397>(x398!=x399))+x400);

    if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x402 = 1;
	int64_t x403 = 9609363257902849LL;
	volatile uint32_t t99 = 2107392654U;

    t99 = ((x401>(x402!=x403))+x404);

    if (t99 != 37939U) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x405 = INT32_MIN;
	uint32_t x406 = 11U;
	int32_t x407 = INT32_MIN;
	static int16_t x408 = -1;
	int32_t t100 = 0;

    t100 = ((x405>(x406!=x407))+x408);

    if (t100 != -1) { NG(); } else { ; }
	
}

void f101(void) {
    	static int8_t x410 = -1;

    t101 = ((x409>(x410!=x411))+x412);

    if (t101 != -128) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x413 = 0;
	uint32_t x414 = 12385786U;
	uint32_t x415 = 815456695U;
	static int8_t x416 = INT8_MIN;
	static int32_t t102 = -1;

    t102 = ((x413>(x414!=x415))+x416);

    if (t102 != -128) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x418 = INT64_MAX;
	int16_t x419 = INT16_MIN;
	uint16_t x420 = UINT16_MAX;
	volatile int32_t t103 = 311599;

    t103 = ((x417>(x418!=x419))+x420);

    if (t103 != 65535) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x421 = -1;
	volatile uint64_t x422 = 1542941923662LLU;
	int8_t x423 = INT8_MAX;
	int32_t x424 = -2591;

    t104 = ((x421>(x422!=x423))+x424);

    if (t104 != -2591) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint16_t x425 = 1070U;
	uint32_t x426 = 160U;
	int16_t x427 = -1;
	int8_t x428 = INT8_MAX;
	volatile int32_t t105 = -1999;

    t105 = ((x425>(x426!=x427))+x428);

    if (t105 != 128) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x430 = INT16_MAX;
	volatile uint16_t x431 = 10U;
	int32_t x432 = INT32_MIN;
	int32_t t106 = INT32_MIN;

    t106 = ((x429>(x430!=x431))+x432);

    if (t106 != INT32_MIN) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x435 = UINT64_MAX;
	uint32_t x436 = 32716363U;
	volatile uint32_t t107 = 143583U;

    t107 = ((x433>(x434!=x435))+x436);

    if (t107 != 32716363U) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x437 = 32663563949LLU;
	int32_t x438 = 309;
	int32_t x439 = INT32_MAX;
	int16_t x440 = INT16_MIN;

    t108 = ((x437>(x438!=x439))+x440);

    if (t108 != -32767) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x441 = INT16_MIN;
	static int16_t x444 = INT16_MIN;

    t109 = ((x441>(x442!=x443))+x444);

    if (t109 != -32768) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x445 = 8;
	int32_t x446 = -1;
	int32_t x447 = INT32_MIN;
	uint64_t x448 = 52840349985160LLU;
	volatile uint64_t t110 = 10555710589853LLU;

    t110 = ((x445>(x446!=x447))+x448);

    if (t110 != 52840349985161LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x449 = -1;
	static uint16_t x450 = 3U;
	volatile int32_t x451 = 581867799;
	static uint16_t x452 = UINT16_MAX;
	int32_t t111 = 933029;

    t111 = ((x449>(x450!=x451))+x452);

    if (t111 != 65535) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint32_t x453 = UINT32_MAX;
	static volatile uint8_t x455 = 1U;
	volatile uint32_t x456 = 3517457U;
	uint32_t t112 = 16723U;

    t112 = ((x453>(x454!=x455))+x456);

    if (t112 != 3517458U) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x457 = UINT32_MAX;
	static int8_t x458 = 0;
	int8_t x459 = 0;
	int64_t t113 = -6706380LL;

    t113 = ((x457>(x458!=x459))+x460);

    if (t113 != 11074932540975LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x462 = 386398463682348LLU;
	int64_t x463 = INT64_MAX;
	static uint64_t x464 = 370662127LLU;
	uint64_t t114 = 7467407272022919LLU;

    t114 = ((x461>(x462!=x463))+x464);

    if (t114 != 370662127LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x465 = INT64_MIN;
	static volatile uint8_t x466 = 1U;
	uint16_t x468 = UINT16_MAX;
	int32_t t115 = -431;

    t115 = ((x465>(x466!=x467))+x468);

    if (t115 != 65535) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x469 = INT16_MIN;
	uint16_t x470 = UINT16_MAX;
	volatile int8_t x471 = -1;
	int8_t x472 = -1;
	volatile int32_t t116 = -11267041;

    t116 = ((x469>(x470!=x471))+x472);

    if (t116 != -1) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x473 = -5;
	static volatile int32_t x474 = -1;
	static uint64_t x475 = 635803276LLU;
	uint16_t x476 = 28214U;
	int32_t t117 = -312437887;

    t117 = ((x473>(x474!=x475))+x476);

    if (t117 != 28214) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x477 = INT8_MIN;
	int32_t x478 = INT32_MAX;
	int32_t x479 = INT32_MAX;
	volatile int32_t t118 = INT32_MIN;

    t118 = ((x477>(x478!=x479))+x480);

    if (t118 != INT32_MIN) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x482 = INT32_MIN;
	int16_t x483 = 598;
	uint16_t x484 = 20U;
	volatile int32_t t119 = 215;

    t119 = ((x481>(x482!=x483))+x484);

    if (t119 != 20) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x485 = 55547LLU;
	int64_t x487 = INT64_MAX;
	static int16_t x488 = 1;
	volatile int32_t t120 = -60480335;

    t120 = ((x485>(x486!=x487))+x488);

    if (t120 != 2) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint64_t x489 = 39LLU;
	int16_t x490 = INT16_MAX;
	static int16_t x491 = INT16_MIN;
	static int16_t x492 = INT16_MAX;
	volatile int32_t t121 = 1068;

    t121 = ((x489>(x490!=x491))+x492);

    if (t121 != 32768) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint64_t x493 = 10352LLU;
	int16_t x495 = 1;
	uint32_t x496 = 59083U;

    t122 = ((x493>(x494!=x495))+x496);

    if (t122 != 59084U) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x498 = 115651501687508137LLU;
	int32_t x499 = INT32_MAX;
	int16_t x500 = INT16_MAX;
	volatile int32_t t123 = 245630973;

    t123 = ((x497>(x498!=x499))+x500);

    if (t123 != 32768) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x501 = 24939762976015LLU;
	int64_t x502 = -50LL;
	uint8_t x503 = UINT8_MAX;
	int16_t x504 = -1;
	volatile int32_t t124 = -961;

    t124 = ((x501>(x502!=x503))+x504);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x505 = 6877623519LLU;
	static int16_t x506 = 13;
	uint32_t x507 = UINT32_MAX;
	int8_t x508 = -30;

    t125 = ((x505>(x506!=x507))+x508);

    if (t125 != -29) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x509 = 82U;
	int8_t x510 = INT8_MIN;
	static volatile uint16_t x511 = 3869U;
	volatile int32_t t126 = 687037445;

    t126 = ((x509>(x510!=x511))+x512);

    if (t126 != 15) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int64_t x513 = INT64_MAX;
	static uint64_t x515 = 44061219762732245LLU;
	int32_t t127 = -6147;

    t127 = ((x513>(x514!=x515))+x516);

    if (t127 != 65536) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x517 = 502644193260LL;
	int16_t x519 = INT16_MAX;
	int16_t x520 = INT16_MAX;
	volatile int32_t t128 = -1017311556;

    t128 = ((x517>(x518!=x519))+x520);

    if (t128 != 32768) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int32_t x521 = INT32_MAX;
	int8_t x522 = INT8_MAX;
	volatile int8_t x523 = INT8_MIN;
	volatile uint16_t x524 = 188U;
	volatile int32_t t129 = 48;

    t129 = ((x521>(x522!=x523))+x524);

    if (t129 != 189) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x525 = -1;
	volatile int64_t x526 = -1LL;
	volatile int8_t x527 = 1;
	uint16_t x528 = 1U;
	volatile int32_t t130 = -403797;

    t130 = ((x525>(x526!=x527))+x528);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x529 = -1697867111391LL;
	int64_t x530 = INT64_MAX;
	uint64_t x531 = 5649612885190LLU;
	int32_t x532 = INT32_MIN;
	static volatile int32_t t131 = INT32_MIN;

    t131 = ((x529>(x530!=x531))+x532);

    if (t131 != INT32_MIN) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint8_t x533 = 104U;
	int32_t x534 = -243;
	int32_t t132 = 128545;

    t132 = ((x533>(x534!=x535))+x536);

    if (t132 != 91) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x537 = INT32_MAX;
	int8_t x538 = INT8_MIN;
	int64_t x539 = -1LL;
	uint64_t x540 = UINT64_MAX;
	static uint64_t t133 = 43LLU;

    t133 = ((x537>(x538!=x539))+x540);

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x541 = -1LL;
	uint16_t x542 = 7177U;
	uint16_t x543 = 1921U;
	int32_t x544 = -1;
	volatile int32_t t134 = 63948;

    t134 = ((x541>(x542!=x543))+x544);

    if (t134 != -1) { NG(); } else { ; }
	
}

void f135(void) {
    	static int8_t x545 = -1;
	int16_t x546 = 6;

    t135 = ((x545>(x546!=x547))+x548);

    if (t135 != 156082709) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint16_t x549 = UINT16_MAX;
	static volatile int8_t x550 = INT8_MIN;
	static uint16_t x551 = 20883U;
	uint8_t x552 = 5U;
	volatile int32_t t136 = 66;

    t136 = ((x549>(x550!=x551))+x552);

    if (t136 != 6) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint32_t x553 = 56902229U;
	volatile int8_t x554 = -1;
	int8_t x555 = INT8_MIN;
	static uint64_t x556 = UINT64_MAX;
	uint64_t t137 = 8143816452LLU;

    t137 = ((x553>(x554!=x555))+x556);

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x557 = 746;
	volatile int64_t x558 = INT64_MIN;
	int8_t x559 = INT8_MAX;
	int64_t x560 = INT64_MIN;
	static volatile int64_t t138 = -17239945171474LL;

    t138 = ((x557>(x558!=x559))+x560);

    if (t138 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x564 = INT32_MIN;
	volatile int32_t t139 = INT32_MIN;

    t139 = ((x561>(x562!=x563))+x564);

    if (t139 != INT32_MIN) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint32_t x565 = 501602524U;
	int8_t x566 = -1;
	int64_t x567 = INT64_MIN;
	uint16_t x568 = 44U;
	volatile int32_t t140 = 10241;

    t140 = ((x565>(x566!=x567))+x568);

    if (t140 != 45) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x569 = -1;
	int16_t x570 = -1;
	int64_t x571 = -1LL;
	volatile int32_t x572 = -46353880;
	volatile int32_t t141 = 797499918;

    t141 = ((x569>(x570!=x571))+x572);

    if (t141 != -46353880) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x573 = -18887182;
	uint8_t x574 = UINT8_MAX;
	volatile uint8_t x575 = 83U;
	uint64_t t142 = 1436LLU;

    t142 = ((x573>(x574!=x575))+x576);

    if (t142 != 3108286LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint16_t x577 = 447U;
	uint16_t x578 = 43U;
	int32_t x579 = -493657615;
	uint32_t x580 = 7138936U;
	static volatile uint32_t t143 = 17U;

    t143 = ((x577>(x578!=x579))+x580);

    if (t143 != 7138937U) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x581 = 24U;
	volatile int16_t x582 = 1007;
	uint64_t x584 = 319037751902LLU;
	volatile uint64_t t144 = 736209LLU;

    t144 = ((x581>(x582!=x583))+x584);

    if (t144 != 319037751903LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x586 = INT16_MIN;
	int8_t x587 = -1;
	int16_t x588 = 300;
	static int32_t t145 = -114647;

    t145 = ((x585>(x586!=x587))+x588);

    if (t145 != 301) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x589 = INT64_MAX;
	static volatile int8_t x590 = -3;
	volatile int64_t x591 = 823297397933923462LL;
	static int32_t x592 = -1;
	static volatile int32_t t146 = 104915406;

    t146 = ((x589>(x590!=x591))+x592);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int8_t x593 = INT8_MIN;
	int8_t x594 = 43;
	int8_t x595 = -1;
	int8_t x596 = 1;
	volatile int32_t t147 = 13;

    t147 = ((x593>(x594!=x595))+x596);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x597 = INT64_MAX;
	uint8_t x598 = UINT8_MAX;
	static int64_t x599 = 429188317334LL;
	volatile int32_t t148 = -1;

    t148 = ((x597>(x598!=x599))+x600);

    if (t148 != 32768) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x601 = INT16_MIN;
	uint32_t x602 = 67932564U;
	int64_t x603 = INT64_MAX;
	int16_t x604 = 174;
	volatile int32_t t149 = 58529151;

    t149 = ((x601>(x602!=x603))+x604);

    if (t149 != 174) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x605 = INT16_MIN;
	static int64_t x606 = -2633146LL;
	uint8_t x607 = UINT8_MAX;
	volatile int32_t x608 = -115885099;

    t150 = ((x605>(x606!=x607))+x608);

    if (t150 != -115885099) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x609 = UINT16_MAX;
	uint8_t x610 = 9U;
	static volatile uint64_t t151 = 174687640222691LLU;

    t151 = ((x609>(x610!=x611))+x612);

    if (t151 != 6LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x613 = INT16_MAX;

    t152 = ((x613>(x614!=x615))+x616);

    if (t152 != 1679019LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint8_t x617 = 12U;
	int16_t x618 = INT16_MAX;
	static int32_t x619 = INT32_MIN;
	uint32_t x620 = 223534371U;

    t153 = ((x617>(x618!=x619))+x620);

    if (t153 != 223534372U) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x623 = INT8_MIN;
	int64_t x624 = INT64_MIN;
	static volatile int64_t t154 = -141245852156LL;

    t154 = ((x621>(x622!=x623))+x624);

    if (t154 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint8_t x629 = 0U;
	int64_t x630 = 6783625LL;
	static volatile uint32_t x631 = UINT32_MAX;
	uint32_t x632 = 21422U;

    t155 = ((x629>(x630!=x631))+x632);

    if (t155 != 21422U) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int16_t x633 = 657;
	uint8_t x634 = UINT8_MAX;
	static int64_t x635 = 12985572LL;
	int32_t x636 = -1009302131;
	static volatile int32_t t156 = -190336;

    t156 = ((x633>(x634!=x635))+x636);

    if (t156 != -1009302130) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint16_t x640 = 5541U;
	static int32_t t157 = 15503011;

    t157 = ((x637>(x638!=x639))+x640);

    if (t157 != 5542) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x641 = -2998LL;
	uint32_t x643 = 3U;
	int32_t x644 = INT32_MIN;
	static int32_t t158 = INT32_MIN;

    t158 = ((x641>(x642!=x643))+x644);

    if (t158 != INT32_MIN) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x645 = INT8_MIN;
	static int8_t x646 = INT8_MAX;
	int64_t x648 = 8639945393549195LL;
	volatile int64_t t159 = 6523638469038728LL;

    t159 = ((x645>(x646!=x647))+x648);

    if (t159 != 8639945393549195LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static int16_t x652 = -10682;
	volatile int32_t t160 = 469394381;

    t160 = ((x649>(x650!=x651))+x652);

    if (t160 != -10682) { NG(); } else { ; }
	
}

void f161(void) {
    	static int8_t x655 = INT8_MAX;
	volatile int8_t x656 = -12;
	volatile int32_t t161 = 0;

    t161 = ((x653>(x654!=x655))+x656);

    if (t161 != -11) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x657 = -1LL;
	uint64_t x659 = 375955192993232218LLU;
	static volatile int32_t x660 = -1;
	int32_t t162 = -26261;

    t162 = ((x657>(x658!=x659))+x660);

    if (t162 != -1) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x662 = 699534421;
	uint16_t x664 = 83U;

    t163 = ((x661>(x662!=x663))+x664);

    if (t163 != 84) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x665 = INT32_MAX;
	volatile int64_t x666 = -70479655425660616LL;
	static int64_t x667 = 916860311874852025LL;
	volatile uint64_t x668 = UINT64_MAX;
	static volatile uint64_t t164 = 3466475333LLU;

    t164 = ((x665>(x666!=x667))+x668);

    if (t164 != 0LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static int32_t x669 = -33;
	uint8_t x670 = 0U;
	uint64_t x671 = 242LLU;
	int8_t x672 = INT8_MIN;
	int32_t t165 = -64576921;

    t165 = ((x669>(x670!=x671))+x672);

    if (t165 != -128) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x673 = INT32_MAX;
	int8_t x676 = INT8_MIN;
	static volatile int32_t t166 = 15683;

    t166 = ((x673>(x674!=x675))+x676);

    if (t166 != -127) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x677 = INT16_MAX;
	static int16_t x678 = -1;
	static int16_t x679 = 15975;
	int8_t x680 = -1;
	volatile int32_t t167 = 668942;

    t167 = ((x677>(x678!=x679))+x680);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x681 = UINT64_MAX;
	int16_t x682 = -2167;
	static uint8_t x683 = UINT8_MAX;
	int32_t t168 = 52;

    t168 = ((x681>(x682!=x683))+x684);

    if (t168 != 27) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x685 = INT64_MAX;
	int64_t x686 = -1LL;
	static uint16_t x687 = 0U;
	volatile int8_t x688 = -21;
	volatile int32_t t169 = 30602055;

    t169 = ((x685>(x686!=x687))+x688);

    if (t169 != -20) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile uint64_t x689 = UINT64_MAX;
	uint8_t x690 = UINT8_MAX;
	int32_t x691 = INT32_MIN;
	volatile uint64_t t170 = 121024LLU;

    t170 = ((x689>(x690!=x691))+x692);

    if (t170 != 42525083LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x697 = INT64_MIN;
	int8_t x699 = -6;
	uint32_t x700 = 91U;

    t171 = ((x697>(x698!=x699))+x700);

    if (t171 != 91U) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x701 = 1;
	volatile int8_t x702 = INT8_MIN;
	uint8_t x703 = UINT8_MAX;
	static volatile int32_t t172 = -826;

    t172 = ((x701>(x702!=x703))+x704);

    if (t172 != 32767) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x705 = 1;
	volatile int8_t x707 = INT8_MIN;
	volatile uint64_t x708 = UINT64_MAX;
	volatile uint64_t t173 = UINT64_MAX;

    t173 = ((x705>(x706!=x707))+x708);

    if (t173 != UINT64_MAX) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int64_t x709 = INT64_MAX;
	uint32_t x710 = UINT32_MAX;
	volatile int32_t x711 = -1;
	int16_t x712 = -24;
	int32_t t174 = 123;

    t174 = ((x709>(x710!=x711))+x712);

    if (t174 != -23) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x713 = INT16_MIN;
	static int64_t x715 = INT64_MAX;
	static int32_t x716 = INT32_MIN;
	volatile int32_t t175 = INT32_MIN;

    t175 = ((x713>(x714!=x715))+x716);

    if (t175 != INT32_MIN) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x717 = INT32_MIN;
	uint16_t x720 = 18240U;
	volatile int32_t t176 = 3776;

    t176 = ((x717>(x718!=x719))+x720);

    if (t176 != 18240) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile int32_t x721 = INT32_MIN;
	uint32_t x722 = UINT32_MAX;
	uint32_t x723 = 566138787U;
	int32_t x724 = -1;
	volatile int32_t t177 = -501694;

    t177 = ((x721>(x722!=x723))+x724);

    if (t177 != -1) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x725 = -1;
	static int64_t x727 = INT64_MAX;
	uint32_t x728 = 100504382U;
	static uint32_t t178 = 847U;

    t178 = ((x725>(x726!=x727))+x728);

    if (t178 != 100504382U) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x729 = INT8_MIN;
	int32_t x731 = -1;
	volatile int32_t t179 = 1273;

    t179 = ((x729>(x730!=x731))+x732);

    if (t179 != 32767) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x733 = -11;
	int8_t x734 = INT8_MAX;
	static volatile int8_t x736 = INT8_MIN;
	int32_t t180 = 3698;

    t180 = ((x733>(x734!=x735))+x736);

    if (t180 != -128) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x737 = 287070376;
	int8_t x739 = INT8_MAX;
	int32_t x740 = INT32_MIN;
	int32_t t181 = -464519011;

    t181 = ((x737>(x738!=x739))+x740);

    if (t181 != -2147483647) { NG(); } else { ; }
	
}

void f182(void) {
    	static int16_t x741 = INT16_MIN;
	int8_t x743 = -1;
	int64_t x744 = INT64_MAX;
	int64_t t182 = INT64_MAX;

    t182 = ((x741>(x742!=x743))+x744);

    if (t182 != INT64_MAX) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x745 = INT64_MAX;
	int32_t x747 = INT32_MAX;
	int32_t x748 = 285;
	int32_t t183 = -270;

    t183 = ((x745>(x746!=x747))+x748);

    if (t183 != 286) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x749 = -354270;
	uint64_t x750 = 31436643212826LLU;
	static int64_t x752 = INT64_MIN;

    t184 = ((x749>(x750!=x751))+x752);

    if (t184 != INT64_MIN) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x753 = INT64_MIN;
	int8_t x754 = -1;
	int64_t x755 = 16214LL;
	int64_t t185 = INT64_MAX;

    t185 = ((x753>(x754!=x755))+x756);

    if (t185 != INT64_MAX) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int32_t x757 = INT32_MIN;
	int8_t x758 = INT8_MAX;
	int16_t x759 = INT16_MIN;
	int16_t x760 = INT16_MIN;

    t186 = ((x757>(x758!=x759))+x760);

    if (t186 != -32768) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x761 = -1LL;
	int32_t x762 = INT32_MIN;
	volatile int8_t x764 = INT8_MAX;
	int32_t t187 = 14;

    t187 = ((x761>(x762!=x763))+x764);

    if (t187 != 127) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x765 = 247LLU;
	int16_t x766 = INT16_MIN;
	static int64_t x767 = -1LL;
	int16_t x768 = 2;
	volatile int32_t t188 = 716563139;

    t188 = ((x765>(x766!=x767))+x768);

    if (t188 != 3) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x769 = 152U;
	int8_t x770 = 0;
	volatile int32_t x771 = INT32_MIN;
	uint8_t x772 = 18U;
	volatile int32_t t189 = 2391024;

    t189 = ((x769>(x770!=x771))+x772);

    if (t189 != 19) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile int32_t x774 = -1;
	int32_t x775 = INT32_MIN;
	int8_t x776 = -1;
	int32_t t190 = 6003725;

    t190 = ((x773>(x774!=x775))+x776);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile uint32_t x777 = 11248U;
	int8_t x778 = -1;
	static int64_t x779 = -1LL;
	static int16_t x780 = 3744;
	static volatile int32_t t191 = 1;

    t191 = ((x777>(x778!=x779))+x780);

    if (t191 != 3745) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x781 = INT8_MIN;
	static uint32_t x782 = 1410207U;
	static int64_t x783 = -1309761360261LL;
	uint16_t x784 = 309U;
	static volatile int32_t t192 = 23993226;

    t192 = ((x781>(x782!=x783))+x784);

    if (t192 != 309) { NG(); } else { ; }
	
}

void f193(void) {
    	static int64_t x785 = INT64_MIN;
	static uint64_t x786 = UINT64_MAX;
	static int16_t x787 = -1;
	volatile int32_t t193 = 786794795;

    t193 = ((x785>(x786!=x787))+x788);

    if (t193 != -128) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x789 = -1;
	int64_t x790 = 82190244LL;
	uint8_t x791 = 3U;
	uint64_t x792 = UINT64_MAX;
	uint64_t t194 = UINT64_MAX;

    t194 = ((x789>(x790!=x791))+x792);

    if (t194 != UINT64_MAX) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x794 = UINT8_MAX;
	uint8_t x796 = 4U;

    t195 = ((x793>(x794!=x795))+x796);

    if (t195 != 4) { NG(); } else { ; }
	
}

void f196(void) {
    	static int32_t x798 = -1;
	uint64_t x799 = 0LLU;
	int64_t x800 = INT64_MIN;
	volatile int64_t t196 = -45520731008LL;

    t196 = ((x797>(x798!=x799))+x800);

    if (t196 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x801 = UINT32_MAX;
	int32_t x802 = INT32_MIN;
	int32_t x803 = -1;
	volatile uint8_t x804 = UINT8_MAX;
	static volatile int32_t t197 = 0;

    t197 = ((x801>(x802!=x803))+x804);

    if (t197 != 256) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x805 = 190;
	volatile int16_t x806 = INT16_MIN;
	volatile int32_t t198 = -11;

    t198 = ((x805>(x806!=x807))+x808);

    if (t198 != -32767) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x809 = -1;
	int16_t x810 = INT16_MAX;
	uint32_t x812 = 10U;
	uint32_t t199 = 3721U;

    t199 = ((x809>(x810!=x811))+x812);

    if (t199 != 10U) { NG(); } else { ; }
	
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

