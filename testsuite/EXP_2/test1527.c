
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

static volatile int8_t x2 = 0;
int64_t x3 = -1LL;
int32_t t0 = -11;
int8_t x6 = 1;
static int32_t x9 = INT32_MIN;
int32_t t2 = -81;
int64_t x17 = INT64_MIN;
int16_t x20 = INT16_MIN;
volatile int64_t t4 = 5LL;
static int16_t x32 = -1;
uint16_t x33 = UINT16_MAX;
int32_t t9 = 0;
int64_t x41 = INT64_MIN;
int64_t x42 = INT64_MIN;
int8_t x45 = INT8_MAX;
int8_t x46 = 0;
int32_t x47 = INT32_MIN;
volatile int32_t t11 = -1;
volatile int32_t t12 = -650;
int64_t t14 = INT64_MIN;
int16_t x62 = INT16_MAX;
volatile int64_t t15 = -5LL;
int8_t x65 = -1;
volatile uint32_t t16 = UINT32_MAX;
static int32_t x82 = 14978;
volatile int32_t t20 = -2;
int32_t x91 = 140534;
volatile int8_t x95 = 7;
int16_t x105 = INT16_MAX;
static uint8_t x107 = 61U;
uint64_t x110 = 28LLU;
int64_t t33 = -2023290231692431LL;
static int64_t x158 = 481595118782LL;
uint8_t x160 = UINT8_MAX;
int16_t x163 = INT16_MIN;
int8_t x165 = -1;
volatile uint64_t x166 = 33831844272184LLU;
static volatile int64_t x171 = INT64_MAX;
uint8_t x172 = UINT8_MAX;
int32_t t42 = 517408257;
volatile int64_t x173 = INT64_MIN;
volatile int8_t x174 = INT8_MIN;
int8_t x178 = INT8_MIN;
int16_t x181 = INT16_MIN;
int64_t x185 = 14729323563LL;
volatile int64_t x186 = -1LL;
uint64_t x193 = 964779123LLU;
int8_t x201 = 1;
volatile int64_t x205 = -1LL;
static volatile uint64_t x212 = 2413LLU;
volatile uint64_t t53 = UINT64_MAX;
int64_t x223 = 163445745LL;
int32_t t55 = 8072;
int64_t x225 = INT64_MIN;
int32_t x239 = INT32_MIN;
uint32_t x243 = 1524414465U;
int64_t x248 = -41385609330134022LL;
int32_t x259 = INT32_MIN;
int8_t x261 = 1;
int8_t x262 = INT8_MIN;
uint8_t x263 = UINT8_MAX;
static uint64_t x264 = UINT64_MAX;
static volatile uint16_t x268 = 988U;
int16_t x269 = INT16_MAX;
uint64_t x275 = 106081939978296LLU;
uint16_t x280 = 14877U;
int32_t x283 = INT32_MAX;
volatile int32_t t70 = 319414162;
uint32_t x286 = UINT32_MAX;
uint16_t x296 = 12U;
int64_t t73 = 23510438LL;
uint16_t x297 = UINT16_MAX;
int8_t x299 = 1;
int64_t x304 = 527471531434LL;
int16_t x319 = 488;
uint64_t t80 = 277667710764293LLU;
uint64_t x326 = UINT64_MAX;
uint32_t x332 = 137U;
static int64_t x334 = INT64_MAX;
int64_t x349 = INT64_MAX;
static volatile uint32_t x355 = 6583015U;
int32_t x361 = INT32_MIN;
int8_t x363 = INT8_MAX;
uint8_t x368 = UINT8_MAX;
uint8_t x369 = UINT8_MAX;
static int16_t x371 = -1;
static uint16_t x374 = UINT16_MAX;
static int64_t x376 = 1020621LL;
volatile int32_t t94 = INT32_MIN;
uint64_t x382 = 32788805666040758LLU;
static volatile int32_t t95 = -36360;
uint64_t x389 = UINT64_MAX;
int8_t x392 = -1;
uint16_t x396 = 5U;
uint64_t x404 = UINT64_MAX;
int16_t x407 = -95;
int64_t x414 = INT64_MAX;
int32_t t103 = INT32_MIN;
static volatile uint16_t x418 = UINT16_MAX;
static volatile uint8_t x428 = 21U;
int8_t x430 = 0;
int16_t x431 = 2773;
int8_t x437 = -6;
volatile int64_t t109 = -19544479LL;
int16_t x442 = INT16_MIN;
int32_t t110 = -447;
int32_t x449 = INT32_MIN;
int16_t x450 = INT16_MAX;
static uint64_t x451 = 2715203008748LLU;
int64_t t112 = INT64_MIN;
volatile int32_t t113 = 48754900;
volatile int8_t x457 = -1;
int32_t x465 = INT32_MAX;
int16_t x466 = INT16_MIN;
uint8_t x471 = UINT8_MAX;
static volatile uint64_t t117 = 177LLU;
int16_t x476 = INT16_MAX;
static int64_t x477 = INT64_MIN;
volatile uint8_t x486 = 1U;
uint16_t x497 = 2U;
uint8_t x502 = 1U;
static uint8_t x511 = UINT8_MAX;
int16_t x515 = INT16_MAX;
volatile int64_t x518 = -231618049853LL;
static volatile int32_t t129 = -288327475;
volatile uint16_t x525 = 30U;
static int8_t x533 = 1;
static uint32_t x534 = 40174592U;
volatile int32_t t134 = -116669076;
uint8_t x542 = 68U;
int32_t x546 = -1;
int16_t x547 = 1240;
uint16_t x548 = UINT16_MAX;
volatile int32_t t136 = 3164;
volatile uint64_t x550 = 2040135046897LLU;
int8_t x554 = INT8_MIN;
int16_t x558 = 2597;
uint64_t x562 = 8168623504LLU;
static int16_t x576 = INT16_MAX;
int8_t x592 = 6;
int8_t x597 = INT8_MIN;
uint64_t x598 = 903470801615661357LLU;
volatile int16_t x600 = INT16_MIN;
uint16_t x602 = 21U;
int32_t t151 = 36570701;
static int32_t t153 = 171;
int8_t x619 = -1;
int64_t t156 = 17095562720836LL;
static uint32_t x631 = UINT32_MAX;
int16_t x639 = 60;
uint32_t t159 = 20372U;
volatile int16_t x646 = INT16_MIN;
int32_t x650 = INT32_MIN;
static volatile uint64_t x651 = UINT64_MAX;
int64_t x653 = INT64_MIN;
int16_t x656 = INT16_MIN;
volatile int64_t t163 = 96017952LL;
uint16_t x658 = UINT16_MAX;
int16_t x665 = INT16_MAX;
static int64_t x667 = INT64_MIN;
static volatile int64_t t166 = -1LL;
int16_t x670 = -13;
static int16_t x676 = INT16_MIN;
volatile uint8_t x679 = 0U;
int16_t x680 = INT16_MIN;
volatile uint64_t x681 = 397LLU;
volatile uint64_t t170 = 94924LLU;
uint32_t x686 = 3938999U;
int16_t x687 = INT16_MIN;
uint64_t x688 = 162625880074LLU;
uint32_t x697 = UINT32_MAX;
volatile int8_t x701 = INT8_MIN;
int16_t x707 = INT16_MIN;
volatile int32_t t176 = 25;
static uint64_t x712 = 114010980LLU;
uint64_t x713 = UINT64_MAX;
uint8_t x714 = 37U;
int8_t x718 = 1;
uint32_t t179 = 18U;
int8_t x722 = -1;
static uint64_t x723 = UINT64_MAX;
int32_t t180 = -212;
volatile int32_t t181 = -783852;
static uint64_t x731 = UINT64_MAX;
int32_t x742 = 32974;
static volatile int64_t t185 = INT64_MAX;
int16_t x745 = -1;
int8_t x747 = 1;
int8_t x755 = -5;
int64_t t188 = -8353952900LL;
uint32_t t190 = 1U;
int64_t x765 = -1LL;
volatile int32_t t193 = -577549786;
volatile uint64_t x777 = 8LLU;
int64_t x779 = INT64_MIN;
int16_t x783 = -1;
int8_t x794 = INT8_MIN;
int8_t x798 = INT8_MAX;
static int8_t x800 = INT8_MAX;
int32_t t199 = -10;


