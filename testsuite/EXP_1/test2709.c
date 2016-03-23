
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

int64_t x10 = INT64_MIN;
static uint16_t x13 = UINT16_MAX;
int16_t x14 = INT16_MIN;
static volatile int32_t t3 = -11;
volatile int64_t x18 = -1LL;
int32_t x19 = INT32_MIN;
int8_t x22 = 0;
static int32_t x25 = INT32_MIN;
volatile int16_t x29 = INT16_MIN;
static volatile int32_t t7 = -8289434;
uint8_t x36 = UINT8_MAX;
int32_t x42 = INT32_MIN;
int64_t x43 = INT64_MIN;
int8_t x49 = INT8_MAX;
int32_t t14 = 0;
int16_t x65 = INT16_MIN;
int32_t t16 = 3;
volatile int32_t x72 = -1;
int16_t x76 = INT16_MAX;
static int8_t x80 = INT8_MIN;
uint8_t x81 = 6U;
int32_t t20 = -2233563;
int32_t t21 = -269;
int8_t x92 = INT8_MIN;
static uint8_t x99 = UINT8_MAX;
int64_t x102 = -1LL;
uint8_t x108 = UINT8_MAX;
int32_t t28 = 231974242;
uint64_t x117 = 533176089LLU;
int32_t x124 = INT32_MAX;
int8_t x137 = INT8_MIN;
int32_t x139 = -3562;
int32_t x147 = INT32_MIN;
volatile int32_t t36 = -930;
int8_t x149 = INT8_MIN;
volatile int64_t x153 = INT64_MIN;
int64_t x154 = INT64_MAX;
uint64_t x155 = 42LLU;
uint16_t x157 = 12621U;
int32_t x158 = 148456;
int16_t x159 = -29;
int32_t t39 = 1407;
uint16_t x176 = UINT16_MAX;
static volatile uint64_t x178 = 37598598505078113LLU;
volatile int32_t t44 = 849820;
uint32_t x185 = UINT32_MAX;
volatile int32_t t47 = 4737568;
uint64_t x199 = 8134LLU;
int16_t x202 = -1;
int64_t x208 = -1LL;
volatile int64_t x209 = -1LL;
uint64_t x212 = 464LLU;
int32_t t53 = 4;
volatile uint8_t x217 = UINT8_MAX;
int8_t x222 = INT8_MAX;
int16_t x223 = -1;
volatile int32_t x224 = INT32_MIN;
int8_t x228 = 12;
int32_t x229 = INT32_MIN;
volatile int32_t t57 = -22;
uint64_t x234 = 1522495688LLU;
uint8_t x236 = 0U;
volatile int64_t x240 = INT64_MIN;
int32_t t59 = -336355;
int64_t x243 = -26742175737385LL;
volatile int16_t x245 = INT16_MIN;
int64_t x249 = INT64_MIN;
uint32_t x252 = 36659U;
int32_t t63 = -903065;
volatile int32_t t64 = -3;
volatile int64_t x269 = -1LL;
int16_t x270 = INT16_MIN;
static int16_t x274 = INT16_MIN;
int8_t x279 = INT8_MIN;
static int64_t x280 = INT64_MAX;
static int16_t x285 = INT16_MAX;
static uint8_t x286 = 0U;
int8_t x291 = INT8_MAX;
volatile int32_t t72 = -26199770;
int64_t x298 = 1370540520766LL;
volatile int8_t x303 = INT8_MIN;
int32_t t77 = 7;
int16_t x314 = -2478;
uint32_t x320 = 6U;
int16_t x323 = -3;
int32_t t80 = -42338;
uint16_t x328 = UINT16_MAX;
int64_t x329 = INT64_MIN;
uint16_t x342 = 3U;
int64_t x344 = INT64_MIN;
int64_t x354 = 4LL;
int64_t x358 = -9353706LL;
static int64_t x366 = -1LL;
uint64_t x369 = 249130486180695LLU;
int64_t x372 = -1238LL;
int16_t x375 = INT16_MIN;
volatile int32_t t93 = 0;
int64_t x380 = -30226823750048LL;
uint32_t x392 = 1532057U;
int32_t x397 = -1;
static int8_t x401 = INT8_MIN;
volatile int64_t x403 = 489649290LL;
static int16_t x407 = -357;
int32_t t101 = 350;
uint8_t x409 = 11U;
volatile int32_t t102 = -44109629;
int64_t x419 = INT64_MIN;
int16_t x421 = INT16_MIN;
uint16_t x424 = 470U;
static int16_t x426 = INT16_MIN;
uint32_t x432 = 424482046U;
volatile int64_t x433 = INT64_MIN;
static volatile uint8_t x435 = 0U;
volatile uint8_t x439 = 0U;
static uint32_t x440 = 1313921998U;
int32_t t110 = 9;
volatile uint16_t x445 = 3673U;
static int8_t x451 = -2;
int8_t x462 = -1;
volatile int32_t t115 = -5232;
static int8_t x470 = INT8_MAX;
int16_t x472 = -9;
int8_t x473 = INT8_MIN;
volatile int32_t x477 = INT32_MAX;
static int32_t t121 = -169956984;
int16_t x491 = INT16_MIN;
int32_t t122 = 16771393;
int8_t x494 = INT8_MIN;
uint32_t x497 = 120102621U;
static int32_t x504 = INT32_MAX;
int16_t x507 = -217;
static int64_t x509 = INT64_MAX;
int32_t t127 = -389909511;
uint16_t x513 = 246U;
int16_t x514 = INT16_MIN;
int64_t x515 = -1LL;
int16_t x517 = INT16_MAX;
int32_t x524 = INT32_MAX;
static volatile uint32_t x525 = UINT32_MAX;
int16_t x529 = INT16_MIN;
int32_t t132 = 520;
static int16_t x534 = 3482;
volatile int32_t t135 = -1830408;
volatile int32_t t137 = 71837;
volatile int32_t x553 = -1;
volatile int32_t x555 = INT32_MIN;
int64_t x556 = -1LL;
int16_t x561 = INT16_MIN;
uint16_t x563 = 12U;
int32_t x564 = INT32_MAX;
int32_t t140 = 1580;
int64_t x572 = -2950LL;
uint32_t x576 = UINT32_MAX;
int64_t x581 = INT64_MAX;
uint16_t x582 = 6515U;
int16_t x583 = -8711;
int8_t x586 = INT8_MIN;
static volatile int16_t x589 = INT16_MAX;
int32_t x593 = INT32_MAX;
int32_t x596 = INT32_MIN;
uint32_t x597 = 544U;
static volatile int32_t x599 = INT32_MIN;
int8_t x600 = -1;
int32_t t150 = -1415;
volatile int32_t x605 = INT32_MIN;
int16_t x612 = INT16_MIN;
int64_t x616 = -969LL;
int32_t t153 = 111;
int64_t x627 = -2343936LL;
int16_t x632 = 1;
volatile uint64_t x633 = UINT64_MAX;
volatile int64_t x634 = -1311894404083LL;
volatile int32_t t159 = -879209336;
int16_t x646 = -1;
static int8_t x654 = -3;
int8_t x658 = 8;
int32_t t166 = 16;
uint16_t x669 = UINT16_MAX;
int64_t x674 = -1LL;
volatile int32_t t169 = 3;
static int16_t x687 = INT16_MIN;
volatile int32_t t171 = 3826035;
int8_t x696 = 26;
static int8_t x700 = -1;
int32_t t175 = 189101;
volatile int8_t x705 = INT8_MIN;
int64_t x712 = -77679254039409LL;
static volatile int16_t x719 = INT16_MIN;
int8_t x720 = INT8_MIN;
volatile int32_t t179 = 27609871;
int8_t x730 = 0;
int64_t x734 = -204183LL;
int32_t t183 = -1131;
volatile uint32_t x738 = 6025U;
static uint32_t x741 = 29U;
static volatile uint16_t x742 = 481U;
int32_t x744 = 42089778;
static volatile int32_t t186 = -380053;
volatile int16_t x751 = INT16_MIN;
static int32_t t188 = -1009;
uint8_t x759 = UINT8_MAX;
int64_t x760 = INT64_MAX;
uint8_t x781 = UINT8_MAX;
uint8_t x783 = UINT8_MAX;
int32_t x789 = 1225;
uint64_t x796 = 52313607LLU;


