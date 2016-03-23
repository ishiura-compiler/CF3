
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

volatile uint16_t x1 = UINT16_MAX;
int16_t x2 = 37;
uint16_t x5 = 35U;
static uint64_t x7 = UINT64_MAX;
volatile uint16_t x11 = 12U;
int32_t t2 = -196;
int64_t x14 = 13924693506315LL;
uint16_t x21 = 191U;
static uint8_t x22 = 1U;
volatile int16_t x23 = 369;
int32_t x26 = INT32_MAX;
int16_t x28 = INT16_MIN;
int32_t t6 = -223593123;
volatile int32_t t7 = 203631611;
volatile int32_t x39 = INT32_MIN;
int32_t t9 = 1886311;
int64_t x44 = 0LL;
int16_t x47 = INT16_MIN;
static int32_t t11 = 621495555;
volatile uint16_t x49 = 4U;
volatile int32_t t12 = -1;
uint8_t x53 = 0U;
static int32_t x61 = -1;
int32_t t15 = 46318331;
static int64_t x68 = INT64_MIN;
int64_t x75 = INT64_MAX;
int32_t t18 = -1;
uint8_t x79 = UINT8_MAX;
int64_t x83 = INT64_MIN;
static volatile int16_t x86 = INT16_MIN;
volatile int32_t x89 = INT32_MIN;
static volatile uint32_t x90 = 115973874U;
int32_t x91 = INT32_MIN;
static int32_t t23 = 9;
static int16_t x103 = INT16_MIN;
int32_t x107 = 0;
int64_t x111 = 6981901LL;
int64_t x115 = INT64_MAX;
volatile int32_t t28 = -4100249;
int16_t x119 = INT16_MIN;
int32_t t29 = -1037;
int64_t x122 = -1LL;
int16_t x128 = INT16_MIN;
static int32_t t31 = -502807;
uint32_t x130 = 9U;
static int16_t x133 = INT16_MIN;
static uint8_t x138 = 1U;
int16_t x148 = 58;
uint64_t x156 = UINT64_MAX;
uint16_t x165 = UINT16_MAX;
int8_t x167 = 1;
int32_t x169 = -230;
int32_t t43 = -5311798;
volatile int16_t x178 = INT16_MAX;
static volatile uint8_t x188 = 12U;
int32_t x191 = INT32_MIN;
volatile int64_t x193 = -28639364LL;
volatile uint8_t x194 = UINT8_MAX;
static int8_t x198 = INT8_MIN;
static uint16_t x202 = 1U;
static volatile int32_t t51 = -1882;
uint16_t x211 = 27163U;
static int32_t t52 = 20817722;
int32_t x213 = INT32_MIN;
volatile int32_t t56 = 2;
uint8_t x231 = 25U;
int32_t t58 = -83;
int64_t x251 = 162989670575LL;
volatile int64_t x254 = 413636424321051908LL;
int8_t x262 = -1;
int16_t x265 = INT16_MAX;
static volatile int32_t t66 = 0;
volatile int32_t t67 = 118015923;
int32_t x284 = INT32_MIN;
int8_t x286 = -1;
int8_t x288 = INT8_MAX;
int16_t x289 = INT16_MAX;
volatile int32_t x291 = -786;
int32_t t72 = -56698298;
int32_t x297 = INT32_MIN;
int32_t x300 = INT32_MIN;
volatile int64_t x303 = 330891947106LL;
static uint32_t x304 = 256644127U;
int32_t t75 = 621452656;
int64_t x305 = INT64_MAX;
int32_t x306 = -352921;
int32_t t76 = 57571;
int16_t x310 = INT16_MAX;
int16_t x312 = -1;
int8_t x316 = 3;
static uint32_t x319 = UINT32_MAX;
uint64_t x323 = UINT64_MAX;
int16_t x325 = INT16_MAX;
volatile int32_t t82 = -2516812;
int64_t x334 = 62376LL;
int64_t x336 = INT64_MIN;
static int32_t x346 = 40;
int32_t x354 = INT32_MIN;
static volatile int8_t x355 = 62;
volatile int32_t x360 = INT32_MIN;
static volatile int32_t t90 = -17121;
uint64_t x371 = UINT64_MAX;
int64_t x374 = INT64_MIN;
int16_t x377 = -1;
int64_t x379 = -50750955329LL;
volatile int32_t x383 = INT32_MAX;
volatile int32_t x384 = INT32_MIN;
int32_t t97 = -1046374;
uint8_t x406 = UINT8_MAX;
int16_t x407 = INT16_MIN;
static uint32_t x417 = 902515U;
uint64_t x424 = UINT64_MAX;
static int64_t x430 = 10918620516115421LL;
int64_t x432 = -1LL;
int8_t x442 = -1;
int32_t x449 = -20;
int64_t x453 = -9LL;
int8_t x454 = -1;
int16_t x456 = -7684;
uint64_t x457 = 31164031LLU;
static int16_t x459 = INT16_MIN;
volatile int32_t t114 = 54370959;
int16_t x461 = INT16_MAX;
volatile uint16_t x462 = 1U;
volatile uint16_t x472 = UINT16_MAX;
volatile int32_t t118 = -59757;
volatile int32_t x483 = INT32_MAX;
int32_t x484 = 10546435;
volatile int32_t t120 = 38;
static volatile int16_t x489 = INT16_MAX;
static int16_t x496 = 1747;
volatile int32_t t123 = -3;
uint8_t x499 = 81U;
int64_t x503 = INT64_MIN;
volatile uint16_t x508 = UINT16_MAX;
volatile int8_t x509 = INT8_MIN;
static int32_t t127 = -2;
int16_t x517 = INT16_MIN;
int32_t x518 = INT32_MIN;
volatile uint64_t x524 = 475287296715990791LLU;
int32_t t134 = 31;
uint16_t x544 = 27104U;
uint16_t x546 = 1491U;
volatile int32_t t136 = -3887135;
uint16_t x551 = UINT16_MAX;
static int32_t t137 = 637;
int32_t x554 = INT32_MAX;
int64_t x557 = -1LL;
int32_t x581 = -1;
int32_t x582 = INT32_MIN;
static int16_t x583 = INT16_MIN;
uint64_t x587 = UINT64_MAX;
static int32_t t146 = 201;
static int32_t x589 = -1;
static volatile int32_t t147 = 2532541;
int64_t x595 = 43032542983120LL;
uint8_t x599 = 0U;
int16_t x602 = INT16_MAX;
volatile int32_t t150 = -4961890;
int64_t x608 = -1LL;
uint64_t x609 = UINT64_MAX;
static uint32_t x611 = 3304739U;
int32_t x624 = -1;
uint32_t x626 = 805597U;
int8_t x630 = -26;
static volatile int32_t t157 = -132750;
int32_t t158 = 0;
volatile int32_t t160 = 0;
static volatile uint64_t x645 = 2LLU;
int64_t x646 = -2035586113LL;
static int8_t x654 = INT8_MAX;
static int32_t t163 = -963560;
int8_t x658 = INT8_MIN;
volatile int64_t x660 = -231775LL;
static int32_t x661 = -164513;
uint32_t x662 = 1714982252U;
int32_t x663 = INT32_MIN;
int8_t x664 = 1;
volatile int32_t t165 = -1995;
static volatile int32_t x668 = INT32_MAX;
static volatile int32_t t166 = 1682904;
volatile int32_t t168 = -6066;
int32_t t170 = -251;
int32_t t173 = 21007;
static int32_t x707 = -1;
uint8_t x710 = 4U;
int32_t t177 = 32101824;
int32_t x718 = INT32_MIN;
uint32_t x728 = 8100U;
static int32_t t181 = 1200130;
int32_t x732 = 53834;
uint8_t x736 = UINT8_MAX;
static int64_t x737 = INT64_MIN;
int16_t x738 = -53;
static int64_t x744 = INT64_MAX;
int64_t x746 = INT64_MAX;
uint16_t x751 = UINT16_MAX;
int32_t x753 = 3186;
int32_t t188 = -144511;
int16_t x766 = -242;
static uint16_t x767 = 29U;
static uint8_t x776 = UINT8_MAX;
int32_t x780 = -1;
int64_t x782 = 1500880616457LL;
volatile int64_t x785 = -244522967693980476LL;
int8_t x787 = 24;
int64_t x790 = -925939LL;
static volatile uint64_t x791 = 252333112316994LLU;
volatile uint8_t x799 = 0U;


