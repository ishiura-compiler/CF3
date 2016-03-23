
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

static uint64_t x3 = UINT64_MAX;
volatile int8_t x8 = INT8_MAX;
int8_t x24 = -1;
volatile int32_t t6 = 48317007;
static int8_t x29 = -1;
static int8_t x31 = 45;
int32_t x40 = -506;
static volatile int32_t t12 = 1;
int32_t x69 = -1;
int64_t x70 = INT64_MAX;
int64_t x73 = 11655143339841LL;
int32_t x83 = -1622;
int32_t x89 = INT32_MIN;
int64_t x92 = -1LL;
uint16_t x108 = UINT16_MAX;
uint8_t x109 = UINT8_MAX;
int16_t x111 = INT16_MAX;
volatile int32_t x112 = INT32_MAX;
volatile uint8_t x114 = 12U;
uint64_t x123 = 3779611696221773812LLU;
volatile int32_t t29 = -7295450;
volatile int8_t x125 = INT8_MAX;
int8_t x132 = 0;
static volatile int16_t x134 = -1;
int16_t x136 = 281;
int32_t x137 = -26173;
volatile int32_t t35 = 3;
int16_t x151 = -1;
int32_t x158 = 101481562;
uint64_t x163 = 570290365LLU;
static int32_t t39 = -3665;
int16_t x176 = INT16_MIN;
static uint64_t x182 = 4279390719LLU;
volatile uint8_t x183 = 12U;
volatile int32_t t44 = -3;
volatile int64_t x186 = -57518047468359LL;
static int32_t t45 = -343;
volatile int16_t x197 = -683;
int32_t x199 = INT32_MAX;
int64_t x200 = INT64_MAX;
int32_t x205 = 86;
int16_t x206 = -1;
volatile int64_t x207 = -1LL;
static volatile int8_t x212 = -4;
int32_t x213 = -1;
int8_t x215 = INT8_MAX;
static volatile int32_t t53 = 5392;
int64_t x221 = INT64_MIN;
int64_t x223 = INT64_MAX;
uint16_t x224 = 577U;
int16_t x230 = INT16_MAX;
volatile int32_t t56 = -2420;
volatile int8_t x233 = 7;
volatile int32_t t59 = 260167;
static int8_t x248 = 0;
int8_t x249 = 0;
int8_t x250 = 19;
volatile uint64_t x252 = 10LLU;
int16_t x255 = INT16_MIN;
int32_t x262 = INT32_MIN;
static uint32_t x263 = 419U;
int8_t x264 = INT8_MIN;
static int8_t x265 = 0;
static volatile int64_t x266 = INT64_MAX;
int8_t x269 = -6;
int64_t x270 = -3171142773871LL;
int16_t x276 = INT16_MIN;
volatile int32_t t68 = 17000118;
uint32_t x282 = UINT32_MAX;
int16_t x292 = -1;
static uint8_t x293 = UINT8_MAX;
int16_t x294 = INT16_MAX;
volatile int64_t x295 = INT64_MIN;
static int64_t x297 = -1LL;
static int32_t x306 = 6201551;
int32_t x308 = -1;
static int8_t x315 = INT8_MAX;
static uint16_t x318 = 4U;
static volatile int16_t x321 = INT16_MIN;
volatile int32_t t79 = 18633399;
static volatile int8_t x326 = 61;
int64_t x328 = 11672991428LL;
int64_t x336 = INT64_MIN;
int64_t x342 = -1LL;
static volatile int8_t x344 = -1;
int64_t x347 = INT64_MAX;
int32_t x351 = INT32_MIN;
volatile uint16_t x353 = 1U;
volatile int64_t x354 = -909960370LL;
int16_t x363 = 7;
int32_t t90 = -48238;
int32_t x369 = INT32_MIN;
int16_t x377 = INT16_MAX;
static uint32_t x381 = 1204U;
uint32_t x384 = UINT32_MAX;
int8_t x385 = -2;
volatile int32_t t95 = 2934;
int16_t x393 = -1;
uint32_t x399 = 24U;
uint8_t x401 = 3U;
int16_t x404 = -372;
static volatile int32_t t98 = 2506;
uint8_t x405 = 1U;
uint32_t x406 = 277U;
int16_t x408 = -1;
uint32_t x413 = 36276468U;
volatile int16_t x415 = INT16_MAX;
int32_t x421 = INT32_MAX;
int32_t x427 = -61;
int16_t x434 = INT16_MIN;
volatile int32_t t105 = 85164;
int32_t x437 = INT32_MAX;
uint64_t x445 = 178147274633LLU;
int16_t x452 = -2;
uint8_t x453 = UINT8_MAX;
int32_t x460 = 0;
uint16_t x463 = 25U;
volatile int32_t x464 = INT32_MIN;
int8_t x468 = -3;
int32_t t113 = 131;
int32_t x470 = INT32_MAX;
volatile int32_t x475 = INT32_MIN;
uint16_t x480 = UINT16_MAX;
int32_t t119 = 35;
uint16_t x498 = UINT16_MAX;
int32_t x499 = INT32_MIN;
volatile uint8_t x511 = 9U;
int8_t x520 = INT8_MAX;
int32_t x526 = -1;
uint8_t x528 = 0U;
volatile int32_t t128 = 89;
static int32_t x534 = 664268;
int32_t x535 = INT32_MIN;
static int32_t t129 = -23259820;
uint8_t x540 = UINT8_MAX;
uint32_t x541 = UINT32_MAX;
volatile int64_t x545 = 127707028972809LL;
int16_t x553 = -49;
volatile int32_t t134 = 61182636;
static volatile int8_t x566 = 0;
int32_t t137 = 17;
volatile uint32_t x574 = 129259521U;
uint16_t x575 = 14U;
static uint64_t x580 = 21LLU;
int32_t t141 = 1;
volatile int32_t t143 = 103;
int32_t x601 = INT32_MIN;
static int16_t x602 = 7;
int64_t x606 = INT64_MAX;
int8_t x615 = -1;
volatile int32_t t149 = -238;
static int8_t x626 = INT8_MIN;
volatile int64_t x634 = INT64_MAX;
uint8_t x639 = UINT8_MAX;
volatile int8_t x654 = INT8_MAX;
static int16_t x658 = -1;
int32_t t156 = -1;
int32_t t160 = 20018;
int16_t x677 = 1;
volatile int32_t x678 = -1;
int32_t t162 = 6110;
volatile int8_t x685 = INT8_MIN;
int8_t x686 = INT8_MAX;
int32_t t163 = 1931089;
int32_t t164 = -11950;
volatile int32_t t165 = 128207961;
int64_t x698 = INT64_MIN;
int16_t x700 = -1;
int32_t t168 = 52738;
int8_t x711 = 9;
volatile int32_t t169 = 0;
uint8_t x713 = 2U;
volatile int32_t x720 = -581;
uint32_t x726 = 1739U;
static int32_t t174 = 209;
int32_t x735 = INT32_MIN;
int32_t x737 = INT32_MIN;
uint16_t x741 = 146U;
uint64_t x744 = 3177466250LLU;
volatile int16_t x746 = -1599;
int16_t x754 = INT16_MIN;
static volatile int32_t t180 = -436733447;
volatile int16_t x761 = INT16_MIN;
static uint32_t x773 = UINT32_MAX;
static int64_t x780 = INT64_MIN;
int8_t x784 = -1;
static int32_t t187 = 2017772;
int32_t x787 = 1011290;
volatile int32_t t188 = 2065;
int64_t x789 = -11672513502LL;
int32_t x790 = -26;
int8_t x795 = INT8_MIN;
volatile int16_t x796 = INT16_MAX;
int32_t t190 = 29669811;
static int64_t x809 = INT64_MIN;
int32_t t194 = 11;
volatile int32_t t195 = 615470;
int16_t x817 = 8096;
int32_t t199 = -9;


