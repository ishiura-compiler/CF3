
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

int8_t x1 = INT8_MIN;
int16_t x2 = INT16_MIN;
uint32_t x4 = UINT32_MAX;
int32_t t1 = -535447530;
volatile int8_t x14 = INT8_MIN;
volatile int8_t x16 = 1;
uint16_t x21 = UINT16_MAX;
volatile int16_t x24 = INT16_MIN;
static volatile int32_t x28 = INT32_MAX;
int16_t x31 = -99;
uint64_t x32 = UINT64_MAX;
int32_t t7 = 359745;
int16_t x36 = INT16_MIN;
int32_t t8 = -341829899;
int32_t x43 = INT32_MAX;
volatile int8_t x47 = INT8_MAX;
int16_t x51 = 8788;
int32_t t12 = 3;
volatile int32_t t13 = 57;
int16_t x57 = -56;
volatile int32_t t14 = -5303843;
int8_t x66 = 0;
uint16_t x69 = UINT16_MAX;
int32_t t17 = 512722;
volatile uint16_t x78 = 0U;
volatile uint16_t x89 = UINT16_MAX;
int32_t t21 = 747929966;
int8_t x95 = -1;
int32_t t23 = -32198277;
uint32_t x102 = 82620283U;
int32_t t24 = -3;
int16_t x112 = INT16_MAX;
static volatile int32_t t26 = 7165;
int16_t x142 = INT16_MAX;
uint64_t x146 = 15872419609081003LLU;
volatile int32_t t34 = -123738;
volatile uint64_t x155 = UINT64_MAX;
volatile int16_t x159 = -1;
uint8_t x167 = UINT8_MAX;
volatile int32_t t40 = 1;
int16_t x192 = -57;
int8_t x194 = INT8_MIN;
volatile int8_t x203 = INT8_MIN;
int32_t x208 = INT32_MIN;
int32_t t50 = 44714;
volatile int16_t x218 = INT16_MIN;
volatile int8_t x219 = -1;
volatile int8_t x222 = INT8_MIN;
static uint8_t x228 = 0U;
uint64_t x229 = UINT64_MAX;
volatile int32_t t55 = 6918426;
static volatile int64_t x238 = -1LL;
int32_t x240 = 2;
int8_t x242 = 3;
uint64_t x245 = 8639878781733624086LLU;
static int16_t x248 = INT16_MIN;
volatile int32_t t59 = -3662;
int16_t x256 = 7;
uint32_t x265 = 14054494U;
int8_t x269 = 0;
uint16_t x271 = 17U;
static int16_t x281 = INT16_MIN;
uint32_t x283 = 104586U;
uint8_t x284 = 108U;
int32_t x286 = INT32_MAX;
volatile int64_t x287 = INT64_MAX;
uint16_t x289 = 20086U;
int32_t t70 = -103460;
static uint64_t x299 = UINT64_MAX;
int8_t x303 = -10;
volatile int32_t t73 = -370926;
int32_t t74 = 3133;
static int32_t x319 = -2036850;
int8_t x329 = INT8_MAX;
static int64_t x330 = INT64_MAX;
volatile int32_t x331 = -3;
int64_t x336 = -1LL;
volatile int8_t x337 = INT8_MAX;
uint16_t x341 = UINT16_MAX;
int8_t x352 = -1;
volatile uint64_t x365 = UINT64_MAX;
int16_t x376 = INT16_MIN;
static int64_t x384 = -13840906LL;
int16_t x387 = INT16_MAX;
int32_t x390 = INT32_MIN;
int8_t x391 = INT8_MAX;
static uint64_t x393 = 2088158330525LLU;
static volatile int64_t x396 = INT64_MIN;
int16_t x399 = -1;
volatile int32_t t93 = -1;
uint16_t x403 = UINT16_MAX;
uint8_t x404 = 78U;
int8_t x411 = INT8_MAX;
int32_t x417 = INT32_MIN;
volatile int64_t x421 = INT64_MIN;
int16_t x424 = 0;
uint32_t x426 = UINT32_MAX;
uint32_t x427 = UINT32_MAX;
int32_t t100 = -2028197;
int32_t x429 = -1;
uint64_t x434 = UINT64_MAX;
static volatile int32_t x438 = INT32_MIN;
static int32_t t104 = 43;
static uint16_t x452 = UINT16_MAX;
volatile uint64_t x454 = UINT64_MAX;
int64_t x456 = 176644249LL;
int32_t t107 = -2;
volatile uint64_t x458 = 44642021160556LLU;
volatile uint8_t x463 = UINT8_MAX;
int32_t t110 = 3;
int32_t x471 = 13945595;
int32_t x475 = INT32_MIN;
int8_t x476 = INT8_MIN;
int64_t x479 = INT64_MAX;
int32_t t113 = -2;
volatile int32_t t114 = -424112148;
int32_t x485 = INT32_MIN;
static int32_t t116 = 7;
volatile int16_t x505 = 16;
int8_t x514 = 29;
int32_t t122 = -20337027;
volatile uint64_t x524 = 5909084777149432640LLU;
int32_t t123 = -169;
uint64_t x525 = 23910351LLU;
volatile int32_t t124 = -6;
volatile int8_t x529 = INT8_MIN;
uint16_t x531 = 625U;
volatile int64_t x540 = INT64_MIN;
volatile int8_t x542 = INT8_MAX;
volatile int32_t t129 = 110;
static uint8_t x549 = 1U;
volatile int32_t t130 = -10871124;
volatile int8_t x555 = -1;
int64_t x558 = INT64_MIN;
int64_t x559 = INT64_MAX;
volatile int32_t x562 = -1;
int8_t x567 = -7;
static int8_t x574 = -1;
int32_t x575 = INT32_MIN;
int8_t x577 = -1;
int8_t x584 = 0;
int8_t x589 = INT8_MAX;
int64_t x601 = -1LL;
int16_t x604 = INT16_MIN;
int32_t t149 = 653036;
volatile int32_t t150 = -378016;
volatile uint16_t x645 = 52U;
int16_t x652 = INT16_MAX;
volatile int8_t x657 = -40;
int32_t t155 = 139310;
int16_t x668 = INT16_MAX;
uint16_t x678 = 256U;
uint16_t x679 = UINT16_MAX;
int16_t x680 = INT16_MIN;
volatile int32_t t158 = 435729;
volatile uint16_t x684 = 2894U;
int8_t x686 = 14;
static uint8_t x692 = UINT8_MAX;
volatile uint32_t x701 = UINT32_MAX;
volatile int16_t x708 = 478;
int32_t x710 = INT32_MIN;
static volatile int32_t t166 = -510765;
uint16_t x714 = UINT16_MAX;
static volatile int32_t t167 = 109251;
int64_t x720 = INT64_MAX;
int8_t x725 = -14;
uint8_t x726 = UINT8_MAX;
int16_t x727 = INT16_MIN;
volatile uint8_t x733 = 31U;
int64_t x734 = INT64_MIN;
static int16_t x739 = 786;
int8_t x740 = INT8_MIN;
int32_t x742 = -1;
volatile int64_t x747 = -200644264485LL;
int16_t x751 = -1;
volatile uint16_t x756 = 22U;
uint8_t x757 = 1U;
int64_t x763 = INT64_MIN;
int32_t x765 = -11;
int64_t x775 = INT64_MAX;
int8_t x783 = INT8_MAX;
int8_t x784 = INT8_MIN;
static int8_t x790 = -14;
static uint16_t x791 = 3383U;
int8_t x805 = -1;
int32_t t188 = 501742;
int8_t x812 = INT8_MIN;
static int8_t x823 = -1;
int32_t x824 = INT32_MIN;
volatile int32_t t193 = 11893338;
int8_t x843 = 8;
int16_t x846 = 29;
int32_t t197 = -21477;
int32_t x851 = -24;
static volatile int64_t x853 = INT64_MIN;


