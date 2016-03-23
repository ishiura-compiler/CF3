
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

volatile uint8_t x1 = UINT8_MAX;
volatile int64_t x9 = INT64_MIN;
int32_t x14 = INT32_MAX;
int32_t t3 = 1;
volatile uint16_t x21 = UINT16_MAX;
uint64_t x30 = 3139196LLU;
int8_t x31 = 61;
int8_t x53 = INT8_MIN;
static int16_t x55 = -69;
volatile int32_t t13 = -338392;
int8_t x60 = INT8_MIN;
volatile int64_t x62 = -1592416039775397093LL;
int64_t x64 = INT64_MAX;
static uint32_t x70 = 2743U;
static volatile int8_t x73 = -1;
int16_t x75 = -1;
static int8_t x79 = INT8_MAX;
uint32_t x89 = UINT32_MAX;
volatile int16_t x91 = INT16_MIN;
int32_t x96 = INT32_MIN;
int32_t t22 = 44791335;
uint8_t x98 = 1U;
int64_t x99 = 114950LL;
int32_t t23 = -1;
uint8_t x101 = UINT8_MAX;
int32_t x105 = -2736717;
int32_t t25 = -113;
uint32_t x117 = UINT32_MAX;
int8_t x118 = 4;
volatile uint32_t x127 = 6U;
uint8_t x129 = UINT8_MAX;
int16_t x151 = INT16_MIN;
volatile int64_t x152 = INT64_MAX;
int32_t t34 = 1;
static int32_t t36 = 40312;
int64_t x173 = 224726LL;
int32_t x188 = 15350717;
uint16_t x193 = UINT16_MAX;
volatile uint32_t x200 = UINT32_MAX;
static volatile int32_t t46 = 6984186;
volatile int32_t t47 = 391393333;
int32_t x206 = 0;
volatile uint32_t x208 = 2874478U;
int64_t x219 = -1450480594244355LL;
static volatile int64_t x221 = INT64_MIN;
uint8_t x222 = 3U;
int16_t x224 = 9;
static int16_t x233 = INT16_MAX;
int16_t x241 = INT16_MIN;
int16_t x249 = INT16_MIN;
int16_t x251 = INT16_MAX;
int8_t x256 = INT8_MAX;
static int32_t t60 = 12404;
static volatile int32_t x261 = -23;
static uint32_t x264 = 34U;
volatile int8_t x268 = -1;
volatile int32_t t62 = 9;
int8_t x269 = INT8_MIN;
uint32_t x273 = 507325U;
volatile int32_t t64 = -911289;
int64_t x283 = -1LL;
static int16_t x290 = -2;
uint8_t x307 = 7U;
uint32_t x310 = UINT32_MAX;
static int32_t x316 = INT32_MIN;
uint16_t x330 = 19909U;
volatile int32_t x334 = 1789;
volatile int32_t t79 = 1;
uint16_t x338 = 1301U;
static volatile int32_t t81 = -4171648;
uint8_t x349 = 1U;
static int8_t x352 = -1;
volatile int32_t t82 = 15012526;
static volatile int64_t x353 = INT64_MIN;
uint32_t x356 = 431915U;
int16_t x369 = -6961;
int8_t x370 = INT8_MIN;
int32_t x371 = 13;
static int64_t x372 = -1LL;
static uint8_t x373 = 13U;
int32_t x377 = -6235146;
int16_t x379 = -312;
int64_t x383 = INT64_MAX;
int64_t x387 = -1LL;
int16_t x389 = 1;
uint16_t x392 = 5U;
uint8_t x395 = UINT8_MAX;
int64_t x399 = -1LL;
volatile int32_t t95 = -56;
volatile int64_t x407 = INT64_MAX;
static int32_t x408 = INT32_MIN;
uint64_t x414 = 805731LLU;
uint32_t x415 = UINT32_MAX;
static volatile int16_t x420 = -274;
static uint64_t x429 = 150198295LLU;
static int32_t t103 = 37033994;
volatile int64_t x438 = -6LL;
volatile int32_t t106 = 45;
int8_t x450 = 20;
int32_t t109 = -3769;
int32_t t110 = 3;
uint64_t x476 = UINT64_MAX;
int32_t x478 = -1;
int32_t x481 = INT32_MIN;
int64_t x482 = 3370LL;
volatile int32_t t115 = -8038661;
volatile int64_t x490 = 2997154770LL;
int16_t x491 = -13;
volatile int32_t x494 = INT32_MIN;
uint32_t x501 = 21U;
int32_t x504 = 432159837;
volatile int32_t t120 = 38;
volatile int64_t x513 = -1LL;
uint64_t x514 = 1007864LLU;
int16_t x526 = 235;
uint32_t x531 = 2100238071U;
int64_t x536 = INT64_MIN;
static uint64_t x538 = 38077047093440439LLU;
int64_t x540 = -4146729068603767997LL;
volatile int64_t x549 = INT64_MIN;
volatile int32_t x550 = 3895705;
int16_t x555 = 1369;
volatile int32_t t133 = 11;
uint8_t x569 = 1U;
uint16_t x571 = 121U;
int8_t x574 = INT8_MIN;
uint8_t x580 = 5U;
int16_t x598 = INT16_MIN;
static int16_t x600 = -1;
int32_t x602 = INT32_MIN;
uint32_t x606 = UINT32_MAX;
static volatile int8_t x607 = 0;
int16_t x620 = INT16_MIN;
int64_t x628 = -1LL;
int64_t x637 = INT64_MIN;
static int16_t x639 = 5656;
int32_t x643 = INT32_MIN;
uint8_t x647 = 40U;
volatile int16_t x653 = INT16_MIN;
static int8_t x654 = INT8_MIN;
int64_t x656 = INT64_MIN;
volatile int32_t t156 = 22213001;
uint16_t x670 = UINT16_MAX;
int32_t x674 = -1;
static int64_t x683 = INT64_MIN;
int32_t t161 = -39802499;
int32_t x685 = -1;
volatile int32_t t162 = -42;
static volatile int16_t x694 = INT16_MIN;
static volatile int32_t t164 = 1549891;
int32_t t165 = -56860903;
uint16_t x706 = 6U;
int16_t x707 = INT16_MAX;
static int32_t x708 = INT32_MAX;
volatile uint64_t x710 = 119631597LLU;
int8_t x712 = -24;
int32_t x715 = -1;
static int32_t t169 = 602299419;
static int32_t x717 = INT32_MIN;
volatile int32_t t170 = 2;
uint16_t x721 = 1666U;
int8_t x723 = INT8_MAX;
int16_t x727 = -1;
volatile int64_t x735 = INT64_MIN;
int32_t x736 = -1706584;
volatile uint32_t x739 = 17881U;
int32_t x743 = INT32_MIN;
volatile int8_t x760 = INT8_MIN;
int32_t t179 = 116599;
int8_t x761 = -1;
int32_t x763 = 55497457;
int16_t x765 = -1;
volatile int8_t x767 = INT8_MIN;
int64_t x769 = INT64_MIN;
int64_t x774 = 15720790913LL;
uint8_t x788 = 2U;
static int16_t x789 = -1;
static int64_t x793 = -399794525932367LL;
static int8_t x794 = INT8_MIN;
volatile int64_t x801 = INT64_MAX;
static int16_t x803 = 37;
static volatile int32_t x812 = -1;
int16_t x813 = INT16_MAX;
int16_t x817 = INT16_MIN;
int16_t x820 = INT16_MIN;
int64_t x829 = INT64_MIN;
static int8_t x831 = INT8_MAX;
static int64_t x834 = INT64_MIN;
int16_t x837 = INT16_MIN;
int8_t x840 = -1;
volatile uint16_t x842 = 2814U;


