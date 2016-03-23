
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

uint8_t x1 = UINT8_MAX;
volatile uint32_t x3 = UINT32_MAX;
int8_t x8 = INT8_MAX;
uint16_t x13 = 196U;
int8_t x14 = INT8_MIN;
volatile int32_t x16 = INT32_MIN;
volatile int32_t t4 = 6043;
uint16_t x26 = 5U;
static int16_t x28 = INT16_MIN;
volatile int8_t x30 = INT8_MIN;
uint8_t x33 = 91U;
int32_t t8 = -49088;
int64_t x40 = -177368604644LL;
int32_t x43 = INT32_MIN;
int8_t x44 = INT8_MIN;
static volatile int8_t x51 = 5;
int32_t t12 = 5;
int64_t x53 = INT64_MIN;
int64_t x54 = -1LL;
uint8_t x60 = 1U;
volatile int32_t t14 = 32;
int16_t x68 = INT16_MIN;
static int64_t x70 = 152247333726LL;
volatile uint8_t x73 = 81U;
static volatile int64_t x74 = 4162LL;
volatile int16_t x78 = INT16_MIN;
volatile int8_t x83 = INT8_MIN;
int64_t x84 = -3366339286027549174LL;
static uint8_t x86 = 0U;
uint8_t x98 = UINT8_MAX;
static volatile int32_t t26 = -296;
static int16_t x109 = INT16_MIN;
int64_t x117 = INT64_MIN;
static volatile uint8_t x120 = UINT8_MAX;
volatile int32_t t29 = 177;
uint64_t x121 = UINT64_MAX;
int64_t x123 = 3864885461LL;
uint8_t x130 = 22U;
int32_t x132 = INT32_MAX;
int16_t x136 = 1709;
static uint16_t x137 = 50U;
volatile int32_t t35 = 11;
int8_t x145 = -1;
int16_t x159 = INT16_MAX;
volatile int16_t x162 = INT16_MIN;
int32_t t40 = 1033163;
static int8_t x165 = 9;
int16_t x166 = -44;
volatile int64_t x167 = INT64_MAX;
int64_t x174 = -1LL;
int32_t t45 = 1;
uint8_t x185 = UINT8_MAX;
int32_t x188 = INT32_MIN;
int8_t x190 = INT8_MAX;
uint16_t x193 = UINT16_MAX;
uint16_t x201 = 0U;
uint64_t x202 = UINT64_MAX;
static int32_t t50 = -1072;
int16_t x206 = 689;
int8_t x208 = -1;
int32_t t51 = 497255;
volatile int32_t t53 = -84;
volatile int32_t x218 = INT32_MIN;
int64_t x223 = INT64_MIN;
uint32_t x225 = 3U;
static volatile int32_t t58 = -3654927;
static uint32_t x241 = UINT32_MAX;
int8_t x244 = -1;
uint64_t x247 = UINT64_MAX;
volatile int32_t t61 = 8;
int8_t x251 = -1;
int32_t t62 = 53893544;
int16_t x253 = INT16_MIN;
volatile uint32_t x254 = 48382946U;
int32_t x256 = 125773;
volatile uint16_t x268 = 27U;
volatile int64_t x269 = -1137360595817622190LL;
static int16_t x270 = -11;
static int32_t x273 = -1;
int64_t x275 = 1023LL;
int16_t x279 = INT16_MAX;
uint32_t x283 = UINT32_MAX;
volatile int32_t t71 = -2894;
int32_t t72 = 11404;
int32_t t74 = -8605670;
uint32_t x303 = 14112U;
static int8_t x304 = -1;
int32_t t75 = -646;
volatile int32_t t76 = -39;
static int64_t x310 = INT64_MIN;
int32_t x312 = -1;
static int32_t t78 = 4692;
static volatile int16_t x326 = -1;
volatile uint64_t x335 = 1038663008006197961LLU;
static int64_t x341 = -1LL;
int8_t x360 = INT8_MAX;
int32_t x363 = 585985;
static int16_t x364 = INT16_MIN;
static int32_t t90 = -19090;
uint64_t x365 = UINT64_MAX;
int32_t t91 = 4633;
uint8_t x374 = UINT8_MAX;
int32_t t93 = 75513894;
uint64_t x377 = 1587282LLU;
static int8_t x378 = INT8_MIN;
uint64_t x379 = 21LLU;
static volatile uint32_t x381 = 115750679U;
int16_t x384 = INT16_MAX;
int8_t x389 = -1;
volatile int64_t x390 = -1LL;
int32_t x404 = INT32_MAX;
volatile int32_t t100 = 6;
uint64_t x408 = 64839LLU;
int16_t x421 = -1;
uint32_t x423 = UINT32_MAX;
volatile int16_t x427 = INT16_MAX;
volatile int32_t t106 = -3482725;
int64_t x429 = -1LL;
int16_t x430 = INT16_MIN;
int32_t x433 = -5257;
static int64_t x435 = 0LL;
int16_t x437 = -1;
volatile int32_t x442 = INT32_MAX;
static volatile int32_t t110 = -414;
int64_t x446 = INT64_MAX;
int16_t x457 = 1;
int32_t x463 = INT32_MAX;
int8_t x464 = INT8_MIN;
int8_t x466 = INT8_MIN;
uint8_t x467 = 36U;
int32_t t116 = -52824073;
uint8_t x471 = UINT8_MAX;
int8_t x479 = 23;
volatile int32_t t121 = 1;
int8_t x489 = INT8_MAX;
volatile int32_t x494 = INT32_MIN;
uint64_t x496 = 46451LLU;
volatile int64_t x501 = INT64_MAX;
volatile int32_t t125 = -1;
volatile int8_t x506 = INT8_MAX;
int8_t x508 = 1;
uint32_t x511 = 12U;
int64_t x513 = INT64_MIN;
volatile uint64_t x514 = 507774628873974LLU;
volatile uint16_t x515 = UINT16_MAX;
int32_t x520 = 1;
int8_t x521 = INT8_MIN;
volatile int8_t x522 = INT8_MIN;
int16_t x523 = -1;
int64_t x526 = INT64_MIN;
int16_t x529 = INT16_MIN;
static volatile int32_t t132 = 1;
int8_t x540 = 50;
int8_t x544 = 20;
volatile int32_t t135 = -439;
int16_t x545 = -1635;
static int8_t x548 = 3;
int32_t x549 = INT32_MIN;
volatile int64_t x551 = INT64_MAX;
int64_t x560 = -22LL;
int32_t t139 = 1132;
static int16_t x563 = -137;
volatile int32_t t140 = 24695939;
uint64_t x566 = 328848495625572LLU;
static int8_t x571 = -1;
int32_t x580 = -593651445;
uint16_t x591 = 1U;
int16_t x594 = 3339;
int32_t t148 = -576813;
static volatile int64_t x601 = INT64_MIN;
uint8_t x604 = 17U;
int64_t x605 = -210246538438321LL;
static int32_t x612 = INT32_MIN;
int8_t x613 = -1;
volatile int8_t x616 = INT8_MIN;
static int32_t t153 = 434;
int64_t x623 = INT64_MAX;
int64_t x624 = 10699054111062188LL;
int32_t x628 = -1;
int32_t x629 = INT32_MIN;
static int8_t x634 = 10;
static int32_t x637 = INT32_MIN;
int64_t x641 = 2043880990LL;
int16_t x645 = -1;
int8_t x646 = INT8_MIN;
volatile int32_t t161 = -61844129;
volatile uint8_t x657 = 24U;
volatile int32_t x665 = 31369;
int16_t x676 = -381;
volatile int32_t t168 = 0;
uint16_t x677 = UINT16_MAX;
volatile int64_t x678 = -1LL;
int8_t x680 = INT8_MAX;
int32_t t170 = -8294;
uint16_t x688 = 3U;
int16_t x690 = INT16_MIN;
uint32_t x693 = UINT32_MAX;
volatile int64_t x698 = -15530359619886047LL;
int32_t t174 = 14;
uint8_t x703 = 21U;
static int32_t t176 = 543058770;
uint8_t x714 = 23U;
uint32_t x717 = 82002U;
uint32_t x722 = 0U;
int64_t x727 = INT64_MAX;
uint32_t x730 = 836U;
volatile uint16_t x731 = UINT16_MAX;
static int64_t x745 = -1LL;
volatile uint64_t x746 = 1084606LLU;
int8_t x749 = INT8_MIN;
int32_t x751 = INT32_MIN;
volatile int16_t x753 = -1;
static int16_t x754 = 13;
int8_t x756 = INT8_MAX;
volatile uint16_t x760 = UINT16_MAX;
uint32_t x761 = 3U;
uint32_t x763 = 157U;
int32_t x769 = -1;
volatile int32_t t192 = -426648322;
uint8_t x775 = 8U;
volatile uint16_t x776 = UINT16_MAX;
static int64_t x786 = INT64_MAX;
static int32_t x795 = INT32_MIN;
volatile int16_t x798 = -1;


