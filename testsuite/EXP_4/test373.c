
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

int8_t x3 = INT8_MIN;
int16_t x5 = -20;
int32_t t2 = -1416321;
uint64_t x18 = UINT64_MAX;
volatile int32_t x19 = INT32_MAX;
volatile uint8_t x20 = UINT8_MAX;
int32_t x22 = -832409;
uint64_t x25 = 130363757455LLU;
int16_t x27 = INT16_MAX;
int16_t x28 = INT16_MIN;
volatile int32_t x41 = -1;
int64_t x49 = 4116839999086734LL;
static int64_t x50 = INT64_MIN;
int32_t x54 = 3912782;
volatile int64_t x56 = -440650944LL;
static uint16_t x60 = UINT16_MAX;
uint8_t x71 = 4U;
static uint8_t x73 = UINT8_MAX;
static volatile uint32_t x75 = UINT32_MAX;
static int32_t t18 = -6;
uint32_t x110 = 59357U;
volatile uint16_t x111 = UINT16_MAX;
int32_t t21 = 65619531;
int32_t x126 = INT32_MIN;
int32_t t26 = 45;
int32_t x154 = INT32_MAX;
int16_t x157 = -6162;
uint32_t x162 = UINT32_MAX;
static int8_t x170 = INT8_MAX;
static volatile int32_t t31 = 8;
uint16_t x173 = 8U;
int64_t x182 = INT64_MIN;
uint64_t x185 = 15968997454382262LLU;
uint64_t x199 = UINT64_MAX;
int64_t x200 = -28330629040144LL;
int8_t x220 = INT8_MIN;
int64_t x229 = -8413399542LL;
volatile uint32_t x230 = 19525176U;
volatile int16_t x232 = INT16_MIN;
int64_t x236 = -1108220772LL;
static volatile uint16_t x260 = UINT16_MAX;
volatile int32_t t49 = 10238;
static volatile uint16_t x267 = 3U;
int16_t x268 = -1;
static volatile int64_t x276 = INT64_MIN;
volatile int8_t x280 = INT8_MAX;
int16_t x283 = 297;
int32_t t54 = -76;
static volatile int16_t x288 = 5010;
static volatile int32_t t55 = -34;
int32_t x292 = -1;
static int32_t x297 = INT32_MIN;
static uint8_t x300 = 7U;
uint32_t x302 = 2082684436U;
volatile uint64_t x303 = UINT64_MAX;
static int32_t x304 = -1914826;
static uint16_t x312 = 0U;
static int32_t t63 = 4649;
uint8_t x325 = 6U;
int32_t t67 = 37;
uint32_t x339 = 3765U;
int32_t x340 = INT32_MIN;
uint8_t x352 = 59U;
volatile int16_t x355 = INT16_MIN;
int8_t x356 = -1;
int64_t x357 = -30744505310958LL;
int64_t x368 = -1LL;
volatile int32_t t75 = -1969;
uint32_t x383 = 57U;
static uint64_t x385 = 1043669678LLU;
uint64_t x386 = 327145101406062LLU;
int32_t t77 = 248676;
volatile uint16_t x394 = 694U;
uint64_t x401 = 179LLU;
static int64_t x402 = INT64_MAX;
int16_t x409 = -1;
int8_t x416 = INT8_MIN;
int32_t t83 = -268;
int8_t x420 = INT8_MIN;
static int32_t t85 = 1;
int8_t x426 = INT8_MAX;
volatile int64_t x429 = 25669844LL;
int8_t x433 = -1;
uint16_t x438 = 3838U;
int16_t x439 = INT16_MIN;
static int32_t x442 = 69;
uint32_t x443 = UINT32_MAX;
int64_t x445 = -573684605LL;
uint64_t x451 = UINT64_MAX;
int32_t x453 = INT32_MAX;
int32_t t95 = 3;
int16_t x475 = -1;
static int64_t x482 = INT64_MIN;
volatile int32_t t99 = -673;
volatile int16_t x495 = -1;
uint64_t x500 = 647499LLU;
int32_t t101 = 98;
static uint16_t x506 = UINT16_MAX;
static int64_t x510 = INT64_MIN;
int64_t x517 = INT64_MIN;
int8_t x520 = 0;
int32_t t104 = 38;
int16_t x525 = INT16_MAX;
int32_t x540 = -1;
uint8_t x541 = 30U;
uint16_t x549 = 1121U;
volatile int16_t x551 = 53;
static uint8_t x555 = 3U;
int16_t x561 = INT16_MIN;
static int16_t x562 = INT16_MAX;
uint32_t x568 = 3971573U;
uint64_t x585 = 1801433LLU;
volatile int64_t x605 = -1201302377LL;
uint8_t x608 = 125U;
volatile int16_t x612 = INT16_MIN;
volatile int32_t t123 = -474840;
volatile int32_t t124 = -75143;
volatile int32_t t125 = 41;
volatile int16_t x627 = INT16_MAX;
int16_t x631 = 228;
int16_t x645 = INT16_MIN;
int16_t x646 = INT16_MIN;
int32_t x653 = INT32_MIN;
int64_t x657 = INT64_MIN;
static volatile int32_t x658 = INT32_MIN;
uint32_t x668 = UINT32_MAX;
int16_t x674 = -1;
volatile int8_t x675 = INT8_MAX;
static volatile int32_t t136 = -726984657;
int32_t x678 = 442907863;
uint64_t x688 = UINT64_MAX;
uint8_t x691 = 43U;
uint16_t x695 = 961U;
int8_t x702 = 9;
uint32_t x703 = 30U;
int32_t x707 = -1;
static volatile int64_t x710 = -2418LL;
int32_t x716 = -109024144;
volatile int8_t x727 = -3;
volatile int32_t t149 = -3798406;
int32_t x730 = INT32_MIN;
uint64_t x731 = 14048LLU;
static int16_t x733 = 1;
volatile int8_t x736 = -9;
int32_t x740 = 1;
int8_t x742 = 1;
int16_t x744 = INT16_MIN;
volatile int32_t t153 = -16404618;
volatile int64_t x747 = -488657877LL;
int64_t x754 = -1LL;
uint64_t x761 = 498LLU;
int16_t x764 = -1;
volatile int64_t x771 = INT64_MIN;
volatile int32_t t160 = -897167;
int32_t x777 = INT32_MAX;
static uint32_t x779 = 59769704U;
int16_t x789 = INT16_MIN;
int32_t x792 = INT32_MIN;
uint32_t x796 = 7589U;
volatile uint32_t x797 = 4104613U;
uint16_t x799 = 354U;
int16_t x800 = 45;
static volatile int16_t x802 = -2;
int8_t x806 = -10;
uint64_t x808 = 1204LLU;
int32_t x810 = -1;
static volatile int32_t t170 = -5833063;
int32_t x826 = 0;
volatile int32_t t173 = -112;
int8_t x831 = -1;
int32_t x839 = -2697;
static int32_t x858 = -1;
int32_t t179 = -2583485;
volatile int32_t x867 = -1;
volatile uint16_t x872 = 57U;
uint32_t x874 = 72693804U;
int32_t t184 = -656060;
int32_t t186 = -198506;
int32_t x897 = INT32_MIN;
int32_t x901 = -1;
volatile uint16_t x903 = UINT16_MAX;
volatile int8_t x910 = -1;
int32_t t192 = -3;
int8_t x926 = 0;
int16_t x927 = -1;
uint8_t x932 = 1U;
volatile int8_t x933 = INT8_MIN;
int16_t x936 = 1;
volatile int32_t t195 = 0;
int16_t x937 = -4555;
volatile int32_t x939 = INT32_MIN;
static int16_t x943 = -1;
int32_t t199 = -387046;


