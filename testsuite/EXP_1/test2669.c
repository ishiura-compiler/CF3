
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

uint16_t x5 = UINT16_MAX;
int8_t x6 = INT8_MIN;
uint64_t x11 = 501864792LLU;
uint16_t x30 = 115U;
int8_t x34 = INT8_MIN;
uint8_t x47 = 2U;
static int32_t x54 = INT32_MIN;
int16_t x55 = 4398;
int32_t t13 = -99307;
uint32_t x73 = 1772557817U;
uint16_t x74 = 25U;
volatile int32_t t18 = 4135;
int32_t x78 = -1;
int16_t x84 = 3669;
static volatile uint8_t x86 = 50U;
uint64_t x87 = 209740941331LLU;
volatile uint16_t x88 = 1U;
static int64_t x91 = INT64_MIN;
volatile int64_t x93 = INT64_MIN;
volatile int32_t t23 = -166117494;
int64_t x98 = INT64_MIN;
int64_t x99 = INT64_MIN;
volatile int32_t t24 = -2418;
static int64_t x105 = INT64_MAX;
int16_t x107 = 0;
volatile int32_t t26 = 136772225;
static int32_t x109 = INT32_MIN;
int32_t t28 = -564035;
static int16_t x117 = INT16_MIN;
static int64_t x119 = INT64_MAX;
int64_t x126 = -5LL;
int32_t t31 = 2501371;
int64_t x141 = -609596091LL;
static volatile int16_t x143 = -3571;
int16_t x146 = 2366;
static int32_t x151 = INT32_MIN;
volatile uint16_t x157 = 16197U;
int16_t x158 = INT16_MAX;
int64_t x165 = INT64_MIN;
static volatile int8_t x170 = -1;
static int8_t x173 = INT8_MAX;
uint8_t x186 = 1U;
static int64_t x193 = INT64_MIN;
int16_t x198 = INT16_MIN;
uint32_t x205 = 496959549U;
volatile uint64_t x208 = UINT64_MAX;
int64_t x210 = 32086LL;
uint32_t x212 = UINT32_MAX;
int32_t x217 = INT32_MIN;
static volatile int64_t x219 = -8517779698613795LL;
static volatile int64_t x221 = INT64_MAX;
int64_t x224 = -1868115788422460LL;
static int8_t x231 = -35;
int32_t t59 = -24;
int16_t x244 = -1008;
int64_t x245 = INT64_MAX;
int32_t t62 = 25;
uint32_t x253 = 1557387126U;
int16_t x254 = -1;
int32_t x260 = INT32_MIN;
uint32_t x265 = UINT32_MAX;
uint8_t x267 = UINT8_MAX;
int32_t x272 = INT32_MIN;
int16_t x282 = INT16_MIN;
uint16_t x288 = 2U;
int16_t x289 = 129;
volatile uint16_t x295 = 237U;
uint64_t x298 = 6631LLU;
int64_t x299 = INT64_MIN;
uint32_t x302 = 31963165U;
volatile uint16_t x308 = UINT16_MAX;
static volatile int32_t t76 = -8463812;
int8_t x311 = -1;
volatile uint16_t x312 = 15U;
int8_t x316 = -1;
static int32_t t79 = -14802;
int32_t x322 = -1;
int64_t x327 = -816500385279LL;
volatile int32_t t81 = 24217;
volatile int8_t x329 = INT8_MIN;
uint64_t x336 = 78707LLU;
volatile int32_t t83 = 752900;
uint32_t x341 = 22U;
static int64_t x342 = 114859086LL;
int32_t t85 = 855121268;
int32_t x345 = -29012;
uint64_t x359 = UINT64_MAX;
int32_t t89 = 63;
int64_t x370 = -1LL;
static uint64_t x372 = 0LLU;
volatile int32_t t93 = 1061;
volatile int64_t x383 = INT64_MIN;
uint16_t x386 = UINT16_MAX;
int64_t x388 = 63243156495186LL;
static uint32_t x394 = UINT32_MAX;
int16_t x395 = INT16_MIN;
volatile int8_t x396 = INT8_MAX;
int32_t x398 = 708;
int16_t x403 = INT16_MIN;
int64_t x404 = 2974704LL;
int64_t x405 = 1541575529529LL;
int32_t t101 = -777;
static uint64_t x432 = 92511461LLU;
volatile int32_t t107 = 1324;
static int16_t x447 = INT16_MIN;
int32_t t111 = 1;
int8_t x452 = -7;
int16_t x456 = INT16_MIN;
uint32_t x460 = 746181U;
volatile int32_t t116 = 158661;
int64_t x471 = -170955834341LL;
static volatile int8_t x472 = INT8_MIN;
uint16_t x476 = 9U;
static int32_t x479 = INT32_MAX;
int64_t x481 = INT64_MIN;
int16_t x483 = INT16_MIN;
int8_t x493 = INT8_MIN;
int8_t x495 = INT8_MIN;
static int32_t t123 = 488614082;
static int64_t x497 = INT64_MIN;
static int8_t x500 = INT8_MIN;
uint16_t x501 = 252U;
int8_t x503 = INT8_MAX;
uint32_t x505 = 348U;
volatile int64_t x506 = INT64_MAX;
uint16_t x507 = UINT16_MAX;
int8_t x509 = -1;
int32_t x511 = INT32_MIN;
uint16_t x520 = UINT16_MAX;
volatile int64_t x521 = -78181693154878LL;
static volatile uint16_t x523 = 3240U;
int8_t x524 = INT8_MAX;
uint16_t x531 = 11U;
static uint8_t x533 = 7U;
volatile uint32_t x534 = 28205U;
uint8_t x537 = UINT8_MAX;
int32_t x541 = INT32_MIN;
uint32_t x554 = UINT32_MAX;
int16_t x556 = INT16_MIN;
volatile int32_t t138 = 109838;
volatile int32_t t141 = -6454596;
uint32_t x569 = UINT32_MAX;
static uint64_t x570 = 8733521923873167LLU;
int8_t x571 = INT8_MIN;
static uint16_t x577 = 139U;
uint8_t x579 = UINT8_MAX;
uint8_t x580 = 1U;
volatile int32_t t145 = 627004405;
int64_t x585 = INT64_MAX;
uint32_t x590 = 198U;
uint8_t x593 = 0U;
int16_t x595 = -1;
int8_t x604 = INT8_MAX;
static uint16_t x609 = 5310U;
int32_t x613 = INT32_MIN;
int16_t x617 = -2;
uint64_t x618 = 20229228682770875LLU;
int16_t x620 = -1;
int32_t t154 = -140;
uint32_t x621 = 27060U;
int64_t x629 = INT64_MIN;
volatile int8_t x631 = 1;
int8_t x636 = 0;
int64_t x640 = 341751558903LL;
volatile int16_t x641 = INT16_MIN;
int32_t x650 = INT32_MIN;
uint16_t x653 = 5U;
volatile uint16_t x663 = 6U;
uint16_t x664 = 1834U;
uint16_t x668 = 20U;
static int32_t t166 = -787;
int64_t x669 = -683386LL;
static uint64_t x672 = UINT64_MAX;
volatile int32_t t167 = 4;
int8_t x674 = 25;
static uint8_t x677 = UINT8_MAX;
uint8_t x680 = UINT8_MAX;
int8_t x682 = 3;
static int16_t x684 = INT16_MIN;
volatile uint64_t x693 = 3377125LLU;
uint64_t x694 = 6760743891056LLU;
volatile int64_t x699 = INT64_MIN;
uint32_t x702 = 15391633U;
uint32_t x707 = UINT32_MAX;
int32_t t176 = -416029;
static uint64_t x715 = 12805918LLU;
uint64_t x717 = 4230931054037LLU;
int32_t t182 = 413822;
volatile int16_t x733 = -1;
volatile int32_t x739 = INT32_MIN;
static int16_t x740 = INT16_MIN;
int32_t t184 = 33665;
volatile int32_t x748 = INT32_MIN;
uint16_t x753 = 0U;
static uint8_t x754 = 104U;
static uint16_t x763 = UINT16_MAX;
int32_t x764 = 89416;
volatile uint32_t x769 = UINT32_MAX;
int32_t x771 = -1;
uint32_t x776 = 0U;
volatile int32_t t193 = 548644;
int32_t x781 = INT32_MAX;
volatile int32_t t195 = -292916781;
int8_t x785 = INT8_MAX;
uint8_t x786 = 0U;
int32_t x788 = INT32_MIN;
static volatile int32_t x789 = -275933;
volatile int8_t x798 = INT8_MAX;
int64_t x800 = INT64_MIN;


