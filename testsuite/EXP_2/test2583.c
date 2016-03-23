
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

int16_t x2 = INT16_MAX;
uint8_t x3 = UINT8_MAX;
volatile uint8_t x5 = 0U;
static int64_t x8 = 56012LL;
int8_t x13 = -16;
static int16_t x14 = -795;
volatile uint64_t x24 = 237807252780338124LLU;
uint32_t x28 = UINT32_MAX;
int32_t t6 = -266741862;
int32_t x29 = -1;
volatile int32_t t7 = -218037761;
int8_t x36 = INT8_MIN;
uint64_t x41 = 190350509472LLU;
int16_t x42 = -104;
volatile uint64_t x46 = 24032806489580LLU;
int8_t x47 = -30;
int16_t x52 = INT16_MAX;
volatile int32_t t11 = -118642065;
volatile int32_t t12 = 2;
int32_t t15 = -289777;
volatile uint16_t x77 = 320U;
volatile uint32_t x80 = 11U;
volatile int32_t t17 = 249;
int64_t x110 = -59286367LL;
uint32_t x117 = 187863053U;
static int16_t x121 = -1;
static uint8_t x125 = 6U;
int16_t x126 = INT16_MIN;
uint32_t x128 = 7U;
int64_t x129 = 1472640364787LL;
static int16_t x130 = INT16_MAX;
int32_t x133 = -135264916;
int8_t x138 = -1;
int16_t x140 = INT16_MIN;
volatile int32_t x144 = INT32_MAX;
int16_t x146 = INT16_MIN;
int8_t x154 = -1;
int16_t x155 = -1;
volatile int16_t x161 = -1;
volatile int8_t x162 = INT8_MAX;
int8_t x167 = -1;
volatile int32_t t37 = -545;
volatile uint16_t x189 = 246U;
volatile int64_t x191 = 244876236LL;
int16_t x192 = INT16_MAX;
int16_t x193 = -1;
int32_t x194 = INT32_MAX;
int16_t x206 = -6;
int32_t t46 = 54;
static int16_t x216 = -1;
uint32_t x218 = UINT32_MAX;
volatile uint64_t x219 = UINT64_MAX;
int32_t x221 = INT32_MIN;
int64_t x229 = INT64_MAX;
static volatile int32_t t52 = 282439732;
static int32_t x256 = INT32_MIN;
int32_t t53 = 1305;
uint8_t x267 = 1U;
int32_t t56 = -1539;
volatile uint32_t x270 = 1U;
int16_t x272 = INT16_MAX;
int64_t x281 = -73LL;
static uint32_t x290 = 1460894372U;
volatile int32_t x297 = INT32_MIN;
int32_t x304 = INT32_MAX;
int32_t t65 = 143;
uint8_t x328 = 3U;
static volatile int8_t x332 = INT8_MAX;
static volatile int32_t t68 = -8124;
int16_t x335 = INT16_MAX;
volatile int32_t t69 = -83446;
static volatile int16_t x340 = 381;
uint64_t x341 = 140579LLU;
int16_t x345 = -1;
int64_t x348 = INT64_MAX;
volatile int16_t x350 = INT16_MIN;
volatile int16_t x351 = -1;
int32_t t73 = -59617;
static volatile uint64_t x355 = UINT64_MAX;
int32_t t74 = -2;
static uint8_t x359 = 34U;
int16_t x364 = INT16_MAX;
uint32_t x376 = 12U;
int32_t x392 = INT32_MIN;
int16_t x398 = -19;
uint16_t x403 = UINT16_MAX;
static volatile uint64_t x426 = 4LLU;
static int32_t t85 = 207640;
int32_t x443 = INT32_MAX;
volatile int32_t t88 = 1;
volatile int16_t x445 = -40;
uint64_t x446 = 1489158795473LLU;
static volatile int32_t x447 = INT32_MIN;
int8_t x457 = INT8_MIN;
int8_t x459 = -5;
static volatile int16_t x471 = INT16_MAX;
int64_t x474 = 60432235965LL;
uint64_t x478 = UINT64_MAX;
uint32_t x479 = 5957649U;
static volatile int32_t t95 = -32795;
uint64_t x483 = 23246802030319374LLU;
int8_t x485 = -1;
static volatile int32_t t97 = -771648;
volatile uint64_t x490 = 13262511760LLU;
int32_t x497 = -1;
volatile int32_t t99 = 0;
static int32_t x509 = -1;
volatile int64_t x510 = -7611387431LL;
volatile int64_t x512 = -1LL;
static int8_t x515 = INT8_MIN;
static int8_t x519 = INT8_MAX;
int16_t x526 = INT16_MAX;
int16_t x527 = INT16_MIN;
int64_t x528 = -1LL;
volatile int32_t t103 = 2;
int64_t x531 = -1LL;
volatile uint64_t x537 = 5429728LLU;
int16_t x538 = -1;
volatile int32_t x542 = -1;
int16_t x543 = -1;
int32_t x545 = INT32_MIN;
int32_t t108 = 604;
uint16_t x549 = 13U;
int32_t t109 = -94152149;
int16_t x559 = INT16_MIN;
uint16_t x560 = UINT16_MAX;
int16_t x561 = INT16_MAX;
static volatile int64_t x578 = 20LL;
static int8_t x583 = INT8_MAX;
uint32_t x584 = 85078492U;
static uint16_t x586 = 7753U;
int32_t t115 = 164756931;
volatile uint16_t x595 = 3U;
int32_t x600 = INT32_MIN;
int8_t x615 = INT8_MIN;
static int8_t x616 = -1;
int32_t x619 = -17;
int16_t x620 = INT16_MIN;
int8_t x627 = -19;
int32_t x634 = -1;
static uint32_t x642 = 162472U;
int8_t x643 = -2;
static volatile int32_t t126 = -69179516;
static volatile int32_t t127 = 1680269;
volatile int32_t x663 = -54173;
uint8_t x664 = UINT8_MAX;
int32_t x666 = 10;
uint16_t x682 = UINT16_MAX;
int8_t x685 = 1;
uint16_t x686 = UINT16_MAX;
volatile int16_t x690 = 2;
int32_t x692 = INT32_MIN;
static uint8_t x698 = 3U;
int32_t t134 = 1;
int8_t x704 = INT8_MIN;
uint16_t x716 = UINT16_MAX;
static int8_t x717 = 1;
int64_t x726 = -1LL;
static int16_t x738 = INT16_MIN;
volatile int16_t x743 = INT16_MIN;
uint64_t x745 = 614636998102LLU;
int32_t t143 = 183918519;
int8_t x752 = -29;
static uint64_t x758 = 1544467982LLU;
volatile uint16_t x760 = 49U;
int32_t t146 = 15664499;
int64_t x778 = -1374645291LL;
static uint8_t x779 = UINT8_MAX;
int16_t x784 = -1;
volatile int32_t t149 = -82551;
volatile int64_t x796 = INT64_MAX;
int8_t x798 = INT8_MAX;
int32_t t151 = -3;
int16_t x808 = INT16_MIN;
volatile int32_t t153 = -239995;
int8_t x812 = INT8_MAX;
volatile int32_t t154 = -693;
static int8_t x819 = 14;
uint16_t x820 = 1348U;
int32_t t155 = -30271;
uint16_t x826 = 3U;
uint64_t x827 = 260187320LLU;
int8_t x846 = -1;
int32_t t159 = -3;
int32_t t161 = -7;
int32_t t164 = 0;
int8_t x880 = -15;
static volatile int32_t t166 = -3218;
volatile int32_t x886 = INT32_MIN;
uint32_t x888 = 108896306U;
int32_t x889 = INT32_MAX;
uint64_t x898 = 427473018961555LLU;
int16_t x904 = 0;
volatile uint16_t x907 = 1758U;
uint16_t x912 = UINT16_MAX;
volatile int16_t x914 = INT16_MAX;
volatile int16_t x934 = INT16_MAX;
int8_t x937 = -1;
int32_t x939 = 0;
int8_t x949 = INT8_MAX;
uint16_t x954 = 766U;
int32_t t183 = -24519355;
volatile int16_t x960 = INT16_MIN;
static int64_t x968 = INT64_MAX;
int32_t t186 = 1;
static int64_t x972 = -31215LL;
int64_t x974 = 224200333895941LL;
int32_t x987 = -1;
uint32_t x988 = UINT32_MAX;
uint16_t x1002 = 1U;
volatile uint64_t x1003 = 0LLU;
volatile int32_t x1008 = -1;
static int8_t x1011 = INT8_MAX;
int8_t x1013 = 3;
int32_t x1015 = -4;
int32_t x1020 = -3;


