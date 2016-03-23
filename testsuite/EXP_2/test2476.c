
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
int8_t x20 = -1;
static int8_t x30 = INT8_MIN;
uint16_t x33 = 5108U;
volatile int8_t x37 = -1;
static int64_t x44 = -1LL;
volatile int64_t x46 = INT64_MAX;
int64_t x57 = INT64_MAX;
int8_t x63 = INT8_MIN;
int64_t x77 = -1LL;
uint64_t x84 = 131492267639200998LLU;
int8_t x87 = INT8_MIN;
int8_t x92 = 12;
volatile int8_t x95 = -60;
static volatile int32_t t23 = 126073439;
int32_t t24 = 7520;
int16_t x101 = INT16_MAX;
int16_t x106 = INT16_MIN;
int16_t x109 = -1;
volatile int32_t x110 = INT32_MIN;
int32_t t27 = -222;
int32_t x114 = -1;
static int8_t x115 = -1;
static int8_t x139 = -60;
int64_t x147 = -1LL;
static int16_t x151 = INT16_MIN;
int64_t x153 = 566859680426811033LL;
uint64_t x156 = 630116915LLU;
volatile uint64_t x159 = 400769571461886LLU;
int8_t x164 = INT8_MAX;
int8_t x175 = 0;
volatile int16_t x182 = INT16_MIN;
int8_t x185 = INT8_MAX;
int16_t x189 = 4;
int32_t x190 = -1;
int32_t t47 = 9035;
uint64_t x194 = 0LLU;
int16_t x197 = -1;
static uint8_t x203 = UINT8_MAX;
volatile uint32_t t50 = 7U;
uint32_t x208 = UINT32_MAX;
static int64_t x211 = INT64_MIN;
uint16_t x214 = UINT16_MAX;
int8_t x215 = -1;
static int16_t x220 = -1;
int8_t x222 = INT8_MIN;
int16_t x224 = 1;
volatile int32_t x232 = -78640;
int32_t x233 = INT32_MAX;
int32_t x236 = -1;
int32_t x247 = -599;
uint8_t x251 = 1U;
volatile int32_t t62 = -1057309674;
int64_t x255 = -233809842300LL;
volatile uint16_t x257 = 29U;
volatile uint64_t x259 = UINT64_MAX;
int32_t t65 = -1;
volatile int32_t x283 = 0;
volatile int32_t t70 = 124;
volatile uint64_t t73 = 403689093748322LLU;
uint16_t x307 = 13606U;
uint32_t x319 = 431U;
volatile int32_t t79 = -445518010;
uint64_t x321 = UINT64_MAX;
static uint8_t x330 = 3U;
static uint32_t x331 = 128938097U;
static int16_t x340 = INT16_MIN;
uint32_t x341 = 13312U;
int32_t x347 = 396;
int32_t t87 = 3;
uint32_t x355 = 21U;
volatile int64_t x360 = INT64_MAX;
int32_t x366 = 16286050;
int64_t x372 = 2018750LL;
volatile int8_t x379 = INT8_MAX;
static uint64_t x384 = UINT64_MAX;
uint64_t t95 = 696447906290151LLU;
uint8_t x386 = 0U;
static volatile int16_t x389 = INT16_MIN;
static uint32_t x391 = 3620464U;
static volatile int64_t t97 = 723LL;
uint64_t x395 = 23425466902650684LLU;
uint64_t x397 = 84476LLU;
static volatile uint8_t x404 = 0U;
volatile int32_t t100 = 553;
uint64_t x406 = 88207701792LLU;
uint8_t x411 = 25U;
volatile int32_t x413 = -15;
int32_t x414 = -12;
int32_t x416 = INT32_MIN;
volatile int8_t x419 = INT8_MAX;
static uint8_t x420 = 3U;
static uint8_t x421 = 0U;
volatile uint32_t x428 = 2803U;
uint64_t x429 = 12082290189881LLU;
volatile int64_t x432 = INT64_MIN;
int32_t x435 = INT32_MIN;
uint8_t x436 = 125U;
uint64_t x438 = UINT64_MAX;
static int32_t x439 = 89805;
int8_t x444 = INT8_MIN;
int8_t x452 = INT8_MAX;
static volatile int32_t t112 = 48394012;
static uint64_t x456 = UINT64_MAX;
static volatile uint64_t t113 = 3151035125LLU;
int16_t x458 = -1;
volatile int16_t x477 = 5058;
volatile int8_t x482 = -15;
int16_t x493 = INT16_MIN;
uint8_t x495 = 31U;
int32_t t124 = 0;
uint64_t x507 = 63058885208LLU;
static int32_t t126 = 58;
int32_t x510 = -1;
int8_t x512 = -7;
static int32_t x517 = INT32_MIN;
static int16_t x522 = INT16_MIN;
int16_t x523 = INT16_MIN;
uint64_t x524 = UINT64_MAX;
int64_t x525 = INT64_MAX;
int32_t x526 = INT32_MIN;
int64_t x527 = -422745857742382LL;
int64_t x528 = INT64_MIN;
int64_t t131 = -31573171LL;
uint64_t x529 = 81745775773658934LLU;
uint32_t x530 = 41885269U;
int16_t x532 = INT16_MAX;
int32_t x533 = -1;
int32_t x538 = INT32_MIN;
int32_t x540 = -1;
int32_t x542 = -1;
int8_t x543 = INT8_MAX;
int64_t x546 = -46603LL;
static int8_t x561 = -1;
int8_t x567 = INT8_MIN;
volatile int16_t x568 = -1;
static int64_t x579 = INT64_MIN;
static int32_t x587 = -1;
static volatile int64_t t146 = 0LL;
volatile int16_t x593 = INT16_MAX;
uint16_t x595 = 7U;
volatile int64_t t148 = 1LL;
int16_t x598 = 8473;
volatile int32_t t150 = 2802765;
uint64_t x607 = UINT64_MAX;
uint32_t x609 = 2U;
int16_t x610 = 1;
volatile int64_t t152 = -403338538LL;
volatile uint64_t x614 = UINT64_MAX;
static volatile int64_t x619 = INT64_MIN;
volatile int16_t x622 = INT16_MIN;
static int64_t x624 = INT64_MIN;
volatile int64_t t155 = 136493766299LL;
uint64_t x628 = UINT64_MAX;
int32_t x630 = 59713;
uint32_t x632 = 2U;
static int8_t x637 = -1;
static uint64_t x643 = UINT64_MAX;
static int32_t t160 = 3598;
int16_t x646 = -1;
volatile uint64_t x653 = UINT64_MAX;
volatile uint8_t x654 = 61U;
uint8_t x659 = 0U;
int16_t x660 = INT16_MAX;
int64_t x664 = -1LL;
int16_t x674 = 1026;
static int16_t x675 = -112;
int32_t x680 = -746;
static int32_t t170 = -101141835;
uint64_t x685 = 5048942577077679LLU;
static int32_t x686 = -1;
uint32_t x692 = 62473109U;
volatile int16_t x694 = INT16_MAX;
int16_t x696 = 27;
volatile int32_t t173 = 6056;
int8_t x704 = -3;
int64_t x715 = -264770390986LL;
int32_t x716 = 15922;
static int16_t x720 = 25;
int8_t x727 = INT8_MAX;
uint16_t x729 = 157U;
int64_t x730 = INT64_MIN;
static int64_t x731 = -1LL;
int64_t x736 = INT64_MIN;
int8_t x741 = 5;
uint64_t x747 = 22832560LLU;
static int32_t t186 = 12438;
uint8_t x750 = UINT8_MAX;
int16_t x751 = INT16_MIN;
volatile int32_t t187 = 1079340;
volatile int64_t x756 = INT64_MIN;
static int32_t x762 = -1;
uint64_t x763 = 718107LLU;
int32_t t192 = 98029;
static volatile int64_t x773 = 2467086362950621LL;
uint16_t x775 = UINT16_MAX;
uint32_t x784 = 22U;
volatile uint32_t t195 = 598U;
uint64_t x785 = 1244015LLU;
volatile uint32_t t198 = 21974U;
int16_t x799 = 1;
volatile int32_t t199 = -808538;