void f0(void) {
    	int8_t x2 = INT8_MIN;
	volatile int8_t x3 = INT8_MIN;
	static volatile int8_t x4 = -2;
	int32_t t0 = 24595175;

    t0 = (x1==(x2+(x3/x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = 461866U;
	uint32_t x6 = 726U;
	static int8_t x7 = -1;
	uint16_t x8 = UINT16_MAX;
	volatile int32_t t1 = 5462;

    t1 = (x5==(x6+(x7/x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x10 = INT8_MIN;
	static uint8_t x11 = UINT8_MAX;
	volatile int32_t x12 = INT32_MIN;
	volatile int32_t t2 = 102310;

    t2 = (x9==(x10+(x11/x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x13 = 0U;
	volatile uint16_t x15 = 136U;
	static int32_t x16 = -1;

    t3 = (x13==(x14+(x15/x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int8_t x17 = INT8_MAX;
	int8_t x18 = INT8_MAX;
	int32_t x19 = -172399433;
	int8_t x20 = INT8_MIN;
	volatile int32_t t4 = -115698731;

    t4 = (x17==(x18+(x19/x20)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x22 = INT8_MAX;
	static int8_t x23 = INT8_MIN;
	volatile uint16_t x24 = 84U;
	int32_t t5 = -116761170;

    t5 = (x21==(x22+(x23/x24)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = -1;
	volatile int32_t x26 = INT32_MIN;
	volatile int64_t x27 = INT64_MIN;
	static uint64_t x28 = 1LLU;
	volatile int32_t t6 = -54;

    t6 = (x25==(x26+(x27/x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = 1;
	int64_t x32 = -1LL;
	static int32_t t7 = -6033;

    t7 = (x29==(x30+(x31/x32)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x33 = INT16_MIN;
	uint32_t x34 = 3989778U;
	static uint32_t x35 = 1260062763U;
	uint8_t x36 = 53U;
	int32_t t8 = 8;

    t8 = (x33==(x34+(x35/x36)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = INT8_MAX;
	int8_t x38 = 3;
	static uint8_t x39 = 0U;
	int16_t x40 = INT16_MIN;
	volatile int32_t t9 = -722;

    t9 = (x37==(x38+(x39/x40)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = -15;
	static uint16_t x42 = 14U;
	uint16_t x43 = UINT16_MAX;
	volatile int32_t x44 = INT32_MAX;
	static int32_t t10 = -58;

    t10 = (x41==(x42+(x43/x44)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x45 = 1585;
	uint16_t x46 = UINT16_MAX;
	int64_t x47 = -438510594961LL;
	int32_t x48 = INT32_MIN;
	int32_t t11 = 4;

    t11 = (x45==(x46+(x47/x48)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int32_t x49 = -1;
	int64_t x50 = INT64_MAX;
	int16_t x51 = INT16_MIN;
	uint32_t x52 = UINT32_MAX;
	int32_t t12 = -633116;

    t12 = (x49==(x50+(x51/x52)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x54 = INT16_MIN;
	volatile uint16_t x56 = 22U;

    t13 = (x53==(x54+(x55/x56)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int16_t x57 = -1;
	volatile int64_t x58 = INT64_MIN;
	int16_t x59 = INT16_MIN;
	volatile int32_t t14 = -206296;

    t14 = (x57==(x58+(x59/x60)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = INT32_MIN;
	int64_t x63 = INT64_MIN;
	volatile int32_t t15 = 31;

    t15 = (x61==(x62+(x63/x64)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint64_t x69 = 23293LLU;
	int8_t x71 = 1;
	static int64_t x72 = INT64_MIN;
	int32_t t16 = 5690;

    t16 = (x69==(x70+(x71/x72)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x74 = 13081370LL;
	static uint64_t x76 = 18368367822451343LLU;
	volatile int32_t t17 = 0;

    t17 = (x73==(x74+(x75/x76)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint8_t x77 = 49U;
	static int32_t x78 = -1928;
	uint8_t x80 = UINT8_MAX;
	int32_t t18 = -234451925;

    t18 = (x77==(x78+(x79/x80)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint64_t x81 = UINT64_MAX;
	uint16_t x82 = 129U;
	uint8_t x83 = 0U;
	uint16_t x84 = 5528U;
	static volatile int32_t t19 = 102;

    t19 = (x81==(x82+(x83/x84)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint8_t x85 = 29U;
	int16_t x86 = -1;
	volatile uint8_t x87 = 111U;
	int64_t x88 = INT64_MIN;
	volatile int32_t t20 = -2101;

    t20 = (x85==(x86+(x87/x88)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x90 = 26218;
	uint8_t x92 = UINT8_MAX;
	static volatile int32_t t21 = -1345841;

    t21 = (x89==(x90+(x91/x92)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x93 = 21U;
	uint16_t x94 = 0U;
	int16_t x95 = -1124;

    t22 = (x93==(x94+(x95/x96)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x97 = 1U;
	static int32_t x100 = INT32_MAX;

    t23 = (x97==(x98+(x99/x100)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint16_t x102 = 1535U;
	int8_t x103 = INT8_MIN;
	int8_t x104 = INT8_MIN;
	int32_t t24 = -6221;

    t24 = (x101==(x102+(x103/x104)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x106 = INT32_MIN;
	static volatile int64_t x107 = INT64_MIN;
	static uint8_t x108 = UINT8_MAX;

    t25 = (x105==(x106+(x107/x108)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x113 = INT64_MIN;
	uint32_t x114 = 40471220U;
	int64_t x115 = -1LL;
	int32_t x116 = -930;
	volatile int32_t t26 = -626914780;

    t26 = (x113==(x114+(x115/x116)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint8_t x119 = 15U;
	volatile uint16_t x120 = 495U;
	volatile int32_t t27 = -9179;

    t27 = (x117==(x118+(x119/x120)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x125 = 1123U;
	volatile uint64_t x126 = UINT64_MAX;
	static uint16_t x128 = UINT16_MAX;
	volatile int32_t t28 = -14;

    t28 = (x125==(x126+(x127/x128)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x130 = 1992336333U;
	uint8_t x131 = 0U;
	int64_t x132 = INT64_MIN;
	static volatile int32_t t29 = 16032;

    t29 = (x129==(x130+(x131/x132)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x133 = 11;
	static int16_t x134 = INT16_MIN;
	int16_t x135 = INT16_MIN;
	int8_t x136 = INT8_MAX;
	static volatile int32_t t30 = -293078;

    t30 = (x133==(x134+(x135/x136)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x137 = INT32_MAX;
	volatile uint32_t x138 = 4763604U;
	uint8_t x139 = UINT8_MAX;
	int32_t x140 = INT32_MIN;
	int32_t t31 = -197570006;

    t31 = (x137==(x138+(x139/x140)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x141 = 13U;
	uint64_t x142 = 182LLU;
	static int64_t x143 = INT64_MAX;
	uint8_t x144 = 1U;
	int32_t t32 = -216497159;

    t32 = (x141==(x142+(x143/x144)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x145 = -1166;
	uint32_t x146 = 748059U;
	static uint8_t x147 = UINT8_MAX;
	static int8_t x148 = INT8_MIN;
	int32_t t33 = -3628092;

    t33 = (x145==(x146+(x147/x148)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x149 = 26U;
	int32_t x150 = INT32_MIN;

    t34 = (x149==(x150+(x151/x152)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int8_t x153 = -1;
	static uint16_t x154 = 272U;
	int32_t x155 = -1809;
	int64_t x156 = 44360644LL;
	static int32_t t35 = -143996;

    t35 = (x153==(x154+(x155/x156)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int8_t x157 = -1;
	int16_t x158 = INT16_MIN;
	int16_t x159 = -1;
	int64_t x160 = -75218LL;

    t36 = (x157==(x158+(x159/x160)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint8_t x161 = 17U;
	int64_t x162 = -216LL;
	int32_t x163 = INT32_MIN;
	int32_t x164 = INT32_MIN;
	volatile int32_t t37 = 19684;

    t37 = (x161==(x162+(x163/x164)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x165 = 1U;
	int16_t x166 = 927;
	static int64_t x167 = -1LL;
	int64_t x168 = INT64_MAX;
	volatile int32_t t38 = 0;

    t38 = (x165==(x166+(x167/x168)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x169 = -1LL;
	uint32_t x170 = UINT32_MAX;
	uint8_t x171 = 1U;
	int8_t x172 = INT8_MAX;
	int32_t t39 = -53645;

    t39 = (x169==(x170+(x171/x172)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int64_t x174 = 38722753781079LL;
	uint32_t x175 = 22786U;
	int32_t x176 = INT32_MIN;
	volatile int32_t t40 = -677007715;

    t40 = (x173==(x174+(x175/x176)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint16_t x177 = 12701U;
	volatile int32_t x178 = 1;
	int16_t x179 = INT16_MIN;
	int16_t x180 = INT16_MAX;
	int32_t t41 = 284948022;

    t41 = (x177==(x178+(x179/x180)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x181 = 266422864LLU;
	volatile uint8_t x182 = UINT8_MAX;
	volatile int16_t x183 = INT16_MIN;
	int32_t x184 = -1;
	int32_t t42 = -247914051;

    t42 = (x181==(x182+(x183/x184)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x185 = -1;
	volatile int32_t x186 = INT32_MIN;
	int64_t x187 = INT64_MIN;
	static volatile int32_t t43 = 63;

    t43 = (x185==(x186+(x187/x188)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x189 = INT64_MIN;
	volatile int64_t x190 = 192679LL;
	uint64_t x191 = 5LLU;
	int64_t x192 = INT64_MIN;
	volatile int32_t t44 = -26969803;

    t44 = (x189==(x190+(x191/x192)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int64_t x194 = INT64_MIN;
	int64_t x195 = 36164LL;
	static uint64_t x196 = UINT64_MAX;
	volatile int32_t t45 = 25822;

    t45 = (x193==(x194+(x195/x196)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x197 = INT32_MAX;
	uint8_t x198 = 8U;
	uint8_t x199 = UINT8_MAX;

    t46 = (x197==(x198+(x199/x200)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x201 = -308838138790614961LL;
	uint64_t x202 = 847659649LLU;
	int64_t x203 = INT64_MAX;
	int8_t x204 = INT8_MIN;

    t47 = (x201==(x202+(x203/x204)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x205 = -1;
	uint64_t x207 = 6557LLU;
	volatile int32_t t48 = -11566;

    t48 = (x205==(x206+(x207/x208)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int64_t x209 = -1145202957002632LL;
	uint64_t x210 = UINT64_MAX;
	volatile uint16_t x211 = UINT16_MAX;
	uint32_t x212 = UINT32_MAX;
	volatile int32_t t49 = 2;

    t49 = (x209==(x210+(x211/x212)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x213 = -1;
	int16_t x214 = INT16_MAX;
	int8_t x215 = INT8_MIN;
	static int8_t x216 = -1;
	volatile int32_t t50 = -32681599;

    t50 = (x213==(x214+(x215/x216)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x217 = -1;
	volatile int64_t x218 = 1663137LL;
	int64_t x220 = -4088LL;
	volatile int32_t t51 = -8;

    t51 = (x217==(x218+(x219/x220)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint64_t x223 = 0LLU;
	volatile int32_t t52 = 10066174;

    t52 = (x221==(x222+(x223/x224)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x229 = INT16_MAX;
	int16_t x230 = INT16_MIN;
	int8_t x231 = -1;
	int16_t x232 = INT16_MAX;
	int32_t t53 = -58591;

    t53 = (x229==(x230+(x231/x232)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x234 = 406179264LL;
	int8_t x235 = -1;
	uint8_t x236 = 2U;
	int32_t t54 = -21979;

    t54 = (x233==(x234+(x235/x236)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x237 = -49;
	int16_t x238 = INT16_MIN;
	static int64_t x239 = INT64_MAX;
	uint16_t x240 = UINT16_MAX;
	volatile int32_t t55 = 22;

    t55 = (x237==(x238+(x239/x240)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint16_t x242 = 207U;
	uint8_t x243 = 53U;
	int64_t x244 = INT64_MAX;
	int32_t t56 = -2673100;

    t56 = (x241==(x242+(x243/x244)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x245 = INT16_MIN;
	uint64_t x246 = 256444161972LLU;
	int32_t x247 = INT32_MIN;
	uint8_t x248 = 16U;
	int32_t t57 = -110710545;

    t57 = (x245==(x246+(x247/x248)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint8_t x250 = 1U;
	uint32_t x252 = UINT32_MAX;
	int32_t t58 = 753922233;

    t58 = (x249==(x250+(x251/x252)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x253 = -137422190952702LL;
	int8_t x254 = INT8_MIN;
	uint8_t x255 = 19U;
	int32_t t59 = -21340339;

    t59 = (x253==(x254+(x255/x256)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x257 = 13;
	volatile int32_t x258 = INT32_MIN;
	uint64_t x259 = 229367347778LLU;
	int64_t x260 = INT64_MIN;

    t60 = (x257==(x258+(x259/x260)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x262 = UINT16_MAX;
	int8_t x263 = -1;
	volatile int32_t t61 = 265224018;

    t61 = (x261==(x262+(x263/x264)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint32_t x265 = 39098139U;
	volatile uint32_t x266 = 2U;
	int16_t x267 = INT16_MIN;

    t62 = (x265==(x266+(x267/x268)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int32_t x270 = 72535467;
	int32_t x271 = INT32_MIN;
	volatile uint64_t x272 = UINT64_MAX;
	volatile int32_t t63 = 163857;

    t63 = (x269==(x270+(x271/x272)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x274 = INT8_MIN;
	static int8_t x275 = 0;
	int32_t x276 = INT32_MIN;

    t64 = (x273==(x274+(x275/x276)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x277 = INT16_MIN;
	uint8_t x278 = 23U;
	volatile int8_t x279 = 6;
	volatile int64_t x280 = INT64_MIN;
	static int32_t t65 = 1;

    t65 = (x277==(x278+(x279/x280)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x281 = INT64_MIN;
	uint64_t x282 = 826301594LLU;
	volatile int16_t x284 = INT16_MAX;
	volatile int32_t t66 = -8089466;

    t66 = (x281==(x282+(x283/x284)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x285 = -1793620314422058LL;
	static int64_t x286 = -7810450LL;
	volatile int16_t x287 = 212;
	uint32_t x288 = UINT32_MAX;
	int32_t t67 = 1;

    t67 = (x285==(x286+(x287/x288)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x289 = 0LL;
	static int8_t x291 = 0;
	int16_t x292 = INT16_MIN;
	static volatile int32_t t68 = -120;

    t68 = (x289==(x290+(x291/x292)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x293 = INT8_MAX;
	volatile int8_t x294 = -1;
	int64_t x295 = INT64_MAX;
	uint64_t x296 = 80882335400493929LLU;
	static int32_t t69 = 5325;

    t69 = (x293==(x294+(x295/x296)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x297 = 1431;
	static volatile int32_t x298 = -1;
	volatile uint16_t x299 = 11966U;
	uint64_t x300 = UINT64_MAX;
	int32_t t70 = -4248607;

    t70 = (x297==(x298+(x299/x300)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x301 = INT16_MIN;
	static volatile int64_t x302 = INT64_MAX;
	static int32_t x303 = INT32_MAX;
	int64_t x304 = INT64_MAX;
	volatile int32_t t71 = 460;

    t71 = (x301==(x302+(x303/x304)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x305 = -1;
	uint8_t x306 = 1U;
	uint32_t x308 = 115315U;
	volatile int32_t t72 = 25438;

    t72 = (x305==(x306+(x307/x308)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint64_t x309 = 205810966821975LLU;
	int8_t x311 = 0;
	volatile uint64_t x312 = UINT64_MAX;
	volatile int32_t t73 = -12;

    t73 = (x309==(x310+(x311/x312)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x313 = -4619628;
	static uint16_t x314 = UINT16_MAX;
	static uint8_t x315 = 49U;
	static int32_t t74 = -66;

    t74 = (x313==(x314+(x315/x316)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x317 = 14028781U;
	int16_t x318 = INT16_MAX;
	int16_t x319 = INT16_MAX;
	int64_t x320 = INT64_MAX;
	volatile int32_t t75 = -51508;

    t75 = (x317==(x318+(x319/x320)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x321 = UINT16_MAX;
	int8_t x322 = -2;
	int8_t x323 = INT8_MIN;
	int64_t x324 = INT64_MIN;
	volatile int32_t t76 = 36;

    t76 = (x321==(x322+(x323/x324)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint32_t x325 = 431779207U;
	int16_t x326 = INT16_MIN;
	static volatile uint8_t x327 = UINT8_MAX;
	volatile int64_t x328 = -1397LL;
	static volatile int32_t t77 = -22770;

    t77 = (x325==(x326+(x327/x328)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x329 = 1U;
	int32_t x331 = INT32_MIN;
	int8_t x332 = INT8_MIN;
	int32_t t78 = 1;

    t78 = (x329==(x330+(x331/x332)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x333 = 1U;
	int16_t x335 = INT16_MAX;
	int64_t x336 = -54506024515902LL;

    t79 = (x333==(x334+(x335/x336)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x337 = -1;
	int8_t x339 = 16;
	static int32_t x340 = -1;
	int32_t t80 = -349;

    t80 = (x337==(x338+(x339/x340)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x341 = 1U;
	int8_t x342 = INT8_MIN;
	int32_t x343 = INT32_MIN;
	int64_t x344 = -1LL;

    t81 = (x341==(x342+(x343/x344)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x350 = 314U;
	int32_t x351 = -1;

    t82 = (x349==(x350+(x351/x352)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int8_t x354 = 0;
	int8_t x355 = -1;
	int32_t t83 = -888501;

    t83 = (x353==(x354+(x355/x356)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x357 = INT64_MAX;
	uint32_t x358 = 304932U;
	int64_t x359 = -1904LL;
	uint8_t x360 = 76U;
	volatile int32_t t84 = 1;

    t84 = (x357==(x358+(x359/x360)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x361 = INT16_MIN;
	uint64_t x362 = UINT64_MAX;
	static volatile int32_t x363 = 5;
	static volatile int32_t x364 = INT32_MAX;
	int32_t t85 = -10191824;

    t85 = (x361==(x362+(x363/x364)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x365 = 1U;
	uint16_t x366 = 3U;
	int16_t x367 = INT16_MIN;
	uint8_t x368 = UINT8_MAX;
	volatile int32_t t86 = -85;

    t86 = (x365==(x366+(x367/x368)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile int32_t t87 = -264224;

    t87 = (x369==(x370+(x371/x372)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x374 = INT8_MAX;
	static int16_t x375 = INT16_MIN;
	static int32_t x376 = -107844611;
	static volatile int32_t t88 = 5964;

    t88 = (x373==(x374+(x375/x376)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x378 = INT16_MIN;
	uint32_t x380 = 2738321U;
	volatile int32_t t89 = -11;

    t89 = (x377==(x378+(x379/x380)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x381 = -1;
	int8_t x382 = 1;
	int16_t x384 = INT16_MIN;
	volatile int32_t t90 = -14723;

    t90 = (x381==(x382+(x383/x384)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint8_t x385 = 15U;
	uint8_t x386 = 75U;
	static int16_t x388 = INT16_MIN;
	static volatile int32_t t91 = -239;

    t91 = (x385==(x386+(x387/x388)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x390 = 1U;
	int64_t x391 = -30LL;
	int32_t t92 = -73915;

    t92 = (x389==(x390+(x391/x392)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x393 = INT16_MAX;
	static int8_t x394 = -1;
	static int8_t x396 = -12;
	volatile int32_t t93 = 958048;

    t93 = (x393==(x394+(x395/x396)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int16_t x397 = INT16_MAX;
	int32_t x398 = -1555;
	int16_t x400 = INT16_MIN;
	static volatile int32_t t94 = -183419;

    t94 = (x397==(x398+(x399/x400)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x401 = UINT8_MAX;
	int8_t x402 = -1;
	int8_t x403 = -1;
	volatile uint64_t x404 = 5LLU;

    t95 = (x401==(x402+(x403/x404)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x405 = 4939660;
	volatile int32_t x406 = -250126785;
	static volatile int32_t t96 = 1251;

    t96 = (x405==(x406+(x407/x408)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x409 = INT8_MIN;
	int16_t x410 = INT16_MIN;
	static int16_t x411 = INT16_MIN;
	static int16_t x412 = -1878;
	volatile int32_t t97 = -12;

    t97 = (x409==(x410+(x411/x412)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x413 = INT64_MAX;
	volatile uint64_t x416 = 3353399381158092LLU;
	volatile int32_t t98 = 25;

    t98 = (x413==(x414+(x415/x416)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x417 = -104;
	volatile int64_t x418 = 4086400302LL;
	uint8_t x419 = 5U;
	volatile int32_t t99 = 3;

    t99 = (x417==(x418+(x419/x420)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x421 = 1;
	int32_t x422 = INT32_MIN;
	int8_t x423 = 1;
	int64_t x424 = 1822412018LL;
	int32_t t100 = 121274659;

    t100 = (x421==(x422+(x423/x424)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x425 = INT16_MAX;
	uint16_t x426 = UINT16_MAX;
	int64_t x427 = INT64_MIN;
	int64_t x428 = INT64_MIN;
	volatile int32_t t101 = 1;

    t101 = (x425==(x426+(x427/x428)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x430 = -136628;
	uint64_t x431 = 7LLU;
	int16_t x432 = -75;
	volatile int32_t t102 = 324856;

    t102 = (x429==(x430+(x431/x432)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x433 = INT32_MIN;
	int8_t x434 = -1;
	static int64_t x435 = -25539039211775496LL;
	int8_t x436 = 9;

    t103 = (x433==(x434+(x435/x436)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x437 = UINT64_MAX;
	volatile uint64_t x439 = UINT64_MAX;
	uint16_t x440 = 7U;
	volatile int32_t t104 = -28;

    t104 = (x437==(x438+(x439/x440)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint8_t x441 = 48U;
	uint32_t x442 = 997836040U;
	int8_t x443 = 13;
	volatile uint16_t x444 = 660U;
	int32_t t105 = 11836149;

    t105 = (x441==(x442+(x443/x444)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x445 = INT16_MAX;
	volatile int32_t x446 = -10081297;
	uint8_t x447 = 2U;
	int16_t x448 = -1394;

    t106 = (x445==(x446+(x447/x448)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static int8_t x449 = 1;
	int8_t x451 = 1;
	uint64_t x452 = UINT64_MAX;
	int32_t t107 = -2197116;

    t107 = (x449==(x450+(x451/x452)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x453 = -1;
	int16_t x454 = -7377;
	volatile uint64_t x455 = 856116201348LLU;
	volatile int64_t x456 = INT64_MIN;
	volatile int32_t t108 = -125399372;

    t108 = (x453==(x454+(x455/x456)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int32_t x457 = -1;
	int16_t x458 = -1;
	uint16_t x459 = UINT16_MAX;
	int64_t x460 = -364194LL;

    t109 = (x457==(x458+(x459/x460)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x461 = 2380U;
	uint8_t x462 = 14U;
	volatile int64_t x463 = -1LL;
	int32_t x464 = -1;

    t110 = (x461==(x462+(x463/x464)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x465 = INT64_MIN;
	int32_t x466 = -1;
	int64_t x467 = 3LL;
	int8_t x468 = -1;
	volatile int32_t t111 = 5923;

    t111 = (x465==(x466+(x467/x468)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x469 = 220LL;
	int8_t x470 = 11;
	int32_t x471 = -1;
	uint8_t x472 = 24U;
	static volatile int32_t t112 = -16360118;

    t112 = (x469==(x470+(x471/x472)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x473 = INT8_MAX;
	int64_t x474 = INT64_MAX;
	int8_t x475 = 12;
	int32_t t113 = 1908351;

    t113 = (x473==(x474+(x475/x476)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint8_t x477 = UINT8_MAX;
	static volatile uint64_t x479 = 2796680148964LLU;
	int16_t x480 = INT16_MIN;
	int32_t t114 = -190026000;

    t114 = (x477==(x478+(x479/x480)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x483 = UINT32_MAX;
	volatile int16_t x484 = INT16_MIN;

    t115 = (x481==(x482+(x483/x484)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x485 = INT16_MAX;
	int16_t x486 = -10;
	volatile int64_t x487 = 181601140LL;
	int16_t x488 = -803;
	volatile int32_t t116 = 169098029;

    t116 = (x485==(x486+(x487/x488)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x489 = INT16_MAX;
	int16_t x492 = INT16_MIN;
	volatile int32_t t117 = 0;

    t117 = (x489==(x490+(x491/x492)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x493 = -1;
	static volatile uint64_t x495 = 41607220243512LLU;
	int16_t x496 = -1;
	int32_t t118 = 1;

    t118 = (x493==(x494+(x495/x496)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint64_t x497 = UINT64_MAX;
	int8_t x498 = -10;
	static volatile int32_t x499 = INT32_MIN;
	uint16_t x500 = 3276U;
	int32_t t119 = 718462;

    t119 = (x497==(x498+(x499/x500)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x502 = INT16_MIN;
	int64_t x503 = 1465872270195189LL;

    t120 = (x501==(x502+(x503/x504)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x505 = -1;
	volatile uint16_t x506 = 3U;
	int16_t x507 = -1;
	static int16_t x508 = -1;
	int32_t t121 = 0;

    t121 = (x505==(x506+(x507/x508)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x509 = INT32_MIN;
	uint8_t x510 = 57U;
	static int32_t x511 = -1;
	uint64_t x512 = UINT64_MAX;
	volatile int32_t t122 = -261;

    t122 = (x509==(x510+(x511/x512)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x515 = INT16_MIN;
	static int16_t x516 = -1;
	volatile int32_t t123 = -15;

    t123 = (x513==(x514+(x515/x516)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x517 = INT64_MIN;
	uint32_t x518 = UINT32_MAX;
	int8_t x519 = -1;
	int64_t x520 = -1LL;
	int32_t t124 = 48773854;

    t124 = (x517==(x518+(x519/x520)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint8_t x521 = UINT8_MAX;
	int8_t x522 = INT8_MAX;
	int16_t x523 = -1;
	int64_t x524 = INT64_MAX;
	volatile int32_t t125 = -1869;

    t125 = (x521==(x522+(x523/x524)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x525 = INT32_MIN;
	int64_t x527 = -1LL;
	int8_t x528 = 1;
	int32_t t126 = 988;

    t126 = (x525==(x526+(x527/x528)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int64_t x529 = INT64_MIN;
	uint8_t x530 = 3U;
	int8_t x532 = -1;
	static volatile int32_t t127 = -1;

    t127 = (x529==(x530+(x531/x532)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x533 = INT32_MIN;
	uint16_t x534 = 23U;
	int8_t x535 = INT8_MAX;
	int32_t t128 = -123551240;

    t128 = (x533==(x534+(x535/x536)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x537 = -1LL;
	int64_t x539 = -1LL;
	int32_t t129 = 4778;

    t129 = (x537==(x538+(x539/x540)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x551 = 0;
	int8_t x552 = INT8_MIN;
	volatile int32_t t130 = 221494803;

    t130 = (x549==(x550+(x551/x552)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x553 = INT32_MIN;
	uint32_t x554 = 143U;
	volatile int32_t x556 = -1;
	volatile int32_t t131 = 778897807;

    t131 = (x553==(x554+(x555/x556)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int64_t x557 = INT64_MIN;
	int16_t x558 = INT16_MIN;
	int8_t x559 = INT8_MIN;
	int32_t x560 = INT32_MAX;
	int32_t t132 = 441;

    t132 = (x557==(x558+(x559/x560)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x561 = -1LL;
	volatile int64_t x562 = INT64_MAX;
	uint8_t x563 = UINT8_MAX;
	int64_t x564 = INT64_MIN;

    t133 = (x561==(x562+(x563/x564)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x565 = UINT16_MAX;
	uint64_t x566 = 11943032LLU;
	uint64_t x567 = 32736901LLU;
	int64_t x568 = -1LL;
	int32_t t134 = -58;

    t134 = (x565==(x566+(x567/x568)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x570 = 0LLU;
	int8_t x572 = -3;
	int32_t t135 = -13;

    t135 = (x569==(x570+(x571/x572)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x573 = INT8_MIN;
	static uint8_t x575 = UINT8_MAX;
	int32_t x576 = 835773;
	volatile int32_t t136 = 6;

    t136 = (x573==(x574+(x575/x576)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile uint16_t x577 = 25752U;
	static int8_t x578 = INT8_MIN;
	int32_t x579 = INT32_MIN;
	volatile int32_t t137 = 52707677;

    t137 = (x577==(x578+(x579/x580)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x581 = -1;
	volatile uint16_t x582 = 14104U;
	uint8_t x583 = 102U;
	volatile uint64_t x584 = UINT64_MAX;
	volatile int32_t t138 = 10684166;

    t138 = (x581==(x582+(x583/x584)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x585 = -176386LL;
	uint8_t x586 = UINT8_MAX;
	static int16_t x587 = -119;
	int8_t x588 = INT8_MAX;
	volatile int32_t t139 = 6;

    t139 = (x585==(x586+(x587/x588)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint8_t x589 = UINT8_MAX;
	volatile uint16_t x590 = 290U;
	volatile int32_t x591 = INT32_MAX;
	int8_t x592 = -1;
	static volatile int32_t t140 = 6766;

    t140 = (x589==(x590+(x591/x592)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x593 = INT64_MIN;
	int16_t x594 = -1;
	static uint64_t x595 = 50691LLU;
	int8_t x596 = 56;
	int32_t t141 = -18929;

    t141 = (x593==(x594+(x595/x596)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x597 = INT64_MIN;
	static int32_t x599 = 2026968;
	volatile int32_t t142 = -2891;

    t142 = (x597==(x598+(x599/x600)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x601 = INT16_MAX;
	volatile int64_t x603 = INT64_MIN;
	static int16_t x604 = INT16_MIN;
	volatile int32_t t143 = -55635;

    t143 = (x601==(x602+(x603/x604)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x605 = -1;
	int16_t x608 = -1;
	volatile int32_t t144 = -2049635;

    t144 = (x605==(x606+(x607/x608)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x609 = -1;
	int16_t x610 = INT16_MIN;
	volatile int16_t x611 = INT16_MAX;
	int16_t x612 = INT16_MIN;
	int32_t t145 = 0;

    t145 = (x609==(x610+(x611/x612)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int64_t x617 = INT64_MAX;
	int64_t x618 = INT64_MIN;
	int32_t x619 = -213482697;
	static int32_t t146 = -810170;

    t146 = (x617==(x618+(x619/x620)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x625 = INT64_MIN;
	int8_t x626 = -5;
	volatile int8_t x627 = INT8_MIN;
	static int32_t t147 = -2;

    t147 = (x625==(x626+(x627/x628)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x629 = 3650717LLU;
	volatile int8_t x630 = INT8_MIN;
	volatile uint32_t x631 = UINT32_MAX;
	int16_t x632 = 275;
	int32_t t148 = -530228474;

    t148 = (x629==(x630+(x631/x632)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int64_t x633 = INT64_MIN;
	static int8_t x634 = INT8_MIN;
	volatile int32_t x635 = INT32_MIN;
	int16_t x636 = INT16_MAX;
	int32_t t149 = -922795104;

    t149 = (x633==(x634+(x635/x636)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x638 = INT8_MAX;
	static uint16_t x640 = UINT16_MAX;
	int32_t t150 = 8;

    t150 = (x637==(x638+(x639/x640)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int8_t x641 = -1;
	volatile int64_t x642 = INT64_MAX;
	uint16_t x644 = 15988U;
	volatile int32_t t151 = -78790846;

    t151 = (x641==(x642+(x643/x644)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int16_t x645 = -1;
	int8_t x646 = INT8_MIN;
	static volatile int16_t x648 = 14;
	static volatile int32_t t152 = -56791;

    t152 = (x645==(x646+(x647/x648)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x649 = UINT32_MAX;
	volatile uint32_t x650 = UINT32_MAX;
	int64_t x651 = -115621LL;
	uint32_t x652 = 3281804U;
	int32_t t153 = -6390;

    t153 = (x649==(x650+(x651/x652)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x655 = 6759;
	static int32_t t154 = -97773;

    t154 = (x653==(x654+(x655/x656)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x657 = -1LL;
	int16_t x658 = INT16_MIN;
	int8_t x659 = INT8_MIN;
	uint16_t x660 = UINT16_MAX;
	static volatile int32_t t155 = 793604;

    t155 = (x657==(x658+(x659/x660)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x661 = -1;
	int16_t x662 = -1;
	int16_t x663 = 1;
	volatile int32_t x664 = -1;

    t156 = (x661==(x662+(x663/x664)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int64_t x665 = -1LL;
	int64_t x666 = -1LL;
	int64_t x667 = -24LL;
	static volatile uint32_t x668 = UINT32_MAX;
	volatile int32_t t157 = 334;

    t157 = (x665==(x666+(x667/x668)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x669 = 255109481LLU;
	int8_t x671 = -1;
	int16_t x672 = INT16_MIN;
	static volatile int32_t t158 = 1;

    t158 = (x669==(x670+(x671/x672)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint64_t x673 = 776043827590701560LLU;
	uint32_t x675 = 19U;
	uint32_t x676 = 160U;
	static int32_t t159 = -24;

    t159 = (x673==(x674+(x675/x676)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x677 = -7798686391433976LL;
	volatile uint8_t x678 = UINT8_MAX;
	static uint64_t x679 = 23LLU;
	volatile int32_t x680 = INT32_MIN;
	static int32_t t160 = -264458;

    t160 = (x677==(x678+(x679/x680)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x681 = -8;
	uint16_t x682 = 389U;
	uint8_t x684 = 13U;

    t161 = (x681==(x682+(x683/x684)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x686 = 9443U;
	volatile uint16_t x687 = 3U;
	int32_t x688 = -13;

    t162 = (x685==(x686+(x687/x688)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int16_t x689 = -4623;
	static uint32_t x690 = 7996U;
	int32_t x691 = 1;
	static int64_t x692 = INT64_MIN;
	volatile int32_t t163 = 105560;

    t163 = (x689==(x690+(x691/x692)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int32_t x693 = INT32_MIN;
	static uint32_t x695 = 0U;
	uint16_t x696 = UINT16_MAX;

    t164 = (x693==(x694+(x695/x696)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x697 = INT64_MIN;
	int16_t x698 = -1;
	uint16_t x699 = 2387U;
	int8_t x700 = 15;

    t165 = (x697==(x698+(x699/x700)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x701 = 49U;
	int8_t x702 = INT8_MIN;
	static int32_t x703 = -102476;
	int64_t x704 = INT64_MIN;
	int32_t t166 = -230791654;

    t166 = (x701==(x702+(x703/x704)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint64_t x705 = UINT64_MAX;
	int32_t t167 = 1;

    t167 = (x705==(x706+(x707/x708)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x709 = 6U;
	static int8_t x711 = INT8_MIN;
	volatile int32_t t168 = 0;

    t168 = (x709==(x710+(x711/x712)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x713 = UINT32_MAX;
	int16_t x714 = -1;
	uint16_t x716 = UINT16_MAX;

    t169 = (x713==(x714+(x715/x716)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x718 = 7U;
	static int32_t x719 = INT32_MIN;
	int64_t x720 = -4LL;

    t170 = (x717==(x718+(x719/x720)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x722 = 2LL;
	uint32_t x724 = UINT32_MAX;
	int32_t t171 = -13683200;

    t171 = (x721==(x722+(x723/x724)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x725 = INT16_MIN;
	static uint8_t x726 = 5U;
	int32_t x728 = INT32_MIN;
	volatile int32_t t172 = 3154;

    t172 = (x725==(x726+(x727/x728)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x733 = INT8_MAX;
	int8_t x734 = INT8_MAX;
	volatile int32_t t173 = -19840416;

    t173 = (x733==(x734+(x735/x736)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x737 = 0U;
	int64_t x738 = INT64_MIN;
	volatile int16_t x740 = INT16_MIN;
	int32_t t174 = -360484;

    t174 = (x737==(x738+(x739/x740)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x741 = 24U;
	int8_t x742 = -1;
	int64_t x744 = INT64_MIN;
	int32_t t175 = -9173;

    t175 = (x741==(x742+(x743/x744)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x745 = 3U;
	int8_t x746 = 0;
	int16_t x747 = 0;
	int64_t x748 = INT64_MIN;
	static int32_t t176 = -82107441;

    t176 = (x745==(x746+(x747/x748)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x749 = -448612;
	int32_t x750 = -1;
	volatile uint8_t x751 = UINT8_MAX;
	volatile uint64_t x752 = 404276122346LLU;
	int32_t t177 = 929751;

    t177 = (x749==(x750+(x751/x752)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int8_t x753 = INT8_MIN;
	volatile int16_t x754 = INT16_MAX;
	uint8_t x755 = 1U;
	int16_t x756 = INT16_MAX;
	int32_t t178 = -223270;

    t178 = (x753==(x754+(x755/x756)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int16_t x757 = 694;
	static volatile uint32_t x758 = 252U;
	volatile int8_t x759 = 1;

    t179 = (x757==(x758+(x759/x760)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x762 = 4U;
	int16_t x764 = INT16_MIN;
	static int32_t t180 = 2775;

    t180 = (x761==(x762+(x763/x764)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x766 = 8;
	static volatile int32_t x768 = 395;
	volatile int32_t t181 = 8333;

    t181 = (x765==(x766+(x767/x768)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint16_t x770 = UINT16_MAX;
	uint64_t x771 = 8188670LLU;
	int8_t x772 = -31;
	int32_t t182 = 15372823;

    t182 = (x769==(x770+(x771/x772)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x773 = 2;
	int8_t x775 = INT8_MIN;
	int32_t x776 = -1;
	volatile int32_t t183 = 3672562;

    t183 = (x773==(x774+(x775/x776)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x777 = 6854U;
	int64_t x778 = -1LL;
	static int16_t x779 = -1;
	uint64_t x780 = UINT64_MAX;
	int32_t t184 = -58210255;

    t184 = (x777==(x778+(x779/x780)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x785 = -3218418646LL;
	static int64_t x786 = -2156985315094LL;
	int64_t x787 = INT64_MIN;
	int32_t t185 = -2920564;

    t185 = (x785==(x786+(x787/x788)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x790 = 2U;
	static int16_t x791 = INT16_MIN;
	volatile uint16_t x792 = 56U;
	static volatile int32_t t186 = -122239528;

    t186 = (x789==(x790+(x791/x792)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static int8_t x795 = 2;
	int32_t x796 = INT32_MIN;
	int32_t t187 = 959;

    t187 = (x793==(x794+(x795/x796)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x797 = -1;
	uint32_t x798 = 238086U;
	volatile int16_t x799 = -1;
	int8_t x800 = -1;
	static int32_t t188 = -91;

    t188 = (x797==(x798+(x799/x800)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint64_t x802 = 0LLU;
	int8_t x804 = -1;
	volatile int32_t t189 = 8;

    t189 = (x801==(x802+(x803/x804)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint16_t x805 = 5U;
	int8_t x806 = -1;
	static int32_t x807 = INT32_MAX;
	static int64_t x808 = -940LL;
	int32_t t190 = -7691;

    t190 = (x805==(x806+(x807/x808)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x809 = 89U;
	static int32_t x810 = INT32_MIN;
	int64_t x811 = -1LL;
	volatile int32_t t191 = -207234;

    t191 = (x809==(x810+(x811/x812)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x814 = 4U;
	int16_t x815 = INT16_MIN;
	volatile int16_t x816 = INT16_MAX;
	int32_t t192 = 12887;

    t192 = (x813==(x814+(x815/x816)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x818 = 15U;
	static int64_t x819 = INT64_MAX;
	static int32_t t193 = 348540;

    t193 = (x817==(x818+(x819/x820)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint8_t x821 = 51U;
	volatile int32_t x822 = INT32_MIN;
	volatile uint64_t x823 = 503723953603479LLU;
	uint32_t x824 = UINT32_MAX;
	static volatile int32_t t194 = -1053333;

    t194 = (x821==(x822+(x823/x824)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x825 = -28444288;
	static int32_t x826 = -1;
	uint32_t x827 = UINT32_MAX;
	static volatile uint32_t x828 = UINT32_MAX;
	static volatile int32_t t195 = -1;

    t195 = (x825==(x826+(x827/x828)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x830 = 18U;
	static int32_t x832 = INT32_MAX;
	volatile int32_t t196 = -73467735;

    t196 = (x829==(x830+(x831/x832)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int8_t x833 = 2;
	int8_t x835 = INT8_MAX;
	static uint64_t x836 = 15017402648230LLU;
	volatile int32_t t197 = -478;

    t197 = (x833==(x834+(x835/x836)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x838 = INT16_MAX;
	uint64_t x839 = UINT64_MAX;
	int32_t t198 = 896;

    t198 = (x837==(x838+(x839/x840)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x841 = -1;
	static int64_t x843 = -1LL;
	volatile uint16_t x844 = 80U;
	volatile int32_t t199 = -7929136;

    t199 = (x841==(x842+(x843/x844)));

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

