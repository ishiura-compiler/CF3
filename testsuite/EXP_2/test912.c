
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

int32_t x10 = -563585949;
int32_t t1 = -1978078;
int8_t x18 = -1;
uint32_t x24 = UINT32_MAX;
volatile uint32_t t4 = 72719862U;
int16_t x30 = INT16_MIN;
static volatile uint64_t x32 = 7205210LLU;
int64_t x40 = -1816443038310LL;
int16_t x43 = INT16_MAX;
volatile int64_t x45 = INT64_MIN;
uint32_t x55 = 11008U;
int32_t t13 = -21954036;
uint32_t x70 = 74041U;
int8_t x71 = -1;
static int8_t x76 = INT8_MAX;
static int64_t x80 = 20LL;
volatile int8_t x82 = INT8_MAX;
int8_t x96 = -1;
int8_t x97 = INT8_MIN;
uint16_t x101 = 74U;
uint32_t x105 = 62U;
static volatile int8_t x112 = INT8_MIN;
static uint32_t x113 = UINT32_MAX;
int32_t t25 = 155453560;
volatile uint64_t x124 = UINT64_MAX;
int8_t x131 = INT8_MIN;
static volatile int32_t t29 = 186553102;
int64_t x135 = INT64_MIN;
int64_t x136 = INT64_MAX;
static volatile int32_t x139 = INT32_MIN;
uint16_t x141 = 3337U;
static int16_t x148 = INT16_MIN;
volatile uint16_t x161 = 7U;
int16_t x168 = 0;
volatile int8_t x174 = INT8_MIN;
volatile int64_t x180 = 44435382882652LL;
int64_t x183 = INT64_MIN;
volatile int16_t x187 = -1062;
int8_t x188 = 11;
static volatile int32_t t42 = -588034242;
int64_t x192 = 437LL;
int32_t x194 = -1682;
int32_t x195 = INT32_MIN;
volatile int64_t t44 = -214583699LL;
int16_t x201 = -218;
int32_t x216 = 34315;
static int64_t x217 = -2267375593327362524LL;
int16_t x218 = INT16_MIN;
int64_t t48 = 68512436506620943LL;
int32_t x224 = INT32_MAX;
volatile int32_t t49 = -1644;
int32_t t50 = -31703;
int16_t x236 = INT16_MIN;
volatile uint16_t x247 = UINT16_MAX;
uint32_t t53 = 1484039768U;
int32_t x251 = INT32_MIN;
volatile int32_t t55 = 149337;
int16_t x258 = 745;
int32_t x259 = INT32_MAX;
static int8_t x271 = -1;
int8_t x272 = -1;
int16_t x277 = INT16_MAX;
int8_t x278 = -34;
uint16_t x280 = 3U;
int64_t x281 = INT64_MIN;
static volatile int8_t x283 = INT8_MAX;
int32_t x290 = 59522511;
static volatile int32_t t62 = -1409;
uint16_t x294 = 4072U;
volatile uint16_t x304 = 1870U;
volatile int32_t t64 = 13;
static int8_t x312 = INT8_MIN;
volatile int32_t t65 = 54;
uint8_t x313 = 1U;
int64_t x318 = INT64_MIN;
int16_t x320 = INT16_MAX;
int8_t x321 = -1;
int16_t x327 = INT16_MIN;
uint8_t x329 = UINT8_MAX;
volatile int16_t x331 = INT16_MIN;
static uint64_t x340 = UINT64_MAX;
int16_t x356 = INT16_MAX;
int8_t x359 = INT8_MIN;
volatile uint8_t x361 = UINT8_MAX;
uint16_t x362 = UINT16_MAX;
volatile int8_t x383 = INT8_MAX;
static uint64_t t82 = 77256LLU;
volatile uint16_t x397 = 21U;
uint8_t x399 = 3U;
int64_t x400 = INT64_MAX;
int64_t t85 = 0LL;
int8_t x407 = -23;
volatile int32_t t87 = 310851;
volatile int32_t x413 = -212508236;
volatile uint32_t t88 = 1U;
int32_t x419 = INT32_MAX;
uint16_t x423 = 794U;
int32_t x425 = -1;
int16_t x431 = INT16_MIN;
uint64_t x433 = UINT64_MAX;
volatile uint32_t x436 = 7U;
int16_t x439 = 1;
static int8_t x448 = INT8_MIN;
int8_t x459 = 1;
int64_t x468 = -28858LL;
int8_t x470 = INT8_MIN;
int32_t x478 = INT32_MAX;
static volatile uint32_t t102 = 250296539U;
static volatile int8_t x484 = -1;
uint64_t x485 = UINT64_MAX;
uint16_t x486 = 144U;
uint16_t x492 = 12U;
uint32_t x525 = 4152U;
uint8_t x528 = 2U;
static int16_t x529 = -638;
int64_t x535 = 838979170997707LL;
int16_t x539 = INT16_MIN;
static volatile uint32_t x542 = 3725594U;
int32_t x543 = INT32_MIN;
volatile int32_t t119 = 257947;
static volatile int8_t x554 = INT8_MIN;
volatile int32_t t121 = -862732800;
uint8_t x564 = 4U;
static uint32_t x581 = 3257288U;
int64_t x583 = 452522LL;
int8_t x586 = INT8_MIN;
uint32_t x588 = UINT32_MAX;
int8_t x589 = INT8_MIN;
static int16_t x591 = -4734;
uint64_t t130 = 1080542878330LLU;
uint64_t x605 = UINT64_MAX;
uint64_t x608 = 9142121725320709764LLU;
int16_t x609 = INT16_MIN;
volatile uint32_t x611 = UINT32_MAX;
static uint8_t x613 = 7U;
volatile int32_t x617 = -74;
volatile int64_t x621 = INT64_MIN;
volatile int16_t x623 = INT16_MAX;
volatile int64_t t135 = 1989862724550145862LL;
int32_t x628 = -1;
static volatile int32_t t136 = 0;
int16_t x629 = INT16_MAX;
static int8_t x630 = 1;
uint16_t x632 = UINT16_MAX;
static volatile int16_t x634 = INT16_MIN;
int64_t x638 = INT64_MIN;
volatile int32_t t140 = -299104109;
static int64_t x646 = INT64_MAX;
int64_t x648 = 5543LL;
int16_t x652 = INT16_MIN;
int64_t x669 = -1LL;
volatile int32_t t148 = 26;
int32_t x712 = 170841381;
uint8_t x713 = UINT8_MAX;
volatile uint32_t x728 = 11U;
uint32_t t156 = 27690U;
int8_t x729 = INT8_MIN;
int64_t x733 = INT64_MIN;
int32_t x744 = 298996;
int8_t x749 = INT8_MIN;
int32_t x751 = -1;
volatile int32_t x756 = 40;
volatile int32_t x758 = -31924948;
static int32_t x760 = -1;
int32_t x762 = INT32_MIN;
volatile uint8_t x768 = 0U;
volatile int16_t x769 = -1;
volatile uint32_t x773 = 89U;
uint32_t x776 = 885U;
int32_t x778 = 6;
int16_t x784 = -1;
int16_t x786 = -1;
int8_t x802 = 0;
volatile int16_t x803 = -1;
int32_t x808 = -1239598;
static int32_t t175 = -350903724;
uint8_t x811 = 1U;
static int16_t x816 = -1;
int32_t t177 = 934922;
int16_t x818 = -26;
int8_t x822 = -1;
int16_t x823 = INT16_MAX;
int32_t t179 = -10599;
int64_t x828 = 1969641LL;
uint32_t x833 = 287154870U;
static volatile int32_t x834 = INT32_MIN;
uint16_t x837 = 62U;
static int16_t x850 = INT16_MIN;
static uint8_t x853 = 1U;
volatile uint16_t x861 = 347U;
int16_t x864 = INT16_MAX;
static uint8_t x874 = 1U;
static int32_t t190 = -4984280;
static volatile int32_t x877 = INT32_MIN;
uint64_t x879 = 17098207427877318LLU;
static int64_t x890 = -32264030LL;
static int64_t x894 = INT64_MAX;
int8_t x900 = -1;
volatile int32_t t196 = 67289;
int16_t x908 = 1;
volatile int32_t t197 = -95803;


