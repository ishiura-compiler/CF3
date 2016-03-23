
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

int16_t x1 = 0;
static int64_t x4 = 37484LL;
int64_t t0 = 31576951192552164LL;
static uint32_t x6 = 60875U;
uint32_t t1 = 240U;
uint16_t x9 = UINT16_MAX;
int32_t x12 = -1;
volatile int8_t x13 = INT8_MIN;
int32_t x18 = -13;
static int64_t x19 = INT64_MIN;
volatile uint16_t x21 = 12U;
uint32_t x27 = 79514574U;
int16_t x30 = -1;
volatile int8_t x31 = INT8_MIN;
static volatile int64_t t9 = -17279466433037LL;
volatile uint64_t x41 = UINT64_MAX;
static uint64_t t10 = 5LLU;
static int64_t x53 = -252439204513578340LL;
static volatile int64_t t14 = 12249425323LL;
static uint32_t x67 = 60509U;
uint64_t t16 = 248454853LLU;
uint8_t x75 = 1U;
volatile int64_t t17 = 5091145LL;
int8_t x79 = INT8_MAX;
static uint8_t x84 = 1U;
int32_t x90 = 40969022;
uint8_t x93 = 1U;
static volatile int32_t x94 = -1;
volatile int64_t x98 = INT64_MIN;
uint8_t x109 = 5U;
int8_t x110 = -1;
volatile uint32_t x114 = UINT32_MAX;
int16_t x119 = -1;
uint64_t x120 = UINT64_MAX;
int32_t x121 = INT32_MIN;
int16_t x130 = INT16_MIN;
int64_t x132 = 1603204LL;
uint64_t t31 = 14596989680716LLU;
static int64_t x133 = -78082606694140883LL;
volatile int64_t t32 = -48LL;
int64_t x140 = -1LL;
int16_t x145 = INT16_MIN;
volatile int64_t x154 = INT64_MIN;
uint64_t x157 = 1678879277LLU;
int32_t x158 = -1;
int64_t x159 = -1LL;
int32_t x160 = 15346219;
static int16_t x165 = INT16_MAX;
int8_t x166 = -1;
int32_t x177 = INT32_MIN;
static int8_t x178 = INT8_MIN;
int32_t x198 = -1304;
uint16_t x209 = 461U;
volatile uint32_t t48 = 1U;
static uint64_t x213 = 0LLU;
uint16_t x215 = UINT16_MAX;
static uint64_t t49 = 292186LLU;
volatile int64_t t50 = 879560780LL;
static int64_t x223 = -1LL;
static int64_t t51 = -720127LL;
volatile int8_t x232 = INT8_MIN;
volatile int64_t x241 = INT64_MIN;
volatile uint16_t x242 = 28U;
volatile uint32_t t56 = 90U;
static int16_t x249 = INT16_MIN;
uint16_t x252 = UINT16_MAX;
volatile int64_t x257 = -1LL;
volatile int16_t x259 = INT16_MIN;
volatile uint64_t t59 = 8LLU;
volatile int8_t x262 = INT8_MAX;
volatile uint32_t x266 = UINT32_MAX;
static int8_t x268 = -1;
uint16_t x279 = 93U;
uint8_t x280 = 15U;
int32_t x285 = 276;
volatile int32_t x291 = INT32_MIN;
int32_t t65 = -6102335;
volatile int8_t x293 = 6;
static int32_t x295 = INT32_MAX;
volatile int32_t t66 = 12;
static int16_t x298 = INT16_MIN;
int8_t x299 = -1;
uint32_t x303 = UINT32_MAX;
uint16_t x312 = UINT16_MAX;
int8_t x319 = INT8_MIN;
static int8_t x327 = -1;
static volatile int32_t t74 = -49508;
uint32_t x338 = UINT32_MAX;
volatile int8_t x339 = -1;
int64_t x349 = INT64_MIN;
static int64_t x351 = INT64_MAX;
int64_t x358 = INT64_MIN;
uint32_t x359 = UINT32_MAX;
uint32_t t81 = 286979231U;
uint64_t x367 = 4904734LLU;
int32_t x376 = INT32_MIN;
int64_t x377 = INT64_MIN;
static int8_t x378 = 1;
static uint8_t x387 = 47U;
int32_t x393 = INT32_MIN;
volatile uint16_t x395 = 1490U;
int32_t x397 = INT32_MAX;
uint32_t x398 = 765038172U;
uint64_t x414 = 163576602548629LLU;
int8_t x416 = 7;
int8_t x419 = INT8_MIN;
int64_t x421 = -1LL;
volatile int8_t x424 = 6;
int16_t x428 = INT16_MIN;
int64_t x432 = -1LL;
int64_t x434 = -132967598LL;
int8_t x436 = -1;
volatile int64_t t97 = -5262488261LL;
int8_t x437 = INT8_MIN;
static int32_t x440 = -1;
static volatile int32_t x441 = 0;
int8_t x442 = INT8_MIN;
static volatile uint16_t x446 = 513U;
static uint16_t x447 = 6U;
uint16_t x448 = UINT16_MAX;
volatile uint32_t t100 = 24838U;
volatile int8_t x470 = -3;
volatile uint32_t t107 = 11461U;
uint16_t x482 = UINT16_MAX;
int32_t t112 = 1421;
static int16_t x502 = INT16_MAX;
static uint16_t x503 = UINT16_MAX;
int32_t x504 = INT32_MIN;
volatile int64_t t114 = -716LL;
int64_t x507 = INT64_MIN;
volatile int64_t t115 = 2275358977LL;
volatile uint8_t x509 = 85U;
static int64_t x510 = INT64_MIN;
static volatile int64_t x512 = -2526832892819LL;
volatile uint32_t x519 = 4U;
int8_t x521 = -1;
uint16_t x531 = UINT16_MAX;
int16_t x535 = -1;
int64_t x543 = -1LL;
int8_t x544 = -1;
int8_t x546 = INT8_MIN;
uint64_t x547 = UINT64_MAX;
uint64_t t125 = 1572899772845436LLU;
uint64_t x549 = 667837LLU;
int16_t x553 = INT16_MIN;
int8_t x565 = 6;
uint8_t x567 = 29U;
static int16_t x568 = -1;
volatile int64_t t129 = 1387533LL;
int8_t x578 = 21;
uint32_t x580 = 93U;
volatile uint64_t t132 = 670430220LLU;
volatile uint64_t x582 = UINT64_MAX;
volatile uint16_t x584 = 17712U;
static int16_t x593 = 1970;
volatile uint8_t x596 = UINT8_MAX;
static uint8_t x600 = UINT8_MAX;
int8_t x604 = -7;
static int8_t x607 = INT8_MIN;
int64_t x610 = 22295652891LL;
uint64_t x611 = 3874139196033723763LLU;
int8_t x624 = INT8_MAX;
static int32_t t143 = 485;
volatile uint16_t x626 = 23851U;
int32_t x636 = 1688;
volatile int64_t x638 = INT64_MIN;
volatile int64_t t147 = -68374864LL;
int64_t x643 = INT64_MIN;
int16_t x644 = INT16_MIN;
int16_t x646 = 75;
static volatile int8_t x649 = INT8_MIN;
int16_t x658 = INT16_MIN;
volatile uint16_t x661 = UINT16_MAX;
static int8_t x667 = -1;
static int16_t x670 = INT16_MAX;
uint64_t x681 = 204661781893750LLU;
int16_t x694 = -1;
uint16_t x696 = UINT16_MAX;
volatile uint32_t x699 = 2591508U;
int64_t x705 = -1LL;
int16_t x706 = -1;
int64_t t164 = 4212752075791068751LL;
uint32_t x709 = UINT32_MAX;
int16_t x712 = -1;
volatile int32_t x719 = INT32_MAX;
uint32_t t167 = 1553585U;
uint16_t x723 = UINT16_MAX;
static int32_t x727 = INT32_MAX;
int32_t x729 = -232673251;
static int64_t x731 = -1LL;
volatile int32_t x732 = INT32_MIN;
static int16_t x734 = INT16_MAX;
int64_t x735 = 1266036115063918LL;
uint64_t x738 = UINT64_MAX;
int16_t x744 = INT16_MIN;
uint8_t x749 = 8U;
int16_t x751 = -63;
int32_t x759 = 1;
volatile int64_t t178 = -373468776330LL;
uint8_t x768 = 59U;
int64_t t179 = -586LL;
uint32_t x770 = UINT32_MAX;
int8_t x774 = INT8_MAX;
static volatile uint64_t t181 = 80643942760LLU;
static uint32_t x777 = 3U;
static volatile uint8_t x784 = 1U;
volatile int64_t t183 = -514051LL;
int8_t x786 = INT8_MIN;
volatile int8_t x795 = INT8_MAX;
int16_t x800 = INT16_MIN;
int64_t t186 = 8018588236LL;
int8_t x820 = -1;
static int32_t x822 = 85357814;
uint32_t x826 = UINT32_MAX;
uint32_t t193 = 13032163U;
int16_t x830 = -1;
static uint64_t x834 = 70LLU;
volatile int32_t x841 = INT32_MIN;
uint64_t x842 = 14651LLU;
uint16_t x844 = 4773U;
int16_t x845 = INT16_MIN;
volatile int64_t x849 = 4037LL;


