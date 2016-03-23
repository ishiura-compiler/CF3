
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

int16_t x3 = INT16_MIN;
uint16_t x16 = UINT16_MAX;
int8_t x18 = INT8_MIN;
volatile int32_t t4 = -74;
uint8_t x21 = UINT8_MAX;
uint16_t x23 = 59U;
uint32_t x28 = UINT32_MAX;
int8_t x29 = INT8_MIN;
int64_t x30 = INT64_MIN;
int16_t x32 = 1;
int32_t t8 = -21736;
int32_t t10 = -61300558;
static int32_t x45 = INT32_MIN;
volatile int32_t t12 = -1481444;
int32_t x53 = INT32_MIN;
int64_t x54 = INT64_MIN;
int64_t x61 = INT64_MIN;
int64_t x63 = INT64_MAX;
static int32_t x67 = 353385;
int8_t x68 = INT8_MIN;
volatile int64_t t16 = 190853864LL;
static int64_t x73 = INT64_MAX;
int32_t x75 = INT32_MAX;
int16_t x80 = INT16_MIN;
volatile int32_t t19 = 182950436;
int32_t x84 = INT32_MIN;
static volatile int16_t x88 = -7;
static volatile int32_t t21 = 56543;
int8_t x92 = -11;
volatile int64_t x96 = 13LL;
int32_t x97 = INT32_MIN;
uint32_t x100 = 50446U;
uint32_t x103 = 5439U;
uint64_t x106 = 57557692703394884LLU;
volatile int16_t x107 = -1;
static uint32_t t26 = 249U;
static volatile int32_t t27 = -9996870;
int8_t x113 = -20;
int64_t x114 = INT64_MAX;
int64_t x115 = -13861514087890531LL;
int16_t x116 = -1;
int16_t x124 = -1;
static volatile int64_t x132 = INT64_MAX;
int32_t t33 = 39879364;
int64_t x138 = -1LL;
uint64_t x139 = 442066127070408LLU;
static int32_t t34 = 9140;
uint16_t x148 = 1254U;
volatile int8_t x155 = INT8_MIN;
uint8_t x156 = 5U;
volatile int32_t t38 = -221919;
int64_t x162 = INT64_MIN;
uint8_t x165 = 72U;
uint8_t x171 = 59U;
uint8_t x184 = 0U;
uint16_t x191 = 20U;
volatile uint32_t t47 = 1U;
static int32_t x197 = INT32_MAX;
int16_t x198 = INT16_MIN;
static uint16_t x201 = 22U;
volatile int16_t x203 = INT16_MAX;
uint32_t x208 = 830467562U;
volatile uint32_t x210 = UINT32_MAX;
uint64_t x211 = UINT64_MAX;
uint64_t x229 = UINT64_MAX;
int16_t x233 = INT16_MIN;
int8_t x234 = INT8_MIN;
uint16_t x236 = 0U;
int16_t x239 = INT16_MIN;
int8_t x250 = -1;
int32_t x252 = INT32_MAX;
uint64_t t63 = 1129048143782051LLU;
static int64_t t65 = 3979499644288975LL;
int8_t x266 = -1;
int8_t x269 = -3;
int16_t x271 = INT16_MIN;
int32_t x274 = INT32_MIN;
uint16_t x277 = 108U;
static int64_t x279 = -1LL;
uint32_t x280 = UINT32_MAX;
int16_t x284 = -1;
volatile int16_t x286 = -1;
int8_t x290 = INT8_MIN;
static int64_t x295 = INT64_MAX;
volatile int32_t x305 = INT32_MAX;
int8_t x306 = INT8_MIN;
int8_t x313 = 0;
int16_t x316 = 12123;
int32_t x322 = INT32_MAX;
int64_t x328 = INT64_MIN;
uint16_t x335 = 8U;
static volatile int32_t x341 = -3906;
static int8_t x349 = 11;
int16_t x353 = INT16_MIN;
uint32_t x355 = 2U;
int32_t t89 = -5714022;
volatile int8_t x364 = INT8_MIN;
uint64_t t94 = 18156997LLU;
int16_t x382 = 0;
int16_t x393 = -1;
uint16_t x396 = 67U;
int16_t x402 = -1322;
int32_t t100 = 142;
uint32_t x415 = 9938U;
static uint8_t x418 = UINT8_MAX;
uint16_t x423 = UINT16_MAX;
volatile uint64_t x424 = 86810LLU;
int8_t x433 = -1;
volatile int8_t x460 = INT8_MIN;
static int8_t x467 = INT8_MIN;
static int64_t t116 = 1155896032222LL;
volatile int64_t x470 = 471274983LL;
int64_t x482 = INT64_MIN;
volatile int32_t t120 = 144;
volatile int16_t x488 = INT16_MIN;
uint16_t x492 = UINT16_MAX;
static int32_t x496 = -15766;
static int32_t x498 = 4844309;
int16_t x500 = -9222;
int8_t x504 = INT8_MIN;
uint64_t x509 = 120263767710LLU;
int32_t x515 = INT32_MIN;
int32_t x516 = -45471416;
volatile uint8_t x531 = UINT8_MAX;
int8_t x533 = -1;
int8_t x537 = -34;
uint16_t x542 = 0U;
int16_t x553 = INT16_MIN;
int8_t x556 = INT8_MIN;
uint8_t x561 = UINT8_MAX;
volatile uint32_t x564 = UINT32_MAX;
int16_t x565 = -893;
uint32_t x579 = UINT32_MAX;
uint32_t x580 = 231316701U;
volatile int32_t t144 = -22;
static int16_t x582 = INT16_MIN;
uint64_t x587 = UINT64_MAX;
uint8_t x590 = 124U;
int16_t x592 = 70;
uint8_t x600 = 28U;
int16_t x613 = -1;
int32_t x615 = INT32_MAX;
int64_t x625 = INT64_MIN;
int64_t x630 = -70990863445LL;
int8_t x637 = -1;
uint16_t x638 = 2824U;
uint16_t x649 = 6145U;
int64_t x652 = INT64_MAX;
static uint64_t x656 = UINT64_MAX;
static int32_t t163 = -17724043;
volatile int32_t x658 = INT32_MIN;
int32_t t164 = -256680;
int8_t x662 = INT8_MIN;
volatile int32_t x664 = -863;
int32_t x667 = -1;
uint32_t x668 = 122U;
int64_t x671 = INT64_MAX;
volatile uint8_t x672 = 1U;
volatile int64_t x676 = INT64_MAX;
static int8_t x687 = INT8_MIN;
volatile int64_t t171 = 42LL;
volatile int32_t x696 = -1806522;
int64_t x699 = -1LL;
int16_t x703 = 55;
static int32_t x708 = INT32_MIN;
int64_t x712 = INT64_MAX;
int16_t x713 = -427;
static int32_t x714 = INT32_MAX;
uint8_t x715 = 0U;
int32_t x720 = -36104;
int8_t x724 = INT8_MIN;
int32_t t180 = -10804;
int8_t x729 = -1;
int64_t x730 = 591103LL;
uint16_t x734 = 48U;
volatile int32_t t183 = -579530002;
int32_t t184 = -1;
static volatile int8_t x748 = INT8_MIN;
volatile int32_t t186 = 7045454;
int8_t x752 = INT8_MIN;
uint16_t x754 = 380U;
int64_t x755 = -11777267884074033LL;
uint32_t x762 = 6490779U;
int16_t x764 = INT16_MIN;
volatile int32_t t190 = -9;
static uint64_t x765 = UINT64_MAX;
uint8_t x766 = UINT8_MAX;
volatile uint64_t t191 = 13LLU;
static int64_t x770 = -13313342LL;
int8_t x779 = INT8_MIN;
int8_t x780 = INT8_MIN;
static int8_t x784 = INT8_MIN;
uint16_t x792 = 28457U;
int8_t x796 = INT8_MIN;
uint32_t x799 = 1076386808U;
int32_t t199 = -64;


