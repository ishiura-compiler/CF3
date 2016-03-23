
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

static int8_t x1 = -1;
uint16_t x10 = UINT16_MAX;
int8_t x26 = 1;
uint16_t x43 = 2865U;
static int16_t x44 = -1;
static volatile int32_t t6 = 529596566;
int64_t t7 = -704473311811LL;
static int16_t x49 = INT16_MAX;
int8_t x51 = 9;
int64_t x58 = 623400LL;
int64_t x60 = INT64_MAX;
int64_t t9 = 270225262599LL;
int16_t x72 = -1;
volatile int32_t t12 = 244227;
uint64_t x87 = 2LLU;
volatile int16_t x88 = INT16_MIN;
int32_t x89 = INT32_MIN;
int32_t t16 = -437492052;
int16_t x93 = INT16_MIN;
static uint16_t x96 = 42U;
int64_t t17 = -7815LL;
uint32_t x99 = 1U;
uint64_t x100 = 2043233201LLU;
uint64_t t18 = 134056699240LLU;
volatile int32_t x111 = -1;
int8_t x132 = INT8_MIN;
volatile int8_t x135 = -1;
uint8_t x138 = 2U;
int8_t x148 = -1;
uint64_t x167 = 9663051LLU;
volatile int8_t x168 = INT8_MAX;
int16_t x177 = 38;
int64_t x178 = 5069LL;
static volatile int32_t x179 = -1;
int8_t x180 = 1;
uint16_t x186 = 241U;
int8_t x188 = INT8_MAX;
static volatile int32_t t37 = 5;
uint64_t t38 = 6639131155128517LLU;
int16_t x197 = -3458;
int16_t x199 = -1;
int64_t t41 = 0LL;
uint32_t x209 = 378U;
uint64_t x211 = UINT64_MAX;
uint64_t t43 = 2050746158659802336LLU;
volatile uint8_t x222 = 9U;
int8_t x226 = INT8_MIN;
int32_t x227 = -2558;
int32_t x235 = -1;
int32_t t48 = 261947;
int32_t x240 = 11;
volatile int16_t x242 = INT16_MIN;
static int64_t x243 = INT64_MAX;
volatile int32_t x245 = INT32_MAX;
uint64_t x246 = 8305266693LLU;
int32_t t51 = 534;
uint8_t x249 = UINT8_MAX;
uint64_t x252 = 406060764LLU;
int64_t t53 = 924LL;
int8_t x257 = INT8_MIN;
static volatile uint32_t t54 = 1990904U;
int64_t x273 = 436LL;
static int32_t x279 = 63;
int64_t x289 = INT64_MAX;
uint16_t x301 = 30U;
volatile int16_t x304 = INT16_MAX;
volatile int32_t t62 = 45;
volatile uint16_t x308 = 6644U;
int16_t x311 = INT16_MAX;
static volatile int8_t x312 = INT8_MIN;
uint16_t x315 = UINT16_MAX;
static volatile int32_t t67 = 1596706;
int64_t x340 = INT64_MAX;
volatile uint32_t x341 = UINT32_MAX;
int64_t t71 = 587LL;
int32_t x350 = INT32_MAX;
uint64_t x356 = 1LLU;
int16_t x360 = INT16_MAX;
static volatile int8_t x370 = -1;
uint32_t x373 = 81257477U;
int16_t x376 = -1;
volatile int32_t t78 = 2978;
int8_t x378 = 7;
static int32_t x379 = -1;
static int16_t x380 = INT16_MIN;
volatile int32_t t79 = -1;
uint64_t t80 = 23339206270525LLU;
int64_t x398 = INT64_MIN;
int32_t x409 = -4;
int16_t x411 = INT16_MIN;
uint16_t x424 = 3429U;
int8_t x434 = INT8_MIN;
int8_t x435 = INT8_MIN;
int8_t x447 = 3;
int16_t x451 = 0;
volatile int64_t x457 = 7177292155181LL;
uint8_t x469 = UINT8_MAX;
int64_t t99 = 2672LL;
int8_t x473 = INT8_MAX;
static volatile uint32_t t101 = 265002055U;
volatile int64_t x482 = INT64_MIN;
int16_t x486 = INT16_MIN;
static volatile int32_t x488 = INT32_MAX;
int8_t x491 = INT8_MIN;
int32_t x492 = INT32_MIN;
volatile int32_t t104 = 2304;
volatile int32_t t105 = 0;
volatile uint64_t x499 = 11796253LLU;
int16_t x502 = INT16_MIN;
int32_t t107 = -444617843;
int64_t x507 = -1LL;
volatile int64_t t108 = -25512328932LL;
uint8_t x509 = 1U;
int8_t x510 = 0;
int8_t x519 = -1;
int64_t x522 = INT64_MAX;
int32_t x526 = 0;
uint64_t x530 = 2LLU;
uint16_t x536 = 227U;
volatile int64_t t114 = -3215217LL;
volatile int32_t x537 = INT32_MAX;
uint16_t x538 = UINT16_MAX;
int16_t x540 = 21;
static volatile uint64_t x541 = 11314969831LLU;
static int16_t x543 = INT16_MIN;
static int16_t x556 = INT16_MAX;
uint64_t x564 = 6751218987692LLU;
volatile uint64_t t120 = 8535LLU;
int16_t x583 = INT16_MIN;
volatile int64_t x584 = -1LL;
int32_t x590 = 914;
uint64_t x592 = 2404117095837954078LLU;
volatile uint64_t t125 = 233511320188518LLU;
int64_t x597 = INT64_MAX;
int8_t x602 = -1;
uint8_t x615 = 0U;
volatile int64_t t130 = 820999LL;
uint32_t x629 = 518U;
int32_t x634 = -1;
uint32_t x647 = UINT32_MAX;
uint16_t x650 = 4062U;
uint16_t x661 = 5U;
int64_t t140 = 225694646LL;
uint16_t x673 = 8U;
static uint64_t x679 = UINT64_MAX;
volatile uint16_t x681 = 16U;
int16_t x683 = 0;
int64_t t143 = 43115606LL;
uint64_t x688 = UINT64_MAX;
int16_t x695 = INT16_MIN;
static volatile int8_t x708 = INT8_MIN;
volatile uint32_t t147 = 749U;
uint64_t x711 = 5656996722601594LLU;
volatile int32_t x716 = -14;
volatile int64_t t151 = -257LL;
volatile int32_t t152 = 1;
volatile int8_t x744 = -8;
uint32_t x758 = UINT32_MAX;
uint64_t x759 = 3LLU;
static int64_t x760 = -1LL;
volatile int64_t x764 = INT64_MIN;
uint16_t x775 = 51U;
uint16_t x777 = 4254U;
int8_t x778 = -1;
int64_t x780 = 1543837675400712LL;
int64_t x781 = -151210630084LL;
uint64_t x785 = 2239160296187055235LLU;
uint64_t x788 = 424603LLU;
int32_t x791 = INT32_MAX;
uint8_t x792 = UINT8_MAX;
int64_t x798 = 59931805189719LL;
uint16_t x804 = UINT16_MAX;
static uint64_t x805 = 6177890989336191LLU;
volatile int16_t x811 = INT16_MIN;
int16_t x818 = INT16_MIN;
int32_t x821 = INT32_MIN;
int8_t x823 = INT8_MIN;
volatile int64_t t172 = -11444LL;
static int16_t x833 = 26;
volatile int64_t x836 = 1755364014588245LL;
uint16_t x838 = 47U;
int8_t x840 = INT8_MIN;
static volatile int32_t x843 = -1;
int16_t x844 = INT16_MAX;
uint64_t x858 = UINT64_MAX;
int8_t x864 = INT8_MIN;
int32_t t179 = -254851093;
int16_t x865 = 0;
uint64_t x867 = 978654644LLU;
uint64_t t180 = 4925LLU;
int8_t x871 = INT8_MIN;
int32_t x882 = INT32_MIN;
static int8_t x883 = -7;
uint8_t x892 = UINT8_MAX;
int64_t x908 = INT64_MIN;
int64_t x920 = INT64_MIN;
int64_t t190 = 8212988122LL;
int16_t x922 = INT16_MIN;
static volatile uint64_t x933 = 2664668277816051LLU;
int32_t x935 = INT32_MAX;
volatile int32_t t193 = INT32_MAX;
int32_t x937 = -99;
int32_t x940 = INT32_MAX;
volatile int16_t x948 = -1;
int8_t x949 = INT8_MIN;
int8_t x957 = INT8_MIN;
static uint32_t t199 = 998471U;