void f0(void) {
    	static int16_t x3 = -62;
	volatile int8_t x4 = -1;
	volatile int32_t t0 = 728547;

    t0 = ((x1&(x2|x3))!=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x6 = UINT8_MAX;
	int64_t x8 = -1LL;
	volatile int32_t t1 = -115856996;

    t1 = ((x5&(x6|x7))!=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = 126;
	static volatile int16_t x10 = INT16_MAX;
	volatile int8_t x12 = -1;

    t2 = ((x9&(x10|x11))!=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MIN;
	int16_t x15 = INT16_MIN;
	int64_t x16 = -13762170493LL;
	static int32_t t3 = -25;

    t3 = ((x13&(x14|x15))!=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile uint16_t x17 = UINT16_MAX;
	uint16_t x18 = 1881U;
	static int32_t x19 = 340229960;
	static int16_t x20 = -1;
	int32_t t4 = 1936;

    t4 = ((x17&(x18|x19))!=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint64_t x24 = 440610235426212138LLU;
	volatile int32_t t5 = -15420742;

    t5 = ((x21&(x22|x23))!=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int8_t x25 = INT8_MAX;
	uint64_t x27 = UINT64_MAX;

    t6 = ((x25&(x26|x27))!=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = 4889U;
	int32_t x30 = -1;
	static uint8_t x31 = UINT8_MAX;
	static int32_t x32 = INT32_MIN;

    t7 = ((x29&(x30|x31))!=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x33 = UINT16_MAX;
	int16_t x34 = INT16_MAX;
	static volatile uint8_t x35 = 0U;
	int64_t x36 = INT64_MIN;
	volatile int32_t t8 = 28939932;

    t8 = ((x33&(x34|x35))!=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x37 = 8060058259LLU;
	volatile int8_t x38 = INT8_MIN;
	uint64_t x40 = UINT64_MAX;

    t9 = ((x37&(x38|x39))!=x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x41 = 27U;
	int8_t x42 = -1;
	int8_t x43 = 0;
	int32_t t10 = 13345;

    t10 = ((x41&(x42|x43))!=x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint8_t x45 = UINT8_MAX;
	volatile uint16_t x46 = 13103U;
	int32_t x48 = INT32_MAX;

    t11 = ((x45&(x46|x47))!=x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x50 = INT8_MIN;
	volatile int16_t x51 = -6;
	int8_t x52 = INT8_MAX;

    t12 = ((x49&(x50|x51))!=x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x54 = -166LL;
	static volatile int64_t x55 = -35674221766671083LL;
	int64_t x56 = INT64_MIN;
	static int32_t t13 = -79;

    t13 = ((x53&(x54|x55))!=x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = INT32_MIN;
	int32_t x58 = INT32_MAX;
	int8_t x59 = INT8_MAX;
	int8_t x60 = -1;
	static volatile int32_t t14 = 800236;

    t14 = ((x57&(x58|x59))!=x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x62 = INT32_MAX;
	static uint16_t x63 = 3620U;
	int64_t x64 = -42122933462LL;

    t15 = ((x61&(x62|x63))!=x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint8_t x65 = UINT8_MAX;
	int64_t x66 = INT64_MIN;
	int16_t x67 = 3543;
	volatile int32_t t16 = -240;

    t16 = ((x65&(x66|x67))!=x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = INT8_MIN;
	uint32_t x70 = UINT32_MAX;
	uint8_t x71 = 3U;
	int32_t x72 = 11437;
	int32_t t17 = -121917766;

    t17 = ((x69&(x70|x71))!=x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint64_t x73 = 1472406075LLU;
	volatile uint8_t x74 = 2U;
	int16_t x76 = INT16_MIN;

    t18 = ((x73&(x74|x75))!=x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = -1;
	int8_t x78 = -1;
	volatile int32_t x80 = -1;
	int32_t t19 = -2564008;

    t19 = ((x77&(x78|x79))!=x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x81 = UINT32_MAX;
	uint16_t x82 = UINT16_MAX;
	uint64_t x84 = 332139637372110LLU;
	static volatile int32_t t20 = -5943070;

    t20 = ((x81&(x82|x83))!=x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x85 = INT16_MAX;
	static int32_t x87 = INT32_MAX;
	static volatile uint8_t x88 = 77U;
	volatile int32_t t21 = 10062403;

    t21 = ((x85&(x86|x87))!=x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x92 = 1677347130658LL;
	volatile int32_t t22 = 12274707;

    t22 = ((x89&(x90|x91))!=x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x93 = -3718;
	static int16_t x94 = INT16_MIN;
	volatile uint64_t x95 = 1294LLU;
	int8_t x96 = INT8_MIN;

    t23 = ((x93&(x94|x95))!=x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x97 = 1U;
	int64_t x98 = INT64_MIN;
	static volatile uint8_t x99 = 28U;
	int32_t x100 = -406346;
	int32_t t24 = 1664;

    t24 = ((x97&(x98|x99))!=x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x101 = INT16_MIN;
	volatile int8_t x102 = -31;
	int64_t x104 = 8092LL;
	int32_t t25 = -76;

    t25 = ((x101&(x102|x103))!=x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = INT64_MIN;
	uint32_t x106 = 1993364139U;
	int16_t x108 = 0;
	volatile int32_t t26 = -3425;

    t26 = ((x105&(x106|x107))!=x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x109 = 51;
	uint32_t x110 = UINT32_MAX;
	volatile int16_t x112 = -6;
	static volatile int32_t t27 = -126173;

    t27 = ((x109&(x110|x111))!=x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x113 = INT16_MIN;
	uint64_t x114 = 1260893422153LLU;
	int32_t x116 = -1702;

    t28 = ((x113&(x114|x115))!=x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint64_t x117 = 1LLU;
	int8_t x118 = INT8_MIN;
	static int8_t x120 = -6;

    t29 = ((x117&(x118|x119))!=x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x121 = 96U;
	int8_t x123 = -2;
	uint16_t x124 = UINT16_MAX;
	volatile int32_t t30 = 731961;

    t30 = ((x121&(x122|x123))!=x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x125 = -1LL;
	uint8_t x126 = UINT8_MAX;
	int64_t x127 = INT64_MAX;

    t31 = ((x125&(x126|x127))!=x128);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x129 = 9702633U;
	int64_t x131 = -1LL;
	int64_t x132 = -1LL;
	int32_t t32 = -861;

    t32 = ((x129&(x130|x131))!=x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static int64_t x134 = -1LL;
	volatile int16_t x135 = -1;
	static volatile uint8_t x136 = UINT8_MAX;
	volatile int32_t t33 = 1325921;

    t33 = ((x133&(x134|x135))!=x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = -1;
	int64_t x139 = 54722468619LL;
	volatile int8_t x140 = INT8_MAX;
	volatile int32_t t34 = -49296618;

    t34 = ((x137&(x138|x139))!=x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x141 = INT8_MIN;
	static int16_t x142 = INT16_MIN;
	int8_t x143 = -3;
	int64_t x144 = INT64_MIN;
	volatile int32_t t35 = -7;

    t35 = ((x141&(x142|x143))!=x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x145 = INT16_MIN;
	volatile int16_t x146 = 360;
	int16_t x147 = -53;
	int32_t t36 = -32;

    t36 = ((x145&(x146|x147))!=x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x149 = -9;
	uint16_t x150 = 423U;
	static volatile uint64_t x151 = 2658LLU;
	uint64_t x152 = 1117929712062290193LLU;
	static int32_t t37 = 6959008;

    t37 = ((x149&(x150|x151))!=x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x153 = 47U;
	static volatile int16_t x154 = INT16_MAX;
	volatile uint16_t x155 = UINT16_MAX;
	volatile int32_t t38 = -1025556;

    t38 = ((x153&(x154|x155))!=x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = -1;
	int8_t x158 = INT8_MIN;
	int8_t x159 = -48;
	int64_t x160 = INT64_MAX;
	volatile int32_t t39 = 99;

    t39 = ((x157&(x158|x159))!=x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x161 = 58U;
	int64_t x162 = INT64_MIN;
	uint8_t x163 = UINT8_MAX;
	static uint16_t x164 = UINT16_MAX;
	volatile int32_t t40 = -157;

    t40 = ((x161&(x162|x163))!=x164);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x166 = 35U;
	int8_t x168 = -1;
	int32_t t41 = -10095;

    t41 = ((x165&(x166|x167))!=x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint32_t x170 = 0U;
	static uint64_t x171 = 1460388LLU;
	static uint8_t x172 = UINT8_MAX;
	int32_t t42 = 8047670;

    t42 = ((x169&(x170|x171))!=x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x173 = 5080U;
	uint8_t x174 = 109U;
	int8_t x175 = INT8_MAX;
	int32_t x176 = INT32_MIN;

    t43 = ((x173&(x174|x175))!=x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int16_t x177 = -7;
	volatile int16_t x179 = 65;
	int16_t x180 = INT16_MAX;
	static int32_t t44 = 784786488;

    t44 = ((x177&(x178|x179))!=x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint64_t x181 = UINT64_MAX;
	int8_t x182 = INT8_MIN;
	int8_t x183 = INT8_MIN;
	int16_t x184 = -57;
	int32_t t45 = -10543501;

    t45 = ((x181&(x182|x183))!=x184);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x185 = -1LL;
	static int8_t x186 = INT8_MIN;
	static uint64_t x187 = UINT64_MAX;
	volatile int32_t t46 = 0;

    t46 = ((x185&(x186|x187))!=x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint16_t x189 = 977U;
	int64_t x190 = -388399404043885LL;
	uint8_t x192 = 30U;
	volatile int32_t t47 = -88;

    t47 = ((x189&(x190|x191))!=x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x195 = -1;
	int32_t x196 = -3617;
	volatile int32_t t48 = 253523097;

    t48 = ((x193&(x194|x195))!=x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x197 = INT8_MIN;
	static uint16_t x199 = 2U;
	uint64_t x200 = UINT64_MAX;
	int32_t t49 = -1;

    t49 = ((x197&(x198|x199))!=x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x201 = -1;
	static int32_t x203 = -44;
	uint8_t x204 = UINT8_MAX;
	volatile int32_t t50 = -10169;

    t50 = ((x201&(x202|x203))!=x204);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x205 = UINT8_MAX;
	int64_t x206 = -1LL;
	uint8_t x207 = 127U;
	uint16_t x208 = 2663U;

    t51 = ((x205&(x206|x207))!=x208);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x209 = UINT8_MAX;
	int64_t x210 = INT64_MIN;
	uint16_t x212 = 483U;

    t52 = ((x209&(x210|x211))!=x212);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x214 = INT8_MAX;
	int64_t x215 = -2033137570951469287LL;
	int16_t x216 = INT16_MIN;
	int32_t t53 = -1;

    t53 = ((x213&(x214|x215))!=x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int8_t x217 = 0;
	int32_t x218 = INT32_MIN;
	int8_t x219 = INT8_MIN;
	int16_t x220 = INT16_MAX;
	int32_t t54 = 11;

    t54 = ((x217&(x218|x219))!=x220);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x221 = INT64_MIN;
	int16_t x222 = INT16_MIN;
	int8_t x223 = INT8_MAX;
	static int8_t x224 = INT8_MIN;
	static int32_t t55 = 15220971;

    t55 = ((x221&(x222|x223))!=x224);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x225 = INT8_MAX;
	volatile int8_t x226 = INT8_MAX;
	int8_t x227 = -1;
	static int16_t x228 = -699;

    t56 = ((x225&(x226|x227))!=x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x229 = 0;
	uint32_t x230 = 42570939U;
	static int16_t x232 = -1;
	int32_t t57 = -1275081;

    t57 = ((x229&(x230|x231))!=x232);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int64_t x233 = INT64_MIN;
	uint8_t x234 = 0U;
	int64_t x235 = -1LL;
	int64_t x236 = INT64_MAX;

    t58 = ((x233&(x234|x235))!=x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x237 = UINT32_MAX;
	volatile int8_t x238 = INT8_MIN;
	uint8_t x239 = 61U;
	int16_t x240 = 41;
	volatile int32_t t59 = 57;

    t59 = ((x237&(x238|x239))!=x240);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint64_t x241 = 6024075612196LLU;
	int32_t x242 = INT32_MIN;
	int8_t x243 = -1;
	int64_t x244 = INT64_MIN;
	static volatile int32_t t60 = -30079;

    t60 = ((x241&(x242|x243))!=x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x245 = 28197LLU;
	static int16_t x246 = -1;
	int32_t x247 = -1;
	uint16_t x248 = 206U;
	volatile int32_t t61 = -16;

    t61 = ((x245&(x246|x247))!=x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int32_t x249 = INT32_MAX;
	int64_t x250 = INT64_MIN;
	int32_t x252 = INT32_MAX;
	static volatile int32_t t62 = -3252;

    t62 = ((x249&(x250|x251))!=x252);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x253 = INT8_MIN;
	static int8_t x255 = 0;
	int32_t x256 = -1;
	volatile int32_t t63 = -1701;

    t63 = ((x253&(x254|x255))!=x256);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int16_t x257 = INT16_MAX;
	uint32_t x258 = 572921556U;
	static volatile int32_t x259 = -1794;
	static int64_t x260 = INT64_MIN;
	static volatile int32_t t64 = -755;

    t64 = ((x257&(x258|x259))!=x260);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x261 = UINT32_MAX;
	static volatile int8_t x263 = INT8_MAX;
	int64_t x264 = INT64_MIN;
	static volatile int32_t t65 = -776417835;

    t65 = ((x261&(x262|x263))!=x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x266 = INT32_MIN;
	volatile uint8_t x267 = UINT8_MAX;
	int8_t x268 = INT8_MIN;

    t66 = ((x265&(x266|x267))!=x268);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x269 = -1;
	int32_t x270 = INT32_MIN;
	int64_t x271 = 29162138LL;
	int64_t x272 = -1LL;

    t67 = ((x269&(x270|x271))!=x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x273 = INT8_MIN;
	static int32_t x274 = INT32_MIN;
	int8_t x275 = -1;
	uint64_t x276 = UINT64_MAX;
	static int32_t t68 = -145;

    t68 = ((x273&(x274|x275))!=x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x277 = -1;
	uint32_t x278 = UINT32_MAX;
	int16_t x279 = 2;
	volatile int8_t x280 = INT8_MIN;
	volatile int32_t t69 = 7943794;

    t69 = ((x277&(x278|x279))!=x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x281 = -6;
	volatile int8_t x282 = INT8_MIN;
	uint32_t x283 = 25U;
	static volatile int32_t t70 = 8391043;

    t70 = ((x281&(x282|x283))!=x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint8_t x285 = 1U;
	volatile int32_t x287 = -1;
	int32_t t71 = 168178252;

    t71 = ((x285&(x286|x287))!=x288);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x290 = 0;
	static int16_t x292 = 0;

    t72 = ((x289&(x290|x291))!=x292);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint64_t x293 = 52146145436LLU;
	volatile int64_t x294 = INT64_MIN;
	volatile int16_t x295 = INT16_MAX;
	int32_t x296 = INT32_MAX;
	int32_t t73 = -4325;

    t73 = ((x293&(x294|x295))!=x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x298 = INT8_MIN;
	int16_t x299 = -1;
	volatile int32_t t74 = -1915;

    t74 = ((x297&(x298|x299))!=x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int64_t x301 = INT64_MIN;
	int8_t x302 = INT8_MAX;

    t75 = ((x301&(x302|x303))!=x304);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x307 = 7U;
	int32_t x308 = 43;

    t76 = ((x305&(x306|x307))!=x308);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile uint32_t x309 = UINT32_MAX;
	uint16_t x311 = UINT16_MAX;
	int32_t t77 = 44885418;

    t77 = ((x309&(x310|x311))!=x312);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x313 = INT16_MIN;
	int64_t x314 = -12387574988178LL;
	int16_t x315 = -1;
	int32_t t78 = 7088;

    t78 = ((x313&(x314|x315))!=x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x317 = 14U;
	static volatile uint8_t x318 = 0U;
	static int8_t x320 = 0;
	volatile int32_t t79 = 28153;

    t79 = ((x317&(x318|x319))!=x320);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x321 = -1;
	uint16_t x322 = UINT16_MAX;
	volatile int16_t x324 = -1;
	int32_t t80 = -886993;

    t80 = ((x321&(x322|x323))!=x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static int32_t x326 = -1;
	uint8_t x327 = 82U;
	int8_t x328 = INT8_MAX;
	volatile int32_t t81 = 7610126;

    t81 = ((x325&(x326|x327))!=x328);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x329 = INT32_MIN;
	int32_t x330 = -2873018;
	int32_t x331 = 89660937;
	volatile int64_t x332 = INT64_MIN;

    t82 = ((x329&(x330|x331))!=x332);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x333 = 958;
	static volatile int8_t x335 = INT8_MAX;
	volatile int32_t t83 = 528870012;

    t83 = ((x333&(x334|x335))!=x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x337 = INT32_MAX;
	int16_t x338 = -1;
	volatile uint64_t x339 = UINT64_MAX;
	volatile int64_t x340 = INT64_MIN;
	volatile int32_t t84 = 254941675;

    t84 = ((x337&(x338|x339))!=x340);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x341 = UINT16_MAX;
	uint64_t x342 = 1857244027017097002LLU;
	static volatile uint32_t x343 = 37U;
	int16_t x344 = 8080;
	int32_t t85 = -218317309;

    t85 = ((x341&(x342|x343))!=x344);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x345 = -1;
	static int8_t x347 = INT8_MAX;
	int64_t x348 = INT64_MAX;
	static int32_t t86 = 15691;

    t86 = ((x345&(x346|x347))!=x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile int8_t x349 = INT8_MIN;
	int16_t x350 = -1;
	int64_t x351 = INT64_MAX;
	volatile int16_t x352 = -1;
	volatile int32_t t87 = -1;

    t87 = ((x349&(x350|x351))!=x352);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x353 = INT16_MIN;
	int64_t x356 = -39188448671824195LL;
	int32_t t88 = -22191;

    t88 = ((x353&(x354|x355))!=x356);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x357 = INT32_MIN;
	uint8_t x358 = 0U;
	uint8_t x359 = 54U;
	volatile int32_t t89 = 1473;

    t89 = ((x357&(x358|x359))!=x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x361 = INT16_MIN;
	int16_t x362 = -246;
	uint8_t x363 = 10U;
	uint32_t x364 = UINT32_MAX;

    t90 = ((x361&(x362|x363))!=x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint8_t x365 = UINT8_MAX;
	int8_t x366 = INT8_MAX;
	int16_t x367 = -14;
	int32_t x368 = 392;
	int32_t t91 = 2;

    t91 = ((x365&(x366|x367))!=x368);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x369 = -1;
	volatile int32_t x370 = INT32_MAX;
	int8_t x372 = INT8_MAX;
	static volatile int32_t t92 = 155436;

    t92 = ((x369&(x370|x371))!=x372);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x373 = 38;
	volatile int32_t x375 = -1;
	int64_t x376 = -1LL;
	volatile int32_t t93 = -3;

    t93 = ((x373&(x374|x375))!=x376);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static int32_t x378 = INT32_MAX;
	int16_t x380 = -1;
	volatile int32_t t94 = -30183232;

    t94 = ((x377&(x378|x379))!=x380);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x381 = -1;
	int8_t x382 = INT8_MAX;
	int32_t t95 = -3772;

    t95 = ((x381&(x382|x383))!=x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static int64_t x385 = INT64_MAX;
	static volatile int64_t x386 = INT64_MIN;
	int32_t x387 = INT32_MAX;
	uint8_t x388 = 29U;
	volatile int32_t t96 = 191274;

    t96 = ((x385&(x386|x387))!=x388);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x389 = UINT64_MAX;
	int64_t x390 = -1LL;
	volatile int16_t x391 = 0;
	int8_t x392 = -1;

    t97 = ((x389&(x390|x391))!=x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x393 = -1;
	volatile int64_t x394 = INT64_MIN;
	int8_t x395 = INT8_MIN;
	int16_t x396 = -1;
	static volatile int32_t t98 = -57825060;

    t98 = ((x393&(x394|x395))!=x396);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x397 = INT16_MIN;
	int16_t x398 = 763;
	uint64_t x399 = 32777520LLU;
	int64_t x400 = 30LL;
	int32_t t99 = -19751;

    t99 = ((x397&(x398|x399))!=x400);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint16_t x401 = UINT16_MAX;
	int32_t x402 = -1;
	static uint8_t x403 = 27U;
	static int64_t x404 = INT64_MIN;
	int32_t t100 = -120727;

    t100 = ((x401&(x402|x403))!=x404);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x405 = 3U;
	static volatile uint32_t x408 = 29017179U;
	int32_t t101 = -941;

    t101 = ((x405&(x406|x407))!=x408);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x409 = 1042414516U;
	int16_t x410 = INT16_MIN;
	volatile uint32_t x411 = 241U;
	int32_t x412 = -46241112;
	volatile int32_t t102 = 58;

    t102 = ((x409&(x410|x411))!=x412);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint32_t x413 = UINT32_MAX;
	static uint64_t x414 = UINT64_MAX;
	static uint16_t x415 = UINT16_MAX;
	int16_t x416 = -1;
	static int32_t t103 = 1;

    t103 = ((x413&(x414|x415))!=x416);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x418 = 885090353U;
	uint32_t x419 = 42U;
	int64_t x420 = -1LL;
	int32_t t104 = 158176210;

    t104 = ((x417&(x418|x419))!=x420);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x421 = 1U;
	static int8_t x422 = INT8_MIN;
	volatile int8_t x423 = -1;
	int32_t t105 = -267;

    t105 = ((x421&(x422|x423))!=x424);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x425 = -1;
	static uint16_t x426 = 7092U;
	int16_t x427 = -1;
	int16_t x428 = -13464;
	volatile int32_t t106 = -59;

    t106 = ((x425&(x426|x427))!=x428);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x429 = 0;
	int16_t x431 = INT16_MIN;
	volatile int32_t t107 = -2;

    t107 = ((x429&(x430|x431))!=x432);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x433 = 51U;
	static uint64_t x434 = UINT64_MAX;
	int32_t x435 = INT32_MAX;
	int64_t x436 = 900531147338867LL;
	volatile int32_t t108 = 1027533;

    t108 = ((x433&(x434|x435))!=x436);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x437 = -1;
	volatile uint32_t x438 = 240969U;
	volatile int32_t x439 = INT32_MAX;
	static volatile int64_t x440 = INT64_MAX;
	int32_t t109 = -4174;

    t109 = ((x437&(x438|x439))!=x440);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x441 = 29;
	volatile uint8_t x443 = 27U;
	static uint16_t x444 = UINT16_MAX;
	volatile int32_t t110 = 121227501;

    t110 = ((x441&(x442|x443))!=x444);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int8_t x445 = 7;
	int16_t x446 = -1;
	static uint8_t x447 = UINT8_MAX;
	uint16_t x448 = 7U;
	int32_t t111 = -2483755;

    t111 = ((x445&(x446|x447))!=x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x450 = INT32_MAX;
	uint32_t x451 = 20897U;
	int16_t x452 = INT16_MAX;
	static volatile int32_t t112 = -9219790;

    t112 = ((x449&(x450|x451))!=x452);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x455 = 116LLU;
	volatile int32_t t113 = 6;

    t113 = ((x453&(x454|x455))!=x456);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x458 = 721U;
	int8_t x460 = -3;

    t114 = ((x457&(x458|x459))!=x460);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x463 = INT32_MIN;
	int8_t x464 = INT8_MIN;
	int32_t t115 = 91678743;

    t115 = ((x461&(x462|x463))!=x464);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x465 = INT16_MAX;
	static uint64_t x466 = 3169LLU;
	uint64_t x467 = 48LLU;
	volatile int16_t x468 = INT16_MIN;
	int32_t t116 = -3260;

    t116 = ((x465&(x466|x467))!=x468);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static int64_t x469 = INT64_MAX;
	static volatile uint8_t x470 = UINT8_MAX;
	volatile int32_t x471 = 18701;
	int32_t t117 = 144;

    t117 = ((x469&(x470|x471))!=x472);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int64_t x473 = -1LL;
	int32_t x474 = INT32_MIN;
	int64_t x475 = -40332724032LL;
	static volatile int64_t x476 = -484916930LL;

    t118 = ((x473&(x474|x475))!=x476);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x477 = -1340;
	uint16_t x478 = 2U;
	uint64_t x479 = 101959249LLU;
	static uint16_t x480 = 30U;
	static volatile int32_t t119 = 34;

    t119 = ((x477&(x478|x479))!=x480);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x481 = INT8_MIN;
	uint32_t x482 = 4946U;

    t120 = ((x481&(x482|x483))!=x484);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x485 = 305535822U;
	int64_t x486 = INT64_MAX;
	volatile int8_t x487 = 14;
	uint8_t x488 = UINT8_MAX;
	volatile int32_t t121 = 56033;

    t121 = ((x485&(x486|x487))!=x488);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x490 = 14775524LLU;
	static int16_t x491 = -9710;
	static volatile int64_t x492 = INT64_MAX;
	int32_t t122 = 810204115;

    t122 = ((x489&(x490|x491))!=x492);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x493 = -5;
	int64_t x494 = -32LL;
	int8_t x495 = 8;

    t123 = ((x493&(x494|x495))!=x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static int64_t x497 = INT64_MAX;
	volatile uint16_t x498 = UINT16_MAX;
	uint16_t x500 = 3820U;
	static int32_t t124 = 951;

    t124 = ((x497&(x498|x499))!=x500);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x501 = INT8_MIN;
	volatile int16_t x502 = INT16_MAX;
	int8_t x504 = 1;
	static int32_t t125 = 70366340;

    t125 = ((x501&(x502|x503))!=x504);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x505 = -7;
	static int8_t x506 = 32;
	uint64_t x507 = UINT64_MAX;
	int32_t t126 = 1582831;

    t126 = ((x505&(x506|x507))!=x508);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x510 = INT8_MAX;
	uint32_t x511 = 516198U;
	int32_t x512 = INT32_MIN;

    t127 = ((x509&(x510|x511))!=x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x513 = -1;
	volatile int16_t x514 = 3;
	uint16_t x515 = UINT16_MAX;
	static volatile int32_t x516 = -1;
	volatile int32_t t128 = 7;

    t128 = ((x513&(x514|x515))!=x516);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x519 = INT16_MAX;
	volatile uint16_t x520 = UINT16_MAX;
	volatile int32_t t129 = 723541;

    t129 = ((x517&(x518|x519))!=x520);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x521 = INT64_MIN;
	int32_t x522 = 3657388;
	volatile int32_t x523 = INT32_MIN;
	int32_t t130 = 15;

    t130 = ((x521&(x522|x523))!=x524);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x525 = -3;
	static uint32_t x526 = 5340971U;
	int8_t x527 = INT8_MIN;
	uint16_t x528 = UINT16_MAX;
	volatile int32_t t131 = 29634;

    t131 = ((x525&(x526|x527))!=x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x529 = INT16_MAX;
	int64_t x530 = INT64_MIN;
	int16_t x531 = -1;
	static int16_t x532 = 7373;
	volatile int32_t t132 = 355445;

    t132 = ((x529&(x530|x531))!=x532);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x533 = UINT64_MAX;
	uint32_t x534 = UINT32_MAX;
	static int16_t x535 = INT16_MIN;
	static uint64_t x536 = UINT64_MAX;
	int32_t t133 = -483;

    t133 = ((x533&(x534|x535))!=x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x537 = -239973739;
	int16_t x538 = -1;
	int16_t x539 = INT16_MIN;
	uint64_t x540 = UINT64_MAX;

    t134 = ((x537&(x538|x539))!=x540);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x541 = 1;
	int64_t x542 = INT64_MIN;
	volatile int32_t x543 = INT32_MIN;
	int32_t t135 = -180435;

    t135 = ((x541&(x542|x543))!=x544);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x545 = 1062U;
	int16_t x547 = INT16_MAX;
	uint32_t x548 = 68875U;

    t136 = ((x545&(x546|x547))!=x548);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x549 = -1;
	int32_t x550 = -1;
	uint8_t x552 = 28U;

    t137 = ((x549&(x550|x551))!=x552);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x553 = 9787LLU;
	static uint16_t x555 = UINT16_MAX;
	int8_t x556 = INT8_MIN;
	volatile int32_t t138 = -2450;

    t138 = ((x553&(x554|x555))!=x556);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x558 = INT8_MIN;
	static int16_t x559 = -1;
	int32_t x560 = -1;
	int32_t t139 = 23;

    t139 = ((x557&(x558|x559))!=x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x561 = INT32_MIN;
	uint16_t x562 = 7633U;
	int32_t x563 = INT32_MIN;
	int32_t x564 = INT32_MIN;
	static volatile int32_t t140 = 0;

    t140 = ((x561&(x562|x563))!=x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x565 = 1U;
	int32_t x566 = INT32_MAX;
	volatile int8_t x567 = -17;
	int16_t x568 = INT16_MIN;
	int32_t t141 = -9;

    t141 = ((x565&(x566|x567))!=x568);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint8_t x569 = 47U;
	uint8_t x570 = UINT8_MAX;
	uint32_t x571 = UINT32_MAX;
	int16_t x572 = INT16_MAX;
	static int32_t t142 = 5;

    t142 = ((x569&(x570|x571))!=x572);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x573 = 441782208U;
	int8_t x574 = INT8_MIN;
	uint16_t x575 = UINT16_MAX;
	static uint16_t x576 = 2630U;
	int32_t t143 = -76;

    t143 = ((x573&(x574|x575))!=x576);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x577 = INT64_MAX;
	uint32_t x578 = UINT32_MAX;
	uint32_t x579 = 114668U;
	static int32_t x580 = -1;
	int32_t t144 = -3652125;

    t144 = ((x577&(x578|x579))!=x580);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x584 = 146797473;
	static volatile int32_t t145 = 1999489;

    t145 = ((x581&(x582|x583))!=x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x585 = UINT32_MAX;
	uint16_t x586 = 36U;
	uint64_t x588 = 138861LLU;

    t146 = ((x585&(x586|x587))!=x588);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x590 = 2021U;
	uint8_t x591 = 1U;
	volatile int64_t x592 = INT64_MAX;

    t147 = ((x589&(x590|x591))!=x592);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x593 = 225984307LLU;
	int64_t x594 = 35882324081507LL;
	uint16_t x596 = 3403U;
	int32_t t148 = 9821884;

    t148 = ((x593&(x594|x595))!=x596);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x597 = UINT64_MAX;
	uint64_t x598 = 108126747510LLU;
	uint64_t x600 = 31261416403565LLU;
	volatile int32_t t149 = 121;

    t149 = ((x597&(x598|x599))!=x600);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x601 = -9;
	int16_t x603 = INT16_MAX;
	int16_t x604 = 7149;

    t150 = ((x601&(x602|x603))!=x604);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint16_t x605 = UINT16_MAX;
	int32_t x606 = -157233530;
	uint8_t x607 = UINT8_MAX;
	static int32_t t151 = 1968626;

    t151 = ((x605&(x606|x607))!=x608);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x610 = -1LL;
	volatile int64_t x612 = INT64_MIN;
	volatile int32_t t152 = -139386;

    t152 = ((x609&(x610|x611))!=x612);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x613 = -45833;
	int8_t x614 = INT8_MIN;
	volatile int8_t x615 = 29;
	uint16_t x616 = 10190U;
	static int32_t t153 = 1;

    t153 = ((x613&(x614|x615))!=x616);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x617 = 0;
	int16_t x618 = 300;
	static int64_t x619 = INT64_MAX;
	uint16_t x620 = 728U;
	int32_t t154 = -114239;

    t154 = ((x617&(x618|x619))!=x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x621 = UINT16_MAX;
	int16_t x622 = -4;
	int32_t x623 = INT32_MIN;
	int32_t t155 = 13039;

    t155 = ((x621&(x622|x623))!=x624);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static int64_t x625 = INT64_MIN;
	uint64_t x627 = UINT64_MAX;
	int8_t x628 = INT8_MIN;
	volatile int32_t t156 = -305;

    t156 = ((x625&(x626|x627))!=x628);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x629 = -1;
	volatile int32_t x631 = INT32_MIN;
	volatile int16_t x632 = -9;

    t157 = ((x629&(x630|x631))!=x632);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x633 = 8U;
	volatile int8_t x634 = INT8_MIN;
	static uint64_t x635 = 255956693LLU;
	uint32_t x636 = 2U;

    t158 = ((x633&(x634|x635))!=x636);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint32_t x637 = 1258965U;
	volatile int32_t x638 = INT32_MAX;
	volatile uint16_t x639 = 1U;
	int8_t x640 = -7;
	int32_t t159 = -96297;

    t159 = ((x637&(x638|x639))!=x640);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x641 = UINT32_MAX;
	volatile uint32_t x642 = 3116U;
	volatile int64_t x643 = -1LL;
	int32_t x644 = INT32_MIN;

    t160 = ((x641&(x642|x643))!=x644);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile int64_t x647 = INT64_MIN;
	static uint64_t x648 = 11800242131925LLU;
	int32_t t161 = 2443479;

    t161 = ((x645&(x646|x647))!=x648);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x649 = UINT32_MAX;
	int32_t x650 = -1;
	uint8_t x651 = 26U;
	volatile int32_t x652 = INT32_MAX;
	static int32_t t162 = -39654548;

    t162 = ((x649&(x650|x651))!=x652);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint32_t x653 = 402601U;
	uint16_t x655 = UINT16_MAX;
	int64_t x656 = INT64_MIN;

    t163 = ((x653&(x654|x655))!=x656);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x657 = INT32_MIN;
	int64_t x659 = INT64_MIN;
	volatile int32_t t164 = -2477427;

    t164 = ((x657&(x658|x659))!=x660);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    

    t165 = ((x661&(x662|x663))!=x664);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static int16_t x665 = INT16_MAX;
	static int32_t x666 = 15908158;
	volatile uint64_t x667 = 896222423438055214LLU;

    t166 = ((x665&(x666|x667))!=x668);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x669 = UINT32_MAX;
	int16_t x670 = INT16_MIN;
	int64_t x671 = 5LL;
	volatile uint64_t x672 = UINT64_MAX;
	static int32_t t167 = 830073111;

    t167 = ((x669&(x670|x671))!=x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint16_t x673 = 508U;
	volatile int32_t x674 = 1;
	int64_t x675 = INT64_MIN;
	uint32_t x676 = 11U;

    t168 = ((x673&(x674|x675))!=x676);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile int32_t x677 = INT32_MAX;
	int8_t x678 = -10;
	volatile int16_t x679 = -1;
	int32_t x680 = -1;
	int32_t t169 = -161;

    t169 = ((x677&(x678|x679))!=x680);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x681 = -1;
	uint16_t x682 = 2432U;
	volatile uint64_t x683 = 110761683640274LLU;
	volatile int32_t x684 = 700484596;

    t170 = ((x681&(x682|x683))!=x684);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x685 = UINT64_MAX;
	int16_t x686 = -30;
	uint16_t x687 = 2U;
	volatile int16_t x688 = 1;
	volatile int32_t t171 = -23545514;

    t171 = ((x685&(x686|x687))!=x688);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x689 = INT8_MIN;
	uint16_t x690 = 1U;
	static volatile int64_t x691 = 87676466511331947LL;
	int8_t x692 = -1;
	int32_t t172 = 65;

    t172 = ((x689&(x690|x691))!=x692);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x693 = -21;
	static int16_t x694 = -6;
	int32_t x695 = INT32_MAX;
	static volatile int32_t x696 = 2336;

    t173 = ((x693&(x694|x695))!=x696);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint16_t x697 = 994U;
	int16_t x698 = 0;
	int64_t x699 = -1197669944641696232LL;
	static uint32_t x700 = 103U;
	volatile int32_t t174 = 263;

    t174 = ((x697&(x698|x699))!=x700);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x701 = 1558LLU;
	uint8_t x702 = 54U;
	static volatile int32_t x703 = INT32_MIN;
	uint16_t x704 = 1U;
	volatile int32_t t175 = 128;

    t175 = ((x701&(x702|x703))!=x704);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x705 = 785041LLU;
	int32_t x706 = -9;
	int64_t x708 = INT64_MIN;
	volatile int32_t t176 = 0;

    t176 = ((x705&(x706|x707))!=x708);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile uint8_t x709 = 29U;
	int8_t x711 = -27;
	uint64_t x712 = UINT64_MAX;

    t177 = ((x709&(x710|x711))!=x712);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint32_t x713 = 986148783U;
	static volatile int16_t x714 = -1;
	volatile int8_t x715 = -1;
	int8_t x716 = 1;
	int32_t t178 = -6465;

    t178 = ((x713&(x714|x715))!=x716);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x717 = INT16_MAX;
	uint32_t x719 = 1U;
	static volatile int64_t x720 = -25695381LL;
	static volatile int32_t t179 = 29;

    t179 = ((x717&(x718|x719))!=x720);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint8_t x721 = 2U;
	int16_t x722 = -1;
	volatile int64_t x723 = INT64_MIN;
	int16_t x724 = -1;
	int32_t t180 = 75177;

    t180 = ((x721&(x722|x723))!=x724);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x725 = 214U;
	int64_t x726 = INT64_MIN;
	static volatile int8_t x727 = -1;

    t181 = ((x725&(x726|x727))!=x728);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x729 = 7;
	int32_t x730 = INT32_MIN;
	int8_t x731 = INT8_MIN;
	volatile int32_t t182 = 84;

    t182 = ((x729&(x730|x731))!=x732);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint32_t x733 = 27991044U;
	uint16_t x734 = 39U;
	int8_t x735 = 1;
	volatile int32_t t183 = -134831;

    t183 = ((x733&(x734|x735))!=x736);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x739 = UINT16_MAX;
	int32_t x740 = INT32_MIN;
	volatile int32_t t184 = -32;

    t184 = ((x737&(x738|x739))!=x740);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x741 = INT64_MAX;
	volatile int8_t x742 = 5;
	int32_t x743 = INT32_MAX;
	int32_t t185 = -1916379;

    t185 = ((x741&(x742|x743))!=x744);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int32_t x745 = INT32_MAX;
	uint32_t x747 = 1U;
	int8_t x748 = INT8_MIN;
	volatile int32_t t186 = -167139;

    t186 = ((x745&(x746|x747))!=x748);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x749 = 6U;
	static uint8_t x750 = 20U;
	int64_t x752 = -16494622724374218LL;
	volatile int32_t t187 = 30797627;

    t187 = ((x749&(x750|x751))!=x752);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x754 = INT8_MAX;
	static int64_t x755 = -1LL;
	static int32_t x756 = 589;

    t188 = ((x753&(x754|x755))!=x756);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x757 = 30343U;
	int32_t x758 = INT32_MAX;
	int8_t x759 = INT8_MIN;
	int64_t x760 = INT64_MIN;
	int32_t t189 = -1576;

    t189 = ((x757&(x758|x759))!=x760);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x761 = 2601;
	int16_t x762 = INT16_MIN;
	uint8_t x763 = UINT8_MAX;
	uint16_t x764 = 4U;
	static int32_t t190 = -6;

    t190 = ((x761&(x762|x763))!=x764);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint16_t x765 = UINT16_MAX;
	static int32_t x768 = -1;
	volatile int32_t t191 = -1;

    t191 = ((x765&(x766|x767))!=x768);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x769 = 19910LLU;
	uint8_t x770 = 1U;
	volatile int16_t x771 = INT16_MAX;
	volatile int16_t x772 = -1697;
	int32_t t192 = 126874219;

    t192 = ((x769&(x770|x771))!=x772);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x773 = -1;
	static uint8_t x774 = 1U;
	int32_t x775 = INT32_MAX;
	int32_t t193 = -2398979;

    t193 = ((x773&(x774|x775))!=x776);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x777 = INT8_MIN;
	uint64_t x778 = 8462653693LLU;
	int32_t x779 = INT32_MIN;
	volatile int32_t t194 = 16848065;

    t194 = ((x777&(x778|x779))!=x780);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int8_t x781 = INT8_MIN;
	volatile int64_t x783 = INT64_MIN;
	int16_t x784 = 0;
	volatile int32_t t195 = 375892960;

    t195 = ((x781&(x782|x783))!=x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x786 = INT16_MIN;
	uint32_t x788 = 259U;
	volatile int32_t t196 = 322280441;

    t196 = ((x785&(x786|x787))!=x788);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int64_t x789 = 13246150970749LL;
	int32_t x792 = INT32_MIN;
	int32_t t197 = -861588404;

    t197 = ((x789&(x790|x791))!=x792);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x793 = 2U;
	uint8_t x794 = 1U;
	uint8_t x795 = UINT8_MAX;
	volatile int8_t x796 = -1;
	int32_t t198 = -60031;

    t198 = ((x793&(x794|x795))!=x796);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x797 = 84833LLU;
	int64_t x798 = -39304391LL;
	static uint64_t x800 = UINT64_MAX;
	int32_t t199 = 2202402;

    t199 = ((x797&(x798|x799))!=x800);

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