void f0(void) {
    	volatile int16_t x1 = 12;
	int32_t x2 = INT32_MAX;
	uint16_t x3 = UINT16_MAX;
	volatile uint64_t x4 = UINT64_MAX;
	static volatile int32_t t0 = -817;

    t0 = (((x1^x2)>x3)>x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x7 = UINT64_MAX;
	static int8_t x8 = -1;
	static int32_t t1 = -14;

    t1 = (((x5^x6)>x7)>x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x9 = 889287973;
	uint32_t x10 = 306U;
	int32_t x12 = INT32_MIN;
	static int32_t t2 = 3909549;

    t2 = (((x9^x10)>x11)>x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x13 = INT16_MIN;
	static int64_t x14 = INT64_MIN;
	volatile uint64_t x15 = 25164162882773815LLU;
	static int32_t x16 = INT32_MIN;
	volatile int32_t t3 = -72177954;

    t3 = (((x13^x14)>x15)>x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int16_t x17 = INT16_MIN;
	volatile int32_t x18 = INT32_MIN;
	int16_t x19 = INT16_MIN;
	volatile int64_t x20 = -1LL;
	int32_t t4 = 3130;

    t4 = (((x17^x18)>x19)>x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint32_t x21 = UINT32_MAX;
	int16_t x22 = 3;
	static uint64_t x23 = 3448703641LLU;
	volatile int64_t x24 = INT64_MAX;
	int32_t t5 = -14;

    t5 = (((x21^x22)>x23)>x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = 0;
	int16_t x26 = -1;
	int32_t x27 = -1;
	static int32_t x28 = 3591051;
	int32_t t6 = 763921763;

    t6 = (((x25^x26)>x27)>x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = 3LL;
	uint8_t x31 = 1U;
	static int16_t x32 = -8;
	int32_t t7 = -10;

    t7 = (((x29^x30)>x31)>x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = INT32_MIN;
	uint32_t x35 = 206198730U;
	int16_t x36 = INT16_MIN;
	volatile int32_t t8 = -3280940;

    t8 = (((x33^x34)>x35)>x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = -1;
	uint8_t x38 = 18U;
	static volatile int32_t x39 = INT32_MAX;
	volatile int16_t x40 = -167;
	static volatile int32_t t9 = 0;

    t9 = (((x37^x38)>x39)>x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = INT16_MIN;
	volatile int8_t x42 = -1;
	uint32_t x43 = 689U;
	static volatile int8_t x44 = 13;
	volatile int32_t t10 = 5895929;

    t10 = (((x41^x42)>x43)>x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x45 = -1LL;
	static int64_t x46 = INT64_MAX;
	int64_t x48 = INT64_MAX;
	volatile int32_t t11 = -27222;

    t11 = (((x45^x46)>x47)>x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x49 = 2293434298804451LLU;
	static int32_t x50 = 1788215;
	uint16_t x51 = UINT16_MAX;
	int32_t x52 = INT32_MIN;
	static volatile int32_t t12 = -6897906;

    t12 = (((x49^x50)>x51)>x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint64_t x53 = 29LLU;
	static int8_t x56 = INT8_MAX;

    t13 = (((x53^x54)>x55)>x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int32_t x57 = INT32_MAX;
	uint8_t x58 = 5U;
	int64_t x59 = 206LL;
	int16_t x60 = -4157;
	int32_t t14 = 4813;

    t14 = (((x57^x58)>x59)>x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x61 = 246413455;
	int16_t x62 = -7;
	volatile uint16_t x63 = 3U;
	int64_t x64 = -1LL;
	volatile int32_t t15 = -1934;

    t15 = (((x61^x62)>x63)>x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x65 = 0U;
	int64_t x66 = INT64_MIN;
	volatile int32_t x67 = 204271642;
	volatile int16_t x68 = INT16_MIN;
	int32_t t16 = 1;

    t16 = (((x65^x66)>x67)>x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = -7;
	static int32_t x70 = 4056667;
	int32_t x71 = INT32_MIN;
	int32_t x72 = INT32_MIN;
	int32_t t17 = 475628;

    t17 = (((x69^x70)>x71)>x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x75 = INT8_MIN;
	volatile uint8_t x76 = UINT8_MAX;

    t18 = (((x73^x74)>x75)>x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x77 = -383;
	int32_t x79 = INT32_MIN;
	volatile int16_t x80 = 0;
	static volatile int32_t t19 = -4052;

    t19 = (((x77^x78)>x79)>x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x81 = -27;
	static int16_t x82 = 0;
	static int8_t x83 = INT8_MIN;
	int32_t t20 = -1;

    t20 = (((x81^x82)>x83)>x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x85 = 3038U;
	volatile int32_t t21 = 6;

    t21 = (((x85^x86)>x87)>x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint8_t x89 = UINT8_MAX;
	static int8_t x90 = 0;
	int8_t x92 = 0;
	volatile int32_t t22 = -403292693;

    t22 = (((x89^x90)>x91)>x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x94 = 16U;
	volatile uint8_t x95 = 32U;
	int16_t x96 = INT16_MIN;

    t23 = (((x93^x94)>x95)>x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x97 = INT16_MIN;
	volatile int32_t x100 = 126;

    t24 = (((x97^x98)>x99)>x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x101 = INT32_MIN;
	volatile int64_t x102 = INT64_MIN;
	uint8_t x103 = 82U;
	static int8_t x104 = -1;
	volatile int32_t t25 = 2;

    t25 = (((x101^x102)>x103)>x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x106 = UINT16_MAX;
	static int8_t x108 = INT8_MIN;

    t26 = (((x105^x106)>x107)>x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int32_t x110 = -1;
	static volatile uint8_t x111 = 51U;
	int16_t x112 = INT16_MIN;
	volatile int32_t t27 = -495270;

    t27 = (((x109^x110)>x111)>x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x113 = 23U;
	uint16_t x114 = 2U;
	int32_t x115 = -46448703;
	uint8_t x116 = UINT8_MAX;

    t28 = (((x113^x114)>x115)>x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x118 = -3213006;
	uint32_t x120 = 65152U;
	volatile int32_t t29 = 1018252;

    t29 = (((x117^x118)>x119)>x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x121 = 14U;
	int8_t x122 = INT8_MIN;
	uint16_t x123 = UINT16_MAX;
	int32_t x124 = -1;
	int32_t t30 = 338986601;

    t30 = (((x121^x122)>x123)>x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int8_t x125 = -1;
	int8_t x127 = -1;
	volatile uint16_t x128 = 30908U;

    t31 = (((x125^x126)>x127)>x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x129 = 1;
	uint32_t x130 = 349498U;
	uint8_t x131 = 0U;
	uint8_t x132 = 116U;
	volatile int32_t t32 = -1;

    t32 = (((x129^x130)>x131)>x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = -9;
	uint16_t x134 = 273U;
	int16_t x135 = INT16_MIN;
	int16_t x136 = 162;
	volatile int32_t t33 = -16009449;

    t33 = (((x133^x134)>x135)>x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x137 = 1693216544357LLU;
	uint16_t x138 = UINT16_MAX;
	uint16_t x139 = UINT16_MAX;
	uint8_t x140 = UINT8_MAX;
	volatile int32_t t34 = 155597428;

    t34 = (((x137^x138)>x139)>x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x142 = -26;
	static uint8_t x144 = UINT8_MAX;
	volatile int32_t t35 = 682386572;

    t35 = (((x141^x142)>x143)>x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = INT32_MIN;
	int64_t x147 = 120045195658184025LL;
	uint8_t x148 = UINT8_MAX;
	volatile int32_t t36 = -5181;

    t36 = (((x145^x146)>x147)>x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint64_t x149 = 94912LLU;
	uint8_t x150 = 1U;
	volatile uint32_t x152 = UINT32_MAX;
	int32_t t37 = 46668039;

    t37 = (((x149^x150)>x151)>x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x153 = UINT32_MAX;
	int16_t x154 = -4457;
	int8_t x155 = INT8_MIN;
	int32_t x156 = INT32_MAX;
	int32_t t38 = -1;

    t38 = (((x153^x154)>x155)>x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x159 = INT64_MAX;
	volatile int64_t x160 = INT64_MAX;
	static int32_t t39 = 51917489;

    t39 = (((x157^x158)>x159)>x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x161 = INT64_MAX;
	volatile int32_t x162 = INT32_MAX;
	volatile int64_t x163 = INT64_MIN;
	int16_t x164 = -1;
	static int32_t t40 = -41236302;

    t40 = (((x161^x162)>x163)>x164);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x166 = 102;
	volatile uint64_t x167 = 704880432998LLU;
	volatile int8_t x168 = INT8_MAX;
	volatile int32_t t41 = -8187;

    t41 = (((x165^x166)>x167)>x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint16_t x169 = UINT16_MAX;
	static uint64_t x171 = 56751591LLU;
	uint64_t x172 = 1935633036038927LLU;
	static int32_t t42 = 560272;

    t42 = (((x169^x170)>x171)>x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint64_t x174 = 6748LLU;
	uint32_t x175 = UINT32_MAX;
	uint8_t x176 = 2U;
	int32_t t43 = -6;

    t43 = (((x173^x174)>x175)>x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x177 = INT8_MIN;
	int32_t x178 = 1223799;
	uint64_t x179 = 126814LLU;
	int64_t x180 = INT64_MAX;
	int32_t t44 = 17972272;

    t44 = (((x177^x178)>x179)>x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint16_t x181 = 184U;
	uint16_t x182 = 43U;
	static int16_t x183 = 335;
	uint16_t x184 = UINT16_MAX;
	int32_t t45 = -20400433;

    t45 = (((x181^x182)>x183)>x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x185 = UINT32_MAX;
	volatile int16_t x187 = 1758;
	int64_t x188 = INT64_MAX;
	volatile int32_t t46 = -2599;

    t46 = (((x185^x186)>x187)>x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int32_t x189 = -1;
	int8_t x190 = INT8_MIN;
	int16_t x191 = INT16_MIN;
	static int8_t x192 = -1;
	volatile int32_t t47 = 574570;

    t47 = (((x189^x190)>x191)>x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int8_t x194 = -9;
	volatile uint32_t x195 = 772U;
	int16_t x196 = -14;
	static int32_t t48 = -14;

    t48 = (((x193^x194)>x195)>x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x197 = 11105121U;
	int32_t x199 = INT32_MAX;
	int16_t x200 = -1;
	int32_t t49 = -9413;

    t49 = (((x197^x198)>x199)>x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint64_t x201 = UINT64_MAX;
	int64_t x202 = INT64_MIN;
	uint8_t x203 = UINT8_MAX;
	int64_t x204 = INT64_MAX;
	volatile int32_t t50 = 4009;

    t50 = (((x201^x202)>x203)>x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint64_t x206 = 473135LLU;
	static int16_t x207 = INT16_MIN;
	int32_t t51 = 5233;

    t51 = (((x205^x206)>x207)>x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x209 = -3659340;
	static int32_t x211 = INT32_MIN;
	volatile int32_t t52 = 107;

    t52 = (((x209^x210)>x211)>x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x213 = INT8_MIN;
	static int8_t x214 = INT8_MAX;
	static int32_t x215 = -252439;
	volatile int16_t x216 = INT16_MIN;
	int32_t t53 = 2;

    t53 = (((x213^x214)>x215)>x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x218 = INT64_MIN;
	volatile int32_t x220 = INT32_MIN;
	int32_t t54 = -122723;

    t54 = (((x217^x218)>x219)>x220);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x222 = -40;
	volatile uint64_t x223 = UINT64_MAX;
	volatile int32_t t55 = 3025;

    t55 = (((x221^x222)>x223)>x224);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x225 = UINT64_MAX;
	static int8_t x226 = INT8_MIN;
	static uint32_t x227 = UINT32_MAX;
	uint32_t x228 = UINT32_MAX;
	volatile int32_t t56 = 65216773;

    t56 = (((x225^x226)>x227)>x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x229 = INT8_MIN;
	static uint64_t x230 = 4754LLU;
	int64_t x232 = 14590978427LL;
	volatile int32_t t57 = -5;

    t57 = (((x229^x230)>x231)>x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x233 = -1;
	int16_t x234 = -47;
	int8_t x235 = INT8_MAX;
	int64_t x236 = INT64_MIN;
	int32_t t58 = -318359717;

    t58 = (((x233^x234)>x235)>x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x237 = -558340;
	volatile uint32_t x238 = 80264U;
	volatile int16_t x239 = INT16_MIN;
	volatile int16_t x240 = INT16_MIN;

    t59 = (((x237^x238)>x239)>x240);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x241 = 659140397;
	int8_t x242 = 0;
	uint64_t x243 = 1851511081396425LLU;
	int32_t t60 = -7;

    t60 = (((x241^x242)>x243)>x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x246 = 14206U;
	int16_t x247 = INT16_MIN;
	uint64_t x248 = 1863522133701LLU;
	volatile int32_t t61 = 763;

    t61 = (((x245^x246)>x247)>x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x249 = 30U;
	int64_t x250 = INT64_MIN;
	static int8_t x251 = INT8_MIN;
	uint32_t x252 = 6U;

    t62 = (((x249^x250)>x251)>x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x255 = INT8_MAX;
	volatile int8_t x256 = INT8_MAX;
	int32_t t63 = 67068092;

    t63 = (((x253^x254)>x255)>x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint64_t x257 = 15LLU;
	int64_t x258 = INT64_MIN;
	static volatile int16_t x259 = INT16_MIN;
	volatile int32_t t64 = 16;

    t64 = (((x257^x258)>x259)>x260);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x261 = UINT16_MAX;
	static uint16_t x262 = 35U;
	int8_t x263 = -1;
	int32_t x264 = INT32_MIN;
	int32_t t65 = 42;

    t65 = (((x261^x262)>x263)>x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x266 = 740U;
	static int8_t x268 = 0;
	int32_t t66 = 459287;

    t66 = (((x265^x266)>x267)>x268);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x269 = 4844U;
	int64_t x270 = -13636394LL;
	uint64_t x271 = 6309516120450848944LLU;
	static volatile int32_t t67 = 204;

    t67 = (((x269^x270)>x271)>x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x273 = -1LL;
	int16_t x274 = INT16_MIN;
	int16_t x275 = 82;
	int8_t x276 = INT8_MAX;
	volatile int32_t t68 = -8;

    t68 = (((x273^x274)>x275)>x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x277 = 0;
	uint32_t x278 = 7428U;
	int32_t x279 = INT32_MIN;
	static volatile int16_t x280 = INT16_MIN;
	volatile int32_t t69 = -3467661;

    t69 = (((x277^x278)>x279)>x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile uint32_t x281 = 16687U;
	int8_t x283 = INT8_MIN;
	int32_t x284 = INT32_MAX;
	volatile int32_t t70 = 1;

    t70 = (((x281^x282)>x283)>x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x285 = UINT64_MAX;
	uint8_t x286 = 1U;
	int16_t x287 = INT16_MIN;
	volatile int32_t t71 = 0;

    t71 = (((x285^x286)>x287)>x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x290 = 14;
	static uint64_t x291 = 612106693925790486LLU;
	static volatile int32_t x292 = INT32_MIN;
	int32_t t72 = -2;

    t72 = (((x289^x290)>x291)>x292);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x293 = UINT32_MAX;
	static volatile int16_t x294 = -1;
	int16_t x296 = 442;
	volatile int32_t t73 = -15021872;

    t73 = (((x293^x294)>x295)>x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint16_t x297 = 786U;
	volatile int8_t x300 = 58;
	int32_t t74 = -28;

    t74 = (((x297^x298)>x299)>x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x301 = INT8_MIN;
	static int32_t x303 = INT32_MIN;
	int16_t x304 = 230;
	volatile int32_t t75 = 31;

    t75 = (((x301^x302)>x303)>x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int32_t x305 = INT32_MIN;
	int8_t x306 = INT8_MAX;
	volatile uint32_t x307 = 31U;

    t76 = (((x305^x306)>x307)>x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x309 = 55;
	int64_t x310 = INT64_MIN;
	int32_t t77 = -181726414;

    t77 = (((x309^x310)>x311)>x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x313 = UINT64_MAX;
	int32_t x314 = -1;
	int16_t x315 = -64;
	int32_t t78 = -1166;

    t78 = (((x313^x314)>x315)>x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x317 = UINT64_MAX;
	int32_t x318 = INT32_MIN;
	volatile int64_t x319 = -2605625806205044898LL;
	uint8_t x320 = 7U;

    t79 = (((x317^x318)>x319)>x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x321 = INT16_MIN;
	int32_t x323 = INT32_MIN;
	int32_t x324 = INT32_MIN;
	static volatile int32_t t80 = -28482254;

    t80 = (((x321^x322)>x323)>x324);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x325 = UINT64_MAX;
	volatile uint64_t x326 = 841958803332726110LLU;
	static int32_t x328 = INT32_MAX;

    t81 = (((x325^x326)>x327)>x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x330 = INT8_MIN;
	uint8_t x331 = 61U;
	volatile int16_t x332 = INT16_MIN;
	int32_t t82 = -3;

    t82 = (((x329^x330)>x331)>x332);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x333 = INT32_MAX;
	int64_t x334 = -487849417665722LL;
	volatile uint64_t x335 = UINT64_MAX;

    t83 = (((x333^x334)>x335)>x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int64_t x337 = 411LL;
	static uint32_t x338 = 734994553U;
	int16_t x339 = INT16_MIN;
	static int32_t x340 = INT32_MAX;
	int32_t t84 = 257675;

    t84 = (((x337^x338)>x339)>x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint64_t x343 = UINT64_MAX;
	uint16_t x344 = UINT16_MAX;

    t85 = (((x341^x342)>x343)>x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x346 = -47016;
	int64_t x347 = 28188511473LL;
	int32_t x348 = INT32_MIN;
	int32_t t86 = 900;

    t86 = (((x345^x346)>x347)>x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint16_t x349 = 506U;
	int8_t x350 = -1;
	volatile int32_t x351 = 0;
	int16_t x352 = INT16_MAX;
	volatile int32_t t87 = -8302299;

    t87 = (((x349^x350)>x351)>x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x353 = INT16_MIN;
	volatile int64_t x354 = -5553LL;
	int8_t x355 = INT8_MAX;
	int32_t x356 = INT32_MAX;
	volatile int32_t t88 = -71428;

    t88 = (((x353^x354)>x355)>x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static int8_t x357 = INT8_MIN;
	uint16_t x358 = UINT16_MAX;
	static int64_t x360 = INT64_MIN;

    t89 = (((x357^x358)>x359)>x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint16_t x361 = UINT16_MAX;
	uint32_t x362 = UINT32_MAX;
	int64_t x363 = INT64_MIN;
	int64_t x364 = -197LL;
	volatile int32_t t90 = -1695679;

    t90 = (((x361^x362)>x363)>x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile int8_t x365 = -1;
	int8_t x366 = INT8_MAX;
	int64_t x367 = INT64_MIN;
	uint64_t x368 = 346241971801619280LLU;
	volatile int32_t t91 = -624;

    t91 = (((x365^x366)>x367)>x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static int32_t x369 = INT32_MIN;
	uint16_t x371 = UINT16_MAX;
	int32_t t92 = 1;

    t92 = (((x369^x370)>x371)>x372);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x373 = INT8_MIN;
	int16_t x374 = INT16_MIN;
	static int16_t x375 = INT16_MIN;
	uint32_t x376 = 1253954290U;

    t93 = (((x373^x374)>x375)>x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int32_t x377 = INT32_MIN;
	uint8_t x378 = UINT8_MAX;
	int16_t x379 = INT16_MIN;
	int16_t x380 = -286;
	int32_t t94 = -1;

    t94 = (((x377^x378)>x379)>x380);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x381 = 268903852663810LLU;
	volatile int8_t x382 = INT8_MIN;
	uint64_t x384 = 25262421028368LLU;
	int32_t t95 = -65239;

    t95 = (((x381^x382)>x383)>x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x385 = INT8_MAX;
	static uint32_t x387 = 5388936U;
	static int32_t t96 = -221022600;

    t96 = (((x385^x386)>x387)>x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x389 = 1283601569LL;
	volatile int64_t x390 = 1135059LL;
	static uint8_t x391 = 4U;
	int16_t x392 = -334;
	int32_t t97 = 1;

    t97 = (((x389^x390)>x391)>x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x393 = 5763406621810274LLU;
	volatile int32_t t98 = 85;

    t98 = (((x393^x394)>x395)>x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x397 = -1;
	volatile uint64_t x399 = 126020313092024LLU;
	int32_t x400 = INT32_MIN;
	volatile int32_t t99 = 28503;

    t99 = (((x397^x398)>x399)>x400);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x401 = INT64_MIN;
	int64_t x402 = 496LL;
	int32_t t100 = 264;

    t100 = (((x401^x402)>x403)>x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint16_t x406 = UINT16_MAX;
	int32_t x407 = -14331;
	static int32_t x408 = -1;

    t101 = (((x405^x406)>x407)>x408);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint32_t x409 = 17747837U;
	int8_t x410 = -6;
	static int64_t x411 = INT64_MAX;
	static uint8_t x412 = UINT8_MAX;
	int32_t t102 = -91;

    t102 = (((x409^x410)>x411)>x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x413 = -1;
	uint8_t x414 = 82U;
	static volatile uint8_t x415 = 6U;
	volatile int32_t x416 = INT32_MIN;
	static volatile int32_t t103 = -31396311;

    t103 = (((x413^x414)>x415)>x416);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x417 = 14LL;
	int16_t x418 = INT16_MIN;
	int16_t x419 = INT16_MAX;
	uint16_t x420 = 0U;
	volatile int32_t t104 = -1;

    t104 = (((x417^x418)>x419)>x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint16_t x421 = 61U;
	static volatile int32_t x422 = INT32_MIN;
	int16_t x423 = -1840;
	volatile int64_t x424 = INT64_MAX;
	volatile int32_t t105 = 48088;

    t105 = (((x421^x422)>x423)>x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x425 = INT64_MIN;
	int32_t x426 = -1;
	static uint32_t x427 = UINT32_MAX;
	int8_t x428 = -1;
	volatile int32_t t106 = 289;

    t106 = (((x425^x426)>x427)>x428);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x429 = -171048508058226LL;
	static volatile uint64_t x430 = UINT64_MAX;
	uint32_t x431 = 5067U;

    t107 = (((x429^x430)>x431)>x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x433 = 1992;
	int16_t x434 = 6;
	int16_t x435 = INT16_MAX;
	static volatile int64_t x436 = INT64_MIN;
	volatile int32_t t108 = -156059605;

    t108 = (((x433^x434)>x435)>x436);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x437 = -1LL;
	uint32_t x438 = UINT32_MAX;
	volatile int16_t x439 = -1;
	int32_t x440 = INT32_MIN;
	int32_t t109 = -902263377;

    t109 = (((x437^x438)>x439)>x440);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x441 = -1LL;
	uint8_t x442 = 117U;
	volatile int32_t x443 = -1;
	int64_t x444 = INT64_MAX;
	int32_t t110 = 3942;

    t110 = (((x441^x442)>x443)>x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int64_t x445 = 28LL;
	static int32_t x446 = 48;
	uint64_t x448 = 273631LLU;

    t111 = (((x445^x446)>x447)>x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x449 = INT32_MIN;
	int64_t x450 = INT64_MIN;
	uint16_t x451 = UINT16_MAX;
	int32_t t112 = -1;

    t112 = (((x449^x450)>x451)>x452);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x453 = UINT8_MAX;
	int8_t x454 = INT8_MIN;
	int32_t x455 = 2;
	int32_t t113 = 2159;

    t113 = (((x453^x454)>x455)>x456);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x457 = INT32_MIN;
	static volatile int8_t x458 = INT8_MAX;
	int8_t x459 = INT8_MIN;
	int32_t t114 = -321175;

    t114 = (((x457^x458)>x459)>x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x461 = UINT64_MAX;
	volatile int32_t x462 = 43406998;
	int8_t x463 = -1;
	static int32_t x464 = 13003;
	static int32_t t115 = -3321211;

    t115 = (((x461^x462)>x463)>x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x465 = 228825406051442846LLU;
	static volatile uint64_t x466 = 1LLU;
	int8_t x467 = INT8_MIN;
	int8_t x468 = 5;

    t116 = (((x465^x466)>x467)>x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x469 = INT8_MIN;
	volatile uint8_t x470 = 50U;
	volatile int32_t t117 = -880;

    t117 = (((x469^x470)>x471)>x472);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x473 = INT64_MIN;
	volatile int32_t x474 = 31453022;
	volatile uint32_t x475 = 4868U;
	int32_t t118 = 51966525;

    t118 = (((x473^x474)>x475)>x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x477 = INT32_MIN;
	volatile int8_t x478 = INT8_MIN;
	int64_t x480 = 481051408336LL;
	int32_t t119 = -6;

    t119 = (((x477^x478)>x479)>x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int32_t x482 = INT32_MIN;
	int8_t x484 = INT8_MIN;
	volatile int32_t t120 = 5359;

    t120 = (((x481^x482)>x483)>x484);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x485 = UINT16_MAX;
	static int32_t x486 = INT32_MAX;
	uint16_t x487 = UINT16_MAX;
	int64_t x488 = INT64_MIN;
	static int32_t t121 = -31738;

    t121 = (((x485^x486)>x487)>x488);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x489 = 35U;
	int8_t x490 = INT8_MIN;
	int16_t x491 = INT16_MIN;
	static int16_t x492 = -13999;
	int32_t t122 = 9;

    t122 = (((x489^x490)>x491)>x492);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile int8_t x494 = -1;
	int64_t x496 = INT64_MAX;

    t123 = (((x493^x494)>x495)>x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint32_t x498 = UINT32_MAX;
	volatile int32_t x499 = -1;
	int32_t t124 = 239;

    t124 = (((x497^x498)>x499)>x500);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x502 = 849LL;
	static uint16_t x504 = 858U;
	int32_t t125 = -160279;

    t125 = (((x501^x502)>x503)>x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x508 = 489LLU;
	static volatile int32_t t126 = -186724;

    t126 = (((x505^x506)>x507)>x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x510 = INT64_MAX;
	uint32_t x512 = 77549435U;
	static volatile int32_t t127 = -708252371;

    t127 = (((x509^x510)>x511)>x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint8_t x513 = UINT8_MAX;
	int8_t x514 = INT8_MIN;
	static uint8_t x515 = 2U;
	uint8_t x516 = UINT8_MAX;
	int32_t t128 = 867;

    t128 = (((x513^x514)>x515)>x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x517 = 11868600925LLU;
	volatile int32_t x518 = INT32_MIN;
	static int32_t x519 = -149939912;
	static int32_t t129 = 95;

    t129 = (((x517^x518)>x519)>x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x522 = -31123970;
	static volatile int32_t t130 = 66938580;

    t130 = (((x521^x522)>x523)>x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x525 = 1U;
	static int32_t x526 = INT32_MIN;
	static int8_t x527 = INT8_MIN;
	int8_t x528 = -1;
	int32_t t131 = -94;

    t131 = (((x525^x526)>x527)>x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile int8_t x529 = -11;
	int16_t x530 = -2868;
	int16_t x532 = -94;
	static int32_t t132 = 121401537;

    t132 = (((x529^x530)>x531)>x532);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x535 = 111LL;
	uint32_t x536 = UINT32_MAX;
	volatile int32_t t133 = -114761385;

    t133 = (((x533^x534)>x535)>x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x538 = 175;
	uint8_t x539 = 92U;
	uint32_t x540 = 4U;
	volatile int32_t t134 = 134410;

    t134 = (((x537^x538)>x539)>x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x542 = -1;
	int32_t x543 = INT32_MIN;
	uint64_t x544 = UINT64_MAX;
	volatile int32_t t135 = -549606;

    t135 = (((x541^x542)>x543)>x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x545 = 238354553291208710LL;
	int32_t x546 = -12334025;
	int8_t x547 = 12;
	static volatile uint16_t x548 = 7855U;
	int32_t t136 = 4620;

    t136 = (((x545^x546)>x547)>x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x549 = -1;
	static int8_t x550 = 24;
	int16_t x551 = 67;
	int16_t x552 = -7209;
	volatile int32_t t137 = -2527;

    t137 = (((x549^x550)>x551)>x552);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x553 = INT16_MAX;
	int32_t x555 = INT32_MIN;

    t138 = (((x553^x554)>x555)>x556);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x557 = 0LLU;
	uint64_t x558 = 10LLU;
	volatile uint8_t x559 = UINT8_MAX;
	static int32_t x560 = -1;
	int32_t t139 = 1;

    t139 = (((x557^x558)>x559)>x560);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x561 = INT32_MIN;
	int64_t x562 = INT64_MIN;
	uint64_t x563 = UINT64_MAX;
	static uint16_t x564 = 1U;
	int32_t t140 = 64968;

    t140 = (((x561^x562)>x563)>x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x565 = INT16_MIN;
	uint8_t x566 = UINT8_MAX;
	volatile int16_t x567 = INT16_MIN;
	volatile uint16_t x568 = 471U;

    t141 = (((x565^x566)>x567)>x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x572 = -796212666405219LL;
	static int32_t t142 = -7846690;

    t142 = (((x569^x570)>x571)>x572);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x573 = 105U;
	volatile int32_t x574 = INT32_MIN;
	static uint64_t x575 = 22288671184025LLU;
	int64_t x576 = -133434230882410LL;
	static int32_t t143 = 499574123;

    t143 = (((x573^x574)>x575)>x576);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x578 = 3U;
	volatile int32_t t144 = -478;

    t144 = (((x577^x578)>x579)>x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int32_t x581 = -254196676;
	int64_t x582 = INT64_MIN;
	uint64_t x583 = UINT64_MAX;
	int16_t x584 = -3701;

    t145 = (((x581^x582)>x583)>x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x586 = 3587LLU;
	static volatile int64_t x587 = INT64_MAX;
	int32_t x588 = 2649;
	volatile int32_t t146 = 28866;

    t146 = (((x585^x586)>x587)>x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile int16_t x589 = 0;
	int16_t x591 = INT16_MAX;
	volatile int16_t x592 = -3;
	static volatile int32_t t147 = 28;

    t147 = (((x589^x590)>x591)>x592);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static int64_t x594 = INT64_MIN;
	int8_t x596 = -1;
	int32_t t148 = -1547390;

    t148 = (((x593^x594)>x595)>x596);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x597 = INT16_MAX;
	int8_t x598 = -20;
	static int64_t x599 = INT64_MAX;
	static int16_t x600 = -1;
	int32_t t149 = 1;

    t149 = (((x597^x598)>x599)>x600);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static int16_t x601 = INT16_MIN;
	uint16_t x602 = UINT16_MAX;
	uint16_t x603 = 106U;
	int32_t t150 = -26;

    t150 = (((x601^x602)>x603)>x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x605 = 7U;
	int32_t x606 = -18910068;
	int8_t x607 = 20;
	uint32_t x608 = 5U;
	static volatile int32_t t151 = -27;

    t151 = (((x605^x606)>x607)>x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x610 = UINT8_MAX;
	uint32_t x611 = 4250027U;
	int8_t x612 = INT8_MIN;
	volatile int32_t t152 = 6;

    t152 = (((x609^x610)>x611)>x612);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static int32_t x614 = INT32_MIN;
	static int32_t x615 = -934;
	static int8_t x616 = 54;
	int32_t t153 = -3;

    t153 = (((x613^x614)>x615)>x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x619 = INT64_MAX;

    t154 = (((x617^x618)>x619)>x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x622 = INT16_MIN;
	volatile int8_t x623 = 0;
	static volatile uint16_t x624 = 1532U;
	int32_t t155 = 954914;

    t155 = (((x621^x622)>x623)>x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x625 = INT64_MIN;
	int8_t x626 = INT8_MIN;
	volatile uint16_t x627 = 15U;
	static uint32_t x628 = UINT32_MAX;
	static int32_t t156 = 15263;

    t156 = (((x625^x626)>x627)>x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x630 = 1U;
	int16_t x632 = INT16_MIN;
	static volatile int32_t t157 = -4929777;

    t157 = (((x629^x630)>x631)>x632);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x633 = -1;
	int32_t x634 = 1;
	int64_t x635 = -1LL;
	volatile int32_t t158 = 5821553;

    t158 = (((x633^x634)>x635)>x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile uint32_t x637 = UINT32_MAX;
	uint64_t x638 = 844968903LLU;
	static int32_t x639 = 1363;
	int32_t t159 = 452987156;

    t159 = (((x637^x638)>x639)>x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int32_t x642 = 54592769;
	volatile int8_t x643 = INT8_MAX;
	uint64_t x644 = UINT64_MAX;
	int32_t t160 = -9337;

    t160 = (((x641^x642)>x643)>x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x645 = INT64_MIN;
	uint8_t x646 = UINT8_MAX;
	int16_t x647 = -12;
	int16_t x648 = 0;
	int32_t t161 = 955986402;

    t161 = (((x645^x646)>x647)>x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x649 = INT64_MIN;
	int64_t x651 = INT64_MAX;
	int64_t x652 = INT64_MAX;
	int32_t t162 = -22548;

    t162 = (((x649^x650)>x651)>x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x654 = -1;
	volatile int16_t x655 = -1;
	volatile uint32_t x656 = 232437U;
	int32_t t163 = 3079607;

    t163 = (((x653^x654)>x655)>x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x657 = 141;
	static uint16_t x658 = 52U;
	int16_t x659 = INT16_MAX;
	int64_t x660 = INT64_MIN;
	static int32_t t164 = -476;

    t164 = (((x657^x658)>x659)>x660);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static int32_t x661 = -1;
	int8_t x662 = INT8_MIN;
	int32_t t165 = 1480;

    t165 = (((x661^x662)>x663)>x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x665 = UINT8_MAX;
	static int64_t x666 = -3534659LL;
	int64_t x667 = -1LL;

    t166 = (((x665^x666)>x667)>x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x670 = -50;
	int8_t x671 = INT8_MIN;

    t167 = (((x669^x670)>x671)>x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint64_t x673 = 0LLU;
	int64_t x675 = -2LL;
	volatile int16_t x676 = -1;
	int32_t t168 = 160;

    t168 = (((x673^x674)>x675)>x676);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x678 = INT16_MAX;
	static uint8_t x679 = 56U;
	int32_t t169 = 166407272;

    t169 = (((x677^x678)>x679)>x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint16_t x681 = UINT16_MAX;
	uint64_t x683 = 114729708LLU;
	int32_t t170 = 98587;

    t170 = (((x681^x682)>x683)>x684);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x685 = -1;
	int64_t x686 = 1LL;
	int32_t x687 = 10507724;
	volatile int64_t x688 = -1LL;
	volatile int32_t t171 = -956972268;

    t171 = (((x685^x686)>x687)>x688);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x689 = -23;
	volatile int32_t x690 = -1;
	volatile int32_t x691 = 26;
	uint32_t x692 = 1026892857U;
	int32_t t172 = 4049578;

    t172 = (((x689^x690)>x691)>x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x695 = -113;
	uint8_t x696 = 31U;
	static volatile int32_t t173 = -1;

    t173 = (((x693^x694)>x695)>x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x697 = INT8_MIN;
	int16_t x698 = 10974;
	static volatile int8_t x700 = -1;
	volatile int32_t t174 = 1;

    t174 = (((x697^x698)>x699)>x700);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x701 = 0;
	static uint16_t x703 = 16074U;
	int64_t x704 = -346449169643238628LL;
	int32_t t175 = 484283126;

    t175 = (((x701^x702)>x703)>x704);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int8_t x705 = -5;
	uint8_t x706 = UINT8_MAX;
	int8_t x708 = INT8_MAX;

    t176 = (((x705^x706)>x707)>x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int32_t x709 = INT32_MIN;
	uint32_t x710 = 547216U;
	static int32_t x711 = -224532832;
	int64_t x712 = -1LL;
	static volatile int32_t t177 = -970;

    t177 = (((x709^x710)>x711)>x712);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x713 = INT64_MIN;
	int16_t x714 = 13;
	int8_t x716 = -2;
	volatile int32_t t178 = 688576214;

    t178 = (((x713^x714)>x715)>x716);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x718 = 1;
	static volatile uint32_t x719 = UINT32_MAX;
	int16_t x720 = INT16_MIN;
	volatile int32_t t179 = -76;

    t179 = (((x717^x718)>x719)>x720);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x721 = 321;
	int16_t x722 = INT16_MAX;
	uint32_t x723 = UINT32_MAX;
	static int16_t x724 = 12;
	volatile int32_t t180 = 279650903;

    t180 = (((x721^x722)>x723)>x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x725 = INT16_MIN;
	volatile uint64_t x726 = 4808666LLU;
	static uint32_t x727 = UINT32_MAX;
	int32_t x728 = INT32_MIN;
	volatile int32_t t181 = 1300;

    t181 = (((x725^x726)>x727)>x728);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x729 = 1;
	uint64_t x730 = 23596940874028LLU;
	int64_t x731 = -1LL;
	uint64_t x732 = UINT64_MAX;

    t182 = (((x729^x730)>x731)>x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x734 = -201;
	uint32_t x735 = UINT32_MAX;
	volatile uint16_t x736 = 22947U;
	int32_t t183 = 1;

    t183 = (((x733^x734)>x735)>x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x737 = INT8_MIN;
	int16_t x738 = -10457;

    t184 = (((x737^x738)>x739)>x740);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x741 = -5318;
	int32_t x742 = -1;
	int16_t x743 = -1;
	uint8_t x744 = 28U;
	static volatile int32_t t185 = -48;

    t185 = (((x741^x742)>x743)>x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x745 = 19U;
	int8_t x746 = INT8_MAX;
	static int8_t x747 = -1;
	static int32_t t186 = 1;

    t186 = (((x745^x746)>x747)>x748);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int32_t x749 = INT32_MIN;
	uint16_t x750 = 1U;
	uint64_t x751 = 12518817LLU;
	uint64_t x752 = 653965900109LLU;
	volatile int32_t t187 = -6629938;

    t187 = (((x749^x750)>x751)>x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x755 = 412291U;
	uint64_t x756 = UINT64_MAX;
	volatile int32_t t188 = 0;

    t188 = (((x753^x754)>x755)>x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x757 = INT64_MIN;
	static int16_t x758 = INT16_MIN;
	volatile int16_t x759 = 3529;
	volatile int8_t x760 = -3;
	volatile int32_t t189 = -1467;

    t189 = (((x757^x758)>x759)>x760);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x761 = 7536;
	int16_t x762 = INT16_MAX;
	volatile int32_t t190 = 5404;

    t190 = (((x761^x762)>x763)>x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x765 = -1;
	uint32_t x766 = 32128U;
	int8_t x767 = INT8_MAX;
	uint16_t x768 = UINT16_MAX;
	volatile int32_t t191 = 1481;

    t191 = (((x765^x766)>x767)>x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x770 = INT8_MIN;
	int64_t x772 = INT64_MIN;
	volatile int32_t t192 = 4410690;

    t192 = (((x769^x770)>x771)>x772);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static int64_t x773 = INT64_MAX;
	int16_t x774 = INT16_MAX;
	uint64_t x775 = UINT64_MAX;

    t193 = (((x773^x774)>x775)>x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x777 = 6011;
	static int16_t x778 = -1595;
	uint16_t x779 = 97U;
	static int32_t x780 = 1963;
	static int32_t t194 = -1053746;

    t194 = (((x777^x778)>x779)>x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x782 = -1;
	int32_t x783 = -1;
	int64_t x784 = INT64_MIN;

    t195 = (((x781^x782)>x783)>x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int64_t x787 = -1LL;
	volatile int32_t t196 = -1880084;

    t196 = (((x785^x786)>x787)>x788);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int8_t x790 = 4;
	uint32_t x791 = UINT32_MAX;
	uint32_t x792 = 31401U;
	int32_t t197 = -6;

    t197 = (((x789^x790)>x791)>x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x793 = -1;
	int8_t x794 = -4;
	int32_t x795 = INT32_MAX;
	int8_t x796 = 6;
	int32_t t198 = -264133633;

    t198 = (((x793^x794)>x795)>x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x797 = INT16_MIN;
	uint32_t x799 = 2271545U;
	volatile int32_t t199 = -34;

    t199 = (((x797^x798)>x799)>x800);

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

