
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

static uint64_t x4 = UINT64_MAX;
int16_t x10 = INT16_MAX;
volatile uint64_t x33 = UINT64_MAX;
uint64_t x41 = 679909524LLU;
uint8_t x46 = UINT8_MAX;
static volatile int32_t x48 = INT32_MIN;
volatile int8_t x54 = INT8_MIN;
int32_t t13 = -685;
uint16_t x70 = 5U;
uint16_t x77 = UINT16_MAX;
int32_t t18 = 0;
int16_t x85 = 1;
volatile int64_t x87 = -13496944439LL;
static uint32_t x95 = 261U;
static volatile uint64_t x98 = 10587676804LLU;
int16_t x103 = INT16_MAX;
volatile int64_t x105 = -2522220696423999467LL;
int64_t x119 = -1LL;
volatile int32_t t29 = 213;
int16_t x127 = INT16_MIN;
int32_t t31 = -11;
volatile int32_t x136 = INT32_MAX;
static int32_t x141 = INT32_MIN;
int16_t x147 = -1;
uint16_t x148 = 405U;
uint32_t x153 = UINT32_MAX;
int16_t x159 = INT16_MIN;
static int16_t x168 = INT16_MIN;
int64_t x170 = -3981689187663106408LL;
volatile uint16_t x172 = 1U;
int64_t x190 = INT64_MIN;
int32_t x191 = INT32_MIN;
int64_t x192 = INT64_MIN;
int32_t x199 = INT32_MIN;
uint32_t x201 = 71U;
int32_t t48 = 195712;
int16_t x217 = INT16_MAX;
volatile int16_t x224 = -4748;
volatile int8_t x226 = INT8_MIN;
volatile uint64_t x227 = 7126423960885491LLU;
volatile int32_t t52 = -12;
int16_t x230 = INT16_MIN;
static uint8_t x235 = UINT8_MAX;
volatile int32_t t55 = 320426279;
static int16_t x241 = INT16_MAX;
int32_t x242 = -1;
int32_t t57 = 492780;
int8_t x249 = -37;
static volatile uint8_t x251 = 14U;
int64_t x252 = INT64_MIN;
int32_t t60 = -182;
int32_t x274 = -1;
int16_t x277 = 0;
volatile uint8_t x281 = 76U;
uint32_t x286 = UINT32_MAX;
int16_t x294 = INT16_MAX;
volatile int8_t x295 = -1;
uint64_t x301 = 155160565LLU;
int16_t x309 = INT16_MAX;
static int32_t x311 = INT32_MAX;
volatile int64_t x315 = -1LL;
static int64_t x318 = 64948182625898315LL;
static uint32_t x331 = 941392U;
int32_t x339 = -1;
int16_t x341 = INT16_MIN;
int16_t x345 = -1;
int64_t x352 = -1116486788121696694LL;
int32_t t79 = 462;
volatile int32_t t80 = -423;
static int32_t x366 = INT32_MIN;
static int32_t x368 = -1;
int16_t x369 = INT16_MAX;
volatile int16_t x370 = INT16_MIN;
volatile int32_t t84 = 2;
static volatile int16_t x376 = -3;
int8_t x381 = -1;
static int16_t x382 = INT16_MAX;
volatile uint32_t x383 = UINT32_MAX;
volatile int64_t x386 = -1LL;
int8_t x387 = -2;
int32_t x388 = -1;
int32_t t88 = 3;
int16_t x390 = INT16_MIN;
int64_t x399 = 129842587779354LL;
volatile int16_t x400 = INT16_MIN;
uint16_t x408 = UINT16_MAX;
static int8_t x409 = INT8_MIN;
static int32_t t93 = 1916;
static volatile int8_t x416 = INT8_MIN;
volatile int16_t x419 = -46;
int32_t t95 = -571162;
volatile int64_t x424 = INT64_MIN;
volatile uint16_t x436 = 1U;
volatile int32_t t99 = -293224;
volatile uint64_t x438 = UINT64_MAX;
static volatile int8_t x442 = INT8_MAX;
static uint8_t x444 = 6U;
static uint64_t x449 = 47553200196261725LLU;
int8_t x452 = -13;
volatile uint8_t x453 = 12U;
uint8_t x456 = UINT8_MAX;
volatile int32_t t104 = -1706004;
int64_t x464 = -1LL;
int16_t x466 = INT16_MAX;
volatile int32_t t109 = 493682335;
static volatile int32_t x480 = INT32_MIN;
int64_t x484 = 11258374LL;
int32_t t111 = 0;
int64_t x488 = -393329122411LL;
uint16_t x492 = 6U;
static uint8_t x497 = 11U;
static uint16_t x498 = 11293U;
volatile int8_t x504 = -1;
static uint16_t x509 = 10413U;
volatile uint8_t x511 = 31U;
volatile int32_t t122 = 23;
uint64_t x529 = 1303LLU;
uint64_t x537 = 6844030236014164LLU;
uint8_t x538 = 1U;
volatile int32_t t125 = -1;
static int32_t x545 = -41603373;
int32_t t127 = -114544;
volatile uint8_t x549 = UINT8_MAX;
int32_t x557 = -1;
int64_t x559 = 1105451895189525310LL;
uint8_t x562 = UINT8_MAX;
int8_t x566 = INT8_MAX;
int32_t x567 = -21343;
static volatile int32_t t134 = -117389;
static int16_t x584 = -91;
static uint8_t x591 = UINT8_MAX;
static uint16_t x593 = 1U;
int16_t x594 = -1;
static int32_t t139 = 6472573;
uint64_t x601 = 43909LLU;
int8_t x602 = -1;
volatile int64_t x607 = 39LL;
int16_t x609 = INT16_MIN;
int32_t x614 = -2095566;
int8_t x615 = INT8_MAX;
volatile int32_t t143 = -11124;
int64_t x628 = -1LL;
uint64_t x631 = UINT64_MAX;
int8_t x651 = INT8_MAX;
volatile int32_t t151 = 112332;
int32_t t153 = -452;
int64_t x662 = 929418940913083LL;
uint32_t x665 = 6U;
volatile int8_t x666 = 29;
int64_t x668 = -233337639LL;
volatile int32_t x671 = INT32_MIN;
static int32_t t156 = -48;
int32_t x673 = INT32_MAX;
uint16_t x675 = 1U;
volatile uint64_t x676 = UINT64_MAX;
int64_t x683 = -1LL;
int32_t x684 = -3284443;
volatile int32_t t161 = -2222;
int32_t x693 = INT32_MIN;
volatile uint8_t x694 = 72U;
volatile int32_t t163 = 31253337;
uint64_t x705 = 1048541LLU;
int32_t x710 = 131300259;
static volatile int32_t x717 = INT32_MIN;
volatile int16_t x721 = -14876;
uint8_t x728 = UINT8_MAX;
static int16_t x731 = INT16_MAX;
uint8_t x733 = 0U;
static uint64_t x734 = UINT64_MAX;
int8_t x742 = -26;
static int32_t x752 = -1;
int16_t x756 = INT16_MAX;
volatile int32_t t178 = 528955;
int64_t x761 = 1246558LL;
static int8_t x763 = INT8_MAX;
static uint32_t x768 = UINT32_MAX;
uint8_t x771 = 0U;
int8_t x773 = -1;
volatile int16_t x776 = 244;
static int16_t x777 = INT16_MIN;
volatile int32_t t183 = -12393;
volatile uint32_t x794 = 224U;
static volatile int8_t x797 = INT8_MIN;
int64_t x798 = 216358LL;
volatile int64_t x809 = INT64_MIN;
volatile int32_t x810 = INT32_MIN;
uint8_t x811 = 21U;
int32_t t191 = 108389;
static uint8_t x813 = 0U;
int8_t x832 = INT8_MAX;
volatile int32_t t195 = 324;
uint8_t x835 = 3U;
uint8_t x837 = 40U;
int64_t x842 = -42819035322636LL;
int8_t x844 = -1;


