
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

static volatile uint32_t x2 = 23052U;
volatile int16_t x5 = 980;
volatile int32_t t1 = 3634;
int32_t x12 = INT32_MIN;
static uint32_t x15 = 12U;
uint8_t x16 = 1U;
uint64_t x19 = 702LLU;
int32_t t4 = -49603355;
static volatile uint64_t x26 = 171743607022LLU;
uint64_t x31 = 7640084196543LLU;
uint16_t x34 = UINT16_MAX;
int8_t x36 = INT8_MIN;
volatile uint32_t x39 = 9248U;
int32_t t9 = 229;
uint64_t x41 = 0LLU;
int16_t x46 = -1;
volatile int32_t t14 = -295753;
volatile int32_t x68 = 95403;
int32_t x71 = 4087379;
int64_t x74 = INT64_MIN;
int8_t x78 = -1;
int16_t x79 = -1;
static uint8_t x80 = 64U;
volatile int32_t t20 = 753626;
volatile int32_t t21 = -1;
uint8_t x94 = 63U;
uint16_t x98 = 0U;
int32_t t24 = 43;
volatile int32_t t25 = -144;
volatile int16_t x109 = INT16_MIN;
int8_t x110 = INT8_MIN;
volatile int64_t x116 = INT64_MIN;
static int64_t x117 = -1LL;
uint64_t x119 = UINT64_MAX;
int32_t x135 = 14191;
volatile int32_t t34 = 7542289;
int64_t x145 = INT64_MIN;
int32_t t36 = -29;
int8_t x150 = -16;
int32_t x154 = INT32_MIN;
volatile int32_t t38 = 322312;
int64_t x160 = 6LL;
volatile uint64_t x166 = UINT64_MAX;
int8_t x167 = INT8_MAX;
volatile int8_t x171 = -1;
volatile int8_t x175 = INT8_MIN;
uint8_t x177 = UINT8_MAX;
uint16_t x186 = UINT16_MAX;
int16_t x188 = INT16_MAX;
int8_t x198 = 1;
int16_t x201 = 72;
uint16_t x202 = UINT16_MAX;
volatile int64_t x212 = INT64_MIN;
int16_t x214 = 1684;
int64_t x220 = -3497472LL;
volatile int32_t t54 = -160571932;
int16_t x229 = INT16_MIN;
static int64_t x244 = INT64_MIN;
int32_t x254 = -1;
int32_t x260 = 696;
volatile uint16_t x263 = 3384U;
static volatile int64_t x264 = 1565LL;
int8_t x271 = INT8_MIN;
static int16_t x272 = INT16_MIN;
uint64_t x273 = 274LLU;
uint32_t x275 = UINT32_MAX;
static uint16_t x276 = 55U;
int64_t x280 = 201190LL;
int64_t x281 = -865408LL;
int64_t x292 = 5184653226538684LL;
uint64_t x297 = 126734921LLU;
int16_t x308 = INT16_MIN;
int8_t x318 = INT8_MAX;
int32_t x320 = INT32_MIN;
int32_t t77 = 1391;
volatile int32_t t78 = 31793693;
uint8_t x348 = UINT8_MAX;
volatile int32_t t84 = 13370;
uint64_t x354 = 604710702909LLU;
volatile int16_t x360 = INT16_MAX;
volatile int32_t t87 = -1143617;
int64_t x362 = INT64_MIN;
volatile uint16_t x371 = UINT16_MAX;
int32_t x378 = INT32_MIN;
uint16_t x379 = UINT16_MAX;
int32_t x384 = -507997889;
static uint32_t x389 = 557U;
int16_t x396 = -1;
static int8_t x398 = -12;
int8_t x399 = INT8_MIN;
static int64_t x406 = INT64_MAX;
int32_t x410 = -1;
static int16_t x412 = INT16_MIN;
uint16_t x425 = 937U;
int64_t x428 = -24809843080LL;
int32_t x430 = -1;
uint8_t x435 = 25U;
static volatile int32_t t106 = -130769177;
volatile int16_t x439 = -1;
int32_t t107 = -107224;
static volatile uint32_t x442 = 34U;
static uint32_t x445 = 110U;
static int32_t t109 = 71;
static uint16_t x463 = UINT16_MAX;
int32_t t113 = 1;
int32_t x468 = -1;
uint64_t x471 = 9421654951277LLU;
int16_t x473 = INT16_MIN;
uint64_t x476 = 70155891536701LLU;
static uint64_t x477 = 345LLU;
int64_t x478 = -1LL;
int32_t t117 = -1163046;
static int32_t t118 = 14686;
int8_t x485 = INT8_MIN;
static int32_t t120 = -520126320;
int32_t t121 = 0;
uint16_t x497 = UINT16_MAX;
int64_t x498 = 1195347012LL;
uint64_t x499 = 87236LLU;
static uint8_t x500 = 1U;
uint16_t x501 = 6U;
int32_t x508 = -1;
uint32_t x511 = 639126108U;
int32_t t125 = 169;
volatile int16_t x514 = INT16_MIN;
int32_t x515 = INT32_MAX;
int32_t t126 = 1;
static uint64_t x518 = 6675996653273LLU;
int16_t x519 = -1;
int32_t t129 = -199213829;
volatile uint8_t x534 = 0U;
int32_t x552 = 99636;
volatile int8_t x556 = -1;
uint16_t x557 = UINT16_MAX;
static uint64_t x560 = UINT64_MAX;
uint16_t x562 = 13010U;
int16_t x563 = INT16_MIN;
int32_t t137 = 58548732;
uint8_t x570 = 2U;
static uint32_t x574 = UINT32_MAX;
static int64_t x580 = INT64_MIN;
uint8_t x584 = UINT8_MAX;
uint16_t x585 = 14U;
static volatile int32_t x586 = 12558;
static int32_t t143 = 393719088;
static volatile int64_t x593 = -1LL;
int32_t x594 = INT32_MIN;
int64_t x595 = -1LL;
volatile int32_t t144 = 0;
int32_t x610 = -1;
uint32_t x612 = 209234509U;
static int8_t x614 = 13;
static volatile uint16_t x615 = 668U;
int16_t x617 = INT16_MIN;
volatile uint64_t x620 = 14946264208219LLU;
int16_t x621 = -1;
volatile int32_t t152 = 127231776;
int32_t t153 = -496942775;
static volatile uint32_t x638 = UINT32_MAX;
int8_t x639 = 1;
int64_t x640 = -1LL;
uint16_t x642 = 892U;
int64_t x643 = INT64_MIN;
volatile int16_t x650 = -1;
int32_t t156 = 57595;
static int8_t x659 = INT8_MIN;
uint8_t x660 = 11U;
uint64_t x661 = UINT64_MAX;
static volatile uint8_t x665 = 69U;
int32_t x668 = INT32_MAX;
int16_t x674 = -1;
int8_t x676 = INT8_MIN;
uint8_t x680 = UINT8_MAX;
int64_t x684 = -1LL;
int8_t x688 = INT8_MIN;
uint16_t x689 = 136U;
uint8_t x692 = 41U;
static volatile int32_t t165 = -152564782;
int8_t x697 = -1;
static uint8_t x698 = UINT8_MAX;
uint32_t x705 = 594218U;
volatile uint64_t x710 = UINT64_MAX;
int64_t x711 = INT64_MAX;
int32_t x712 = -973436312;
uint8_t x714 = 110U;
volatile int32_t t171 = -67;
int16_t x719 = INT16_MIN;
int64_t x726 = -225752725485882070LL;
int8_t x728 = -12;
static volatile int32_t t174 = 858805693;
int32_t x736 = INT32_MIN;
int32_t t176 = -7846;
static int32_t t178 = 24292;
volatile int32_t t180 = 14962192;
static volatile int32_t t181 = -5584868;
volatile int32_t t182 = 45108325;
volatile uint16_t x766 = UINT16_MAX;
int32_t x771 = INT32_MAX;
volatile int32_t t184 = 53927;
int64_t x777 = 34460764LL;
uint16_t x778 = UINT16_MAX;
int64_t x779 = -1LL;
uint32_t x781 = 1447105996U;
int32_t x782 = INT32_MIN;
int32_t x788 = INT32_MAX;
int16_t x790 = INT16_MIN;
int8_t x791 = -1;
volatile int32_t t189 = 714955;
static int8_t x798 = INT8_MIN;
int16_t x807 = INT16_MIN;
uint32_t x808 = UINT32_MAX;
volatile int32_t t193 = -101342996;
int64_t x814 = -1LL;
int64_t x815 = -415312LL;
volatile int32_t t196 = 1660386;
volatile int32_t t197 = 97;
int64_t x826 = -1LL;
int16_t x830 = INT16_MIN;