void f0(void) {
    	static int8_t x1 = INT8_MIN;
	int64_t x2 = -77780789538334LL;
	uint8_t x4 = 119U;
	static int32_t t0 = 41516965;

    t0 = (x1>(x2|(x3-x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x6 = INT8_MIN;
	volatile int8_t x7 = INT8_MIN;
	volatile uint8_t x8 = 82U;
	int32_t t1 = 23619817;

    t1 = (x5>(x6|(x7-x8)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x13 = 3;
	static int32_t x14 = INT32_MIN;
	int64_t x15 = -68580781LL;
	volatile int32_t x16 = -3;

    t2 = (x13>(x14|(x15-x16)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x17 = -1;
	volatile int32_t t3 = -2;

    t3 = (x17>(x18|(x19-x20)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x21 = UINT64_MAX;
	int32_t x23 = -1;
	volatile uint32_t x24 = UINT32_MAX;
	volatile int32_t t4 = 1;

    t4 = (x21>(x22|(x23-x24)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint8_t x26 = 1U;
	static volatile int32_t t5 = 491;

    t5 = (x25>(x26|(x27-x28)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x37 = INT16_MIN;
	volatile uint64_t x38 = 8262553810LLU;
	uint16_t x39 = 1423U;
	static int64_t x40 = -1LL;
	volatile int32_t t6 = 284010;

    t6 = (x37>(x38|(x39-x40)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint32_t x42 = 1269U;
	static volatile int16_t x43 = -4;
	int64_t x44 = -1LL;
	static volatile int32_t t7 = 846750;

    t7 = (x41>(x42|(x43-x44)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static int32_t x51 = INT32_MAX;
	uint32_t x52 = 17917859U;
	volatile int32_t t8 = 332998;

    t8 = (x49>(x50|(x51-x52)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x53 = INT16_MIN;
	static volatile int32_t x55 = 1553;
	volatile int32_t t9 = -243950;

    t9 = (x53>(x54|(x55-x56)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x57 = 1U;
	volatile int8_t x58 = INT8_MIN;
	int8_t x59 = -1;
	volatile int32_t t10 = -8;

    t10 = (x57>(x58|(x59-x60)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x61 = -4;
	volatile int32_t x62 = INT32_MIN;
	int64_t x63 = INT64_MAX;
	uint64_t x64 = UINT64_MAX;
	volatile int32_t t11 = 55115073;

    t11 = (x61>(x62|(x63-x64)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x65 = INT16_MIN;
	int16_t x66 = INT16_MIN;
	volatile uint8_t x67 = 16U;
	uint64_t x68 = 5248603279LLU;
	volatile int32_t t12 = -1;

    t12 = (x65>(x66|(x67-x68)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x69 = UINT64_MAX;
	int16_t x70 = INT16_MIN;
	int16_t x72 = INT16_MIN;
	static volatile int32_t t13 = -55799;

    t13 = (x69>(x70|(x71-x72)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x74 = 5710U;
	volatile int8_t x76 = INT8_MIN;
	volatile int32_t t14 = 241;

    t14 = (x73>(x74|(x75-x76)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x77 = INT32_MIN;
	static uint16_t x78 = 6832U;
	uint32_t x79 = UINT32_MAX;
	uint8_t x80 = 8U;
	static volatile int32_t t15 = 5903824;

    t15 = (x77>(x78|(x79-x80)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x81 = 0U;
	uint8_t x82 = UINT8_MAX;
	int16_t x83 = 36;
	static volatile int32_t x84 = -1557;
	volatile int32_t t16 = 1283249;

    t16 = (x81>(x82|(x83-x84)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x85 = INT64_MIN;
	int16_t x86 = INT16_MIN;
	static int32_t x87 = 24;
	int32_t x88 = -1;
	volatile int32_t t17 = -3926;

    t17 = (x85>(x86|(x87-x88)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x89 = INT16_MAX;
	int8_t x90 = -1;
	int16_t x91 = INT16_MAX;
	uint16_t x92 = 1U;

    t18 = (x89>(x90|(x91-x92)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile int64_t x97 = 1LL;
	static uint64_t x98 = 49558470601913118LLU;
	static int64_t x99 = -52594370271247LL;
	int32_t x100 = INT32_MAX;
	static int32_t t19 = 406568;

    t19 = (x97>(x98|(x99-x100)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int32_t x105 = INT32_MAX;
	volatile int64_t x106 = -3515536319455299LL;
	uint16_t x107 = 13U;
	static int8_t x108 = -1;
	volatile int32_t t20 = 1719;

    t20 = (x105>(x106|(x107-x108)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x109 = INT16_MIN;
	int32_t x112 = -50774;

    t21 = (x109>(x110|(x111-x112)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile int64_t x121 = INT64_MAX;
	int8_t x122 = -1;
	int64_t x123 = 280192861291284LL;
	volatile uint32_t x124 = 0U;
	int32_t t22 = 22874852;

    t22 = (x121>(x122|(x123-x124)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x125 = 381;
	static uint64_t x127 = UINT64_MAX;
	uint64_t x128 = 110410LLU;
	volatile int32_t t23 = 792;

    t23 = (x125>(x126|(x127-x128)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile uint8_t x133 = UINT8_MAX;
	uint8_t x134 = UINT8_MAX;
	int64_t x135 = INT64_MAX;
	uint32_t x136 = 43942U;
	volatile int32_t t24 = 1;

    t24 = (x133>(x134|(x135-x136)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x141 = -1;
	static uint64_t x142 = 12LLU;
	volatile int32_t x143 = 9027873;
	static int8_t x144 = INT8_MIN;
	int32_t t25 = 7750;

    t25 = (x141>(x142|(x143-x144)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x145 = 4412828194929215LLU;
	static volatile int64_t x146 = INT64_MIN;
	int32_t x147 = -137288434;
	volatile uint8_t x148 = UINT8_MAX;

    t26 = (x145>(x146|(x147-x148)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x153 = INT16_MIN;
	int64_t x155 = 4367641517575LL;
	uint8_t x156 = 19U;
	static volatile int32_t t27 = -16543;

    t27 = (x153>(x154|(x155-x156)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int32_t x158 = INT32_MIN;
	int64_t x159 = -14543911LL;
	uint32_t x160 = UINT32_MAX;
	static volatile int32_t t28 = 135351;

    t28 = (x157>(x158|(x159-x160)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x161 = UINT32_MAX;
	uint64_t x163 = UINT64_MAX;
	static uint64_t x164 = 1712538388LLU;
	volatile int32_t t29 = 75755;

    t29 = (x161>(x162|(x163-x164)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x165 = INT64_MAX;
	uint16_t x166 = 105U;
	static volatile uint64_t x167 = 36087348026988716LLU;
	int64_t x168 = 2196059579334066LL;
	static int32_t t30 = -404577;

    t30 = (x165>(x166|(x167-x168)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x169 = 64U;
	int16_t x171 = -1;
	uint8_t x172 = 15U;

    t31 = (x169>(x170|(x171-x172)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x174 = INT64_MAX;
	static uint8_t x175 = 10U;
	volatile int16_t x176 = 3364;
	volatile int32_t t32 = 75511;

    t32 = (x173>(x174|(x175-x176)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x177 = -32541;
	uint32_t x178 = 1941952177U;
	int16_t x179 = INT16_MIN;
	int8_t x180 = INT8_MIN;
	int32_t t33 = 4234229;

    t33 = (x177>(x178|(x179-x180)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x181 = UINT64_MAX;
	int8_t x183 = INT8_MIN;
	uint16_t x184 = 1908U;
	int32_t t34 = 82337061;

    t34 = (x181>(x182|(x183-x184)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x186 = INT64_MIN;
	int32_t x187 = 2941;
	int64_t x188 = 91223340LL;
	static int32_t t35 = 155532647;

    t35 = (x185>(x186|(x187-x188)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x197 = INT8_MIN;
	int16_t x198 = -1;
	volatile int32_t t36 = 818;

    t36 = (x197>(x198|(x199-x200)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint8_t x201 = UINT8_MAX;
	static int64_t x202 = -1LL;
	static int8_t x203 = -1;
	uint64_t x204 = UINT64_MAX;
	volatile int32_t t37 = 214;

    t37 = (x201>(x202|(x203-x204)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x205 = INT64_MAX;
	int32_t x206 = INT32_MIN;
	int8_t x207 = -1;
	uint64_t x208 = 7160167848108754LLU;
	static volatile int32_t t38 = -6077426;

    t38 = (x205>(x206|(x207-x208)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x209 = 15;
	uint8_t x210 = 101U;
	int16_t x211 = -55;
	uint32_t x212 = 8591U;
	volatile int32_t t39 = 1382593;

    t39 = (x209>(x210|(x211-x212)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x217 = -1LL;
	uint64_t x218 = 116930162912766800LLU;
	int32_t x219 = INT32_MIN;
	volatile int32_t t40 = 565;

    t40 = (x217>(x218|(x219-x220)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x221 = INT32_MIN;
	uint64_t x222 = UINT64_MAX;
	volatile int32_t x223 = 54984119;
	int8_t x224 = INT8_MIN;
	volatile int32_t t41 = -23;

    t41 = (x221>(x222|(x223-x224)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint64_t x225 = UINT64_MAX;
	uint8_t x226 = UINT8_MAX;
	uint64_t x227 = UINT64_MAX;
	uint16_t x228 = UINT16_MAX;
	static int32_t t42 = -18;

    t42 = (x225>(x226|(x227-x228)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x231 = INT8_MIN;
	static volatile int32_t t43 = 14;

    t43 = (x229>(x230|(x231-x232)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x233 = INT16_MIN;
	int32_t x234 = -1;
	uint16_t x235 = 2U;
	int32_t t44 = -7530;

    t44 = (x233>(x234|(x235-x236)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile uint32_t x237 = 31728U;
	static int8_t x238 = INT8_MAX;
	int16_t x239 = INT16_MAX;
	int32_t x240 = -1;
	int32_t t45 = 415991744;

    t45 = (x237>(x238|(x239-x240)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint8_t x241 = UINT8_MAX;
	int64_t x242 = -1LL;
	int16_t x243 = 204;
	int32_t x244 = 27239683;
	volatile int32_t t46 = 107;

    t46 = (x241>(x242|(x243-x244)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x245 = 6U;
	volatile int32_t x246 = -1;
	int32_t x247 = 298167;
	uint64_t x248 = UINT64_MAX;
	static int32_t t47 = -34;

    t47 = (x245>(x246|(x247-x248)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x249 = INT8_MAX;
	static volatile int16_t x250 = 1;
	int8_t x251 = INT8_MIN;
	int16_t x252 = INT16_MIN;
	int32_t t48 = 14460100;

    t48 = (x249>(x250|(x251-x252)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int16_t x257 = 1;
	uint8_t x258 = 57U;
	static int8_t x259 = -46;

    t49 = (x257>(x258|(x259-x260)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x261 = 40U;
	int64_t x262 = INT64_MIN;
	volatile int16_t x263 = 42;
	static int16_t x264 = -1;
	static volatile int32_t t50 = 126;

    t50 = (x261>(x262|(x263-x264)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint64_t x265 = 11746LLU;
	int32_t x266 = INT32_MAX;
	volatile int32_t t51 = -184;

    t51 = (x265>(x266|(x267-x268)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint32_t x273 = 11139U;
	static volatile int8_t x274 = INT8_MAX;
	int8_t x275 = INT8_MIN;
	static int32_t t52 = 6244287;

    t52 = (x273>(x274|(x275-x276)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x277 = 6324;
	volatile int16_t x278 = 4;
	static int8_t x279 = -2;
	volatile int32_t t53 = 1681;

    t53 = (x277>(x278|(x279-x280)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x281 = -1;
	int32_t x282 = -1;
	int32_t x284 = INT32_MAX;

    t54 = (x281>(x282|(x283-x284)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x285 = -1;
	static uint64_t x286 = UINT64_MAX;
	int64_t x287 = 953080663LL;

    t55 = (x285>(x286|(x287-x288)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x289 = INT32_MIN;
	int8_t x290 = INT8_MIN;
	uint64_t x291 = 6058647440632LLU;
	volatile int32_t t56 = 998;

    t56 = (x289>(x290|(x291-x292)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x293 = 6;
	int64_t x294 = -811081589146LL;
	int16_t x295 = -1;
	int32_t x296 = 869;
	static volatile int32_t t57 = 75233432;

    t57 = (x293>(x294|(x295-x296)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x298 = 191U;
	int32_t x299 = 3825977;
	int32_t t58 = -1;

    t58 = (x297>(x298|(x299-x300)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint16_t x301 = 896U;
	int32_t t59 = 4140346;

    t59 = (x301>(x302|(x303-x304)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int8_t x305 = -1;
	uint16_t x306 = UINT16_MAX;
	int8_t x307 = INT8_MAX;
	volatile int32_t x308 = 1;
	static int32_t t60 = -231;

    t60 = (x305>(x306|(x307-x308)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x309 = UINT64_MAX;
	uint32_t x310 = 55960U;
	int64_t x311 = 224LL;
	volatile int32_t t61 = -807;

    t61 = (x309>(x310|(x311-x312)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x313 = -1;
	uint16_t x314 = 0U;
	volatile uint8_t x315 = UINT8_MAX;
	uint32_t x316 = 14U;
	int32_t t62 = 227;

    t62 = (x313>(x314|(x315-x316)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile int32_t x317 = 24;
	int16_t x318 = INT16_MAX;
	volatile int16_t x319 = -1;
	volatile uint32_t x320 = 19454874U;

    t63 = (x317>(x318|(x319-x320)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x321 = 3855U;
	volatile uint8_t x322 = 111U;
	uint64_t x323 = 35535271056809092LLU;
	int64_t x324 = INT64_MIN;
	volatile int32_t t64 = -7039043;

    t64 = (x321>(x322|(x323-x324)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x326 = -1;
	int16_t x327 = INT16_MIN;
	int8_t x328 = INT8_MIN;
	static int32_t t65 = -5;

    t65 = (x325>(x326|(x327-x328)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x329 = INT32_MIN;
	int8_t x330 = INT8_MIN;
	int16_t x331 = INT16_MIN;
	uint16_t x332 = 14922U;
	int32_t t66 = 75247;

    t66 = (x329>(x330|(x331-x332)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x333 = -1;
	int16_t x334 = 15088;
	int8_t x335 = INT8_MIN;
	static int32_t x336 = INT32_MIN;

    t67 = (x333>(x334|(x335-x336)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x337 = 8719913874065LLU;
	uint32_t x338 = 190U;
	volatile int32_t t68 = -3298;

    t68 = (x337>(x338|(x339-x340)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x341 = UINT8_MAX;
	static int8_t x342 = -12;
	int16_t x343 = -8009;
	uint32_t x344 = UINT32_MAX;
	volatile int32_t t69 = -4;

    t69 = (x341>(x342|(x343-x344)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x349 = INT8_MIN;
	volatile int64_t x350 = INT64_MAX;
	uint32_t x351 = UINT32_MAX;
	int32_t t70 = 388172;

    t70 = (x349>(x350|(x351-x352)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x353 = 12801U;
	int16_t x354 = -1;
	volatile int32_t t71 = 422140;

    t71 = (x353>(x354|(x355-x356)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int64_t x358 = INT64_MAX;
	static int64_t x359 = INT64_MIN;
	static volatile int64_t x360 = -1LL;
	volatile int32_t t72 = -889132;

    t72 = (x357>(x358|(x359-x360)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x365 = INT64_MIN;
	uint32_t x366 = UINT32_MAX;
	uint8_t x367 = 2U;
	volatile int32_t t73 = -31542;

    t73 = (x365>(x366|(x367-x368)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int32_t x369 = INT32_MIN;
	int32_t x370 = -1;
	int8_t x371 = INT8_MAX;
	int8_t x372 = INT8_MIN;
	static volatile int32_t t74 = -1073519702;

    t74 = (x369>(x370|(x371-x372)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int32_t x377 = INT32_MIN;
	int32_t x378 = 91195496;
	volatile int64_t x379 = INT64_MAX;
	uint8_t x380 = UINT8_MAX;

    t75 = (x377>(x378|(x379-x380)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x381 = INT8_MAX;
	int16_t x382 = INT16_MIN;
	int8_t x384 = -3;
	volatile int32_t t76 = 0;

    t76 = (x381>(x382|(x383-x384)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x387 = UINT32_MAX;
	volatile int32_t x388 = -241651642;

    t77 = (x385>(x386|(x387-x388)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x389 = 490U;
	int64_t x390 = INT64_MIN;
	uint8_t x391 = 4U;
	int8_t x392 = -1;
	static int32_t t78 = -21873605;

    t78 = (x389>(x390|(x391-x392)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x393 = INT16_MIN;
	static volatile uint16_t x395 = 240U;
	static int8_t x396 = -1;
	static volatile int32_t t79 = -958;

    t79 = (x393>(x394|(x395-x396)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x397 = INT16_MAX;
	int16_t x398 = INT16_MAX;
	uint8_t x399 = 29U;
	int16_t x400 = -1;
	volatile int32_t t80 = -104397;

    t80 = (x397>(x398|(x399-x400)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x403 = -1LL;
	uint8_t x404 = UINT8_MAX;
	volatile int32_t t81 = -333736024;

    t81 = (x401>(x402|(x403-x404)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x410 = INT16_MAX;
	int16_t x411 = INT16_MIN;
	static volatile int8_t x412 = INT8_MIN;
	int32_t t82 = 873658;

    t82 = (x409>(x410|(x411-x412)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint16_t x413 = 43U;
	static uint16_t x414 = 29U;
	volatile int32_t x415 = -12975;

    t83 = (x413>(x414|(x415-x416)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x417 = INT64_MAX;
	uint64_t x418 = 633LLU;
	volatile uint8_t x419 = UINT8_MAX;
	volatile int32_t t84 = 1067355;

    t84 = (x417>(x418|(x419-x420)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x421 = -1LL;
	int8_t x422 = INT8_MIN;
	int64_t x423 = 77413835754LL;
	int32_t x424 = -1;

    t85 = (x421>(x422|(x423-x424)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x425 = INT16_MIN;
	int8_t x427 = -1;
	int64_t x428 = INT64_MIN;
	volatile int32_t t86 = 109;

    t86 = (x425>(x426|(x427-x428)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x430 = INT8_MIN;
	int8_t x431 = INT8_MAX;
	int64_t x432 = 17318739660686380LL;
	int32_t t87 = 10;

    t87 = (x429>(x430|(x431-x432)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x434 = INT8_MAX;
	uint8_t x435 = UINT8_MAX;
	int8_t x436 = INT8_MAX;
	volatile int32_t t88 = 64361;

    t88 = (x433>(x434|(x435-x436)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint16_t x437 = UINT16_MAX;
	uint8_t x440 = 0U;
	static int32_t t89 = 66633423;

    t89 = (x437>(x438|(x439-x440)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint64_t x441 = UINT64_MAX;
	static int16_t x444 = INT16_MIN;
	int32_t t90 = -86421;

    t90 = (x441>(x442|(x443-x444)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x446 = -26LL;
	int8_t x447 = INT8_MAX;
	int32_t x448 = INT32_MAX;
	static volatile int32_t t91 = 514760700;

    t91 = (x445>(x446|(x447-x448)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x449 = 5425U;
	static int8_t x450 = INT8_MIN;
	static volatile uint8_t x452 = 0U;
	static int32_t t92 = 29197;

    t92 = (x449>(x450|(x451-x452)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint8_t x454 = 30U;
	int64_t x455 = -111315793LL;
	int32_t x456 = 1119;
	int32_t t93 = -1;

    t93 = (x453>(x454|(x455-x456)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x457 = 236;
	int16_t x458 = INT16_MAX;
	volatile uint8_t x459 = UINT8_MAX;
	static int32_t x460 = INT32_MAX;
	int32_t t94 = -204184461;

    t94 = (x457>(x458|(x459-x460)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile uint32_t x465 = 586U;
	volatile int8_t x466 = 0;
	uint64_t x467 = UINT64_MAX;
	int8_t x468 = -1;

    t95 = (x465>(x466|(x467-x468)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x469 = INT16_MAX;
	int64_t x470 = 152851461520LL;
	int32_t x471 = -6619096;
	volatile int16_t x472 = -1;
	static volatile int32_t t96 = 185537;

    t96 = (x469>(x470|(x471-x472)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x473 = 3U;
	volatile int8_t x474 = INT8_MIN;
	static int64_t x476 = -1LL;
	int32_t t97 = -1846;

    t97 = (x473>(x474|(x475-x476)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile int16_t x481 = INT16_MIN;
	static uint32_t x483 = UINT32_MAX;
	int16_t x484 = INT16_MIN;
	int32_t t98 = 2270;

    t98 = (x481>(x482|(x483-x484)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x485 = UINT8_MAX;
	int64_t x486 = -6619208087LL;
	int32_t x487 = -1;
	uint64_t x488 = UINT64_MAX;

    t99 = (x485>(x486|(x487-x488)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x493 = -1;
	volatile int64_t x494 = -1LL;
	int16_t x496 = INT16_MIN;
	volatile int32_t t100 = 1452205;

    t100 = (x493>(x494|(x495-x496)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile int16_t x497 = -470;
	volatile int8_t x498 = 0;
	uint8_t x499 = 4U;

    t101 = (x497>(x498|(x499-x500)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x505 = INT16_MIN;
	int64_t x507 = -5LL;
	int64_t x508 = -45731452995332114LL;
	int32_t t102 = 2231;

    t102 = (x505>(x506|(x507-x508)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x509 = -1LL;
	uint64_t x511 = UINT64_MAX;
	static int8_t x512 = 1;
	volatile int32_t t103 = 1;

    t103 = (x509>(x510|(x511-x512)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x518 = INT16_MIN;
	uint16_t x519 = 5541U;

    t104 = (x517>(x518|(x519-x520)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x521 = INT8_MIN;
	int16_t x522 = -9;
	int16_t x523 = 5237;
	volatile int32_t x524 = 1;
	static volatile int32_t t105 = -60878365;

    t105 = (x521>(x522|(x523-x524)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int8_t x526 = INT8_MIN;
	int8_t x527 = INT8_MAX;
	int64_t x528 = INT64_MAX;
	int32_t t106 = -14;

    t106 = (x525>(x526|(x527-x528)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint16_t x529 = 13U;
	int16_t x530 = INT16_MIN;
	int16_t x531 = -13;
	uint16_t x532 = 3324U;
	static volatile int32_t t107 = -23411748;

    t107 = (x529>(x530|(x531-x532)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint32_t x537 = 318U;
	int32_t x538 = -1;
	volatile int16_t x539 = -3;
	static int32_t t108 = -5;

    t108 = (x537>(x538|(x539-x540)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int64_t x542 = INT64_MIN;
	static volatile uint16_t x543 = 25U;
	int8_t x544 = INT8_MIN;
	int32_t t109 = -289713759;

    t109 = (x541>(x542|(x543-x544)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x550 = INT8_MIN;
	volatile uint8_t x552 = UINT8_MAX;
	static int32_t t110 = 3;

    t110 = (x549>(x550|(x551-x552)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x553 = INT16_MIN;
	uint64_t x554 = UINT64_MAX;
	static int64_t x556 = -1LL;
	volatile int32_t t111 = -161639060;

    t111 = (x553>(x554|(x555-x556)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint32_t x557 = 57926U;
	int64_t x558 = INT64_MIN;
	static int8_t x559 = INT8_MIN;
	uint64_t x560 = UINT64_MAX;
	volatile int32_t t112 = 94706393;

    t112 = (x557>(x558|(x559-x560)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x563 = 82;
	int16_t x564 = INT16_MIN;
	static int32_t t113 = -890695;

    t113 = (x561>(x562|(x563-x564)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint16_t x565 = UINT16_MAX;
	uint64_t x566 = 8773537030455324LLU;
	int32_t x567 = -1;
	static volatile int32_t t114 = 1222268;

    t114 = (x565>(x566|(x567-x568)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x569 = INT32_MIN;
	uint32_t x570 = UINT32_MAX;
	static int64_t x571 = -202LL;
	volatile uint32_t x572 = UINT32_MAX;
	static int32_t t115 = -508;

    t115 = (x569>(x570|(x571-x572)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x573 = 21;
	static int64_t x574 = -1LL;
	volatile uint8_t x575 = 2U;
	int64_t x576 = 540136LL;
	int32_t t116 = -2605059;

    t116 = (x573>(x574|(x575-x576)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x586 = 12929;
	volatile uint32_t x587 = UINT32_MAX;
	static uint32_t x588 = 1693812U;
	volatile int32_t t117 = -1816;

    t117 = (x585>(x586|(x587-x588)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x589 = 567U;
	int64_t x590 = INT64_MIN;
	static uint8_t x591 = 1U;
	int32_t x592 = -1;
	int32_t t118 = -33;

    t118 = (x589>(x590|(x591-x592)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x593 = -1;
	volatile uint8_t x594 = 74U;
	uint64_t x595 = UINT64_MAX;
	int8_t x596 = 0;
	int32_t t119 = -49944412;

    t119 = (x593>(x594|(x595-x596)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int32_t x597 = 25792204;
	int64_t x598 = INT64_MIN;
	static int8_t x599 = -21;
	static int8_t x600 = INT8_MIN;
	volatile int32_t t120 = 31;

    t120 = (x597>(x598|(x599-x600)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x601 = 292;
	int16_t x602 = -1;
	int64_t x603 = INT64_MIN;
	int32_t x604 = 0;
	int32_t t121 = 6359;

    t121 = (x601>(x602|(x603-x604)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint8_t x606 = 7U;
	int64_t x607 = -1LL;
	volatile int32_t t122 = 10186457;

    t122 = (x605>(x606|(x607-x608)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int16_t x609 = -16;
	static uint8_t x610 = 10U;
	uint64_t x611 = 1528461807012LLU;

    t123 = (x609>(x610|(x611-x612)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x617 = INT8_MIN;
	static int8_t x618 = INT8_MAX;
	volatile uint16_t x619 = 1U;
	uint64_t x620 = 503100944930LLU;

    t124 = (x617>(x618|(x619-x620)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x621 = -21;
	static int16_t x622 = INT16_MIN;
	int64_t x623 = INT64_MAX;
	uint8_t x624 = 27U;

    t125 = (x621>(x622|(x623-x624)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x625 = -65;
	volatile int8_t x626 = INT8_MIN;
	static uint32_t x628 = 6U;
	volatile int32_t t126 = 51;

    t126 = (x625>(x626|(x627-x628)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x629 = 949;
	volatile int32_t x630 = -2127409;
	static int32_t x632 = 22092166;
	volatile int32_t t127 = 894;

    t127 = (x629>(x630|(x631-x632)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x633 = -1LL;
	uint32_t x634 = UINT32_MAX;
	int64_t x635 = -216758LL;
	uint8_t x636 = 0U;
	int32_t t128 = -3595974;

    t128 = (x633>(x634|(x635-x636)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x637 = -1;
	int64_t x638 = 341333611184950758LL;
	static int32_t x639 = INT32_MIN;
	int64_t x640 = 45LL;
	volatile int32_t t129 = 1;

    t129 = (x637>(x638|(x639-x640)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int64_t x647 = INT64_MIN;
	int64_t x648 = -1096555997358925151LL;
	static int32_t t130 = 325;

    t130 = (x645>(x646|(x647-x648)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint32_t x649 = UINT32_MAX;
	int16_t x650 = INT16_MIN;
	uint8_t x651 = 20U;
	int32_t x652 = 15;
	int32_t t131 = -3661;

    t131 = (x649>(x650|(x651-x652)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x654 = INT16_MIN;
	static uint32_t x655 = 3928447U;
	int16_t x656 = -1197;
	int32_t t132 = -61;

    t132 = (x653>(x654|(x655-x656)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x659 = 1624;
	int16_t x660 = -283;
	static volatile int32_t t133 = -32828;

    t133 = (x657>(x658|(x659-x660)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x665 = -1;
	uint64_t x666 = 21508LLU;
	static int8_t x667 = INT8_MIN;
	int32_t t134 = -804746817;

    t134 = (x665>(x666|(x667-x668)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x669 = -1;
	int64_t x670 = -6LL;
	int8_t x671 = INT8_MAX;
	static int32_t x672 = -1;
	volatile int32_t t135 = 85962;

    t135 = (x669>(x670|(x671-x672)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x673 = INT64_MIN;
	static volatile int16_t x676 = INT16_MIN;

    t136 = (x673>(x674|(x675-x676)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile int16_t x677 = INT16_MIN;
	int32_t x679 = 4;
	volatile uint16_t x680 = 6U;
	int32_t t137 = 17739;

    t137 = (x677>(x678|(x679-x680)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint8_t x681 = UINT8_MAX;
	volatile uint16_t x682 = 2U;
	uint16_t x683 = UINT16_MAX;
	int8_t x684 = -11;
	volatile int32_t t138 = -3374;

    t138 = (x681>(x682|(x683-x684)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint16_t x685 = 3U;
	int16_t x686 = -1;
	uint64_t x687 = 2808399LLU;
	static volatile int32_t t139 = -15579;

    t139 = (x685>(x686|(x687-x688)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x689 = -1;
	uint16_t x690 = UINT16_MAX;
	uint32_t x692 = 50112U;
	volatile int32_t t140 = -19;

    t140 = (x689>(x690|(x691-x692)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x693 = -14;
	int16_t x694 = INT16_MIN;
	int16_t x696 = INT16_MIN;
	static volatile int32_t t141 = -345;

    t141 = (x693>(x694|(x695-x696)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile uint16_t x697 = 6385U;
	static int64_t x698 = INT64_MIN;
	static int16_t x699 = -1;
	int16_t x700 = INT16_MIN;
	volatile int32_t t142 = -1;

    t142 = (x697>(x698|(x699-x700)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x701 = 299040U;
	int16_t x704 = -1;
	int32_t t143 = 31606;

    t143 = (x701>(x702|(x703-x704)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile int16_t x705 = -28;
	int32_t x706 = INT32_MAX;
	volatile uint64_t x708 = 962361131LLU;
	int32_t t144 = -11331;

    t144 = (x705>(x706|(x707-x708)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x709 = INT64_MIN;
	int8_t x711 = INT8_MIN;
	int32_t x712 = INT32_MIN;
	int32_t t145 = -28999859;

    t145 = (x709>(x710|(x711-x712)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile int16_t x713 = INT16_MAX;
	int64_t x714 = -328580416540689840LL;
	int8_t x715 = 4;
	int32_t t146 = 1;

    t146 = (x713>(x714|(x715-x716)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int64_t x717 = INT64_MAX;
	volatile int8_t x718 = -54;
	uint64_t x719 = UINT64_MAX;
	int8_t x720 = INT8_MIN;
	volatile int32_t t147 = 1;

    t147 = (x717>(x718|(x719-x720)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x721 = -1221;
	int32_t x722 = 0;
	uint8_t x723 = 17U;
	int64_t x724 = -1LL;
	static int32_t t148 = 32738;

    t148 = (x721>(x722|(x723-x724)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int64_t x725 = INT64_MAX;
	int16_t x726 = -234;
	int8_t x728 = INT8_MIN;

    t149 = (x725>(x726|(x727-x728)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x729 = 511U;
	volatile int32_t x732 = INT32_MAX;
	int32_t t150 = -110079155;

    t150 = (x729>(x730|(x731-x732)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x734 = UINT8_MAX;
	volatile uint32_t x735 = UINT32_MAX;
	int32_t t151 = -170;

    t151 = (x733>(x734|(x735-x736)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x737 = -3592;
	static volatile int64_t x738 = -1LL;
	uint8_t x739 = UINT8_MAX;
	volatile int32_t t152 = 3233;

    t152 = (x737>(x738|(x739-x740)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x741 = -11382;
	uint64_t x743 = UINT64_MAX;

    t153 = (x741>(x742|(x743-x744)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x745 = 29U;
	static int32_t x746 = INT32_MAX;
	uint16_t x748 = 441U;
	static int32_t t154 = 693667;

    t154 = (x745>(x746|(x747-x748)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x749 = 0;
	uint16_t x750 = 73U;
	uint64_t x751 = 52132065972273LLU;
	volatile int8_t x752 = INT8_MIN;
	int32_t t155 = -1931221;

    t155 = (x749>(x750|(x751-x752)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x753 = -33224;
	uint8_t x755 = UINT8_MAX;
	int8_t x756 = INT8_MAX;
	int32_t t156 = -4996;

    t156 = (x753>(x754|(x755-x756)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint16_t x757 = 66U;
	int64_t x758 = -1LL;
	static uint8_t x759 = 23U;
	volatile int32_t x760 = -1;
	static volatile int32_t t157 = -43652;

    t157 = (x757>(x758|(x759-x760)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x762 = 3;
	static int64_t x763 = -2LL;
	static int32_t t158 = -12359946;

    t158 = (x761>(x762|(x763-x764)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x765 = INT16_MIN;
	volatile int16_t x766 = -3723;
	int16_t x767 = INT16_MIN;
	int32_t x768 = -108;
	static int32_t t159 = 28020;

    t159 = (x765>(x766|(x767-x768)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x769 = INT8_MIN;
	int64_t x770 = INT64_MIN;
	uint64_t x772 = UINT64_MAX;

    t160 = (x769>(x770|(x771-x772)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x773 = -15943375;
	volatile int8_t x774 = 3;
	uint32_t x775 = 9819U;
	int32_t x776 = -1;
	volatile int32_t t161 = 20200823;

    t161 = (x773>(x774|(x775-x776)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x778 = INT16_MIN;
	int8_t x780 = -1;
	volatile int32_t t162 = 660728;

    t162 = (x777>(x778|(x779-x780)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static int8_t x781 = INT8_MAX;
	uint8_t x782 = 55U;
	volatile int64_t x783 = -1LL;
	volatile int32_t x784 = INT32_MIN;
	volatile int32_t t163 = 3;

    t163 = (x781>(x782|(x783-x784)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint16_t x785 = 62U;
	uint32_t x786 = 56884U;
	uint64_t x787 = 3555079LLU;
	volatile int32_t x788 = INT32_MAX;
	static int32_t t164 = 39228393;

    t164 = (x785>(x786|(x787-x788)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile int16_t x790 = INT16_MAX;
	uint32_t x791 = 372U;
	int32_t t165 = 14;

    t165 = (x789>(x790|(x791-x792)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint64_t x793 = UINT64_MAX;
	int8_t x794 = 1;
	int32_t x795 = INT32_MAX;
	volatile int32_t t166 = -22036;

    t166 = (x793>(x794|(x795-x796)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x798 = -1;
	volatile int32_t t167 = 49;

    t167 = (x797>(x798|(x799-x800)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint64_t x801 = UINT64_MAX;
	static int8_t x803 = INT8_MAX;
	uint64_t x804 = 100752LLU;
	volatile int32_t t168 = -199784401;

    t168 = (x801>(x802|(x803-x804)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x805 = UINT32_MAX;
	uint8_t x807 = 7U;
	volatile int32_t t169 = -31;

    t169 = (x805>(x806|(x807-x808)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x809 = 3;
	int64_t x811 = 8332422LL;
	uint64_t x812 = 52847436003LLU;

    t170 = (x809>(x810|(x811-x812)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x817 = 18058090LL;
	int64_t x818 = INT64_MAX;
	int16_t x819 = INT16_MIN;
	int32_t x820 = -34186;
	volatile int32_t t171 = -67;

    t171 = (x817>(x818|(x819-x820)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static int16_t x821 = -12915;
	int8_t x822 = -8;
	uint32_t x823 = 1U;
	int16_t x824 = -120;
	volatile int32_t t172 = 1;

    t172 = (x821>(x822|(x823-x824)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x825 = 1LL;
	int16_t x827 = -1;
	int16_t x828 = -1;

    t173 = (x825>(x826|(x827-x828)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x829 = INT16_MIN;
	uint8_t x830 = 7U;
	volatile int8_t x832 = INT8_MIN;
	int32_t t174 = 4543279;

    t174 = (x829>(x830|(x831-x832)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x837 = INT32_MAX;
	volatile uint64_t x838 = 93585405435751LLU;
	int16_t x840 = -1;
	int32_t t175 = -2144;

    t175 = (x837>(x838|(x839-x840)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x841 = UINT32_MAX;
	uint32_t x842 = 11932U;
	static int16_t x843 = INT16_MIN;
	int8_t x844 = -1;
	static volatile int32_t t176 = 3;

    t176 = (x841>(x842|(x843-x844)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int16_t x845 = -332;
	uint8_t x846 = 32U;
	uint32_t x847 = UINT32_MAX;
	int32_t x848 = -183827;
	volatile int32_t t177 = 400782;

    t177 = (x845>(x846|(x847-x848)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x853 = -1;
	int8_t x854 = INT8_MAX;
	static int32_t x855 = INT32_MIN;
	static int64_t x856 = -1LL;
	static int32_t t178 = -7570927;

    t178 = (x853>(x854|(x855-x856)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x857 = 23195979213213342LL;
	volatile uint16_t x859 = 3U;
	uint32_t x860 = 12486U;

    t179 = (x857>(x858|(x859-x860)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static int32_t x861 = INT32_MIN;
	int8_t x862 = -1;
	uint64_t x863 = UINT64_MAX;
	int16_t x864 = INT16_MIN;
	volatile int32_t t180 = 373307659;

    t180 = (x861>(x862|(x863-x864)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x865 = INT8_MAX;
	volatile int16_t x866 = -11;
	int8_t x868 = INT8_MAX;
	static int32_t t181 = 0;

    t181 = (x865>(x866|(x867-x868)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x869 = 84147U;
	int16_t x870 = -1;
	volatile int8_t x871 = INT8_MIN;
	static int32_t t182 = -55212;

    t182 = (x869>(x870|(x871-x872)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x873 = INT64_MIN;
	static int16_t x875 = 0;
	uint8_t x876 = 20U;
	int32_t t183 = -14031;

    t183 = (x873>(x874|(x875-x876)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x877 = INT32_MIN;
	uint16_t x878 = 25613U;
	uint32_t x879 = 6385840U;
	int8_t x880 = 3;

    t184 = (x877>(x878|(x879-x880)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile int16_t x881 = -133;
	int64_t x882 = 330105293034780760LL;
	volatile int32_t x883 = INT32_MIN;
	int32_t x884 = INT32_MIN;
	int32_t t185 = 1270;

    t185 = (x881>(x882|(x883-x884)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x889 = INT32_MAX;
	uint8_t x890 = 10U;
	volatile int64_t x891 = 2LL;
	int16_t x892 = -1;

    t186 = (x889>(x890|(x891-x892)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x893 = INT8_MIN;
	uint64_t x894 = UINT64_MAX;
	int16_t x895 = -1882;
	int8_t x896 = -1;
	static volatile int32_t t187 = 145411;

    t187 = (x893>(x894|(x895-x896)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x898 = 0LL;
	int64_t x899 = INT64_MIN;
	int8_t x900 = INT8_MIN;
	volatile int32_t t188 = -414293733;

    t188 = (x897>(x898|(x899-x900)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x902 = INT64_MAX;
	int64_t x904 = -408792LL;
	int32_t t189 = -7;

    t189 = (x901>(x902|(x903-x904)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int64_t x905 = -1LL;
	int32_t x906 = INT32_MAX;
	volatile int8_t x907 = -4;
	int64_t x908 = INT64_MIN;
	volatile int32_t t190 = -415863712;

    t190 = (x905>(x906|(x907-x908)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint8_t x909 = UINT8_MAX;
	int8_t x911 = INT8_MIN;
	int32_t x912 = -201838;
	static int32_t t191 = -131;

    t191 = (x909>(x910|(x911-x912)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x917 = 2;
	uint16_t x918 = 1U;
	uint64_t x919 = UINT64_MAX;
	static int16_t x920 = -1;

    t192 = (x917>(x918|(x919-x920)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x925 = 15U;
	static uint32_t x928 = 0U;
	static int32_t t193 = -758392774;

    t193 = (x925>(x926|(x927-x928)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x929 = -1;
	uint16_t x930 = 47U;
	volatile uint8_t x931 = UINT8_MAX;
	static int32_t t194 = 38739;

    t194 = (x929>(x930|(x931-x932)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x934 = INT16_MIN;
	uint8_t x935 = UINT8_MAX;

    t195 = (x933>(x934|(x935-x936)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static int32_t x938 = -1;
	int32_t x940 = INT32_MIN;
	volatile int32_t t196 = 11233;

    t196 = (x937>(x938|(x939-x940)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x941 = INT16_MAX;
	int16_t x942 = INT16_MIN;
	static uint8_t x944 = UINT8_MAX;
	int32_t t197 = -109;

    t197 = (x941>(x942|(x943-x944)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x945 = -7281;
	volatile uint32_t x946 = 110785U;
	int16_t x947 = INT16_MIN;
	volatile int32_t x948 = -1;
	int32_t t198 = -705573;

    t198 = (x945>(x946|(x947-x948)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x949 = UINT32_MAX;
	int8_t x950 = INT8_MIN;
	volatile uint64_t x951 = UINT64_MAX;
	uint16_t x952 = 139U;

    t199 = (x949>(x950|(x951-x952)));

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

