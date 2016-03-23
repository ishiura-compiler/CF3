
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

static int64_t x3 = -1LL;
int32_t x7 = INT32_MIN;
int8_t x12 = -1;
volatile int32_t t6 = -640;
int32_t x49 = INT32_MIN;
int32_t x52 = 113;
int8_t x65 = INT8_MIN;
int8_t x68 = -3;
volatile int32_t t13 = -17236794;
int32_t t15 = -1930963;
static uint64_t x91 = 634355852352476LLU;
int32_t x95 = -1;
static int32_t x96 = INT32_MIN;
volatile int32_t t18 = -652428;
static volatile int16_t x100 = -13;
int16_t x102 = INT16_MIN;
volatile int32_t x103 = -1;
static volatile int64_t x104 = INT64_MIN;
int32_t x109 = INT32_MIN;
uint16_t x111 = UINT16_MAX;
int16_t x114 = INT16_MAX;
volatile int32_t t23 = -1133;
uint16_t x135 = 64U;
static int8_t x138 = INT8_MAX;
static uint8_t x157 = 0U;
int16_t x162 = -1;
int64_t x163 = -3LL;
uint64_t x166 = 57015198LLU;
static uint64_t x173 = UINT64_MAX;
uint8_t x174 = UINT8_MAX;
volatile uint16_t x177 = UINT16_MAX;
volatile int32_t t35 = -48;
uint32_t x183 = 792650U;
uint64_t x190 = 11947848877180LLU;
static int32_t t38 = 1969440;
int32_t x193 = INT32_MIN;
static uint8_t x197 = 1U;
int32_t x198 = INT32_MIN;
int32_t t41 = -139738;
static volatile int32_t t42 = -17;
int16_t x212 = INT16_MIN;
int32_t t43 = -435202;
int16_t x213 = INT16_MAX;
int8_t x214 = INT8_MIN;
volatile int64_t x221 = INT64_MIN;
int8_t x226 = INT8_MIN;
static int32_t x234 = 11;
uint32_t x235 = UINT32_MAX;
volatile int32_t t48 = 66226178;
volatile uint32_t x241 = 535U;
static int32_t t50 = 637394;
int32_t x245 = 59;
int32_t t51 = -282;
int32_t x259 = 44196;
volatile int8_t x264 = INT8_MIN;
uint32_t x266 = UINT32_MAX;
int8_t x274 = INT8_MIN;
static int32_t t59 = -60569;
static int32_t t60 = -3013;
static int32_t t63 = -40;
int16_t x312 = 1;
volatile int16_t x315 = INT16_MAX;
uint64_t x316 = 733244365LLU;
static int16_t x319 = INT16_MIN;
uint16_t x320 = 0U;
static int8_t x322 = INT8_MIN;
static volatile int32_t t67 = -6974793;
int8_t x333 = -1;
static int64_t x334 = INT64_MAX;
int16_t x345 = -1;
uint64_t x347 = UINT64_MAX;
int32_t t71 = -142506;
uint8_t x356 = 105U;
uint8_t x362 = 1U;
static int16_t x365 = 5554;
uint64_t x369 = 24606912LLU;
static int32_t x380 = INT32_MIN;
volatile int32_t t77 = 358549;
uint8_t x384 = 11U;
int32_t t78 = -85917;
volatile uint32_t x385 = 1611U;
volatile int64_t x386 = -1LL;
int32_t x387 = -1;
static int16_t x388 = -1;
int8_t x391 = 2;
int16_t x395 = -6;
int64_t x396 = -1LL;
volatile uint8_t x399 = 23U;
uint16_t x401 = UINT16_MAX;
uint16_t x403 = UINT16_MAX;
int16_t x410 = -1;
int16_t x421 = INT16_MIN;
static int8_t x424 = INT8_MIN;
int16_t x426 = INT16_MAX;
uint8_t x449 = 0U;
int32_t t94 = -25374;
int8_t x459 = 0;
int32_t t97 = -2587557;
uint64_t x469 = 580092836690344LLU;
int32_t t99 = -509500201;
int16_t x478 = 261;
uint64_t x482 = 3900081733687616925LLU;
int32_t t101 = -206099141;
int32_t t102 = -18308;
int32_t x490 = INT32_MAX;
volatile int32_t t103 = -4;
static volatile int16_t x504 = -2;
static uint8_t x505 = UINT8_MAX;
static int16_t x507 = INT16_MIN;
volatile uint16_t x514 = 16134U;
static uint64_t x516 = 15430260344474LLU;
volatile uint8_t x520 = 124U;
int32_t t111 = -438773264;
volatile int64_t x528 = INT64_MAX;
static int32_t t112 = -608073481;
volatile int16_t x533 = -1;
static int8_t x536 = -7;
static uint16_t x537 = UINT16_MAX;
uint32_t x544 = 725111406U;
int32_t t118 = 351157785;
int32_t t120 = 203827;
int16_t x576 = INT16_MAX;
int32_t x584 = INT32_MIN;
volatile int32_t t122 = 0;
int16_t x588 = 6163;
uint8_t x591 = 6U;
int8_t x593 = -1;
static int16_t x596 = -114;
int8_t x613 = -1;
int32_t x617 = -1;
int64_t x622 = -1LL;
static uint8_t x627 = 30U;
int32_t t132 = -250008;
int8_t x630 = -1;
int16_t x640 = -1;
volatile int32_t t135 = -7697;
static volatile uint64_t x643 = 111962673LLU;
static uint32_t x653 = 136U;
volatile int32_t t139 = 408;
uint8_t x659 = 0U;
static int16_t x671 = INT16_MIN;
static int32_t t143 = 114;
uint16_t x685 = 6U;
int32_t x688 = 13217038;
int32_t t147 = 1071950424;
uint64_t x698 = 105696109428387347LLU;
int16_t x703 = INT16_MIN;
static int64_t x709 = INT64_MIN;
int32_t t150 = -39828;
uint32_t x716 = 732405U;
int64_t x720 = INT64_MAX;
int32_t x721 = INT32_MIN;
int64_t x722 = INT64_MIN;
int32_t t153 = 2481532;
volatile uint64_t x734 = 42896852515157LLU;
int64_t x736 = -16186LL;
volatile int32_t t156 = 1514422;
volatile int32_t x749 = -1;
int64_t x753 = INT64_MAX;
int64_t x754 = -1LL;
uint16_t x758 = 453U;
int16_t x761 = INT16_MIN;
int8_t x767 = 3;
volatile uint32_t x770 = 2U;
int32_t t165 = 1;
volatile int64_t x783 = 834911336385LL;
int32_t t166 = 2;
static int16_t x788 = -1;
int8_t x789 = 11;
volatile int32_t t168 = -1906;
uint16_t x793 = UINT16_MAX;
volatile int32_t x795 = -5;
uint64_t x797 = 4137517024426LLU;
volatile int32_t t171 = 11272;
uint8_t x806 = UINT8_MAX;
uint16_t x809 = 190U;
int8_t x811 = 3;
uint16_t x817 = 426U;
int32_t t175 = 19;
int64_t x821 = -1LL;
int32_t x822 = INT32_MIN;
static uint16_t x824 = UINT16_MAX;
int32_t x825 = 3173722;
volatile int32_t t177 = 121;
uint16_t x833 = UINT16_MAX;
int64_t x837 = INT64_MIN;
uint32_t x838 = UINT32_MAX;
volatile int8_t x845 = 0;
uint8_t x859 = 0U;
static volatile int32_t t182 = 25096;
static int32_t x866 = INT32_MIN;
int8_t x872 = INT8_MIN;
static int64_t x873 = -1LL;
int16_t x874 = INT16_MIN;
int32_t t186 = 9147;
uint32_t x878 = UINT32_MAX;
int64_t x879 = -48728LL;
int64_t x881 = -3011391353LL;
int8_t x885 = -10;
uint16_t x902 = 387U;
static int8_t x903 = 6;
int16_t x905 = INT16_MIN;
int32_t x915 = INT32_MAX;
volatile uint32_t x916 = 214845U;
int32_t t197 = -2229;
volatile uint8_t x924 = UINT8_MAX;
volatile int32_t x928 = 15708055;
volatile int32_t t199 = 0;


