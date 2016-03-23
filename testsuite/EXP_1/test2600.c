
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

static uint8_t x2 = 88U;
int32_t x12 = 99410789;
int16_t x13 = -1039;
static volatile int8_t x14 = INT8_MIN;
volatile int8_t x27 = INT8_MIN;
volatile int32_t x28 = INT32_MIN;
int64_t x31 = INT64_MAX;
volatile int32_t x33 = -13014954;
static volatile uint16_t x38 = 12U;
uint64_t x40 = UINT64_MAX;
volatile int8_t x46 = -1;
volatile uint16_t x69 = UINT16_MAX;
int8_t x79 = INT8_MIN;
int16_t x87 = INT16_MIN;
volatile int32_t t22 = -580966914;
int8_t x103 = 1;
uint16_t x105 = 4144U;
uint8_t x106 = UINT8_MAX;
uint8_t x107 = UINT8_MAX;
static volatile int32_t t26 = 2;
static int8_t x109 = -1;
int64_t x118 = INT64_MIN;
volatile uint32_t x120 = 116526U;
static int32_t x123 = INT32_MAX;
int32_t x137 = 149;
static volatile int8_t x138 = INT8_MIN;
static int16_t x146 = INT16_MIN;
static int32_t x154 = INT32_MAX;
volatile int8_t x159 = INT8_MIN;
volatile uint32_t x165 = UINT32_MAX;
static int64_t x167 = INT64_MAX;
int64_t x172 = 495779253036LL;
int8_t x176 = -18;
int16_t x177 = INT16_MIN;
int16_t x178 = INT16_MAX;
uint16_t x182 = 5805U;
int64_t x183 = INT64_MIN;
volatile int32_t t47 = 77698;
int32_t x202 = INT32_MAX;
int16_t x209 = 6;
static int16_t x216 = -1;
static int64_t x223 = INT64_MIN;
volatile uint16_t x224 = 15527U;
int32_t t55 = -1;
volatile int64_t x231 = -1785942LL;
static uint16_t x232 = 7215U;
int8_t x234 = -1;
static volatile int32_t x235 = 1643341;
int8_t x236 = INT8_MAX;
int16_t x238 = INT16_MIN;
int16_t x241 = -1107;
int8_t x242 = 1;
int32_t t59 = -1;
uint8_t x249 = UINT8_MAX;
volatile int32_t x253 = -249995422;
static uint16_t x254 = UINT16_MAX;
static volatile int32_t t62 = -13554;
int32_t x262 = INT32_MIN;
static uint16_t x266 = 763U;
int8_t x267 = -1;
int8_t x269 = INT8_MAX;
int16_t x272 = INT16_MIN;
int32_t x275 = 291;
volatile int64_t x280 = INT64_MIN;
static uint8_t x283 = UINT8_MAX;
static int64_t x290 = 614751989480703932LL;
int8_t x293 = -1;
static int8_t x294 = -1;
int32_t t72 = 157252856;
static volatile int32_t t76 = 1;
static volatile int8_t x313 = INT8_MAX;
int64_t x316 = INT64_MIN;
static int32_t t77 = 56903;
int32_t x317 = INT32_MAX;
int64_t x320 = -8431804888726271LL;
uint32_t x325 = 2110609937U;
int32_t x331 = -129;
uint16_t x332 = 1648U;
volatile int64_t x335 = INT64_MIN;
int8_t x336 = INT8_MIN;
volatile int32_t t82 = -266046;
int8_t x337 = -1;
volatile int8_t x339 = INT8_MAX;
volatile int8_t x343 = INT8_MAX;
uint16_t x344 = 2415U;
volatile int32_t t84 = -2013;
int64_t x351 = INT64_MAX;
int32_t t88 = 13620516;
volatile int32_t x362 = -2266;
uint32_t x372 = UINT32_MAX;
int32_t t92 = -2;
int8_t x382 = INT8_MAX;
int8_t x384 = INT8_MIN;
uint8_t x389 = UINT8_MAX;
int16_t x396 = -1;
uint64_t x400 = 109702703080LLU;
volatile int32_t t99 = 50490;
uint16_t x405 = 11527U;
int32_t x410 = INT32_MAX;
static int32_t t101 = -2851;
int8_t x414 = -1;
int64_t x417 = -1LL;
int8_t x419 = INT8_MAX;
static int8_t x421 = INT8_MIN;
int64_t x423 = INT64_MAX;
static int32_t t106 = -1580588;
static int16_t x444 = INT16_MAX;
int8_t x445 = INT8_MIN;
int64_t x447 = INT64_MIN;
static volatile int32_t x448 = -30237729;
static uint32_t x452 = 4572003U;
int64_t x457 = INT64_MIN;
volatile uint16_t x458 = 984U;
volatile int8_t x469 = INT8_MAX;
volatile int32_t t116 = 75283;
uint8_t x480 = 1U;
volatile int16_t x488 = -3;
int64_t x491 = INT64_MIN;
uint8_t x496 = UINT8_MAX;
static volatile uint8_t x502 = 100U;
int8_t x503 = INT8_MIN;
static int32_t x506 = INT32_MAX;
static uint64_t x512 = UINT64_MAX;
static volatile int8_t x514 = -1;
volatile int64_t x515 = -1LL;
int64_t x520 = INT64_MIN;
volatile int8_t x525 = INT8_MAX;
int8_t x527 = -1;
static int32_t x528 = 9606474;
uint64_t x532 = 77147225LLU;
int32_t t131 = 3355683;
volatile int64_t x536 = -89LL;
int16_t x539 = -3178;
volatile int32_t t133 = 356;
uint16_t x545 = UINT16_MAX;
int8_t x547 = INT8_MIN;
static uint32_t x551 = 11864463U;
uint32_t x553 = UINT32_MAX;
int64_t x567 = INT64_MIN;
uint32_t x571 = 2743978U;
int32_t t141 = -4162164;
volatile int16_t x574 = 110;
static volatile int16_t x582 = INT16_MIN;
int32_t t144 = -50274101;
int64_t x588 = -26164012LL;
int32_t x589 = 142799305;
static int16_t x594 = INT16_MIN;
volatile int32_t t148 = 40;
static int32_t x604 = INT32_MIN;
int32_t x610 = -7;
int64_t x615 = -1LL;
int8_t x617 = INT8_MIN;
volatile int32_t t153 = 122327986;
volatile int8_t x627 = INT8_MIN;
int32_t x629 = -279564486;
static uint32_t x644 = 776255U;
int64_t x645 = 37284949434153LL;
int8_t x647 = INT8_MAX;
int32_t t161 = 1;
static uint32_t x658 = 73U;
volatile int32_t x660 = 0;
static volatile int32_t t163 = 93010562;
int64_t x664 = INT64_MAX;
int32_t x667 = 2;
uint8_t x669 = 11U;
int8_t x671 = -1;
int32_t x674 = INT32_MIN;
volatile uint32_t x679 = 3U;
int8_t x692 = INT8_MAX;
static int8_t x693 = -62;
static int32_t x707 = -1;
uint32_t x709 = UINT32_MAX;
int32_t t176 = -52365731;
volatile uint8_t x713 = UINT8_MAX;
int64_t x717 = INT64_MIN;
volatile int32_t t178 = -121;
int32_t t179 = 68;
int64_t x733 = -1LL;
volatile int64_t x738 = INT64_MIN;
volatile int16_t x740 = 0;
int8_t x746 = -1;
volatile int32_t t185 = 1;
static int8_t x750 = INT8_MAX;
uint8_t x772 = UINT8_MAX;
int32_t t191 = 209;
uint32_t x783 = 1U;
int32_t x788 = INT32_MAX;
uint32_t x790 = 11U;
int64_t x791 = INT64_MIN;
int32_t t196 = -16316130;
static uint8_t x793 = 6U;
int16_t x794 = INT16_MIN;
int32_t x800 = -1;
volatile int32_t t198 = -28383;
static uint64_t x801 = 14623LLU;


