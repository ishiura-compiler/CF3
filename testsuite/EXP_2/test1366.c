
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

volatile int64_t x4 = INT64_MIN;
volatile int16_t x6 = INT16_MIN;
int8_t x8 = 0;
static volatile uint32_t x9 = 703U;
int64_t x14 = INT64_MAX;
uint8_t x18 = 80U;
int16_t x22 = INT16_MIN;
volatile int32_t t5 = 1;
int32_t t6 = 130113668;
int8_t x40 = INT8_MIN;
int32_t x50 = INT32_MIN;
uint16_t x54 = UINT16_MAX;
int32_t t14 = 1484909;
static int8_t x67 = -54;
int64_t x71 = 283386LL;
static int32_t t17 = 223964;
int16_t x75 = -15;
uint8_t x79 = 4U;
int32_t t21 = 187;
static int8_t x92 = 0;
static int32_t t23 = 72;
static uint32_t x99 = UINT32_MAX;
static int64_t x103 = INT64_MIN;
volatile int32_t t27 = 33951544;
uint16_t x116 = 8734U;
volatile int32_t t30 = 30;
static int32_t t31 = 1;
static int64_t x133 = -1LL;
static int64_t x140 = -1LL;
int64_t x146 = INT64_MIN;
static volatile int32_t t36 = 1439;
int16_t x153 = 2;
int16_t x156 = -1042;
static volatile int32_t x158 = INT32_MIN;
volatile uint32_t x172 = 3864U;
int64_t x176 = INT64_MIN;
volatile uint32_t x178 = 3U;
uint16_t x181 = 94U;
int32_t t46 = -96;
int16_t x189 = INT16_MIN;
volatile int16_t x199 = INT16_MIN;
int8_t x200 = 0;
volatile int32_t x207 = INT32_MAX;
int32_t t51 = 163;
static uint8_t x209 = 7U;
uint16_t x220 = UINT16_MAX;
int8_t x224 = INT8_MIN;
static int32_t t56 = 16;
volatile int32_t t57 = 4555598;
int64_t x241 = -33696820346LL;
int32_t t62 = 29;
int32_t x254 = 38191;
int8_t x255 = 16;
uint16_t x260 = 1472U;
static uint8_t x262 = 0U;
volatile int16_t x263 = 107;
uint16_t x271 = 1323U;
int32_t t68 = 48495133;
int16_t x281 = 1384;
static uint8_t x282 = UINT8_MAX;
static volatile int64_t x291 = 1527364237376175LL;
int32_t x299 = INT32_MIN;
int16_t x305 = INT16_MIN;
int64_t x310 = INT64_MIN;
int8_t x311 = -4;
volatile int32_t t77 = 74035670;
uint8_t x315 = 0U;
int64_t x321 = INT64_MIN;
int64_t x331 = INT64_MIN;
uint32_t x334 = UINT32_MAX;
volatile int32_t x335 = 825086586;
uint8_t x343 = 115U;
int64_t x344 = INT64_MIN;
static volatile uint64_t x347 = 986248766LLU;
int32_t x352 = INT32_MAX;
volatile uint16_t x359 = 1U;
static volatile int32_t t89 = -12222183;
int32_t x363 = -1;
uint16_t x364 = 10U;
volatile int32_t t90 = -7371841;
static uint32_t x365 = 1706136993U;
int16_t x369 = 4;
int16_t x370 = INT16_MIN;
static int16_t x371 = INT16_MAX;
static int32_t t92 = -89;
uint8_t x373 = 24U;
static volatile int64_t x374 = -1LL;
int32_t x375 = -4238;
int32_t t94 = 208648339;
uint32_t x385 = 100151582U;
int8_t x386 = INT8_MIN;
volatile int64_t x391 = INT64_MIN;
int32_t x394 = 10;
int16_t x399 = INT16_MIN;
uint8_t x404 = 71U;
int32_t t102 = -177321702;
int64_t x413 = INT64_MIN;
static int32_t x416 = INT32_MAX;
uint16_t x423 = 1U;
volatile int32_t t106 = 85600046;
static uint8_t x431 = 0U;
static volatile int32_t t108 = -3332;
uint8_t x442 = UINT8_MAX;
int16_t x443 = INT16_MIN;
static int8_t x444 = INT8_MIN;
volatile int32_t t110 = 986189839;
volatile int16_t x445 = INT16_MAX;
int32_t x447 = -2401;
uint8_t x451 = 2U;
volatile int64_t x452 = 811707555044969LL;
int8_t x462 = INT8_MIN;
int32_t t115 = 49;
uint32_t x480 = 13307U;
static int64_t x486 = INT64_MIN;
int32_t t121 = -11949;
uint32_t x489 = 12361U;
int32_t t122 = 1;
uint16_t x498 = 32604U;
static volatile int64_t x504 = -6580LL;
int16_t x507 = -97;
uint64_t x508 = 9578820378836LLU;
volatile int32_t t126 = -96436925;
uint16_t x510 = UINT16_MAX;
uint16_t x511 = 6739U;
static volatile uint16_t x512 = 26917U;
volatile int32_t x517 = INT32_MIN;
int8_t x519 = INT8_MIN;
uint16_t x523 = UINT16_MAX;
static uint8_t x531 = 30U;
static int32_t t132 = 3906703;
int32_t x537 = INT32_MIN;
uint16_t x538 = 3578U;
int32_t x539 = -1;
volatile int16_t x540 = INT16_MAX;
int32_t t134 = -22237;
int64_t x543 = INT64_MIN;
int8_t x549 = INT8_MIN;
uint32_t x552 = UINT32_MAX;
static volatile int32_t t137 = 0;
int8_t x553 = -1;
volatile int32_t x554 = -1;
uint32_t x556 = 29100U;
uint8_t x564 = UINT8_MAX;
uint8_t x580 = UINT8_MAX;
volatile int64_t x584 = -52780LL;
static uint64_t x588 = UINT64_MAX;
uint32_t x590 = 390U;
uint16_t x591 = UINT16_MAX;
uint8_t x597 = 59U;
volatile int32_t x605 = INT32_MIN;
volatile int32_t t151 = 12;
int8_t x613 = 59;
int8_t x617 = -1;
int16_t x618 = INT16_MAX;
int8_t x619 = -5;
static int32_t t155 = -100160;
uint8_t x625 = 7U;
int16_t x630 = INT16_MIN;
int32_t x632 = -1;
int64_t x648 = 3842776LL;
int8_t x652 = INT8_MIN;
int8_t x659 = INT8_MIN;
uint8_t x660 = 2U;
static volatile uint8_t x669 = 7U;
int16_t x672 = 3;
int16_t x673 = INT16_MIN;
int32_t x676 = INT32_MIN;
uint32_t x678 = 152849U;
int8_t x687 = INT8_MAX;
uint8_t x690 = UINT8_MAX;
static int32_t t172 = -1;
int16_t x697 = INT16_MIN;
volatile uint32_t x703 = 4008U;
int64_t x706 = INT64_MIN;
uint16_t x707 = UINT16_MAX;
int32_t x708 = INT32_MIN;
int8_t x714 = 1;
volatile uint16_t x716 = 15115U;
int64_t x723 = INT64_MIN;
int32_t x726 = 5;
int64_t x734 = 21608LL;
int8_t x737 = -1;
int64_t x738 = -1LL;
volatile int64_t x740 = 269791424898992LL;
int16_t x743 = INT16_MIN;
uint16_t x744 = 20U;
uint8_t x746 = 13U;
static int8_t x764 = INT8_MIN;
int32_t t190 = -11377430;
static int8_t x770 = INT8_MIN;
volatile int32_t t193 = 15617162;
int8_t x779 = INT8_MAX;
int32_t x781 = -1;
uint64_t x784 = UINT64_MAX;
static uint8_t x786 = UINT8_MAX;
int32_t x789 = -1;
static volatile int8_t x790 = INT8_MIN;
static int32_t t197 = -788145611;
uint16_t x795 = 0U;
static volatile int8_t x798 = 0;


