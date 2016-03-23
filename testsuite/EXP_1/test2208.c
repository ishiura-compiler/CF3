
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

uint8_t x6 = 9U;
int8_t x24 = 0;
volatile uint32_t x25 = UINT32_MAX;
int64_t x31 = 20142857904318LL;
volatile int32_t t8 = -542;
int32_t t9 = -1580797;
int64_t x42 = INT64_MIN;
static volatile int32_t x45 = INT32_MAX;
static volatile uint64_t x46 = 7835096LLU;
uint8_t x47 = UINT8_MAX;
volatile uint32_t x50 = UINT32_MAX;
volatile uint8_t x64 = 0U;
static uint64_t x67 = 2612072392222LLU;
static int32_t t16 = 0;
int16_t x69 = -12;
int8_t x83 = 2;
int32_t t20 = 8011983;
volatile int32_t x91 = INT32_MAX;
int32_t x96 = INT32_MIN;
volatile int32_t t23 = -6;
static int64_t x102 = -182515729992676492LL;
static volatile int32_t t24 = 526910;
uint64_t x122 = 6904LLU;
int64_t x126 = 42LL;
uint16_t x129 = 4339U;
volatile int32_t t30 = 96572657;
int16_t x138 = -1;
uint8_t x148 = 35U;
static volatile int8_t x153 = -1;
int32_t t37 = 8079;
uint64_t x163 = 79455777LLU;
static int64_t x171 = -1LL;
int64_t x176 = -1948LL;
static volatile int8_t x181 = 2;
int32_t t43 = 24236911;
static int64_t x200 = -1LL;
int32_t t51 = 111196050;
int32_t x235 = 6;
uint16_t x237 = 127U;
int8_t x242 = 0;
static int32_t x246 = -1;
int32_t t56 = -1313619;
int8_t x256 = -1;
static volatile int32_t t59 = 93215;
volatile uint8_t x270 = 4U;
volatile int32_t x273 = 1368;
uint32_t x283 = 346154U;
static int16_t x320 = INT16_MIN;
volatile int32_t t72 = 16047049;
volatile int32_t x323 = -1;
uint16_t x324 = 1U;
volatile int32_t t75 = -363199084;
int16_t x335 = 1;
int32_t x338 = INT32_MIN;
volatile int64_t x343 = -1LL;
volatile uint16_t x344 = 7871U;
static volatile uint8_t x357 = UINT8_MAX;
static int16_t x362 = INT16_MAX;
uint16_t x365 = UINT16_MAX;
int8_t x369 = 0;
static int8_t x383 = -10;
int32_t t89 = -120256;
int16_t x395 = INT16_MAX;
static int8_t x407 = -1;
static int16_t x413 = INT16_MAX;
int16_t x421 = INT16_MIN;
volatile uint8_t x423 = 7U;
int16_t x425 = INT16_MIN;
int8_t x437 = INT8_MIN;
static int8_t x438 = 0;
int8_t x445 = INT8_MAX;
static int8_t x453 = -1;
int64_t x455 = INT64_MIN;
uint64_t x459 = 11682838400LLU;
int32_t t108 = -1548;
uint8_t x467 = 14U;
static int8_t x470 = INT8_MIN;
static int32_t x471 = INT32_MIN;
int64_t x478 = 10514506238744066LL;
uint64_t x483 = 27749680260027078LLU;
uint32_t x484 = 318964U;
int32_t t114 = -144584;
int64_t x490 = INT64_MAX;
int64_t x495 = INT64_MIN;
int32_t t116 = 49522;
int32_t x497 = -1;
uint32_t x499 = 7947168U;
volatile int32_t t117 = -1561672;
static volatile int32_t t120 = 7911369;
int8_t x514 = 3;
uint32_t x517 = 154U;
int32_t t122 = 9744;
int32_t x521 = 2541573;
int16_t x523 = -1;
int32_t t123 = -49;
int64_t x530 = INT64_MIN;
int32_t t125 = -321168;
static int32_t x535 = INT32_MIN;
uint16_t x540 = 25893U;
volatile int32_t t127 = 111176986;
uint16_t x545 = 24744U;
int8_t x549 = INT8_MIN;
static int16_t x551 = -23;
static int64_t x560 = 1285375200047933LL;
static int8_t x563 = INT8_MIN;
static volatile int8_t x565 = INT8_MIN;
static int16_t x566 = INT16_MAX;
int8_t x569 = INT8_MIN;
static int16_t x570 = -1;
static int32_t x571 = 4152187;
int8_t x576 = INT8_MIN;
int32_t t136 = 374;
uint64_t x578 = UINT64_MAX;
uint16_t x583 = 10841U;
int64_t x584 = -1LL;
volatile uint8_t x592 = UINT8_MAX;
int8_t x594 = INT8_MAX;
uint16_t x597 = 1879U;
static volatile int64_t x598 = INT64_MAX;
static volatile int16_t x599 = INT16_MIN;
int16_t x602 = INT16_MIN;
uint16_t x604 = 11910U;
volatile int32_t t144 = -126240;
uint64_t x611 = UINT64_MAX;
static volatile int32_t x620 = INT32_MIN;
int8_t x627 = -31;
int8_t x628 = INT8_MAX;
volatile uint32_t x629 = UINT32_MAX;
int8_t x630 = INT8_MIN;
volatile int8_t x631 = INT8_MAX;
uint16_t x635 = 21550U;
static uint64_t x639 = UINT64_MAX;
volatile int16_t x650 = INT16_MAX;
uint8_t x652 = 15U;
int32_t t154 = 566529;
uint16_t x656 = 109U;
int8_t x658 = INT8_MAX;
static int8_t x662 = 15;
static int8_t x664 = INT8_MAX;
static int32_t t158 = 42;
int8_t x680 = INT8_MIN;
uint64_t x683 = 140231LLU;
static volatile int64_t x693 = INT64_MIN;
volatile int32_t t164 = -1117;
volatile int64_t x705 = 336816485229676938LL;
int32_t t167 = 598360;
int64_t x712 = INT64_MAX;
volatile int32_t t168 = -2618;
volatile int8_t x714 = INT8_MAX;
static int32_t t169 = -2058598;
int32_t t170 = 4955830;
static volatile int16_t x731 = INT16_MAX;
volatile int16_t x736 = INT16_MIN;
static uint32_t x742 = 151339879U;
volatile uint32_t x745 = UINT32_MAX;
int32_t x746 = INT32_MIN;
int64_t x748 = INT64_MAX;
int32_t x751 = INT32_MIN;
volatile uint64_t x756 = 44258613964804LLU;
volatile int32_t t179 = -84;
volatile int32_t t181 = -3;
uint64_t x765 = 442792863922LLU;
int32_t t183 = 1729;
volatile uint16_t x775 = 2958U;
uint32_t x780 = 879U;
int32_t t185 = -586;
int64_t x783 = INT64_MIN;
uint32_t x784 = 281U;
volatile int32_t t186 = -17001;
int8_t x786 = INT8_MIN;
int32_t t187 = 24;
uint16_t x791 = 482U;
int16_t x797 = INT16_MAX;
static volatile int32_t t191 = -1273014;
volatile int8_t x812 = 15;
static int8_t x819 = INT8_MIN;
static int64_t x824 = INT64_MAX;
int16_t x827 = INT16_MAX;
int64_t x828 = -1LL;
volatile int32_t t198 = -1724051;
int16_t x835 = INT16_MIN;