void f0(void) {
    	static int16_t x1 = -186;
	static uint16_t x4 = UINT16_MAX;

    t0 = ((x1&(x2==x3))+x4);

    if (t0 != 65535) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = UINT16_MAX;
	uint64_t x7 = 55582LLU;
	uint64_t x8 = UINT64_MAX;
	volatile uint64_t t1 = UINT64_MAX;

    t1 = ((x5&(x6==x7))+x8);

    if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x10 = 174145581257243LLU;
	int32_t x11 = INT32_MIN;
	int8_t x12 = INT8_MIN;

    t2 = ((x9&(x10==x11))+x12);

    if (t2 != -128) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int32_t x13 = INT32_MAX;
	static int8_t x14 = 0;
	int32_t x15 = -11948136;
	int16_t x16 = INT16_MAX;
	static volatile int32_t t3 = 268;

    t3 = ((x13&(x14==x15))+x16);

    if (t3 != 32767) { NG(); } else { ; }
	
}

void f4(void) {
    	static int16_t x18 = -1;
	int64_t x19 = -2309LL;

    t4 = ((x17&(x18==x19))+x20);

    if (t4 != -32768LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = 1554714195U;
	static int8_t x22 = INT8_MIN;
	int64_t x23 = INT64_MIN;
	static uint16_t x24 = 213U;
	uint32_t t5 = 143559198U;

    t5 = ((x21&(x22==x23))+x24);

    if (t5 != 213U) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = INT16_MAX;
	static uint64_t x26 = 13816056450753LLU;
	volatile int64_t x27 = -1LL;
	int64_t x28 = -204424929944LL;
	int64_t t6 = 692LL;

    t6 = ((x25&(x26==x27))+x28);

    if (t6 != -204424929944LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = -72483750LL;
	int16_t x30 = -54;
	int8_t x31 = INT8_MIN;
	int64_t t7 = 107604140675292655LL;

    t7 = ((x29&(x30==x31))+x32);

    if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x34 = 6668U;
	uint8_t x35 = 4U;
	int32_t x36 = INT32_MIN;
	int32_t t8 = INT32_MIN;

    t8 = ((x33&(x34==x35))+x36);

    if (t8 != INT32_MIN) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = -14;
	static int8_t x38 = -1;
	int32_t x39 = -377328;
	volatile int8_t x40 = -1;

    t9 = ((x37&(x38==x39))+x40);

    if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x43 = INT8_MIN;
	static int16_t x44 = INT16_MIN;
	volatile int64_t t10 = -5LL;

    t10 = ((x41&(x42==x43))+x44);

    if (t10 != -32768LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static int32_t x48 = 14;

    t11 = ((x45&(x46==x47))+x48);

    if (t11 != 14) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = INT16_MIN;
	uint64_t x50 = 8851LLU;
	uint8_t x51 = 11U;
	int16_t x52 = -4404;

    t12 = ((x49&(x50==x51))+x52);

    if (t12 != -4404) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x53 = 111U;
	int8_t x54 = INT8_MIN;
	int32_t x55 = 32723688;
	int32_t x56 = INT32_MIN;
	volatile int32_t t13 = INT32_MIN;

    t13 = ((x53&(x54==x55))+x56);

    if (t13 != INT32_MIN) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint32_t x57 = 5895951U;
	int8_t x58 = -38;
	volatile int16_t x59 = INT16_MAX;
	volatile int64_t x60 = INT64_MIN;

    t14 = ((x57&(x58==x59))+x60);

    if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile int64_t x61 = INT64_MIN;
	static volatile int16_t x63 = INT16_MIN;
	int32_t x64 = -7884904;

    t15 = ((x61&(x62==x63))+x64);

    if (t15 != -7884904LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x66 = 0;
	int8_t x67 = -1;
	uint32_t x68 = UINT32_MAX;

    t16 = ((x65&(x66==x67))+x68);

    if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = 98878896;
	int32_t x70 = 642045516;
	volatile int8_t x71 = 7;
	uint16_t x72 = 5667U;
	volatile int32_t t17 = 3665;

    t17 = ((x69&(x70==x71))+x72);

    if (t17 != 5667) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x73 = UINT32_MAX;
	int8_t x74 = INT8_MIN;
	int8_t x75 = INT8_MIN;
	uint64_t x76 = UINT64_MAX;
	uint64_t t18 = 64341552607LLU;

    t18 = ((x73&(x74==x75))+x76);

    if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = 0;
	static int8_t x78 = INT8_MIN;
	uint16_t x79 = 310U;
	static int32_t x80 = INT32_MAX;
	volatile int32_t t19 = INT32_MAX;

    t19 = ((x77&(x78==x79))+x80);

    if (t19 != INT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = INT16_MIN;
	int32_t x83 = INT32_MIN;
	volatile int32_t x84 = 253272;

    t20 = ((x81&(x82==x83))+x84);

    if (t20 != 253272) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x85 = -1;
	uint8_t x86 = 0U;
	volatile int16_t x87 = INT16_MIN;
	static uint16_t x88 = UINT16_MAX;
	volatile int32_t t21 = 970;

    t21 = ((x85&(x86==x87))+x88);

    if (t21 != 65535) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x89 = 228U;
	static int16_t x90 = -1;
	uint32_t x92 = 1U;
	volatile uint32_t t22 = 903167728U;

    t22 = ((x89&(x90==x91))+x92);

    if (t22 != 1U) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x93 = -1;
	uint32_t x94 = UINT32_MAX;
	uint16_t x96 = 3202U;
	int32_t t23 = -939;

    t23 = ((x93&(x94==x95))+x96);

    if (t23 != 3202) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x97 = 5U;
	int16_t x98 = INT16_MAX;
	uint32_t x99 = UINT32_MAX;
	int16_t x100 = INT16_MIN;
	int32_t t24 = -5287;

    t24 = ((x97&(x98==x99))+x100);

    if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint32_t x101 = 4974U;
	volatile int64_t x102 = -1LL;
	static int64_t x103 = INT64_MIN;
	static uint16_t x104 = 959U;
	volatile uint32_t t25 = 62383U;

    t25 = ((x101&(x102==x103))+x104);

    if (t25 != 959U) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x106 = INT16_MIN;
	volatile int8_t x108 = INT8_MAX;
	int32_t t26 = 481138409;

    t26 = ((x105&(x106==x107))+x108);

    if (t26 != 127) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x109 = 486;
	int32_t x111 = -1;
	int64_t x112 = INT64_MIN;
	volatile int64_t t27 = INT64_MIN;

    t27 = ((x109&(x110==x111))+x112);

    if (t27 != INT64_MIN) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile uint64_t x113 = 2149752933008090LLU;
	int8_t x114 = -21;
	int8_t x115 = INT8_MIN;
	int32_t x116 = 386;
	uint64_t t28 = 64267677151LLU;

    t28 = ((x113&(x114==x115))+x116);

    if (t28 != 386LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static int8_t x117 = INT8_MIN;
	int64_t x118 = 1428526152128048338LL;
	uint16_t x119 = UINT16_MAX;
	volatile int32_t x120 = 238987;
	int32_t t29 = 199603;

    t29 = ((x117&(x118==x119))+x120);

    if (t29 != 238987) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = INT32_MIN;
	int64_t x122 = INT64_MIN;
	int16_t x123 = INT16_MIN;
	int64_t x124 = INT64_MIN;
	volatile int64_t t30 = INT64_MIN;

    t30 = ((x121&(x122==x123))+x124);

    if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = 3;
	static int8_t x126 = INT8_MIN;
	int8_t x127 = INT8_MAX;
	volatile int32_t x128 = INT32_MAX;
	int32_t t31 = INT32_MAX;

    t31 = ((x125&(x126==x127))+x128);

    if (t31 != INT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint16_t x129 = UINT16_MAX;
	int16_t x130 = INT16_MIN;
	int32_t x131 = -4111;
	int32_t x132 = INT32_MAX;
	int32_t t32 = INT32_MAX;

    t32 = ((x129&(x130==x131))+x132);

    if (t32 != INT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
    	static int64_t x133 = 911053320439276215LL;
	int32_t x134 = -1;
	volatile int64_t x135 = -20LL;
	uint8_t x136 = UINT8_MAX;

    t33 = ((x133&(x134==x135))+x136);

    if (t33 != 255LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x137 = 21478;
	static int32_t x138 = INT32_MAX;
	static int8_t x139 = -1;
	int8_t x140 = INT8_MIN;
	volatile int32_t t34 = -176407511;

    t34 = ((x137&(x138==x139))+x140);

    if (t34 != -128) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x141 = -617;
	static int64_t x142 = -1406432257LL;
	int16_t x143 = 625;
	static uint8_t x144 = 31U;
	volatile int32_t t35 = 236307193;

    t35 = ((x141&(x142==x143))+x144);

    if (t35 != 31) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x145 = UINT32_MAX;
	int8_t x146 = INT8_MIN;
	int32_t x147 = 217;
	int8_t x148 = -1;
	static uint32_t t36 = UINT32_MAX;

    t36 = ((x145&(x146==x147))+x148);

    if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
    	static int32_t x149 = INT32_MIN;
	int16_t x150 = -13;
	uint64_t x151 = 734688483648423793LLU;
	int32_t x152 = -1;
	int32_t t37 = -854;

    t37 = ((x149&(x150==x151))+x152);

    if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x153 = -26;
	uint64_t x154 = 30LLU;
	int64_t x155 = INT64_MIN;
	uint64_t x156 = UINT64_MAX;
	uint64_t t38 = UINT64_MAX;

    t38 = ((x153&(x154==x155))+x156);

    if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x157 = 56;
	static int16_t x159 = 5720;
	volatile int32_t t39 = -5;

    t39 = ((x157&(x158==x159))+x160);

    if (t39 != 255) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x161 = UINT64_MAX;
	static volatile uint64_t x162 = UINT64_MAX;
	int16_t x164 = -1;
	uint64_t t40 = UINT64_MAX;

    t40 = ((x161&(x162==x163))+x164);

    if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x167 = INT16_MIN;
	uint64_t x168 = 174798077104LLU;
	volatile uint64_t t41 = 69177419344125842LLU;

    t41 = ((x165&(x166==x167))+x168);

    if (t41 != 174798077104LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x169 = 20129;
	static int16_t x170 = INT16_MIN;

    t42 = ((x169&(x170==x171))+x172);

    if (t42 != 255) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x175 = INT64_MIN;
	static int64_t x176 = -1LL;
	volatile int64_t t43 = 1121466549LL;

    t43 = ((x173&(x174==x175))+x176);

    if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static int32_t x177 = 137;
	int32_t x179 = INT32_MIN;
	int16_t x180 = -1;
	volatile int32_t t44 = 91543127;

    t44 = ((x177&(x178==x179))+x180);

    if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x182 = 1U;
	static int32_t x183 = 91284;
	static int32_t x184 = INT32_MIN;
	volatile int32_t t45 = INT32_MIN;

    t45 = ((x181&(x182==x183))+x184);

    if (t45 != INT32_MIN) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x187 = 34U;
	int64_t x188 = INT64_MIN;
	int64_t t46 = INT64_MIN;

    t46 = ((x185&(x186==x187))+x188);

    if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x189 = -352145LL;
	uint32_t x190 = 0U;
	int64_t x191 = INT64_MIN;
	volatile int16_t x192 = 0;
	static volatile int64_t t47 = 725021993618193804LL;

    t47 = ((x189&(x190==x191))+x192);

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x194 = INT8_MIN;
	int32_t x195 = 159090;
	int16_t x196 = -1;
	volatile uint64_t t48 = UINT64_MAX;

    t48 = ((x193&(x194==x195))+x196);

    if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x197 = -1;
	int32_t x198 = -1;
	int16_t x199 = 8014;
	int32_t x200 = -1;
	volatile int32_t t49 = 2350056;

    t49 = ((x197&(x198==x199))+x200);

    if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x202 = 30524U;
	int32_t x203 = -109238;
	static int32_t x204 = -1;
	volatile int32_t t50 = 6323118;

    t50 = ((x201&(x202==x203))+x204);

    if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
    	static int64_t x206 = -10585174440416LL;
	int32_t x207 = INT32_MIN;
	uint32_t x208 = 73992U;
	volatile int64_t t51 = 3LL;

    t51 = ((x205&(x206==x207))+x208);

    if (t51 != 73992LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint8_t x209 = 29U;
	volatile int8_t x210 = 1;
	int8_t x211 = 0;
	static volatile uint64_t t52 = 848256247655LLU;

    t52 = ((x209&(x210==x211))+x212);

    if (t52 != 2413LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x213 = INT8_MIN;
	int16_t x214 = -693;
	static int64_t x215 = INT64_MAX;
	volatile uint64_t x216 = UINT64_MAX;

    t53 = ((x213&(x214==x215))+x216);

    if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x217 = 23084374831085276LLU;
	uint16_t x218 = 35U;
	int32_t x219 = INT32_MIN;
	int8_t x220 = 1;
	uint64_t t54 = 1536507533576LLU;

    t54 = ((x217&(x218==x219))+x220);

    if (t54 != 1LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x221 = 221594953;
	volatile int8_t x222 = -1;
	uint16_t x224 = 2U;

    t55 = ((x221&(x222==x223))+x224);

    if (t55 != 2) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x226 = INT32_MIN;
	int32_t x227 = -1;
	int64_t x228 = INT64_MIN;
	volatile int64_t t56 = INT64_MIN;

    t56 = ((x225&(x226==x227))+x228);

    if (t56 != INT64_MIN) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int32_t x229 = 512283853;
	int16_t x230 = INT16_MIN;
	int32_t x231 = 7007924;
	int32_t x232 = -1;
	int32_t t57 = 10;

    t57 = ((x229&(x230==x231))+x232);

    if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x233 = INT8_MIN;
	uint8_t x234 = 1U;
	int32_t x235 = -1;
	volatile int16_t x236 = 178;
	static volatile int32_t t58 = -62625;

    t58 = ((x233&(x234==x235))+x236);

    if (t58 != 178) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x237 = INT64_MAX;
	volatile uint16_t x238 = 14U;
	volatile uint64_t x240 = UINT64_MAX;
	volatile uint64_t t59 = UINT64_MAX;

    t59 = ((x237&(x238==x239))+x240);

    if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x241 = 34U;
	int8_t x242 = INT8_MAX;
	static int8_t x244 = INT8_MAX;
	uint32_t t60 = 56U;

    t60 = ((x241&(x242==x243))+x244);

    if (t60 != 127U) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint64_t x245 = UINT64_MAX;
	uint64_t x246 = UINT64_MAX;
	static int32_t x247 = INT32_MIN;
	uint64_t t61 = 22763327533LLU;

    t61 = ((x245&(x246==x247))+x248);

    if (t61 != 18405358464379417594LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x249 = 1141894LLU;
	uint64_t x250 = 199478665471043184LLU;
	static int32_t x251 = INT32_MAX;
	volatile int32_t x252 = 929244;
	uint64_t t62 = 105248855LLU;

    t62 = ((x249&(x250==x251))+x252);

    if (t62 != 929244LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int64_t x253 = -1LL;
	uint8_t x254 = 5U;
	int16_t x255 = INT16_MAX;
	volatile int32_t x256 = -1;
	int64_t t63 = 1166749937LL;

    t63 = ((x253&(x254==x255))+x256);

    if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x257 = 5932971390LL;
	int16_t x258 = INT16_MIN;
	volatile int16_t x260 = INT16_MIN;
	volatile int64_t t64 = -116LL;

    t64 = ((x257&(x258==x259))+x260);

    if (t64 != -32768LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t t65 = UINT64_MAX;

    t65 = ((x261&(x262==x263))+x264);

    if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x265 = -216308LL;
	volatile int64_t x266 = -9290060203LL;
	int32_t x267 = INT32_MIN;
	volatile int64_t t66 = -160286066160369LL;

    t66 = ((x265&(x266==x267))+x268);

    if (t66 != 988LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x270 = -1;
	int64_t x271 = -2LL;
	int8_t x272 = 30;
	static int32_t t67 = 5;

    t67 = ((x269&(x270==x271))+x272);

    if (t67 != 30) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint32_t x273 = 48906U;
	static uint8_t x274 = 6U;
	int32_t x276 = INT32_MIN;
	uint32_t t68 = 50U;

    t68 = ((x273&(x274==x275))+x276);

    if (t68 != 2147483648U) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x277 = 5350U;
	int32_t x278 = -1;
	int8_t x279 = INT8_MIN;
	static uint32_t t69 = 1067U;

    t69 = ((x277&(x278==x279))+x280);

    if (t69 != 14877U) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x281 = 399200;
	int32_t x282 = 16263966;
	volatile int32_t x284 = -264289088;

    t70 = ((x281&(x282==x283))+x284);

    if (t70 != -264289088) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x285 = -1LL;
	int32_t x287 = INT32_MIN;
	volatile uint32_t x288 = 700U;
	volatile int64_t t71 = -23324LL;

    t71 = ((x285&(x286==x287))+x288);

    if (t71 != 700LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x289 = INT32_MIN;
	int16_t x290 = INT16_MIN;
	static volatile uint16_t x291 = 14U;
	int32_t x292 = 132842993;
	int32_t t72 = -89319201;

    t72 = ((x289&(x290==x291))+x292);

    if (t72 != 132842993) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x293 = INT64_MAX;
	int16_t x294 = INT16_MIN;
	uint16_t x295 = UINT16_MAX;

    t73 = ((x293&(x294==x295))+x296);

    if (t73 != 12LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x298 = 126;
	volatile int64_t x300 = INT64_MIN;
	static int64_t t74 = INT64_MIN;

    t74 = ((x297&(x298==x299))+x300);

    if (t74 != INT64_MIN) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int16_t x301 = INT16_MAX;
	uint8_t x302 = 0U;
	int8_t x303 = -61;
	volatile int64_t t75 = -940572LL;

    t75 = ((x301&(x302==x303))+x304);

    if (t75 != 527471531434LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x305 = INT8_MIN;
	static int64_t x306 = INT64_MIN;
	int64_t x307 = INT64_MIN;
	volatile int16_t x308 = INT16_MAX;
	volatile int32_t t76 = -4535253;

    t76 = ((x305&(x306==x307))+x308);

    if (t76 != 32767) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x309 = UINT8_MAX;
	int16_t x310 = 3340;
	int32_t x311 = 105;
	int8_t x312 = INT8_MAX;
	volatile int32_t t77 = -31;

    t77 = ((x309&(x310==x311))+x312);

    if (t77 != 127) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x313 = INT32_MIN;
	uint16_t x314 = 3399U;
	uint8_t x315 = 97U;
	int16_t x316 = 5;
	volatile int32_t t78 = 318;

    t78 = ((x313&(x314==x315))+x316);

    if (t78 != 5) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x317 = INT8_MIN;
	int16_t x318 = INT16_MIN;
	uint64_t x320 = 249194215978911LLU;
	volatile uint64_t t79 = 26990268114616337LLU;

    t79 = ((x317&(x318==x319))+x320);

    if (t79 != 249194215978911LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x321 = 141166469279424089LLU;
	static int16_t x322 = INT16_MAX;
	volatile int64_t x323 = INT64_MIN;
	volatile uint8_t x324 = 9U;

    t80 = ((x321&(x322==x323))+x324);

    if (t80 != 9LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x325 = 3923023;
	volatile uint32_t x327 = UINT32_MAX;
	uint16_t x328 = 0U;
	static volatile int32_t t81 = 1368093;

    t81 = ((x325&(x326==x327))+x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x329 = INT16_MIN;
	uint32_t x330 = 9230393U;
	int16_t x331 = 187;
	uint32_t t82 = 22U;

    t82 = ((x329&(x330==x331))+x332);

    if (t82 != 137U) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x333 = INT64_MIN;
	int16_t x335 = 200;
	uint32_t x336 = 15735942U;
	volatile int64_t t83 = -1LL;

    t83 = ((x333&(x334==x335))+x336);

    if (t83 != 15735942LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x337 = UINT16_MAX;
	int64_t x338 = INT64_MAX;
	volatile uint16_t x339 = 1840U;
	uint16_t x340 = 0U;
	volatile int32_t t84 = -958712;

    t84 = ((x337&(x338==x339))+x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static int8_t x341 = 11;
	int64_t x342 = -1LL;
	int8_t x343 = 0;
	volatile int8_t x344 = INT8_MAX;
	volatile int32_t t85 = -86188372;

    t85 = ((x341&(x342==x343))+x344);

    if (t85 != 127) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x345 = -1;
	static uint8_t x346 = 1U;
	uint8_t x347 = 62U;
	volatile uint16_t x348 = 1U;
	volatile int32_t t86 = -5656;

    t86 = ((x345&(x346==x347))+x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x350 = 53U;
	int32_t x351 = 810;
	int32_t x352 = INT32_MIN;
	volatile int64_t t87 = 13LL;

    t87 = ((x349&(x350==x351))+x352);

    if (t87 != -2147483648LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x353 = UINT16_MAX;
	uint16_t x354 = UINT16_MAX;
	static uint8_t x356 = 12U;
	volatile int32_t t88 = -818;

    t88 = ((x353&(x354==x355))+x356);

    if (t88 != 12) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x357 = INT16_MAX;
	volatile int32_t x358 = INT32_MIN;
	uint8_t x359 = 26U;
	volatile int8_t x360 = INT8_MAX;
	int32_t t89 = -670;

    t89 = ((x357&(x358==x359))+x360);

    if (t89 != 127) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x362 = 12230U;
	int64_t x364 = -103LL;
	static volatile int64_t t90 = 1799336002LL;

    t90 = ((x361&(x362==x363))+x364);

    if (t90 != -103LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x365 = 6088;
	static int64_t x366 = 12137418595577577LL;
	static int16_t x367 = INT16_MIN;
	volatile int32_t t91 = 464908;

    t91 = ((x365&(x366==x367))+x368);

    if (t91 != 255) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x370 = -529679;
	static uint32_t x372 = 1623807U;
	uint32_t t92 = 1821938945U;

    t92 = ((x369&(x370==x371))+x372);

    if (t92 != 1623807U) { NG(); } else { ; }
	
}

void f93(void) {
    	static int32_t x373 = INT32_MIN;
	int16_t x375 = -98;
	static int64_t t93 = -1LL;

    t93 = ((x373&(x374==x375))+x376);

    if (t93 != 1020621LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x377 = 1;
	int8_t x378 = INT8_MAX;
	volatile uint8_t x379 = 6U;
	int32_t x380 = INT32_MIN;

    t94 = ((x377&(x378==x379))+x380);

    if (t94 != INT32_MIN) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x381 = INT8_MIN;
	static int16_t x383 = -1;
	int8_t x384 = INT8_MAX;

    t95 = ((x381&(x382==x383))+x384);

    if (t95 != 127) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x385 = INT64_MIN;
	static volatile int64_t x386 = INT64_MIN;
	static int32_t x387 = -1;
	volatile int32_t x388 = -63660;
	volatile int64_t t96 = -91LL;

    t96 = ((x385&(x386==x387))+x388);

    if (t96 != -63660LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x390 = -1;
	volatile int16_t x391 = INT16_MAX;
	volatile uint64_t t97 = UINT64_MAX;

    t97 = ((x389&(x390==x391))+x392);

    if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x393 = 6U;
	static int32_t x394 = -32973;
	volatile uint8_t x395 = 81U;
	int32_t t98 = -1;

    t98 = ((x393&(x394==x395))+x396);

    if (t98 != 5) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x397 = 68917375;
	static int32_t x398 = -15;
	static int32_t x399 = INT32_MIN;
	uint16_t x400 = 883U;
	int32_t t99 = 8098030;

    t99 = ((x397&(x398==x399))+x400);

    if (t99 != 883) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x401 = -1;
	int8_t x402 = INT8_MAX;
	uint8_t x403 = 4U;
	uint64_t t100 = UINT64_MAX;

    t100 = ((x401&(x402==x403))+x404);

    if (t100 != UINT64_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x405 = 12U;
	static int8_t x406 = 0;
	int16_t x408 = 2539;
	volatile int32_t t101 = 20450;

    t101 = ((x405&(x406==x407))+x408);

    if (t101 != 2539) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x409 = 2;
	volatile uint64_t x410 = 43185535341LLU;
	int32_t x411 = INT32_MIN;
	volatile int64_t x412 = -5705LL;
	volatile int64_t t102 = -1299207816LL;

    t102 = ((x409&(x410==x411))+x412);

    if (t102 != -5705LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile int32_t x413 = 366872;
	static uint32_t x415 = 20672532U;
	int32_t x416 = INT32_MIN;

    t103 = ((x413&(x414==x415))+x416);

    if (t103 != INT32_MIN) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x417 = 1268039372690288759LLU;
	static int64_t x419 = -1LL;
	uint8_t x420 = 59U;
	uint64_t t104 = 7241689746624106LLU;

    t104 = ((x417&(x418==x419))+x420);

    if (t104 != 59LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x421 = -1LL;
	uint16_t x422 = UINT16_MAX;
	volatile int64_t x423 = INT64_MIN;
	int32_t x424 = INT32_MAX;
	int64_t t105 = 516311789414880LL;

    t105 = ((x421&(x422==x423))+x424);

    if (t105 != 2147483647LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x425 = INT64_MAX;
	int8_t x426 = INT8_MAX;
	int8_t x427 = -1;
	int64_t t106 = 410917012LL;

    t106 = ((x425&(x426==x427))+x428);

    if (t106 != 21LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x429 = INT64_MIN;
	static int64_t x432 = INT64_MAX;
	volatile int64_t t107 = INT64_MAX;

    t107 = ((x429&(x430==x431))+x432);

    if (t107 != INT64_MAX) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x433 = 2;
	int64_t x434 = INT64_MIN;
	static volatile int8_t x435 = -5;
	volatile int64_t x436 = 1LL;
	int64_t t108 = -553525292953LL;

    t108 = ((x433&(x434==x435))+x436);

    if (t108 != 1LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x438 = -1LL;
	int64_t x439 = INT64_MAX;
	static int64_t x440 = -237913LL;

    t109 = ((x437&(x438==x439))+x440);

    if (t109 != -237913LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x441 = UINT16_MAX;
	uint8_t x443 = UINT8_MAX;
	uint8_t x444 = UINT8_MAX;

    t110 = ((x441&(x442==x443))+x444);

    if (t110 != 255) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int8_t x445 = -27;
	int64_t x446 = 1633459629334994LL;
	int64_t x447 = INT64_MIN;
	static int64_t x448 = -1LL;
	volatile int64_t t111 = -266699594806371545LL;

    t111 = ((x445&(x446==x447))+x448);

    if (t111 != -1LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x452 = INT64_MIN;

    t112 = ((x449&(x450==x451))+x452);

    if (t112 != INT64_MIN) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x453 = 19U;
	int16_t x454 = -1;
	int16_t x455 = INT16_MAX;
	static uint16_t x456 = 1U;

    t113 = ((x453&(x454==x455))+x456);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x458 = -1;
	int16_t x459 = -104;
	uint8_t x460 = UINT8_MAX;
	volatile int32_t t114 = 1312;

    t114 = ((x457&(x458==x459))+x460);

    if (t114 != 255) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x461 = 2904583;
	int16_t x462 = 4191;
	int64_t x463 = -132244610908583LL;
	uint8_t x464 = 106U;
	volatile int32_t t115 = 7992936;

    t115 = ((x461&(x462==x463))+x464);

    if (t115 != 106) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x467 = UINT16_MAX;
	int64_t x468 = 247155628LL;
	volatile int64_t t116 = 287677190869509LL;

    t116 = ((x465&(x466==x467))+x468);

    if (t116 != 247155628LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint64_t x469 = 628423516915542LLU;
	int8_t x470 = 2;
	int8_t x472 = INT8_MIN;

    t117 = ((x469&(x470==x471))+x472);

    if (t117 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x473 = 1620925U;
	uint16_t x474 = 19539U;
	int16_t x475 = INT16_MAX;
	volatile uint32_t t118 = 222U;

    t118 = ((x473&(x474==x475))+x476);

    if (t118 != 32767U) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint64_t x478 = 33698196096LLU;
	volatile int16_t x479 = -1;
	uint8_t x480 = UINT8_MAX;
	volatile int64_t t119 = 18LL;

    t119 = ((x477&(x478==x479))+x480);

    if (t119 != 255LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x481 = 1;
	uint8_t x482 = 70U;
	int16_t x483 = INT16_MAX;
	uint16_t x484 = 3U;
	int32_t t120 = -1;

    t120 = ((x481&(x482==x483))+x484);

    if (t120 != 3) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint32_t x485 = 21U;
	static int64_t x487 = 24571434LL;
	static uint8_t x488 = 6U;
	uint32_t t121 = 0U;

    t121 = ((x485&(x486==x487))+x488);

    if (t121 != 6U) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x489 = 7;
	int32_t x490 = -1;
	static volatile int8_t x491 = INT8_MIN;
	int32_t x492 = -4301;
	int32_t t122 = 13;

    t122 = ((x489&(x490==x491))+x492);

    if (t122 != -4301) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x493 = INT64_MIN;
	static volatile int64_t x494 = -1LL;
	int8_t x495 = INT8_MIN;
	int16_t x496 = -1;
	int64_t t123 = -1913610LL;

    t123 = ((x493&(x494==x495))+x496);

    if (t123 != -1LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x498 = 35782579718161LLU;
	int64_t x499 = -221751LL;
	static int16_t x500 = INT16_MIN;
	volatile int32_t t124 = 16010197;

    t124 = ((x497&(x498==x499))+x500);

    if (t124 != -32768) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x501 = UINT32_MAX;
	static volatile uint64_t x503 = 479939815526LLU;
	int64_t x504 = -65956807819179LL;
	static int64_t t125 = -2077019268LL;

    t125 = ((x501&(x502==x503))+x504);

    if (t125 != -65956807819179LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x505 = INT16_MAX;
	static int64_t x506 = -3918365124750148LL;
	int16_t x507 = 1;
	uint16_t x508 = UINT16_MAX;
	volatile int32_t t126 = 48538;

    t126 = ((x505&(x506==x507))+x508);

    if (t126 != 65535) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x509 = INT8_MIN;
	int16_t x510 = INT16_MIN;
	volatile int8_t x512 = INT8_MAX;
	int32_t t127 = -716051;

    t127 = ((x509&(x510==x511))+x512);

    if (t127 != 127) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int64_t x513 = 3LL;
	int64_t x514 = -1180423LL;
	static volatile int16_t x516 = INT16_MIN;
	volatile int64_t t128 = 1700578523LL;

    t128 = ((x513&(x514==x515))+x516);

    if (t128 != -32768LL) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint16_t x517 = 25U;
	int8_t x519 = INT8_MIN;
	int8_t x520 = 17;

    t129 = ((x517&(x518==x519))+x520);

    if (t129 != 17) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x521 = 2;
	uint32_t x522 = 28562797U;
	volatile int16_t x523 = 925;
	int8_t x524 = -1;
	volatile int32_t t130 = -24685;

    t130 = ((x521&(x522==x523))+x524);

    if (t130 != -1) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x526 = INT8_MAX;
	uint64_t x527 = 35417827955376LLU;
	uint8_t x528 = UINT8_MAX;
	int32_t t131 = -11;

    t131 = ((x525&(x526==x527))+x528);

    if (t131 != 255) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x529 = INT64_MAX;
	int16_t x530 = INT16_MIN;
	int64_t x531 = -1LL;
	volatile int8_t x532 = -1;
	volatile int64_t t132 = -4LL;

    t132 = ((x529&(x530==x531))+x532);

    if (t132 != -1LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x535 = INT32_MAX;
	static uint64_t x536 = UINT64_MAX;
	uint64_t t133 = UINT64_MAX;

    t133 = ((x533&(x534==x535))+x536);

    if (t133 != UINT64_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x537 = -1;
	uint8_t x538 = UINT8_MAX;
	int32_t x539 = 0;
	static volatile uint16_t x540 = UINT16_MAX;

    t134 = ((x537&(x538==x539))+x540);

    if (t134 != 65535) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x541 = INT32_MIN;
	int32_t x543 = INT32_MIN;
	volatile int32_t x544 = INT32_MAX;
	int32_t t135 = INT32_MAX;

    t135 = ((x541&(x542==x543))+x544);

    if (t135 != INT32_MAX) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint8_t x545 = UINT8_MAX;

    t136 = ((x545&(x546==x547))+x548);

    if (t136 != 65535) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x549 = UINT64_MAX;
	uint64_t x551 = 1800567836697494706LLU;
	int16_t x552 = INT16_MIN;
	uint64_t t137 = 502LLU;

    t137 = ((x549&(x550==x551))+x552);

    if (t137 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x553 = -1;
	static int64_t x555 = -1LL;
	uint8_t x556 = 9U;
	int32_t t138 = -911;

    t138 = ((x553&(x554==x555))+x556);

    if (t138 != 9) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x557 = -3;
	uint8_t x559 = 1U;
	static int16_t x560 = -1;
	int32_t t139 = 0;

    t139 = ((x557&(x558==x559))+x560);

    if (t139 != -1) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x561 = INT64_MIN;
	int16_t x563 = -1;
	static volatile int8_t x564 = INT8_MAX;
	int64_t t140 = 1279LL;

    t140 = ((x561&(x562==x563))+x564);

    if (t140 != 127LL) { NG(); } else { ; }
	
}

void f141(void) {
    	static int16_t x565 = 298;
	volatile int16_t x566 = INT16_MAX;
	static int16_t x567 = -1;
	uint16_t x568 = 22U;
	int32_t t141 = 49236;

    t141 = ((x565&(x566==x567))+x568);

    if (t141 != 22) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x569 = INT32_MAX;
	volatile int16_t x570 = INT16_MIN;
	static volatile int32_t x571 = 88;
	uint32_t x572 = 4576595U;
	static volatile uint32_t t142 = 61306880U;

    t142 = ((x569&(x570==x571))+x572);

    if (t142 != 4576595U) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x573 = INT64_MIN;
	int32_t x574 = INT32_MIN;
	int8_t x575 = -1;
	volatile int64_t t143 = -29226123426LL;

    t143 = ((x573&(x574==x575))+x576);

    if (t143 != 32767LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x577 = INT8_MIN;
	int8_t x578 = INT8_MIN;
	uint32_t x579 = UINT32_MAX;
	int64_t x580 = 19705869356430LL;
	static volatile int64_t t144 = 5LL;

    t144 = ((x577&(x578==x579))+x580);

    if (t144 != 19705869356430LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x581 = 8672LLU;
	volatile int64_t x582 = -50500525LL;
	uint8_t x583 = 13U;
	static volatile uint32_t x584 = UINT32_MAX;
	volatile uint64_t t145 = 321293283830845LLU;

    t145 = ((x581&(x582==x583))+x584);

    if (t145 != 4294967295LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint64_t x585 = UINT64_MAX;
	volatile int8_t x586 = -5;
	static int8_t x587 = 49;
	static volatile int8_t x588 = -1;
	uint64_t t146 = UINT64_MAX;

    t146 = ((x585&(x586==x587))+x588);

    if (t146 != UINT64_MAX) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x589 = -3;
	int32_t x590 = INT32_MIN;
	static uint8_t x591 = 16U;
	volatile int32_t t147 = 2;

    t147 = ((x589&(x590==x591))+x592);

    if (t147 != 6) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x593 = 18U;
	uint16_t x594 = 216U;
	volatile uint64_t x595 = 208LLU;
	int32_t x596 = INT32_MAX;
	static uint32_t t148 = 12U;

    t148 = ((x593&(x594==x595))+x596);

    if (t148 != 2147483647U) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x599 = INT64_MIN;
	volatile int32_t t149 = -10;

    t149 = ((x597&(x598==x599))+x600);

    if (t149 != -32768) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x601 = INT16_MIN;
	volatile uint64_t x603 = UINT64_MAX;
	int32_t x604 = INT32_MAX;
	int32_t t150 = INT32_MAX;

    t150 = ((x601&(x602==x603))+x604);

    if (t150 != INT32_MAX) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x605 = INT32_MIN;
	uint16_t x606 = 1665U;
	volatile uint8_t x607 = 11U;
	int32_t x608 = 234343;

    t151 = ((x605&(x606==x607))+x608);

    if (t151 != 234343) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x609 = UINT8_MAX;
	int32_t x610 = -93361;
	int32_t x611 = -1;
	int32_t x612 = INT32_MAX;
	volatile int32_t t152 = INT32_MAX;

    t152 = ((x609&(x610==x611))+x612);

    if (t152 != INT32_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x613 = UINT8_MAX;
	int8_t x614 = -1;
	volatile int32_t x615 = -1;
	static int16_t x616 = -1;

    t153 = ((x613&(x614==x615))+x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int64_t x617 = INT64_MIN;
	int64_t x618 = INT64_MIN;
	static int64_t x620 = -1LL;
	volatile int64_t t154 = 96197LL;

    t154 = ((x617&(x618==x619))+x620);

    if (t154 != -1LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x621 = INT16_MIN;
	int64_t x622 = -1LL;
	int16_t x623 = INT16_MAX;
	uint8_t x624 = UINT8_MAX;
	volatile int32_t t155 = 0;

    t155 = ((x621&(x622==x623))+x624);

    if (t155 != 255) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x625 = UINT16_MAX;
	int64_t x626 = -3856726544361936713LL;
	volatile uint8_t x627 = UINT8_MAX;
	int64_t x628 = -1LL;

    t156 = ((x625&(x626==x627))+x628);

    if (t156 != -1LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile int64_t x629 = -1LL;
	int8_t x630 = 37;
	uint64_t x632 = UINT64_MAX;
	static uint64_t t157 = UINT64_MAX;

    t157 = ((x629&(x630==x631))+x632);

    if (t157 != UINT64_MAX) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint16_t x633 = 1347U;
	int32_t x634 = -1;
	int64_t x635 = 1103091898716155LL;
	static uint64_t x636 = 785006845235124592LLU;
	volatile uint64_t t158 = 298735988LLU;

    t158 = ((x633&(x634==x635))+x636);

    if (t158 != 785006845235124592LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint32_t x637 = UINT32_MAX;
	int32_t x638 = INT32_MIN;
	volatile int16_t x640 = 3;

    t159 = ((x637&(x638==x639))+x640);

    if (t159 != 3U) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x641 = INT32_MIN;
	static int8_t x642 = 11;
	static int8_t x643 = INT8_MIN;
	int16_t x644 = 4235;
	static int32_t t160 = -3;

    t160 = ((x641&(x642==x643))+x644);

    if (t160 != 4235) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x645 = 2127895640577730468LLU;
	uint8_t x647 = 8U;
	int16_t x648 = -5;
	uint64_t t161 = 34046LLU;

    t161 = ((x645&(x646==x647))+x648);

    if (t161 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int16_t x649 = 98;
	uint8_t x652 = 12U;
	static int32_t t162 = -391164;

    t162 = ((x649&(x650==x651))+x652);

    if (t162 != 12) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint32_t x654 = UINT32_MAX;
	static int64_t x655 = -1LL;

    t163 = ((x653&(x654==x655))+x656);

    if (t163 != -32768LL) { NG(); } else { ; }
	
}

void f164(void) {
    	static int16_t x657 = INT16_MAX;
	static uint8_t x659 = 4U;
	int8_t x660 = INT8_MAX;
	int32_t t164 = 465;

    t164 = ((x657&(x658==x659))+x660);

    if (t164 != 127) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = INT64_MAX;
	int64_t x662 = -1LL;
	uint64_t x663 = 12055466LLU;
	uint8_t x664 = 0U;
	volatile int64_t t165 = 1443826756186366LL;

    t165 = ((x661&(x662==x663))+x664);

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x666 = 66U;
	int64_t x668 = 560LL;

    t166 = ((x665&(x666==x667))+x668);

    if (t166 != 560LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x669 = 3248U;
	int64_t x671 = INT64_MAX;
	uint16_t x672 = 3431U;
	volatile uint32_t t167 = 1695839U;

    t167 = ((x669&(x670==x671))+x672);

    if (t167 != 3431U) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x673 = INT8_MIN;
	volatile int8_t x674 = INT8_MAX;
	static int32_t x675 = INT32_MIN;
	int32_t t168 = -1;

    t168 = ((x673&(x674==x675))+x676);

    if (t168 != -32768) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x677 = -5891264365496LL;
	int32_t x678 = INT32_MIN;
	volatile int64_t t169 = -11194226LL;

    t169 = ((x677&(x678==x679))+x680);

    if (t169 != -32768LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x682 = 2791U;
	static volatile int16_t x683 = INT16_MIN;
	volatile uint32_t x684 = 712U;

    t170 = ((x681&(x682==x683))+x684);

    if (t170 != 712LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x685 = -36;
	volatile uint64_t t171 = 260LLU;

    t171 = ((x685&(x686==x687))+x688);

    if (t171 != 162625880074LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int8_t x689 = INT8_MIN;
	volatile int32_t x690 = INT32_MIN;
	int32_t x691 = -1;
	int32_t x692 = 60;
	int32_t t172 = -15;

    t172 = ((x689&(x690==x691))+x692);

    if (t172 != 60) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint64_t x693 = 211295113623219LLU;
	uint64_t x694 = UINT64_MAX;
	int32_t x695 = INT32_MIN;
	int32_t x696 = -1;
	volatile uint64_t t173 = UINT64_MAX;

    t173 = ((x693&(x694==x695))+x696);

    if (t173 != UINT64_MAX) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int64_t x698 = INT64_MIN;
	uint16_t x699 = 606U;
	volatile int32_t x700 = INT32_MIN;
	uint32_t t174 = 541180U;

    t174 = ((x697&(x698==x699))+x700);

    if (t174 != 2147483648U) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x702 = -1;
	volatile uint8_t x703 = 4U;
	int8_t x704 = -1;
	static int32_t t175 = -649876;

    t175 = ((x701&(x702==x703))+x704);

    if (t175 != -1) { NG(); } else { ; }
	
}

void f176(void) {
    	static int8_t x705 = INT8_MIN;
	uint8_t x706 = UINT8_MAX;
	uint16_t x708 = UINT16_MAX;

    t176 = ((x705&(x706==x707))+x708);

    if (t176 != 65535) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int16_t x709 = -1;
	int16_t x710 = -926;
	volatile int32_t x711 = INT32_MIN;
	volatile uint64_t t177 = 174276567826LLU;

    t177 = ((x709&(x710==x711))+x712);

    if (t177 != 114010980LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int8_t x715 = INT8_MAX;
	uint16_t x716 = 17U;
	volatile uint64_t t178 = 309LLU;

    t178 = ((x713&(x714==x715))+x716);

    if (t178 != 17LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x717 = 10642575U;
	int16_t x719 = -1;
	static int32_t x720 = 9248;

    t179 = ((x717&(x718==x719))+x720);

    if (t179 != 9248U) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x721 = 24U;
	int32_t x724 = -191857;

    t180 = ((x721&(x722==x723))+x724);

    if (t180 != -191857) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x725 = INT32_MAX;
	volatile int16_t x726 = -13;
	int32_t x727 = -1;
	volatile uint8_t x728 = 3U;

    t181 = ((x725&(x726==x727))+x728);

    if (t181 != 3) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x729 = -2;
	int8_t x730 = -20;
	int64_t x732 = -1LL;
	int64_t t182 = 6620737319087423LL;

    t182 = ((x729&(x730==x731))+x732);

    if (t182 != -1LL) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x733 = INT64_MAX;
	volatile int32_t x734 = 1388;
	volatile int32_t x735 = INT32_MIN;
	int16_t x736 = INT16_MIN;
	volatile int64_t t183 = 116093518027LL;

    t183 = ((x733&(x734==x735))+x736);

    if (t183 != -32768LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x737 = -165290657393LL;
	static volatile uint16_t x738 = UINT16_MAX;
	volatile int32_t x739 = INT32_MIN;
	int32_t x740 = INT32_MIN;
	volatile int64_t t184 = -16741600LL;

    t184 = ((x737&(x738==x739))+x740);

    if (t184 != -2147483648LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static int32_t x741 = 257;
	int16_t x743 = INT16_MIN;
	static volatile int64_t x744 = INT64_MAX;

    t185 = ((x741&(x742==x743))+x744);

    if (t185 != INT64_MAX) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int8_t x746 = INT8_MIN;
	uint32_t x748 = 2U;
	volatile uint32_t t186 = 665U;

    t186 = ((x745&(x746==x747))+x748);

    if (t186 != 2U) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int16_t x749 = INT16_MIN;
	int8_t x750 = INT8_MIN;
	int64_t x751 = 2098770761LL;
	uint8_t x752 = UINT8_MAX;
	static int32_t t187 = -29107606;

    t187 = ((x749&(x750==x751))+x752);

    if (t187 != 255) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x753 = INT8_MIN;
	static int32_t x754 = INT32_MAX;
	volatile int64_t x756 = -1LL;

    t188 = ((x753&(x754==x755))+x756);

    if (t188 != -1LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint8_t x757 = 19U;
	uint64_t x758 = 32284LLU;
	uint32_t x759 = UINT32_MAX;
	int16_t x760 = 176;
	static volatile int32_t t189 = -99;

    t189 = ((x757&(x758==x759))+x760);

    if (t189 != 176) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int8_t x761 = -15;
	int16_t x762 = -1;
	int16_t x763 = 4237;
	uint32_t x764 = 32730U;

    t190 = ((x761&(x762==x763))+x764);

    if (t190 != 32730U) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile uint64_t x766 = UINT64_MAX;
	int16_t x767 = INT16_MIN;
	int8_t x768 = -1;
	static volatile int64_t t191 = -2078784LL;

    t191 = ((x765&(x766==x767))+x768);

    if (t191 != -1LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x769 = 0;
	int64_t x770 = INT64_MAX;
	uint16_t x771 = 45U;
	volatile uint64_t x772 = UINT64_MAX;
	volatile uint64_t t192 = UINT64_MAX;

    t192 = ((x769&(x770==x771))+x772);

    if (t192 != UINT64_MAX) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile uint8_t x773 = 1U;
	static volatile uint32_t x774 = 304U;
	int8_t x775 = -1;
	int8_t x776 = INT8_MIN;

    t193 = ((x773&(x774==x775))+x776);

    if (t193 != -128) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x778 = INT64_MIN;
	int16_t x780 = INT16_MIN;
	uint64_t t194 = 936LLU;

    t194 = ((x777&(x778==x779))+x780);

    if (t194 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x781 = UINT32_MAX;
	static uint8_t x782 = 21U;
	volatile int64_t x784 = INT64_MIN;
	volatile int64_t t195 = INT64_MIN;

    t195 = ((x781&(x782==x783))+x784);

    if (t195 != INT64_MIN) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x785 = INT16_MIN;
	int32_t x786 = -440;
	int16_t x787 = -1;
	volatile int16_t x788 = INT16_MAX;
	int32_t t196 = 18;

    t196 = ((x785&(x786==x787))+x788);

    if (t196 != 32767) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x789 = 786279LLU;
	int16_t x790 = INT16_MIN;
	int64_t x791 = INT64_MIN;
	static int16_t x792 = INT16_MIN;
	uint64_t t197 = 909LLU;

    t197 = ((x789&(x790==x791))+x792);

    if (t197 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x793 = -1;
	int8_t x795 = -1;
	int32_t x796 = INT32_MAX;
	int32_t t198 = INT32_MAX;

    t198 = ((x793&(x794==x795))+x796);

    if (t198 != INT32_MAX) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int32_t x797 = -1;
	volatile uint64_t x799 = 2417LLU;

    t199 = ((x797&(x798==x799))+x800);

    if (t199 != 127) { NG(); } else { ; }
	
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

