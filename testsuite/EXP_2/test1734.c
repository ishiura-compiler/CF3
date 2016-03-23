
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

static int32_t x4 = -1694;
static uint8_t x8 = 74U;
static uint32_t t3 = 76U;
int32_t x17 = INT32_MAX;
volatile uint32_t x24 = UINT32_MAX;
uint32_t t5 = 100U;
static int8_t x25 = INT8_MIN;
volatile int32_t x26 = INT32_MAX;
int32_t x32 = -226;
volatile uint64_t x36 = 1428LLU;
volatile int32_t x42 = INT32_MIN;
int16_t x48 = INT16_MAX;
static uint8_t x57 = 3U;
int8_t x60 = INT8_MIN;
static volatile int32_t t15 = 1046787;
uint32_t x65 = 6U;
uint32_t t16 = 3U;
volatile int32_t x73 = INT32_MIN;
static uint64_t x82 = 828916346086772025LLU;
int8_t x84 = INT8_MAX;
static int8_t x86 = INT8_MIN;
uint64_t x88 = UINT64_MAX;
static volatile uint16_t x89 = 1739U;
int16_t x91 = -1;
uint64_t x94 = 7LLU;
int8_t x98 = INT8_MIN;
volatile uint8_t x103 = 4U;
static int32_t x111 = -15686;
int16_t x114 = -1;
static int32_t x117 = INT32_MIN;
static int16_t x118 = -1;
static volatile uint64_t x120 = UINT64_MAX;
uint64_t t29 = 13656439835LLU;
static int64_t x122 = 1LL;
int16_t x128 = -2;
uint64_t x134 = 95952908586667LLU;
int32_t t35 = -38069079;
uint64_t x153 = UINT64_MAX;
uint8_t x154 = 9U;
int16_t x156 = INT16_MAX;
int64_t x161 = INT64_MIN;
static int8_t x163 = 3;
static volatile int32_t t43 = 777328435;
int16_t x183 = INT16_MIN;
static volatile uint32_t x186 = 1U;
static int8_t x192 = INT8_MAX;
uint8_t x196 = 4U;
uint16_t x208 = 4385U;
int32_t t52 = 1;
int16_t x220 = 718;
int16_t x224 = -1;
uint32_t x230 = 1335991248U;
int64_t t57 = 522LL;
volatile int64_t x234 = INT64_MAX;
volatile int16_t x235 = INT16_MIN;
uint16_t x236 = UINT16_MAX;
int8_t x238 = -1;
static int64_t x241 = INT64_MIN;
static uint64_t x254 = 10260356LLU;
uint64_t x255 = 4554957630633130902LLU;
static volatile int32_t x258 = INT32_MIN;
static uint16_t x262 = UINT16_MAX;
volatile int8_t x264 = INT8_MIN;
volatile int64_t t66 = -5943048574220885LL;
uint8_t x269 = 58U;
volatile uint8_t x270 = UINT8_MAX;
static int64_t x273 = 153772319987652323LL;
static int64_t x277 = -9LL;
static int16_t x279 = -1832;
int8_t x280 = INT8_MIN;
static int32_t t71 = 12534;
volatile int64_t t72 = -201253611LL;
int16_t x298 = -398;
int8_t x300 = -5;
int16_t x302 = INT16_MIN;
volatile int16_t x306 = -752;
int64_t x309 = -107749492137LL;
uint16_t x310 = 12084U;
volatile uint32_t x322 = 138274587U;
volatile uint8_t x325 = 108U;
uint16_t x326 = UINT16_MAX;
static int8_t x327 = -1;
int64_t x329 = INT64_MIN;
volatile int8_t x331 = INT8_MIN;
static volatile uint16_t x337 = 2U;
volatile int32_t t84 = 4195071;
uint64_t t87 = 18573415238124707LLU;
volatile int16_t x355 = -1;
static uint16_t x356 = 12561U;
volatile int64_t x359 = 102107543803LL;
int8_t x361 = INT8_MAX;
static uint32_t x363 = UINT32_MAX;
volatile int8_t x368 = INT8_MIN;
int32_t t91 = 435;
volatile uint8_t x369 = 72U;
int64_t x372 = INT64_MIN;
int64_t x375 = 1974437865804LL;
int32_t t94 = 790921;
static int16_t x381 = INT16_MAX;
int64_t x383 = -1LL;
uint32_t x389 = 671875151U;
static volatile int32_t x393 = INT32_MIN;
int8_t x407 = INT8_MIN;
int16_t x411 = -1;
int8_t x419 = INT8_MAX;
int8_t x422 = -1;
int64_t x423 = -1LL;
int16_t x424 = INT16_MIN;
uint8_t x435 = UINT8_MAX;
uint8_t x437 = 95U;
static uint8_t x439 = 14U;
int32_t x443 = -1;
int8_t x444 = INT8_MIN;
volatile uint64_t t110 = 2LLU;
int8_t x445 = INT8_MIN;
int16_t x464 = INT16_MAX;
uint8_t x466 = 36U;
int16_t x469 = -26;
uint64_t x470 = UINT64_MAX;
static int32_t t117 = 19217;
int64_t x475 = INT64_MIN;
int64_t t118 = 587542197574864LL;
uint32_t x494 = 317U;
uint64_t x497 = 2507791467830939LLU;
static uint16_t x499 = 6U;
int32_t x502 = -807072363;
static int16_t x504 = 2602;
static int64_t t127 = 220763946LL;
static int16_t x515 = 4643;
static int64_t t128 = -51083558017228LL;
volatile uint32_t t130 = 24U;
static int64_t x530 = INT64_MIN;
volatile int8_t x531 = INT8_MIN;
int8_t x536 = INT8_MAX;
uint64_t t133 = 961825046198027LLU;
volatile uint32_t t135 = 23075171U;
int16_t x546 = INT16_MAX;
static int32_t x549 = -1;
volatile int32_t x558 = -40586;
int64_t x571 = -1LL;
uint32_t x580 = 13926405U;
static volatile int32_t x586 = INT32_MAX;
int32_t t146 = -28;
uint64_t x592 = 34LLU;
static volatile int64_t t148 = 320793528791287LL;
int16_t x597 = INT16_MIN;
int16_t x598 = INT16_MIN;
uint32_t x600 = UINT32_MAX;
uint32_t t153 = 87U;
volatile uint64_t x624 = UINT64_MAX;
static uint64_t t155 = 109LLU;
static int16_t x628 = INT16_MIN;
volatile uint64_t x629 = 6191699LLU;
uint64_t t157 = 499219LLU;
volatile uint64_t x633 = UINT64_MAX;
volatile int32_t x634 = 31773;
int32_t x635 = -3582;
int64_t x636 = 14LL;
volatile uint64_t t158 = 7759138613LLU;
static uint64_t x639 = 9798609999293748LLU;
int32_t x646 = -1;
volatile uint32_t x655 = UINT32_MAX;
volatile int8_t x660 = INT8_MIN;
volatile uint16_t x673 = UINT16_MAX;
static int16_t x674 = 3;
int16_t x675 = -1;
static uint16_t x679 = UINT16_MAX;
int16_t x681 = 0;
uint64_t x682 = UINT64_MAX;
static uint8_t x685 = UINT8_MAX;
uint32_t x686 = 117U;
uint32_t x689 = 39898U;
uint16_t x695 = UINT16_MAX;
static int8_t x697 = -1;
volatile uint64_t x699 = UINT64_MAX;
volatile int32_t t174 = -5073;
static int64_t x701 = -1LL;
int16_t x713 = INT16_MIN;
static volatile int64_t x717 = INT64_MIN;
volatile int16_t x719 = -7;
int64_t x722 = INT64_MIN;
int64_t x724 = INT64_MIN;
int16_t x726 = -1;
int16_t x727 = INT16_MIN;
volatile int32_t t183 = 0;
uint8_t x749 = 8U;
uint8_t x752 = 20U;
uint8_t x754 = 0U;
int64_t x759 = -6LL;
uint32_t x760 = 1604U;
uint32_t x771 = 63528U;
int8_t x774 = INT8_MIN;
uint16_t x775 = 40U;
volatile int16_t x776 = -10004;
volatile int64_t t195 = -55LL;
static int64_t t197 = 4504452396498135LL;
volatile int64_t t198 = 0LL;
int64_t x797 = INT64_MAX;
int16_t x799 = INT16_MIN;