void f0(void) {
    	int64_t x1 = INT64_MIN;
	int8_t x2 = INT8_MIN;
	static volatile int64_t x3 = INT64_MIN;
	int16_t x4 = INT16_MIN;
	int32_t t0 = -66;

    t0 = (((x1&x2)/x3)<=x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x5 = 6;
	static volatile int64_t x7 = INT64_MIN;
	volatile int64_t x8 = 26LL;
	static volatile int32_t t1 = 16007645;

    t1 = (((x5&x6)/x7)<=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint16_t x9 = 0U;
	volatile int16_t x10 = 13;
	uint16_t x11 = 7U;
	uint32_t x12 = 870U;
	volatile int32_t t2 = -686650620;

    t2 = (((x9&x10)/x11)<=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x13 = UINT8_MAX;
	uint32_t x14 = UINT32_MAX;
	int16_t x15 = INT16_MIN;
	int64_t x16 = 2287111389LL;
	int32_t t3 = 47089;

    t3 = (((x13&x14)/x15)<=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MAX;
	int64_t x18 = -1LL;
	uint32_t x19 = UINT32_MAX;
	uint16_t x20 = 1266U;
	static int32_t t4 = -481;

    t4 = (((x17&x18)/x19)<=x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x21 = 54065LLU;
	int64_t x22 = INT64_MAX;
	int8_t x23 = INT8_MIN;
	int32_t t5 = 43;

    t5 = (((x21&x22)/x23)<=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static int64_t x26 = INT64_MIN;
	int8_t x27 = INT8_MAX;
	int16_t x28 = INT16_MIN;
	int32_t t6 = -26366;

    t6 = (((x25&x26)/x27)<=x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = INT16_MIN;
	static volatile int8_t x30 = -1;
	volatile int32_t x32 = INT32_MAX;
	volatile int32_t t7 = 1326;

    t7 = (((x29&x30)/x31)<=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x33 = 71U;
	uint32_t x34 = UINT32_MAX;
	volatile uint16_t x35 = UINT16_MAX;
	volatile int16_t x36 = INT16_MAX;

    t8 = (((x33&x34)/x35)<=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x37 = INT16_MIN;
	volatile int32_t x38 = INT32_MIN;
	int32_t x39 = 43;
	uint64_t x40 = 459541499700LLU;

    t9 = (((x37&x38)/x39)<=x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int32_t x41 = -350;
	int32_t x43 = INT32_MIN;
	int8_t x44 = INT8_MIN;
	volatile int32_t t10 = -8;

    t10 = (((x41&x42)/x43)<=x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x48 = 6701U;
	volatile int32_t t11 = 1;

    t11 = (((x45&x46)/x47)<=x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x49 = UINT32_MAX;
	int8_t x51 = INT8_MIN;
	int8_t x52 = 61;
	int32_t t12 = -14;

    t12 = (((x49&x50)/x51)<=x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = -24520694;
	static volatile uint16_t x54 = UINT16_MAX;
	uint64_t x55 = UINT64_MAX;
	static int16_t x56 = -1;
	int32_t t13 = -96558398;

    t13 = (((x53&x54)/x55)<=x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = INT8_MIN;
	uint16_t x58 = 497U;
	static volatile uint16_t x59 = UINT16_MAX;
	int32_t x60 = INT32_MIN;
	volatile int32_t t14 = -5022;

    t14 = (((x57&x58)/x59)<=x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint32_t x61 = 174U;
	int32_t x62 = -1;
	static volatile int8_t x63 = INT8_MAX;
	volatile int32_t t15 = 5;

    t15 = (((x61&x62)/x63)<=x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = -1;
	int8_t x66 = INT8_MAX;
	int64_t x68 = INT64_MIN;

    t16 = (((x65&x66)/x67)<=x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x70 = INT8_MIN;
	uint16_t x71 = UINT16_MAX;
	int8_t x72 = INT8_MIN;
	int32_t t17 = 118;

    t17 = (((x69&x70)/x71)<=x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = -350013988;
	int16_t x74 = INT16_MIN;
	int64_t x75 = INT64_MAX;
	int32_t x76 = INT32_MAX;
	volatile int32_t t18 = 0;

    t18 = (((x73&x74)/x75)<=x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x77 = 87468478446LLU;
	volatile int8_t x78 = -1;
	static volatile int16_t x79 = INT16_MIN;
	static int64_t x80 = -60LL;
	int32_t t19 = 3609;

    t19 = (((x77&x78)/x79)<=x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static int64_t x81 = 42779806LL;
	uint64_t x82 = 123376199922246087LLU;
	volatile int8_t x84 = -63;

    t20 = (((x81&x82)/x83)<=x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x89 = -131842855;
	static uint64_t x90 = 3896864032LLU;
	int32_t x92 = 29932;
	volatile int32_t t21 = 1974;

    t21 = (((x89&x90)/x91)<=x92);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x93 = 1U;
	int64_t x94 = INT64_MAX;
	uint32_t x95 = UINT32_MAX;
	volatile int32_t t22 = -3192;

    t22 = (((x93&x94)/x95)<=x96);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x97 = 2107505753044LLU;
	int64_t x98 = -1LL;
	uint32_t x99 = 2052U;
	static int64_t x100 = -3592067866513880LL;

    t23 = (((x97&x98)/x99)<=x100);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int16_t x101 = -1;
	uint32_t x103 = 1727966302U;
	volatile int64_t x104 = -1LL;

    t24 = (((x101&x102)/x103)<=x104);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x105 = -1;
	static volatile uint32_t x106 = UINT32_MAX;
	volatile uint16_t x107 = 5U;
	int32_t x108 = INT32_MAX;
	volatile int32_t t25 = -11641444;

    t25 = (((x105&x106)/x107)<=x108);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static int64_t x113 = -1LL;
	int16_t x114 = INT16_MAX;
	uint32_t x115 = UINT32_MAX;
	volatile uint16_t x116 = 75U;
	volatile int32_t t26 = 175;

    t26 = (((x113&x114)/x115)<=x116);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x117 = 5U;
	int8_t x118 = -24;
	int16_t x119 = INT16_MAX;
	volatile uint32_t x120 = UINT32_MAX;
	volatile int32_t t27 = -682;

    t27 = (((x117&x118)/x119)<=x120);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int64_t x121 = INT64_MAX;
	uint8_t x123 = 1U;
	static uint64_t x124 = 10156983800507107LLU;
	volatile int32_t t28 = -587;

    t28 = (((x121&x122)/x123)<=x124);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x125 = INT64_MIN;
	uint64_t x127 = 1LLU;
	uint8_t x128 = 27U;
	volatile int32_t t29 = 723131800;

    t29 = (((x125&x126)/x127)<=x128);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile uint64_t x130 = 252LLU;
	volatile uint8_t x131 = 6U;
	int8_t x132 = -1;

    t30 = (((x129&x130)/x131)<=x132);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile uint16_t x133 = 1601U;
	int64_t x134 = -1LL;
	volatile int16_t x135 = INT16_MIN;
	int32_t x136 = INT32_MIN;
	int32_t t31 = 7633928;

    t31 = (((x133&x134)/x135)<=x136);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x137 = INT64_MAX;
	volatile uint16_t x139 = 14051U;
	static volatile int64_t x140 = -1LL;
	volatile int32_t t32 = -92751;

    t32 = (((x137&x138)/x139)<=x140);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x141 = -1;
	volatile int16_t x142 = INT16_MAX;
	uint8_t x143 = UINT8_MAX;
	volatile uint8_t x144 = UINT8_MAX;
	int32_t t33 = 160;

    t33 = (((x141&x142)/x143)<=x144);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x145 = -1;
	int16_t x146 = -1;
	volatile uint16_t x147 = 5992U;
	volatile int32_t t34 = 5273145;

    t34 = (((x145&x146)/x147)<=x148);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint64_t x149 = UINT64_MAX;
	uint64_t x150 = 6762LLU;
	int16_t x151 = INT16_MIN;
	int8_t x152 = 0;
	volatile int32_t t35 = -1;

    t35 = (((x149&x150)/x151)<=x152);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x154 = INT64_MIN;
	volatile uint8_t x155 = 20U;
	volatile int8_t x156 = 1;
	int32_t t36 = -748953;

    t36 = (((x153&x154)/x155)<=x156);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x157 = INT32_MIN;
	int16_t x158 = 582;
	int16_t x159 = INT16_MIN;
	volatile uint32_t x160 = UINT32_MAX;

    t37 = (((x157&x158)/x159)<=x160);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static int64_t x161 = INT64_MIN;
	int64_t x162 = 14899113230LL;
	static int8_t x164 = -1;
	volatile int32_t t38 = 25;

    t38 = (((x161&x162)/x163)<=x164);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x169 = INT16_MAX;
	static uint16_t x170 = 188U;
	int8_t x172 = INT8_MIN;
	volatile int32_t t39 = -1;

    t39 = (((x169&x170)/x171)<=x172);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint16_t x173 = 3U;
	int8_t x174 = -11;
	static int64_t x175 = INT64_MAX;
	int32_t t40 = -3;

    t40 = (((x173&x174)/x175)<=x176);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x177 = 1U;
	int16_t x178 = INT16_MAX;
	volatile uint32_t x179 = UINT32_MAX;
	int32_t x180 = INT32_MAX;
	volatile int32_t t41 = -21;

    t41 = (((x177&x178)/x179)<=x180);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x182 = INT8_MIN;
	static int8_t x183 = INT8_MIN;
	int8_t x184 = INT8_MIN;
	static volatile int32_t t42 = -2345080;

    t42 = (((x181&x182)/x183)<=x184);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint8_t x189 = UINT8_MAX;
	int8_t x190 = -1;
	int8_t x191 = INT8_MIN;
	int16_t x192 = INT16_MAX;

    t43 = (((x189&x190)/x191)<=x192);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x193 = -1;
	int16_t x194 = INT16_MIN;
	volatile int16_t x195 = INT16_MIN;
	uint8_t x196 = 32U;
	volatile int32_t t44 = 2;

    t44 = (((x193&x194)/x195)<=x196);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x197 = 8151991884196138LL;
	static int8_t x198 = INT8_MIN;
	static int16_t x199 = -1;
	volatile int32_t t45 = 1051;

    t45 = (((x197&x198)/x199)<=x200);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x201 = 21U;
	int16_t x202 = -1;
	int64_t x203 = -1LL;
	int16_t x204 = INT16_MAX;
	int32_t t46 = 476361;

    t46 = (((x201&x202)/x203)<=x204);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint32_t x205 = 95229U;
	int8_t x206 = INT8_MIN;
	int32_t x207 = INT32_MIN;
	uint8_t x208 = 0U;
	int32_t t47 = 9497;

    t47 = (((x205&x206)/x207)<=x208);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x209 = -1;
	uint64_t x210 = 23205053276569LLU;
	int32_t x211 = INT32_MIN;
	volatile int16_t x212 = INT16_MIN;
	static volatile int32_t t48 = 13735;

    t48 = (((x209&x210)/x211)<=x212);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static int16_t x213 = INT16_MAX;
	static int32_t x214 = INT32_MAX;
	static int64_t x215 = -1LL;
	uint64_t x216 = UINT64_MAX;
	int32_t t49 = -2199340;

    t49 = (((x213&x214)/x215)<=x216);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static int64_t x217 = -20177293LL;
	uint32_t x218 = 10310123U;
	int64_t x219 = 23864190319899LL;
	static uint8_t x220 = 5U;
	volatile int32_t t50 = -1;

    t50 = (((x217&x218)/x219)<=x220);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile int32_t x221 = INT32_MAX;
	uint32_t x222 = UINT32_MAX;
	uint16_t x223 = 3874U;
	uint64_t x224 = UINT64_MAX;

    t51 = (((x221&x222)/x223)<=x224);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint8_t x225 = UINT8_MAX;
	uint32_t x226 = 9949U;
	int16_t x227 = INT16_MIN;
	int64_t x228 = -14089674244LL;
	volatile int32_t t52 = 110593266;

    t52 = (((x225&x226)/x227)<=x228);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x233 = INT16_MAX;
	uint32_t x234 = UINT32_MAX;
	volatile int8_t x236 = INT8_MIN;
	int32_t t53 = 95598;

    t53 = (((x233&x234)/x235)<=x236);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x238 = INT64_MAX;
	int16_t x239 = INT16_MIN;
	int32_t x240 = -1;
	int32_t t54 = 7;

    t54 = (((x237&x238)/x239)<=x240);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x241 = INT32_MIN;
	static int32_t x243 = 118918505;
	uint8_t x244 = UINT8_MAX;
	volatile int32_t t55 = 29390;

    t55 = (((x241&x242)/x243)<=x244);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x245 = UINT8_MAX;
	volatile int16_t x247 = INT16_MAX;
	int32_t x248 = -1;

    t56 = (((x245&x246)/x247)<=x248);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x249 = INT8_MIN;
	int8_t x250 = INT8_MAX;
	static int64_t x251 = -1LL;
	uint32_t x252 = 1718690149U;
	volatile int32_t t57 = -425948;

    t57 = (((x249&x250)/x251)<=x252);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x253 = 14294612;
	static int8_t x254 = INT8_MAX;
	uint16_t x255 = 45U;
	volatile int32_t t58 = -53567764;

    t58 = (((x253&x254)/x255)<=x256);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x257 = -1;
	uint32_t x258 = 629601U;
	int32_t x259 = INT32_MAX;
	int32_t x260 = 0;

    t59 = (((x257&x258)/x259)<=x260);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint32_t x261 = 493U;
	static volatile int8_t x262 = INT8_MIN;
	int8_t x263 = -14;
	volatile int8_t x264 = -1;
	volatile int32_t t60 = 507825417;

    t60 = (((x261&x262)/x263)<=x264);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x269 = UINT64_MAX;
	uint64_t x271 = 293921LLU;
	int64_t x272 = 0LL;
	int32_t t61 = -151710076;

    t61 = (((x269&x270)/x271)<=x272);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x274 = INT32_MIN;
	static int64_t x275 = INT64_MIN;
	uint64_t x276 = 431212159115LLU;
	int32_t t62 = -6500;

    t62 = (((x273&x274)/x275)<=x276);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static int64_t x277 = INT64_MIN;
	int8_t x278 = INT8_MIN;
	volatile int8_t x279 = INT8_MIN;
	volatile int8_t x280 = INT8_MIN;
	static volatile int32_t t63 = 86163;

    t63 = (((x277&x278)/x279)<=x280);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int64_t x281 = -1LL;
	volatile uint8_t x282 = 51U;
	uint64_t x284 = 1746772210LLU;
	volatile int32_t t64 = 15999428;

    t64 = (((x281&x282)/x283)<=x284);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x285 = INT32_MIN;
	uint16_t x286 = 13897U;
	static volatile uint32_t x287 = UINT32_MAX;
	uint32_t x288 = 488571U;
	volatile int32_t t65 = 5688;

    t65 = (((x285&x286)/x287)<=x288);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x289 = -1LL;
	uint16_t x290 = 2U;
	volatile int8_t x291 = INT8_MAX;
	volatile uint64_t x292 = 5440178LLU;
	static int32_t t66 = -280;

    t66 = (((x289&x290)/x291)<=x292);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x293 = 157683189848720192LLU;
	int8_t x294 = INT8_MAX;
	int64_t x295 = -1LL;
	uint16_t x296 = 3254U;
	static int32_t t67 = 728252743;

    t67 = (((x293&x294)/x295)<=x296);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x301 = INT64_MIN;
	int16_t x302 = INT16_MAX;
	volatile int32_t x303 = -1;
	static int32_t x304 = INT32_MIN;
	int32_t t68 = -11137156;

    t68 = (((x301&x302)/x303)<=x304);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x305 = -1;
	volatile uint64_t x306 = 851LLU;
	uint8_t x307 = 9U;
	int16_t x308 = -1;
	int32_t t69 = 1;

    t69 = (((x305&x306)/x307)<=x308);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x309 = INT64_MIN;
	uint32_t x310 = 125880U;
	int64_t x311 = -1088516337114933158LL;
	int64_t x312 = INT64_MAX;
	int32_t t70 = -3;

    t70 = (((x309&x310)/x311)<=x312);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x313 = 5033739LLU;
	volatile int8_t x314 = INT8_MAX;
	uint16_t x315 = UINT16_MAX;
	int64_t x316 = INT64_MAX;
	volatile int32_t t71 = 505715797;

    t71 = (((x313&x314)/x315)<=x316);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint64_t x317 = 2786534LLU;
	uint64_t x318 = 1348598LLU;
	volatile int64_t x319 = INT64_MIN;

    t72 = (((x317&x318)/x319)<=x320);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x321 = INT8_MAX;
	int16_t x322 = INT16_MAX;
	int32_t t73 = -436;

    t73 = (((x321&x322)/x323)<=x324);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x325 = INT16_MIN;
	static uint32_t x326 = UINT32_MAX;
	static int16_t x327 = -7;
	int8_t x328 = 1;
	int32_t t74 = 0;

    t74 = (((x325&x326)/x327)<=x328);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint8_t x329 = 42U;
	int8_t x330 = 8;
	int32_t x331 = 7186;
	static volatile int16_t x332 = INT16_MIN;

    t75 = (((x329&x330)/x331)<=x332);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int32_t x333 = INT32_MIN;
	int8_t x334 = INT8_MAX;
	static uint32_t x336 = 14U;
	volatile int32_t t76 = 15;

    t76 = (((x333&x334)/x335)<=x336);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x337 = 0U;
	int64_t x339 = 5922403LL;
	static uint64_t x340 = UINT64_MAX;
	volatile int32_t t77 = -36602283;

    t77 = (((x337&x338)/x339)<=x340);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x341 = UINT64_MAX;
	uint64_t x342 = 30049119999603086LLU;
	int32_t t78 = 16591681;

    t78 = (((x341&x342)/x343)<=x344);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t x345 = -706052;
	uint64_t x346 = 15924LLU;
	int8_t x347 = INT8_MIN;
	uint64_t x348 = 2994638807627LLU;
	volatile int32_t t79 = -15;

    t79 = (((x345&x346)/x347)<=x348);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x349 = UINT8_MAX;
	int8_t x350 = INT8_MIN;
	int32_t x351 = INT32_MIN;
	int64_t x352 = 531377034108250283LL;
	volatile int32_t t80 = 54755;

    t80 = (((x349&x350)/x351)<=x352);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x353 = INT64_MIN;
	int32_t x354 = INT32_MIN;
	int16_t x355 = INT16_MIN;
	static int16_t x356 = -1;
	int32_t t81 = -950;

    t81 = (((x353&x354)/x355)<=x356);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x358 = UINT8_MAX;
	volatile uint16_t x359 = 1949U;
	static uint8_t x360 = 0U;
	int32_t t82 = -55;

    t82 = (((x357&x358)/x359)<=x360);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x361 = -1;
	int16_t x363 = INT16_MIN;
	int16_t x364 = 1;
	int32_t t83 = -49477;

    t83 = (((x361&x362)/x363)<=x364);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x366 = 12U;
	static int64_t x367 = -1LL;
	static int16_t x368 = -1;
	int32_t t84 = 19;

    t84 = (((x365&x366)/x367)<=x368);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x370 = INT64_MIN;
	int8_t x371 = -1;
	uint64_t x372 = 1LLU;
	volatile int32_t t85 = -243802;

    t85 = (((x369&x370)/x371)<=x372);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x373 = -458;
	int16_t x374 = -3;
	uint8_t x375 = 72U;
	volatile int16_t x376 = INT16_MAX;
	volatile int32_t t86 = -43;

    t86 = (((x373&x374)/x375)<=x376);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile int64_t x377 = -75494LL;
	volatile uint32_t x378 = UINT32_MAX;
	uint64_t x379 = UINT64_MAX;
	static int16_t x380 = -1;
	static int32_t t87 = -12999;

    t87 = (((x377&x378)/x379)<=x380);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x381 = INT32_MIN;
	int16_t x382 = INT16_MIN;
	int16_t x384 = -1;
	volatile int32_t t88 = 846081461;

    t88 = (((x381&x382)/x383)<=x384);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x385 = UINT32_MAX;
	volatile uint16_t x386 = 903U;
	static int64_t x387 = 694562LL;
	volatile int32_t x388 = INT32_MIN;

    t89 = (((x385&x386)/x387)<=x388);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x389 = INT64_MIN;
	int64_t x390 = INT64_MAX;
	uint64_t x391 = UINT64_MAX;
	uint8_t x392 = UINT8_MAX;
	volatile int32_t t90 = -171;

    t90 = (((x389&x390)/x391)<=x392);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x393 = 1;
	volatile int64_t x394 = -168209311557LL;
	int8_t x396 = -4;
	volatile int32_t t91 = 76;

    t91 = (((x393&x394)/x395)<=x396);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static int64_t x397 = INT64_MIN;
	volatile int8_t x398 = -1;
	uint32_t x399 = 59U;
	uint8_t x400 = 1U;
	volatile int32_t t92 = 0;

    t92 = (((x397&x398)/x399)<=x400);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static int16_t x401 = INT16_MIN;
	uint16_t x402 = 97U;
	int8_t x403 = INT8_MIN;
	volatile uint16_t x404 = UINT16_MAX;
	int32_t t93 = 16137589;

    t93 = (((x401&x402)/x403)<=x404);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint16_t x405 = 1944U;
	int64_t x406 = -1LL;
	int32_t x408 = INT32_MIN;
	volatile int32_t t94 = -164978;

    t94 = (((x405&x406)/x407)<=x408);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int32_t x409 = -1;
	static uint8_t x410 = 6U;
	int32_t x411 = -1;
	uint16_t x412 = 195U;
	int32_t t95 = -1;

    t95 = (((x409&x410)/x411)<=x412);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x414 = INT8_MIN;
	int64_t x415 = INT64_MIN;
	uint8_t x416 = 98U;
	int32_t t96 = 6098;

    t96 = (((x413&x414)/x415)<=x416);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int64_t x417 = 13169197543LL;
	volatile uint16_t x418 = 0U;
	int16_t x419 = INT16_MAX;
	static int32_t x420 = -1;
	static int32_t t97 = -805567;

    t97 = (((x417&x418)/x419)<=x420);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x422 = INT16_MIN;
	int16_t x424 = -45;
	volatile int32_t t98 = -85850972;

    t98 = (((x421&x422)/x423)<=x424);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint32_t x426 = 3052U;
	volatile uint8_t x427 = 122U;
	int64_t x428 = INT64_MAX;
	volatile int32_t t99 = -760;

    t99 = (((x425&x426)/x427)<=x428);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x429 = -780LL;
	int64_t x430 = -1LL;
	volatile uint32_t x431 = 23U;
	uint32_t x432 = 1393721U;
	static int32_t t100 = 0;

    t100 = (((x429&x430)/x431)<=x432);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x433 = 2U;
	uint64_t x434 = 17982050381208776LLU;
	uint8_t x435 = 29U;
	int32_t x436 = INT32_MAX;
	int32_t t101 = 37;

    t101 = (((x433&x434)/x435)<=x436);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x439 = INT16_MAX;
	int16_t x440 = -1;
	volatile int32_t t102 = 1;

    t102 = (((x437&x438)/x439)<=x440);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint16_t x441 = UINT16_MAX;
	int64_t x442 = INT64_MAX;
	int64_t x443 = -201151975517682LL;
	volatile uint8_t x444 = 20U;
	int32_t t103 = -974499518;

    t103 = (((x441&x442)/x443)<=x444);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x446 = INT16_MIN;
	volatile uint64_t x447 = 39055LLU;
	int64_t x448 = 1779678667649LL;
	volatile int32_t t104 = -793530780;

    t104 = (((x445&x446)/x447)<=x448);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int32_t x449 = -1;
	uint16_t x450 = 11847U;
	int32_t x451 = 944842359;
	int64_t x452 = -1LL;
	static volatile int32_t t105 = -5296;

    t105 = (((x449&x450)/x451)<=x452);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint8_t x454 = UINT8_MAX;
	volatile uint32_t x456 = UINT32_MAX;
	volatile int32_t t106 = -16628855;

    t106 = (((x453&x454)/x455)<=x456);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x457 = INT64_MIN;
	int64_t x458 = -1LL;
	int8_t x460 = INT8_MIN;
	static int32_t t107 = 1081022;

    t107 = (((x457&x458)/x459)<=x460);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int64_t x461 = INT64_MIN;
	int8_t x462 = INT8_MAX;
	int8_t x463 = INT8_MIN;
	int8_t x464 = -4;

    t108 = (((x461&x462)/x463)<=x464);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x465 = UINT16_MAX;
	static int16_t x466 = 7243;
	uint16_t x468 = UINT16_MAX;
	volatile int32_t t109 = 607016;

    t109 = (((x465&x466)/x467)<=x468);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile int8_t x469 = INT8_MIN;
	static int8_t x472 = INT8_MIN;
	int32_t t110 = 26470225;

    t110 = (((x469&x470)/x471)<=x472);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x473 = -1;
	static volatile int64_t x474 = INT64_MAX;
	uint64_t x475 = 104081677116229506LLU;
	static int8_t x476 = INT8_MIN;
	int32_t t111 = -28614058;

    t111 = (((x473&x474)/x475)<=x476);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x477 = -5602820269344LL;
	volatile int8_t x479 = -1;
	int8_t x480 = -1;
	int32_t t112 = -796621;

    t112 = (((x477&x478)/x479)<=x480);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint64_t x481 = 23948408LLU;
	uint16_t x482 = 5228U;
	volatile int32_t t113 = -507;

    t113 = (((x481&x482)/x483)<=x484);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x485 = -1;
	int32_t x486 = -1;
	int32_t x487 = INT32_MIN;
	volatile int32_t x488 = 1884730;

    t114 = (((x485&x486)/x487)<=x488);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x489 = 2017330203498534LLU;
	int64_t x491 = INT64_MIN;
	uint8_t x492 = 0U;
	volatile int32_t t115 = -490942;

    t115 = (((x489&x490)/x491)<=x492);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x493 = 1U;
	volatile int64_t x494 = 315LL;
	int32_t x496 = INT32_MIN;

    t116 = (((x493&x494)/x495)<=x496);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int64_t x498 = -1842741639LL;
	static volatile int16_t x500 = INT16_MIN;

    t117 = (((x497&x498)/x499)<=x500);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x501 = 1;
	int16_t x502 = -1;
	uint8_t x503 = 26U;
	int16_t x504 = -8;
	int32_t t118 = 17599;

    t118 = (((x501&x502)/x503)<=x504);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x505 = INT64_MIN;
	int64_t x506 = INT64_MAX;
	volatile uint32_t x507 = 19191012U;
	int32_t x508 = -1;
	int32_t t119 = -5;

    t119 = (((x505&x506)/x507)<=x508);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x509 = UINT32_MAX;
	static volatile uint64_t x510 = 8507055740166135LLU;
	int32_t x511 = INT32_MIN;
	static volatile int16_t x512 = 7;

    t120 = (((x509&x510)/x511)<=x512);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x513 = 3;
	volatile int32_t x515 = -1;
	static volatile int32_t x516 = INT32_MIN;
	int32_t t121 = 13287;

    t121 = (((x513&x514)/x515)<=x516);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x518 = INT32_MAX;
	int8_t x519 = INT8_MIN;
	uint32_t x520 = 1719417U;

    t122 = (((x517&x518)/x519)<=x520);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x522 = 1385;
	static int16_t x524 = INT16_MIN;

    t123 = (((x521&x522)/x523)<=x524);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint8_t x525 = 8U;
	volatile int64_t x526 = INT64_MAX;
	int64_t x527 = INT64_MAX;
	static uint8_t x528 = UINT8_MAX;
	volatile int32_t t124 = -2;

    t124 = (((x525&x526)/x527)<=x528);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint8_t x529 = UINT8_MAX;
	volatile int16_t x531 = -1;
	static int8_t x532 = 0;

    t125 = (((x529&x530)/x531)<=x532);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x533 = INT8_MAX;
	int8_t x534 = -1;
	uint16_t x536 = 4U;
	static int32_t t126 = 0;

    t126 = (((x533&x534)/x535)<=x536);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x537 = 3U;
	volatile int32_t x538 = 21;
	static int64_t x539 = 1899665901956159306LL;

    t127 = (((x537&x538)/x539)<=x540);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int8_t x541 = INT8_MIN;
	uint32_t x542 = 29U;
	int32_t x543 = INT32_MAX;
	volatile uint64_t x544 = 15507195896LLU;
	static volatile int32_t t128 = 0;

    t128 = (((x541&x542)/x543)<=x544);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x546 = 13801728399941141LLU;
	int32_t x547 = INT32_MAX;
	int64_t x548 = -2191171024927641071LL;
	static volatile int32_t t129 = -1360;

    t129 = (((x545&x546)/x547)<=x548);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint16_t x550 = 6U;
	uint8_t x552 = 27U;
	int32_t t130 = 5229;

    t130 = (((x549&x550)/x551)<=x552);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint64_t x553 = 33503LLU;
	int8_t x554 = -1;
	int16_t x555 = INT16_MAX;
	static int16_t x556 = INT16_MAX;
	static int32_t t131 = -56009;

    t131 = (((x553&x554)/x555)<=x556);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x557 = 4375U;
	uint8_t x558 = 41U;
	static int8_t x559 = -22;
	volatile int32_t t132 = -1;

    t132 = (((x557&x558)/x559)<=x560);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint16_t x561 = 0U;
	volatile int64_t x562 = 2060861LL;
	volatile int64_t x564 = 33420930458LL;
	volatile int32_t t133 = 45;

    t133 = (((x561&x562)/x563)<=x564);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x567 = INT32_MAX;
	static int8_t x568 = -1;
	int32_t t134 = -1;

    t134 = (((x565&x566)/x567)<=x568);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x572 = INT8_MIN;
	static int32_t t135 = -193230115;

    t135 = (((x569&x570)/x571)<=x572);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x573 = -1;
	uint16_t x574 = UINT16_MAX;
	int64_t x575 = INT64_MIN;

    t136 = (((x573&x574)/x575)<=x576);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x577 = -111304148;
	static uint64_t x579 = 378764151559040347LLU;
	static int32_t x580 = -299494;
	volatile int32_t t137 = -11;

    t137 = (((x577&x578)/x579)<=x580);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x581 = 15822519940155LL;
	static int16_t x582 = INT16_MAX;
	volatile int32_t t138 = 2167;

    t138 = (((x581&x582)/x583)<=x584);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x585 = 1U;
	volatile uint32_t x586 = 12506U;
	static uint16_t x587 = 5U;
	int64_t x588 = INT64_MIN;
	static int32_t t139 = 13035;

    t139 = (((x585&x586)/x587)<=x588);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x589 = INT16_MIN;
	uint8_t x590 = UINT8_MAX;
	int8_t x591 = INT8_MAX;
	int32_t t140 = 3898811;

    t140 = (((x589&x590)/x591)<=x592);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static int8_t x593 = INT8_MIN;
	static int32_t x595 = -2540;
	volatile int16_t x596 = 4;
	int32_t t141 = -343;

    t141 = (((x593&x594)/x595)<=x596);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x600 = 5317556LLU;
	int32_t t142 = 1936386;

    t142 = (((x597&x598)/x599)<=x600);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile uint64_t x601 = UINT64_MAX;
	uint8_t x603 = 19U;
	static volatile int32_t t143 = -230687705;

    t143 = (((x601&x602)/x603)<=x604);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x605 = 200628261U;
	uint8_t x606 = 109U;
	int32_t x607 = INT32_MIN;
	static uint8_t x608 = UINT8_MAX;

    t144 = (((x605&x606)/x607)<=x608);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile int64_t x609 = 39237437440777966LL;
	int16_t x610 = 20;
	int64_t x612 = INT64_MAX;
	int32_t t145 = 62803;

    t145 = (((x609&x610)/x611)<=x612);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x613 = INT32_MIN;
	static uint32_t x614 = 591811U;
	static int32_t x615 = INT32_MIN;
	uint64_t x616 = 12054580LLU;
	static volatile int32_t t146 = -1268;

    t146 = (((x613&x614)/x615)<=x616);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x617 = INT64_MIN;
	uint32_t x618 = 11U;
	int64_t x619 = INT64_MIN;
	volatile int32_t t147 = 5695078;

    t147 = (((x617&x618)/x619)<=x620);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x621 = -1;
	uint8_t x622 = UINT8_MAX;
	int64_t x623 = -1LL;
	uint8_t x624 = 5U;
	volatile int32_t t148 = -248410;

    t148 = (((x621&x622)/x623)<=x624);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x625 = INT64_MIN;
	volatile int32_t x626 = INT32_MIN;
	volatile int32_t t149 = -14881;

    t149 = (((x625&x626)/x627)<=x628);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x632 = UINT32_MAX;
	volatile int32_t t150 = -48532330;

    t150 = (((x629&x630)/x631)<=x632);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x633 = 11U;
	uint64_t x634 = 39156984886147328LLU;
	static volatile uint8_t x636 = UINT8_MAX;
	volatile int32_t t151 = -50;

    t151 = (((x633&x634)/x635)<=x636);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int8_t x637 = INT8_MIN;
	static uint8_t x638 = UINT8_MAX;
	volatile int64_t x640 = -1LL;
	int32_t t152 = -39;

    t152 = (((x637&x638)/x639)<=x640);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x641 = INT32_MIN;
	int64_t x642 = INT64_MAX;
	static volatile int32_t x643 = -1498796;
	uint32_t x644 = 7263649U;
	volatile int32_t t153 = 3463;

    t153 = (((x641&x642)/x643)<=x644);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x649 = INT32_MIN;
	uint32_t x651 = UINT32_MAX;

    t154 = (((x649&x650)/x651)<=x652);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint8_t x653 = 11U;
	static int16_t x654 = -1396;
	static volatile uint8_t x655 = UINT8_MAX;
	int32_t t155 = -4051816;

    t155 = (((x653&x654)/x655)<=x656);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint16_t x657 = 0U;
	uint64_t x659 = 227243401502946LLU;
	int64_t x660 = -1LL;
	int32_t t156 = 321154;

    t156 = (((x657&x658)/x659)<=x660);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint8_t x661 = UINT8_MAX;
	int32_t x663 = INT32_MIN;
	int32_t t157 = 306056;

    t157 = (((x661&x662)/x663)<=x664);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x665 = INT8_MIN;
	static uint32_t x666 = 54499441U;
	int16_t x667 = INT16_MAX;
	int64_t x668 = INT64_MIN;

    t158 = (((x665&x666)/x667)<=x668);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x669 = 958462LLU;
	int32_t x670 = INT32_MIN;
	volatile int16_t x671 = INT16_MIN;
	static uint32_t x672 = 63U;
	volatile int32_t t159 = -6317;

    t159 = (((x669&x670)/x671)<=x672);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x673 = UINT32_MAX;
	int8_t x674 = -39;
	uint16_t x675 = 11U;
	uint64_t x676 = UINT64_MAX;
	int32_t t160 = -10972673;

    t160 = (((x673&x674)/x675)<=x676);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile int32_t x677 = -1;
	static int32_t x678 = INT32_MAX;
	int64_t x679 = -388473081LL;
	static volatile int32_t t161 = -6;

    t161 = (((x677&x678)/x679)<=x680);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x681 = UINT16_MAX;
	uint64_t x682 = 3LLU;
	uint16_t x684 = 8356U;
	int32_t t162 = 161180;

    t162 = (((x681&x682)/x683)<=x684);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x685 = 23995289;
	int32_t x686 = 739;
	uint16_t x687 = 4703U;
	uint32_t x688 = UINT32_MAX;
	static int32_t t163 = -36;

    t163 = (((x685&x686)/x687)<=x688);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint16_t x694 = 17564U;
	static int16_t x695 = INT16_MIN;
	int64_t x696 = INT64_MIN;

    t164 = (((x693&x694)/x695)<=x696);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x697 = INT16_MIN;
	uint32_t x698 = 729U;
	int16_t x699 = INT16_MAX;
	uint32_t x700 = 124463U;
	int32_t t165 = 172210;

    t165 = (((x697&x698)/x699)<=x700);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x701 = 1;
	int16_t x702 = 1922;
	int8_t x703 = -1;
	int64_t x704 = INT64_MIN;
	static int32_t t166 = 1224448;

    t166 = (((x701&x702)/x703)<=x704);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x706 = 534614825992LLU;
	static int32_t x707 = INT32_MIN;
	int32_t x708 = INT32_MIN;

    t167 = (((x705&x706)/x707)<=x708);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x709 = 1U;
	uint64_t x710 = UINT64_MAX;
	int8_t x711 = -13;

    t168 = (((x709&x710)/x711)<=x712);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x713 = UINT8_MAX;
	int64_t x715 = INT64_MIN;
	int64_t x716 = -1LL;

    t169 = (((x713&x714)/x715)<=x716);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x717 = INT8_MIN;
	volatile int32_t x718 = -1;
	int64_t x719 = -1LL;
	volatile int64_t x720 = INT64_MAX;

    t170 = (((x717&x718)/x719)<=x720);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x721 = 2;
	static int8_t x722 = 50;
	int8_t x723 = INT8_MAX;
	int16_t x724 = INT16_MIN;
	int32_t t171 = -522865;

    t171 = (((x721&x722)/x723)<=x724);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x725 = -3;
	int8_t x726 = 1;
	int32_t x727 = INT32_MAX;
	uint16_t x728 = 2U;
	int32_t t172 = 26;

    t172 = (((x725&x726)/x727)<=x728);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x729 = INT16_MAX;
	uint16_t x730 = UINT16_MAX;
	int16_t x732 = -1;
	static int32_t t173 = 1;

    t173 = (((x729&x730)/x731)<=x732);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int64_t x733 = INT64_MAX;
	static volatile int32_t x734 = INT32_MIN;
	uint8_t x735 = UINT8_MAX;
	int32_t t174 = -6794868;

    t174 = (((x733&x734)/x735)<=x736);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x737 = 0;
	int32_t x738 = INT32_MAX;
	uint32_t x739 = 10450U;
	static int8_t x740 = INT8_MIN;
	volatile int32_t t175 = 60416;

    t175 = (((x737&x738)/x739)<=x740);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x741 = INT32_MAX;
	static volatile uint8_t x743 = 29U;
	int8_t x744 = -1;
	int32_t t176 = 212009139;

    t176 = (((x741&x742)/x743)<=x744);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x747 = -1;
	volatile int32_t t177 = 23;

    t177 = (((x745&x746)/x747)<=x748);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x749 = INT16_MIN;
	static int8_t x750 = INT8_MIN;
	static int64_t x752 = -6921960174332LL;
	int32_t t178 = 414957;

    t178 = (((x749&x750)/x751)<=x752);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x753 = -1LL;
	int32_t x754 = 1018428069;
	int32_t x755 = INT32_MIN;

    t179 = (((x753&x754)/x755)<=x756);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x757 = -1;
	int8_t x758 = -1;
	int64_t x759 = 21644LL;
	uint16_t x760 = 22498U;
	static int32_t t180 = 274035585;

    t180 = (((x757&x758)/x759)<=x760);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x761 = -72984;
	int8_t x762 = INT8_MIN;
	uint64_t x763 = UINT64_MAX;
	uint64_t x764 = 74LLU;

    t181 = (((x761&x762)/x763)<=x764);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static int16_t x766 = INT16_MIN;
	uint64_t x767 = UINT64_MAX;
	int16_t x768 = INT16_MIN;
	int32_t t182 = 1;

    t182 = (((x765&x766)/x767)<=x768);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint32_t x769 = 201630U;
	int32_t x770 = -66818;
	int8_t x771 = -1;
	static uint16_t x772 = 174U;

    t183 = (((x769&x770)/x771)<=x772);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x773 = 2107262;
	int64_t x774 = INT64_MAX;
	int32_t x776 = INT32_MIN;
	volatile int32_t t184 = -57549510;

    t184 = (((x773&x774)/x775)<=x776);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x777 = -1LL;
	int16_t x778 = INT16_MIN;
	int32_t x779 = -1;

    t185 = (((x777&x778)/x779)<=x780);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint32_t x781 = 3U;
	int16_t x782 = -1;

    t186 = (((x781&x782)/x783)<=x784);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x785 = 891U;
	uint8_t x787 = 116U;
	volatile int64_t x788 = -1LL;

    t187 = (((x785&x786)/x787)<=x788);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int16_t x789 = INT16_MIN;
	static int8_t x790 = INT8_MIN;
	int32_t x792 = -26985759;
	int32_t t188 = -21;

    t188 = (((x789&x790)/x791)<=x792);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int32_t x793 = -1;
	volatile int32_t x794 = INT32_MIN;
	static volatile int32_t x795 = INT32_MAX;
	int16_t x796 = INT16_MIN;
	int32_t t189 = 131;

    t189 = (((x793&x794)/x795)<=x796);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x798 = INT8_MAX;
	int8_t x799 = INT8_MIN;
	uint8_t x800 = UINT8_MAX;
	volatile int32_t t190 = 7416429;

    t190 = (((x797&x798)/x799)<=x800);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x801 = UINT8_MAX;
	volatile int16_t x802 = INT16_MIN;
	int8_t x803 = -20;
	int8_t x804 = -1;

    t191 = (((x801&x802)/x803)<=x804);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x805 = -830194754LL;
	int8_t x806 = INT8_MIN;
	int32_t x807 = -322571104;
	int64_t x808 = -43524LL;
	volatile int32_t t192 = 7046;

    t192 = (((x805&x806)/x807)<=x808);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x809 = -156;
	static uint8_t x810 = 1U;
	uint8_t x811 = 1U;
	static int32_t t193 = -7;

    t193 = (((x809&x810)/x811)<=x812);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x813 = 1022;
	volatile int8_t x814 = -1;
	int16_t x815 = INT16_MIN;
	uint64_t x816 = 133LLU;
	int32_t t194 = 120197552;

    t194 = (((x813&x814)/x815)<=x816);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x817 = 392LL;
	uint8_t x818 = UINT8_MAX;
	static int32_t x820 = INT32_MIN;
	int32_t t195 = -3387148;

    t195 = (((x817&x818)/x819)<=x820);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x821 = INT32_MIN;
	int8_t x822 = -1;
	uint64_t x823 = 6140166295541044LLU;
	volatile int32_t t196 = 244;

    t196 = (((x821&x822)/x823)<=x824);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x825 = 117U;
	int32_t x826 = 266963;
	static int32_t t197 = 0;

    t197 = (((x825&x826)/x827)<=x828);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x829 = 19;
	int64_t x830 = INT64_MAX;
	int16_t x831 = -1;
	volatile uint32_t x832 = UINT32_MAX;

    t198 = (((x829&x830)/x831)<=x832);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x833 = -75;
	int16_t x834 = INT16_MAX;
	int32_t x836 = 0;
	volatile int32_t t199 = 1028531626;

    t199 = (((x833&x834)/x835)<=x836);

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