void f0(void) {
    	static volatile uint64_t x1 = UINT64_MAX;
	int16_t x2 = INT16_MAX;
	uint16_t x4 = UINT16_MAX;
	volatile int32_t t0 = 402965674;

    t0 = (x1<=(x2/(x3!=x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = 3428211LLU;
	int8_t x6 = 15;
	uint32_t x7 = 12416U;
	volatile int32_t t1 = 2;

    t1 = (x5<=(x6/(x7!=x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x9 = INT64_MIN;
	volatile int16_t x10 = INT16_MIN;
	volatile int64_t x11 = -11022237635209LL;
	uint64_t x12 = UINT64_MAX;
	int32_t t2 = -1;

    t2 = (x9<=(x10/(x11!=x12)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = 7058673LL;
	uint32_t x14 = UINT32_MAX;
	volatile uint8_t x15 = UINT8_MAX;
	uint32_t x16 = 1184854015U;
	volatile int32_t t3 = 219986;

    t3 = (x13<=(x14/(x15!=x16)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint64_t x17 = UINT64_MAX;
	volatile int64_t x18 = INT64_MAX;
	int16_t x19 = 217;
	int64_t x20 = INT64_MAX;
	int32_t t4 = 1;

    t4 = (x17<=(x18/(x19!=x20)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = -3145241899LL;
	int8_t x22 = -1;
	static int32_t x23 = INT32_MAX;
	int32_t t5 = 74810;

    t5 = (x21<=(x22/(x23!=x24)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x25 = 1;
	static uint32_t x26 = 122968U;
	uint64_t x27 = 4354410134283LLU;
	uint32_t x28 = 74047679U;

    t6 = (x25<=(x26/(x27!=x28)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x30 = INT16_MAX;
	uint16_t x32 = 6205U;
	int32_t t7 = 224322;

    t7 = (x29<=(x30/(x31!=x32)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static int32_t x33 = INT32_MIN;
	int32_t x34 = INT32_MIN;
	static uint32_t x35 = UINT32_MAX;
	uint8_t x36 = 1U;
	static volatile int32_t t8 = 6167;

    t8 = (x33<=(x34/(x35!=x36)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = 27;
	uint64_t x38 = UINT64_MAX;
	int64_t x39 = -1LL;
	int32_t t9 = 1007;

    t9 = (x37<=(x38/(x39!=x40)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x41 = UINT32_MAX;
	int8_t x42 = -1;
	int64_t x43 = -72412488LL;
	int64_t x44 = -1826909245041839129LL;
	int32_t t10 = 4;

    t10 = (x41<=(x42/(x43!=x44)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = INT32_MAX;
	int32_t x46 = INT32_MAX;
	static uint8_t x47 = 7U;
	int8_t x48 = -1;
	volatile int32_t t11 = 1;

    t11 = (x45<=(x46/(x47!=x48)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x49 = 276LLU;
	uint16_t x50 = UINT16_MAX;
	int64_t x51 = 412349775LL;
	uint32_t x52 = 757318371U;

    t12 = (x49<=(x50/(x51!=x52)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x53 = UINT16_MAX;
	int32_t x54 = 0;
	int16_t x55 = -1;
	int8_t x56 = INT8_MIN;
	volatile int32_t t13 = -1;

    t13 = (x53<=(x54/(x55!=x56)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = -1LL;
	int64_t x58 = -815500LL;
	int8_t x59 = INT8_MIN;
	int16_t x60 = INT16_MIN;
	int32_t t14 = -132321930;

    t14 = (x57<=(x58/(x59!=x60)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = 426;
	int8_t x62 = INT8_MAX;
	int64_t x63 = INT64_MAX;
	uint32_t x64 = 3U;
	int32_t t15 = -7569;

    t15 = (x61<=(x62/(x63!=x64)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x65 = -1;
	uint32_t x66 = 113U;
	volatile uint16_t x67 = UINT16_MAX;
	static int32_t x68 = -1;
	volatile int32_t t16 = -40209051;

    t16 = (x65<=(x66/(x67!=x68)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x71 = INT64_MIN;
	int16_t x72 = INT16_MIN;
	int32_t t17 = -9;

    t17 = (x69<=(x70/(x71!=x72)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile uint16_t x74 = 0U;
	int32_t x75 = -8194;
	uint32_t x76 = UINT32_MAX;
	volatile int32_t t18 = 8;

    t18 = (x73<=(x74/(x75!=x76)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint64_t x77 = 1084272LLU;
	uint64_t x78 = 3769695561794108LLU;
	volatile uint64_t x79 = 3308616452369234LLU;
	int16_t x80 = 1;
	int32_t t19 = -5;

    t19 = (x77<=(x78/(x79!=x80)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = INT8_MAX;
	uint64_t x82 = 17496515LLU;
	int64_t x84 = INT64_MIN;
	volatile int32_t t20 = -39;

    t20 = (x81<=(x82/(x83!=x84)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x85 = 1724U;
	int64_t x86 = INT64_MIN;
	int64_t x87 = 729LL;
	int64_t x88 = 7999692501LL;
	volatile int32_t t21 = 1671743;

    t21 = (x85<=(x86/(x87!=x88)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile uint32_t x90 = UINT32_MAX;
	uint64_t x91 = 190370LLU;
	int32_t t22 = -690;

    t22 = (x89<=(x90/(x91!=x92)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x93 = UINT32_MAX;
	static uint16_t x94 = 416U;
	int64_t x95 = -3LL;
	static int64_t x96 = -242059578777887258LL;
	static int32_t t23 = 178919614;

    t23 = (x93<=(x94/(x95!=x96)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x97 = INT64_MIN;
	int32_t x98 = -1;
	uint16_t x99 = 1U;
	static int64_t x100 = INT64_MAX;
	int32_t t24 = 39620;

    t24 = (x97<=(x98/(x99!=x100)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x105 = -1;
	int32_t x106 = -125470;
	uint64_t x107 = 11299304532LLU;
	static int32_t t25 = 28811852;

    t25 = (x105<=(x106/(x107!=x108)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint8_t x110 = UINT8_MAX;
	int32_t t26 = -21252699;

    t26 = (x109<=(x110/(x111!=x112)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x113 = 621430134LLU;
	static uint32_t x115 = 50U;
	volatile uint8_t x116 = UINT8_MAX;
	volatile int32_t t27 = 4041042;

    t27 = (x113<=(x114/(x115!=x116)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x117 = 81U;
	uint32_t x118 = 852135U;
	int64_t x119 = INT64_MIN;
	static volatile int32_t x120 = INT32_MIN;
	static int32_t t28 = -203858;

    t28 = (x117<=(x118/(x119!=x120)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x121 = 12U;
	static int64_t x122 = INT64_MIN;
	int32_t x124 = 2;

    t29 = (x121<=(x122/(x123!=x124)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x126 = -1;
	int8_t x127 = -13;
	volatile int8_t x128 = INT8_MAX;
	static volatile int32_t t30 = 1081;

    t30 = (x125<=(x126/(x127!=x128)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x129 = 2172616280361LL;
	int8_t x130 = INT8_MAX;
	static int8_t x131 = INT8_MIN;
	volatile int32_t t31 = 1104;

    t31 = (x129<=(x130/(x131!=x132)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint8_t x133 = UINT8_MAX;
	int64_t x135 = INT64_MAX;
	volatile int32_t t32 = 2548;

    t32 = (x133<=(x134/(x135!=x136)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x138 = 178U;
	uint16_t x139 = UINT16_MAX;
	uint64_t x140 = UINT64_MAX;
	int32_t t33 = -1;

    t33 = (x137<=(x138/(x139!=x140)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x141 = 436;
	int64_t x142 = INT64_MAX;
	uint32_t x143 = 452U;
	uint16_t x144 = 10313U;
	static int32_t t34 = 86563888;

    t34 = (x141<=(x142/(x143!=x144)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x145 = -1LL;
	static uint64_t x146 = UINT64_MAX;
	int32_t x147 = INT32_MIN;
	int8_t x148 = -1;

    t35 = (x145<=(x146/(x147!=x148)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x149 = UINT32_MAX;
	int16_t x150 = INT16_MIN;
	int8_t x152 = INT8_MAX;
	volatile int32_t t36 = -69911;

    t36 = (x149<=(x150/(x151!=x152)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x153 = INT16_MIN;
	static int8_t x154 = 54;
	uint64_t x155 = 8741554937LLU;
	uint16_t x156 = UINT16_MAX;
	volatile int32_t t37 = -413173320;

    t37 = (x153<=(x154/(x155!=x156)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static int64_t x157 = -1LL;
	volatile int8_t x159 = -1;
	uint16_t x160 = 709U;
	volatile int32_t t38 = 173710;

    t38 = (x157<=(x158/(x159!=x160)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x161 = 770;
	uint32_t x162 = UINT32_MAX;
	volatile int64_t x164 = INT64_MIN;

    t39 = (x161<=(x162/(x163!=x164)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x165 = INT32_MAX;
	volatile uint32_t x166 = 77314952U;
	int32_t x167 = -1957664;
	static uint64_t x168 = 842459346734127LLU;
	static volatile int32_t t40 = 11827;

    t40 = (x165<=(x166/(x167!=x168)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint16_t x169 = 57U;
	static uint16_t x170 = 914U;
	int32_t x171 = -1;
	volatile int64_t x172 = INT64_MIN;
	int32_t t41 = 64661043;

    t41 = (x169<=(x170/(x171!=x172)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int8_t x173 = INT8_MAX;
	int32_t x174 = -1;
	int32_t x175 = INT32_MIN;
	int32_t t42 = -1503105;

    t42 = (x173<=(x174/(x175!=x176)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x177 = UINT64_MAX;
	volatile int8_t x178 = INT8_MIN;
	int16_t x179 = -51;
	int8_t x180 = -1;
	volatile int32_t t43 = 443;

    t43 = (x177<=(x178/(x179!=x180)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x181 = INT8_MAX;
	static int16_t x184 = INT16_MAX;

    t44 = (x181<=(x182/(x183!=x184)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x185 = INT32_MIN;
	static int64_t x187 = INT64_MIN;
	uint8_t x188 = 0U;

    t45 = (x185<=(x186/(x187!=x188)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int8_t x189 = -9;
	int64_t x190 = -1LL;
	volatile int32_t x191 = -3361732;
	uint16_t x192 = UINT16_MAX;
	volatile int32_t t46 = -4723895;

    t46 = (x189<=(x190/(x191!=x192)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x193 = 4057696058702LLU;
	int64_t x194 = -1LL;
	int8_t x195 = 21;
	uint16_t x196 = 6366U;
	volatile int32_t t47 = 3361;

    t47 = (x193<=(x194/(x195!=x196)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static int32_t x198 = INT32_MIN;
	static volatile int32_t t48 = -32;

    t48 = (x197<=(x198/(x199!=x200)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x201 = INT16_MAX;
	int16_t x202 = -1;
	static uint16_t x203 = 2U;
	int16_t x204 = -10;
	volatile int32_t t49 = -194702;

    t49 = (x201<=(x202/(x203!=x204)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x208 = 2U;
	volatile int32_t t50 = -110;

    t50 = (x205<=(x206/(x207!=x208)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x209 = UINT16_MAX;
	volatile uint32_t x210 = 116351323U;
	int16_t x211 = 1;
	volatile int32_t t51 = 13872;

    t51 = (x209<=(x210/(x211!=x212)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x214 = UINT16_MAX;
	int8_t x216 = -1;
	volatile int32_t t52 = 70154374;

    t52 = (x213<=(x214/(x215!=x216)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x217 = INT32_MAX;
	uint32_t x218 = 1062314401U;
	int8_t x219 = INT8_MIN;
	volatile uint16_t x220 = 17U;

    t53 = (x217<=(x218/(x219!=x220)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x222 = INT8_MIN;
	volatile int32_t t54 = 1;

    t54 = (x221<=(x222/(x223!=x224)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x225 = INT16_MIN;
	volatile uint16_t x226 = 1U;
	volatile int16_t x227 = INT16_MAX;
	int16_t x228 = -4;
	int32_t t55 = -185;

    t55 = (x225<=(x226/(x227!=x228)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x229 = 10818U;
	int16_t x231 = -61;
	int8_t x232 = -1;

    t56 = (x229<=(x230/(x231!=x232)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int32_t x234 = INT32_MIN;
	volatile uint16_t x235 = 8396U;
	int8_t x236 = 0;
	volatile int32_t t57 = -14531189;

    t57 = (x233<=(x234/(x235!=x236)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x237 = INT32_MIN;
	static int32_t x238 = INT32_MIN;
	static int8_t x239 = 2;
	volatile int16_t x240 = -5360;
	int32_t t58 = -1612;

    t58 = (x237<=(x238/(x239!=x240)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x241 = 36U;
	volatile int8_t x242 = INT8_MIN;
	static uint8_t x243 = 13U;
	int8_t x244 = INT8_MIN;

    t59 = (x241<=(x242/(x243!=x244)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x245 = INT8_MAX;
	int64_t x246 = INT64_MIN;
	int64_t x247 = INT64_MAX;
	volatile int32_t t60 = -202;

    t60 = (x245<=(x246/(x247!=x248)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x251 = -2297;
	volatile int32_t t61 = 6;

    t61 = (x249<=(x250/(x251!=x252)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x253 = 33U;
	int8_t x254 = INT8_MIN;
	int32_t x256 = -1357;
	int32_t t62 = 56567958;

    t62 = (x253<=(x254/(x255!=x256)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint16_t x257 = 64U;
	volatile int16_t x258 = 998;
	int16_t x259 = -1;
	int16_t x260 = 1;
	volatile int32_t t63 = 42;

    t63 = (x257<=(x258/(x259!=x260)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint8_t x261 = UINT8_MAX;
	int32_t t64 = 4;

    t64 = (x261<=(x262/(x263!=x264)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x267 = 1LL;
	volatile int64_t x268 = 0LL;
	int32_t t65 = 1039867;

    t65 = (x265<=(x266/(x267!=x268)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x271 = INT64_MIN;
	int16_t x272 = INT16_MIN;
	int32_t t66 = -21245881;

    t66 = (x269<=(x270/(x271!=x272)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int64_t x273 = INT64_MIN;
	int32_t x274 = INT32_MAX;
	uint64_t x275 = 265670561307LLU;
	int32_t t67 = 0;

    t67 = (x273<=(x274/(x275!=x276)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x277 = INT32_MIN;
	uint16_t x278 = 1010U;
	int64_t x279 = -1LL;
	volatile uint32_t x280 = 662U;

    t68 = (x277<=(x278/(x279!=x280)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x281 = 5U;
	int16_t x283 = INT16_MIN;
	int64_t x284 = INT64_MAX;
	static volatile int32_t t69 = 0;

    t69 = (x281<=(x282/(x283!=x284)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static int8_t x285 = -1;
	int16_t x286 = -1;
	int64_t x287 = 14LL;
	int8_t x288 = -1;
	volatile int32_t t70 = 4;

    t70 = (x285<=(x286/(x287!=x288)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint16_t x289 = UINT16_MAX;
	static int16_t x290 = 427;
	uint32_t x291 = 417092377U;
	int32_t t71 = 739466422;

    t71 = (x289<=(x290/(x291!=x292)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int16_t x296 = INT16_MAX;
	volatile int32_t t72 = -14;

    t72 = (x293<=(x294/(x295!=x296)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x298 = 274292LLU;
	volatile int64_t x299 = INT64_MAX;
	uint32_t x300 = 0U;
	int32_t t73 = -6578;

    t73 = (x297<=(x298/(x299!=x300)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x301 = UINT16_MAX;
	uint8_t x302 = UINT8_MAX;
	volatile int16_t x303 = -1;
	int64_t x304 = 536608LL;
	int32_t t74 = 716;

    t74 = (x301<=(x302/(x303!=x304)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint32_t x305 = 1070U;
	volatile int64_t x307 = INT64_MIN;
	static int32_t t75 = -6328;

    t75 = (x305<=(x306/(x307!=x308)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x309 = -14;
	int64_t x310 = 0LL;
	volatile uint32_t x311 = 39U;
	uint32_t x312 = 186273911U;
	int32_t t76 = -592;

    t76 = (x309<=(x310/(x311!=x312)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x313 = -1LL;
	uint32_t x314 = 2619276U;
	int16_t x316 = INT16_MIN;
	volatile int32_t t77 = 15248;

    t77 = (x313<=(x314/(x315!=x316)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x317 = INT32_MAX;
	uint32_t x319 = UINT32_MAX;
	int64_t x320 = INT64_MIN;
	volatile int32_t t78 = 1221454;

    t78 = (x317<=(x318/(x319!=x320)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint32_t x322 = 55264614U;
	uint16_t x323 = 1229U;
	uint16_t x324 = 23U;

    t79 = (x321<=(x322/(x323!=x324)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int32_t x325 = -83;
	int16_t x327 = INT16_MIN;
	volatile int32_t t80 = 1;

    t80 = (x325<=(x326/(x327!=x328)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x329 = UINT32_MAX;
	int32_t x330 = -1;
	uint64_t x331 = UINT64_MAX;
	static int64_t x332 = INT64_MIN;
	int32_t t81 = 2399;

    t81 = (x329<=(x330/(x331!=x332)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x333 = INT64_MIN;
	static int64_t x334 = 70393505303LL;
	uint16_t x335 = 9262U;
	static volatile int32_t t82 = 12;

    t82 = (x333<=(x334/(x335!=x336)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x337 = INT64_MAX;
	uint32_t x338 = UINT32_MAX;
	volatile uint32_t x339 = 47240754U;
	static uint16_t x340 = UINT16_MAX;
	int32_t t83 = 288566686;

    t83 = (x337<=(x338/(x339!=x340)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x341 = INT8_MIN;
	static volatile int16_t x343 = INT16_MIN;
	int32_t t84 = -2553708;

    t84 = (x341<=(x342/(x343!=x344)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x345 = -1107509267LL;
	static int8_t x346 = INT8_MAX;
	int32_t x348 = -1;
	int32_t t85 = 6583325;

    t85 = (x345<=(x346/(x347!=x348)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint32_t x349 = UINT32_MAX;
	uint8_t x350 = 57U;
	int8_t x352 = INT8_MAX;
	static int32_t t86 = 5196438;

    t86 = (x349<=(x350/(x351!=x352)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x355 = UINT32_MAX;
	int16_t x356 = 11;
	static int32_t t87 = 8149;

    t87 = (x353<=(x354/(x355!=x356)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int64_t x357 = INT64_MIN;
	int64_t x358 = -1LL;
	volatile int64_t x359 = INT64_MAX;
	uint8_t x360 = UINT8_MAX;
	int32_t t88 = 1;

    t88 = (x357<=(x358/(x359!=x360)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x361 = 0U;
	int64_t x362 = INT64_MAX;
	int32_t x364 = INT32_MIN;
	static volatile int32_t t89 = 8;

    t89 = (x361<=(x362/(x363!=x364)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x365 = INT32_MIN;
	volatile int8_t x366 = -8;
	static int16_t x367 = INT16_MAX;
	int32_t x368 = INT32_MIN;

    t90 = (x365<=(x366/(x367!=x368)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint32_t x370 = UINT32_MAX;
	uint8_t x371 = 2U;
	static uint64_t x372 = 1245341410000LLU;
	volatile int32_t t91 = 5286;

    t91 = (x369<=(x370/(x371!=x372)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile int16_t x378 = 147;
	uint16_t x379 = UINT16_MAX;
	volatile uint8_t x380 = 7U;
	volatile int32_t t92 = 834723;

    t92 = (x377<=(x378/(x379!=x380)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int8_t x382 = -1;
	uint64_t x383 = 118LLU;
	int32_t t93 = -1029772126;

    t93 = (x381<=(x382/(x383!=x384)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x386 = UINT16_MAX;
	uint16_t x387 = UINT16_MAX;
	uint8_t x388 = 0U;
	volatile int32_t t94 = -711;

    t94 = (x385<=(x386/(x387!=x388)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x389 = INT16_MIN;
	int8_t x390 = -1;
	int32_t x391 = 194;
	int16_t x392 = -1;

    t95 = (x389<=(x390/(x391!=x392)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x394 = 296;
	static uint8_t x395 = 6U;
	volatile int8_t x396 = 22;
	int32_t t96 = 73925;

    t96 = (x393<=(x394/(x395!=x396)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int8_t x397 = INT8_MIN;
	uint16_t x398 = 14U;
	uint32_t x400 = 925152U;
	int32_t t97 = -3;

    t97 = (x397<=(x398/(x399!=x400)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x402 = 0;
	uint16_t x403 = UINT16_MAX;

    t98 = (x401<=(x402/(x403!=x404)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x407 = INT16_MIN;
	int32_t t99 = 211;

    t99 = (x405<=(x406/(x407!=x408)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x409 = INT64_MIN;
	volatile int32_t x410 = INT32_MIN;
	static uint64_t x411 = 146LLU;
	int8_t x412 = INT8_MIN;
	volatile int32_t t100 = -43;

    t100 = (x409<=(x410/(x411!=x412)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x414 = 111LL;
	static int32_t x416 = INT32_MIN;
	int32_t t101 = -111;

    t101 = (x413<=(x414/(x415!=x416)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x422 = 4;
	uint64_t x423 = 59251LLU;
	uint16_t x424 = 17U;
	int32_t t102 = 106960108;

    t102 = (x421<=(x422/(x423!=x424)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x425 = INT8_MIN;
	volatile int32_t x426 = -1;
	int16_t x428 = 1882;
	int32_t t103 = 1;

    t103 = (x425<=(x426/(x427!=x428)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint8_t x429 = 0U;
	volatile int16_t x430 = INT16_MAX;
	int64_t x431 = -1LL;
	int16_t x432 = INT16_MAX;
	volatile int32_t t104 = -287580772;

    t104 = (x429<=(x430/(x431!=x432)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x433 = -25062463583LL;
	int64_t x435 = -15LL;
	int32_t x436 = -1;

    t105 = (x433<=(x434/(x435!=x436)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x438 = INT32_MAX;
	int64_t x439 = 14LL;
	int8_t x440 = INT8_MAX;
	static int32_t t106 = 2;

    t106 = (x437<=(x438/(x439!=x440)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static int16_t x441 = 16;
	int8_t x442 = INT8_MIN;
	static int16_t x443 = INT16_MIN;
	int32_t x444 = INT32_MIN;
	int32_t t107 = -124260000;

    t107 = (x441<=(x442/(x443!=x444)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x446 = INT8_MIN;
	uint16_t x447 = UINT16_MAX;
	int64_t x448 = 37934LL;
	static int32_t t108 = 97;

    t108 = (x445<=(x446/(x447!=x448)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x449 = 2933U;
	volatile int8_t x450 = 1;
	int8_t x451 = INT8_MIN;
	int32_t t109 = 1367101;

    t109 = (x449<=(x450/(x451!=x452)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x454 = -1;
	int16_t x455 = INT16_MIN;
	int64_t x456 = 0LL;
	int32_t t110 = 6995;

    t110 = (x453<=(x454/(x455!=x456)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint8_t x457 = UINT8_MAX;
	int32_t x458 = INT32_MAX;
	static uint16_t x459 = 18U;
	volatile int32_t t111 = 43;

    t111 = (x457<=(x458/(x459!=x460)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x461 = INT64_MIN;
	volatile uint32_t x462 = 1875U;
	int32_t t112 = 312182;

    t112 = (x461<=(x462/(x463!=x464)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x465 = 0U;
	uint32_t x466 = 449U;
	volatile uint8_t x467 = 45U;

    t113 = (x465<=(x466/(x467!=x468)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static int8_t x469 = 7;
	static int64_t x471 = INT64_MIN;
	volatile uint16_t x472 = 516U;
	volatile int32_t t114 = -3509790;

    t114 = (x469<=(x470/(x471!=x472)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint32_t x473 = 0U;
	int64_t x474 = -923419535LL;
	volatile uint16_t x476 = 7U;
	static volatile int32_t t115 = -77377;

    t115 = (x473<=(x474/(x475!=x476)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int32_t x477 = -1;
	volatile uint16_t x478 = UINT16_MAX;
	volatile uint64_t x479 = 2LLU;
	static int32_t t116 = 777;

    t116 = (x477<=(x478/(x479!=x480)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static int32_t x481 = -10175818;
	volatile int8_t x482 = INT8_MIN;
	int16_t x483 = -1;
	int64_t x484 = INT64_MAX;
	int32_t t117 = -43;

    t117 = (x481<=(x482/(x483!=x484)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x485 = INT64_MIN;
	static volatile int32_t x486 = INT32_MAX;
	int64_t x487 = INT64_MAX;
	static int16_t x488 = INT16_MIN;
	static volatile int32_t t118 = -2697;

    t118 = (x485<=(x486/(x487!=x488)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x489 = 6935407U;
	uint8_t x490 = UINT8_MAX;
	volatile int64_t x491 = INT64_MIN;
	uint64_t x492 = 3387531770368LLU;

    t119 = (x489<=(x490/(x491!=x492)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x497 = 64273451758588LL;
	static int8_t x500 = 2;
	int32_t t120 = -132709082;

    t120 = (x497<=(x498/(x499!=x500)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x501 = 0;
	uint64_t x502 = 4299008641965604LLU;
	uint8_t x503 = UINT8_MAX;
	uint16_t x504 = 46U;
	static int32_t t121 = -1;

    t121 = (x501<=(x502/(x503!=x504)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x505 = 1U;
	uint32_t x506 = 53626U;
	int16_t x507 = INT16_MIN;
	int64_t x508 = -1LL;
	static int32_t t122 = 232032;

    t122 = (x505<=(x506/(x507!=x508)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x509 = -42412192;
	static int8_t x510 = INT8_MIN;
	int16_t x512 = -1;
	int32_t t123 = 15283480;

    t123 = (x509<=(x510/(x511!=x512)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x513 = 35439761;
	uint32_t x514 = UINT32_MAX;
	int16_t x515 = 4439;
	int16_t x516 = INT16_MIN;
	int32_t t124 = 5;

    t124 = (x513<=(x514/(x515!=x516)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x517 = 3907;
	int32_t x518 = INT32_MIN;
	static int8_t x519 = INT8_MIN;
	static volatile int32_t t125 = 203252;

    t125 = (x517<=(x518/(x519!=x520)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x521 = INT32_MIN;
	uint16_t x522 = UINT16_MAX;
	static volatile uint8_t x523 = UINT8_MAX;
	uint32_t x524 = 882082U;
	volatile int32_t t126 = 402499;

    t126 = (x521<=(x522/(x523!=x524)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x525 = 505435842943LLU;
	static int64_t x527 = -1LL;
	volatile int32_t t127 = -1065854208;

    t127 = (x525<=(x526/(x527!=x528)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint8_t x529 = UINT8_MAX;
	int64_t x530 = -1LL;
	int32_t x531 = INT32_MIN;
	int64_t x532 = INT64_MAX;

    t128 = (x529<=(x530/(x531!=x532)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x533 = 0U;
	volatile int64_t x536 = INT64_MIN;

    t129 = (x533<=(x534/(x535!=x536)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static int16_t x537 = INT16_MAX;
	volatile int64_t x538 = INT64_MIN;
	int8_t x539 = -6;
	static volatile int32_t t130 = 158;

    t130 = (x537<=(x538/(x539!=x540)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int8_t x542 = INT8_MIN;
	int64_t x543 = 239778726678LL;
	int8_t x544 = INT8_MAX;
	static int32_t t131 = -398346265;

    t131 = (x541<=(x542/(x543!=x544)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x546 = -1;
	int32_t x547 = INT32_MAX;
	int16_t x548 = -1;
	int32_t t132 = -93;

    t132 = (x545<=(x546/(x547!=x548)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x549 = -1;
	int16_t x550 = -17;
	volatile int32_t x551 = -3;
	int32_t x552 = -1;
	int32_t t133 = 168289011;

    t133 = (x549<=(x550/(x551!=x552)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint8_t x554 = 3U;
	int64_t x555 = INT64_MIN;
	volatile int16_t x556 = -944;

    t134 = (x553<=(x554/(x555!=x556)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile uint32_t x557 = 14528U;
	int8_t x558 = INT8_MAX;
	int32_t x559 = INT32_MIN;
	volatile int8_t x560 = INT8_MIN;
	volatile int32_t t135 = 1;

    t135 = (x557<=(x558/(x559!=x560)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x561 = -6;
	uint8_t x562 = 100U;
	uint16_t x563 = UINT16_MAX;
	int8_t x564 = INT8_MIN;
	int32_t t136 = -178124731;

    t136 = (x561<=(x562/(x563!=x564)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint16_t x565 = UINT16_MAX;
	int8_t x567 = 12;
	uint16_t x568 = UINT16_MAX;

    t137 = (x565<=(x566/(x567!=x568)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int32_t x569 = 48689;
	static uint64_t x570 = 16848692017LLU;
	volatile uint8_t x571 = 99U;
	uint32_t x572 = UINT32_MAX;
	static volatile int32_t t138 = -3004228;

    t138 = (x569<=(x570/(x571!=x572)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x573 = UINT16_MAX;
	uint32_t x576 = 161U;
	int32_t t139 = -5580342;

    t139 = (x573<=(x574/(x575!=x576)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x577 = -58045LL;
	volatile int32_t x578 = INT32_MIN;
	uint16_t x579 = 98U;
	volatile int32_t t140 = -184596;

    t140 = (x577<=(x578/(x579!=x580)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x581 = INT64_MIN;
	int64_t x582 = INT64_MIN;
	uint16_t x583 = 0U;
	static volatile int8_t x584 = -1;

    t141 = (x581<=(x582/(x583!=x584)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x585 = -1;
	uint8_t x586 = UINT8_MAX;
	int64_t x587 = -1LL;
	volatile int64_t x588 = -13042691LL;
	volatile int32_t t142 = -8;

    t142 = (x585<=(x586/(x587!=x588)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x589 = -941047;
	static int8_t x590 = -1;
	int64_t x591 = 362366718LL;
	static int32_t x592 = -3092816;

    t143 = (x589<=(x590/(x591!=x592)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x593 = INT16_MIN;
	static uint64_t x594 = 9377436984558637LLU;
	int64_t x595 = INT64_MIN;
	int16_t x596 = -1;
	int32_t t144 = -21;

    t144 = (x593<=(x594/(x595!=x596)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint64_t x597 = UINT64_MAX;
	static uint32_t x598 = 13215U;
	static volatile uint64_t x599 = 125606307016LLU;
	uint32_t x600 = UINT32_MAX;
	static int32_t t145 = 0;

    t145 = (x597<=(x598/(x599!=x600)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x603 = 0;
	uint16_t x604 = 45U;
	int32_t t146 = 6045;

    t146 = (x601<=(x602/(x603!=x604)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x605 = -1LL;
	static int16_t x607 = INT16_MIN;
	int8_t x608 = INT8_MIN;
	int32_t t147 = 6;

    t147 = (x605<=(x606/(x607!=x608)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x613 = 156U;
	int8_t x614 = INT8_MAX;
	int16_t x616 = INT16_MIN;
	int32_t t148 = 4;

    t148 = (x613<=(x614/(x615!=x616)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int16_t x621 = INT16_MIN;
	static uint16_t x622 = 238U;
	static int32_t x623 = 765101847;
	uint64_t x624 = UINT64_MAX;

    t149 = (x621<=(x622/(x623!=x624)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int32_t x625 = INT32_MAX;
	volatile uint8_t x627 = UINT8_MAX;
	int32_t x628 = INT32_MIN;
	int32_t t150 = 190571;

    t150 = (x625<=(x626/(x627!=x628)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x629 = INT8_MIN;
	uint8_t x630 = 23U;
	int32_t x631 = INT32_MIN;
	int32_t x632 = INT32_MAX;
	int32_t t151 = 37852271;

    t151 = (x629<=(x630/(x631!=x632)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint8_t x633 = 6U;
	uint32_t x635 = 7U;
	int8_t x636 = -1;
	int32_t t152 = -144889459;

    t152 = (x633<=(x634/(x635!=x636)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile uint16_t x637 = 6112U;
	int64_t x638 = INT64_MIN;
	volatile int16_t x640 = INT16_MAX;
	volatile int32_t t153 = 0;

    t153 = (x637<=(x638/(x639!=x640)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x649 = -342030583;
	static int32_t x650 = INT32_MAX;
	static volatile int16_t x651 = -1;
	int32_t x652 = INT32_MIN;
	static int32_t t154 = -11224395;

    t154 = (x649<=(x650/(x651!=x652)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x653 = 19;
	int16_t x655 = -154;
	static int32_t x656 = INT32_MIN;
	int32_t t155 = -970166645;

    t155 = (x653<=(x654/(x655!=x656)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x657 = INT16_MIN;
	static uint32_t x659 = UINT32_MAX;
	int32_t x660 = INT32_MIN;

    t156 = (x657<=(x658/(x659!=x660)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x661 = -1;
	int32_t x662 = 152394528;
	uint32_t x663 = 2034013900U;
	int16_t x664 = 0;
	int32_t t157 = -1052263063;

    t157 = (x661<=(x662/(x663!=x664)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x665 = INT32_MAX;
	int64_t x666 = -1602143552899LL;
	static int32_t x667 = INT32_MIN;
	uint32_t x668 = UINT32_MAX;
	static int32_t t158 = -27;

    t158 = (x665<=(x666/(x667!=x668)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x669 = INT32_MIN;
	int16_t x670 = INT16_MIN;
	uint8_t x671 = 45U;
	int32_t x672 = -1;
	volatile int32_t t159 = -995;

    t159 = (x669<=(x670/(x671!=x672)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x673 = 41;
	volatile int8_t x674 = -2;
	static int8_t x675 = INT8_MAX;
	volatile int8_t x676 = -2;

    t160 = (x673<=(x674/(x675!=x676)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile int32_t x679 = -1;
	uint16_t x680 = 106U;
	volatile int32_t t161 = -8193882;

    t161 = (x677<=(x678/(x679!=x680)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static int16_t x681 = INT16_MAX;
	int16_t x682 = -1;
	volatile uint16_t x683 = 2015U;
	volatile int64_t x684 = INT64_MAX;

    t162 = (x681<=(x682/(x683!=x684)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x687 = 5U;
	int8_t x688 = INT8_MIN;

    t163 = (x685<=(x686/(x687!=x688)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x689 = INT8_MIN;
	int8_t x690 = INT8_MAX;
	static volatile uint32_t x691 = 0U;
	int16_t x692 = 5298;

    t164 = (x689<=(x690/(x691!=x692)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int64_t x693 = -1451439675354689193LL;
	int16_t x694 = 0;
	volatile int16_t x695 = -1;
	uint8_t x696 = UINT8_MAX;

    t165 = (x693<=(x694/(x695!=x696)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint32_t x697 = UINT32_MAX;
	static int64_t x699 = INT64_MIN;
	static int32_t t166 = -298938238;

    t166 = (x697<=(x698/(x699!=x700)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x701 = INT8_MIN;
	int8_t x702 = 19;
	int8_t x703 = 62;
	volatile int16_t x704 = 61;
	volatile int32_t t167 = 192;

    t167 = (x701<=(x702/(x703!=x704)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x705 = INT32_MIN;
	static int64_t x706 = 29004029842371974LL;
	uint64_t x707 = 1088960521024019565LLU;
	uint64_t x708 = 9086835457428699475LLU;

    t168 = (x705<=(x706/(x707!=x708)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x709 = INT32_MIN;
	uint16_t x710 = 3U;
	static int16_t x712 = INT16_MIN;

    t169 = (x709<=(x710/(x711!=x712)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x714 = INT8_MIN;
	volatile int32_t x715 = INT32_MAX;
	int8_t x716 = -1;
	volatile int32_t t170 = 1;

    t170 = (x713<=(x714/(x715!=x716)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x717 = INT32_MIN;
	int16_t x718 = -9;
	volatile uint64_t x719 = UINT64_MAX;
	int32_t t171 = -3;

    t171 = (x717<=(x718/(x719!=x720)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int32_t x721 = -120996330;
	uint64_t x722 = 484290851LLU;
	static uint8_t x723 = UINT8_MAX;
	static volatile int32_t x724 = INT32_MAX;
	volatile int32_t t172 = 146;

    t172 = (x721<=(x722/(x723!=x724)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x725 = 2639934052909721710LLU;
	int32_t x727 = 633132;
	uint16_t x728 = 0U;
	volatile int32_t t173 = 1222285;

    t173 = (x725<=(x726/(x727!=x728)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint16_t x729 = 46U;
	int8_t x730 = INT8_MAX;
	uint8_t x731 = 63U;
	int64_t x732 = INT64_MIN;

    t174 = (x729<=(x730/(x731!=x732)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x733 = INT64_MIN;
	static int16_t x734 = -1908;
	int32_t x736 = 728;
	volatile int32_t t175 = 700127956;

    t175 = (x733<=(x734/(x735!=x736)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x738 = -1;
	static uint8_t x739 = UINT8_MAX;
	static volatile int32_t x740 = 401721;
	volatile int32_t t176 = 1688523;

    t176 = (x737<=(x738/(x739!=x740)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x742 = INT16_MAX;
	volatile uint16_t x743 = 131U;
	volatile int32_t t177 = -1;

    t177 = (x741<=(x742/(x743!=x744)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint64_t x745 = UINT64_MAX;
	int8_t x747 = -4;
	uint32_t x748 = 1347U;
	static int32_t t178 = 3419;

    t178 = (x745<=(x746/(x747!=x748)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x749 = -1;
	int32_t x750 = -1;
	uint8_t x751 = 55U;
	static uint64_t x752 = UINT64_MAX;
	volatile int32_t t179 = 1;

    t179 = (x749<=(x750/(x751!=x752)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x753 = UINT16_MAX;
	int8_t x755 = 0;
	uint8_t x756 = 59U;

    t180 = (x753<=(x754/(x755!=x756)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x757 = -1;
	int16_t x758 = -5;
	static uint64_t x759 = UINT64_MAX;
	int32_t x760 = -2;
	int32_t t181 = -157;

    t181 = (x757<=(x758/(x759!=x760)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x762 = INT8_MIN;
	volatile int16_t x763 = INT16_MIN;
	uint8_t x764 = UINT8_MAX;
	volatile int32_t t182 = -872754087;

    t182 = (x761<=(x762/(x763!=x764)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x765 = INT8_MAX;
	static volatile int8_t x766 = -1;
	int8_t x767 = -1;
	static int64_t x768 = INT64_MAX;
	int32_t t183 = 6;

    t183 = (x765<=(x766/(x767!=x768)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x769 = 6U;
	int64_t x770 = INT64_MIN;
	int64_t x771 = INT64_MIN;
	int32_t x772 = -3562;
	static volatile int32_t t184 = -13465;

    t184 = (x769<=(x770/(x771!=x772)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x774 = -110296;
	int8_t x775 = INT8_MIN;
	int64_t x776 = -1LL;
	static int32_t t185 = -1217919;

    t185 = (x773<=(x774/(x775!=x776)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x777 = -1;
	int16_t x778 = -1;
	uint16_t x779 = 11661U;
	int32_t t186 = -48137;

    t186 = (x777<=(x778/(x779!=x780)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x781 = -1;
	volatile uint16_t x782 = 125U;
	int32_t x783 = -110;

    t187 = (x781<=(x782/(x783!=x784)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x785 = 0;
	int64_t x786 = INT64_MIN;
	int16_t x788 = INT16_MIN;

    t188 = (x785<=(x786/(x787!=x788)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x791 = 7365U;
	int64_t x792 = -804834831130116833LL;
	volatile int32_t t189 = -52524655;

    t189 = (x789<=(x790/(x791!=x792)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x793 = INT64_MIN;
	int32_t x794 = 1511;

    t190 = (x793<=(x794/(x795!=x796)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int32_t x797 = 357110;
	static int8_t x798 = INT8_MIN;
	int8_t x799 = INT8_MAX;
	int32_t x800 = INT32_MAX;
	int32_t t191 = -116818028;

    t191 = (x797<=(x798/(x799!=x800)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x801 = INT32_MIN;
	int32_t x802 = INT32_MIN;
	uint16_t x803 = 1174U;
	int64_t x804 = 130035545623424LL;
	volatile int32_t t192 = 385416483;

    t192 = (x801<=(x802/(x803!=x804)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x805 = 1LLU;
	uint64_t x806 = 48777LLU;
	int16_t x807 = -1;
	volatile int64_t x808 = 11381LL;
	volatile int32_t t193 = -4212;

    t193 = (x805<=(x806/(x807!=x808)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x810 = -1;
	volatile uint8_t x811 = UINT8_MAX;
	static uint8_t x812 = 0U;

    t194 = (x809<=(x810/(x811!=x812)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint32_t x813 = 312245587U;
	static volatile int64_t x814 = -1LL;
	static volatile int8_t x815 = INT8_MIN;
	static volatile int32_t x816 = 87;

    t195 = (x813<=(x814/(x815!=x816)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x818 = 31U;
	uint8_t x819 = UINT8_MAX;
	uint16_t x820 = 18527U;
	volatile int32_t t196 = 22985;

    t196 = (x817<=(x818/(x819!=x820)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x821 = INT16_MIN;
	volatile int8_t x822 = -1;
	int8_t x823 = INT8_MIN;
	int8_t x824 = -1;
	volatile int32_t t197 = -6020466;

    t197 = (x821<=(x822/(x823!=x824)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint32_t x825 = UINT32_MAX;
	static int64_t x826 = INT64_MIN;
	int16_t x827 = -1;
	static int16_t x828 = -13020;
	int32_t t198 = -288;

    t198 = (x825<=(x826/(x827!=x828)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x829 = 83057229619889LLU;
	int8_t x830 = -62;
	int64_t x831 = 5849397687238LL;
	int64_t x832 = INT64_MIN;

    t199 = (x829<=(x830/(x831!=x832)));

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

