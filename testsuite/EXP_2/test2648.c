
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

static volatile int32_t t0 = -18;
int64_t x5 = INT64_MIN;
uint64_t x12 = UINT64_MAX;
int8_t x16 = INT8_MAX;
static int32_t t4 = 591239;
uint32_t x26 = 222391U;
volatile int32_t t6 = 4450550;
int32_t x31 = INT32_MAX;
uint16_t x32 = 161U;
volatile int32_t t9 = 66776;
static int32_t t10 = -713566;
uint16_t x47 = UINT16_MAX;
int32_t t11 = 303232;
static int32_t x55 = -1;
uint64_t x61 = 2880044996LLU;
int8_t x62 = INT8_MIN;
static volatile int32_t x74 = INT32_MIN;
int32_t x97 = -1;
int64_t x111 = INT64_MAX;
static int16_t x119 = INT16_MIN;
volatile uint64_t t25 = 27653LLU;
uint16_t x122 = 0U;
static int8_t x127 = -1;
int8_t x128 = INT8_MIN;
volatile uint16_t x129 = 190U;
int32_t x130 = INT32_MIN;
volatile int64_t t29 = 192210760430LL;
int64_t x146 = INT64_MAX;
volatile uint16_t x154 = UINT16_MAX;
uint16_t x162 = UINT16_MAX;
int16_t x170 = INT16_MIN;
int64_t x173 = INT64_MIN;
int64_t x176 = 3LL;
static volatile int64_t t36 = 4547107061LL;
int16_t x195 = -1;
static volatile uint32_t x199 = 3854725U;
int32_t x200 = INT32_MAX;
int64_t x203 = INT64_MIN;
int64_t x211 = INT64_MIN;
static int16_t x215 = INT16_MIN;
volatile uint8_t x224 = 2U;
int64_t x232 = 21LL;
int16_t x236 = INT16_MIN;
int64_t x240 = INT64_MAX;
int64_t t51 = 424806572LL;
uint16_t x248 = 12U;
int16_t x252 = -1;
volatile int32_t t53 = 1;
static uint8_t x261 = UINT8_MAX;
static uint64_t x262 = 2072920001LLU;
static int16_t x265 = 1229;
int8_t x267 = -1;
volatile int64_t x272 = 68335414603684007LL;
static uint32_t x283 = 1U;
int32_t x285 = INT32_MIN;
volatile uint32_t x287 = UINT32_MAX;
volatile int8_t x293 = -62;
volatile int32_t x295 = -1;
int32_t x296 = -1;
uint16_t x297 = 13U;
static int16_t x301 = INT16_MAX;
int8_t x304 = 11;
static int32_t t64 = 183075;
static uint16_t x305 = 4688U;
int64_t x310 = -1LL;
uint16_t x312 = 6U;
int64_t x313 = -5LL;
static volatile int32_t t67 = -975722;
static volatile uint8_t x317 = 1U;
static int64_t x318 = 22909336482936LL;
volatile int8_t x320 = -5;
int32_t t68 = 198;
uint16_t x335 = 1U;
static volatile int32_t t71 = 18879;
static int32_t t72 = -116330120;
volatile uint32_t x352 = 1190772935U;
int16_t x354 = -100;
uint16_t x355 = UINT16_MAX;
int8_t x359 = INT8_MIN;
int32_t x363 = INT32_MAX;
int32_t x368 = INT32_MAX;
int32_t t80 = -868687282;
int32_t x385 = INT32_MAX;
volatile int64_t x387 = -1LL;
volatile uint32_t x389 = UINT32_MAX;
uint32_t x391 = 508U;
uint8_t x399 = UINT8_MAX;
int32_t x414 = INT32_MIN;
int32_t t88 = -1316;
uint64_t x422 = 14LLU;
int32_t t89 = 671512;
int8_t x425 = INT8_MAX;
uint16_t x426 = UINT16_MAX;
int8_t x430 = INT8_MIN;
static int32_t t94 = -123450;
volatile int64_t t95 = -246879881LL;
volatile int64_t t97 = -8019745469151LL;
int32_t x458 = -118920;
volatile int32_t t99 = 363;
volatile int32_t t101 = -24428;
static volatile uint32_t x478 = UINT32_MAX;
int16_t x479 = -1;
uint64_t x492 = UINT64_MAX;
uint32_t x494 = 106U;
static int32_t x501 = -1;
volatile uint32_t x504 = 10930502U;
volatile uint8_t x506 = 1U;
uint32_t x514 = 204U;
volatile int16_t x515 = 15633;
static int8_t x518 = INT8_MIN;
int8_t x519 = -1;
uint16_t x523 = 214U;
volatile uint64_t x530 = UINT64_MAX;
uint64_t x533 = 3220277LLU;
int64_t x539 = INT64_MAX;
uint8_t x543 = 25U;
static int64_t t116 = 3967416311670615822LL;
int8_t x545 = INT8_MIN;
volatile int32_t t118 = -229636;
int64_t x553 = -1LL;
volatile uint16_t x555 = 4443U;
uint32_t x565 = 94U;
static int64_t x566 = INT64_MIN;
volatile int64_t x573 = INT64_MAX;
int32_t x578 = INT32_MIN;
volatile int32_t t123 = -15969;
volatile uint64_t x601 = 1074LLU;
int16_t x606 = INT16_MIN;
volatile int8_t x610 = INT8_MIN;
int32_t t132 = 48;
int32_t x634 = -1;
int16_t x646 = INT16_MIN;
int16_t x647 = -1;
int32_t x653 = INT32_MIN;
static int8_t x654 = -3;
int32_t x663 = INT32_MIN;
volatile int32_t t139 = 0;
uint64_t x673 = 192528038109296LLU;
int32_t x674 = -1;
volatile int8_t x677 = -1;
int32_t x679 = -879;
uint64_t t143 = 910494648752605LLU;
static int16_t x683 = INT16_MAX;
volatile int8_t x684 = INT8_MIN;
int32_t x686 = INT32_MIN;
int32_t t145 = -4421;
int8_t x691 = INT8_MAX;
volatile int32_t t146 = 1023;
int16_t x694 = -1975;
static int8_t x695 = -1;
static int64_t t147 = -474064143656030LL;
int32_t x697 = INT32_MIN;
int64_t x699 = 167LL;
int8_t x703 = INT8_MIN;
uint16_t x704 = UINT16_MAX;
int8_t x708 = -1;
int32_t x713 = INT32_MIN;
static int8_t x719 = -11;
uint64_t x720 = 505281LLU;
static int16_t x725 = 3;
volatile uint16_t x726 = 69U;
int32_t x731 = 60605;
volatile int32_t t156 = 723597266;
uint16_t x744 = 14U;
volatile int32_t t159 = 3;
int64_t x747 = -1LL;
volatile uint16_t x748 = 68U;
int32_t t160 = -3799;
static volatile uint64_t x757 = UINT64_MAX;
int8_t x763 = INT8_MAX;
volatile int32_t t164 = -50259283;
uint32_t x765 = 6U;
static volatile int8_t x768 = -1;
volatile int64_t x770 = 18245920053559LL;
static uint8_t x778 = UINT8_MAX;
volatile uint32_t t168 = 5043U;
int8_t x784 = INT8_MIN;
volatile int32_t t169 = 2;
int32_t x789 = INT32_MIN;
int32_t x790 = -1;
int32_t t171 = -59347256;
static int16_t x793 = -50;
uint16_t x796 = 5U;
uint64_t x798 = UINT64_MAX;
int32_t x804 = -1;
int32_t x819 = INT32_MIN;
int64_t x821 = -1LL;
static int64_t x826 = INT64_MIN;
static volatile int16_t x831 = INT16_MIN;
int8_t x844 = INT8_MIN;
int8_t x845 = -1;
static int64_t t184 = 2102334856438LL;
static int64_t x854 = -13412LL;
static volatile int8_t x859 = -1;
int8_t x860 = 36;
int8_t x861 = -1;
int16_t x862 = 473;
volatile int32_t t188 = -55;
int32_t x866 = 11;
static uint8_t x876 = 27U;
uint64_t x885 = 1051129812LLU;
int16_t x889 = INT16_MIN;
uint32_t x890 = UINT32_MAX;
volatile int32_t x897 = -1;
static int8_t x898 = -1;
uint8_t x907 = 79U;


