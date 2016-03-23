
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

int8_t x5 = INT8_MIN;
uint32_t x14 = 4U;
static int16_t x16 = 1;
uint8_t x21 = 62U;
static volatile int16_t x22 = 7671;
int32_t x23 = -1;
static volatile uint64_t x29 = 8344LLU;
volatile int32_t x33 = -1;
static int64_t x35 = INT64_MIN;
static int16_t x36 = INT16_MAX;
uint32_t x43 = UINT32_MAX;
volatile int32_t t10 = -185497895;
static uint64_t x45 = 5LLU;
volatile int64_t x46 = 1316695113631473LL;
int32_t x48 = INT32_MIN;
volatile uint32_t x50 = UINT32_MAX;
int32_t t12 = -2;
uint64_t x57 = 1454LLU;
static uint32_t x58 = UINT32_MAX;
volatile int32_t t16 = -125;
int8_t x70 = INT8_MIN;
int8_t x73 = INT8_MIN;
uint64_t x78 = 881220693267LLU;
uint8_t x82 = UINT8_MAX;
static int32_t t21 = 25006;
uint16_t x89 = 18042U;
static volatile int32_t x91 = INT32_MAX;
uint8_t x99 = UINT8_MAX;
static uint8_t x102 = UINT8_MAX;
int32_t x105 = 22179896;
int8_t x108 = INT8_MIN;
volatile int32_t t26 = -19;
static uint16_t x114 = 2852U;
int32_t t29 = 2866;
int16_t x123 = INT16_MIN;
volatile int16_t x126 = INT16_MIN;
uint16_t x131 = UINT16_MAX;
static uint16_t x135 = 910U;
int16_t x139 = -780;
uint32_t x148 = 34U;
int64_t x165 = -2132955108996LL;
static int16_t x175 = INT16_MIN;
int32_t t43 = 62436;
int32_t x178 = INT32_MIN;
int32_t t45 = 40887;
int32_t t46 = -8052959;
volatile int32_t t47 = 788;
int32_t x194 = 15;
static int32_t t49 = 5;
static int16_t x208 = -1;
static volatile int32_t t52 = -195581731;
static int16_t x213 = 4185;
volatile uint16_t x214 = UINT16_MAX;
uint16_t x220 = UINT16_MAX;
int32_t x221 = -83;
int64_t x222 = INT64_MIN;
uint8_t x223 = 0U;
int8_t x224 = INT8_MAX;
int64_t x226 = -1LL;
volatile int32_t x231 = -7;
uint64_t x234 = UINT64_MAX;
uint8_t x235 = 64U;
static volatile int64_t x246 = INT64_MIN;
int16_t x250 = INT16_MIN;
int16_t x258 = INT16_MIN;
int32_t t64 = -34;
uint8_t x263 = UINT8_MAX;
int8_t x269 = -5;
int32_t x273 = INT32_MIN;
uint16_t x275 = UINT16_MAX;
static uint32_t x278 = 14241U;
int8_t x289 = -14;
int32_t x292 = -1;
int8_t x295 = 1;
int32_t x298 = -1;
int16_t x300 = -1;
static volatile int32_t t74 = -128726;
volatile int16_t x305 = -1;
uint64_t x310 = 56980LLU;
static int64_t x311 = INT64_MIN;
int64_t x313 = INT64_MIN;
int8_t x335 = -1;
uint32_t x340 = UINT32_MAX;
int32_t x345 = -1;
volatile uint32_t x350 = 2034226U;
static int64_t x351 = INT64_MAX;
static uint32_t x355 = 18266U;
static volatile int64_t x363 = INT64_MAX;
int32_t t92 = 52;
volatile int64_t x376 = -49839283820072LL;
volatile int8_t x377 = -1;
static int32_t t94 = -2;
volatile int32_t t95 = 216927688;
static int64_t x388 = -7908063753944LL;
volatile int32_t t96 = 342290961;
static int64_t x399 = INT64_MIN;
static int64_t x400 = -1LL;
static uint64_t x402 = UINT64_MAX;
volatile int64_t x410 = INT64_MAX;
uint8_t x411 = 2U;
volatile int32_t t102 = -7380;
uint16_t x416 = 3453U;
int8_t x444 = INT8_MAX;
uint8_t x451 = UINT8_MAX;
volatile int32_t x456 = INT32_MIN;
volatile int32_t t113 = -96425410;
static uint16_t x465 = 15U;
volatile int8_t x467 = -24;
int8_t x479 = 2;
int32_t t119 = -3;
uint16_t x481 = 8877U;
int64_t x500 = 2340068394LL;
int16_t x511 = INT16_MIN;
int32_t x512 = INT32_MIN;
volatile int32_t t127 = -25;
uint32_t x517 = 1150797U;
int8_t x522 = INT8_MIN;
uint32_t x523 = 1U;
volatile uint16_t x531 = 39U;
volatile int64_t x536 = INT64_MIN;
uint8_t x540 = 15U;
int32_t t134 = -39;
volatile uint16_t x546 = 54U;
volatile int32_t t137 = -21;
static volatile uint8_t x554 = 7U;
uint16_t x557 = 15293U;
int32_t x562 = INT32_MIN;
int8_t x563 = 3;
static uint16_t x565 = 57U;
volatile int8_t x578 = -1;
int64_t x584 = INT64_MAX;
volatile int32_t t146 = 595036;
volatile uint64_t x593 = 50LLU;
uint16_t x598 = 9U;
uint8_t x602 = 113U;
static int64_t x603 = -6707LL;
int32_t t151 = 164946;
int16_t x612 = INT16_MIN;
static volatile int32_t t152 = -32;
int32_t t153 = -226;
static int8_t x618 = -1;
volatile int32_t t155 = 510631342;
int32_t x630 = INT32_MIN;
int64_t x638 = 650657LL;
uint64_t x646 = 1542955814098LLU;
uint16_t x648 = UINT16_MAX;
int8_t x652 = -1;
uint64_t x659 = UINT64_MAX;
int32_t x660 = INT32_MAX;
volatile int8_t x662 = -1;
volatile int16_t x667 = -25;
static uint32_t x672 = 3U;
uint64_t x673 = 708018225LLU;
uint16_t x675 = 7918U;
volatile int8_t x687 = INT8_MAX;
int32_t t171 = 477;
uint8_t x689 = 8U;
static uint32_t x690 = UINT32_MAX;
static volatile int32_t x692 = 3023;
uint32_t x700 = UINT32_MAX;
int64_t x710 = INT64_MAX;
uint32_t x713 = UINT32_MAX;
uint64_t x715 = 1815602788482746729LLU;
uint8_t x719 = 3U;
volatile int32_t t179 = -25;
int32_t x729 = 12462;
static volatile int16_t x735 = -3617;
int8_t x736 = INT8_MIN;
int8_t x738 = 1;
static int32_t t186 = -1;
uint64_t x755 = 1493232LLU;
static uint16_t x763 = 27443U;
volatile uint8_t x773 = 9U;
static int32_t t193 = 42577;
volatile int32_t t194 = -195834;
int64_t x784 = INT64_MIN;
static int32_t t196 = -10925;
int16_t x794 = INT16_MIN;
volatile uint64_t x796 = UINT64_MAX;