void f0(void) {
    	int64_t x1 = -1589LL;
	static volatile int32_t x2 = -1;
	int8_t x4 = INT8_MIN;
	volatile int32_t t0 = -1;

    t0 = ((x1%x2)>(x3-x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = -48605275LL;
	volatile uint64_t x6 = 24919LLU;
	volatile int64_t x8 = 96LL;
	volatile int32_t t1 = 12;

    t1 = ((x5%x6)>(x7-x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x9 = -1;
	uint8_t x10 = 1U;
	int64_t x11 = -1LL;
	int32_t t2 = -115042;

    t2 = ((x9%x10)>(x11-x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint32_t x13 = 371603186U;
	static uint64_t x14 = 6097166LLU;
	uint16_t x15 = 60U;
	int8_t x16 = 43;
	volatile int32_t t3 = 304738144;

    t3 = ((x13%x14)>(x15-x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x25 = 4;
	uint64_t x26 = 5374367947511LLU;
	static uint8_t x27 = UINT8_MAX;
	int32_t x28 = -3;
	int32_t t4 = -862;

    t4 = ((x25%x26)>(x27-x28));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile int32_t x29 = INT32_MIN;
	uint8_t x30 = 20U;
	static int64_t x31 = 385LL;
	volatile int8_t x32 = 2;
	int32_t t5 = -18223149;

    t5 = ((x29%x30)>(x31-x32));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x33 = 106722045U;
	static uint8_t x34 = UINT8_MAX;
	uint8_t x35 = 2U;
	volatile int16_t x36 = INT16_MIN;

    t6 = ((x33%x34)>(x35-x36));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int32_t x37 = 1814989;
	volatile int32_t x38 = INT32_MIN;
	static volatile int16_t x39 = -247;
	uint16_t x40 = 405U;
	int32_t t7 = -321834817;

    t7 = ((x37%x38)>(x39-x40));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint8_t x45 = UINT8_MAX;
	static volatile uint32_t x46 = UINT32_MAX;
	uint32_t x47 = UINT32_MAX;
	uint32_t x48 = 7728787U;
	volatile int32_t t8 = -457;

    t8 = ((x45%x46)>(x47-x48));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x50 = UINT32_MAX;
	int16_t x51 = -14;
	int32_t t9 = -11;

    t9 = ((x49%x50)>(x51-x52));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int64_t x53 = INT64_MAX;
	uint16_t x54 = UINT16_MAX;
	int8_t x55 = INT8_MAX;
	int32_t x56 = -1;
	int32_t t10 = -25393702;

    t10 = ((x53%x54)>(x55-x56));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x61 = 2700440;
	int32_t x62 = INT32_MAX;
	static uint64_t x63 = 34955LLU;
	static int8_t x64 = 4;
	static volatile int32_t t11 = 2770;

    t11 = ((x61%x62)>(x63-x64));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x66 = 12513U;
	static uint16_t x67 = 465U;
	int32_t t12 = -7593111;

    t12 = ((x65%x66)>(x67-x68));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x69 = 15476296LL;
	int64_t x70 = -1LL;
	static int16_t x71 = -859;
	int32_t x72 = INT32_MIN;

    t13 = ((x69%x70)>(x71-x72));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x73 = -1021369224;
	uint64_t x74 = UINT64_MAX;
	volatile int64_t x75 = 258894LL;
	int64_t x76 = 45573009065LL;
	int32_t t14 = 20340;

    t14 = ((x73%x74)>(x75-x76));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x81 = UINT32_MAX;
	int64_t x82 = -1028599216397087642LL;
	int16_t x83 = -5635;
	int8_t x84 = -1;

    t15 = ((x81%x82)>(x83-x84));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x85 = UINT16_MAX;
	int32_t x86 = INT32_MAX;
	int16_t x87 = -1;
	static uint8_t x88 = 52U;
	int32_t t16 = -60;

    t16 = ((x85%x86)>(x87-x88));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x89 = 14;
	uint64_t x90 = 4343653010291LLU;
	int8_t x92 = -1;
	int32_t t17 = -12182072;

    t17 = ((x89%x90)>(x91-x92));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x93 = INT8_MAX;
	static volatile int8_t x94 = -13;

    t18 = ((x93%x94)>(x95-x96));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x97 = -1;
	int32_t x98 = INT32_MAX;
	static int32_t x99 = 784768;
	volatile int32_t t19 = -6297;

    t19 = ((x97%x98)>(x99-x100));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x101 = INT8_MAX;
	int32_t t20 = -25;

    t20 = ((x101%x102)>(x103-x104));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x105 = 348942329LLU;
	static volatile uint8_t x106 = 3U;
	uint16_t x107 = UINT16_MAX;
	volatile int16_t x108 = INT16_MIN;
	volatile int32_t t21 = -163043918;

    t21 = ((x105%x106)>(x107-x108));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int64_t x110 = INT64_MAX;
	uint16_t x112 = 0U;
	volatile int32_t t22 = 1;

    t22 = ((x109%x110)>(x111-x112));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x113 = -63;
	volatile int64_t x115 = INT64_MAX;
	volatile uint64_t x116 = 7280311039712LLU;

    t23 = ((x113%x114)>(x115-x116));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x117 = -1;
	int64_t x118 = INT64_MIN;
	uint64_t x119 = 70504822LLU;
	volatile uint64_t x120 = UINT64_MAX;
	volatile int32_t t24 = 39990;

    t24 = ((x117%x118)>(x119-x120));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x129 = 1;
	int16_t x130 = INT16_MIN;
	uint8_t x131 = 114U;
	volatile int8_t x132 = INT8_MIN;
	int32_t t25 = -251549;

    t25 = ((x129%x130)>(x131-x132));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x133 = 11540707;
	volatile int32_t x134 = INT32_MIN;
	uint16_t x136 = UINT16_MAX;
	volatile int32_t t26 = -372;

    t26 = ((x133%x134)>(x135-x136));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint16_t x137 = UINT16_MAX;
	int64_t x139 = -1LL;
	uint16_t x140 = 1688U;
	volatile int32_t t27 = 244157;

    t27 = ((x137%x138)>(x139-x140));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x141 = 10936LLU;
	uint8_t x142 = UINT8_MAX;
	volatile uint64_t x143 = 2099276875576946LLU;
	int64_t x144 = INT64_MIN;
	volatile int32_t t28 = -141319047;

    t28 = ((x141%x142)>(x143-x144));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x149 = 57907083656671369LLU;
	volatile uint64_t x150 = 49008LLU;
	volatile int64_t x151 = -12116254787179639LL;
	int64_t x152 = 504366877903954LL;
	volatile int32_t t29 = -984;

    t29 = ((x149%x150)>(x151-x152));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x153 = UINT8_MAX;
	static uint16_t x154 = 860U;
	int32_t x155 = -31;
	volatile uint32_t x156 = 46514385U;
	int32_t t30 = -13614;

    t30 = ((x153%x154)>(x155-x156));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x158 = UINT32_MAX;
	uint8_t x159 = 2U;
	int32_t x160 = -1;
	static int32_t t31 = 36623;

    t31 = ((x157%x158)>(x159-x160));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x161 = 46;
	volatile uint8_t x164 = 32U;
	int32_t t32 = -13;

    t32 = ((x161%x162)>(x163-x164));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x165 = 318969LLU;
	int64_t x167 = -1LL;
	volatile uint32_t x168 = 11U;
	int32_t t33 = 10;

    t33 = ((x165%x166)>(x167-x168));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x175 = INT32_MIN;
	static volatile int8_t x176 = -1;
	static int32_t t34 = 21681703;

    t34 = ((x173%x174)>(x175-x176));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x178 = UINT64_MAX;
	int32_t x179 = INT32_MIN;
	uint8_t x180 = 0U;

    t35 = ((x177%x178)>(x179-x180));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x181 = UINT16_MAX;
	uint64_t x182 = 19616LLU;
	uint32_t x184 = UINT32_MAX;
	int32_t t36 = 14567297;

    t36 = ((x181%x182)>(x183-x184));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint8_t x185 = 42U;
	uint32_t x186 = 148453U;
	static volatile int64_t x187 = -47LL;
	volatile int16_t x188 = INT16_MAX;
	volatile int32_t t37 = -537597045;

    t37 = ((x185%x186)>(x187-x188));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x189 = INT8_MIN;
	volatile uint16_t x191 = UINT16_MAX;
	uint32_t x192 = UINT32_MAX;

    t38 = ((x189%x190)>(x191-x192));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x194 = -1;
	int16_t x195 = 624;
	uint8_t x196 = 0U;
	static int32_t t39 = -7092274;

    t39 = ((x193%x194)>(x195-x196));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x199 = INT32_MIN;
	static volatile int16_t x200 = INT16_MIN;
	int32_t t40 = -130;

    t40 = ((x197%x198)>(x199-x200));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x201 = 18U;
	volatile uint64_t x202 = 2179295LLU;
	int16_t x203 = -3235;
	int64_t x204 = INT64_MIN;

    t41 = ((x201%x202)>(x203-x204));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint64_t x205 = 15LLU;
	volatile uint16_t x206 = UINT16_MAX;
	uint32_t x207 = 460140U;
	volatile uint8_t x208 = 0U;

    t42 = ((x205%x206)>(x207-x208));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x209 = INT8_MIN;
	volatile int32_t x210 = INT32_MIN;
	int8_t x211 = -1;

    t43 = ((x209%x210)>(x211-x212));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x215 = 1U;
	volatile int8_t x216 = INT8_MAX;
	int32_t t44 = -25012;

    t44 = ((x213%x214)>(x215-x216));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x222 = INT32_MIN;
	static uint32_t x223 = UINT32_MAX;
	static int8_t x224 = INT8_MIN;
	int32_t t45 = 173321345;

    t45 = ((x221%x222)>(x223-x224));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x225 = UINT64_MAX;
	volatile uint8_t x227 = 86U;
	uint32_t x228 = 6484U;
	int32_t t46 = 117979955;

    t46 = ((x225%x226)>(x227-x228));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x229 = 912211536LLU;
	uint64_t x230 = UINT64_MAX;
	int8_t x231 = -2;
	int32_t x232 = 4769949;
	static int32_t t47 = -3334250;

    t47 = ((x229%x230)>(x231-x232));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x233 = -338012006;
	static int32_t x236 = INT32_MIN;

    t48 = ((x233%x234)>(x235-x236));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x237 = INT32_MIN;
	static uint32_t x238 = 5U;
	int16_t x239 = INT16_MIN;
	uint64_t x240 = 2530855032009LLU;
	int32_t t49 = 16;

    t49 = ((x237%x238)>(x239-x240));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile uint32_t x242 = UINT32_MAX;
	int16_t x243 = INT16_MIN;
	int16_t x244 = INT16_MIN;

    t50 = ((x241%x242)>(x243-x244));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile uint32_t x246 = 58114U;
	volatile int16_t x247 = INT16_MAX;
	static int64_t x248 = INT64_MAX;

    t51 = ((x245%x246)>(x247-x248));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x253 = -1;
	int8_t x254 = 18;
	volatile int8_t x255 = -1;
	int8_t x256 = 2;
	static volatile int32_t t52 = 38993;

    t52 = ((x253%x254)>(x255-x256));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x257 = INT16_MIN;
	volatile int8_t x258 = 15;
	volatile int8_t x260 = INT8_MIN;
	static int32_t t53 = 4136082;

    t53 = ((x257%x258)>(x259-x260));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x261 = INT32_MIN;
	static uint16_t x262 = 1U;
	int64_t x263 = -6324LL;
	int32_t t54 = -915330;

    t54 = ((x261%x262)>(x263-x264));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x265 = -1;
	int8_t x267 = 6;
	int16_t x268 = -19;
	static volatile int32_t t55 = -131180350;

    t55 = ((x265%x266)>(x267-x268));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x269 = INT64_MAX;
	int32_t x270 = -379;
	int8_t x271 = INT8_MIN;
	uint32_t x272 = 98U;
	int32_t t56 = -32798;

    t56 = ((x269%x270)>(x271-x272));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x273 = 28U;
	static int64_t x275 = -27841080982537LL;
	static int32_t x276 = INT32_MIN;
	int32_t t57 = 3;

    t57 = ((x273%x274)>(x275-x276));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x277 = INT32_MIN;
	int64_t x278 = 556LL;
	uint16_t x279 = UINT16_MAX;
	uint32_t x280 = 1832051U;
	int32_t t58 = 98;

    t58 = ((x277%x278)>(x279-x280));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x285 = -6;
	int16_t x286 = -2088;
	static volatile int64_t x287 = -162LL;
	int8_t x288 = INT8_MAX;

    t59 = ((x285%x286)>(x287-x288));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x289 = -1;
	uint16_t x290 = 6U;
	static volatile int32_t x291 = 21040;
	uint64_t x292 = UINT64_MAX;

    t60 = ((x289%x290)>(x291-x292));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint32_t x293 = 2U;
	uint8_t x294 = 87U;
	static uint16_t x295 = 766U;
	static int64_t x296 = 95033914659023876LL;
	int32_t t61 = -43;

    t61 = ((x293%x294)>(x295-x296));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x301 = UINT8_MAX;
	int32_t x302 = INT32_MIN;
	int64_t x303 = -1LL;
	int32_t x304 = -1;
	int32_t t62 = -35338889;

    t62 = ((x301%x302)>(x303-x304));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static int32_t x305 = INT32_MIN;
	volatile uint32_t x306 = 1U;
	static int32_t x307 = INT32_MAX;
	uint64_t x308 = 2038894860103315LLU;

    t63 = ((x305%x306)>(x307-x308));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x309 = INT8_MAX;
	volatile uint32_t x310 = UINT32_MAX;
	static uint32_t x311 = 1539930U;
	volatile int32_t t64 = 6373549;

    t64 = ((x309%x310)>(x311-x312));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x313 = INT8_MIN;
	static volatile uint32_t x314 = 20798U;
	int32_t t65 = -352553;

    t65 = ((x313%x314)>(x315-x316));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x317 = 0U;
	int32_t x318 = INT32_MAX;
	int32_t t66 = -3523;

    t66 = ((x317%x318)>(x319-x320));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x321 = INT16_MIN;
	int64_t x323 = -13464LL;
	volatile int16_t x324 = -7612;

    t67 = ((x321%x322)>(x323-x324));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x335 = 234U;
	int64_t x336 = -1LL;
	static int32_t t68 = 25067573;

    t68 = ((x333%x334)>(x335-x336));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x341 = UINT16_MAX;
	uint8_t x342 = 43U;
	int16_t x343 = INT16_MIN;
	int32_t x344 = -1541;
	volatile int32_t t69 = -16416;

    t69 = ((x341%x342)>(x343-x344));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x346 = INT32_MAX;
	int8_t x348 = 2;
	int32_t t70 = 3189136;

    t70 = ((x345%x346)>(x347-x348));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x349 = 3U;
	int64_t x350 = -2034063112888335LL;
	static uint32_t x351 = UINT32_MAX;
	static uint64_t x352 = 131833921182503LLU;

    t71 = ((x349%x350)>(x351-x352));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int64_t x353 = 859761628LL;
	int64_t x354 = 29049461651LL;
	volatile int8_t x355 = -1;
	volatile int32_t t72 = -13934;

    t72 = ((x353%x354)>(x355-x356));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x357 = INT32_MIN;
	static volatile int16_t x358 = 10;
	volatile uint16_t x359 = UINT16_MAX;
	int16_t x360 = INT16_MIN;
	volatile int32_t t73 = 4688340;

    t73 = ((x357%x358)>(x359-x360));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x361 = -29;
	int64_t x363 = INT64_MIN;
	int64_t x364 = INT64_MIN;
	volatile int32_t t74 = -273731905;

    t74 = ((x361%x362)>(x363-x364));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint16_t x366 = 22668U;
	int64_t x367 = INT64_MAX;
	uint32_t x368 = UINT32_MAX;
	volatile int32_t t75 = 7;

    t75 = ((x365%x366)>(x367-x368));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x370 = 13;
	volatile uint32_t x371 = UINT32_MAX;
	int16_t x372 = INT16_MAX;
	int32_t t76 = 6341367;

    t76 = ((x369%x370)>(x371-x372));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint8_t x377 = 6U;
	static int16_t x378 = INT16_MIN;
	int16_t x379 = INT16_MIN;

    t77 = ((x377%x378)>(x379-x380));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int64_t x381 = INT64_MAX;
	int16_t x382 = INT16_MIN;
	int8_t x383 = INT8_MIN;

    t78 = ((x381%x382)>(x383-x384));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t t79 = 165315849;

    t79 = ((x385%x386)>(x387-x388));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x389 = 1U;
	volatile int16_t x390 = -1;
	static int8_t x392 = 1;
	int32_t t80 = -88;

    t80 = ((x389%x390)>(x391-x392));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x393 = INT16_MAX;
	int32_t x394 = -27576371;
	volatile int32_t t81 = 980811;

    t81 = ((x393%x394)>(x395-x396));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x397 = 0;
	uint8_t x398 = 57U;
	volatile uint32_t x400 = 1859807341U;
	static volatile int32_t t82 = 3;

    t82 = ((x397%x398)>(x399-x400));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x402 = -1;
	static int16_t x404 = INT16_MIN;
	int32_t t83 = 3211192;

    t83 = ((x401%x402)>(x403-x404));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int32_t x405 = INT32_MIN;
	int64_t x406 = INT64_MAX;
	int16_t x407 = -1;
	uint8_t x408 = 105U;
	volatile int32_t t84 = 525508;

    t84 = ((x405%x406)>(x407-x408));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint8_t x409 = 48U;
	int64_t x411 = INT64_MIN;
	int32_t x412 = -1;
	volatile int32_t t85 = 13;

    t85 = ((x409%x410)>(x411-x412));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile uint64_t x413 = UINT64_MAX;
	int8_t x414 = -1;
	int32_t x415 = -14612735;
	uint16_t x416 = UINT16_MAX;
	volatile int32_t t86 = 0;

    t86 = ((x413%x414)>(x415-x416));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile int64_t x417 = INT64_MAX;
	volatile int16_t x418 = -1;
	uint8_t x419 = 4U;
	volatile uint16_t x420 = 389U;
	volatile int32_t t87 = 1;

    t87 = ((x417%x418)>(x419-x420));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x422 = INT32_MIN;
	int64_t x423 = -21430483806537475LL;
	volatile int32_t t88 = 4;

    t88 = ((x421%x422)>(x423-x424));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint32_t x425 = 33698U;
	volatile uint32_t x427 = 2442974U;
	static volatile int8_t x428 = -1;
	volatile int32_t t89 = -2571365;

    t89 = ((x425%x426)>(x427-x428));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x433 = -3870208;
	uint64_t x434 = 1LLU;
	static uint16_t x435 = 689U;
	uint64_t x436 = UINT64_MAX;
	int32_t t90 = -8;

    t90 = ((x433%x434)>(x435-x436));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x441 = 11U;
	int8_t x442 = -1;
	volatile int64_t x443 = -1LL;
	volatile uint8_t x444 = 7U;
	static volatile int32_t t91 = 5;

    t91 = ((x441%x442)>(x443-x444));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x445 = -1;
	int16_t x446 = INT16_MIN;
	volatile uint32_t x447 = 220019675U;
	volatile int64_t x448 = INT64_MAX;
	volatile int32_t t92 = 95;

    t92 = ((x445%x446)>(x447-x448));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x450 = 124;
	uint16_t x451 = 1U;
	uint64_t x452 = UINT64_MAX;
	static int32_t t93 = -8258589;

    t93 = ((x449%x450)>(x451-x452));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x453 = -1;
	static int64_t x454 = INT64_MAX;
	int8_t x455 = INT8_MIN;
	static int8_t x456 = INT8_MIN;

    t94 = ((x453%x454)>(x455-x456));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x457 = 55141838002849LL;
	int64_t x458 = 29816LL;
	int8_t x460 = -34;
	volatile int32_t t95 = -3;

    t95 = ((x457%x458)>(x459-x460));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x461 = -2878;
	uint16_t x462 = 156U;
	static uint32_t x463 = 1456435894U;
	uint8_t x464 = 4U;
	int32_t t96 = 432417954;

    t96 = ((x461%x462)>(x463-x464));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x465 = INT16_MIN;
	int8_t x466 = INT8_MIN;
	uint16_t x467 = 1U;
	uint16_t x468 = 88U;

    t97 = ((x465%x466)>(x467-x468));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x470 = UINT8_MAX;
	int64_t x471 = 549627470LL;
	int8_t x472 = -1;
	static volatile int32_t t98 = -528990462;

    t98 = ((x469%x470)>(x471-x472));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x473 = 405457722U;
	uint64_t x474 = 1LLU;
	volatile int64_t x475 = 317376LL;
	int32_t x476 = 19;

    t99 = ((x473%x474)>(x475-x476));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x477 = 5U;
	static int16_t x479 = INT16_MAX;
	volatile int8_t x480 = -1;
	int32_t t100 = 0;

    t100 = ((x477%x478)>(x479-x480));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x481 = 26639U;
	uint16_t x483 = UINT16_MAX;
	volatile int8_t x484 = -3;

    t101 = ((x481%x482)>(x483-x484));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x485 = -1;
	volatile int64_t x486 = -1LL;
	uint64_t x487 = 234164818796717794LLU;
	static uint8_t x488 = UINT8_MAX;

    t102 = ((x485%x486)>(x487-x488));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x489 = UINT64_MAX;
	static volatile uint8_t x491 = 7U;
	int8_t x492 = -8;

    t103 = ((x489%x490)>(x491-x492));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x493 = UINT32_MAX;
	uint32_t x494 = 512U;
	static int16_t x495 = 3741;
	static int16_t x496 = INT16_MAX;
	static int32_t t104 = -288310;

    t104 = ((x493%x494)>(x495-x496));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x497 = INT16_MIN;
	volatile int8_t x498 = INT8_MAX;
	uint8_t x499 = UINT8_MAX;
	uint8_t x500 = UINT8_MAX;
	volatile int32_t t105 = -2642;

    t105 = ((x497%x498)>(x499-x500));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x501 = INT64_MAX;
	uint32_t x502 = 30U;
	int32_t x503 = INT32_MIN;
	volatile int32_t t106 = 3798381;

    t106 = ((x501%x502)>(x503-x504));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x506 = -1;
	uint64_t x508 = UINT64_MAX;
	int32_t t107 = -226;

    t107 = ((x505%x506)>(x507-x508));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x509 = INT8_MIN;
	uint16_t x510 = 239U;
	static int8_t x511 = INT8_MIN;
	int32_t x512 = INT32_MIN;
	volatile int32_t t108 = -1296;

    t108 = ((x509%x510)>(x511-x512));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x513 = INT32_MIN;
	int8_t x515 = -1;
	int32_t t109 = -69;

    t109 = ((x513%x514)>(x515-x516));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x517 = 49U;
	uint64_t x518 = 57459978231682998LLU;
	uint16_t x519 = 20U;
	int32_t t110 = -8634;

    t110 = ((x517%x518)>(x519-x520));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x521 = UINT64_MAX;
	uint32_t x522 = 2848U;
	static uint64_t x523 = UINT64_MAX;
	uint8_t x524 = UINT8_MAX;

    t111 = ((x521%x522)>(x523-x524));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x525 = 7U;
	int16_t x526 = INT16_MAX;
	uint32_t x527 = 1952U;

    t112 = ((x525%x526)>(x527-x528));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x529 = 66;
	int8_t x530 = INT8_MAX;
	static volatile uint16_t x531 = UINT16_MAX;
	int8_t x532 = INT8_MAX;
	int32_t t113 = -1288;

    t113 = ((x529%x530)>(x531-x532));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x534 = UINT8_MAX;
	uint16_t x535 = 22U;
	volatile int32_t t114 = -56;

    t114 = ((x533%x534)>(x535-x536));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x538 = 432700U;
	uint16_t x539 = 160U;
	uint32_t x540 = 270322859U;
	static int32_t t115 = -126969;

    t115 = ((x537%x538)>(x539-x540));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x541 = INT8_MIN;
	int32_t x542 = -1;
	uint16_t x543 = 160U;
	int32_t t116 = -110;

    t116 = ((x541%x542)>(x543-x544));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x549 = 0U;
	int32_t x550 = -1;
	static int8_t x551 = 27;
	int64_t x552 = -34048LL;
	int32_t t117 = -3882213;

    t117 = ((x549%x550)>(x551-x552));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x561 = -14;
	int32_t x562 = -3807;
	int16_t x563 = INT16_MIN;
	int8_t x564 = INT8_MIN;

    t118 = ((x561%x562)>(x563-x564));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x565 = INT8_MIN;
	volatile uint8_t x566 = 14U;
	int8_t x567 = INT8_MIN;
	int64_t x568 = 904LL;
	volatile int32_t t119 = -6;

    t119 = ((x565%x566)>(x567-x568));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x569 = 32U;
	int32_t x570 = -1;
	volatile int8_t x571 = 37;
	static volatile uint16_t x572 = UINT16_MAX;

    t120 = ((x569%x570)>(x571-x572));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x573 = 1;
	int8_t x574 = -1;
	int8_t x575 = INT8_MIN;
	volatile int32_t t121 = -1705;

    t121 = ((x573%x574)>(x575-x576));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x581 = INT32_MAX;
	static uint16_t x582 = 8754U;
	int8_t x583 = -3;

    t122 = ((x581%x582)>(x583-x584));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x585 = 4675U;
	uint64_t x586 = UINT64_MAX;
	int8_t x587 = 3;
	int32_t t123 = 238228410;

    t123 = ((x585%x586)>(x587-x588));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static int32_t x589 = INT32_MIN;
	static int32_t x590 = INT32_MAX;
	static uint64_t x592 = 1603LLU;
	int32_t t124 = -99;

    t124 = ((x589%x590)>(x591-x592));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x594 = INT32_MIN;
	uint16_t x595 = 43U;
	int32_t t125 = -15465;

    t125 = ((x593%x594)>(x595-x596));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint8_t x597 = UINT8_MAX;
	uint32_t x598 = 6U;
	int16_t x599 = 10371;
	static uint64_t x600 = 685922628799LLU;
	volatile int32_t t126 = -216;

    t126 = ((x597%x598)>(x599-x600));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x605 = INT64_MIN;
	static int16_t x606 = -1;
	uint64_t x607 = 262LLU;
	volatile uint64_t x608 = 7048LLU;
	int32_t t127 = -756;

    t127 = ((x605%x606)>(x607-x608));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x609 = 25525116281877206LLU;
	int64_t x610 = INT64_MAX;
	uint16_t x611 = 29U;
	int32_t x612 = -39737151;
	int32_t t128 = -196266;

    t128 = ((x609%x610)>(x611-x612));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int16_t x614 = INT16_MAX;
	static int16_t x615 = INT16_MIN;
	volatile int32_t x616 = -1;
	static int32_t t129 = 2;

    t129 = ((x613%x614)>(x615-x616));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x618 = INT32_MAX;
	volatile int64_t x619 = -1LL;
	int16_t x620 = -1;
	int32_t t130 = -1;

    t130 = ((x617%x618)>(x619-x620));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x621 = INT16_MIN;
	uint32_t x623 = UINT32_MAX;
	int64_t x624 = 5970402659858619LL;
	int32_t t131 = 0;

    t131 = ((x621%x622)>(x623-x624));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x625 = -1;
	int64_t x626 = -137420440954300LL;
	int32_t x628 = 1;

    t132 = ((x625%x626)>(x627-x628));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x629 = -1;
	int8_t x631 = INT8_MIN;
	uint16_t x632 = 0U;
	volatile int32_t t133 = 1666726;

    t133 = ((x629%x630)>(x631-x632));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint16_t x633 = 0U;
	int32_t x634 = INT32_MIN;
	int8_t x635 = -1;
	uint64_t x636 = 31263380361297LLU;
	volatile int32_t t134 = -180286;

    t134 = ((x633%x634)>(x635-x636));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint8_t x637 = 2U;
	int8_t x638 = INT8_MIN;
	uint16_t x639 = 61U;

    t135 = ((x637%x638)>(x639-x640));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint16_t x641 = 87U;
	static int8_t x642 = -63;
	volatile uint16_t x644 = UINT16_MAX;
	volatile int32_t t136 = 182593708;

    t136 = ((x641%x642)>(x643-x644));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x645 = 5;
	volatile int8_t x646 = INT8_MIN;
	uint8_t x647 = 0U;
	static int8_t x648 = 10;
	volatile int32_t t137 = -679;

    t137 = ((x645%x646)>(x647-x648));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x649 = 64U;
	int64_t x650 = -1LL;
	volatile int8_t x651 = INT8_MIN;
	static int8_t x652 = -1;
	int32_t t138 = -368;

    t138 = ((x649%x650)>(x651-x652));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x654 = 19U;
	uint16_t x655 = 16587U;
	static int16_t x656 = INT16_MAX;

    t139 = ((x653%x654)>(x655-x656));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x657 = 11U;
	int8_t x658 = -1;
	static int16_t x660 = 16;
	static int32_t t140 = 196;

    t140 = ((x657%x658)>(x659-x660));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x661 = INT32_MIN;
	int32_t x662 = INT32_MIN;
	uint64_t x663 = UINT64_MAX;
	volatile int32_t x664 = 3180061;
	int32_t t141 = 91112636;

    t141 = ((x661%x662)>(x663-x664));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x669 = UINT16_MAX;
	int64_t x670 = -1LL;
	int64_t x672 = 50400748LL;
	int32_t t142 = 29056;

    t142 = ((x669%x670)>(x671-x672));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int16_t x673 = INT16_MAX;
	int64_t x674 = INT64_MIN;
	uint64_t x675 = 16210989604524LLU;
	uint64_t x676 = UINT64_MAX;

    t143 = ((x673%x674)>(x675-x676));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x677 = -22;
	int16_t x678 = INT16_MIN;
	int32_t x679 = 709080782;
	int8_t x680 = INT8_MIN;
	int32_t t144 = -71801234;

    t144 = ((x677%x678)>(x679-x680));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int16_t x681 = 70;
	static int8_t x682 = INT8_MIN;
	int8_t x683 = -1;
	static volatile int16_t x684 = INT16_MIN;
	static volatile int32_t t145 = -6142;

    t145 = ((x681%x682)>(x683-x684));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x686 = INT32_MIN;
	volatile uint16_t x687 = UINT16_MAX;
	int32_t t146 = -5;

    t146 = ((x685%x686)>(x687-x688));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x689 = -49442566971977LL;
	uint64_t x690 = 101LLU;
	volatile uint16_t x691 = 6233U;
	int16_t x692 = INT16_MAX;

    t147 = ((x689%x690)>(x691-x692));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x697 = INT32_MIN;
	static int8_t x699 = INT8_MIN;
	static int32_t x700 = INT32_MIN;
	int32_t t148 = 9638004;

    t148 = ((x697%x698)>(x699-x700));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x701 = 4076093148LLU;
	int64_t x702 = 4319386653LL;
	int32_t x704 = -1;
	static volatile int32_t t149 = 0;

    t149 = ((x701%x702)>(x703-x704));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x710 = INT64_MIN;
	uint64_t x711 = 1106598071139834592LLU;
	int32_t x712 = -1;

    t150 = ((x709%x710)>(x711-x712));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile uint32_t x713 = UINT32_MAX;
	volatile uint32_t x714 = 31028U;
	static int32_t x715 = INT32_MAX;
	static volatile int32_t t151 = -2143;

    t151 = ((x713%x714)>(x715-x716));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x717 = 0U;
	int32_t x718 = -116264424;
	volatile int8_t x719 = 23;
	int32_t t152 = -351;

    t152 = ((x717%x718)>(x719-x720));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x723 = UINT64_MAX;
	int16_t x724 = 1;

    t153 = ((x721%x722)>(x723-x724));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x725 = 5U;
	volatile int32_t x726 = -1;
	static uint64_t x727 = UINT64_MAX;
	int64_t x728 = INT64_MIN;
	int32_t t154 = 12;

    t154 = ((x725%x726)>(x727-x728));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int8_t x729 = INT8_MAX;
	volatile uint8_t x730 = 15U;
	int16_t x731 = INT16_MIN;
	volatile int8_t x732 = 18;
	int32_t t155 = 48;

    t155 = ((x729%x730)>(x731-x732));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x733 = 10U;
	volatile int8_t x735 = INT8_MIN;

    t156 = ((x733%x734)>(x735-x736));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x741 = -1;
	uint32_t x742 = 15354U;
	static volatile int32_t x743 = INT32_MIN;
	int16_t x744 = INT16_MIN;
	int32_t t157 = -216612979;

    t157 = ((x741%x742)>(x743-x744));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x745 = 121U;
	int16_t x746 = 4600;
	static uint64_t x747 = 21081118609LLU;
	volatile uint16_t x748 = 71U;
	static int32_t t158 = -68;

    t158 = ((x745%x746)>(x747-x748));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x750 = 27U;
	int64_t x751 = INT64_MIN;
	int16_t x752 = -1;
	int32_t t159 = 42;

    t159 = ((x749%x750)>(x751-x752));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x755 = 3U;
	uint32_t x756 = UINT32_MAX;
	int32_t t160 = -15254;

    t160 = ((x753%x754)>(x755-x756));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x757 = -8020LL;
	int16_t x759 = INT16_MIN;
	int8_t x760 = 56;
	volatile int32_t t161 = 2;

    t161 = ((x757%x758)>(x759-x760));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x762 = INT32_MAX;
	uint64_t x763 = UINT64_MAX;
	int8_t x764 = -1;
	static int32_t t162 = 1;

    t162 = ((x761%x762)>(x763-x764));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x765 = -482328897;
	int8_t x766 = 27;
	int16_t x768 = INT16_MIN;
	int32_t t163 = -59;

    t163 = ((x765%x766)>(x767-x768));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x769 = 86;
	int16_t x771 = INT16_MIN;
	static uint64_t x772 = UINT64_MAX;
	volatile int32_t t164 = -9;

    t164 = ((x769%x770)>(x771-x772));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x777 = INT64_MIN;
	static volatile int16_t x778 = -1;
	volatile int8_t x779 = -1;
	int64_t x780 = INT64_MIN;

    t165 = ((x777%x778)>(x779-x780));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x781 = INT64_MAX;
	uint32_t x782 = 43615U;
	uint16_t x784 = UINT16_MAX;

    t166 = ((x781%x782)>(x783-x784));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x785 = INT64_MAX;
	uint8_t x786 = UINT8_MAX;
	int8_t x787 = 0;
	volatile int32_t t167 = -7;

    t167 = ((x785%x786)>(x787-x788));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x790 = INT32_MIN;
	int8_t x791 = INT8_MIN;
	static volatile uint32_t x792 = 1543471U;

    t168 = ((x789%x790)>(x791-x792));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x794 = 242938210293591430LL;
	volatile uint64_t x796 = 401LLU;
	volatile int32_t t169 = 1;

    t169 = ((x793%x794)>(x795-x796));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x798 = UINT16_MAX;
	uint8_t x799 = 47U;
	static int8_t x800 = 6;
	volatile int32_t t170 = -3041;

    t170 = ((x797%x798)>(x799-x800));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int32_t x801 = INT32_MIN;
	static uint64_t x802 = 2726505620176LLU;
	int32_t x803 = -1;
	static int16_t x804 = -199;

    t171 = ((x801%x802)>(x803-x804));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static int32_t x805 = 1149;
	int32_t x807 = 7057649;
	int32_t x808 = -1;
	int32_t t172 = -101285;

    t172 = ((x805%x806)>(x807-x808));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x810 = INT8_MIN;
	volatile uint8_t x812 = UINT8_MAX;
	volatile int32_t t173 = 170180228;

    t173 = ((x809%x810)>(x811-x812));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x813 = INT64_MIN;
	int8_t x814 = 3;
	uint16_t x815 = UINT16_MAX;
	static int32_t x816 = 247533;
	int32_t t174 = -3;

    t174 = ((x813%x814)>(x815-x816));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x818 = INT64_MIN;
	volatile int16_t x819 = 0;
	uint16_t x820 = UINT16_MAX;

    t175 = ((x817%x818)>(x819-x820));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x823 = -48619LL;
	volatile int32_t t176 = 23794303;

    t176 = ((x821%x822)>(x823-x824));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x826 = INT16_MIN;
	uint8_t x827 = UINT8_MAX;
	int16_t x828 = INT16_MIN;

    t177 = ((x825%x826)>(x827-x828));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int16_t x834 = INT16_MAX;
	int8_t x835 = INT8_MIN;
	int64_t x836 = INT64_MIN;
	volatile int32_t t178 = 1;

    t178 = ((x833%x834)>(x835-x836));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x839 = -1LL;
	int32_t x840 = INT32_MIN;
	volatile int32_t t179 = -10190;

    t179 = ((x837%x838)>(x839-x840));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x846 = INT64_MIN;
	int8_t x847 = INT8_MIN;
	volatile int8_t x848 = -1;
	volatile int32_t t180 = -521377;

    t180 = ((x845%x846)>(x847-x848));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x849 = 3U;
	int8_t x850 = INT8_MAX;
	uint8_t x851 = 28U;
	int8_t x852 = -1;
	volatile int32_t t181 = 15356618;

    t181 = ((x849%x850)>(x851-x852));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint32_t x857 = UINT32_MAX;
	volatile int32_t x858 = -941;
	uint32_t x860 = UINT32_MAX;

    t182 = ((x857%x858)>(x859-x860));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x861 = 65173875572717935LL;
	volatile uint8_t x862 = 9U;
	int16_t x863 = INT16_MIN;
	static uint64_t x864 = UINT64_MAX;
	static volatile int32_t t183 = -630945;

    t183 = ((x861%x862)>(x863-x864));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x865 = -1;
	static uint16_t x867 = 0U;
	volatile int32_t x868 = -718;
	volatile int32_t t184 = -4586;

    t184 = ((x865%x866)>(x867-x868));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint8_t x869 = UINT8_MAX;
	volatile uint16_t x870 = 681U;
	uint16_t x871 = 3U;
	volatile int32_t t185 = 0;

    t185 = ((x869%x870)>(x871-x872));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x875 = 4441951U;
	uint16_t x876 = 32141U;

    t186 = ((x873%x874)>(x875-x876));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x877 = 546435LLU;
	uint8_t x880 = 110U;
	int32_t t187 = -3898;

    t187 = ((x877%x878)>(x879-x880));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x882 = UINT32_MAX;
	static int64_t x883 = INT64_MIN;
	int8_t x884 = -3;
	static volatile int32_t t188 = 0;

    t188 = ((x881%x882)>(x883-x884));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x886 = INT16_MAX;
	int16_t x887 = 4667;
	uint8_t x888 = UINT8_MAX;
	volatile int32_t t189 = 7110465;

    t189 = ((x885%x886)>(x887-x888));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x889 = 4U;
	int8_t x890 = INT8_MIN;
	static uint16_t x891 = 27436U;
	uint32_t x892 = 916435U;
	int32_t t190 = 3262;

    t190 = ((x889%x890)>(x891-x892));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x893 = -1;
	int16_t x894 = INT16_MAX;
	uint8_t x895 = 15U;
	static int16_t x896 = INT16_MIN;
	int32_t t191 = -767;

    t191 = ((x893%x894)>(x895-x896));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int32_t x897 = -1;
	int8_t x898 = INT8_MIN;
	volatile int8_t x899 = INT8_MAX;
	static int32_t x900 = -1;
	int32_t t192 = -4;

    t192 = ((x897%x898)>(x899-x900));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x901 = -1LL;
	int32_t x904 = -1;
	volatile int32_t t193 = 53239;

    t193 = ((x901%x902)>(x903-x904));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x906 = UINT16_MAX;
	static volatile uint16_t x907 = UINT16_MAX;
	int32_t x908 = 7218546;
	static int32_t t194 = 512622983;

    t194 = ((x905%x906)>(x907-x908));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x909 = INT16_MAX;
	uint64_t x910 = 1631624666162483768LLU;
	static volatile uint32_t x911 = 491U;
	volatile int64_t x912 = INT64_MAX;
	int32_t t195 = 4272681;

    t195 = ((x909%x910)>(x911-x912));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int16_t x913 = INT16_MIN;
	int64_t x914 = INT64_MIN;
	int32_t t196 = 254744077;

    t196 = ((x913%x914)>(x915-x916));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x917 = INT32_MAX;
	int32_t x918 = -1;
	static int32_t x919 = INT32_MAX;
	uint16_t x920 = 1418U;

    t197 = ((x917%x918)>(x919-x920));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint8_t x921 = 5U;
	static uint16_t x922 = 29682U;
	static volatile uint64_t x923 = 2306LLU;
	int32_t t198 = -23;

    t198 = ((x921%x922)>(x923-x924));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x925 = 7;
	int64_t x926 = INT64_MAX;
	uint16_t x927 = 95U;

    t199 = ((x925%x926)>(x927-x928));

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