void f0(void) {
    	volatile int8_t x1 = 1;
	int32_t x2 = -1;
	uint16_t x3 = 1099U;
	int32_t t0 = -109;

    t0 = ((x1^(x2!=x3))==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x5 = 1;
	int64_t x7 = INT64_MAX;
	volatile int32_t t1 = -13113097;

    t1 = ((x5^(x6!=x7))==x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x10 = 114;
	int8_t x11 = -1;
	static uint8_t x12 = 125U;
	static int32_t t2 = 233967;

    t2 = ((x9^(x10!=x11))==x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = -1;
	int64_t x15 = 256297857725LL;
	int8_t x16 = -1;
	volatile int32_t t3 = 35;

    t3 = ((x13^(x14!=x15))==x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x17 = 0U;
	int16_t x19 = INT16_MAX;
	uint64_t x20 = 1305583788935569912LLU;
	volatile int32_t t4 = -7805957;

    t4 = ((x17^(x18!=x19))==x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x21 = INT64_MIN;
	static int8_t x23 = INT8_MAX;
	int32_t x24 = -436272914;

    t5 = ((x21^(x22!=x23))==x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = INT16_MIN;
	int64_t x26 = -1LL;
	int32_t x27 = INT32_MIN;
	int8_t x28 = INT8_MIN;

    t6 = ((x25^(x26!=x27))==x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = INT32_MAX;
	uint64_t x30 = 710852495LLU;
	int64_t x31 = -226027LL;
	uint8_t x32 = 28U;
	static int32_t t7 = -3780364;

    t7 = ((x29^(x30!=x31))==x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = 80942655;
	int16_t x34 = 5;
	uint32_t x35 = UINT32_MAX;
	int32_t x36 = -1;
	volatile int32_t t8 = 1;

    t8 = ((x33^(x34!=x35))==x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x37 = -1;
	uint64_t x38 = UINT64_MAX;
	volatile int16_t x39 = -1;
	int32_t t9 = 12;

    t9 = ((x37^(x38!=x39))==x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = -38;
	int64_t x42 = INT64_MAX;
	int8_t x43 = INT8_MIN;
	uint64_t x44 = UINT64_MAX;
	volatile int32_t t10 = -454983797;

    t10 = ((x41^(x42!=x43))==x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = -203;
	int64_t x46 = -8576551120119LL;
	int16_t x47 = INT16_MAX;
	int32_t x48 = INT32_MIN;
	static int32_t t11 = 902780276;

    t11 = ((x45^(x46!=x47))==x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = INT16_MIN;
	volatile int32_t x51 = 1;
	uint64_t x52 = UINT64_MAX;
	int32_t t12 = 44762;

    t12 = ((x49^(x50!=x51))==x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x53 = 21743U;
	static int8_t x55 = -1;
	volatile int64_t x56 = INT64_MIN;
	static int32_t t13 = -251;

    t13 = ((x53^(x54!=x55))==x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static int8_t x57 = -8;
	int32_t x58 = INT32_MIN;
	uint8_t x59 = 26U;
	int64_t x60 = -177085653785271LL;

    t14 = ((x57^(x58!=x59))==x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = 52;
	int16_t x62 = -372;
	static int64_t x63 = INT64_MIN;
	uint16_t x64 = 30U;
	int32_t t15 = -570603;

    t15 = ((x61^(x62!=x63))==x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x65 = 289U;
	int8_t x66 = INT8_MIN;
	volatile int16_t x68 = -362;
	volatile int32_t t16 = -3703;

    t16 = ((x65^(x66!=x67))==x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = INT32_MAX;
	static uint32_t x70 = 0U;
	uint16_t x72 = 2047U;

    t17 = ((x69^(x70!=x71))==x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x73 = INT64_MIN;
	volatile int16_t x74 = 2;
	int64_t x76 = INT64_MAX;
	int32_t t18 = -1954;

    t18 = ((x73^(x74!=x75))==x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x77 = 2;
	uint64_t x78 = 672202LLU;
	uint32_t x80 = 6115864U;
	int32_t t19 = 771567;

    t19 = ((x77^(x78!=x79))==x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x81 = 943020712U;
	static uint16_t x82 = 2U;
	int16_t x83 = INT16_MIN;
	int64_t x84 = 33025876077LL;
	int32_t t20 = 77937904;

    t20 = ((x81^(x82!=x83))==x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int32_t x85 = INT32_MIN;
	uint16_t x86 = 215U;
	volatile int32_t x87 = INT32_MAX;
	int8_t x88 = INT8_MIN;

    t21 = ((x85^(x86!=x87))==x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x89 = UINT64_MAX;
	static int16_t x90 = 6;
	uint16_t x91 = UINT16_MAX;
	static volatile int32_t t22 = 993768042;

    t22 = ((x89^(x90!=x91))==x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint8_t x93 = 1U;
	uint32_t x94 = UINT32_MAX;
	static uint8_t x95 = UINT8_MAX;
	int8_t x96 = INT8_MIN;

    t23 = ((x93^(x94!=x95))==x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x97 = 1819U;
	int16_t x98 = INT16_MIN;
	int16_t x100 = 6542;
	volatile int32_t t24 = 1;

    t24 = ((x97^(x98!=x99))==x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = INT16_MAX;
	static int64_t x102 = 244007LL;
	int32_t x104 = INT32_MIN;
	int32_t t25 = 13;

    t25 = ((x101^(x102!=x103))==x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x105 = 29;
	int8_t x106 = INT8_MAX;
	int32_t x107 = INT32_MIN;
	uint16_t x108 = UINT16_MAX;
	static int32_t t26 = 32690688;

    t26 = ((x105^(x106!=x107))==x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x109 = 32462LLU;
	uint16_t x110 = 8U;
	int64_t x111 = -1LL;
	volatile uint64_t x112 = UINT64_MAX;

    t27 = ((x109^(x110!=x111))==x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x113 = 1U;
	int16_t x114 = INT16_MIN;
	int16_t x115 = -1;
	int32_t t28 = 92;

    t28 = ((x113^(x114!=x115))==x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x117 = 66U;
	int8_t x118 = INT8_MIN;
	static int32_t x119 = INT32_MIN;
	volatile int8_t x120 = INT8_MIN;
	volatile int32_t t29 = -186;

    t29 = ((x117^(x118!=x119))==x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = INT32_MIN;
	int8_t x122 = INT8_MAX;
	int16_t x123 = INT16_MAX;
	static uint8_t x124 = 0U;

    t30 = ((x121^(x122!=x123))==x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x125 = 1014409U;
	uint8_t x126 = 0U;
	uint32_t x127 = UINT32_MAX;
	int32_t x128 = 7;

    t31 = ((x125^(x126!=x127))==x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x129 = 1577LLU;
	uint32_t x130 = UINT32_MAX;
	int16_t x131 = 0;
	int16_t x132 = INT16_MIN;
	volatile int32_t t32 = 3805;

    t32 = ((x129^(x130!=x131))==x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x134 = INT16_MAX;
	uint32_t x135 = 1212U;
	static int64_t x136 = 19LL;
	int32_t t33 = -1213;

    t33 = ((x133^(x134!=x135))==x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile int64_t x137 = -1LL;
	uint8_t x138 = 1U;
	uint32_t x139 = UINT32_MAX;
	volatile int32_t t34 = -2;

    t34 = ((x137^(x138!=x139))==x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int32_t x141 = INT32_MAX;
	volatile int16_t x142 = -80;
	int64_t x143 = -1LL;
	int16_t x144 = INT16_MIN;
	int32_t t35 = -533402862;

    t35 = ((x141^(x142!=x143))==x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = 27981505;
	int16_t x147 = INT16_MIN;
	int64_t x148 = INT64_MIN;

    t36 = ((x145^(x146!=x147))==x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x149 = -173164463;
	uint16_t x150 = 0U;
	uint16_t x151 = UINT16_MAX;
	uint32_t x152 = 59170526U;
	volatile int32_t t37 = 177800;

    t37 = ((x149^(x150!=x151))==x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x154 = -2830143796LL;
	static int32_t x155 = INT32_MAX;
	int32_t t38 = -52399;

    t38 = ((x153^(x154!=x155))==x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x157 = INT64_MIN;
	uint16_t x159 = 3U;
	uint8_t x160 = 4U;
	static int32_t t39 = 188246;

    t39 = ((x157^(x158!=x159))==x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x161 = INT64_MIN;
	uint8_t x162 = 6U;
	uint16_t x163 = 3444U;
	uint32_t x164 = UINT32_MAX;
	volatile int32_t t40 = 148168;

    t40 = ((x161^(x162!=x163))==x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x165 = 1;
	int8_t x166 = -1;
	int8_t x167 = INT8_MAX;
	volatile int64_t x168 = -31493302713624359LL;
	volatile int32_t t41 = 5;

    t41 = ((x165^(x166!=x167))==x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x169 = 417238991U;
	static uint32_t x170 = UINT32_MAX;
	int16_t x171 = INT16_MIN;
	volatile int32_t t42 = -122;

    t42 = ((x169^(x170!=x171))==x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x173 = INT16_MAX;
	int8_t x174 = -1;
	static volatile int32_t x175 = -31928840;
	volatile int32_t t43 = -86370;

    t43 = ((x173^(x174!=x175))==x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x177 = 1611294U;
	static int8_t x179 = INT8_MIN;
	int8_t x180 = 57;
	volatile int32_t t44 = -99;

    t44 = ((x177^(x178!=x179))==x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x182 = INT32_MAX;
	int32_t x183 = -1;
	int8_t x184 = -1;
	int32_t t45 = 34208;

    t45 = ((x181^(x182!=x183))==x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x185 = 4406331U;
	volatile int8_t x186 = INT8_MIN;
	static volatile uint64_t x187 = 14896LLU;
	int8_t x188 = 0;

    t46 = ((x185^(x186!=x187))==x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x190 = INT8_MIN;
	static uint16_t x191 = 1U;
	int32_t x192 = INT32_MIN;
	static int32_t t47 = 0;

    t47 = ((x189^(x190!=x191))==x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x193 = INT16_MAX;
	int8_t x194 = INT8_MIN;
	int16_t x195 = INT16_MIN;
	int64_t x196 = -262478340019120LL;
	int32_t t48 = 24277;

    t48 = ((x193^(x194!=x195))==x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x197 = UINT8_MAX;
	volatile int8_t x198 = INT8_MIN;
	int32_t t49 = 66;

    t49 = ((x197^(x198!=x199))==x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint32_t x201 = UINT32_MAX;
	volatile int16_t x202 = -861;
	static uint64_t x203 = 2707267340LLU;
	int64_t x204 = -343LL;
	volatile int32_t t50 = -8197072;

    t50 = ((x201^(x202!=x203))==x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x205 = INT64_MAX;
	static uint64_t x206 = UINT64_MAX;
	int8_t x208 = INT8_MAX;

    t51 = ((x205^(x206!=x207))==x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int64_t x210 = INT64_MIN;
	static uint8_t x211 = 2U;
	int64_t x212 = INT64_MAX;
	int32_t t52 = 1582;

    t52 = ((x209^(x210!=x211))==x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint32_t x213 = 32U;
	int8_t x214 = INT8_MAX;
	uint64_t x215 = 5812190LLU;
	int16_t x216 = INT16_MIN;
	int32_t t53 = -582;

    t53 = ((x213^(x214!=x215))==x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x217 = 365296209LL;
	volatile int16_t x218 = 1;
	int16_t x219 = INT16_MAX;
	static volatile int32_t t54 = -3245;

    t54 = ((x217^(x218!=x219))==x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = INT32_MIN;
	uint8_t x222 = 13U;
	uint32_t x223 = UINT32_MAX;
	int32_t t55 = 5;

    t55 = ((x221^(x222!=x223))==x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x225 = INT32_MIN;
	int8_t x226 = INT8_MIN;
	int64_t x227 = -1011356104469998648LL;
	static uint8_t x228 = UINT8_MAX;

    t56 = ((x225^(x226!=x227))==x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x229 = -56510535014202782LL;
	int32_t x230 = INT32_MIN;
	volatile int8_t x231 = 4;
	int16_t x232 = -1;

    t57 = ((x229^(x230!=x231))==x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int64_t x233 = -1LL;
	uint8_t x234 = 0U;
	int8_t x235 = INT8_MAX;
	static uint64_t x236 = 3568LLU;
	static volatile int32_t t58 = -3239780;

    t58 = ((x233^(x234!=x235))==x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile uint64_t x237 = 3767143935485LLU;
	int16_t x238 = 15;
	uint64_t x239 = 10LLU;
	volatile int64_t x240 = INT64_MIN;
	int32_t t59 = -45818029;

    t59 = ((x237^(x238!=x239))==x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x242 = -55;
	static int8_t x243 = INT8_MIN;
	uint8_t x244 = 45U;
	static volatile int32_t t60 = -336008;

    t60 = ((x241^(x242!=x243))==x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x245 = INT16_MIN;
	static int64_t x246 = INT64_MIN;
	static uint16_t x247 = 14U;
	int8_t x248 = -3;
	int32_t t61 = 3618601;

    t61 = ((x245^(x246!=x247))==x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x249 = 44U;
	static int32_t x250 = -1683334;
	int64_t x251 = 1467535141822440LL;
	static int8_t x252 = -1;

    t62 = ((x249^(x250!=x251))==x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x253 = -3;
	uint64_t x256 = 13898326351917342LLU;
	int32_t t63 = -2330;

    t63 = ((x253^(x254!=x255))==x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x257 = 2U;
	volatile int64_t x258 = 45212693345LL;
	static int16_t x259 = INT16_MIN;
	int32_t t64 = 12899871;

    t64 = ((x257^(x258!=x259))==x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x261 = 7;
	int32_t x264 = INT32_MAX;
	int32_t t65 = 9;

    t65 = ((x261^(x262!=x263))==x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int32_t x265 = INT32_MIN;
	static int16_t x266 = INT16_MIN;
	volatile uint64_t x267 = UINT64_MAX;
	static int32_t x268 = INT32_MAX;
	int32_t t66 = 10836512;

    t66 = ((x265^(x266!=x267))==x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x269 = 1906U;
	int64_t x270 = 28153858273464549LL;
	static int32_t x272 = -1;
	static volatile int32_t t67 = -275;

    t67 = ((x269^(x270!=x271))==x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x273 = UINT16_MAX;
	uint32_t x274 = UINT32_MAX;
	static volatile uint32_t x275 = 17760U;
	int8_t x276 = -1;

    t68 = ((x273^(x274!=x275))==x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x277 = INT32_MIN;
	volatile int16_t x278 = INT16_MIN;
	int16_t x279 = INT16_MAX;
	uint64_t x280 = 15666487521LLU;
	volatile int32_t t69 = 6153;

    t69 = ((x277^(x278!=x279))==x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x283 = -1;
	uint16_t x284 = 6U;
	volatile int32_t t70 = -195163311;

    t70 = ((x281^(x282!=x283))==x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x285 = 850927LLU;
	static uint32_t x286 = 11U;
	static int64_t x287 = INT64_MAX;
	static uint8_t x288 = 107U;
	int32_t t71 = 21557993;

    t71 = ((x285^(x286!=x287))==x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x289 = 1872U;
	uint8_t x290 = UINT8_MAX;
	int64_t x292 = -155515077LL;
	int32_t t72 = 12;

    t72 = ((x289^(x290!=x291))==x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x293 = -1;
	static uint64_t x294 = 2LLU;
	int32_t x295 = -85;
	volatile int32_t x296 = -1;
	int32_t t73 = -3956176;

    t73 = ((x293^(x294!=x295))==x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x297 = 243580117449871563LLU;
	int64_t x298 = 51853040904645LL;
	uint32_t x300 = UINT32_MAX;
	volatile int32_t t74 = 771108;

    t74 = ((x297^(x298!=x299))==x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x301 = UINT16_MAX;
	volatile int64_t x302 = INT64_MIN;
	int64_t x303 = INT64_MIN;
	int8_t x304 = INT8_MIN;
	int32_t t75 = 175911548;

    t75 = ((x301^(x302!=x303))==x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint64_t x306 = 674408295LLU;
	int8_t x307 = -1;
	uint8_t x308 = 3U;
	int32_t t76 = 15534;

    t76 = ((x305^(x306!=x307))==x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile uint16_t x309 = 1U;
	uint8_t x312 = 126U;

    t77 = ((x309^(x310!=x311))==x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static int32_t x313 = 47935565;
	static volatile int32_t x314 = INT32_MAX;
	int32_t x316 = INT32_MIN;
	static volatile int32_t t78 = 7594468;

    t78 = ((x313^(x314!=x315))==x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x317 = -1;
	uint16_t x318 = UINT16_MAX;
	int64_t x319 = 316LL;
	int64_t x320 = 181814722LL;
	int32_t t79 = 40584;

    t79 = ((x317^(x318!=x319))==x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x322 = 13U;
	static uint8_t x323 = 17U;
	uint8_t x324 = 3U;
	volatile int32_t t80 = -2830;

    t80 = ((x321^(x322!=x323))==x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x325 = -346;
	uint32_t x326 = 1321051U;
	static int8_t x327 = 6;
	static volatile uint16_t x328 = 661U;
	volatile int32_t t81 = 539838236;

    t81 = ((x325^(x326!=x327))==x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x329 = 3561412555403LLU;
	volatile int16_t x330 = 3;
	int8_t x332 = INT8_MIN;
	int32_t t82 = 2;

    t82 = ((x329^(x330!=x331))==x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x333 = 14U;
	int8_t x336 = INT8_MIN;
	volatile int32_t t83 = -997079;

    t83 = ((x333^(x334!=x335))==x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x337 = UINT64_MAX;
	uint64_t x338 = 1LLU;
	static volatile uint16_t x339 = UINT16_MAX;
	volatile int16_t x340 = -14;
	volatile int32_t t84 = 460;

    t84 = ((x337^(x338!=x339))==x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint16_t x341 = 6U;
	static int64_t x342 = -1773788603LL;
	static int32_t t85 = 537377398;

    t85 = ((x341^(x342!=x343))==x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x345 = -4;
	int32_t x346 = -3051738;
	uint8_t x348 = UINT8_MAX;
	volatile int32_t t86 = -1;

    t86 = ((x345^(x346!=x347))==x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int16_t x349 = INT16_MIN;
	uint8_t x350 = 5U;
	int32_t x351 = INT32_MIN;
	volatile int32_t t87 = -5;

    t87 = ((x349^(x350!=x351))==x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x353 = UINT16_MAX;
	int64_t x354 = INT64_MIN;
	uint8_t x355 = UINT8_MAX;
	uint64_t x356 = 97253284437LLU;
	static volatile int32_t t88 = -1;

    t88 = ((x353^(x354!=x355))==x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x357 = -1LL;
	volatile int8_t x358 = INT8_MIN;
	static uint16_t x360 = 510U;

    t89 = ((x357^(x358!=x359))==x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int64_t x361 = INT64_MIN;
	int32_t x362 = -1;

    t90 = ((x361^(x362!=x363))==x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int64_t x366 = INT64_MIN;
	int64_t x367 = 1263498946663LL;
	volatile int8_t x368 = -9;
	int32_t t91 = 420231422;

    t91 = ((x365^(x366!=x367))==x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x372 = -3;

    t92 = ((x369^(x370!=x371))==x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x376 = INT32_MIN;
	volatile int32_t t93 = 4062;

    t93 = ((x373^(x374!=x375))==x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile uint64_t x377 = UINT64_MAX;
	volatile int32_t x378 = -1;
	volatile uint8_t x379 = 66U;
	int32_t x380 = 8282559;

    t94 = ((x377^(x378!=x379))==x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int8_t x381 = INT8_MIN;
	int16_t x382 = -1;
	uint8_t x383 = 0U;
	volatile int16_t x384 = -67;
	volatile int32_t t95 = -1;

    t95 = ((x381^(x382!=x383))==x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint64_t x387 = UINT64_MAX;
	static uint64_t x388 = 185496566LLU;
	static int32_t t96 = -1556;

    t96 = ((x385^(x386!=x387))==x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint64_t x389 = 390396LLU;
	volatile uint32_t x390 = UINT32_MAX;
	int16_t x392 = INT16_MAX;
	static volatile int32_t t97 = -511059791;

    t97 = ((x389^(x390!=x391))==x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int16_t x393 = INT16_MAX;
	static volatile uint64_t x395 = UINT64_MAX;
	uint64_t x396 = 5840LLU;
	volatile int32_t t98 = -117;

    t98 = ((x393^(x394!=x395))==x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint32_t x397 = 78293922U;
	volatile int16_t x398 = -1;
	volatile int64_t x400 = 2073685LL;
	volatile int32_t t99 = -255;

    t99 = ((x397^(x398!=x399))==x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint64_t x401 = 86589429959884260LLU;
	int64_t x402 = INT64_MIN;
	int32_t x403 = 818309;
	volatile int32_t t100 = 61694;

    t100 = ((x401^(x402!=x403))==x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x405 = 2581U;
	uint16_t x406 = 62U;
	static int8_t x407 = -19;
	int64_t x408 = INT64_MIN;
	static int32_t t101 = 188;

    t101 = ((x405^(x406!=x407))==x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x409 = 4019341572LLU;
	volatile int64_t x410 = INT64_MIN;
	volatile uint16_t x411 = 2755U;
	volatile int8_t x412 = INT8_MIN;

    t102 = ((x409^(x410!=x411))==x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x414 = 1057LL;
	int16_t x415 = INT16_MIN;
	int32_t t103 = -591;

    t103 = ((x413^(x414!=x415))==x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x417 = 665443;
	int8_t x418 = INT8_MIN;
	static volatile int8_t x419 = INT8_MIN;
	uint16_t x420 = 28382U;
	volatile int32_t t104 = -44526;

    t104 = ((x417^(x418!=x419))==x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x421 = 16298426065269LL;
	uint8_t x422 = UINT8_MAX;
	int32_t x424 = -50421;
	volatile int32_t t105 = -2517394;

    t105 = ((x421^(x422!=x423))==x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x425 = 6347LLU;
	int64_t x426 = INT64_MAX;
	uint64_t x427 = 567788050762043LLU;
	volatile int8_t x428 = INT8_MIN;

    t106 = ((x425^(x426!=x427))==x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x429 = INT64_MAX;
	static int32_t x430 = INT32_MIN;
	volatile int8_t x432 = INT8_MIN;
	static volatile int32_t t107 = 1;

    t107 = ((x429^(x430!=x431))==x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x433 = UINT64_MAX;
	int16_t x434 = INT16_MIN;
	static volatile int16_t x435 = -1;
	int32_t x436 = INT32_MAX;

    t108 = ((x433^(x434!=x435))==x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x437 = UINT32_MAX;
	uint64_t x438 = UINT64_MAX;
	uint32_t x439 = 421142572U;
	int8_t x440 = -1;
	int32_t t109 = -1;

    t109 = ((x437^(x438!=x439))==x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int64_t x441 = INT64_MIN;

    t110 = ((x441^(x442!=x443))==x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint8_t x446 = 109U;
	int64_t x448 = 368659427635LL;
	volatile int32_t t111 = -1;

    t111 = ((x445^(x446!=x447))==x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int8_t x449 = -18;
	uint8_t x450 = 52U;
	int32_t t112 = 907885;

    t112 = ((x449^(x450!=x451))==x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x453 = 3212U;
	static uint8_t x454 = 26U;
	static uint64_t x455 = 116268349435792LLU;
	int64_t x456 = INT64_MIN;
	int32_t t113 = 2305919;

    t113 = ((x453^(x454!=x455))==x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x457 = INT8_MAX;
	int8_t x458 = -38;
	int16_t x459 = INT16_MIN;
	volatile uint32_t x460 = 281613019U;
	int32_t t114 = -37891152;

    t114 = ((x457^(x458!=x459))==x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x461 = 106U;
	volatile int16_t x463 = INT16_MIN;
	uint64_t x464 = UINT64_MAX;

    t115 = ((x461^(x462!=x463))==x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x465 = -1;
	uint64_t x466 = 332326LLU;
	volatile int16_t x467 = -196;
	volatile int16_t x468 = -54;
	int32_t t116 = 2891899;

    t116 = ((x465^(x466!=x467))==x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int16_t x469 = -1;
	int64_t x470 = 150283736435LL;
	volatile int32_t x471 = INT32_MIN;
	uint32_t x472 = 400020U;
	static volatile int32_t t117 = -118609208;

    t117 = ((x469^(x470!=x471))==x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint32_t x473 = 7U;
	int8_t x474 = INT8_MAX;
	static uint64_t x475 = UINT64_MAX;
	volatile uint64_t x476 = 33829075562929LLU;
	volatile int32_t t118 = -71499;

    t118 = ((x473^(x474!=x475))==x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile int16_t x477 = 94;
	int32_t x478 = 51;
	uint64_t x479 = UINT64_MAX;
	volatile int32_t t119 = -21;

    t119 = ((x477^(x478!=x479))==x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x481 = -1;
	int16_t x482 = 6;
	static int16_t x483 = 0;
	static int8_t x484 = INT8_MAX;
	volatile int32_t t120 = -19301;

    t120 = ((x481^(x482!=x483))==x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int32_t x485 = INT32_MIN;
	uint16_t x487 = 1U;
	uint32_t x488 = 111760U;

    t121 = ((x485^(x486!=x487))==x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x490 = -1;
	volatile int8_t x491 = INT8_MIN;
	uint32_t x492 = 1347U;

    t122 = ((x489^(x490!=x491))==x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x493 = 7;
	int8_t x494 = INT8_MIN;
	int32_t x495 = -1;
	int16_t x496 = -12819;
	volatile int32_t t123 = 0;

    t123 = ((x493^(x494!=x495))==x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x497 = UINT16_MAX;
	volatile uint8_t x499 = UINT8_MAX;
	volatile int16_t x500 = INT16_MAX;
	volatile int32_t t124 = -156;

    t124 = ((x497^(x498!=x499))==x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static int16_t x501 = -1;
	uint16_t x502 = 1U;
	int16_t x503 = -1;
	static int32_t t125 = -703615;

    t125 = ((x501^(x502!=x503))==x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x505 = UINT8_MAX;
	int8_t x506 = INT8_MAX;

    t126 = ((x505^(x506!=x507))==x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x509 = 62;
	int32_t t127 = 19;

    t127 = ((x509^(x510!=x511))==x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x513 = UINT8_MAX;
	uint8_t x514 = 20U;
	uint16_t x515 = 3858U;
	int8_t x516 = -1;
	int32_t t128 = -93;

    t128 = ((x513^(x514!=x515))==x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static int16_t x518 = -3966;
	int16_t x520 = INT16_MAX;
	volatile int32_t t129 = 54;

    t129 = ((x517^(x518!=x519))==x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int8_t x521 = INT8_MIN;
	int8_t x522 = INT8_MIN;
	static int64_t x524 = INT64_MIN;
	volatile int32_t t130 = 86;

    t130 = ((x521^(x522!=x523))==x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint8_t x525 = 0U;
	uint64_t x526 = 506087775583LLU;
	int16_t x527 = -10;
	uint32_t x528 = 557099U;
	volatile int32_t t131 = -53172865;

    t131 = ((x525^(x526!=x527))==x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x529 = INT64_MIN;
	static int64_t x530 = INT64_MAX;
	volatile int16_t x532 = INT16_MIN;

    t132 = ((x529^(x530!=x531))==x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x533 = INT8_MAX;
	static int16_t x534 = -1;
	int8_t x535 = 23;
	static volatile int16_t x536 = -1;
	int32_t t133 = -229;

    t133 = ((x533^(x534!=x535))==x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    

    t134 = ((x537^(x538!=x539))==x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x541 = 8U;
	int16_t x542 = 15690;
	int16_t x544 = -2966;
	static int32_t t135 = 18166;

    t135 = ((x541^(x542!=x543))==x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x545 = INT64_MAX;
	int64_t x546 = INT64_MIN;
	int64_t x547 = INT64_MAX;
	uint8_t x548 = 0U;
	volatile int32_t t136 = 34;

    t136 = ((x545^(x546!=x547))==x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x550 = INT8_MAX;
	int64_t x551 = INT64_MIN;

    t137 = ((x549^(x550!=x551))==x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile uint64_t x555 = 401208628LLU;
	int32_t t138 = -448684179;

    t138 = ((x553^(x554!=x555))==x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x557 = INT64_MIN;
	static int64_t x558 = INT64_MAX;
	uint16_t x559 = UINT16_MAX;
	int32_t x560 = INT32_MIN;
	volatile int32_t t139 = 4;

    t139 = ((x557^(x558!=x559))==x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x561 = 25;
	int16_t x562 = INT16_MAX;
	static volatile uint16_t x563 = UINT16_MAX;
	volatile int32_t t140 = -27;

    t140 = ((x561^(x562!=x563))==x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int8_t x565 = -1;
	static int64_t x566 = INT64_MAX;
	volatile uint16_t x567 = UINT16_MAX;
	int8_t x568 = -1;
	int32_t t141 = -289651829;

    t141 = ((x565^(x566!=x567))==x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x569 = INT8_MAX;
	volatile uint32_t x570 = 7887U;
	int64_t x571 = INT64_MIN;
	uint8_t x572 = 9U;
	int32_t t142 = -21;

    t142 = ((x569^(x570!=x571))==x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int8_t x573 = -1;
	int8_t x574 = -1;
	volatile int16_t x575 = 3;
	uint32_t x576 = 7U;
	static int32_t t143 = -161003833;

    t143 = ((x573^(x574!=x575))==x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint64_t x577 = 554275533LLU;
	uint32_t x578 = UINT32_MAX;
	static int8_t x579 = 46;
	static volatile int32_t t144 = 1662960;

    t144 = ((x577^(x578!=x579))==x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint8_t x581 = 6U;
	static int64_t x582 = -4790937683972LL;
	static int32_t x583 = INT32_MIN;
	int32_t t145 = 35197772;

    t145 = ((x581^(x582!=x583))==x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x585 = 12;
	uint16_t x586 = 6409U;
	int8_t x587 = -1;
	static volatile int32_t t146 = 10203;

    t146 = ((x585^(x586!=x587))==x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x589 = 18;
	int8_t x592 = 0;
	static volatile int32_t t147 = 6114;

    t147 = ((x589^(x590!=x591))==x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x593 = 2U;
	int32_t x594 = -1;
	int32_t x595 = -1;
	uint64_t x596 = 1556LLU;
	volatile int32_t t148 = -24462825;

    t148 = ((x593^(x594!=x595))==x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint64_t x598 = 4140LLU;
	static int8_t x599 = -2;
	static uint64_t x600 = 46539787471097LLU;
	int32_t t149 = 210;

    t149 = ((x597^(x598!=x599))==x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint64_t x601 = 6390570838967LLU;
	uint32_t x602 = 78U;
	int32_t x603 = -5451115;
	int16_t x604 = INT16_MIN;
	int32_t t150 = -842458;

    t150 = ((x601^(x602!=x603))==x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile int8_t x606 = INT8_MIN;
	volatile int32_t x607 = -368689159;
	int32_t x608 = 11987363;

    t151 = ((x605^(x606!=x607))==x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x609 = 1U;
	static uint16_t x610 = 23532U;
	volatile int8_t x611 = INT8_MAX;
	int32_t x612 = INT32_MAX;
	static volatile int32_t t152 = -444835146;

    t152 = ((x609^(x610!=x611))==x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x614 = INT16_MAX;
	int64_t x615 = 43205294254LL;
	int32_t x616 = INT32_MAX;
	int32_t t153 = -1134;

    t153 = ((x613^(x614!=x615))==x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x620 = -1;
	volatile int32_t t154 = 1;

    t154 = ((x617^(x618!=x619))==x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x621 = INT32_MAX;
	int32_t x622 = INT32_MIN;
	static volatile uint64_t x623 = 55LLU;
	volatile int32_t x624 = INT32_MIN;

    t155 = ((x621^(x622!=x623))==x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint8_t x626 = 0U;
	uint16_t x627 = 12113U;
	int8_t x628 = -1;
	static int32_t t156 = -2;

    t156 = ((x625^(x626!=x627))==x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int32_t x629 = INT32_MIN;
	volatile uint8_t x631 = 63U;
	int32_t t157 = -11061647;

    t157 = ((x629^(x630!=x631))==x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x633 = 1;
	uint8_t x634 = 1U;
	int32_t x635 = -1;
	int64_t x636 = INT64_MIN;
	volatile int32_t t158 = -429;

    t158 = ((x633^(x634!=x635))==x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x637 = INT8_MIN;
	int16_t x638 = INT16_MAX;
	int16_t x639 = INT16_MIN;
	int32_t x640 = INT32_MAX;
	volatile int32_t t159 = 51199589;

    t159 = ((x637^(x638!=x639))==x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x641 = -81542;
	int64_t x642 = INT64_MAX;
	int64_t x643 = INT64_MIN;
	int8_t x644 = INT8_MIN;
	static int32_t t160 = -771538020;

    t160 = ((x641^(x642!=x643))==x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint16_t x645 = UINT16_MAX;
	int8_t x646 = -6;
	int8_t x647 = INT8_MAX;
	volatile int32_t t161 = -1;

    t161 = ((x645^(x646!=x647))==x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x649 = INT16_MAX;
	static int32_t x650 = 2971198;
	static int16_t x651 = -1;
	volatile int32_t t162 = 129892;

    t162 = ((x649^(x650!=x651))==x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x653 = 9U;
	int64_t x654 = INT64_MIN;
	int32_t x655 = INT32_MIN;
	uint64_t x656 = 6626LLU;
	volatile int32_t t163 = -26125;

    t163 = ((x653^(x654!=x655))==x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static int16_t x657 = -1;
	static int32_t x658 = -1;
	static int32_t t164 = 3784284;

    t164 = ((x657^(x658!=x659))==x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = -1LL;
	static int8_t x662 = 1;
	int32_t x663 = INT32_MAX;
	int32_t x664 = INT32_MAX;
	int32_t t165 = 127320;

    t165 = ((x661^(x662!=x663))==x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x665 = -415729;
	volatile uint64_t x666 = UINT64_MAX;
	int8_t x667 = 1;
	int64_t x668 = -1314532LL;
	int32_t t166 = 2019123;

    t166 = ((x665^(x666!=x667))==x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x670 = 55U;
	int16_t x671 = -11590;
	static int32_t t167 = 2820856;

    t167 = ((x669^(x670!=x671))==x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x674 = 102U;
	volatile uint8_t x675 = 12U;
	volatile int32_t t168 = 11130446;

    t168 = ((x673^(x674!=x675))==x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x677 = UINT8_MAX;
	static int32_t x679 = INT32_MAX;
	volatile int64_t x680 = -1LL;
	static volatile int32_t t169 = -1435;

    t169 = ((x677^(x678!=x679))==x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static int32_t x681 = INT32_MAX;
	int16_t x682 = INT16_MIN;
	volatile int8_t x683 = -9;
	int64_t x684 = 2LL;
	static int32_t t170 = -1;

    t170 = ((x681^(x682!=x683))==x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static int16_t x685 = INT16_MAX;
	static uint64_t x686 = UINT64_MAX;
	uint32_t x688 = UINT32_MAX;
	volatile int32_t t171 = -2;

    t171 = ((x685^(x686!=x687))==x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x689 = -1;
	int8_t x691 = 12;
	uint64_t x692 = 1LLU;

    t172 = ((x689^(x690!=x691))==x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x693 = 1455648188170152LLU;
	static int16_t x694 = 304;
	volatile int32_t x695 = 2284459;
	static uint64_t x696 = 9175953497LLU;
	static int32_t t173 = 189;

    t173 = ((x693^(x694!=x695))==x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x698 = UINT8_MAX;
	uint64_t x699 = 194381841620LLU;
	uint16_t x700 = 0U;
	volatile int32_t t174 = 15;

    t174 = ((x697^(x698!=x699))==x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int64_t x701 = 1LL;
	uint32_t x702 = 7U;
	volatile uint8_t x704 = UINT8_MAX;
	int32_t t175 = 2;

    t175 = ((x701^(x702!=x703))==x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x705 = 3857877078294214551LLU;
	int32_t t176 = -6388;

    t176 = ((x705^(x706!=x707))==x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x709 = -305LL;
	volatile uint64_t x710 = UINT64_MAX;
	int64_t x711 = INT64_MIN;
	int32_t x712 = -728325831;
	int32_t t177 = 484747761;

    t177 = ((x709^(x710!=x711))==x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint64_t x713 = 592209325299LLU;
	volatile int16_t x715 = INT16_MIN;
	volatile int32_t t178 = -624950;

    t178 = ((x713^(x714!=x715))==x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x717 = 13U;
	uint64_t x718 = 8401686283438926LLU;
	volatile int8_t x719 = INT8_MIN;
	int8_t x720 = INT8_MIN;
	static volatile int32_t t179 = -328;

    t179 = ((x717^(x718!=x719))==x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x721 = 83504812368965036LL;
	uint16_t x722 = 296U;
	int32_t x724 = INT32_MAX;
	int32_t t180 = 0;

    t180 = ((x721^(x722!=x723))==x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint64_t x725 = 2762973005166LLU;
	static volatile uint64_t x727 = 59796374508342326LLU;
	static uint64_t x728 = 31665388065294686LLU;
	int32_t t181 = -2;

    t181 = ((x725^(x726!=x727))==x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x729 = 360;
	uint64_t x730 = 222372874689374641LLU;
	static uint8_t x731 = 1U;
	int64_t x732 = INT64_MIN;
	int32_t t182 = 242;

    t182 = ((x729^(x730!=x731))==x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x733 = INT16_MIN;
	uint16_t x735 = 9597U;
	static uint16_t x736 = UINT16_MAX;
	volatile int32_t t183 = 161017;

    t183 = ((x733^(x734!=x735))==x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x739 = -1;
	volatile int32_t t184 = 238755;

    t184 = ((x737^(x738!=x739))==x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x741 = 14401U;
	int32_t x742 = -1;
	volatile int32_t t185 = 205252;

    t185 = ((x741^(x742!=x743))==x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int8_t x745 = -1;
	static volatile uint8_t x747 = 2U;
	volatile int16_t x748 = -1;
	int32_t t186 = -1040826;

    t186 = ((x745^(x746!=x747))==x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static int32_t x749 = -1;
	uint8_t x750 = UINT8_MAX;
	int8_t x751 = INT8_MAX;
	volatile int8_t x752 = 0;
	static volatile int32_t t187 = 265633615;

    t187 = ((x749^(x750!=x751))==x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x753 = UINT16_MAX;
	int64_t x754 = -1LL;
	uint32_t x755 = 4064U;
	volatile uint32_t x756 = 949284240U;
	int32_t t188 = 11787;

    t188 = ((x753^(x754!=x755))==x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x757 = 0;
	int64_t x758 = INT64_MIN;
	static int64_t x759 = -3194388647LL;
	int8_t x760 = INT8_MIN;
	int32_t t189 = -30207309;

    t189 = ((x757^(x758!=x759))==x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x761 = INT8_MIN;
	static uint32_t x762 = 116686783U;
	static volatile int32_t x763 = INT32_MIN;

    t190 = ((x761^(x762!=x763))==x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x765 = 242459190LLU;
	int16_t x766 = -506;
	uint64_t x767 = 2017683395455LLU;
	int16_t x768 = -971;
	volatile int32_t t191 = -2;

    t191 = ((x765^(x766!=x767))==x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int16_t x769 = INT16_MAX;
	int64_t x771 = -17914396LL;
	uint16_t x772 = UINT16_MAX;
	volatile int32_t t192 = -22;

    t192 = ((x769^(x770!=x771))==x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x773 = UINT32_MAX;
	int32_t x774 = INT32_MIN;
	int32_t x775 = -212;
	int16_t x776 = -246;

    t193 = ((x773^(x774!=x775))==x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x777 = INT16_MIN;
	int16_t x778 = INT16_MAX;
	uint16_t x780 = 7U;
	volatile int32_t t194 = -27045;

    t194 = ((x777^(x778!=x779))==x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x782 = 0;
	int32_t x783 = -1;
	volatile int32_t t195 = 1071;

    t195 = ((x781^(x782!=x783))==x784);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x785 = -1;
	volatile uint32_t x787 = UINT32_MAX;
	static uint16_t x788 = UINT16_MAX;
	volatile int32_t t196 = -751568855;

    t196 = ((x785^(x786!=x787))==x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int8_t x791 = INT8_MIN;
	static volatile int64_t x792 = -1LL;

    t197 = ((x789^(x790!=x791))==x792);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x793 = 11;
	int8_t x794 = INT8_MAX;
	int32_t x796 = INT32_MIN;
	int32_t t198 = -1855608;

    t198 = ((x793^(x794!=x795))==x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint16_t x797 = 3639U;
	volatile int8_t x799 = -1;
	uint16_t x800 = UINT16_MAX;
	volatile int32_t t199 = -276997760;

    t199 = ((x797^(x798!=x799))==x800);

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