void f0(void) {
    	uint32_t x2 = 23U;
	int32_t x3 = INT32_MAX;

    t0 = (((x1%x2)&x3)/x4);

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MIN;
	static uint8_t x7 = 0U;
	static int32_t x8 = INT32_MIN;

    t1 = (((x5%x6)&x7)/x8);

    if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x10 = 3417504236357LL;
	int64_t x11 = INT64_MIN;
	static volatile int64_t t2 = 111885993LL;

    t2 = (((x9%x10)&x11)/x12);

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x14 = INT32_MIN;
	static uint16_t x15 = UINT16_MAX;
	static int64_t x16 = INT64_MIN;
	static int64_t t3 = 0LL;

    t3 = (((x13%x14)&x15)/x16);

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static int16_t x17 = INT16_MAX;
	int64_t x20 = INT64_MIN;
	volatile int64_t t4 = 1526LL;

    t4 = (((x17%x18)&x19)/x20);

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static int32_t x22 = 45068;
	volatile int32_t x23 = -1;
	int32_t x24 = INT32_MIN;
	volatile int32_t t5 = -46;

    t5 = (((x21%x22)&x23)/x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = -185118963892LL;
	uint8_t x26 = UINT8_MAX;
	int32_t x28 = -1;
	volatile int64_t t6 = -7116887861435LL;

    t6 = (((x25%x26)&x27)/x28);

    if (t6 != -79514570LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = 5;
	int8_t x32 = INT8_MIN;
	volatile int32_t t7 = -83;

    t7 = (((x29%x30)&x31)/x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x33 = INT8_MAX;
	volatile int32_t x34 = 934824;
	volatile int16_t x35 = -1;
	int16_t x36 = INT16_MAX;
	static int32_t t8 = 448;

    t8 = (((x33%x34)&x35)/x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = 2139025095LL;
	volatile int64_t x38 = -120573226LL;
	volatile int64_t x39 = -1LL;
	static int16_t x40 = INT16_MIN;

    t9 = (((x37%x38)&x39)/x40);

    if (t9 != -2724LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x42 = 321U;
	int64_t x43 = 849167246990LL;
	int16_t x44 = -1;

    t10 = (((x41%x42)&x43)/x44);

    if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = -2112471;
	int32_t x46 = INT32_MIN;
	int64_t x47 = INT64_MAX;
	int8_t x48 = INT8_MAX;
	static volatile int64_t t11 = -4314059782600315LL;

    t11 = (((x45%x46)&x47)/x48);

    if (t11 != 72624976668131207LL) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x49 = -40;
	volatile int32_t x50 = INT32_MIN;
	uint16_t x51 = 285U;
	uint64_t x52 = 147290520LLU;
	volatile uint64_t t12 = 281715161797752652LLU;

    t12 = (((x49%x50)&x51)/x52);

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int8_t x54 = INT8_MAX;
	int64_t x55 = INT64_MIN;
	uint64_t x56 = UINT64_MAX;
	volatile uint64_t t13 = 76134783LLU;

    t13 = (((x53%x54)&x55)/x56);

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static int32_t x57 = INT32_MAX;
	int8_t x58 = INT8_MAX;
	int64_t x59 = INT64_MIN;
	int32_t x60 = INT32_MIN;

    t14 = (((x57%x58)&x59)/x60);

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x65 = INT64_MAX;
	static int16_t x66 = -1;
	int32_t x68 = -1;
	int64_t t15 = -58829346907675LL;

    t15 = (((x65%x66)&x67)/x68);

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile uint64_t x69 = UINT64_MAX;
	static uint16_t x70 = 7U;
	int32_t x71 = -1;
	uint64_t x72 = UINT64_MAX;

    t16 = (((x69%x70)&x71)/x72);

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x73 = -5772602652949511LL;
	static int32_t x74 = INT32_MIN;
	int8_t x76 = INT8_MIN;

    t17 = (((x73%x74)&x75)/x76);

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x77 = INT32_MAX;
	uint8_t x78 = 12U;
	volatile int32_t x80 = 1;
	volatile int32_t t18 = 1;

    t18 = (((x77%x78)&x79)/x80);

    if (t18 != 7) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x81 = 7933U;
	volatile int16_t x82 = INT16_MIN;
	int8_t x83 = INT8_MIN;
	uint32_t t19 = 917U;

    t19 = (((x81%x82)&x83)/x84);

    if (t19 != 7808U) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x85 = 38;
	int8_t x86 = INT8_MAX;
	volatile int64_t x87 = -281138198505LL;
	volatile int64_t x88 = INT64_MIN;
	volatile int64_t t20 = -1590895549245321LL;

    t20 = (((x85%x86)&x87)/x88);

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x89 = UINT16_MAX;
	uint64_t x91 = 6LLU;
	volatile int16_t x92 = INT16_MAX;
	uint64_t t21 = 24650453LLU;

    t21 = (((x89%x90)&x91)/x92);

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x95 = 2430U;
	int8_t x96 = -1;
	int32_t t22 = 1512773;

    t22 = (((x93%x94)&x95)/x96);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x97 = INT16_MIN;
	int8_t x99 = INT8_MIN;
	uint64_t x100 = 2086978LLU;
	volatile uint64_t t23 = 60548009LLU;

    t23 = (((x97%x98)&x99)/x100);

    if (t23 != 8838973900879LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x101 = INT8_MIN;
	uint64_t x102 = UINT64_MAX;
	int16_t x103 = INT16_MAX;
	volatile int32_t x104 = INT32_MIN;
	volatile uint64_t t24 = 1262006722LLU;

    t24 = (((x101%x102)&x103)/x104);

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x105 = INT8_MAX;
	int16_t x106 = 10072;
	int8_t x107 = -1;
	int64_t x108 = -153608157042LL;
	static volatile int64_t t25 = 106275LL;

    t25 = (((x105%x106)&x107)/x108);

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint8_t x111 = UINT8_MAX;
	volatile int64_t x112 = INT64_MIN;
	static int64_t t26 = 0LL;

    t26 = (((x109%x110)&x111)/x112);

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x113 = -1;
	int8_t x115 = -20;
	int32_t x116 = -1;
	volatile uint32_t t27 = 1380U;

    t27 = (((x113%x114)&x115)/x116);

    if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint64_t x117 = 1537456385430LLU;
	uint32_t x118 = UINT32_MAX;
	uint64_t t28 = 604554LLU;

    t28 = (((x117%x118)&x119)/x120);

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x122 = INT32_MAX;
	volatile uint8_t x123 = 1U;
	uint16_t x124 = 10419U;
	volatile int32_t t29 = 66402;

    t29 = (((x121%x122)&x123)/x124);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x125 = INT8_MIN;
	static volatile int16_t x126 = INT16_MIN;
	int32_t x127 = 0;
	uint16_t x128 = 1794U;
	volatile int32_t t30 = -914;

    t30 = (((x125%x126)&x127)/x128);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint64_t x129 = UINT64_MAX;
	uint32_t x131 = 2921U;

    t31 = (((x129%x130)&x131)/x132);

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x134 = INT16_MIN;
	volatile int8_t x135 = -1;
	int16_t x136 = -1;

    t32 = (((x133%x134)&x135)/x136);

    if (t32 != 3027LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x137 = INT32_MAX;
	static uint32_t x138 = UINT32_MAX;
	uint64_t x139 = 208441LLU;
	uint64_t t33 = 393LLU;

    t33 = (((x137%x138)&x139)/x140);

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int8_t x146 = -1;
	volatile int64_t x147 = INT64_MIN;
	static volatile uint8_t x148 = UINT8_MAX;
	volatile int64_t t34 = -125LL;

    t34 = (((x145%x146)&x147)/x148);

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x149 = -7;
	static int64_t x150 = 2142253849232847628LL;
	int16_t x151 = INT16_MIN;
	uint16_t x152 = 37U;
	static int64_t t35 = -288346768LL;

    t35 = (((x149%x150)&x151)/x152);

    if (t35 != -885LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x153 = INT32_MAX;
	volatile int8_t x155 = INT8_MIN;
	volatile int8_t x156 = INT8_MIN;
	static volatile int64_t t36 = 113688LL;

    t36 = (((x153%x154)&x155)/x156);

    if (t36 != -16777215LL) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint64_t t37 = 224843062256458282LLU;

    t37 = (((x157%x158)&x159)/x160);

    if (t37 != 109LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x167 = UINT64_MAX;
	volatile uint8_t x168 = 2U;
	volatile uint64_t t38 = 453373LLU;

    t38 = (((x165%x166)&x167)/x168);

    if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x169 = UINT8_MAX;
	static int16_t x170 = INT16_MIN;
	int16_t x171 = INT16_MIN;
	int32_t x172 = INT32_MIN;
	volatile int32_t t39 = 49110507;

    t39 = (((x169%x170)&x171)/x172);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x173 = 7612LL;
	int64_t x174 = INT64_MIN;
	volatile int32_t x175 = 2;
	uint64_t x176 = 1813926334901087645LLU;
	volatile uint64_t t40 = 146261241571403586LLU;

    t40 = (((x173%x174)&x175)/x176);

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x179 = -1;
	int32_t x180 = 3456;
	static volatile int32_t t41 = 2;

    t41 = (((x177%x178)&x179)/x180);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x185 = 655937U;
	int16_t x186 = -2295;
	static int64_t x187 = INT64_MAX;
	uint16_t x188 = 13046U;
	volatile int64_t t42 = -38944LL;

    t42 = (((x185%x186)&x187)/x188);

    if (t42 != 50LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x189 = INT64_MAX;
	int8_t x190 = INT8_MIN;
	static uint32_t x191 = 81805U;
	int32_t x192 = -3;
	static volatile int64_t t43 = 2387802LL;

    t43 = (((x189%x190)&x191)/x192);

    if (t43 != -4LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x193 = -1;
	volatile int16_t x194 = -1;
	int8_t x195 = -1;
	static int64_t x196 = 127130885155228LL;
	int64_t t44 = -58011892995LL;

    t44 = (((x193%x194)&x195)/x196);

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x197 = INT8_MIN;
	int16_t x199 = 7;
	volatile int32_t x200 = -1;
	volatile int32_t t45 = -27935833;

    t45 = (((x197%x198)&x199)/x200);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x201 = INT16_MIN;
	int8_t x202 = INT8_MIN;
	volatile int8_t x203 = 0;
	static uint16_t x204 = 962U;
	volatile int32_t t46 = -1;

    t46 = (((x201%x202)&x203)/x204);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint16_t x205 = 2U;
	static int64_t x206 = INT64_MAX;
	volatile int32_t x207 = INT32_MAX;
	int8_t x208 = -24;
	int64_t t47 = 663933746989167LL;

    t47 = (((x205%x206)&x207)/x208);

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static int32_t x210 = -1;
	int8_t x211 = INT8_MAX;
	volatile uint32_t x212 = 4U;

    t48 = (((x209%x210)&x211)/x212);

    if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x214 = 10U;
	int64_t x216 = INT64_MIN;

    t49 = (((x213%x214)&x215)/x216);

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x217 = INT64_MAX;
	static int64_t x218 = INT64_MAX;
	int64_t x219 = INT64_MAX;
	int64_t x220 = -1640588911544248413LL;

    t50 = (((x217%x218)&x219)/x220);

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x221 = -1;
	int32_t x222 = INT32_MIN;
	int64_t x224 = -4703LL;

    t51 = (((x221%x222)&x223)/x224);

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int8_t x229 = INT8_MIN;
	uint16_t x230 = 12010U;
	int8_t x231 = 7;
	volatile int32_t t52 = 686225213;

    t52 = (((x229%x230)&x231)/x232);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x233 = -65319852;
	int32_t x234 = INT32_MIN;
	int16_t x235 = INT16_MAX;
	uint8_t x236 = 110U;
	volatile int32_t t53 = -3860053;

    t53 = (((x233%x234)&x235)/x236);

    if (t53 != 177) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x237 = -1;
	volatile uint32_t x238 = UINT32_MAX;
	uint64_t x239 = 24412LLU;
	int32_t x240 = -85500144;
	volatile uint64_t t54 = 2860141LLU;

    t54 = (((x237%x238)&x239)/x240);

    if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x243 = UINT16_MAX;
	static volatile uint8_t x244 = 68U;
	int64_t t55 = -1207426469305885685LL;

    t55 = (((x241%x242)&x243)/x244);

    if (t55 != 963LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x245 = UINT8_MAX;
	static int32_t x246 = -327;
	uint16_t x247 = 1443U;
	uint32_t x248 = 8572U;

    t56 = (((x245%x246)&x247)/x248);

    if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x250 = UINT64_MAX;
	uint8_t x251 = 4U;
	volatile uint64_t t57 = 28215652178809LLU;

    t57 = (((x249%x250)&x251)/x252);

    if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static int64_t x253 = INT64_MIN;
	uint32_t x254 = 43169U;
	int64_t x255 = 53326982LL;
	volatile uint32_t x256 = 3469496U;
	volatile int64_t t58 = -671619402289337265LL;

    t58 = (((x253%x254)&x255)/x256);

    if (t58 != 15LL) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint64_t x258 = UINT64_MAX;
	int8_t x260 = 5;

    t59 = (((x257%x258)&x259)/x260);

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint8_t x261 = 6U;
	uint64_t x263 = 7666311511669181LLU;
	static int32_t x264 = -37966;
	uint64_t t60 = 4071253LLU;

    t60 = (((x261%x262)&x263)/x264);

    if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x265 = INT64_MAX;
	volatile uint32_t x267 = UINT32_MAX;
	volatile int64_t t61 = 2525326367621LL;

    t61 = (((x265%x266)&x267)/x268);

    if (t61 != -2147483647LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x277 = 30;
	static volatile uint64_t x278 = 273293416803370164LLU;
	static volatile uint64_t t62 = 584270997641573LLU;

    t62 = (((x277%x278)&x279)/x280);

    if (t62 != 1LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x281 = INT8_MIN;
	volatile uint32_t x282 = UINT32_MAX;
	int16_t x283 = INT16_MAX;
	int16_t x284 = -1;
	static volatile uint32_t t63 = 1408227U;

    t63 = (((x281%x282)&x283)/x284);

    if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
    	static int32_t x286 = INT32_MIN;
	static int64_t x287 = -6667680287123112LL;
	int16_t x288 = -1;
	static volatile int64_t t64 = 913031793LL;

    t64 = (((x285%x286)&x287)/x288);

    if (t64 != -272LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x289 = INT8_MIN;
	static int8_t x290 = 1;
	int16_t x292 = INT16_MIN;

    t65 = (((x289%x290)&x291)/x292);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x294 = INT32_MIN;
	int8_t x296 = INT8_MIN;

    t66 = (((x293%x294)&x295)/x296);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x297 = INT8_MIN;
	int16_t x300 = INT16_MIN;
	volatile int32_t t67 = -85509549;

    t67 = (((x297%x298)&x299)/x300);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x301 = INT8_MIN;
	int8_t x302 = -1;
	int32_t x304 = -1;
	volatile uint32_t t68 = 665U;

    t68 = (((x301%x302)&x303)/x304);

    if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x305 = INT32_MAX;
	int64_t x306 = -1895115713499397840LL;
	uint64_t x307 = UINT64_MAX;
	static int32_t x308 = 1808;
	volatile uint64_t t69 = 7214707134351656384LLU;

    t69 = (((x305%x306)&x307)/x308);

    if (t69 != 1187767LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile int8_t x309 = INT8_MIN;
	int8_t x310 = 18;
	int32_t x311 = INT32_MAX;
	volatile int32_t t70 = 1559;

    t70 = (((x309%x310)&x311)/x312);

    if (t70 != 32768) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x313 = 6;
	int32_t x314 = INT32_MIN;
	int64_t x315 = INT64_MIN;
	static int64_t x316 = INT64_MAX;
	volatile int64_t t71 = -1298LL;

    t71 = (((x313%x314)&x315)/x316);

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int8_t x317 = INT8_MIN;
	static volatile int32_t x318 = -1;
	int64_t x320 = INT64_MAX;
	volatile int64_t t72 = 509LL;

    t72 = (((x317%x318)&x319)/x320);

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x321 = 1;
	volatile uint16_t x322 = 551U;
	uint8_t x323 = UINT8_MAX;
	uint8_t x324 = UINT8_MAX;
	volatile int32_t t73 = 603928296;

    t73 = (((x321%x322)&x323)/x324);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static int32_t x325 = -1;
	int32_t x326 = INT32_MAX;
	volatile int8_t x328 = INT8_MAX;

    t74 = (((x325%x326)&x327)/x328);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x329 = -1;
	static int32_t x330 = -1;
	int32_t x331 = INT32_MAX;
	uint16_t x332 = 2U;
	int32_t t75 = -8062;

    t75 = (((x329%x330)&x331)/x332);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x337 = INT32_MAX;
	static volatile int16_t x340 = 1;
	uint32_t t76 = 4081U;

    t76 = (((x337%x338)&x339)/x340);

    if (t76 != 2147483647U) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x341 = -1;
	volatile uint8_t x342 = UINT8_MAX;
	static int32_t x343 = INT32_MAX;
	int8_t x344 = INT8_MIN;
	int32_t t77 = -1194011;

    t77 = (((x341%x342)&x343)/x344);

    if (t77 != -16777215) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x350 = 4556U;
	volatile uint64_t x352 = UINT64_MAX;
	uint64_t t78 = 11505LLU;

    t78 = (((x349%x350)&x351)/x352);

    if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x353 = INT64_MAX;
	volatile int64_t x354 = -1LL;
	uint32_t x355 = UINT32_MAX;
	static int8_t x356 = 36;
	volatile int64_t t79 = -12518LL;

    t79 = (((x353%x354)&x355)/x356);

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x357 = INT32_MAX;
	volatile int8_t x360 = -4;
	int64_t t80 = 22658920722LL;

    t80 = (((x357%x358)&x359)/x360);

    if (t80 != -536870911LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static int16_t x361 = 6;
	int8_t x362 = -1;
	uint32_t x363 = 1050155U;
	volatile int8_t x364 = -1;

    t81 = (((x361%x362)&x363)/x364);

    if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x365 = -1;
	int32_t x366 = -276;
	uint32_t x368 = UINT32_MAX;
	uint64_t t82 = 28130425577249911LLU;

    t82 = (((x365%x366)&x367)/x368);

    if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x373 = INT16_MAX;
	int32_t x374 = INT32_MIN;
	int8_t x375 = -1;
	volatile int32_t t83 = 77646886;

    t83 = (((x373%x374)&x375)/x376);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x379 = -1;
	static uint16_t x380 = 118U;
	int64_t t84 = 30356LL;

    t84 = (((x377%x378)&x379)/x380);

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int64_t x381 = -2127221399810LL;
	volatile int16_t x382 = INT16_MAX;
	volatile int16_t x383 = -192;
	volatile int32_t x384 = 48017;
	volatile int64_t t85 = 1650096238LL;

    t85 = (((x381%x382)&x383)/x384);

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x385 = INT8_MIN;
	uint8_t x386 = 5U;
	int16_t x388 = INT16_MIN;
	static int32_t t86 = 78897217;

    t86 = (((x385%x386)&x387)/x388);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x389 = INT32_MIN;
	int64_t x390 = 1LL;
	uint32_t x391 = 15U;
	uint64_t x392 = UINT64_MAX;
	uint64_t t87 = 4402320686188594654LLU;

    t87 = (((x389%x390)&x391)/x392);

    if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x394 = INT32_MAX;
	int64_t x396 = INT64_MIN;
	int64_t t88 = -4966439088LL;

    t88 = (((x393%x394)&x395)/x396);

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x399 = -1;
	static int16_t x400 = -1928;
	volatile uint32_t t89 = 92U;

    t89 = (((x397%x398)&x399)/x400);

    if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x401 = 41;
	static volatile int16_t x402 = 163;
	static uint32_t x403 = 488411319U;
	int16_t x404 = INT16_MIN;
	volatile uint32_t t90 = 690179U;

    t90 = (((x401%x402)&x403)/x404);

    if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
    	static int8_t x405 = INT8_MAX;
	volatile uint8_t x406 = 7U;
	int32_t x407 = INT32_MIN;
	static volatile uint8_t x408 = 8U;
	int32_t t91 = -60536522;

    t91 = (((x405%x406)&x407)/x408);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x413 = -1;
	int32_t x415 = INT32_MIN;
	volatile uint64_t t92 = 115LLU;

    t92 = (((x413%x414)&x415)/x416);

    if (t92 != 6717942417700LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint32_t x417 = 3808U;
	int32_t x418 = -6;
	int32_t x420 = INT32_MIN;
	volatile uint32_t t93 = 5U;

    t93 = (((x417%x418)&x419)/x420);

    if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x422 = INT8_MIN;
	volatile uint64_t x423 = UINT64_MAX;
	volatile uint64_t t94 = 547354055610370LLU;

    t94 = (((x421%x422)&x423)/x424);

    if (t94 != 3074457345618258602LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static int32_t x425 = INT32_MAX;
	uint16_t x426 = 330U;
	int32_t x427 = INT32_MIN;
	int32_t t95 = -590544174;

    t95 = (((x425%x426)&x427)/x428);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x429 = INT32_MAX;
	volatile int16_t x430 = INT16_MIN;
	static int64_t x431 = -1LL;
	volatile int64_t t96 = -1709188873367348LL;

    t96 = (((x429%x430)&x431)/x432);

    if (t96 != -32767LL) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int32_t x433 = 44953734;
	int64_t x435 = -35684899942459LL;

    t97 = (((x433%x434)&x435)/x436);

    if (t97 != -35979396LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x438 = 1406U;
	volatile uint16_t x439 = UINT16_MAX;
	int32_t t98 = -23666;

    t98 = (((x437%x438)&x439)/x440);

    if (t98 != -65408) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile int32_t x443 = INT32_MIN;
	static volatile int32_t x444 = 5211039;
	volatile int32_t t99 = 12842;

    t99 = (((x441%x442)&x443)/x444);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x445 = UINT32_MAX;

    t100 = (((x445%x446)&x447)/x448);

    if (t100 != 0U) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x449 = -1;
	int64_t x450 = -81680500823542260LL;
	uint64_t x451 = 50218LLU;
	static int16_t x452 = INT16_MAX;
	volatile uint64_t t101 = 34334LLU;

    t101 = (((x449%x450)&x451)/x452);

    if (t101 != 1LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int64_t x453 = -1LL;
	volatile int32_t x454 = 46;
	int64_t x455 = -1LL;
	volatile int64_t x456 = INT64_MIN;
	int64_t t102 = 579239981290159366LL;

    t102 = (((x453%x454)&x455)/x456);

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static int32_t x457 = -79474200;
	static int32_t x458 = INT32_MIN;
	volatile uint16_t x459 = 10U;
	static int16_t x460 = INT16_MAX;
	volatile int32_t t103 = -54822714;

    t103 = (((x457%x458)&x459)/x460);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x461 = -1;
	volatile int16_t x462 = -1;
	uint16_t x463 = 158U;
	uint64_t x464 = 216293748346608LLU;
	uint64_t t104 = 282142LLU;

    t104 = (((x461%x462)&x463)/x464);

    if (t104 != 0LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x465 = -1;
	int64_t x466 = -32631003LL;
	int8_t x467 = INT8_MIN;
	int8_t x468 = -1;
	int64_t t105 = 15112511992LL;

    t105 = (((x465%x466)&x467)/x468);

    if (t105 != 128LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x469 = INT32_MIN;
	int32_t x471 = -37126;
	int32_t x472 = 385358967;
	int32_t t106 = 6869257;

    t106 = (((x469%x470)&x471)/x472);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x473 = INT32_MAX;
	int16_t x474 = INT16_MAX;
	int32_t x475 = INT32_MAX;
	static uint32_t x476 = UINT32_MAX;

    t107 = (((x473%x474)&x475)/x476);

    if (t107 != 0U) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x477 = INT32_MIN;
	int32_t x478 = INT32_MIN;
	volatile int64_t x479 = 2LL;
	volatile int8_t x480 = INT8_MAX;
	int64_t t108 = 855603661LL;

    t108 = (((x477%x478)&x479)/x480);

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x481 = INT8_MIN;
	int8_t x483 = -1;
	static int16_t x484 = 1;
	volatile int32_t t109 = 1761918;

    t109 = (((x481%x482)&x483)/x484);

    if (t109 != -128) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint32_t x485 = 0U;
	int32_t x486 = -489816923;
	uint64_t x487 = 962718524557065733LLU;
	int64_t x488 = -538467495041385834LL;
	uint64_t t110 = 0LLU;

    t110 = (((x485%x486)&x487)/x488);

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile int16_t x489 = INT16_MAX;
	int16_t x490 = 112;
	int8_t x491 = INT8_MAX;
	static int32_t x492 = -2373;
	int32_t t111 = 1541841;

    t111 = (((x489%x490)&x491)/x492);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x493 = INT16_MIN;
	static int32_t x494 = INT32_MIN;
	int32_t x495 = INT32_MIN;
	volatile uint16_t x496 = 5032U;

    t112 = (((x493%x494)&x495)/x496);

    if (t112 != -426765) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint16_t x497 = UINT16_MAX;
	static int64_t x498 = INT64_MAX;
	static volatile int64_t x499 = 44579LL;
	volatile int32_t x500 = INT32_MIN;
	volatile int64_t t113 = 9855LL;

    t113 = (((x497%x498)&x499)/x500);

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int64_t x501 = INT64_MAX;

    t114 = (((x501%x502)&x503)/x504);

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x505 = INT32_MIN;
	static uint8_t x506 = 54U;
	static uint32_t x508 = 2U;

    t115 = (((x505%x506)&x507)/x508);

    if (t115 != -4611686018427387904LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint64_t x511 = 2LLU;
	volatile uint64_t t116 = 369241821623804321LLU;

    t116 = (((x509%x510)&x511)/x512);

    if (t116 != 0LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x513 = UINT64_MAX;
	int32_t x514 = INT32_MIN;
	uint64_t x515 = 7464934928413095LLU;
	static uint64_t x516 = UINT64_MAX;
	volatile uint64_t t117 = 1800LLU;

    t117 = (((x513%x514)&x515)/x516);

    if (t117 != 0LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int16_t x517 = -1;
	uint8_t x518 = UINT8_MAX;
	uint64_t x520 = UINT64_MAX;
	uint64_t t118 = 130531968514LLU;

    t118 = (((x517%x518)&x519)/x520);

    if (t118 != 0LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x522 = -79;
	uint16_t x523 = 4U;
	uint32_t x524 = UINT32_MAX;
	volatile uint32_t t119 = 12111116U;

    t119 = (((x521%x522)&x523)/x524);

    if (t119 != 0U) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x525 = 634;
	int8_t x526 = INT8_MIN;
	int32_t x527 = INT32_MAX;
	static int64_t x528 = -1LL;
	static int64_t t120 = 154616577420826355LL;

    t120 = (((x525%x526)&x527)/x528);

    if (t120 != -122LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x529 = INT16_MIN;
	static int32_t x530 = 1590697;
	int16_t x532 = -1;
	static volatile int32_t t121 = 26;

    t121 = (((x529%x530)&x531)/x532);

    if (t121 != -32768) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x533 = INT8_MIN;
	uint64_t x534 = 19429160246LLU;
	uint32_t x536 = 277713U;
	volatile uint64_t t122 = 446LLU;

    t122 = (((x533%x534)&x535)/x536);

    if (t122 != 10670LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint8_t x537 = 15U;
	int64_t x538 = INT64_MAX;
	static volatile uint16_t x539 = 576U;
	int64_t x540 = INT64_MIN;
	volatile int64_t t123 = -1859484508123300852LL;

    t123 = (((x537%x538)&x539)/x540);

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x541 = UINT8_MAX;
	volatile int32_t x542 = INT32_MAX;
	static int64_t t124 = -31346466017612736LL;

    t124 = (((x541%x542)&x543)/x544);

    if (t124 != -255LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint32_t x545 = 680U;
	static int32_t x548 = INT32_MIN;

    t125 = (((x545%x546)&x547)/x548);

    if (t125 != 0LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x550 = 611013570777088211LLU;
	int16_t x551 = INT16_MAX;
	uint32_t x552 = 19U;
	static uint64_t t126 = 12LLU;

    t126 = (((x549%x550)&x551)/x552);

    if (t126 != 656LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint8_t x554 = UINT8_MAX;
	static int16_t x555 = INT16_MAX;
	static int64_t x556 = INT64_MIN;
	int64_t t127 = 3694LL;

    t127 = (((x553%x554)&x555)/x556);

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int32_t x561 = INT32_MIN;
	uint16_t x562 = 133U;
	volatile int64_t x563 = 9215191029239102LL;
	static int8_t x564 = INT8_MAX;
	int64_t t128 = 83329072LL;

    t128 = (((x561%x562)&x563)/x564);

    if (t128 != 72560559285347LL) { NG(); } else { ; }
	
}

void f129(void) {
    	static int64_t x566 = INT64_MIN;

    t129 = (((x565%x566)&x567)/x568);

    if (t129 != -4LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x569 = 48U;
	int16_t x570 = INT16_MIN;
	int8_t x571 = 6;
	volatile int32_t x572 = 82;
	int32_t t130 = 112885;

    t130 = (((x569%x570)&x571)/x572);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x573 = -621333464;
	int64_t x574 = INT64_MAX;
	int64_t x575 = -4675LL;
	int64_t x576 = -1LL;
	int64_t t131 = 819414244704LL;

    t131 = (((x573%x574)&x575)/x576);

    if (t131 != 621337560LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x577 = UINT8_MAX;
	volatile uint64_t x579 = 8125LLU;

    t132 = (((x577%x578)&x579)/x580);

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x581 = UINT64_MAX;
	static volatile int16_t x583 = -19;
	volatile uint64_t t133 = 126041973166388LLU;

    t133 = (((x581%x582)&x583)/x584);

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x585 = 1393063LLU;
	int32_t x586 = INT32_MAX;
	int32_t x587 = -1;
	static uint16_t x588 = 4307U;
	static uint64_t t134 = 21382565931LLU;

    t134 = (((x585%x586)&x587)/x588);

    if (t134 != 323LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int64_t x589 = INT64_MIN;
	volatile uint64_t x590 = 2059441LLU;
	uint64_t x591 = 9LLU;
	static uint32_t x592 = 2U;
	uint64_t t135 = 153877420LLU;

    t135 = (((x589%x590)&x591)/x592);

    if (t135 != 0LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x594 = INT16_MIN;
	volatile int32_t x595 = INT32_MIN;
	static volatile int32_t t136 = -2763;

    t136 = (((x593%x594)&x595)/x596);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x597 = 3LLU;
	int8_t x598 = INT8_MIN;
	static int8_t x599 = INT8_MIN;
	static volatile uint64_t t137 = 39LLU;

    t137 = (((x597%x598)&x599)/x600);

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x601 = INT32_MIN;
	volatile int8_t x602 = -1;
	uint8_t x603 = 84U;
	volatile int32_t t138 = -6;

    t138 = (((x601%x602)&x603)/x604);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x605 = UINT64_MAX;
	int32_t x606 = INT32_MIN;
	int8_t x608 = INT8_MIN;
	uint64_t t139 = 70359381848048LLU;

    t139 = (((x605%x606)&x607)/x608);

    if (t139 != 0LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x609 = INT64_MAX;
	static int16_t x612 = INT16_MAX;
	volatile uint64_t t140 = 148317LLU;

    t140 = (((x609%x610)&x611)/x612);

    if (t140 != 80900LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x613 = 5469371892LL;
	static volatile int32_t x614 = 377465;
	uint64_t x615 = 360063758787333261LLU;
	uint16_t x616 = UINT16_MAX;
	uint64_t t141 = 2287LLU;

    t141 = (((x613%x614)&x615)/x616);

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x617 = INT32_MAX;
	int32_t x618 = -126826;
	volatile int32_t x619 = INT32_MIN;
	static volatile uint16_t x620 = 40U;
	static int32_t t142 = -44;

    t142 = (((x617%x618)&x619)/x620);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x621 = INT16_MIN;
	volatile int32_t x622 = INT32_MIN;
	int32_t x623 = INT32_MAX;

    t143 = (((x621%x622)&x623)/x624);

    if (t143 != 16909062) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x625 = 3667961920560722300LLU;
	int32_t x627 = INT32_MAX;
	int16_t x628 = -1;
	uint64_t t144 = 1902LLU;

    t144 = (((x625%x626)&x627)/x628);

    if (t144 != 0LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile int64_t x629 = INT64_MIN;
	int32_t x630 = -1;
	int16_t x631 = -1;
	int64_t x632 = -1LL;
	static int64_t t145 = 945912347LL;

    t145 = (((x629%x630)&x631)/x632);

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint16_t x633 = 3U;
	int16_t x634 = -1;
	volatile int32_t x635 = INT32_MAX;
	int32_t t146 = -937490496;

    t146 = (((x633%x634)&x635)/x636);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x637 = INT32_MIN;
	uint8_t x639 = 0U;
	int32_t x640 = INT32_MIN;

    t147 = (((x637%x638)&x639)/x640);

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x641 = UINT64_MAX;
	uint64_t x642 = 42894074LLU;
	uint64_t t148 = 6046001425LLU;

    t148 = (((x641%x642)&x643)/x644);

    if (t148 != 0LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x645 = INT32_MAX;
	int16_t x647 = 3;
	volatile int8_t x648 = 8;
	int32_t t149 = -11478;

    t149 = (((x645%x646)&x647)/x648);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x650 = -1LL;
	uint32_t x651 = UINT32_MAX;
	int32_t x652 = -1;
	int64_t t150 = 39285509111LL;

    t150 = (((x649%x650)&x651)/x652);

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x653 = INT8_MIN;
	int16_t x654 = -1;
	int32_t x655 = INT32_MIN;
	uint32_t x656 = 52821U;
	static volatile uint32_t t151 = 1909988U;

    t151 = (((x653%x654)&x655)/x656);

    if (t151 != 0U) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x657 = UINT16_MAX;
	static volatile int32_t x659 = -1;
	static int8_t x660 = INT8_MIN;
	int32_t t152 = 1961153;

    t152 = (((x657%x658)&x659)/x660);

    if (t152 != -255) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x662 = 60547619134114894LLU;
	uint8_t x663 = 82U;
	uint64_t x664 = 212319848400LLU;
	uint64_t t153 = 1609204292519LLU;

    t153 = (((x661%x662)&x663)/x664);

    if (t153 != 0LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint32_t x665 = UINT32_MAX;
	uint16_t x666 = 84U;
	volatile int64_t x668 = -4548529215098556807LL;
	volatile int64_t t154 = 72LL;

    t154 = (((x665%x666)&x667)/x668);

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static int64_t x669 = INT64_MIN;
	uint16_t x671 = 16856U;
	static int64_t x672 = INT64_MIN;
	volatile int64_t t155 = -988864535367210LL;

    t155 = (((x669%x670)&x671)/x672);

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint8_t x673 = UINT8_MAX;
	int16_t x674 = INT16_MAX;
	uint8_t x675 = 31U;
	uint8_t x676 = 101U;
	volatile int32_t t156 = 405;

    t156 = (((x673%x674)&x675)/x676);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x677 = INT8_MIN;
	int32_t x678 = -1;
	static int64_t x679 = 3263767520948LL;
	static volatile int8_t x680 = INT8_MIN;
	int64_t t157 = 41614LL;

    t157 = (((x677%x678)&x679)/x680);

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x682 = 1490;
	int16_t x683 = 7;
	int16_t x684 = 575;
	uint64_t t158 = 5698612669792491846LLU;

    t158 = (((x681%x682)&x683)/x684);

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint32_t x685 = 1199399U;
	static int8_t x686 = -1;
	int32_t x687 = INT32_MIN;
	int32_t x688 = INT32_MAX;
	uint32_t t159 = 2106774397U;

    t159 = (((x685%x686)&x687)/x688);

    if (t159 != 0U) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x689 = INT16_MAX;
	uint32_t x690 = 135146U;
	static int16_t x691 = -43;
	volatile int16_t x692 = -1;
	uint32_t t160 = 20612343U;

    t160 = (((x689%x690)&x691)/x692);

    if (t160 != 0U) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x693 = INT32_MAX;
	int8_t x695 = 14;
	int32_t t161 = -204;

    t161 = (((x693%x694)&x695)/x696);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static int64_t x697 = 15827905LL;
	volatile uint8_t x698 = 2U;
	uint64_t x700 = 17106009361LLU;
	uint64_t t162 = 396587531563LLU;

    t162 = (((x697%x698)&x699)/x700);

    if (t162 != 0LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x701 = UINT32_MAX;
	uint16_t x702 = 1758U;
	volatile int16_t x703 = INT16_MIN;
	uint64_t x704 = UINT64_MAX;
	uint64_t t163 = 66748481945LLU;

    t163 = (((x701%x702)&x703)/x704);

    if (t163 != 0LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x707 = 0;
	int32_t x708 = INT32_MAX;

    t164 = (((x705%x706)&x707)/x708);

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static int16_t x710 = INT16_MIN;
	static uint16_t x711 = 1U;
	static volatile uint32_t t165 = 123U;

    t165 = (((x709%x710)&x711)/x712);

    if (t165 != 0U) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x713 = 6U;
	uint64_t x714 = 2350784867701848862LLU;
	static volatile uint16_t x715 = UINT16_MAX;
	volatile int16_t x716 = INT16_MIN;
	uint64_t t166 = 664625349732228383LLU;

    t166 = (((x713%x714)&x715)/x716);

    if (t166 != 0LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x717 = INT32_MAX;
	int16_t x718 = -1;
	uint32_t x720 = 3825U;

    t167 = (((x717%x718)&x719)/x720);

    if (t167 != 0U) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int16_t x721 = 47;
	uint8_t x722 = 56U;
	int16_t x724 = -491;
	static int32_t t168 = -251;

    t168 = (((x721%x722)&x723)/x724);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x725 = -1LL;
	uint32_t x726 = 127U;
	int16_t x728 = -2;
	int64_t t169 = -2407862LL;

    t169 = (((x725%x726)&x727)/x728);

    if (t169 != -1073741823LL) { NG(); } else { ; }
	
}

void f170(void) {
    	static int16_t x730 = INT16_MIN;
	volatile int64_t t170 = -284652LL;

    t170 = (((x729%x730)&x731)/x732);

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x733 = UINT64_MAX;
	static int16_t x736 = INT16_MAX;
	volatile uint64_t t171 = 13478774LLU;

    t171 = (((x733%x734)&x735)/x736);

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x737 = 5LL;
	int8_t x739 = -1;
	volatile uint32_t x740 = 3591196U;
	uint64_t t172 = 374581931LLU;

    t172 = (((x737%x738)&x739)/x740);

    if (t172 != 0LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	static int16_t x741 = 0;
	int16_t x742 = INT16_MIN;
	uint8_t x743 = UINT8_MAX;
	volatile int32_t t173 = -2555;

    t173 = (((x741%x742)&x743)/x744);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x745 = 5763004U;
	uint8_t x746 = UINT8_MAX;
	static int16_t x747 = INT16_MIN;
	uint32_t x748 = UINT32_MAX;
	uint32_t t174 = 13U;

    t174 = (((x745%x746)&x747)/x748);

    if (t174 != 0U) { NG(); } else { ; }
	
}

void f175(void) {
    	static int8_t x750 = INT8_MIN;
	static int32_t x752 = -30664;
	int32_t t175 = 528642670;

    t175 = (((x749%x750)&x751)/x752);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint32_t x753 = UINT32_MAX;
	int32_t x754 = -28;
	volatile int64_t x755 = INT64_MIN;
	uint64_t x756 = 2056069LLU;
	uint64_t t176 = 3705LLU;

    t176 = (((x753%x754)&x755)/x756);

    if (t176 != 0LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x757 = INT32_MIN;
	volatile int32_t x758 = -1;
	int16_t x760 = -1;
	volatile int32_t t177 = -55756;

    t177 = (((x757%x758)&x759)/x760);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x761 = 8734U;
	static int8_t x762 = INT8_MIN;
	int64_t x763 = -1LL;
	int16_t x764 = -242;

    t178 = (((x761%x762)&x763)/x764);

    if (t178 != -36LL) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int16_t x765 = 1236;
	static int64_t x766 = INT64_MIN;
	uint16_t x767 = UINT16_MAX;

    t179 = (((x765%x766)&x767)/x768);

    if (t179 != 20LL) { NG(); } else { ; }
	
}

void f180(void) {
    	static int32_t x769 = INT32_MIN;
	int32_t x771 = -1;
	uint16_t x772 = 184U;
	uint32_t t180 = 6276796U;

    t180 = (((x769%x770)&x771)/x772);

    if (t180 != 11671106U) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x773 = UINT64_MAX;
	volatile int8_t x775 = INT8_MAX;
	int8_t x776 = INT8_MIN;

    t181 = (((x773%x774)&x775)/x776);

    if (t181 != 0LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x778 = INT8_MAX;
	volatile uint16_t x779 = 5U;
	static uint16_t x780 = 91U;
	volatile uint32_t t182 = 214634U;

    t182 = (((x777%x778)&x779)/x780);

    if (t182 != 0U) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x781 = 356U;
	volatile int16_t x782 = -4211;
	volatile int64_t x783 = INT64_MAX;

    t183 = (((x781%x782)&x783)/x784);

    if (t183 != 356LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x785 = -1;
	uint8_t x787 = UINT8_MAX;
	int32_t x788 = INT32_MIN;
	int32_t t184 = -48714387;

    t184 = (((x785%x786)&x787)/x788);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x793 = -1LL;
	uint8_t x794 = 5U;
	static uint8_t x796 = 5U;
	volatile int64_t t185 = -14212546427980LL;

    t185 = (((x793%x794)&x795)/x796);

    if (t185 != 25LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x797 = 6168;
	static int8_t x798 = INT8_MIN;
	int64_t x799 = -1LL;

    t186 = (((x797%x798)&x799)/x800);

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x801 = -20;
	int16_t x802 = INT16_MAX;
	int64_t x803 = -1LL;
	int8_t x804 = INT8_MIN;
	static int64_t t187 = -206799593047LL;

    t187 = (((x801%x802)&x803)/x804);

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x805 = INT16_MAX;
	volatile int64_t x806 = -1LL;
	static volatile int16_t x807 = INT16_MAX;
	static uint32_t x808 = 269176U;
	volatile int64_t t188 = -777LL;

    t188 = (((x805%x806)&x807)/x808);

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x809 = INT64_MAX;
	static int32_t x810 = INT32_MIN;
	int16_t x811 = INT16_MAX;
	int8_t x812 = -7;
	int64_t t189 = 30339488LL;

    t189 = (((x809%x810)&x811)/x812);

    if (t189 != -4681LL) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x813 = 12892046LLU;
	volatile int32_t x814 = 67;
	volatile int16_t x815 = -1;
	uint32_t x816 = 2U;
	uint64_t t190 = 1062LLU;

    t190 = (((x813%x814)&x815)/x816);

    if (t190 != 20LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x817 = 69U;
	uint32_t x818 = 137U;
	uint16_t x819 = 0U;
	static uint32_t t191 = 422429U;

    t191 = (((x817%x818)&x819)/x820);

    if (t191 != 0U) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x821 = -1LL;
	int8_t x823 = INT8_MAX;
	uint32_t x824 = UINT32_MAX;
	int64_t t192 = 514825LL;

    t192 = (((x821%x822)&x823)/x824);

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x825 = -22462;
	uint32_t x827 = 1038525U;
	int16_t x828 = 2639;

    t193 = (((x825%x826)&x827)/x828);

    if (t193 != 385U) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x829 = INT8_MIN;
	volatile uint16_t x831 = 5U;
	static int16_t x832 = -7932;
	volatile int32_t t194 = -1;

    t194 = (((x829%x830)&x831)/x832);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x833 = -1;
	uint8_t x835 = 1U;
	int64_t x836 = INT64_MAX;
	uint64_t t195 = 235025215LLU;

    t195 = (((x833%x834)&x835)/x836);

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x837 = 15921U;
	static int32_t x838 = INT32_MIN;
	static uint32_t x839 = 2U;
	volatile int16_t x840 = -1;
	volatile uint32_t t196 = 0U;

    t196 = (((x837%x838)&x839)/x840);

    if (t196 != 0U) { NG(); } else { ; }
	
}

void f197(void) {
    	static int16_t x843 = -410;
	uint64_t t197 = 241LLU;

    t197 = (((x841%x842)&x843)/x844);

    if (t197 != 1LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static int32_t x846 = INT32_MIN;
	uint64_t x847 = UINT64_MAX;
	uint32_t x848 = 3U;
	volatile uint64_t t198 = 3350023487LLU;

    t198 = (((x845%x846)&x847)/x848);

    if (t198 != 6148914691236506282LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x850 = INT16_MAX;
	static uint16_t x851 = 720U;
	int32_t x852 = 354;
	int64_t t199 = 1009326429848LL;

    t199 = (((x849%x850)&x851)/x852);

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