void f0(void) {
    	volatile uint16_t x1 = 0U;
	int16_t x2 = -1;
	uint64_t x4 = UINT64_MAX;
	volatile uint64_t t0 = 45920565LLU;

    t0 = ((x1>(x2|x3))&x4);

    if (t0 != 1LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = 0;
	uint32_t x6 = 0U;
	static int64_t x7 = INT64_MIN;
	uint8_t x8 = 7U;
	volatile int32_t t1 = 3063939;

    t1 = ((x5>(x6|x7))&x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile uint16_t x9 = 77U;
	volatile int16_t x10 = -1;
	volatile uint8_t x11 = UINT8_MAX;
	int8_t x12 = INT8_MIN;
	int32_t t2 = -1885;

    t2 = ((x9>(x10|x11))&x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x13 = INT16_MAX;
	uint8_t x14 = 34U;
	uint16_t x15 = 29612U;
	volatile uint64_t x16 = UINT64_MAX;
	uint64_t t3 = 0LLU;

    t3 = ((x13>(x14|x15))&x16);

    if (t3 != 1LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x17 = 2894;
	int16_t x18 = -1;
	uint16_t x19 = 15U;
	volatile int32_t t4 = 7337;

    t4 = ((x17>(x18|x19))&x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static int64_t x21 = 64816456LL;
	int8_t x22 = INT8_MAX;
	volatile uint16_t x23 = 6234U;
	static int32_t x24 = 27;
	volatile int32_t t5 = 201637010;

    t5 = ((x21>(x22|x23))&x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint16_t x25 = 4U;
	int64_t x26 = -125838245359LL;
	int16_t x27 = -1;
	volatile uint32_t x28 = 14U;
	volatile uint32_t t6 = 850454120U;

    t6 = ((x25>(x26|x27))&x28);

    if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
    	static int32_t x29 = -2298377;
	uint16_t x31 = UINT16_MAX;
	static int64_t x32 = -6LL;
	volatile int64_t t7 = -91LL;

    t7 = ((x29>(x30|x31))&x32);

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x34 = 1020677592U;
	int32_t x35 = -93345322;
	uint32_t x36 = 1849234618U;
	uint32_t t8 = 621307U;

    t8 = ((x33>(x34|x35))&x36);

    if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x38 = -388235373;
	uint32_t x39 = 697U;
	volatile uint16_t x40 = UINT16_MAX;
	int32_t t9 = -1808;

    t9 = ((x37>(x38|x39))&x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x41 = UINT16_MAX;
	int64_t x42 = INT64_MAX;
	int32_t x43 = INT32_MAX;
	volatile int64_t t10 = -1126610693LL;

    t10 = ((x41>(x42|x43))&x44);

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x45 = 4U;
	uint32_t x47 = 2184801U;
	static uint8_t x48 = 2U;
	static int32_t t11 = 5943928;

    t11 = ((x45>(x46|x47))&x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x49 = 1038163820U;
	int64_t x50 = -1LL;
	static int8_t x51 = -1;
	uint8_t x52 = UINT8_MAX;
	int32_t t12 = -10920131;

    t12 = ((x49>(x50|x51))&x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = 0;
	uint64_t x54 = 218LLU;
	uint64_t x55 = UINT64_MAX;
	volatile int32_t x56 = INT32_MIN;
	volatile int32_t t13 = 7;

    t13 = ((x53>(x54|x55))&x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x58 = INT32_MAX;
	int8_t x59 = -58;
	int32_t x60 = -27801505;
	volatile int32_t t14 = 8787915;

    t14 = ((x57>(x58|x59))&x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x61 = 53U;
	int16_t x62 = INT16_MIN;
	uint16_t x64 = 105U;
	volatile int32_t t15 = -339154165;

    t15 = ((x61>(x62|x63))&x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = -1;
	uint64_t x66 = 143142158005LLU;
	uint16_t x67 = 7U;
	uint16_t x68 = UINT16_MAX;
	int32_t t16 = -100917851;

    t16 = ((x65>(x66|x67))&x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = -7;
	static volatile int64_t x70 = INT64_MAX;
	volatile int8_t x71 = INT8_MAX;
	int8_t x72 = 26;
	static volatile int32_t t17 = -113;

    t17 = ((x69>(x70|x71))&x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int64_t x73 = INT64_MAX;
	static uint64_t x74 = 399080037095LLU;
	volatile int64_t x75 = INT64_MIN;
	volatile int16_t x76 = -69;
	static int32_t t18 = 2;

    t18 = ((x73>(x74|x75))&x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x78 = UINT32_MAX;
	uint64_t x79 = 872487336421147LLU;
	static volatile uint32_t x80 = 1826056U;
	volatile uint32_t t19 = 1224400673U;

    t19 = ((x77>(x78|x79))&x80);

    if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int8_t x81 = INT8_MIN;
	int64_t x82 = -106LL;
	int16_t x83 = INT16_MIN;
	uint64_t t20 = 502LLU;

    t20 = ((x81>(x82|x83))&x84);

    if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = 3;
	int64_t x86 = INT64_MAX;
	uint16_t x88 = UINT16_MAX;
	int32_t t21 = 1825931;

    t21 = ((x85>(x86|x87))&x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x89 = UINT32_MAX;
	uint8_t x90 = UINT8_MAX;
	int8_t x91 = -4;
	volatile int32_t t22 = 1;

    t22 = ((x89>(x90|x91))&x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = INT64_MIN;
	uint16_t x94 = 29U;
	int8_t x96 = -1;

    t23 = ((x93>(x94|x95))&x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x97 = INT16_MAX;
	volatile int64_t x98 = -6639LL;
	int16_t x99 = INT16_MIN;
	uint16_t x100 = 23527U;

    t24 = ((x97>(x98|x99))&x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x102 = -4;
	static uint64_t x103 = 4LLU;
	uint32_t x104 = 292515476U;
	volatile uint32_t t25 = 268640623U;

    t25 = ((x101>(x102|x103))&x104);

    if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x105 = 19U;
	int64_t x107 = -1LL;
	static uint32_t x108 = UINT32_MAX;
	uint32_t t26 = 8630U;

    t26 = ((x105>(x106|x107))&x108);

    if (t26 != 1U) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int32_t x111 = 20964;
	volatile int8_t x112 = 1;

    t27 = ((x109>(x110|x111))&x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = INT8_MIN;
	int16_t x116 = INT16_MIN;
	static int32_t t28 = 1749;

    t28 = ((x113>(x114|x115))&x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x117 = 10392644134399LLU;
	uint64_t x118 = 5467202196LLU;
	volatile int16_t x119 = INT16_MAX;
	static volatile int8_t x120 = 0;
	volatile int32_t t29 = -1303;

    t29 = ((x117>(x118|x119))&x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x121 = 37;
	uint32_t x122 = 1890130U;
	volatile uint32_t x123 = 1177722U;
	static uint32_t x124 = UINT32_MAX;
	static volatile uint32_t t30 = 1928065U;

    t30 = ((x121>(x122|x123))&x124);

    if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = -1;
	static int32_t x126 = 25050;
	int64_t x127 = INT64_MIN;
	int8_t x128 = -1;
	int32_t t31 = 6;

    t31 = ((x125>(x126|x127))&x128);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile int8_t x129 = -1;
	static uint16_t x130 = 2U;
	int16_t x131 = -1;
	static int32_t x132 = INT32_MIN;
	int32_t t32 = -1856781;

    t32 = ((x129>(x130|x131))&x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x133 = 4U;
	volatile uint8_t x134 = 6U;
	int32_t x135 = -1;
	int16_t x136 = -384;
	int32_t t33 = -1;

    t33 = ((x133>(x134|x135))&x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x137 = INT64_MIN;
	uint32_t x138 = 278367599U;
	int32_t x140 = INT32_MIN;
	int32_t t34 = -1345086;

    t34 = ((x137>(x138|x139))&x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int16_t x141 = 103;
	static int8_t x142 = -28;
	volatile uint64_t x143 = 1896473124353697LLU;
	static volatile uint64_t x144 = 735931LLU;
	uint64_t t35 = 77137LLU;

    t35 = ((x141>(x142|x143))&x144);

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x145 = 13LL;
	uint16_t x146 = 20245U;
	int32_t x148 = INT32_MIN;
	int32_t t36 = 1874715;

    t36 = ((x145>(x146|x147))&x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int32_t x149 = 974133407;
	int32_t x150 = -344448;
	uint64_t x152 = UINT64_MAX;
	volatile uint64_t t37 = 3133611284LLU;

    t37 = ((x149>(x150|x151))&x152);

    if (t37 != 1LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int64_t x154 = INT64_MIN;
	static int64_t x155 = 31155LL;
	static uint64_t t38 = 252975211LLU;

    t38 = ((x153>(x154|x155))&x156);

    if (t38 != 1LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x157 = -1LL;
	uint32_t x158 = UINT32_MAX;
	volatile int64_t x160 = 56460441420907084LL;
	volatile int64_t t39 = 65321830611LL;

    t39 = ((x157>(x158|x159))&x160);

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x161 = INT32_MAX;
	volatile uint32_t x162 = UINT32_MAX;
	int16_t x163 = -1;
	volatile int32_t t40 = 230475;

    t40 = ((x161>(x162|x163))&x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x165 = 1336139;
	int8_t x166 = 0;
	volatile uint16_t x167 = UINT16_MAX;
	static int16_t x168 = 700;
	int32_t t41 = 408;

    t41 = ((x165>(x166|x167))&x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int64_t x169 = -13064988619LL;
	uint64_t x170 = 2LLU;
	int16_t x171 = 60;
	int32_t x172 = -1;
	int32_t t42 = -21501;

    t42 = ((x169>(x170|x171))&x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x173 = 24930U;
	int8_t x174 = INT8_MIN;
	int64_t x176 = -588190481320423925LL;
	volatile int64_t t43 = -1325814321LL;

    t43 = ((x173>(x174|x175))&x176);

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x177 = INT64_MIN;
	int32_t x178 = INT32_MAX;
	static int32_t x179 = INT32_MAX;
	static int8_t x180 = INT8_MAX;
	static int32_t t44 = -18837;

    t44 = ((x177>(x178|x179))&x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x181 = 6555U;
	static int64_t x183 = -1LL;
	uint32_t x184 = 865659075U;
	volatile uint32_t t45 = 3U;

    t45 = ((x181>(x182|x183))&x184);

    if (t45 != 1U) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x186 = UINT16_MAX;
	static volatile uint64_t x187 = 105823399540337LLU;
	int64_t x188 = INT64_MIN;
	volatile int64_t t46 = 1561760817281LL;

    t46 = ((x185>(x186|x187))&x188);

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x191 = INT32_MAX;
	int16_t x192 = INT16_MAX;

    t47 = ((x189>(x190|x191))&x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x193 = 59U;
	uint16_t x195 = UINT16_MAX;
	volatile int64_t x196 = INT64_MIN;
	volatile int64_t t48 = -3LL;

    t48 = ((x193>(x194|x195))&x196);

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int8_t x198 = -1;
	int64_t x199 = INT64_MIN;
	static int64_t x200 = -1363635086325937LL;
	static volatile int64_t t49 = -322545LL;

    t49 = ((x197>(x198|x199))&x200);

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x201 = 1U;
	int16_t x202 = -2682;
	uint32_t x204 = UINT32_MAX;

    t50 = ((x201>(x202|x203))&x204);

    if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint16_t x205 = 14279U;
	uint8_t x206 = UINT8_MAX;
	int32_t x207 = INT32_MIN;
	uint32_t t51 = 7U;

    t51 = ((x205>(x206|x207))&x208);

    if (t51 != 1U) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint32_t x209 = 24U;
	volatile int16_t x210 = INT16_MAX;
	volatile int64_t x212 = INT64_MIN;
	int64_t t52 = 62LL;

    t52 = ((x209>(x210|x211))&x212);

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x213 = 1774384156361LLU;
	volatile uint32_t x216 = 5U;
	uint32_t t53 = 160368U;

    t53 = ((x213>(x214|x215))&x216);

    if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x217 = UINT32_MAX;
	uint16_t x218 = 5U;
	int16_t x219 = -1;
	int32_t t54 = -100144050;

    t54 = ((x217>(x218|x219))&x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = 63954;
	uint16_t x223 = 1713U;
	int32_t t55 = -3143035;

    t55 = ((x221>(x222|x223))&x224);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static int64_t x225 = INT64_MIN;
	int8_t x226 = 11;
	uint16_t x227 = 0U;
	int16_t x228 = 1;
	int32_t t56 = -28;

    t56 = ((x225>(x226|x227))&x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int32_t x229 = INT32_MAX;
	int32_t x230 = INT32_MAX;
	volatile int32_t x231 = 0;
	int32_t t57 = -47030;

    t57 = ((x229>(x230|x231))&x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x234 = 0U;
	uint8_t x235 = 2U;
	static volatile int32_t t58 = -2006;

    t58 = ((x233>(x234|x235))&x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x237 = INT64_MIN;
	int16_t x238 = INT16_MAX;
	volatile int64_t x239 = -62548LL;
	int8_t x240 = -1;
	int32_t t59 = 1;

    t59 = ((x237>(x238|x239))&x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x241 = INT8_MIN;
	uint16_t x242 = 16332U;
	int32_t x243 = 334;
	int8_t x244 = INT8_MAX;
	static volatile int32_t t60 = -438730;

    t60 = ((x241>(x242|x243))&x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint8_t x245 = 18U;
	static volatile uint64_t x246 = 29650527153LLU;
	int64_t x248 = INT64_MAX;
	volatile int64_t t61 = 62845266LL;

    t61 = ((x245>(x246|x247))&x248);

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x249 = INT32_MIN;
	int32_t x250 = INT32_MIN;
	int8_t x252 = INT8_MAX;

    t62 = ((x249>(x250|x251))&x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile int16_t x253 = INT16_MAX;
	int8_t x254 = INT8_MAX;
	int16_t x256 = -1;
	static int32_t t63 = -19904681;

    t63 = ((x253>(x254|x255))&x256);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x258 = 971;
	volatile int64_t x260 = INT64_MIN;
	int64_t t64 = 129977LL;

    t64 = ((x257>(x258|x259))&x260);

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x261 = 1U;
	uint16_t x262 = 3990U;
	uint8_t x263 = 2U;
	volatile int16_t x264 = INT16_MIN;

    t65 = ((x261>(x262|x263))&x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x265 = INT32_MIN;
	static volatile uint8_t x266 = 1U;
	int8_t x267 = 54;
	static int64_t x268 = INT64_MIN;
	int64_t t66 = 62LL;

    t66 = ((x265>(x266|x267))&x268);

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x269 = UINT64_MAX;
	int32_t x270 = INT32_MAX;
	uint64_t x271 = 6526LLU;
	static uint8_t x272 = 51U;
	volatile int32_t t67 = 867110;

    t67 = ((x269>(x270|x271))&x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile int64_t x273 = INT64_MIN;
	static int16_t x274 = 6553;
	volatile uint64_t x275 = UINT64_MAX;
	uint8_t x276 = 0U;
	int32_t t68 = 1708;

    t68 = ((x273>(x274|x275))&x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x277 = UINT32_MAX;
	int32_t x278 = 249022927;
	volatile uint32_t x279 = UINT32_MAX;
	static uint16_t x280 = 0U;
	int32_t t69 = -1322;

    t69 = ((x277>(x278|x279))&x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile int64_t x281 = -1LL;
	uint64_t x282 = UINT64_MAX;
	uint8_t x284 = UINT8_MAX;

    t70 = ((x281>(x282|x283))&x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x285 = 2625;
	uint8_t x286 = UINT8_MAX;
	uint64_t x287 = UINT64_MAX;
	uint32_t x288 = 7785U;
	uint32_t t71 = 19650U;

    t71 = ((x285>(x286|x287))&x288);

    if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x289 = UINT16_MAX;
	uint32_t x290 = UINT32_MAX;
	static int32_t x291 = -36659;
	static int8_t x292 = -10;
	static int32_t t72 = -57333421;

    t72 = ((x289>(x290|x291))&x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint16_t x293 = UINT16_MAX;
	static volatile int16_t x294 = -1;
	int16_t x295 = INT16_MIN;
	uint64_t x296 = 176646741117988076LLU;

    t73 = ((x293>(x294|x295))&x296);

    if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int32_t x297 = -1;
	int16_t x298 = INT16_MAX;
	int8_t x299 = -8;
	static int64_t x300 = -8LL;
	int64_t t74 = -1301129177470LL;

    t74 = ((x297>(x298|x299))&x300);

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint16_t x301 = 263U;
	int64_t x302 = 620826993161735LL;
	static uint64_t x303 = 2107500066733917844LLU;
	uint8_t x304 = 0U;
	static int32_t t75 = -1;

    t75 = ((x301>(x302|x303))&x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x305 = -13001283377490633LL;
	uint16_t x306 = 408U;
	uint16_t x308 = UINT16_MAX;
	volatile int32_t t76 = -383;

    t76 = ((x305>(x306|x307))&x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x309 = INT8_MIN;
	uint32_t x310 = 0U;
	static int8_t x311 = INT8_MAX;
	static uint64_t x312 = 3LLU;
	static uint64_t t77 = 22218144LLU;

    t77 = ((x309>(x310|x311))&x312);

    if (t77 != 1LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint16_t x313 = 1U;
	int8_t x314 = -28;
	volatile int16_t x315 = -12;
	uint32_t x316 = 13357U;
	volatile uint32_t t78 = 424915U;

    t78 = ((x313>(x314|x315))&x316);

    if (t78 != 1U) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x317 = -290;
	volatile int32_t x318 = INT32_MIN;
	volatile int16_t x320 = -39;

    t79 = ((x317>(x318|x319))&x320);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x322 = INT32_MIN;
	int64_t x323 = 6180820049734LL;
	int8_t x324 = -27;
	int32_t t80 = 7223701;

    t80 = ((x321>(x322|x323))&x324);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int32_t x325 = INT32_MIN;
	uint32_t x326 = 25863866U;
	int32_t x327 = -1;
	static volatile uint32_t x328 = 116067608U;
	static volatile uint32_t t81 = 12619184U;

    t81 = ((x325>(x326|x327))&x328);

    if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x329 = INT64_MIN;
	uint16_t x332 = 29U;
	int32_t t82 = 40;

    t82 = ((x329>(x330|x331))&x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x333 = 10U;
	static int16_t x334 = INT16_MIN;
	uint16_t x335 = 179U;
	int16_t x336 = -1;
	static int32_t t83 = 1456;

    t83 = ((x333>(x334|x335))&x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x337 = 9336889U;
	static int32_t x338 = INT32_MIN;
	uint8_t x339 = 21U;
	volatile int32_t t84 = -450123;

    t84 = ((x337>(x338|x339))&x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint32_t x342 = 119480U;
	int32_t x343 = -990860;
	volatile int16_t x344 = -1;
	volatile int32_t t85 = 304;

    t85 = ((x341>(x342|x343))&x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int64_t x345 = -1LL;
	int8_t x346 = INT8_MIN;
	int8_t x348 = INT8_MIN;
	int32_t t86 = 713;

    t86 = ((x345>(x346|x347))&x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x349 = INT32_MAX;
	static int8_t x350 = INT8_MAX;
	int64_t x351 = -12876359718725581LL;
	static int8_t x352 = INT8_MIN;

    t87 = ((x349>(x350|x351))&x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = -1;
	static int64_t x354 = INT64_MAX;
	uint8_t x356 = 18U;
	int32_t t88 = 32664;

    t88 = ((x353>(x354|x355))&x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x357 = UINT32_MAX;
	int64_t x358 = -272967993092210LL;
	int64_t x359 = INT64_MIN;
	int64_t t89 = -1029510481718559LL;

    t89 = ((x357>(x358|x359))&x360);

    if (t89 != 1LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x361 = INT16_MAX;
	static volatile int64_t x362 = INT64_MIN;
	volatile int64_t x363 = -1LL;
	int32_t x364 = INT32_MIN;
	static int32_t t90 = -46476;

    t90 = ((x361>(x362|x363))&x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x365 = INT16_MAX;
	uint16_t x367 = 62U;
	static int8_t x368 = -9;
	volatile int32_t t91 = 112;

    t91 = ((x365>(x366|x367))&x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x369 = -17561401639982LL;
	int64_t x370 = INT64_MIN;
	uint8_t x371 = UINT8_MAX;
	int64_t t92 = 1927182157078486LL;

    t92 = ((x369>(x370|x371))&x372);

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static int8_t x373 = 0;
	int32_t x374 = INT32_MIN;
	static uint16_t x375 = UINT16_MAX;
	static int16_t x376 = -1;
	static int32_t t93 = 2;

    t93 = ((x373>(x374|x375))&x376);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int8_t x377 = INT8_MIN;
	static int8_t x378 = INT8_MIN;
	int32_t x380 = -15;
	int32_t t94 = -1284353;

    t94 = ((x377>(x378|x379))&x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x381 = INT16_MIN;
	int8_t x382 = -1;
	volatile int16_t x383 = INT16_MIN;

    t95 = ((x381>(x382|x383))&x384);

    if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x385 = -1;
	static int16_t x387 = INT16_MAX;
	volatile uint32_t x388 = UINT32_MAX;
	uint32_t t96 = 265850615U;

    t96 = ((x385>(x386|x387))&x388);

    if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x390 = 1;
	static int64_t x392 = -1LL;

    t97 = ((x389>(x390|x391))&x392);

    if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x393 = -1;
	uint16_t x394 = 33U;
	volatile int8_t x396 = INT8_MIN;
	volatile int32_t t98 = 1;

    t98 = ((x393>(x394|x395))&x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x398 = INT16_MAX;
	uint32_t x399 = 641266372U;
	static int8_t x400 = 31;
	int32_t t99 = 3318915;

    t99 = ((x397>(x398|x399))&x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = -6636;
	int32_t x402 = INT32_MIN;
	int64_t x403 = -957187LL;

    t100 = ((x401>(x402|x403))&x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile uint16_t x405 = 152U;
	volatile int8_t x407 = -7;
	volatile uint64_t x408 = UINT64_MAX;
	volatile uint64_t t101 = 247400680369040740LLU;

    t101 = ((x405>(x406|x407))&x408);

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x409 = -238725;
	static uint8_t x410 = UINT8_MAX;
	static uint32_t x412 = 27469978U;
	volatile uint32_t t102 = 891580U;

    t102 = ((x409>(x410|x411))&x412);

    if (t102 != 0U) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x415 = 198;
	static int32_t t103 = 5079;

    t103 = ((x413>(x414|x415))&x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint16_t x417 = UINT16_MAX;
	static uint32_t x418 = 14353U;
	int32_t t104 = 1980;

    t104 = ((x417>(x418|x419))&x420);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x422 = -1LL;
	static uint8_t x423 = 0U;
	volatile int32_t x424 = INT32_MIN;
	volatile int32_t t105 = -28408;

    t105 = ((x421>(x422|x423))&x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x425 = INT64_MIN;
	static uint8_t x426 = 3U;
	static int16_t x427 = -1;
	uint32_t t106 = 1486U;

    t106 = ((x425>(x426|x427))&x428);

    if (t106 != 0U) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x430 = INT8_MIN;
	int16_t x431 = -1;
	static int64_t t107 = 4LL;

    t107 = ((x429>(x430|x431))&x432);

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x433 = -1;
	volatile int16_t x434 = -1963;
	volatile int32_t t108 = 152;

    t108 = ((x433>(x434|x435))&x436);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x437 = -6;
	int64_t x440 = -1LL;
	int64_t t109 = 76822407LL;

    t109 = ((x437>(x438|x439))&x440);

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint32_t x441 = 82692U;
	int64_t x442 = INT64_MIN;
	int8_t x443 = INT8_MIN;
	volatile int32_t t110 = -107637;

    t110 = ((x441>(x442|x443))&x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x445 = INT8_MAX;
	volatile int8_t x446 = -29;
	int32_t x447 = INT32_MIN;
	volatile int16_t x448 = INT16_MIN;
	int32_t t111 = -609376;

    t111 = ((x445>(x446|x447))&x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint16_t x449 = UINT16_MAX;
	int8_t x450 = 9;
	volatile uint16_t x451 = 1652U;

    t112 = ((x449>(x450|x451))&x452);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x453 = -78;
	volatile uint8_t x454 = UINT8_MAX;
	static int16_t x455 = -1;

    t113 = ((x453>(x454|x455))&x456);

    if (t113 != 0LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x457 = 144U;
	int32_t x459 = INT32_MIN;
	volatile uint64_t x460 = 8498724135236986490LLU;
	volatile uint64_t t114 = 342977935604682550LLU;

    t114 = ((x457>(x458|x459))&x460);

    if (t114 != 0LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint8_t x461 = UINT8_MAX;
	uint16_t x462 = 17871U;
	static uint16_t x463 = UINT16_MAX;
	static int16_t x464 = -1;
	volatile int32_t t115 = 3355;

    t115 = ((x461>(x462|x463))&x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x465 = INT64_MIN;
	static int64_t x466 = -14080288828574563LL;
	uint64_t x467 = 3596021854981209LLU;
	int16_t x468 = -1;
	int32_t t116 = 2268117;

    t116 = ((x465>(x466|x467))&x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x469 = -3;
	static int64_t x470 = INT64_MIN;
	static uint8_t x471 = 11U;
	int32_t x472 = INT32_MAX;
	volatile int32_t t117 = 77138;

    t117 = ((x469>(x470|x471))&x472);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x473 = INT16_MAX;
	volatile int64_t x474 = -1780567618791LL;
	volatile int32_t x475 = -29455209;
	int64_t x476 = INT64_MAX;
	static int64_t t118 = 352LL;

    t118 = ((x473>(x474|x475))&x476);

    if (t118 != 1LL) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint8_t x478 = 12U;
	int16_t x479 = -1;
	int16_t x480 = -1;
	volatile int32_t t119 = -3;

    t119 = ((x477>(x478|x479))&x480);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x481 = INT64_MIN;
	int16_t x483 = -6;
	volatile int64_t x484 = -1LL;
	static volatile int64_t t120 = 528501LL;

    t120 = ((x481>(x482|x483))&x484);

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = 10584;
	int16_t x486 = -18;
	uint8_t x487 = 11U;
	static uint8_t x488 = 66U;
	static int32_t t121 = -28;

    t121 = ((x485>(x486|x487))&x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x489 = -1;
	static int32_t x490 = INT32_MIN;
	volatile int8_t x491 = -30;
	int32_t x492 = INT32_MAX;
	volatile int32_t t122 = -27;

    t122 = ((x489>(x490|x491))&x492);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x494 = UINT8_MAX;
	uint16_t x496 = UINT16_MAX;
	volatile int32_t t123 = 6;

    t123 = ((x493>(x494|x495))&x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x497 = 1994;
	int16_t x498 = 11;
	int64_t x499 = INT64_MAX;
	static int32_t x500 = INT32_MAX;

    t124 = ((x497>(x498|x499))&x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static int16_t x501 = INT16_MIN;
	int64_t x502 = -4LL;
	uint8_t x503 = 7U;
	int8_t x504 = -1;
	int32_t t125 = 420;

    t125 = ((x501>(x502|x503))&x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x505 = -1;
	int64_t x506 = INT64_MAX;
	int16_t x508 = 667;

    t126 = ((x505>(x506|x507))&x508);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x509 = -1;
	uint16_t x511 = 254U;
	int32_t t127 = -5205;

    t127 = ((x509>(x510|x511))&x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int16_t x513 = INT16_MIN;
	volatile int16_t x514 = INT16_MIN;
	uint8_t x515 = 1U;
	static int32_t x516 = INT32_MIN;
	volatile int32_t t128 = 132993;

    t128 = ((x513>(x514|x515))&x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x518 = -1;
	int64_t x519 = 45127114LL;
	uint16_t x520 = 1U;
	int32_t t129 = 4128323;

    t129 = ((x517>(x518|x519))&x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int32_t x521 = INT32_MIN;
	uint64_t t130 = 380369209563988LLU;

    t130 = ((x521>(x522|x523))&x524);

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    

    t131 = ((x525>(x526|x527))&x528);

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int16_t x531 = INT16_MIN;
	int32_t t132 = -758791;

    t132 = ((x529>(x530|x531))&x532);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x534 = INT8_MIN;
	volatile uint16_t x535 = 69U;
	uint16_t x536 = UINT16_MAX;
	static volatile int32_t t133 = 559947;

    t133 = ((x533>(x534|x535))&x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int64_t x537 = INT64_MAX;
	static uint64_t x539 = UINT64_MAX;
	int32_t t134 = -444;

    t134 = ((x537>(x538|x539))&x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int64_t x541 = -891869358350436726LL;
	uint8_t x544 = 9U;
	volatile int32_t t135 = -7;

    t135 = ((x541>(x542|x543))&x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile int32_t x545 = INT32_MIN;
	int32_t x547 = -1;
	static int8_t x548 = -4;
	static volatile int32_t t136 = -43812;

    t136 = ((x545>(x546|x547))&x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x549 = UINT64_MAX;
	int16_t x550 = -22;
	uint32_t x551 = 1U;
	int8_t x552 = 33;
	int32_t t137 = 497780;

    t137 = ((x549>(x550|x551))&x552);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint8_t x553 = 3U;
	int32_t x554 = -37;
	static int16_t x555 = 12683;
	int8_t x556 = 15;
	volatile int32_t t138 = -823102994;

    t138 = ((x553>(x554|x555))&x556);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x557 = UINT8_MAX;
	uint8_t x558 = 12U;
	static volatile uint64_t x559 = 247008LLU;
	int16_t x560 = INT16_MAX;
	int32_t t139 = -403948;

    t139 = ((x557>(x558|x559))&x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x562 = 27247507865LLU;
	int8_t x563 = 1;
	int16_t x564 = -1;
	static int32_t t140 = 35977855;

    t140 = ((x561>(x562|x563))&x564);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x565 = -198LL;
	uint64_t x566 = 16342LLU;
	volatile int32_t t141 = -1;

    t141 = ((x565>(x566|x567))&x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint32_t x569 = 724U;
	int64_t x570 = 66920409342LL;
	int16_t x571 = INT16_MIN;
	volatile int64_t x572 = INT64_MAX;
	static int64_t t142 = 136830417296183259LL;

    t142 = ((x569>(x570|x571))&x572);

    if (t142 != 1LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x573 = INT8_MIN;
	int8_t x574 = INT8_MIN;
	uint16_t x575 = 115U;
	uint8_t x576 = 6U;
	volatile int32_t t143 = 0;

    t143 = ((x573>(x574|x575))&x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint32_t x577 = UINT32_MAX;
	volatile int32_t x578 = INT32_MIN;
	int16_t x580 = INT16_MIN;
	static int32_t t144 = -3944201;

    t144 = ((x577>(x578|x579))&x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static int32_t x581 = INT32_MIN;
	volatile uint8_t x582 = 5U;
	uint8_t x583 = 11U;
	int32_t x584 = -1;
	static volatile int32_t t145 = 185740242;

    t145 = ((x581>(x582|x583))&x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x585 = -31209;
	int8_t x586 = INT8_MAX;
	int64_t x588 = -1LL;

    t146 = ((x585>(x586|x587))&x588);

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint64_t x589 = 61LLU;
	uint32_t x590 = 420289094U;
	static int16_t x591 = 1;
	int16_t x592 = 1;
	volatile int32_t t147 = -1999968;

    t147 = ((x589>(x590|x591))&x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint64_t x594 = UINT64_MAX;
	static int64_t x596 = -1LL;

    t148 = ((x593>(x594|x595))&x596);

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x597 = 9U;
	static volatile int16_t x599 = INT16_MAX;
	int16_t x600 = -1;
	volatile int32_t t149 = 1117;

    t149 = ((x597>(x598|x599))&x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x601 = INT32_MAX;
	int32_t x602 = INT32_MAX;
	uint32_t x603 = 7U;
	int8_t x604 = -1;

    t150 = ((x601>(x602|x603))&x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint32_t x605 = 245908U;
	int32_t x606 = INT32_MIN;
	static int32_t x608 = 9;
	static volatile int32_t t151 = 976476;

    t151 = ((x605>(x606|x607))&x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x611 = UINT8_MAX;
	static int64_t x612 = INT64_MIN;

    t152 = ((x609>(x610|x611))&x612);

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x613 = 15758278;
	static volatile uint32_t x615 = UINT32_MAX;
	uint8_t x616 = 4U;
	volatile int32_t t153 = -1375752;

    t153 = ((x613>(x614|x615))&x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x617 = INT32_MAX;
	static volatile int16_t x618 = -1493;
	volatile uint8_t x620 = 10U;
	volatile int32_t t154 = 44;

    t154 = ((x617>(x618|x619))&x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x621 = 2;
	int8_t x623 = INT8_MIN;

    t155 = ((x621>(x622|x623))&x624);

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint16_t x625 = 975U;
	static uint32_t x626 = 890U;
	uint32_t x627 = 481071340U;
	volatile uint64_t t156 = 14LLU;

    t156 = ((x625>(x626|x627))&x628);

    if (t156 != 0LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	static int64_t x629 = INT64_MAX;
	volatile int64_t x631 = 215LL;
	volatile uint32_t t157 = 215852U;

    t157 = ((x629>(x630|x631))&x632);

    if (t157 != 0U) { NG(); } else { ; }
	
}

void f158(void) {
    	static int32_t x633 = INT32_MIN;
	int32_t x634 = 6;
	static volatile int8_t x635 = -13;
	int16_t x636 = -1;
	int32_t t158 = -346586213;

    t158 = ((x633>(x634|x635))&x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static int8_t x638 = -1;
	uint32_t x639 = UINT32_MAX;
	int32_t x640 = INT32_MAX;
	int32_t t159 = 3400486;

    t159 = ((x637>(x638|x639))&x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int8_t x641 = 1;
	int16_t x642 = -137;
	uint16_t x644 = 207U;

    t160 = ((x641>(x642|x643))&x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x645 = INT8_MIN;
	int64_t x647 = -1LL;
	uint64_t x648 = 1532450261620551421LLU;
	static volatile uint64_t t161 = 457191LLU;

    t161 = ((x645>(x646|x647))&x648);

    if (t161 != 0LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x649 = INT64_MIN;
	uint8_t x650 = 37U;
	int8_t x651 = -1;
	int64_t x652 = INT64_MAX;
	volatile int64_t t162 = -1747590LL;

    t162 = ((x649>(x650|x651))&x652);

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint8_t x655 = UINT8_MAX;
	uint8_t x656 = 6U;
	volatile int32_t t163 = 28033;

    t163 = ((x653>(x654|x655))&x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x657 = INT16_MIN;
	int32_t x658 = -8;
	static int32_t t164 = 5661;

    t164 = ((x657>(x658|x659))&x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x661 = INT16_MAX;
	volatile int64_t x662 = -1LL;
	static volatile uint32_t x663 = 13166781U;
	static int64_t t165 = -13LL;

    t165 = ((x661>(x662|x663))&x664);

    if (t165 != 1LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x665 = INT64_MAX;
	int64_t x666 = INT64_MIN;
	volatile int16_t x667 = INT16_MAX;
	static int64_t x668 = -1LL;
	volatile int64_t t166 = 3242987115LL;

    t166 = ((x665>(x666|x667))&x668);

    if (t166 != 1LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x669 = INT32_MAX;
	int8_t x670 = -1;
	static int64_t x671 = -1LL;
	int16_t x672 = INT16_MIN;
	static int32_t t167 = 138;

    t167 = ((x669>(x670|x671))&x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x673 = INT64_MAX;
	int64_t x676 = -19096LL;
	volatile int64_t t168 = 45685827LL;

    t168 = ((x673>(x674|x675))&x676);

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x677 = -1;
	uint32_t x678 = 973996939U;
	int8_t x679 = -2;
	int32_t t169 = -2852975;

    t169 = ((x677>(x678|x679))&x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint32_t x681 = UINT32_MAX;
	int8_t x682 = -1;
	static volatile int32_t x683 = INT32_MAX;
	static volatile int32_t x684 = 27837;

    t170 = ((x681>(x682|x683))&x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint32_t x687 = UINT32_MAX;
	int64_t x688 = 0LL;
	static volatile int64_t t171 = 120336308641224LL;

    t171 = ((x685>(x686|x687))&x688);

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x689 = 35U;
	int64_t x690 = 7697LL;
	static int8_t x691 = INT8_MIN;
	volatile uint32_t t172 = 1073810U;

    t172 = ((x689>(x690|x691))&x692);

    if (t172 != 1U) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x693 = INT64_MIN;
	static uint32_t x695 = 660523U;

    t173 = ((x693>(x694|x695))&x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int64_t x697 = -1LL;
	static int8_t x698 = INT8_MAX;
	int16_t x699 = -1;
	int32_t x700 = INT32_MAX;
	volatile int32_t t174 = 103656966;

    t174 = ((x697>(x698|x699))&x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x701 = 21;
	static volatile int32_t x702 = -205;
	int32_t x703 = INT32_MIN;
	volatile int32_t t175 = -36;

    t175 = ((x701>(x702|x703))&x704);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x705 = INT16_MAX;
	uint16_t x706 = 105U;
	static int16_t x707 = INT16_MIN;
	int32_t x708 = INT32_MAX;
	volatile int32_t t176 = 6893905;

    t176 = ((x705>(x706|x707))&x708);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x709 = -1;
	static int32_t x710 = INT32_MIN;
	uint8_t x711 = 5U;
	uint32_t x712 = UINT32_MAX;
	uint32_t t177 = 1026996U;

    t177 = ((x709>(x710|x711))&x712);

    if (t177 != 1U) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x713 = 456440U;
	uint8_t x714 = UINT8_MAX;
	int32_t t178 = -1929641;

    t178 = ((x713>(x714|x715))&x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint16_t x717 = 2004U;
	volatile uint32_t x718 = 1204594U;
	int64_t x719 = -1LL;
	volatile int32_t t179 = 149;

    t179 = ((x717>(x718|x719))&x720);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x721 = -12762;
	int64_t x722 = INT64_MIN;
	int64_t x723 = 1149903327154282671LL;
	uint8_t x724 = 1U;
	volatile int32_t t180 = 600;

    t180 = ((x721>(x722|x723))&x724);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x725 = INT32_MAX;
	int16_t x726 = INT16_MIN;
	int8_t x728 = -6;
	static volatile int32_t t181 = 1;

    t181 = ((x725>(x726|x727))&x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x732 = -6;
	volatile int32_t t182 = -1629;

    t182 = ((x729>(x730|x731))&x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint32_t x733 = UINT32_MAX;
	int8_t x734 = 0;
	static volatile int8_t x735 = -5;
	int64_t t183 = 172004LL;

    t183 = ((x733>(x734|x735))&x736);

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x737 = 38997U;
	int16_t x738 = INT16_MAX;
	int64_t x739 = 57059346729LL;
	int32_t x740 = INT32_MIN;
	int32_t t184 = 982;

    t184 = ((x737>(x738|x739))&x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint8_t x742 = 1U;
	volatile int8_t x743 = -4;
	volatile uint8_t x744 = 1U;
	int32_t t185 = 52472743;

    t185 = ((x741>(x742|x743))&x744);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint16_t x745 = 16U;
	static volatile int16_t x746 = INT16_MIN;
	volatile uint16_t x748 = 12U;

    t186 = ((x745>(x746|x747))&x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x749 = INT8_MIN;
	int16_t x752 = INT16_MIN;

    t187 = ((x749>(x750|x751))&x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x753 = -1;
	volatile uint16_t x754 = 2710U;
	volatile int8_t x755 = INT8_MIN;
	volatile int64_t t188 = 10932LL;

    t188 = ((x753>(x754|x755))&x756);

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint16_t x757 = 25U;
	volatile uint16_t x758 = 223U;
	int32_t x759 = -1;
	static int8_t x760 = INT8_MIN;
	volatile int32_t t189 = 20226708;

    t189 = ((x757>(x758|x759))&x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x761 = INT32_MAX;
	volatile int16_t x764 = INT16_MIN;
	int32_t t190 = -10183;

    t190 = ((x761>(x762|x763))&x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x765 = 71067289;
	int32_t x766 = -1;
	int8_t x767 = INT8_MAX;
	int64_t x768 = 1388377585LL;
	volatile int64_t t191 = 21200400601LL;

    t191 = ((x765>(x766|x767))&x768);

    if (t191 != 1LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x769 = 52U;
	uint32_t x770 = 142709221U;
	volatile int8_t x771 = -1;
	int32_t x772 = INT32_MIN;

    t192 = ((x769>(x770|x771))&x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x774 = INT32_MIN;
	int8_t x776 = -1;
	int32_t t193 = 22894579;

    t193 = ((x773>(x774|x775))&x776);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x777 = -34;
	int16_t x778 = INT16_MIN;
	int16_t x779 = INT16_MIN;
	int16_t x780 = INT16_MIN;
	int32_t t194 = -20;

    t194 = ((x777>(x778|x779))&x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x781 = -15;
	int16_t x782 = -3;
	int8_t x783 = -1;

    t195 = ((x781>(x782|x783))&x784);

    if (t195 != 0U) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x786 = -13;
	static int32_t x787 = -3445;
	static volatile int8_t x788 = -1;
	static int32_t t196 = 90845;

    t196 = ((x785>(x786|x787))&x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x789 = UINT16_MAX;
	uint8_t x790 = 23U;
	int64_t x791 = INT64_MIN;
	int16_t x792 = 623;
	int32_t t197 = 547374;

    t197 = ((x789>(x790|x791))&x792);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x793 = -3;
	int8_t x794 = INT8_MIN;
	uint8_t x795 = UINT8_MAX;
	volatile uint32_t x796 = 1977U;

    t198 = ((x793>(x794|x795))&x796);

    if (t198 != 0U) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x797 = -1;
	static int64_t x798 = INT64_MIN;
	static int8_t x800 = -1;

    t199 = ((x797>(x798|x799))&x800);

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