void f0(void) {
    	int32_t x1 = 3250476;
	int32_t x3 = -24;
	static uint32_t x4 = 48360U;
	int32_t t0 = -3853;

    t0 = (((x1^x2)/x3)<=x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x5 = INT32_MAX;
	int8_t x6 = -1;
	static int32_t x7 = INT32_MAX;
	volatile int32_t x8 = INT32_MIN;
	int32_t t1 = 2;

    t1 = (((x5^x6)/x7)<=x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MIN;
	uint8_t x10 = 0U;
	int32_t x11 = -1;
	volatile int32_t t2 = 258407003;

    t2 = (((x9^x10)/x11)<=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x15 = UINT16_MAX;
	int16_t x16 = INT16_MIN;
	int32_t t3 = 1;

    t3 = (((x13^x14)/x15)<=x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = INT16_MIN;
	uint16_t x18 = 68U;
	int16_t x19 = INT16_MAX;
	volatile int64_t x20 = 0LL;
	static int32_t t4 = 92059;

    t4 = (((x17^x18)/x19)<=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = 1475029;
	int8_t x22 = INT8_MIN;
	uint32_t x23 = UINT32_MAX;
	volatile uint32_t x24 = UINT32_MAX;
	int32_t t5 = -2759861;

    t5 = (((x21^x22)/x23)<=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = -1;
	int64_t x26 = 33899125392848526LL;
	volatile int32_t t6 = -115717065;

    t6 = (((x25^x26)/x27)<=x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = INT8_MIN;
	int16_t x30 = INT16_MIN;
	static int32_t x32 = -5720649;
	int32_t t7 = 345368068;

    t7 = (((x29^x30)/x31)<=x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x34 = 14;
	uint16_t x35 = 1U;
	volatile int16_t x36 = INT16_MIN;
	int32_t t8 = 8;

    t8 = (((x33^x34)/x35)<=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile uint64_t x37 = 61166313627101561LLU;
	int8_t x39 = INT8_MIN;
	int32_t t9 = 29272467;

    t9 = (((x37^x38)/x39)<=x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = INT64_MIN;
	int16_t x42 = INT16_MIN;
	int16_t x43 = 2;
	int8_t x44 = -1;
	volatile int32_t t10 = 1;

    t10 = (((x41^x42)/x43)<=x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x45 = -1;
	int32_t x47 = INT32_MIN;
	int64_t x48 = -1LL;
	volatile int32_t t11 = -239231;

    t11 = (((x45^x46)/x47)<=x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint16_t x49 = 1U;
	static uint16_t x50 = UINT16_MAX;
	volatile uint16_t x51 = 2709U;
	int64_t x52 = INT64_MIN;
	static int32_t t12 = 2356856;

    t12 = (((x49^x50)/x51)<=x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = 1438;
	int64_t x54 = INT64_MAX;
	uint32_t x55 = 1492738397U;
	int16_t x56 = -16093;
	int32_t t13 = 860453;

    t13 = (((x53^x54)/x55)<=x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x57 = INT64_MIN;
	uint32_t x58 = 141U;
	int16_t x59 = INT16_MAX;
	int64_t x60 = 91053595451LL;
	volatile int32_t t14 = -197036941;

    t14 = (((x57^x58)/x59)<=x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x61 = UINT8_MAX;
	uint8_t x62 = UINT8_MAX;
	static volatile int16_t x63 = 86;
	volatile uint16_t x64 = 0U;
	volatile int32_t t15 = 1844588;

    t15 = (((x61^x62)/x63)<=x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static int64_t x65 = 57077LL;
	int16_t x66 = INT16_MIN;
	static volatile int8_t x67 = INT8_MIN;
	uint32_t x68 = UINT32_MAX;
	volatile int32_t t16 = 332809;

    t16 = (((x65^x66)/x67)<=x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x70 = 0U;
	uint32_t x71 = 196814161U;
	int64_t x72 = INT64_MIN;
	int32_t t17 = 336;

    t17 = (((x69^x70)/x71)<=x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int16_t x73 = INT16_MAX;
	uint16_t x74 = UINT16_MAX;
	uint64_t x75 = 7LLU;
	static int64_t x76 = INT64_MIN;
	static int32_t t18 = 19;

    t18 = (((x73^x74)/x75)<=x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = 17080;
	uint64_t x78 = UINT64_MAX;
	int64_t x80 = -1LL;
	volatile int32_t t19 = 1091;

    t19 = (((x77^x78)/x79)<=x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = INT64_MAX;
	static int16_t x82 = INT16_MIN;
	volatile uint32_t x83 = 25U;
	static uint16_t x84 = UINT16_MAX;
	volatile int32_t t20 = 748;

    t20 = (((x81^x82)/x83)<=x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x85 = 20U;
	int16_t x86 = -1;
	int32_t x88 = -1;
	volatile int32_t t21 = -99903493;

    t21 = (((x85^x86)/x87)<=x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint16_t x89 = UINT16_MAX;
	static volatile int16_t x90 = -5;
	volatile uint64_t x91 = 31228162733843LLU;
	static uint8_t x92 = 1U;

    t22 = (((x89^x90)/x91)<=x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = -9;
	static int32_t x94 = 800432095;
	int16_t x95 = INT16_MIN;
	int16_t x96 = 458;
	volatile int32_t t23 = -1111075;

    t23 = (((x93^x94)/x95)<=x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x97 = 33U;
	uint16_t x98 = 0U;
	int8_t x99 = INT8_MIN;
	int32_t x100 = -433254;
	volatile int32_t t24 = -3;

    t24 = (((x97^x98)/x99)<=x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x101 = INT8_MAX;
	int8_t x102 = INT8_MIN;
	int64_t x104 = INT64_MIN;
	volatile int32_t t25 = -3;

    t25 = (((x101^x102)/x103)<=x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x108 = INT8_MAX;

    t26 = (((x105^x106)/x107)<=x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int64_t x110 = INT64_MIN;
	int64_t x111 = INT64_MAX;
	uint8_t x112 = 6U;
	volatile int32_t t27 = 14;

    t27 = (((x109^x110)/x111)<=x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint16_t x113 = 3U;
	uint64_t x114 = 1LLU;
	volatile int8_t x115 = 1;
	int8_t x116 = INT8_MIN;
	volatile int32_t t28 = -584;

    t28 = (((x113^x114)/x115)<=x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = -748668488;
	int64_t x119 = INT64_MAX;
	int32_t t29 = 425755831;

    t29 = (((x117^x118)/x119)<=x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = 19036;
	volatile int32_t x122 = 29196387;
	int8_t x124 = INT8_MAX;
	volatile int32_t t30 = 2389310;

    t30 = (((x121^x122)/x123)<=x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x125 = UINT16_MAX;
	int32_t x126 = 119761233;
	static int64_t x127 = -1LL;
	static int16_t x128 = -7932;
	volatile int32_t t31 = -111;

    t31 = (((x125^x126)/x127)<=x128);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x129 = INT8_MAX;
	static int16_t x130 = INT16_MIN;
	uint8_t x131 = 7U;
	uint8_t x132 = UINT8_MAX;
	static int32_t t32 = 829;

    t32 = (((x129^x130)/x131)<=x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x139 = UINT16_MAX;
	int32_t x140 = 23854623;
	int32_t t33 = 107354079;

    t33 = (((x137^x138)/x139)<=x140);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint16_t x141 = UINT16_MAX;
	int16_t x142 = -295;
	volatile int64_t x143 = 57547LL;
	uint16_t x144 = UINT16_MAX;
	int32_t t34 = -13861589;

    t34 = (((x141^x142)/x143)<=x144);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x145 = 82U;
	volatile uint64_t x147 = 455283LLU;
	int16_t x148 = INT16_MIN;
	volatile int32_t t35 = 45;

    t35 = (((x145^x146)/x147)<=x148);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x149 = 4239U;
	static volatile int16_t x150 = INT16_MAX;
	volatile int16_t x151 = INT16_MAX;
	uint32_t x152 = 8208886U;
	volatile int32_t t36 = 1923;

    t36 = (((x149^x150)/x151)<=x152);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int32_t x153 = INT32_MIN;
	uint8_t x155 = 1U;
	volatile int8_t x156 = -4;
	static int32_t t37 = 98544;

    t37 = (((x153^x154)/x155)<=x156);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int64_t x157 = INT64_MIN;
	volatile uint32_t x158 = 1876516U;
	uint32_t x160 = UINT32_MAX;
	int32_t t38 = -1359366;

    t38 = (((x157^x158)/x159)<=x160);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x161 = INT64_MAX;
	int16_t x162 = -3;
	int64_t x163 = INT64_MIN;
	volatile int32_t x164 = -239176;
	volatile int32_t t39 = 52424;

    t39 = (((x161^x162)/x163)<=x164);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile uint64_t x166 = UINT64_MAX;
	uint32_t x168 = UINT32_MAX;
	int32_t t40 = -458;

    t40 = (((x165^x166)/x167)<=x168);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x169 = INT32_MIN;
	uint32_t x170 = UINT32_MAX;
	static volatile int64_t x171 = INT64_MIN;
	static int32_t t41 = -204249865;

    t41 = (((x169^x170)/x171)<=x172);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x173 = INT16_MIN;
	uint16_t x174 = 23705U;
	static int32_t x175 = -1;
	volatile int32_t t42 = 1429608;

    t42 = (((x173^x174)/x175)<=x176);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x179 = INT8_MAX;
	static uint32_t x180 = UINT32_MAX;
	int32_t t43 = 1453;

    t43 = (((x177^x178)/x179)<=x180);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int16_t x181 = INT16_MIN;
	volatile int8_t x184 = INT8_MAX;
	volatile int32_t t44 = -6993;

    t44 = (((x181^x182)/x183)<=x184);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x185 = INT16_MIN;
	int32_t x186 = INT32_MAX;
	int8_t x187 = 12;
	uint8_t x188 = 6U;
	volatile int32_t t45 = -21085018;

    t45 = (((x185^x186)/x187)<=x188);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint8_t x189 = 31U;
	static volatile int8_t x190 = INT8_MIN;
	uint64_t x191 = 419877210LLU;
	volatile int64_t x192 = 27LL;
	static int32_t t46 = 12077447;

    t46 = (((x189^x190)/x191)<=x192);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x193 = INT32_MAX;
	int64_t x194 = -1LL;
	uint8_t x195 = UINT8_MAX;
	static volatile int16_t x196 = INT16_MAX;

    t47 = (((x193^x194)/x195)<=x196);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x197 = INT8_MIN;
	uint8_t x198 = 1U;
	int32_t x199 = INT32_MAX;
	int64_t x200 = -1LL;
	int32_t t48 = 14;

    t48 = (((x197^x198)/x199)<=x200);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int8_t x201 = INT8_MIN;
	uint16_t x203 = UINT16_MAX;
	volatile uint32_t x204 = UINT32_MAX;
	volatile int32_t t49 = -3014346;

    t49 = (((x201^x202)/x203)<=x204);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x205 = INT32_MIN;
	int32_t x206 = -1;
	int16_t x207 = INT16_MIN;
	int64_t x208 = -1LL;
	volatile int32_t t50 = -119166549;

    t50 = (((x205^x206)/x207)<=x208);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x210 = 2U;
	uint8_t x211 = 7U;
	int64_t x212 = -56805411LL;
	static int32_t t51 = 2501;

    t51 = (((x209^x210)/x211)<=x212);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int32_t x213 = -1509250;
	static int64_t x214 = -1LL;
	static int16_t x215 = INT16_MAX;
	volatile int32_t t52 = 52437354;

    t52 = (((x213^x214)/x215)<=x216);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x217 = INT64_MIN;
	int8_t x218 = INT8_MAX;
	int64_t x219 = INT64_MAX;
	uint8_t x220 = 73U;
	int32_t t53 = 528043;

    t53 = (((x217^x218)/x219)<=x220);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int32_t x221 = 13;
	int64_t x222 = INT64_MIN;
	static int32_t t54 = -534715241;

    t54 = (((x221^x222)/x223)<=x224);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int8_t x225 = INT8_MIN;
	int64_t x226 = -1LL;
	static int16_t x227 = 1;
	int8_t x228 = -1;

    t55 = (((x225^x226)/x227)<=x228);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x229 = -1LL;
	volatile int64_t x230 = -1LL;
	int32_t t56 = 12126;

    t56 = (((x229^x230)/x231)<=x232);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint64_t x233 = UINT64_MAX;
	volatile int32_t t57 = 90258;

    t57 = (((x233^x234)/x235)<=x236);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x237 = 4972735;
	volatile int32_t x239 = -6;
	int8_t x240 = -1;
	int32_t t58 = 36;

    t58 = (((x237^x238)/x239)<=x240);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x243 = UINT64_MAX;
	int64_t x244 = INT64_MAX;

    t59 = (((x241^x242)/x243)<=x244);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x245 = -1;
	static uint8_t x246 = UINT8_MAX;
	static int32_t x247 = INT32_MIN;
	int64_t x248 = INT64_MIN;
	int32_t t60 = 50;

    t60 = (((x245^x246)/x247)<=x248);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x250 = INT64_MAX;
	static int64_t x251 = INT64_MIN;
	int64_t x252 = 31726568100LL;
	volatile int32_t t61 = -1925;

    t61 = (((x249^x250)/x251)<=x252);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x255 = -1;
	int16_t x256 = -1631;

    t62 = (((x253^x254)/x255)<=x256);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x257 = INT8_MAX;
	static int64_t x258 = INT64_MIN;
	int64_t x259 = -72LL;
	static volatile int64_t x260 = 244368LL;
	int32_t t63 = -25;

    t63 = (((x257^x258)/x259)<=x260);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint32_t x261 = 90266455U;
	int8_t x263 = -1;
	volatile uint32_t x264 = 3343U;
	volatile int32_t t64 = 176752412;

    t64 = (((x261^x262)/x263)<=x264);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint32_t x265 = 53U;
	volatile int32_t x268 = INT32_MIN;
	int32_t t65 = 3497;

    t65 = (((x265^x266)/x267)<=x268);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int32_t x270 = INT32_MIN;
	static uint8_t x271 = 1U;
	int32_t t66 = -4;

    t66 = (((x269^x270)/x271)<=x272);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static int64_t x273 = INT64_MAX;
	int64_t x274 = -12157LL;
	static int8_t x276 = -1;
	volatile int32_t t67 = 614229697;

    t67 = (((x273^x274)/x275)<=x276);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint8_t x277 = 30U;
	int16_t x278 = -24;
	volatile uint64_t x279 = 38628502LLU;
	int32_t t68 = 1;

    t68 = (((x277^x278)/x279)<=x280);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static int16_t x281 = -1;
	int32_t x282 = -39726;
	int16_t x284 = -1;
	volatile int32_t t69 = -6;

    t69 = (((x281^x282)/x283)<=x284);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x285 = INT8_MIN;
	static int8_t x286 = 0;
	int8_t x287 = INT8_MIN;
	static int8_t x288 = INT8_MIN;
	int32_t t70 = 4403;

    t70 = (((x285^x286)/x287)<=x288);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x289 = INT8_MIN;
	static uint32_t x291 = UINT32_MAX;
	static uint64_t x292 = 725627505171753871LLU;
	volatile int32_t t71 = 3;

    t71 = (((x289^x290)/x291)<=x292);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint16_t x295 = UINT16_MAX;
	int32_t x296 = INT32_MAX;

    t72 = (((x293^x294)/x295)<=x296);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int16_t x297 = -1;
	static volatile uint32_t x298 = 6639517U;
	int32_t x299 = 64;
	int64_t x300 = -1LL;
	volatile int32_t t73 = -12;

    t73 = (((x297^x298)/x299)<=x300);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x301 = INT16_MIN;
	static uint32_t x302 = 288030U;
	int16_t x303 = INT16_MIN;
	int16_t x304 = -1;
	volatile int32_t t74 = 470;

    t74 = (((x301^x302)/x303)<=x304);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x305 = 30LLU;
	uint32_t x306 = 156311811U;
	uint16_t x307 = 84U;
	static volatile int16_t x308 = INT16_MIN;
	int32_t t75 = 199565228;

    t75 = (((x305^x306)/x307)<=x308);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint32_t x309 = 160385984U;
	uint8_t x310 = 0U;
	int64_t x311 = 111LL;
	uint64_t x312 = UINT64_MAX;

    t76 = (((x309^x310)/x311)<=x312);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x314 = INT8_MAX;
	uint32_t x315 = 8U;

    t77 = (((x313^x314)/x315)<=x316);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x318 = 12302882772903LLU;
	int32_t x319 = INT32_MIN;
	int32_t t78 = 60978;

    t78 = (((x317^x318)/x319)<=x320);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x321 = -8;
	static int64_t x322 = -1LL;
	int32_t x323 = 719935087;
	int64_t x324 = -32055601811LL;
	volatile int32_t t79 = 76706;

    t79 = (((x321^x322)/x323)<=x324);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x326 = UINT32_MAX;
	volatile int64_t x327 = INT64_MAX;
	volatile int64_t x328 = INT64_MAX;
	static volatile int32_t t80 = -16503137;

    t80 = (((x325^x326)/x327)<=x328);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static int16_t x329 = -1;
	uint64_t x330 = 5LLU;
	int32_t t81 = -17055;

    t81 = (((x329^x330)/x331)<=x332);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x333 = INT64_MAX;
	volatile int64_t x334 = INT64_MIN;

    t82 = (((x333^x334)/x335)<=x336);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x338 = 247925;
	int8_t x340 = -1;
	static volatile int32_t t83 = 1;

    t83 = (((x337^x338)/x339)<=x340);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int8_t x341 = -1;
	int8_t x342 = INT8_MIN;

    t84 = (((x341^x342)/x343)<=x344);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x345 = 16U;
	int8_t x346 = -1;
	uint64_t x347 = UINT64_MAX;
	volatile int32_t x348 = -1;
	int32_t t85 = -128;

    t85 = (((x345^x346)/x347)<=x348);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x349 = 1858U;
	int64_t x350 = INT64_MIN;
	static uint8_t x352 = 22U;
	int32_t t86 = 5;

    t86 = (((x349^x350)/x351)<=x352);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x353 = 28LLU;
	volatile uint32_t x354 = UINT32_MAX;
	int8_t x355 = INT8_MIN;
	int32_t x356 = -1;
	int32_t t87 = -373167;

    t87 = (((x353^x354)/x355)<=x356);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x357 = -1;
	volatile int16_t x358 = INT16_MIN;
	static int32_t x359 = INT32_MAX;
	uint8_t x360 = 7U;

    t88 = (((x357^x358)/x359)<=x360);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x361 = UINT16_MAX;
	int64_t x363 = 110556891618358252LL;
	int8_t x364 = INT8_MIN;
	int32_t t89 = -1018;

    t89 = (((x361^x362)/x363)<=x364);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile int8_t x365 = 58;
	int8_t x366 = 1;
	uint8_t x367 = 17U;
	volatile int16_t x368 = -17;
	int32_t t90 = 0;

    t90 = (((x365^x366)/x367)<=x368);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x369 = -52443864LL;
	int16_t x370 = INT16_MIN;
	uint16_t x371 = 6919U;
	static volatile int32_t t91 = 0;

    t91 = (((x369^x370)/x371)<=x372);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x373 = UINT8_MAX;
	int8_t x374 = -1;
	uint8_t x375 = UINT8_MAX;
	int16_t x376 = INT16_MAX;

    t92 = (((x373^x374)/x375)<=x376);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x377 = 1;
	uint64_t x378 = 59822463979618140LLU;
	static uint8_t x379 = UINT8_MAX;
	int8_t x380 = INT8_MIN;
	int32_t t93 = 24403;

    t93 = (((x377^x378)/x379)<=x380);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int16_t x381 = INT16_MIN;
	volatile int64_t x383 = -1LL;
	int32_t t94 = -1008;

    t94 = (((x381^x382)/x383)<=x384);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x385 = 305U;
	static int8_t x386 = INT8_MIN;
	int32_t x387 = -135688;
	int16_t x388 = INT16_MIN;
	volatile int32_t t95 = -8228917;

    t95 = (((x385^x386)/x387)<=x388);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x390 = -32;
	static volatile int64_t x391 = 26485337445189428LL;
	volatile int32_t x392 = INT32_MAX;
	int32_t t96 = 62929;

    t96 = (((x389^x390)/x391)<=x392);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile int64_t x393 = INT64_MIN;
	volatile int16_t x394 = -14431;
	int16_t x395 = INT16_MIN;
	volatile int32_t t97 = 45568420;

    t97 = (((x393^x394)/x395)<=x396);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x397 = -12610191;
	static uint32_t x398 = 28704003U;
	static int16_t x399 = INT16_MIN;
	static volatile int32_t t98 = 199382;

    t98 = (((x397^x398)/x399)<=x400);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x401 = 1;
	static uint64_t x402 = 13899LLU;
	int16_t x403 = -2295;
	int16_t x404 = INT16_MIN;

    t99 = (((x401^x402)/x403)<=x404);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int32_t x406 = -33402119;
	int32_t x407 = 10845971;
	int32_t x408 = INT32_MAX;
	int32_t t100 = -974;

    t100 = (((x405^x406)/x407)<=x408);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x409 = INT32_MIN;
	volatile int64_t x411 = INT64_MIN;
	int16_t x412 = INT16_MAX;

    t101 = (((x409^x410)/x411)<=x412);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x413 = INT32_MIN;
	volatile int8_t x415 = -1;
	int16_t x416 = INT16_MIN;
	volatile int32_t t102 = 769837;

    t102 = (((x413^x414)/x415)<=x416);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x418 = 135LL;
	int8_t x420 = INT8_MIN;
	int32_t t103 = -119636;

    t103 = (((x417^x418)/x419)<=x420);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x422 = 0;
	volatile uint32_t x424 = 351U;
	volatile int32_t t104 = -3827;

    t104 = (((x421^x422)/x423)<=x424);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x425 = 864400965649LLU;
	uint16_t x426 = 38U;
	int8_t x427 = INT8_MAX;
	uint64_t x428 = UINT64_MAX;
	volatile int32_t t105 = -351266;

    t105 = (((x425^x426)/x427)<=x428);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static int32_t x429 = INT32_MIN;
	uint8_t x430 = UINT8_MAX;
	uint64_t x431 = UINT64_MAX;
	uint16_t x432 = 7U;

    t106 = (((x429^x430)/x431)<=x432);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x433 = INT8_MAX;
	static uint32_t x434 = 12792U;
	int64_t x435 = INT64_MIN;
	static uint16_t x436 = 94U;
	static volatile int32_t t107 = 15;

    t107 = (((x433^x434)/x435)<=x436);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x437 = 290U;
	static uint64_t x438 = 193LLU;
	int8_t x439 = 24;
	static int64_t x440 = -1LL;
	int32_t t108 = -226510;

    t108 = (((x437^x438)/x439)<=x440);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x441 = -1LL;
	int16_t x442 = INT16_MIN;
	uint16_t x443 = 6122U;
	static int32_t t109 = -112;

    t109 = (((x441^x442)/x443)<=x444);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x446 = 13563U;
	int32_t t110 = -35207314;

    t110 = (((x445^x446)/x447)<=x448);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x449 = -1;
	int16_t x450 = 73;
	uint64_t x451 = 113031606852313LLU;
	int32_t t111 = 1018;

    t111 = (((x449^x450)/x451)<=x452);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static int8_t x453 = -1;
	int64_t x454 = -1LL;
	volatile int64_t x455 = INT64_MIN;
	volatile int32_t x456 = 167102;
	static volatile int32_t t112 = 214674315;

    t112 = (((x453^x454)/x455)<=x456);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x459 = INT32_MIN;
	static volatile uint8_t x460 = 15U;
	int32_t t113 = -1;

    t113 = (((x457^x458)/x459)<=x460);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x461 = -1;
	volatile uint8_t x462 = 0U;
	static volatile int32_t x463 = -240;
	int16_t x464 = INT16_MIN;
	volatile int32_t t114 = 1;

    t114 = (((x461^x462)/x463)<=x464);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x465 = -32;
	int64_t x466 = 50069311673LL;
	uint64_t x467 = 7550863754LLU;
	static int64_t x468 = -1LL;
	volatile int32_t t115 = 27390;

    t115 = (((x465^x466)/x467)<=x468);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x470 = 110322U;
	int32_t x471 = INT32_MIN;
	static volatile int64_t x472 = INT64_MIN;

    t116 = (((x469^x470)/x471)<=x472);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int16_t x473 = 14491;
	volatile uint8_t x474 = UINT8_MAX;
	static volatile int64_t x475 = INT64_MAX;
	uint16_t x476 = 26U;
	int32_t t117 = 193439875;

    t117 = (((x473^x474)/x475)<=x476);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x477 = 1976360LL;
	volatile uint16_t x478 = UINT16_MAX;
	uint16_t x479 = UINT16_MAX;
	static int32_t t118 = 8;

    t118 = (((x477^x478)/x479)<=x480);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x481 = 30;
	static int16_t x482 = -9;
	uint16_t x483 = UINT16_MAX;
	uint16_t x484 = 787U;
	int32_t t119 = -52139169;

    t119 = (((x481^x482)/x483)<=x484);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x485 = -1;
	int8_t x486 = INT8_MIN;
	volatile int16_t x487 = -1;
	int32_t t120 = -118267022;

    t120 = (((x485^x486)/x487)<=x488);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x489 = INT8_MIN;
	volatile int32_t x490 = INT32_MAX;
	int64_t x492 = INT64_MAX;
	volatile int32_t t121 = 1062050422;

    t121 = (((x489^x490)/x491)<=x492);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int32_t x493 = INT32_MIN;
	volatile int64_t x494 = INT64_MIN;
	uint64_t x495 = UINT64_MAX;
	int32_t t122 = -618551;

    t122 = (((x493^x494)/x495)<=x496);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint32_t x497 = 3228844U;
	static uint32_t x498 = 30627597U;
	int8_t x499 = INT8_MAX;
	volatile int16_t x500 = INT16_MAX;
	int32_t t123 = 41037869;

    t123 = (((x497^x498)/x499)<=x500);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static int32_t x501 = INT32_MIN;
	uint16_t x504 = 6U;
	volatile int32_t t124 = 0;

    t124 = (((x501^x502)/x503)<=x504);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x505 = INT32_MIN;
	uint64_t x507 = 110423852023LLU;
	int64_t x508 = INT64_MAX;
	int32_t t125 = 11374745;

    t125 = (((x505^x506)/x507)<=x508);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x509 = 180283487976404LLU;
	int16_t x510 = 112;
	volatile uint64_t x511 = UINT64_MAX;
	int32_t t126 = 1;

    t126 = (((x509^x510)/x511)<=x512);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x513 = INT8_MIN;
	volatile uint64_t x516 = UINT64_MAX;
	static int32_t t127 = -31166;

    t127 = (((x513^x514)/x515)<=x516);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x517 = -1;
	int8_t x518 = INT8_MIN;
	int16_t x519 = INT16_MIN;
	int32_t t128 = 22067387;

    t128 = (((x517^x518)/x519)<=x520);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x521 = INT16_MAX;
	static int64_t x522 = -1LL;
	int64_t x523 = INT64_MAX;
	static uint16_t x524 = 3U;
	int32_t t129 = 123050;

    t129 = (((x521^x522)/x523)<=x524);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x526 = INT32_MIN;
	static volatile int32_t t130 = 284883;

    t130 = (((x525^x526)/x527)<=x528);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x529 = -1LL;
	int8_t x530 = INT8_MIN;
	int64_t x531 = -258341658016593LL;

    t131 = (((x529^x530)/x531)<=x532);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x533 = -1LL;
	uint32_t x534 = 0U;
	int16_t x535 = INT16_MAX;
	volatile int32_t t132 = -26;

    t132 = (((x533^x534)/x535)<=x536);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x537 = INT16_MAX;
	uint32_t x538 = 1501623U;
	uint8_t x540 = 0U;

    t133 = (((x537^x538)/x539)<=x540);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x541 = INT32_MIN;
	int64_t x542 = 2LL;
	uint64_t x543 = 5571990LLU;
	int16_t x544 = -1;
	volatile int32_t t134 = -1;

    t134 = (((x541^x542)/x543)<=x544);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int32_t x546 = 209347392;
	int64_t x548 = INT64_MIN;
	static volatile int32_t t135 = 88;

    t135 = (((x545^x546)/x547)<=x548);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x549 = UINT16_MAX;
	int64_t x550 = -1LL;
	int64_t x552 = 79205LL;
	volatile int32_t t136 = -118711;

    t136 = (((x549^x550)/x551)<=x552);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x554 = -1;
	volatile uint16_t x555 = 4351U;
	static int64_t x556 = INT64_MIN;
	int32_t t137 = 30579155;

    t137 = (((x553^x554)/x555)<=x556);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x557 = INT8_MIN;
	uint32_t x558 = 156U;
	uint16_t x559 = 87U;
	uint8_t x560 = UINT8_MAX;
	int32_t t138 = 2376909;

    t138 = (((x557^x558)/x559)<=x560);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int16_t x561 = INT16_MAX;
	static volatile int8_t x562 = INT8_MIN;
	static uint32_t x563 = 35859U;
	static int32_t x564 = -1023557750;
	volatile int32_t t139 = 104777;

    t139 = (((x561^x562)/x563)<=x564);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x565 = 10U;
	int64_t x566 = INT64_MIN;
	uint8_t x568 = 54U;
	volatile int32_t t140 = 16278;

    t140 = (((x565^x566)/x567)<=x568);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x569 = INT8_MIN;
	uint64_t x570 = 1304821510LLU;
	int16_t x572 = 4971;

    t141 = (((x569^x570)/x571)<=x572);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x573 = 22584LLU;
	int16_t x575 = INT16_MIN;
	int64_t x576 = 486941LL;
	volatile int32_t t142 = -1;

    t142 = (((x573^x574)/x575)<=x576);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x577 = 111U;
	int64_t x578 = INT64_MIN;
	uint16_t x579 = UINT16_MAX;
	static int8_t x580 = INT8_MIN;
	int32_t t143 = -237;

    t143 = (((x577^x578)/x579)<=x580);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static int8_t x581 = 0;
	static uint32_t x583 = 942505066U;
	uint8_t x584 = 99U;

    t144 = (((x581^x582)/x583)<=x584);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x585 = INT64_MAX;
	uint8_t x586 = 1U;
	volatile int64_t x587 = INT64_MIN;
	volatile int32_t t145 = 12966;

    t145 = (((x585^x586)/x587)<=x588);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x590 = INT16_MIN;
	int32_t x591 = -684;
	volatile int64_t x592 = INT64_MIN;
	int32_t t146 = 1;

    t146 = (((x589^x590)/x591)<=x592);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x593 = 795214591U;
	int8_t x595 = INT8_MIN;
	int16_t x596 = 0;
	volatile int32_t t147 = -10505037;

    t147 = (((x593^x594)/x595)<=x596);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x597 = -1;
	static int64_t x598 = -1595209772LL;
	static uint32_t x599 = UINT32_MAX;
	int8_t x600 = 7;

    t148 = (((x597^x598)/x599)<=x600);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x601 = INT8_MIN;
	volatile int8_t x602 = 0;
	volatile int16_t x603 = INT16_MIN;
	static volatile int32_t t149 = -12654;

    t149 = (((x601^x602)/x603)<=x604);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x605 = -13030;
	uint8_t x606 = UINT8_MAX;
	int64_t x607 = -224068786119LL;
	static volatile uint8_t x608 = 51U;
	volatile int32_t t150 = 0;

    t150 = (((x605^x606)/x607)<=x608);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x609 = INT8_MIN;
	uint32_t x611 = 57850U;
	volatile int32_t x612 = INT32_MIN;
	volatile int32_t t151 = 1;

    t151 = (((x609^x610)/x611)<=x612);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x613 = 232U;
	int16_t x614 = 10;
	int32_t x616 = INT32_MIN;
	volatile int32_t t152 = 1017979;

    t152 = (((x613^x614)/x615)<=x616);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x618 = INT8_MIN;
	int8_t x619 = 7;
	int32_t x620 = INT32_MIN;

    t153 = (((x617^x618)/x619)<=x620);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint16_t x621 = UINT16_MAX;
	uint64_t x622 = UINT64_MAX;
	uint32_t x623 = UINT32_MAX;
	volatile int16_t x624 = -21;
	int32_t t154 = 0;

    t154 = (((x621^x622)/x623)<=x624);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x625 = INT8_MIN;
	volatile int8_t x626 = INT8_MIN;
	uint64_t x628 = 8522833448LLU;
	volatile int32_t t155 = 54881;

    t155 = (((x625^x626)/x627)<=x628);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x630 = INT16_MIN;
	int16_t x631 = INT16_MAX;
	static uint8_t x632 = UINT8_MAX;
	volatile int32_t t156 = -112883;

    t156 = (((x629^x630)/x631)<=x632);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x633 = -5;
	uint8_t x634 = 1U;
	int64_t x635 = INT64_MAX;
	static uint8_t x636 = UINT8_MAX;
	volatile int32_t t157 = 97885;

    t157 = (((x633^x634)/x635)<=x636);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x637 = INT32_MAX;
	static volatile uint64_t x638 = 209321295LLU;
	uint64_t x639 = UINT64_MAX;
	static uint16_t x640 = UINT16_MAX;
	int32_t t158 = 24670059;

    t158 = (((x637^x638)/x639)<=x640);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x641 = 1982737LLU;
	volatile uint32_t x642 = 398972807U;
	static int8_t x643 = INT8_MIN;
	volatile int32_t t159 = 1303;

    t159 = (((x641^x642)/x643)<=x644);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint8_t x646 = 115U;
	int64_t x648 = INT64_MIN;
	int32_t t160 = 8043720;

    t160 = (((x645^x646)/x647)<=x648);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int64_t x649 = INT64_MIN;
	int32_t x650 = 105926875;
	static int16_t x651 = INT16_MAX;
	int8_t x652 = INT8_MIN;

    t161 = (((x649^x650)/x651)<=x652);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint64_t x653 = 152775015581807LLU;
	volatile uint64_t x654 = 141505795157763LLU;
	uint16_t x655 = 2U;
	volatile int8_t x656 = -12;
	static int32_t t162 = 194;

    t162 = (((x653^x654)/x655)<=x656);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x657 = INT8_MAX;
	int32_t x659 = -3697;

    t163 = (((x657^x658)/x659)<=x660);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x661 = UINT64_MAX;
	int16_t x662 = 1;
	volatile int16_t x663 = INT16_MIN;
	int32_t t164 = -420015;

    t164 = (((x661^x662)/x663)<=x664);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x665 = INT16_MAX;
	uint16_t x666 = UINT16_MAX;
	static int32_t x668 = 1;
	static int32_t t165 = -13295091;

    t165 = (((x665^x666)/x667)<=x668);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x670 = 23U;
	int8_t x672 = -1;
	int32_t t166 = 9325;

    t166 = (((x669^x670)/x671)<=x672);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x673 = 602228;
	volatile int32_t x675 = INT32_MAX;
	int64_t x676 = -1LL;
	volatile int32_t t167 = -23133;

    t167 = (((x673^x674)/x675)<=x676);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int8_t x677 = INT8_MAX;
	int32_t x678 = 27011;
	int64_t x680 = 0LL;
	volatile int32_t t168 = -19231;

    t168 = (((x677^x678)/x679)<=x680);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x681 = INT32_MAX;
	volatile uint8_t x682 = 51U;
	int64_t x683 = INT64_MIN;
	int8_t x684 = INT8_MIN;
	int32_t t169 = -6666423;

    t169 = (((x681^x682)/x683)<=x684);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x685 = INT16_MIN;
	volatile int64_t x686 = -1LL;
	volatile int16_t x687 = INT16_MIN;
	static int32_t x688 = INT32_MIN;
	static int32_t t170 = 321354;

    t170 = (((x685^x686)/x687)<=x688);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int32_t x689 = INT32_MAX;
	int32_t x690 = 5378295;
	static int16_t x691 = -1;
	int32_t t171 = 173037;

    t171 = (((x689^x690)/x691)<=x692);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x694 = INT64_MIN;
	uint64_t x695 = UINT64_MAX;
	static uint32_t x696 = UINT32_MAX;
	static int32_t t172 = 103343417;

    t172 = (((x693^x694)/x695)<=x696);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x697 = UINT32_MAX;
	int32_t x698 = INT32_MIN;
	int8_t x699 = -2;
	int64_t x700 = -6791767593LL;
	volatile int32_t t173 = 3179484;

    t173 = (((x697^x698)/x699)<=x700);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int64_t x701 = -1LL;
	static uint64_t x702 = 3984570480LLU;
	static int8_t x703 = INT8_MIN;
	int8_t x704 = INT8_MIN;
	volatile int32_t t174 = 114294400;

    t174 = (((x701^x702)/x703)<=x704);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int32_t x705 = INT32_MIN;
	int8_t x706 = INT8_MIN;
	uint64_t x708 = 390LLU;
	int32_t t175 = 6;

    t175 = (((x705^x706)/x707)<=x708);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x710 = 467233687956162304LLU;
	static volatile int64_t x711 = -1LL;
	static uint16_t x712 = 0U;

    t176 = (((x709^x710)/x711)<=x712);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x714 = UINT16_MAX;
	volatile uint16_t x715 = 2U;
	static int64_t x716 = INT64_MIN;
	static int32_t t177 = -3067;

    t177 = (((x713^x714)/x715)<=x716);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x718 = UINT16_MAX;
	volatile uint16_t x719 = 5U;
	volatile uint64_t x720 = 7931779LLU;

    t178 = (((x717^x718)/x719)<=x720);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x721 = 26;
	volatile uint64_t x722 = 94427036825LLU;
	int64_t x723 = -372631463835LL;
	uint16_t x724 = 0U;

    t179 = (((x721^x722)/x723)<=x724);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x725 = UINT8_MAX;
	int32_t x726 = -7;
	int32_t x727 = INT32_MAX;
	uint16_t x728 = 12U;
	static int32_t t180 = 0;

    t180 = (((x725^x726)/x727)<=x728);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int32_t x729 = -1;
	int64_t x730 = -1LL;
	static volatile int32_t x731 = -1;
	int64_t x732 = INT64_MIN;
	volatile int32_t t181 = 867;

    t181 = (((x729^x730)/x731)<=x732);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x734 = 93908408;
	volatile int16_t x735 = -4078;
	uint64_t x736 = UINT64_MAX;
	int32_t t182 = -19550171;

    t182 = (((x733^x734)/x735)<=x736);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint8_t x737 = UINT8_MAX;
	int32_t x739 = INT32_MIN;
	static int32_t t183 = 6;

    t183 = (((x737^x738)/x739)<=x740);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int32_t x741 = 211581;
	int16_t x742 = INT16_MIN;
	static int16_t x743 = 3563;
	uint16_t x744 = 504U;
	static int32_t t184 = 600;

    t184 = (((x741^x742)/x743)<=x744);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x745 = -1;
	int32_t x747 = INT32_MAX;
	int8_t x748 = 56;

    t185 = (((x745^x746)/x747)<=x748);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x749 = INT16_MIN;
	int32_t x751 = INT32_MIN;
	static int8_t x752 = INT8_MIN;
	volatile int32_t t186 = 790;

    t186 = (((x749^x750)/x751)<=x752);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x753 = INT64_MIN;
	volatile int64_t x754 = INT64_MIN;
	int64_t x755 = INT64_MIN;
	int16_t x756 = 540;
	volatile int32_t t187 = -106;

    t187 = (((x753^x754)/x755)<=x756);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x757 = -38;
	volatile int32_t x758 = INT32_MIN;
	uint64_t x759 = 4125480422256LLU;
	volatile int64_t x760 = -1LL;
	int32_t t188 = 3;

    t188 = (((x757^x758)/x759)<=x760);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x761 = INT8_MIN;
	static volatile int64_t x762 = INT64_MAX;
	int32_t x763 = -1;
	volatile int8_t x764 = INT8_MIN;
	static int32_t t189 = 128681;

    t189 = (((x761^x762)/x763)<=x764);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x765 = UINT32_MAX;
	volatile int8_t x766 = INT8_MIN;
	static volatile int32_t x767 = INT32_MAX;
	uint32_t x768 = UINT32_MAX;
	volatile int32_t t190 = 4;

    t190 = (((x765^x766)/x767)<=x768);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x769 = -1;
	int8_t x770 = -1;
	int32_t x771 = -1;

    t191 = (((x769^x770)/x771)<=x772);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x773 = 161U;
	static uint8_t x774 = 14U;
	int32_t x775 = -1;
	int8_t x776 = -35;
	int32_t t192 = 443;

    t192 = (((x773^x774)/x775)<=x776);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x777 = INT64_MIN;
	int16_t x778 = INT16_MAX;
	uint16_t x779 = 851U;
	volatile int32_t x780 = -2;
	volatile int32_t t193 = -3;

    t193 = (((x777^x778)/x779)<=x780);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint8_t x781 = 1U;
	int8_t x782 = -1;
	int32_t x784 = -1;
	int32_t t194 = 10448;

    t194 = (((x781^x782)/x783)<=x784);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x785 = -1LL;
	uint32_t x786 = UINT32_MAX;
	uint16_t x787 = 5U;
	volatile int32_t t195 = 123092;

    t195 = (((x785^x786)/x787)<=x788);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static int8_t x789 = INT8_MIN;
	static int16_t x792 = INT16_MIN;

    t196 = (((x789^x790)/x791)<=x792);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint32_t x795 = 479U;
	static int16_t x796 = INT16_MAX;
	int32_t t197 = -2055810;

    t197 = (((x793^x794)/x795)<=x796);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int32_t x797 = 1;
	static volatile int64_t x798 = INT64_MIN;
	volatile uint16_t x799 = 399U;

    t198 = (((x797^x798)/x799)<=x800);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x802 = INT8_MIN;
	volatile int32_t x803 = INT32_MIN;
	volatile int64_t x804 = INT64_MIN;
	volatile int32_t t199 = 13;

    t199 = (((x801^x802)/x803)<=x804);

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