void f0(void) {
    	volatile int32_t x1 = -1;
	volatile int64_t x2 = -14314673LL;
	int16_t x4 = 195;
	static volatile int32_t t0 = -6785590;

    t0 = (x1&(x2!=(x3|x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MIN;
	uint16_t x6 = 18845U;
	uint32_t x7 = 94712952U;
	uint64_t x8 = 15758130591254434LLU;
	volatile int32_t t1 = -8;

    t1 = (x5&(x6!=(x7|x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = 213454LL;
	static int8_t x10 = -1;
	uint32_t x11 = 105721274U;
	int8_t x12 = INT8_MIN;
	int64_t t2 = 5743217LL;

    t2 = (x9&(x10!=(x11|x12)));

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint16_t x13 = 37U;
	volatile int64_t x14 = INT64_MIN;
	uint32_t x15 = 251153247U;
	int32_t t3 = 2962;

    t3 = (x13&(x14!=(x15|x16)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static int16_t x17 = INT16_MAX;
	uint16_t x19 = 5332U;
	uint8_t x20 = 1U;

    t4 = (x17&(x18!=(x19|x20)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint32_t x22 = UINT32_MAX;
	int32_t x24 = INT32_MIN;
	int32_t t5 = -740372380;

    t5 = (x21&(x22!=(x23|x24)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static int32_t x25 = INT32_MIN;
	uint8_t x26 = 5U;
	volatile uint8_t x27 = 94U;
	volatile int32_t t6 = 4;

    t6 = (x25&(x26!=(x27|x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x31 = -1;
	int32_t t7 = 0;

    t7 = (x29&(x30!=(x31|x32)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x33 = INT16_MAX;
	int16_t x34 = -1;
	int16_t x35 = 138;
	uint32_t x36 = UINT32_MAX;

    t8 = (x33&(x34!=(x35|x36)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x37 = -1LL;
	volatile uint16_t x38 = 1U;
	uint32_t x39 = 30U;
	static int32_t x40 = 16;
	int64_t t9 = 53696LL;

    t9 = (x37&(x38!=(x39|x40)));

    if (t9 != 1LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = -1;
	static int8_t x42 = INT8_MIN;
	uint64_t x43 = 301LLU;
	int64_t x44 = 15445183278LL;

    t10 = (x41&(x42!=(x43|x44)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x46 = -1;
	int64_t x47 = INT64_MIN;
	int32_t x48 = INT32_MIN;
	int32_t t11 = -6084;

    t11 = (x45&(x46!=(x47|x48)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x49 = INT16_MIN;
	uint32_t x50 = 55U;
	uint64_t x51 = UINT64_MAX;
	int64_t x52 = -1LL;

    t12 = (x49&(x50!=(x51|x52)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x55 = INT8_MAX;
	int32_t x56 = 2261;
	volatile int32_t t13 = 211981;

    t13 = (x53&(x54!=(x55|x56)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = INT64_MAX;
	int64_t x58 = -1LL;
	uint8_t x59 = UINT8_MAX;
	static int16_t x60 = INT16_MIN;
	volatile int64_t t14 = -72377297LL;

    t14 = (x57&(x58!=(x59|x60)));

    if (t14 != 1LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x62 = INT64_MIN;
	static uint32_t x64 = 21581411U;
	volatile int64_t t15 = 93988766020012LL;

    t15 = (x61&(x62!=(x63|x64)));

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int64_t x65 = INT64_MIN;
	int32_t x66 = INT32_MAX;

    t16 = (x65&(x66!=(x67|x68)));

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = -1;
	int16_t x70 = INT16_MIN;
	uint16_t x71 = 15U;
	static volatile uint8_t x72 = UINT8_MAX;
	int32_t t17 = 12607;

    t17 = (x69&(x70!=(x71|x72)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x74 = INT8_MAX;
	int32_t x76 = INT32_MIN;
	volatile int64_t t18 = -22048LL;

    t18 = (x73&(x74!=(x75|x76)));

    if (t18 != 1LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = -4;
	int8_t x78 = -1;
	uint64_t x79 = 140LLU;

    t19 = (x77&(x78!=(x79|x80)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = INT8_MAX;
	int16_t x82 = -1;
	int64_t x83 = -1LL;
	volatile int32_t t20 = 7839;

    t20 = (x81&(x82!=(x83|x84)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x85 = UINT16_MAX;
	uint64_t x86 = UINT64_MAX;
	int64_t x87 = 4328232514326613713LL;

    t21 = (x85&(x86!=(x87|x88)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x89 = 149U;
	uint16_t x90 = UINT16_MAX;
	uint64_t x91 = UINT64_MAX;
	static int32_t t22 = 43;

    t22 = (x89&(x90!=(x91|x92)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x93 = 99U;
	uint32_t x94 = 3865503U;
	int16_t x95 = INT16_MIN;
	static volatile int32_t t23 = 85616580;

    t23 = (x93&(x94!=(x95|x96)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x98 = UINT16_MAX;
	int16_t x99 = -18;
	volatile int32_t t24 = 4350;

    t24 = (x97&(x98!=(x99|x100)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x101 = -1;
	int64_t x102 = 36119480753LL;
	int16_t x104 = 2352;
	int32_t t25 = -196631797;

    t25 = (x101&(x102!=(x103|x104)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint32_t x105 = 11426U;
	int16_t x108 = -1061;

    t26 = (x105&(x106!=(x107|x108)));

    if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x109 = -1;
	uint16_t x110 = UINT16_MAX;
	int32_t x111 = -188467122;
	int8_t x112 = INT8_MAX;

    t27 = (x109&(x110!=(x111|x112)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int32_t t28 = 185464;

    t28 = (x113&(x114!=(x115|x116)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static int16_t x117 = 486;
	static uint32_t x118 = 7342493U;
	int32_t x119 = -1;
	int64_t x120 = INT64_MAX;
	int32_t t29 = 216214;

    t29 = (x117&(x118!=(x119|x120)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x121 = INT64_MIN;
	static volatile uint16_t x122 = 522U;
	int16_t x123 = -1;
	int64_t t30 = -8299154130631LL;

    t30 = (x121&(x122!=(x123|x124)));

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = 3;
	static uint8_t x126 = 12U;
	int64_t x127 = 18719826183838LL;
	int64_t x128 = INT64_MIN;
	volatile int32_t t31 = 6;

    t31 = (x125&(x126!=(x127|x128)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x129 = INT32_MIN;
	static int32_t x130 = INT32_MAX;
	int16_t x131 = -1;
	int32_t t32 = -334;

    t32 = (x129&(x130!=(x131|x132)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int16_t x133 = 964;
	uint8_t x134 = 0U;
	uint16_t x135 = UINT16_MAX;
	int32_t x136 = -10;

    t33 = (x133&(x134!=(x135|x136)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x137 = INT32_MIN;
	int32_t x140 = INT32_MAX;

    t34 = (x137&(x138!=(x139|x140)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x141 = 21U;
	static uint16_t x142 = UINT16_MAX;
	uint64_t x143 = 16708234260793927LLU;
	static int32_t x144 = INT32_MIN;
	volatile int32_t t35 = -9;

    t35 = (x141&(x142!=(x143|x144)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x145 = 1430802902574569436LLU;
	static volatile uint32_t x146 = 1028U;
	int64_t x147 = INT64_MIN;
	uint64_t t36 = 706620889501LLU;

    t36 = (x145&(x146!=(x147|x148)));

    if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x149 = INT32_MIN;
	int16_t x150 = -10;
	volatile int64_t x151 = -1LL;
	int32_t x152 = INT32_MIN;
	int32_t t37 = -875;

    t37 = (x149&(x150!=(x151|x152)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = INT16_MAX;
	int16_t x154 = -1;

    t38 = (x153&(x154!=(x155|x156)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = -1;
	uint8_t x158 = 20U;
	int64_t x159 = 754607197832LL;
	uint8_t x160 = 111U;
	int32_t t39 = -650231496;

    t39 = (x157&(x158!=(x159|x160)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x161 = INT32_MIN;
	int16_t x163 = 3;
	int32_t x164 = INT32_MAX;
	volatile int32_t t40 = -354;

    t40 = (x161&(x162!=(x163|x164)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x166 = INT16_MAX;
	static volatile int16_t x167 = INT16_MIN;
	static int64_t x168 = -1LL;
	volatile int32_t t41 = 310;

    t41 = (x165&(x166!=(x167|x168)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x169 = INT32_MAX;
	static int32_t x170 = 235;
	int32_t x172 = -464442;
	volatile int32_t t42 = 188;

    t42 = (x169&(x170!=(x171|x172)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x173 = -471;
	int32_t x174 = -7;
	int16_t x175 = 10138;
	int16_t x176 = INT16_MIN;
	static volatile int32_t t43 = 1;

    t43 = (x173&(x174!=(x175|x176)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x177 = 96374422059LLU;
	int32_t x178 = INT32_MAX;
	static int64_t x179 = -1LL;
	int8_t x180 = INT8_MIN;
	volatile uint64_t t44 = 250529871341834109LLU;

    t44 = (x177&(x178!=(x179|x180)));

    if (t44 != 1LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x181 = 18U;
	uint16_t x182 = UINT16_MAX;
	uint16_t x183 = 3259U;
	static volatile int32_t t45 = 61758;

    t45 = (x181&(x182!=(x183|x184)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x185 = -1LL;
	uint64_t x186 = 237992876LLU;
	int8_t x187 = -31;
	int64_t x188 = INT64_MIN;
	int64_t t46 = 1539LL;

    t46 = (x185&(x186!=(x187|x188)));

    if (t46 != 1LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x189 = 38910616U;
	int8_t x190 = INT8_MAX;
	static int16_t x192 = INT16_MIN;

    t47 = (x189&(x190!=(x191|x192)));

    if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x193 = 1U;
	static int64_t x194 = -1LL;
	int32_t x195 = 42250139;
	int32_t x196 = -1;
	int32_t t48 = 2334432;

    t48 = (x193&(x194!=(x195|x196)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x199 = INT8_MAX;
	volatile int32_t x200 = 0;
	int32_t t49 = 342172;

    t49 = (x197&(x198!=(x199|x200)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x202 = INT32_MIN;
	volatile int16_t x204 = -35;
	static int32_t t50 = 22512;

    t50 = (x201&(x202!=(x203|x204)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x205 = UINT64_MAX;
	int16_t x206 = INT16_MAX;
	int64_t x207 = INT64_MAX;
	static uint64_t t51 = 1LLU;

    t51 = (x205&(x206!=(x207|x208)));

    if (t51 != 1LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	static int64_t x209 = -3643683200452779391LL;
	int64_t x212 = INT64_MAX;
	volatile int64_t t52 = -12653619373LL;

    t52 = (x209&(x210!=(x211|x212)));

    if (t52 != 1LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x213 = INT8_MIN;
	uint64_t x214 = UINT64_MAX;
	uint64_t x215 = 2890757362237870481LLU;
	static volatile int64_t x216 = INT64_MIN;
	int32_t t53 = 37014666;

    t53 = (x213&(x214!=(x215|x216)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint16_t x217 = 51U;
	volatile uint32_t x218 = 2926869U;
	uint16_t x219 = UINT16_MAX;
	int32_t x220 = INT32_MIN;
	int32_t t54 = -6937946;

    t54 = (x217&(x218!=(x219|x220)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x221 = INT64_MIN;
	int32_t x222 = -74;
	int8_t x223 = INT8_MAX;
	int16_t x224 = INT16_MIN;
	volatile int64_t t55 = -1324055537479542LL;

    t55 = (x221&(x222!=(x223|x224)));

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x225 = INT8_MAX;
	volatile int32_t x226 = INT32_MIN;
	int8_t x227 = 4;
	volatile uint64_t x228 = 188269123701384LLU;
	volatile int32_t t56 = 0;

    t56 = (x225&(x226!=(x227|x228)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x230 = 3;
	uint16_t x231 = 0U;
	int8_t x232 = 48;
	uint64_t t57 = 169387558070525LLU;

    t57 = (x229&(x230!=(x231|x232)));

    if (t57 != 1LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x235 = INT64_MIN;
	volatile int32_t t58 = 96663906;

    t58 = (x233&(x234!=(x235|x236)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x237 = INT16_MIN;
	int8_t x238 = 23;
	volatile int64_t x240 = -1LL;
	volatile int32_t t59 = -3929;

    t59 = (x237&(x238!=(x239|x240)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x241 = 2U;
	uint8_t x242 = 11U;
	int64_t x243 = 1061825LL;
	uint16_t x244 = 20U;
	int32_t t60 = -5;

    t60 = (x241&(x242!=(x243|x244)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x245 = 6648;
	int64_t x246 = 975843049516703LL;
	int16_t x247 = -1;
	volatile int32_t x248 = INT32_MIN;
	volatile int32_t t61 = 580;

    t61 = (x245&(x246!=(x247|x248)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x249 = -1;
	int16_t x251 = INT16_MIN;
	volatile int32_t t62 = 1;

    t62 = (x249&(x250!=(x251|x252)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint64_t x253 = UINT64_MAX;
	volatile int64_t x254 = -1LL;
	int8_t x255 = -1;
	static int32_t x256 = INT32_MAX;

    t63 = (x253&(x254!=(x255|x256)));

    if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x257 = INT64_MIN;
	int64_t x258 = 30LL;
	int16_t x259 = INT16_MAX;
	volatile int64_t x260 = INT64_MAX;
	volatile int64_t t64 = 108496LL;

    t64 = (x257&(x258!=(x259|x260)));

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x261 = 872103875LL;
	static int64_t x262 = INT64_MIN;
	static volatile int64_t x263 = INT64_MIN;
	uint16_t x264 = UINT16_MAX;

    t65 = (x261&(x262!=(x263|x264)));

    if (t65 != 1LL) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint64_t x265 = UINT64_MAX;
	int32_t x267 = INT32_MAX;
	int8_t x268 = INT8_MIN;
	static volatile uint64_t t66 = 168268478LLU;

    t66 = (x265&(x266!=(x267|x268)));

    if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x270 = UINT16_MAX;
	static volatile int16_t x272 = -1;
	volatile int32_t t67 = -335162;

    t67 = (x269&(x270!=(x271|x272)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x273 = -33;
	int8_t x275 = INT8_MAX;
	int16_t x276 = 36;
	int32_t t68 = 5642;

    t68 = (x273&(x274!=(x275|x276)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static int64_t x278 = INT64_MIN;
	int32_t t69 = -14;

    t69 = (x277&(x278!=(x279|x280)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = INT64_MAX;
	volatile uint8_t x282 = UINT8_MAX;
	static int64_t x283 = 31LL;
	int64_t t70 = -26322008LL;

    t70 = (x281&(x282!=(x283|x284)));

    if (t70 != 1LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x285 = UINT16_MAX;
	volatile int8_t x287 = INT8_MIN;
	int16_t x288 = INT16_MIN;
	volatile int32_t t71 = -141471;

    t71 = (x285&(x286!=(x287|x288)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x289 = 29223U;
	static int8_t x291 = -1;
	int8_t x292 = INT8_MIN;
	uint32_t t72 = 2115560U;

    t72 = (x289&(x290!=(x291|x292)));

    if (t72 != 1U) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x293 = -1LL;
	volatile int64_t x294 = 9517386080015105LL;
	static uint64_t x296 = 46458467LLU;
	static int64_t t73 = 54263LL;

    t73 = (x293&(x294!=(x295|x296)));

    if (t73 != 1LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x297 = INT16_MIN;
	int16_t x298 = -1536;
	uint16_t x299 = 8858U;
	int8_t x300 = INT8_MIN;
	int32_t t74 = 6141;

    t74 = (x297&(x298!=(x299|x300)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x301 = UINT16_MAX;
	int8_t x302 = INT8_MIN;
	int32_t x303 = INT32_MAX;
	volatile int32_t x304 = -5458912;
	volatile int32_t t75 = -19358552;

    t75 = (x301&(x302!=(x303|x304)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x307 = INT16_MIN;
	int16_t x308 = -1;
	int32_t t76 = 13;

    t76 = (x305&(x306!=(x307|x308)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x309 = -14;
	volatile int32_t x310 = INT32_MIN;
	int64_t x311 = INT64_MIN;
	int32_t x312 = -1;
	int32_t t77 = 0;

    t77 = (x309&(x310!=(x311|x312)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x314 = 11U;
	int64_t x315 = INT64_MIN;
	volatile int32_t t78 = -46;

    t78 = (x313&(x314!=(x315|x316)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x317 = INT64_MAX;
	int8_t x318 = 1;
	int8_t x319 = INT8_MIN;
	int64_t x320 = INT64_MIN;
	int64_t t79 = 11LL;

    t79 = (x317&(x318!=(x319|x320)));

    if (t79 != 1LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static int32_t x321 = INT32_MIN;
	static uint8_t x323 = UINT8_MAX;
	int64_t x324 = INT64_MAX;
	volatile int32_t t80 = -15438;

    t80 = (x321&(x322!=(x323|x324)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x325 = UINT16_MAX;
	int32_t x326 = -1;
	uint16_t x327 = UINT16_MAX;
	int32_t t81 = -1;

    t81 = (x325&(x326!=(x327|x328)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x329 = INT64_MIN;
	volatile uint8_t x330 = 7U;
	volatile uint32_t x331 = UINT32_MAX;
	static volatile uint16_t x332 = UINT16_MAX;
	int64_t t82 = -2930525LL;

    t82 = (x329&(x330!=(x331|x332)));

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x333 = -1;
	static int16_t x334 = INT16_MAX;
	volatile int16_t x336 = INT16_MAX;
	int32_t t83 = 1404737;

    t83 = (x333&(x334!=(x335|x336)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x337 = INT8_MIN;
	int32_t x338 = INT32_MAX;
	int64_t x339 = INT64_MIN;
	static uint16_t x340 = UINT16_MAX;
	int32_t t84 = 77;

    t84 = (x337&(x338!=(x339|x340)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x342 = INT8_MIN;
	volatile int64_t x343 = -1LL;
	int8_t x344 = 1;
	int32_t t85 = -3830;

    t85 = (x341&(x342!=(x343|x344)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int32_t x345 = 6;
	int8_t x346 = -8;
	static uint16_t x347 = UINT16_MAX;
	static int8_t x348 = -1;
	volatile int32_t t86 = -1;

    t86 = (x345&(x346!=(x347|x348)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int16_t x350 = INT16_MAX;
	int64_t x351 = -5479442LL;
	int16_t x352 = -6;
	int32_t t87 = -6815;

    t87 = (x349&(x350!=(x351|x352)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x354 = INT8_MAX;
	uint64_t x356 = UINT64_MAX;
	volatile int32_t t88 = -42403419;

    t88 = (x353&(x354!=(x355|x356)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x357 = 0U;
	int8_t x358 = INT8_MIN;
	volatile uint64_t x359 = 4618086939247218833LLU;
	uint16_t x360 = UINT16_MAX;

    t89 = (x357&(x358!=(x359|x360)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x361 = INT16_MAX;
	static int16_t x362 = -1;
	int16_t x363 = INT16_MIN;
	volatile int32_t t90 = -556059300;

    t90 = (x361&(x362!=(x363|x364)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x365 = INT32_MIN;
	int16_t x366 = 1944;
	int8_t x367 = 0;
	int8_t x368 = 26;
	int32_t t91 = 14493710;

    t91 = (x365&(x366!=(x367|x368)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x369 = UINT64_MAX;
	static volatile int64_t x370 = INT64_MAX;
	static int32_t x371 = -4886;
	uint16_t x372 = 365U;
	volatile uint64_t t92 = 3050923186041328250LLU;

    t92 = (x369&(x370!=(x371|x372)));

    if (t92 != 1LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x373 = INT16_MIN;
	static volatile int16_t x374 = -12;
	volatile uint8_t x375 = 6U;
	int8_t x376 = INT8_MIN;
	static int32_t t93 = 648;

    t93 = (x373&(x374!=(x375|x376)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x377 = UINT64_MAX;
	int32_t x378 = -137455;
	uint16_t x379 = UINT16_MAX;
	uint8_t x380 = 1U;

    t94 = (x377&(x378!=(x379|x380)));

    if (t94 != 1LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int32_t x381 = INT32_MIN;
	volatile int64_t x383 = 114128938LL;
	int8_t x384 = INT8_MAX;
	static int32_t t95 = -217575337;

    t95 = (x381&(x382!=(x383|x384)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x385 = 815759050505LLU;
	int64_t x386 = -3LL;
	int64_t x387 = 2097393983984803119LL;
	int64_t x388 = -1LL;
	static uint64_t t96 = 244468662150713467LLU;

    t96 = (x385&(x386!=(x387|x388)));

    if (t96 != 1LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x389 = INT32_MIN;
	uint64_t x390 = 6434256LLU;
	static volatile int8_t x391 = INT8_MIN;
	int16_t x392 = 6;
	volatile int32_t t97 = 28532;

    t97 = (x389&(x390!=(x391|x392)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x394 = -490;
	int16_t x395 = -1;
	int32_t t98 = -2460;

    t98 = (x393&(x394!=(x395|x396)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x397 = 1859U;
	int8_t x398 = -14;
	volatile int32_t x399 = INT32_MAX;
	volatile int8_t x400 = -1;
	int32_t t99 = -2898;

    t99 = (x397&(x398!=(x399|x400)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = INT16_MIN;
	uint8_t x403 = 122U;
	int32_t x404 = 314272;

    t100 = (x401&(x402!=(x403|x404)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x405 = 1;
	static uint8_t x406 = UINT8_MAX;
	volatile uint8_t x407 = 79U;
	volatile int8_t x408 = INT8_MIN;
	int32_t t101 = 1;

    t101 = (x405&(x406!=(x407|x408)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int32_t x409 = INT32_MIN;
	uint64_t x410 = UINT64_MAX;
	uint64_t x411 = 70922LLU;
	static int8_t x412 = -55;
	volatile int32_t t102 = 386;

    t102 = (x409&(x410!=(x411|x412)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x413 = 1;
	static uint8_t x414 = 3U;
	int8_t x416 = INT8_MIN;
	static int32_t t103 = 11460;

    t103 = (x413&(x414!=(x415|x416)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x417 = -1;
	volatile uint16_t x419 = 500U;
	volatile int64_t x420 = -1LL;
	int32_t t104 = 3;

    t104 = (x417&(x418!=(x419|x420)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x421 = -42683;
	int16_t x422 = 28;
	static volatile int32_t t105 = -6847;

    t105 = (x421&(x422!=(x423|x424)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x425 = 384;
	int16_t x426 = INT16_MAX;
	uint8_t x427 = 34U;
	int32_t x428 = INT32_MAX;
	int32_t t106 = 2853;

    t106 = (x425&(x426!=(x427|x428)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x429 = -1375265;
	int16_t x430 = INT16_MAX;
	static int64_t x431 = INT64_MIN;
	volatile uint32_t x432 = 10176U;
	int32_t t107 = -4651125;

    t107 = (x429&(x430!=(x431|x432)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x434 = 1048287;
	volatile int16_t x435 = INT16_MIN;
	int64_t x436 = 134580680183LL;
	volatile int32_t t108 = 55;

    t108 = (x433&(x434!=(x435|x436)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x437 = -1;
	volatile int16_t x438 = INT16_MAX;
	static int64_t x439 = -1LL;
	int8_t x440 = 2;
	static int32_t t109 = -4826232;

    t109 = (x437&(x438!=(x439|x440)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static int32_t x441 = INT32_MIN;
	int64_t x442 = -392675955349562979LL;
	static int64_t x443 = 1753928374662490041LL;
	static int16_t x444 = -133;
	static int32_t t110 = 1;

    t110 = (x441&(x442!=(x443|x444)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x445 = INT8_MAX;
	static int16_t x446 = INT16_MIN;
	int8_t x447 = INT8_MIN;
	volatile int16_t x448 = 242;
	int32_t t111 = -2410;

    t111 = (x445&(x446!=(x447|x448)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x449 = INT64_MAX;
	int8_t x450 = INT8_MIN;
	int16_t x451 = 1;
	static int16_t x452 = 16;
	volatile int64_t t112 = -3LL;

    t112 = (x449&(x450!=(x451|x452)));

    if (t112 != 1LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x453 = -27;
	int16_t x454 = -546;
	static int32_t x455 = 38354791;
	static int8_t x456 = -1;
	volatile int32_t t113 = -1887;

    t113 = (x453&(x454!=(x455|x456)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x457 = INT32_MIN;
	int8_t x458 = INT8_MIN;
	int16_t x459 = INT16_MAX;
	volatile int32_t t114 = 40648003;

    t114 = (x457&(x458!=(x459|x460)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x461 = -1;
	int64_t x462 = INT64_MAX;
	static uint16_t x463 = UINT16_MAX;
	int8_t x464 = 29;
	int32_t t115 = -11;

    t115 = (x461&(x462!=(x463|x464)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x465 = 132067159113918139LL;
	int16_t x466 = -977;
	int64_t x468 = INT64_MAX;

    t116 = (x465&(x466!=(x467|x468)));

    if (t116 != 1LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint16_t x469 = 2315U;
	static int64_t x471 = -249503091LL;
	int64_t x472 = -120517321761LL;
	static volatile int32_t t117 = 566;

    t117 = (x469&(x470!=(x471|x472)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = -1;
	uint64_t x474 = 45171945497LLU;
	int64_t x475 = INT64_MIN;
	int64_t x476 = INT64_MIN;
	static int32_t t118 = 41398373;

    t118 = (x473&(x474!=(x475|x476)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint8_t x477 = 72U;
	int8_t x478 = 10;
	uint64_t x479 = 14472439LLU;
	int32_t x480 = 1;
	volatile int32_t t119 = -5;

    t119 = (x477&(x478!=(x479|x480)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x481 = INT16_MAX;
	static volatile int8_t x483 = INT8_MAX;
	int8_t x484 = INT8_MIN;

    t120 = (x481&(x482!=(x483|x484)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile int16_t x485 = 717;
	int64_t x486 = -1LL;
	int8_t x487 = INT8_MIN;
	static int32_t t121 = 6767;

    t121 = (x485&(x486!=(x487|x488)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x489 = 6U;
	static volatile int64_t x490 = INT64_MIN;
	int8_t x491 = 44;
	volatile int32_t t122 = -25271078;

    t122 = (x489&(x490!=(x491|x492)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int16_t x493 = INT16_MIN;
	int64_t x494 = INT64_MIN;
	volatile int16_t x495 = INT16_MAX;
	volatile int32_t t123 = -385528;

    t123 = (x493&(x494!=(x495|x496)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x497 = INT64_MAX;
	volatile int16_t x499 = 32;
	volatile int64_t t124 = -262780620LL;

    t124 = (x497&(x498!=(x499|x500)));

    if (t124 != 1LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x501 = 33052U;
	int64_t x502 = INT64_MIN;
	int16_t x503 = INT16_MIN;
	uint32_t t125 = 11U;

    t125 = (x501&(x502!=(x503|x504)));

    if (t125 != 0U) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x505 = 16897523;
	int8_t x506 = INT8_MIN;
	uint64_t x507 = 482822333481356047LLU;
	int32_t x508 = INT32_MAX;
	volatile int32_t t126 = -543202848;

    t126 = (x505&(x506!=(x507|x508)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int32_t x510 = 494644;
	int8_t x511 = -1;
	volatile int16_t x512 = -239;
	static uint64_t t127 = 1126366856751989392LLU;

    t127 = (x509&(x510!=(x511|x512)));

    if (t127 != 0LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x513 = 594U;
	int16_t x514 = -1;
	volatile uint32_t t128 = 220570797U;

    t128 = (x513&(x514!=(x515|x516)));

    if (t128 != 0U) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile uint16_t x517 = UINT16_MAX;
	uint8_t x518 = 117U;
	volatile int64_t x519 = INT64_MAX;
	int32_t x520 = INT32_MIN;
	volatile int32_t t129 = -3172;

    t129 = (x517&(x518!=(x519|x520)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint8_t x521 = 1U;
	int8_t x522 = -6;
	volatile int8_t x523 = -28;
	int8_t x524 = INT8_MIN;
	static int32_t t130 = -90;

    t130 = (x521&(x522!=(x523|x524)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x525 = -1;
	int16_t x526 = INT16_MAX;
	static volatile int32_t x527 = -946;
	static int8_t x528 = -7;
	int32_t t131 = 47;

    t131 = (x525&(x526!=(x527|x528)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x529 = INT32_MIN;
	static uint32_t x530 = 230816U;
	static volatile uint8_t x532 = 52U;
	volatile int32_t t132 = 3877;

    t132 = (x529&(x530!=(x531|x532)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x534 = 1U;
	static volatile int32_t x535 = INT32_MIN;
	static int64_t x536 = INT64_MIN;
	int32_t t133 = 14806934;

    t133 = (x533&(x534!=(x535|x536)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x538 = 339230201223LL;
	static volatile uint16_t x539 = 27948U;
	uint32_t x540 = UINT32_MAX;
	volatile int32_t t134 = 1133;

    t134 = (x537&(x538!=(x539|x540)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x541 = -1;
	uint16_t x543 = UINT16_MAX;
	uint8_t x544 = 22U;
	volatile int32_t t135 = 38760077;

    t135 = (x541&(x542!=(x543|x544)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint8_t x545 = 1U;
	int16_t x546 = -1;
	int64_t x547 = 20950043LL;
	uint8_t x548 = 56U;
	int32_t t136 = -29119882;

    t136 = (x545&(x546!=(x547|x548)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile int32_t x549 = -42992;
	uint64_t x550 = 739863308612LLU;
	int32_t x551 = -5324372;
	static uint64_t x552 = 3933LLU;
	volatile int32_t t137 = -122316;

    t137 = (x549&(x550!=(x551|x552)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint8_t x554 = UINT8_MAX;
	int8_t x555 = 6;
	int32_t t138 = -50157463;

    t138 = (x553&(x554!=(x555|x556)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int32_t x557 = -1;
	int8_t x558 = -1;
	int32_t x559 = -388781876;
	static uint16_t x560 = UINT16_MAX;
	int32_t t139 = 9600598;

    t139 = (x557&(x558!=(x559|x560)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int64_t x562 = INT64_MIN;
	int8_t x563 = INT8_MIN;
	static int32_t t140 = -822386;

    t140 = (x561&(x562!=(x563|x564)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x566 = 993U;
	static int64_t x567 = -514521LL;
	volatile int16_t x568 = INT16_MIN;
	volatile int32_t t141 = 646;

    t141 = (x565&(x566!=(x567|x568)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x569 = -1;
	static volatile uint32_t x570 = UINT32_MAX;
	static int32_t x571 = INT32_MIN;
	int16_t x572 = INT16_MAX;
	volatile int32_t t142 = 8;

    t142 = (x569&(x570!=(x571|x572)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x573 = INT32_MAX;
	int64_t x574 = INT64_MAX;
	static volatile uint64_t x575 = UINT64_MAX;
	static int8_t x576 = 1;
	volatile int32_t t143 = -457908;

    t143 = (x573&(x574!=(x575|x576)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x577 = -1207;
	int8_t x578 = INT8_MIN;

    t144 = (x577&(x578!=(x579|x580)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x581 = INT64_MAX;
	int32_t x583 = INT32_MIN;
	static uint16_t x584 = UINT16_MAX;
	volatile int64_t t145 = -209LL;

    t145 = (x581&(x582!=(x583|x584)));

    if (t145 != 1LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x585 = 65520089675137LL;
	volatile int64_t x586 = INT64_MIN;
	int64_t x588 = -415385LL;
	int64_t t146 = -116868010LL;

    t146 = (x585&(x586!=(x587|x588)));

    if (t146 != 1LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x589 = INT8_MIN;
	volatile int64_t x591 = INT64_MIN;
	volatile int32_t t147 = 72;

    t147 = (x589&(x590!=(x591|x592)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x593 = 1328502LLU;
	volatile int32_t x594 = INT32_MAX;
	int64_t x595 = -1LL;
	volatile int64_t x596 = INT64_MAX;
	volatile uint64_t t148 = 173487157624LLU;

    t148 = (x593&(x594!=(x595|x596)));

    if (t148 != 0LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x597 = 3LLU;
	int64_t x598 = INT64_MIN;
	int8_t x599 = -1;
	static volatile uint64_t t149 = 83264776625225437LLU;

    t149 = (x597&(x598!=(x599|x600)));

    if (t149 != 1LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x601 = INT8_MIN;
	int32_t x602 = INT32_MIN;
	volatile uint16_t x603 = UINT16_MAX;
	int16_t x604 = -6;
	volatile int32_t t150 = -11;

    t150 = (x601&(x602!=(x603|x604)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x605 = 8010120544LL;
	int32_t x606 = -1;
	uint64_t x607 = 8964739751762243LLU;
	static uint16_t x608 = UINT16_MAX;
	int64_t t151 = -22LL;

    t151 = (x605&(x606!=(x607|x608)));

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x609 = 5U;
	int64_t x610 = 5LL;
	int16_t x611 = INT16_MIN;
	int16_t x612 = 2853;
	volatile int32_t t152 = 41;

    t152 = (x609&(x610!=(x611|x612)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint8_t x614 = UINT8_MAX;
	volatile int32_t x616 = INT32_MIN;
	int32_t t153 = -174672772;

    t153 = (x613&(x614!=(x615|x616)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x617 = -1;
	uint16_t x618 = 6307U;
	volatile int64_t x619 = INT64_MIN;
	volatile uint32_t x620 = UINT32_MAX;
	volatile int32_t t154 = -6195;

    t154 = (x617&(x618!=(x619|x620)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int16_t x621 = -2;
	static int16_t x622 = -1;
	static int8_t x623 = INT8_MIN;
	static int32_t x624 = INT32_MAX;
	int32_t t155 = -7;

    t155 = (x621&(x622!=(x623|x624)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int64_t x626 = -1LL;
	int8_t x627 = INT8_MIN;
	int64_t x628 = INT64_MIN;
	static volatile int64_t t156 = -2935574727515263LL;

    t156 = (x625&(x626!=(x627|x628)));

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x629 = -1LL;
	int16_t x631 = -3582;
	uint64_t x632 = 192461536187119374LLU;
	static volatile int64_t t157 = 116120363937LL;

    t157 = (x629&(x630!=(x631|x632)));

    if (t157 != 1LL) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint16_t x633 = 1036U;
	int64_t x634 = INT64_MIN;
	uint32_t x635 = 1655616683U;
	int16_t x636 = -469;
	int32_t t158 = -6188492;

    t158 = (x633&(x634!=(x635|x636)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static int64_t x639 = -1LL;
	static volatile int32_t x640 = INT32_MIN;
	int32_t t159 = -24;

    t159 = (x637&(x638!=(x639|x640)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x641 = 59;
	int16_t x642 = INT16_MIN;
	int8_t x643 = 9;
	int32_t x644 = INT32_MIN;
	int32_t t160 = 17444250;

    t160 = (x641&(x642!=(x643|x644)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x645 = UINT8_MAX;
	volatile uint16_t x646 = UINT16_MAX;
	static int32_t x647 = -1;
	uint8_t x648 = 16U;
	int32_t t161 = 96907986;

    t161 = (x645&(x646!=(x647|x648)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x650 = 4U;
	uint32_t x651 = 270U;
	int32_t t162 = 746;

    t162 = (x649&(x650!=(x651|x652)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint8_t x653 = 0U;
	int64_t x654 = INT64_MIN;
	static volatile int32_t x655 = INT32_MIN;

    t163 = (x653&(x654!=(x655|x656)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x657 = 3802U;
	volatile uint16_t x659 = 387U;
	volatile int64_t x660 = 1674752825LL;

    t164 = (x657&(x658!=(x659|x660)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x661 = 437838638LLU;
	uint32_t x663 = 2U;
	static volatile uint64_t t165 = 188662042250616LLU;

    t165 = (x661&(x662!=(x663|x664)));

    if (t165 != 0LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x665 = INT32_MIN;
	volatile int32_t x666 = INT32_MIN;
	volatile int32_t t166 = 44;

    t166 = (x665&(x666!=(x667|x668)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x669 = INT64_MIN;
	uint32_t x670 = UINT32_MAX;
	volatile int64_t t167 = 150899660990869309LL;

    t167 = (x669&(x670!=(x671|x672)));

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x673 = INT32_MAX;
	int8_t x674 = INT8_MIN;
	volatile int64_t x675 = INT64_MAX;
	volatile int32_t t168 = 2;

    t168 = (x673&(x674!=(x675|x676)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x677 = INT64_MIN;
	int8_t x678 = INT8_MIN;
	int16_t x679 = -299;
	static uint16_t x680 = 6U;
	volatile int64_t t169 = 758700LL;

    t169 = (x677&(x678!=(x679|x680)));

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x681 = INT8_MIN;
	static volatile int8_t x682 = 0;
	int8_t x683 = 3;
	int16_t x684 = -63;
	int32_t t170 = -748162365;

    t170 = (x681&(x682!=(x683|x684)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x685 = INT64_MAX;
	uint32_t x686 = UINT32_MAX;
	uint32_t x688 = 19401U;

    t171 = (x685&(x686!=(x687|x688)));

    if (t171 != 1LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x689 = 10;
	static volatile int8_t x690 = INT8_MIN;
	uint32_t x691 = 976247U;
	volatile int16_t x692 = 0;
	volatile int32_t t172 = -6196;

    t172 = (x689&(x690!=(x691|x692)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x693 = INT32_MAX;
	static volatile int16_t x694 = -1;
	static volatile int16_t x695 = INT16_MIN;
	int32_t t173 = 24762801;

    t173 = (x693&(x694!=(x695|x696)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x697 = -1;
	int8_t x698 = INT8_MIN;
	static int32_t x700 = INT32_MIN;
	int32_t t174 = -58208;

    t174 = (x697&(x698!=(x699|x700)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x701 = -1;
	uint16_t x702 = 1093U;
	static int8_t x704 = 1;
	int32_t t175 = -1281;

    t175 = (x701&(x702!=(x703|x704)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x705 = INT32_MIN;
	int8_t x706 = INT8_MAX;
	uint64_t x707 = 239331LLU;
	int32_t t176 = 775487;

    t176 = (x705&(x706!=(x707|x708)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x709 = 13;
	int16_t x710 = 1139;
	volatile int8_t x711 = -1;
	volatile int32_t t177 = 2588;

    t177 = (x709&(x710!=(x711|x712)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x716 = INT32_MIN;
	int32_t t178 = 124;

    t178 = (x713&(x714!=(x715|x716)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x717 = 1091185682U;
	static int32_t x718 = -12;
	int8_t x719 = -2;
	uint32_t t179 = 312320292U;

    t179 = (x717&(x718!=(x719|x720)));

    if (t179 != 0U) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x721 = INT16_MIN;
	int64_t x722 = -1393902070282504LL;
	static uint64_t x723 = 978LLU;

    t180 = (x721&(x722!=(x723|x724)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int64_t x725 = -1LL;
	static int32_t x726 = 25727000;
	uint32_t x727 = UINT32_MAX;
	uint16_t x728 = 5U;
	int64_t t181 = 0LL;

    t181 = (x725&(x726!=(x727|x728)));

    if (t181 != 1LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile int64_t x731 = 253823272LL;
	static uint8_t x732 = 0U;
	int32_t t182 = 20;

    t182 = (x729&(x730!=(x731|x732)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint16_t x733 = UINT16_MAX;
	uint8_t x735 = 102U;
	int32_t x736 = INT32_MAX;

    t183 = (x733&(x734!=(x735|x736)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint16_t x737 = 13275U;
	static int16_t x738 = INT16_MIN;
	int8_t x739 = -4;
	uint8_t x740 = 1U;

    t184 = (x737&(x738!=(x739|x740)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x741 = INT64_MIN;
	volatile int64_t x742 = -1LL;
	volatile int64_t x743 = INT64_MAX;
	int64_t x744 = -1LL;
	int64_t t185 = 32005288319657624LL;

    t185 = (x741&(x742!=(x743|x744)));

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x745 = -1;
	uint64_t x746 = 853627LLU;
	static int64_t x747 = -590087LL;

    t186 = (x745&(x746!=(x747|x748)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint32_t x749 = 2U;
	int16_t x750 = -1;
	uint16_t x751 = UINT16_MAX;
	uint32_t t187 = 5004U;

    t187 = (x749&(x750!=(x751|x752)));

    if (t187 != 0U) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x753 = -6922227LL;
	int16_t x756 = -1;
	static volatile int64_t t188 = 35243214035637122LL;

    t188 = (x753&(x754!=(x755|x756)));

    if (t188 != 1LL) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int16_t x757 = -507;
	int16_t x758 = INT16_MIN;
	uint64_t x759 = UINT64_MAX;
	volatile uint8_t x760 = 11U;
	volatile int32_t t189 = 1;

    t189 = (x757&(x758!=(x759|x760)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x761 = -1;
	int64_t x763 = INT64_MIN;

    t190 = (x761&(x762!=(x763|x764)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x767 = -1;
	uint64_t x768 = UINT64_MAX;

    t191 = (x765&(x766!=(x767|x768)));

    if (t191 != 1LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int64_t x769 = -1LL;
	int32_t x771 = -1;
	volatile uint16_t x772 = 229U;
	volatile int64_t t192 = 28670246247295753LL;

    t192 = (x769&(x770!=(x771|x772)));

    if (t192 != 1LL) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int64_t x773 = -5723683LL;
	int8_t x774 = INT8_MIN;
	int8_t x775 = INT8_MAX;
	static volatile uint64_t x776 = 12239782LLU;
	int64_t t193 = 447750781LL;

    t193 = (x773&(x774!=(x775|x776)));

    if (t193 != 1LL) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x777 = INT8_MAX;
	volatile int64_t x778 = INT64_MAX;
	int32_t t194 = 21;

    t194 = (x777&(x778!=(x779|x780)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int8_t x781 = 1;
	int32_t x782 = INT32_MIN;
	int8_t x783 = INT8_MAX;
	volatile int32_t t195 = 1;

    t195 = (x781&(x782!=(x783|x784)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x785 = INT32_MIN;
	int8_t x786 = INT8_MIN;
	volatile int64_t x787 = INT64_MAX;
	int16_t x788 = INT16_MAX;
	volatile int32_t t196 = 74494503;

    t196 = (x785&(x786!=(x787|x788)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x789 = UINT8_MAX;
	int64_t x790 = INT64_MIN;
	int8_t x791 = -41;
	int32_t t197 = -17221635;

    t197 = (x789&(x790!=(x791|x792)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static int32_t x793 = INT32_MIN;
	int64_t x794 = INT64_MIN;
	uint16_t x795 = UINT16_MAX;
	static int32_t t198 = 4114934;

    t198 = (x793&(x794!=(x795|x796)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x797 = INT8_MIN;
	int32_t x798 = 0;
	uint64_t x800 = 13LLU;

    t199 = (x797&(x798!=(x799|x800)));

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