void f0(void) {
    	int16_t x1 = -1;
	int16_t x4 = INT16_MIN;
	volatile int32_t t0 = -47;

    t0 = ((x1*(x2^x3))!=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x6 = INT16_MIN;
	int16_t x7 = INT16_MAX;
	volatile int32_t t1 = 2429;

    t1 = ((x5*(x6^x7))!=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint8_t x9 = 11U;
	int8_t x10 = INT8_MIN;
	uint32_t x11 = UINT32_MAX;
	int64_t x12 = INT64_MIN;
	static int32_t t2 = -50859;

    t2 = ((x9*(x10^x11))!=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x15 = 3U;
	static volatile uint32_t x16 = 11836994U;
	volatile int32_t t3 = -189713709;

    t3 = ((x13*(x14^x15))!=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = INT8_MAX;
	int32_t x18 = 6882;
	static uint8_t x19 = UINT8_MAX;
	int32_t x20 = 798326;
	int32_t t4 = -10009;

    t4 = ((x17*(x18^x19))!=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static int32_t x21 = 9;
	int8_t x22 = 19;
	static int8_t x23 = 5;
	volatile int32_t t5 = -3748;

    t5 = ((x21*(x22^x23))!=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = 85577815133669LL;
	uint16_t x26 = UINT16_MAX;
	int8_t x27 = -38;

    t6 = ((x25*(x26^x27))!=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x30 = 8;
	volatile uint64_t x31 = 19243438483223465LLU;
	int32_t x32 = -337349714;

    t7 = ((x29*(x30^x31))!=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x33 = 66U;
	static int64_t x34 = 35673598424992234LL;
	volatile uint8_t x35 = 89U;
	static volatile int32_t t8 = -795;

    t8 = ((x33*(x34^x35))!=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x43 = 65033176;
	static uint32_t x44 = 385U;
	volatile int32_t t9 = 133851886;

    t9 = ((x41*(x42^x43))!=x44);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x45 = INT32_MIN;
	int32_t x48 = -234006;
	volatile int32_t t10 = 63;

    t10 = ((x45*(x46^x47))!=x48);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x49 = INT16_MAX;
	uint8_t x50 = UINT8_MAX;
	int8_t x51 = INT8_MAX;

    t11 = ((x49*(x50^x51))!=x52);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x53 = UINT16_MAX;
	int8_t x54 = INT8_MIN;
	volatile int8_t x55 = -1;
	uint64_t x56 = 1945693593710LLU;

    t12 = ((x53*(x54^x55))!=x56);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int8_t x61 = INT8_MIN;
	static int64_t x62 = 169LL;
	volatile int32_t x63 = -1;
	int64_t x64 = -1LL;
	int32_t t13 = 50828;

    t13 = ((x61*(x62^x63))!=x64);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x65 = 79619U;
	uint32_t x66 = 14362U;
	uint16_t x67 = UINT16_MAX;
	int32_t x68 = INT32_MAX;
	static volatile int32_t t14 = 1890740;

    t14 = ((x65*(x66^x67))!=x68);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint64_t x73 = 4LLU;
	static uint8_t x74 = UINT8_MAX;
	static uint64_t x75 = UINT64_MAX;
	static uint16_t x76 = 981U;

    t15 = ((x73*(x74^x75))!=x76);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x78 = 3903743954896567LLU;
	int64_t x79 = -5600734LL;
	volatile int32_t t16 = 31;

    t16 = ((x77*(x78^x79))!=x80);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x85 = 157122U;
	int8_t x86 = 7;
	volatile int32_t x87 = 1;
	static uint32_t x88 = 17U;

    t17 = ((x85*(x86^x87))!=x88);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x89 = -1;
	volatile int8_t x90 = INT8_MIN;
	int16_t x91 = 1749;
	int32_t x92 = INT32_MIN;
	static int32_t t18 = 296;

    t18 = ((x89*(x90^x91))!=x92);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x93 = INT16_MIN;
	int8_t x94 = 6;
	static int32_t x95 = -7350;
	int8_t x96 = INT8_MIN;
	static int32_t t19 = -3;

    t19 = ((x93*(x94^x95))!=x96);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x97 = INT64_MIN;
	uint8_t x98 = 1U;
	int16_t x99 = 1;
	volatile uint16_t x100 = 27765U;
	volatile int32_t t20 = 465000;

    t20 = ((x97*(x98^x99))!=x100);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x101 = -1;
	uint32_t x102 = UINT32_MAX;
	static int32_t x103 = -130170915;
	int64_t x104 = INT64_MIN;
	volatile int32_t t21 = 280;

    t21 = ((x101*(x102^x103))!=x104);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint64_t x105 = 416688647478560197LLU;
	int16_t x106 = INT16_MIN;
	int64_t x107 = INT64_MIN;
	int64_t x108 = 16407081LL;
	int32_t t22 = -84961659;

    t22 = ((x105*(x106^x107))!=x108);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int32_t x109 = INT32_MIN;
	uint64_t x111 = 5490517037598997428LLU;
	int32_t x112 = INT32_MIN;
	int32_t t23 = -8319374;

    t23 = ((x109*(x110^x111))!=x112);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x113 = -1;
	static int16_t x114 = INT16_MIN;
	volatile int64_t x115 = -248LL;
	int16_t x116 = INT16_MAX;
	volatile int32_t t24 = 371393;

    t24 = ((x113*(x114^x115))!=x116);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x118 = UINT8_MAX;
	static uint64_t x119 = 325LLU;
	static uint8_t x120 = UINT8_MAX;
	int32_t t25 = -269316369;

    t25 = ((x117*(x118^x119))!=x120);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static int32_t x122 = INT32_MAX;
	uint8_t x123 = 2U;
	volatile uint32_t x124 = 2020U;
	int32_t t26 = 29;

    t26 = ((x121*(x122^x123))!=x124);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x127 = 44LLU;
	volatile int32_t t27 = -16;

    t27 = ((x125*(x126^x127))!=x128);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x131 = 11;
	int32_t x132 = -1;
	int32_t t28 = 1691;

    t28 = ((x129*(x130^x131))!=x132);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int16_t x134 = -135;
	volatile uint64_t x135 = 14LLU;
	uint64_t x136 = 5363881237817018673LLU;
	int32_t t29 = 3512465;

    t29 = ((x133*(x134^x135))!=x136);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x137 = -1;
	int64_t x139 = -15888276305877LL;
	volatile int32_t t30 = -2;

    t30 = ((x137*(x138^x139))!=x140);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x141 = 66;
	uint32_t x142 = UINT32_MAX;
	int32_t x143 = INT32_MIN;
	int32_t t31 = -1984487;

    t31 = ((x141*(x142^x143))!=x144);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x145 = -1;
	int64_t x147 = INT64_MIN;
	uint64_t x148 = 274690638705922LLU;
	volatile int32_t t32 = -326335;

    t32 = ((x145*(x146^x147))!=x148);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x149 = INT32_MAX;
	int64_t x150 = INT64_MIN;
	volatile uint64_t x151 = 59222721414241550LLU;
	static int64_t x152 = -1LL;
	volatile int32_t t33 = 1328961;

    t33 = ((x149*(x150^x151))!=x152);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int64_t x153 = 1193520LL;
	uint16_t x156 = 3110U;
	volatile int32_t t34 = 149409;

    t34 = ((x153*(x154^x155))!=x156);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x163 = INT32_MIN;
	static int32_t x164 = INT32_MAX;
	int32_t t35 = 16;

    t35 = ((x161*(x162^x163))!=x164);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x165 = 19U;
	uint8_t x166 = 3U;
	int8_t x168 = INT8_MIN;
	volatile int32_t t36 = 92786;

    t36 = ((x165*(x166^x167))!=x168);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x169 = 707U;
	static int8_t x170 = INT8_MIN;
	uint64_t x171 = UINT64_MAX;
	static uint64_t x172 = 944LLU;

    t37 = ((x169*(x170^x171))!=x172);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x173 = 23U;
	int64_t x174 = -2137010916230LL;
	int8_t x175 = 20;
	int64_t x176 = INT64_MIN;
	static int32_t t38 = -29877;

    t38 = ((x173*(x174^x175))!=x176);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x177 = -1;
	static uint8_t x178 = UINT8_MAX;
	int64_t x179 = INT64_MIN;
	volatile int16_t x180 = INT16_MIN;
	volatile int32_t t39 = 1770;

    t39 = ((x177*(x178^x179))!=x180);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x181 = UINT64_MAX;
	int8_t x182 = INT8_MIN;
	int8_t x183 = INT8_MIN;
	static int8_t x184 = INT8_MIN;
	static int32_t t40 = 248;

    t40 = ((x181*(x182^x183))!=x184);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x185 = 349LLU;
	int32_t x186 = -1;
	int8_t x187 = -1;
	uint16_t x188 = UINT16_MAX;
	volatile int32_t t41 = 97902;

    t41 = ((x185*(x186^x187))!=x188);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int8_t x190 = -19;
	volatile int32_t t42 = -1;

    t42 = ((x189*(x190^x191))!=x192);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x195 = UINT16_MAX;
	int32_t x196 = -60;
	volatile int32_t t43 = 843;

    t43 = ((x193*(x194^x195))!=x196);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x201 = 4663482574LL;
	int32_t x202 = 357;
	volatile int32_t x203 = -1;
	static volatile int64_t x204 = INT64_MIN;
	int32_t t44 = 6873;

    t44 = ((x201*(x202^x203))!=x204);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x205 = 18U;
	static volatile uint64_t x207 = 4240638256LLU;
	uint8_t x208 = 7U;
	int32_t t45 = 0;

    t45 = ((x205*(x206^x207))!=x208);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static int64_t x209 = -1LL;
	int16_t x210 = 473;
	static int32_t x211 = INT32_MIN;
	int64_t x212 = INT64_MAX;

    t46 = ((x209*(x210^x211))!=x212);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x213 = -6;
	uint32_t x214 = 11616186U;
	int8_t x215 = INT8_MIN;
	int32_t t47 = -3;

    t47 = ((x213*(x214^x215))!=x216);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int16_t x217 = INT16_MIN;
	volatile uint8_t x220 = UINT8_MAX;
	int32_t t48 = 207;

    t48 = ((x217*(x218^x219))!=x220);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int64_t x222 = -1LL;
	volatile int8_t x223 = INT8_MIN;
	uint16_t x224 = UINT16_MAX;
	volatile int32_t t49 = -27;

    t49 = ((x221*(x222^x223))!=x224);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x230 = -1;
	volatile int64_t x231 = -1LL;
	volatile int32_t x232 = INT32_MIN;
	volatile int32_t t50 = 1862530;

    t50 = ((x229*(x230^x231))!=x232);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x233 = 12695;
	uint64_t x234 = 480LLU;
	int64_t x235 = 392784028959183LL;
	int64_t x236 = -1LL;
	int32_t t51 = -344823;

    t51 = ((x233*(x234^x235))!=x236);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x249 = 1U;
	uint16_t x250 = 350U;
	int16_t x251 = INT16_MIN;
	volatile int8_t x252 = INT8_MIN;

    t52 = ((x249*(x250^x251))!=x252);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x253 = -2139LL;
	int16_t x254 = -1;
	static uint32_t x255 = 16U;

    t53 = ((x253*(x254^x255))!=x256);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile uint8_t x257 = UINT8_MAX;
	uint8_t x258 = UINT8_MAX;
	volatile int16_t x259 = INT16_MAX;
	int16_t x260 = INT16_MIN;
	volatile int32_t t54 = 1643;

    t54 = ((x257*(x258^x259))!=x260);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint64_t x261 = 296314004701LLU;
	int64_t x262 = INT64_MIN;
	int32_t x263 = INT32_MAX;
	int8_t x264 = INT8_MIN;
	int32_t t55 = -1;

    t55 = ((x261*(x262^x263))!=x264);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x265 = -1;
	int32_t x266 = -1;
	uint32_t x268 = 389311U;

    t56 = ((x265*(x266^x267))!=x268);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int16_t x269 = -1;
	static int8_t x271 = INT8_MIN;
	int32_t t57 = 1;

    t57 = ((x269*(x270^x271))!=x272);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x273 = INT16_MIN;
	int64_t x274 = 63364559646037LL;
	static uint16_t x275 = UINT16_MAX;
	static volatile int64_t x276 = INT64_MIN;
	int32_t t58 = 12;

    t58 = ((x273*(x274^x275))!=x276);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int32_t x277 = -3;
	uint32_t x278 = 2930U;
	int32_t x279 = -479;
	int8_t x280 = 1;
	volatile int32_t t59 = -58;

    t59 = ((x277*(x278^x279))!=x280);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int8_t x282 = INT8_MIN;
	int8_t x283 = -3;
	uint32_t x284 = 3487U;
	static volatile int32_t t60 = -27112445;

    t60 = ((x281*(x282^x283))!=x284);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x289 = INT8_MIN;
	int16_t x291 = INT16_MAX;
	volatile int32_t x292 = -4;
	int32_t t61 = 57686;

    t61 = ((x289*(x290^x291))!=x292);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x298 = 47002629LLU;
	int64_t x299 = -150579189956LL;
	static uint64_t x300 = 6350237881LLU;
	int32_t t62 = -29217;

    t62 = ((x297*(x298^x299))!=x300);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x301 = 88311;
	uint64_t x302 = 338LLU;
	int16_t x303 = -1;
	static int32_t t63 = -2;

    t63 = ((x301*(x302^x303))!=x304);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x309 = 7U;
	uint32_t x310 = 1U;
	uint16_t x311 = 26U;
	int32_t x312 = INT32_MAX;
	volatile int32_t t64 = -870730533;

    t64 = ((x309*(x310^x311))!=x312);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int32_t x317 = -1;
	volatile int16_t x318 = INT16_MIN;
	int8_t x319 = INT8_MIN;
	uint64_t x320 = 377773236LLU;

    t65 = ((x317*(x318^x319))!=x320);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int16_t x321 = -1;
	int8_t x322 = INT8_MIN;
	uint16_t x323 = 3922U;
	volatile uint16_t x324 = UINT16_MAX;
	int32_t t66 = -6779;

    t66 = ((x321*(x322^x323))!=x324);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x325 = -1LL;
	int32_t x326 = INT32_MAX;
	static int64_t x327 = INT64_MIN;
	static volatile int32_t t67 = 2124;

    t67 = ((x325*(x326^x327))!=x328);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x329 = UINT8_MAX;
	uint32_t x330 = 2857U;
	volatile uint8_t x331 = 5U;

    t68 = ((x329*(x330^x331))!=x332);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x333 = UINT8_MAX;
	volatile uint16_t x334 = 26U;
	int64_t x336 = -27315105847844LL;

    t69 = ((x333*(x334^x335))!=x336);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x337 = INT16_MIN;
	static volatile uint32_t x338 = UINT32_MAX;
	static int32_t x339 = -1;
	volatile int32_t t70 = -11739;

    t70 = ((x337*(x338^x339))!=x340);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x342 = INT8_MIN;
	int8_t x343 = -1;
	uint8_t x344 = UINT8_MAX;
	int32_t t71 = -33;

    t71 = ((x341*(x342^x343))!=x344);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int32_t x346 = -1;
	static int8_t x347 = INT8_MAX;
	volatile int32_t t72 = -228633;

    t72 = ((x345*(x346^x347))!=x348);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x349 = -26;
	uint8_t x352 = UINT8_MAX;

    t73 = ((x349*(x350^x351))!=x352);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x353 = 0U;
	static uint64_t x354 = 4513247803LLU;
	static uint8_t x356 = 0U;

    t74 = ((x353*(x354^x355))!=x356);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x357 = UINT8_MAX;
	static uint8_t x358 = 1U;
	static volatile uint32_t x360 = 2272827U;
	int32_t t75 = 431;

    t75 = ((x357*(x358^x359))!=x360);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x361 = UINT64_MAX;
	int64_t x362 = INT64_MAX;
	uint16_t x363 = 0U;
	int32_t t76 = -30;

    t76 = ((x361*(x362^x363))!=x364);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile uint64_t x365 = 319266193086LLU;
	uint32_t x366 = 290755U;
	static int16_t x367 = 1;
	static uint64_t x368 = 64836059703380764LLU;
	static volatile int32_t t77 = 6624;

    t77 = ((x365*(x366^x367))!=x368);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int64_t x373 = INT64_MIN;
	uint64_t x374 = 28471284684LLU;
	uint64_t x375 = 1LLU;
	static int32_t t78 = -15699531;

    t78 = ((x373*(x374^x375))!=x376);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x377 = INT8_MIN;
	int64_t x378 = -28LL;
	int16_t x379 = -1;
	int8_t x380 = INT8_MAX;
	static int32_t t79 = 14;

    t79 = ((x377*(x378^x379))!=x380);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x381 = -1;
	volatile int64_t x382 = INT64_MIN;
	static volatile int16_t x383 = -21;
	int16_t x384 = INT16_MAX;
	int32_t t80 = -529;

    t80 = ((x381*(x382^x383))!=x384);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x389 = INT8_MIN;
	uint64_t x390 = 4785527502LLU;
	int32_t x391 = -1;
	static volatile int32_t t81 = -4207889;

    t81 = ((x389*(x390^x391))!=x392);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x397 = INT16_MIN;
	int8_t x399 = INT8_MAX;
	int64_t x400 = -4LL;
	static volatile int32_t t82 = -15;

    t82 = ((x397*(x398^x399))!=x400);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint64_t x401 = UINT64_MAX;
	int8_t x402 = 3;
	int16_t x404 = INT16_MIN;
	int32_t t83 = 0;

    t83 = ((x401*(x402^x403))!=x404);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x421 = -1LL;
	volatile int32_t x422 = 34;
	volatile uint32_t x423 = 683545U;
	uint32_t x424 = UINT32_MAX;
	int32_t t84 = 1;

    t84 = ((x421*(x422^x423))!=x424);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile uint32_t x425 = UINT32_MAX;
	uint32_t x427 = UINT32_MAX;
	static int32_t x428 = INT32_MIN;

    t85 = ((x425*(x426^x427))!=x428);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int16_t x433 = -6;
	static uint64_t x434 = UINT64_MAX;
	static int8_t x435 = -1;
	volatile int32_t x436 = -8;
	int32_t t86 = 96;

    t86 = ((x433*(x434^x435))!=x436);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x437 = UINT32_MAX;
	uint8_t x438 = UINT8_MAX;
	int8_t x439 = 30;
	int64_t x440 = 0LL;
	volatile int32_t t87 = 3401;

    t87 = ((x437*(x438^x439))!=x440);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint32_t x441 = UINT32_MAX;
	static int8_t x442 = -1;
	static uint64_t x444 = 0LLU;

    t88 = ((x441*(x442^x443))!=x444);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint16_t x448 = 24U;
	volatile int32_t t89 = 0;

    t89 = ((x445*(x446^x447))!=x448);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x453 = 1;
	volatile uint16_t x454 = UINT16_MAX;
	volatile int16_t x455 = INT16_MAX;
	int16_t x456 = INT16_MAX;
	int32_t t90 = -14753684;

    t90 = ((x453*(x454^x455))!=x456);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x458 = UINT16_MAX;
	static volatile uint16_t x460 = 10484U;
	static volatile int32_t t91 = -3;

    t91 = ((x457*(x458^x459))!=x460);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint8_t x465 = UINT8_MAX;
	int16_t x466 = 365;
	volatile int8_t x467 = 41;
	volatile uint8_t x468 = UINT8_MAX;
	volatile int32_t t92 = 2695892;

    t92 = ((x465*(x466^x467))!=x468);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x469 = INT16_MAX;
	volatile uint32_t x470 = 235379653U;
	static uint32_t x472 = 184U;
	int32_t t93 = -2758954;

    t93 = ((x469*(x470^x471))!=x472);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint64_t x473 = UINT64_MAX;
	int64_t x475 = INT64_MAX;
	volatile int64_t x476 = 30886LL;
	static volatile int32_t t94 = -5604428;

    t94 = ((x473*(x474^x475))!=x476);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x477 = -61;
	volatile uint64_t x480 = 9430226LLU;

    t95 = ((x477*(x478^x479))!=x480);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x481 = 1;
	static int8_t x482 = -1;
	static int64_t x484 = INT64_MIN;
	volatile int32_t t96 = 95445934;

    t96 = ((x481*(x482^x483))!=x484);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x486 = UINT8_MAX;
	uint64_t x487 = 809536966207LLU;
	volatile int64_t x488 = -5009509186382LL;

    t97 = ((x485*(x486^x487))!=x488);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x489 = -3;
	int16_t x491 = INT16_MIN;
	volatile uint16_t x492 = UINT16_MAX;
	volatile int32_t t98 = -4856710;

    t98 = ((x489*(x490^x491))!=x492);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x498 = 28224022816078LLU;
	int8_t x499 = INT8_MAX;
	static volatile uint64_t x500 = 3299992487LLU;

    t99 = ((x497*(x498^x499))!=x500);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x511 = -1;
	volatile int32_t t100 = -26454;

    t100 = ((x509*(x510^x511))!=x512);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x513 = 3786U;
	uint64_t x514 = UINT64_MAX;
	int8_t x516 = 9;
	static volatile int32_t t101 = -5;

    t101 = ((x513*(x514^x515))!=x516);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x517 = 0U;
	volatile uint16_t x518 = 9U;
	volatile int64_t x520 = INT64_MIN;
	static int32_t t102 = 4927;

    t102 = ((x517*(x518^x519))!=x520);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint32_t x525 = 3748U;

    t103 = ((x525*(x526^x527))!=x528);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x529 = INT8_MIN;
	uint32_t x530 = 5U;
	volatile int16_t x532 = INT16_MIN;
	volatile int32_t t104 = 442;

    t104 = ((x529*(x530^x531))!=x532);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x533 = 3U;
	int64_t x534 = -1LL;
	volatile uint32_t x535 = 24U;
	uint32_t x536 = 3U;
	int32_t t105 = -5163;

    t105 = ((x533*(x534^x535))!=x536);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static int32_t x539 = INT32_MIN;
	static uint64_t x540 = 241755192992905LLU;
	int32_t t106 = -11992911;

    t106 = ((x537*(x538^x539))!=x540);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x541 = 68656;
	int64_t x544 = 935488231LL;
	int32_t t107 = 0;

    t107 = ((x541*(x542^x543))!=x544);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x546 = 63362U;
	uint32_t x547 = UINT32_MAX;
	volatile int32_t x548 = 8;

    t108 = ((x545*(x546^x547))!=x548);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint32_t x550 = 3U;
	int64_t x551 = -3693324LL;
	int64_t x552 = INT64_MIN;

    t109 = ((x549*(x550^x551))!=x552);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x557 = 2055LLU;
	int8_t x558 = -7;
	volatile int32_t t110 = 145250687;

    t110 = ((x557*(x558^x559))!=x560);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x562 = -1;
	int8_t x563 = INT8_MAX;
	static uint16_t x564 = 6U;
	volatile int32_t t111 = 1;

    t111 = ((x561*(x562^x563))!=x564);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x573 = 25117U;
	static int32_t x574 = -1;
	uint16_t x575 = UINT16_MAX;
	int16_t x576 = INT16_MIN;
	volatile int32_t t112 = -1660;

    t112 = ((x573*(x574^x575))!=x576);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x577 = INT8_MAX;
	volatile int16_t x579 = -347;
	volatile uint8_t x580 = UINT8_MAX;
	volatile int32_t t113 = -724024372;

    t113 = ((x577*(x578^x579))!=x580);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x581 = UINT16_MAX;
	int64_t x582 = 30943972LL;
	int32_t t114 = 0;

    t114 = ((x581*(x582^x583))!=x584);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x585 = -1;
	uint32_t x587 = 1219342U;
	static int32_t x588 = INT32_MIN;

    t115 = ((x585*(x586^x587))!=x588);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x589 = -1LL;
	volatile int64_t x590 = INT64_MAX;
	static uint16_t x591 = 3056U;
	volatile int16_t x592 = INT16_MIN;
	int32_t t116 = 45922043;

    t116 = ((x589*(x590^x591))!=x592);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint8_t x593 = 12U;
	int16_t x594 = INT16_MAX;
	uint16_t x596 = 19U;
	int32_t t117 = -4;

    t117 = ((x593*(x594^x595))!=x596);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x597 = -30;
	int16_t x598 = 493;
	int64_t x599 = -1LL;
	int32_t t118 = 166761;

    t118 = ((x597*(x598^x599))!=x600);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x601 = -250990024139852431LL;
	int64_t x602 = -1LL;
	int64_t x603 = -1LL;
	uint64_t x604 = UINT64_MAX;
	static int32_t t119 = 175702;

    t119 = ((x601*(x602^x603))!=x604);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x609 = -13150;
	static volatile uint16_t x610 = 61U;
	int64_t x611 = 13110LL;
	int16_t x612 = INT16_MIN;
	volatile int32_t t120 = 226620077;

    t120 = ((x609*(x610^x611))!=x612);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint64_t x613 = 24532186365772516LLU;
	static int16_t x614 = 1;
	int32_t t121 = -1;

    t121 = ((x613*(x614^x615))!=x616);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int32_t x617 = -1;
	volatile int16_t x618 = INT16_MIN;
	volatile int32_t t122 = -1204;

    t122 = ((x617*(x618^x619))!=x620);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x625 = 0;
	volatile uint32_t x626 = UINT32_MAX;
	int8_t x628 = 5;
	volatile int32_t t123 = -24856;

    t123 = ((x625*(x626^x627))!=x628);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x629 = INT8_MAX;
	uint32_t x630 = 7697727U;
	int16_t x631 = INT16_MIN;
	int64_t x632 = INT64_MAX;
	int32_t t124 = 93822;

    t124 = ((x629*(x630^x631))!=x632);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x633 = INT16_MIN;
	volatile int8_t x635 = -9;
	int64_t x636 = -474793109282LL;
	static volatile int32_t t125 = -125;

    t125 = ((x633*(x634^x635))!=x636);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x641 = INT8_MIN;
	int8_t x644 = INT8_MIN;

    t126 = ((x641*(x642^x643))!=x644);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint32_t x649 = 9U;
	int64_t x650 = -1LL;
	uint8_t x651 = 8U;
	uint16_t x652 = UINT16_MAX;

    t127 = ((x649*(x650^x651))!=x652);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x653 = -100783LL;
	volatile int16_t x654 = 125;
	int64_t x655 = -188775018391LL;
	int8_t x656 = -1;
	int32_t t128 = -5;

    t128 = ((x653*(x654^x655))!=x656);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint16_t x661 = 0U;
	volatile int32_t x662 = INT32_MAX;
	volatile int32_t t129 = 1;

    t129 = ((x661*(x662^x663))!=x664);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int64_t x665 = INT64_MIN;
	static uint64_t x667 = 1900396LLU;
	volatile int8_t x668 = -1;
	int32_t t130 = 0;

    t130 = ((x665*(x666^x667))!=x668);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint32_t x681 = 55724850U;
	uint32_t x683 = 124U;
	uint8_t x684 = UINT8_MAX;
	int32_t t131 = -31;

    t131 = ((x681*(x682^x683))!=x684);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int16_t x687 = INT16_MAX;
	volatile int32_t x688 = 12341;
	static int32_t t132 = 2067549;

    t132 = ((x685*(x686^x687))!=x688);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x689 = 141;
	uint16_t x691 = 6950U;
	int32_t t133 = 124236;

    t133 = ((x689*(x690^x691))!=x692);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int64_t x697 = -6090830788LL;
	int8_t x699 = -1;
	static int16_t x700 = INT16_MIN;

    t134 = ((x697*(x698^x699))!=x700);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x701 = -1LL;
	uint8_t x702 = 40U;
	int32_t x703 = 2238;
	int32_t t135 = 137580;

    t135 = ((x701*(x702^x703))!=x704);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x709 = UINT64_MAX;
	volatile uint64_t x710 = 1239094481620798LLU;
	volatile int16_t x711 = INT16_MIN;
	int16_t x712 = -402;
	volatile int32_t t136 = 5375;

    t136 = ((x709*(x710^x711))!=x712);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x713 = -4;
	volatile int8_t x714 = 0;
	int64_t x715 = -786722137LL;
	volatile int32_t t137 = 1;

    t137 = ((x713*(x714^x715))!=x716);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x718 = INT32_MAX;
	volatile int8_t x719 = INT8_MAX;
	int32_t x720 = INT32_MIN;
	int32_t t138 = -60109;

    t138 = ((x717*(x718^x719))!=x720);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x725 = UINT16_MAX;
	uint64_t x727 = UINT64_MAX;
	uint8_t x728 = 55U;
	int32_t t139 = -52242;

    t139 = ((x725*(x726^x727))!=x728);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x733 = 146803376031461LL;
	uint64_t x734 = 225306LLU;
	volatile uint32_t x735 = 11643U;
	static uint8_t x736 = 1U;
	volatile int32_t t140 = -4;

    t140 = ((x733*(x734^x735))!=x736);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x737 = 0U;
	int8_t x739 = 1;
	uint32_t x740 = 1873U;
	int32_t t141 = 125883;

    t141 = ((x737*(x738^x739))!=x740);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x741 = -1;
	static uint8_t x742 = 13U;
	static int32_t x744 = -1;
	int32_t t142 = -1626452;

    t142 = ((x741*(x742^x743))!=x744);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x746 = -23;
	volatile int64_t x747 = INT64_MIN;
	volatile int64_t x748 = INT64_MIN;

    t143 = ((x745*(x746^x747))!=x748);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x749 = 1961U;
	uint64_t x750 = 1716236609293LLU;
	volatile uint32_t x751 = UINT32_MAX;
	int32_t t144 = 572478442;

    t144 = ((x749*(x750^x751))!=x752);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x757 = 10204157;
	volatile int64_t x759 = 306772326LL;
	int32_t t145 = -806;

    t145 = ((x757*(x758^x759))!=x760);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x773 = -1;
	volatile uint64_t x774 = UINT64_MAX;
	static int8_t x775 = INT8_MAX;
	volatile uint16_t x776 = 2930U;

    t146 = ((x773*(x774^x775))!=x776);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x777 = 0;
	static volatile int16_t x780 = -4762;
	int32_t t147 = -170654;

    t147 = ((x777*(x778^x779))!=x780);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint16_t x781 = 85U;
	int8_t x782 = INT8_MIN;
	int16_t x783 = -225;
	volatile int32_t t148 = 9;

    t148 = ((x781*(x782^x783))!=x784);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x785 = UINT16_MAX;
	uint8_t x786 = 2U;
	static uint8_t x787 = 2U;
	uint64_t x788 = 304745425490194LLU;

    t149 = ((x785*(x786^x787))!=x788);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x793 = INT16_MIN;
	int16_t x794 = 215;
	static uint32_t x795 = UINT32_MAX;
	int32_t t150 = -14;

    t150 = ((x793*(x794^x795))!=x796);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x797 = -1;
	int8_t x799 = INT8_MIN;
	int64_t x800 = 1022357129561644562LL;

    t151 = ((x797*(x798^x799))!=x800);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x801 = 1U;
	uint16_t x802 = UINT16_MAX;
	int16_t x803 = INT16_MIN;
	volatile int64_t x804 = INT64_MIN;
	volatile int32_t t152 = -721671671;

    t152 = ((x801*(x802^x803))!=x804);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x805 = INT32_MIN;
	int64_t x806 = INT64_MAX;
	int64_t x807 = INT64_MAX;

    t153 = ((x805*(x806^x807))!=x808);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x809 = UINT8_MAX;
	volatile int8_t x810 = 1;
	int16_t x811 = INT16_MIN;

    t154 = ((x809*(x810^x811))!=x812);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint64_t x817 = 534041243458LLU;
	uint32_t x818 = UINT32_MAX;

    t155 = ((x817*(x818^x819))!=x820);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x825 = INT16_MAX;
	static uint8_t x828 = 12U;
	volatile int32_t t156 = -1002;

    t156 = ((x825*(x826^x827))!=x828);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x829 = INT32_MAX;
	uint64_t x830 = 362592LLU;
	int16_t x831 = INT16_MIN;
	volatile int32_t x832 = -1;
	int32_t t157 = 250;

    t157 = ((x829*(x830^x831))!=x832);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x841 = 4068U;
	uint8_t x842 = 120U;
	static int16_t x843 = 256;
	int32_t x844 = -1;
	volatile int32_t t158 = 130;

    t158 = ((x841*(x842^x843))!=x844);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x845 = -1LL;
	int32_t x847 = 953888;
	int64_t x848 = -136447946379LL;

    t159 = ((x845*(x846^x847))!=x848);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static int32_t x853 = -1;
	uint8_t x854 = 33U;
	volatile int16_t x855 = INT16_MIN;
	int32_t x856 = 239446;
	volatile int32_t t160 = -40;

    t160 = ((x853*(x854^x855))!=x856);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static int8_t x857 = INT8_MIN;
	uint16_t x858 = 5615U;
	int16_t x859 = 0;
	volatile uint16_t x860 = 0U;

    t161 = ((x857*(x858^x859))!=x860);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint32_t x861 = 29U;
	uint32_t x862 = UINT32_MAX;
	volatile int16_t x863 = INT16_MIN;
	uint64_t x864 = 32327336374LLU;
	static int32_t t162 = -260012;

    t162 = ((x861*(x862^x863))!=x864);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint64_t x865 = 1000184551017LLU;
	int8_t x866 = 0;
	static int64_t x867 = -363806860203356LL;
	uint32_t x868 = 1741515U;
	int32_t t163 = -50918220;

    t163 = ((x865*(x866^x867))!=x868);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x869 = INT16_MIN;
	volatile uint64_t x870 = 2346432416366417LLU;
	int16_t x871 = -5;
	static volatile int8_t x872 = -1;

    t164 = ((x869*(x870^x871))!=x872);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint8_t x873 = UINT8_MAX;
	int8_t x874 = 1;
	uint16_t x875 = 25664U;
	int16_t x876 = INT16_MAX;
	int32_t t165 = 1;

    t165 = ((x873*(x874^x875))!=x876);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x877 = INT16_MIN;
	int8_t x878 = INT8_MAX;
	volatile int16_t x879 = INT16_MIN;

    t166 = ((x877*(x878^x879))!=x880);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x881 = -239471;
	volatile int8_t x882 = INT8_MIN;
	static volatile int64_t x883 = -18884773775LL;
	int64_t x884 = INT64_MIN;
	int32_t t167 = 1544;

    t167 = ((x881*(x882^x883))!=x884);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x885 = 28U;
	uint32_t x887 = 295368604U;
	volatile int32_t t168 = 1;

    t168 = ((x885*(x886^x887))!=x888);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int32_t x890 = -1;
	static uint64_t x891 = 79328LLU;
	int32_t x892 = INT32_MIN;
	int32_t t169 = 3943515;

    t169 = ((x889*(x890^x891))!=x892);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x893 = 67U;
	uint64_t x894 = 134622220673078LLU;
	uint32_t x895 = 382937U;
	uint64_t x896 = 238261559435962025LLU;
	volatile int32_t t170 = -15920;

    t170 = ((x893*(x894^x895))!=x896);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int16_t x897 = -1;
	int64_t x899 = -1LL;
	int32_t x900 = 103;
	volatile int32_t t171 = 36;

    t171 = ((x897*(x898^x899))!=x900);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x901 = 2LL;
	volatile int64_t x902 = -7078052417127LL;
	volatile int32_t x903 = INT32_MAX;
	int32_t t172 = -1369;

    t172 = ((x901*(x902^x903))!=x904);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x905 = -1;
	int8_t x906 = INT8_MAX;
	int64_t x908 = INT64_MAX;
	static volatile int32_t t173 = -19243541;

    t173 = ((x905*(x906^x907))!=x908);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x909 = INT16_MIN;
	int16_t x910 = INT16_MIN;
	volatile int16_t x911 = 15898;
	int32_t t174 = -389392904;

    t174 = ((x909*(x910^x911))!=x912);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint8_t x913 = 56U;
	volatile int64_t x915 = -1793136961322121LL;
	volatile uint32_t x916 = 40204U;
	int32_t t175 = -1053812313;

    t175 = ((x913*(x914^x915))!=x916);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x917 = 4632LLU;
	static int64_t x918 = INT64_MIN;
	static int8_t x919 = INT8_MIN;
	int64_t x920 = INT64_MAX;
	volatile int32_t t176 = -35;

    t176 = ((x917*(x918^x919))!=x920);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x921 = 1U;
	uint16_t x922 = 1U;
	int32_t x923 = INT32_MAX;
	static int8_t x924 = -4;
	int32_t t177 = 0;

    t177 = ((x921*(x922^x923))!=x924);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x925 = INT8_MAX;
	uint16_t x926 = UINT16_MAX;
	static int32_t x927 = 157589;
	int64_t x928 = -116220132LL;
	static volatile int32_t t178 = 124;

    t178 = ((x925*(x926^x927))!=x928);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x929 = -1;
	int32_t x930 = INT32_MIN;
	static int16_t x931 = INT16_MIN;
	uint32_t x932 = 4665247U;
	static int32_t t179 = 10;

    t179 = ((x929*(x930^x931))!=x932);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x933 = INT8_MIN;
	uint8_t x935 = 15U;
	static int32_t x936 = INT32_MAX;
	int32_t t180 = -189262903;

    t180 = ((x933*(x934^x935))!=x936);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x938 = -1LL;
	int8_t x940 = INT8_MAX;
	static int32_t t181 = -105;

    t181 = ((x937*(x938^x939))!=x940);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static int64_t x950 = INT64_MIN;
	int64_t x951 = INT64_MAX;
	static int8_t x952 = INT8_MIN;
	volatile int32_t t182 = 470;

    t182 = ((x949*(x950^x951))!=x952);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x953 = INT16_MIN;
	uint8_t x955 = 3U;
	static uint16_t x956 = 7396U;

    t183 = ((x953*(x954^x955))!=x956);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x957 = INT8_MIN;
	volatile int64_t x958 = 1LL;
	uint16_t x959 = UINT16_MAX;
	volatile int32_t t184 = -29;

    t184 = ((x957*(x958^x959))!=x960);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x961 = 0;
	int64_t x962 = INT64_MAX;
	int16_t x963 = -1;
	int32_t x964 = INT32_MAX;
	int32_t t185 = -11810186;

    t185 = ((x961*(x962^x963))!=x964);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x965 = INT16_MAX;
	uint32_t x966 = 6U;
	int8_t x967 = -1;

    t186 = ((x965*(x966^x967))!=x968);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x969 = UINT64_MAX;
	static uint8_t x970 = 44U;
	int32_t x971 = INT32_MIN;
	static int32_t t187 = 26788638;

    t187 = ((x969*(x970^x971))!=x972);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x973 = INT16_MAX;
	int16_t x975 = -6283;
	int32_t x976 = 93970612;
	volatile int32_t t188 = 1;

    t188 = ((x973*(x974^x975))!=x976);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x977 = INT8_MAX;
	static int16_t x978 = INT16_MIN;
	int8_t x979 = INT8_MIN;
	volatile uint64_t x980 = 3LLU;
	volatile int32_t t189 = -689965565;

    t189 = ((x977*(x978^x979))!=x980);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint16_t x981 = 378U;
	int32_t x982 = 86;
	static volatile uint16_t x983 = UINT16_MAX;
	int32_t x984 = INT32_MAX;
	int32_t t190 = -17293888;

    t190 = ((x981*(x982^x983))!=x984);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x985 = -1;
	int8_t x986 = 33;
	volatile int32_t t191 = 9332180;

    t191 = ((x985*(x986^x987))!=x988);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x993 = INT32_MIN;
	int16_t x994 = -1;
	int32_t x995 = -1;
	static int8_t x996 = INT8_MIN;
	static volatile int32_t t192 = 106106;

    t192 = ((x993*(x994^x995))!=x996);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint32_t x1001 = 855066541U;
	volatile int16_t x1004 = -1984;
	static volatile int32_t t193 = -2;

    t193 = ((x1001*(x1002^x1003))!=x1004);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x1005 = -1;
	int16_t x1006 = INT16_MIN;
	int8_t x1007 = 50;
	volatile int32_t t194 = 1849985;

    t194 = ((x1005*(x1006^x1007))!=x1008);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int16_t x1009 = -1;
	int32_t x1010 = INT32_MAX;
	uint8_t x1012 = 10U;
	int32_t t195 = -701813;

    t195 = ((x1009*(x1010^x1011))!=x1012);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x1014 = 39;
	uint16_t x1016 = UINT16_MAX;
	static int32_t t196 = 128;

    t196 = ((x1013*(x1014^x1015))!=x1016);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x1017 = -1;
	volatile int32_t x1018 = -1;
	uint8_t x1019 = UINT8_MAX;
	volatile int32_t t197 = -34965;

    t197 = ((x1017*(x1018^x1019))!=x1020);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x1025 = -1;
	volatile int8_t x1026 = INT8_MIN;
	int64_t x1027 = INT64_MIN;
	static uint32_t x1028 = 6455U;
	int32_t t198 = 12;

    t198 = ((x1025*(x1026^x1027))!=x1028);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x1029 = 3941;
	int8_t x1030 = INT8_MAX;
	int16_t x1031 = INT16_MIN;
	int64_t x1032 = -1LL;
	volatile int32_t t199 = -148525;

    t199 = ((x1029*(x1030^x1031))!=x1032);

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

