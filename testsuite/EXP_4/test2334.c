
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

static int8_t x2 = -1;
uint32_t x12 = 1451U;
int16_t x13 = INT16_MIN;
uint32_t x19 = 688832422U;
uint64_t x21 = 279719843538873491LLU;
volatile int8_t x22 = -1;
uint8_t x34 = 6U;
uint32_t x36 = UINT32_MAX;
volatile uint8_t x40 = 66U;
uint32_t x44 = 227168U;
volatile int32_t x74 = -1;
static int32_t x78 = 73085;
int32_t x82 = -10;
int8_t x93 = 7;
int32_t t23 = 11;
volatile int8_t x98 = -46;
int8_t x99 = INT8_MAX;
volatile uint32_t x101 = 1231431575U;
volatile int8_t x102 = INT8_MIN;
volatile int32_t t25 = 14256;
int32_t x109 = INT32_MIN;
uint32_t x115 = 807129U;
int32_t t28 = 3176;
volatile uint16_t x120 = UINT16_MAX;
volatile int32_t t30 = -827864;
uint32_t x125 = 5131U;
int8_t x129 = INT8_MAX;
volatile int16_t x138 = INT16_MIN;
int16_t x141 = INT16_MAX;
int16_t x144 = INT16_MIN;
static int64_t x147 = -111591549669832LL;
int32_t t36 = 716277;
int8_t x150 = INT8_MIN;
static volatile int64_t x161 = -1LL;
volatile int32_t t40 = -18620;
int16_t x167 = -1;
static volatile int32_t t41 = 9127;
uint16_t x170 = 557U;
int64_t x172 = INT64_MIN;
int8_t x174 = 21;
int32_t t43 = 3353;
uint64_t x177 = 29095249570577LLU;
volatile uint8_t x179 = UINT8_MAX;
int16_t x186 = 2380;
static int8_t x190 = INT8_MIN;
volatile int32_t t48 = -7802399;
static uint16_t x198 = 7526U;
volatile int64_t x199 = -120868989116712LL;
int64_t x200 = INT64_MIN;
int32_t x202 = -109248;
volatile int32_t t50 = 6345;
volatile int16_t x207 = INT16_MIN;
volatile int64_t x211 = INT64_MIN;
static int16_t x221 = -1;
uint16_t x225 = 8U;
static int32_t t56 = -185071653;
uint16_t x232 = 1U;
int64_t x238 = INT64_MIN;
int8_t x243 = -6;
static volatile int32_t t60 = 8;
uint16_t x248 = UINT16_MAX;
int32_t t61 = -1;
static uint8_t x249 = 1U;
int32_t x251 = INT32_MIN;
static uint16_t x254 = UINT16_MAX;
int8_t x256 = -1;
volatile uint64_t x264 = 369LLU;
volatile int16_t x279 = INT16_MIN;
uint16_t x280 = 1U;
static int8_t x291 = -1;
int32_t t72 = -124044;
uint16_t x296 = UINT16_MAX;
static int16_t x298 = INT16_MAX;
static uint8_t x300 = UINT8_MAX;
static int8_t x318 = INT8_MAX;
int32_t x322 = INT32_MIN;
volatile int32_t x323 = INT32_MAX;
int32_t t81 = -9013748;
static uint64_t x335 = UINT64_MAX;
int32_t x338 = 5;
static volatile uint16_t x340 = 9868U;
static volatile int64_t x342 = -743706659098LL;
int64_t x346 = INT64_MAX;
int8_t x347 = -1;
volatile uint64_t x349 = UINT64_MAX;
int16_t x351 = INT16_MIN;
static int32_t t87 = 231586;
int64_t x354 = 39999753200693541LL;
static int64_t x355 = -1LL;
int16_t x369 = 0;
int32_t t93 = -1;
volatile int32_t x389 = INT32_MIN;
uint8_t x390 = UINT8_MAX;
int64_t x392 = 30790430822470910LL;
volatile int32_t t98 = 24;
static uint32_t x404 = 466261U;
int64_t x412 = -1LL;
uint64_t x413 = 1643LLU;
int16_t x423 = INT16_MIN;
uint8_t x429 = 1U;
int32_t x432 = 201;
int64_t x435 = INT64_MAX;
volatile int32_t x455 = INT32_MAX;
int8_t x473 = 5;
static int32_t t118 = 1449;
uint32_t x483 = 115353977U;
static volatile int32_t t120 = 3266803;
int8_t x491 = INT8_MIN;
volatile int32_t t122 = 3947;
int64_t x499 = -253159514497LL;
static int64_t x501 = -458783100035489710LL;
static int8_t x511 = 3;
int16_t x518 = -21;
volatile uint64_t x519 = UINT64_MAX;
int16_t x521 = -12;
static volatile uint64_t x522 = 14889846735988LLU;
static uint16_t x524 = 53U;
volatile int64_t x525 = -188987027LL;
static uint32_t x527 = UINT32_MAX;
volatile int32_t x528 = -1;
int16_t x536 = 5;
uint32_t x540 = 29640774U;
int16_t x541 = INT16_MIN;
uint32_t x552 = 2512U;
static int32_t t137 = 19116;
int16_t x554 = -1;
int8_t x555 = -1;
volatile int8_t x563 = 1;
uint32_t x569 = UINT32_MAX;
int8_t x575 = -1;
uint8_t x577 = 23U;
uint32_t x579 = 128260689U;
int64_t x582 = 525LL;
static int16_t x585 = INT16_MIN;
uint8_t x589 = 10U;
int64_t x592 = -168LL;
static uint32_t x594 = 50U;
volatile uint8_t x596 = UINT8_MAX;
uint8_t x599 = UINT8_MAX;
uint8_t x610 = 3U;
int64_t x612 = INT64_MIN;
volatile int32_t t152 = 2801899;
int64_t x613 = -1LL;
static uint16_t x614 = UINT16_MAX;
volatile int32_t t154 = 261667;
uint16_t x622 = UINT16_MAX;
volatile uint8_t x623 = 1U;
static volatile int32_t x629 = INT32_MIN;
int8_t x639 = INT8_MIN;
int32_t t159 = -14479058;
static int64_t x643 = 3398686LL;
volatile uint64_t x649 = 15LLU;
int64_t x659 = INT64_MAX;
static volatile uint32_t x666 = UINT32_MAX;
int32_t t166 = -78330;
static int32_t x670 = -1;
int8_t x671 = -2;
static int32_t t167 = 42998;
uint16_t x673 = 12005U;
volatile int8_t x678 = INT8_MIN;
int64_t x686 = 5549908LL;
int64_t x688 = INT64_MIN;
static volatile int8_t x695 = INT8_MAX;
int32_t t173 = -103600690;
uint64_t x700 = 26LLU;
uint32_t x705 = 17U;
int64_t x707 = -1LL;
static volatile int32_t t177 = 21505612;
int8_t x724 = INT8_MIN;
int32_t t182 = -11977;
int8_t x736 = -32;
uint16_t x738 = 1120U;
int16_t x749 = -1813;
static volatile int32_t x753 = INT32_MIN;
uint8_t x759 = 0U;
static uint8_t x763 = UINT8_MAX;
int32_t x772 = -23567;
int64_t x773 = INT64_MAX;
int32_t x774 = INT32_MAX;
int32_t x776 = INT32_MIN;
volatile int32_t t193 = -3;
int16_t x777 = 58;
volatile int8_t x786 = -1;
int8_t x795 = -1;
volatile int16_t x798 = 2;