void f0(void) {
    	static volatile uint64_t x1 = 119678LLU;
	int16_t x2 = -1;
	static int64_t x3 = INT64_MIN;
	int32_t t0 = -59197;

    t0 = ((x1/x2)==(x3/x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int64_t x9 = -43111411423502LL;
	volatile int8_t x11 = -1;
	int8_t x12 = 63;
	int32_t t1 = -56;

    t1 = ((x9/x10)==(x11/x12));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int64_t x13 = 6LL;
	int32_t x14 = 19967;
	static int32_t x15 = 4378219;
	int8_t x16 = INT8_MIN;
	volatile int32_t t2 = -2116;

    t2 = ((x13/x14)==(x15/x16));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x17 = INT8_MIN;
	uint8_t x18 = 1U;
	int16_t x19 = 7901;
	uint32_t x20 = 1051091U;
	int32_t t3 = -33501;

    t3 = ((x17/x18)==(x19/x20));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x21 = INT64_MAX;
	static volatile int32_t x22 = -1;
	int32_t x23 = INT32_MAX;
	int32_t x24 = INT32_MIN;
	int32_t t4 = 721170680;

    t4 = ((x21/x22)==(x23/x24));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x25 = INT32_MIN;
	int8_t x26 = 62;
	uint64_t x27 = UINT64_MAX;
	int16_t x28 = INT16_MIN;
	volatile int32_t t5 = -15723789;

    t5 = ((x25/x26)==(x27/x28));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x29 = INT16_MIN;
	static int64_t x30 = INT64_MIN;
	static uint16_t x31 = 30U;
	int16_t x32 = INT16_MAX;
	volatile int32_t t6 = -3;

    t6 = ((x29/x30)==(x31/x32));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile uint8_t x34 = 19U;
	int32_t x35 = 3923;
	int8_t x36 = INT8_MAX;
	volatile int32_t t7 = -380529;

    t7 = ((x33/x34)==(x35/x36));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x37 = INT8_MAX;
	uint8_t x38 = 90U;
	int16_t x39 = 1;
	static uint32_t x40 = 23234U;
	static volatile int32_t t8 = -2106395;

    t8 = ((x37/x38)==(x39/x40));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x42 = UINT8_MAX;
	int32_t x43 = INT32_MIN;
	static int32_t x44 = INT32_MIN;
	volatile int32_t t9 = 61467;

    t9 = ((x41/x42)==(x43/x44));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x45 = 1;
	volatile uint8_t x47 = UINT8_MAX;
	static int32_t t10 = -617338;

    t10 = ((x45/x46)==(x47/x48));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x49 = -24114;
	int32_t x50 = INT32_MIN;
	uint16_t x51 = UINT16_MAX;
	static int16_t x52 = INT16_MAX;
	static int32_t t11 = 1;

    t11 = ((x49/x50)==(x51/x52));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x53 = 6U;
	int8_t x55 = INT8_MIN;
	volatile int64_t x56 = 213368959149939892LL;
	volatile int32_t t12 = 99;

    t12 = ((x53/x54)==(x55/x56));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x57 = 1037699656929363427LL;
	volatile int8_t x58 = -1;
	static int32_t x59 = -1;
	static int64_t x60 = 536030LL;

    t13 = ((x57/x58)==(x59/x60));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x61 = -4;
	volatile uint32_t x62 = 393868U;
	int32_t x63 = INT32_MIN;
	volatile int64_t x64 = INT64_MIN;
	volatile int32_t t14 = -344724798;

    t14 = ((x61/x62)==(x63/x64));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x65 = 34000263419078LLU;
	volatile int32_t x66 = 409;
	volatile int16_t x67 = 5;
	volatile int64_t x68 = 133LL;
	volatile int32_t t15 = -43694;

    t15 = ((x65/x66)==(x67/x68));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x69 = UINT16_MAX;
	uint32_t x71 = 268U;
	int16_t x72 = -371;
	static volatile int32_t t16 = -377;

    t16 = ((x69/x70)==(x71/x72));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static int16_t x73 = -5;
	static int8_t x74 = INT8_MIN;
	static volatile int32_t x75 = -43;
	static volatile uint64_t x76 = 8184440398998LLU;
	volatile int32_t t17 = -15346899;

    t17 = ((x73/x74)==(x75/x76));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x78 = INT32_MIN;
	int32_t x79 = 3;
	uint32_t x80 = UINT32_MAX;

    t18 = ((x77/x78)==(x79/x80));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x81 = 6;
	int8_t x82 = INT8_MIN;
	int64_t x83 = -1LL;
	static int64_t x84 = -5LL;
	volatile int32_t t19 = 42;

    t19 = ((x81/x82)==(x83/x84));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x86 = -4;
	int64_t x88 = INT64_MIN;
	volatile int32_t t20 = 1;

    t20 = ((x85/x86)==(x87/x88));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x89 = 1;
	volatile int32_t x90 = INT32_MAX;
	int32_t x91 = INT32_MIN;
	int16_t x92 = INT16_MIN;
	volatile int32_t t21 = -1;

    t21 = ((x89/x90)==(x91/x92));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x93 = INT32_MAX;
	int8_t x94 = INT8_MAX;
	int32_t x96 = -1;
	volatile int32_t t22 = -70909931;

    t22 = ((x93/x94)==(x95/x96));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x97 = -20;
	int16_t x99 = -1;
	int8_t x100 = -55;
	volatile int32_t t23 = -2937922;

    t23 = ((x97/x98)==(x99/x100));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x101 = 12U;
	volatile uint64_t x102 = 1823778LLU;
	int64_t x104 = INT64_MAX;
	int32_t t24 = -24;

    t24 = ((x101/x102)==(x103/x104));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x106 = -8231427620662LL;
	uint8_t x107 = 2U;
	static int16_t x108 = 1;
	volatile int32_t t25 = -560600839;

    t25 = ((x105/x106)==(x107/x108));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x109 = 128687142581246770LLU;
	uint64_t x110 = 16518070930111LLU;
	int32_t x111 = -9541889;
	uint32_t x112 = UINT32_MAX;
	volatile int32_t t26 = -4651;

    t26 = ((x109/x110)==(x111/x112));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x113 = 883466480U;
	volatile int16_t x114 = INT16_MIN;
	int64_t x115 = -297577487924LL;
	static int64_t x116 = INT64_MIN;
	volatile int32_t t27 = -1733285;

    t27 = ((x113/x114)==(x115/x116));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x117 = UINT32_MAX;
	uint64_t x118 = 6810214052832791LLU;
	int8_t x120 = -1;
	volatile int32_t t28 = -15063;

    t28 = ((x117/x118)==(x119/x120));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x121 = INT16_MIN;
	volatile int16_t x122 = INT16_MIN;
	int16_t x123 = INT16_MIN;
	volatile int16_t x124 = INT16_MIN;

    t29 = ((x121/x122)==(x123/x124));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x125 = -41;
	int64_t x126 = -1LL;
	static uint32_t x128 = 22777U;
	int32_t t30 = 47898;

    t30 = ((x125/x126)==(x127/x128));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x129 = 120U;
	volatile int16_t x130 = INT16_MAX;
	static int32_t x131 = 5;
	uint64_t x132 = UINT64_MAX;

    t31 = ((x129/x130)==(x131/x132));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x133 = 12549U;
	volatile int64_t x134 = INT64_MAX;
	uint16_t x135 = UINT16_MAX;
	static int32_t t32 = 3376465;

    t32 = ((x133/x134)==(x135/x136));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x137 = -1;
	static int32_t x138 = -6334;
	static int8_t x139 = -3;
	uint64_t x140 = 214LLU;
	volatile int32_t t33 = 491901;

    t33 = ((x137/x138)==(x139/x140));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x142 = INT8_MAX;
	static uint16_t x143 = UINT16_MAX;
	uint64_t x144 = UINT64_MAX;
	volatile int32_t t34 = -51411;

    t34 = ((x141/x142)==(x143/x144));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x145 = -1;
	int16_t x146 = 2806;
	volatile int32_t t35 = 64811;

    t35 = ((x145/x146)==(x147/x148));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x154 = INT32_MAX;
	int32_t x155 = INT32_MIN;
	volatile uint16_t x156 = UINT16_MAX;
	volatile int32_t t36 = 213175;

    t36 = ((x153/x154)==(x155/x156));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x157 = -22;
	static int16_t x158 = -1;
	volatile uint16_t x160 = 126U;
	volatile int32_t t37 = 168428717;

    t37 = ((x157/x158)==(x159/x160));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x165 = -1;
	uint8_t x166 = UINT8_MAX;
	int8_t x167 = INT8_MIN;
	int32_t t38 = -3964239;

    t38 = ((x165/x166)==(x167/x168));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x169 = -1;
	static int16_t x171 = -1;
	volatile int32_t t39 = 2010;

    t39 = ((x169/x170)==(x171/x172));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint32_t x173 = 1881454732U;
	static int64_t x174 = -142520033920LL;
	int64_t x175 = -9054882LL;
	static int8_t x176 = INT8_MIN;
	static int32_t t40 = -23656558;

    t40 = ((x173/x174)==(x175/x176));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint8_t x177 = 20U;
	int16_t x178 = -22;
	volatile int16_t x179 = -1;
	static int16_t x180 = INT16_MAX;
	int32_t t41 = 9188086;

    t41 = ((x177/x178)==(x179/x180));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile uint16_t x181 = UINT16_MAX;
	int64_t x182 = -2858289383LL;
	uint32_t x183 = 253248307U;
	volatile uint64_t x184 = UINT64_MAX;
	static volatile int32_t t42 = -5252054;

    t42 = ((x181/x182)==(x183/x184));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x185 = INT32_MAX;
	uint32_t x186 = UINT32_MAX;
	static uint16_t x187 = UINT16_MAX;
	uint16_t x188 = 13U;
	volatile int32_t t43 = -17;

    t43 = ((x185/x186)==(x187/x188));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x189 = -3688682LL;
	static int32_t t44 = 38823;

    t44 = ((x189/x190)==(x191/x192));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x197 = UINT16_MAX;
	int32_t x198 = -1;
	uint32_t x200 = UINT32_MAX;
	int32_t t45 = -7;

    t45 = ((x197/x198)==(x199/x200));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x202 = INT32_MAX;
	static int32_t x203 = INT32_MIN;
	static int16_t x204 = -18;
	int32_t t46 = 221;

    t46 = ((x201/x202)==(x203/x204));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint32_t x205 = 469976064U;
	int64_t x206 = INT64_MIN;
	static int16_t x207 = -1;
	uint16_t x208 = 203U;
	int32_t t47 = -1802;

    t47 = ((x205/x206)==(x207/x208));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x209 = -1;
	uint8_t x210 = UINT8_MAX;
	uint16_t x211 = 10970U;
	uint32_t x212 = 6880219U;

    t48 = ((x209/x210)==(x211/x212));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static int64_t x213 = -848LL;
	uint8_t x214 = 1U;
	int16_t x215 = INT16_MIN;
	int16_t x216 = 14815;
	int32_t t49 = 170;

    t49 = ((x213/x214)==(x215/x216));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x218 = INT32_MAX;
	static uint16_t x219 = 376U;
	static int32_t x220 = 3758;
	volatile int32_t t50 = -296917120;

    t50 = ((x217/x218)==(x219/x220));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint64_t x221 = 276340538041414763LLU;
	int8_t x222 = 29;
	static volatile uint16_t x223 = 1U;
	static int32_t t51 = -50;

    t51 = ((x221/x222)==(x223/x224));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x225 = INT32_MIN;
	int8_t x228 = 10;

    t52 = ((x225/x226)==(x227/x228));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x229 = 111872695LLU;
	int64_t x231 = INT64_MIN;
	int16_t x232 = INT16_MIN;
	static int32_t t53 = 306;

    t53 = ((x229/x230)==(x231/x232));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x233 = 2020U;
	uint16_t x234 = 48U;
	static int8_t x236 = INT8_MIN;
	volatile int32_t t54 = 1;

    t54 = ((x233/x234)==(x235/x236));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x237 = -1;
	static volatile int64_t x238 = -1LL;
	volatile int16_t x239 = -1;
	int16_t x240 = -6117;

    t55 = ((x237/x238)==(x239/x240));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x243 = 2100873851LL;
	int64_t x244 = -1LL;
	int32_t t56 = 1005;

    t56 = ((x241/x242)==(x243/x244));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x245 = 36745598U;
	static uint8_t x246 = 5U;
	volatile int8_t x247 = INT8_MAX;
	int8_t x248 = INT8_MAX;

    t57 = ((x245/x246)==(x247/x248));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x250 = -159;
	static volatile int32_t t58 = -23;

    t58 = ((x249/x250)==(x251/x252));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static int32_t x253 = -1;
	volatile uint32_t x254 = 4591U;
	static uint8_t x255 = 1U;
	int64_t x256 = -1LL;
	int32_t t59 = -4250386;

    t59 = ((x253/x254)==(x255/x256));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x257 = INT16_MAX;
	int32_t x258 = INT32_MIN;
	int8_t x259 = INT8_MAX;
	int8_t x260 = INT8_MAX;

    t60 = ((x257/x258)==(x259/x260));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x261 = 680975492459190LL;
	int16_t x262 = -1;
	uint64_t x263 = UINT64_MAX;
	volatile int8_t x264 = INT8_MAX;
	volatile int32_t t61 = 0;

    t61 = ((x261/x262)==(x263/x264));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x265 = INT8_MIN;
	int64_t x266 = -121448893632768LL;
	static volatile int32_t x267 = INT32_MAX;
	int64_t x268 = -1LL;
	volatile int32_t t62 = -1;

    t62 = ((x265/x266)==(x267/x268));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x273 = -1;
	int16_t x275 = 0;
	uint16_t x276 = UINT16_MAX;
	int32_t t63 = 397302;

    t63 = ((x273/x274)==(x275/x276));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x278 = -116LL;
	static volatile int8_t x279 = 2;
	uint16_t x280 = 2823U;
	volatile int32_t t64 = -194062;

    t64 = ((x277/x278)==(x279/x280));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x282 = INT32_MIN;
	int8_t x283 = -1;
	volatile int32_t x284 = 2412;
	volatile int32_t t65 = -3;

    t65 = ((x281/x282)==(x283/x284));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x285 = INT16_MAX;
	int64_t x287 = INT64_MIN;
	static volatile uint8_t x288 = 17U;
	int32_t t66 = 727915767;

    t66 = ((x285/x286)==(x287/x288));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x293 = -1LL;
	uint32_t x296 = UINT32_MAX;
	static volatile int32_t t67 = 22001049;

    t67 = ((x293/x294)==(x295/x296));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x302 = INT8_MIN;
	volatile int64_t x303 = 1957633559426LL;
	int8_t x304 = -1;
	int32_t t68 = -790884;

    t68 = ((x301/x302)==(x303/x304));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x305 = INT32_MIN;
	uint16_t x306 = 10013U;
	int32_t x307 = 2;
	int32_t x308 = INT32_MIN;
	static int32_t t69 = 3474;

    t69 = ((x305/x306)==(x307/x308));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint64_t x310 = UINT64_MAX;
	int16_t x312 = INT16_MIN;
	int32_t t70 = 300;

    t70 = ((x309/x310)==(x311/x312));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x313 = INT16_MAX;
	static uint32_t x314 = UINT32_MAX;
	int8_t x316 = INT8_MIN;
	volatile int32_t t71 = 29;

    t71 = ((x313/x314)==(x315/x316));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x317 = 54059252498399LL;
	int8_t x319 = INT8_MAX;
	uint16_t x320 = 30U;
	int32_t t72 = -55;

    t72 = ((x317/x318)==(x319/x320));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x321 = UINT16_MAX;
	int32_t x322 = INT32_MIN;
	static uint64_t x323 = 836LLU;
	static int8_t x324 = INT8_MAX;
	static volatile int32_t t73 = 672;

    t73 = ((x321/x322)==(x323/x324));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x325 = 18;
	volatile uint32_t x326 = 503336U;
	static int16_t x327 = 1;
	uint16_t x328 = 2U;
	volatile int32_t t74 = -2031;

    t74 = ((x325/x326)==(x327/x328));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x329 = 60U;
	uint8_t x330 = 73U;
	uint64_t x332 = 445LLU;
	static volatile int32_t t75 = -46187;

    t75 = ((x329/x330)==(x331/x332));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x337 = INT32_MIN;
	static int32_t x338 = -7;
	uint64_t x340 = 11362038990LLU;
	volatile int32_t t76 = 13;

    t76 = ((x337/x338)==(x339/x340));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x342 = INT16_MIN;
	int8_t x343 = -1;
	int16_t x344 = INT16_MAX;
	int32_t t77 = -29025367;

    t77 = ((x341/x342)==(x343/x344));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x346 = 81LLU;
	volatile int64_t x347 = INT64_MIN;
	static uint16_t x348 = UINT16_MAX;
	int32_t t78 = 6898;

    t78 = ((x345/x346)==(x347/x348));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint32_t x349 = UINT32_MAX;
	int64_t x350 = -824841195393LL;
	int16_t x351 = 6;

    t79 = ((x349/x350)==(x351/x352));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x353 = -1;
	volatile int32_t x354 = INT32_MAX;
	int32_t x355 = INT32_MAX;
	uint32_t x356 = UINT32_MAX;

    t80 = ((x353/x354)==(x355/x356));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x357 = INT64_MIN;
	int8_t x358 = INT8_MIN;
	uint8_t x359 = UINT8_MAX;
	volatile int16_t x360 = INT16_MAX;
	volatile int32_t t81 = -10110119;

    t81 = ((x357/x358)==(x359/x360));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x361 = -11769804062618LL;
	uint64_t x362 = 3183061021561016LLU;
	int32_t x363 = INT32_MAX;
	int8_t x364 = INT8_MIN;
	static int32_t t82 = -3;

    t82 = ((x361/x362)==(x363/x364));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint64_t x365 = 9162121LLU;
	int32_t x367 = INT32_MAX;
	int32_t t83 = -5;

    t83 = ((x365/x366)==(x367/x368));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int64_t x371 = INT64_MIN;
	uint8_t x372 = UINT8_MAX;

    t84 = ((x369/x370)==(x371/x372));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x373 = UINT8_MAX;
	int64_t x374 = INT64_MIN;
	uint64_t x375 = 3663024979031317LLU;
	static int32_t t85 = 480053851;

    t85 = ((x373/x374)==(x375/x376));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x377 = 2529U;
	int8_t x378 = -21;
	int32_t x379 = -240;
	uint32_t x380 = 614U;
	int32_t t86 = -229;

    t86 = ((x377/x378)==(x379/x380));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x384 = INT8_MAX;
	int32_t t87 = -1550;

    t87 = ((x381/x382)==(x383/x384));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x385 = -1;

    t88 = ((x385/x386)==(x387/x388));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x389 = 90LLU;
	static volatile uint16_t x391 = 66U;
	static volatile int64_t x392 = 224739LL;
	int32_t t89 = -114902917;

    t89 = ((x389/x390)==(x391/x392));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x393 = -1;
	int32_t x394 = -1;
	uint64_t x395 = 19427LLU;
	int8_t x396 = -10;
	int32_t t90 = 103884;

    t90 = ((x393/x394)==(x395/x396));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint32_t x397 = 4467233U;
	volatile int32_t x398 = 26714042;
	int32_t t91 = -968273;

    t91 = ((x397/x398)==(x399/x400));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x405 = 0;
	static int16_t x406 = -1;
	int32_t x407 = INT32_MAX;
	volatile int32_t t92 = 1277;

    t92 = ((x405/x406)==(x407/x408));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int8_t x410 = INT8_MAX;
	int64_t x411 = -1LL;
	int64_t x412 = INT64_MIN;

    t93 = ((x409/x410)==(x411/x412));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x413 = UINT32_MAX;
	volatile int64_t x414 = -1LL;
	int8_t x415 = INT8_MAX;
	volatile int32_t t94 = -1;

    t94 = ((x413/x414)==(x415/x416));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x417 = -1LL;
	uint32_t x418 = 160967U;
	volatile uint8_t x420 = 84U;

    t95 = ((x417/x418)==(x419/x420));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x421 = INT16_MIN;
	int8_t x422 = 19;
	int8_t x423 = -1;
	volatile int32_t t96 = 1;

    t96 = ((x421/x422)==(x423/x424));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static int8_t x425 = 49;
	int8_t x426 = INT8_MIN;
	volatile int32_t x427 = -1;
	static int32_t x428 = -1;
	static volatile int32_t t97 = -12199888;

    t97 = ((x425/x426)==(x427/x428));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int16_t x429 = INT16_MAX;
	int32_t x430 = -1180;
	static int8_t x431 = INT8_MAX;
	static volatile int16_t x432 = INT16_MIN;
	int32_t t98 = 869;

    t98 = ((x429/x430)==(x431/x432));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int64_t x433 = -1LL;
	int16_t x434 = INT16_MAX;
	uint16_t x435 = 58U;

    t99 = ((x433/x434)==(x435/x436));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x437 = INT64_MIN;
	static int8_t x439 = INT8_MIN;
	uint16_t x440 = 59U;
	int32_t t100 = 0;

    t100 = ((x437/x438)==(x439/x440));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x441 = INT16_MIN;
	int8_t x443 = INT8_MIN;
	volatile int32_t t101 = 174278;

    t101 = ((x441/x442)==(x443/x444));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x445 = 4U;
	int64_t x446 = -7071594347785LL;
	volatile int64_t x447 = -34858186263838LL;
	int64_t x448 = 8606210954442LL;
	int32_t t102 = -728;

    t102 = ((x445/x446)==(x447/x448));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int16_t x450 = 5;
	int64_t x451 = -166512LL;
	int32_t t103 = -2563018;

    t103 = ((x449/x450)==(x451/x452));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x454 = -3;
	volatile int64_t x455 = 14600836LL;

    t104 = ((x453/x454)==(x455/x456));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x457 = INT8_MIN;
	volatile int32_t x458 = INT32_MAX;
	volatile int32_t x459 = -1;
	int8_t x460 = INT8_MIN;
	int32_t t105 = 49;

    t105 = ((x457/x458)==(x459/x460));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x461 = INT16_MIN;
	static int32_t x462 = -317672701;
	static int8_t x463 = -37;
	volatile int32_t t106 = -7371671;

    t106 = ((x461/x462)==(x463/x464));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x465 = INT16_MIN;
	int16_t x467 = INT16_MAX;
	int8_t x468 = INT8_MAX;
	int32_t t107 = -65119598;

    t107 = ((x465/x466)==(x467/x468));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint8_t x469 = 0U;
	static int16_t x470 = 4530;
	static int32_t x471 = 310088473;
	uint8_t x472 = UINT8_MAX;
	volatile int32_t t108 = -320472677;

    t108 = ((x469/x470)==(x471/x472));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x473 = 3940;
	volatile int64_t x474 = INT64_MIN;
	int16_t x475 = INT16_MIN;
	volatile int8_t x476 = -1;

    t109 = ((x473/x474)==(x475/x476));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x477 = -1;
	uint32_t x478 = UINT32_MAX;
	static volatile int32_t x479 = 2076763;
	int32_t t110 = -37975322;

    t110 = ((x477/x478)==(x479/x480));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x481 = INT16_MIN;
	static int8_t x482 = INT8_MAX;
	uint8_t x483 = 2U;

    t111 = ((x481/x482)==(x483/x484));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x485 = INT8_MAX;
	int64_t x486 = INT64_MIN;
	int32_t x487 = INT32_MIN;
	int32_t t112 = 452;

    t112 = ((x485/x486)==(x487/x488));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x489 = UINT32_MAX;
	int64_t x490 = INT64_MAX;
	volatile uint64_t x491 = UINT64_MAX;
	volatile int32_t t113 = 257392;

    t113 = ((x489/x490)==(x491/x492));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x493 = INT64_MIN;
	int64_t x494 = INT64_MIN;
	int8_t x495 = INT8_MIN;
	uint64_t x496 = 334703LLU;
	volatile int32_t t114 = -173311;

    t114 = ((x493/x494)==(x495/x496));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x499 = INT64_MAX;
	int16_t x500 = -49;
	volatile int32_t t115 = -250731670;

    t115 = ((x497/x498)==(x499/x500));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x501 = UINT64_MAX;
	int8_t x502 = INT8_MAX;
	int8_t x503 = -1;
	int32_t t116 = -22500;

    t116 = ((x501/x502)==(x503/x504));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int32_t x505 = 101604398;
	static int8_t x506 = INT8_MAX;
	int8_t x507 = INT8_MIN;
	int64_t x508 = INT64_MIN;
	int32_t t117 = -3425;

    t117 = ((x505/x506)==(x507/x508));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x510 = 19U;
	volatile int32_t x512 = 2693;
	int32_t t118 = -309;

    t118 = ((x509/x510)==(x511/x512));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x513 = 1U;
	static int32_t x514 = 37;
	int32_t x515 = INT32_MIN;
	int16_t x516 = 2;
	int32_t t119 = -1737862;

    t119 = ((x513/x514)==(x515/x516));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x517 = -2;
	uint16_t x518 = UINT16_MAX;
	volatile uint16_t x519 = UINT16_MAX;
	volatile int16_t x520 = -1;
	int32_t t120 = -209946703;

    t120 = ((x517/x518)==(x519/x520));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x521 = -1;
	int8_t x522 = -1;
	static int32_t x523 = INT32_MIN;
	int64_t x524 = INT64_MIN;
	volatile int32_t t121 = 130549;

    t121 = ((x521/x522)==(x523/x524));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x525 = -169298796;
	uint64_t x526 = 1022616102LLU;
	uint32_t x527 = 434297U;
	volatile uint32_t x528 = 15752311U;

    t122 = ((x525/x526)==(x527/x528));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint16_t x530 = 1U;
	static int64_t x531 = -1LL;
	int16_t x532 = INT16_MAX;
	volatile int32_t t123 = -492148;

    t123 = ((x529/x530)==(x531/x532));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int64_t x533 = 326LL;
	int16_t x534 = -1;
	uint8_t x535 = 3U;
	int64_t x536 = INT64_MAX;
	volatile int32_t t124 = -221;

    t124 = ((x533/x534)==(x535/x536));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x539 = INT64_MIN;
	static volatile int32_t x540 = INT32_MIN;

    t125 = ((x537/x538)==(x539/x540));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x541 = -156100420;
	int8_t x542 = INT8_MIN;
	static volatile int64_t x543 = -723585030328015LL;
	int16_t x544 = -1261;
	volatile int32_t t126 = -1;

    t126 = ((x541/x542)==(x543/x544));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x546 = 3438;
	volatile uint16_t x547 = UINT16_MAX;
	uint8_t x548 = 1U;

    t127 = ((x545/x546)==(x547/x548));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x550 = 817U;
	int16_t x551 = 1;
	volatile uint16_t x552 = 13368U;
	volatile int32_t t128 = -54377272;

    t128 = ((x549/x550)==(x551/x552));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int8_t x558 = INT8_MIN;
	volatile int64_t x560 = INT64_MAX;
	static volatile int32_t t129 = 0;

    t129 = ((x557/x558)==(x559/x560));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x561 = 34255875467567LLU;
	uint64_t x563 = 1LLU;
	static int8_t x564 = INT8_MIN;
	static volatile int32_t t130 = 8;

    t130 = ((x561/x562)==(x563/x564));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x565 = 13692330941797LLU;
	static uint8_t x568 = 3U;
	volatile int32_t t131 = 3;

    t131 = ((x565/x566)==(x567/x568));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x569 = INT16_MIN;
	int8_t x570 = -1;
	int64_t x571 = INT64_MAX;
	uint32_t x572 = 36582970U;
	volatile int32_t t132 = 4583809;

    t132 = ((x569/x570)==(x571/x572));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static int32_t x573 = -1;
	int64_t x574 = -2039272917LL;
	volatile int32_t x575 = 29379;
	static volatile int16_t x576 = -1;
	static volatile int32_t t133 = -1;

    t133 = ((x573/x574)==(x575/x576));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x577 = -1;
	uint64_t x578 = 1577618451LLU;
	int64_t x579 = INT64_MIN;
	volatile int16_t x580 = INT16_MAX;

    t134 = ((x577/x578)==(x579/x580));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x581 = UINT8_MAX;
	int16_t x582 = INT16_MAX;
	int16_t x583 = INT16_MIN;
	int32_t t135 = 1086;

    t135 = ((x581/x582)==(x583/x584));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint16_t x585 = UINT16_MAX;
	volatile uint32_t x586 = UINT32_MAX;
	int8_t x587 = 1;
	volatile int32_t x588 = INT32_MAX;
	volatile int32_t t136 = 125;

    t136 = ((x585/x586)==(x587/x588));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x589 = UINT32_MAX;
	int64_t x590 = INT64_MAX;
	int64_t x592 = -1LL;
	volatile int32_t t137 = -13;

    t137 = ((x589/x590)==(x591/x592));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x595 = 36920;
	int32_t x596 = INT32_MAX;
	int32_t t138 = 25;

    t138 = ((x593/x594)==(x595/x596));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint64_t x597 = UINT64_MAX;
	uint32_t x598 = 3132272U;
	volatile uint8_t x599 = UINT8_MAX;
	uint32_t x600 = UINT32_MAX;

    t139 = ((x597/x598)==(x599/x600));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint8_t x603 = 1U;
	uint32_t x604 = UINT32_MAX;
	volatile int32_t t140 = -710533352;

    t140 = ((x601/x602)==(x603/x604));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x605 = INT8_MAX;
	static uint64_t x606 = UINT64_MAX;
	static int64_t x608 = INT64_MIN;
	int32_t t141 = 3058520;

    t141 = ((x605/x606)==(x607/x608));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x610 = UINT8_MAX;
	uint32_t x611 = 1596U;
	int32_t x612 = INT32_MIN;
	static volatile int32_t t142 = 5;

    t142 = ((x609/x610)==(x611/x612));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x613 = 53LLU;
	int32_t x616 = INT32_MIN;

    t143 = ((x613/x614)==(x615/x616));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static int8_t x617 = -1;
	int16_t x618 = INT16_MIN;
	uint64_t x619 = 6710447LLU;
	int32_t x620 = 16792;
	int32_t t144 = -2950;

    t144 = ((x617/x618)==(x619/x620));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static int8_t x621 = INT8_MIN;
	volatile uint64_t x622 = 4789594879595979LLU;
	volatile int8_t x623 = INT8_MIN;
	static int32_t x624 = -2;
	volatile int32_t t145 = -2068;

    t145 = ((x621/x622)==(x623/x624));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x625 = INT64_MIN;
	int64_t x626 = 2206916715LL;
	volatile int32_t x627 = INT32_MAX;
	static volatile int32_t t146 = 14;

    t146 = ((x625/x626)==(x627/x628));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x629 = INT32_MIN;
	uint32_t x630 = 5511U;
	uint8_t x632 = UINT8_MAX;
	int32_t t147 = -95;

    t147 = ((x629/x630)==(x631/x632));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x633 = -585;
	static int8_t x634 = 1;
	uint8_t x635 = UINT8_MAX;
	int32_t x636 = -9190274;
	int32_t t148 = 2289499;

    t148 = ((x633/x634)==(x635/x636));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x637 = 8410;
	int64_t x638 = -1LL;
	static int64_t x639 = INT64_MAX;
	static uint64_t x640 = UINT64_MAX;
	int32_t t149 = 660886;

    t149 = ((x637/x638)==(x639/x640));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile uint64_t x641 = UINT64_MAX;
	int8_t x642 = INT8_MAX;
	volatile int8_t x643 = INT8_MAX;
	int16_t x644 = INT16_MIN;
	int32_t t150 = -2;

    t150 = ((x641/x642)==(x643/x644));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint16_t x649 = UINT16_MAX;
	volatile uint16_t x650 = UINT16_MAX;
	volatile int32_t x652 = INT32_MAX;

    t151 = ((x649/x650)==(x651/x652));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x653 = -1LL;
	uint32_t x654 = UINT32_MAX;
	static int16_t x655 = INT16_MIN;
	int8_t x656 = INT8_MIN;
	int32_t t152 = 45859454;

    t152 = ((x653/x654)==(x655/x656));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint8_t x657 = 11U;
	uint64_t x658 = 5599983303LLU;
	int32_t x659 = INT32_MIN;
	volatile int64_t x660 = INT64_MIN;

    t153 = ((x657/x658)==(x659/x660));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x661 = INT32_MIN;
	int8_t x663 = INT8_MIN;
	volatile int16_t x664 = INT16_MAX;
	int32_t t154 = -61928;

    t154 = ((x661/x662)==(x663/x664));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x667 = INT16_MIN;
	int32_t t155 = -13202436;

    t155 = ((x665/x666)==(x667/x668));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile int8_t x669 = -1;
	uint16_t x670 = 47U;
	static uint8_t x672 = 68U;

    t156 = ((x669/x670)==(x671/x672));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x674 = UINT32_MAX;
	volatile int32_t t157 = -146151;

    t157 = ((x673/x674)==(x675/x676));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x677 = 8294722033184922059LLU;
	uint8_t x678 = 3U;
	int8_t x679 = -3;
	uint32_t x680 = 584U;
	volatile int32_t t158 = -55;

    t158 = ((x677/x678)==(x679/x680));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x681 = INT16_MIN;
	int16_t x682 = INT16_MAX;
	volatile int32_t t159 = 104508;

    t159 = ((x681/x682)==(x683/x684));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x685 = 21U;
	int32_t x686 = INT32_MIN;
	int64_t x687 = INT64_MIN;
	int16_t x688 = INT16_MIN;
	int32_t t160 = -11;

    t160 = ((x685/x686)==(x687/x688));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x689 = 15U;
	static volatile int64_t x690 = INT64_MIN;
	static int8_t x691 = INT8_MAX;
	volatile int32_t x692 = 78183985;

    t161 = ((x689/x690)==(x691/x692));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x695 = -22488043155076LL;
	int8_t x696 = -2;
	static volatile int32_t t162 = -9373;

    t162 = ((x693/x694)==(x695/x696));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x697 = INT64_MAX;
	int64_t x698 = INT64_MAX;
	static int8_t x699 = INT8_MIN;
	volatile int16_t x700 = 4;

    t163 = ((x697/x698)==(x699/x700));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x701 = 281082677354530515LL;
	int16_t x702 = -6602;
	int8_t x703 = INT8_MIN;
	int16_t x704 = 13;
	static volatile int32_t t164 = 2;

    t164 = ((x701/x702)==(x703/x704));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x706 = INT32_MAX;
	int8_t x707 = -1;
	uint32_t x708 = 500963U;
	static volatile int32_t t165 = -934293739;

    t165 = ((x705/x706)==(x707/x708));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x709 = 1696695503953148LL;
	volatile uint16_t x711 = UINT16_MAX;
	volatile int32_t x712 = INT32_MIN;
	int32_t t166 = -435160872;

    t166 = ((x709/x710)==(x711/x712));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint8_t x713 = UINT8_MAX;
	uint8_t x714 = UINT8_MAX;
	int8_t x715 = 45;
	static int64_t x716 = INT64_MAX;
	int32_t t167 = 936;

    t167 = ((x713/x714)==(x715/x716));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x718 = INT32_MIN;
	static int16_t x719 = -1;
	int8_t x720 = INT8_MAX;
	int32_t t168 = -469;

    t168 = ((x717/x718)==(x719/x720));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x722 = 7;
	volatile int32_t x723 = INT32_MIN;
	int64_t x724 = -114386721402820LL;
	int32_t t169 = 1;

    t169 = ((x721/x722)==(x723/x724));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static int32_t x725 = -15470;
	static volatile int32_t x726 = INT32_MAX;
	uint64_t x727 = UINT64_MAX;
	int32_t t170 = -6;

    t170 = ((x725/x726)==(x727/x728));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int32_t x729 = -1;
	int16_t x730 = -7710;
	uint32_t x732 = UINT32_MAX;
	volatile int32_t t171 = 5822996;

    t171 = ((x729/x730)==(x731/x732));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x735 = 1U;
	int8_t x736 = -1;
	int32_t t172 = 51488972;

    t172 = ((x733/x734)==(x735/x736));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x737 = -1LL;
	int64_t x738 = INT64_MAX;
	int64_t x739 = -6066359048164LL;
	int64_t x740 = INT64_MAX;
	int32_t t173 = 1;

    t173 = ((x737/x738)==(x739/x740));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static int16_t x741 = INT16_MAX;
	int32_t x743 = -1;
	uint16_t x744 = 300U;
	volatile int32_t t174 = 1;

    t174 = ((x741/x742)==(x743/x744));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int32_t x745 = -1;
	static uint32_t x746 = 17698U;
	int32_t x747 = INT32_MAX;
	int32_t x748 = 4083;
	int32_t t175 = 62355;

    t175 = ((x745/x746)==(x747/x748));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x749 = -1;
	static int64_t x750 = 2409065159800438LL;
	static uint64_t x751 = 863878803LLU;
	static volatile int32_t t176 = 14745;

    t176 = ((x749/x750)==(x751/x752));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x753 = INT64_MIN;
	static int8_t x754 = 2;
	uint64_t x755 = 14314844773LLU;
	volatile int32_t t177 = -1075;

    t177 = ((x753/x754)==(x755/x756));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x757 = -3287219;
	static int8_t x758 = INT8_MAX;
	volatile int16_t x759 = -1;
	static int16_t x760 = -1;

    t178 = ((x757/x758)==(x759/x760));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x762 = -66680202LL;
	volatile int8_t x764 = -1;
	volatile int32_t t179 = 13095;

    t179 = ((x761/x762)==(x763/x764));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x765 = INT16_MAX;
	volatile uint8_t x766 = UINT8_MAX;
	int8_t x767 = INT8_MIN;
	static volatile int32_t t180 = -78607;

    t180 = ((x765/x766)==(x767/x768));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x769 = UINT16_MAX;
	static int32_t x770 = INT32_MIN;
	int32_t x772 = 920346;
	volatile int32_t t181 = 394441865;

    t181 = ((x769/x770)==(x771/x772));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x774 = -1LL;
	uint8_t x775 = UINT8_MAX;
	int32_t t182 = -422399157;

    t182 = ((x773/x774)==(x775/x776));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile int16_t x778 = INT16_MAX;
	static int32_t x779 = INT32_MIN;
	volatile uint16_t x780 = 24U;

    t183 = ((x777/x778)==(x779/x780));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int64_t x781 = 1LL;
	int32_t x782 = -171;
	uint32_t x783 = UINT32_MAX;
	static volatile int8_t x784 = -1;
	volatile int32_t t184 = -423638;

    t184 = ((x781/x782)==(x783/x784));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x785 = -1;
	int64_t x786 = INT64_MAX;
	uint32_t x787 = UINT32_MAX;
	volatile uint8_t x788 = UINT8_MAX;
	static volatile int32_t t185 = 555154;

    t185 = ((x785/x786)==(x787/x788));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x789 = INT16_MAX;
	volatile int64_t x790 = INT64_MAX;
	volatile uint8_t x791 = 0U;
	volatile int64_t x792 = INT64_MIN;
	volatile int32_t t186 = 6338;

    t186 = ((x789/x790)==(x791/x792));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint8_t x793 = UINT8_MAX;
	static volatile int16_t x795 = INT16_MAX;
	uint32_t x796 = UINT32_MAX;
	static volatile int32_t t187 = -1155974;

    t187 = ((x793/x794)==(x795/x796));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x799 = -1;
	uint64_t x800 = UINT64_MAX;
	int32_t t188 = 588632226;

    t188 = ((x797/x798)==(x799/x800));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x801 = INT64_MAX;
	static volatile uint64_t x802 = 2177652971559LLU;
	volatile int32_t x803 = -1362;
	int8_t x804 = -49;
	volatile int32_t t189 = 10073539;

    t189 = ((x801/x802)==(x803/x804));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x805 = 292U;
	int64_t x806 = 871LL;
	int16_t x807 = INT16_MIN;
	volatile int32_t x808 = INT32_MAX;
	volatile int32_t t190 = -7175364;

    t190 = ((x805/x806)==(x807/x808));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int32_t x812 = INT32_MAX;

    t191 = ((x809/x810)==(x811/x812));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x814 = INT64_MIN;
	volatile int8_t x815 = INT8_MIN;
	static int32_t x816 = INT32_MAX;
	volatile int32_t t192 = -776585;

    t192 = ((x813/x814)==(x815/x816));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x817 = INT32_MAX;
	uint32_t x818 = UINT32_MAX;
	uint64_t x819 = 27054322094LLU;
	int64_t x820 = INT64_MIN;
	volatile int32_t t193 = 33562886;

    t193 = ((x817/x818)==(x819/x820));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x821 = -113;
	static uint64_t x822 = 321LLU;
	static uint8_t x823 = UINT8_MAX;
	static int8_t x824 = INT8_MAX;
	volatile int32_t t194 = 11;

    t194 = ((x821/x822)==(x823/x824));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static int8_t x829 = INT8_MIN;
	int16_t x830 = 4472;
	int8_t x831 = INT8_MIN;

    t195 = ((x829/x830)==(x831/x832));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int64_t x833 = INT64_MIN;
	uint64_t x834 = 8697811929LLU;
	uint64_t x836 = 11611632LLU;
	int32_t t196 = -99896;

    t196 = ((x833/x834)==(x835/x836));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x838 = 5U;
	uint32_t x839 = 1620338U;
	uint16_t x840 = 11603U;
	volatile int32_t t197 = 21720041;

    t197 = ((x837/x838)==(x839/x840));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint8_t x841 = 0U;
	int8_t x843 = INT8_MAX;
	volatile int32_t t198 = 29;

    t198 = ((x841/x842)==(x843/x844));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x845 = INT8_MIN;
	int16_t x846 = INT16_MIN;
	int8_t x847 = INT8_MIN;
	int64_t x848 = 80954739766327606LL;
	volatile int32_t t199 = 6559134;

    t199 = ((x845/x846)==(x847/x848));

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

