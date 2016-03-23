
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

uint8_t x1 = 3U;
int8_t x4 = INT8_MIN;
volatile uint8_t x8 = 3U;
int32_t t1 = -495245629;
volatile int16_t x9 = INT16_MAX;
uint8_t x25 = 0U;
int8_t x26 = -1;
int8_t x32 = INT8_MAX;
volatile int32_t t7 = -26;
int32_t x40 = -1;
static int32_t t8 = 29243;
static volatile uint8_t x55 = UINT8_MAX;
static int32_t t11 = -157;
static int16_t x65 = -25;
uint8_t x76 = UINT8_MAX;
uint64_t x106 = UINT64_MAX;
static uint16_t x108 = 1U;
int32_t t17 = 5202256;
int32_t x118 = INT32_MIN;
int32_t t20 = -56378;
uint32_t x122 = 31031U;
uint8_t x134 = 5U;
volatile int32_t t24 = -1663139;
int32_t x163 = -1;
int64_t x164 = INT64_MIN;
int32_t t28 = 195628;
static volatile int16_t x165 = 14396;
int8_t x180 = 1;
volatile int32_t t31 = 16571;
int64_t x183 = -1LL;
int32_t t32 = -2;
static int8_t x186 = -3;
int8_t x190 = -1;
uint32_t x195 = UINT32_MAX;
int32_t t35 = -3;
int64_t x206 = -1LL;
static int64_t x214 = -54355924620LL;
uint64_t x217 = 2893917797LLU;
static int8_t x229 = INT8_MIN;
uint64_t x231 = UINT64_MAX;
uint16_t x233 = UINT16_MAX;
uint16_t x248 = 568U;
int64_t x258 = -1LL;
int16_t x266 = -1854;
int8_t x274 = 0;
static int32_t x279 = -1;
volatile int32_t t51 = 579678878;
int8_t x287 = -1;
volatile int32_t t54 = -173;
static uint16_t x294 = 327U;
volatile int32_t t55 = -156529;
volatile uint16_t x302 = 202U;
int64_t x307 = -32116446268LL;
uint16_t x309 = UINT16_MAX;
static uint16_t x311 = 297U;
volatile int32_t t58 = 283;
static int8_t x318 = -1;
static volatile uint8_t x327 = 66U;
int64_t x331 = -1LL;
uint32_t x349 = 805040U;
int32_t t67 = -659;
volatile uint8_t x357 = 26U;
static int64_t x363 = INT64_MIN;
int32_t x366 = 2792;
volatile int32_t t74 = 3;
volatile int64_t x386 = 5747311LL;
volatile uint32_t x391 = 52U;
static int8_t x392 = -1;
uint64_t x394 = UINT64_MAX;
int16_t x396 = -1;
uint8_t x409 = 0U;
int64_t x411 = 64665037LL;
volatile uint8_t x415 = 1U;
int64_t x416 = INT64_MAX;
int16_t x420 = INT16_MAX;
int8_t x422 = INT8_MIN;
volatile int32_t t83 = 59;
int32_t t85 = -193;
static volatile int32_t t86 = 214;
int32_t x437 = 1;
int8_t x440 = 24;
static uint16_t x441 = 0U;
uint8_t x447 = UINT8_MAX;
int32_t t90 = -2;
volatile uint8_t x466 = 58U;
int32_t x473 = -1;
int16_t x474 = 5480;
int32_t x479 = -2987357;
volatile int32_t t96 = -47221;
volatile uint16_t x490 = 10U;
uint64_t x493 = UINT64_MAX;
static int16_t x494 = INT16_MIN;
uint32_t x495 = 18636540U;
int32_t x497 = 1;
int32_t x503 = INT32_MAX;
uint16_t x506 = 7U;
uint32_t x509 = 31696U;
volatile int8_t x510 = -1;
static int16_t x517 = -1;
int8_t x521 = INT8_MAX;
int32_t x523 = -1;
static uint16_t x525 = UINT16_MAX;
volatile int8_t x533 = INT8_MIN;
volatile int32_t t107 = -19;
int16_t x537 = -1;
static int32_t x540 = 104543;
int32_t t108 = 206926688;
int64_t x541 = -1LL;
static int32_t x544 = INT32_MAX;
volatile int32_t t110 = -67392812;
static volatile uint64_t x552 = 651791LLU;
static volatile int16_t x560 = -1;
volatile int32_t t113 = 0;
int32_t x568 = INT32_MAX;
uint32_t x573 = 0U;
int8_t x576 = INT8_MIN;
static volatile int32_t x578 = -1;
int32_t x580 = INT32_MIN;
int32_t x586 = -1;
static volatile int64_t x588 = INT64_MIN;
volatile int32_t t121 = -1;
uint64_t x598 = UINT64_MAX;
int64_t x602 = 62061004672346LL;
int64_t x610 = 0LL;
int8_t x611 = -1;
int8_t x614 = INT8_MAX;
int8_t x615 = 3;
static volatile int32_t t125 = -14;
uint32_t x623 = 37U;
int32_t t126 = 0;
uint8_t x630 = 6U;
uint64_t x632 = UINT64_MAX;
uint64_t x643 = 2528524933294LLU;
int16_t x644 = -1;
uint8_t x646 = 1U;
static volatile uint16_t x664 = UINT16_MAX;
uint8_t x665 = 1U;
int32_t x671 = -3092109;
int8_t x672 = INT8_MAX;
static volatile int64_t x677 = -1LL;
int64_t x687 = -83580092LL;
volatile int32_t t139 = 114;
int8_t x690 = INT8_MAX;
int32_t t140 = -3086;
volatile int16_t x694 = INT16_MIN;
uint16_t x700 = UINT16_MAX;
uint8_t x708 = UINT8_MAX;
volatile uint16_t x713 = UINT16_MAX;
static uint32_t x714 = 82U;
int8_t x716 = INT8_MAX;
int8_t x725 = INT8_MIN;
int16_t x727 = 0;
static volatile int16_t x728 = INT16_MIN;
int16_t x734 = INT16_MAX;
int16_t x736 = INT16_MAX;
static int32_t t149 = -19;
uint8_t x739 = 12U;
int8_t x741 = INT8_MIN;
uint32_t x742 = UINT32_MAX;
int16_t x743 = 0;
int32_t t151 = -19465306;
volatile int32_t t153 = -78213541;
volatile int32_t x755 = 72034;
uint16_t x757 = UINT16_MAX;
uint16_t x779 = UINT16_MAX;
uint64_t x785 = 203651383711118689LLU;
static uint32_t x786 = 702162802U;
volatile uint16_t x829 = UINT16_MAX;
volatile uint8_t x832 = 1U;
static int32_t t171 = 156101154;
uint32_t x842 = UINT32_MAX;
int8_t x845 = -54;
int32_t x856 = 150;
volatile int32_t t177 = 1921752;
int16_t x867 = INT16_MAX;
volatile uint8_t x868 = 43U;
static int16_t x874 = INT16_MAX;
uint8_t x876 = UINT8_MAX;
volatile uint32_t x877 = 253598639U;
static int16_t x878 = INT16_MIN;
volatile int16_t x886 = INT16_MIN;
volatile uint32_t x892 = 972144161U;
static volatile uint16_t x899 = UINT16_MAX;
int64_t x902 = -1LL;
volatile int32_t t185 = 171223;
volatile int32_t t186 = 7;
int32_t t187 = 962014;
static volatile int64_t x918 = -86628167485325LL;
volatile int16_t x926 = -1;
int8_t x928 = INT8_MIN;
volatile int32_t t190 = -12;
static int64_t x933 = INT64_MAX;
int32_t t192 = -113647965;
static volatile int32_t x946 = -212;
uint8_t x954 = UINT8_MAX;
static volatile int16_t x965 = INT16_MIN;
int32_t x967 = INT32_MIN;