void f0(void) {
    	int64_t x1 = 109123246988782LL;
	int64_t x2 = -1685020564342LL;
	int8_t x3 = INT8_MAX;
	static int16_t x4 = 26;
	int32_t t0 = -19589726;

    t0 = ((x1==(x2&x3))>x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x6 = INT8_MIN;
	int16_t x7 = INT16_MAX;
	int8_t x8 = -21;
	static int32_t t1 = -57297;

    t1 = ((x5==(x6&x7))>x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = INT32_MIN;
	int8_t x10 = INT8_MIN;
	volatile uint16_t x11 = UINT16_MAX;
	int8_t x12 = 25;
	int32_t t2 = -248402252;

    t2 = ((x9==(x10&x11))>x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x13 = INT8_MIN;
	int32_t x15 = -1;
	int32_t t3 = 0;

    t3 = ((x13==(x14&x15))>x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = INT32_MAX;
	static volatile int32_t x18 = 52;
	int32_t x19 = INT32_MIN;
	int8_t x20 = INT8_MIN;
	static volatile int32_t t4 = -1;

    t4 = ((x17==(x18&x19))>x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile uint16_t x24 = UINT16_MAX;
	static volatile int32_t t5 = 730428990;

    t5 = ((x21==(x22&x23))>x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x25 = -1;
	uint32_t x26 = UINT32_MAX;
	static int32_t x27 = INT32_MAX;
	static int32_t x28 = INT32_MIN;
	static int32_t t6 = -7;

    t6 = ((x25==(x26&x27))>x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x30 = INT16_MAX;
	uint8_t x31 = UINT8_MAX;
	int32_t x32 = INT32_MAX;
	int32_t t7 = -6248073;

    t7 = ((x29==(x30&x31))>x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint64_t x34 = UINT64_MAX;
	volatile int32_t t8 = -65382209;

    t8 = ((x33==(x34&x35))>x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x37 = -1LL;
	uint8_t x38 = 1U;
	uint32_t x39 = 6U;
	int16_t x40 = INT16_MIN;
	int32_t t9 = -408147491;

    t9 = ((x37==(x38&x39))>x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = INT64_MIN;
	int64_t x42 = -343044832053986LL;
	volatile int16_t x44 = 1;

    t10 = ((x41==(x42&x43))>x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x47 = 6;
	int32_t t11 = 7;

    t11 = ((x45==(x46&x47))>x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = 150318;
	static volatile int64_t x51 = -65964LL;
	int8_t x52 = INT8_MAX;

    t12 = ((x49==(x50&x51))>x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint16_t x53 = 10732U;
	int8_t x54 = -1;
	int64_t x55 = INT64_MIN;
	uint64_t x56 = 1450718704973493455LLU;
	int32_t t13 = 2281391;

    t13 = ((x53==(x54&x55))>x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int16_t x59 = INT16_MAX;
	uint32_t x60 = UINT32_MAX;
	static int32_t t14 = 14;

    t14 = ((x57==(x58&x59))>x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = INT8_MIN;
	static int32_t x62 = INT32_MAX;
	int64_t x63 = 4006525099307252LL;
	int64_t x64 = INT64_MIN;
	static volatile int32_t t15 = -3216;

    t15 = ((x61==(x62&x63))>x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x65 = 3U;
	int32_t x66 = -1;
	volatile int64_t x67 = INT64_MIN;
	static volatile uint64_t x68 = UINT64_MAX;

    t16 = ((x65==(x66&x67))>x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int16_t x69 = INT16_MIN;
	int32_t x71 = INT32_MIN;
	uint16_t x72 = UINT16_MAX;
	int32_t t17 = -359;

    t17 = ((x69==(x70&x71))>x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x74 = INT32_MIN;
	int64_t x75 = INT64_MIN;
	uint32_t x76 = 2U;
	int32_t t18 = -52711;

    t18 = ((x73==(x74&x75))>x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint64_t x77 = 26304LLU;
	volatile int64_t x79 = -182751LL;
	int64_t x80 = INT64_MIN;
	volatile int32_t t19 = 45429;

    t19 = ((x77==(x78&x79))>x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = 296254;
	static int32_t x83 = -1;
	int64_t x84 = INT64_MIN;
	int32_t t20 = 8;

    t20 = ((x81==(x82&x83))>x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile uint16_t x85 = 9816U;
	uint16_t x86 = 1217U;
	int8_t x87 = 0;
	int32_t x88 = INT32_MIN;

    t21 = ((x85==(x86&x87))>x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x90 = -62021325;
	int32_t x92 = -3478277;
	int32_t t22 = 407;

    t22 = ((x89==(x90&x91))>x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint16_t x93 = UINT16_MAX;
	static int8_t x94 = -1;
	int32_t x95 = -1;
	int16_t x96 = INT16_MIN;
	static int32_t t23 = 38384214;

    t23 = ((x93==(x94&x95))>x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int8_t x97 = INT8_MIN;
	int8_t x98 = INT8_MIN;
	int64_t x100 = -14340LL;
	int32_t t24 = 579960;

    t24 = ((x97==(x98&x99))>x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x101 = -1;
	int16_t x103 = INT16_MAX;
	uint16_t x104 = 0U;
	int32_t t25 = -2;

    t25 = ((x101==(x102&x103))>x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint64_t x106 = UINT64_MAX;
	uint16_t x107 = UINT16_MAX;

    t26 = ((x105==(x106&x107))>x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int8_t x109 = -44;
	int32_t x110 = -480249239;
	int16_t x111 = INT16_MAX;
	static uint8_t x112 = 55U;
	int32_t t27 = -1;

    t27 = ((x109==(x110&x111))>x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x113 = -1;
	int64_t x115 = INT64_MAX;
	uint64_t x116 = 120710218LLU;
	int32_t t28 = -205558;

    t28 = ((x113==(x114&x115))>x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = -1;
	static uint64_t x118 = 3982691009LLU;
	static int64_t x119 = -1LL;
	volatile uint32_t x120 = 92954854U;

    t29 = ((x117==(x118&x119))>x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x121 = 915383U;
	volatile uint16_t x122 = 2U;
	int16_t x124 = 1;
	int32_t t30 = -85657;

    t30 = ((x121==(x122&x123))>x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = 1;
	uint8_t x127 = UINT8_MAX;
	volatile uint16_t x128 = 1584U;
	volatile int32_t t31 = 114647715;

    t31 = ((x125==(x126&x127))>x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int64_t x129 = 115648822853LL;
	int64_t x130 = -19158789LL;
	int64_t x132 = -1LL;
	volatile int32_t t32 = -6611;

    t32 = ((x129==(x130&x131))>x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = 7;
	int16_t x134 = INT16_MIN;
	int16_t x136 = -1;
	volatile int32_t t33 = 125554;

    t33 = ((x133==(x134&x135))>x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x137 = INT16_MIN;
	volatile uint64_t x138 = 2926LLU;
	int16_t x140 = -563;
	volatile int32_t t34 = -1922711;

    t34 = ((x137==(x138&x139))>x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x141 = -1;
	static int32_t x142 = INT32_MAX;
	int8_t x143 = -1;
	volatile int64_t x144 = INT64_MIN;
	volatile int32_t t35 = -3694;

    t35 = ((x141==(x142&x143))>x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x145 = INT8_MIN;
	int64_t x146 = INT64_MIN;
	volatile int16_t x147 = -1;
	static int32_t t36 = 7;

    t36 = ((x145==(x146&x147))>x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x149 = 59;
	volatile uint8_t x150 = 0U;
	volatile uint8_t x151 = UINT8_MAX;
	int8_t x152 = 0;
	int32_t t37 = -88;

    t37 = ((x149==(x150&x151))>x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x153 = 8U;
	static int16_t x154 = 0;
	int32_t x155 = INT32_MIN;
	static int64_t x156 = 150553064LL;
	int32_t t38 = -262434529;

    t38 = ((x153==(x154&x155))>x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int32_t x157 = INT32_MIN;
	uint8_t x158 = UINT8_MAX;
	static uint8_t x159 = 0U;
	int16_t x160 = -1;
	int32_t t39 = 825;

    t39 = ((x157==(x158&x159))>x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x161 = 0;
	static int64_t x162 = -1LL;
	int64_t x163 = -1LL;
	static int8_t x164 = INT8_MIN;
	int32_t t40 = -525102860;

    t40 = ((x161==(x162&x163))>x164);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x166 = INT16_MIN;
	static uint8_t x167 = 9U;
	int32_t x168 = INT32_MAX;
	int32_t t41 = 95947;

    t41 = ((x165==(x166&x167))>x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x169 = -1;
	uint64_t x170 = 85225LLU;
	uint32_t x171 = UINT32_MAX;
	int32_t x172 = INT32_MAX;
	int32_t t42 = 0;

    t42 = ((x169==(x170&x171))>x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x173 = -1;
	volatile int32_t x174 = INT32_MIN;
	volatile int64_t x176 = -1LL;

    t43 = ((x173==(x174&x175))>x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint64_t x177 = 731492LLU;
	volatile int64_t x179 = INT64_MAX;
	volatile int16_t x180 = INT16_MIN;
	volatile int32_t t44 = 430;

    t44 = ((x177==(x178&x179))>x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x181 = 2903U;
	uint64_t x182 = 33873LLU;
	int8_t x183 = INT8_MIN;
	uint32_t x184 = 5359U;

    t45 = ((x181==(x182&x183))>x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x185 = UINT32_MAX;
	static volatile uint8_t x186 = UINT8_MAX;
	int64_t x187 = INT64_MIN;
	volatile int16_t x188 = -1;

    t46 = ((x185==(x186&x187))>x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = -1;
	volatile int16_t x190 = 15049;
	int64_t x191 = INT64_MAX;
	int16_t x192 = INT16_MIN;

    t47 = ((x189==(x190&x191))>x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x193 = INT32_MAX;
	volatile int32_t x195 = INT32_MAX;
	int8_t x196 = 20;
	int32_t t48 = 38245341;

    t48 = ((x193==(x194&x195))>x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x197 = INT32_MIN;
	uint64_t x198 = 3823383536308496LLU;
	uint64_t x199 = 29334296538322112LLU;
	uint32_t x200 = UINT32_MAX;

    t49 = ((x197==(x198&x199))>x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x201 = INT16_MIN;
	static int8_t x202 = INT8_MIN;
	volatile uint16_t x203 = 763U;
	int8_t x204 = -1;
	int32_t t50 = 245135;

    t50 = ((x201==(x202&x203))>x204);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x205 = 12;
	int32_t x206 = INT32_MIN;
	static uint32_t x207 = 5892U;
	static int32_t t51 = 44472185;

    t51 = ((x205==(x206&x207))>x208);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x209 = INT16_MIN;
	uint32_t x210 = UINT32_MAX;
	uint64_t x211 = UINT64_MAX;
	int16_t x212 = INT16_MIN;

    t52 = ((x209==(x210&x211))>x212);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x215 = 2U;
	int16_t x216 = -536;
	volatile int32_t t53 = 0;

    t53 = ((x213==(x214&x215))>x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x217 = 0LL;
	int32_t x218 = INT32_MAX;
	volatile int64_t x219 = 12601316824132905LL;
	int32_t t54 = 1;

    t54 = ((x217==(x218&x219))>x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int32_t t55 = -472868445;

    t55 = ((x221==(x222&x223))>x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x225 = 0;
	int32_t x227 = INT32_MIN;
	volatile int64_t x228 = -7846346188448LL;
	static int32_t t56 = 14;

    t56 = ((x225==(x226&x227))>x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x229 = 5289114392769439LL;
	uint8_t x230 = UINT8_MAX;
	static int64_t x232 = INT64_MIN;
	volatile int32_t t57 = -6245893;

    t57 = ((x229==(x230&x231))>x232);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = -1LL;
	static int64_t x236 = INT64_MIN;
	int32_t t58 = 13641;

    t58 = ((x233==(x234&x235))>x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile uint16_t x237 = 537U;
	int16_t x238 = -141;
	uint64_t x239 = 7486894168LLU;
	int32_t x240 = -648;
	int32_t t59 = 463915;

    t59 = ((x237==(x238&x239))>x240);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x241 = 26593;
	static int8_t x242 = -3;
	static volatile uint64_t x243 = UINT64_MAX;
	volatile uint8_t x244 = 4U;
	int32_t t60 = 288;

    t60 = ((x241==(x242&x243))>x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x245 = 1;
	static int8_t x247 = 0;
	volatile int8_t x248 = INT8_MIN;
	int32_t t61 = 1;

    t61 = ((x245==(x246&x247))>x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x249 = INT64_MIN;
	int64_t x251 = 42143488652111LL;
	int16_t x252 = INT16_MIN;
	int32_t t62 = -732;

    t62 = ((x249==(x250&x251))>x252);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x253 = UINT64_MAX;
	volatile int32_t x254 = INT32_MIN;
	volatile int16_t x255 = INT16_MIN;
	volatile uint32_t x256 = 3U;
	int32_t t63 = 35;

    t63 = ((x253==(x254&x255))>x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x257 = INT32_MAX;
	int16_t x259 = -2978;
	uint64_t x260 = 505816989270181421LLU;

    t64 = ((x257==(x258&x259))>x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x261 = INT16_MIN;
	static int64_t x262 = INT64_MIN;
	int64_t x264 = INT64_MIN;
	static volatile int32_t t65 = -69801121;

    t65 = ((x261==(x262&x263))>x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x265 = -1LL;
	static uint32_t x266 = 1U;
	uint64_t x267 = 1334LLU;
	static uint32_t x268 = UINT32_MAX;
	int32_t t66 = 23956786;

    t66 = ((x265==(x266&x267))>x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x270 = 0U;
	volatile int32_t x271 = -1;
	int16_t x272 = INT16_MAX;
	static int32_t t67 = 6950;

    t67 = ((x269==(x270&x271))>x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x274 = INT8_MIN;
	volatile int8_t x276 = INT8_MIN;
	volatile int32_t t68 = -103882;

    t68 = ((x273==(x274&x275))>x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint8_t x277 = UINT8_MAX;
	int8_t x279 = 0;
	volatile int64_t x280 = INT64_MIN;
	static volatile int32_t t69 = 1;

    t69 = ((x277==(x278&x279))>x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = INT64_MIN;
	int16_t x282 = 1;
	volatile uint32_t x283 = 102454295U;
	volatile int8_t x284 = INT8_MIN;
	static volatile int32_t t70 = 745022251;

    t70 = ((x281==(x282&x283))>x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x285 = INT8_MIN;
	volatile uint16_t x286 = 25511U;
	uint8_t x287 = UINT8_MAX;
	uint64_t x288 = UINT64_MAX;
	volatile int32_t t71 = -8066982;

    t71 = ((x285==(x286&x287))>x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int64_t x290 = INT64_MIN;
	volatile int64_t x291 = 827758179322LL;
	int32_t t72 = -1;

    t72 = ((x289==(x290&x291))>x292);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint64_t x293 = 67888204461094627LLU;
	int64_t x294 = 29LL;
	uint8_t x296 = UINT8_MAX;
	int32_t t73 = -23728;

    t73 = ((x293==(x294&x295))>x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x297 = INT32_MIN;
	uint64_t x299 = 98376663LLU;

    t74 = ((x297==(x298&x299))>x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x301 = INT32_MAX;
	uint16_t x302 = 28724U;
	uint16_t x303 = 105U;
	int64_t x304 = -2417160379LL;
	static int32_t t75 = -157046;

    t75 = ((x301==(x302&x303))>x304);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x306 = 26737941;
	static volatile int16_t x307 = INT16_MIN;
	static int16_t x308 = INT16_MAX;
	volatile int32_t t76 = 45556;

    t76 = ((x305==(x306&x307))>x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint16_t x309 = 2025U;
	volatile int32_t x312 = INT32_MIN;
	int32_t t77 = 46;

    t77 = ((x309==(x310&x311))>x312);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint64_t x314 = 48080252331LLU;
	uint8_t x315 = 114U;
	int32_t x316 = -1;
	static volatile int32_t t78 = -304664006;

    t78 = ((x313==(x314&x315))>x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x317 = INT32_MAX;
	uint32_t x318 = 29563965U;
	volatile uint8_t x319 = 4U;
	int32_t x320 = 2778;
	volatile int32_t t79 = -828140371;

    t79 = ((x317==(x318&x319))>x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x321 = -1;
	volatile uint32_t x322 = 12191566U;
	int16_t x323 = 1;
	int64_t x324 = INT64_MAX;
	volatile int32_t t80 = 14019;

    t80 = ((x321==(x322&x323))>x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static int32_t x325 = 453478406;
	int32_t x326 = INT32_MIN;
	int32_t x327 = INT32_MAX;
	volatile uint32_t x328 = 23U;
	static volatile int32_t t81 = -30;

    t81 = ((x325==(x326&x327))>x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x329 = 42;
	uint64_t x330 = UINT64_MAX;
	int64_t x331 = 2116LL;
	static uint32_t x332 = UINT32_MAX;
	volatile int32_t t82 = -6;

    t82 = ((x329==(x330&x331))>x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x333 = -1LL;
	int16_t x334 = INT16_MIN;
	volatile int32_t x336 = 3;
	volatile int32_t t83 = 76017749;

    t83 = ((x333==(x334&x335))>x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x337 = 94105262679947076LLU;
	uint32_t x338 = 2U;
	static volatile uint8_t x339 = 42U;
	int32_t t84 = 3;

    t84 = ((x337==(x338&x339))>x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int32_t x341 = INT32_MIN;
	static int16_t x342 = INT16_MIN;
	uint16_t x343 = 199U;
	uint8_t x344 = 94U;
	int32_t t85 = 5254992;

    t85 = ((x341==(x342&x343))>x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x346 = INT16_MIN;
	static uint16_t x347 = 4180U;
	int8_t x348 = INT8_MAX;
	volatile int32_t t86 = -6104;

    t86 = ((x345==(x346&x347))>x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint32_t x349 = 450U;
	volatile int32_t x352 = INT32_MIN;
	int32_t t87 = -36142031;

    t87 = ((x349==(x350&x351))>x352);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x353 = 1U;
	int16_t x354 = INT16_MIN;
	uint8_t x356 = 1U;
	int32_t t88 = -174998724;

    t88 = ((x353==(x354&x355))>x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint32_t x357 = 555223509U;
	int64_t x358 = -105498617856037LL;
	static int16_t x359 = INT16_MIN;
	int64_t x360 = -1LL;
	int32_t t89 = -88858;

    t89 = ((x357==(x358&x359))>x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x361 = -1;
	uint16_t x362 = UINT16_MAX;
	int8_t x364 = INT8_MAX;
	int32_t t90 = -20;

    t90 = ((x361==(x362&x363))>x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int16_t x365 = INT16_MIN;
	static int64_t x366 = -22LL;
	int64_t x367 = INT64_MAX;
	int8_t x368 = -1;
	volatile int32_t t91 = -1274;

    t91 = ((x365==(x366&x367))>x368);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x369 = 576;
	uint16_t x370 = 22U;
	volatile int8_t x371 = -1;
	static int8_t x372 = INT8_MIN;

    t92 = ((x369==(x370&x371))>x372);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x373 = UINT32_MAX;
	int64_t x374 = -3174LL;
	int16_t x375 = INT16_MIN;
	volatile int32_t t93 = -87;

    t93 = ((x373==(x374&x375))>x376);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x378 = INT64_MIN;
	int64_t x379 = INT64_MIN;
	uint32_t x380 = 15U;

    t94 = ((x377==(x378&x379))>x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x381 = INT64_MIN;
	uint32_t x382 = 4556408U;
	int32_t x383 = -307;
	static volatile int64_t x384 = INT64_MIN;

    t95 = ((x381==(x382&x383))>x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint64_t x385 = UINT64_MAX;
	uint16_t x386 = 15950U;
	uint32_t x387 = 3U;

    t96 = ((x385==(x386&x387))>x388);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint8_t x389 = 18U;
	static int32_t x390 = 297;
	int32_t x391 = 0;
	static volatile uint32_t x392 = 431506649U;
	volatile int32_t t97 = -331;

    t97 = ((x389==(x390&x391))>x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint8_t x393 = 10U;
	uint64_t x394 = 43748465575963935LLU;
	int64_t x395 = -1LL;
	static uint16_t x396 = UINT16_MAX;
	static int32_t t98 = 1;

    t98 = ((x393==(x394&x395))>x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x397 = INT32_MIN;
	int16_t x398 = -1;
	int32_t t99 = 4063;

    t99 = ((x397==(x398&x399))>x400);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x401 = INT32_MAX;
	uint32_t x403 = 43584U;
	static int32_t x404 = -1;
	volatile int32_t t100 = 974;

    t100 = ((x401==(x402&x403))>x404);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x405 = INT16_MIN;
	static int8_t x406 = 1;
	uint16_t x407 = 1689U;
	static int8_t x408 = 2;
	static int32_t t101 = -2925912;

    t101 = ((x405==(x406&x407))>x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x409 = 42635711814LL;
	int32_t x412 = INT32_MAX;

    t102 = ((x409==(x410&x411))>x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x413 = INT16_MAX;
	int8_t x414 = 1;
	int8_t x415 = INT8_MIN;
	volatile int32_t t103 = -584;

    t103 = ((x413==(x414&x415))>x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint64_t x417 = 20LLU;
	int64_t x418 = -1LL;
	static volatile int16_t x419 = INT16_MAX;
	uint64_t x420 = 6LLU;
	volatile int32_t t104 = 2785237;

    t104 = ((x417==(x418&x419))>x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint8_t x421 = 62U;
	int8_t x422 = INT8_MIN;
	uint16_t x423 = 1235U;
	volatile int32_t x424 = INT32_MAX;
	static int32_t t105 = -144255858;

    t105 = ((x421==(x422&x423))>x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x425 = INT16_MIN;
	uint8_t x426 = 102U;
	int32_t x427 = 3792804;
	static int64_t x428 = INT64_MAX;
	volatile int32_t t106 = 107106;

    t106 = ((x425==(x426&x427))>x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x429 = INT64_MIN;
	int64_t x430 = -1LL;
	static volatile int16_t x431 = INT16_MAX;
	int64_t x432 = INT64_MAX;
	volatile int32_t t107 = 58642775;

    t107 = ((x429==(x430&x431))>x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int64_t x433 = INT64_MIN;
	int16_t x434 = INT16_MAX;
	int8_t x435 = 3;
	uint16_t x436 = 389U;
	volatile int32_t t108 = 698609;

    t108 = ((x433==(x434&x435))>x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x437 = 88616826LL;
	uint16_t x438 = 270U;
	int8_t x439 = -1;
	volatile int8_t x440 = 6;
	int32_t t109 = 3872;

    t109 = ((x437==(x438&x439))>x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x441 = INT16_MIN;
	static uint32_t x442 = 682787U;
	int8_t x443 = INT8_MIN;
	int32_t t110 = -49867791;

    t110 = ((x441==(x442&x443))>x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int64_t x445 = -1LL;
	static int8_t x446 = INT8_MIN;
	int16_t x447 = -4;
	int8_t x448 = INT8_MAX;
	int32_t t111 = -157467781;

    t111 = ((x445==(x446&x447))>x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint16_t x449 = 1777U;
	uint32_t x450 = UINT32_MAX;
	int32_t x452 = -1;
	static int32_t t112 = 12;

    t112 = ((x449==(x450&x451))>x452);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x453 = UINT8_MAX;
	static int8_t x454 = INT8_MIN;
	uint32_t x455 = 124U;

    t113 = ((x453==(x454&x455))>x456);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x457 = 4;
	int8_t x458 = 2;
	uint8_t x459 = 105U;
	int8_t x460 = INT8_MIN;
	volatile int32_t t114 = 33023479;

    t114 = ((x457==(x458&x459))>x460);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int32_t x461 = INT32_MIN;
	int8_t x462 = INT8_MAX;
	int16_t x463 = INT16_MIN;
	int16_t x464 = INT16_MIN;
	int32_t t115 = 868352;

    t115 = ((x461==(x462&x463))>x464);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x466 = 72;
	volatile int32_t x468 = INT32_MIN;
	int32_t t116 = -458;

    t116 = ((x465==(x466&x467))>x468);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint8_t x469 = 0U;
	int64_t x470 = INT64_MIN;
	static int8_t x471 = INT8_MAX;
	static int64_t x472 = INT64_MAX;
	volatile int32_t t117 = -269627;

    t117 = ((x469==(x470&x471))>x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x473 = INT32_MIN;
	uint8_t x474 = UINT8_MAX;
	static int16_t x475 = INT16_MIN;
	static int32_t x476 = INT32_MIN;
	int32_t t118 = -510367;

    t118 = ((x473==(x474&x475))>x476);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x477 = INT8_MIN;
	uint8_t x478 = 0U;
	uint32_t x480 = 3431501U;

    t119 = ((x477==(x478&x479))>x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x482 = INT64_MIN;
	int32_t x483 = INT32_MIN;
	int64_t x484 = INT64_MIN;
	volatile int32_t t120 = -115377;

    t120 = ((x481==(x482&x483))>x484);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x485 = INT64_MIN;
	volatile int8_t x486 = -1;
	static uint64_t x487 = 8212889935448LLU;
	uint32_t x488 = UINT32_MAX;
	int32_t t121 = -3;

    t121 = ((x485==(x486&x487))>x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int32_t x489 = 2311102;
	int8_t x490 = INT8_MIN;
	volatile uint32_t x491 = UINT32_MAX;
	int16_t x492 = -1;
	static volatile int32_t t122 = -1;

    t122 = ((x489==(x490&x491))>x492);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x493 = 415879925927510LL;
	int8_t x494 = -1;
	static uint16_t x495 = 1U;
	uint8_t x496 = UINT8_MAX;
	volatile int32_t t123 = 1705980;

    t123 = ((x493==(x494&x495))>x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint64_t x497 = 65145LLU;
	int16_t x498 = INT16_MIN;
	static volatile uint64_t x499 = 3116592441414115LLU;
	volatile int32_t t124 = -48353597;

    t124 = ((x497==(x498&x499))>x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x501 = INT32_MIN;
	int16_t x502 = -1;
	int32_t x503 = INT32_MIN;
	volatile uint16_t x504 = 100U;
	volatile int32_t t125 = -10962506;

    t125 = ((x501==(x502&x503))>x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x505 = -1LL;
	int64_t x506 = INT64_MAX;
	static volatile uint16_t x507 = UINT16_MAX;
	int16_t x508 = INT16_MAX;
	volatile int32_t t126 = 18;

    t126 = ((x505==(x506&x507))>x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x509 = -139421;
	uint32_t x510 = 18691U;

    t127 = ((x509==(x510&x511))>x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x513 = UINT64_MAX;
	int64_t x514 = 1542298470378LL;
	int16_t x515 = INT16_MIN;
	volatile int32_t x516 = -1;
	volatile int32_t t128 = 960690;

    t128 = ((x513==(x514&x515))>x516);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x518 = 16055;
	int16_t x519 = 483;
	static volatile uint8_t x520 = 7U;
	volatile int32_t t129 = -1224240;

    t129 = ((x517==(x518&x519))>x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile uint32_t x521 = 2U;
	int32_t x524 = INT32_MAX;
	int32_t t130 = 249312;

    t130 = ((x521==(x522&x523))>x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x525 = INT8_MIN;
	int64_t x526 = INT64_MIN;
	uint8_t x527 = 12U;
	static uint16_t x528 = 180U;
	static volatile int32_t t131 = 269;

    t131 = ((x525==(x526&x527))>x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int8_t x529 = INT8_MIN;
	volatile int32_t x530 = -138539;
	uint16_t x532 = UINT16_MAX;
	int32_t t132 = -60;

    t132 = ((x529==(x530&x531))>x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int32_t x533 = 7348;
	volatile int16_t x534 = INT16_MIN;
	int64_t x535 = INT64_MAX;
	static int32_t t133 = 1;

    t133 = ((x533==(x534&x535))>x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x537 = UINT32_MAX;
	static int64_t x538 = INT64_MIN;
	volatile int8_t x539 = INT8_MIN;

    t134 = ((x537==(x538&x539))>x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x541 = INT32_MIN;
	uint16_t x542 = UINT16_MAX;
	static uint32_t x543 = UINT32_MAX;
	volatile int64_t x544 = INT64_MIN;
	int32_t t135 = 25503;

    t135 = ((x541==(x542&x543))>x544);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x545 = INT32_MIN;
	uint64_t x547 = 1037616804LLU;
	int32_t x548 = -1;
	int32_t t136 = 27;

    t136 = ((x545==(x546&x547))>x548);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint16_t x549 = 0U;
	volatile int64_t x550 = INT64_MAX;
	int32_t x551 = INT32_MAX;
	uint16_t x552 = 156U;

    t137 = ((x549==(x550&x551))>x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x553 = 14012;
	int16_t x555 = INT16_MAX;
	int16_t x556 = INT16_MIN;
	int32_t t138 = -15766;

    t138 = ((x553==(x554&x555))>x556);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x558 = -1;
	int8_t x559 = 24;
	int64_t x560 = -8665592006815277LL;
	volatile int32_t t139 = 20444713;

    t139 = ((x557==(x558&x559))>x560);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static int64_t x561 = 951830240130541LL;
	int32_t x564 = 61241;
	volatile int32_t t140 = 0;

    t140 = ((x561==(x562&x563))>x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x566 = INT16_MAX;
	volatile uint32_t x567 = 24U;
	volatile int16_t x568 = -1;
	volatile int32_t t141 = 14121;

    t141 = ((x565==(x566&x567))>x568);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x569 = -1LL;
	static int8_t x570 = -1;
	int8_t x571 = INT8_MIN;
	int64_t x572 = -1LL;
	static int32_t t142 = -26434049;

    t142 = ((x569==(x570&x571))>x572);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x573 = INT64_MIN;
	volatile int16_t x574 = 157;
	int64_t x575 = -1935461436LL;
	int8_t x576 = -1;
	volatile int32_t t143 = -419601524;

    t143 = ((x573==(x574&x575))>x576);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x577 = INT64_MIN;
	static volatile int32_t x579 = INT32_MIN;
	volatile uint64_t x580 = UINT64_MAX;
	int32_t t144 = -266564876;

    t144 = ((x577==(x578&x579))>x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int32_t x581 = 127;
	volatile uint8_t x582 = UINT8_MAX;
	uint64_t x583 = 416926371434192344LLU;
	int32_t t145 = -6;

    t145 = ((x581==(x582&x583))>x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = INT16_MIN;
	int8_t x586 = -1;
	int64_t x587 = -28419536LL;
	uint64_t x588 = 127LLU;

    t146 = ((x585==(x586&x587))>x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x589 = UINT64_MAX;
	int64_t x590 = -1LL;
	static volatile int16_t x591 = INT16_MIN;
	volatile uint64_t x592 = UINT64_MAX;
	volatile int32_t t147 = 4874;

    t147 = ((x589==(x590&x591))>x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x594 = 124373809U;
	int8_t x595 = -1;
	int32_t x596 = 1;
	int32_t t148 = -22918;

    t148 = ((x593==(x594&x595))>x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint8_t x597 = UINT8_MAX;
	uint64_t x599 = 387808456675LLU;
	uint32_t x600 = UINT32_MAX;
	volatile int32_t t149 = -753647398;

    t149 = ((x597==(x598&x599))>x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile uint64_t x601 = UINT64_MAX;
	int32_t x604 = INT32_MIN;
	volatile int32_t t150 = -1;

    t150 = ((x601==(x602&x603))>x604);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int8_t x605 = 6;
	int64_t x606 = 13LL;
	int8_t x607 = -12;
	int32_t x608 = INT32_MAX;

    t151 = ((x605==(x606&x607))>x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static int32_t x609 = 6714687;
	int32_t x610 = INT32_MIN;
	int8_t x611 = INT8_MAX;

    t152 = ((x609==(x610&x611))>x612);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x613 = -1;
	int8_t x614 = -35;
	uint32_t x615 = 32063957U;
	int64_t x616 = INT64_MIN;

    t153 = ((x613==(x614&x615))>x616);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static int64_t x617 = -154216961952692LL;
	int32_t x619 = -3583;
	uint8_t x620 = UINT8_MAX;
	volatile int32_t t154 = -8;

    t154 = ((x617==(x618&x619))>x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x621 = INT8_MIN;
	static int8_t x622 = INT8_MIN;
	volatile uint64_t x623 = 13628953LLU;
	uint64_t x624 = 20779329531LLU;

    t155 = ((x621==(x622&x623))>x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x625 = 412678;
	static volatile int8_t x626 = 4;
	int16_t x627 = -1;
	int64_t x628 = -1LL;
	int32_t t156 = -31;

    t156 = ((x625==(x626&x627))>x628);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x629 = 2239U;
	uint16_t x631 = UINT16_MAX;
	int64_t x632 = INT64_MIN;
	static int32_t t157 = 117834;

    t157 = ((x629==(x630&x631))>x632);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x633 = -2;
	static uint32_t x634 = 323236960U;
	int8_t x635 = INT8_MIN;
	static volatile int64_t x636 = -483398220LL;
	int32_t t158 = 1;

    t158 = ((x633==(x634&x635))>x636);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static int8_t x637 = INT8_MIN;
	uint64_t x639 = 26667899LLU;
	uint32_t x640 = UINT32_MAX;
	volatile int32_t t159 = 15;

    t159 = ((x637==(x638&x639))>x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static int8_t x641 = -1;
	static int16_t x642 = -1;
	uint32_t x643 = 217U;
	int32_t x644 = -1;
	int32_t t160 = 31273008;

    t160 = ((x641==(x642&x643))>x644);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x645 = INT16_MIN;
	int64_t x647 = 80531816244683829LL;
	volatile int32_t t161 = 418692079;

    t161 = ((x645==(x646&x647))>x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint16_t x649 = 230U;
	static int32_t x650 = -285338;
	uint8_t x651 = UINT8_MAX;
	volatile int32_t t162 = 101914886;

    t162 = ((x649==(x650&x651))>x652);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int16_t x653 = 16193;
	int16_t x654 = 2386;
	volatile uint64_t x655 = UINT64_MAX;
	static int32_t x656 = INT32_MIN;
	volatile int32_t t163 = 22;

    t163 = ((x653==(x654&x655))>x656);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x657 = UINT64_MAX;
	uint64_t x658 = 59880LLU;
	int32_t t164 = -1581;

    t164 = ((x657==(x658&x659))>x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x661 = INT32_MIN;
	static int64_t x663 = -1LL;
	volatile int16_t x664 = -1;
	int32_t t165 = -683408;

    t165 = ((x661==(x662&x663))>x664);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x665 = INT32_MAX;
	int8_t x666 = INT8_MAX;
	uint8_t x668 = 28U;
	static int32_t t166 = 55176;

    t166 = ((x665==(x666&x667))>x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x669 = INT32_MIN;
	uint32_t x670 = 35U;
	volatile int8_t x671 = 0;
	static int32_t t167 = 299;

    t167 = ((x669==(x670&x671))>x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x674 = 41411915211322LLU;
	int32_t x676 = 1810;
	int32_t t168 = 1451;

    t168 = ((x673==(x674&x675))>x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint32_t x677 = 59325U;
	volatile uint32_t x678 = 29U;
	int64_t x679 = -166LL;
	static int16_t x680 = -1;
	int32_t t169 = -879782280;

    t169 = ((x677==(x678&x679))>x680);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x681 = 245LL;
	uint8_t x682 = UINT8_MAX;
	int8_t x683 = -1;
	static int8_t x684 = INT8_MAX;
	static volatile int32_t t170 = 32740;

    t170 = ((x681==(x682&x683))>x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x685 = INT16_MIN;
	static int32_t x686 = -502991;
	int64_t x688 = -906177985LL;

    t171 = ((x685==(x686&x687))>x688);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x691 = INT32_MIN;
	int32_t t172 = -486898164;

    t172 = ((x689==(x690&x691))>x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x693 = 11564U;
	int8_t x694 = INT8_MAX;
	uint16_t x695 = 12261U;
	static volatile int32_t x696 = INT32_MAX;
	volatile int32_t t173 = 95774136;

    t173 = ((x693==(x694&x695))>x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x697 = -1;
	volatile uint64_t x698 = 12850231582LLU;
	int16_t x699 = 5;
	static volatile int32_t t174 = -32303;

    t174 = ((x697==(x698&x699))>x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int8_t x701 = INT8_MAX;
	static int8_t x702 = 21;
	int8_t x703 = INT8_MAX;
	volatile int8_t x704 = INT8_MIN;
	volatile int32_t t175 = -202979;

    t175 = ((x701==(x702&x703))>x704);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x705 = 3701340LL;
	static uint16_t x706 = 3U;
	static int8_t x707 = INT8_MIN;
	volatile uint16_t x708 = 15U;
	int32_t t176 = -6647121;

    t176 = ((x705==(x706&x707))>x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint32_t x709 = 983356U;
	int64_t x711 = INT64_MAX;
	volatile int64_t x712 = -8780727684LL;
	int32_t t177 = -5253613;

    t177 = ((x709==(x710&x711))>x712);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x714 = -1;
	uint64_t x716 = 17152028654011LLU;
	int32_t t178 = 1;

    t178 = ((x713==(x714&x715))>x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x717 = INT8_MIN;
	int8_t x718 = -31;
	uint32_t x720 = 74U;

    t179 = ((x717==(x718&x719))>x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int64_t x721 = INT64_MAX;
	int32_t x722 = INT32_MIN;
	volatile uint8_t x723 = UINT8_MAX;
	static int32_t x724 = INT32_MIN;
	volatile int32_t t180 = -254354;

    t180 = ((x721==(x722&x723))>x724);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static int64_t x725 = INT64_MIN;
	static uint16_t x726 = 6U;
	volatile int64_t x727 = INT64_MIN;
	uint32_t x728 = 12524U;
	volatile int32_t t181 = -3;

    t181 = ((x725==(x726&x727))>x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x730 = INT32_MIN;
	int64_t x731 = INT64_MIN;
	static int32_t x732 = 9;
	volatile int32_t t182 = -29093491;

    t182 = ((x729==(x730&x731))>x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x733 = 0;
	int16_t x734 = -1;
	volatile int32_t t183 = -454;

    t183 = ((x733==(x734&x735))>x736);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x737 = INT16_MIN;
	int16_t x739 = 1507;
	static int8_t x740 = -1;
	volatile int32_t t184 = 356174853;

    t184 = ((x737==(x738&x739))>x740);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x741 = UINT32_MAX;
	int16_t x742 = -2;
	uint64_t x743 = 8835855005064934933LLU;
	uint32_t x744 = 0U;
	int32_t t185 = 5068104;

    t185 = ((x741==(x742&x743))>x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x745 = INT16_MIN;
	int64_t x746 = -1LL;
	uint16_t x747 = UINT16_MAX;
	static int64_t x748 = INT64_MAX;

    t186 = ((x745==(x746&x747))>x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x749 = -4;
	uint8_t x750 = 39U;
	static volatile int16_t x751 = INT16_MIN;
	int64_t x752 = INT64_MAX;
	volatile int32_t t187 = -15045;

    t187 = ((x749==(x750&x751))>x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x753 = -4266407LL;
	uint32_t x754 = 3U;
	int32_t x756 = 592528;
	static volatile int32_t t188 = -932929689;

    t188 = ((x753==(x754&x755))>x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x757 = -6;
	uint64_t x758 = 245590001097068LLU;
	int64_t x759 = 358081325788LL;
	uint64_t x760 = UINT64_MAX;
	int32_t t189 = -22168604;

    t189 = ((x757==(x758&x759))>x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint16_t x761 = UINT16_MAX;
	int8_t x762 = INT8_MAX;
	int16_t x764 = -7472;
	static volatile int32_t t190 = 1;

    t190 = ((x761==(x762&x763))>x764);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int64_t x765 = INT64_MIN;
	int64_t x766 = INT64_MIN;
	volatile int32_t x767 = -149405495;
	int32_t x768 = 916;
	volatile int32_t t191 = 1020;

    t191 = ((x765==(x766&x767))>x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x769 = UINT64_MAX;
	uint32_t x770 = 903U;
	static int32_t x771 = INT32_MAX;
	int16_t x772 = -1;
	volatile int32_t t192 = -288;

    t192 = ((x769==(x770&x771))>x772);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x774 = 109;
	static int32_t x775 = INT32_MIN;
	volatile int16_t x776 = -1;

    t193 = ((x773==(x774&x775))>x776);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x777 = UINT16_MAX;
	int32_t x778 = -1;
	int8_t x779 = INT8_MAX;
	static int64_t x780 = 7LL;

    t194 = ((x777==(x778&x779))>x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x781 = UINT16_MAX;
	int8_t x782 = INT8_MAX;
	static int64_t x783 = -1LL;
	int32_t t195 = -1693673;

    t195 = ((x781==(x782&x783))>x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint16_t x785 = 21012U;
	int32_t x786 = INT32_MAX;
	uint16_t x787 = 0U;
	uint64_t x788 = 1LLU;

    t196 = ((x785==(x786&x787))>x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x789 = INT8_MIN;
	uint64_t x790 = UINT64_MAX;
	uint32_t x791 = 2U;
	volatile uint32_t x792 = UINT32_MAX;
	static int32_t t197 = -73;

    t197 = ((x789==(x790&x791))>x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x793 = -75672;
	int16_t x795 = -1;
	static int32_t t198 = -9;

    t198 = ((x793==(x794&x795))>x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x797 = 0;
	int64_t x798 = 844088LL;
	int8_t x799 = -10;
	volatile int16_t x800 = -1;
	volatile int32_t t199 = -30494;

    t199 = ((x797==(x798&x799))>x800);

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