void f0(void) {
    	int32_t x1 = INT32_MAX;
	int32_t x3 = INT32_MAX;
	int16_t x4 = 2;
	volatile int32_t t0 = -1;

    t0 = ((x1|(x2%x3))==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x6 = -33;
	static volatile int32_t x7 = -1;
	int64_t x8 = -1LL;

    t1 = ((x5|(x6%x7))==x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x9 = UINT16_MAX;
	int16_t x10 = 1;
	uint64_t x11 = 2931LLU;
	static int32_t t2 = -4639;

    t2 = ((x9|(x10%x11))==x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = -1;
	int32_t x14 = -12496069;
	volatile int32_t t3 = 30171;

    t3 = ((x13|(x14%x15))==x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x17 = 96888514024LLU;
	volatile uint8_t x18 = 1U;
	int16_t x20 = INT16_MIN;

    t4 = ((x17|(x18%x19))==x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile int32_t x21 = -35001789;
	int16_t x22 = -26;
	uint8_t x23 = UINT8_MAX;
	static uint32_t x24 = 10208482U;
	int32_t t5 = -20938;

    t5 = ((x21|(x22%x23))==x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x25 = INT16_MIN;
	static int8_t x27 = INT8_MIN;
	int16_t x28 = INT16_MIN;
	int32_t t6 = -17;

    t6 = ((x25|(x26%x27))==x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = 0;
	uint32_t x30 = 3U;
	uint16_t x32 = 418U;
	int32_t t7 = 1885;

    t7 = ((x29|(x30%x31))==x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = 907528LL;
	static volatile int8_t x35 = 1;
	volatile int32_t t8 = 10;

    t8 = ((x33|(x34%x35))==x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = INT8_MIN;
	int8_t x38 = INT8_MAX;
	int64_t x40 = 364418929LL;

    t9 = ((x37|(x38%x39))==x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int32_t x42 = -1;
	volatile int32_t x43 = INT32_MIN;
	uint16_t x44 = UINT16_MAX;
	volatile int32_t t10 = -55444;

    t10 = ((x41|(x42%x43))==x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x45 = -21205LL;
	uint16_t x47 = UINT16_MAX;
	int16_t x48 = 104;
	int32_t t11 = 15912;

    t11 = ((x45|(x46%x47))==x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = INT16_MAX;
	uint64_t x50 = UINT64_MAX;
	static int32_t x51 = INT32_MIN;
	volatile int64_t x52 = 514465999770600LL;
	int32_t t12 = 16;

    t12 = ((x49|(x50%x51))==x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x53 = INT64_MIN;
	int8_t x54 = 1;
	int64_t x55 = -1LL;
	static int8_t x56 = INT8_MAX;
	volatile int32_t t13 = 0;

    t13 = ((x53|(x54%x55))==x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = INT8_MIN;
	int8_t x58 = -1;
	uint32_t x59 = UINT32_MAX;
	static volatile uint32_t x60 = UINT32_MAX;

    t14 = ((x57|(x58%x59))==x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint32_t x61 = 114379054U;
	static int8_t x62 = 28;
	volatile int64_t x63 = -6LL;
	volatile int8_t x64 = 3;
	int32_t t15 = 49511;

    t15 = ((x61|(x62%x63))==x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile uint32_t x65 = 125687U;
	volatile int32_t x66 = INT32_MIN;
	volatile int64_t x67 = -1LL;
	volatile int32_t t16 = -4;

    t16 = ((x65|(x66%x67))==x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x69 = INT32_MIN;
	uint16_t x70 = UINT16_MAX;
	volatile int16_t x72 = INT16_MIN;
	volatile int32_t t17 = -1081;

    t17 = ((x69|(x70%x71))==x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x73 = 18U;
	int8_t x75 = INT8_MAX;
	int32_t x76 = -35;
	volatile int32_t t18 = 17355707;

    t18 = ((x73|(x74%x75))==x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = -24011131011698062LL;
	volatile int32_t t19 = -64053;

    t19 = ((x77|(x78%x79))==x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int64_t x81 = INT64_MAX;
	volatile uint32_t x82 = 1065954U;
	int8_t x83 = 45;
	int32_t x84 = 190667;

    t20 = ((x81|(x82%x83))==x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x85 = INT64_MAX;
	int16_t x86 = -113;
	volatile int64_t x87 = INT64_MIN;
	int16_t x88 = INT16_MIN;

    t21 = ((x85|(x86%x87))==x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint16_t x89 = 118U;
	static volatile int8_t x90 = INT8_MIN;
	int64_t x91 = -232847LL;
	static int8_t x92 = -4;
	volatile int32_t t22 = 561;

    t22 = ((x89|(x90%x91))==x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x93 = 15;
	static uint16_t x95 = 32U;
	static int16_t x96 = 62;
	volatile int32_t t23 = -172823582;

    t23 = ((x93|(x94%x95))==x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint64_t x97 = UINT64_MAX;
	int16_t x99 = 20;
	uint32_t x100 = 6775U;

    t24 = ((x97|(x98%x99))==x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x101 = UINT32_MAX;
	static int64_t x102 = 7225LL;
	volatile uint32_t x103 = 351555U;
	volatile int64_t x104 = -1LL;

    t25 = ((x101|(x102%x103))==x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x105 = 5U;
	volatile uint8_t x106 = 0U;
	uint16_t x107 = 482U;
	int16_t x108 = INT16_MIN;
	volatile int32_t t26 = 59646064;

    t26 = ((x105|(x106%x107))==x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int16_t x111 = INT16_MIN;
	int64_t x112 = -309466635512123LL;
	int32_t t27 = 0;

    t27 = ((x109|(x110%x111))==x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = -1;
	volatile uint8_t x114 = 4U;
	uint16_t x115 = 9866U;
	volatile int32_t t28 = -387;

    t28 = ((x113|(x114%x115))==x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x118 = INT64_MAX;
	static int64_t x120 = INT64_MIN;
	int32_t t29 = 342824;

    t29 = ((x117|(x118%x119))==x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x121 = 1341U;
	uint8_t x122 = 27U;
	uint64_t x123 = 659352447915LLU;
	uint32_t x124 = 48U;
	volatile int32_t t30 = -858007773;

    t30 = ((x121|(x122%x123))==x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x125 = INT64_MAX;
	static int8_t x126 = -1;
	int32_t x127 = INT32_MAX;
	static int32_t x128 = INT32_MIN;
	volatile int32_t t31 = -1491;

    t31 = ((x125|(x126%x127))==x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x129 = INT32_MAX;
	volatile uint64_t x130 = UINT64_MAX;
	int16_t x131 = INT16_MAX;
	int8_t x132 = -5;
	int32_t t32 = -4551094;

    t32 = ((x129|(x130%x131))==x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = INT64_MAX;
	static volatile uint16_t x134 = 6U;
	int64_t x136 = INT64_MIN;
	int32_t t33 = 1;

    t33 = ((x133|(x134%x135))==x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile int32_t x137 = INT32_MAX;
	int32_t x138 = INT32_MIN;
	int64_t x139 = INT64_MIN;
	volatile int32_t x140 = INT32_MIN;

    t34 = ((x137|(x138%x139))==x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = -477477724943340LL;
	int32_t x142 = -820320;
	static volatile uint8_t x143 = 9U;
	int8_t x144 = -1;
	static volatile int32_t t35 = 833746362;

    t35 = ((x141|(x142%x143))==x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x146 = 26;
	int64_t x147 = INT64_MIN;
	uint32_t x148 = 6U;

    t36 = ((x145|(x146%x147))==x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = INT64_MIN;
	static int32_t x151 = INT32_MAX;
	volatile int32_t x152 = INT32_MIN;
	int32_t t37 = 28;

    t37 = ((x149|(x150%x151))==x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint8_t x153 = UINT8_MAX;
	int32_t x155 = 97670033;
	uint64_t x156 = 16LLU;

    t38 = ((x153|(x154%x155))==x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile uint8_t x157 = 11U;
	volatile uint64_t x158 = 7713LLU;
	static int64_t x159 = INT64_MIN;
	volatile int32_t t39 = -753105;

    t39 = ((x157|(x158%x159))==x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x161 = UINT32_MAX;
	static volatile int32_t x162 = -1;
	int16_t x163 = INT16_MAX;
	uint32_t x164 = 777832700U;
	static int32_t t40 = -72133;

    t40 = ((x161|(x162%x163))==x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x165 = INT16_MAX;
	static int8_t x168 = -1;
	static int32_t t41 = 16508;

    t41 = ((x165|(x166%x167))==x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x169 = -1;
	int32_t x170 = 123774;
	volatile int64_t x172 = INT64_MIN;
	static volatile int32_t t42 = 311927;

    t42 = ((x169|(x170%x171))==x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint64_t x173 = 16479403398LLU;
	volatile uint16_t x174 = UINT16_MAX;
	uint32_t x176 = 1176827559U;
	int32_t t43 = 216716315;

    t43 = ((x173|(x174%x175))==x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x178 = INT32_MIN;
	volatile uint8_t x179 = 118U;
	int8_t x180 = INT8_MIN;
	volatile int32_t t44 = 0;

    t44 = ((x177|(x178%x179))==x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x181 = 5U;
	int8_t x182 = -1;
	int16_t x183 = INT16_MIN;
	uint16_t x184 = 5800U;
	volatile int32_t t45 = -138;

    t45 = ((x181|(x182%x183))==x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x185 = -1;
	int16_t x187 = 2389;
	int32_t t46 = 3131223;

    t46 = ((x185|(x186%x187))==x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x193 = UINT8_MAX;
	int64_t x194 = -6754989367LL;
	static int16_t x195 = INT16_MIN;
	int32_t x196 = -5959836;
	static int32_t t47 = 15831;

    t47 = ((x193|(x194%x195))==x196);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int16_t x197 = INT16_MAX;
	int16_t x199 = INT16_MAX;
	volatile uint8_t x200 = 12U;
	int32_t t48 = 872061878;

    t48 = ((x197|(x198%x199))==x200);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x203 = 724LLU;
	static int64_t x204 = 22549LL;
	static int32_t t49 = 0;

    t49 = ((x201|(x202%x203))==x204);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x205 = INT32_MIN;
	int32_t x206 = INT32_MIN;
	uint64_t x207 = UINT64_MAX;
	uint64_t x208 = UINT64_MAX;
	volatile int32_t t50 = 64498;

    t50 = ((x205|(x206%x207))==x208);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int8_t x209 = 1;
	int32_t x210 = -64616330;
	int8_t x211 = INT8_MIN;
	volatile int32_t t51 = 4;

    t51 = ((x209|(x210%x211))==x212);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x213 = INT16_MAX;
	static int8_t x215 = -1;
	static uint64_t x216 = UINT64_MAX;
	volatile int32_t t52 = 7475245;

    t52 = ((x213|(x214%x215))==x216);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x217 = -22;
	uint8_t x218 = UINT8_MAX;
	uint16_t x219 = 1U;
	int32_t t53 = -4;

    t53 = ((x217|(x218%x219))==x220);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x221 = -1;
	int16_t x222 = INT16_MIN;
	static int16_t x223 = INT16_MIN;
	int8_t x224 = -1;

    t54 = ((x221|(x222%x223))==x224);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x225 = INT32_MIN;
	int16_t x226 = INT16_MIN;
	uint8_t x227 = 2U;
	int64_t x228 = -73847336585LL;
	static int32_t t55 = 1;

    t55 = ((x225|(x226%x227))==x228);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x230 = 13550LLU;
	volatile int16_t x231 = -1;
	uint16_t x232 = 34U;
	static int32_t t56 = -50;

    t56 = ((x229|(x230%x231))==x232);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x233 = INT32_MAX;
	volatile int8_t x234 = INT8_MAX;
	int16_t x235 = INT16_MIN;
	uint64_t x236 = UINT64_MAX;
	volatile int32_t t57 = -8;

    t57 = ((x233|(x234%x235))==x236);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x241 = INT16_MAX;
	int16_t x242 = -3;
	int32_t x243 = 1885982;
	static volatile int32_t t58 = 10223;

    t58 = ((x241|(x242%x243))==x244);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x245 = 28U;
	volatile uint8_t x246 = 63U;
	static int16_t x247 = INT16_MAX;
	volatile uint16_t x248 = 531U;
	int32_t t59 = -1892;

    t59 = ((x245|(x246%x247))==x248);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x249 = 14U;
	volatile uint8_t x250 = 8U;
	int64_t x251 = -6089934893453552LL;
	int64_t x252 = 7056LL;
	int32_t t60 = 84649539;

    t60 = ((x249|(x250%x251))==x252);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x253 = INT32_MAX;
	static int32_t x255 = -1;
	uint8_t x256 = UINT8_MAX;
	int32_t t61 = -4;

    t61 = ((x253|(x254%x255))==x256);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint64_t x257 = 11939398800507LLU;
	static int8_t x258 = INT8_MIN;
	uint16_t x259 = 26U;
	int32_t t62 = 1;

    t62 = ((x257|(x258%x259))==x260);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x261 = INT64_MIN;
	int16_t x262 = -17;
	static volatile int32_t t63 = -2293;

    t63 = ((x261|(x262%x263))==x264);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x265 = -845767279;
	int32_t x266 = -1;
	int64_t x267 = -173LL;
	volatile uint8_t x268 = UINT8_MAX;
	int32_t t64 = 3650129;

    t64 = ((x265|(x266%x267))==x268);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint32_t x269 = 1165836U;
	int8_t x270 = INT8_MIN;
	volatile int32_t t65 = -245403170;

    t65 = ((x269|(x270%x271))==x272);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int8_t x274 = 1;
	int32_t t66 = -7;

    t66 = ((x273|(x274%x275))==x276);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x277 = UINT16_MAX;
	uint8_t x278 = 0U;
	int64_t x279 = INT64_MAX;
	volatile int32_t t67 = -2;

    t67 = ((x277|(x278%x279))==x280);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x282 = 79795064U;
	volatile uint8_t x283 = UINT8_MAX;
	volatile int16_t x284 = -1;
	static int32_t t68 = 512026;

    t68 = ((x281|(x282%x283))==x284);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x285 = -43;
	int8_t x286 = INT8_MAX;
	int8_t x287 = -1;
	int16_t x288 = 64;
	static int32_t t69 = 28517;

    t69 = ((x285|(x286%x287))==x288);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x289 = 1346315133672457932LL;
	static volatile uint8_t x290 = 2U;
	int32_t x291 = INT32_MIN;
	volatile int32_t t70 = -30;

    t70 = ((x289|(x290%x291))==x292);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x293 = 1U;
	uint32_t x294 = UINT32_MAX;
	volatile uint16_t x295 = 8U;
	static int8_t x296 = 1;
	int32_t t71 = 65772279;

    t71 = ((x293|(x294%x295))==x296);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x298 = -1;
	int64_t x299 = INT64_MAX;
	uint32_t x300 = 1U;
	volatile int32_t t72 = 30829824;

    t72 = ((x297|(x298%x299))==x300);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x301 = 1074188551LL;
	int8_t x302 = INT8_MIN;
	int16_t x303 = -1;
	uint64_t x304 = 5962149537494LLU;
	int32_t t73 = 206;

    t73 = ((x301|(x302%x303))==x304);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static int64_t x305 = INT64_MAX;
	int32_t x306 = INT32_MIN;
	static volatile uint8_t x307 = 1U;
	volatile int32_t t74 = -3349;

    t74 = ((x305|(x306%x307))==x308);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x309 = INT16_MAX;
	uint32_t x310 = 153335609U;
	int64_t x311 = INT64_MIN;
	uint32_t x312 = UINT32_MAX;
	static int32_t t75 = 18;

    t75 = ((x309|(x310%x311))==x312);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x313 = 1;
	int16_t x314 = -1;
	volatile int64_t x315 = INT64_MIN;
	static int64_t x316 = 1LL;
	volatile int32_t t76 = -782017802;

    t76 = ((x313|(x314%x315))==x316);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x317 = -12;
	uint16_t x319 = 4270U;

    t77 = ((x317|(x318%x319))==x320);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x321 = INT64_MIN;
	int32_t x322 = -1;
	int16_t x323 = 3810;
	static int32_t x324 = -1;

    t78 = ((x321|(x322%x323))==x324);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x325 = -12927;
	uint8_t x326 = 0U;
	int8_t x327 = INT8_MIN;
	int8_t x328 = INT8_MIN;
	static int32_t t79 = 19762117;

    t79 = ((x325|(x326%x327))==x328);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x329 = 7872;
	int64_t x330 = 12640578896LL;
	uint32_t x331 = 344U;
	static int16_t x332 = INT16_MAX;
	int32_t t80 = 266243685;

    t80 = ((x329|(x330%x331))==x332);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x333 = 441U;
	static uint32_t x334 = UINT32_MAX;
	int64_t x335 = 2789980742587LL;
	static int32_t x336 = INT32_MIN;
	volatile int32_t t81 = 0;

    t81 = ((x333|(x334%x335))==x336);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x337 = INT16_MIN;
	int8_t x338 = INT8_MIN;
	static int32_t x339 = -1;
	int32_t x340 = INT32_MIN;
	int32_t t82 = 983009821;

    t82 = ((x337|(x338%x339))==x340);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x341 = UINT32_MAX;
	int32_t x342 = INT32_MIN;
	volatile int16_t x343 = 426;
	uint64_t x344 = 795801153047LLU;
	int32_t t83 = -1;

    t83 = ((x341|(x342%x343))==x344);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x345 = INT8_MIN;
	int64_t x346 = INT64_MIN;
	volatile uint16_t x347 = 12U;

    t84 = ((x345|(x346%x347))==x348);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x349 = UINT8_MAX;
	static volatile int64_t x350 = INT64_MIN;
	int64_t x351 = 8143188877060LL;
	uint64_t x352 = 127902342087931644LLU;
	volatile int32_t t85 = -19545725;

    t85 = ((x349|(x350%x351))==x352);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x353 = INT8_MAX;
	static uint64_t x355 = UINT64_MAX;
	uint16_t x356 = 3657U;
	int32_t t86 = 470548;

    t86 = ((x353|(x354%x355))==x356);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x357 = 0U;
	int32_t x358 = INT32_MAX;
	int16_t x359 = INT16_MAX;

    t87 = ((x357|(x358%x359))==x360);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int8_t x361 = 11;
	uint64_t x363 = UINT64_MAX;
	int8_t x364 = 1;
	volatile int32_t t88 = 1365;

    t88 = ((x361|(x362%x363))==x364);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x365 = INT64_MIN;
	int16_t x366 = INT16_MAX;
	int32_t x367 = -74245004;
	volatile int8_t x368 = -5;
	int32_t t89 = -2;

    t89 = ((x365|(x366%x367))==x368);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x369 = UINT8_MAX;
	int32_t x370 = INT32_MIN;
	static uint8_t x372 = UINT8_MAX;
	int32_t t90 = -14542;

    t90 = ((x369|(x370%x371))==x372);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x373 = INT8_MIN;
	int64_t x374 = -222929426170273266LL;
	static int16_t x375 = INT16_MIN;
	volatile int32_t x376 = 1;
	volatile int32_t t91 = 60237720;

    t91 = ((x373|(x374%x375))==x376);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x377 = UINT8_MAX;
	static int8_t x380 = -1;
	int32_t t92 = 122391874;

    t92 = ((x377|(x378%x379))==x380);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x381 = UINT64_MAX;
	static int8_t x382 = 1;
	static uint64_t x383 = UINT64_MAX;
	volatile int32_t t93 = 3;

    t93 = ((x381|(x382%x383))==x384);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int8_t x385 = INT8_MAX;
	int8_t x386 = INT8_MIN;
	int8_t x387 = -3;
	volatile int32_t x388 = -1;
	volatile int32_t t94 = -26993;

    t94 = ((x385|(x386%x387))==x388);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x390 = 6784378904593991LL;
	volatile uint8_t x391 = 28U;
	static int32_t x392 = INT32_MIN;
	int32_t t95 = 35;

    t95 = ((x389|(x390%x391))==x392);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x393 = -10;
	int8_t x394 = INT8_MIN;
	uint8_t x395 = 9U;
	int32_t t96 = -35570339;

    t96 = ((x393|(x394%x395))==x396);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x397 = 316U;
	volatile int32_t x400 = INT32_MIN;
	int32_t t97 = -222;

    t97 = ((x397|(x398%x399))==x400);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x401 = -3151850429LL;
	int64_t x402 = -25364928761135LL;
	int8_t x403 = -29;
	int16_t x404 = INT16_MIN;
	int32_t t98 = 3;

    t98 = ((x401|(x402%x403))==x404);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint8_t x405 = 31U;
	int64_t x407 = INT64_MIN;
	volatile uint64_t x408 = 245047427389217LLU;
	static volatile int32_t t99 = -129660;

    t99 = ((x405|(x406%x407))==x408);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x409 = UINT64_MAX;
	int16_t x411 = -1;
	int32_t t100 = 10302986;

    t100 = ((x409|(x410%x411))==x412);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x413 = -1;
	static int8_t x414 = INT8_MIN;
	int8_t x415 = INT8_MIN;
	volatile int32_t x416 = INT32_MIN;
	volatile int32_t t101 = 301;

    t101 = ((x413|(x414%x415))==x416);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int64_t x417 = -1LL;
	int64_t x418 = 273946372251583234LL;
	uint64_t x419 = 3490461764652LLU;
	int16_t x420 = 348;
	int32_t t102 = 40;

    t102 = ((x417|(x418%x419))==x420);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint32_t x421 = 6460U;
	volatile int16_t x422 = -1;
	volatile int64_t x423 = -78681389LL;
	uint32_t x424 = 797U;
	volatile int32_t t103 = 182219683;

    t103 = ((x421|(x422%x423))==x424);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x426 = -957147661209LL;
	int8_t x427 = 3;
	int32_t t104 = 2;

    t104 = ((x425|(x426%x427))==x428);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int8_t x429 = INT8_MIN;
	int32_t x431 = INT32_MIN;
	uint64_t x432 = UINT64_MAX;
	int32_t t105 = -124945;

    t105 = ((x429|(x430%x431))==x432);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x433 = 3664999086781304871LLU;
	uint32_t x434 = 1203605U;
	int8_t x436 = INT8_MIN;

    t106 = ((x433|(x434%x435))==x436);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x437 = INT8_MIN;
	int64_t x438 = -1LL;
	int8_t x440 = -1;

    t107 = ((x437|(x438%x439))==x440);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x441 = INT64_MIN;
	static volatile uint64_t x443 = 83880271889917LLU;
	int8_t x444 = INT8_MIN;
	int32_t t108 = 289961146;

    t108 = ((x441|(x442%x443))==x444);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x446 = 3573381LLU;
	int8_t x447 = INT8_MIN;
	int8_t x448 = INT8_MIN;

    t109 = ((x445|(x446%x447))==x448);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x449 = -129280045129LL;
	uint32_t x450 = UINT32_MAX;
	int32_t x451 = -128114;
	int64_t x452 = INT64_MIN;
	static volatile int32_t t110 = -959;

    t110 = ((x449|(x450%x451))==x452);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x453 = INT8_MAX;
	uint32_t x454 = UINT32_MAX;
	static uint16_t x455 = UINT16_MAX;
	int32_t x456 = 107287949;
	volatile int32_t t111 = -18;

    t111 = ((x453|(x454%x455))==x456);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x457 = INT8_MAX;
	static uint8_t x458 = 10U;
	uint32_t x459 = 11232U;
	int64_t x460 = -1LL;
	int32_t t112 = -663479147;

    t112 = ((x457|(x458%x459))==x460);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x461 = 5U;
	static int8_t x462 = 0;
	static int32_t x464 = INT32_MIN;

    t113 = ((x461|(x462%x463))==x464);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x465 = INT32_MAX;
	static int8_t x466 = INT8_MIN;
	int64_t x467 = -775LL;
	volatile int32_t t114 = -1632;

    t114 = ((x465|(x466%x467))==x468);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x469 = 11;
	volatile int32_t x470 = INT32_MIN;
	uint8_t x472 = 2U;
	static volatile int32_t t115 = -321201829;

    t115 = ((x469|(x470%x471))==x472);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x474 = 7727LLU;
	int64_t x475 = INT64_MIN;
	int32_t t116 = 479;

    t116 = ((x473|(x474%x475))==x476);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x479 = INT16_MAX;
	volatile int8_t x480 = -1;

    t117 = ((x477|(x478%x479))==x480);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint16_t x481 = UINT16_MAX;
	int16_t x482 = INT16_MIN;
	int16_t x483 = 227;
	int32_t x484 = 241113302;

    t118 = ((x481|(x482%x483))==x484);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x486 = -1;
	int16_t x487 = -3387;
	volatile uint32_t x488 = 23U;
	int32_t t119 = -541741722;

    t119 = ((x485|(x486%x487))==x488);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x489 = INT8_MIN;
	static uint64_t x490 = 25038198767LLU;
	volatile uint16_t x491 = 57U;
	static int32_t x492 = -107;

    t120 = ((x489|(x490%x491))==x492);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x493 = -1;
	int8_t x494 = INT8_MIN;
	static volatile uint32_t x495 = UINT32_MAX;
	uint32_t x496 = 7182U;

    t121 = ((x493|(x494%x495))==x496);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t t122 = -1;

    t122 = ((x497|(x498%x499))==x500);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x502 = -1;
	volatile int8_t x503 = INT8_MIN;
	static volatile int8_t x504 = INT8_MAX;
	int32_t t123 = -1;

    t123 = ((x501|(x502%x503))==x504);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x505 = INT16_MIN;
	volatile int16_t x506 = INT16_MAX;
	volatile uint32_t x507 = UINT32_MAX;
	int32_t t124 = -4878350;

    t124 = ((x505|(x506%x507))==x508);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x509 = INT16_MAX;
	static int8_t x510 = -50;
	uint8_t x512 = 103U;

    t125 = ((x509|(x510%x511))==x512);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x513 = INT8_MIN;
	int64_t x516 = INT64_MAX;

    t126 = ((x513|(x514%x515))==x516);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int64_t x517 = -98414LL;
	static int16_t x520 = INT16_MAX;
	volatile int32_t t127 = -7626014;

    t127 = ((x517|(x518%x519))==x520);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x521 = INT64_MIN;
	uint8_t x522 = UINT8_MAX;
	int64_t x523 = 814137700232735567LL;
	static int64_t x524 = -59481594923493636LL;
	int32_t t128 = -89171;

    t128 = ((x521|(x522%x523))==x524);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint16_t x525 = 2799U;
	static int8_t x526 = -3;
	uint16_t x527 = 5U;
	uint32_t x528 = UINT32_MAX;

    t129 = ((x525|(x526%x527))==x528);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int8_t x529 = -1;
	static int8_t x530 = INT8_MAX;
	int16_t x531 = -1;
	uint8_t x532 = UINT8_MAX;
	volatile int32_t t130 = -1300812;

    t130 = ((x529|(x530%x531))==x532);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int64_t x533 = -1LL;
	int64_t x535 = INT64_MIN;
	int32_t x536 = -1;
	int32_t t131 = -2;

    t131 = ((x533|(x534%x535))==x536);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint32_t x537 = 5612504U;
	int16_t x538 = 7;
	uint32_t x539 = UINT32_MAX;
	int8_t x540 = INT8_MAX;
	volatile int32_t t132 = 46;

    t132 = ((x537|(x538%x539))==x540);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x549 = -26;
	volatile int16_t x550 = -1;
	int16_t x551 = INT16_MIN;
	static volatile int32_t t133 = -10;

    t133 = ((x549|(x550%x551))==x552);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint8_t x553 = 0U;
	static uint16_t x554 = 100U;
	int8_t x555 = INT8_MIN;
	int32_t t134 = 21980;

    t134 = ((x553|(x554%x555))==x556);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x558 = -1;
	static int64_t x559 = 2569831632299973LL;
	volatile int32_t t135 = -209;

    t135 = ((x557|(x558%x559))==x560);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x561 = INT64_MIN;
	int32_t x564 = -208;
	int32_t t136 = -15;

    t136 = ((x561|(x562%x563))==x564);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x565 = INT64_MAX;
	static uint8_t x566 = UINT8_MAX;
	volatile int64_t x567 = INT64_MIN;
	volatile int64_t x568 = 2246132937LL;

    t137 = ((x565|(x566%x567))==x568);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x569 = INT8_MAX;
	volatile int64_t x571 = -1LL;
	volatile uint64_t x572 = UINT64_MAX;
	static volatile int32_t t138 = 2311;

    t138 = ((x569|(x570%x571))==x572);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x573 = -440408LL;
	int16_t x575 = INT16_MAX;
	int32_t x576 = 15636416;
	volatile int32_t t139 = -5;

    t139 = ((x573|(x574%x575))==x576);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x577 = INT16_MIN;
	uint8_t x578 = UINT8_MAX;
	int16_t x579 = INT16_MIN;
	int32_t t140 = -201004360;

    t140 = ((x577|(x578%x579))==x580);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x581 = 153884;
	uint8_t x582 = 3U;
	volatile int8_t x583 = -1;
	volatile int32_t t141 = -146521;

    t141 = ((x581|(x582%x583))==x584);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x587 = INT8_MIN;
	int16_t x588 = -1;
	static int32_t t142 = -1;

    t142 = ((x585|(x586%x587))==x588);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x589 = 114LLU;
	int16_t x590 = -1;
	int16_t x591 = -27;
	volatile int64_t x592 = 3989870398546184189LL;

    t143 = ((x589|(x590%x591))==x592);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int64_t x596 = INT64_MIN;

    t144 = ((x593|(x594%x595))==x596);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint64_t x597 = 3878LLU;
	int64_t x598 = 3621397376416457258LL;
	uint64_t x599 = 3296240506268LLU;
	volatile int8_t x600 = INT8_MIN;
	static int32_t t145 = 1025;

    t145 = ((x597|(x598%x599))==x600);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x601 = -23589;
	static uint8_t x602 = 125U;
	uint32_t x603 = UINT32_MAX;
	uint64_t x604 = 381240281LLU;
	static int32_t t146 = -1;

    t146 = ((x601|(x602%x603))==x604);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x609 = 9359737009109LLU;
	int8_t x611 = INT8_MAX;
	int32_t t147 = -211422320;

    t147 = ((x609|(x610%x611))==x612);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int32_t x613 = INT32_MIN;
	static volatile int64_t x616 = -57LL;
	int32_t t148 = 338;

    t148 = ((x613|(x614%x615))==x616);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x618 = UINT8_MAX;
	uint16_t x619 = 11462U;
	volatile int32_t t149 = -75553;

    t149 = ((x617|(x618%x619))==x620);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x622 = INT8_MIN;
	uint64_t x623 = 17397LLU;
	int8_t x624 = -1;
	volatile int32_t t150 = -12793943;

    t150 = ((x621|(x622%x623))==x624);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x625 = 6;
	volatile uint32_t x626 = UINT32_MAX;
	int8_t x627 = INT8_MAX;
	volatile int8_t x628 = INT8_MIN;
	static volatile int32_t t151 = 300291;

    t151 = ((x625|(x626%x627))==x628);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x629 = 6;
	static int8_t x630 = 2;
	uint64_t x631 = 1451088LLU;
	volatile int64_t x632 = INT64_MIN;

    t152 = ((x629|(x630%x631))==x632);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x633 = INT32_MAX;
	int8_t x634 = -53;
	volatile int64_t x635 = 63LL;
	int32_t x636 = INT32_MIN;

    t153 = ((x633|(x634%x635))==x636);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x637 = 8U;
	int32_t t154 = 1;

    t154 = ((x637|(x638%x639))==x640);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x641 = 8241878;
	int32_t x644 = -233636;
	volatile int32_t t155 = 0;

    t155 = ((x641|(x642%x643))==x644);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x649 = INT32_MIN;
	int64_t x651 = INT64_MAX;
	uint8_t x652 = 43U;

    t156 = ((x649|(x650%x651))==x652);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x653 = UINT64_MAX;
	static int8_t x654 = -59;
	volatile int64_t x655 = -1LL;
	int16_t x656 = 1;
	volatile int32_t t157 = -315044939;

    t157 = ((x653|(x654%x655))==x656);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x657 = INT32_MIN;
	static uint16_t x658 = 2U;
	int32_t t158 = -790830879;

    t158 = ((x657|(x658%x659))==x660);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint8_t x662 = UINT8_MAX;
	int64_t x663 = 540890843LL;
	int8_t x664 = INT8_MIN;
	static volatile int32_t t159 = -2419;

    t159 = ((x661|(x662%x663))==x664);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x666 = -1476366;
	static uint16_t x667 = 6381U;
	int32_t t160 = 145;

    t160 = ((x665|(x666%x667))==x668);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint64_t x673 = 29539084LLU;
	volatile int64_t x675 = -1375657761252556LL;
	int32_t t161 = 216240;

    t161 = ((x673|(x674%x675))==x676);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x677 = INT16_MIN;
	static int8_t x678 = 4;
	static uint8_t x679 = 7U;
	volatile int32_t t162 = 127288513;

    t162 = ((x677|(x678%x679))==x680);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x681 = 14;
	int8_t x682 = INT8_MIN;
	static int16_t x683 = -1;
	volatile int32_t t163 = -37244731;

    t163 = ((x681|(x682%x683))==x684);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x685 = UINT64_MAX;
	int64_t x686 = -112205945LL;
	volatile int32_t x687 = INT32_MIN;
	static volatile int32_t t164 = -3029;

    t164 = ((x685|(x686%x687))==x688);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint32_t x690 = UINT32_MAX;
	int32_t x691 = INT32_MIN;

    t165 = ((x689|(x690%x691))==x692);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint8_t x693 = 12U;
	uint16_t x694 = 20303U;
	uint8_t x695 = 29U;
	volatile uint8_t x696 = 124U;
	int32_t t166 = 558113;

    t166 = ((x693|(x694%x695))==x696);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x699 = INT8_MIN;
	uint8_t x700 = 8U;
	volatile int32_t t167 = 58592;

    t167 = ((x697|(x698%x699))==x700);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x701 = -10594LL;
	int16_t x702 = 7;
	uint32_t x703 = UINT32_MAX;
	int16_t x704 = INT16_MIN;
	static volatile int32_t t168 = -1;

    t168 = ((x701|(x702%x703))==x704);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint64_t x706 = UINT64_MAX;
	volatile int64_t x707 = INT64_MAX;
	int32_t x708 = 4236;
	volatile int32_t t169 = -6061812;

    t169 = ((x705|(x706%x707))==x708);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x709 = UINT32_MAX;
	volatile int32_t t170 = 47750104;

    t170 = ((x709|(x710%x711))==x712);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x713 = 12884514LLU;
	int64_t x715 = 591LL;
	uint8_t x716 = 50U;

    t171 = ((x713|(x714%x715))==x716);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x717 = UINT16_MAX;
	volatile int16_t x718 = INT16_MAX;
	int32_t x720 = -466909;
	int32_t t172 = -1725;

    t172 = ((x717|(x718%x719))==x720);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x721 = -1;
	static int64_t x722 = INT64_MIN;
	int64_t x723 = INT64_MIN;
	static uint64_t x724 = 725946852076015LLU;
	int32_t t173 = -5368;

    t173 = ((x721|(x722%x723))==x724);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x725 = -1;
	static int64_t x727 = -1LL;

    t174 = ((x725|(x726%x727))==x728);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x733 = 1083341238507556LLU;
	uint32_t x734 = 5U;
	int64_t x735 = INT64_MIN;
	static volatile int32_t t175 = -19;

    t175 = ((x733|(x734%x735))==x736);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x737 = 1U;
	volatile uint8_t x738 = 6U;
	static volatile int8_t x739 = -1;
	int16_t x740 = INT16_MAX;

    t176 = ((x737|(x738%x739))==x740);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x741 = 7835186456LL;
	static volatile int8_t x742 = -52;
	int16_t x743 = INT16_MAX;
	uint16_t x744 = 1250U;
	int32_t t177 = -24530;

    t177 = ((x741|(x742%x743))==x744);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x745 = 0;
	volatile uint64_t x746 = 3652253745050LLU;
	volatile int16_t x747 = INT16_MIN;
	volatile int32_t x748 = INT32_MAX;

    t178 = ((x745|(x746%x747))==x748);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x749 = -3;
	int64_t x750 = -1LL;
	int32_t x751 = INT32_MAX;
	volatile int8_t x752 = -1;
	int32_t t179 = -33;

    t179 = ((x749|(x750%x751))==x752);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x753 = INT32_MIN;
	static int64_t x754 = 548333476745952012LL;
	volatile int16_t x755 = -58;
	int16_t x756 = INT16_MIN;

    t180 = ((x753|(x754%x755))==x756);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x757 = 1U;
	int8_t x758 = -1;
	uint8_t x759 = 1U;
	volatile int64_t x760 = -28278223761085LL;

    t181 = ((x757|(x758%x759))==x760);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x761 = INT8_MIN;
	uint64_t x762 = 971143498458LLU;
	uint16_t x763 = UINT16_MAX;
	int32_t x764 = INT32_MIN;

    t182 = ((x761|(x762%x763))==x764);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x765 = 15U;
	int16_t x767 = INT16_MIN;
	int64_t x768 = INT64_MIN;
	volatile int32_t t183 = -28449005;

    t183 = ((x765|(x766%x767))==x768);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint8_t x769 = UINT8_MAX;
	volatile int8_t x770 = -11;
	int8_t x772 = 1;

    t184 = ((x769|(x770%x771))==x772);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x773 = -58570;
	int8_t x774 = -1;
	int16_t x775 = INT16_MIN;
	uint32_t x776 = 1708U;
	int32_t t185 = 1;

    t185 = ((x773|(x774%x775))==x776);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x780 = 4837777104062LL;
	volatile int32_t t186 = 4;

    t186 = ((x777|(x778%x779))==x780);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x783 = -1LL;
	int8_t x784 = 2;
	int32_t t187 = 1514;

    t187 = ((x781|(x782%x783))==x784);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x785 = -1;
	int16_t x786 = INT16_MIN;
	volatile int32_t x787 = -1;
	static int32_t t188 = 20520180;

    t188 = ((x785|(x786%x787))==x788);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x789 = INT8_MAX;
	uint8_t x792 = 3U;

    t189 = ((x789|(x790%x791))==x792);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int8_t x793 = INT8_MIN;
	uint8_t x794 = 3U;
	int16_t x795 = INT16_MIN;
	int32_t x796 = INT32_MIN;
	volatile int32_t t190 = -23096499;

    t190 = ((x793|(x794%x795))==x796);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x797 = INT32_MAX;
	volatile uint16_t x799 = 6U;
	int8_t x800 = INT8_MIN;
	int32_t t191 = 567;

    t191 = ((x797|(x798%x799))==x800);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x801 = INT8_MIN;
	volatile int8_t x802 = INT8_MAX;
	int64_t x803 = 2145059LL;
	volatile int64_t x804 = 3766474711105710307LL;
	volatile int32_t t192 = -2807;

    t192 = ((x801|(x802%x803))==x804);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x805 = INT64_MAX;
	int8_t x806 = INT8_MIN;

    t193 = ((x805|(x806%x807))==x808);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x809 = INT8_MAX;
	int32_t x810 = INT32_MIN;
	int64_t x811 = INT64_MAX;
	uint64_t x812 = 1LLU;
	volatile int32_t t194 = 1393004;

    t194 = ((x809|(x810%x811))==x812);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int64_t x813 = 3433900531217997897LL;
	volatile uint64_t x816 = 1902368LLU;
	int32_t t195 = 870;

    t195 = ((x813|(x814%x815))==x816);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int32_t x817 = -9;
	int64_t x818 = 0LL;
	int32_t x819 = INT32_MIN;
	int16_t x820 = INT16_MIN;

    t196 = ((x817|(x818%x819))==x820);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x821 = 16;
	uint64_t x822 = 185963LLU;
	volatile uint32_t x823 = 1U;
	uint64_t x824 = UINT64_MAX;

    t197 = ((x821|(x822%x823))==x824);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint16_t x825 = 102U;
	uint16_t x827 = 10U;
	int32_t x828 = -432;
	volatile int32_t t198 = 29831;

    t198 = ((x825|(x826%x827))==x828);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x829 = 15276568;
	uint32_t x831 = 51798827U;
	int64_t x832 = 137897731855239LL;
	volatile int32_t t199 = -33;

    t199 = ((x829|(x830%x831))==x832);

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