void f0(void) {
    	int64_t x3 = -1LL;
	int32_t t0 = -973110522;

    t0 = ((x1*(x2%x3))!=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = 7;
	static volatile int16_t x6 = INT16_MIN;
	int32_t x7 = -1;
	static int32_t x8 = -10;

    t1 = ((x5*(x6%x7))!=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = 640877342563LLU;
	static volatile uint8_t x10 = UINT8_MAX;
	int32_t x11 = -15476048;
	int32_t x12 = INT32_MAX;
	volatile int32_t t2 = 58210975;

    t2 = ((x9*(x10%x11))!=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x13 = INT32_MIN;
	int64_t x15 = INT64_MAX;
	volatile int32_t t3 = 26;

    t3 = ((x13*(x14%x15))!=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MIN;
	volatile uint64_t x18 = UINT64_MAX;
	static volatile uint16_t x19 = 31U;
	int8_t x20 = -1;
	volatile int32_t t4 = 240530;

    t4 = ((x17*(x18%x19))!=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x22 = 1;
	int64_t x23 = INT64_MIN;
	static int32_t t5 = -35088;

    t5 = ((x21*(x22%x23))!=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint64_t x25 = UINT64_MAX;
	int64_t x26 = -1LL;
	int8_t x27 = INT8_MAX;
	int32_t t6 = -3442;

    t6 = ((x25*(x26%x27))!=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = INT8_MIN;
	int32_t x30 = INT32_MIN;

    t7 = ((x29*(x30%x31))!=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint16_t x33 = 25389U;
	uint64_t x34 = 2033988LLU;
	int32_t x35 = INT32_MAX;

    t8 = ((x33*(x34%x35))!=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x37 = -1;
	int16_t x38 = 12434;
	int16_t x39 = INT16_MIN;
	int32_t x40 = 282388333;
	int32_t t9 = 588647;

    t9 = ((x37*(x38%x39))!=x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = -3308938215LL;
	static uint16_t x42 = 27U;
	int64_t x44 = -1LL;
	static volatile int32_t t10 = 708061222;

    t10 = ((x41*(x42%x43))!=x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint16_t x45 = UINT16_MAX;
	uint32_t x46 = 1128906966U;
	int32_t x48 = INT32_MAX;
	int32_t t11 = 17528620;

    t11 = ((x45*(x46%x47))!=x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = -164;
	static volatile uint8_t x50 = 13U;
	int16_t x52 = -56;

    t12 = ((x49*(x50%x51))!=x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x53 = INT8_MAX;
	uint8_t x54 = UINT8_MAX;
	static int16_t x55 = INT16_MIN;
	volatile uint64_t x56 = UINT64_MAX;

    t13 = ((x53*(x54%x55))!=x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x58 = 15LL;
	int32_t x59 = 119;
	static volatile int8_t x60 = 14;

    t14 = ((x57*(x58%x59))!=x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = INT8_MAX;
	volatile int16_t x62 = -30;
	int16_t x63 = -255;
	int64_t x64 = -96LL;
	int32_t t15 = 19036;

    t15 = ((x61*(x62%x63))!=x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = -1;
	static uint32_t x67 = UINT32_MAX;
	int32_t x68 = -1;
	int32_t t16 = 50809897;

    t16 = ((x65*(x66%x67))!=x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint8_t x70 = 1U;
	int32_t x71 = INT32_MAX;
	volatile uint64_t x72 = 13827206491808670LLU;

    t17 = ((x69*(x70%x71))!=x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint16_t x77 = UINT16_MAX;
	int64_t x79 = -1LL;
	int32_t x80 = INT32_MAX;
	static volatile int32_t t18 = -837278;

    t18 = ((x77*(x78%x79))!=x80);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x81 = INT8_MIN;
	int32_t x82 = INT32_MIN;
	int64_t x83 = INT64_MAX;
	int64_t x84 = INT64_MIN;
	volatile int32_t t19 = 12931;

    t19 = ((x81*(x82%x83))!=x84);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int16_t x85 = -1;
	int16_t x86 = INT16_MAX;
	int64_t x87 = INT64_MIN;
	int8_t x88 = 0;
	int32_t t20 = 4861693;

    t20 = ((x85*(x86%x87))!=x88);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x90 = UINT8_MAX;
	static uint32_t x91 = 497184782U;
	static volatile uint32_t x92 = UINT32_MAX;

    t21 = ((x89*(x90%x91))!=x92);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x93 = INT16_MIN;
	int16_t x94 = -577;
	uint64_t x96 = UINT64_MAX;
	int32_t t22 = 8802;

    t22 = ((x93*(x94%x95))!=x96);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x97 = 201488726LL;
	volatile int8_t x98 = 41;
	uint8_t x99 = 28U;
	int8_t x100 = -3;

    t23 = ((x97*(x98%x99))!=x100);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint32_t x101 = 103U;
	int32_t x103 = 16510;
	volatile uint8_t x104 = 2U;

    t24 = ((x101*(x102%x103))!=x104);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile uint32_t x105 = UINT32_MAX;
	volatile int8_t x106 = -12;
	volatile int32_t x107 = INT32_MIN;
	volatile uint64_t x108 = UINT64_MAX;
	volatile int32_t t25 = 138;

    t25 = ((x105*(x106%x107))!=x108);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x109 = UINT16_MAX;
	uint8_t x110 = UINT8_MAX;
	int32_t x111 = INT32_MAX;

    t26 = ((x109*(x110%x111))!=x112);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x113 = 32532231U;
	int16_t x114 = -113;
	int8_t x115 = INT8_MAX;
	static int64_t x116 = INT64_MIN;
	int32_t t27 = 4852415;

    t27 = ((x113*(x114%x115))!=x116);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x117 = -309;
	int8_t x118 = -1;
	int32_t x119 = 14;
	uint8_t x120 = UINT8_MAX;
	static volatile int32_t t28 = -1701;

    t28 = ((x117*(x118%x119))!=x120);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile uint32_t x121 = 4984U;
	static int64_t x122 = INT64_MIN;
	uint64_t x123 = 1663172022242LLU;
	int64_t x124 = INT64_MIN;
	int32_t t29 = -62;

    t29 = ((x121*(x122%x123))!=x124);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int16_t x129 = INT16_MAX;
	static volatile int32_t x130 = 3206;
	int32_t x131 = INT32_MAX;
	uint64_t x132 = 1158383926558458LLU;
	int32_t t30 = 1;

    t30 = ((x129*(x130%x131))!=x132);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile uint64_t x133 = 285262018855125617LLU;
	static int32_t x134 = INT32_MIN;
	int64_t x135 = -479156250674300696LL;
	static volatile int16_t x136 = 2807;
	int32_t t31 = -239743320;

    t31 = ((x133*(x134%x135))!=x136);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint16_t x137 = 12132U;
	int8_t x138 = -1;
	uint16_t x139 = UINT16_MAX;
	static uint64_t x140 = 86712990184327LLU;
	int32_t t32 = -290036;

    t32 = ((x137*(x138%x139))!=x140);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x141 = -7LL;
	volatile int32_t x143 = -1;
	int32_t x144 = 425;
	static int32_t t33 = -842601153;

    t33 = ((x141*(x142%x143))!=x144);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x145 = 3804;
	uint32_t x147 = 84009938U;
	volatile int16_t x148 = INT16_MAX;

    t34 = ((x145*(x146%x147))!=x148);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int64_t x149 = -244489LL;
	int64_t x150 = INT64_MAX;
	uint16_t x151 = UINT16_MAX;
	int8_t x152 = -48;
	static volatile int32_t t35 = 63;

    t35 = ((x149*(x150%x151))!=x152);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint64_t x153 = UINT64_MAX;
	static int32_t x154 = INT32_MIN;
	int8_t x156 = INT8_MIN;
	volatile int32_t t36 = 110669;

    t36 = ((x153*(x154%x155))!=x156);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x157 = -498494563826838LL;
	int64_t x158 = 349242699972569LL;
	static int16_t x160 = -41;
	volatile int32_t t37 = 118;

    t37 = ((x157*(x158%x159))!=x160);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x161 = INT32_MIN;
	int32_t x162 = -1;
	uint32_t x163 = 139683923U;
	int16_t x164 = 1;
	static volatile int32_t t38 = -502;

    t38 = ((x161*(x162%x163))!=x164);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x165 = INT16_MIN;
	int8_t x166 = INT8_MIN;
	int8_t x168 = -1;
	int32_t t39 = -1191879;

    t39 = ((x165*(x166%x167))!=x168);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x169 = 922U;
	int64_t x170 = 4002952059745833462LL;
	static uint8_t x171 = 42U;
	int64_t x172 = INT64_MIN;

    t40 = ((x169*(x170%x171))!=x172);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x173 = 2722U;
	volatile int64_t x174 = INT64_MIN;
	int8_t x175 = -1;
	static int8_t x176 = -10;
	volatile int32_t t41 = -71831389;

    t41 = ((x173*(x174%x175))!=x176);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint8_t x177 = 125U;
	static uint32_t x178 = 104143134U;
	int16_t x179 = 114;
	volatile int32_t x180 = INT32_MAX;
	volatile int32_t t42 = -63;

    t42 = ((x177*(x178%x179))!=x180);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x181 = 1840038715831910036LLU;
	int16_t x182 = INT16_MIN;
	volatile uint16_t x183 = 133U;
	volatile int64_t x184 = -1LL;
	volatile int32_t t43 = -13767384;

    t43 = ((x181*(x182%x183))!=x184);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x185 = 1856U;
	uint16_t x186 = 6U;
	int16_t x187 = INT16_MAX;
	static volatile int16_t x188 = -1;
	static int32_t t44 = -395023;

    t44 = ((x185*(x186%x187))!=x188);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x189 = UINT8_MAX;
	int8_t x190 = 0;
	uint8_t x191 = 1U;
	int32_t t45 = 56350;

    t45 = ((x189*(x190%x191))!=x192);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int64_t x193 = INT64_MAX;
	uint64_t x195 = 194LLU;
	int16_t x196 = INT16_MAX;
	volatile int32_t t46 = 3420;

    t46 = ((x193*(x194%x195))!=x196);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x197 = 1;
	uint16_t x198 = UINT16_MAX;
	int64_t x199 = INT64_MIN;
	int32_t x200 = INT32_MIN;
	int32_t t47 = -39;

    t47 = ((x197*(x198%x199))!=x200);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint16_t x201 = UINT16_MAX;
	int32_t x202 = INT32_MIN;
	volatile int16_t x204 = INT16_MIN;
	int32_t t48 = 26168;

    t48 = ((x201*(x202%x203))!=x204);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int32_t x205 = INT32_MIN;
	int16_t x206 = INT16_MIN;
	volatile uint32_t x207 = UINT32_MAX;
	int32_t t49 = 106327189;

    t49 = ((x205*(x206%x207))!=x208);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x209 = INT8_MIN;
	int16_t x210 = 1;
	int16_t x211 = INT16_MIN;
	uint32_t x212 = 18U;

    t50 = ((x209*(x210%x211))!=x212);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x213 = -141;
	int32_t x214 = -1;
	static int8_t x215 = INT8_MIN;
	static int16_t x216 = INT16_MAX;
	volatile int32_t t51 = -954972277;

    t51 = ((x213*(x214%x215))!=x216);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x217 = INT64_MIN;
	uint16_t x220 = 15221U;
	volatile int32_t t52 = 721;

    t52 = ((x217*(x218%x219))!=x220);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x221 = 126U;
	uint32_t x223 = 653U;
	int32_t x224 = INT32_MAX;
	volatile int32_t t53 = -25703278;

    t53 = ((x221*(x222%x223))!=x224);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint32_t x225 = 1907U;
	static uint16_t x226 = UINT16_MAX;
	int16_t x227 = -1;
	volatile int32_t t54 = -172260;

    t54 = ((x225*(x226%x227))!=x228);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x230 = INT16_MIN;
	uint8_t x231 = UINT8_MAX;
	volatile uint8_t x232 = UINT8_MAX;

    t55 = ((x229*(x230%x231))!=x232);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x233 = UINT16_MAX;
	int16_t x234 = INT16_MIN;
	int32_t x235 = INT32_MIN;
	uint64_t x236 = 2354262LLU;
	volatile int32_t t56 = 42374;

    t56 = ((x233*(x234%x235))!=x236);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint16_t x237 = UINT16_MAX;
	volatile uint16_t x239 = 3U;
	volatile int32_t t57 = 1122;

    t57 = ((x237*(x238%x239))!=x240);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x241 = UINT64_MAX;
	volatile int8_t x243 = INT8_MIN;
	uint64_t x244 = 88493096419151LLU;
	volatile int32_t t58 = 14712623;

    t58 = ((x241*(x242%x243))!=x244);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x246 = INT16_MIN;
	static int32_t x247 = INT32_MIN;

    t59 = ((x245*(x246%x247))!=x248);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x249 = UINT16_MAX;
	volatile int16_t x250 = INT16_MIN;
	static int16_t x251 = INT16_MIN;
	static volatile int16_t x252 = INT16_MAX;
	volatile int32_t t60 = 27283;

    t60 = ((x249*(x250%x251))!=x252);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x253 = INT16_MAX;
	int16_t x254 = -11;
	volatile int64_t x255 = 29LL;
	volatile int32_t t61 = 803;

    t61 = ((x253*(x254%x255))!=x256);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint16_t x257 = UINT16_MAX;
	uint16_t x258 = 0U;
	int16_t x259 = INT16_MIN;
	int16_t x260 = INT16_MIN;
	int32_t t62 = 97;

    t62 = ((x257*(x258%x259))!=x260);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int64_t x261 = 77715LL;
	uint32_t x262 = 14U;
	volatile int64_t x263 = -381809395208422LL;
	int64_t x264 = -1LL;
	static int32_t t63 = 1268;

    t63 = ((x261*(x262%x263))!=x264);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x266 = 2585U;
	static volatile uint32_t x267 = 5736769U;
	int8_t x268 = -11;
	volatile int32_t t64 = 0;

    t64 = ((x265*(x266%x267))!=x268);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int16_t x270 = 32;
	static int32_t x272 = -12;
	static int32_t t65 = -3191424;

    t65 = ((x269*(x270%x271))!=x272);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x273 = 110U;
	int16_t x274 = INT16_MIN;
	int16_t x275 = 10;
	int64_t x276 = INT64_MIN;
	volatile int32_t t66 = 212343015;

    t66 = ((x273*(x274%x275))!=x276);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x277 = -2;
	volatile uint32_t x278 = 23U;
	uint32_t x279 = 179U;
	int64_t x280 = -4313015LL;
	volatile int32_t t67 = -82942889;

    t67 = ((x277*(x278%x279))!=x280);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint32_t x282 = 1626U;
	int32_t t68 = 12474058;

    t68 = ((x281*(x282%x283))!=x284);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x285 = -2862LL;
	int16_t x288 = INT16_MIN;
	static volatile int32_t t69 = 484;

    t69 = ((x285*(x286%x287))!=x288);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x290 = INT64_MIN;
	static int64_t x291 = INT64_MIN;
	uint32_t x292 = UINT32_MAX;

    t70 = ((x289*(x290%x291))!=x292);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x297 = UINT64_MAX;
	volatile int16_t x298 = INT16_MAX;
	uint8_t x300 = UINT8_MAX;
	int32_t t71 = 0;

    t71 = ((x297*(x298%x299))!=x300);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static int8_t x301 = INT8_MIN;
	uint16_t x302 = 1904U;
	static uint32_t x304 = 1U;
	volatile int32_t t72 = 8358760;

    t72 = ((x301*(x302%x303))!=x304);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x305 = -105;
	uint64_t x306 = 203LLU;
	uint8_t x307 = 19U;
	static int16_t x308 = -1;

    t73 = ((x305*(x306%x307))!=x308);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x309 = UINT32_MAX;
	volatile uint16_t x310 = UINT16_MAX;
	int64_t x311 = -1LL;
	int8_t x312 = -1;

    t74 = ((x309*(x310%x311))!=x312);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint64_t x313 = 9022306493108797461LLU;
	uint16_t x314 = 13590U;
	int16_t x315 = INT16_MAX;
	volatile int16_t x316 = -1;
	static volatile int32_t t75 = -65901784;

    t75 = ((x313*(x314%x315))!=x316);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int8_t x317 = INT8_MIN;
	int64_t x318 = INT64_MAX;
	int8_t x320 = -1;
	static volatile int32_t t76 = 131369631;

    t76 = ((x317*(x318%x319))!=x320);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int16_t x325 = 1;
	int8_t x326 = -2;
	static int16_t x327 = INT16_MIN;
	volatile int8_t x328 = INT8_MAX;
	int32_t t77 = 17938;

    t77 = ((x325*(x326%x327))!=x328);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint16_t x332 = 1U;
	volatile int32_t t78 = -21427297;

    t78 = ((x329*(x330%x331))!=x332);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x333 = UINT16_MAX;
	int8_t x334 = -1;
	int64_t x335 = INT64_MIN;
	int32_t t79 = -192656896;

    t79 = ((x333*(x334%x335))!=x336);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x338 = INT8_MIN;
	static volatile int64_t x339 = -1LL;
	static int8_t x340 = INT8_MIN;
	volatile int32_t t80 = -681802666;

    t80 = ((x337*(x338%x339))!=x340);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x342 = UINT64_MAX;
	int8_t x343 = 35;
	int8_t x344 = -1;
	int32_t t81 = -187080;

    t81 = ((x341*(x342%x343))!=x344);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x345 = -1;
	uint32_t x346 = 3982577U;
	int16_t x347 = -1;
	int16_t x348 = INT16_MAX;
	volatile int32_t t82 = -44567;

    t82 = ((x345*(x346%x347))!=x348);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint32_t x349 = 4707U;
	static uint8_t x350 = UINT8_MAX;
	static volatile int8_t x351 = -1;
	volatile int32_t t83 = 13;

    t83 = ((x349*(x350%x351))!=x352);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x353 = INT16_MIN;
	int8_t x354 = INT8_MIN;
	volatile int32_t x355 = -15516;
	uint8_t x356 = UINT8_MAX;
	volatile int32_t t84 = -108;

    t84 = ((x353*(x354%x355))!=x356);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x361 = INT16_MAX;
	uint32_t x362 = 1775790U;
	volatile int8_t x363 = INT8_MAX;
	int32_t x364 = -265520986;
	volatile int32_t t85 = 731014;

    t85 = ((x361*(x362%x363))!=x364);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x366 = -1;
	volatile int8_t x367 = -6;
	static int64_t x368 = -5289483370LL;
	int32_t t86 = -4643974;

    t86 = ((x365*(x366%x367))!=x368);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x369 = -1;
	int32_t x370 = -1;
	uint16_t x371 = 5U;
	int64_t x372 = -1LL;
	volatile int32_t t87 = -953031;

    t87 = ((x369*(x370%x371))!=x372);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint32_t x373 = 14948780U;
	int16_t x374 = 298;
	uint16_t x375 = 98U;
	static volatile int32_t t88 = 19;

    t88 = ((x373*(x374%x375))!=x376);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x381 = UINT32_MAX;
	int8_t x382 = 12;
	int32_t x383 = INT32_MAX;
	static volatile int32_t t89 = 1514;

    t89 = ((x381*(x382%x383))!=x384);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x385 = INT64_MIN;
	uint64_t x386 = UINT64_MAX;
	volatile int64_t x388 = 1065583545824LL;
	volatile int32_t t90 = 1;

    t90 = ((x385*(x386%x387))!=x388);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x389 = -1;
	int16_t x392 = INT16_MIN;
	volatile int32_t t91 = -12737765;

    t91 = ((x389*(x390%x391))!=x392);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x394 = -1;
	uint8_t x395 = UINT8_MAX;
	static volatile int32_t t92 = 18670376;

    t92 = ((x393*(x394%x395))!=x396);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint64_t x397 = 100445404LLU;
	uint8_t x398 = UINT8_MAX;
	int32_t x400 = INT32_MIN;

    t93 = ((x397*(x398%x399))!=x400);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x401 = 6U;
	uint8_t x402 = 62U;
	volatile int32_t t94 = 7;

    t94 = ((x401*(x402%x403))!=x404);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x405 = -1;
	static int8_t x406 = INT8_MIN;
	int64_t x407 = -2LL;
	uint32_t x408 = UINT32_MAX;
	int32_t t95 = -2488;

    t95 = ((x405*(x406%x407))!=x408);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x409 = INT64_MIN;
	int8_t x410 = INT8_MAX;
	int8_t x412 = INT8_MAX;
	static int32_t t96 = -6372;

    t96 = ((x409*(x410%x411))!=x412);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x413 = UINT8_MAX;
	static int16_t x414 = 53;
	uint16_t x415 = 150U;
	int64_t x416 = INT64_MIN;
	volatile int32_t t97 = -37719127;

    t97 = ((x413*(x414%x415))!=x416);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x418 = INT16_MIN;
	volatile int64_t x419 = -1LL;
	int64_t x420 = -6183LL;
	static int32_t t98 = -491;

    t98 = ((x417*(x418%x419))!=x420);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x422 = 25U;
	int8_t x423 = -1;
	int32_t t99 = -4;

    t99 = ((x421*(x422%x423))!=x424);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x425 = UINT64_MAX;
	static uint64_t x428 = UINT64_MAX;

    t100 = ((x425*(x426%x427))!=x428);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x430 = 3U;
	int32_t x431 = 26439;
	int16_t x432 = -376;
	volatile int32_t t101 = 2731643;

    t101 = ((x429*(x430%x431))!=x432);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint32_t x433 = 2982956U;
	int8_t x435 = INT8_MIN;
	uint32_t x436 = 113349U;
	static int32_t t102 = 0;

    t102 = ((x433*(x434%x435))!=x436);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x437 = 33;
	volatile uint32_t x439 = 348994U;
	int8_t x440 = INT8_MAX;
	volatile int32_t t103 = -25422;

    t103 = ((x437*(x438%x439))!=x440);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x441 = INT8_MIN;
	int32_t x442 = -393733;
	int32_t x443 = INT32_MIN;
	int64_t x444 = -24432952LL;

    t104 = ((x441*(x442%x443))!=x444);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static int32_t x445 = -872554952;
	uint64_t x446 = 2LLU;
	volatile int8_t x447 = 23;
	int8_t x448 = INT8_MAX;
	int32_t t105 = -520750809;

    t105 = ((x445*(x446%x447))!=x448);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x449 = INT32_MIN;
	static int16_t x450 = INT16_MAX;
	uint64_t x451 = UINT64_MAX;
	volatile int32_t t106 = 32704;

    t106 = ((x449*(x450%x451))!=x452);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x453 = INT16_MIN;
	static int64_t x455 = 3171531338496LL;

    t107 = ((x453*(x454%x455))!=x456);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x457 = -1;
	volatile int64_t x459 = INT64_MIN;
	int16_t x460 = 1;
	int32_t t108 = -1;

    t108 = ((x457*(x458%x459))!=x460);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int64_t x461 = -1LL;
	volatile uint16_t x462 = UINT16_MAX;
	static int8_t x464 = -1;
	static volatile int32_t t109 = 27533;

    t109 = ((x461*(x462%x463))!=x464);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x465 = INT8_MIN;
	volatile int8_t x466 = -1;
	int32_t x467 = INT32_MIN;
	int64_t x468 = -3553LL;

    t110 = ((x465*(x466%x467))!=x468);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint64_t x469 = 22531986820439LLU;
	static int64_t x470 = INT64_MIN;
	uint64_t x472 = 201LLU;
	volatile int32_t t111 = -326835974;

    t111 = ((x469*(x470%x471))!=x472);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x473 = UINT8_MAX;
	uint64_t x474 = 181LLU;
	volatile int32_t t112 = -10;

    t112 = ((x473*(x474%x475))!=x476);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x477 = INT32_MIN;
	int16_t x478 = -1;
	int32_t x480 = -1991750;

    t113 = ((x477*(x478%x479))!=x480);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x481 = INT64_MAX;
	uint8_t x482 = 57U;
	int64_t x483 = -1LL;
	static volatile int64_t x484 = INT64_MIN;

    t114 = ((x481*(x482%x483))!=x484);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static int64_t x486 = 191LL;
	int64_t x487 = -7778225079553LL;
	int8_t x488 = INT8_MAX;
	static int32_t t115 = 3;

    t115 = ((x485*(x486%x487))!=x488);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint16_t x493 = 3582U;
	volatile int64_t x494 = INT64_MAX;
	uint64_t x495 = 212363LLU;
	uint64_t x496 = 29101LLU;

    t116 = ((x493*(x494%x495))!=x496);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x497 = -1;
	static int64_t x498 = 28484796988547LL;
	uint64_t x499 = 26LLU;
	volatile uint8_t x500 = 3U;
	static volatile int32_t t117 = -5355505;

    t117 = ((x497*(x498%x499))!=x500);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int64_t x501 = 3770001357892LL;
	static int64_t x502 = 719837724LL;
	uint16_t x503 = 631U;
	int8_t x504 = INT8_MAX;
	static volatile int32_t t118 = 39491;

    t118 = ((x501*(x502%x503))!=x504);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x506 = 0U;
	volatile int32_t x507 = 3;
	volatile int8_t x508 = 1;
	static volatile int32_t t119 = -199;

    t119 = ((x505*(x506%x507))!=x508);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x509 = INT16_MAX;
	uint64_t x510 = 33LLU;
	uint16_t x511 = UINT16_MAX;
	int64_t x512 = INT64_MIN;
	static volatile int32_t t120 = -548156622;

    t120 = ((x509*(x510%x511))!=x512);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x513 = -255000946866369661LL;
	static uint8_t x515 = 1U;
	static int16_t x516 = 4863;
	int32_t t121 = 50;

    t121 = ((x513*(x514%x515))!=x516);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x517 = -31;
	int16_t x518 = INT16_MIN;
	uint16_t x519 = 952U;
	static uint8_t x520 = UINT8_MAX;

    t122 = ((x517*(x518%x519))!=x520);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x521 = INT32_MAX;
	static int8_t x522 = INT8_MIN;
	static uint64_t x523 = 52267488829LLU;

    t123 = ((x521*(x522%x523))!=x524);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x526 = 2587264945LLU;
	int8_t x527 = INT8_MAX;
	uint32_t x528 = 5951U;

    t124 = ((x525*(x526%x527))!=x528);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x530 = 1U;
	int16_t x532 = INT16_MIN;
	int32_t t125 = 53;

    t125 = ((x529*(x530%x531))!=x532);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int8_t x533 = INT8_MIN;
	uint32_t x534 = UINT32_MAX;
	int16_t x535 = INT16_MIN;
	uint32_t x536 = 14U;
	static int32_t t126 = -191446744;

    t126 = ((x533*(x534%x535))!=x536);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x537 = INT16_MIN;
	int64_t x538 = -251439791042500LL;
	volatile uint32_t x539 = 2359232U;
	int32_t t127 = 209;

    t127 = ((x537*(x538%x539))!=x540);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int64_t x541 = 8LL;
	uint8_t x543 = UINT8_MAX;
	volatile uint32_t x544 = 67968626U;
	int32_t t128 = -137843619;

    t128 = ((x541*(x542%x543))!=x544);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x545 = 26U;
	int16_t x546 = -11;
	int8_t x547 = INT8_MIN;
	int8_t x548 = INT8_MAX;

    t129 = ((x545*(x546%x547))!=x548);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x550 = -1;
	static volatile uint8_t x551 = UINT8_MAX;
	uint16_t x552 = 25578U;

    t130 = ((x549*(x550%x551))!=x552);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x553 = INT16_MIN;
	int8_t x554 = INT8_MIN;
	static volatile uint32_t x556 = 762799286U;
	volatile int32_t t131 = -820;

    t131 = ((x553*(x554%x555))!=x556);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x557 = INT8_MIN;
	uint8_t x560 = UINT8_MAX;
	volatile int32_t t132 = 475;

    t132 = ((x557*(x558%x559))!=x560);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int64_t x561 = INT64_MIN;
	static volatile uint32_t x563 = UINT32_MAX;
	int64_t x564 = -1LL;
	int32_t t133 = -343927703;

    t133 = ((x561*(x562%x563))!=x564);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint16_t x565 = 8U;
	volatile int32_t x566 = INT32_MIN;
	static int8_t x568 = -1;
	volatile int32_t t134 = -299034;

    t134 = ((x565*(x566%x567))!=x568);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x569 = INT64_MIN;
	int8_t x570 = INT8_MAX;
	volatile int64_t x571 = -1LL;
	int64_t x572 = INT64_MIN;
	volatile int32_t t135 = -1;

    t135 = ((x569*(x570%x571))!=x572);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x573 = 13927798;
	volatile int64_t x576 = -1LL;
	volatile int32_t t136 = 2;

    t136 = ((x573*(x574%x575))!=x576);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint32_t x578 = 3586335U;
	int8_t x579 = -43;
	int64_t x580 = INT64_MIN;
	static volatile int32_t t137 = 38;

    t137 = ((x577*(x578%x579))!=x580);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x581 = -1LL;
	uint16_t x582 = 3U;
	int8_t x583 = INT8_MIN;
	int32_t t138 = -7523;

    t138 = ((x581*(x582%x583))!=x584);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x585 = INT8_MIN;
	static uint8_t x586 = UINT8_MAX;
	int64_t x587 = -314184988143110LL;
	static int16_t x588 = 1;
	int32_t t139 = 20180372;

    t139 = ((x585*(x586%x587))!=x588);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int8_t x590 = 54;
	int8_t x591 = -27;
	int8_t x592 = INT8_MIN;
	int32_t t140 = 3142;

    t140 = ((x589*(x590%x591))!=x592);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint64_t x597 = 38695830LLU;
	static uint8_t x598 = 65U;
	static volatile uint16_t x599 = 7528U;
	int8_t x600 = -14;
	volatile int32_t t141 = 796137231;

    t141 = ((x597*(x598%x599))!=x600);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x602 = INT8_MAX;
	int64_t x603 = INT64_MIN;
	volatile int32_t t142 = 56;

    t142 = ((x601*(x602%x603))!=x604);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x605 = UINT64_MAX;
	uint64_t x606 = 429304053LLU;
	volatile uint16_t x607 = 444U;
	uint8_t x608 = 71U;
	volatile int32_t t143 = 6824879;

    t143 = ((x605*(x606%x607))!=x608);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x609 = INT8_MIN;
	int32_t x610 = INT32_MIN;
	int32_t x611 = -1;
	uint8_t x612 = 0U;
	int32_t t144 = 15;

    t144 = ((x609*(x610%x611))!=x612);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x621 = -1LL;
	static int16_t x622 = INT16_MAX;
	static int64_t x623 = INT64_MIN;
	static uint64_t x624 = UINT64_MAX;
	volatile int32_t t145 = -92980889;

    t145 = ((x621*(x622%x623))!=x624);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x625 = INT16_MAX;
	int64_t x626 = INT64_MIN;
	volatile int32_t x627 = 18;
	volatile int16_t x628 = INT16_MIN;
	int32_t t146 = -104;

    t146 = ((x625*(x626%x627))!=x628);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x629 = INT32_MAX;
	int64_t x630 = 7957699626LL;
	static int16_t x631 = -1;
	int8_t x632 = INT8_MIN;
	int32_t t147 = 0;

    t147 = ((x629*(x630%x631))!=x632);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x633 = 1U;
	int64_t x634 = -1LL;
	static uint64_t x635 = UINT64_MAX;
	uint64_t x636 = 1553924LLU;
	volatile int32_t t148 = 513328;

    t148 = ((x633*(x634%x635))!=x636);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x637 = -631543;
	uint64_t x638 = 175LLU;
	static int32_t x639 = INT32_MIN;
	uint8_t x640 = UINT8_MAX;

    t149 = ((x637*(x638%x639))!=x640);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static int16_t x641 = -1;
	static volatile int8_t x642 = INT8_MAX;
	int64_t x643 = INT64_MIN;
	int16_t x644 = -1;

    t150 = ((x641*(x642%x643))!=x644);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x646 = 6U;
	uint8_t x647 = UINT8_MAX;
	int16_t x648 = INT16_MAX;
	int32_t t151 = 60840;

    t151 = ((x645*(x646%x647))!=x648);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x649 = 30936;
	int8_t x650 = INT8_MIN;
	int8_t x651 = -16;
	volatile int32_t t152 = 3374145;

    t152 = ((x649*(x650%x651))!=x652);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x653 = -1;
	int64_t x654 = 150414636LL;
	volatile uint16_t x655 = 17U;
	int16_t x656 = -3962;
	int32_t t153 = -7397705;

    t153 = ((x653*(x654%x655))!=x656);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x658 = INT64_MIN;
	int64_t x659 = -1LL;
	static int32_t x660 = 475;
	volatile int32_t t154 = -80153;

    t154 = ((x657*(x658%x659))!=x660);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x661 = 2;
	volatile int16_t x662 = -1;
	int64_t x663 = INT64_MIN;
	volatile int16_t x664 = 2405;

    t155 = ((x661*(x662%x663))!=x664);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x665 = UINT16_MAX;
	static int32_t x666 = INT32_MAX;
	int16_t x667 = 176;
	static int32_t t156 = 10;

    t156 = ((x665*(x666%x667))!=x668);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile int64_t x673 = INT64_MIN;
	volatile int8_t x674 = 0;
	int8_t x675 = -1;
	volatile int8_t x676 = -1;
	static int32_t t157 = 14;

    t157 = ((x673*(x674%x675))!=x676);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x677 = 26284186LL;

    t158 = ((x677*(x678%x679))!=x680);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int8_t x681 = 6;
	volatile int64_t x682 = 5462787464458234LL;
	int64_t x683 = INT64_MIN;
	int32_t t159 = 78292412;

    t159 = ((x681*(x682%x683))!=x684);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int8_t x685 = 61;
	uint64_t x687 = UINT64_MAX;
	static int64_t x688 = INT64_MIN;
	int32_t t160 = -3828;

    t160 = ((x685*(x686%x687))!=x688);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int16_t x689 = -1366;
	uint64_t x690 = 5908397775276074934LLU;
	static int8_t x691 = -1;
	int32_t t161 = -11825;

    t161 = ((x689*(x690%x691))!=x692);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static int32_t x693 = -54;
	int16_t x694 = 224;
	int16_t x695 = -24;
	static int8_t x696 = -1;
	volatile int32_t t162 = 52;

    t162 = ((x693*(x694%x695))!=x696);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int64_t x697 = 7133LL;
	int64_t x698 = INT64_MIN;
	volatile int8_t x699 = INT8_MIN;
	static int8_t x700 = -1;
	int32_t t163 = 123;

    t163 = ((x697*(x698%x699))!=x700);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x702 = INT64_MIN;
	static int64_t x703 = -1LL;
	uint64_t x704 = UINT64_MAX;
	volatile int32_t t164 = -3213066;

    t164 = ((x701*(x702%x703))!=x704);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x705 = 3580119LLU;
	uint8_t x706 = 0U;
	int32_t x707 = INT32_MIN;
	volatile int32_t t165 = -56573705;

    t165 = ((x705*(x706%x707))!=x708);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static int16_t x709 = INT16_MIN;
	volatile int64_t x711 = -1359747LL;
	int16_t x712 = INT16_MAX;

    t166 = ((x709*(x710%x711))!=x712);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x713 = 442U;
	int16_t x715 = INT16_MIN;
	int32_t x716 = 112940465;

    t167 = ((x713*(x714%x715))!=x716);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x717 = INT32_MAX;
	int8_t x718 = INT8_MAX;
	static int16_t x719 = -1;
	volatile int32_t t168 = -269096;

    t168 = ((x717*(x718%x719))!=x720);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint32_t x721 = 1589158375U;
	int8_t x722 = 9;
	int32_t x723 = INT32_MAX;
	static uint16_t x724 = 2196U;
	int32_t t169 = -1;

    t169 = ((x721*(x722%x723))!=x724);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static int64_t x728 = 3LL;
	volatile int32_t t170 = 1;

    t170 = ((x725*(x726%x727))!=x728);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static int16_t x729 = INT16_MAX;
	uint16_t x730 = 4U;
	int8_t x731 = 1;
	int32_t x732 = -1;
	int32_t t171 = 435997;

    t171 = ((x729*(x730%x731))!=x732);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x735 = 35LL;
	int64_t x736 = INT64_MIN;
	static volatile int32_t t172 = -8066314;

    t172 = ((x733*(x734%x735))!=x736);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x737 = -1LL;
	int64_t x738 = -1LL;
	volatile int32_t t173 = 492361;

    t173 = ((x737*(x738%x739))!=x740);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x741 = -1LL;
	int16_t x743 = -1;
	int64_t x744 = INT64_MIN;
	static int32_t t174 = -1147;

    t174 = ((x741*(x742%x743))!=x744);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile uint64_t x745 = UINT64_MAX;
	int16_t x746 = INT16_MIN;
	int8_t x748 = -3;
	static volatile int32_t t175 = 138;

    t175 = ((x745*(x746%x747))!=x748);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x749 = INT64_MIN;
	int64_t x750 = 1091LL;
	static int64_t x752 = -1295819LL;
	int32_t t176 = -6;

    t176 = ((x749*(x750%x751))!=x752);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x753 = 6875U;
	int8_t x754 = 3;
	uint64_t x755 = 1376012702944042197LLU;
	static int32_t t177 = 25761;

    t177 = ((x753*(x754%x755))!=x756);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int8_t x758 = INT8_MAX;
	static uint32_t x759 = 13U;
	int8_t x760 = -15;
	int32_t t178 = 4422;

    t178 = ((x757*(x758%x759))!=x760);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int16_t x761 = 0;
	int32_t x762 = INT32_MIN;
	volatile int32_t x764 = 6809178;
	volatile int32_t t179 = -15377307;

    t179 = ((x761*(x762%x763))!=x764);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x766 = -57;
	static uint64_t x767 = 7LLU;
	int8_t x768 = -10;
	volatile int32_t t180 = 93;

    t180 = ((x765*(x766%x767))!=x768);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x769 = UINT64_MAX;
	int64_t x770 = INT64_MIN;
	int8_t x771 = -45;
	int16_t x772 = 244;
	int32_t t181 = -176141588;

    t181 = ((x769*(x770%x771))!=x772);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint16_t x773 = 11744U;
	uint32_t x774 = UINT32_MAX;
	static int16_t x776 = 10;
	int32_t t182 = 4851931;

    t182 = ((x773*(x774%x775))!=x776);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x777 = UINT8_MAX;
	int32_t x778 = -10;
	int16_t x779 = INT16_MIN;
	uint64_t x780 = 8LLU;
	volatile int32_t t183 = 722;

    t183 = ((x777*(x778%x779))!=x780);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint64_t x781 = UINT64_MAX;
	static int8_t x782 = -10;
	volatile int32_t t184 = 5;

    t184 = ((x781*(x782%x783))!=x784);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x785 = -5;
	int32_t x786 = -729263948;
	uint8_t x787 = 18U;
	uint32_t x788 = 36U;
	static int32_t t185 = 66612;

    t185 = ((x785*(x786%x787))!=x788);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x789 = 15U;
	volatile uint64_t x792 = UINT64_MAX;
	volatile int32_t t186 = -4799;

    t186 = ((x789*(x790%x791))!=x792);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x801 = 32U;
	volatile uint8_t x802 = 6U;
	int16_t x803 = INT16_MAX;
	int32_t x804 = -122;
	static volatile int32_t t187 = 1;

    t187 = ((x801*(x802%x803))!=x804);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x806 = INT32_MAX;
	volatile uint8_t x807 = 2U;
	int32_t x808 = 50979;

    t188 = ((x805*(x806%x807))!=x808);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int8_t x809 = -14;
	uint8_t x810 = 3U;
	static volatile uint32_t x811 = UINT32_MAX;
	volatile int32_t t189 = 34781887;

    t189 = ((x809*(x810%x811))!=x812);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x813 = INT32_MIN;
	int64_t x814 = -1LL;
	int64_t x815 = INT64_MIN;
	int8_t x816 = -1;
	int32_t t190 = -254;

    t190 = ((x813*(x814%x815))!=x816);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x821 = INT32_MAX;
	int64_t x822 = INT64_MAX;
	int32_t t191 = 160369;

    t191 = ((x821*(x822%x823))!=x824);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile uint32_t x825 = 51726U;
	static int8_t x826 = -6;
	int32_t x827 = INT32_MAX;
	static int8_t x828 = -1;
	volatile int32_t t192 = 23785072;

    t192 = ((x825*(x826%x827))!=x828);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint64_t x829 = 9LLU;
	volatile int32_t x830 = -1;
	int64_t x831 = -117191216477906LL;
	static volatile int32_t x832 = -1;

    t193 = ((x829*(x830%x831))!=x832);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x833 = INT64_MIN;
	uint64_t x834 = 22LLU;
	int8_t x835 = -1;
	static uint8_t x836 = 1U;
	int32_t t194 = -1232;

    t194 = ((x833*(x834%x835))!=x836);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint8_t x837 = 34U;
	volatile uint16_t x838 = 30663U;
	int16_t x839 = -10971;
	uint32_t x840 = 2U;
	volatile int32_t t195 = -3322233;

    t195 = ((x837*(x838%x839))!=x840);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x841 = 13294;
	int64_t x842 = INT64_MIN;
	int32_t x844 = INT32_MIN;
	volatile int32_t t196 = -50;

    t196 = ((x841*(x842%x843))!=x844);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x845 = 68U;
	static int32_t x847 = 10;
	int32_t x848 = 370;

    t197 = ((x845*(x846%x847))!=x848);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x849 = 10U;
	static uint16_t x850 = 3803U;
	int32_t x852 = INT32_MIN;
	int32_t t198 = 269022222;

    t198 = ((x849*(x850%x851))!=x852);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x854 = -1;
	volatile int32_t x855 = -1;
	static int32_t x856 = INT32_MAX;
	volatile int32_t t199 = 119460;

    t199 = ((x853*(x854%x855))!=x856);

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