void f0(void) {
    	volatile int32_t x1 = -1;
	uint64_t x3 = 75378137218245LLU;
	volatile uint64_t x4 = 102313789001213LLU;
	volatile int32_t t0 = -52093465;

    t0 = (x1<=(x2|(x3&x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = 12933911U;
	int8_t x6 = -1;
	volatile int8_t x7 = INT8_MAX;
	volatile uint16_t x8 = 143U;
	int32_t t1 = -242;

    t1 = (x5<=(x6|(x7&x8)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x9 = INT16_MIN;
	volatile uint16_t x10 = 232U;
	static int8_t x11 = -1;
	int32_t t2 = -14032;

    t2 = (x9<=(x10|(x11&x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x14 = INT32_MAX;
	static int64_t x15 = INT64_MAX;
	static int16_t x16 = -1;
	volatile int32_t t3 = 17;

    t3 = (x13<=(x14|(x15&x16)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x17 = INT64_MAX;
	volatile int16_t x18 = 5577;
	static int8_t x20 = INT8_MIN;
	int32_t t4 = 1;

    t4 = (x17<=(x18|(x19&x20)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x23 = UINT16_MAX;
	int32_t x24 = 30960332;
	int32_t t5 = -54979875;

    t5 = (x21<=(x22|(x23&x24)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x25 = INT16_MIN;
	volatile uint64_t x26 = 2195895430497505LLU;
	volatile int16_t x27 = INT16_MIN;
	int32_t x28 = INT32_MAX;
	int32_t t6 = -712;

    t6 = (x25<=(x26|(x27&x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = INT8_MIN;
	uint32_t x30 = 57045969U;
	int32_t x31 = -1026600650;
	int32_t x32 = -1;
	volatile int32_t t7 = -496;

    t7 = (x29<=(x30|(x31&x32)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x33 = 1U;
	volatile int8_t x35 = INT8_MIN;
	volatile int32_t t8 = 1;

    t8 = (x33<=(x34|(x35&x36)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint64_t x37 = 287091273852128LLU;
	uint8_t x38 = UINT8_MAX;
	volatile int8_t x39 = INT8_MAX;
	int32_t t9 = -500;

    t9 = (x37<=(x38|(x39&x40)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int32_t x41 = INT32_MIN;
	int8_t x42 = INT8_MIN;
	static int32_t x43 = INT32_MIN;
	volatile int32_t t10 = 1011346213;

    t10 = (x41<=(x42|(x43&x44)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = INT32_MIN;
	int16_t x46 = INT16_MIN;
	static uint8_t x47 = 65U;
	int32_t x48 = INT32_MIN;
	static volatile int32_t t11 = -421;

    t11 = (x45<=(x46|(x47&x48)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = INT64_MAX;
	uint32_t x50 = UINT32_MAX;
	uint64_t x51 = UINT64_MAX;
	static uint16_t x52 = 0U;
	volatile int32_t t12 = -4040925;

    t12 = (x49<=(x50|(x51&x52)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x53 = INT64_MIN;
	int16_t x54 = 38;
	uint16_t x55 = 11942U;
	uint32_t x56 = 3U;
	volatile int32_t t13 = -570428;

    t13 = (x53<=(x54|(x55&x56)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = INT64_MAX;
	int8_t x58 = INT8_MAX;
	int8_t x59 = INT8_MAX;
	volatile int64_t x60 = INT64_MIN;
	volatile int32_t t14 = 23301;

    t14 = (x57<=(x58|(x59&x60)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = INT64_MIN;
	int64_t x62 = -384535648700LL;
	int32_t x63 = -1;
	static uint8_t x64 = UINT8_MAX;
	int32_t t15 = 195673506;

    t15 = (x61<=(x62|(x63&x64)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x65 = UINT64_MAX;
	static uint8_t x66 = UINT8_MAX;
	int16_t x67 = -1;
	int64_t x68 = INT64_MAX;
	int32_t t16 = 2535;

    t16 = (x65<=(x66|(x67&x68)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = INT32_MIN;
	static uint8_t x70 = UINT8_MAX;
	int32_t x71 = INT32_MIN;
	volatile int16_t x72 = -1;
	volatile int32_t t17 = 3472;

    t17 = (x69<=(x70|(x71&x72)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = -1;
	volatile int64_t x75 = INT64_MAX;
	int32_t x76 = INT32_MAX;
	volatile int32_t t18 = 87316;

    t18 = (x73<=(x74|(x75&x76)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = INT32_MAX;
	int16_t x79 = INT16_MAX;
	static int64_t x80 = INT64_MIN;
	volatile int32_t t19 = 851917;

    t19 = (x77<=(x78|(x79&x80)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x81 = 1U;
	static uint32_t x83 = 206U;
	volatile int16_t x84 = INT16_MIN;
	volatile int32_t t20 = 5942114;

    t20 = (x81<=(x82|(x83&x84)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint32_t x85 = UINT32_MAX;
	int32_t x86 = INT32_MIN;
	uint8_t x87 = 105U;
	static int8_t x88 = INT8_MAX;
	volatile int32_t t21 = 58236;

    t21 = (x85<=(x86|(x87&x88)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = INT16_MIN;
	uint64_t x90 = 32547155194058261LLU;
	static int32_t x91 = INT32_MIN;
	volatile int32_t x92 = -1;
	volatile int32_t t22 = -185013;

    t22 = (x89<=(x90|(x91&x92)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x94 = INT16_MIN;
	uint64_t x95 = 22196881280516LLU;
	uint16_t x96 = 2725U;

    t23 = (x93<=(x94|(x95&x96)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint32_t x97 = 42204830U;
	uint32_t x100 = 635166U;
	volatile int32_t t24 = -127235;

    t24 = (x97<=(x98|(x99&x100)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x103 = -1;
	static volatile uint8_t x104 = UINT8_MAX;

    t25 = (x101<=(x102|(x103&x104)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = 25;
	static int32_t x106 = INT32_MIN;
	uint64_t x107 = 35605LLU;
	int64_t x108 = INT64_MIN;
	int32_t t26 = -5661909;

    t26 = (x105<=(x106|(x107&x108)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint32_t x110 = 16U;
	static volatile int16_t x111 = INT16_MIN;
	volatile int16_t x112 = INT16_MIN;
	int32_t t27 = 2;

    t27 = (x109<=(x110|(x111&x112)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x113 = 8U;
	int32_t x114 = -1;
	volatile int32_t x116 = INT32_MIN;

    t28 = (x113<=(x114|(x115&x116)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x117 = INT16_MAX;
	uint16_t x118 = 4U;
	int32_t x119 = 7825861;
	int32_t t29 = 0;

    t29 = (x117<=(x118|(x119&x120)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint8_t x121 = 13U;
	uint64_t x122 = 1761LLU;
	uint32_t x123 = UINT32_MAX;
	int64_t x124 = INT64_MAX;

    t30 = (x121<=(x122|(x123&x124)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x126 = -1;
	int16_t x127 = INT16_MIN;
	int16_t x128 = -1;
	int32_t t31 = 28102848;

    t31 = (x125<=(x126|(x127&x128)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint8_t x130 = 11U;
	int8_t x131 = 1;
	static int32_t x132 = INT32_MIN;
	volatile int32_t t32 = -1;

    t32 = (x129<=(x130|(x131&x132)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = INT8_MIN;
	volatile int32_t x134 = INT32_MAX;
	static volatile uint32_t x135 = 8156558U;
	uint16_t x136 = 6U;
	static volatile int32_t t33 = 2650;

    t33 = (x133<=(x134|(x135&x136)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x137 = INT8_MAX;
	int16_t x139 = INT16_MIN;
	static int64_t x140 = 75LL;
	static volatile int32_t t34 = -7984;

    t34 = (x137<=(x138|(x139&x140)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x142 = INT32_MIN;
	int32_t x143 = 1;
	int32_t t35 = -49;

    t35 = (x141<=(x142|(x143&x144)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x145 = 0U;
	uint8_t x146 = UINT8_MAX;
	uint16_t x148 = 6717U;

    t36 = (x145<=(x146|(x147&x148)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x149 = -10;
	uint8_t x151 = 0U;
	volatile int8_t x152 = -17;
	volatile int32_t t37 = 470;

    t37 = (x149<=(x150|(x151&x152)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x153 = INT64_MAX;
	static int32_t x154 = -1;
	int8_t x155 = INT8_MIN;
	int16_t x156 = -1;
	int32_t t38 = 451904835;

    t38 = (x153<=(x154|(x155&x156)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x157 = -1;
	uint32_t x158 = 635U;
	int64_t x159 = -368410LL;
	volatile int8_t x160 = INT8_MAX;
	volatile int32_t t39 = -3746295;

    t39 = (x157<=(x158|(x159&x160)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t x162 = INT64_MIN;
	uint8_t x163 = UINT8_MAX;
	static uint64_t x164 = 1063LLU;

    t40 = (x161<=(x162|(x163&x164)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x165 = INT16_MAX;
	volatile int64_t x166 = -617494395029LL;
	int16_t x168 = -1;

    t41 = (x165<=(x166|(x167&x168)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x169 = INT16_MIN;
	int32_t x171 = INT32_MIN;
	volatile int32_t t42 = -29;

    t42 = (x169<=(x170|(x171&x172)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x173 = 13934335LLU;
	int16_t x175 = -161;
	uint8_t x176 = 30U;

    t43 = (x173<=(x174|(x175&x176)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x178 = -1LL;
	int8_t x180 = -1;
	static int32_t t44 = 23;

    t44 = (x177<=(x178|(x179&x180)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint64_t x181 = 201203405179LLU;
	uint8_t x182 = 100U;
	int32_t x183 = INT32_MIN;
	volatile int8_t x184 = INT8_MIN;
	volatile int32_t t45 = -431727657;

    t45 = (x181<=(x182|(x183&x184)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int64_t x185 = 4539370LL;
	int16_t x187 = INT16_MAX;
	uint64_t x188 = 200319508823576LLU;
	static int32_t t46 = -248;

    t46 = (x185<=(x186|(x187&x188)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x189 = 244555LLU;
	int16_t x191 = INT16_MIN;
	int64_t x192 = INT64_MIN;
	volatile int32_t t47 = 862072;

    t47 = (x189<=(x190|(x191&x192)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x193 = -8748LL;
	uint64_t x194 = UINT64_MAX;
	int64_t x195 = INT64_MAX;
	int32_t x196 = 895825282;

    t48 = (x193<=(x194|(x195&x196)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x197 = -1LL;
	volatile int32_t t49 = 12;

    t49 = (x197<=(x198|(x199&x200)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x201 = 7314U;
	int8_t x203 = -1;
	int64_t x204 = INT64_MIN;

    t50 = (x201<=(x202|(x203&x204)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x205 = -7165;
	int8_t x206 = INT8_MIN;
	static uint16_t x208 = UINT16_MAX;
	int32_t t51 = -533511959;

    t51 = (x205<=(x206|(x207&x208)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x209 = INT8_MAX;
	uint64_t x210 = 11080097580494888LLU;
	static int8_t x212 = 1;
	volatile int32_t t52 = -25734;

    t52 = (x209<=(x210|(x211&x212)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x213 = -1LL;
	static uint8_t x214 = UINT8_MAX;
	static volatile int8_t x215 = -1;
	uint64_t x216 = UINT64_MAX;
	static int32_t t53 = 80536;

    t53 = (x213<=(x214|(x215&x216)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x217 = -8;
	volatile int8_t x218 = -4;
	static volatile uint64_t x219 = UINT64_MAX;
	volatile int32_t x220 = -1;
	int32_t t54 = -34513;

    t54 = (x217<=(x218|(x219&x220)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int32_t x222 = INT32_MIN;
	int32_t x223 = INT32_MIN;
	uint16_t x224 = UINT16_MAX;
	volatile int32_t t55 = -1;

    t55 = (x221<=(x222|(x223&x224)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x226 = INT8_MIN;
	int16_t x227 = 293;
	uint32_t x228 = UINT32_MAX;

    t56 = (x225<=(x226|(x227&x228)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint16_t x229 = UINT16_MAX;
	int32_t x230 = -1;
	static volatile int64_t x231 = 8587LL;
	static volatile int32_t t57 = 10;

    t57 = (x229<=(x230|(x231&x232)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x233 = 446937960U;
	volatile int32_t x234 = -1340641;
	static int16_t x235 = 1614;
	uint8_t x236 = 2U;
	static volatile int32_t t58 = -7;

    t58 = (x233<=(x234|(x235&x236)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int16_t x237 = 1812;
	uint16_t x239 = 250U;
	int32_t x240 = INT32_MAX;
	volatile int32_t t59 = -1;

    t59 = (x237<=(x238|(x239&x240)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x241 = INT32_MAX;
	static volatile uint16_t x242 = 192U;
	int32_t x244 = -1;

    t60 = (x241<=(x242|(x243&x244)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x245 = INT16_MAX;
	static int64_t x246 = INT64_MIN;
	int8_t x247 = INT8_MIN;

    t61 = (x245<=(x246|(x247&x248)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x250 = INT64_MIN;
	int32_t x252 = INT32_MIN;
	static volatile int32_t t62 = -51678687;

    t62 = (x249<=(x250|(x251&x252)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x253 = 50064;
	uint64_t x255 = 14LLU;
	int32_t t63 = 139056;

    t63 = (x253<=(x254|(x255&x256)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x257 = INT32_MIN;
	volatile int16_t x258 = INT16_MAX;
	static volatile uint32_t x259 = 10078197U;
	uint16_t x260 = 55U;
	volatile int32_t t64 = -1;

    t64 = (x257<=(x258|(x259&x260)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x261 = -1;
	static uint16_t x262 = 203U;
	int16_t x263 = -1;
	volatile int32_t t65 = -613;

    t65 = (x261<=(x262|(x263&x264)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x265 = -9;
	uint32_t x266 = UINT32_MAX;
	int32_t x267 = -18711029;
	uint16_t x268 = UINT16_MAX;
	volatile int32_t t66 = 1054925349;

    t66 = (x265<=(x266|(x267&x268)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x269 = 300112028913184LL;
	int32_t x270 = 484011290;
	volatile int8_t x271 = INT8_MIN;
	uint8_t x272 = 4U;
	int32_t t67 = -129467;

    t67 = (x269<=(x270|(x271&x272)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint32_t x273 = UINT32_MAX;
	static volatile uint64_t x274 = 108LLU;
	int8_t x275 = INT8_MIN;
	uint64_t x276 = UINT64_MAX;
	int32_t t68 = 23039656;

    t68 = (x273<=(x274|(x275&x276)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x277 = -53;
	volatile int8_t x278 = 0;
	int32_t t69 = -179;

    t69 = (x277<=(x278|(x279&x280)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = INT16_MIN;
	static uint8_t x282 = 0U;
	int64_t x283 = INT64_MIN;
	volatile int16_t x284 = 8;
	volatile int32_t t70 = -351537;

    t70 = (x281<=(x282|(x283&x284)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x285 = 703300488U;
	int32_t x286 = -34;
	static uint64_t x287 = UINT64_MAX;
	uint16_t x288 = UINT16_MAX;
	int32_t t71 = 15;

    t71 = (x285<=(x286|(x287&x288)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint64_t x289 = 1482909715041837LLU;
	static volatile int32_t x290 = INT32_MIN;
	int32_t x292 = 4000;

    t72 = (x289<=(x290|(x291&x292)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x293 = INT64_MAX;
	uint64_t x294 = 242LLU;
	volatile uint64_t x295 = UINT64_MAX;
	static int32_t t73 = 735;

    t73 = (x293<=(x294|(x295&x296)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint64_t x297 = UINT64_MAX;
	int64_t x299 = -30796LL;
	static volatile int32_t t74 = 9580;

    t74 = (x297<=(x298|(x299&x300)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x301 = INT8_MIN;
	volatile int64_t x302 = -1LL;
	int16_t x303 = -1;
	int8_t x304 = -1;
	volatile int32_t t75 = 0;

    t75 = (x301<=(x302|(x303&x304)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x305 = -291;
	int16_t x306 = -1;
	int64_t x307 = INT64_MAX;
	int8_t x308 = INT8_MIN;
	static int32_t t76 = 7772632;

    t76 = (x305<=(x306|(x307&x308)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x309 = INT32_MIN;
	int32_t x310 = INT32_MAX;
	int8_t x311 = 25;
	volatile int32_t x312 = INT32_MIN;
	int32_t t77 = -24861597;

    t77 = (x309<=(x310|(x311&x312)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x313 = 48U;
	volatile int8_t x314 = -1;
	volatile int64_t x315 = -61485119195LL;
	uint32_t x316 = 1212865592U;
	int32_t t78 = 60202;

    t78 = (x313<=(x314|(x315&x316)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x317 = -1;
	volatile uint8_t x319 = 2U;
	static volatile uint8_t x320 = 39U;
	int32_t t79 = -5;

    t79 = (x317<=(x318|(x319&x320)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x321 = 1U;
	volatile uint16_t x324 = UINT16_MAX;
	static int32_t t80 = -113;

    t80 = (x321<=(x322|(x323&x324)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int16_t x325 = INT16_MIN;
	int8_t x326 = -14;
	int64_t x327 = -1LL;
	uint16_t x328 = UINT16_MAX;

    t81 = (x325<=(x326|(x327&x328)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x329 = INT64_MAX;
	uint16_t x330 = 4341U;
	static int8_t x331 = INT8_MIN;
	int64_t x332 = -213671LL;
	int32_t t82 = 3092155;

    t82 = (x329<=(x330|(x331&x332)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int32_t x333 = INT32_MIN;
	int64_t x334 = INT64_MAX;
	static uint16_t x336 = 18375U;
	volatile int32_t t83 = -987;

    t83 = (x333<=(x334|(x335&x336)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x337 = INT16_MAX;
	int16_t x339 = 5;
	volatile int32_t t84 = 1635;

    t84 = (x337<=(x338|(x339&x340)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x341 = 1;
	static volatile int64_t x343 = -57129907489555160LL;
	int32_t x344 = 0;
	volatile int32_t t85 = 730;

    t85 = (x341<=(x342|(x343&x344)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x345 = INT16_MIN;
	static int64_t x348 = -17412185151LL;
	int32_t t86 = -764;

    t86 = (x345<=(x346|(x347&x348)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x350 = INT32_MAX;
	int8_t x352 = INT8_MIN;

    t87 = (x349<=(x350|(x351&x352)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x353 = UINT8_MAX;
	volatile int64_t x356 = 44887613162916LL;
	int32_t t88 = 0;

    t88 = (x353<=(x354|(x355&x356)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x357 = -347LL;
	int64_t x358 = INT64_MAX;
	int64_t x359 = INT64_MIN;
	int8_t x360 = INT8_MIN;
	int32_t t89 = -1466927;

    t89 = (x357<=(x358|(x359&x360)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x361 = -1;
	int16_t x362 = 5488;
	static int32_t x363 = INT32_MIN;
	static int16_t x364 = INT16_MIN;
	int32_t t90 = 343078439;

    t90 = (x361<=(x362|(x363&x364)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int8_t x365 = 2;
	int32_t x366 = INT32_MAX;
	volatile int8_t x367 = 34;
	static volatile uint16_t x368 = UINT16_MAX;
	static int32_t t91 = 1500432;

    t91 = (x365<=(x366|(x367&x368)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x370 = -3;
	static int8_t x371 = 10;
	static uint16_t x372 = UINT16_MAX;
	int32_t t92 = 24207;

    t92 = (x369<=(x370|(x371&x372)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x373 = UINT8_MAX;
	int64_t x374 = INT64_MIN;
	volatile int16_t x375 = INT16_MAX;
	int8_t x376 = INT8_MIN;

    t93 = (x373<=(x374|(x375&x376)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x377 = UINT64_MAX;
	int16_t x378 = -1;
	volatile int8_t x379 = INT8_MIN;
	uint64_t x380 = UINT64_MAX;
	static volatile int32_t t94 = -74837;

    t94 = (x377<=(x378|(x379&x380)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x381 = -1;
	uint8_t x382 = 2U;
	static int32_t x383 = 47;
	uint32_t x384 = 523U;
	int32_t t95 = -3;

    t95 = (x381<=(x382|(x383&x384)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x385 = INT64_MIN;
	int8_t x386 = -1;
	int32_t x387 = -1;
	int32_t x388 = -1;
	volatile int32_t t96 = -65;

    t96 = (x385<=(x386|(x387&x388)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x391 = 0;
	int32_t t97 = -1;

    t97 = (x389<=(x390|(x391&x392)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x393 = -5;
	static int32_t x394 = -1;
	uint32_t x395 = 205309U;
	int16_t x396 = -1;

    t98 = (x393<=(x394|(x395&x396)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x397 = 0U;
	static int64_t x398 = INT64_MIN;
	int32_t x399 = INT32_MIN;
	int16_t x400 = 3611;
	volatile int32_t t99 = -10656;

    t99 = (x397<=(x398|(x399&x400)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x401 = 0;
	volatile int8_t x402 = -2;
	int8_t x403 = -3;
	volatile int32_t t100 = 405;

    t100 = (x401<=(x402|(x403&x404)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int64_t x405 = 3710207495185424LL;
	int64_t x406 = INT64_MIN;
	int64_t x407 = -1LL;
	uint32_t x408 = UINT32_MAX;
	volatile int32_t t101 = 34939862;

    t101 = (x405<=(x406|(x407&x408)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int32_t x409 = INT32_MIN;
	volatile uint32_t x410 = 539005U;
	static int64_t x411 = -1LL;
	volatile int32_t t102 = -766348;

    t102 = (x409<=(x410|(x411&x412)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x414 = 6U;
	volatile uint16_t x415 = UINT16_MAX;
	volatile uint16_t x416 = 13012U;
	int32_t t103 = 3339;

    t103 = (x413<=(x414|(x415&x416)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x417 = INT32_MIN;
	int32_t x418 = -1;
	int64_t x419 = 8163624799981LL;
	uint32_t x420 = 101542U;
	volatile int32_t t104 = 29593;

    t104 = (x417<=(x418|(x419&x420)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint64_t x421 = 2072014028505112149LLU;
	uint64_t x422 = 127186LLU;
	int8_t x424 = INT8_MAX;
	volatile int32_t t105 = -1;

    t105 = (x421<=(x422|(x423&x424)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x425 = -1;
	static volatile uint8_t x426 = 20U;
	uint32_t x427 = 148U;
	int8_t x428 = -1;
	static int32_t t106 = -6;

    t106 = (x425<=(x426|(x427&x428)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x430 = INT32_MAX;
	static int8_t x431 = INT8_MIN;
	int32_t t107 = 11110;

    t107 = (x429<=(x430|(x431&x432)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile uint32_t x433 = 391U;
	volatile int64_t x434 = INT64_MIN;
	int8_t x436 = -1;
	static int32_t t108 = 19;

    t108 = (x433<=(x434|(x435&x436)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x437 = 1;
	uint16_t x438 = 1269U;
	static int32_t x439 = -365578;
	int64_t x440 = 642129166472571LL;
	static volatile int32_t t109 = -94330;

    t109 = (x437<=(x438|(x439&x440)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x441 = 1133LL;
	int16_t x442 = INT16_MIN;
	static uint64_t x443 = UINT64_MAX;
	int16_t x444 = -71;
	static int32_t t110 = 8;

    t110 = (x441<=(x442|(x443&x444)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x445 = INT16_MIN;
	static uint64_t x446 = 4916LLU;
	static volatile int8_t x447 = -4;
	uint64_t x448 = UINT64_MAX;
	volatile int32_t t111 = 188;

    t111 = (x445<=(x446|(x447&x448)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint8_t x449 = 122U;
	volatile uint8_t x450 = UINT8_MAX;
	uint8_t x451 = 1U;
	uint8_t x452 = 15U;
	int32_t t112 = 3;

    t112 = (x449<=(x450|(x451&x452)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x453 = INT8_MAX;
	static uint16_t x454 = 4U;
	uint32_t x456 = 1383678U;
	int32_t t113 = 49422;

    t113 = (x453<=(x454|(x455&x456)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x457 = UINT32_MAX;
	static volatile int32_t x458 = -1;
	int32_t x459 = 2389909;
	static int16_t x460 = -1;
	int32_t t114 = -1;

    t114 = (x457<=(x458|(x459&x460)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x461 = 60;
	volatile uint16_t x462 = UINT16_MAX;
	int64_t x463 = 14LL;
	int32_t x464 = -1;
	int32_t t115 = 29937;

    t115 = (x461<=(x462|(x463&x464)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x465 = UINT16_MAX;
	uint64_t x466 = UINT64_MAX;
	uint32_t x467 = 54U;
	int16_t x468 = INT16_MIN;
	volatile int32_t t116 = 34900;

    t116 = (x465<=(x466|(x467&x468)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x469 = INT64_MAX;
	volatile int16_t x470 = INT16_MAX;
	volatile int64_t x471 = INT64_MAX;
	int32_t x472 = -43;
	volatile int32_t t117 = -335372441;

    t117 = (x469<=(x470|(x471&x472)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x474 = -1;
	volatile uint16_t x475 = 7896U;
	int32_t x476 = INT32_MIN;

    t118 = (x473<=(x474|(x475&x476)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x477 = 0U;
	uint16_t x478 = UINT16_MAX;
	int16_t x479 = INT16_MAX;
	static uint16_t x480 = UINT16_MAX;
	volatile int32_t t119 = 372584;

    t119 = (x477<=(x478|(x479&x480)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static int8_t x481 = INT8_MIN;
	int32_t x482 = -1;
	static int8_t x484 = INT8_MIN;

    t120 = (x481<=(x482|(x483&x484)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x485 = 53;
	int64_t x486 = INT64_MIN;
	int8_t x487 = INT8_MAX;
	static volatile int64_t x488 = INT64_MAX;
	volatile int32_t t121 = -50;

    t121 = (x485<=(x486|(x487&x488)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x489 = -1947626;
	int8_t x490 = INT8_MIN;
	int32_t x492 = INT32_MAX;

    t122 = (x489<=(x490|(x491&x492)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x493 = INT64_MIN;
	volatile uint64_t x494 = 1047692263094972LLU;
	int8_t x495 = INT8_MIN;
	uint16_t x496 = 9U;
	volatile int32_t t123 = 8;

    t123 = (x493<=(x494|(x495&x496)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int64_t x497 = -4944979988LL;
	int64_t x498 = 2888362LL;
	int8_t x500 = 1;
	int32_t t124 = -1056433905;

    t124 = (x497<=(x498|(x499&x500)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x502 = INT8_MIN;
	int64_t x503 = -3130LL;
	static int32_t x504 = -1;
	volatile int32_t t125 = 27832232;

    t125 = (x501<=(x502|(x503&x504)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x505 = INT16_MIN;
	volatile int32_t x506 = INT32_MIN;
	static volatile int8_t x507 = -26;
	uint8_t x508 = UINT8_MAX;
	int32_t t126 = -3;

    t126 = (x505<=(x506|(x507&x508)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint16_t x509 = UINT16_MAX;
	int64_t x510 = INT64_MAX;
	int16_t x512 = INT16_MAX;
	volatile int32_t t127 = -1011402119;

    t127 = (x509<=(x510|(x511&x512)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x513 = UINT64_MAX;
	int64_t x514 = INT64_MAX;
	int8_t x515 = -2;
	int8_t x516 = 1;
	volatile int32_t t128 = -30;

    t128 = (x513<=(x514|(x515&x516)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint8_t x517 = UINT8_MAX;
	static int8_t x520 = -1;
	int32_t t129 = -1;

    t129 = (x517<=(x518|(x519&x520)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int16_t x523 = INT16_MAX;
	int32_t t130 = 11;

    t130 = (x521<=(x522|(x523&x524)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x526 = -12838338;
	volatile int32_t t131 = -1435055;

    t131 = (x525<=(x526|(x527&x528)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint8_t x529 = UINT8_MAX;
	static int32_t x530 = INT32_MIN;
	static int64_t x531 = -13389683LL;
	int32_t x532 = -1;
	volatile int32_t t132 = 43;

    t132 = (x529<=(x530|(x531&x532)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int64_t x533 = -1LL;
	uint64_t x534 = 1829706803217621LLU;
	uint32_t x535 = 28393172U;
	volatile int32_t t133 = 96;

    t133 = (x533<=(x534|(x535&x536)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x537 = 0U;
	volatile uint64_t x538 = 87918909586212LLU;
	volatile int8_t x539 = -1;
	int32_t t134 = -1126678;

    t134 = (x537<=(x538|(x539&x540)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x542 = -1;
	int8_t x543 = 23;
	int16_t x544 = 899;
	static int32_t t135 = -4;

    t135 = (x541<=(x542|(x543&x544)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x545 = 181092536U;
	static volatile int8_t x546 = 1;
	int32_t x547 = INT32_MAX;
	volatile int64_t x548 = -6276624383LL;
	static int32_t t136 = 636431;

    t136 = (x545<=(x546|(x547&x548)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x549 = -1;
	int64_t x550 = INT64_MAX;
	int64_t x551 = -2554386477LL;

    t137 = (x549<=(x550|(x551&x552)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x553 = 4U;
	static int64_t x556 = INT64_MIN;
	int32_t t138 = -8320574;

    t138 = (x553<=(x554|(x555&x556)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint16_t x557 = 0U;
	int64_t x558 = INT64_MIN;
	uint8_t x559 = 29U;
	int32_t x560 = -1;
	static volatile int32_t t139 = -554973;

    t139 = (x557<=(x558|(x559&x560)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x561 = -3;
	int8_t x562 = -1;
	int16_t x564 = INT16_MAX;
	int32_t t140 = -505;

    t140 = (x561<=(x562|(x563&x564)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x565 = INT32_MAX;
	uint32_t x566 = 379U;
	int8_t x567 = INT8_MIN;
	uint16_t x568 = UINT16_MAX;
	volatile int32_t t141 = -2936;

    t141 = (x565<=(x566|(x567&x568)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x570 = INT32_MIN;
	int8_t x571 = INT8_MIN;
	int64_t x572 = INT64_MIN;
	int32_t t142 = 7866339;

    t142 = (x569<=(x570|(x571&x572)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x573 = INT8_MIN;
	uint8_t x574 = UINT8_MAX;
	int8_t x576 = INT8_MIN;
	volatile int32_t t143 = 327467499;

    t143 = (x573<=(x574|(x575&x576)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x578 = INT8_MAX;
	uint16_t x580 = 4042U;
	static volatile int32_t t144 = 295603135;

    t144 = (x577<=(x578|(x579&x580)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x581 = -22;
	volatile int16_t x583 = 888;
	int8_t x584 = INT8_MIN;
	static volatile int32_t t145 = 1356384;

    t145 = (x581<=(x582|(x583&x584)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x586 = 64U;
	static int64_t x587 = -248772978910330LL;
	int8_t x588 = -1;
	int32_t t146 = -1;

    t146 = (x585<=(x586|(x587&x588)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile int32_t x590 = INT32_MIN;
	int32_t x591 = 595871;
	volatile int32_t t147 = 1;

    t147 = (x589<=(x590|(x591&x592)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x593 = 52083338LL;
	static uint64_t x595 = 843401LLU;
	static volatile int32_t t148 = -8705376;

    t148 = (x593<=(x594|(x595&x596)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x597 = INT32_MAX;
	volatile uint64_t x598 = 14506LLU;
	static volatile int8_t x600 = 0;
	int32_t t149 = -39;

    t149 = (x597<=(x598|(x599&x600)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint64_t x601 = UINT64_MAX;
	int16_t x602 = INT16_MIN;
	int64_t x603 = INT64_MIN;
	int64_t x604 = -1LL;
	int32_t t150 = 38;

    t150 = (x601<=(x602|(x603&x604)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x605 = -29;
	int64_t x606 = -1141734985LL;
	uint16_t x607 = 15110U;
	uint64_t x608 = UINT64_MAX;
	volatile int32_t t151 = -386446868;

    t151 = (x605<=(x606|(x607&x608)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x609 = -50785741287767255LL;
	static uint8_t x611 = 102U;

    t152 = (x609<=(x610|(x611&x612)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile uint16_t x615 = UINT16_MAX;
	uint16_t x616 = UINT16_MAX;
	int32_t t153 = 4;

    t153 = (x613<=(x614|(x615&x616)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x617 = -1;
	static uint64_t x618 = UINT64_MAX;
	uint8_t x619 = 5U;
	int8_t x620 = INT8_MIN;

    t154 = (x617<=(x618|(x619&x620)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x621 = INT8_MIN;
	static int32_t x624 = INT32_MIN;
	volatile int32_t t155 = 478565433;

    t155 = (x621<=(x622|(x623&x624)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x625 = 0;
	uint8_t x626 = 3U;
	volatile int32_t x627 = -1;
	int8_t x628 = INT8_MIN;
	int32_t t156 = 260108933;

    t156 = (x625<=(x626|(x627&x628)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x630 = UINT32_MAX;
	uint8_t x631 = UINT8_MAX;
	volatile int16_t x632 = 21;
	int32_t t157 = -13471933;

    t157 = (x629<=(x630|(x631&x632)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x633 = 2143345LL;
	static int16_t x634 = INT16_MIN;
	volatile uint8_t x635 = 2U;
	int64_t x636 = INT64_MAX;
	static volatile int32_t t158 = 1;

    t158 = (x633<=(x634|(x635&x636)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x637 = 3U;
	volatile uint32_t x638 = 86892U;
	uint16_t x640 = 743U;

    t159 = (x637<=(x638|(x639&x640)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x641 = INT64_MIN;
	int64_t x642 = INT64_MIN;
	int8_t x644 = INT8_MAX;
	volatile int32_t t160 = 58031847;

    t160 = (x641<=(x642|(x643&x644)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint64_t x645 = UINT64_MAX;
	static uint16_t x646 = UINT16_MAX;
	static int16_t x647 = INT16_MIN;
	static int32_t x648 = INT32_MAX;
	volatile int32_t t161 = 10186823;

    t161 = (x645<=(x646|(x647&x648)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x650 = 1U;
	static uint8_t x651 = 1U;
	static int32_t x652 = -9755835;
	volatile int32_t t162 = 6533;

    t162 = (x649<=(x650|(x651&x652)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x653 = INT32_MAX;
	int32_t x654 = -1;
	volatile uint16_t x655 = 15948U;
	uint32_t x656 = UINT32_MAX;
	int32_t t163 = 17477;

    t163 = (x653<=(x654|(x655&x656)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x657 = -12;
	volatile int32_t x658 = 12;
	uint16_t x660 = 559U;
	int32_t t164 = 60032379;

    t164 = (x657<=(x658|(x659&x660)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = -1LL;
	static int16_t x662 = INT16_MIN;
	static uint64_t x663 = 6LLU;
	int16_t x664 = INT16_MAX;
	int32_t t165 = 151;

    t165 = (x661<=(x662|(x663&x664)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x665 = 11480LL;
	uint8_t x667 = 3U;
	volatile int32_t x668 = INT32_MIN;

    t166 = (x665<=(x666|(x667&x668)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x669 = UINT8_MAX;
	volatile uint32_t x672 = 183131U;

    t167 = (x669<=(x670|(x671&x672)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint32_t x674 = 892U;
	static int16_t x675 = -1;
	static int32_t x676 = INT32_MIN;
	volatile int32_t t168 = -55082997;

    t168 = (x673<=(x674|(x675&x676)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x677 = 843414322983835LLU;
	uint16_t x679 = UINT16_MAX;
	static int16_t x680 = INT16_MAX;
	int32_t t169 = -4213;

    t169 = (x677<=(x678|(x679&x680)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint16_t x681 = UINT16_MAX;
	int16_t x682 = 5;
	int16_t x683 = INT16_MIN;
	uint64_t x684 = 12731LLU;
	int32_t t170 = -26;

    t170 = (x681<=(x682|(x683&x684)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x685 = INT16_MIN;
	uint8_t x687 = 4U;
	static int32_t t171 = 1824890;

    t171 = (x685<=(x686|(x687&x688)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint64_t x689 = UINT64_MAX;
	static uint16_t x690 = 1744U;
	static int16_t x691 = -1;
	volatile int32_t x692 = INT32_MIN;
	volatile int32_t t172 = 4239196;

    t172 = (x689<=(x690|(x691&x692)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x693 = INT16_MIN;
	uint64_t x694 = UINT64_MAX;
	int64_t x696 = INT64_MAX;

    t173 = (x693<=(x694|(x695&x696)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x697 = -99;
	int16_t x698 = INT16_MIN;
	int64_t x699 = -5183691LL;
	int32_t t174 = -42;

    t174 = (x697<=(x698|(x699&x700)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x701 = 1;
	uint16_t x702 = 0U;
	static int32_t x703 = INT32_MIN;
	static uint32_t x704 = UINT32_MAX;
	volatile int32_t t175 = -1;

    t175 = (x701<=(x702|(x703&x704)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile int16_t x706 = 218;
	uint16_t x708 = 6U;
	volatile int32_t t176 = -63;

    t176 = (x705<=(x706|(x707&x708)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x709 = 817U;
	int8_t x710 = INT8_MIN;
	static int64_t x711 = 1080LL;
	uint8_t x712 = UINT8_MAX;

    t177 = (x709<=(x710|(x711&x712)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x713 = INT32_MAX;
	int8_t x714 = INT8_MIN;
	int32_t x715 = -1;
	uint16_t x716 = 3371U;
	volatile int32_t t178 = -3021;

    t178 = (x713<=(x714|(x715&x716)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x717 = -1;
	int32_t x718 = 6;
	uint8_t x719 = 10U;
	uint16_t x720 = UINT16_MAX;
	volatile int32_t t179 = -58327895;

    t179 = (x717<=(x718|(x719&x720)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int64_t x721 = INT64_MIN;
	uint16_t x722 = 6275U;
	volatile uint8_t x723 = 0U;
	static int32_t t180 = -3;

    t180 = (x721<=(x722|(x723&x724)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x725 = -1;
	int16_t x726 = 2;
	static uint8_t x727 = UINT8_MAX;
	volatile int32_t x728 = -97523;
	static int32_t t181 = 4758;

    t181 = (x725<=(x726|(x727&x728)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint32_t x729 = UINT32_MAX;
	static int8_t x730 = INT8_MAX;
	uint64_t x731 = 532LLU;
	static uint32_t x732 = 5U;

    t182 = (x729<=(x730|(x731&x732)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x733 = 5;
	volatile uint64_t x734 = 2416325806296LLU;
	uint64_t x735 = UINT64_MAX;
	static int32_t t183 = -8481369;

    t183 = (x733<=(x734|(x735&x736)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x737 = 462U;
	static int32_t x739 = -11;
	volatile int32_t x740 = -245;
	volatile int32_t t184 = 369307;

    t184 = (x737<=(x738|(x739&x740)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x741 = INT64_MIN;
	int16_t x742 = INT16_MAX;
	int16_t x743 = 2899;
	int8_t x744 = -10;
	volatile int32_t t185 = 30277;

    t185 = (x741<=(x742|(x743&x744)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x745 = -1;
	int16_t x746 = -1;
	int32_t x747 = INT32_MIN;
	int16_t x748 = 1;
	volatile int32_t t186 = -732489;

    t186 = (x745<=(x746|(x747&x748)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static int8_t x750 = INT8_MAX;
	static int8_t x751 = INT8_MIN;
	int8_t x752 = -1;
	int32_t t187 = 1;

    t187 = (x749<=(x750|(x751&x752)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x754 = -1;
	uint64_t x755 = UINT64_MAX;
	int64_t x756 = -1LL;
	int32_t t188 = 2007;

    t188 = (x753<=(x754|(x755&x756)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x757 = INT64_MIN;
	volatile uint8_t x758 = 95U;
	int64_t x760 = INT64_MAX;
	volatile int32_t t189 = -64332765;

    t189 = (x757<=(x758|(x759&x760)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x761 = UINT64_MAX;
	int32_t x762 = INT32_MAX;
	uint32_t x764 = UINT32_MAX;
	volatile int32_t t190 = -185286211;

    t190 = (x761<=(x762|(x763&x764)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x765 = -665175934804953679LL;
	int32_t x766 = -1;
	uint32_t x767 = 6732U;
	int16_t x768 = -1;
	volatile int32_t t191 = -1;

    t191 = (x765<=(x766|(x767&x768)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x769 = 2656823LLU;
	int64_t x770 = INT64_MIN;
	uint64_t x771 = UINT64_MAX;
	static int32_t t192 = 1;

    t192 = (x769<=(x770|(x771&x772)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x775 = 1U;

    t193 = (x773<=(x774|(x775&x776)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x778 = 169041798LLU;
	int8_t x779 = -1;
	volatile int16_t x780 = -37;
	int32_t t194 = 120338056;

    t194 = (x777<=(x778|(x779&x780)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x781 = INT32_MAX;
	volatile uint32_t x782 = 8499600U;
	static int8_t x783 = INT8_MIN;
	int16_t x784 = -1;
	static volatile int32_t t195 = 0;

    t195 = (x781<=(x782|(x783&x784)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x785 = INT32_MIN;
	uint16_t x787 = 14U;
	int16_t x788 = INT16_MIN;
	volatile int32_t t196 = -2;

    t196 = (x785<=(x786|(x787&x788)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x789 = INT64_MIN;
	int8_t x790 = -1;
	static uint32_t x791 = UINT32_MAX;
	int8_t x792 = INT8_MIN;
	static int32_t t197 = 49;

    t197 = (x789<=(x790|(x791&x792)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x793 = 0;
	static int32_t x794 = -5;
	static int32_t x796 = INT32_MAX;
	int32_t t198 = -1458;

    t198 = (x793<=(x794|(x795&x796)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x797 = 15879119466487LLU;
	int8_t x799 = -1;
	int16_t x800 = -1;
	static volatile int32_t t199 = 4256;

    t199 = (x797<=(x798|(x799&x800)));

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