void f0(void) {
    	volatile int32_t x2 = -544319;
	int16_t x3 = -3;
	int32_t t0 = -1;

    t0 = ((x1*x2)>(x3^x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x5 = 1;
	uint64_t x6 = 168447914707490960LLU;
	int64_t x7 = INT64_MAX;

    t1 = ((x5*x6)>(x7^x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x10 = 6;
	int64_t x11 = -1LL;
	volatile uint8_t x12 = 3U;
	int32_t t2 = -5968;

    t2 = ((x9*x10)>(x11^x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = 57028341LL;
	uint8_t x14 = 69U;
	volatile int16_t x15 = -7;
	uint64_t x16 = 12135615585128LLU;
	int32_t t3 = 6188;

    t3 = ((x13*x14)>(x15^x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint16_t x17 = UINT16_MAX;
	volatile uint32_t x18 = 1984U;
	uint64_t x19 = 11306LLU;
	int32_t x20 = 46911328;
	int32_t t4 = 3169;

    t4 = ((x17*x18)>(x19^x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x27 = INT16_MAX;
	uint64_t x28 = UINT64_MAX;
	int32_t t5 = 584682333;

    t5 = ((x25*x26)>(x27^x28));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint64_t x29 = 9445946199620401LLU;
	static int8_t x30 = INT8_MAX;
	uint16_t x31 = 4056U;
	int32_t t6 = 51373;

    t6 = ((x29*x30)>(x31^x32));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x33 = INT8_MIN;
	static uint16_t x34 = 14U;
	static int64_t x35 = -12356LL;
	int16_t x36 = INT16_MAX;

    t7 = ((x33*x34)>(x35^x36));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x37 = INT16_MAX;
	static int64_t x38 = -1LL;
	int64_t x39 = 212985LL;

    t8 = ((x37*x38)>(x39^x40));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x41 = INT32_MIN;
	uint32_t x42 = 62275417U;
	volatile int8_t x43 = INT8_MIN;
	int8_t x44 = INT8_MAX;
	volatile int32_t t9 = 0;

    t9 = ((x41*x42)>(x43^x44));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x49 = UINT64_MAX;
	static int32_t x50 = INT32_MAX;
	volatile uint64_t x51 = 485272LLU;
	int32_t x52 = INT32_MIN;
	volatile int32_t t10 = 2024;

    t10 = ((x49*x50)>(x51^x52));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x53 = 1367LLU;
	int64_t x54 = 48821LL;
	uint8_t x56 = 26U;

    t11 = ((x53*x54)>(x55^x56));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x66 = 61U;
	volatile int64_t x67 = -1LL;
	int16_t x68 = -1;
	volatile int32_t t12 = -127;

    t12 = ((x65*x66)>(x67^x68));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint8_t x73 = 1U;
	int32_t x74 = INT32_MIN;
	int32_t x75 = -1;
	volatile int32_t t13 = 0;

    t13 = ((x73*x74)>(x75^x76));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x89 = 1U;
	int64_t x90 = INT64_MIN;
	int16_t x91 = INT16_MAX;
	uint16_t x92 = 3570U;
	volatile int32_t t14 = -2;

    t14 = ((x89*x90)>(x91^x92));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x93 = 2U;
	uint8_t x94 = 0U;
	int16_t x95 = INT16_MIN;
	int16_t x96 = INT16_MIN;
	volatile int32_t t15 = 31;

    t15 = ((x93*x94)>(x95^x96));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x101 = INT8_MIN;
	uint32_t x102 = 438U;
	int8_t x103 = 0;
	volatile uint8_t x104 = 18U;
	int32_t t16 = -1;

    t16 = ((x101*x102)>(x103^x104));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x105 = INT64_MIN;
	int32_t x107 = -128658;

    t17 = ((x105*x106)>(x107^x108));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x109 = INT8_MIN;
	int16_t x110 = 0;
	volatile int32_t x111 = INT32_MAX;
	uint32_t x112 = UINT32_MAX;
	volatile int32_t t18 = 8;

    t18 = ((x109*x110)>(x111^x112));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x113 = -1LL;
	volatile uint8_t x114 = 64U;
	volatile int16_t x115 = -1;
	int32_t x116 = 4444;
	int32_t t19 = 1273352;

    t19 = ((x113*x114)>(x115^x116));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x117 = 120443642U;
	int16_t x119 = INT16_MIN;
	uint8_t x120 = 3U;

    t20 = ((x117*x118)>(x119^x120));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x121 = -1;
	int16_t x123 = 93;
	int64_t x124 = -1760817LL;
	static int32_t t21 = -39;

    t21 = ((x121*x122)>(x123^x124));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x133 = INT16_MIN;
	uint8_t x135 = 1U;
	uint8_t x136 = 50U;
	volatile int32_t t22 = -380903799;

    t22 = ((x133*x134)>(x135^x136));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile int16_t x137 = INT16_MAX;
	uint8_t x138 = UINT8_MAX;
	static int64_t x139 = -1LL;
	int64_t x140 = -1LL;
	volatile int32_t t23 = 54218421;

    t23 = ((x137*x138)>(x139^x140));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint8_t x141 = UINT8_MAX;
	volatile uint8_t x142 = 0U;
	volatile int32_t x143 = -4613;
	uint8_t x144 = UINT8_MAX;

    t24 = ((x141*x142)>(x143^x144));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x145 = -1;
	uint64_t x146 = UINT64_MAX;
	static int32_t x147 = -683;
	static int8_t x148 = -1;
	int32_t t25 = 1485870;

    t25 = ((x145*x146)>(x147^x148));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x149 = INT32_MIN;
	int64_t x150 = -5569LL;
	int8_t x151 = 21;
	int64_t x152 = INT64_MIN;
	volatile int32_t t26 = 5788585;

    t26 = ((x149*x150)>(x151^x152));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x157 = -57;
	int32_t x158 = -1;
	int64_t x159 = -23840650LL;
	volatile uint8_t x160 = 24U;
	int32_t t27 = -1;

    t27 = ((x157*x158)>(x159^x160));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x161 = INT32_MIN;
	uint32_t x162 = 1237799U;

    t28 = ((x161*x162)>(x163^x164));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static int16_t x166 = INT16_MAX;
	int64_t x167 = INT64_MIN;
	int16_t x168 = INT16_MIN;
	int32_t t29 = 6587025;

    t29 = ((x165*x166)>(x167^x168));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x173 = -5073;
	int8_t x174 = INT8_MIN;
	uint64_t x175 = UINT64_MAX;
	int32_t x176 = -94026;
	volatile int32_t t30 = 730366537;

    t30 = ((x173*x174)>(x175^x176));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x177 = -3371749;
	uint8_t x178 = UINT8_MAX;
	int8_t x179 = -2;

    t31 = ((x177*x178)>(x179^x180));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x181 = 3U;
	int8_t x182 = 56;
	int64_t x184 = INT64_MAX;

    t32 = ((x181*x182)>(x183^x184));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x185 = INT16_MIN;
	int8_t x187 = -1;
	int32_t x188 = INT32_MAX;
	int32_t t33 = 437433137;

    t33 = ((x185*x186)>(x187^x188));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x189 = -1LL;
	static volatile uint8_t x191 = 21U;
	uint32_t x192 = 4178007U;
	volatile int32_t t34 = -319;

    t34 = ((x189*x190)>(x191^x192));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x193 = 1764695615760617947LLU;
	volatile uint8_t x194 = 29U;
	volatile int32_t x196 = 2884847;

    t35 = ((x193*x194)>(x195^x196));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint64_t x205 = UINT64_MAX;
	uint16_t x207 = UINT16_MAX;
	int16_t x208 = INT16_MAX;
	volatile int32_t t36 = 11703668;

    t36 = ((x205*x206)>(x207^x208));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x209 = 134834918LL;
	int8_t x210 = 3;
	static uint8_t x211 = 6U;
	int32_t x212 = INT32_MIN;
	int32_t t37 = 2;

    t37 = ((x209*x210)>(x211^x212));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint32_t x213 = 4293U;
	int64_t x215 = INT64_MAX;
	volatile int64_t x216 = 5888281LL;
	static volatile int32_t t38 = -1566;

    t38 = ((x213*x214)>(x215^x216));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile uint64_t x218 = 8130820712LLU;
	static int16_t x219 = INT16_MIN;
	int16_t x220 = INT16_MAX;
	volatile int32_t t39 = 451826018;

    t39 = ((x217*x218)>(x219^x220));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x221 = INT16_MAX;
	static int8_t x222 = INT8_MAX;
	volatile int32_t x223 = 8097708;
	volatile uint32_t x224 = UINT32_MAX;
	int32_t t40 = -22963333;

    t40 = ((x221*x222)>(x223^x224));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x230 = -1;
	int32_t x232 = INT32_MAX;
	volatile int32_t t41 = 33372;

    t41 = ((x229*x230)>(x231^x232));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x234 = -6;
	static int32_t x235 = INT32_MIN;
	int64_t x236 = INT64_MAX;
	int32_t t42 = -407973036;

    t42 = ((x233*x234)>(x235^x236));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x237 = -1;
	volatile int16_t x238 = INT16_MIN;
	int8_t x239 = 0;
	volatile int32_t x240 = -1;
	static int32_t t43 = -16081732;

    t43 = ((x237*x238)>(x239^x240));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile uint64_t x241 = 1901993241716LLU;
	static int64_t x242 = -18LL;
	volatile uint32_t x243 = 2170278U;
	static volatile int32_t x244 = -9;
	int32_t t44 = 11;

    t44 = ((x241*x242)>(x243^x244));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x245 = -5;
	int64_t x246 = 0LL;
	int8_t x247 = 10;
	int32_t t45 = 1764137;

    t45 = ((x245*x246)>(x247^x248));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x249 = -236;
	uint32_t x250 = UINT32_MAX;
	static int64_t x251 = -1LL;
	uint32_t x252 = UINT32_MAX;
	int32_t t46 = -158;

    t46 = ((x249*x250)>(x251^x252));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x253 = INT16_MIN;
	volatile uint64_t x254 = UINT64_MAX;
	volatile int64_t x255 = INT64_MAX;
	static int64_t x256 = INT64_MIN;
	int32_t t47 = -645912;

    t47 = ((x253*x254)>(x255^x256));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x257 = INT64_MAX;
	int32_t x259 = 44623170;
	volatile int32_t x260 = INT32_MAX;
	int32_t t48 = -61851;

    t48 = ((x257*x258)>(x259^x260));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x265 = UINT16_MAX;
	int16_t x267 = INT16_MIN;
	int8_t x268 = INT8_MIN;
	int32_t t49 = 1404;

    t49 = ((x265*x266)>(x267^x268));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x273 = INT32_MAX;
	int16_t x275 = -1;
	volatile int32_t x276 = -1;
	static int32_t t50 = -3393573;

    t50 = ((x273*x274)>(x275^x276));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile int16_t x277 = INT16_MAX;
	static uint16_t x278 = 6U;
	int16_t x280 = 7;

    t51 = ((x277*x278)>(x279^x280));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint32_t x281 = 43073759U;
	static int8_t x282 = 13;
	uint64_t x283 = 2087LLU;
	static int32_t x284 = INT32_MAX;
	volatile int32_t t52 = 3396585;

    t52 = ((x281*x282)>(x283^x284));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint32_t x285 = 406041394U;
	int64_t x286 = 8595893087LL;
	static uint16_t x288 = 9874U;
	volatile int32_t t53 = -1232260;

    t53 = ((x285*x286)>(x287^x288));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x289 = -1;
	int8_t x290 = -4;
	static int64_t x291 = 275086749932653LL;
	int16_t x292 = INT16_MIN;

    t54 = ((x289*x290)>(x291^x292));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x293 = UINT64_MAX;
	int32_t x295 = INT32_MIN;
	int16_t x296 = 0;

    t55 = ((x293*x294)>(x295^x296));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x301 = UINT32_MAX;
	int64_t x303 = INT64_MAX;
	static volatile int8_t x304 = 0;
	volatile int32_t t56 = -25769082;

    t56 = ((x301*x302)>(x303^x304));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x305 = UINT32_MAX;
	uint8_t x306 = 0U;
	volatile int32_t x308 = INT32_MIN;
	int32_t t57 = 6475;

    t57 = ((x305*x306)>(x307^x308));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x310 = -1;
	int64_t x312 = -135291085957231LL;

    t58 = ((x309*x310)>(x311^x312));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint64_t x313 = UINT64_MAX;
	uint64_t x314 = UINT64_MAX;
	int8_t x315 = INT8_MIN;
	static volatile int32_t x316 = -1318;
	int32_t t59 = -931559;

    t59 = ((x313*x314)>(x315^x316));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x317 = -1;
	int32_t x319 = -14742136;
	int64_t x320 = 2243144909761113368LL;
	volatile int32_t t60 = -59158;

    t60 = ((x317*x318)>(x319^x320));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x321 = UINT32_MAX;
	uint64_t x322 = 16303907921710909LLU;
	int16_t x323 = 6;
	volatile uint32_t x324 = UINT32_MAX;
	int32_t t61 = -7053;

    t61 = ((x321*x322)>(x323^x324));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x325 = 118U;
	volatile uint8_t x326 = 49U;
	int16_t x328 = -1;
	int32_t t62 = 3273009;

    t62 = ((x325*x326)>(x327^x328));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x329 = -1;
	int16_t x330 = -1;
	uint8_t x332 = 53U;
	volatile int32_t t63 = -11773;

    t63 = ((x329*x330)>(x331^x332));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int64_t x333 = 775337975LL;
	int16_t x334 = -15;
	int8_t x335 = -6;
	volatile uint8_t x336 = UINT8_MAX;
	volatile int32_t t64 = -8856796;

    t64 = ((x333*x334)>(x335^x336));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x341 = 47;
	uint32_t x342 = 44039827U;
	int32_t x343 = INT32_MIN;
	uint8_t x344 = UINT8_MAX;
	int32_t t65 = -3450;

    t65 = ((x341*x342)>(x343^x344));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x345 = INT16_MIN;
	int16_t x346 = INT16_MIN;
	int8_t x347 = INT8_MAX;
	int8_t x348 = INT8_MIN;
	int32_t t66 = 25;

    t66 = ((x345*x346)>(x347^x348));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int32_t x350 = INT32_MIN;
	static uint8_t x351 = UINT8_MAX;
	int8_t x352 = INT8_MIN;

    t67 = ((x349*x350)>(x351^x352));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x358 = -39611;
	uint32_t x359 = 765U;
	uint8_t x360 = 2U;
	static volatile int32_t t68 = -225;

    t68 = ((x357*x358)>(x359^x360));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x361 = UINT16_MAX;
	int64_t x362 = -1LL;
	uint32_t x364 = 37037938U;
	volatile int32_t t69 = 443768;

    t69 = ((x361*x362)>(x363^x364));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x365 = 0;
	volatile int32_t x367 = -1;
	uint8_t x368 = 0U;
	int32_t t70 = -436766;

    t70 = ((x365*x366)>(x367^x368));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x369 = INT8_MAX;
	uint32_t x370 = 0U;
	int32_t x371 = 190;
	int64_t x372 = -1LL;
	volatile int32_t t71 = 198233807;

    t71 = ((x369*x370)>(x371^x372));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint8_t x373 = 83U;
	int16_t x374 = 135;
	static int32_t x375 = INT32_MAX;
	uint64_t x376 = 10427167LLU;
	volatile int32_t t72 = 53;

    t72 = ((x373*x374)>(x375^x376));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x377 = -1LL;
	int16_t x378 = 50;
	uint16_t x379 = 1370U;
	static int32_t x380 = -1;
	int32_t t73 = -2472538;

    t73 = ((x377*x378)>(x379^x380));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x381 = -1;
	int32_t x382 = -154504536;
	int8_t x383 = INT8_MIN;
	uint32_t x384 = UINT32_MAX;

    t74 = ((x381*x382)>(x383^x384));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x385 = -61;
	int64_t x387 = INT64_MIN;
	int32_t x388 = -1;
	volatile int32_t t75 = 7;

    t75 = ((x385*x386)>(x387^x388));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint32_t x389 = 167545U;
	uint16_t x390 = UINT16_MAX;
	volatile int32_t t76 = 220;

    t76 = ((x389*x390)>(x391^x392));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int32_t x393 = 236;
	volatile uint64_t x395 = 2428653901842926648LLU;
	volatile int32_t t77 = 17806;

    t77 = ((x393*x394)>(x395^x396));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x401 = INT16_MIN;
	volatile int32_t x402 = -1;
	int16_t x403 = -1;
	uint32_t x404 = UINT32_MAX;
	static volatile int32_t t78 = 47;

    t78 = ((x401*x402)>(x403^x404));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint32_t x405 = 1U;
	int16_t x406 = 2274;
	uint32_t x407 = UINT32_MAX;
	volatile int32_t x408 = 1;
	static volatile int32_t t79 = 579236170;

    t79 = ((x405*x406)>(x407^x408));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint64_t x410 = 62463551LLU;
	uint64_t x412 = UINT64_MAX;
	volatile int32_t t80 = -486;

    t80 = ((x409*x410)>(x411^x412));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x413 = 1LL;
	static int8_t x414 = INT8_MAX;
	volatile int32_t t81 = -4075;

    t81 = ((x413*x414)>(x415^x416));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x417 = 1;
	int8_t x418 = INT8_MAX;
	uint8_t x419 = 97U;
	volatile int32_t t82 = -1;

    t82 = ((x417*x418)>(x419^x420));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile uint16_t x421 = 24166U;
	volatile int8_t x423 = 10;
	int8_t x424 = INT8_MAX;

    t83 = ((x421*x422)>(x423^x424));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint64_t x425 = 53538656888997132LLU;
	volatile int16_t x426 = INT16_MIN;
	volatile int64_t x427 = INT64_MAX;
	int16_t x428 = INT16_MIN;
	int32_t t84 = -265994;

    t84 = ((x425*x426)>(x427^x428));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint64_t x429 = 2271599801891LLU;
	int32_t x430 = INT32_MIN;
	int32_t x431 = 926783354;
	int32_t x432 = -1;

    t85 = ((x429*x430)>(x431^x432));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x433 = 3114U;
	static uint16_t x434 = 37U;
	int8_t x435 = -14;
	static int32_t x436 = -1;

    t86 = ((x433*x434)>(x435^x436));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x438 = INT16_MIN;
	uint8_t x439 = 10U;
	int32_t t87 = -409941;

    t87 = ((x437*x438)>(x439^x440));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int64_t x442 = 0LL;
	volatile int8_t x443 = INT8_MIN;
	uint32_t x444 = 62U;
	int32_t t88 = -132201595;

    t88 = ((x441*x442)>(x443^x444));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x445 = -1;
	int8_t x446 = INT8_MAX;
	static uint8_t x448 = 2U;
	volatile int32_t t89 = -217176321;

    t89 = ((x445*x446)>(x447^x448));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x457 = 4;
	uint64_t x458 = 162574932472LLU;
	uint32_t x459 = 1426371558U;
	int8_t x460 = 1;

    t90 = ((x457*x458)>(x459^x460));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x465 = 2U;
	uint8_t x467 = 5U;
	int16_t x468 = INT16_MAX;
	static volatile int32_t t91 = 30;

    t91 = ((x465*x466)>(x467^x468));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x469 = -9045;
	int32_t x470 = -1;
	int64_t x471 = 381782LL;
	volatile uint64_t x472 = 2202452189066LLU;
	int32_t t92 = 112790;

    t92 = ((x469*x470)>(x471^x472));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int64_t x475 = -1LL;
	volatile uint64_t x476 = 53661753122035165LLU;
	int32_t t93 = 1;

    t93 = ((x473*x474)>(x475^x476));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x477 = 5LLU;
	int16_t x478 = -1;
	int32_t x480 = -1;
	int32_t t94 = 114610;

    t94 = ((x477*x478)>(x479^x480));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x481 = 2U;
	int64_t x482 = -175725496316LL;
	uint64_t x483 = 231321622765LLU;
	volatile int64_t x484 = 55682895073893LL;
	static int32_t t95 = -489944833;

    t95 = ((x481*x482)>(x483^x484));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x485 = UINT64_MAX;
	volatile int8_t x486 = -1;
	int32_t x487 = INT32_MIN;
	static int32_t x488 = 92;

    t96 = ((x485*x486)>(x487^x488));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x489 = UINT8_MAX;
	uint8_t x491 = UINT8_MAX;
	int64_t x492 = INT64_MIN;
	volatile int32_t t97 = -60867518;

    t97 = ((x489*x490)>(x491^x492));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint64_t x496 = 10LLU;
	static volatile int32_t t98 = 2536;

    t98 = ((x493*x494)>(x495^x496));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x498 = INT8_MIN;
	volatile int8_t x499 = INT8_MIN;
	uint32_t x500 = 845673U;
	int32_t t99 = 14687703;

    t99 = ((x497*x498)>(x499^x500));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint64_t x501 = UINT64_MAX;
	static int16_t x502 = INT16_MIN;
	uint8_t x504 = UINT8_MAX;
	volatile int32_t t100 = -810;

    t100 = ((x501*x502)>(x503^x504));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x505 = 3804469;
	int64_t x507 = INT64_MIN;
	int16_t x508 = -1;
	volatile int32_t t101 = -39;

    t101 = ((x505*x506)>(x507^x508));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x511 = 5868854887462336LLU;
	volatile uint64_t x512 = UINT64_MAX;
	static volatile int32_t t102 = -8;

    t102 = ((x509*x510)>(x511^x512));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x518 = -2734156769618761279LL;
	int32_t x519 = -18;
	uint16_t x520 = 19U;
	int32_t t103 = 1;

    t103 = ((x517*x518)>(x519^x520));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x522 = 25906U;
	uint8_t x524 = 41U;
	static int32_t t104 = 323;

    t104 = ((x521*x522)>(x523^x524));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x526 = INT16_MAX;
	uint32_t x527 = UINT32_MAX;
	volatile uint32_t x528 = 63727U;
	int32_t t105 = -258130624;

    t105 = ((x525*x526)>(x527^x528));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x529 = 75717904050201057LLU;
	static uint16_t x530 = UINT16_MAX;
	static int16_t x531 = -25;
	static int64_t x532 = INT64_MAX;
	int32_t t106 = 206168;

    t106 = ((x529*x530)>(x531^x532));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static int16_t x534 = INT16_MIN;
	int8_t x535 = INT8_MIN;
	int64_t x536 = INT64_MAX;

    t107 = ((x533*x534)>(x535^x536));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t x538 = -1;
	uint64_t x539 = UINT64_MAX;

    t108 = ((x537*x538)>(x539^x540));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x542 = INT32_MAX;
	int64_t x543 = -1LL;
	volatile int32_t t109 = -1;

    t109 = ((x541*x542)>(x543^x544));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint64_t x545 = 174842165004766746LLU;
	int64_t x546 = INT64_MAX;
	int8_t x547 = -1;
	uint8_t x548 = 0U;

    t110 = ((x545*x546)>(x547^x548));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x549 = -1;
	int8_t x550 = INT8_MAX;
	int64_t x551 = -1LL;
	static volatile int32_t t111 = 787;

    t111 = ((x549*x550)>(x551^x552));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x553 = 350133577U;
	int32_t x554 = 497;
	uint32_t x555 = 297361U;
	int32_t x556 = INT32_MIN;
	int32_t t112 = 0;

    t112 = ((x553*x554)>(x555^x556));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x557 = 201116536U;
	static int8_t x558 = INT8_MAX;
	static int8_t x559 = -1;

    t113 = ((x557*x558)>(x559^x560));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x561 = INT16_MAX;
	volatile int16_t x562 = -1;
	uint16_t x563 = UINT16_MAX;
	static int8_t x564 = INT8_MAX;
	int32_t t114 = 11;

    t114 = ((x561*x562)>(x563^x564));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x565 = -798997343610LL;
	int8_t x566 = -1;
	int64_t x567 = 367532195LL;
	int32_t t115 = -347239;

    t115 = ((x565*x566)>(x567^x568));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x569 = INT8_MIN;
	int16_t x570 = INT16_MAX;
	int16_t x571 = -5217;
	static int64_t x572 = -1LL;
	volatile int32_t t116 = -7527381;

    t116 = ((x569*x570)>(x571^x572));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int8_t x574 = 0;
	int32_t x575 = 6914471;
	int32_t t117 = -1;

    t117 = ((x573*x574)>(x575^x576));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x577 = 3828U;
	int64_t x579 = 13005428057402934LL;
	volatile int32_t t118 = 64700;

    t118 = ((x577*x578)>(x579^x580));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x581 = UINT8_MAX;
	int32_t x582 = 50941;
	volatile uint32_t x583 = 116365389U;
	static int64_t x584 = -1LL;
	static int32_t t119 = 1;

    t119 = ((x581*x582)>(x583^x584));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint64_t x585 = UINT64_MAX;
	static int8_t x587 = INT8_MAX;
	int32_t t120 = -5487;

    t120 = ((x585*x586)>(x587^x588));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x593 = INT64_MAX;
	uint16_t x594 = 1U;
	volatile uint8_t x595 = 15U;
	int16_t x596 = 494;

    t121 = ((x593*x594)>(x595^x596));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x597 = -1LL;
	static int16_t x599 = INT16_MAX;
	int32_t x600 = -1;
	int32_t t122 = 58971;

    t122 = ((x597*x598)>(x599^x600));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x601 = UINT16_MAX;
	int8_t x603 = 29;
	int16_t x604 = 50;
	static int32_t t123 = 2;

    t123 = ((x601*x602)>(x603^x604));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x609 = INT64_MIN;
	volatile int32_t x612 = INT32_MAX;
	int32_t t124 = -7;

    t124 = ((x609*x610)>(x611^x612));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x613 = INT16_MAX;
	static volatile int32_t x616 = -1;

    t125 = ((x613*x614)>(x615^x616));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x621 = -1;
	int16_t x622 = -1;
	uint32_t x624 = 8U;

    t126 = ((x621*x622)>(x623^x624));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int64_t x629 = -9LL;
	int16_t x631 = INT16_MIN;
	volatile int32_t t127 = -15437;

    t127 = ((x629*x630)>(x631^x632));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x637 = UINT64_MAX;
	int32_t x638 = INT32_MAX;
	uint32_t x639 = UINT32_MAX;
	int32_t x640 = -43;
	int32_t t128 = 51515;

    t128 = ((x637*x638)>(x639^x640));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x641 = INT8_MAX;
	int64_t x642 = 53230535003LL;
	int32_t t129 = 88;

    t129 = ((x641*x642)>(x643^x644));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x645 = INT32_MAX;
	uint64_t x647 = 26346878884LLU;
	int16_t x648 = -1021;
	int32_t t130 = -105857;

    t130 = ((x645*x646)>(x647^x648));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x649 = -11;
	volatile uint16_t x650 = UINT16_MAX;
	uint32_t x651 = 12U;
	uint32_t x652 = UINT32_MAX;
	volatile int32_t t131 = -1293713;

    t131 = ((x649*x650)>(x651^x652));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile int64_t x657 = 183001LL;
	int16_t x658 = -1;
	int16_t x659 = -1;
	int16_t x660 = INT16_MIN;
	static volatile int32_t t132 = -91029;

    t132 = ((x657*x658)>(x659^x660));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint16_t x661 = 11856U;
	volatile uint8_t x662 = 1U;
	int32_t x663 = INT32_MIN;
	static int32_t t133 = 49982;

    t133 = ((x661*x662)>(x663^x664));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x666 = INT16_MIN;
	int16_t x667 = INT16_MIN;
	int32_t x668 = INT32_MIN;
	volatile int32_t t134 = 62459665;

    t134 = ((x665*x666)>(x667^x668));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int8_t x669 = 1;
	volatile int32_t x670 = INT32_MIN;
	static volatile int32_t t135 = 46;

    t135 = ((x669*x670)>(x671^x672));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint16_t x673 = 1U;
	int64_t x674 = INT64_MAX;
	static volatile int16_t x675 = -8;
	static uint16_t x676 = 283U;
	int32_t t136 = -38981;

    t136 = ((x673*x674)>(x675^x676));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x678 = INT32_MAX;
	int32_t x679 = INT32_MIN;
	uint64_t x680 = 15643345728982968LLU;
	volatile int32_t t137 = 2672;

    t137 = ((x677*x678)>(x679^x680));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x681 = 1;
	int16_t x682 = -1;
	uint32_t x683 = UINT32_MAX;
	uint64_t x684 = 936LLU;
	int32_t t138 = -3543694;

    t138 = ((x681*x682)>(x683^x684));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x685 = -1;
	int64_t x686 = 33257079LL;
	volatile int64_t x688 = INT64_MIN;

    t139 = ((x685*x686)>(x687^x688));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint16_t x689 = 1U;
	int64_t x691 = INT64_MIN;
	volatile uint8_t x692 = 29U;

    t140 = ((x689*x690)>(x691^x692));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x693 = 0;
	uint8_t x695 = 1U;
	int32_t x696 = INT32_MAX;
	int32_t t141 = -2;

    t141 = ((x693*x694)>(x695^x696));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x697 = 16U;
	int16_t x698 = -1409;
	int8_t x699 = INT8_MAX;
	int32_t t142 = 84;

    t142 = ((x697*x698)>(x699^x700));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x701 = 1321U;
	uint32_t x702 = 1992127383U;
	int16_t x703 = 4229;
	volatile int64_t x704 = INT64_MIN;
	volatile int32_t t143 = 5;

    t143 = ((x701*x702)>(x703^x704));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int64_t x705 = -1055011444114LL;
	uint8_t x706 = UINT8_MAX;
	int8_t x707 = INT8_MAX;
	int32_t t144 = 222;

    t144 = ((x705*x706)>(x707^x708));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint32_t x709 = UINT32_MAX;
	int16_t x710 = INT16_MIN;
	uint8_t x711 = UINT8_MAX;
	uint32_t x712 = 10U;
	volatile int32_t t145 = -94396;

    t145 = ((x709*x710)>(x711^x712));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint64_t x715 = 2909543165445813778LLU;
	int32_t t146 = 45;

    t146 = ((x713*x714)>(x715^x716));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint32_t x721 = 18758U;
	int8_t x722 = INT8_MAX;
	volatile uint16_t x723 = 206U;
	uint16_t x724 = 3U;
	int32_t t147 = -44455;

    t147 = ((x721*x722)>(x723^x724));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x726 = -554690110LL;
	volatile int32_t t148 = -521341371;

    t148 = ((x725*x726)>(x727^x728));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x733 = INT8_MAX;
	static uint16_t x735 = 14U;

    t149 = ((x733*x734)>(x735^x736));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x737 = 1U;
	uint32_t x738 = 40276U;
	static volatile uint8_t x740 = 1U;
	int32_t t150 = -523597341;

    t150 = ((x737*x738)>(x739^x740));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int64_t x744 = -124933291LL;

    t151 = ((x741*x742)>(x743^x744));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int8_t x745 = 0;
	int16_t x746 = INT16_MIN;
	static int64_t x747 = INT64_MIN;
	volatile int32_t x748 = 6440;
	static int32_t t152 = -93472;

    t152 = ((x745*x746)>(x747^x748));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint64_t x749 = 3411932537903931745LLU;
	volatile uint64_t x750 = 253LLU;
	static uint8_t x751 = 1U;
	volatile int16_t x752 = -616;

    t153 = ((x749*x750)>(x751^x752));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x753 = -1LL;
	static uint64_t x754 = 42311LLU;
	int8_t x756 = 2;
	volatile int32_t t154 = 29635;

    t154 = ((x753*x754)>(x755^x756));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x758 = -1;
	volatile uint16_t x759 = UINT16_MAX;
	static int32_t x760 = -1;
	int32_t t155 = 513;

    t155 = ((x757*x758)>(x759^x760));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile int8_t x765 = 1;
	uint16_t x766 = UINT16_MAX;
	uint16_t x767 = 15773U;
	int64_t x768 = -1LL;
	volatile int32_t t156 = 1;

    t156 = ((x765*x766)>(x767^x768));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint8_t x769 = 1U;
	static volatile uint16_t x770 = 7U;
	uint32_t x771 = 1U;
	uint32_t x772 = 118172U;
	volatile int32_t t157 = -1679448;

    t157 = ((x769*x770)>(x771^x772));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static int16_t x777 = 1;
	int16_t x778 = INT16_MIN;
	int64_t x780 = -5622LL;
	volatile int32_t t158 = 7159;

    t158 = ((x777*x778)>(x779^x780));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile uint32_t x781 = 30U;
	int8_t x782 = INT8_MAX;
	volatile uint64_t x783 = 5317LLU;
	int16_t x784 = 42;
	int32_t t159 = -139162;

    t159 = ((x781*x782)>(x783^x784));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x787 = 7U;
	int32_t x788 = INT32_MIN;
	volatile int32_t t160 = -214809;

    t160 = ((x785*x786)>(x787^x788));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x789 = -1;
	volatile uint8_t x790 = 9U;
	int32_t x791 = 37;
	static int64_t x792 = INT64_MIN;
	static int32_t t161 = 14600878;

    t161 = ((x789*x790)>(x791^x792));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x793 = 1951035473U;
	volatile int32_t x794 = INT32_MIN;
	int32_t x795 = INT32_MIN;
	volatile int32_t x796 = INT32_MIN;
	static volatile int32_t t162 = -1;

    t162 = ((x793*x794)>(x795^x796));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x797 = 1U;
	int64_t x798 = INT64_MAX;
	uint32_t x799 = UINT32_MAX;
	volatile uint16_t x800 = UINT16_MAX;
	volatile int32_t t163 = 11637;

    t163 = ((x797*x798)>(x799^x800));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x805 = -1;
	static int32_t x806 = INT32_MAX;
	uint64_t x807 = 2760LLU;
	int16_t x808 = INT16_MAX;
	int32_t t164 = 8404769;

    t164 = ((x805*x806)>(x807^x808));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint32_t x809 = 28U;
	int8_t x810 = INT8_MIN;
	static int32_t x811 = INT32_MIN;
	static int16_t x812 = INT16_MAX;
	int32_t t165 = -221;

    t165 = ((x809*x810)>(x811^x812));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x813 = INT64_MAX;
	static int16_t x814 = -1;
	int8_t x815 = 14;
	uint32_t x816 = 418072216U;
	int32_t t166 = 2511251;

    t166 = ((x813*x814)>(x815^x816));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int8_t x817 = -32;
	uint32_t x818 = UINT32_MAX;
	int8_t x819 = INT8_MIN;
	int64_t x820 = INT64_MAX;
	int32_t t167 = -27;

    t167 = ((x817*x818)>(x819^x820));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x821 = -1;
	static int16_t x822 = -362;
	static uint8_t x823 = UINT8_MAX;
	uint64_t x824 = UINT64_MAX;
	int32_t t168 = 23;

    t168 = ((x821*x822)>(x823^x824));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x825 = 1874397893LL;
	static uint8_t x826 = 5U;
	volatile int8_t x827 = INT8_MAX;
	int32_t x828 = INT32_MIN;
	int32_t t169 = -18875972;

    t169 = ((x825*x826)>(x827^x828));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint32_t x830 = 79062U;
	uint32_t x831 = 22177694U;
	volatile int32_t t170 = 43348778;

    t170 = ((x829*x830)>(x831^x832));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x837 = UINT32_MAX;
	int32_t x838 = 981030658;
	int16_t x839 = INT16_MIN;
	volatile uint32_t x840 = 60U;

    t171 = ((x837*x838)>(x839^x840));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x841 = INT32_MAX;
	uint32_t x843 = 12U;
	static int64_t x844 = INT64_MIN;
	volatile int32_t t172 = 1736185;

    t172 = ((x841*x842)>(x843^x844));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x846 = -1LL;
	int16_t x847 = INT16_MAX;
	static int64_t x848 = -1LL;
	volatile int32_t t173 = -7309;

    t173 = ((x845*x846)>(x847^x848));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x849 = 23;
	int16_t x850 = -1;
	int16_t x851 = -1;
	int32_t x852 = -102;
	int32_t t174 = 3433;

    t174 = ((x849*x850)>(x851^x852));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x853 = 15;
	uint16_t x854 = 472U;
	int8_t x855 = INT8_MAX;
	int32_t t175 = -1;

    t175 = ((x853*x854)>(x855^x856));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x857 = 8802LLU;
	uint16_t x858 = 138U;
	int64_t x859 = 469312540876032LL;
	volatile uint32_t x860 = 0U;
	int32_t t176 = 93797329;

    t176 = ((x857*x858)>(x859^x860));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int8_t x861 = -28;
	int16_t x862 = INT16_MIN;
	uint64_t x863 = 1004549441147LLU;
	int64_t x864 = -1LL;

    t177 = ((x861*x862)>(x863^x864));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x865 = INT32_MAX;
	uint64_t x866 = 336608590038101LLU;
	volatile int32_t t178 = -13203;

    t178 = ((x865*x866)>(x867^x868));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x873 = -212;
	int32_t x875 = INT32_MIN;
	volatile int32_t t179 = 560854;

    t179 = ((x873*x874)>(x875^x876));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static int32_t x879 = -251907;
	uint32_t x880 = UINT32_MAX;
	int32_t t180 = 9651209;

    t180 = ((x877*x878)>(x879^x880));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x881 = UINT32_MAX;
	int32_t x882 = INT32_MAX;
	static int64_t x883 = INT64_MIN;
	static int16_t x884 = INT16_MIN;
	static volatile int32_t t181 = -1465563;

    t181 = ((x881*x882)>(x883^x884));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x885 = 2U;
	static volatile int32_t x887 = -1;
	volatile int64_t x888 = 60879567466279545LL;
	volatile int32_t t182 = -761708;

    t182 = ((x885*x886)>(x887^x888));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x889 = 809U;
	int16_t x890 = -649;
	uint8_t x891 = 61U;
	volatile int32_t t183 = -809;

    t183 = ((x889*x890)>(x891^x892));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint32_t x897 = 81220U;
	int16_t x898 = 11898;
	static uint8_t x900 = 1U;
	int32_t t184 = 0;

    t184 = ((x897*x898)>(x899^x900));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x901 = UINT16_MAX;
	static uint64_t x903 = 17386688LLU;
	int32_t x904 = -1;

    t185 = ((x901*x902)>(x903^x904));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint64_t x905 = 33193880LLU;
	static int8_t x906 = INT8_MIN;
	static int8_t x907 = -1;
	static uint32_t x908 = 5265158U;

    t186 = ((x905*x906)>(x907^x908));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x909 = 42U;
	int64_t x910 = 3740651899317LL;
	volatile uint64_t x911 = 3727549245016788307LLU;
	uint64_t x912 = 3484049LLU;

    t187 = ((x909*x910)>(x911^x912));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x917 = 0U;
	volatile uint16_t x919 = 30U;
	static volatile int64_t x920 = -1182537824429LL;
	volatile int32_t t188 = -285163;

    t188 = ((x917*x918)>(x919^x920));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x921 = INT16_MIN;
	volatile int16_t x922 = -1;
	int8_t x923 = INT8_MAX;
	int16_t x924 = INT16_MIN;
	volatile int32_t t189 = 167376301;

    t189 = ((x921*x922)>(x923^x924));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint16_t x925 = UINT16_MAX;
	int64_t x927 = 57284491LL;

    t190 = ((x925*x926)>(x927^x928));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x929 = -1LL;
	static int8_t x930 = -1;
	int32_t x931 = INT32_MIN;
	static volatile int32_t x932 = INT32_MIN;
	int32_t t191 = -2852372;

    t191 = ((x929*x930)>(x931^x932));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x934 = -1;
	uint32_t x935 = UINT32_MAX;
	uint8_t x936 = 69U;

    t192 = ((x933*x934)>(x935^x936));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x937 = 39079419446LLU;
	int16_t x938 = -1;
	static volatile int64_t x939 = -7322960960LL;
	static volatile int32_t x940 = -228388403;
	volatile int32_t t193 = 4;

    t193 = ((x937*x938)>(x939^x940));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x941 = 4U;
	uint32_t x942 = 18239U;
	uint8_t x943 = 33U;
	static int16_t x944 = INT16_MIN;
	static volatile int32_t t194 = -142963990;

    t194 = ((x941*x942)>(x943^x944));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x945 = INT16_MIN;
	int32_t x947 = INT32_MIN;
	uint64_t x948 = UINT64_MAX;
	int32_t t195 = 11054038;

    t195 = ((x945*x946)>(x947^x948));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x949 = -1;
	int16_t x950 = INT16_MIN;
	uint8_t x951 = 71U;
	static int8_t x952 = -1;
	volatile int32_t t196 = -51434784;

    t196 = ((x949*x950)>(x951^x952));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x953 = 50;
	static int32_t x955 = -1;
	uint64_t x956 = UINT64_MAX;
	volatile int32_t t197 = 105;

    t197 = ((x953*x954)>(x955^x956));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint32_t x961 = 107606U;
	uint32_t x962 = UINT32_MAX;
	int32_t x963 = INT32_MIN;
	int32_t x964 = -24;
	int32_t t198 = 1706;

    t198 = ((x961*x962)>(x963^x964));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile int64_t x966 = 1985LL;
	int32_t x968 = -1;
	int32_t t199 = 389;

    t199 = ((x965*x966)>(x967^x968));

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

