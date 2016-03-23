
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

static volatile uint8_t x1 = 13U;
uint8_t x3 = 1U;
uint8_t x5 = 17U;
static int32_t x7 = INT32_MIN;
int32_t t1 = -520305;
int32_t x10 = -30490875;
static volatile uint16_t x14 = 1224U;
volatile int32_t t5 = -7805682;
int16_t x27 = -106;
int16_t x37 = INT16_MAX;
int16_t x42 = INT16_MIN;
uint16_t x46 = 694U;
volatile int64_t x49 = INT64_MIN;
int64_t x51 = INT64_MIN;
static uint32_t x59 = UINT32_MAX;
int16_t x72 = -1;
uint64_t x74 = UINT64_MAX;
volatile int32_t t18 = -49065348;
static volatile int32_t x78 = INT32_MIN;
uint8_t x79 = 48U;
int32_t t22 = -11061044;
static volatile int8_t x104 = -1;
int16_t x105 = 341;
uint8_t x110 = 114U;
volatile int64_t x111 = INT64_MAX;
int32_t t27 = 78;
uint64_t x114 = 3512829LLU;
int16_t x115 = 181;
uint32_t x120 = 21954U;
int32_t x121 = INT32_MIN;
int64_t x125 = -4566LL;
int32_t x128 = INT32_MIN;
volatile int32_t t32 = 10;
volatile int32_t x133 = 2428267;
int64_t x135 = INT64_MAX;
int32_t t33 = 7;
static volatile int8_t x138 = 1;
int32_t t34 = 6709;
volatile int32_t t35 = -276916249;
int64_t x146 = INT64_MAX;
int8_t x152 = INT8_MIN;
int8_t x153 = -42;
int32_t t38 = -20330;
int8_t x165 = INT8_MIN;
int16_t x171 = INT16_MAX;
static int32_t t42 = -16208;
static int32_t x174 = 6563;
static volatile int16_t x177 = INT16_MAX;
uint64_t x179 = 4478384526892161LLU;
int32_t x183 = INT32_MAX;
volatile int32_t t45 = -200397;
uint16_t x185 = 0U;
uint16_t x186 = 3U;
uint16_t x187 = 7U;
static uint16_t x189 = UINT16_MAX;
volatile int32_t t47 = -2;
int64_t x199 = INT64_MIN;
int16_t x200 = INT16_MIN;
int64_t x210 = -32367364888LL;
int16_t x211 = INT16_MAX;
int16_t x217 = 14;
static int8_t x219 = INT8_MIN;
int64_t x223 = 26038780903163LL;
volatile uint16_t x231 = 13864U;
int8_t x234 = -1;
int32_t x235 = -314;
int32_t t61 = 3024;
volatile int16_t x250 = INT16_MIN;
uint32_t x256 = 483707963U;
int32_t t63 = 0;
volatile int64_t x259 = INT64_MIN;
uint8_t x261 = UINT8_MAX;
int8_t x265 = -1;
volatile int32_t t66 = 3;
int8_t x269 = 8;
int32_t t67 = 179838;
uint64_t x275 = UINT64_MAX;
int8_t x280 = INT8_MIN;
uint32_t x283 = UINT32_MAX;
volatile int32_t t71 = -116;
static int8_t x294 = -1;
static int8_t x296 = -1;
static uint8_t x298 = 3U;
static uint16_t x301 = 1650U;
int64_t x308 = INT64_MAX;
int64_t x314 = INT64_MAX;
int64_t x316 = 130571668LL;
volatile int32_t t79 = 959133593;
int32_t t80 = -1;
volatile int32_t t81 = -98562;
int16_t x329 = INT16_MIN;
int16_t x334 = -1;
volatile uint64_t x338 = 1607467827LLU;
int16_t x355 = -1;
static int32_t t88 = -7770;
volatile int32_t t89 = -1318850;
int8_t x362 = -1;
volatile int64_t x363 = INT64_MIN;
static volatile int32_t t90 = 6768631;
volatile int64_t x371 = 905491648086767LL;
volatile int32_t x377 = INT32_MIN;
int8_t x384 = -3;
int16_t x390 = 6;
uint8_t x399 = 1U;
static int64_t x404 = -2494085491719821LL;
static int32_t x412 = -1;
int32_t x414 = -253382;
volatile int32_t x415 = 187;
int16_t x423 = -3274;
uint32_t x430 = UINT32_MAX;
volatile uint16_t x431 = 234U;
int32_t x432 = 2973438;
int64_t x438 = -1LL;
uint64_t x446 = UINT64_MAX;
int32_t t113 = -1;
int16_t x459 = INT16_MIN;
int64_t x464 = 153267LL;
volatile int32_t t116 = 18445;
volatile int32_t x470 = INT32_MIN;
static volatile int8_t x473 = INT8_MIN;
volatile int64_t x474 = INT64_MIN;
volatile int32_t x475 = INT32_MIN;
int64_t x478 = 1496014898976618LL;
volatile int32_t t119 = 0;
volatile int32_t x482 = INT32_MAX;
int32_t x488 = -58247769;
uint16_t x491 = 5U;
int16_t x492 = INT16_MAX;
int32_t t125 = -14413;
int32_t t126 = 10003;
static int16_t x509 = 629;
static uint32_t x514 = 513408071U;
static int32_t x516 = INT32_MIN;
static volatile int32_t x533 = INT32_MAX;
int32_t x538 = INT32_MAX;
int8_t x539 = INT8_MIN;
uint64_t x548 = 10036693416LLU;
static int8_t x551 = INT8_MAX;
static uint16_t x557 = UINT16_MAX;
int32_t x562 = 737054542;
uint8_t x568 = 57U;
static volatile uint32_t x572 = 101U;
volatile int32_t t142 = 1;
uint32_t x574 = 8U;
volatile int64_t x580 = INT64_MAX;
int16_t x587 = 5800;
int8_t x591 = -1;
uint8_t x592 = UINT8_MAX;
uint8_t x603 = 13U;
int16_t x604 = -1;
int8_t x612 = -1;
volatile int32_t t152 = -834138491;
static volatile int64_t x618 = INT64_MIN;
static volatile int32_t t154 = 7810;
volatile int16_t x621 = -1;
volatile int32_t t155 = 824;
int64_t x626 = -1LL;
int32_t x629 = INT32_MIN;
volatile uint32_t x630 = 8920U;
int32_t x632 = -1;
static int64_t x634 = INT64_MIN;
int32_t x639 = INT32_MIN;
int16_t x645 = 13;
int32_t t161 = 414748;
int32_t t162 = -734;
volatile int64_t x655 = INT64_MIN;
int64_t x664 = -64454799519367LL;
static uint32_t x671 = 823743U;
uint8_t x672 = 2U;
uint64_t x675 = 9LLU;
int32_t x676 = INT32_MAX;
volatile uint16_t x679 = 5U;
static int32_t x683 = -1;
int32_t t170 = 336;
volatile int32_t x685 = INT32_MIN;
int16_t x691 = INT16_MIN;
int16_t x693 = 12683;
int8_t x697 = -1;
static int8_t x707 = INT8_MAX;
static volatile int64_t x709 = INT64_MAX;
int16_t x713 = -1;
uint8_t x715 = UINT8_MAX;
int32_t t178 = 0;
uint16_t x722 = 6U;
int64_t x726 = -1LL;
int32_t t181 = -939405826;
int16_t x730 = 6307;
int64_t x733 = INT64_MAX;
int32_t t183 = 9650673;
static volatile int16_t x737 = 103;
int16_t x738 = 0;
int64_t x741 = INT64_MIN;
uint32_t x744 = UINT32_MAX;
int64_t x751 = 263548844774LL;
static int32_t t187 = 3;
static int32_t x757 = INT32_MIN;
uint32_t x758 = 28U;
static uint16_t x761 = UINT16_MAX;
int64_t x763 = INT64_MIN;
volatile uint32_t x772 = 14773U;
int32_t x775 = INT32_MIN;
static int16_t x776 = INT16_MAX;
int8_t x778 = -1;
int32_t x788 = INT32_MIN;
static volatile int32_t t196 = -60;
int64_t x789 = INT64_MAX;
static uint16_t x792 = 33U;
volatile uint32_t x796 = 1U;