void f0(void) {
    	static int16_t x5 = INT16_MAX;
	uint32_t x6 = 10137409U;
	uint32_t x7 = 1U;
	static uint8_t x8 = 0U;
	volatile int32_t t0 = 0;

    t0 = ((x5<=(x6%x7))-x8);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x9 = -206;
	static int8_t x11 = INT8_MAX;
	static int8_t x12 = INT8_MAX;

    t1 = ((x9<=(x10%x11))-x12);

    if (t1 != -126) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x13 = 4;
	uint16_t x14 = 9U;
	volatile int16_t x15 = -1;
	uint64_t x16 = 940259077842148313LLU;
	uint64_t t2 = 1740021813700508LLU;

    t2 = ((x13<=(x14%x15))-x16);

    if (t2 != 17506484995867403303LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x17 = 1;
	int64_t x19 = INT64_MIN;
	uint8_t x20 = UINT8_MAX;
	static volatile int32_t t3 = 0;

    t3 = ((x17<=(x18%x19))-x20);

    if (t3 != -255) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x21 = INT32_MIN;
	uint8_t x22 = 17U;
	static uint16_t x23 = 66U;

    t4 = ((x21<=(x22%x23))-x24);

    if (t4 != 2U) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x25 = INT8_MIN;
	uint32_t x26 = UINT32_MAX;
	static int8_t x27 = INT8_MAX;
	uint8_t x28 = 8U;
	int32_t t5 = -86;

    t5 = ((x25<=(x26%x27))-x28);

    if (t5 != -8) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x29 = INT8_MIN;
	static int8_t x31 = -1;
	static uint64_t t6 = 3456436981115755911LLU;

    t6 = ((x29<=(x30%x31))-x32);

    if (t6 != 18446744073702346407LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	static int32_t x33 = INT32_MIN;
	int64_t x34 = -1LL;
	int16_t x35 = INT16_MAX;
	static int8_t x36 = -1;
	volatile int32_t t7 = 9036866;

    t7 = ((x33<=(x34%x35))-x36);

    if (t7 != 2) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x37 = -1;
	uint16_t x38 = UINT16_MAX;
	uint64_t x39 = UINT64_MAX;
	static int64_t t8 = -878051664012LL;

    t8 = ((x37<=(x38%x39))-x40);

    if (t8 != 1816443038310LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x41 = INT32_MAX;
	int16_t x42 = INT16_MIN;
	uint32_t x44 = UINT32_MAX;
	static volatile uint32_t t9 = 122U;

    t9 = ((x41<=(x42%x43))-x44);

    if (t9 != 1U) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x46 = UINT8_MAX;
	uint32_t x47 = UINT32_MAX;
	volatile uint8_t x48 = 3U;
	volatile int32_t t10 = -99922105;

    t10 = ((x45<=(x46%x47))-x48);

    if (t10 != -2) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint64_t x49 = 3890203349165LLU;
	uint64_t x50 = 32740472192LLU;
	int8_t x51 = -1;
	volatile int16_t x52 = INT16_MAX;
	static int32_t t11 = -495995;

    t11 = ((x49<=(x50%x51))-x52);

    if (t11 != -32767) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int8_t x53 = -61;
	int64_t x54 = 715732LL;
	int64_t x56 = -1LL;
	volatile int64_t t12 = 776609092989LL;

    t12 = ((x53<=(x54%x55))-x56);

    if (t12 != 2LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x57 = INT64_MIN;
	int8_t x58 = -1;
	int16_t x59 = INT16_MIN;
	volatile int8_t x60 = 23;

    t13 = ((x57<=(x58%x59))-x60);

    if (t13 != -22) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x69 = INT16_MIN;
	int8_t x72 = 1;
	int32_t t14 = -115623;

    t14 = ((x69<=(x70%x71))-x72);

    if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x73 = INT64_MIN;
	uint16_t x74 = 11284U;
	volatile int8_t x75 = -6;
	static volatile int32_t t15 = -569194;

    t15 = ((x73<=(x74%x75))-x76);

    if (t15 != -126) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x77 = UINT8_MAX;
	static volatile int32_t x78 = INT32_MIN;
	static int16_t x79 = INT16_MIN;
	int64_t t16 = 4110237LL;

    t16 = ((x77<=(x78%x79))-x80);

    if (t16 != -20LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x81 = 138228286573550215LLU;
	static int16_t x83 = 2046;
	int8_t x84 = INT8_MIN;
	volatile int32_t t17 = 884748803;

    t17 = ((x81<=(x82%x83))-x84);

    if (t17 != 128) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x85 = INT16_MAX;
	volatile int64_t x86 = 1105LL;
	int32_t x87 = -116;
	uint8_t x88 = UINT8_MAX;
	int32_t t18 = -2;

    t18 = ((x85<=(x86%x87))-x88);

    if (t18 != -255) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile uint8_t x89 = 0U;
	uint64_t x90 = UINT64_MAX;
	int16_t x91 = INT16_MIN;
	uint32_t x92 = 51993U;
	volatile uint32_t t19 = 499U;

    t19 = ((x89<=(x90%x91))-x92);

    if (t19 != 4294915304U) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x93 = -1;
	int64_t x94 = INT64_MIN;
	volatile int32_t x95 = INT32_MAX;
	static volatile int32_t t20 = 1;

    t20 = ((x93<=(x94%x95))-x96);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int64_t x98 = -212391151808LL;
	volatile int32_t x99 = 414;
	volatile uint64_t x100 = 13227128142198LLU;
	volatile uint64_t t21 = 415LLU;

    t21 = ((x97<=(x98%x99))-x100);

    if (t21 != 18446730846581409418LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x102 = -57;
	int32_t x103 = -1;
	int16_t x104 = INT16_MIN;
	volatile int32_t t22 = 25766805;

    t22 = ((x101<=(x102%x103))-x104);

    if (t22 != 32768) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int32_t x106 = -7;
	uint32_t x107 = UINT32_MAX;
	uint8_t x108 = UINT8_MAX;
	volatile int32_t t23 = -2343520;

    t23 = ((x105<=(x106%x107))-x108);

    if (t23 != -254) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x109 = -1;
	volatile int64_t x110 = 298456805496922LL;
	int32_t x111 = -1;
	int32_t t24 = 1768;

    t24 = ((x109<=(x110%x111))-x112);

    if (t24 != 129) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile uint16_t x114 = 597U;
	static volatile uint8_t x115 = UINT8_MAX;
	int16_t x116 = -1;

    t25 = ((x113<=(x114%x115))-x116);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x117 = -46;
	uint16_t x118 = 0U;
	int8_t x119 = 63;
	volatile int8_t x120 = 33;
	int32_t t26 = -70;

    t26 = ((x117<=(x118%x119))-x120);

    if (t26 != -32) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint64_t x121 = 565052027296LLU;
	int64_t x122 = INT64_MIN;
	uint64_t x123 = UINT64_MAX;
	static uint64_t t27 = 23019255952LLU;

    t27 = ((x121<=(x122%x123))-x124);

    if (t27 != 2LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x125 = -160919;
	int16_t x126 = INT16_MAX;
	uint32_t x127 = 24118U;
	int16_t x128 = 0;
	volatile int32_t t28 = -41;

    t28 = ((x125<=(x126%x127))-x128);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint32_t x129 = UINT32_MAX;
	static int16_t x130 = INT16_MIN;
	uint16_t x132 = 3749U;

    t29 = ((x129<=(x130%x131))-x132);

    if (t29 != -3749) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x133 = -422664857LL;
	uint16_t x134 = 3227U;
	volatile int64_t t30 = 138736899409LL;

    t30 = ((x133<=(x134%x135))-x136);

    if (t30 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint16_t x137 = 779U;
	static int8_t x138 = 3;
	static uint64_t x140 = 296887838458LLU;
	volatile uint64_t t31 = 227457841LLU;

    t31 = ((x137<=(x138%x139))-x140);

    if (t31 != 18446743776821713158LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint32_t x142 = 3U;
	int64_t x143 = 530661665LL;
	int16_t x144 = INT16_MAX;
	int32_t t32 = 467343614;

    t32 = ((x141<=(x142%x143))-x144);

    if (t32 != -32767) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x145 = INT16_MAX;
	int16_t x146 = INT16_MAX;
	int64_t x147 = -1LL;
	volatile int32_t t33 = 334;

    t33 = ((x145<=(x146%x147))-x148);

    if (t33 != 32768) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x149 = UINT16_MAX;
	volatile int32_t x150 = INT32_MAX;
	static int64_t x151 = INT64_MAX;
	int8_t x152 = -1;
	volatile int32_t t34 = -115;

    t34 = ((x149<=(x150%x151))-x152);

    if (t34 != 2) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x153 = 634201359242798LLU;
	int64_t x154 = -1LL;
	int64_t x155 = 120491972230032LL;
	uint32_t x156 = 424476U;
	uint32_t t35 = 2504U;

    t35 = ((x153<=(x154%x155))-x156);

    if (t35 != 4294542821U) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x157 = INT8_MIN;
	uint64_t x158 = UINT64_MAX;
	int8_t x159 = -1;
	uint64_t x160 = 0LLU;
	volatile uint64_t t36 = 510073871LLU;

    t36 = ((x157<=(x158%x159))-x160);

    if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int32_t x162 = INT32_MAX;
	int8_t x163 = 14;
	int8_t x164 = INT8_MIN;
	static volatile int32_t t37 = -9;

    t37 = ((x161<=(x162%x163))-x164);

    if (t37 != 128) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x165 = INT32_MIN;
	static int8_t x166 = -1;
	static int64_t x167 = INT64_MIN;
	static int32_t t38 = 32979;

    t38 = ((x165<=(x166%x167))-x168);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int32_t x173 = -38245067;
	static int32_t x175 = INT32_MAX;
	static int32_t x176 = 1;
	volatile int32_t t39 = -1303;

    t39 = ((x173<=(x174%x175))-x176);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint32_t x177 = UINT32_MAX;
	int8_t x178 = INT8_MIN;
	int32_t x179 = -1;
	int64_t t40 = -11098249LL;

    t40 = ((x177<=(x178%x179))-x180);

    if (t40 != -44435382882652LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x181 = -1;
	int8_t x182 = INT8_MAX;
	int8_t x184 = INT8_MIN;
	int32_t t41 = 175589;

    t41 = ((x181<=(x182%x183))-x184);

    if (t41 != 129) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x185 = 3192018505489067LL;
	volatile int32_t x186 = INT32_MIN;

    t42 = ((x185<=(x186%x187))-x188);

    if (t42 != -11) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x189 = INT64_MIN;
	int8_t x190 = 0;
	int32_t x191 = 258586044;
	int64_t t43 = 361714264LL;

    t43 = ((x189<=(x190%x191))-x192);

    if (t43 != -436LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x193 = 12U;
	volatile int64_t x196 = INT64_MAX;

    t44 = ((x193<=(x194%x195))-x196);

    if (t44 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x202 = UINT32_MAX;
	int16_t x203 = INT16_MAX;
	int64_t x204 = INT64_MAX;
	volatile int64_t t45 = 2999697757596900883LL;

    t45 = ((x201<=(x202%x203))-x204);

    if (t45 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint8_t x205 = UINT8_MAX;
	static int64_t x206 = INT64_MIN;
	volatile uint64_t x207 = 21926026665176LLU;
	volatile int8_t x208 = INT8_MIN;
	static volatile int32_t t46 = -20655112;

    t46 = ((x205<=(x206%x207))-x208);

    if (t46 != 129) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x213 = -7;
	int64_t x214 = INT64_MAX;
	int64_t x215 = 2018785LL;
	int32_t t47 = -50751;

    t47 = ((x213<=(x214%x215))-x216);

    if (t47 != -34314) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x219 = 17227U;
	int64_t x220 = -52031680LL;

    t48 = ((x217<=(x218%x219))-x220);

    if (t48 != 52031681LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint32_t x221 = 1723077U;
	uint32_t x222 = 673U;
	int64_t x223 = INT64_MIN;

    t49 = ((x221<=(x222%x223))-x224);

    if (t49 != -2147483647) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int32_t x225 = INT32_MAX;
	uint8_t x226 = UINT8_MAX;
	int64_t x227 = INT64_MIN;
	int16_t x228 = INT16_MIN;

    t50 = ((x225<=(x226%x227))-x228);

    if (t50 != 32768) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint8_t x233 = 0U;
	volatile int8_t x234 = 1;
	volatile uint32_t x235 = 658925U;
	volatile int32_t t51 = -149621;

    t51 = ((x233<=(x234%x235))-x236);

    if (t51 != 32769) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint8_t x237 = 9U;
	volatile uint64_t x238 = UINT64_MAX;
	static uint32_t x239 = UINT32_MAX;
	uint8_t x240 = 125U;
	static int32_t t52 = 6039;

    t52 = ((x237<=(x238%x239))-x240);

    if (t52 != -125) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x245 = 10U;
	static volatile int32_t x246 = INT32_MAX;
	volatile uint32_t x248 = 28363U;

    t53 = ((x245<=(x246%x247))-x248);

    if (t53 != 4294938934U) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x249 = 13;
	static volatile int32_t x250 = 1;
	uint32_t x252 = UINT32_MAX;
	volatile uint32_t t54 = 114958U;

    t54 = ((x249<=(x250%x251))-x252);

    if (t54 != 1U) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x253 = -1;
	int16_t x254 = 460;
	uint64_t x255 = 22LLU;
	int16_t x256 = INT16_MIN;

    t55 = ((x253<=(x254%x255))-x256);

    if (t55 != 32768) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x257 = 13855U;
	int8_t x260 = -1;
	static int32_t t56 = -1;

    t56 = ((x257<=(x258%x259))-x260);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x269 = 1532U;
	static int64_t x270 = INT64_MAX;
	volatile int32_t t57 = 1;

    t57 = ((x269<=(x270%x271))-x272);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x273 = -1;
	uint16_t x274 = 563U;
	int16_t x275 = INT16_MIN;
	int64_t x276 = 8LL;
	int64_t t58 = 8540973917646158LL;

    t58 = ((x273<=(x274%x275))-x276);

    if (t58 != -7LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x279 = INT8_MAX;
	volatile int32_t t59 = 3425503;

    t59 = ((x277<=(x278%x279))-x280);

    if (t59 != -3) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x282 = INT16_MIN;
	static uint32_t x284 = 36U;
	volatile uint32_t t60 = 7612648U;

    t60 = ((x281<=(x282%x283))-x284);

    if (t60 != 4294967261U) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int64_t x285 = -403474588038LL;
	static int8_t x286 = 19;
	static volatile int32_t x287 = -1;
	static uint32_t x288 = 786956475U;
	volatile uint32_t t61 = 1983538U;

    t61 = ((x285<=(x286%x287))-x288);

    if (t61 != 3508010822U) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x289 = 0U;
	volatile int64_t x291 = INT64_MAX;
	static volatile int16_t x292 = INT16_MIN;

    t62 = ((x289<=(x290%x291))-x292);

    if (t62 != 32769) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x293 = 7U;
	int8_t x295 = -1;
	int8_t x296 = INT8_MAX;
	int32_t t63 = 3909548;

    t63 = ((x293<=(x294%x295))-x296);

    if (t63 != -127) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint64_t x301 = UINT64_MAX;
	uint8_t x302 = UINT8_MAX;
	int8_t x303 = INT8_MIN;

    t64 = ((x301<=(x302%x303))-x304);

    if (t64 != -1870) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x309 = INT32_MIN;
	int32_t x310 = INT32_MAX;
	static int8_t x311 = INT8_MIN;

    t65 = ((x309<=(x310%x311))-x312);

    if (t65 != 129) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x314 = INT16_MAX;
	uint64_t x315 = 82LLU;
	volatile int32_t x316 = -65;
	static int32_t t66 = -5965;

    t66 = ((x313<=(x314%x315))-x316);

    if (t66 != 66) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x317 = 3U;
	int16_t x319 = -1;
	volatile int32_t t67 = 5;

    t67 = ((x317<=(x318%x319))-x320);

    if (t67 != -32767) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint8_t x322 = 41U;
	int16_t x323 = -1;
	uint8_t x324 = UINT8_MAX;
	volatile int32_t t68 = -306298;

    t68 = ((x321<=(x322%x323))-x324);

    if (t68 != -254) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x325 = INT8_MIN;
	uint16_t x326 = 321U;
	uint32_t x328 = UINT32_MAX;
	uint32_t t69 = 9208707U;

    t69 = ((x325<=(x326%x327))-x328);

    if (t69 != 2U) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile uint32_t x330 = 33U;
	int16_t x332 = -1;
	int32_t t70 = 600;

    t70 = ((x329<=(x330%x331))-x332);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x337 = INT32_MIN;
	static uint32_t x338 = 23U;
	int32_t x339 = INT32_MIN;
	uint64_t t71 = 2888109851LLU;

    t71 = ((x337<=(x338%x339))-x340);

    if (t71 != 1LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x341 = -1;
	uint64_t x342 = 35348567937023LLU;
	static int32_t x343 = INT32_MIN;
	volatile int8_t x344 = -7;
	int32_t t72 = -255904;

    t72 = ((x341<=(x342%x343))-x344);

    if (t72 != 7) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x345 = 4;
	static volatile int32_t x346 = INT32_MIN;
	uint16_t x347 = 270U;
	int8_t x348 = INT8_MIN;
	static volatile int32_t t73 = 161998;

    t73 = ((x345<=(x346%x347))-x348);

    if (t73 != 128) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x349 = 2;
	int8_t x350 = INT8_MIN;
	int32_t x351 = INT32_MIN;
	volatile uint32_t x352 = 4U;
	volatile uint32_t t74 = 833838628U;

    t74 = ((x349<=(x350%x351))-x352);

    if (t74 != 4294967292U) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int32_t x353 = 60381469;
	uint8_t x354 = UINT8_MAX;
	volatile uint16_t x355 = 2U;
	int32_t t75 = 7;

    t75 = ((x353<=(x354%x355))-x356);

    if (t75 != -32767) { NG(); } else { ; }
	
}

void f76(void) {
    	static int64_t x357 = INT64_MIN;
	static volatile int16_t x358 = INT16_MAX;
	static int16_t x360 = INT16_MIN;
	int32_t t76 = -8212;

    t76 = ((x357<=(x358%x359))-x360);

    if (t76 != 32769) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x363 = INT8_MIN;
	uint64_t x364 = 12378852LLU;
	uint64_t t77 = 78LLU;

    t77 = ((x361<=(x362%x363))-x364);

    if (t77 != 18446744073697172764LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int8_t x369 = INT8_MAX;
	volatile int32_t x370 = INT32_MIN;
	uint32_t x371 = 22253U;
	int8_t x372 = INT8_MIN;
	volatile int32_t t78 = -103571117;

    t78 = ((x369<=(x370%x371))-x372);

    if (t78 != 129) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x373 = -1;
	static int8_t x374 = 2;
	uint64_t x375 = 15874579LLU;
	int64_t x376 = INT64_MAX;
	volatile int64_t t79 = 241853233618799LL;

    t79 = ((x373<=(x374%x375))-x376);

    if (t79 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x377 = 0;
	int32_t x378 = 14496952;
	int16_t x379 = -24;
	int16_t x380 = -1;
	int32_t t80 = 58527;

    t80 = ((x377<=(x378%x379))-x380);

    if (t80 != 2) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint8_t x381 = 111U;
	int64_t x382 = -3770365649036678443LL;
	static int8_t x384 = -1;
	int32_t t81 = 60729;

    t81 = ((x381<=(x382%x383))-x384);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x385 = 11U;
	int64_t x386 = -31528LL;
	static volatile uint64_t x387 = UINT64_MAX;
	static uint64_t x388 = UINT64_MAX;

    t82 = ((x385<=(x386%x387))-x388);

    if (t82 != 2LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int32_t x389 = -22060467;
	int8_t x390 = -57;
	uint64_t x391 = UINT64_MAX;
	int8_t x392 = INT8_MIN;
	volatile int32_t t83 = 1;

    t83 = ((x389<=(x390%x391))-x392);

    if (t83 != 129) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int64_t x393 = -656100729749LL;
	static int16_t x394 = -4077;
	uint8_t x395 = 1U;
	static int16_t x396 = -1;
	static int32_t t84 = -5813773;

    t84 = ((x393<=(x394%x395))-x396);

    if (t84 != 2) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x398 = -1LL;

    t85 = ((x397<=(x398%x399))-x400);

    if (t85 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint64_t x405 = 1009LLU;
	int8_t x406 = -1;
	int16_t x408 = INT16_MIN;
	volatile int32_t t86 = -5269740;

    t86 = ((x405<=(x406%x407))-x408);

    if (t86 != 32769) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x409 = INT64_MIN;
	volatile int64_t x410 = -839768908828LL;
	volatile int16_t x411 = 15;
	int16_t x412 = 1648;

    t87 = ((x409<=(x410%x411))-x412);

    if (t87 != -1647) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x414 = 9U;
	int64_t x415 = INT64_MIN;
	uint32_t x416 = UINT32_MAX;

    t88 = ((x413<=(x414%x415))-x416);

    if (t88 != 2U) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x417 = 236U;
	static int32_t x418 = 87;
	uint64_t x420 = 7839113LLU;
	volatile uint64_t t89 = 269150LLU;

    t89 = ((x417<=(x418%x419))-x420);

    if (t89 != 18446744073701712503LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x421 = UINT8_MAX;
	uint8_t x422 = UINT8_MAX;
	uint32_t x424 = 721U;
	uint32_t t90 = 16284U;

    t90 = ((x421<=(x422%x423))-x424);

    if (t90 != 4294966576U) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x426 = 6U;
	int32_t x427 = INT32_MIN;
	uint64_t x428 = 429965028906286LLU;
	volatile uint64_t t91 = 429929418LLU;

    t91 = ((x425<=(x426%x427))-x428);

    if (t91 != 18446314108680645331LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x429 = 0LL;
	uint64_t x430 = 1289LLU;
	int16_t x432 = -1;
	int32_t t92 = 0;

    t92 = ((x429<=(x430%x431))-x432);

    if (t92 != 2) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x434 = INT16_MAX;
	int8_t x435 = INT8_MIN;
	uint32_t t93 = 229149837U;

    t93 = ((x433<=(x434%x435))-x436);

    if (t93 != 4294967289U) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x437 = 19U;
	static int16_t x438 = INT16_MIN;
	int8_t x440 = 4;
	static int32_t t94 = 75;

    t94 = ((x437<=(x438%x439))-x440);

    if (t94 != -4) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x441 = INT64_MAX;
	static int8_t x442 = INT8_MIN;
	int16_t x443 = INT16_MIN;
	int16_t x444 = -3;
	static int32_t t95 = -251;

    t95 = ((x441<=(x442%x443))-x444);

    if (t95 != 3) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int64_t x445 = -26370883LL;
	uint16_t x446 = 5U;
	int64_t x447 = INT64_MIN;
	volatile int32_t t96 = 314;

    t96 = ((x445<=(x446%x447))-x448);

    if (t96 != 129) { NG(); } else { ; }
	
}

void f97(void) {
    	static int64_t x449 = INT64_MAX;
	uint16_t x450 = UINT16_MAX;
	int32_t x451 = INT32_MIN;
	int16_t x452 = -15;
	static volatile int32_t t97 = -285823956;

    t97 = ((x449<=(x450%x451))-x452);

    if (t97 != 15) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x453 = INT32_MIN;
	volatile int8_t x454 = INT8_MAX;
	uint64_t x455 = 2138437675099134LLU;
	int32_t x456 = 1;
	static volatile int32_t t98 = 2207;

    t98 = ((x453<=(x454%x455))-x456);

    if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x457 = 39377947;
	int8_t x458 = INT8_MAX;
	uint64_t x460 = 266118695662786LLU;
	volatile uint64_t t99 = 63901705643535204LLU;

    t99 = ((x457<=(x458%x459))-x460);

    if (t99 != 18446477955013888830LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x465 = INT8_MAX;
	int8_t x466 = 28;
	int32_t x467 = INT32_MIN;
	volatile int64_t t100 = -49062050504LL;

    t100 = ((x465<=(x466%x467))-x468);

    if (t100 != 28858LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x469 = -1LL;
	static int8_t x471 = INT8_MIN;
	uint64_t x472 = UINT64_MAX;
	uint64_t t101 = 15227LLU;

    t101 = ((x469<=(x470%x471))-x472);

    if (t101 != 2LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x477 = -1LL;
	static volatile uint8_t x479 = 64U;
	uint32_t x480 = 312301278U;

    t102 = ((x477<=(x478%x479))-x480);

    if (t102 != 3982666019U) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint32_t x481 = 35U;
	uint64_t x482 = 417126018LLU;
	uint64_t x483 = UINT64_MAX;
	int32_t t103 = -5490;

    t103 = ((x481<=(x482%x483))-x484);

    if (t103 != 2) { NG(); } else { ; }
	
}

void f104(void) {
    	static int16_t x487 = INT16_MAX;
	int8_t x488 = INT8_MIN;
	int32_t t104 = 3829945;

    t104 = ((x485<=(x486%x487))-x488);

    if (t104 != 128) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x489 = 4U;
	int64_t x490 = 424715310130807LL;
	uint32_t x491 = 200448270U;
	int32_t t105 = -30670779;

    t105 = ((x489<=(x490%x491))-x492);

    if (t105 != -11) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint8_t x493 = 3U;
	volatile uint8_t x494 = UINT8_MAX;
	int32_t x495 = 1;
	static uint8_t x496 = UINT8_MAX;
	volatile int32_t t106 = 277614;

    t106 = ((x493<=(x494%x495))-x496);

    if (t106 != -255) { NG(); } else { ; }
	
}

void f107(void) {
    	static int64_t x497 = INT64_MAX;
	int64_t x498 = 1363566288LL;
	static int16_t x499 = -1;
	uint8_t x500 = 14U;
	int32_t t107 = -371291;

    t107 = ((x497<=(x498%x499))-x500);

    if (t107 != -14) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x501 = 1658;
	uint8_t x502 = 20U;
	uint16_t x503 = UINT16_MAX;
	uint16_t x504 = UINT16_MAX;
	volatile int32_t t108 = 6591;

    t108 = ((x501<=(x502%x503))-x504);

    if (t108 != -65535) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int32_t x505 = INT32_MIN;
	volatile int64_t x506 = -91LL;
	uint8_t x507 = 73U;
	uint64_t x508 = UINT64_MAX;
	uint64_t t109 = 118363377763096284LLU;

    t109 = ((x505<=(x506%x507))-x508);

    if (t109 != 2LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint64_t x513 = 145805019055132396LLU;
	volatile int32_t x514 = INT32_MIN;
	static volatile int32_t x515 = INT32_MIN;
	volatile int8_t x516 = 1;
	int32_t t110 = 7;

    t110 = ((x513<=(x514%x515))-x516);

    if (t110 != -1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x517 = UINT16_MAX;
	uint8_t x518 = 12U;
	int16_t x519 = INT16_MIN;
	int16_t x520 = 2;
	static int32_t t111 = -1;

    t111 = ((x517<=(x518%x519))-x520);

    if (t111 != -2) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x521 = INT64_MIN;
	static int16_t x522 = INT16_MIN;
	int64_t x523 = -28531235610582790LL;
	int16_t x524 = -1;
	static volatile int32_t t112 = 500452;

    t112 = ((x521<=(x522%x523))-x524);

    if (t112 != 2) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x526 = -6;
	int64_t x527 = -1LL;
	volatile int32_t t113 = 4;

    t113 = ((x525<=(x526%x527))-x528);

    if (t113 != -2) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x530 = INT8_MAX;
	uint16_t x531 = 2U;
	static uint8_t x532 = 112U;
	int32_t t114 = -5225;

    t114 = ((x529<=(x530%x531))-x532);

    if (t114 != -111) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x533 = INT16_MAX;
	int8_t x534 = INT8_MIN;
	int32_t x536 = -1;
	int32_t t115 = 353;

    t115 = ((x533<=(x534%x535))-x536);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static int64_t x537 = INT64_MIN;
	int16_t x538 = INT16_MIN;
	uint8_t x540 = UINT8_MAX;
	static volatile int32_t t116 = -160;

    t116 = ((x537<=(x538%x539))-x540);

    if (t116 != -254) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint8_t x541 = 3U;
	static int16_t x544 = -110;
	int32_t t117 = -31327;

    t117 = ((x541<=(x542%x543))-x544);

    if (t117 != 111) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x545 = INT64_MAX;
	int8_t x546 = INT8_MIN;
	int8_t x547 = INT8_MAX;
	static int64_t x548 = INT64_MAX;
	static volatile int64_t t118 = 4151598703LL;

    t118 = ((x545<=(x546%x547))-x548);

    if (t118 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int16_t x549 = 641;
	int64_t x550 = -2849LL;
	int64_t x551 = INT64_MIN;
	uint16_t x552 = 1U;

    t119 = ((x549<=(x550%x551))-x552);

    if (t119 != -1) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x553 = 13;
	int64_t x555 = INT64_MIN;
	int8_t x556 = INT8_MIN;
	int32_t t120 = -320215;

    t120 = ((x553<=(x554%x555))-x556);

    if (t120 != 128) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x557 = -1;
	int32_t x558 = INT32_MIN;
	static uint32_t x559 = 1771U;
	uint8_t x560 = 96U;

    t121 = ((x557<=(x558%x559))-x560);

    if (t121 != -96) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x561 = 18237275992LL;
	static int16_t x562 = INT16_MIN;
	int32_t x563 = INT32_MIN;
	int32_t t122 = -87;

    t122 = ((x561<=(x562%x563))-x564);

    if (t122 != -4) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile int8_t x565 = INT8_MIN;
	uint16_t x566 = 28U;
	static uint32_t x567 = 267836U;
	int32_t x568 = INT32_MAX;
	int32_t t123 = -37;

    t123 = ((x565<=(x566%x567))-x568);

    if (t123 != -2147483647) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x573 = 4046;
	int64_t x574 = 38998811746LL;
	int16_t x575 = 1;
	uint64_t x576 = 819LLU;
	uint64_t t124 = 2983363733936267LLU;

    t124 = ((x573<=(x574%x575))-x576);

    if (t124 != 18446744073709550797LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x577 = INT16_MIN;
	uint32_t x578 = UINT32_MAX;
	volatile int16_t x579 = 1279;
	int32_t x580 = 62476;
	int32_t t125 = -783;

    t125 = ((x577<=(x578%x579))-x580);

    if (t125 != -62476) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x582 = -1;
	static uint16_t x584 = 11369U;
	int32_t t126 = 1258;

    t126 = ((x581<=(x582%x583))-x584);

    if (t126 != -11369) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x585 = 22U;
	uint32_t x587 = 2466754U;
	uint32_t t127 = 7615420U;

    t127 = ((x585<=(x586%x587))-x588);

    if (t127 != 2U) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x590 = -2;
	uint8_t x592 = UINT8_MAX;
	static volatile int32_t t128 = -1005388;

    t128 = ((x589<=(x590%x591))-x592);

    if (t128 != -254) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x593 = INT64_MAX;
	static uint16_t x594 = UINT16_MAX;
	static uint16_t x595 = 59U;
	static uint16_t x596 = 7094U;
	volatile int32_t t129 = 9;

    t129 = ((x593<=(x594%x595))-x596);

    if (t129 != -7094) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x597 = INT64_MIN;
	uint32_t x598 = 6U;
	int8_t x599 = INT8_MIN;
	uint64_t x600 = 41828LLU;

    t130 = ((x597<=(x598%x599))-x600);

    if (t130 != 18446744073709509789LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x606 = 15252479563043185LLU;
	int32_t x607 = -3275;
	volatile uint64_t t131 = 3808561130LLU;

    t131 = ((x605<=(x606%x607))-x608);

    if (t131 != 9304622348388841852LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x610 = 1U;
	volatile int8_t x612 = -1;
	int32_t t132 = -12022945;

    t132 = ((x609<=(x610%x611))-x612);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x614 = UINT32_MAX;
	int16_t x615 = 15356;
	static volatile uint32_t x616 = 13209714U;
	static volatile uint32_t t133 = 5U;

    t133 = ((x613<=(x614%x615))-x616);

    if (t133 != 4281757583U) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x618 = INT8_MAX;
	int8_t x619 = INT8_MIN;
	static volatile int32_t x620 = 6;
	static volatile int32_t t134 = 2268;

    t134 = ((x617<=(x618%x619))-x620);

    if (t134 != -5) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile uint16_t x622 = 229U;
	int64_t x624 = -6207753LL;

    t135 = ((x621<=(x622%x623))-x624);

    if (t135 != 6207754LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint8_t x625 = 15U;
	static uint64_t x626 = 1477359821171460746LLU;
	static uint64_t x627 = 2LLU;

    t136 = ((x625<=(x626%x627))-x628);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x631 = UINT64_MAX;
	volatile int32_t t137 = -27;

    t137 = ((x629<=(x630%x631))-x632);

    if (t137 != -65535) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x633 = -3770589970175833LL;
	volatile int16_t x635 = 58;
	int32_t x636 = 420886;
	volatile int32_t t138 = -25480335;

    t138 = ((x633<=(x634%x635))-x636);

    if (t138 != -420885) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x637 = INT16_MIN;
	int64_t x639 = 50595191517LL;
	static uint64_t x640 = 5LLU;
	volatile uint64_t t139 = 4964LLU;

    t139 = ((x637<=(x638%x639))-x640);

    if (t139 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile int16_t x641 = INT16_MIN;
	static int32_t x642 = -1;
	uint8_t x643 = UINT8_MAX;
	uint16_t x644 = 1519U;

    t140 = ((x641<=(x642%x643))-x644);

    if (t140 != -1518) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint16_t x645 = 1915U;
	uint64_t x647 = UINT64_MAX;
	int64_t t141 = -386LL;

    t141 = ((x645<=(x646%x647))-x648);

    if (t141 != -5542LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x649 = INT16_MAX;
	volatile int8_t x650 = 0;
	int32_t x651 = 5553146;
	int32_t t142 = 3;

    t142 = ((x649<=(x650%x651))-x652);

    if (t142 != 32768) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int8_t x653 = INT8_MIN;
	volatile int16_t x654 = 5980;
	int8_t x655 = -1;
	volatile uint16_t x656 = UINT16_MAX;
	static volatile int32_t t143 = 3326;

    t143 = ((x653<=(x654%x655))-x656);

    if (t143 != -65534) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x670 = 1U;
	int32_t x671 = -1;
	volatile int8_t x672 = INT8_MIN;
	int32_t t144 = -2186584;

    t144 = ((x669<=(x670%x671))-x672);

    if (t144 != 129) { NG(); } else { ; }
	
}

void f145(void) {
    	static int32_t x673 = -1;
	static int64_t x674 = INT64_MIN;
	int8_t x675 = INT8_MIN;
	int64_t x676 = 12928234955690LL;
	static volatile int64_t t145 = -2LL;

    t145 = ((x673<=(x674%x675))-x676);

    if (t145 != -12928234955689LL) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x677 = -57;
	int64_t x678 = 784249965LL;
	uint32_t x679 = UINT32_MAX;
	int64_t x680 = -1LL;
	int64_t t146 = -3137LL;

    t146 = ((x677<=(x678%x679))-x680);

    if (t146 != 2LL) { NG(); } else { ; }
	
}

void f147(void) {
    	static int16_t x681 = INT16_MIN;
	static uint64_t x682 = 1062242142081679977LLU;
	uint32_t x683 = UINT32_MAX;
	volatile int32_t x684 = INT32_MAX;
	int32_t t147 = -1;

    t147 = ((x681<=(x682%x683))-x684);

    if (t147 != -2147483647) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x693 = -6;
	int16_t x694 = INT16_MAX;
	static uint32_t x695 = UINT32_MAX;
	int16_t x696 = INT16_MAX;

    t148 = ((x693<=(x694%x695))-x696);

    if (t148 != -32767) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint64_t x697 = UINT64_MAX;
	volatile int16_t x698 = INT16_MAX;
	int16_t x699 = INT16_MIN;
	int16_t x700 = INT16_MIN;
	static volatile int32_t t149 = 1833;

    t149 = ((x697<=(x698%x699))-x700);

    if (t149 != 32768) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x701 = -1;
	uint64_t x702 = UINT64_MAX;
	static int64_t x703 = 54465433274035745LL;
	uint64_t x704 = 6681339524227617112LLU;
	volatile uint64_t t150 = 597792LLU;

    t150 = ((x701<=(x702%x703))-x704);

    if (t150 != 11765404549481934504LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x705 = -5510445998320LL;
	uint16_t x706 = 1940U;
	volatile uint8_t x707 = 11U;
	static int16_t x708 = -1;
	volatile int32_t t151 = -2259;

    t151 = ((x705<=(x706%x707))-x708);

    if (t151 != 2) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x709 = -1LL;
	int8_t x710 = -1;
	uint64_t x711 = UINT64_MAX;
	int32_t t152 = -2;

    t152 = ((x709<=(x710%x711))-x712);

    if (t152 != -170841381) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x714 = INT16_MIN;
	int64_t x715 = INT64_MIN;
	volatile uint64_t x716 = 55LLU;
	uint64_t t153 = 12LLU;

    t153 = ((x713<=(x714%x715))-x716);

    if (t153 != 18446744073709551561LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int64_t x717 = -17LL;
	int8_t x718 = -5;
	static int8_t x719 = INT8_MAX;
	uint8_t x720 = 2U;
	int32_t t154 = -7744;

    t154 = ((x717<=(x718%x719))-x720);

    if (t154 != -1) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x721 = INT32_MAX;
	uint32_t x722 = 7451U;
	static int16_t x723 = -2656;
	int16_t x724 = -1;
	static volatile int32_t t155 = 1;

    t155 = ((x721<=(x722%x723))-x724);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint8_t x725 = 91U;
	int16_t x726 = 268;
	uint16_t x727 = UINT16_MAX;

    t156 = ((x725<=(x726%x727))-x728);

    if (t156 != 4294967286U) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x730 = INT32_MIN;
	int32_t x731 = INT32_MIN;
	volatile int8_t x732 = -1;
	volatile int32_t t157 = 4;

    t157 = ((x729<=(x730%x731))-x732);

    if (t157 != 2) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x734 = 22U;
	int16_t x735 = -147;
	int16_t x736 = INT16_MIN;
	volatile int32_t t158 = 1;

    t158 = ((x733<=(x734%x735))-x736);

    if (t158 != 32769) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x741 = 0;
	volatile int8_t x742 = INT8_MAX;
	volatile uint8_t x743 = 75U;
	volatile int32_t t159 = -721149;

    t159 = ((x741<=(x742%x743))-x744);

    if (t159 != -298995) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x745 = -34;
	static int8_t x746 = -1;
	volatile int64_t x747 = INT64_MAX;
	static uint16_t x748 = 2609U;
	int32_t t160 = 8;

    t160 = ((x745<=(x746%x747))-x748);

    if (t160 != -2608) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x750 = UINT64_MAX;
	int64_t x752 = INT64_MAX;
	volatile int64_t t161 = 1580242765LL;

    t161 = ((x749<=(x750%x751))-x752);

    if (t161 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x753 = 47070U;
	static int32_t x754 = 600683;
	int64_t x755 = INT64_MIN;
	volatile int32_t t162 = -808874;

    t162 = ((x753<=(x754%x755))-x756);

    if (t162 != -39) { NG(); } else { ; }
	
}

void f163(void) {
    	static int8_t x757 = -1;
	volatile int32_t x759 = -159254712;
	int32_t t163 = 0;

    t163 = ((x757<=(x758%x759))-x760);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x761 = INT8_MAX;
	uint8_t x763 = UINT8_MAX;
	static int16_t x764 = -1;
	static volatile int32_t t164 = 377155;

    t164 = ((x761<=(x762%x763))-x764);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x765 = 0U;
	int8_t x766 = INT8_MIN;
	static volatile int32_t x767 = INT32_MIN;
	int32_t t165 = 127;

    t165 = ((x765<=(x766%x767))-x768);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x770 = INT32_MIN;
	uint16_t x771 = UINT16_MAX;
	static uint32_t x772 = UINT32_MAX;
	volatile uint32_t t166 = 573014071U;

    t166 = ((x769<=(x770%x771))-x772);

    if (t166 != 1U) { NG(); } else { ; }
	
}

void f167(void) {
    	static int16_t x774 = INT16_MIN;
	volatile int64_t x775 = -1LL;
	volatile uint32_t t167 = 213685U;

    t167 = ((x773<=(x774%x775))-x776);

    if (t167 != 4294966411U) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x777 = UINT16_MAX;
	static uint8_t x779 = 63U;
	uint16_t x780 = 5U;
	static volatile int32_t t168 = 2;

    t168 = ((x777<=(x778%x779))-x780);

    if (t168 != -5) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x781 = INT8_MIN;
	int16_t x782 = INT16_MIN;
	static int64_t x783 = INT64_MAX;
	int32_t t169 = -2017115;

    t169 = ((x781<=(x782%x783))-x784);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x785 = -31;
	volatile int8_t x787 = INT8_MIN;
	int8_t x788 = 3;
	volatile int32_t t170 = 28925891;

    t170 = ((x785<=(x786%x787))-x788);

    if (t170 != -2) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x789 = UINT32_MAX;
	int8_t x790 = INT8_MIN;
	static int16_t x791 = INT16_MIN;
	volatile uint64_t x792 = UINT64_MAX;
	uint64_t t171 = 6537275487766166LLU;

    t171 = ((x789<=(x790%x791))-x792);

    if (t171 != 1LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x793 = -899LL;
	int16_t x794 = INT16_MIN;
	static int32_t x795 = 657;
	volatile int16_t x796 = -435;
	int32_t t172 = -9;

    t172 = ((x793<=(x794%x795))-x796);

    if (t172 != 436) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x797 = INT64_MIN;
	volatile int16_t x798 = INT16_MAX;
	int16_t x799 = 10;
	volatile int8_t x800 = INT8_MIN;
	static volatile int32_t t173 = 4;

    t173 = ((x797<=(x798%x799))-x800);

    if (t173 != 129) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x801 = -41;
	static volatile uint8_t x804 = 6U;
	volatile int32_t t174 = -3;

    t174 = ((x801<=(x802%x803))-x804);

    if (t174 != -5) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x805 = 28;
	volatile int32_t x806 = INT32_MIN;
	int64_t x807 = INT64_MAX;

    t175 = ((x805<=(x806%x807))-x808);

    if (t175 != 1239598) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x809 = 56U;
	static volatile int64_t x810 = INT64_MAX;
	static uint64_t x812 = 74263218420332129LLU;
	volatile uint64_t t176 = 1LLU;

    t176 = ((x809<=(x810%x811))-x812);

    if (t176 != 18372480855289219487LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x813 = UINT16_MAX;
	static int64_t x814 = INT64_MIN;
	static int32_t x815 = -1;

    t177 = ((x813<=(x814%x815))-x816);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int16_t x817 = INT16_MIN;
	int16_t x819 = -1;
	int8_t x820 = 1;
	volatile int32_t t178 = -64;

    t178 = ((x817<=(x818%x819))-x820);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint32_t x821 = UINT32_MAX;
	uint8_t x824 = 1U;

    t179 = ((x821<=(x822%x823))-x824);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x825 = INT32_MAX;
	volatile int64_t x826 = INT64_MAX;
	uint32_t x827 = 3995875U;
	int64_t t180 = -3379817932653LL;

    t180 = ((x825<=(x826%x827))-x828);

    if (t180 != -1969641LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x829 = -11865;
	uint32_t x830 = UINT32_MAX;
	int64_t x831 = INT64_MAX;
	int32_t x832 = -1;
	volatile int32_t t181 = -234;

    t181 = ((x829<=(x830%x831))-x832);

    if (t181 != 2) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x835 = INT64_MIN;
	static int32_t x836 = INT32_MAX;
	volatile int32_t t182 = 5909;

    t182 = ((x833<=(x834%x835))-x836);

    if (t182 != -2147483647) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x838 = 7U;
	int8_t x839 = INT8_MAX;
	static volatile int32_t x840 = -1;
	static volatile int32_t t183 = -693005;

    t183 = ((x837<=(x838%x839))-x840);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x845 = -1;
	int16_t x846 = 365;
	int8_t x847 = INT8_MIN;
	int32_t x848 = -1;
	volatile int32_t t184 = 1;

    t184 = ((x845<=(x846%x847))-x848);

    if (t184 != 2) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x849 = 15U;
	volatile int32_t x851 = INT32_MIN;
	int32_t x852 = INT32_MAX;
	volatile int32_t t185 = 0;

    t185 = ((x849<=(x850%x851))-x852);

    if (t185 != -2147483647) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x854 = -795;
	static int16_t x855 = INT16_MIN;
	int32_t x856 = -1;
	volatile int32_t t186 = 4;

    t186 = ((x853<=(x854%x855))-x856);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x857 = INT32_MIN;
	static uint64_t x858 = 2904536561428511LLU;
	uint16_t x859 = UINT16_MAX;
	int8_t x860 = INT8_MIN;
	static volatile int32_t t187 = 14890634;

    t187 = ((x857<=(x858%x859))-x860);

    if (t187 != 128) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x862 = 40LLU;
	uint64_t x863 = UINT64_MAX;
	int32_t t188 = 73982330;

    t188 = ((x861<=(x862%x863))-x864);

    if (t188 != -32767) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x869 = UINT32_MAX;
	int64_t x870 = -101706LL;
	uint16_t x871 = UINT16_MAX;
	int32_t x872 = INT32_MAX;
	int32_t t189 = 443334;

    t189 = ((x869<=(x870%x871))-x872);

    if (t189 != -2147483647) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x873 = 1;
	int8_t x875 = -1;
	static int8_t x876 = -2;

    t190 = ((x873<=(x874%x875))-x876);

    if (t190 != 2) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x878 = INT32_MIN;
	int8_t x880 = INT8_MIN;
	int32_t t191 = -38868;

    t191 = ((x877<=(x878%x879))-x880);

    if (t191 != 128) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x881 = INT16_MIN;
	int8_t x882 = INT8_MAX;
	uint32_t x883 = UINT32_MAX;
	int32_t x884 = -63130638;
	int32_t t192 = -4882;

    t192 = ((x881<=(x882%x883))-x884);

    if (t192 != 63130638) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x889 = -1;
	int64_t x891 = 20LL;
	int64_t x892 = -149565247437109LL;
	int64_t t193 = -3422408LL;

    t193 = ((x889<=(x890%x891))-x892);

    if (t193 != 149565247437109LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x893 = INT16_MIN;
	int8_t x895 = INT8_MIN;
	int8_t x896 = -1;
	int32_t t194 = 104879658;

    t194 = ((x893<=(x894%x895))-x896);

    if (t194 != 2) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x897 = -1LL;
	int16_t x898 = INT16_MIN;
	volatile int32_t x899 = INT32_MIN;
	static int32_t t195 = -1;

    t195 = ((x897<=(x898%x899))-x900);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x901 = INT8_MAX;
	int8_t x902 = 2;
	static uint32_t x903 = 23792176U;
	int16_t x904 = -1;

    t196 = ((x901<=(x902%x903))-x904);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int8_t x905 = INT8_MAX;
	int32_t x906 = -1212;
	volatile int64_t x907 = -1LL;

    t197 = ((x905<=(x906%x907))-x908);

    if (t197 != -1) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x909 = INT8_MAX;
	int64_t x910 = -29406838LL;
	int64_t x911 = INT64_MAX;
	int8_t x912 = -1;
	volatile int32_t t198 = 21339495;

    t198 = ((x909<=(x910%x911))-x912);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x913 = INT16_MAX;
	int32_t x914 = 2;
	uint16_t x915 = 356U;
	uint8_t x916 = 15U;
	volatile int32_t t199 = 226882131;

    t199 = ((x913<=(x914%x915))-x916);

    if (t199 != -15) { NG(); } else { ; }
	
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