void f0(void) {
    	int16_t x1 = 1;
	int32_t x2 = INT32_MIN;
	int8_t x3 = -1;
	static int32_t x4 = 531674248;

    t0 = ((x1==(x2^x3))-x4);

    if (t0 != -531674248) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x6 = 101589067503362495LLU;
	uint16_t x7 = 2000U;
	int64_t x8 = 10472708895590LL;
	volatile int64_t t1 = 344533309869799537LL;

    t1 = ((x5==(x6^x7))-x8);

    if (t1 != -10472708895590LL) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint8_t x9 = 0U;
	volatile int16_t x10 = -1;
	uint32_t x11 = 1704U;
	uint64_t t2 = 1806LLU;

    t2 = ((x9==(x10^x11))-x12);

    if (t2 != 1LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = -192312968LL;
	int64_t x14 = -1LL;
	uint8_t x15 = 3U;
	int32_t t3 = 295;

    t3 = ((x13==(x14^x15))-x16);

    if (t3 != -127) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = -1LL;
	uint32_t x18 = 41788U;
	int16_t x19 = INT16_MAX;
	static volatile int16_t x20 = -1;

    t4 = ((x17==(x18^x19))-x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x21 = 58493LL;
	static uint8_t x22 = 33U;
	uint8_t x23 = 2U;
	uint8_t x24 = 29U;
	volatile int32_t t5 = 122661;

    t5 = ((x21==(x22^x23))-x24);

    if (t5 != -29) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = INT64_MIN;
	volatile uint16_t x27 = 2715U;
	int16_t x28 = INT16_MIN;

    t6 = ((x25==(x26^x27))-x28);

    if (t6 != 32768) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int32_t x29 = -1;
	uint8_t x30 = 0U;
	volatile int32_t t7 = -1;

    t7 = ((x29==(x30^x31))-x32);

    if (t7 != -161) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = -6047LL;
	uint16_t x34 = 24200U;
	int16_t x35 = 1205;
	int16_t x36 = 27;
	int32_t t8 = -1;

    t8 = ((x33==(x34^x35))-x36);

    if (t8 != -27) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint32_t x37 = UINT32_MAX;
	int64_t x38 = INT64_MIN;
	volatile int8_t x39 = 11;
	uint16_t x40 = 172U;

    t9 = ((x37==(x38^x39))-x40);

    if (t9 != -172) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = INT16_MAX;
	static int32_t x42 = -390;
	volatile uint16_t x43 = 11770U;
	int8_t x44 = -1;

    t10 = ((x41==(x42^x43))-x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint32_t x45 = 1U;
	static int64_t x46 = INT64_MIN;
	static int8_t x48 = 33;

    t11 = ((x45==(x46^x47))-x48);

    if (t11 != -33) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x49 = INT16_MIN;
	uint64_t x50 = 27174352394320LLU;
	uint8_t x51 = 1U;
	int8_t x52 = INT8_MIN;
	int32_t t12 = -41;

    t12 = ((x49==(x50^x51))-x52);

    if (t12 != 128) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x53 = INT16_MIN;
	int16_t x54 = -6086;
	uint64_t x56 = UINT64_MAX;
	uint64_t t13 = 436957LLU;

    t13 = ((x53==(x54^x55))-x56);

    if (t13 != 1LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = 7671390760LL;
	uint16_t x58 = UINT16_MAX;
	int64_t x59 = -1LL;
	int64_t x60 = -599422452220380640LL;
	volatile int64_t t14 = -7723760434693LL;

    t14 = ((x57==(x58^x59))-x60);

    if (t14 != 599422452220380640LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x63 = 0;
	int16_t x64 = -1;
	volatile int32_t t15 = -1;

    t15 = ((x61==(x62^x63))-x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile int64_t x65 = INT64_MIN;
	volatile uint32_t x66 = 890014U;
	volatile uint64_t x67 = 83LLU;
	uint16_t x68 = 102U;
	int32_t t16 = -282426;

    t16 = ((x65==(x66^x67))-x68);

    if (t16 != -102) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x69 = UINT64_MAX;
	volatile int32_t x70 = 23174;
	volatile uint64_t x71 = 98623LLU;
	int16_t x72 = INT16_MAX;
	static volatile int32_t t17 = -25022;

    t17 = ((x69==(x70^x71))-x72);

    if (t17 != -32767) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x73 = UINT32_MAX;
	int32_t x75 = 1;
	int64_t x76 = -1LL;
	volatile int64_t t18 = -7990802101517LL;

    t18 = ((x73==(x74^x75))-x76);

    if (t18 != 1LL) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x85 = INT16_MIN;
	volatile int32_t x86 = -1;
	static int32_t x87 = -1;
	volatile int64_t x88 = INT64_MAX;
	int64_t t19 = 30403023821LL;

    t19 = ((x85==(x86^x87))-x88);

    if (t19 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x93 = INT8_MIN;
	volatile int64_t x94 = -1LL;
	static volatile int32_t x95 = -391;
	int32_t x96 = -1165320;
	static volatile int32_t t20 = 24;

    t20 = ((x93==(x94^x95))-x96);

    if (t20 != 1165320) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x98 = INT16_MIN;
	uint8_t x99 = 4U;
	static int8_t x100 = -1;
	int32_t t21 = 3;

    t21 = ((x97==(x98^x99))-x100);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int64_t x101 = -1LL;
	int64_t x102 = -6601766370985LL;
	int8_t x103 = INT8_MAX;
	uint16_t x104 = 3U;
	int32_t t22 = -876307989;

    t22 = ((x101==(x102^x103))-x104);

    if (t22 != -3) { NG(); } else { ; }
	
}

void f23(void) {
    	static int8_t x105 = INT8_MIN;
	uint8_t x106 = 1U;
	volatile int16_t x107 = 1;
	int16_t x108 = INT16_MIN;
	volatile int32_t t23 = 0;

    t23 = ((x105==(x106^x107))-x108);

    if (t23 != 32768) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x109 = 210;
	int64_t x110 = -1LL;
	int64_t x112 = INT64_MAX;
	static int64_t t24 = 222595LL;

    t24 = ((x109==(x110^x111))-x112);

    if (t24 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile uint32_t x117 = 1586635216U;
	int8_t x118 = -5;
	uint64_t x120 = UINT64_MAX;

    t25 = ((x117==(x118^x119))-x120);

    if (t25 != 1LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x121 = -1LL;
	uint64_t x123 = UINT64_MAX;
	uint64_t x124 = 2069239606LLU;
	static volatile uint64_t t26 = 6378614LLU;

    t26 = ((x121==(x122^x123))-x124);

    if (t26 != 18446744071640312011LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x125 = 1112U;
	int16_t x126 = INT16_MIN;
	volatile int32_t t27 = 109;

    t27 = ((x125==(x126^x127))-x128);

    if (t27 != 128) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x131 = -1;
	int16_t x132 = -4525;
	volatile int32_t t28 = 7451380;

    t28 = ((x129==(x130^x131))-x132);

    if (t28 != 4525) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x137 = INT8_MIN;
	static uint64_t x138 = 490657671LLU;
	static volatile int32_t x139 = -1;
	volatile int64_t x140 = -1LL;

    t29 = ((x137==(x138^x139))-x140);

    if (t29 != 1LL) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int32_t x145 = 1013;
	static volatile int16_t x147 = INT16_MIN;
	uint8_t x148 = UINT8_MAX;
	int32_t t30 = 85;

    t30 = ((x145==(x146^x147))-x148);

    if (t30 != -255) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint32_t x153 = 162U;
	int16_t x155 = INT16_MIN;
	uint32_t x156 = UINT32_MAX;
	volatile uint32_t t31 = 6761U;

    t31 = ((x153==(x154^x155))-x156);

    if (t31 != 1U) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x157 = 10U;
	static uint16_t x158 = UINT16_MAX;
	uint16_t x159 = UINT16_MAX;
	int8_t x160 = INT8_MAX;
	static int32_t t32 = 1143237;

    t32 = ((x157==(x158^x159))-x160);

    if (t32 != -127) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x161 = INT16_MIN;
	uint64_t x163 = UINT64_MAX;
	int8_t x164 = 11;
	int32_t t33 = -12352;

    t33 = ((x161==(x162^x163))-x164);

    if (t33 != -11) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x165 = UINT64_MAX;
	int16_t x166 = 16272;
	static volatile uint64_t x167 = UINT64_MAX;
	uint32_t x168 = UINT32_MAX;
	uint32_t t34 = 978U;

    t34 = ((x165==(x166^x167))-x168);

    if (t34 != 1U) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x169 = UINT16_MAX;
	volatile int16_t x171 = 0;
	static int16_t x172 = INT16_MIN;
	int32_t t35 = -24740837;

    t35 = ((x169==(x170^x171))-x172);

    if (t35 != 32768) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x174 = INT32_MIN;
	int64_t x175 = -561LL;

    t36 = ((x173==(x174^x175))-x176);

    if (t36 != -3LL) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int32_t x177 = INT32_MAX;
	static int32_t x178 = INT32_MIN;
	static uint16_t x179 = 13932U;
	static int64_t x180 = -1LL;
	int64_t t37 = -4501429971376LL;

    t37 = ((x177==(x178^x179))-x180);

    if (t37 != 1LL) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int64_t x181 = INT64_MAX;
	int32_t x182 = -567876743;
	int8_t x183 = 0;
	int8_t x184 = INT8_MIN;
	int32_t t38 = 772;

    t38 = ((x181==(x182^x183))-x184);

    if (t38 != 128) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x185 = INT32_MAX;
	int64_t x186 = 220282465LL;
	int64_t x187 = INT64_MIN;
	int8_t x188 = 0;
	static int32_t t39 = 1;

    t39 = ((x185==(x186^x187))-x188);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x189 = INT64_MAX;
	int8_t x190 = INT8_MIN;
	uint64_t x191 = UINT64_MAX;
	int32_t x192 = 17725776;
	int32_t t40 = -9;

    t40 = ((x189==(x190^x191))-x192);

    if (t40 != -17725776) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x193 = INT64_MAX;
	static volatile int16_t x194 = INT16_MIN;
	uint32_t x196 = 7149047U;
	uint32_t t41 = 182U;

    t41 = ((x193==(x194^x195))-x196);

    if (t41 != 4287818249U) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x197 = 9U;
	uint16_t x198 = UINT16_MAX;
	volatile int32_t t42 = -3914;

    t42 = ((x197==(x198^x199))-x200);

    if (t42 != -2147483647) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x201 = INT8_MAX;
	int32_t x202 = -1;
	volatile int32_t x204 = -2606710;
	int32_t t43 = -65372198;

    t43 = ((x201==(x202^x203))-x204);

    if (t43 != 2606710) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x209 = 360766081;
	uint16_t x210 = 3911U;
	int32_t x212 = -1;
	static volatile int32_t t44 = 7;

    t44 = ((x209==(x210^x211))-x212);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x213 = UINT64_MAX;
	int8_t x214 = 1;
	int32_t x216 = -83191;
	int32_t t45 = 591;

    t45 = ((x213==(x214^x215))-x216);

    if (t45 != 83191) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x217 = -4;
	int64_t x218 = 211746455608678LL;
	uint32_t x219 = 468335255U;
	uint64_t x220 = 12LLU;
	volatile uint64_t t46 = 4096348805310224LLU;

    t46 = ((x217==(x218^x219))-x220);

    if (t46 != 18446744073709551604LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x221 = UINT16_MAX;
	int64_t x222 = INT64_MIN;
	uint8_t x223 = 4U;
	int32_t t47 = 306427960;

    t47 = ((x221==(x222^x223))-x224);

    if (t47 != -2) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x225 = 6;
	int64_t x226 = INT64_MAX;
	static int32_t x227 = -1;
	int32_t x228 = -1;
	volatile int32_t t48 = -1;

    t48 = ((x225==(x226^x227))-x228);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint64_t x229 = 14750LLU;
	volatile uint16_t x230 = 11U;
	static volatile uint32_t x231 = 72U;
	int64_t t49 = 172LL;

    t49 = ((x229==(x230^x231))-x232);

    if (t49 != -21LL) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint16_t x233 = UINT16_MAX;
	static int64_t x234 = INT64_MIN;
	int16_t x235 = INT16_MAX;
	volatile int32_t t50 = -783;

    t50 = ((x233==(x234^x235))-x236);

    if (t50 != 32768) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x237 = 0U;
	static int8_t x238 = INT8_MIN;
	int16_t x239 = 644;

    t51 = ((x237==(x238^x239))-x240);

    if (t51 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static int32_t x245 = INT32_MIN;
	uint16_t x246 = 238U;
	int8_t x247 = 3;
	static int32_t t52 = -120;

    t52 = ((x245==(x246^x247))-x248);

    if (t52 != -12) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile int16_t x249 = INT16_MIN;
	int64_t x250 = INT64_MIN;
	uint64_t x251 = 1182841035LLU;

    t53 = ((x249==(x250^x251))-x252);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x253 = -1;
	int64_t x254 = INT64_MIN;
	int64_t x255 = INT64_MAX;
	uint32_t x256 = UINT32_MAX;
	volatile uint32_t t54 = 1U;

    t54 = ((x253==(x254^x255))-x256);

    if (t54 != 2U) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x263 = INT8_MIN;
	int8_t x264 = INT8_MIN;
	int32_t t55 = -8;

    t55 = ((x261==(x262^x263))-x264);

    if (t55 != 128) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x266 = INT32_MIN;
	int8_t x268 = INT8_MAX;
	volatile int32_t t56 = 251936;

    t56 = ((x265==(x266^x267))-x268);

    if (t56 != -127) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint32_t x269 = UINT32_MAX;
	int16_t x270 = -1;
	int64_t x271 = -1LL;
	int64_t t57 = -1LL;

    t57 = ((x269==(x270^x271))-x272);

    if (t57 != -68335414603684007LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint32_t x277 = UINT32_MAX;
	volatile int16_t x278 = INT16_MAX;
	int16_t x279 = INT16_MAX;
	uint32_t x280 = 391519U;
	static volatile uint32_t t58 = 20878618U;

    t58 = ((x277==(x278^x279))-x280);

    if (t58 != 4294575777U) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x281 = INT64_MIN;
	int64_t x282 = INT64_MAX;
	int8_t x284 = INT8_MAX;
	int32_t t59 = -30165;

    t59 = ((x281==(x282^x283))-x284);

    if (t59 != -127) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x286 = UINT64_MAX;
	static volatile uint8_t x288 = 0U;
	int32_t t60 = 4427668;

    t60 = ((x285==(x286^x287))-x288);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x289 = INT64_MIN;
	volatile int8_t x290 = -15;
	uint16_t x291 = 21065U;
	volatile int16_t x292 = INT16_MIN;
	volatile int32_t t61 = 9532689;

    t61 = ((x289==(x290^x291))-x292);

    if (t61 != 32768) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x294 = 3818LL;
	static int32_t t62 = 126217;

    t62 = ((x293==(x294^x295))-x296);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint64_t x298 = UINT64_MAX;
	static int32_t x299 = INT32_MIN;
	static int32_t x300 = -1;
	int32_t t63 = 33;

    t63 = ((x297==(x298^x299))-x300);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int32_t x302 = INT32_MAX;
	int16_t x303 = -1;

    t64 = ((x301==(x302^x303))-x304);

    if (t64 != -11) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x306 = -1;
	volatile int16_t x307 = 44;
	static int64_t x308 = INT64_MAX;
	volatile int64_t t65 = 1889235951LL;

    t65 = ((x305==(x306^x307))-x308);

    if (t65 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x309 = -6072;
	volatile uint16_t x311 = 1708U;
	int32_t t66 = -77285;

    t66 = ((x309==(x310^x311))-x312);

    if (t66 != -6) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int16_t x314 = INT16_MAX;
	int8_t x315 = INT8_MIN;
	int32_t x316 = -27284835;

    t67 = ((x313==(x314^x315))-x316);

    if (t67 != 27284835) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int16_t x319 = INT16_MIN;

    t68 = ((x317==(x318^x319))-x320);

    if (t68 != 5) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x321 = -1;
	volatile uint16_t x322 = 6U;
	uint32_t x323 = UINT32_MAX;
	int64_t x324 = -3144201LL;
	int64_t t69 = -71789915LL;

    t69 = ((x321==(x322^x323))-x324);

    if (t69 != 3144201LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x333 = -1LL;
	int16_t x334 = -1;
	static int8_t x336 = 5;
	volatile int32_t t70 = -1;

    t70 = ((x333==(x334^x335))-x336);

    if (t70 != -5) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x337 = INT32_MAX;
	uint16_t x338 = 1U;
	int64_t x339 = 73090492568874818LL;
	int32_t x340 = -1;

    t71 = ((x337==(x338^x339))-x340);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x345 = 708165666;
	int64_t x346 = INT64_MIN;
	uint8_t x347 = 0U;
	static int32_t x348 = INT32_MAX;

    t72 = ((x345==(x346^x347))-x348);

    if (t72 != -2147483647) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x349 = 0U;
	int8_t x350 = -7;
	int32_t x351 = 196;
	volatile uint32_t t73 = 26696U;

    t73 = ((x349==(x350^x351))-x352);

    if (t73 != 3104194361U) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x353 = INT32_MIN;
	int64_t x356 = -1879448LL;
	static volatile int64_t t74 = 25629438872865296LL;

    t74 = ((x353==(x354^x355))-x356);

    if (t74 != 1879448LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x357 = -3;
	int16_t x358 = INT16_MAX;
	uint16_t x360 = UINT16_MAX;
	int32_t t75 = 7024929;

    t75 = ((x357==(x358^x359))-x360);

    if (t75 != -65535) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x361 = -1;
	static uint64_t x362 = UINT64_MAX;
	static int16_t x364 = INT16_MAX;
	int32_t t76 = 69;

    t76 = ((x361==(x362^x363))-x364);

    if (t76 != -32767) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int16_t x365 = INT16_MIN;
	volatile int32_t x366 = INT32_MIN;
	int16_t x367 = INT16_MIN;
	volatile int32_t t77 = 11;

    t77 = ((x365==(x366^x367))-x368);

    if (t77 != -2147483647) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x373 = 19401U;
	static int16_t x374 = -1;
	static uint32_t x375 = 179U;
	volatile int8_t x376 = INT8_MIN;
	int32_t t78 = -30370;

    t78 = ((x373==(x374^x375))-x376);

    if (t78 != 128) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x377 = 120U;
	static int64_t x378 = -3693007733700256049LL;
	uint8_t x379 = UINT8_MAX;
	int16_t x380 = -1;
	volatile int32_t t79 = 0;

    t79 = ((x377==(x378^x379))-x380);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x381 = 198;
	uint64_t x382 = 50218711327LLU;
	static volatile uint64_t x383 = UINT64_MAX;
	uint8_t x384 = 42U;

    t80 = ((x381==(x382^x383))-x384);

    if (t80 != -42) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int64_t x386 = -1LL;
	uint8_t x388 = UINT8_MAX;
	int32_t t81 = -100864944;

    t81 = ((x385==(x386^x387))-x388);

    if (t81 != -255) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x390 = 68U;
	int32_t x392 = 38183611;
	volatile int32_t t82 = 1299161;

    t82 = ((x389==(x390^x391))-x392);

    if (t82 != -38183611) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x393 = INT8_MIN;
	static uint16_t x394 = 1U;
	int32_t x395 = 8024703;
	int16_t x396 = 9379;
	int32_t t83 = -29086835;

    t83 = ((x393==(x394^x395))-x396);

    if (t83 != -9379) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x397 = 620863357LLU;
	int32_t x398 = -1;
	int16_t x400 = -1;
	volatile int32_t t84 = -3481;

    t84 = ((x397==(x398^x399))-x400);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x401 = INT16_MIN;
	volatile uint64_t x402 = UINT64_MAX;
	int32_t x403 = -1;
	int8_t x404 = -11;
	int32_t t85 = -3306262;

    t85 = ((x401==(x402^x403))-x404);

    if (t85 != 11) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int16_t x409 = INT16_MIN;
	volatile int8_t x410 = -1;
	uint16_t x411 = 948U;
	uint8_t x412 = 6U;
	static int32_t t86 = -1;

    t86 = ((x409==(x410^x411))-x412);

    if (t86 != -6) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint16_t x413 = 25U;
	uint64_t x415 = UINT64_MAX;
	int16_t x416 = -1;
	volatile int32_t t87 = 14474;

    t87 = ((x413==(x414^x415))-x416);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x417 = INT8_MIN;
	volatile uint16_t x418 = 261U;
	static int64_t x419 = -1LL;
	int8_t x420 = INT8_MAX;

    t88 = ((x417==(x418^x419))-x420);

    if (t88 != -127) { NG(); } else { ; }
	
}

void f89(void) {
    	static int32_t x421 = -1;
	int64_t x423 = INT64_MAX;
	uint8_t x424 = UINT8_MAX;

    t89 = ((x421==(x422^x423))-x424);

    if (t89 != -255) { NG(); } else { ; }
	
}

void f90(void) {
    	static int64_t x427 = INT64_MAX;
	static uint64_t x428 = 1002818043689071LLU;
	static volatile uint64_t t90 = 193460862LLU;

    t90 = ((x425==(x426^x427))-x428);

    if (t90 != 18445741255665862545LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x429 = UINT8_MAX;
	int8_t x431 = 22;
	uint16_t x432 = UINT16_MAX;
	volatile int32_t t91 = 0;

    t91 = ((x429==(x430^x431))-x432);

    if (t91 != -65535) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x433 = INT8_MIN;
	int32_t x434 = INT32_MIN;
	int8_t x435 = -1;
	volatile int32_t x436 = -78;
	volatile int32_t t92 = -145970472;

    t92 = ((x433==(x434^x435))-x436);

    if (t92 != 78) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x437 = INT32_MAX;
	int8_t x438 = 0;
	uint16_t x439 = 4U;
	volatile int64_t x440 = -1LL;
	int64_t t93 = 68275LL;

    t93 = ((x437==(x438^x439))-x440);

    if (t93 != 1LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x441 = -1;
	volatile uint16_t x442 = 969U;
	static int32_t x443 = 1;
	int32_t x444 = -68421211;

    t94 = ((x441==(x442^x443))-x444);

    if (t94 != 68421211) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x445 = 0U;
	uint8_t x446 = UINT8_MAX;
	uint32_t x447 = 7U;
	int64_t x448 = -36812864LL;

    t95 = ((x445==(x446^x447))-x448);

    if (t95 != 36812864LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x449 = 537U;
	uint32_t x450 = 1U;
	int64_t x451 = -15003135LL;
	int64_t x452 = INT64_MAX;
	int64_t t96 = 2943925227LL;

    t96 = ((x449==(x450^x451))-x452);

    if (t96 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x453 = 89LLU;
	uint8_t x454 = UINT8_MAX;
	int16_t x455 = INT16_MIN;
	static int64_t x456 = -131897290LL;

    t97 = ((x453==(x454^x455))-x456);

    if (t97 != 131897290LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x457 = 34347114;
	int32_t x459 = INT32_MAX;
	int32_t x460 = -41534;
	int32_t t98 = -872;

    t98 = ((x457==(x458^x459))-x460);

    if (t98 != 41534) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x461 = 1832838U;
	uint32_t x462 = 7U;
	uint32_t x463 = UINT32_MAX;
	volatile int16_t x464 = INT16_MIN;

    t99 = ((x461==(x462^x463))-x464);

    if (t99 != 32768) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x465 = 2LL;
	int64_t x466 = INT64_MAX;
	int32_t x467 = INT32_MIN;
	uint16_t x468 = 1U;
	int32_t t100 = -588052;

    t100 = ((x465==(x466^x467))-x468);

    if (t100 != -1) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x473 = INT64_MIN;
	int64_t x474 = 1441594LL;
	static volatile int32_t x475 = INT32_MIN;
	int8_t x476 = INT8_MIN;

    t101 = ((x473==(x474^x475))-x476);

    if (t101 != 128) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x477 = 550;
	int8_t x480 = INT8_MAX;
	static int32_t t102 = 1187;

    t102 = ((x477==(x478^x479))-x480);

    if (t102 != -127) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint8_t x485 = 72U;
	static int16_t x486 = 2927;
	volatile uint32_t x487 = 4U;
	int16_t x488 = 403;
	int32_t t103 = 6576885;

    t103 = ((x485==(x486^x487))-x488);

    if (t103 != -403) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int32_t x489 = 124872;
	static int32_t x490 = -1;
	int8_t x491 = INT8_MIN;
	uint64_t t104 = 40795446949948LLU;

    t104 = ((x489==(x490^x491))-x492);

    if (t104 != 1LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x493 = -176790123816249681LL;
	uint32_t x495 = 2U;
	static uint16_t x496 = 1284U;
	int32_t t105 = -808766002;

    t105 = ((x493==(x494^x495))-x496);

    if (t105 != -1284) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x497 = INT16_MIN;
	int64_t x498 = -11307674760236083LL;
	int32_t x499 = INT32_MIN;
	static volatile uint8_t x500 = 122U;
	volatile int32_t t106 = -4;

    t106 = ((x497==(x498^x499))-x500);

    if (t106 != -122) { NG(); } else { ; }
	
}

void f107(void) {
    	static int16_t x502 = -1;
	uint8_t x503 = 4U;
	uint32_t t107 = 279529793U;

    t107 = ((x501==(x502^x503))-x504);

    if (t107 != 4284036794U) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint16_t x505 = 151U;
	int32_t x507 = INT32_MIN;
	static uint32_t x508 = UINT32_MAX;
	uint32_t t108 = 2U;

    t108 = ((x505==(x506^x507))-x508);

    if (t108 != 1U) { NG(); } else { ; }
	
}

void f109(void) {
    	static int16_t x509 = INT16_MAX;
	uint16_t x510 = 22U;
	static uint64_t x511 = 6574LLU;
	uint16_t x512 = 2U;
	int32_t t109 = -13105;

    t109 = ((x509==(x510^x511))-x512);

    if (t109 != -2) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x513 = 0U;
	volatile int8_t x516 = INT8_MIN;
	volatile int32_t t110 = -128171;

    t110 = ((x513==(x514^x515))-x516);

    if (t110 != 128) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x517 = -1;
	int16_t x520 = INT16_MIN;
	static int32_t t111 = 15;

    t111 = ((x517==(x518^x519))-x520);

    if (t111 != 32768) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint32_t x521 = 0U;
	int8_t x522 = -1;
	int32_t x524 = -57;
	volatile int32_t t112 = -20817810;

    t112 = ((x521==(x522^x523))-x524);

    if (t112 != 57) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x529 = -1;
	static volatile uint16_t x531 = 316U;
	int16_t x532 = -1;
	volatile int32_t t113 = -635462;

    t113 = ((x529==(x530^x531))-x532);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x534 = 1U;
	int8_t x535 = INT8_MIN;
	int8_t x536 = INT8_MIN;
	static int32_t t114 = 231;

    t114 = ((x533==(x534^x535))-x536);

    if (t114 != 128) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x537 = UINT32_MAX;
	volatile int8_t x538 = INT8_MAX;
	int32_t x540 = 3;
	int32_t t115 = -169;

    t115 = ((x537==(x538^x539))-x540);

    if (t115 != -3) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x541 = UINT32_MAX;
	uint64_t x542 = 44644933237957449LLU;
	volatile int64_t x544 = -63344593888740081LL;

    t116 = ((x541==(x542^x543))-x544);

    if (t116 != 63344593888740081LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x546 = 1;
	int64_t x547 = INT64_MIN;
	int16_t x548 = INT16_MIN;
	static volatile int32_t t117 = -23612367;

    t117 = ((x545==(x546^x547))-x548);

    if (t117 != 32768) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x549 = -13597152LL;
	uint8_t x550 = 35U;
	uint8_t x551 = UINT8_MAX;
	int16_t x552 = INT16_MAX;

    t118 = ((x549==(x550^x551))-x552);

    if (t118 != -32767) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x554 = 29639794285LLU;
	static int16_t x556 = INT16_MIN;
	static volatile int32_t t119 = 34667;

    t119 = ((x553==(x554^x555))-x556);

    if (t119 != 32768) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x567 = 0;
	int64_t x568 = 1LL;
	volatile int64_t t120 = -16LL;

    t120 = ((x565==(x566^x567))-x568);

    if (t120 != -1LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x569 = INT64_MIN;
	volatile uint64_t x570 = 492487783663LLU;
	int8_t x571 = INT8_MAX;
	static volatile int16_t x572 = INT16_MIN;
	volatile int32_t t121 = -385823949;

    t121 = ((x569==(x570^x571))-x572);

    if (t121 != 32768) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x574 = UINT8_MAX;
	int16_t x575 = INT16_MIN;
	uint16_t x576 = 13721U;
	volatile int32_t t122 = 114034407;

    t122 = ((x573==(x574^x575))-x576);

    if (t122 != -13721) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x577 = INT16_MAX;
	volatile uint16_t x579 = UINT16_MAX;
	int8_t x580 = -56;

    t123 = ((x577==(x578^x579))-x580);

    if (t123 != 56) { NG(); } else { ; }
	
}

void f124(void) {
    	static int16_t x585 = 15256;
	int8_t x586 = INT8_MIN;
	uint32_t x587 = UINT32_MAX;
	int16_t x588 = INT16_MAX;
	int32_t t124 = -998773;

    t124 = ((x585==(x586^x587))-x588);

    if (t124 != -32767) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint32_t x589 = 1419U;
	int64_t x590 = 462492341LL;
	static volatile uint32_t x591 = UINT32_MAX;
	uint32_t x592 = 1747198385U;
	static uint32_t t125 = 17711U;

    t125 = ((x589==(x590^x591))-x592);

    if (t125 != 2547768911U) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x593 = INT8_MIN;
	uint16_t x594 = 64U;
	int32_t x595 = INT32_MIN;
	volatile int16_t x596 = INT16_MIN;
	volatile int32_t t126 = 479831999;

    t126 = ((x593==(x594^x595))-x596);

    if (t126 != 32768) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x602 = INT32_MAX;
	volatile int8_t x603 = -1;
	int64_t x604 = INT64_MAX;
	int64_t t127 = 10090902253813LL;

    t127 = ((x601==(x602^x603))-x604);

    if (t127 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x605 = 1288665086387LLU;
	int8_t x607 = INT8_MIN;
	volatile uint32_t x608 = 28U;
	static volatile uint32_t t128 = 10616143U;

    t128 = ((x605==(x606^x607))-x608);

    if (t128 != 4294967268U) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int64_t x609 = INT64_MAX;
	static int16_t x611 = -1070;
	static volatile int16_t x612 = -1;
	int32_t t129 = -62;

    t129 = ((x609==(x610^x611))-x612);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x617 = 2LLU;
	int16_t x618 = INT16_MAX;
	uint32_t x619 = 10752036U;
	int16_t x620 = INT16_MAX;
	int32_t t130 = 1565691;

    t130 = ((x617==(x618^x619))-x620);

    if (t130 != -32767) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x625 = 9;
	static uint8_t x626 = UINT8_MAX;
	int64_t x627 = 11494827327504LL;
	uint8_t x628 = 72U;
	int32_t t131 = 1;

    t131 = ((x625==(x626^x627))-x628);

    if (t131 != -72) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x629 = INT64_MAX;
	int8_t x630 = INT8_MIN;
	int32_t x631 = -1;
	static uint16_t x632 = UINT16_MAX;

    t132 = ((x629==(x630^x631))-x632);

    if (t132 != -65535) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x633 = UINT64_MAX;
	int16_t x635 = 197;
	volatile int64_t x636 = -5393350101LL;
	static volatile int64_t t133 = 1454353LL;

    t133 = ((x633==(x634^x635))-x636);

    if (t133 != 5393350101LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int32_t x637 = 1;
	int16_t x638 = 1791;
	volatile int16_t x639 = -224;
	int8_t x640 = -1;
	static int32_t t134 = -8;

    t134 = ((x637==(x638^x639))-x640);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint32_t x641 = 31896U;
	static int16_t x642 = INT16_MAX;
	uint32_t x643 = UINT32_MAX;
	uint8_t x644 = UINT8_MAX;
	volatile int32_t t135 = 404546622;

    t135 = ((x641==(x642^x643))-x644);

    if (t135 != -255) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x645 = -1;
	uint16_t x648 = 3314U;
	volatile int32_t t136 = 1;

    t136 = ((x645==(x646^x647))-x648);

    if (t136 != -3314) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x655 = INT32_MIN;
	static int32_t x656 = -10;
	static int32_t t137 = -5413829;

    t137 = ((x653==(x654^x655))-x656);

    if (t137 != 10) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x657 = -19;
	static int16_t x658 = INT16_MIN;
	static int32_t x659 = INT32_MIN;
	int8_t x660 = -1;
	static volatile int32_t t138 = -2135;

    t138 = ((x657==(x658^x659))-x660);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x661 = 1281LL;
	static volatile int16_t x662 = -1;
	volatile int16_t x664 = 1;

    t139 = ((x661==(x662^x663))-x664);

    if (t139 != -1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x665 = 0U;
	int8_t x666 = 0;
	int8_t x667 = 0;
	uint8_t x668 = 12U;
	volatile int32_t t140 = -58902324;

    t140 = ((x665==(x666^x667))-x668);

    if (t140 != -11) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint8_t x669 = 13U;
	volatile uint64_t x670 = 10LLU;
	static int32_t x671 = -2;
	int16_t x672 = -1;
	static int32_t t141 = 38464;

    t141 = ((x669==(x670^x671))-x672);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x675 = 7U;
	int64_t x676 = -1LL;
	volatile int64_t t142 = -775LL;

    t142 = ((x673==(x674^x675))-x676);

    if (t142 != 1LL) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile uint8_t x678 = UINT8_MAX;
	uint64_t x680 = 1564144LLU;

    t143 = ((x677==(x678^x679))-x680);

    if (t143 != 18446744073707987472LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x681 = INT64_MAX;
	uint8_t x682 = UINT8_MAX;
	static int32_t t144 = 6288604;

    t144 = ((x681==(x682^x683))-x684);

    if (t144 != 128) { NG(); } else { ; }
	
}

void f145(void) {
    	static int32_t x685 = 3954;
	int8_t x687 = -1;
	int16_t x688 = -1;

    t145 = ((x685==(x686^x687))-x688);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile uint64_t x689 = 32663718117818LLU;
	int16_t x690 = INT16_MIN;
	int8_t x692 = INT8_MAX;

    t146 = ((x689==(x690^x691))-x692);

    if (t146 != -127) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x693 = INT8_MIN;
	int64_t x696 = INT64_MAX;

    t147 = ((x693==(x694^x695))-x696);

    if (t147 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static int64_t x698 = INT64_MIN;
	uint64_t x700 = 406324477LLU;
	volatile uint64_t t148 = 3184615733LLU;

    t148 = ((x697==(x698^x699))-x700);

    if (t148 != 18446744073303227139LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int64_t x701 = 2085795LL;
	int8_t x702 = INT8_MIN;
	int32_t t149 = 8829;

    t149 = ((x701==(x702^x703))-x704);

    if (t149 != -65535) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x705 = 96U;
	int16_t x706 = 0;
	int8_t x707 = INT8_MAX;
	int32_t t150 = -42001975;

    t150 = ((x705==(x706^x707))-x708);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x709 = 562930879;
	static int64_t x710 = 551LL;
	int64_t x711 = -1LL;
	uint32_t x712 = 6061U;
	uint32_t t151 = 3273U;

    t151 = ((x709==(x710^x711))-x712);

    if (t151 != 4294961235U) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x714 = 107744064913LLU;
	int8_t x715 = INT8_MIN;
	int16_t x716 = 14;
	static volatile int32_t t152 = -120;

    t152 = ((x713==(x714^x715))-x716);

    if (t152 != -14) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint64_t x717 = 26821LLU;
	volatile int16_t x718 = INT16_MAX;
	static uint64_t t153 = 42882634778419LLU;

    t153 = ((x717==(x718^x719))-x720);

    if (t153 != 18446744073709046335LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x721 = 41336934891238297LLU;
	uint64_t x722 = 25155617LLU;
	uint64_t x723 = 8352123LLU;
	volatile int16_t x724 = INT16_MIN;
	int32_t t154 = 81301;

    t154 = ((x721==(x722^x723))-x724);

    if (t154 != 32768) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x727 = INT32_MAX;
	int32_t x728 = -262321;
	static volatile int32_t t155 = 2161;

    t155 = ((x725==(x726^x727))-x728);

    if (t155 != 262321) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint32_t x729 = UINT32_MAX;
	volatile int64_t x730 = -76565022958LL;
	volatile uint16_t x732 = UINT16_MAX;

    t156 = ((x729==(x730^x731))-x732);

    if (t156 != -65535) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x733 = 54U;
	volatile int16_t x734 = -1;
	uint64_t x735 = 2233388144918572782LLU;
	volatile int16_t x736 = -1;
	static volatile int32_t t157 = 168;

    t157 = ((x733==(x734^x735))-x736);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x737 = -1;
	uint16_t x738 = 12U;
	int8_t x739 = INT8_MIN;
	int8_t x740 = -14;
	int32_t t158 = 84574303;

    t158 = ((x737==(x738^x739))-x740);

    if (t158 != 14) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x741 = 748416LLU;
	int64_t x742 = INT64_MIN;
	static volatile int16_t x743 = -1034;

    t159 = ((x741==(x742^x743))-x744);

    if (t159 != -14) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint32_t x745 = 1U;
	int16_t x746 = 2657;

    t160 = ((x745==(x746^x747))-x748);

    if (t160 != -68) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int16_t x749 = INT16_MIN;
	int8_t x750 = INT8_MIN;
	int64_t x751 = INT64_MAX;
	volatile uint32_t x752 = UINT32_MAX;
	uint32_t t161 = 8U;

    t161 = ((x749==(x750^x751))-x752);

    if (t161 != 1U) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x753 = -13891608567670115LL;
	int8_t x754 = -26;
	static int32_t x755 = 33353637;
	uint32_t x756 = 2278518U;
	volatile uint32_t t162 = 5310U;

    t162 = ((x753==(x754^x755))-x756);

    if (t162 != 4292688778U) { NG(); } else { ; }
	
}

void f163(void) {
    	static int64_t x758 = 295398095LL;
	volatile uint8_t x759 = UINT8_MAX;
	uint8_t x760 = 76U;
	int32_t t163 = 348621;

    t163 = ((x757==(x758^x759))-x760);

    if (t163 != -76) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x761 = 1;
	int8_t x762 = -1;
	int8_t x764 = 0;

    t164 = ((x761==(x762^x763))-x764);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int8_t x766 = 0;
	uint8_t x767 = 74U;
	static volatile int32_t t165 = -2888444;

    t165 = ((x765==(x766^x767))-x768);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x769 = 370942161050574LLU;
	int8_t x771 = INT8_MAX;
	uint64_t x772 = 139594LLU;
	uint64_t t166 = 48659LLU;

    t166 = ((x769==(x770^x771))-x772);

    if (t166 != 18446744073709412022LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x773 = 3508179997063397642LL;
	int16_t x774 = 50;
	int64_t x775 = INT64_MAX;
	uint16_t x776 = UINT16_MAX;
	int32_t t167 = 1425392;

    t167 = ((x773==(x774^x775))-x776);

    if (t167 != -65535) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x777 = 188U;
	int8_t x779 = 0;
	static uint32_t x780 = UINT32_MAX;

    t168 = ((x777==(x778^x779))-x780);

    if (t168 != 1U) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x781 = INT64_MAX;
	int8_t x782 = -31;
	int64_t x783 = INT64_MIN;

    t169 = ((x781==(x782^x783))-x784);

    if (t169 != 128) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x785 = INT32_MIN;
	int32_t x786 = INT32_MIN;
	static int8_t x787 = 1;
	static uint32_t x788 = UINT32_MAX;
	uint32_t t170 = 54655U;

    t170 = ((x785==(x786^x787))-x788);

    if (t170 != 1U) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint32_t x791 = 7408094U;
	int16_t x792 = INT16_MIN;

    t171 = ((x789==(x790^x791))-x792);

    if (t171 != 32768) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x794 = INT32_MIN;
	static int16_t x795 = 92;
	int32_t t172 = -9128;

    t172 = ((x793==(x794^x795))-x796);

    if (t172 != -5) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile uint32_t x797 = 1900239959U;
	volatile int16_t x799 = 1;
	uint32_t x800 = 695091499U;
	static uint32_t t173 = 14190049U;

    t173 = ((x797==(x798^x799))-x800);

    if (t173 != 3599875797U) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint64_t x801 = 497LLU;
	uint32_t x802 = UINT32_MAX;
	static int64_t x803 = -1LL;
	volatile int32_t t174 = 95720;

    t174 = ((x801==(x802^x803))-x804);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint64_t x805 = UINT64_MAX;
	uint8_t x806 = 40U;
	int16_t x807 = INT16_MAX;
	int8_t x808 = 3;
	int32_t t175 = -1299;

    t175 = ((x805==(x806^x807))-x808);

    if (t175 != -3) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x809 = -1;
	uint16_t x810 = UINT16_MAX;
	uint32_t x811 = 294881U;
	uint8_t x812 = UINT8_MAX;
	volatile int32_t t176 = 50130;

    t176 = ((x809==(x810^x811))-x812);

    if (t176 != -255) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x813 = 61U;
	static int64_t x814 = -30024361001LL;
	uint64_t x815 = UINT64_MAX;
	volatile int8_t x816 = INT8_MIN;
	int32_t t177 = -67447514;

    t177 = ((x813==(x814^x815))-x816);

    if (t177 != 128) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x817 = INT16_MIN;
	volatile uint16_t x818 = 37U;
	volatile int8_t x820 = INT8_MIN;
	volatile int32_t t178 = 73;

    t178 = ((x817==(x818^x819))-x820);

    if (t178 != 128) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x822 = INT32_MIN;
	int8_t x823 = -1;
	int8_t x824 = INT8_MIN;
	int32_t t179 = -477;

    t179 = ((x821==(x822^x823))-x824);

    if (t179 != 128) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint32_t x825 = UINT32_MAX;
	int64_t x827 = INT64_MAX;
	volatile int32_t x828 = 1673438;
	volatile int32_t t180 = 3631;

    t180 = ((x825==(x826^x827))-x828);

    if (t180 != -1673438) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint32_t x829 = UINT32_MAX;
	int16_t x830 = INT16_MIN;
	static int16_t x832 = INT16_MIN;
	static int32_t t181 = 1;

    t181 = ((x829==(x830^x831))-x832);

    if (t181 != 32768) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x837 = INT64_MIN;
	uint64_t x838 = 25178999404596768LLU;
	static volatile int64_t x839 = INT64_MIN;
	uint64_t x840 = UINT64_MAX;
	volatile uint64_t t182 = 188728203LLU;

    t182 = ((x837==(x838^x839))-x840);

    if (t182 != 1LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x841 = 54426U;
	volatile int16_t x842 = INT16_MIN;
	int16_t x843 = -1;
	static int32_t t183 = 516105643;

    t183 = ((x841==(x842^x843))-x844);

    if (t183 != 128) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int32_t x846 = -282814533;
	uint32_t x847 = 1051281513U;
	volatile int64_t x848 = INT64_MAX;

    t184 = ((x845==(x846^x847))-x848);

    if (t184 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x849 = INT8_MIN;
	int64_t x850 = -405865LL;
	static int8_t x851 = INT8_MAX;
	int16_t x852 = -1;
	volatile int32_t t185 = 466;

    t185 = ((x849==(x850^x851))-x852);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile uint64_t x853 = UINT64_MAX;
	int32_t x855 = 17805420;
	volatile uint8_t x856 = 1U;
	int32_t t186 = -336877331;

    t186 = ((x853==(x854^x855))-x856);

    if (t186 != -1) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x857 = -1;
	int8_t x858 = INT8_MIN;
	static volatile int32_t t187 = -29336;

    t187 = ((x857==(x858^x859))-x860);

    if (t187 != -36) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int16_t x863 = 7;
	static int8_t x864 = 2;

    t188 = ((x861==(x862^x863))-x864);

    if (t188 != -2) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x865 = INT8_MIN;
	int8_t x867 = -1;
	int16_t x868 = INT16_MAX;
	volatile int32_t t189 = -14772020;

    t189 = ((x865==(x866^x867))-x868);

    if (t189 != -32767) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x869 = 1U;
	static volatile uint16_t x870 = 99U;
	int16_t x871 = 139;
	uint8_t x872 = 17U;
	volatile int32_t t190 = -72562529;

    t190 = ((x869==(x870^x871))-x872);

    if (t190 != -17) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x873 = 671LLU;
	int32_t x874 = INT32_MIN;
	int8_t x875 = INT8_MIN;
	volatile int32_t t191 = 81086488;

    t191 = ((x873==(x874^x875))-x876);

    if (t191 != -27) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x877 = INT16_MIN;
	static int16_t x878 = INT16_MIN;
	static uint32_t x879 = 112953790U;
	volatile uint8_t x880 = UINT8_MAX;
	volatile int32_t t192 = -1271;

    t192 = ((x877==(x878^x879))-x880);

    if (t192 != -255) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x881 = INT16_MIN;
	static uint64_t x882 = 150767686725LLU;
	uint16_t x883 = 29U;
	int16_t x884 = INT16_MIN;
	int32_t t193 = 1;

    t193 = ((x881==(x882^x883))-x884);

    if (t193 != 32768) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x886 = INT16_MIN;
	static int64_t x887 = 1431973204608907283LL;
	static int32_t x888 = INT32_MAX;
	volatile int32_t t194 = 5;

    t194 = ((x885==(x886^x887))-x888);

    if (t194 != -2147483647) { NG(); } else { ; }
	
}

void f195(void) {
    	static int8_t x891 = -1;
	int64_t x892 = 6LL;
	static int64_t t195 = 6356212LL;

    t195 = ((x889==(x890^x891))-x892);

    if (t195 != -6LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x893 = INT64_MIN;
	int8_t x894 = INT8_MIN;
	int16_t x895 = INT16_MAX;
	static volatile uint32_t x896 = UINT32_MAX;
	uint32_t t196 = 69U;

    t196 = ((x893==(x894^x895))-x896);

    if (t196 != 1U) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x899 = -1;
	uint8_t x900 = UINT8_MAX;
	int32_t t197 = 395598;

    t197 = ((x897==(x898^x899))-x900);

    if (t197 != -255) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x901 = INT8_MAX;
	uint64_t x902 = 8LLU;
	static int64_t x903 = -1LL;
	int8_t x904 = INT8_MIN;
	int32_t t198 = 56;

    t198 = ((x901==(x902^x903))-x904);

    if (t198 != 128) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x905 = INT32_MAX;
	static uint32_t x906 = 1688526U;
	uint16_t x908 = UINT16_MAX;
	int32_t t199 = -11;

    t199 = ((x905==(x906^x907))-x908);

    if (t199 != -65535) { NG(); } else { ; }
	
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