void f0(void) {
    	uint64_t x2 = UINT64_MAX;
	static int64_t x3 = 7LL;
	uint8_t x4 = 1U;
	volatile int64_t t0 = -9130125514905038LL;

    t0 = (((x1>x2)-x3)/x4);

    if (t0 != -7LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int64_t x5 = 249052LL;
	uint32_t x6 = 869363952U;
	int64_t x7 = 2576491523LL;
	static int8_t x8 = 30;
	int64_t t1 = 4017603786367007379LL;

    t1 = (((x5>x6)-x7)/x8);

    if (t1 != -85883050LL) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile int64_t x9 = 1601305596LL;
	uint8_t x11 = 1U;
	int8_t x12 = -1;
	static int32_t t2 = -756;

    t2 = (((x9>x10)-x11)/x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x25 = INT16_MIN;
	int32_t x27 = 10;
	int64_t x28 = -214423370229010LL;
	int64_t t3 = 182163137387268LL;

    t3 = (((x25>x26)-x27)/x28);

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x33 = INT8_MIN;
	int16_t x34 = INT16_MAX;
	int16_t x35 = INT16_MAX;
	uint8_t x36 = 22U;
	volatile int32_t t4 = 11;

    t4 = (((x33>x34)-x35)/x36);

    if (t4 != -1489) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x37 = INT8_MAX;
	int32_t x38 = INT32_MAX;
	static uint8_t x39 = 1U;
	uint32_t x40 = 23U;
	volatile uint32_t t5 = 768U;

    t5 = (((x37>x38)-x39)/x40);

    if (t5 != 186737708U) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x41 = INT8_MIN;
	static uint16_t x42 = 7409U;

    t6 = (((x41>x42)-x43)/x44);

    if (t6 != 2865) { NG(); } else { ; }
	
}

void f7(void) {
    	static int32_t x45 = INT32_MAX;
	int16_t x46 = INT16_MIN;
	int8_t x47 = 6;
	int64_t x48 = -151LL;

    t7 = (((x45>x46)-x47)/x48);

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x50 = -1;
	static uint32_t x52 = 14U;
	static uint32_t t8 = 51290U;

    t8 = (((x49>x50)-x51)/x52);

    if (t8 != 306783377U) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint32_t x57 = 3454011U;
	volatile int32_t x59 = INT32_MAX;

    t9 = (((x57>x58)-x59)/x60);

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint8_t x65 = 33U;
	int64_t x66 = -1LL;
	static volatile int16_t x67 = -5;
	int8_t x68 = 22;
	int32_t t10 = -20;

    t10 = (((x65>x66)-x67)/x68);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x69 = -3823LL;
	uint16_t x70 = 3U;
	uint64_t x71 = 1758560271285157398LLU;
	volatile uint64_t t11 = 1423632640868839091LLU;

    t11 = (((x69>x70)-x71)/x72);

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x73 = -815;
	static volatile uint16_t x74 = UINT16_MAX;
	int8_t x75 = -1;
	static volatile int8_t x76 = INT8_MAX;

    t12 = (((x73>x74)-x75)/x76);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x77 = -1;
	volatile int64_t x78 = INT64_MIN;
	int8_t x79 = INT8_MIN;
	static int8_t x80 = INT8_MIN;
	static int32_t t13 = 442984768;

    t13 = (((x77>x78)-x79)/x80);

    if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x81 = 1;
	uint64_t x82 = 2178679851LLU;
	static int8_t x83 = INT8_MIN;
	int32_t x84 = INT32_MAX;
	int32_t t14 = 52088;

    t14 = (((x81>x82)-x83)/x84);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile int16_t x85 = INT16_MIN;
	int16_t x86 = INT16_MAX;
	volatile uint64_t t15 = 30739702579046862LLU;

    t15 = (((x85>x86)-x87)/x88);

    if (t15 != 1LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int8_t x90 = -1;
	int8_t x91 = INT8_MIN;
	volatile uint8_t x92 = 24U;

    t16 = (((x89>x90)-x91)/x92);

    if (t16 != 5) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int64_t x94 = INT64_MAX;
	int64_t x95 = -2LL;

    t17 = (((x93>x94)-x95)/x96);

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x97 = INT8_MIN;
	static int32_t x98 = INT32_MAX;

    t18 = (((x97>x98)-x99)/x100);

    if (t18 != 2LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x101 = INT32_MAX;
	static uint16_t x102 = 0U;
	static volatile int64_t x103 = -1LL;
	volatile uint8_t x104 = 19U;
	int64_t t19 = -1041670419440739639LL;

    t19 = (((x101>x102)-x103)/x104);

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x105 = 4039099LL;
	int64_t x106 = -1LL;
	uint64_t x107 = UINT64_MAX;
	static int32_t x108 = 4373580;
	volatile uint64_t t20 = 2636487274267709122LLU;

    t20 = (((x105>x106)-x107)/x108);

    if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x109 = UINT64_MAX;
	int8_t x110 = -1;
	int8_t x112 = 4;
	int32_t t21 = 1032785;

    t21 = (((x109>x110)-x111)/x112);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x113 = 4U;
	int32_t x114 = INT32_MAX;
	static uint16_t x115 = 41U;
	int8_t x116 = INT8_MAX;
	volatile int32_t t22 = -60206;

    t22 = (((x113>x114)-x115)/x116);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x117 = INT16_MAX;
	uint16_t x118 = 54U;
	int16_t x119 = INT16_MAX;
	volatile int32_t x120 = 410782;
	int32_t t23 = 10559;

    t23 = (((x117>x118)-x119)/x120);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x125 = INT8_MAX;
	volatile int32_t x126 = -1;
	static int8_t x127 = INT8_MIN;
	int32_t x128 = -924;
	int32_t t24 = -942308;

    t24 = (((x125>x126)-x127)/x128);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x129 = 19428U;
	int64_t x130 = INT64_MAX;
	int8_t x131 = 36;
	int32_t t25 = -34;

    t25 = (((x129>x130)-x131)/x132);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x133 = 20;
	int32_t x134 = 1317;
	uint64_t x136 = 550480714331151LLU;
	uint64_t t26 = 5LLU;

    t26 = (((x133>x134)-x135)/x136);

    if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x137 = INT8_MIN;
	static uint16_t x139 = 1U;
	uint32_t x140 = 114U;
	uint32_t t27 = 3605U;

    t27 = (((x137>x138)-x139)/x140);

    if (t27 != 37675151U) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x141 = INT32_MAX;
	static uint16_t x142 = 5U;
	uint16_t x143 = 12678U;
	volatile int16_t x144 = INT16_MIN;
	int32_t t28 = 176540;

    t28 = (((x141>x142)-x143)/x144);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x145 = 1;
	uint64_t x146 = 13467LLU;
	static volatile int64_t x147 = INT64_MAX;
	int64_t t29 = INT64_MAX;

    t29 = (((x145>x146)-x147)/x148);

    if (t29 != INT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x149 = INT32_MIN;
	int8_t x150 = INT8_MIN;
	uint16_t x151 = 635U;
	uint8_t x152 = 2U;
	volatile int32_t t30 = -1664404;

    t30 = (((x149>x150)-x151)/x152);

    if (t30 != -317) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x157 = INT8_MIN;
	volatile int8_t x158 = INT8_MIN;
	int32_t x159 = INT32_MAX;
	uint64_t x160 = UINT64_MAX;
	volatile uint64_t t31 = 1395428LLU;

    t31 = (((x157>x158)-x159)/x160);

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x161 = 56U;
	int8_t x162 = INT8_MIN;
	int64_t x163 = -5045799025265LL;
	volatile int32_t x164 = INT32_MIN;
	static int64_t t32 = -1LL;

    t32 = (((x161>x162)-x163)/x164);

    if (t32 != -2349LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x165 = INT64_MAX;
	int64_t x166 = INT64_MIN;
	uint64_t t33 = 157LLU;

    t33 = (((x165>x166)-x167)/x168);

    if (t33 != 145249953336219595LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x169 = INT8_MIN;
	static uint64_t x170 = 70247LLU;
	volatile int16_t x171 = INT16_MAX;
	int32_t x172 = INT32_MAX;
	volatile int32_t t34 = 38;

    t34 = (((x169>x170)-x171)/x172);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int32_t t35 = 566830114;

    t35 = (((x177>x178)-x179)/x180);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x181 = INT32_MIN;
	int16_t x182 = INT16_MAX;
	static int8_t x183 = INT8_MAX;
	uint16_t x184 = UINT16_MAX;
	volatile int32_t t36 = -2;

    t36 = (((x181>x182)-x183)/x184);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int8_t x185 = -1;
	uint8_t x187 = 3U;

    t37 = (((x185>x186)-x187)/x188);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x189 = 9;
	int8_t x190 = INT8_MIN;
	static int8_t x191 = INT8_MIN;
	volatile uint64_t x192 = 105LLU;

    t38 = (((x189>x190)-x191)/x192);

    if (t38 != 1LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x193 = -1;
	volatile int64_t x194 = -24879LL;
	int32_t x195 = -302;
	int32_t x196 = INT32_MAX;
	int32_t t39 = 453414;

    t39 = (((x193>x194)-x195)/x196);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x198 = 12467U;
	uint16_t x200 = UINT16_MAX;
	int32_t t40 = 605699;

    t40 = (((x197>x198)-x199)/x200);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x201 = 1U;
	volatile uint8_t x202 = UINT8_MAX;
	int64_t x203 = -1LL;
	int32_t x204 = INT32_MIN;

    t41 = (((x201>x202)-x203)/x204);

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint32_t x205 = 334581489U;
	int16_t x206 = 3957;
	int8_t x207 = -1;
	int8_t x208 = -5;
	volatile int32_t t42 = 64;

    t42 = (((x205>x206)-x207)/x208);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x210 = 965;
	volatile uint64_t x212 = 4020570501627117670LLU;

    t43 = (((x209>x210)-x211)/x212);

    if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int64_t x217 = INT64_MIN;
	uint32_t x218 = UINT32_MAX;
	int32_t x219 = -1;
	volatile int16_t x220 = INT16_MAX;
	int32_t t44 = -105;

    t44 = (((x217>x218)-x219)/x220);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x221 = 6388LLU;
	volatile int16_t x223 = INT16_MAX;
	uint64_t x224 = 60834979702475LLU;
	static uint64_t t45 = 184874604476LLU;

    t45 = (((x221>x222)-x223)/x224);

    if (t45 != 303225LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x225 = INT16_MIN;
	uint64_t x228 = UINT64_MAX;
	volatile uint64_t t46 = 15337178175LLU;

    t46 = (((x225>x226)-x227)/x228);

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int32_t x229 = -3;
	volatile int16_t x230 = 490;
	int8_t x231 = 3;
	uint8_t x232 = UINT8_MAX;
	volatile int32_t t47 = 1;

    t47 = (((x229>x230)-x231)/x232);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x233 = 99U;
	volatile int32_t x234 = INT32_MIN;
	int16_t x236 = INT16_MAX;

    t48 = (((x233>x234)-x235)/x236);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int16_t x237 = -7800;
	int32_t x238 = INT32_MIN;
	uint16_t x239 = UINT16_MAX;
	int32_t t49 = -996204;

    t49 = (((x237>x238)-x239)/x240);

    if (t49 != -5957) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint16_t x241 = 2U;
	int64_t x244 = -2055376017236LL;
	static int64_t t50 = -414LL;

    t50 = (((x241>x242)-x243)/x244);

    if (t50 != 4487437LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x247 = 60U;
	int8_t x248 = INT8_MAX;

    t51 = (((x245>x246)-x247)/x248);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x250 = 91U;
	int32_t x251 = 2796732;
	volatile uint64_t t52 = 6832960665LLU;

    t52 = (((x249>x250)-x251)/x252);

    if (t52 != 45428531168LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x253 = 107656483616523683LL;
	static int64_t x254 = 1382466859966478LL;
	int64_t x255 = 129075LL;
	uint32_t x256 = 2U;

    t53 = (((x253>x254)-x255)/x256);

    if (t53 != -64537LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x258 = INT64_MIN;
	static volatile int32_t x259 = -1;
	uint32_t x260 = 155826247U;

    t54 = (((x257>x258)-x259)/x260);

    if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint16_t x265 = 0U;
	static uint64_t x266 = 920416LLU;
	volatile uint32_t x267 = 20U;
	volatile uint16_t x268 = UINT16_MAX;
	uint32_t t55 = 217U;

    t55 = (((x265>x266)-x267)/x268);

    if (t55 != 65536U) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x274 = UINT8_MAX;
	int8_t x275 = INT8_MIN;
	int64_t x276 = INT64_MAX;
	static int64_t t56 = 14700426LL;

    t56 = (((x273>x274)-x275)/x276);

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x277 = INT16_MIN;
	static volatile uint32_t x278 = 737748U;
	uint16_t x280 = UINT16_MAX;
	volatile int32_t t57 = -101629;

    t57 = (((x277>x278)-x279)/x280);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int16_t x285 = INT16_MIN;
	static volatile uint32_t x286 = UINT32_MAX;
	int16_t x287 = INT16_MIN;
	int32_t x288 = INT32_MIN;
	int32_t t58 = -566263;

    t58 = (((x285>x286)-x287)/x288);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x290 = UINT64_MAX;
	int8_t x291 = INT8_MIN;
	int32_t x292 = INT32_MIN;
	int32_t t59 = 19;

    t59 = (((x289>x290)-x291)/x292);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x293 = -1LL;
	int64_t x294 = INT64_MAX;
	int16_t x295 = -7709;
	int64_t x296 = INT64_MAX;
	int64_t t60 = 21077LL;

    t60 = (((x293>x294)-x295)/x296);

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x297 = 120;
	static int8_t x298 = -1;
	int64_t x299 = 66134LL;
	uint8_t x300 = UINT8_MAX;
	volatile int64_t t61 = 31386264LL;

    t61 = (((x297>x298)-x299)/x300);

    if (t61 != -259LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint16_t x302 = UINT16_MAX;
	int8_t x303 = -1;

    t62 = (((x301>x302)-x303)/x304);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x305 = -35;
	uint8_t x306 = 93U;
	int64_t x307 = -109476699LL;
	volatile int64_t t63 = 87LL;

    t63 = (((x305>x306)-x307)/x308);

    if (t63 != 16477LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x309 = 35663091U;
	int8_t x310 = INT8_MIN;
	int32_t t64 = -18514;

    t64 = (((x309>x310)-x311)/x312);

    if (t64 != 255) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint16_t x313 = 10636U;
	uint8_t x314 = 2U;
	int16_t x316 = INT16_MIN;
	static volatile int32_t t65 = 6;

    t65 = (((x313>x314)-x315)/x316);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x321 = INT32_MIN;
	static int32_t x322 = INT32_MAX;
	uint16_t x323 = 13U;
	int64_t x324 = INT64_MIN;
	int64_t t66 = -4005804642205365128LL;

    t66 = (((x321>x322)-x323)/x324);

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int32_t x325 = INT32_MIN;
	int32_t x326 = INT32_MIN;
	int32_t x327 = 418319969;
	uint8_t x328 = 4U;

    t67 = (((x325>x326)-x327)/x328);

    if (t67 != -104579992) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x329 = INT16_MAX;
	int64_t x330 = -297241087769405386LL;
	int32_t x331 = 27;
	int8_t x332 = 2;
	volatile int32_t t68 = -25;

    t68 = (((x329>x330)-x331)/x332);

    if (t68 != -13) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x333 = 55;
	static volatile int32_t x334 = INT32_MIN;
	uint8_t x335 = 28U;
	int8_t x336 = INT8_MAX;
	int32_t t69 = 63;

    t69 = (((x333>x334)-x335)/x336);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static int16_t x337 = INT16_MIN;
	int64_t x338 = INT64_MIN;
	uint16_t x339 = 112U;
	int64_t t70 = -1086375100936LL;

    t70 = (((x337>x338)-x339)/x340);

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x342 = INT32_MIN;
	int16_t x343 = INT16_MIN;
	int64_t x344 = INT64_MIN;

    t71 = (((x341>x342)-x343)/x344);

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x345 = 10827145;
	uint16_t x346 = 0U;
	int16_t x347 = INT16_MIN;
	uint8_t x348 = UINT8_MAX;
	volatile int32_t t72 = 13781138;

    t72 = (((x345>x346)-x347)/x348);

    if (t72 != 128) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x349 = 51987792224LL;
	int16_t x351 = INT16_MIN;
	int16_t x352 = INT16_MIN;
	int32_t t73 = -54052783;

    t73 = (((x349>x350)-x351)/x352);

    if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x353 = INT8_MIN;
	int64_t x354 = INT64_MIN;
	int8_t x355 = INT8_MAX;
	volatile uint64_t t74 = 185343767689394693LLU;

    t74 = (((x353>x354)-x355)/x356);

    if (t74 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x357 = 1003U;
	int8_t x358 = INT8_MIN;
	int8_t x359 = INT8_MIN;
	volatile int32_t t75 = 199;

    t75 = (((x357>x358)-x359)/x360);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x361 = 319611319LLU;
	int16_t x362 = INT16_MIN;
	volatile int16_t x363 = 13986;
	int8_t x364 = -1;
	volatile int32_t t76 = -887093;

    t76 = (((x361>x362)-x363)/x364);

    if (t76 != 13986) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x369 = -1;
	int16_t x371 = 1;
	int16_t x372 = INT16_MIN;
	volatile int32_t t77 = 342;

    t77 = (((x369>x370)-x371)/x372);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x374 = UINT8_MAX;
	static volatile int16_t x375 = INT16_MAX;

    t78 = (((x373>x374)-x375)/x376);

    if (t78 != 32766) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int64_t x377 = INT64_MIN;

    t79 = (((x377>x378)-x379)/x380);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint64_t x381 = 60478LLU;
	uint32_t x382 = 19U;
	int32_t x383 = -1;
	static uint64_t x384 = UINT64_MAX;

    t80 = (((x381>x382)-x383)/x384);

    if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x385 = INT32_MAX;
	uint64_t x386 = 24314022057929036LLU;
	volatile int8_t x387 = 19;
	int64_t x388 = 484852LL;
	static int64_t t81 = 7308LL;

    t81 = (((x385>x386)-x387)/x388);

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile uint32_t x389 = UINT32_MAX;
	uint32_t x390 = 3330U;
	int8_t x391 = 11;
	int8_t x392 = INT8_MAX;
	volatile int32_t t82 = 2616382;

    t82 = (((x389>x390)-x391)/x392);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x393 = -29;
	int32_t x394 = 69;
	int8_t x395 = 32;
	volatile int16_t x396 = INT16_MIN;
	int32_t t83 = -63;

    t83 = (((x393>x394)-x395)/x396);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x397 = 0;
	int32_t x399 = 256154;
	uint64_t x400 = 11272384794LLU;
	uint64_t t84 = 843839738092497661LLU;

    t84 = (((x397>x398)-x399)/x400);

    if (t84 != 1636454433LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x401 = INT8_MIN;
	volatile uint32_t x402 = 441869826U;
	static int16_t x403 = INT16_MIN;
	uint64_t x404 = 13377LLU;
	volatile uint64_t t85 = 266844105268LLU;

    t85 = (((x401>x402)-x403)/x404);

    if (t85 != 2LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x405 = -12;
	uint16_t x406 = 2U;
	static volatile int8_t x407 = -2;
	uint8_t x408 = UINT8_MAX;
	volatile int32_t t86 = -204929;

    t86 = (((x405>x406)-x407)/x408);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x410 = -1LL;
	int64_t x412 = 23211153153LL;
	int64_t t87 = -83439497132840LL;

    t87 = (((x409>x410)-x411)/x412);

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x417 = 10U;
	volatile int32_t x418 = -267177179;
	uint16_t x419 = UINT16_MAX;
	uint8_t x420 = 8U;
	int32_t t88 = 1;

    t88 = (((x417>x418)-x419)/x420);

    if (t88 != -8191) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x421 = 44148220LLU;
	static int8_t x422 = INT8_MIN;
	uint8_t x423 = 0U;
	volatile int32_t t89 = 4079749;

    t89 = (((x421>x422)-x423)/x424);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x429 = INT8_MIN;
	volatile int8_t x430 = 2;
	int16_t x431 = 65;
	int32_t x432 = 17;
	int32_t t90 = 283032681;

    t90 = (((x429>x430)-x431)/x432);

    if (t90 != -3) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint16_t x433 = UINT16_MAX;
	volatile uint32_t x436 = 99397U;
	uint32_t t91 = 33713U;

    t91 = (((x433>x434)-x435)/x436);

    if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile int16_t x437 = INT16_MIN;
	int8_t x438 = -1;
	int16_t x439 = INT16_MAX;
	uint16_t x440 = 289U;
	static volatile int32_t t92 = 13072989;

    t92 = (((x437>x438)-x439)/x440);

    if (t92 != -113) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x441 = INT16_MAX;
	static uint64_t x442 = 117565LLU;
	int16_t x443 = INT16_MAX;
	int64_t x444 = -1LL;
	static int64_t t93 = 1238966613393LL;

    t93 = (((x441>x442)-x443)/x444);

    if (t93 != 32767LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x445 = INT16_MIN;
	static int32_t x446 = INT32_MAX;
	int64_t x448 = -4168643778874LL;
	static int64_t t94 = 223815627LL;

    t94 = (((x445>x446)-x447)/x448);

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x449 = UINT8_MAX;
	volatile int8_t x450 = 9;
	int8_t x452 = -8;
	int32_t t95 = -1967;

    t95 = (((x449>x450)-x451)/x452);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x458 = 208U;
	uint32_t x459 = 162U;
	int64_t x460 = -1LL;
	volatile int64_t t96 = -5231771508LL;

    t96 = (((x457>x458)-x459)/x460);

    if (t96 != -4294967135LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x461 = 74262204U;
	int64_t x462 = INT64_MIN;
	uint8_t x463 = UINT8_MAX;
	volatile int8_t x464 = INT8_MIN;
	static int32_t t97 = 0;

    t97 = (((x461>x462)-x463)/x464);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x465 = INT8_MIN;
	int16_t x466 = -1;
	uint16_t x467 = 62U;
	int32_t x468 = 751894;
	volatile int32_t t98 = -9322;

    t98 = (((x465>x466)-x467)/x468);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x470 = 89U;
	int64_t x471 = -39LL;
	int8_t x472 = INT8_MIN;

    t99 = (((x469>x470)-x471)/x472);

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x474 = 4813945LL;
	volatile uint32_t x475 = 1833316U;
	static int32_t x476 = -1;
	uint32_t t100 = 18U;

    t100 = (((x473>x474)-x475)/x476);

    if (t100 != 0U) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int32_t x477 = 813;
	int8_t x478 = -18;
	int8_t x479 = 1;
	static uint32_t x480 = 15969025U;

    t101 = (((x477>x478)-x479)/x480);

    if (t101 != 0U) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x481 = -2563;
	int16_t x483 = -1;
	int64_t x484 = 300210906283870264LL;
	int64_t t102 = 3604775732243LL;

    t102 = (((x481>x482)-x483)/x484);

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint8_t x485 = UINT8_MAX;
	static uint64_t x487 = UINT64_MAX;
	volatile uint64_t t103 = 54196966727LLU;

    t103 = (((x485>x486)-x487)/x488);

    if (t103 != 0LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile uint8_t x489 = UINT8_MAX;
	static int16_t x490 = INT16_MIN;

    t104 = (((x489>x490)-x491)/x492);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x493 = -175664221087758964LL;
	volatile int64_t x494 = INT64_MIN;
	volatile uint16_t x495 = UINT16_MAX;
	int8_t x496 = INT8_MAX;

    t105 = (((x493>x494)-x495)/x496);

    if (t105 != -516) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x497 = 3141119597LLU;
	int64_t x498 = -1LL;
	uint32_t x500 = 298157974U;
	static volatile uint64_t t106 = 235LLU;

    t106 = (((x497>x498)-x499)/x500);

    if (t106 != 61869028106LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x501 = 1958U;
	static uint16_t x503 = 3U;
	int32_t x504 = 1;

    t107 = (((x501>x502)-x503)/x504);

    if (t107 != -2) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x505 = 3341584419LLU;
	volatile uint64_t x506 = 19551892501LLU;
	int64_t x508 = 5151288LL;

    t108 = (((x505>x506)-x507)/x508);

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x511 = -1;
	static int32_t x512 = -1;
	int32_t t109 = -127;

    t109 = (((x509>x510)-x511)/x512);

    if (t109 != -2) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x517 = INT64_MIN;
	uint16_t x518 = 10U;
	static int32_t x520 = 7437;
	volatile int32_t t110 = -1419909;

    t110 = (((x517>x518)-x519)/x520);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x521 = INT32_MIN;
	volatile int16_t x523 = 82;
	int16_t x524 = -42;
	volatile int32_t t111 = 1525;

    t111 = (((x521>x522)-x523)/x524);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x525 = INT16_MIN;
	int16_t x527 = 3;
	int8_t x528 = -5;
	static volatile int32_t t112 = -45273;

    t112 = (((x525>x526)-x527)/x528);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x529 = 1U;
	uint64_t x531 = 322581575765750LLU;
	volatile int8_t x532 = -1;
	uint64_t t113 = 3852512325LLU;

    t113 = (((x529>x530)-x531)/x532);

    if (t113 != 0LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x533 = 3095U;
	uint64_t x534 = 7122078509490304315LLU;
	int64_t x535 = 5335LL;

    t114 = (((x533>x534)-x535)/x536);

    if (t114 != -23LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x539 = INT32_MAX;
	volatile int32_t t115 = 561;

    t115 = (((x537>x538)-x539)/x540);

    if (t115 != -102261126) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x542 = INT32_MAX;
	int64_t x544 = INT64_MIN;
	volatile int64_t t116 = -17182924LL;

    t116 = (((x541>x542)-x543)/x544);

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x545 = INT64_MAX;
	int16_t x546 = -805;
	volatile int16_t x547 = -1;
	int16_t x548 = -22;
	volatile int32_t t117 = -41925457;

    t117 = (((x545>x546)-x547)/x548);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x549 = INT8_MAX;
	int8_t x550 = INT8_MIN;
	uint64_t x551 = 75611LLU;
	volatile int64_t x552 = INT64_MIN;
	uint64_t t118 = 912461728703LLU;

    t118 = (((x549>x550)-x551)/x552);

    if (t118 != 1LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint8_t x553 = 3U;
	int32_t x554 = INT32_MIN;
	static uint64_t x555 = 1351421126LLU;
	volatile uint64_t t119 = 101225LLU;

    t119 = (((x553>x554)-x555)/x556);

    if (t119 != 562967133773556LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint8_t x561 = UINT8_MAX;
	static int64_t x562 = -292LL;
	int32_t x563 = 2224;

    t120 = (((x561>x562)-x563)/x564);

    if (t120 != 2732357LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x565 = UINT32_MAX;
	int8_t x566 = -7;
	static int64_t x567 = INT64_MAX;
	uint32_t x568 = UINT32_MAX;
	int64_t t121 = -774LL;

    t121 = (((x565>x566)-x567)/x568);

    if (t121 != -2147483648LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x569 = INT16_MIN;
	uint32_t x570 = UINT32_MAX;
	uint32_t x571 = 2U;
	static int8_t x572 = -1;
	volatile uint32_t t122 = 11128U;

    t122 = (((x569>x570)-x571)/x572);

    if (t122 != 0U) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint8_t x577 = 0U;
	static uint16_t x578 = 4222U;
	volatile int32_t x579 = -1;
	int8_t x580 = 4;
	int32_t t123 = 3090;

    t123 = (((x577>x578)-x579)/x580);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static int16_t x581 = INT16_MAX;
	int32_t x582 = -1;
	volatile int64_t t124 = 112591310150564790LL;

    t124 = (((x581>x582)-x583)/x584);

    if (t124 != -32769LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile uint8_t x589 = 2U;
	int8_t x591 = INT8_MAX;

    t125 = (((x589>x590)-x591)/x592);

    if (t125 != 7LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x593 = INT16_MAX;
	int8_t x594 = -1;
	int16_t x595 = INT16_MAX;
	int32_t x596 = INT32_MAX;
	volatile int32_t t126 = -639155158;

    t126 = (((x593>x594)-x595)/x596);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x598 = -4832;
	int8_t x599 = -1;
	int64_t x600 = INT64_MIN;
	static volatile int64_t t127 = 3140446178LL;

    t127 = (((x597>x598)-x599)/x600);

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x601 = INT32_MIN;
	static int8_t x603 = 1;
	volatile int32_t x604 = INT32_MIN;
	volatile int32_t t128 = -390648;

    t128 = (((x601>x602)-x603)/x604);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x605 = -11LL;
	static uint16_t x606 = 1U;
	volatile uint8_t x607 = UINT8_MAX;
	volatile uint32_t x608 = UINT32_MAX;
	volatile uint32_t t129 = 0U;

    t129 = (((x605>x606)-x607)/x608);

    if (t129 != 0U) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x613 = 42LLU;
	volatile uint64_t x614 = UINT64_MAX;
	int64_t x616 = INT64_MAX;

    t130 = (((x613>x614)-x615)/x616);

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x617 = UINT32_MAX;
	int8_t x618 = INT8_MIN;
	volatile int8_t x619 = -56;
	volatile uint32_t x620 = 26123188U;
	uint32_t t131 = 13179U;

    t131 = (((x617>x618)-x619)/x620);

    if (t131 != 0U) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint8_t x625 = 2U;
	int64_t x626 = 4330560467LL;
	volatile uint32_t x627 = 142959U;
	int16_t x628 = INT16_MAX;
	volatile uint32_t t132 = 50874U;

    t132 = (((x625>x626)-x627)/x628);

    if (t132 != 131071U) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x630 = INT32_MAX;
	uint16_t x631 = UINT16_MAX;
	static volatile uint16_t x632 = 1044U;
	int32_t t133 = -3;

    t133 = (((x629>x630)-x631)/x632);

    if (t133 != -62) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x633 = -1;
	volatile uint16_t x635 = 51U;
	volatile int16_t x636 = INT16_MIN;
	int32_t t134 = -428;

    t134 = (((x633>x634)-x635)/x636);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x641 = -1;
	static int16_t x642 = INT16_MIN;
	static uint8_t x643 = UINT8_MAX;
	uint32_t x644 = UINT32_MAX;
	volatile uint32_t t135 = 558993U;

    t135 = (((x641>x642)-x643)/x644);

    if (t135 != 0U) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x645 = 3252069U;
	volatile int8_t x646 = -1;
	uint8_t x648 = UINT8_MAX;
	uint32_t t136 = 444377U;

    t136 = (((x645>x646)-x647)/x648);

    if (t136 != 0U) { NG(); } else { ; }
	
}

void f137(void) {
    	static int64_t x649 = 47713LL;
	int16_t x651 = -1;
	int8_t x652 = -1;
	int32_t t137 = -105403743;

    t137 = (((x649>x650)-x651)/x652);

    if (t137 != -2) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint64_t x657 = 10656771LLU;
	int8_t x658 = INT8_MIN;
	int8_t x659 = INT8_MIN;
	int8_t x660 = -1;
	static volatile int32_t t138 = 26901523;

    t138 = (((x657>x658)-x659)/x660);

    if (t138 != -128) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x662 = -1;
	static int32_t x663 = 51;
	uint32_t x664 = UINT32_MAX;
	static uint32_t t139 = 1062U;

    t139 = (((x661>x662)-x663)/x664);

    if (t139 != 0U) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x669 = UINT16_MAX;
	uint32_t x670 = 217716U;
	volatile int16_t x671 = -1;
	int64_t x672 = -2509LL;

    t140 = (((x669>x670)-x671)/x672);

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int64_t x674 = INT64_MIN;
	volatile uint32_t x675 = 71U;
	uint32_t x676 = UINT32_MAX;
	volatile uint32_t t141 = 1657567U;

    t141 = (((x673>x674)-x675)/x676);

    if (t141 != 0U) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x677 = INT8_MIN;
	int32_t x678 = INT32_MAX;
	uint64_t x680 = UINT64_MAX;
	uint64_t t142 = 700925074479244052LLU;

    t142 = (((x677>x678)-x679)/x680);

    if (t142 != 0LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x682 = INT8_MIN;
	int64_t x684 = 1117707508269871LL;

    t143 = (((x681>x682)-x683)/x684);

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint16_t x685 = 542U;
	static volatile uint8_t x686 = UINT8_MAX;
	int16_t x687 = -2;
	volatile uint64_t t144 = 877702869661330LLU;

    t144 = (((x685>x686)-x687)/x688);

    if (t144 != 0LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x693 = -184036334LL;
	int8_t x694 = INT8_MAX;
	int32_t x696 = -372463595;
	static int32_t t145 = -29668291;

    t145 = (((x693>x694)-x695)/x696);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x697 = INT64_MIN;
	int32_t x698 = -8197921;
	volatile int64_t x699 = -1LL;
	static uint64_t x700 = 29LLU;
	uint64_t t146 = 364936623042175LLU;

    t146 = (((x697>x698)-x699)/x700);

    if (t146 != 0LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x705 = 158U;
	volatile int32_t x706 = INT32_MAX;
	uint32_t x707 = 11U;

    t147 = (((x705>x706)-x707)/x708);

    if (t147 != 1U) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x709 = UINT16_MAX;
	volatile uint64_t x710 = 28LLU;
	int64_t x712 = INT64_MIN;
	volatile uint64_t t148 = 73336639937LLU;

    t148 = (((x709>x710)-x711)/x712);

    if (t148 != 1LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint32_t x713 = UINT32_MAX;
	int32_t x714 = -2591;
	uint64_t x715 = 7036305637656LLU;
	uint64_t t149 = 0LLU;

    t149 = (((x713>x714)-x715)/x716);

    if (t149 != 0LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x717 = INT16_MAX;
	int32_t x718 = INT32_MIN;
	int32_t x719 = -1;
	int32_t x720 = -9367564;
	int32_t t150 = -167331746;

    t150 = (((x717>x718)-x719)/x720);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int64_t x721 = -15LL;
	int8_t x722 = INT8_MIN;
	volatile int64_t x723 = 505086LL;
	volatile uint32_t x724 = UINT32_MAX;

    t151 = (((x721>x722)-x723)/x724);

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint8_t x729 = 4U;
	int16_t x730 = 19;
	uint8_t x731 = 5U;
	uint16_t x732 = UINT16_MAX;

    t152 = (((x729>x730)-x731)/x732);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x733 = -1LL;
	int64_t x734 = -1LL;
	int32_t x735 = 8;
	int8_t x736 = 63;
	static volatile int32_t t153 = 11;

    t153 = (((x733>x734)-x735)/x736);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint32_t x737 = UINT32_MAX;
	int64_t x738 = -1LL;
	volatile int16_t x739 = -1;
	int8_t x740 = INT8_MIN;
	static int32_t t154 = -175;

    t154 = (((x737>x738)-x739)/x740);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int16_t x741 = -1;
	volatile int16_t x742 = INT16_MIN;
	volatile int64_t x743 = -66LL;
	static volatile int64_t t155 = 3211749568244LL;

    t155 = (((x741>x742)-x743)/x744);

    if (t155 != -8LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static int32_t x749 = -1847897;
	static uint32_t x750 = UINT32_MAX;
	uint8_t x751 = 109U;
	static uint8_t x752 = 28U;
	static int32_t t156 = -157;

    t156 = (((x749>x750)-x751)/x752);

    if (t156 != -3) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x753 = UINT64_MAX;
	static uint16_t x754 = 204U;
	int32_t x755 = -1;
	volatile int32_t x756 = -71;
	static volatile int32_t t157 = 105;

    t157 = (((x753>x754)-x755)/x756);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x757 = 17309125878564599LL;
	static volatile uint64_t t158 = 114LLU;

    t158 = (((x757>x758)-x759)/x760);

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static int64_t x761 = -5817590LL;
	static volatile uint32_t x762 = 2230655U;
	uint16_t x763 = 11U;
	int64_t t159 = -4539084976LL;

    t159 = (((x761>x762)-x763)/x764);

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x773 = 623879605069420LLU;
	volatile uint64_t x774 = 492733505324972LLU;
	int8_t x776 = INT8_MAX;
	int32_t t160 = 15;

    t160 = (((x773>x774)-x775)/x776);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x779 = 4U;
	int64_t t161 = 25971464313796899LL;

    t161 = (((x777>x778)-x779)/x780);

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x782 = UINT8_MAX;
	static uint8_t x783 = 3U;
	int32_t x784 = INT32_MIN;
	volatile int32_t t162 = -6577643;

    t162 = (((x781>x782)-x783)/x784);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x786 = INT32_MAX;
	int16_t x787 = INT16_MAX;
	volatile uint64_t t163 = 5084LLU;

    t163 = (((x785>x786)-x787)/x788);

    if (t163 != 43444686150850LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x789 = 3U;
	static int32_t x790 = INT32_MIN;
	int32_t t164 = 14707;

    t164 = (((x789>x790)-x791)/x792);

    if (t164 != -8421504) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x793 = -8;
	uint8_t x794 = 0U;
	static uint32_t x795 = 128768U;
	uint8_t x796 = 11U;
	static uint32_t t165 = 931078447U;

    t165 = (((x793>x794)-x795)/x796);

    if (t165 != 390439866U) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x797 = 5921784679LL;
	int16_t x799 = INT16_MIN;
	uint64_t x800 = 483384LLU;
	volatile uint64_t t166 = 1LLU;

    t166 = (((x797>x798)-x799)/x800);

    if (t166 != 0LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int32_t x801 = INT32_MIN;
	uint64_t x802 = UINT64_MAX;
	static uint16_t x803 = 880U;
	static volatile int32_t t167 = -8;

    t167 = (((x801>x802)-x803)/x804);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int16_t x806 = INT16_MIN;
	int8_t x807 = -1;
	volatile int32_t x808 = INT32_MAX;
	static int32_t t168 = 645;

    t168 = (((x805>x806)-x807)/x808);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int16_t x809 = 191;
	int32_t x810 = -1;
	uint64_t x812 = 1048284957794247LLU;
	uint64_t t169 = 1379070LLU;

    t169 = (((x809>x810)-x811)/x812);

    if (t169 != 0LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x817 = UINT16_MAX;
	int8_t x819 = INT8_MIN;
	uint64_t x820 = 678093652LLU;
	static volatile uint64_t t170 = 307308LLU;

    t170 = (((x817>x818)-x819)/x820);

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x822 = INT16_MIN;
	volatile int16_t x824 = -1;
	volatile int32_t t171 = 3245901;

    t171 = (((x821>x822)-x823)/x824);

    if (t171 != -128) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x825 = INT32_MIN;
	int64_t x826 = 790782257048570LL;
	volatile uint8_t x827 = 7U;
	static volatile int64_t x828 = -1LL;

    t172 = (((x825>x826)-x827)/x828);

    if (t172 != 7LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x834 = INT64_MAX;
	int16_t x835 = INT16_MIN;
	int64_t t173 = 109166LL;

    t173 = (((x833>x834)-x835)/x836);

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x837 = 27950U;
	int8_t x839 = -6;
	volatile int32_t t174 = -43;

    t174 = (((x837>x838)-x839)/x840);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x841 = -1;
	volatile int8_t x842 = INT8_MIN;
	int32_t t175 = 1414173;

    t175 = (((x841>x842)-x843)/x844);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x845 = -262516;
	uint64_t x846 = 20420902832828LLU;
	volatile uint8_t x847 = 95U;
	int64_t x848 = INT64_MIN;
	int64_t t176 = -871128302LL;

    t176 = (((x845>x846)-x847)/x848);

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x853 = INT32_MAX;
	volatile uint32_t x854 = 4U;
	int32_t x855 = INT32_MAX;
	static volatile int8_t x856 = -1;
	volatile int32_t t177 = 12764528;

    t177 = (((x853>x854)-x855)/x856);

    if (t177 != 2147483646) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x857 = INT64_MAX;
	int16_t x859 = -3;
	int8_t x860 = INT8_MAX;
	static volatile int32_t t178 = 0;

    t178 = (((x857>x858)-x859)/x860);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x861 = INT8_MAX;
	int8_t x862 = -1;
	int32_t x863 = INT32_MAX;

    t179 = (((x861>x862)-x863)/x864);

    if (t179 != 16777215) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint32_t x866 = 226332U;
	int32_t x868 = INT32_MIN;

    t180 = (((x865>x866)-x867)/x868);

    if (t180 != 1LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x869 = -58;
	int64_t x870 = INT64_MIN;
	uint8_t x872 = 3U;
	static int32_t t181 = 64985;

    t181 = (((x869>x870)-x871)/x872);

    if (t181 != 43) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int16_t x877 = INT16_MIN;
	static volatile int8_t x878 = 0;
	uint8_t x879 = UINT8_MAX;
	int16_t x880 = INT16_MIN;
	volatile int32_t t182 = -5;

    t182 = (((x877>x878)-x879)/x880);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x881 = INT8_MIN;
	uint32_t x884 = UINT32_MAX;
	uint32_t t183 = 0U;

    t183 = (((x881>x882)-x883)/x884);

    if (t183 != 0U) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x885 = 1896994423U;
	uint32_t x886 = UINT32_MAX;
	volatile uint64_t x887 = UINT64_MAX;
	int16_t x888 = INT16_MAX;
	static volatile uint64_t t184 = 8128LLU;

    t184 = (((x885>x886)-x887)/x888);

    if (t184 != 0LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x889 = -1;
	uint32_t x890 = UINT32_MAX;
	int16_t x891 = INT16_MAX;
	static volatile int32_t t185 = -29752;

    t185 = (((x889>x890)-x891)/x892);

    if (t185 != -128) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x897 = 8986554509920LLU;
	int64_t x898 = INT64_MIN;
	int32_t x899 = INT32_MAX;
	int16_t x900 = INT16_MIN;
	volatile int32_t t186 = -787895;

    t186 = (((x897>x898)-x899)/x900);

    if (t186 != 65535) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x901 = INT64_MIN;
	uint8_t x902 = 48U;
	uint64_t x903 = 5597324795544LLU;
	uint16_t x904 = UINT16_MAX;
	volatile uint64_t t187 = 5518567LLU;

    t187 = (((x901>x902)-x903)/x904);

    if (t187 != 281479186333787LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x905 = UINT8_MAX;
	volatile uint64_t x906 = 624272770427054LLU;
	static uint32_t x907 = 42288U;
	volatile int64_t t188 = 2664216LL;

    t188 = (((x905>x906)-x907)/x908);

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x913 = INT64_MIN;
	int8_t x914 = INT8_MIN;
	static int8_t x915 = INT8_MIN;
	uint64_t x916 = UINT64_MAX;
	volatile uint64_t t189 = 11LLU;

    t189 = (((x913>x914)-x915)/x916);

    if (t189 != 0LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint8_t x917 = 0U;
	int64_t x918 = INT64_MAX;
	uint32_t x919 = 108U;

    t190 = (((x917>x918)-x919)/x920);

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x921 = INT32_MIN;
	static int8_t x923 = -1;
	int16_t x924 = INT16_MIN;
	volatile int32_t t191 = -816170815;

    t191 = (((x921>x922)-x923)/x924);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x925 = -1LL;
	int8_t x926 = INT8_MIN;
	int16_t x927 = -5;
	int8_t x928 = 3;
	volatile int32_t t192 = 11665643;

    t192 = (((x925>x926)-x927)/x928);

    if (t192 != 2) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile int32_t x934 = INT32_MIN;
	int8_t x936 = -1;

    t193 = (((x933>x934)-x935)/x936);

    if (t193 != INT32_MAX) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x938 = 2716U;
	static int32_t x939 = 28093637;
	static int32_t t194 = 7;

    t194 = (((x937>x938)-x939)/x940);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x941 = UINT64_MAX;
	uint8_t x942 = UINT8_MAX;
	int16_t x943 = INT16_MIN;
	static uint64_t x944 = 5518887780515548LLU;
	static volatile uint64_t t195 = 291710976LLU;

    t195 = (((x941>x942)-x943)/x944);

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int8_t x945 = INT8_MIN;
	int8_t x946 = -1;
	int8_t x947 = -1;
	volatile int32_t t196 = -1;

    t196 = (((x945>x946)-x947)/x948);

    if (t196 != -1) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x950 = -1LL;
	int32_t x951 = INT32_MAX;
	int16_t x952 = -1;
	volatile int32_t t197 = INT32_MAX;

    t197 = (((x949>x950)-x951)/x952);

    if (t197 != INT32_MAX) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x953 = 2U;
	int8_t x954 = INT8_MAX;
	static int32_t x955 = INT32_MAX;
	uint8_t x956 = 121U;
	volatile int32_t t198 = -1840;

    t198 = (((x953>x954)-x955)/x956);

    if (t198 != -17747798) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x958 = -1;
	int32_t x959 = 1020290;
	uint32_t x960 = 13U;

    t199 = (((x957>x958)-x959)/x960);

    if (t199 != 330303615U) { NG(); } else { ; }
	
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

