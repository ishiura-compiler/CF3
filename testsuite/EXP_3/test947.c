
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

static int64_t x6 = INT64_MIN;
static uint32_t x8 = 5692970U;
int8_t x10 = INT8_MIN;
volatile uint16_t x20 = UINT16_MAX;
volatile int64_t x26 = -22789761LL;
int16_t x27 = -13850;
static volatile int32_t t6 = -70277;
volatile int64_t x33 = -1LL;
int32_t t10 = 7531048;
int8_t x48 = INT8_MIN;
uint32_t x59 = UINT32_MAX;
static volatile int8_t x71 = -26;
static int64_t x79 = 193687LL;
volatile int32_t t18 = 18799196;
static int8_t x81 = 1;
volatile int32_t t19 = -7;
volatile int8_t x87 = 0;
uint32_t x88 = 63374927U;
int16_t x90 = INT16_MIN;
int32_t t25 = 702;
volatile int32_t x109 = INT32_MIN;
volatile int16_t x111 = INT16_MAX;
int8_t x112 = INT8_MIN;
int32_t x114 = -64;
volatile int32_t t28 = -4926506;
uint8_t x122 = 20U;
volatile int32_t t30 = 1;
uint8_t x136 = UINT8_MAX;
volatile int32_t t33 = -7082;
static volatile int32_t t35 = -1761480;
volatile int32_t t36 = -101174;
int32_t x153 = -1392;
int32_t x154 = INT32_MAX;
int8_t x155 = INT8_MAX;
static volatile int32_t t37 = 29;
int8_t x166 = -1;
static int16_t x170 = INT16_MIN;
int32_t x180 = 729;
volatile int32_t t43 = -117;
static volatile uint16_t x191 = UINT16_MAX;
int32_t t45 = -107941;
uint32_t x193 = 414U;
int8_t x200 = -1;
volatile int16_t x208 = INT16_MIN;
volatile int32_t t50 = 57706326;
static uint8_t x218 = 1U;
static uint64_t x220 = 65950260195LLU;
int32_t t52 = 5404917;
int32_t t54 = 51656;
int32_t x236 = -1192;
static uint64_t x242 = 126145267262LLU;
int8_t x244 = -8;
uint64_t x246 = UINT64_MAX;
int8_t x249 = INT8_MIN;
static int16_t x252 = 2841;
int16_t x255 = INT16_MAX;
static volatile uint8_t x261 = UINT8_MAX;
volatile int32_t t63 = 14237;
int32_t x268 = -1;
int64_t x269 = 1867792LL;
static int8_t x270 = INT8_MIN;
static uint32_t x274 = 1602590U;
int16_t x282 = INT16_MIN;
int32_t x292 = INT32_MIN;
int16_t x298 = INT16_MIN;
int32_t x299 = 0;
int8_t x302 = INT8_MAX;
uint32_t x303 = UINT32_MAX;
uint16_t x304 = UINT16_MAX;
volatile int64_t x307 = 124252LL;
int32_t t74 = 22033197;
int8_t x311 = 3;
int16_t x324 = -1;
int32_t t77 = 1506876;
uint32_t x327 = 3U;
volatile int32_t t78 = 0;
uint8_t x332 = UINT8_MAX;
int32_t t80 = -1448;
uint64_t x340 = UINT64_MAX;
int64_t x341 = INT64_MAX;
int16_t x343 = INT16_MIN;
int32_t t82 = -249;
int64_t x347 = -1LL;
int8_t x349 = 1;
int32_t x354 = INT32_MIN;
static int32_t t85 = -701232391;
volatile uint16_t x357 = 3U;
int32_t t87 = 328280;
volatile int32_t x373 = -1;
int16_t x378 = -8113;
int32_t t94 = -3;
static int32_t t95 = -261125894;
static volatile int32_t x400 = -1;
int8_t x412 = -1;
int64_t x415 = -1LL;
volatile int32_t t100 = 3416188;
volatile uint16_t x420 = 6787U;
volatile int32_t t101 = 984001296;
volatile int32_t t104 = -296306721;
uint32_t x436 = UINT32_MAX;
uint32_t x438 = 69531478U;
uint8_t x439 = UINT8_MAX;
volatile uint32_t x444 = 2015072U;
int64_t x447 = -1717768009LL;
int8_t x449 = -1;
int32_t x450 = INT32_MIN;
uint64_t x452 = UINT64_MAX;
volatile int64_t x455 = INT64_MIN;
uint64_t x463 = UINT64_MAX;
int32_t x464 = 56796208;
int32_t x468 = 254;
int64_t x469 = INT64_MIN;
volatile int8_t x474 = -1;
static uint64_t x475 = UINT64_MAX;
static uint8_t x479 = 15U;
uint32_t x482 = 5010452U;
static volatile uint32_t x484 = 19126U;
uint32_t x490 = UINT32_MAX;
volatile int64_t x497 = INT64_MIN;
uint16_t x498 = 76U;
int64_t x499 = 41046LL;
int8_t x505 = 10;
volatile int32_t x516 = 879526;
int32_t t125 = -12160659;
int64_t x520 = -1LL;
uint8_t x527 = UINT8_MAX;
static int8_t x534 = INT8_MIN;
int32_t t130 = -3313;
volatile int64_t x545 = -1LL;
static volatile int32_t t134 = -188629;
int32_t t135 = -42;
static int16_t x560 = 3384;
int64_t x569 = INT64_MIN;
int16_t x577 = INT16_MAX;
volatile int16_t x578 = -1;
uint32_t x591 = 201046U;
volatile int32_t t143 = -16229126;
int64_t x601 = -189LL;
static int32_t x611 = -1;
uint32_t x613 = 47095U;
int8_t x617 = 5;
static volatile uint16_t x618 = UINT16_MAX;
int32_t t150 = -1;
int16_t x634 = -1;
int32_t t155 = -2155;
uint16_t x641 = 12U;
volatile int32_t x642 = INT32_MIN;
int16_t x643 = INT16_MAX;
uint16_t x646 = 15213U;
int16_t x654 = -1;
int32_t t159 = -2711975;
uint32_t x660 = UINT32_MAX;
int32_t x667 = -385;
int64_t x675 = -1LL;
int64_t x677 = -1LL;
volatile int8_t x691 = -2;
int32_t x701 = INT32_MAX;
volatile uint16_t x712 = 16U;
int16_t x717 = 335;
uint32_t x719 = 80U;
volatile int32_t t175 = -1083709;
static int16_t x724 = -1;
uint64_t x726 = 50LLU;
int8_t x730 = INT8_MIN;
static int32_t t179 = 163155541;
int32_t x738 = INT32_MIN;
volatile uint8_t x742 = UINT8_MAX;
int16_t x743 = 1;
int16_t x751 = -1;
int64_t x755 = INT64_MIN;
int32_t t185 = -41555;
int8_t x763 = 0;
static int32_t x764 = -1;
volatile int8_t x770 = INT8_MIN;
static int8_t x772 = -1;
int64_t x775 = -2450115691569333LL;
volatile int16_t x778 = INT16_MIN;
volatile int32_t t190 = 3390;
int8_t x783 = -1;
int32_t x786 = -7259712;
static int16_t x787 = INT16_MAX;
volatile int32_t t192 = -486156;
int32_t x794 = INT32_MAX;
int64_t x796 = 4044710451659397LL;
uint64_t x797 = 286539585785LLU;
uint16_t x800 = UINT16_MAX;
static int32_t t196 = 2;
volatile uint16_t x809 = UINT16_MAX;
int8_t x824 = INT8_MAX;
int32_t t199 = 64356;