void f0(void) {
    	volatile uint8_t x1 = UINT8_MAX;
	int16_t x2 = INT16_MIN;
	int32_t x3 = INT32_MIN;
	int32_t t0 = -19;

    t0 = ((x1&(x2>x3))&x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x5 = 99948228765488LL;
	int64_t x6 = INT64_MAX;
	volatile int64_t x7 = -159050301075046683LL;
	volatile int64_t t1 = 683997115493LL;

    t1 = ((x5&(x6>x7))&x8);

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = 2LL;
	volatile int16_t x10 = INT16_MIN;
	int64_t x11 = INT64_MIN;
	uint32_t x12 = 5U;
	volatile int64_t t2 = -145774LL;

    t2 = ((x9&(x10>x11))&x12);

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x13 = UINT32_MAX;
	uint8_t x14 = UINT8_MAX;
	int8_t x15 = -1;
	int32_t x16 = -499304428;

    t3 = ((x13&(x14>x15))&x16);

    if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x18 = 741;
	static int32_t x19 = INT32_MAX;
	uint64_t x20 = 430LLU;
	uint64_t t4 = 871560577186787638LLU;

    t4 = ((x17&(x18>x19))&x20);

    if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x21 = UINT16_MAX;
	static int64_t x22 = 183243639446LL;
	int16_t x23 = INT16_MIN;

    t5 = ((x21&(x22>x23))&x24);

    if (t5 != 1U) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x27 = 1;
	uint16_t x28 = UINT16_MAX;
	int32_t t6 = 3097;

    t6 = ((x25&(x26>x27))&x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = INT64_MIN;
	volatile uint32_t x30 = 1864996U;
	uint32_t x31 = 16U;
	volatile int64_t t7 = -60477935911LL;

    t7 = ((x29&(x30>x31))&x32);

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int64_t x33 = INT64_MAX;
	static int8_t x34 = INT8_MIN;
	volatile int16_t x35 = -1;
	volatile uint64_t t8 = 295002LLU;

    t8 = ((x33&(x34>x35))&x36);

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint32_t x37 = 46U;
	int64_t x38 = -46823803LL;
	static int8_t x39 = -1;
	int64_t x40 = -1LL;
	volatile int64_t t9 = 224140291505LL;

    t9 = ((x37&(x38>x39))&x40);

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x41 = UINT16_MAX;
	int32_t x43 = -3472629;
	static uint64_t x44 = 1LLU;
	static uint64_t t10 = 2069057857741182003LLU;

    t10 = ((x41&(x42>x43))&x44);

    if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static int8_t x45 = INT8_MIN;
	static int32_t x46 = -1;
	int32_t x47 = INT32_MAX;
	volatile int32_t t11 = -37;

    t11 = ((x45&(x46>x47))&x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = INT32_MIN;
	int64_t x50 = -1LL;
	static int16_t x51 = 4;
	int16_t x52 = INT16_MAX;
	volatile int32_t t12 = 4353028;

    t12 = ((x49&(x50>x51))&x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x53 = INT64_MAX;
	static uint32_t x54 = UINT32_MAX;
	int32_t x55 = INT32_MIN;
	uint16_t x56 = 29U;
	volatile int64_t t13 = 122457LL;

    t13 = ((x53&(x54>x55))&x56);

    if (t13 != 1LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x58 = 46067696;
	int8_t x59 = INT8_MIN;
	volatile int32_t t14 = 3;

    t14 = ((x57&(x58>x59))&x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = INT16_MAX;
	int16_t x62 = INT16_MIN;
	volatile uint32_t x63 = 604062U;
	static int32_t x64 = 0;

    t15 = ((x61&(x62>x63))&x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int8_t x66 = INT8_MIN;
	int8_t x67 = INT8_MAX;
	volatile uint32_t x68 = 10617556U;

    t16 = ((x65&(x66>x67))&x68);

    if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x69 = 9;
	int64_t x70 = -1LL;
	volatile int16_t x71 = INT16_MIN;
	static uint32_t x72 = 11511963U;
	volatile uint32_t t17 = 1522077196U;

    t17 = ((x69&(x70>x71))&x72);

    if (t17 != 1U) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x74 = 11;
	static int8_t x75 = INT8_MAX;
	int16_t x76 = 4;
	int32_t t18 = -10128;

    t18 = ((x73&(x74>x75))&x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = INT64_MIN;
	int16_t x78 = INT16_MIN;
	static int16_t x79 = -3;
	static uint64_t x80 = UINT64_MAX;
	uint64_t t19 = 2145191460427017LLU;

    t19 = ((x77&(x78>x79))&x80);

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = 12;
	volatile uint8_t x83 = 29U;
	int32_t t20 = -39203;

    t20 = ((x81&(x82>x83))&x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x85 = 28U;
	static int32_t x87 = INT32_MIN;
	uint64_t t21 = 1971211822385543522LLU;

    t21 = ((x85&(x86>x87))&x88);

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x90 = INT64_MAX;
	volatile int64_t x92 = INT64_MAX;
	static int64_t t22 = 63LL;

    t22 = ((x89&(x90>x91))&x92);

    if (t22 != 1LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x93 = INT16_MIN;
	uint32_t x95 = 309U;
	int64_t x96 = -1LL;
	int64_t t23 = -368LL;

    t23 = ((x93&(x94>x95))&x96);

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = 5;
	static int8_t x99 = INT8_MIN;
	volatile uint64_t x100 = UINT64_MAX;
	uint64_t t24 = 26920427042178138LLU;

    t24 = ((x97&(x98>x99))&x100);

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static int64_t x101 = -184647389336715LL;
	static volatile int64_t x102 = -1LL;
	int64_t x104 = -514222912851515136LL;
	volatile int64_t t25 = 206LL;

    t25 = ((x101&(x102>x103))&x104);

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = 149539605;
	uint64_t x106 = UINT64_MAX;
	uint16_t x107 = 27U;
	static int8_t x108 = INT8_MIN;
	int32_t t26 = -12283;

    t26 = ((x105&(x106>x107))&x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x109 = 50U;
	int16_t x110 = INT16_MAX;
	uint32_t x112 = 1U;
	uint32_t t27 = 7247U;

    t27 = ((x109&(x110>x111))&x112);

    if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x113 = INT8_MIN;
	volatile int8_t x115 = 0;
	int32_t x116 = -127651599;
	static int32_t t28 = 7;

    t28 = ((x113&(x114>x115))&x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x119 = INT16_MIN;

    t29 = ((x117&(x118>x119))&x120);

    if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x121 = INT64_MIN;
	int8_t x123 = -2;
	volatile uint64_t x124 = 1LLU;
	uint64_t t30 = 0LLU;

    t30 = ((x121&(x122>x123))&x124);

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static int64_t x125 = 11346882587887911LL;
	int16_t x126 = 26;
	int8_t x127 = -1;
	volatile int64_t t31 = 122051454547LL;

    t31 = ((x125&(x126>x127))&x128);

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint8_t x129 = UINT8_MAX;
	uint32_t x130 = 58U;
	int8_t x131 = -1;
	volatile int8_t x132 = 1;
	volatile int32_t t32 = -2;

    t32 = ((x129&(x130>x131))&x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x133 = 1702373442360177LLU;
	int32_t x135 = INT32_MIN;
	int32_t x136 = INT32_MIN;
	uint64_t t33 = 6921499265LLU;

    t33 = ((x133&(x134>x135))&x136);

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x137 = 21LLU;
	int8_t x138 = INT8_MAX;
	int64_t x139 = -1LL;
	static int8_t x140 = INT8_MIN;
	static uint64_t t34 = 125LLU;

    t34 = ((x137&(x138>x139))&x140);

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int32_t x141 = 1;
	uint32_t x142 = 32525U;
	uint16_t x143 = UINT16_MAX;
	uint8_t x144 = 44U;

    t35 = ((x141&(x142>x143))&x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int8_t x145 = 3;
	int64_t x146 = -27263121429457LL;
	int16_t x147 = -1;
	static int8_t x148 = INT8_MAX;
	int32_t t36 = -30168719;

    t36 = ((x145&(x146>x147))&x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint16_t x149 = 188U;
	uint64_t x150 = 3648546752561284705LLU;
	int16_t x151 = INT16_MIN;
	uint16_t x152 = UINT16_MAX;
	int32_t t37 = 31;

    t37 = ((x149&(x150>x151))&x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x155 = INT64_MAX;
	static uint64_t t38 = 117690914297590LLU;

    t38 = ((x153&(x154>x155))&x156);

    if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x157 = INT64_MAX;
	int32_t x158 = 160589173;
	int64_t x159 = INT64_MAX;
	uint32_t x160 = 0U;
	volatile int64_t t39 = 471562121477976659LL;

    t39 = ((x157&(x158>x159))&x160);

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint8_t x162 = UINT8_MAX;
	int32_t x164 = -1;
	volatile int64_t t40 = 24702LL;

    t40 = ((x161&(x162>x163))&x164);

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x165 = INT64_MIN;
	int8_t x166 = -1;
	uint32_t x167 = 213588861U;
	int16_t x168 = -854;
	volatile int64_t t41 = 419619123877129LL;

    t41 = ((x165&(x166>x167))&x168);

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x169 = INT16_MIN;
	static int16_t x170 = INT16_MIN;
	uint64_t x171 = 177523565440251LLU;
	static int32_t x172 = -188616;
	volatile int32_t t42 = -1;

    t42 = ((x169&(x170>x171))&x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x173 = INT32_MIN;
	int16_t x174 = INT16_MAX;
	uint8_t x175 = UINT8_MAX;
	int8_t x176 = -1;

    t43 = ((x173&(x174>x175))&x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = INT64_MIN;
	int32_t x178 = INT32_MAX;
	int32_t x179 = INT32_MIN;
	static int32_t x180 = -24587;
	int64_t t44 = 2170977722562643223LL;

    t44 = ((x177&(x178>x179))&x180);

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = -1LL;
	int64_t x182 = INT64_MIN;
	static int16_t x184 = INT16_MIN;
	static volatile int64_t t45 = 141LL;

    t45 = ((x181&(x182>x183))&x184);

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x185 = INT64_MAX;
	static int16_t x187 = INT16_MIN;
	volatile int8_t x188 = INT8_MAX;
	static volatile int64_t t46 = -3154048584LL;

    t46 = ((x185&(x186>x187))&x188);

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x189 = 3031623U;
	int64_t x190 = -1LL;
	int16_t x191 = 232;
	volatile uint32_t t47 = 358U;

    t47 = ((x189&(x190>x191))&x192);

    if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint64_t x193 = 17770189823735LLU;
	static int64_t x194 = 8800806851012581LL;
	int32_t x195 = 900;
	volatile uint64_t t48 = 982LLU;

    t48 = ((x193&(x194>x195))&x196);

    if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int64_t x197 = -1LL;
	volatile int64_t x198 = INT64_MAX;
	static uint16_t x199 = 259U;
	uint32_t x200 = 12U;
	volatile int64_t t49 = 163LL;

    t49 = ((x197&(x198>x199))&x200);

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint32_t x201 = 6202817U;
	static volatile int32_t x202 = -1;
	static int64_t x203 = -46854669LL;
	volatile int16_t x204 = -1;
	uint32_t t50 = 1760101U;

    t50 = ((x201&(x202>x203))&x204);

    if (t50 != 1U) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x205 = INT16_MAX;
	volatile uint32_t x206 = UINT32_MAX;
	uint32_t x207 = 598822438U;
	int32_t t51 = -608870;

    t51 = ((x205&(x206>x207))&x208);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x209 = 1414;
	volatile int16_t x210 = 3370;
	static int64_t x211 = INT64_MIN;
	volatile uint16_t x212 = 4588U;

    t52 = ((x209&(x210>x211))&x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x213 = -63;
	uint32_t x214 = 513161U;
	int32_t x215 = -76;
	uint32_t x216 = 3046U;
	static volatile uint32_t t53 = 3437215U;

    t53 = ((x213&(x214>x215))&x216);

    if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x217 = UINT16_MAX;
	int8_t x218 = -1;
	int16_t x219 = 0;
	int32_t t54 = 1014266075;

    t54 = ((x217&(x218>x219))&x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x221 = 4U;
	uint16_t x222 = UINT16_MAX;
	uint32_t x223 = 412027U;
	volatile int32_t t55 = -273224;

    t55 = ((x221&(x222>x223))&x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x225 = INT32_MAX;
	int32_t x226 = INT32_MIN;
	volatile uint64_t x227 = 5105862829360527LLU;
	volatile uint64_t x228 = 61493677654980099LLU;
	static volatile uint64_t t56 = 46359LLU;

    t56 = ((x225&(x226>x227))&x228);

    if (t56 != 1LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x229 = -1LL;
	static int64_t x231 = -1LL;
	int8_t x232 = INT8_MIN;

    t57 = ((x229&(x230>x231))&x232);

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x233 = 12;
	volatile int32_t t58 = -856349;

    t58 = ((x233&(x234>x235))&x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x237 = 13285317268498304LL;
	int8_t x239 = INT8_MAX;
	int16_t x240 = -1;
	static volatile int64_t t59 = 137877LL;

    t59 = ((x237&(x238>x239))&x240);

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x242 = 11;
	static volatile uint32_t x243 = 184109190U;
	volatile uint64_t x244 = 82999271225LLU;
	volatile uint64_t t60 = 344259466549578089LLU;

    t60 = ((x241&(x242>x243))&x244);

    if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint64_t x245 = 104983572650885LLU;
	static uint32_t x246 = UINT32_MAX;
	static volatile int16_t x247 = INT16_MAX;
	int8_t x248 = INT8_MIN;
	uint64_t t61 = 79498328624750LLU;

    t61 = ((x245&(x246>x247))&x248);

    if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x249 = -1LL;
	int8_t x250 = INT8_MIN;
	uint64_t x251 = 117490LLU;
	uint32_t x252 = 17753U;
	int64_t t62 = 3444856449270772486LL;

    t62 = ((x249&(x250>x251))&x252);

    if (t62 != 1LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x253 = 4LL;
	int8_t x256 = INT8_MIN;
	static int64_t t63 = 78930320964LL;

    t63 = ((x253&(x254>x255))&x256);

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static int16_t x257 = INT16_MIN;
	int16_t x259 = INT16_MAX;
	uint32_t x260 = 781505014U;
	uint32_t t64 = 18818090U;

    t64 = ((x257&(x258>x259))&x260);

    if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x261 = 24U;
	static uint32_t x263 = 1019928704U;
	volatile int32_t t65 = 5;

    t65 = ((x261&(x262>x263))&x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x265 = INT64_MIN;
	int64_t x266 = INT64_MIN;
	int64_t x267 = INT64_MIN;
	int32_t x268 = 103905517;

    t66 = ((x265&(x266>x267))&x268);

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile uint16_t x271 = 3857U;
	static volatile int16_t x272 = INT16_MAX;
	volatile int32_t t67 = -354507957;

    t67 = ((x269&(x270>x271))&x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int32_t x274 = -1;
	volatile int64_t x275 = -1LL;
	int8_t x276 = INT8_MIN;
	volatile int64_t t68 = 5LL;

    t68 = ((x273&(x274>x275))&x276);

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x278 = 15;
	volatile int64_t t69 = -1532710179222LL;

    t69 = ((x277&(x278>x279))&x280);

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x281 = 0;
	int32_t x282 = 2287193;
	int64_t x283 = 150023830896481LL;
	int64_t x284 = 1346976322810357872LL;
	static volatile int64_t t70 = -961317865690580LL;

    t70 = ((x281&(x282>x283))&x284);

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x285 = 15U;
	int8_t x286 = 15;
	uint8_t x287 = 1U;
	int8_t x288 = INT8_MAX;

    t71 = ((x285&(x286>x287))&x288);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x289 = INT64_MAX;
	static uint16_t x290 = 28391U;
	int64_t x291 = 39LL;
	int8_t x292 = INT8_MAX;

    t72 = ((x289&(x290>x291))&x292);

    if (t72 != 1LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x293 = 0;
	uint8_t x294 = 1U;
	uint16_t x295 = UINT16_MAX;
	volatile uint64_t x296 = 992128553746873LLU;
	volatile uint64_t t73 = 108053076939094LLU;

    t73 = ((x293&(x294>x295))&x296);

    if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int32_t x297 = INT32_MIN;
	static int8_t x299 = INT8_MIN;
	int32_t t74 = -5254156;

    t74 = ((x297&(x298>x299))&x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x301 = -1;
	int64_t x303 = INT64_MAX;
	volatile uint16_t x304 = 68U;
	volatile int32_t t75 = 0;

    t75 = ((x301&(x302>x303))&x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint8_t x305 = 57U;
	uint8_t x307 = 0U;
	static int64_t x308 = INT64_MAX;
	int64_t t76 = 109LL;

    t76 = ((x305&(x306>x307))&x308);

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x311 = INT16_MIN;
	int8_t x312 = INT8_MIN;
	int64_t t77 = -2841224905972326LL;

    t77 = ((x309&(x310>x311))&x312);

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x313 = -106;
	volatile int64_t x314 = -41389640LL;
	int32_t x315 = -820361;
	int8_t x316 = 1;
	static volatile int32_t t78 = -26;

    t78 = ((x313&(x314>x315))&x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x317 = 109U;
	int16_t x318 = INT16_MIN;
	static int32_t x319 = -11;
	uint16_t x320 = 1259U;
	int32_t t79 = 454;

    t79 = ((x317&(x318>x319))&x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x321 = 31520U;
	volatile int64_t x323 = INT64_MAX;
	volatile int16_t x324 = -1;
	uint32_t t80 = 974U;

    t80 = ((x321&(x322>x323))&x324);

    if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x328 = -1;
	int32_t t81 = -581487413;

    t81 = ((x325&(x326>x327))&x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x330 = -1;
	static int32_t x332 = INT32_MIN;
	int64_t t82 = -7465LL;

    t82 = ((x329&(x330>x331))&x332);

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x333 = UINT32_MAX;
	int8_t x334 = 0;
	static uint64_t x335 = 173027090644432212LLU;
	static int8_t x336 = -12;
	volatile uint32_t t83 = 2485U;

    t83 = ((x333&(x334>x335))&x336);

    if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint16_t x338 = UINT16_MAX;
	uint64_t x339 = 0LLU;
	int8_t x340 = -1;

    t84 = ((x337&(x338>x339))&x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x341 = 701875LLU;
	volatile int64_t x342 = -56657524LL;
	static int64_t x343 = 506665407268938LL;
	int64_t x344 = -1LL;
	uint64_t t85 = 257079830748535946LLU;

    t85 = ((x341&(x342>x343))&x344);

    if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x345 = -13;
	static volatile uint32_t x346 = UINT32_MAX;
	volatile int8_t x347 = -1;
	int64_t x348 = INT64_MAX;
	int64_t t86 = -837790139LL;

    t86 = ((x345&(x346>x347))&x348);

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x349 = -1;
	int16_t x350 = INT16_MIN;
	int8_t x351 = INT8_MIN;
	uint64_t x352 = 400877806LLU;

    t87 = ((x349&(x350>x351))&x352);

    if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x353 = INT32_MIN;
	int32_t x354 = -1286559;
	int32_t t88 = 224854128;

    t88 = ((x353&(x354>x355))&x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint32_t x357 = 48140U;
	uint16_t x358 = 371U;
	int64_t x360 = -1LL;
	volatile int64_t t89 = 7920135LL;

    t89 = ((x357&(x358>x359))&x360);

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x362 = INT16_MIN;
	static int16_t x364 = INT16_MIN;
	volatile int32_t t90 = 194;

    t90 = ((x361&(x362>x363))&x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x365 = INT16_MIN;
	int64_t x366 = INT64_MIN;
	int8_t x367 = -14;

    t91 = ((x365&(x366>x367))&x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile int16_t x370 = -1;
	uint8_t x371 = 10U;
	int64_t t92 = -38090383046317008LL;

    t92 = ((x369&(x370>x371))&x372);

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x373 = INT16_MAX;
	int16_t x374 = -1;
	int32_t x376 = 12;
	volatile int32_t t93 = 983;

    t93 = ((x373&(x374>x375))&x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint16_t x377 = UINT16_MAX;
	int16_t x378 = INT16_MIN;
	static int32_t x379 = -1;
	volatile int16_t x380 = INT16_MIN;

    t94 = ((x377&(x378>x379))&x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int64_t x382 = 122LL;
	int8_t x384 = 0;
	static volatile int32_t t95 = -398380374;

    t95 = ((x381&(x382>x383))&x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x385 = INT64_MIN;
	volatile int32_t x386 = INT32_MIN;
	int16_t x387 = 2179;
	volatile int16_t x388 = INT16_MIN;
	int64_t t96 = -48746806LL;

    t96 = ((x385&(x386>x387))&x388);

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x390 = INT8_MIN;
	volatile int64_t x391 = 370LL;
	uint16_t x392 = UINT16_MAX;
	uint32_t t97 = 840829998U;

    t97 = ((x389&(x390>x391))&x392);

    if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x394 = 3896U;
	uint8_t x395 = 33U;
	int32_t x396 = -137638879;
	volatile int32_t t98 = 10;

    t98 = ((x393&(x394>x395))&x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x397 = INT16_MIN;
	static int32_t x398 = INT32_MIN;
	int16_t x399 = -1;
	int16_t x400 = 1706;
	int32_t t99 = 11463;

    t99 = ((x397&(x398>x399))&x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint64_t x401 = 16LLU;
	volatile int32_t x402 = -13203;
	int64_t x403 = -916740120LL;
	uint16_t x404 = 61U;
	uint64_t t100 = 0LLU;

    t100 = ((x401&(x402>x403))&x404);

    if (t100 != 0LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x405 = UINT8_MAX;
	int8_t x406 = -12;
	uint16_t x408 = UINT16_MAX;
	int32_t t101 = -3994;

    t101 = ((x405&(x406>x407))&x408);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x409 = INT8_MIN;
	uint8_t x410 = 2U;
	int16_t x412 = 1826;
	volatile int32_t t102 = 20;

    t102 = ((x409&(x410>x411))&x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x413 = -126110974651LL;
	uint8_t x414 = 53U;
	static volatile int64_t x415 = INT64_MIN;
	volatile uint64_t x416 = UINT64_MAX;
	uint64_t t103 = 654890027390156960LLU;

    t103 = ((x413&(x414>x415))&x416);

    if (t103 != 1LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint32_t x417 = UINT32_MAX;
	int32_t x418 = INT32_MIN;
	volatile int32_t x420 = -455;
	static uint32_t t104 = 1223805U;

    t104 = ((x417&(x418>x419))&x420);

    if (t104 != 0U) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x421 = 0U;
	static volatile int32_t t105 = -566;

    t105 = ((x421&(x422>x423))&x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x425 = INT16_MIN;
	volatile uint64_t x426 = UINT64_MAX;
	static volatile uint16_t x427 = 1U;
	int32_t x428 = -46;
	int32_t t106 = -2157838;

    t106 = ((x425&(x426>x427))&x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x429 = INT64_MIN;
	volatile uint16_t x430 = 30U;
	volatile uint16_t x431 = UINT16_MAX;
	static uint32_t x432 = 841784U;
	int64_t t107 = 51526771439LL;

    t107 = ((x429&(x430>x431))&x432);

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x433 = UINT64_MAX;
	volatile uint16_t x434 = UINT16_MAX;
	uint8_t x436 = 10U;
	uint64_t t108 = 3325LLU;

    t108 = ((x433&(x434>x435))&x436);

    if (t108 != 0LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x438 = 78598985992376LLU;
	int16_t x440 = -1;
	volatile int32_t t109 = 936;

    t109 = ((x437&(x438>x439))&x440);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x441 = UINT64_MAX;
	int8_t x442 = INT8_MIN;

    t110 = ((x441&(x442>x443))&x444);

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	static int64_t x446 = INT64_MIN;
	uint8_t x447 = 64U;
	int16_t x448 = INT16_MAX;
	static volatile int32_t t111 = -887;

    t111 = ((x445&(x446>x447))&x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint64_t x449 = 20926648836LLU;
	static int64_t x450 = INT64_MIN;
	static volatile int16_t x451 = -1;
	int8_t x452 = INT8_MIN;
	volatile uint64_t t112 = 1597478767852920763LLU;

    t112 = ((x449&(x450>x451))&x452);

    if (t112 != 0LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x453 = 464256110LLU;
	volatile int32_t x454 = -1;
	int64_t x455 = -1LL;
	volatile uint8_t x456 = 14U;
	volatile uint64_t t113 = 505299LLU;

    t113 = ((x453&(x454>x455))&x456);

    if (t113 != 0LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x457 = 0;
	uint64_t x458 = 10886LLU;
	int64_t x459 = -1183330220085LL;
	static int8_t x460 = INT8_MIN;
	volatile int32_t t114 = 4939696;

    t114 = ((x457&(x458>x459))&x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x461 = INT32_MAX;
	int8_t x462 = -1;
	int64_t x463 = -1LL;
	volatile int32_t t115 = -3329724;

    t115 = ((x461&(x462>x463))&x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x465 = UINT8_MAX;
	int16_t x467 = -1;
	int16_t x468 = -1;
	volatile int32_t t116 = 437;

    t116 = ((x465&(x466>x467))&x468);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static int32_t x471 = 36543;
	uint16_t x472 = 12394U;

    t117 = ((x469&(x470>x471))&x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x473 = 2602458LL;
	int64_t x474 = -9092162306954LL;
	uint8_t x476 = UINT8_MAX;

    t118 = ((x473&(x474>x475))&x476);

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x477 = -1;
	int16_t x478 = INT16_MAX;
	int32_t x479 = 84578457;
	static uint64_t x480 = UINT64_MAX;
	uint64_t t119 = 1056107466LLU;

    t119 = ((x477&(x478>x479))&x480);

    if (t119 != 0LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x481 = -15;
	volatile int8_t x482 = INT8_MAX;
	static int8_t x483 = INT8_MAX;
	uint64_t x484 = UINT64_MAX;
	volatile uint64_t t120 = 3771655376368LLU;

    t120 = ((x481&(x482>x483))&x484);

    if (t120 != 0LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x485 = 5U;
	static volatile int16_t x486 = -1;
	int16_t x487 = INT16_MAX;
	int8_t x488 = INT8_MIN;
	volatile int32_t t121 = -132107545;

    t121 = ((x485&(x486>x487))&x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int16_t x489 = INT16_MAX;
	int32_t x490 = INT32_MAX;
	int32_t x491 = 14;
	int8_t x492 = INT8_MAX;
	volatile int32_t t122 = -746256;

    t122 = ((x489&(x490>x491))&x492);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x493 = 3532406U;
	uint8_t x495 = UINT8_MAX;
	volatile int64_t x496 = -23547317535588113LL;
	volatile int64_t t123 = 6026064994LL;

    t123 = ((x493&(x494>x495))&x496);

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x498 = INT8_MIN;
	uint8_t x500 = 17U;
	volatile uint64_t t124 = 30875306800776LLU;

    t124 = ((x497&(x498>x499))&x500);

    if (t124 != 0LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x501 = 11U;
	uint64_t x503 = UINT64_MAX;
	volatile int32_t t125 = -123261;

    t125 = ((x501&(x502>x503))&x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x505 = 29210U;
	int8_t x506 = 0;
	int32_t x507 = -3767082;
	int16_t x508 = INT16_MIN;
	static volatile int32_t t126 = 1;

    t126 = ((x505&(x506>x507))&x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x509 = INT8_MIN;
	uint16_t x510 = UINT16_MAX;
	uint16_t x511 = 15874U;
	int64_t x512 = INT64_MAX;

    t127 = ((x509&(x510>x511))&x512);

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x513 = -55511LL;
	static volatile int16_t x514 = 1;
	int32_t x516 = INT32_MIN;

    t128 = ((x513&(x514>x515))&x516);

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	static int64_t x517 = -1705764408042LL;
	uint16_t x518 = UINT16_MAX;
	static int32_t x519 = 48;
	uint16_t x520 = UINT16_MAX;
	int64_t t129 = 1998LL;

    t129 = ((x517&(x518>x519))&x520);

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint32_t x521 = 7329097U;
	int64_t x522 = INT64_MAX;
	int64_t x523 = 50LL;
	uint16_t x524 = 15404U;

    t130 = ((x521&(x522>x523))&x524);

    if (t130 != 0U) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int32_t x525 = INT32_MIN;
	uint8_t x526 = 22U;
	static int16_t x527 = INT16_MIN;
	int32_t x528 = -251822;
	volatile int32_t t131 = 14868853;

    t131 = ((x525&(x526>x527))&x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int16_t x529 = -1;
	static int32_t x532 = -1;
	static volatile int32_t t132 = 6826639;

    t132 = ((x529&(x530>x531))&x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x533 = UINT64_MAX;
	int64_t x534 = -1LL;
	uint64_t x535 = 485LLU;

    t133 = ((x533&(x534>x535))&x536);

    if (t133 != 1LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x537 = INT64_MAX;
	volatile int16_t x538 = -1;
	volatile int16_t x539 = -3909;
	volatile int32_t x540 = 986844770;
	static volatile int64_t t134 = 7932565LL;

    t134 = ((x537&(x538>x539))&x540);

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile uint32_t x541 = 20431973U;
	static int64_t x542 = INT64_MIN;
	uint16_t x543 = 25U;
	int16_t x544 = -1;

    t135 = ((x541&(x542>x543))&x544);

    if (t135 != 0U) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x545 = INT64_MIN;
	int32_t x547 = -70;
	int8_t x548 = 3;
	volatile int64_t t136 = 255926575463126LL;

    t136 = ((x545&(x546>x547))&x548);

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x550 = INT64_MAX;
	int64_t x551 = -1LL;
	static int8_t x552 = -1;
	int32_t t137 = 3281849;

    t137 = ((x549&(x550>x551))&x552);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x553 = 7967;
	int8_t x554 = -1;
	static int32_t x555 = INT32_MIN;
	static uint64_t x556 = UINT64_MAX;
	uint64_t t138 = 156470294016678705LLU;

    t138 = ((x553&(x554>x555))&x556);

    if (t138 != 1LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x557 = 816963LLU;
	uint32_t x559 = 214888U;
	static volatile int16_t x560 = -1;
	volatile uint64_t t139 = 555LLU;

    t139 = ((x557&(x558>x559))&x560);

    if (t139 != 1LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x561 = 35;
	int8_t x562 = INT8_MIN;
	int8_t x563 = INT8_MIN;
	static uint8_t x564 = 25U;
	int32_t t140 = -2162;

    t140 = ((x561&(x562>x563))&x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x565 = INT8_MAX;
	volatile int16_t x566 = 2;
	uint8_t x567 = 2U;
	uint32_t x568 = 254U;
	uint32_t t141 = 1U;

    t141 = ((x565&(x566>x567))&x568);

    if (t141 != 0U) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x569 = -171818;
	int8_t x570 = -1;
	int64_t x572 = INT64_MAX;
	volatile int64_t t142 = 3LL;

    t142 = ((x569&(x570>x571))&x572);

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	static int32_t x573 = -873776;
	int32_t x574 = INT32_MIN;
	int16_t x575 = INT16_MIN;
	uint64_t x576 = 1LLU;
	volatile uint64_t t143 = 10761567129804151LLU;

    t143 = ((x573&(x574>x575))&x576);

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x577 = INT32_MIN;
	volatile int64_t x578 = 1977983028825LL;
	int64_t x579 = 12LL;
	uint32_t t144 = 38965U;

    t144 = ((x577&(x578>x579))&x580);

    if (t144 != 0U) { NG(); } else { ; }
	
}

void f145(void) {
    	static int64_t x581 = INT64_MAX;
	volatile uint32_t x582 = UINT32_MAX;
	int64_t x583 = -1984975709LL;
	int32_t x584 = INT32_MAX;
	int64_t t145 = 748859475492902LL;

    t145 = ((x581&(x582>x583))&x584);

    if (t145 != 1LL) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x585 = INT16_MIN;
	volatile uint16_t x587 = UINT16_MAX;
	int16_t x588 = INT16_MAX;

    t146 = ((x585&(x586>x587))&x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint8_t x589 = 14U;
	volatile int8_t x590 = -1;
	static uint32_t x591 = UINT32_MAX;
	volatile uint64_t t147 = 132LLU;

    t147 = ((x589&(x590>x591))&x592);

    if (t147 != 0LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x593 = INT64_MIN;
	int64_t x594 = INT64_MIN;
	static uint64_t x595 = 1608046245LLU;
	int64_t x596 = INT64_MIN;

    t148 = ((x593&(x594>x595))&x596);

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x599 = INT32_MIN;
	uint32_t t149 = 291284U;

    t149 = ((x597&(x598>x599))&x600);

    if (t149 != 0U) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x601 = INT32_MIN;
	uint16_t x602 = 1U;
	int32_t x603 = INT32_MAX;
	int8_t x604 = -10;
	int32_t t150 = 170430;

    t150 = ((x601&(x602>x603))&x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint16_t x605 = UINT16_MAX;
	uint8_t x606 = UINT8_MAX;
	int8_t x607 = 0;
	static int8_t x608 = INT8_MIN;
	static volatile int32_t t151 = -12822;

    t151 = ((x605&(x606>x607))&x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int8_t x609 = -1;
	int32_t x610 = -281190;
	int8_t x611 = -1;
	static int32_t x612 = INT32_MAX;
	static volatile int32_t t152 = -207644;

    t152 = ((x609&(x610>x611))&x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x613 = 2U;
	volatile int64_t x614 = -1LL;
	int16_t x615 = INT16_MIN;
	uint32_t x616 = UINT32_MAX;

    t153 = ((x613&(x614>x615))&x616);

    if (t153 != 0U) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x617 = INT16_MIN;
	static int16_t x618 = -1;
	volatile int8_t x619 = INT8_MAX;
	int8_t x620 = 1;
	static int32_t t154 = -1;

    t154 = ((x617&(x618>x619))&x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x621 = INT64_MIN;
	volatile uint32_t x622 = 123874U;
	uint64_t x623 = UINT64_MAX;

    t155 = ((x621&(x622>x623))&x624);

    if (t155 != 0LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x625 = 297;
	uint8_t x626 = 6U;
	volatile uint8_t x627 = 3U;
	int32_t t156 = -996;

    t156 = ((x625&(x626>x627))&x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x630 = 924876664LLU;
	volatile int8_t x631 = INT8_MIN;
	int16_t x632 = -1;

    t157 = ((x629&(x630>x631))&x632);

    if (t157 != 0LLU) { NG(); } else { ; }
	
}

void f158(void) {
    

    t158 = ((x633&(x634>x635))&x636);

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int8_t x637 = INT8_MAX;
	uint32_t x638 = 368678U;
	uint32_t x640 = UINT32_MAX;
	static uint32_t t159 = 366U;

    t159 = ((x637&(x638>x639))&x640);

    if (t159 != 0U) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x641 = UINT32_MAX;
	int8_t x642 = INT8_MIN;
	int64_t x643 = INT64_MIN;
	static int8_t x644 = -1;
	uint32_t t160 = 14U;

    t160 = ((x641&(x642>x643))&x644);

    if (t160 != 1U) { NG(); } else { ; }
	
}

void f161(void) {
    	static int8_t x645 = INT8_MAX;
	int8_t x647 = 46;
	static int64_t x648 = INT64_MAX;
	volatile int64_t t161 = -116449LL;

    t161 = ((x645&(x646>x647))&x648);

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile int16_t x649 = INT16_MIN;
	uint64_t x650 = 129492LLU;
	static int32_t x651 = -1;
	volatile uint64_t x652 = 3745873983971LLU;
	uint64_t t162 = 1674436844664196434LLU;

    t162 = ((x649&(x650>x651))&x652);

    if (t162 != 0LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	static int16_t x653 = 891;
	uint64_t x654 = UINT64_MAX;
	volatile int32_t x656 = INT32_MIN;
	int32_t t163 = 0;

    t163 = ((x653&(x654>x655))&x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x657 = 458506342U;
	int64_t x658 = -1LL;
	volatile int8_t x659 = 1;
	volatile uint32_t t164 = 803573U;

    t164 = ((x657&(x658>x659))&x660);

    if (t164 != 0U) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x661 = -1;
	volatile uint32_t x662 = 20707U;
	int16_t x663 = INT16_MIN;
	static int32_t x664 = -120171;
	volatile int32_t t165 = 1423;

    t165 = ((x661&(x662>x663))&x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x665 = 144694519LL;
	int64_t x666 = INT64_MIN;
	uint32_t x667 = 1189U;
	int64_t x668 = INT64_MIN;
	volatile int64_t t166 = -431839828LL;

    t166 = ((x665&(x666>x667))&x668);

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x669 = INT64_MIN;
	static volatile int8_t x670 = -1;
	int8_t x671 = -1;
	static volatile uint16_t x672 = 1U;
	int64_t t167 = 903768980LL;

    t167 = ((x669&(x670>x671))&x672);

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x676 = 30U;
	int32_t t168 = -3;

    t168 = ((x673&(x674>x675))&x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x677 = INT16_MIN;
	static int64_t x678 = INT64_MAX;
	int64_t x680 = INT64_MAX;
	int64_t t169 = 244542LL;

    t169 = ((x677&(x678>x679))&x680);

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint8_t x683 = 8U;
	int64_t x684 = -48545290088777846LL;
	volatile int64_t t170 = 111398LL;

    t170 = ((x681&(x682>x683))&x684);

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x687 = INT16_MIN;
	uint16_t x688 = 1910U;
	int32_t t171 = -157361563;

    t171 = ((x685&(x686>x687))&x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x690 = -1;
	static uint16_t x691 = UINT16_MAX;
	int16_t x692 = -1;
	uint32_t t172 = 36U;

    t172 = ((x689&(x690>x691))&x692);

    if (t172 != 0U) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int64_t x693 = INT64_MAX;
	volatile int64_t x694 = INT64_MIN;
	int8_t x696 = -11;
	static volatile int64_t t173 = -18LL;

    t173 = ((x693&(x694>x695))&x696);

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x698 = 47U;
	volatile int32_t x700 = INT32_MIN;

    t174 = ((x697&(x698>x699))&x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x702 = -57;
	static int8_t x703 = INT8_MAX;
	int32_t x704 = INT32_MAX;
	volatile int64_t t175 = -12441928724389908LL;

    t175 = ((x701&(x702>x703))&x704);

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x705 = 1;
	static uint8_t x706 = UINT8_MAX;
	int16_t x707 = INT16_MIN;
	static int32_t x708 = INT32_MAX;
	int32_t t176 = -2752985;

    t176 = ((x705&(x706>x707))&x708);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x709 = 5;
	int8_t x710 = INT8_MAX;
	static uint16_t x711 = UINT16_MAX;
	volatile int16_t x712 = INT16_MAX;
	int32_t t177 = -14;

    t177 = ((x709&(x710>x711))&x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x714 = INT16_MIN;
	uint8_t x715 = 6U;
	uint32_t x716 = 17686520U;
	uint32_t t178 = 1375502U;

    t178 = ((x713&(x714>x715))&x716);

    if (t178 != 0U) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x718 = UINT16_MAX;
	int16_t x720 = INT16_MAX;
	volatile int64_t t179 = 50899319328190LL;

    t179 = ((x717&(x718>x719))&x720);

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int16_t x721 = INT16_MIN;
	volatile uint32_t x723 = 26U;
	int64_t t180 = 10930074406902531LL;

    t180 = ((x721&(x722>x723))&x724);

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x725 = -1;
	int8_t x728 = INT8_MIN;
	volatile int32_t t181 = -258520279;

    t181 = ((x725&(x726>x727))&x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x729 = -1LL;
	static volatile int8_t x730 = INT8_MIN;
	static int64_t x731 = -1LL;
	volatile uint32_t x732 = UINT32_MAX;
	int64_t t182 = 368LL;

    t182 = ((x729&(x730>x731))&x732);

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x733 = -1;
	volatile int64_t x734 = INT64_MIN;
	int8_t x735 = INT8_MIN;
	uint16_t x736 = UINT16_MAX;

    t183 = ((x733&(x734>x735))&x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x737 = -1;
	volatile uint32_t x738 = UINT32_MAX;
	static int64_t x739 = INT64_MIN;
	volatile uint64_t x740 = UINT64_MAX;
	uint64_t t184 = 558033851391603LLU;

    t184 = ((x737&(x738>x739))&x740);

    if (t184 != 1LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int32_t x741 = INT32_MIN;
	static volatile uint64_t x742 = UINT64_MAX;
	int64_t x743 = INT64_MIN;
	int8_t x744 = 1;
	volatile int32_t t185 = 264872;

    t185 = ((x741&(x742>x743))&x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x745 = INT32_MIN;
	int8_t x746 = INT8_MAX;
	int16_t x747 = INT16_MAX;
	volatile uint16_t x748 = 6214U;
	volatile int32_t t186 = 2;

    t186 = ((x745&(x746>x747))&x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint64_t x750 = 130LLU;
	int32_t x751 = INT32_MIN;
	volatile int32_t t187 = 7894272;

    t187 = ((x749&(x750>x751))&x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x753 = UINT32_MAX;
	static volatile int32_t x755 = -1001;
	static int16_t x756 = INT16_MAX;
	uint32_t t188 = 4078U;

    t188 = ((x753&(x754>x755))&x756);

    if (t188 != 1U) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x757 = UINT8_MAX;
	volatile int32_t x758 = INT32_MIN;
	volatile uint32_t t189 = 29U;

    t189 = ((x757&(x758>x759))&x760);

    if (t189 != 0U) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x761 = -1LL;
	uint16_t x762 = 1717U;
	uint64_t x763 = UINT64_MAX;
	static int16_t x764 = -1;
	volatile int64_t t190 = -13108LL;

    t190 = ((x761&(x762>x763))&x764);

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint32_t x765 = UINT32_MAX;
	static int8_t x766 = INT8_MIN;
	int32_t x767 = INT32_MIN;
	int8_t x768 = INT8_MIN;
	volatile uint32_t t191 = 4U;

    t191 = ((x765&(x766>x767))&x768);

    if (t191 != 0U) { NG(); } else { ; }
	
}

void f192(void) {
    	static int32_t x769 = INT32_MIN;
	static int64_t x770 = 12931603870543LL;
	static int16_t x772 = INT16_MIN;
	volatile int32_t t192 = 1;

    t192 = ((x769&(x770>x771))&x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x773 = -1;
	volatile int32_t t193 = 474948;

    t193 = ((x773&(x774>x775))&x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x777 = UINT8_MAX;
	volatile uint8_t x778 = UINT8_MAX;
	volatile uint16_t x779 = 1U;
	static uint32_t x780 = 12479U;
	uint32_t t194 = 1285U;

    t194 = ((x777&(x778>x779))&x780);

    if (t194 != 1U) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x781 = INT16_MIN;
	int8_t x782 = -14;
	int8_t x783 = -1;
	static int64_t x784 = -1LL;

    t195 = ((x781&(x782>x783))&x784);

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x785 = 1;
	static volatile int32_t x786 = INT32_MIN;
	int8_t x787 = -4;
	int16_t x788 = INT16_MIN;
	static int32_t t196 = 100332;

    t196 = ((x785&(x786>x787))&x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int16_t x789 = INT16_MIN;
	int64_t x790 = INT64_MIN;
	int8_t x791 = -10;
	static int64_t x792 = 15138LL;

    t197 = ((x789&(x790>x791))&x792);

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x793 = INT64_MIN;
	static uint16_t x794 = UINT16_MAX;
	static uint64_t x795 = UINT64_MAX;
	static volatile int32_t x796 = INT32_MIN;

    t198 = ((x793&(x794>x795))&x796);

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x798 = 13911820;
	int32_t x800 = -1033;
	volatile int64_t t199 = -514013261898602938LL;

    t199 = ((x797&(x798>x799))&x800);

    if (t199 != 1LL) { NG(); } else { ; }
	
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