void f0(void) {
    	int64_t x2 = 148832916735565LL;
	volatile uint16_t x4 = UINT16_MAX;
	int32_t t0 = -3108710;

    t0 = ((x1%(x2|x3))==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x6 = INT64_MIN;
	int8_t x8 = INT8_MAX;

    t1 = ((x5%(x6|x7))==x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = 383U;
	int64_t x11 = INT64_MAX;
	int64_t x12 = INT64_MIN;
	volatile int32_t t2 = 375;

    t2 = ((x9%(x10|x11))==x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint32_t x13 = 108196U;
	static int32_t x15 = -1;
	volatile int8_t x16 = INT8_MIN;
	volatile int32_t t3 = -235;

    t3 = ((x13%(x14|x15))==x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int16_t x17 = INT16_MAX;
	int16_t x18 = INT16_MIN;
	uint32_t x19 = 2788096U;
	static int16_t x20 = INT16_MIN;
	int32_t t4 = 524256329;

    t4 = ((x17%(x18|x19))==x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = -19621843562527698LL;
	int16_t x22 = INT16_MAX;
	static uint8_t x23 = 2U;
	static int16_t x24 = -245;

    t5 = ((x21%(x22|x23))==x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = -103874LL;
	static int16_t x26 = INT16_MIN;
	int16_t x28 = INT16_MIN;
	int32_t t6 = 11;

    t6 = ((x25%(x26|x27))==x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = -2035385;
	int16_t x30 = 785;
	int8_t x31 = INT8_MIN;
	int16_t x32 = INT16_MIN;
	static volatile int32_t t7 = -629356873;

    t7 = ((x29%(x30|x31))==x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x33 = INT16_MAX;
	int64_t x34 = -1LL;
	int32_t x35 = INT32_MAX;
	volatile int32_t x36 = -4525;
	int32_t t8 = -932606;

    t8 = ((x33%(x34|x35))==x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x38 = UINT32_MAX;
	int8_t x39 = INT8_MIN;
	int32_t x40 = -1;
	volatile int32_t t9 = -1;

    t9 = ((x37%(x38|x39))==x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x41 = 142U;
	static volatile int64_t x43 = -1LL;
	int64_t x44 = INT64_MAX;
	static volatile int32_t t10 = 31;

    t10 = ((x41%(x42|x43))==x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = INT8_MIN;
	int16_t x47 = 1787;
	static int32_t x48 = -1;
	int32_t t11 = 1021;

    t11 = ((x45%(x46|x47))==x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x50 = -29;
	uint8_t x52 = 10U;
	int32_t t12 = 14;

    t12 = ((x49%(x50|x51))==x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = INT8_MIN;
	uint32_t x54 = 20765U;
	volatile int8_t x55 = INT8_MIN;
	int8_t x56 = -18;
	int32_t t13 = 4144209;

    t13 = ((x53%(x54|x55))==x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint16_t x57 = 6U;
	uint16_t x58 = 17U;
	volatile uint16_t x60 = 3763U;
	int32_t t14 = 17;

    t14 = ((x57%(x58|x59))==x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = INT32_MAX;
	int16_t x62 = INT16_MIN;
	static uint8_t x63 = UINT8_MAX;
	int16_t x64 = -1;
	volatile int32_t t15 = -3;

    t15 = ((x61%(x62|x63))==x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint64_t x65 = 537155590733272LLU;
	int32_t x66 = INT32_MIN;
	int64_t x67 = INT64_MAX;
	volatile int8_t x68 = -1;
	volatile int32_t t16 = -2919;

    t16 = ((x65%(x66|x67))==x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x69 = UINT32_MAX;
	int8_t x70 = 5;
	static int32_t x71 = INT32_MAX;
	static volatile int32_t t17 = 1424;

    t17 = ((x69%(x70|x71))==x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = INT32_MIN;
	uint8_t x75 = 49U;
	uint16_t x76 = UINT16_MAX;

    t18 = ((x73%(x74|x75))==x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x77 = -544;
	volatile uint32_t x80 = UINT32_MAX;
	int32_t t19 = 0;

    t19 = ((x77%(x78|x79))==x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int32_t x81 = 11921;
	volatile int32_t x82 = -147929591;
	uint64_t x83 = UINT64_MAX;
	volatile uint16_t x84 = UINT16_MAX;
	int32_t t20 = -59608;

    t20 = ((x81%(x82|x83))==x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x85 = INT32_MIN;
	volatile int64_t x86 = -1LL;
	int16_t x87 = INT16_MIN;
	int8_t x88 = -1;
	static volatile int32_t t21 = 7060350;

    t21 = ((x85%(x86|x87))==x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = -61;
	int32_t x90 = -12;
	static volatile int8_t x91 = INT8_MIN;
	int64_t x92 = -3460119876057318863LL;

    t22 = ((x89%(x90|x91))==x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x93 = 37778496672LLU;
	uint64_t x94 = 7416LLU;
	int64_t x95 = INT64_MIN;
	int8_t x96 = INT8_MIN;
	volatile int32_t t23 = -510;

    t23 = ((x93%(x94|x95))==x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x97 = 4242952114LLU;
	volatile int32_t x98 = INT32_MAX;
	int64_t x99 = -245275489119LL;
	int8_t x100 = INT8_MAX;
	volatile int32_t t24 = 431070;

    t24 = ((x97%(x98|x99))==x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x101 = 2919360947663502908LLU;
	int16_t x102 = INT16_MIN;
	static uint32_t x103 = 40386912U;
	volatile int32_t t25 = -17194974;

    t25 = ((x101%(x102|x103))==x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x106 = INT64_MAX;
	static int16_t x107 = -1;
	uint32_t x108 = 287452U;
	volatile int32_t t26 = 40036208;

    t26 = ((x105%(x106|x107))==x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int64_t x109 = INT64_MAX;
	int8_t x112 = INT8_MIN;

    t27 = ((x109%(x110|x111))==x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = INT8_MAX;
	int64_t x116 = INT64_MIN;
	int32_t t28 = 6666014;

    t28 = ((x113%(x114|x115))==x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int32_t x117 = -1;
	int64_t x118 = -1LL;
	int64_t x119 = INT64_MAX;
	int32_t t29 = 0;

    t29 = ((x117%(x118|x119))==x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x122 = -1;
	uint32_t x123 = 177888U;
	volatile uint64_t x124 = UINT64_MAX;
	static volatile int32_t t30 = -150173;

    t30 = ((x121%(x122|x123))==x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int8_t x126 = 13;
	static volatile uint8_t x127 = 3U;
	int32_t t31 = -1813634;

    t31 = ((x125%(x126|x127))==x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x129 = UINT16_MAX;
	static int16_t x130 = INT16_MAX;
	uint8_t x131 = 0U;
	volatile uint16_t x132 = 14595U;

    t32 = ((x129%(x130|x131))==x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x134 = 12556LLU;
	static int8_t x136 = 1;

    t33 = ((x133%(x134|x135))==x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x137 = 274463LLU;
	int64_t x139 = 3913179140393264206LL;
	int8_t x140 = -1;

    t34 = ((x137%(x138|x139))==x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x141 = 996827854372890LLU;
	int32_t x142 = INT32_MIN;
	int16_t x143 = INT16_MIN;
	int64_t x144 = INT64_MIN;

    t35 = ((x141%(x142|x143))==x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = 58;
	int64_t x147 = INT64_MAX;
	uint64_t x148 = 134LLU;
	static int32_t t36 = 0;

    t36 = ((x145%(x146|x147))==x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint8_t x149 = UINT8_MAX;
	int8_t x150 = INT8_MIN;
	int8_t x151 = INT8_MAX;
	volatile int32_t t37 = -1;

    t37 = ((x149%(x150|x151))==x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x154 = UINT64_MAX;
	int8_t x155 = INT8_MIN;
	volatile uint8_t x156 = UINT8_MAX;

    t38 = ((x153%(x154|x155))==x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x157 = 443U;
	int16_t x158 = 2039;
	int16_t x159 = INT16_MIN;
	volatile int8_t x160 = -1;
	volatile int32_t t39 = -8587470;

    t39 = ((x157%(x158|x159))==x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t x161 = INT64_MIN;
	static volatile int64_t x162 = -59753857LL;
	int16_t x163 = 0;
	uint16_t x164 = UINT16_MAX;
	int32_t t40 = 792;

    t40 = ((x161%(x162|x163))==x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x166 = INT16_MIN;
	int16_t x167 = INT16_MIN;
	int16_t x168 = 63;
	int32_t t41 = -5067;

    t41 = ((x165%(x166|x167))==x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint8_t x169 = UINT8_MAX;
	volatile int16_t x170 = INT16_MIN;
	int8_t x172 = -1;

    t42 = ((x169%(x170|x171))==x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x173 = UINT32_MAX;
	int32_t x175 = INT32_MIN;
	volatile uint16_t x176 = 160U;
	volatile int32_t t43 = -888477444;

    t43 = ((x173%(x174|x175))==x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x178 = -10562LL;
	uint64_t x180 = UINT64_MAX;
	static volatile int32_t t44 = -1;

    t44 = ((x177%(x178|x179))==x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int64_t x181 = -15072365LL;
	uint32_t x182 = UINT32_MAX;
	volatile int8_t x184 = -12;

    t45 = ((x181%(x182|x183))==x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x188 = INT64_MIN;
	int32_t t46 = 13;

    t46 = ((x185%(x186|x187))==x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x190 = INT8_MIN;
	uint8_t x191 = 84U;
	int8_t x192 = INT8_MIN;

    t47 = ((x189%(x190|x191))==x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int64_t x193 = INT64_MAX;
	int16_t x194 = -1;
	volatile int32_t x195 = INT32_MIN;
	uint64_t x196 = 8LLU;
	volatile int32_t t48 = -4480174;

    t48 = ((x193%(x194|x195))==x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static int64_t x197 = -7076096072842LL;
	int16_t x198 = -112;
	int32_t t49 = 223761;

    t49 = ((x197%(x198|x199))==x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x201 = INT16_MIN;
	static int32_t x202 = 17365821;
	static uint8_t x203 = UINT8_MAX;
	int64_t x204 = -1LL;
	volatile int32_t t50 = -52;

    t50 = ((x201%(x202|x203))==x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x205 = 125736U;
	int64_t x206 = 26242250LL;
	int32_t x207 = INT32_MAX;
	int16_t x208 = -1;
	volatile int32_t t51 = -122665124;

    t51 = ((x205%(x206|x207))==x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x209 = INT32_MIN;
	static volatile int16_t x212 = -15;
	int32_t t52 = 54555;

    t52 = ((x209%(x210|x211))==x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x213 = INT64_MIN;
	static volatile int64_t x214 = 2020418778173LL;
	static uint8_t x215 = UINT8_MAX;
	uint64_t x216 = UINT64_MAX;
	int32_t t53 = 612785;

    t53 = ((x213%(x214|x215))==x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x218 = INT16_MIN;
	int64_t x220 = INT64_MAX;
	static int32_t t54 = -386;

    t54 = ((x217%(x218|x219))==x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x221 = 95;
	int64_t x222 = INT64_MIN;
	int64_t x224 = -1LL;
	volatile int32_t t55 = -900;

    t55 = ((x221%(x222|x223))==x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x225 = INT16_MIN;
	int16_t x226 = INT16_MAX;
	static uint8_t x227 = UINT8_MAX;
	int32_t x228 = INT32_MAX;
	static volatile int32_t t56 = 6;

    t56 = ((x225%(x226|x227))==x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x229 = INT32_MAX;
	uint16_t x230 = 3020U;
	volatile int16_t x232 = INT16_MIN;
	int32_t t57 = -21;

    t57 = ((x229%(x230|x231))==x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile int64_t x233 = INT64_MIN;
	uint16_t x236 = 60U;
	static volatile int32_t t58 = -7627;

    t58 = ((x233%(x234|x235))==x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x237 = INT64_MAX;
	volatile uint8_t x238 = 24U;
	int64_t x239 = INT64_MIN;
	volatile int64_t x240 = INT64_MAX;
	int32_t t59 = 873;

    t59 = ((x237%(x238|x239))==x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x241 = INT32_MIN;
	uint64_t x242 = UINT64_MAX;
	uint16_t x243 = UINT16_MAX;
	int32_t x244 = -1;
	int32_t t60 = -1;

    t60 = ((x241%(x242|x243))==x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x245 = INT8_MIN;
	volatile int32_t x246 = INT32_MAX;
	int16_t x247 = -1;
	int64_t x248 = 78741094LL;

    t61 = ((x245%(x246|x247))==x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x249 = INT8_MAX;
	volatile int32_t x251 = INT32_MIN;
	int16_t x252 = -1;
	int32_t t62 = -9813888;

    t62 = ((x249%(x250|x251))==x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x253 = -60277783101LL;
	int32_t x254 = INT32_MAX;
	uint64_t x255 = 61LLU;

    t63 = ((x253%(x254|x255))==x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x257 = 14U;
	static volatile int32_t x258 = INT32_MIN;
	int64_t x260 = -955LL;
	volatile int32_t t64 = 752907111;

    t64 = ((x257%(x258|x259))==x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int8_t x262 = INT8_MIN;
	volatile int32_t x263 = INT32_MIN;
	uint8_t x264 = UINT8_MAX;
	int32_t t65 = 6;

    t65 = ((x261%(x262|x263))==x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x266 = -1;
	volatile int32_t x267 = INT32_MIN;
	volatile uint8_t x268 = 10U;

    t66 = ((x265%(x266|x267))==x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int32_t x270 = -1;
	int8_t x271 = -51;
	int64_t x272 = INT64_MIN;

    t67 = ((x269%(x270|x271))==x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int32_t x273 = INT32_MAX;
	int32_t x274 = INT32_MIN;
	uint32_t x276 = UINT32_MAX;
	int32_t t68 = -13752216;

    t68 = ((x273%(x274|x275))==x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x277 = 59U;
	int64_t x278 = INT64_MIN;
	int32_t x279 = INT32_MIN;
	volatile int32_t t69 = -10255;

    t69 = ((x277%(x278|x279))==x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = INT64_MAX;
	int8_t x282 = INT8_MIN;
	int64_t x284 = -1783LL;
	volatile int32_t t70 = 1;

    t70 = ((x281%(x282|x283))==x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint8_t x285 = 6U;
	volatile uint32_t x286 = 107U;
	int16_t x287 = INT16_MIN;
	volatile uint16_t x288 = 283U;

    t71 = ((x285%(x286|x287))==x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint32_t x289 = 50335605U;
	int16_t x290 = INT16_MIN;
	int64_t x291 = INT64_MAX;
	int8_t x292 = -11;
	int32_t t72 = -386475858;

    t72 = ((x289%(x290|x291))==x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int16_t x293 = INT16_MIN;
	int32_t x295 = -3;
	static int32_t t73 = -75641095;

    t73 = ((x293%(x294|x295))==x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x297 = INT8_MIN;
	int64_t x299 = INT64_MIN;
	volatile int64_t x300 = INT64_MAX;
	volatile int32_t t74 = -4;

    t74 = ((x297%(x298|x299))==x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x302 = 24266165U;
	int8_t x303 = INT8_MIN;
	uint16_t x304 = 3861U;
	volatile int32_t t75 = -11734;

    t75 = ((x301%(x302|x303))==x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x305 = 0U;
	int32_t x306 = 98018925;
	int32_t x307 = 450;
	int32_t t76 = 48;

    t76 = ((x305%(x306|x307))==x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int32_t x309 = INT32_MIN;
	static int32_t x310 = -1;
	int16_t x311 = INT16_MIN;
	int16_t x312 = INT16_MIN;
	int32_t t77 = -101445;

    t77 = ((x309%(x310|x311))==x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x313 = INT8_MIN;
	int32_t x315 = INT32_MIN;
	volatile int32_t t78 = 0;

    t78 = ((x313%(x314|x315))==x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x317 = 2U;
	static volatile int8_t x318 = 1;
	volatile int32_t x319 = -1;
	uint16_t x320 = 8U;

    t79 = ((x317%(x318|x319))==x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x321 = UINT32_MAX;
	int16_t x322 = INT16_MIN;
	int8_t x323 = INT8_MIN;
	uint16_t x324 = 16651U;

    t80 = ((x321%(x322|x323))==x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x325 = INT8_MIN;
	static uint8_t x326 = 88U;
	int64_t x327 = -720903LL;
	int8_t x328 = -34;

    t81 = ((x325%(x326|x327))==x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x330 = INT8_MIN;
	static int64_t x331 = -1LL;
	volatile int8_t x332 = 1;
	int32_t t82 = 7;

    t82 = ((x329%(x330|x331))==x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint16_t x333 = 1645U;
	uint64_t x335 = UINT64_MAX;
	volatile int32_t x336 = INT32_MIN;
	volatile int32_t t83 = -835005041;

    t83 = ((x333%(x334|x335))==x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x337 = -3;
	int32_t x339 = INT32_MIN;
	static volatile int8_t x340 = -1;
	volatile int32_t t84 = 184401654;

    t84 = ((x337%(x338|x339))==x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x341 = INT8_MAX;
	static uint32_t x342 = UINT32_MAX;
	uint32_t x343 = 333656504U;
	static int32_t x344 = INT32_MAX;
	volatile int32_t t85 = 1056195330;

    t85 = ((x341%(x342|x343))==x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x345 = INT8_MIN;
	int16_t x346 = INT16_MAX;
	volatile int32_t x347 = -1;
	int8_t x348 = -1;
	static volatile int32_t t86 = 47885031;

    t86 = ((x345%(x346|x347))==x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x349 = -248506166;
	int8_t x350 = -3;
	static int32_t x351 = 2;
	int8_t x352 = -3;
	volatile int32_t t87 = -1241;

    t87 = ((x349%(x350|x351))==x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile int32_t x353 = INT32_MIN;
	int32_t x354 = INT32_MIN;
	volatile int32_t x356 = INT32_MIN;

    t88 = ((x353%(x354|x355))==x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x357 = INT8_MAX;
	int64_t x358 = 121LL;
	int64_t x359 = -251693373LL;
	int16_t x360 = 1;

    t89 = ((x357%(x358|x359))==x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x361 = INT8_MIN;
	uint32_t x364 = 8987U;

    t90 = ((x361%(x362|x363))==x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int16_t x365 = -258;
	int32_t x366 = INT32_MAX;
	volatile int16_t x367 = -2272;
	int64_t x368 = 8643868LL;
	static volatile int32_t t91 = -21;

    t91 = ((x365%(x366|x367))==x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x369 = -7;
	static int8_t x370 = 1;
	uint16_t x372 = UINT16_MAX;
	volatile int32_t t92 = -1532;

    t92 = ((x369%(x370|x371))==x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x373 = UINT32_MAX;
	static uint64_t x374 = 8956878190386930LLU;
	volatile uint8_t x375 = 1U;
	static uint16_t x376 = UINT16_MAX;
	static volatile int32_t t93 = 5;

    t93 = ((x373%(x374|x375))==x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile uint32_t x378 = 54181U;
	uint64_t x379 = 921473536132597LLU;
	static int32_t x380 = INT32_MAX;
	volatile int32_t t94 = -3;

    t94 = ((x377%(x378|x379))==x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int32_t x381 = INT32_MIN;
	uint16_t x382 = 13U;
	int8_t x383 = -1;
	static int32_t t95 = 1;

    t95 = ((x381%(x382|x383))==x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x385 = 2282315375460LL;
	static int16_t x386 = INT16_MAX;
	static int32_t x387 = -1;
	int64_t x388 = 5030015986697LL;
	volatile int32_t t96 = -674533;

    t96 = ((x385%(x386|x387))==x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int32_t x389 = -1;
	volatile int16_t x391 = INT16_MIN;
	int8_t x392 = 48;
	int32_t t97 = -78;

    t97 = ((x389%(x390|x391))==x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x393 = 16360468;
	int64_t x394 = -69900294533902LL;
	static uint16_t x395 = 0U;
	uint64_t x396 = 46937844499072LLU;
	volatile int32_t t98 = -40731;

    t98 = ((x393%(x394|x395))==x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x397 = 2LLU;
	static int32_t x398 = INT32_MAX;
	int16_t x400 = 1363;
	int32_t t99 = -980023172;

    t99 = ((x397%(x398|x399))==x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x401 = INT32_MAX;
	uint16_t x402 = UINT16_MAX;
	int16_t x403 = -7571;
	volatile int32_t t100 = 1;

    t100 = ((x401%(x402|x403))==x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int64_t x405 = -453527382561618LL;
	uint64_t x406 = 199099886LLU;
	int64_t x407 = -1LL;
	uint64_t x408 = UINT64_MAX;
	int32_t t101 = 2111;

    t101 = ((x405%(x406|x407))==x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x409 = 22U;
	int32_t x410 = INT32_MAX;
	int32_t x411 = INT32_MIN;
	int32_t t102 = -1;

    t102 = ((x409%(x410|x411))==x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x413 = UINT16_MAX;
	static int16_t x416 = -4;
	volatile int32_t t103 = -3;

    t103 = ((x413%(x414|x415))==x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint8_t x417 = 108U;
	int32_t x418 = 882257932;
	static uint32_t x419 = 118U;
	int8_t x420 = INT8_MIN;
	int32_t t104 = -4;

    t104 = ((x417%(x418|x419))==x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int8_t x421 = INT8_MIN;
	int8_t x422 = -9;
	uint32_t x424 = 1703200493U;
	int32_t t105 = -1724;

    t105 = ((x421%(x422|x423))==x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x425 = INT64_MAX;
	int32_t x426 = INT32_MIN;
	static int8_t x427 = -1;
	int64_t x428 = INT64_MIN;
	volatile int32_t t106 = -257409872;

    t106 = ((x425%(x426|x427))==x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x429 = INT64_MAX;
	static volatile int32_t t107 = -4029346;

    t107 = ((x429%(x430|x431))==x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x433 = INT8_MIN;
	uint8_t x434 = 22U;
	volatile uint16_t x435 = UINT16_MAX;
	uint16_t x436 = 4407U;
	volatile int32_t t108 = 9538850;

    t108 = ((x433%(x434|x435))==x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x437 = INT8_MIN;
	static int64_t x439 = INT64_MIN;
	volatile int8_t x440 = INT8_MIN;
	int32_t t109 = -2506790;

    t109 = ((x437%(x438|x439))==x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x441 = -74296LL;
	volatile uint64_t x442 = UINT64_MAX;
	static int32_t x443 = -2826071;
	uint64_t x444 = 362132137LLU;
	volatile int32_t t110 = 30;

    t110 = ((x441%(x442|x443))==x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint16_t x445 = 2U;
	int64_t x447 = -1LL;
	int32_t x448 = INT32_MIN;
	static volatile int32_t t111 = -871304;

    t111 = ((x445%(x446|x447))==x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x449 = -2;
	uint32_t x450 = UINT32_MAX;
	static int8_t x451 = -11;
	static int32_t x452 = -4884343;
	volatile int32_t t112 = 14539310;

    t112 = ((x449%(x450|x451))==x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x453 = UINT64_MAX;
	static int64_t x454 = -1LL;
	static volatile int16_t x455 = INT16_MAX;
	uint8_t x456 = 9U;

    t113 = ((x453%(x454|x455))==x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int32_t x457 = -607;
	volatile uint8_t x458 = UINT8_MAX;
	volatile int32_t x460 = INT32_MIN;
	static volatile int32_t t114 = -46800;

    t114 = ((x457%(x458|x459))==x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile int8_t x461 = INT8_MIN;
	volatile int8_t x462 = INT8_MIN;
	volatile int16_t x463 = 17;
	int32_t t115 = -4995;

    t115 = ((x461%(x462|x463))==x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x465 = -1;
	volatile uint64_t x466 = 1273939393620776LLU;
	static int16_t x467 = INT16_MIN;
	static volatile int8_t x468 = INT8_MAX;

    t116 = ((x465%(x466|x467))==x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x469 = INT8_MIN;
	int8_t x471 = INT8_MAX;
	int64_t x472 = INT64_MIN;
	int32_t t117 = -1;

    t117 = ((x469%(x470|x471))==x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x476 = UINT16_MAX;
	volatile int32_t t118 = 15389;

    t118 = ((x473%(x474|x475))==x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int64_t x477 = INT64_MIN;
	int8_t x479 = -1;
	uint16_t x480 = 30U;

    t119 = ((x477%(x478|x479))==x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x481 = 92U;
	int16_t x483 = INT16_MAX;
	int8_t x484 = -15;
	int32_t t120 = -1928;

    t120 = ((x481%(x482|x483))==x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x485 = 19227;
	int16_t x486 = INT16_MIN;
	int8_t x487 = INT8_MAX;
	int32_t t121 = 209257847;

    t121 = ((x485%(x486|x487))==x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x489 = -23128LL;
	int8_t x490 = -1;
	int32_t t122 = -15956;

    t122 = ((x489%(x490|x491))==x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x493 = 668LL;
	int32_t x494 = INT32_MIN;
	uint8_t x495 = 12U;
	int32_t x496 = INT32_MIN;
	volatile int32_t t123 = 41236183;

    t123 = ((x493%(x494|x495))==x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x497 = -1;
	int64_t x498 = -4023595024077LL;
	uint8_t x499 = 0U;
	int32_t x500 = INT32_MIN;
	int32_t t124 = 1382;

    t124 = ((x497%(x498|x499))==x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint16_t x501 = 105U;
	int16_t x502 = INT16_MIN;
	int64_t x503 = INT64_MIN;
	int32_t x504 = -1;

    t125 = ((x501%(x502|x503))==x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x505 = INT16_MIN;
	uint8_t x506 = 0U;
	uint64_t x507 = UINT64_MAX;
	int32_t x508 = -1;

    t126 = ((x505%(x506|x507))==x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int64_t x510 = -1LL;
	int16_t x511 = INT16_MIN;
	uint32_t x512 = 12416236U;
	int32_t t127 = -836576;

    t127 = ((x509%(x510|x511))==x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x513 = INT8_MAX;
	static volatile int32_t x515 = -1;
	volatile int32_t t128 = 14;

    t128 = ((x513%(x514|x515))==x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x517 = 83U;
	int64_t x518 = INT64_MIN;
	static int16_t x519 = INT16_MIN;
	int16_t x520 = -1;
	volatile int32_t t129 = -144;

    t129 = ((x517%(x518|x519))==x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint16_t x521 = 6208U;
	static int16_t x522 = 7277;
	int16_t x523 = INT16_MAX;
	int64_t x524 = INT64_MIN;
	volatile int32_t t130 = -16126165;

    t130 = ((x521%(x522|x523))==x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int64_t x525 = -1LL;
	int16_t x526 = 52;
	static volatile int8_t x527 = -1;
	int64_t x528 = INT64_MIN;
	int32_t t131 = -283815;

    t131 = ((x525%(x526|x527))==x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x529 = 29U;
	static uint8_t x530 = 29U;
	uint32_t x531 = 0U;
	int16_t x532 = INT16_MIN;
	static int32_t t132 = -113;

    t132 = ((x529%(x530|x531))==x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x534 = UINT16_MAX;
	int16_t x535 = INT16_MIN;
	int8_t x536 = 35;
	int32_t t133 = 979937634;

    t133 = ((x533%(x534|x535))==x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x537 = 2237607LLU;
	uint32_t x540 = UINT32_MAX;
	static int32_t t134 = 2437950;

    t134 = ((x537%(x538|x539))==x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int16_t x541 = -1;
	int16_t x542 = -1;
	int32_t x543 = INT32_MAX;
	int8_t x544 = INT8_MAX;
	volatile int32_t t135 = 243;

    t135 = ((x541%(x542|x543))==x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x545 = INT8_MIN;
	int32_t x546 = -1;
	int16_t x547 = 1227;
	static int32_t t136 = -40;

    t136 = ((x545%(x546|x547))==x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x549 = INT8_MIN;
	int8_t x550 = -3;
	static volatile int32_t x552 = INT32_MIN;
	static volatile int32_t t137 = 560140;

    t137 = ((x549%(x550|x551))==x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x553 = -7;
	int16_t x554 = INT16_MIN;
	int16_t x555 = -1;
	uint16_t x556 = 38U;
	static volatile int32_t t138 = -1;

    t138 = ((x553%(x554|x555))==x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x558 = 2792259361LLU;
	int64_t x559 = INT64_MIN;
	int16_t x560 = INT16_MAX;
	volatile int32_t t139 = -208895772;

    t139 = ((x557%(x558|x559))==x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x561 = 8937;
	volatile int8_t x563 = INT8_MAX;
	int8_t x564 = 0;
	int32_t t140 = -1900269;

    t140 = ((x561%(x562|x563))==x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x565 = -555403419576313LL;
	int8_t x566 = INT8_MIN;
	uint16_t x567 = UINT16_MAX;
	int32_t t141 = -1409;

    t141 = ((x565%(x566|x567))==x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x569 = 1125062240U;
	int16_t x570 = 10;
	volatile int8_t x571 = INT8_MIN;

    t142 = ((x569%(x570|x571))==x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x573 = INT32_MIN;
	int8_t x575 = -1;
	volatile uint8_t x576 = 0U;
	volatile int32_t t143 = -7384260;

    t143 = ((x573%(x574|x575))==x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x577 = 1510U;
	volatile int32_t x578 = 9;
	int64_t x579 = INT64_MIN;
	volatile int32_t t144 = -74;

    t144 = ((x577%(x578|x579))==x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x581 = 1;
	static uint8_t x582 = UINT8_MAX;
	int64_t x583 = -1379441017696637LL;
	uint16_t x584 = 52U;
	static volatile int32_t t145 = 29710669;

    t145 = ((x581%(x582|x583))==x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x585 = UINT32_MAX;
	volatile int8_t x586 = 2;
	static volatile int64_t x588 = -35407398390730363LL;
	volatile int32_t t146 = 46545624;

    t146 = ((x585%(x586|x587))==x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x589 = 3U;
	int64_t x590 = -481991751499094LL;
	int32_t t147 = 0;

    t147 = ((x589%(x590|x591))==x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x593 = -1;
	int64_t x594 = INT64_MIN;
	int32_t x595 = 0;
	int64_t x596 = 757766LL;
	int32_t t148 = -702261611;

    t148 = ((x593%(x594|x595))==x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x597 = INT64_MIN;
	volatile int32_t x598 = -1;
	int32_t x599 = -1;
	static int32_t x600 = INT32_MIN;
	int32_t t149 = -31434;

    t149 = ((x597%(x598|x599))==x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int64_t x601 = INT64_MIN;
	volatile uint8_t x602 = 78U;
	static int32_t t150 = 7;

    t150 = ((x601%(x602|x603))==x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int8_t x605 = 1;
	volatile uint8_t x606 = UINT8_MAX;
	int8_t x607 = -1;
	uint16_t x608 = UINT16_MAX;
	int32_t t151 = 475;

    t151 = ((x605%(x606|x607))==x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x609 = -861009016;
	static int32_t x610 = INT32_MIN;
	int32_t x611 = INT32_MAX;

    t152 = ((x609%(x610|x611))==x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x613 = UINT64_MAX;
	uint16_t x614 = UINT16_MAX;
	int16_t x615 = INT16_MIN;
	int16_t x616 = INT16_MIN;
	int32_t t153 = -72132655;

    t153 = ((x613%(x614|x615))==x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x617 = INT8_MIN;
	int32_t x619 = INT32_MAX;
	static int32_t x620 = INT32_MAX;

    t154 = ((x617%(x618|x619))==x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint8_t x622 = UINT8_MAX;
	int16_t x623 = INT16_MAX;
	int8_t x624 = -3;

    t155 = ((x621%(x622|x623))==x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x625 = 0;
	volatile uint32_t x627 = 1255U;
	static int8_t x628 = 1;
	volatile int32_t t156 = -1;

    t156 = ((x625%(x626|x627))==x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x631 = 0;
	volatile int32_t t157 = -1993;

    t157 = ((x629%(x630|x631))==x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x633 = INT16_MAX;
	uint16_t x635 = 15U;
	uint32_t x636 = 6483U;
	static volatile int32_t t158 = -106;

    t158 = ((x633%(x634|x635))==x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x637 = INT32_MIN;
	static int16_t x638 = INT16_MIN;
	volatile int16_t x640 = 50;
	volatile int32_t t159 = 25;

    t159 = ((x637%(x638|x639))==x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x641 = INT32_MAX;
	int64_t x642 = 7625201780923249LL;
	volatile int64_t x643 = 1360281535534LL;
	volatile int8_t x644 = INT8_MIN;
	volatile int32_t t160 = -8012675;

    t160 = ((x641%(x642|x643))==x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x646 = INT64_MIN;
	volatile uint8_t x647 = 1U;
	static volatile int8_t x648 = INT8_MIN;

    t161 = ((x645%(x646|x647))==x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x649 = -1;
	int16_t x650 = -3;
	volatile int8_t x651 = INT8_MIN;
	static int16_t x652 = 108;

    t162 = ((x649%(x650|x651))==x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x653 = 13641U;
	volatile uint8_t x654 = 14U;
	int64_t x656 = -6985729662LL;
	volatile int32_t t163 = -76183;

    t163 = ((x653%(x654|x655))==x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x657 = INT64_MIN;
	int32_t x658 = INT32_MIN;
	static int16_t x659 = INT16_MAX;
	uint8_t x660 = 3U;
	int32_t t164 = -2366;

    t164 = ((x657%(x658|x659))==x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x661 = INT32_MIN;
	uint8_t x662 = 3U;
	int16_t x663 = INT16_MIN;
	volatile int32_t t165 = 56850029;

    t165 = ((x661%(x662|x663))==x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile uint8_t x665 = 0U;
	static int32_t x666 = INT32_MIN;
	volatile int16_t x667 = INT16_MIN;
	uint8_t x668 = 25U;
	volatile int32_t t166 = -95952673;

    t166 = ((x665%(x666|x667))==x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x669 = INT32_MIN;
	int8_t x670 = -4;
	volatile int32_t t167 = 1;

    t167 = ((x669%(x670|x671))==x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x673 = INT16_MAX;
	uint8_t x674 = 14U;
	static int32_t t168 = -24;

    t168 = ((x673%(x674|x675))==x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x677 = 30;
	uint16_t x678 = UINT16_MAX;
	int64_t x680 = INT64_MIN;
	int32_t t169 = 11;

    t169 = ((x677%(x678|x679))==x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x681 = 1;
	int8_t x682 = -1;
	static int32_t x684 = INT32_MAX;

    t170 = ((x681%(x682|x683))==x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x686 = -9;
	int32_t x687 = -1;
	int32_t x688 = -1;
	int32_t t171 = -43;

    t171 = ((x685%(x686|x687))==x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x689 = 3;
	uint16_t x690 = UINT16_MAX;
	int8_t x692 = INT8_MIN;
	volatile int32_t t172 = -1;

    t172 = ((x689%(x690|x691))==x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x694 = INT64_MAX;
	uint32_t x695 = 8729177U;
	static int16_t x696 = -10934;
	volatile int32_t t173 = -248783631;

    t173 = ((x693%(x694|x695))==x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x698 = 43U;
	int8_t x699 = 1;
	uint8_t x700 = UINT8_MAX;
	int32_t t174 = -1347;

    t174 = ((x697%(x698|x699))==x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x701 = UINT64_MAX;
	volatile int32_t x702 = INT32_MIN;
	int16_t x703 = 2439;
	int8_t x704 = INT8_MIN;
	int32_t t175 = -30748;

    t175 = ((x701%(x702|x703))==x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x705 = 928LL;
	uint16_t x706 = 19U;
	int32_t x708 = INT32_MIN;
	static volatile int32_t t176 = 1021;

    t176 = ((x705%(x706|x707))==x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x710 = INT32_MAX;
	int64_t x711 = INT64_MIN;
	int8_t x712 = INT8_MAX;
	volatile int32_t t177 = 4826772;

    t177 = ((x709%(x710|x711))==x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x714 = INT64_MAX;
	int32_t x716 = INT32_MAX;

    t178 = ((x713%(x714|x715))==x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x717 = INT64_MIN;
	int8_t x718 = 0;
	int32_t x719 = INT32_MAX;
	int32_t x720 = -1;
	int32_t t179 = -3823571;

    t179 = ((x717%(x718|x719))==x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint32_t x721 = UINT32_MAX;
	int64_t x723 = INT64_MAX;
	static int16_t x724 = -1304;
	static volatile int32_t t180 = -124;

    t180 = ((x721%(x722|x723))==x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int64_t x725 = -2163864LL;
	int64_t x727 = -1LL;
	int64_t x728 = -313919LL;

    t181 = ((x725%(x726|x727))==x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x729 = -1LL;
	static volatile int8_t x731 = INT8_MIN;
	uint8_t x732 = 1U;
	int32_t t182 = 56822;

    t182 = ((x729%(x730|x731))==x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x734 = INT16_MIN;
	volatile uint16_t x735 = 1127U;
	static int64_t x736 = -3828749351695092721LL;

    t183 = ((x733%(x734|x735))==x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x739 = INT64_MIN;
	uint16_t x740 = 239U;
	static int32_t t184 = 1589;

    t184 = ((x737%(x738|x739))==x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x742 = UINT8_MAX;
	int8_t x743 = INT8_MIN;
	static volatile int32_t t185 = -100849898;

    t185 = ((x741%(x742|x743))==x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x745 = 2704339;
	int16_t x746 = 2;
	int16_t x747 = INT16_MIN;
	int16_t x748 = INT16_MIN;
	int32_t t186 = 5563;

    t186 = ((x745%(x746|x747))==x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x749 = INT8_MIN;
	static uint32_t x750 = 1606130U;
	int32_t x752 = -808362;

    t187 = ((x749%(x750|x751))==x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x753 = INT8_MAX;
	static int32_t x754 = INT32_MIN;
	static int8_t x755 = -1;
	int64_t x756 = -1LL;
	int32_t t188 = 12976;

    t188 = ((x753%(x754|x755))==x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x759 = INT64_MIN;
	volatile int32_t x760 = -1;
	static int32_t t189 = 0;

    t189 = ((x757%(x758|x759))==x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x762 = 22381532121LLU;
	int32_t x764 = INT32_MIN;
	int32_t t190 = -9611;

    t190 = ((x761%(x762|x763))==x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x765 = 2U;
	int64_t x766 = 58758899LL;
	uint32_t x767 = UINT32_MAX;
	volatile int8_t x768 = 9;
	volatile int32_t t191 = -4655;

    t191 = ((x765%(x766|x767))==x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x769 = 1U;
	int16_t x770 = INT16_MAX;
	static volatile uint64_t x771 = UINT64_MAX;
	volatile int32_t t192 = 26;

    t192 = ((x769%(x770|x771))==x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint64_t x773 = 162240LLU;
	int64_t x774 = INT64_MAX;
	int32_t t193 = -123;

    t193 = ((x773%(x774|x775))==x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x777 = INT64_MIN;
	int8_t x779 = INT8_MAX;
	int16_t x780 = 100;
	volatile int32_t t194 = -125;

    t194 = ((x777%(x778|x779))==x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x781 = 586;
	uint16_t x782 = 9U;
	int16_t x783 = -1;
	int16_t x784 = INT16_MAX;
	int32_t t195 = 116978014;

    t195 = ((x781%(x782|x783))==x784);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int16_t x785 = INT16_MIN;
	int32_t x786 = -132412;
	int16_t x787 = INT16_MAX;

    t196 = ((x785%(x786|x787))==x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int32_t x790 = INT32_MIN;
	int16_t x791 = INT16_MAX;
	static volatile int32_t t197 = -331;

    t197 = ((x789%(x790|x791))==x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x793 = -2;
	int32_t x794 = -1;
	volatile uint8_t x795 = 0U;
	volatile int32_t t198 = 14972;

    t198 = ((x793%(x794|x795))==x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint16_t x797 = 3U;
	volatile int8_t x798 = INT8_MIN;
	int16_t x799 = INT16_MIN;
	int32_t x800 = 5137381;
	int32_t t199 = 54915382;

    t199 = ((x797%(x798|x799))==x800);

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