void f0(void) {
    	uint32_t x2 = UINT32_MAX;
	uint8_t x4 = UINT8_MAX;
	int32_t t0 = -15;

    t0 = (((x1==x2)!=x3)!=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MIN;
	int8_t x6 = -1;
	volatile int64_t x7 = -1LL;
	int32_t t1 = 109581857;

    t1 = (((x5==x6)!=x7)!=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static int64_t x9 = 54853903199819LL;
	int8_t x10 = -1;
	int64_t x11 = -1LL;
	int8_t x12 = -1;
	int32_t t2 = 4165;

    t2 = (((x9==x10)!=x11)!=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x15 = 0;
	int32_t t3 = 124873519;

    t3 = (((x13==x14)!=x15)!=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = 26;
	volatile int32_t x18 = INT32_MAX;
	uint8_t x19 = 3U;
	int64_t x20 = INT64_MAX;

    t4 = (((x17==x18)!=x19)!=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = -49642;
	uint64_t x22 = UINT64_MAX;
	int8_t x23 = INT8_MIN;
	static volatile int64_t x24 = -19151LL;
	static int32_t t5 = 0;

    t5 = (((x21==x22)!=x23)!=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = INT64_MIN;
	uint16_t x27 = 1925U;
	static int32_t t6 = -2;

    t6 = (((x25==x26)!=x27)!=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = UINT16_MAX;
	int8_t x31 = -1;
	uint8_t x32 = 105U;
	int32_t t7 = -6160;

    t7 = (((x29==x30)!=x31)!=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x34 = 1184482;
	int32_t x35 = 7676108;
	uint8_t x36 = 54U;

    t8 = (((x33==x34)!=x35)!=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = -751052LL;
	int8_t x38 = INT8_MIN;
	int8_t x39 = -14;
	int32_t t9 = 27271;

    t9 = (((x37==x38)!=x39)!=x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = -1LL;
	int8_t x42 = -1;
	static int32_t t10 = 471112;

    t10 = (((x41==x42)!=x43)!=x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x45 = 1U;
	volatile int32_t x46 = INT32_MAX;
	volatile int16_t x47 = -15;
	volatile int16_t x48 = -1949;
	volatile int32_t t11 = 51469;

    t11 = (((x45==x46)!=x47)!=x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint16_t x49 = 171U;
	int64_t x50 = -15693061063568LL;
	volatile uint64_t x52 = UINT64_MAX;

    t12 = (((x49==x50)!=x51)!=x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x55 = UINT8_MAX;
	int64_t x56 = INT64_MIN;
	int32_t t13 = -4;

    t13 = (((x53==x54)!=x55)!=x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = -1;
	int8_t x58 = 2;
	int64_t x59 = INT64_MIN;

    t14 = (((x57==x58)!=x59)!=x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x61 = 20;
	volatile int32_t x62 = -1;
	volatile uint8_t x63 = 1U;
	int8_t x64 = INT8_MIN;
	volatile int32_t t15 = 3;

    t15 = (((x61==x62)!=x63)!=x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = -1;
	int64_t x66 = -1LL;
	volatile uint32_t x67 = UINT32_MAX;
	volatile int32_t t16 = -5952551;

    t16 = (((x65==x66)!=x67)!=x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = INT16_MAX;
	int8_t x71 = -1;
	int16_t x72 = INT16_MAX;
	static int32_t t17 = 10497;

    t17 = (((x69==x70)!=x71)!=x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x75 = -1;
	int16_t x76 = 0;
	volatile int32_t t18 = -1892;

    t18 = (((x73==x74)!=x75)!=x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x77 = UINT16_MAX;
	volatile uint64_t x79 = 4747LLU;
	uint64_t x80 = 0LLU;
	volatile int32_t t19 = 7560;

    t19 = (((x77==x78)!=x79)!=x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x81 = UINT32_MAX;
	volatile int32_t x82 = 59;
	static int32_t t20 = -1;

    t20 = (((x81==x82)!=x83)!=x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x85 = INT8_MIN;
	uint16_t x87 = UINT16_MAX;
	static int32_t x88 = 53600;
	volatile int32_t t21 = -169754;

    t21 = (((x85==x86)!=x87)!=x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static int8_t x89 = INT8_MAX;
	int8_t x90 = INT8_MIN;
	uint32_t x91 = 1100U;
	int32_t x92 = INT32_MIN;
	volatile int32_t t22 = 5;

    t22 = (((x89==x90)!=x91)!=x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x93 = -297;
	volatile int16_t x94 = INT16_MIN;
	uint64_t x95 = 126282714255374LLU;
	static int32_t x96 = INT32_MIN;
	static int32_t t23 = -184;

    t23 = (((x93==x94)!=x95)!=x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = 700318;
	static int16_t x99 = 9;
	volatile uint16_t x100 = 695U;
	volatile int32_t t24 = 6635930;

    t24 = (((x97==x98)!=x99)!=x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x101 = INT32_MIN;
	static int32_t x102 = INT32_MIN;
	volatile int8_t x103 = 1;
	int32_t x104 = INT32_MIN;
	static volatile int32_t t25 = 32;

    t25 = (((x101==x102)!=x103)!=x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = -1LL;
	uint8_t x106 = 85U;
	static int8_t x107 = INT8_MIN;
	static uint32_t x108 = UINT32_MAX;

    t26 = (((x105==x106)!=x107)!=x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x110 = 862709842U;
	int64_t x111 = INT64_MIN;
	static uint32_t x112 = 126592338U;
	volatile int32_t t27 = 6;

    t27 = (((x109==x110)!=x111)!=x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x113 = INT32_MAX;
	uint64_t x114 = UINT64_MAX;
	static volatile int32_t x115 = INT32_MAX;
	volatile int32_t x116 = -1;
	volatile int32_t t28 = 9618665;

    t28 = (((x113==x114)!=x115)!=x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x118 = -1LL;
	int64_t x119 = INT64_MIN;

    t29 = (((x117==x118)!=x119)!=x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static int64_t x122 = -1LL;
	int32_t x124 = INT32_MIN;
	static int32_t t30 = -125;

    t30 = (((x121==x122)!=x123)!=x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static int8_t x125 = INT8_MIN;
	int64_t x126 = INT64_MIN;
	int32_t x127 = INT32_MIN;
	uint8_t x128 = 49U;
	int32_t t31 = -258489;

    t31 = (((x125==x126)!=x127)!=x128);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x129 = 594U;
	int64_t x131 = INT64_MIN;
	volatile int32_t t32 = -4441;

    t32 = (((x129==x130)!=x131)!=x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x133 = 12621U;
	static int64_t x134 = -123254234901419LL;
	int8_t x135 = INT8_MIN;
	volatile int32_t t33 = -689074;

    t33 = (((x133==x134)!=x135)!=x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int64_t x138 = -5225LL;
	int8_t x139 = INT8_MAX;
	int16_t x140 = INT16_MIN;
	static volatile int32_t t34 = 337;

    t34 = (((x137==x138)!=x139)!=x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = INT64_MAX;
	int8_t x142 = -1;
	volatile int8_t x143 = -8;
	uint16_t x144 = 23U;

    t35 = (((x141==x142)!=x143)!=x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x146 = INT32_MIN;
	int32_t x147 = 242512035;
	uint64_t x148 = UINT64_MAX;
	volatile int32_t t36 = 114;

    t36 = (((x145==x146)!=x147)!=x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x149 = 61620730U;
	int64_t x150 = INT64_MIN;
	int16_t x151 = INT16_MIN;
	static volatile int8_t x152 = 14;
	int32_t t37 = 235;

    t37 = (((x149==x150)!=x151)!=x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x153 = 948U;
	int8_t x154 = -1;
	int64_t x155 = -1LL;
	uint32_t x156 = UINT32_MAX;
	int32_t t38 = -351726;

    t38 = (((x153==x154)!=x155)!=x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x157 = UINT64_MAX;
	static int32_t x158 = -66;
	int8_t x160 = 12;
	static volatile int32_t t39 = -26341;

    t39 = (((x157==x158)!=x159)!=x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x161 = INT32_MIN;
	uint8_t x163 = 1U;
	volatile int64_t x164 = -1LL;

    t40 = (((x161==x162)!=x163)!=x164);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x168 = -1LL;
	int32_t t41 = 87531;

    t41 = (((x165==x166)!=x167)!=x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x169 = 12558;
	static uint64_t x170 = UINT64_MAX;
	static int8_t x171 = 2;
	uint8_t x172 = UINT8_MAX;
	int32_t t42 = 31914322;

    t42 = (((x169==x170)!=x171)!=x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int64_t x173 = 886338852LL;
	uint64_t x175 = UINT64_MAX;
	volatile int64_t x176 = INT64_MAX;
	int32_t t43 = -50562;

    t43 = (((x173==x174)!=x175)!=x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x177 = INT8_MIN;
	int32_t x178 = INT32_MIN;
	int32_t x179 = INT32_MIN;
	int8_t x180 = INT8_MIN;
	volatile int32_t t44 = -208644523;

    t44 = (((x177==x178)!=x179)!=x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x181 = -1638;
	int8_t x182 = INT8_MIN;
	uint64_t x183 = 346721LLU;
	uint32_t x184 = 678U;

    t45 = (((x181==x182)!=x183)!=x184);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x186 = UINT32_MAX;
	volatile int64_t x187 = 0LL;
	volatile int32_t t46 = -117243230;

    t46 = (((x185==x186)!=x187)!=x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int32_t x189 = INT32_MIN;
	int8_t x191 = INT8_MIN;
	int64_t x192 = -1LL;
	int32_t t47 = 205;

    t47 = (((x189==x190)!=x191)!=x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x194 = 1U;
	int32_t x195 = INT32_MIN;
	int8_t x196 = 28;
	int32_t t48 = -1064958;

    t48 = (((x193==x194)!=x195)!=x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x197 = INT8_MIN;
	volatile uint16_t x198 = 8769U;
	static volatile int16_t x199 = 680;
	volatile int16_t x200 = -1;
	int32_t t49 = -195318;

    t49 = (((x197==x198)!=x199)!=x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x203 = -1;
	static int8_t x204 = INT8_MAX;

    t50 = (((x201==x202)!=x203)!=x204);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x205 = INT32_MIN;
	uint16_t x207 = 17672U;

    t51 = (((x205==x206)!=x207)!=x208);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x209 = -1;
	int32_t x210 = INT32_MAX;
	int16_t x211 = -1;
	uint16_t x212 = 7880U;
	volatile int32_t t52 = 569;

    t52 = (((x209==x210)!=x211)!=x212);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x213 = INT64_MIN;
	volatile int8_t x214 = INT8_MAX;
	uint16_t x215 = UINT16_MAX;
	static int8_t x216 = -7;

    t53 = (((x213==x214)!=x215)!=x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x217 = INT32_MIN;
	volatile int16_t x219 = INT16_MIN;
	volatile uint64_t x220 = 13249312381754LLU;
	volatile int32_t t54 = -7;

    t54 = (((x217==x218)!=x219)!=x220);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static int16_t x221 = INT16_MIN;
	uint64_t x222 = 1520109LLU;
	volatile uint8_t x224 = 25U;
	int32_t t55 = 936442624;

    t55 = (((x221==x222)!=x223)!=x224);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x226 = 6917046163LL;
	uint32_t x227 = UINT32_MAX;
	static uint8_t x228 = 0U;
	static volatile int32_t t56 = -6;

    t56 = (((x225==x226)!=x227)!=x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint8_t x229 = UINT8_MAX;
	volatile uint16_t x230 = 0U;
	int16_t x231 = 0;
	static int64_t x232 = INT64_MAX;
	static int32_t t57 = 278987;

    t57 = (((x229==x230)!=x231)!=x232);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int32_t x233 = 15108;
	static int8_t x234 = INT8_MIN;
	volatile int32_t x235 = -4;
	int64_t x236 = INT64_MAX;

    t58 = (((x233==x234)!=x235)!=x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int8_t x237 = INT8_MIN;
	uint8_t x238 = UINT8_MAX;
	uint8_t x239 = UINT8_MAX;
	uint16_t x240 = 3382U;
	volatile int32_t t59 = 521427;

    t59 = (((x237==x238)!=x239)!=x240);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint16_t x242 = 5721U;
	uint32_t x243 = 174825639U;
	volatile int32_t t60 = 7617845;

    t60 = (((x241==x242)!=x243)!=x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x245 = 5;
	static uint32_t x246 = 51U;
	int64_t x248 = INT64_MIN;

    t61 = (((x245==x246)!=x247)!=x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x249 = INT16_MAX;
	int32_t x250 = INT32_MIN;
	int32_t x252 = -555412381;

    t62 = (((x249==x250)!=x251)!=x252);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int16_t x255 = INT16_MAX;
	int32_t t63 = 211934712;

    t63 = (((x253==x254)!=x255)!=x256);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x257 = INT64_MIN;
	uint64_t x258 = 242972735754370651LLU;
	int64_t x259 = 2652627956831204048LL;
	int32_t x260 = INT32_MAX;
	int32_t t64 = 0;

    t64 = (((x257==x258)!=x259)!=x260);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x261 = -1;
	static uint8_t x262 = 101U;
	int64_t x263 = -1LL;
	uint32_t x264 = 74934981U;
	int32_t t65 = 19993;

    t65 = (((x261==x262)!=x263)!=x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int32_t x265 = -1;
	int64_t x266 = 111124LL;
	int64_t x267 = -1845LL;
	volatile int32_t t66 = -1268;

    t66 = (((x265==x266)!=x267)!=x268);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x271 = INT32_MIN;
	int64_t x272 = -1LL;
	int32_t t67 = 85524;

    t67 = (((x269==x270)!=x271)!=x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x274 = UINT32_MAX;
	static int8_t x276 = 0;
	int32_t t68 = 702333;

    t68 = (((x273==x274)!=x275)!=x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x277 = INT64_MIN;
	uint64_t x278 = 511LLU;
	volatile int16_t x280 = 13;
	int32_t t69 = -872742;

    t69 = (((x277==x278)!=x279)!=x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x281 = -22931;
	int16_t x282 = -1;
	volatile uint64_t x284 = UINT64_MAX;
	int32_t t70 = 115;

    t70 = (((x281==x282)!=x283)!=x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint8_t x285 = 34U;
	uint8_t x286 = 1U;
	uint32_t x287 = 2671612U;
	uint32_t x288 = 39312U;

    t71 = (((x285==x286)!=x287)!=x288);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x289 = UINT8_MAX;
	int64_t x290 = 81276134LL;
	static uint64_t x291 = 14024824637198LLU;
	static volatile int64_t x292 = INT64_MIN;

    t72 = (((x289==x290)!=x291)!=x292);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x293 = INT64_MAX;
	volatile uint32_t x294 = 21U;
	static int32_t x295 = INT32_MAX;
	uint8_t x296 = UINT8_MAX;
	volatile int32_t t73 = -806662169;

    t73 = (((x293==x294)!=x295)!=x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static int32_t x297 = INT32_MIN;
	int8_t x298 = 0;
	uint64_t x299 = 514706144LLU;
	int64_t x300 = -148964215551059048LL;

    t74 = (((x297==x298)!=x299)!=x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x301 = INT16_MIN;
	int64_t x302 = -182360LL;

    t75 = (((x301==x302)!=x303)!=x304);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x305 = 779907274U;
	static uint16_t x306 = 0U;
	static int64_t x307 = 598646982357747621LL;
	static uint32_t x308 = UINT32_MAX;

    t76 = (((x305==x306)!=x307)!=x308);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint8_t x309 = UINT8_MAX;
	int32_t x311 = INT32_MAX;
	int32_t t77 = 25765380;

    t77 = (((x309==x310)!=x311)!=x312);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x313 = -1;
	uint8_t x314 = UINT8_MAX;
	uint8_t x315 = UINT8_MAX;
	uint8_t x316 = 41U;

    t78 = (((x313==x314)!=x315)!=x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x317 = UINT64_MAX;
	static int32_t x318 = INT32_MAX;
	int8_t x319 = -1;
	volatile uint64_t x320 = 226442936LLU;
	volatile int32_t t79 = 7;

    t79 = (((x317==x318)!=x319)!=x320);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x321 = -4980680521617LL;
	uint32_t x322 = 10U;
	static uint64_t x323 = 4967557854779LLU;
	uint8_t x324 = UINT8_MAX;
	int32_t t80 = 201417820;

    t80 = (((x321==x322)!=x323)!=x324);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x325 = INT64_MIN;
	int32_t x327 = INT32_MAX;
	volatile int16_t x328 = 1;
	static int32_t t81 = 6;

    t81 = (((x325==x326)!=x327)!=x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x329 = INT16_MAX;
	int16_t x330 = -13810;
	int32_t x331 = INT32_MAX;
	static uint32_t x332 = 2U;
	volatile int32_t t82 = 0;

    t82 = (((x329==x330)!=x331)!=x332);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int8_t x333 = -1;
	volatile int8_t x334 = INT8_MAX;
	int16_t x336 = INT16_MAX;
	int32_t t83 = -7;

    t83 = (((x333==x334)!=x335)!=x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x337 = 52489031U;
	static uint32_t x338 = 240U;
	volatile int64_t x339 = -1LL;
	int32_t x340 = -109032063;
	static int32_t t84 = -402207522;

    t84 = (((x337==x338)!=x339)!=x340);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static int16_t x342 = INT16_MAX;
	int32_t x343 = -7305287;
	int16_t x344 = 15443;
	int32_t t85 = -832304;

    t85 = (((x341==x342)!=x343)!=x344);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x345 = INT64_MAX;
	uint32_t x346 = 866U;
	int64_t x347 = -1296922LL;
	int64_t x348 = INT64_MIN;
	volatile int32_t t86 = -43;

    t86 = (((x345==x346)!=x347)!=x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x349 = 4173923777278293489LLU;
	uint64_t x350 = UINT64_MAX;
	static uint64_t x351 = UINT64_MAX;
	int8_t x352 = INT8_MIN;
	volatile int32_t t87 = 1;

    t87 = (((x349==x350)!=x351)!=x352);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x353 = INT64_MIN;
	static int64_t x354 = -11834LL;
	int64_t x355 = INT64_MIN;
	uint32_t x356 = 28785233U;
	volatile int32_t t88 = -1577439;

    t88 = (((x353==x354)!=x355)!=x356);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x357 = 6962112567LL;
	int8_t x358 = -3;
	static int16_t x359 = INT16_MIN;
	volatile int32_t t89 = -20;

    t89 = (((x357==x358)!=x359)!=x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x361 = 62324111U;
	uint8_t x362 = 120U;

    t90 = (((x361==x362)!=x363)!=x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x366 = INT16_MAX;
	int16_t x367 = -76;
	int32_t x368 = -1;

    t91 = (((x365==x366)!=x367)!=x368);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint16_t x369 = 590U;
	int32_t x370 = 3866644;
	int8_t x371 = -1;
	static int32_t x372 = 707983320;
	volatile int32_t t92 = -528;

    t92 = (((x369==x370)!=x371)!=x372);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint64_t x373 = UINT64_MAX;
	uint16_t x375 = UINT16_MAX;
	int16_t x376 = 7445;

    t93 = (((x373==x374)!=x375)!=x376);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x380 = 21U;
	volatile int32_t t94 = 1826385;

    t94 = (((x377==x378)!=x379)!=x380);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x382 = 2U;
	volatile int32_t x383 = -1771;
	int32_t t95 = 34;

    t95 = (((x381==x382)!=x383)!=x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x385 = 426U;
	static int64_t x386 = INT64_MIN;
	int32_t x387 = INT32_MIN;
	uint64_t x388 = UINT64_MAX;
	volatile int32_t t96 = 182406011;

    t96 = (((x385==x386)!=x387)!=x388);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x391 = -1;
	int32_t x392 = 81346;
	int32_t t97 = 37816;

    t97 = (((x389==x390)!=x391)!=x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x393 = INT16_MIN;
	int32_t x394 = INT32_MIN;
	static uint32_t x395 = 3U;
	uint16_t x396 = UINT16_MAX;
	volatile int32_t t98 = -191153186;

    t98 = (((x393==x394)!=x395)!=x396);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x397 = INT64_MIN;
	int64_t x398 = -56693482058LL;
	uint64_t x399 = 236063711516595LLU;
	static int64_t x400 = -1LL;
	volatile int32_t t99 = -115428205;

    t99 = (((x397==x398)!=x399)!=x400);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = INT16_MIN;
	uint16_t x402 = 0U;
	static int8_t x403 = -1;

    t100 = (((x401==x402)!=x403)!=x404);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x405 = UINT32_MAX;
	static volatile int8_t x406 = INT8_MIN;
	volatile uint32_t x407 = 102U;
	volatile int32_t t101 = -1;

    t101 = (((x405==x406)!=x407)!=x408);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int8_t x409 = INT8_MIN;
	int8_t x410 = -12;
	uint8_t x411 = 9U;
	int64_t x412 = INT64_MIN;
	int32_t t102 = 7752;

    t102 = (((x409==x410)!=x411)!=x412);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x413 = -1;
	volatile int8_t x414 = INT8_MIN;
	int64_t x415 = -1LL;
	static int32_t x416 = -79232;
	static volatile int32_t t103 = 1968;

    t103 = (((x413==x414)!=x415)!=x416);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static int32_t x417 = INT32_MIN;
	static volatile int64_t x418 = -13LL;
	int64_t x419 = INT64_MAX;
	int8_t x420 = INT8_MIN;
	int32_t t104 = -1390422;

    t104 = (((x417==x418)!=x419)!=x420);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x422 = 19;
	int32_t x424 = 503435;
	int32_t t105 = -38946570;

    t105 = (((x421==x422)!=x423)!=x424);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int8_t x425 = -14;
	int32_t x426 = -1;
	int16_t x428 = -7187;

    t106 = (((x425==x426)!=x427)!=x428);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint16_t x431 = UINT16_MAX;
	int16_t x432 = INT16_MIN;
	static volatile int32_t t107 = 0;

    t107 = (((x429==x430)!=x431)!=x432);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x434 = INT64_MIN;
	int32_t x436 = INT32_MIN;
	static int32_t t108 = -163509;

    t108 = (((x433==x434)!=x435)!=x436);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint32_t x438 = UINT32_MAX;
	uint8_t x439 = 2U;
	int16_t x440 = 125;
	int32_t t109 = 41514;

    t109 = (((x437==x438)!=x439)!=x440);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int64_t x441 = 1727246724780LL;
	volatile int16_t x443 = INT16_MIN;
	volatile uint32_t x444 = 2938660U;

    t110 = (((x441==x442)!=x443)!=x444);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x445 = INT16_MIN;
	volatile uint16_t x447 = 3400U;
	static int16_t x448 = 0;
	volatile int32_t t111 = 39;

    t111 = (((x445==x446)!=x447)!=x448);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x449 = INT8_MIN;
	volatile int64_t x450 = -1LL;
	static int16_t x451 = -76;
	uint64_t x452 = 252275LLU;
	volatile int32_t t112 = -140628619;

    t112 = (((x449==x450)!=x451)!=x452);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x453 = 33;
	int8_t x454 = INT8_MIN;
	volatile int8_t x455 = -1;
	static int8_t x456 = INT8_MIN;
	static volatile int32_t t113 = 9916;

    t113 = (((x453==x454)!=x455)!=x456);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x458 = INT64_MIN;
	volatile int32_t x459 = INT32_MIN;
	static int16_t x460 = INT16_MIN;
	int32_t t114 = 487680;

    t114 = (((x457==x458)!=x459)!=x460);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x461 = 72U;
	int64_t x462 = -596287227LL;
	int32_t t115 = 430;

    t115 = (((x461==x462)!=x463)!=x464);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x465 = -7337;
	static int64_t x468 = INT64_MIN;

    t116 = (((x465==x466)!=x467)!=x468);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x469 = -1LL;
	static int64_t x470 = -1LL;
	static uint32_t x472 = 839158461U;
	volatile int32_t t117 = 50567466;

    t117 = (((x469==x470)!=x471)!=x472);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x473 = UINT32_MAX;
	int8_t x474 = -1;
	uint64_t x475 = UINT64_MAX;
	int64_t x476 = -1LL;
	static volatile int32_t t118 = -761733048;

    t118 = (((x473==x474)!=x475)!=x476);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile uint64_t x477 = UINT64_MAX;
	volatile int32_t x478 = -1;
	uint32_t x480 = UINT32_MAX;
	volatile int32_t t119 = 269;

    t119 = (((x477==x478)!=x479)!=x480);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static int64_t x481 = 1492195843522168396LL;
	volatile int16_t x482 = INT16_MIN;
	volatile int8_t x483 = 0;
	volatile int16_t x484 = INT16_MIN;
	volatile int32_t t120 = -517653;

    t120 = (((x481==x482)!=x483)!=x484);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x485 = INT32_MAX;
	volatile int32_t x486 = 17;
	static int8_t x487 = 19;
	volatile int64_t x488 = -1LL;

    t121 = (((x485==x486)!=x487)!=x488);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x490 = INT8_MAX;
	int32_t x491 = INT32_MAX;
	int16_t x492 = INT16_MIN;
	static int32_t t122 = -14;

    t122 = (((x489==x490)!=x491)!=x492);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x493 = 4164871811LLU;
	int8_t x495 = -1;
	volatile int32_t t123 = -53694;

    t123 = (((x493==x494)!=x495)!=x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x497 = -9680;
	int8_t x498 = INT8_MIN;
	volatile uint16_t x499 = UINT16_MAX;
	int64_t x500 = 0LL;
	int32_t t124 = 74;

    t124 = (((x497==x498)!=x499)!=x500);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x502 = INT32_MIN;
	int8_t x503 = -7;
	volatile int64_t x504 = INT64_MIN;

    t125 = (((x501==x502)!=x503)!=x504);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x505 = UINT8_MAX;
	uint16_t x507 = UINT16_MAX;
	volatile int32_t t126 = 453415;

    t126 = (((x505==x506)!=x507)!=x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x509 = -967114829LL;
	int16_t x510 = 6;
	int64_t x512 = -1LL;
	volatile int32_t t127 = 17467;

    t127 = (((x509==x510)!=x511)!=x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x516 = INT8_MIN;
	volatile int32_t t128 = -415505;

    t128 = (((x513==x514)!=x515)!=x516);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x517 = INT8_MIN;
	volatile int32_t x518 = 7;
	int16_t x519 = -1;
	volatile int32_t t129 = -1397;

    t129 = (((x517==x518)!=x519)!=x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x524 = -1;
	volatile int32_t t130 = 0;

    t130 = (((x521==x522)!=x523)!=x524);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int8_t x525 = INT8_MIN;
	int8_t x527 = -1;
	int32_t x528 = INT32_MAX;
	int32_t t131 = -102436;

    t131 = (((x525==x526)!=x527)!=x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x530 = 1U;
	int16_t x531 = INT16_MIN;
	int8_t x532 = INT8_MIN;

    t132 = (((x529==x530)!=x531)!=x532);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x533 = -1;
	int16_t x534 = INT16_MIN;
	int8_t x535 = INT8_MIN;
	int8_t x536 = INT8_MIN;
	volatile int32_t t133 = 1451213;

    t133 = (((x533==x534)!=x535)!=x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static int64_t x537 = -13619965LL;
	int16_t x538 = INT16_MIN;
	static volatile int32_t x539 = INT32_MIN;
	static int32_t t134 = 257501;

    t134 = (((x537==x538)!=x539)!=x540);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x541 = INT32_MAX;
	int64_t x542 = INT64_MIN;
	int64_t x543 = INT64_MAX;

    t135 = (((x541==x542)!=x543)!=x544);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint8_t x546 = 8U;
	uint8_t x547 = 53U;
	int32_t t136 = 2142655;

    t136 = (((x545==x546)!=x547)!=x548);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static int64_t x550 = INT64_MAX;
	int64_t x552 = -1LL;
	int32_t t137 = -1597338;

    t137 = (((x549==x550)!=x551)!=x552);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x553 = UINT32_MAX;
	uint16_t x554 = 7U;
	uint16_t x555 = 83U;
	int32_t x556 = INT32_MIN;
	volatile int32_t t138 = 1;

    t138 = (((x553==x554)!=x555)!=x556);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x557 = INT64_MAX;
	int64_t x558 = -1LL;
	uint8_t x559 = 5U;

    t139 = (((x557==x558)!=x559)!=x560);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x561 = 13635;
	volatile uint8_t x562 = 2U;
	int32_t x564 = INT32_MAX;

    t140 = (((x561==x562)!=x563)!=x564);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x565 = INT32_MIN;
	uint8_t x567 = UINT8_MAX;
	int16_t x568 = -232;
	volatile int32_t t141 = -658548314;

    t141 = (((x565==x566)!=x567)!=x568);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x569 = INT16_MIN;
	int32_t x570 = INT32_MIN;
	int32_t x572 = INT32_MIN;
	static volatile int32_t t142 = -20728;

    t142 = (((x569==x570)!=x571)!=x572);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x573 = INT16_MAX;
	int64_t x574 = INT64_MAX;
	int32_t x575 = -1;
	static int32_t x576 = INT32_MAX;
	int32_t t143 = 1;

    t143 = (((x573==x574)!=x575)!=x576);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x577 = INT64_MIN;
	uint16_t x578 = UINT16_MAX;
	int64_t x579 = -1LL;
	static int32_t t144 = -257573366;

    t144 = (((x577==x578)!=x579)!=x580);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x581 = UINT32_MAX;
	uint32_t x582 = 1U;
	int32_t x583 = INT32_MIN;
	int64_t x584 = 365956507LL;
	volatile int32_t t145 = 1;

    t145 = (((x581==x582)!=x583)!=x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x585 = INT8_MIN;
	int32_t x586 = -1;
	uint8_t x587 = UINT8_MAX;
	volatile uint8_t x588 = 3U;
	volatile int32_t t146 = 390145;

    t146 = (((x585==x586)!=x587)!=x588);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static int32_t x589 = -1;
	volatile int8_t x590 = INT8_MAX;
	static volatile int8_t x592 = 2;
	volatile int32_t t147 = -6680;

    t147 = (((x589==x590)!=x591)!=x592);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x593 = INT16_MAX;
	int16_t x595 = -20;
	int64_t x596 = INT64_MAX;

    t148 = (((x593==x594)!=x595)!=x596);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x597 = -1;
	int8_t x598 = -1;
	int32_t x599 = INT32_MAX;
	int32_t x600 = -2910;
	int32_t t149 = -4944;

    t149 = (((x597==x598)!=x599)!=x600);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x602 = INT16_MIN;
	int8_t x603 = -1;
	volatile int32_t t150 = -1474;

    t150 = (((x601==x602)!=x603)!=x604);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x606 = INT16_MIN;
	int16_t x607 = INT16_MIN;
	volatile uint64_t x608 = UINT64_MAX;
	int32_t t151 = 78880110;

    t151 = (((x605==x606)!=x607)!=x608);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x609 = 1084;
	static uint64_t x610 = 2494908736389826753LLU;
	static uint32_t x611 = UINT32_MAX;
	static volatile int32_t t152 = -4460;

    t152 = (((x609==x610)!=x611)!=x612);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static int16_t x614 = -1;
	int8_t x615 = INT8_MIN;

    t153 = (((x613==x614)!=x615)!=x616);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static int32_t x617 = -1;
	uint32_t x618 = UINT32_MAX;
	static int16_t x619 = -1;
	int8_t x620 = INT8_MIN;
	static int32_t t154 = -108;

    t154 = (((x617==x618)!=x619)!=x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static int64_t x621 = INT64_MIN;
	volatile uint16_t x622 = 0U;
	volatile int32_t t155 = 564;

    t155 = (((x621==x622)!=x623)!=x624);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x625 = -257451262LL;
	static int16_t x626 = 165;
	int64_t x627 = 1088509LL;
	static volatile int32_t t156 = -433656;

    t156 = (((x625==x626)!=x627)!=x628);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile int32_t x630 = INT32_MIN;
	int64_t x631 = INT64_MAX;
	int32_t x632 = INT32_MIN;
	volatile int32_t t157 = -3246931;

    t157 = (((x629==x630)!=x631)!=x632);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x633 = INT32_MIN;
	uint64_t x635 = 21534790900LLU;
	static int16_t x636 = INT16_MAX;
	volatile int32_t t158 = -28917943;

    t158 = (((x633==x634)!=x635)!=x636);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x638 = 51666LL;
	int8_t x639 = -47;
	uint8_t x640 = 11U;
	int32_t t159 = -67;

    t159 = (((x637==x638)!=x639)!=x640);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int32_t x642 = 12286579;
	int32_t x643 = -1;
	int32_t x644 = INT32_MIN;
	int32_t t160 = 338;

    t160 = (((x641==x642)!=x643)!=x644);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x647 = UINT64_MAX;
	int16_t x648 = INT16_MIN;

    t161 = (((x645==x646)!=x647)!=x648);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x649 = 12124538U;
	int16_t x650 = INT16_MAX;
	volatile uint64_t x651 = UINT64_MAX;
	int32_t x652 = -1;
	int32_t t162 = -479856;

    t162 = (((x649==x650)!=x651)!=x652);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x653 = 1;
	static int16_t x654 = -1;
	int32_t x655 = INT32_MIN;
	uint8_t x656 = 33U;
	int32_t t163 = 173;

    t163 = (((x653==x654)!=x655)!=x656);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x658 = INT32_MAX;
	static uint64_t x659 = UINT64_MAX;
	int16_t x660 = -1;
	volatile int32_t t164 = 2197;

    t164 = (((x657==x658)!=x659)!=x660);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = -72LL;
	static int64_t x662 = 348975LL;
	int16_t x663 = -1;
	static int32_t x664 = INT32_MIN;
	static int32_t t165 = 22923;

    t165 = (((x661==x662)!=x663)!=x664);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x666 = UINT16_MAX;
	static uint64_t x667 = 97713760181204770LLU;
	int64_t x668 = 588608386004LL;
	static volatile int32_t t166 = 23583;

    t166 = (((x665==x666)!=x667)!=x668);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x669 = -6;
	int32_t x670 = INT32_MIN;
	uint16_t x671 = 104U;
	uint64_t x672 = 123599899677361LLU;
	volatile int32_t t167 = -8338398;

    t167 = (((x669==x670)!=x671)!=x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x673 = -1;
	volatile int32_t x674 = 0;
	static int64_t x675 = -163276457423LL;

    t168 = (((x673==x674)!=x675)!=x676);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x679 = 4739U;
	volatile int32_t t169 = 753986;

    t169 = (((x677==x678)!=x679)!=x680);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x681 = INT64_MAX;
	volatile uint64_t x682 = UINT64_MAX;
	static int32_t x683 = INT32_MAX;
	static uint8_t x684 = 1U;

    t170 = (((x681==x682)!=x683)!=x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x685 = -1;
	uint64_t x686 = UINT64_MAX;
	static int64_t x687 = INT64_MAX;
	static volatile int32_t t171 = 3168942;

    t171 = (((x685==x686)!=x687)!=x688);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x689 = INT32_MIN;
	volatile int32_t x691 = -2554;
	int64_t x692 = -1LL;
	int32_t t172 = 47703;

    t172 = (((x689==x690)!=x691)!=x692);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x694 = 30565U;
	static uint32_t x695 = 6064903U;
	static int16_t x696 = INT16_MIN;
	int32_t t173 = 14226760;

    t173 = (((x693==x694)!=x695)!=x696);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x697 = -1;
	int8_t x699 = -1;
	int64_t x700 = -661LL;

    t174 = (((x697==x698)!=x699)!=x700);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x701 = INT8_MIN;
	uint16_t x702 = UINT16_MAX;
	int64_t x704 = 30LL;
	int32_t t175 = 25;

    t175 = (((x701==x702)!=x703)!=x704);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x705 = INT64_MIN;
	uint16_t x706 = 4284U;
	int32_t x707 = -1;
	int16_t x708 = -3;

    t176 = (((x705==x706)!=x707)!=x708);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint16_t x709 = 14315U;
	int8_t x710 = INT8_MIN;
	uint64_t x711 = 11603434418924135LLU;
	volatile int16_t x712 = INT16_MAX;
	static volatile int32_t t177 = -3292;

    t177 = (((x709==x710)!=x711)!=x712);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x713 = 791188985868311410LLU;
	uint32_t x715 = 775U;
	volatile int64_t x716 = INT64_MIN;
	volatile int32_t t178 = -378156007;

    t178 = (((x713==x714)!=x715)!=x716);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static int32_t x718 = INT32_MIN;
	static int16_t x719 = -1;
	volatile int32_t x720 = INT32_MIN;
	static int32_t t179 = 391705;

    t179 = (((x717==x718)!=x719)!=x720);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint8_t x721 = 110U;
	static uint64_t x723 = UINT64_MAX;
	uint8_t x724 = 88U;
	volatile int32_t t180 = -31977;

    t180 = (((x721==x722)!=x723)!=x724);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile uint16_t x725 = 185U;
	int64_t x726 = INT64_MIN;
	int64_t x728 = -1927975LL;
	int32_t t181 = 90647;

    t181 = (((x725==x726)!=x727)!=x728);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x729 = -1;
	uint64_t x732 = 31025243950030366LLU;
	int32_t t182 = 73;

    t182 = (((x729==x730)!=x731)!=x732);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x733 = 9959LL;
	uint16_t x734 = UINT16_MAX;
	uint64_t x735 = 58662LLU;
	int16_t x736 = INT16_MAX;
	volatile int32_t t183 = -404571;

    t183 = (((x733==x734)!=x735)!=x736);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x737 = 5327269329092LLU;
	volatile int8_t x738 = -8;
	int8_t x739 = INT8_MAX;
	uint16_t x740 = 5974U;
	int32_t t184 = -728461;

    t184 = (((x737==x738)!=x739)!=x740);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x741 = INT64_MIN;
	int8_t x742 = 14;
	int64_t x743 = INT64_MAX;
	volatile int8_t x744 = -1;
	int32_t t185 = 18;

    t185 = (((x741==x742)!=x743)!=x744);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x747 = 676386;
	int32_t x748 = -691;
	volatile int32_t t186 = 60520145;

    t186 = (((x745==x746)!=x747)!=x748);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int16_t x750 = -26;
	uint32_t x752 = 162840U;
	volatile int32_t t187 = -6;

    t187 = (((x749==x750)!=x751)!=x752);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x755 = 0U;
	int32_t t188 = -7;

    t188 = (((x753==x754)!=x755)!=x756);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x757 = -1;
	uint8_t x758 = 0U;
	static int32_t x759 = -3027192;
	volatile int32_t t189 = 49647;

    t189 = (((x757==x758)!=x759)!=x760);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int8_t x762 = -1;
	static int16_t x764 = -2;
	int32_t t190 = -193580678;

    t190 = (((x761==x762)!=x763)!=x764);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x765 = UINT32_MAX;
	int16_t x766 = -10;
	int64_t x767 = INT64_MIN;
	static uint64_t x768 = UINT64_MAX;
	static volatile int32_t t191 = -835408;

    t191 = (((x765==x766)!=x767)!=x768);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x770 = 0;
	int16_t x771 = -1;
	int16_t x772 = -1;

    t192 = (((x769==x770)!=x771)!=x772);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x773 = 50;
	int16_t x774 = 11187;
	volatile int32_t t193 = 7;

    t193 = (((x773==x774)!=x775)!=x776);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x777 = INT8_MAX;
	int16_t x778 = -15654;
	static int16_t x779 = 1;
	int8_t x780 = 6;
	int32_t t194 = -702806509;

    t194 = (((x777==x778)!=x779)!=x780);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x781 = -1;
	volatile int32_t x782 = 92171364;
	int8_t x783 = -1;
	int64_t x784 = -1LL;
	int32_t t195 = -19143;

    t195 = (((x781==x782)!=x783)!=x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int64_t x785 = INT64_MIN;
	int8_t x787 = INT8_MIN;
	static int32_t x788 = 39875;
	static int32_t t196 = 859330;

    t196 = (((x785==x786)!=x787)!=x788);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x789 = UINT8_MAX;
	int8_t x790 = INT8_MIN;
	uint32_t x791 = 307308U;
	int8_t x792 = INT8_MIN;
	int32_t t197 = -599791;

    t197 = (((x789==x790)!=x791)!=x792);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint16_t x793 = 3248U;
	int32_t x794 = INT32_MAX;
	int16_t x796 = -1;
	int32_t t198 = -410;

    t198 = (((x793==x794)!=x795)!=x796);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static int32_t x797 = 751375687;
	static volatile int16_t x799 = 14;
	int64_t x800 = INT64_MIN;
	int32_t t199 = -1824724;

    t199 = (((x797==x798)!=x799)!=x800);

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