void f0(void) {
    	int64_t x1 = INT64_MIN;
	int32_t x2 = INT32_MIN;
	static volatile uint16_t x3 = 8343U;
	volatile uint64_t x4 = UINT64_MAX;
	static volatile int32_t t0 = -185;

    t0 = (((x1^x2)&x3)!=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x5 = -7;
	uint16_t x6 = UINT16_MAX;
	int16_t x7 = 81;
	static volatile uint16_t x8 = 27U;
	int32_t t1 = 0;

    t1 = (((x5^x6)&x7)!=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x9 = INT64_MIN;
	int8_t x11 = INT8_MIN;
	int32_t x12 = -1;
	volatile int32_t t2 = 380582671;

    t2 = (((x9^x10)&x11)!=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x15 = UINT32_MAX;
	int16_t x16 = 1246;

    t3 = (((x13^x14)&x15)!=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x17 = INT8_MIN;
	int16_t x20 = INT16_MIN;
	volatile int32_t t4 = -33160167;

    t4 = (((x17^x18)&x19)!=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = -1;
	uint32_t x23 = UINT32_MAX;
	int32_t x24 = -6;
	int32_t t5 = 7;

    t5 = (((x21^x22)&x23)!=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x26 = -6;
	int32_t x27 = 32212;
	static int16_t x28 = INT16_MAX;
	volatile int32_t t6 = -49642575;

    t6 = (((x25^x26)&x27)!=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x30 = INT32_MAX;
	int16_t x31 = INT16_MIN;
	int32_t x32 = INT32_MIN;

    t7 = (((x29^x30)&x31)!=x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x33 = INT16_MIN;
	int32_t x34 = 741;
	static uint16_t x35 = 0U;
	static int32_t t8 = -3195000;

    t8 = (((x33^x34)&x35)!=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint16_t x37 = 25816U;
	int64_t x38 = -15381718307023042LL;
	static uint16_t x39 = 4289U;
	int64_t x40 = INT64_MIN;
	int32_t t9 = -10357938;

    t9 = (((x37^x38)&x39)!=x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = INT8_MIN;
	int64_t x44 = INT64_MAX;
	volatile int32_t t10 = -31;

    t10 = (((x41^x42)&x43)!=x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = -1;
	int32_t x46 = INT32_MAX;
	uint32_t x47 = 75508542U;
	static uint8_t x48 = UINT8_MAX;
	volatile int32_t t11 = -33616135;

    t11 = (((x45^x46)&x47)!=x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x50 = -1;
	int64_t x51 = INT64_MIN;
	int16_t x52 = INT16_MIN;
	static int32_t t12 = 184;

    t12 = (((x49^x50)&x51)!=x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x53 = -789305LL;
	static volatile uint8_t x54 = 6U;
	uint32_t x55 = UINT32_MAX;
	int64_t x56 = -1LL;
	int32_t t13 = -994;

    t13 = (((x53^x54)&x55)!=x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = -1LL;
	int16_t x58 = INT16_MAX;
	int16_t x59 = -1019;
	uint16_t x60 = 670U;

    t14 = (((x57^x58)&x59)!=x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x61 = INT32_MIN;
	volatile uint64_t x62 = 7710662442351691835LLU;
	uint32_t x63 = 14097U;
	int64_t x64 = -15770LL;
	static int32_t t15 = -9;

    t15 = (((x61^x62)&x63)!=x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile int32_t x66 = -1;
	static int8_t x67 = INT8_MIN;
	volatile int16_t x68 = INT16_MIN;

    t16 = (((x65^x66)&x67)!=x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = -1;
	uint32_t x70 = UINT32_MAX;
	volatile int16_t x71 = INT16_MAX;
	int32_t t17 = -791;

    t17 = (((x69^x70)&x71)!=x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static int64_t x73 = -1LL;
	int64_t x74 = -1LL;
	int32_t x75 = INT32_MAX;
	int32_t t18 = -92943041;

    t18 = (((x73^x74)&x75)!=x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = INT64_MAX;
	volatile int64_t x78 = -1LL;
	static int32_t x79 = 6827;
	static volatile int32_t t19 = 62094;

    t19 = (((x77^x78)&x79)!=x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int16_t x82 = -14;
	static int32_t x83 = INT32_MIN;
	int16_t x84 = INT16_MIN;

    t20 = (((x81^x82)&x83)!=x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = 1628700694111LL;
	uint32_t x86 = 1153U;
	uint8_t x87 = 0U;
	int32_t x88 = 0;

    t21 = (((x85^x86)&x87)!=x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = INT8_MIN;
	int16_t x90 = INT16_MIN;
	int16_t x91 = INT16_MIN;
	volatile int32_t t22 = 253770;

    t22 = (((x89^x90)&x91)!=x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint8_t x93 = UINT8_MAX;
	volatile uint16_t x94 = 5U;
	static int8_t x95 = 0;
	uint32_t x96 = UINT32_MAX;
	static int32_t t23 = -16572377;

    t23 = (((x93^x94)&x95)!=x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x97 = 43351;
	volatile int64_t x98 = INT64_MIN;
	uint32_t x100 = UINT32_MAX;
	int32_t t24 = -19920;

    t24 = (((x97^x98)&x99)!=x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x101 = 76U;
	int16_t x103 = INT16_MAX;
	static volatile int64_t x104 = -1LL;
	static volatile int32_t t25 = 7309;

    t25 = (((x101^x102)&x103)!=x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x105 = INT16_MIN;
	uint8_t x106 = 2U;
	uint8_t x107 = UINT8_MAX;
	static volatile int32_t t26 = 130152;

    t26 = (((x105^x106)&x107)!=x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x109 = -1;
	int64_t x110 = INT64_MIN;
	volatile uint16_t x111 = UINT16_MAX;
	static int16_t x112 = -113;
	int32_t t27 = 27;

    t27 = (((x109^x110)&x111)!=x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = -17568410094302LL;
	static volatile int8_t x114 = INT8_MIN;
	int8_t x115 = INT8_MIN;
	static uint16_t x116 = 12U;

    t28 = (((x113^x114)&x115)!=x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int32_t x118 = INT32_MAX;
	int64_t x119 = INT64_MAX;
	int16_t x120 = INT16_MIN;
	int32_t t29 = 93;

    t29 = (((x117^x118)&x119)!=x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x121 = -1;
	int32_t x122 = INT32_MAX;
	int16_t x123 = INT16_MAX;
	static volatile int32_t t30 = 58075460;

    t30 = (((x121^x122)&x123)!=x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = -1;
	int32_t x126 = INT32_MIN;
	static int32_t x127 = -5242610;
	uint32_t x128 = 55693417U;
	volatile int32_t t31 = 0;

    t31 = (((x125^x126)&x127)!=x128);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static int32_t x129 = INT32_MAX;
	volatile uint8_t x130 = 69U;
	static int16_t x131 = INT16_MAX;
	volatile int8_t x132 = -1;
	int32_t t32 = 41867068;

    t32 = (((x129^x130)&x131)!=x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x133 = UINT8_MAX;
	int32_t x134 = -133554140;
	int16_t x135 = 1;
	uint64_t x136 = 547289217973967775LLU;
	volatile int32_t t33 = 58433;

    t33 = (((x133^x134)&x135)!=x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint8_t x138 = 0U;
	static volatile int32_t x140 = INT32_MIN;
	volatile int32_t t34 = -78958332;

    t34 = (((x137^x138)&x139)!=x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x141 = UINT16_MAX;
	int8_t x142 = INT8_MIN;
	int8_t x143 = -1;
	volatile uint16_t x144 = 3375U;
	static int32_t t35 = 5200461;

    t35 = (((x141^x142)&x143)!=x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x145 = INT64_MIN;
	uint64_t x146 = UINT64_MAX;
	static uint8_t x148 = 24U;

    t36 = (((x145^x146)&x147)!=x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x150 = 0U;
	int16_t x151 = -1;
	int32_t x152 = INT32_MIN;
	volatile int32_t t37 = 84422389;

    t37 = (((x149^x150)&x151)!=x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static int64_t x156 = INT64_MIN;
	volatile int32_t t38 = 126396794;

    t38 = (((x153^x154)&x155)!=x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile int64_t x160 = INT64_MAX;

    t39 = (((x157^x158)&x159)!=x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x161 = INT8_MIN;
	int16_t x162 = -1;
	volatile int32_t x163 = INT32_MIN;
	int64_t x164 = INT64_MIN;
	int32_t t40 = 623;

    t40 = (((x161^x162)&x163)!=x164);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = -2512462799196LL;
	int8_t x166 = INT8_MIN;
	uint64_t x167 = UINT64_MAX;
	static uint32_t x168 = 27452764U;
	int32_t t41 = 11;

    t41 = (((x165^x166)&x167)!=x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x169 = 462U;
	int8_t x170 = INT8_MIN;
	int32_t x171 = 1;
	volatile int8_t x172 = -60;
	static volatile int32_t t42 = -131;

    t42 = (((x169^x170)&x171)!=x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x173 = INT8_MIN;
	uint32_t x174 = 3569U;
	int16_t x175 = INT16_MAX;
	int32_t t43 = 520405323;

    t43 = (((x173^x174)&x175)!=x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x177 = 0;
	int32_t x179 = INT32_MIN;
	uint16_t x180 = 3151U;

    t44 = (((x177^x178)&x179)!=x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x181 = -524112;
	static int8_t x182 = INT8_MAX;
	static int32_t x183 = INT32_MIN;
	int8_t x184 = INT8_MIN;
	static int32_t t45 = 6907212;

    t45 = (((x181^x182)&x183)!=x184);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x186 = -255531828910399LL;
	int16_t x187 = -696;
	static int8_t x188 = -1;
	static volatile int32_t t46 = 716779432;

    t46 = (((x185^x186)&x187)!=x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x189 = 22711038LL;
	int8_t x190 = INT8_MAX;
	uint16_t x191 = 1U;
	volatile int32_t x192 = 1;

    t47 = (((x189^x190)&x191)!=x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int16_t x193 = INT16_MIN;
	static volatile int64_t x194 = INT64_MAX;
	int32_t x195 = -1;
	volatile int16_t x196 = -246;
	int32_t t48 = 16792;

    t48 = (((x193^x194)&x195)!=x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x197 = 5U;
	int64_t x198 = INT64_MAX;
	static volatile int64_t x200 = INT64_MIN;
	int32_t t49 = -2043132;

    t49 = (((x197^x198)&x199)!=x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x201 = INT8_MIN;
	uint64_t x203 = 509LLU;
	int8_t x204 = INT8_MIN;
	int32_t t50 = -70544709;

    t50 = (((x201^x202)&x203)!=x204);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x205 = UINT32_MAX;
	int64_t x206 = -882LL;
	static int64_t x207 = -167260173219LL;
	int32_t t51 = 360953451;

    t51 = (((x205^x206)&x207)!=x208);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x210 = -1LL;
	int64_t x211 = INT64_MIN;
	int32_t t52 = -117838;

    t52 = (((x209^x210)&x211)!=x212);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x213 = 2480155654141275376LL;
	uint64_t x214 = UINT64_MAX;
	uint64_t x215 = 4LLU;
	static int64_t x216 = 0LL;

    t53 = (((x213^x214)&x215)!=x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x218 = -1;
	volatile uint16_t x219 = UINT16_MAX;
	int16_t x220 = INT16_MAX;
	int32_t t54 = -524651457;

    t54 = (((x217^x218)&x219)!=x220);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x221 = INT8_MAX;
	volatile int32_t t55 = 259;

    t55 = (((x221^x222)&x223)!=x224);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x225 = 4U;
	int64_t x226 = -28126571634097677LL;
	uint32_t x227 = 396U;
	volatile int32_t t56 = -2026360;

    t56 = (((x225^x226)&x227)!=x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x230 = UINT8_MAX;
	volatile uint8_t x231 = 19U;
	int16_t x232 = INT16_MIN;

    t57 = (((x229^x230)&x231)!=x232);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x233 = 3;
	int16_t x235 = -1;
	int32_t t58 = -221143;

    t58 = (((x233^x234)&x235)!=x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x237 = INT8_MIN;
	volatile uint64_t x238 = UINT64_MAX;
	int64_t x239 = -1LL;

    t59 = (((x237^x238)&x239)!=x240);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint16_t x241 = 19U;
	uint16_t x242 = 6451U;
	volatile int32_t x244 = 1206;
	volatile int32_t t60 = -219547341;

    t60 = (((x241^x242)&x243)!=x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x246 = INT32_MIN;
	static uint32_t x247 = UINT32_MAX;
	uint16_t x248 = 47U;
	int32_t t61 = 644;

    t61 = (((x245^x246)&x247)!=x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x250 = INT64_MIN;
	int16_t x251 = -1;
	static int32_t t62 = 2951726;

    t62 = (((x249^x250)&x251)!=x252);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x253 = 523352;
	uint8_t x254 = 3U;
	int64_t x255 = INT64_MAX;
	int64_t x256 = -1LL;

    t63 = (((x253^x254)&x255)!=x256);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x257 = 1U;
	int8_t x258 = INT8_MIN;
	int32_t x259 = -27189;
	static int32_t x260 = -517091172;

    t64 = (((x257^x258)&x259)!=x260);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int16_t x261 = INT16_MAX;
	int64_t x262 = 25101LL;
	static uint16_t x263 = 4077U;
	static int64_t x264 = -1LL;
	volatile int32_t t65 = -509847;

    t65 = (((x261^x262)&x263)!=x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x265 = UINT16_MAX;
	int32_t x266 = INT32_MAX;
	static volatile int64_t x267 = INT64_MAX;
	uint32_t x268 = UINT32_MAX;
	static int32_t t66 = 241592;

    t66 = (((x265^x266)&x267)!=x268);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x271 = 13U;
	uint64_t x272 = UINT64_MAX;
	volatile int32_t t67 = 739143;

    t67 = (((x269^x270)&x271)!=x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x273 = INT16_MIN;
	uint32_t x275 = UINT32_MAX;
	static uint8_t x276 = 2U;
	volatile int32_t t68 = -3;

    t68 = (((x273^x274)&x275)!=x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile uint16_t x277 = 1034U;
	uint16_t x278 = 13699U;
	int32_t t69 = 177633;

    t69 = (((x277^x278)&x279)!=x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int64_t x281 = 8128740566308LL;
	int64_t x282 = 92603481397LL;
	uint64_t x283 = UINT64_MAX;
	static int8_t x284 = 4;
	int32_t t70 = -1;

    t70 = (((x281^x282)&x283)!=x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint8_t x287 = 4U;
	static uint16_t x288 = 2U;
	int32_t t71 = 11;

    t71 = (((x285^x286)&x287)!=x288);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint8_t x289 = 20U;
	uint16_t x290 = 4U;
	uint32_t x292 = 1U;

    t72 = (((x289^x290)&x291)!=x292);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x293 = UINT8_MAX;
	static uint32_t x294 = UINT32_MAX;
	uint8_t x295 = 56U;
	int64_t x296 = INT64_MIN;
	int32_t t73 = -405346571;

    t73 = (((x293^x294)&x295)!=x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x297 = UINT64_MAX;
	uint64_t x299 = UINT64_MAX;
	uint64_t x300 = 356461533758LLU;
	static volatile int32_t t74 = -3537;

    t74 = (((x297^x298)&x299)!=x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int8_t x301 = -1;
	int16_t x302 = -3;
	int64_t x304 = INT64_MIN;
	volatile int32_t t75 = 127449;

    t75 = (((x301^x302)&x303)!=x304);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x305 = INT8_MIN;
	uint32_t x306 = 11418U;
	int8_t x307 = 31;
	int16_t x308 = INT16_MAX;
	volatile int32_t t76 = 4981;

    t76 = (((x305^x306)&x307)!=x308);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile int8_t x309 = INT8_MIN;
	int8_t x310 = -1;
	int16_t x311 = INT16_MIN;
	static int64_t x312 = INT64_MIN;

    t77 = (((x309^x310)&x311)!=x312);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x313 = INT32_MIN;
	uint16_t x315 = 6U;
	int16_t x316 = INT16_MAX;
	int32_t t78 = 124572405;

    t78 = (((x313^x314)&x315)!=x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x317 = INT16_MIN;
	int16_t x318 = -12930;
	int8_t x319 = -31;
	volatile int32_t t79 = 1;

    t79 = (((x317^x318)&x319)!=x320);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x321 = UINT16_MAX;
	int16_t x322 = 9884;
	volatile int32_t x324 = INT32_MAX;

    t80 = (((x321^x322)&x323)!=x324);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x325 = 1316449892764213797LLU;
	uint32_t x326 = 0U;
	static int64_t x327 = INT64_MAX;
	int32_t t81 = -5962;

    t81 = (((x325^x326)&x327)!=x328);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x330 = -1;
	uint8_t x331 = 0U;
	int32_t x332 = INT32_MAX;
	int32_t t82 = -80542;

    t82 = (((x329^x330)&x331)!=x332);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x333 = INT64_MIN;
	int64_t x334 = INT64_MIN;
	int64_t x335 = -1LL;
	uint16_t x336 = 0U;
	volatile int32_t t83 = 59656887;

    t83 = (((x333^x334)&x335)!=x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x337 = INT8_MAX;
	static int16_t x338 = 2;
	int64_t x339 = INT64_MIN;
	int8_t x340 = INT8_MAX;
	int32_t t84 = 37585884;

    t84 = (((x337^x338)&x339)!=x340);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int8_t x341 = INT8_MIN;
	int8_t x343 = -36;
	volatile int32_t t85 = 735;

    t85 = (((x341^x342)&x343)!=x344);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint64_t x345 = 1959891991444342LLU;
	int64_t x346 = INT64_MIN;
	volatile int64_t x347 = INT64_MIN;
	volatile uint8_t x348 = 0U;
	static int32_t t86 = -1;

    t86 = (((x345^x346)&x347)!=x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile int32_t x349 = INT32_MIN;
	int32_t x350 = -1;
	volatile int16_t x351 = -1;
	int64_t x352 = -54602733LL;
	volatile int32_t t87 = -26;

    t87 = (((x349^x350)&x351)!=x352);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x353 = INT16_MIN;
	static int16_t x355 = -1;
	uint8_t x356 = 1U;
	volatile int32_t t88 = 580272;

    t88 = (((x353^x354)&x355)!=x356);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint32_t x357 = 125856U;
	int64_t x359 = INT64_MIN;
	volatile uint16_t x360 = 3563U;
	volatile int32_t t89 = 12950;

    t89 = (((x357^x358)&x359)!=x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x361 = -1;
	uint8_t x362 = 1U;
	int32_t x363 = 546;
	uint16_t x364 = UINT16_MAX;
	volatile int32_t t90 = -1215841;

    t90 = (((x361^x362)&x363)!=x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int64_t x365 = -1LL;
	static int64_t x367 = -1LL;
	uint16_t x368 = UINT16_MAX;
	volatile int32_t t91 = 177;

    t91 = (((x365^x366)&x367)!=x368);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x370 = -1;
	static int8_t x371 = -1;
	volatile int32_t t92 = -260;

    t92 = (((x369^x370)&x371)!=x372);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x373 = INT64_MAX;
	static volatile int32_t x374 = -124;
	int8_t x376 = INT8_MAX;

    t93 = (((x373^x374)&x375)!=x376);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x377 = 2884316405306624764LL;
	volatile int64_t x378 = INT64_MAX;
	uint16_t x379 = UINT16_MAX;
	int32_t t94 = -199;

    t94 = (((x377^x378)&x379)!=x380);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int32_t x381 = 262173261;
	int32_t x382 = -1;
	static uint32_t x383 = 1247399U;
	uint16_t x384 = 9U;
	static int32_t t95 = -204491382;

    t95 = (((x381^x382)&x383)!=x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x385 = -115595285680LL;
	volatile int8_t x386 = 14;
	uint8_t x387 = 14U;
	static volatile int8_t x388 = INT8_MIN;
	volatile int32_t t96 = -1;

    t96 = (((x385^x386)&x387)!=x388);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint32_t x389 = 883647881U;
	int32_t x390 = INT32_MAX;
	int16_t x391 = INT16_MIN;
	int32_t t97 = -15563006;

    t97 = (((x389^x390)&x391)!=x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint8_t x393 = 0U;
	int16_t x394 = INT16_MAX;
	int16_t x395 = 1;
	int64_t x396 = -2983041015LL;
	static volatile int32_t t98 = 138;

    t98 = (((x393^x394)&x395)!=x396);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x398 = UINT32_MAX;
	uint32_t x399 = 6636891U;
	static volatile int64_t x400 = INT64_MAX;
	volatile int32_t t99 = -18869324;

    t99 = (((x397^x398)&x399)!=x400);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x402 = 0U;
	static uint32_t x404 = UINT32_MAX;
	int32_t t100 = -636798394;

    t100 = (((x401^x402)&x403)!=x404);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x405 = -1;
	uint8_t x406 = UINT8_MAX;
	int64_t x408 = INT64_MAX;

    t101 = (((x405^x406)&x407)!=x408);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x410 = 8U;
	int64_t x411 = INT64_MIN;
	static uint64_t x412 = 26127217807550LLU;

    t102 = (((x409^x410)&x411)!=x412);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x413 = INT32_MIN;
	int32_t x414 = 6;
	uint8_t x415 = 53U;
	int8_t x416 = -1;
	volatile int32_t t103 = 106199790;

    t103 = (((x413^x414)&x415)!=x416);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x417 = UINT16_MAX;
	int32_t x418 = -3550102;
	int8_t x420 = INT8_MIN;
	static volatile int32_t t104 = -46;

    t104 = (((x417^x418)&x419)!=x420);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x422 = UINT32_MAX;
	int16_t x423 = INT16_MAX;
	static volatile int32_t t105 = -404292;

    t105 = (((x421^x422)&x423)!=x424);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x425 = -3;
	static int64_t x427 = INT64_MIN;
	static uint64_t x428 = 903527126LLU;
	volatile int32_t t106 = -2035;

    t106 = (((x425^x426)&x427)!=x428);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint64_t x429 = 43LLU;
	uint16_t x430 = 7204U;
	int64_t x431 = -1LL;
	volatile int32_t t107 = -1525;

    t107 = (((x429^x430)&x431)!=x432);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int16_t x434 = 729;
	volatile uint32_t x436 = 14U;
	int32_t t108 = 5178847;

    t108 = (((x433^x434)&x435)!=x436);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x437 = -8245536884573741LL;
	int8_t x438 = 0;
	int32_t t109 = 4145885;

    t109 = (((x437^x438)&x439)!=x440);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x441 = 584U;
	volatile int16_t x442 = 1756;
	int64_t x443 = -1LL;
	int16_t x444 = -1;

    t110 = (((x441^x442)&x443)!=x444);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int32_t x446 = INT32_MIN;
	uint64_t x447 = UINT64_MAX;
	static int32_t x448 = -1;
	int32_t t111 = 1512828;

    t111 = (((x445^x446)&x447)!=x448);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x449 = INT32_MIN;
	volatile int64_t x450 = INT64_MAX;
	static int64_t x452 = INT64_MIN;
	static int32_t t112 = 20;

    t112 = (((x449^x450)&x451)!=x452);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x453 = -10;
	static int32_t x454 = INT32_MAX;
	int16_t x455 = INT16_MIN;
	uint64_t x456 = UINT64_MAX;
	int32_t t113 = 115;

    t113 = (((x453^x454)&x455)!=x456);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x457 = INT16_MIN;
	uint8_t x458 = UINT8_MAX;
	static uint32_t x459 = 7783064U;
	int8_t x460 = -1;
	volatile int32_t t114 = 1718;

    t114 = (((x457^x458)&x459)!=x460);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x461 = 0;
	volatile int16_t x463 = 7706;
	uint64_t x464 = UINT64_MAX;

    t115 = (((x461^x462)&x463)!=x464);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x465 = -1;
	int8_t x466 = 53;
	int16_t x467 = INT16_MIN;
	int16_t x468 = -1;
	int32_t t116 = -15612633;

    t116 = (((x465^x466)&x467)!=x468);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x469 = 1U;
	int16_t x471 = -1;
	int32_t t117 = -105;

    t117 = (((x469^x470)&x471)!=x472);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x474 = INT8_MIN;
	static volatile int8_t x475 = 0;
	int64_t x476 = -222400LL;
	volatile int32_t t118 = -68422516;

    t118 = (((x473^x474)&x475)!=x476);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x478 = INT32_MAX;
	int32_t x479 = INT32_MIN;
	int8_t x480 = INT8_MIN;
	int32_t t119 = -634;

    t119 = (((x477^x478)&x479)!=x480);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int64_t x481 = INT64_MIN;
	static int32_t x482 = -50803;
	int64_t x483 = INT64_MIN;
	int8_t x484 = INT8_MIN;
	int32_t t120 = -27;

    t120 = (((x481^x482)&x483)!=x484);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x485 = 907U;
	int16_t x486 = INT16_MIN;
	uint16_t x487 = 32U;
	int64_t x488 = INT64_MAX;

    t121 = (((x485^x486)&x487)!=x488);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x489 = INT8_MIN;
	uint32_t x490 = UINT32_MAX;
	int8_t x492 = INT8_MAX;

    t122 = (((x489^x490)&x491)!=x492);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x493 = 9217246;
	int32_t x495 = INT32_MIN;
	uint16_t x496 = UINT16_MAX;
	volatile int32_t t123 = -750;

    t123 = (((x493^x494)&x495)!=x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x498 = 0;
	static int8_t x499 = 0;
	int64_t x500 = 356040874907353LL;
	static int32_t t124 = -116234875;

    t124 = (((x497^x498)&x499)!=x500);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x501 = -6015100535LL;
	int32_t x502 = INT32_MAX;
	int64_t x503 = INT64_MAX;
	int32_t t125 = 328;

    t125 = (((x501^x502)&x503)!=x504);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x505 = INT64_MIN;
	uint64_t x506 = 245428431579LLU;
	int32_t x508 = -12;
	int32_t t126 = 108;

    t126 = (((x505^x506)&x507)!=x508);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x510 = -1;
	int16_t x511 = INT16_MAX;
	volatile int16_t x512 = 1;

    t127 = (((x509^x510)&x511)!=x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x516 = 6255291920738LLU;
	volatile int32_t t128 = -57198;

    t128 = (((x513^x514)&x515)!=x516);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint32_t x518 = UINT32_MAX;
	uint64_t x519 = UINT64_MAX;
	int16_t x520 = -1;
	int32_t t129 = 123086286;

    t129 = (((x517^x518)&x519)!=x520);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x521 = INT32_MAX;
	int32_t x522 = INT32_MIN;
	uint32_t x523 = UINT32_MAX;
	volatile int32_t t130 = 3867215;

    t130 = (((x521^x522)&x523)!=x524);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x526 = -6;
	static volatile uint64_t x527 = 87438344479LLU;
	uint8_t x528 = 21U;
	static int32_t t131 = -3373683;

    t131 = (((x525^x526)&x527)!=x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x530 = 14359U;
	static uint8_t x531 = UINT8_MAX;
	int8_t x532 = INT8_MAX;

    t132 = (((x529^x530)&x531)!=x532);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x533 = INT64_MIN;
	int64_t x535 = -116994LL;
	static volatile uint32_t x536 = 1U;
	int32_t t133 = -9160;

    t133 = (((x533^x534)&x535)!=x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint8_t x537 = 5U;
	volatile uint64_t x538 = UINT64_MAX;
	uint8_t x539 = UINT8_MAX;
	static int64_t x540 = -1LL;
	int32_t t134 = 1923257;

    t134 = (((x537^x538)&x539)!=x540);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint8_t x541 = UINT8_MAX;
	volatile int32_t x542 = INT32_MIN;
	int64_t x543 = INT64_MAX;
	uint64_t x544 = 58335LLU;

    t135 = (((x541^x542)&x543)!=x544);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x545 = 50;
	static int32_t x546 = -18;
	int8_t x547 = INT8_MIN;
	static int8_t x548 = -1;
	static volatile int32_t t136 = -109;

    t136 = (((x545^x546)&x547)!=x548);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint32_t x549 = 113U;
	int16_t x550 = -1;
	int16_t x551 = INT16_MIN;
	static int64_t x552 = -1LL;

    t137 = (((x549^x550)&x551)!=x552);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x554 = INT8_MAX;
	int32_t t138 = -46244758;

    t138 = (((x553^x554)&x555)!=x556);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x557 = INT8_MIN;
	int16_t x558 = INT16_MAX;
	int16_t x559 = INT16_MIN;
	int64_t x560 = INT64_MIN;
	volatile int32_t t139 = -119153;

    t139 = (((x557^x558)&x559)!=x560);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x562 = 1800965772478905LL;

    t140 = (((x561^x562)&x563)!=x564);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x565 = INT8_MIN;
	uint32_t x566 = UINT32_MAX;
	int16_t x567 = 11;
	int8_t x568 = INT8_MIN;
	int32_t t141 = -3689198;

    t141 = (((x565^x566)&x567)!=x568);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x569 = -38062996630LL;
	int64_t x570 = INT64_MIN;
	int64_t x571 = 103947LL;
	volatile int32_t t142 = -3;

    t142 = (((x569^x570)&x571)!=x572);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint16_t x573 = 17U;
	int64_t x574 = INT64_MAX;
	int64_t x575 = INT64_MIN;
	volatile int32_t t143 = -89783323;

    t143 = (((x573^x574)&x575)!=x576);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int32_t x577 = -438;
	volatile int64_t x578 = INT64_MIN;
	int32_t x579 = 4;
	int32_t x580 = -4692;
	volatile int32_t t144 = 744076258;

    t144 = (((x577^x578)&x579)!=x580);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x584 = 1;
	volatile int32_t t145 = -19;

    t145 = (((x581^x582)&x583)!=x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = INT16_MIN;
	static volatile int16_t x587 = 7892;
	static volatile int8_t x588 = -1;
	int32_t t146 = -446111;

    t146 = (((x585^x586)&x587)!=x588);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint16_t x590 = 4U;
	int8_t x591 = INT8_MAX;
	int8_t x592 = 54;
	volatile int32_t t147 = -2634;

    t147 = (((x589^x590)&x591)!=x592);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint16_t x594 = UINT16_MAX;
	static volatile int16_t x595 = -6640;
	volatile int32_t t148 = 18104611;

    t148 = (((x593^x594)&x595)!=x596);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int8_t x598 = INT8_MAX;
	int32_t t149 = 196538921;

    t149 = (((x597^x598)&x599)!=x600);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x601 = -1LL;
	uint8_t x602 = 23U;
	int16_t x603 = -1;
	uint32_t x604 = UINT32_MAX;

    t150 = (((x601^x602)&x603)!=x604);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x606 = INT8_MAX;
	uint64_t x607 = 7819324638LLU;
	int32_t x608 = INT32_MIN;
	int32_t t151 = 48895845;

    t151 = (((x605^x606)&x607)!=x608);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x609 = INT32_MIN;
	int8_t x610 = -1;
	static uint8_t x611 = UINT8_MAX;
	int32_t t152 = -13874;

    t152 = (((x609^x610)&x611)!=x612);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x613 = INT8_MIN;
	int64_t x614 = 36LL;
	volatile int32_t x615 = INT32_MAX;

    t153 = (((x613^x614)&x615)!=x616);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x617 = INT64_MIN;
	int16_t x618 = INT16_MIN;
	uint16_t x619 = UINT16_MAX;
	int16_t x620 = INT16_MIN;
	volatile int32_t t154 = -6;

    t154 = (((x617^x618)&x619)!=x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int16_t x621 = INT16_MAX;
	int64_t x622 = INT64_MAX;
	static int32_t x623 = -3;
	int8_t x624 = -1;
	int32_t t155 = 90720681;

    t155 = (((x621^x622)&x623)!=x624);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile int16_t x625 = INT16_MAX;
	volatile uint64_t x626 = 246468LLU;
	static int64_t x628 = -1LL;
	volatile int32_t t156 = -242105;

    t156 = (((x625^x626)&x627)!=x628);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x629 = 5U;
	volatile int32_t x630 = -1;
	volatile int64_t x631 = -1LL;
	static volatile int32_t t157 = 393655505;

    t157 = (((x629^x630)&x631)!=x632);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x635 = 30212464959LLU;
	int8_t x636 = 18;
	static volatile int32_t t158 = -1;

    t158 = (((x633^x634)&x635)!=x636);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x637 = 3U;
	int64_t x638 = -26LL;
	static uint16_t x639 = UINT16_MAX;
	int64_t x640 = INT64_MIN;

    t159 = (((x637^x638)&x639)!=x640);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile uint64_t x641 = 226983389788LLU;
	int8_t x642 = 56;
	int64_t x643 = -6LL;
	int32_t x644 = INT32_MIN;
	volatile int32_t t160 = 6068;

    t160 = (((x641^x642)&x643)!=x644);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x645 = INT32_MAX;
	volatile int64_t x647 = INT64_MIN;
	int64_t x648 = INT64_MIN;
	static int32_t t161 = 389496;

    t161 = (((x645^x646)&x647)!=x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static int64_t x649 = -1LL;
	uint64_t x650 = UINT64_MAX;
	int16_t x651 = -1;
	uint64_t x652 = UINT64_MAX;
	volatile int32_t t162 = -461203112;

    t162 = (((x649^x650)&x651)!=x652);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x653 = 514U;
	volatile int32_t x655 = INT32_MIN;
	int8_t x656 = INT8_MIN;
	int32_t t163 = 102470161;

    t163 = (((x653^x654)&x655)!=x656);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint8_t x657 = 41U;
	uint64_t x659 = 1349287LLU;
	volatile int64_t x660 = -6LL;
	volatile int32_t t164 = -380;

    t164 = (((x657^x658)&x659)!=x660);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x661 = INT8_MIN;
	volatile uint64_t x662 = 151LLU;
	int64_t x663 = -1734814113LL;
	uint64_t x664 = 9772388526872260LLU;
	static int32_t t165 = -46;

    t165 = (((x661^x662)&x663)!=x664);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x665 = 0U;
	volatile int32_t x666 = 108969;
	static int32_t x667 = INT32_MIN;
	int16_t x668 = INT16_MAX;

    t166 = (((x665^x666)&x667)!=x668);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int8_t x670 = INT8_MIN;
	uint8_t x671 = UINT8_MAX;
	static int32_t x672 = INT32_MAX;
	int32_t t167 = -14847;

    t167 = (((x669^x670)&x671)!=x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int64_t x673 = INT64_MIN;
	uint16_t x675 = UINT16_MAX;
	static volatile uint16_t x676 = 97U;
	volatile int32_t t168 = 4;

    t168 = (((x673^x674)&x675)!=x676);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x677 = INT8_MIN;
	static volatile int16_t x678 = -1;
	static uint8_t x679 = UINT8_MAX;
	uint64_t x680 = UINT64_MAX;

    t169 = (((x677^x678)&x679)!=x680);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static int32_t x681 = -22;
	static volatile int8_t x682 = 0;
	static uint32_t x683 = 6707884U;
	static int32_t x684 = INT32_MIN;
	volatile int32_t t170 = -88957;

    t170 = (((x681^x682)&x683)!=x684);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x685 = 43U;
	int16_t x686 = -6860;
	volatile int64_t x688 = 1LL;

    t171 = (((x685^x686)&x687)!=x688);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint32_t x689 = 367281387U;
	volatile uint8_t x690 = 12U;
	int16_t x691 = INT16_MIN;
	volatile int32_t x692 = INT32_MIN;
	static volatile int32_t t172 = -17909;

    t172 = (((x689^x690)&x691)!=x692);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint16_t x693 = 2U;
	int32_t x694 = INT32_MIN;
	int8_t x695 = -1;
	int32_t t173 = -8635835;

    t173 = (((x693^x694)&x695)!=x696);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x697 = -114;
	int16_t x698 = INT16_MIN;
	int16_t x699 = INT16_MAX;
	int32_t t174 = 14427564;

    t174 = (((x697^x698)&x699)!=x700);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile int32_t x701 = -5;
	int8_t x702 = INT8_MAX;
	int64_t x703 = -93627004044480450LL;
	volatile int32_t x704 = INT32_MAX;

    t175 = (((x701^x702)&x703)!=x704);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint8_t x706 = 9U;
	static uint64_t x707 = 20202172897548LLU;
	uint64_t x708 = 32289846125745LLU;
	volatile int32_t t176 = -125;

    t176 = (((x705^x706)&x707)!=x708);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x709 = -1;
	volatile uint64_t x710 = UINT64_MAX;
	uint16_t x711 = 2U;
	volatile int32_t t177 = -95605;

    t177 = (((x709^x710)&x711)!=x712);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x713 = 1U;
	int16_t x714 = -15817;
	static int64_t x715 = INT64_MAX;
	int8_t x716 = -1;
	volatile int32_t t178 = 20866;

    t178 = (((x713^x714)&x715)!=x716);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x717 = INT8_MIN;
	static int8_t x718 = INT8_MIN;

    t179 = (((x717^x718)&x719)!=x720);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x721 = INT8_MIN;
	int16_t x722 = INT16_MIN;
	uint8_t x723 = 1U;
	int32_t x724 = INT32_MIN;
	static int32_t t180 = 11;

    t180 = (((x721^x722)&x723)!=x724);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x725 = -198;
	static int16_t x726 = 408;
	static int8_t x727 = INT8_MIN;
	static volatile int8_t x728 = -1;
	volatile int32_t t181 = -19834;

    t181 = (((x725^x726)&x727)!=x728);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x729 = INT32_MIN;
	uint64_t x731 = 8766955832923LLU;
	volatile uint16_t x732 = UINT16_MAX;
	int32_t t182 = 1;

    t182 = (((x729^x730)&x731)!=x732);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static int64_t x733 = -1LL;
	int64_t x735 = INT64_MIN;
	int64_t x736 = -1LL;

    t183 = (((x733^x734)&x735)!=x736);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile uint32_t x737 = 99U;
	volatile int16_t x739 = -1;
	uint32_t x740 = 217527802U;
	volatile int32_t t184 = 590;

    t184 = (((x737^x738)&x739)!=x740);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x743 = UINT8_MAX;
	static int32_t t185 = -14175409;

    t185 = (((x741^x742)&x743)!=x744);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x745 = -1;
	static volatile int16_t x746 = INT16_MIN;
	static uint32_t x747 = 368U;
	uint8_t x748 = UINT8_MAX;

    t186 = (((x745^x746)&x747)!=x748);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x749 = UINT16_MAX;
	int64_t x750 = -1LL;
	uint16_t x752 = 22281U;
	volatile int32_t t187 = 110808101;

    t187 = (((x749^x750)&x751)!=x752);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint8_t x753 = 60U;
	volatile uint8_t x754 = 30U;
	volatile int16_t x755 = -122;
	int8_t x756 = INT8_MIN;

    t188 = (((x753^x754)&x755)!=x756);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint16_t x757 = UINT16_MAX;
	int8_t x758 = -1;
	int32_t t189 = 15456;

    t189 = (((x757^x758)&x759)!=x760);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x761 = 57U;
	volatile int8_t x762 = INT8_MIN;
	int16_t x763 = -1;
	uint64_t x764 = 1092133995702973369LLU;
	int32_t t190 = -240030;

    t190 = (((x761^x762)&x763)!=x764);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x765 = INT8_MIN;
	int8_t x766 = INT8_MIN;
	uint64_t x767 = UINT64_MAX;
	int32_t x768 = INT32_MIN;
	static volatile int32_t t191 = -7;

    t191 = (((x765^x766)&x767)!=x768);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x769 = INT8_MIN;
	uint64_t x770 = UINT64_MAX;
	int32_t x771 = INT32_MAX;
	volatile int32_t x772 = -1;
	int32_t t192 = 1684439;

    t192 = (((x769^x770)&x771)!=x772);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x773 = 5976;
	uint64_t x774 = 3LLU;
	volatile int32_t x775 = -1;
	int32_t x776 = INT32_MIN;
	int32_t t193 = 7831;

    t193 = (((x773^x774)&x775)!=x776);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x777 = INT64_MIN;
	volatile int64_t x778 = INT64_MAX;
	volatile int32_t x779 = -1;
	volatile int32_t x780 = 1;
	volatile int32_t t194 = -4;

    t194 = (((x777^x778)&x779)!=x780);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x782 = 5506078723088LLU;
	int16_t x784 = INT16_MIN;
	int32_t t195 = 51;

    t195 = (((x781^x782)&x783)!=x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x785 = INT32_MIN;
	int8_t x786 = INT8_MAX;
	uint8_t x787 = 0U;
	int32_t x788 = INT32_MAX;
	volatile int32_t t196 = -2;

    t196 = (((x785^x786)&x787)!=x788);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x790 = UINT64_MAX;
	uint8_t x791 = UINT8_MAX;
	int8_t x792 = INT8_MAX;
	int32_t t197 = 190325;

    t197 = (((x789^x790)&x791)!=x792);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint32_t x793 = UINT32_MAX;
	int32_t x794 = INT32_MIN;
	uint64_t x795 = 3326LLU;
	static volatile int32_t t198 = 88962;

    t198 = (((x793^x794)&x795)!=x796);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x797 = INT8_MIN;
	static int16_t x798 = INT16_MAX;
	int64_t x799 = INT64_MAX;
	int32_t x800 = -27323;
	int32_t t199 = 2041;

    t199 = (((x797^x798)&x799)!=x800);

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