void f0(void) {
    	int16_t x1 = -10941;
	int32_t x2 = -1;
	int32_t x3 = INT32_MIN;
	uint8_t x4 = UINT8_MAX;
	int32_t t0 = 265746;

    t0 = ((x1&x2)>(x3%x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MIN;
	int32_t x7 = -18435254;
	int32_t t1 = 210278306;

    t1 = ((x5&x6)>(x7%x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x9 = INT64_MAX;
	volatile int64_t x11 = -165399224701854989LL;
	int8_t x12 = INT8_MAX;
	static volatile int32_t t2 = 0;

    t2 = ((x9&x10)>(x11%x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MIN;
	uint32_t x14 = UINT32_MAX;
	static int16_t x15 = INT16_MIN;
	volatile uint8_t x16 = 4U;
	volatile int32_t t3 = -13290383;

    t3 = ((x13&x14)>(x15%x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static int64_t x17 = INT64_MIN;
	static uint32_t x18 = 41978786U;
	int32_t x19 = INT32_MIN;
	static int32_t t4 = 1078795;

    t4 = ((x17&x18)>(x19%x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static int64_t x21 = INT64_MAX;
	int8_t x22 = INT8_MAX;
	static int8_t x23 = INT8_MIN;
	static uint32_t x24 = UINT32_MAX;
	int32_t t5 = 1;

    t5 = ((x21&x22)>(x23%x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x25 = -1;
	static uint16_t x28 = 364U;

    t6 = ((x25&x26)>(x27%x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = INT64_MIN;
	int16_t x30 = -161;
	static int32_t x31 = -1;
	int8_t x32 = 2;
	int32_t t7 = -209734147;

    t7 = ((x29&x30)>(x31%x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x34 = INT8_MIN;
	int64_t x35 = INT64_MIN;
	volatile int8_t x36 = INT8_MAX;
	int32_t t8 = 1;

    t8 = ((x33&x34)>(x35%x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int16_t x37 = 10;
	static volatile int32_t x38 = 928925;
	static uint16_t x39 = UINT16_MAX;
	static uint16_t x40 = 19659U;
	int32_t t9 = 0;

    t9 = ((x37&x38)>(x39%x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x41 = 898LL;
	int64_t x42 = INT64_MIN;
	volatile uint8_t x43 = 125U;
	static int8_t x44 = 63;

    t10 = ((x41&x42)>(x43%x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x45 = INT16_MAX;
	volatile uint8_t x46 = 125U;
	int8_t x47 = INT8_MIN;
	int32_t t11 = -248219090;

    t11 = ((x45&x46)>(x47%x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = -5996LL;
	int64_t x50 = INT64_MIN;
	static int8_t x51 = INT8_MAX;
	int16_t x52 = INT16_MAX;
	static volatile int32_t t12 = -1;

    t12 = ((x49&x50)>(x51%x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint32_t x53 = UINT32_MAX;
	volatile int64_t x54 = -28505319LL;
	uint8_t x55 = 29U;
	int16_t x56 = INT16_MIN;
	volatile int32_t t13 = -385158;

    t13 = ((x53&x54)>(x55%x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = 0;
	static uint64_t x58 = 5022322LLU;
	int8_t x60 = INT8_MAX;
	volatile int32_t t14 = -5149;

    t14 = ((x57&x58)>(x59%x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x65 = INT16_MIN;
	int32_t x66 = INT32_MIN;
	uint8_t x67 = 0U;
	volatile uint32_t x68 = 16U;
	static volatile int32_t t15 = -286530708;

    t15 = ((x65&x66)>(x67%x68));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x69 = INT16_MAX;
	static volatile int32_t x70 = -514;
	static int64_t x72 = INT64_MAX;
	volatile int32_t t16 = 131177609;

    t16 = ((x69&x70)>(x71%x72));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x73 = INT8_MIN;
	int16_t x74 = INT16_MAX;
	uint64_t x75 = 56319383678721532LLU;
	uint8_t x76 = 46U;
	int32_t t17 = -1640;

    t17 = ((x73&x74)>(x75%x76));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x77 = INT64_MIN;
	int64_t x78 = INT64_MAX;
	uint8_t x80 = 3U;

    t18 = ((x77&x78)>(x79%x80));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x82 = 138U;
	static uint32_t x83 = UINT32_MAX;
	int8_t x84 = INT8_MIN;

    t19 = ((x81&x82)>(x83%x84));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x85 = -1;
	volatile uint8_t x86 = 12U;
	volatile int32_t t20 = 0;

    t20 = ((x85&x86)>(x87%x88));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x89 = -1LL;
	int32_t x91 = INT32_MIN;
	volatile int64_t x92 = -243605981LL;
	static int32_t t21 = -40444;

    t21 = ((x89&x90)>(x91%x92));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint64_t x93 = UINT64_MAX;
	int64_t x94 = INT64_MIN;
	uint64_t x95 = 769865174555LLU;
	volatile int8_t x96 = INT8_MIN;
	volatile int32_t t22 = 61284714;

    t22 = ((x93&x94)>(x95%x96));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x97 = INT16_MIN;
	uint32_t x98 = UINT32_MAX;
	int16_t x99 = 2880;
	static int8_t x100 = -1;
	int32_t t23 = -1;

    t23 = ((x97&x98)>(x99%x100));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x101 = -5039670846LL;
	static int32_t x102 = -115665;
	volatile int32_t x103 = INT32_MIN;
	int64_t x104 = INT64_MAX;
	volatile int32_t t24 = 0;

    t24 = ((x101&x102)>(x103%x104));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x105 = INT64_MIN;
	int16_t x106 = 0;
	static volatile int8_t x107 = INT8_MAX;
	volatile int8_t x108 = INT8_MIN;

    t25 = ((x105&x106)>(x107%x108));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x110 = 1U;
	volatile int32_t t26 = 74796142;

    t26 = ((x109&x110)>(x111%x112));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x113 = UINT32_MAX;
	uint64_t x115 = 35046452727013LLU;
	uint64_t x116 = 88190958953792072LLU;
	volatile int32_t t27 = -177825306;

    t27 = ((x113&x114)>(x115%x116));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x117 = -1;
	static int16_t x118 = INT16_MIN;
	int32_t x119 = -529859943;
	int16_t x120 = -1;

    t28 = ((x117&x118)>(x119%x120));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint8_t x121 = UINT8_MAX;
	int16_t x123 = INT16_MAX;
	uint64_t x124 = 16498376LLU;
	volatile int32_t t29 = -25;

    t29 = ((x121&x122)>(x123%x124));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile uint16_t x125 = 33U;
	uint8_t x126 = 25U;
	uint16_t x127 = UINT16_MAX;
	volatile int64_t x128 = INT64_MIN;

    t30 = ((x125&x126)>(x127%x128));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x129 = INT8_MIN;
	uint32_t x130 = 88599372U;
	volatile uint32_t x131 = 1892U;
	volatile uint64_t x132 = 108186659LLU;
	volatile int32_t t31 = -672324652;

    t31 = ((x129&x130)>(x131%x132));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x133 = INT32_MIN;
	int32_t x134 = INT32_MAX;
	volatile uint32_t x135 = 69U;
	int32_t t32 = 7633;

    t32 = ((x133&x134)>(x135%x136));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x137 = UINT8_MAX;
	uint32_t x138 = UINT32_MAX;
	int16_t x139 = 54;
	int16_t x140 = -1;

    t33 = ((x137&x138)>(x139%x140));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x141 = UINT16_MAX;
	static uint64_t x142 = UINT64_MAX;
	volatile int32_t x143 = INT32_MIN;
	uint16_t x144 = UINT16_MAX;
	volatile int32_t t34 = -136494659;

    t34 = ((x141&x142)>(x143%x144));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x145 = 43LL;
	int64_t x146 = INT64_MIN;
	int64_t x147 = -1LL;
	uint64_t x148 = UINT64_MAX;

    t35 = ((x145&x146)>(x147%x148));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x149 = 1U;
	static volatile int16_t x150 = 1;
	uint8_t x151 = UINT8_MAX;
	uint32_t x152 = UINT32_MAX;

    t36 = ((x149&x150)>(x151%x152));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x156 = INT8_MIN;

    t37 = ((x153&x154)>(x155%x156));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x161 = INT32_MAX;
	static int8_t x162 = INT8_MAX;
	int16_t x163 = INT16_MIN;
	static uint32_t x164 = 24562875U;
	volatile int32_t t38 = 25;

    t38 = ((x161&x162)>(x163%x164));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x165 = 2267;
	uint32_t x167 = 380807644U;
	int16_t x168 = 56;
	static volatile int32_t t39 = 105;

    t39 = ((x165&x166)>(x167%x168));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x169 = -1;
	int64_t x171 = 1434LL;
	uint64_t x172 = 521672001275LLU;
	int32_t t40 = 25578886;

    t40 = ((x169&x170)>(x171%x172));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x173 = 0U;
	uint64_t x174 = 250921575898686444LLU;
	uint16_t x175 = 45U;
	volatile int32_t x176 = INT32_MIN;
	volatile int32_t t41 = 15477783;

    t41 = ((x173&x174)>(x175%x176));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x177 = INT16_MIN;
	uint8_t x178 = UINT8_MAX;
	uint8_t x179 = 1U;
	int32_t t42 = 10010;

    t42 = ((x177&x178)>(x179%x180));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x181 = INT64_MIN;
	static uint64_t x182 = 37224167481380LLU;
	volatile uint8_t x183 = UINT8_MAX;
	volatile uint16_t x184 = 28U;

    t43 = ((x181&x182)>(x183%x184));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x185 = -24;
	int8_t x186 = INT8_MIN;
	uint8_t x187 = UINT8_MAX;
	static volatile int32_t x188 = 367;
	volatile int32_t t44 = -10;

    t44 = ((x185&x186)>(x187%x188));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x189 = INT16_MAX;
	volatile uint8_t x190 = 4U;
	int64_t x192 = -901759LL;

    t45 = ((x189&x190)>(x191%x192));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x194 = INT8_MIN;
	static uint32_t x195 = 198063U;
	uint64_t x196 = 774LLU;
	static volatile int32_t t46 = 241;

    t46 = ((x193&x194)>(x195%x196));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x197 = 281U;
	uint16_t x198 = 14231U;
	static int64_t x199 = -1LL;
	int32_t t47 = 1;

    t47 = ((x197&x198)>(x199%x200));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x201 = 8026505190031LL;
	static uint64_t x202 = 2583183868257LLU;
	int8_t x203 = INT8_MIN;
	int16_t x204 = INT16_MIN;
	int32_t t48 = 136266858;

    t48 = ((x201&x202)>(x203%x204));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x205 = INT32_MIN;
	int8_t x206 = INT8_MIN;
	uint8_t x207 = 0U;
	int32_t t49 = 18475518;

    t49 = ((x205&x206)>(x207%x208));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x209 = UINT64_MAX;
	static int8_t x210 = INT8_MAX;
	static volatile int8_t x211 = INT8_MIN;
	int32_t x212 = 52940187;

    t50 = ((x209&x210)>(x211%x212));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int64_t x213 = INT64_MIN;
	uint16_t x214 = 169U;
	static int32_t x215 = INT32_MIN;
	int32_t x216 = INT32_MIN;
	volatile int32_t t51 = 51;

    t51 = ((x213&x214)>(x215%x216));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x217 = -1;
	int64_t x219 = INT64_MAX;

    t52 = ((x217&x218)>(x219%x220));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint64_t x221 = 8209709275029402LLU;
	volatile int32_t x222 = -1;
	volatile uint8_t x223 = 0U;
	int64_t x224 = -2065LL;
	static int32_t t53 = -371021;

    t53 = ((x221&x222)>(x223%x224));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x225 = 3U;
	int64_t x226 = INT64_MIN;
	volatile uint32_t x227 = UINT32_MAX;
	volatile int64_t x228 = 750447LL;

    t54 = ((x225&x226)>(x227%x228));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x229 = 5128;
	static volatile uint64_t x230 = 290885494611726LLU;
	uint8_t x231 = 16U;
	static uint8_t x232 = 127U;
	int32_t t55 = 351;

    t55 = ((x229&x230)>(x231%x232));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x233 = INT32_MIN;
	int16_t x234 = -11;
	int32_t x235 = INT32_MIN;
	int32_t t56 = 2;

    t56 = ((x233&x234)>(x235%x236));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile uint16_t x237 = 7U;
	uint32_t x238 = UINT32_MAX;
	volatile int64_t x239 = -2341040429235171124LL;
	int8_t x240 = INT8_MIN;
	volatile int32_t t57 = -25361911;

    t57 = ((x237&x238)>(x239%x240));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x241 = -6;
	int32_t x243 = INT32_MIN;
	int32_t t58 = 843674468;

    t58 = ((x241&x242)>(x243%x244));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x245 = INT32_MIN;
	static uint64_t x247 = 29353LLU;
	volatile int32_t x248 = INT32_MIN;
	static int32_t t59 = -682;

    t59 = ((x245&x246)>(x247%x248));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x250 = 1325U;
	volatile uint64_t x251 = 116693218799596LLU;
	volatile int32_t t60 = -2246108;

    t60 = ((x249&x250)>(x251%x252));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x253 = INT64_MIN;
	static int64_t x254 = INT64_MIN;
	uint32_t x256 = UINT32_MAX;
	volatile int32_t t61 = 105;

    t61 = ((x253&x254)>(x255%x256));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x257 = INT32_MIN;
	int64_t x258 = INT64_MIN;
	uint64_t x259 = 22559597373528145LLU;
	int8_t x260 = -6;
	volatile int32_t t62 = -1977;

    t62 = ((x257&x258)>(x259%x260));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x262 = 14;
	uint8_t x263 = 50U;
	int8_t x264 = INT8_MAX;

    t63 = ((x261&x262)>(x263%x264));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x265 = INT16_MAX;
	int32_t x266 = -4;
	uint32_t x267 = UINT32_MAX;
	int32_t t64 = 74426235;

    t64 = ((x265&x266)>(x267%x268));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x271 = INT16_MAX;
	volatile uint16_t x272 = 21U;
	volatile int32_t t65 = 23;

    t65 = ((x269&x270)>(x271%x272));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile int8_t x273 = 0;
	volatile int8_t x275 = 3;
	static volatile int8_t x276 = 1;
	int32_t t66 = 4;

    t66 = ((x273&x274)>(x275%x276));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint8_t x277 = UINT8_MAX;
	uint8_t x278 = 10U;
	int64_t x279 = -228826641LL;
	int8_t x280 = -1;
	int32_t t67 = -14697;

    t67 = ((x277&x278)>(x279%x280));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x281 = 88404852U;
	volatile uint16_t x283 = 7U;
	static int16_t x284 = INT16_MIN;
	int32_t t68 = -2975902;

    t68 = ((x281&x282)>(x283%x284));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x285 = UINT8_MAX;
	uint64_t x286 = UINT64_MAX;
	static volatile int16_t x287 = 1048;
	int32_t x288 = 1791;
	int32_t t69 = -2381;

    t69 = ((x285&x286)>(x287%x288));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static int16_t x289 = 596;
	int32_t x290 = INT32_MAX;
	volatile int16_t x291 = INT16_MIN;
	int32_t t70 = 18442626;

    t70 = ((x289&x290)>(x291%x292));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x293 = INT8_MAX;
	static int32_t x294 = INT32_MIN;
	volatile uint16_t x295 = UINT16_MAX;
	int16_t x296 = INT16_MAX;
	volatile int32_t t71 = -1;

    t71 = ((x293&x294)>(x295%x296));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint64_t x297 = 4037859932148960LLU;
	static int16_t x300 = INT16_MIN;
	static volatile int32_t t72 = -997332598;

    t72 = ((x297&x298)>(x299%x300));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x301 = -1;
	volatile int32_t t73 = -872132055;

    t73 = ((x301&x302)>(x303%x304));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint64_t x305 = UINT64_MAX;
	volatile int32_t x306 = 206201;
	int64_t x308 = -1LL;

    t74 = ((x305&x306)>(x307%x308));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x309 = 6;
	uint32_t x310 = UINT32_MAX;
	int16_t x312 = -1;
	volatile int32_t t75 = 31881156;

    t75 = ((x309&x310)>(x311%x312));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x313 = 4789U;
	volatile uint32_t x314 = UINT32_MAX;
	static uint64_t x315 = 119219341008554LLU;
	int8_t x316 = INT8_MIN;
	int32_t t76 = 366;

    t76 = ((x313&x314)>(x315%x316));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x321 = 42198517;
	int8_t x322 = -1;
	int16_t x323 = -1;

    t77 = ((x321&x322)>(x323%x324));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x325 = INT32_MIN;
	static volatile uint16_t x326 = 52U;
	uint64_t x328 = 523808023LLU;

    t78 = ((x325&x326)>(x327%x328));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x329 = -712783LL;
	int16_t x330 = INT16_MAX;
	static int16_t x331 = INT16_MIN;
	int32_t t79 = -56015;

    t79 = ((x329&x330)>(x331%x332));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile int8_t x333 = 2;
	volatile uint64_t x334 = 402LLU;
	static volatile int32_t x335 = INT32_MIN;
	volatile int8_t x336 = -1;

    t80 = ((x333&x334)>(x335%x336));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint64_t x337 = 2110111686LLU;
	uint8_t x338 = 0U;
	int8_t x339 = -4;
	volatile int32_t t81 = 0;

    t81 = ((x337&x338)>(x339%x340));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x342 = 272422887262388LL;
	static volatile int64_t x344 = -1LL;

    t82 = ((x341&x342)>(x343%x344));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x345 = -3204670LL;
	int32_t x346 = -1;
	int8_t x348 = -1;
	volatile int32_t t83 = -5017;

    t83 = ((x345&x346)>(x347%x348));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x350 = 3;
	int8_t x351 = 5;
	volatile int64_t x352 = -1LL;
	static int32_t t84 = 6799635;

    t84 = ((x349&x350)>(x351%x352));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x353 = -1;
	static uint32_t x355 = UINT32_MAX;
	static volatile int8_t x356 = INT8_MAX;

    t85 = ((x353&x354)>(x355%x356));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x358 = 7997U;
	volatile int16_t x359 = INT16_MIN;
	uint64_t x360 = UINT64_MAX;
	int32_t t86 = -1082963;

    t86 = ((x357&x358)>(x359%x360));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x361 = INT64_MIN;
	volatile uint64_t x362 = 84958254048LLU;
	static volatile int64_t x363 = INT64_MIN;
	int8_t x364 = INT8_MIN;

    t87 = ((x361&x362)>(x363%x364));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x365 = INT32_MIN;
	volatile int16_t x366 = 303;
	int8_t x367 = INT8_MAX;
	int8_t x368 = -1;
	volatile int32_t t88 = -767148;

    t88 = ((x365&x366)>(x367%x368));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static int8_t x369 = -10;
	uint8_t x370 = 122U;
	uint32_t x371 = UINT32_MAX;
	int8_t x372 = 2;
	int32_t t89 = 223149;

    t89 = ((x369&x370)>(x371%x372));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x374 = -1;
	int64_t x375 = -1189543LL;
	int32_t x376 = -1;
	volatile int32_t t90 = 562593;

    t90 = ((x373&x374)>(x375%x376));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x377 = INT64_MIN;
	uint32_t x379 = UINT32_MAX;
	int8_t x380 = -1;
	int32_t t91 = -2487;

    t91 = ((x377&x378)>(x379%x380));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x381 = 349445;
	static int32_t x382 = 1096;
	uint8_t x383 = UINT8_MAX;
	volatile uint32_t x384 = 195109U;
	int32_t t92 = -1744350;

    t92 = ((x381&x382)>(x383%x384));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x385 = 0U;
	uint64_t x386 = UINT64_MAX;
	volatile int64_t x387 = INT64_MAX;
	int32_t x388 = -1;
	int32_t t93 = -97113807;

    t93 = ((x385&x386)>(x387%x388));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x389 = INT16_MIN;
	int32_t x390 = INT32_MAX;
	int32_t x391 = -1;
	static int16_t x392 = 104;

    t94 = ((x389&x390)>(x391%x392));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static int8_t x393 = INT8_MIN;
	static volatile int32_t x394 = INT32_MIN;
	static uint32_t x395 = 765U;
	volatile uint8_t x396 = UINT8_MAX;

    t95 = ((x393&x394)>(x395%x396));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x397 = -1;
	uint64_t x398 = 947LLU;
	static volatile int64_t x399 = 1LL;
	volatile int32_t t96 = 2600;

    t96 = ((x397&x398)>(x399%x400));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x401 = 301U;
	uint64_t x402 = 8LLU;
	int16_t x403 = -1;
	int8_t x404 = -1;
	static volatile int32_t t97 = -3;

    t97 = ((x401&x402)>(x403%x404));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x405 = INT32_MIN;
	int32_t x406 = INT32_MIN;
	uint8_t x407 = UINT8_MAX;
	static int8_t x408 = 1;
	volatile int32_t t98 = -929779;

    t98 = ((x405&x406)>(x407%x408));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x409 = 3;
	static int16_t x410 = INT16_MAX;
	static uint32_t x411 = UINT32_MAX;
	static int32_t t99 = -31103881;

    t99 = ((x409&x410)>(x411%x412));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x413 = -217563;
	int16_t x414 = INT16_MIN;
	static volatile uint8_t x416 = UINT8_MAX;

    t100 = ((x413&x414)>(x415%x416));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static int8_t x417 = -28;
	int16_t x418 = -1;
	uint16_t x419 = 124U;

    t101 = ((x417&x418)>(x419%x420));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x421 = INT32_MAX;
	int16_t x422 = -3;
	static uint64_t x423 = UINT64_MAX;
	volatile int8_t x424 = INT8_MAX;
	static volatile int32_t t102 = -2953964;

    t102 = ((x421&x422)>(x423%x424));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x425 = -53490701446LL;
	int16_t x426 = INT16_MIN;
	int32_t x427 = 84687;
	int16_t x428 = INT16_MIN;
	volatile int32_t t103 = 14;

    t103 = ((x425&x426)>(x427%x428));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x429 = 879U;
	uint64_t x430 = 1609657782035963276LLU;
	static uint16_t x431 = UINT16_MAX;
	int64_t x432 = -1LL;

    t104 = ((x429&x430)>(x431%x432));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x433 = 461853176U;
	int8_t x434 = INT8_MIN;
	int64_t x435 = INT64_MAX;
	static int32_t t105 = -16447887;

    t105 = ((x433&x434)>(x435%x436));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x437 = -1;
	int32_t x440 = INT32_MIN;
	int32_t t106 = -688670589;

    t106 = ((x437&x438)>(x439%x440));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x441 = INT64_MIN;
	static int8_t x442 = -1;
	int16_t x443 = INT16_MAX;
	int32_t t107 = 252373704;

    t107 = ((x441&x442)>(x443%x444));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x445 = UINT64_MAX;
	volatile uint8_t x446 = UINT8_MAX;
	int64_t x448 = INT64_MAX;
	int32_t t108 = 10870409;

    t108 = ((x445&x446)>(x447%x448));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x451 = INT8_MAX;
	static int32_t t109 = -320743;

    t109 = ((x449&x450)>(x451%x452));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x453 = 30299LLU;
	int64_t x454 = -33222137LL;
	static int64_t x456 = -1LL;
	volatile int32_t t110 = 166161;

    t110 = ((x453&x454)>(x455%x456));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x457 = 926531;
	uint32_t x458 = 49431505U;
	int32_t x459 = INT32_MIN;
	int16_t x460 = INT16_MIN;
	static volatile int32_t t111 = -82667;

    t111 = ((x457&x458)>(x459%x460));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static int8_t x461 = INT8_MIN;
	volatile int64_t x462 = INT64_MIN;
	int32_t t112 = -36763186;

    t112 = ((x461&x462)>(x463%x464));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x465 = 1U;
	volatile uint8_t x466 = UINT8_MAX;
	static volatile int16_t x467 = 1;
	int32_t t113 = 34913545;

    t113 = ((x465&x466)>(x467%x468));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint16_t x470 = 5U;
	uint8_t x471 = 56U;
	int64_t x472 = INT64_MIN;
	int32_t t114 = 11;

    t114 = ((x469&x470)>(x471%x472));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x473 = 0U;
	static int8_t x476 = INT8_MAX;
	int32_t t115 = -7;

    t115 = ((x473&x474)>(x475%x476));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x477 = 419U;
	volatile int32_t x478 = INT32_MIN;
	int64_t x480 = 66LL;
	static volatile int32_t t116 = -493;

    t116 = ((x477&x478)>(x479%x480));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint16_t x481 = 9U;
	int64_t x483 = -1LL;
	volatile int32_t t117 = 402;

    t117 = ((x481&x482)>(x483%x484));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int16_t x485 = -1;
	volatile uint8_t x486 = 4U;
	volatile uint32_t x487 = UINT32_MAX;
	int64_t x488 = -1LL;
	volatile int32_t t118 = 125810512;

    t118 = ((x485&x486)>(x487%x488));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x489 = UINT32_MAX;
	static int16_t x491 = -1;
	uint16_t x492 = UINT16_MAX;
	volatile int32_t t119 = 59;

    t119 = ((x489&x490)>(x491%x492));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x493 = INT64_MIN;
	volatile int16_t x494 = -1;
	int16_t x495 = -101;
	int64_t x496 = INT64_MIN;
	int32_t t120 = 1;

    t120 = ((x493&x494)>(x495%x496));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x500 = INT32_MAX;
	int32_t t121 = -6372;

    t121 = ((x497&x498)>(x499%x500));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint8_t x501 = 2U;
	uint16_t x502 = UINT16_MAX;
	uint64_t x503 = 27624571925368LLU;
	uint64_t x504 = UINT64_MAX;
	static int32_t t122 = 34834068;

    t122 = ((x501&x502)>(x503%x504));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x506 = UINT8_MAX;
	uint16_t x507 = 172U;
	static int16_t x508 = -1;
	volatile int32_t t123 = 0;

    t123 = ((x505&x506)>(x507%x508));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x509 = -1;
	int8_t x510 = 1;
	int64_t x511 = 119447651LL;
	static int32_t x512 = INT32_MIN;
	static int32_t t124 = -1;

    t124 = ((x509&x510)>(x511%x512));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int8_t x513 = INT8_MAX;
	int8_t x514 = INT8_MIN;
	uint64_t x515 = UINT64_MAX;

    t125 = ((x513&x514)>(x515%x516));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x517 = UINT8_MAX;
	int64_t x518 = INT64_MIN;
	uint32_t x519 = UINT32_MAX;
	int32_t t126 = -4474;

    t126 = ((x517&x518)>(x519%x520));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x521 = -1;
	int64_t x522 = -149LL;
	int64_t x523 = INT64_MAX;
	volatile int16_t x524 = 6;
	volatile int32_t t127 = -39;

    t127 = ((x521&x522)>(x523%x524));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x525 = UINT16_MAX;
	uint16_t x526 = UINT16_MAX;
	static uint64_t x528 = UINT64_MAX;
	int32_t t128 = -776329;

    t128 = ((x525&x526)>(x527%x528));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x529 = -30123674LL;
	uint32_t x530 = 50504U;
	int64_t x531 = 355324435401LL;
	int64_t x532 = INT64_MIN;
	volatile int32_t t129 = 0;

    t129 = ((x529&x530)>(x531%x532));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static int64_t x533 = 30LL;
	static volatile uint64_t x535 = UINT64_MAX;
	static int8_t x536 = -3;

    t130 = ((x533&x534)>(x535%x536));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint8_t x537 = 28U;
	int8_t x538 = 2;
	int64_t x539 = 2178992LL;
	volatile uint64_t x540 = 29246LLU;
	int32_t t131 = -15;

    t131 = ((x537&x538)>(x539%x540));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint16_t x541 = UINT16_MAX;
	int8_t x542 = 1;
	static int16_t x543 = INT16_MAX;
	int32_t x544 = 11;
	int32_t t132 = 127;

    t132 = ((x541&x542)>(x543%x544));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint32_t x546 = UINT32_MAX;
	uint16_t x547 = 26695U;
	int32_t x548 = -1;
	int32_t t133 = -187;

    t133 = ((x545&x546)>(x547%x548));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x549 = -1;
	int32_t x550 = INT32_MAX;
	int16_t x551 = INT16_MIN;
	uint32_t x552 = 497683994U;

    t134 = ((x549&x550)>(x551%x552));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x553 = -1;
	int8_t x554 = INT8_MIN;
	uint32_t x555 = 528905980U;
	volatile uint16_t x556 = 284U;

    t135 = ((x553&x554)>(x555%x556));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x557 = -15;
	int64_t x558 = INT64_MAX;
	uint32_t x559 = UINT32_MAX;
	int32_t t136 = 11715204;

    t136 = ((x557&x558)>(x559%x560));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x561 = 4;
	static int64_t x562 = -1LL;
	static int8_t x563 = INT8_MIN;
	uint8_t x564 = UINT8_MAX;
	int32_t t137 = 13716;

    t137 = ((x561&x562)>(x563%x564));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x565 = 0;
	int16_t x566 = INT16_MIN;
	int16_t x567 = INT16_MIN;
	uint32_t x568 = UINT32_MAX;
	volatile int32_t t138 = -234976664;

    t138 = ((x565&x566)>(x567%x568));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint16_t x570 = 4U;
	int32_t x571 = INT32_MAX;
	int16_t x572 = INT16_MIN;
	volatile int32_t t139 = 6;

    t139 = ((x569&x570)>(x571%x572));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x573 = 493880;
	int16_t x574 = INT16_MIN;
	static volatile int64_t x575 = INT64_MAX;
	static int32_t x576 = 399016419;
	int32_t t140 = -12267151;

    t140 = ((x573&x574)>(x575%x576));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x579 = -582045050;
	uint8_t x580 = UINT8_MAX;
	volatile int32_t t141 = -359;

    t141 = ((x577&x578)>(x579%x580));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint32_t x585 = 265609976U;
	uint16_t x586 = 1U;
	int8_t x587 = -59;
	uint16_t x588 = UINT16_MAX;
	int32_t t142 = 4;

    t142 = ((x585&x586)>(x587%x588));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x589 = INT32_MIN;
	volatile int8_t x590 = -23;
	uint32_t x592 = 74U;

    t143 = ((x589&x590)>(x591%x592));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static int8_t x593 = INT8_MAX;
	volatile int8_t x594 = -11;
	uint32_t x595 = 15496U;
	int64_t x596 = 8739LL;
	volatile int32_t t144 = 7;

    t144 = ((x593&x594)>(x595%x596));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x597 = INT64_MIN;
	int64_t x598 = INT64_MIN;
	volatile int16_t x599 = -2182;
	uint64_t x600 = UINT64_MAX;
	volatile int32_t t145 = 2775930;

    t145 = ((x597&x598)>(x599%x600));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x602 = 17;
	static int64_t x603 = 17509789959LL;
	int64_t x604 = 8972330280342143LL;
	volatile int32_t t146 = 0;

    t146 = ((x601&x602)>(x603%x604));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x605 = INT64_MAX;
	uint16_t x606 = UINT16_MAX;
	static int64_t x607 = INT64_MAX;
	uint16_t x608 = 101U;
	int32_t t147 = 1218150;

    t147 = ((x605&x606)>(x607%x608));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static int32_t x609 = -63218674;
	uint64_t x610 = 1193886847352908LLU;
	volatile int32_t x612 = -15;
	int32_t t148 = -11;

    t148 = ((x609&x610)>(x611%x612));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x614 = INT64_MIN;
	int8_t x615 = -1;
	int16_t x616 = INT16_MIN;
	volatile int32_t t149 = -20;

    t149 = ((x613&x614)>(x615%x616));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x619 = 11U;
	int32_t x620 = INT32_MIN;

    t150 = ((x617&x618)>(x619%x620));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x621 = INT16_MIN;
	int64_t x622 = INT64_MIN;
	int16_t x623 = -1;
	int64_t x624 = -4217864416641003LL;
	volatile int32_t t151 = -15029029;

    t151 = ((x621&x622)>(x623%x624));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x625 = UINT64_MAX;
	int32_t x626 = -1;
	volatile uint16_t x627 = UINT16_MAX;
	static int16_t x628 = 1;
	static int32_t t152 = 1268;

    t152 = ((x625&x626)>(x627%x628));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x629 = UINT32_MAX;
	uint64_t x630 = 50587632LLU;
	int16_t x631 = INT16_MIN;
	int32_t x632 = INT32_MIN;
	static int32_t t153 = 3865884;

    t153 = ((x629&x630)>(x631%x632));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int8_t x633 = 41;
	int16_t x635 = INT16_MAX;
	static int32_t x636 = -1;
	static int32_t t154 = 45;

    t154 = ((x633&x634)>(x635%x636));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int8_t x637 = INT8_MIN;
	int64_t x638 = -115234782126369026LL;
	int64_t x639 = -226LL;
	static volatile int16_t x640 = INT16_MIN;

    t155 = ((x637&x638)>(x639%x640));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x644 = INT64_MIN;
	int32_t t156 = 5;

    t156 = ((x641&x642)>(x643%x644));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x645 = -1;
	volatile uint64_t x647 = UINT64_MAX;
	int32_t x648 = INT32_MIN;
	volatile int32_t t157 = -188328781;

    t157 = ((x645&x646)>(x647%x648));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint64_t x649 = UINT64_MAX;
	int64_t x650 = -1LL;
	volatile uint16_t x651 = UINT16_MAX;
	static int64_t x652 = INT64_MIN;
	int32_t t158 = 1;

    t158 = ((x649&x650)>(x651%x652));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x653 = 4U;
	int8_t x655 = INT8_MAX;
	int64_t x656 = INT64_MAX;

    t159 = ((x653&x654)>(x655%x656));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x657 = -1118;
	int32_t x658 = INT32_MIN;
	int16_t x659 = -15;
	volatile int32_t t160 = 1035119862;

    t160 = ((x657&x658)>(x659%x660));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x661 = INT8_MAX;
	static volatile int16_t x662 = INT16_MAX;
	int32_t x663 = INT32_MAX;
	uint64_t x664 = 1897642033971132299LLU;
	volatile int32_t t161 = -171;

    t161 = ((x661&x662)>(x663%x664));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x665 = 30;
	int32_t x666 = INT32_MIN;
	int16_t x668 = -2385;
	int32_t t162 = -490344;

    t162 = ((x665&x666)>(x667%x668));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint64_t x669 = 1010LLU;
	uint64_t x670 = 35210203260LLU;
	int64_t x671 = -1LL;
	volatile int16_t x672 = -82;
	int32_t t163 = 95995940;

    t163 = ((x669&x670)>(x671%x672));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x673 = INT16_MAX;
	int16_t x674 = -38;
	volatile int16_t x676 = -1;
	static int32_t t164 = -71;

    t164 = ((x673&x674)>(x675%x676));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x678 = 16;
	int16_t x679 = 7800;
	int32_t x680 = -1;
	int32_t t165 = -26844;

    t165 = ((x677&x678)>(x679%x680));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int8_t x681 = INT8_MAX;
	static int64_t x682 = 25LL;
	int64_t x683 = 1LL;
	static int16_t x684 = INT16_MAX;
	volatile int32_t t166 = -395189;

    t166 = ((x681&x682)>(x683%x684));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x685 = -1;
	static volatile int8_t x686 = INT8_MAX;
	int32_t x687 = INT32_MAX;
	int8_t x688 = INT8_MIN;
	static volatile int32_t t167 = -1028166770;

    t167 = ((x685&x686)>(x687%x688));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x689 = -142;
	int8_t x690 = -1;
	uint32_t x692 = 3U;
	int32_t t168 = 305619;

    t168 = ((x689&x690)>(x691%x692));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static int16_t x693 = -7840;
	static uint8_t x694 = 13U;
	int16_t x695 = -1;
	volatile uint64_t x696 = 899LLU;
	int32_t t169 = -22471368;

    t169 = ((x693&x694)>(x695%x696));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int64_t x697 = INT64_MIN;
	static int16_t x698 = INT16_MIN;
	int8_t x699 = 2;
	volatile uint64_t x700 = 138722151827685LLU;
	volatile int32_t t170 = -15751;

    t170 = ((x697&x698)>(x699%x700));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int16_t x702 = INT16_MIN;
	static int32_t x703 = -406;
	volatile uint32_t x704 = 1832016534U;
	static int32_t t171 = 855427989;

    t171 = ((x701&x702)>(x703%x704));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static int32_t x705 = INT32_MAX;
	volatile int64_t x706 = -10835175916LL;
	int32_t x707 = 3590;
	int64_t x708 = 3865259621386LL;
	int32_t t172 = 136;

    t172 = ((x705&x706)>(x707%x708));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x709 = INT64_MIN;
	int8_t x710 = -18;
	uint16_t x711 = 2U;
	volatile int32_t t173 = -1;

    t173 = ((x709&x710)>(x711%x712));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x713 = -109657352;
	volatile uint32_t x714 = 1274052182U;
	int32_t x715 = 499;
	int32_t x716 = INT32_MIN;
	volatile int32_t t174 = 0;

    t174 = ((x713&x714)>(x715%x716));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static int64_t x718 = INT64_MIN;
	int16_t x720 = -1;

    t175 = ((x717&x718)>(x719%x720));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x721 = 783U;
	static int8_t x722 = INT8_MAX;
	volatile uint64_t x723 = UINT64_MAX;
	static volatile int32_t t176 = -1;

    t176 = ((x721&x722)>(x723%x724));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x725 = -1;
	int64_t x727 = INT64_MIN;
	uint32_t x728 = 15U;
	int32_t t177 = 191635569;

    t177 = ((x725&x726)>(x727%x728));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x729 = -1;
	volatile int64_t x731 = INT64_MIN;
	int8_t x732 = INT8_MAX;
	int32_t t178 = 26941557;

    t178 = ((x729&x730)>(x731%x732));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x733 = -3;
	int64_t x734 = -1LL;
	int16_t x735 = INT16_MAX;
	static volatile int32_t x736 = INT32_MIN;

    t179 = ((x733&x734)>(x735%x736));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint32_t x737 = UINT32_MAX;
	static uint8_t x739 = 14U;
	int64_t x740 = -1LL;
	int32_t t180 = -123;

    t180 = ((x737&x738)>(x739%x740));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x741 = INT8_MAX;
	int8_t x744 = -1;
	int32_t t181 = -1760;

    t181 = ((x741&x742)>(x743%x744));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x745 = 11342415193LL;
	uint8_t x746 = 17U;
	uint32_t x747 = 88U;
	uint64_t x748 = 9948169755LLU;
	int32_t t182 = -1808;

    t182 = ((x745&x746)>(x747%x748));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x749 = 4445635821LL;
	uint64_t x750 = 5548544019063845396LLU;
	volatile int64_t x752 = 116250358744LL;
	static int32_t t183 = -1029466700;

    t183 = ((x749&x750)>(x751%x752));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x753 = 127812804868744LL;
	volatile int16_t x754 = INT16_MIN;
	int8_t x756 = INT8_MIN;
	int32_t t184 = -47267;

    t184 = ((x753&x754)>(x755%x756));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x757 = INT64_MIN;
	int32_t x758 = INT32_MIN;
	uint16_t x759 = UINT16_MAX;
	volatile int16_t x760 = -3290;

    t185 = ((x757&x758)>(x759%x760));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static int16_t x761 = -5;
	int64_t x762 = INT64_MIN;
	int32_t t186 = 30;

    t186 = ((x761&x762)>(x763%x764));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x765 = -1;
	int8_t x766 = INT8_MAX;
	volatile int8_t x767 = INT8_MIN;
	uint8_t x768 = 1U;
	volatile int32_t t187 = -3;

    t187 = ((x765&x766)>(x767%x768));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x769 = INT16_MIN;
	uint16_t x771 = 1001U;
	volatile int32_t t188 = -100990;

    t188 = ((x769&x770)>(x771%x772));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x773 = -1;
	int8_t x774 = INT8_MIN;
	int8_t x776 = INT8_MAX;
	int32_t t189 = 99641;

    t189 = ((x773&x774)>(x775%x776));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x777 = 168023;
	static uint64_t x779 = 3601160019806460LLU;
	int64_t x780 = 414183271564785LL;

    t190 = ((x777&x778)>(x779%x780));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x781 = INT32_MIN;
	volatile uint16_t x782 = UINT16_MAX;
	volatile int16_t x784 = -15;
	volatile int32_t t191 = -3;

    t191 = ((x781&x782)>(x783%x784));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x785 = INT16_MAX;
	int32_t x788 = INT32_MIN;

    t192 = ((x785&x786)>(x787%x788));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x789 = INT64_MIN;
	int8_t x790 = -58;
	int32_t x791 = -327532082;
	static uint32_t x792 = 4953U;
	static volatile int32_t t193 = 21;

    t193 = ((x789&x790)>(x791%x792));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x793 = -9;
	int64_t x795 = -1LL;
	static int32_t t194 = 0;

    t194 = ((x793&x794)>(x795%x796));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int8_t x798 = INT8_MAX;
	int32_t x799 = INT32_MAX;
	int32_t t195 = 4;

    t195 = ((x797&x798)>(x799%x800));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x801 = INT32_MIN;
	uint16_t x802 = 1120U;
	int8_t x803 = 5;
	int8_t x804 = INT8_MIN;

    t196 = ((x801&x802)>(x803%x804));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int64_t x810 = -1816LL;
	static int64_t x811 = 1100037516694779LL;
	volatile int16_t x812 = -67;
	volatile int32_t t197 = -6893334;

    t197 = ((x809&x810)>(x811%x812));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x817 = INT64_MIN;
	uint64_t x818 = UINT64_MAX;
	uint32_t x819 = 2U;
	int32_t x820 = INT32_MAX;
	static int32_t t198 = 66778609;

    t198 = ((x817&x818)>(x819%x820));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int8_t x821 = 0;
	uint32_t x822 = 9U;
	uint64_t x823 = 506283993845LLU;

    t199 = ((x821&x822)>(x823%x824));

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

