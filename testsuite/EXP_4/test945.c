
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

int32_t x3 = -1;
static int32_t x7 = INT32_MIN;
static int8_t x13 = -3;
int8_t x22 = 1;
int16_t x24 = INT16_MAX;
static volatile int32_t x25 = 37020;
volatile int16_t x26 = INT16_MIN;
static uint32_t x28 = 13487U;
volatile int16_t x33 = INT16_MAX;
volatile uint16_t x36 = 115U;
int16_t x37 = INT16_MIN;
int32_t x40 = INT32_MIN;
uint8_t x41 = UINT8_MAX;
uint32_t x56 = 1U;
volatile int32_t t13 = 0;
uint32_t x59 = UINT32_MAX;
volatile int32_t t14 = 1;
static int8_t x61 = -39;
int64_t x63 = INT64_MIN;
int16_t x64 = 4187;
int32_t t15 = -11681068;
volatile uint8_t x66 = 4U;
static uint32_t x70 = UINT32_MAX;
int8_t x75 = 1;
int32_t x77 = -1;
int16_t x78 = -1;
int16_t x85 = INT16_MIN;
static int8_t x86 = -1;
static int16_t x87 = 2555;
int16_t x92 = INT16_MIN;
uint8_t x102 = UINT8_MAX;
uint64_t x106 = UINT64_MAX;
volatile int8_t x113 = 2;
int16_t x117 = INT16_MIN;
uint32_t x120 = 612U;
uint16_t x121 = UINT16_MAX;
static uint8_t x128 = 103U;
int32_t t31 = 1;
int8_t x136 = -3;
static volatile int16_t x140 = INT16_MAX;
int32_t x145 = INT32_MIN;
int64_t x166 = INT64_MAX;
int8_t x174 = INT8_MIN;
int32_t t42 = -887878648;
uint64_t x184 = 967LLU;
int64_t x191 = -1LL;
uint32_t x198 = 170U;
int32_t t47 = -655916;
uint8_t x201 = 56U;
int8_t x211 = 1;
static uint32_t x213 = 15607U;
int8_t x216 = INT8_MIN;
int32_t x218 = -1;
static int8_t x220 = -40;
uint8_t x222 = 0U;
int16_t x223 = INT16_MIN;
int32_t t53 = 537383135;
int16_t x230 = -162;
volatile uint64_t x233 = UINT64_MAX;
int8_t x249 = -45;
int8_t x250 = INT8_MIN;
int32_t t59 = 16529;
uint16_t x256 = UINT16_MAX;
int8_t x257 = INT8_MAX;
int8_t x259 = INT8_MIN;
int16_t x267 = INT16_MIN;
int16_t x269 = INT16_MAX;
static int16_t x271 = INT16_MAX;
int32_t x272 = INT32_MIN;
static uint32_t x277 = 239U;
int64_t x279 = -104129LL;
static int64_t x283 = INT64_MIN;
int8_t x287 = INT8_MAX;
volatile int16_t x291 = -37;
int8_t x299 = INT8_MAX;
int64_t x311 = INT64_MIN;
int8_t x312 = 4;
volatile int32_t t74 = 809;
volatile int16_t x317 = -1;
int16_t x321 = 0;
int32_t t79 = -1;
volatile int32_t t81 = 5930639;
uint16_t x343 = 78U;
static volatile uint8_t x356 = 100U;
static int32_t t85 = -7;
static uint16_t x357 = 292U;
volatile int32_t t87 = -67;
int64_t x366 = INT64_MAX;
int16_t x381 = -14;
volatile uint32_t x382 = 7U;
volatile int32_t t92 = -52694133;
uint8_t x388 = UINT8_MAX;
uint8_t x389 = 56U;
int32_t x393 = -344614637;
uint32_t x408 = UINT32_MAX;
volatile int32_t t98 = 1026;
int8_t x416 = 4;
int32_t t101 = 758814;
int8_t x422 = -8;
static volatile int8_t x424 = 1;
volatile int16_t x425 = INT16_MIN;
int64_t x427 = INT64_MAX;
uint16_t x437 = UINT16_MAX;
int32_t x439 = -5624731;
static uint32_t x444 = UINT32_MAX;
static int64_t x456 = -7354016788852LL;
volatile int64_t x462 = 128360869LL;
static volatile int32_t x465 = 261258;
uint16_t x468 = UINT16_MAX;
volatile int32_t t113 = 896932;
int8_t x469 = INT8_MIN;
volatile int32_t t117 = 71270666;
int32_t x487 = -58046690;
static int32_t x505 = -15;
int16_t x506 = INT16_MIN;
volatile int32_t x507 = -318026385;
int8_t x511 = INT8_MAX;
static volatile int32_t t126 = 333361683;
uint16_t x521 = 11U;
static uint8_t x525 = 3U;
int64_t x530 = -90731LL;
volatile int32_t t129 = 845373;
int16_t x534 = INT16_MIN;
volatile int32_t t131 = 6340525;
volatile int32_t t132 = -91380227;
int64_t x548 = -1LL;
volatile int32_t t133 = 2;
volatile uint16_t x554 = 9U;
static uint32_t x560 = 15457107U;
volatile int32_t t137 = -617847;
uint8_t x567 = UINT8_MAX;
uint8_t x570 = UINT8_MAX;
static int32_t x595 = 28559;
static int8_t x608 = INT8_MAX;
int32_t t148 = -6003780;
volatile uint32_t x611 = UINT32_MAX;
static int32_t x616 = 74530516;
volatile int32_t x623 = INT32_MIN;
static int16_t x624 = INT16_MIN;
static int16_t x626 = -1;
int64_t x633 = INT64_MIN;
int8_t x635 = INT8_MIN;
uint64_t x637 = UINT64_MAX;
uint64_t x644 = 25140181194699LLU;
int32_t x645 = -2048522;
int32_t t158 = 6429725;
uint16_t x659 = UINT16_MAX;
static int8_t x664 = INT8_MAX;
int16_t x668 = INT16_MIN;
volatile int64_t x669 = 2988232LL;
volatile int8_t x674 = INT8_MAX;
static uint64_t x676 = 16164LLU;
int32_t x679 = -31;
static uint64_t x687 = 860601LLU;
int32_t x688 = -9;
volatile int8_t x690 = 1;
volatile int64_t x697 = INT64_MAX;
int16_t x698 = INT16_MIN;
volatile uint64_t x708 = UINT64_MAX;
int8_t x734 = INT8_MIN;
static int16_t x743 = INT16_MIN;
static int64_t x746 = 28906933757411LL;
static int16_t x755 = INT16_MIN;
int16_t x760 = -359;
int64_t x764 = -1LL;
int64_t x765 = 140830857LL;
volatile int16_t x773 = INT16_MIN;
int32_t t190 = 1379;
int16_t x785 = -11531;
volatile uint32_t x786 = 290569U;
static volatile int16_t x788 = INT16_MIN;
volatile int16_t x791 = 4545;
volatile int32_t t194 = 15098;
uint64_t x795 = UINT64_MAX;
uint8_t x799 = 2U;
uint32_t x803 = 10U;
volatile int32_t t197 = -1952426;
int16_t x807 = INT16_MIN;
volatile int8_t x811 = -1;
int32_t t199 = -13604392;


void f0(void) {
    	int64_t x1 = -1LL;
	int64_t x2 = INT64_MIN;
	int8_t x4 = INT8_MIN;
	volatile int32_t t0 = 8720074;

    t0 = (x1!=(x2&(x3%x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int64_t x5 = INT64_MIN;
	int8_t x6 = INT8_MAX;
	int32_t x8 = -4643;
	volatile int32_t t1 = -63;

    t1 = (x5!=(x6&(x7%x8)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = 24915685758LLU;
	int16_t x10 = INT16_MIN;
	static uint16_t x11 = 179U;
	uint32_t x12 = 5360592U;
	volatile int32_t t2 = -419984374;

    t2 = (x9!=(x10&(x11%x12)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static int64_t x14 = INT64_MIN;
	volatile uint8_t x15 = 0U;
	uint8_t x16 = 4U;
	int32_t t3 = 7508;

    t3 = (x13!=(x14&(x15%x16)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x17 = INT32_MIN;
	int8_t x18 = 13;
	int64_t x19 = INT64_MIN;
	uint8_t x20 = 2U;
	int32_t t4 = 681794;

    t4 = (x17!=(x18&(x19%x20)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = INT64_MIN;
	static int8_t x23 = -3;
	int32_t t5 = 2398726;

    t5 = (x21!=(x22&(x23%x24)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x27 = UINT8_MAX;
	volatile int32_t t6 = 12;

    t6 = (x25!=(x26&(x27%x28)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = INT8_MIN;
	static int64_t x30 = INT64_MAX;
	int64_t x31 = INT64_MAX;
	volatile uint16_t x32 = 9186U;
	int32_t t7 = -1;

    t7 = (x29!=(x30&(x31%x32)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x34 = -1;
	int64_t x35 = INT64_MAX;
	int32_t t8 = -155;

    t8 = (x33!=(x34&(x35%x36)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x38 = INT8_MIN;
	int8_t x39 = 52;
	int32_t t9 = -12;

    t9 = (x37!=(x38&(x39%x40)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x42 = -1;
	static uint8_t x43 = 105U;
	static int32_t x44 = -1;
	static int32_t t10 = -450850241;

    t10 = (x41!=(x42&(x43%x44)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint8_t x45 = 20U;
	volatile int16_t x46 = INT16_MAX;
	volatile int64_t x47 = INT64_MAX;
	int32_t x48 = INT32_MIN;
	volatile int32_t t11 = 1388284;

    t11 = (x45!=(x46&(x47%x48)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint16_t x49 = 348U;
	uint32_t x50 = 25661U;
	uint8_t x51 = 4U;
	uint16_t x52 = UINT16_MAX;
	int32_t t12 = 28077098;

    t12 = (x49!=(x50&(x51%x52)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = -1;
	static volatile int16_t x54 = -15832;
	int64_t x55 = INT64_MAX;

    t13 = (x53!=(x54&(x55%x56)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = -1;
	int64_t x58 = 6877026292198LL;
	int32_t x60 = 121565;

    t14 = (x57!=(x58&(x59%x60)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static int8_t x62 = 0;

    t15 = (x61!=(x62&(x63%x64)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x65 = 117U;
	uint32_t x67 = UINT32_MAX;
	static int8_t x68 = INT8_MIN;
	int32_t t16 = -57172530;

    t16 = (x65!=(x66&(x67%x68)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint32_t x69 = 684U;
	static int8_t x71 = -1;
	uint16_t x72 = 6U;
	volatile int32_t t17 = -1822;

    t17 = (x69!=(x70&(x71%x72)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x73 = INT8_MIN;
	int16_t x74 = INT16_MIN;
	uint8_t x76 = 1U;
	volatile int32_t t18 = 0;

    t18 = (x73!=(x74&(x75%x76)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x79 = UINT32_MAX;
	volatile int64_t x80 = -1LL;
	int32_t t19 = 1;

    t19 = (x77!=(x78&(x79%x80)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int16_t x81 = INT16_MAX;
	volatile uint16_t x82 = 3U;
	static int16_t x83 = 67;
	int64_t x84 = 4376785071691626523LL;
	int32_t t20 = 1064997434;

    t20 = (x81!=(x82&(x83%x84)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x88 = -378411;
	int32_t t21 = -29153077;

    t21 = (x85!=(x86&(x87%x88)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = -45;
	int16_t x90 = INT16_MIN;
	static volatile uint8_t x91 = 0U;
	volatile int32_t t22 = -11786;

    t22 = (x89!=(x90&(x91%x92)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x93 = 3U;
	int8_t x94 = INT8_MIN;
	uint32_t x95 = 27043560U;
	uint32_t x96 = 215290324U;
	int32_t t23 = 95120;

    t23 = (x93!=(x94&(x95%x96)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x97 = INT8_MAX;
	int32_t x98 = INT32_MAX;
	int8_t x99 = -1;
	static uint16_t x100 = 218U;
	int32_t t24 = -1;

    t24 = (x97!=(x98&(x99%x100)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int8_t x101 = -1;
	uint16_t x103 = 15450U;
	volatile int64_t x104 = INT64_MAX;
	volatile int32_t t25 = -85;

    t25 = (x101!=(x102&(x103%x104)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint32_t x105 = UINT32_MAX;
	uint16_t x107 = 4U;
	int8_t x108 = 7;
	int32_t t26 = 0;

    t26 = (x105!=(x106&(x107%x108)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = -113689LL;
	int64_t x110 = INT64_MAX;
	volatile uint64_t x111 = 254127591LLU;
	static int16_t x112 = -1;
	volatile int32_t t27 = -5820;

    t27 = (x109!=(x110&(x111%x112)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x114 = -57759300;
	int8_t x115 = INT8_MIN;
	volatile int32_t x116 = -1;
	volatile int32_t t28 = -1150;

    t28 = (x113!=(x114&(x115%x116)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile uint32_t x118 = UINT32_MAX;
	int64_t x119 = INT64_MIN;
	int32_t t29 = 512941743;

    t29 = (x117!=(x118&(x119%x120)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x122 = 0;
	uint64_t x123 = 2955971083717178313LLU;
	int64_t x124 = -84LL;
	volatile int32_t t30 = -519957;

    t30 = (x121!=(x122&(x123%x124)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile uint32_t x125 = 80U;
	static uint8_t x126 = 10U;
	uint32_t x127 = 1086816240U;

    t31 = (x125!=(x126&(x127%x128)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x129 = INT16_MIN;
	int8_t x130 = INT8_MIN;
	uint64_t x131 = 236505044LLU;
	volatile uint64_t x132 = 1067378134LLU;
	int32_t t32 = 150;

    t32 = (x129!=(x130&(x131%x132)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = INT64_MIN;
	volatile int8_t x134 = -2;
	int16_t x135 = INT16_MIN;
	volatile int32_t t33 = 4;

    t33 = (x133!=(x134&(x135%x136)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x137 = INT64_MAX;
	int8_t x138 = INT8_MIN;
	int32_t x139 = INT32_MAX;
	volatile int32_t t34 = -9;

    t34 = (x137!=(x138&(x139%x140)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = INT16_MAX;
	volatile int8_t x142 = -8;
	int8_t x143 = INT8_MIN;
	int64_t x144 = INT64_MIN;
	int32_t t35 = -19;

    t35 = (x141!=(x142&(x143%x144)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x146 = 1743179LL;
	int64_t x147 = INT64_MAX;
	int64_t x148 = -1LL;
	volatile int32_t t36 = 192871;

    t36 = (x145!=(x146&(x147%x148)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x153 = -1;
	volatile uint32_t x154 = 4452827U;
	volatile int16_t x155 = -1;
	static volatile uint64_t x156 = 244010094801697LLU;
	int32_t t37 = 697;

    t37 = (x153!=(x154&(x155%x156)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint8_t x157 = UINT8_MAX;
	int16_t x158 = INT16_MIN;
	static int32_t x159 = INT32_MIN;
	uint16_t x160 = 133U;
	volatile int32_t t38 = -8043113;

    t38 = (x157!=(x158&(x159%x160)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint64_t x161 = UINT64_MAX;
	int16_t x162 = -1;
	static int32_t x163 = INT32_MAX;
	volatile int8_t x164 = INT8_MIN;
	static int32_t t39 = -27;

    t39 = (x161!=(x162&(x163%x164)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x165 = -1;
	int64_t x167 = INT64_MIN;
	int8_t x168 = -3;
	int32_t t40 = 0;

    t40 = (x165!=(x166&(x167%x168)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x173 = 120LL;
	int64_t x175 = -1919LL;
	static int32_t x176 = -9404;
	int32_t t41 = -3;

    t41 = (x173!=(x174&(x175%x176)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x177 = UINT8_MAX;
	uint8_t x178 = 5U;
	uint32_t x179 = 0U;
	int64_t x180 = 1660181149212590740LL;

    t42 = (x177!=(x178&(x179%x180)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x181 = 4977229570LLU;
	static int64_t x182 = -1464165636206037LL;
	uint16_t x183 = UINT16_MAX;
	volatile int32_t t43 = -834118;

    t43 = (x181!=(x182&(x183%x184)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int64_t x185 = INT64_MAX;
	int64_t x186 = -3181LL;
	int32_t x187 = INT32_MIN;
	uint64_t x188 = UINT64_MAX;
	volatile int32_t t44 = -7480737;

    t44 = (x185!=(x186&(x187%x188)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x189 = UINT64_MAX;
	volatile uint64_t x190 = 3516567942333870207LLU;
	int16_t x192 = INT16_MAX;
	int32_t t45 = 31277;

    t45 = (x189!=(x190&(x191%x192)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x193 = INT32_MIN;
	static uint64_t x194 = UINT64_MAX;
	int64_t x195 = INT64_MIN;
	int8_t x196 = 3;
	int32_t t46 = 3647847;

    t46 = (x193!=(x194&(x195%x196)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint32_t x197 = UINT32_MAX;
	static uint64_t x199 = 7832261187997266LLU;
	volatile int32_t x200 = -1;

    t47 = (x197!=(x198&(x199%x200)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x202 = 1672590418LL;
	uint64_t x203 = 10129716653843849LLU;
	int16_t x204 = -1;
	static int32_t t48 = -12964930;

    t48 = (x201!=(x202&(x203%x204)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x209 = -1;
	uint16_t x210 = 3U;
	volatile uint32_t x212 = UINT32_MAX;
	volatile int32_t t49 = 11728;

    t49 = (x209!=(x210&(x211%x212)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int32_t x214 = INT32_MIN;
	uint64_t x215 = 867108031679339LLU;
	volatile int32_t t50 = 3503670;

    t50 = (x213!=(x214&(x215%x216)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static int16_t x217 = -1;
	volatile int32_t x219 = 593792;
	static volatile int32_t t51 = 17183232;

    t51 = (x217!=(x218&(x219%x220)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x221 = INT64_MIN;
	int32_t x224 = INT32_MAX;
	int32_t t52 = -6589;

    t52 = (x221!=(x222&(x223%x224)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x225 = INT64_MAX;
	int32_t x226 = INT32_MIN;
	int16_t x227 = -1;
	uint32_t x228 = 5U;

    t53 = (x225!=(x226&(x227%x228)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x229 = -1;
	int32_t x231 = 3314;
	int32_t x232 = -1;
	int32_t t54 = 1;

    t54 = (x229!=(x230&(x231%x232)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x234 = 25633661LL;
	static int16_t x235 = INT16_MIN;
	uint64_t x236 = UINT64_MAX;
	volatile int32_t t55 = 499;

    t55 = (x233!=(x234&(x235%x236)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x237 = 509U;
	int16_t x238 = 10;
	int8_t x239 = -42;
	int64_t x240 = -1LL;
	volatile int32_t t56 = 947491;

    t56 = (x237!=(x238&(x239%x240)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x241 = UINT64_MAX;
	uint16_t x242 = UINT16_MAX;
	int8_t x243 = 14;
	int32_t x244 = INT32_MAX;
	volatile int32_t t57 = 0;

    t57 = (x241!=(x242&(x243%x244)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x245 = -1;
	int8_t x246 = -1;
	uint32_t x247 = UINT32_MAX;
	int64_t x248 = INT64_MAX;
	volatile int32_t t58 = -2611958;

    t58 = (x245!=(x246&(x247%x248)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x251 = UINT16_MAX;
	int32_t x252 = INT32_MIN;

    t59 = (x249!=(x250&(x251%x252)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x253 = -5;
	volatile uint8_t x254 = UINT8_MAX;
	int32_t x255 = -2011119;
	int32_t t60 = 793;

    t60 = (x253!=(x254&(x255%x256)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x258 = 607;
	static int16_t x260 = 656;
	volatile int32_t t61 = 5371;

    t61 = (x257!=(x258&(x259%x260)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x261 = -3;
	uint64_t x262 = 4112429445920908308LLU;
	volatile uint16_t x263 = UINT16_MAX;
	static int64_t x264 = INT64_MIN;
	int32_t t62 = 52;

    t62 = (x261!=(x262&(x263%x264)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint16_t x265 = 98U;
	volatile uint8_t x266 = 26U;
	uint32_t x268 = 59883499U;
	volatile int32_t t63 = -10386862;

    t63 = (x265!=(x266&(x267%x268)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x270 = 3292U;
	int32_t t64 = -1;

    t64 = (x269!=(x270&(x271%x272)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x273 = INT64_MAX;
	static int64_t x274 = INT64_MAX;
	volatile int16_t x275 = INT16_MAX;
	int8_t x276 = INT8_MIN;
	volatile int32_t t65 = 62932;

    t65 = (x273!=(x274&(x275%x276)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x278 = INT64_MIN;
	uint64_t x280 = UINT64_MAX;
	int32_t t66 = -3330999;

    t66 = (x277!=(x278&(x279%x280)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x281 = -1;
	volatile int8_t x282 = -40;
	uint64_t x284 = 244253707LLU;
	volatile int32_t t67 = 3;

    t67 = (x281!=(x282&(x283%x284)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x285 = UINT32_MAX;
	static int32_t x286 = 413477726;
	int16_t x288 = INT16_MIN;
	static volatile int32_t t68 = -47;

    t68 = (x285!=(x286&(x287%x288)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x289 = INT8_MIN;
	static int8_t x290 = 0;
	uint64_t x292 = 50895137844339LLU;
	volatile int32_t t69 = 77635;

    t69 = (x289!=(x290&(x291%x292)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x293 = INT16_MAX;
	int16_t x294 = INT16_MIN;
	int32_t x295 = -1;
	volatile int16_t x296 = 14;
	volatile int32_t t70 = 0;

    t70 = (x293!=(x294&(x295%x296)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile int32_t x297 = -98;
	uint16_t x298 = 899U;
	uint64_t x300 = 122555465LLU;
	int32_t t71 = 1133970;

    t71 = (x297!=(x298&(x299%x300)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint32_t x301 = UINT32_MAX;
	volatile int32_t x302 = 130;
	int16_t x303 = INT16_MIN;
	int32_t x304 = INT32_MIN;
	volatile int32_t t72 = 7;

    t72 = (x301!=(x302&(x303%x304)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x305 = INT64_MIN;
	uint8_t x306 = 1U;
	volatile uint8_t x307 = 2U;
	uint32_t x308 = 6242609U;
	int32_t t73 = -29362206;

    t73 = (x305!=(x306&(x307%x308)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x309 = -1LL;
	uint16_t x310 = 12U;

    t74 = (x309!=(x310&(x311%x312)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x313 = 2076305U;
	volatile uint8_t x314 = 72U;
	uint16_t x315 = 2U;
	int16_t x316 = INT16_MIN;
	volatile int32_t t75 = 9933735;

    t75 = (x313!=(x314&(x315%x316)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x318 = INT16_MIN;
	uint32_t x319 = UINT32_MAX;
	static int8_t x320 = INT8_MAX;
	int32_t t76 = 11;

    t76 = (x317!=(x318&(x319%x320)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int64_t x322 = INT64_MIN;
	uint32_t x323 = 665033U;
	int64_t x324 = INT64_MIN;
	volatile int32_t t77 = 328224;

    t77 = (x321!=(x322&(x323%x324)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x325 = UINT32_MAX;
	int64_t x326 = INT64_MIN;
	static uint32_t x327 = 3043U;
	uint32_t x328 = 971983U;
	int32_t t78 = -125;

    t78 = (x325!=(x326&(x327%x328)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x329 = -3996424222519554LL;
	int16_t x330 = INT16_MIN;
	int16_t x331 = 1266;
	int64_t x332 = INT64_MAX;

    t79 = (x329!=(x330&(x331%x332)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x333 = INT16_MIN;
	uint16_t x334 = UINT16_MAX;
	uint8_t x335 = 15U;
	uint16_t x336 = 27017U;
	volatile int32_t t80 = 8203502;

    t80 = (x333!=(x334&(x335%x336)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x337 = INT32_MAX;
	uint32_t x338 = UINT32_MAX;
	volatile uint16_t x339 = 914U;
	uint8_t x340 = UINT8_MAX;

    t81 = (x337!=(x338&(x339%x340)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint64_t x341 = UINT64_MAX;
	volatile uint32_t x342 = 1914678960U;
	static uint8_t x344 = 53U;
	int32_t t82 = -1;

    t82 = (x341!=(x342&(x343%x344)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int32_t x345 = INT32_MAX;
	int64_t x346 = 2657911LL;
	uint16_t x347 = UINT16_MAX;
	uint32_t x348 = 2044048U;
	int32_t t83 = 62318911;

    t83 = (x345!=(x346&(x347%x348)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x349 = 104U;
	int16_t x350 = -157;
	int32_t x351 = INT32_MIN;
	int16_t x352 = -67;
	volatile int32_t t84 = 244711778;

    t84 = (x349!=(x350&(x351%x352)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x353 = INT32_MIN;
	volatile uint16_t x354 = 0U;
	int8_t x355 = 1;

    t85 = (x353!=(x354&(x355%x356)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x358 = INT64_MAX;
	int64_t x359 = -854961LL;
	uint32_t x360 = 279U;
	int32_t t86 = -3544;

    t86 = (x357!=(x358&(x359%x360)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x361 = INT64_MAX;
	static uint64_t x362 = UINT64_MAX;
	static int32_t x363 = INT32_MAX;
	volatile int32_t x364 = INT32_MAX;

    t87 = (x361!=(x362&(x363%x364)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x365 = -1;
	volatile int32_t x367 = 2;
	uint64_t x368 = UINT64_MAX;
	static volatile int32_t t88 = 393335;

    t88 = (x365!=(x366&(x367%x368)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x369 = INT8_MIN;
	volatile int64_t x370 = INT64_MIN;
	int64_t x371 = -98916LL;
	static int64_t x372 = INT64_MIN;
	int32_t t89 = -60;

    t89 = (x369!=(x370&(x371%x372)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x373 = 1;
	int64_t x374 = INT64_MIN;
	static uint32_t x375 = UINT32_MAX;
	static int8_t x376 = INT8_MIN;
	int32_t t90 = 4391002;

    t90 = (x373!=(x374&(x375%x376)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x377 = 21U;
	volatile uint8_t x378 = UINT8_MAX;
	volatile uint64_t x379 = UINT64_MAX;
	uint64_t x380 = 54151750471LLU;
	static volatile int32_t t91 = -6269720;

    t91 = (x377!=(x378&(x379%x380)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x383 = INT16_MAX;
	int8_t x384 = INT8_MIN;

    t92 = (x381!=(x382&(x383%x384)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x385 = INT16_MIN;
	uint32_t x386 = 518479U;
	static int16_t x387 = 0;
	static int32_t t93 = -964626856;

    t93 = (x385!=(x386&(x387%x388)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x390 = INT8_MIN;
	int16_t x391 = INT16_MIN;
	uint64_t x392 = 1042268558722269LLU;
	volatile int32_t t94 = -1;

    t94 = (x389!=(x390&(x391%x392)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x394 = -46004017739LL;
	static int8_t x395 = INT8_MIN;
	static uint64_t x396 = UINT64_MAX;
	volatile int32_t t95 = 8044376;

    t95 = (x393!=(x394&(x395%x396)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x397 = INT32_MIN;
	uint16_t x398 = 4768U;
	uint8_t x399 = UINT8_MAX;
	int16_t x400 = 3971;
	volatile int32_t t96 = -3677;

    t96 = (x397!=(x398&(x399%x400)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x401 = UINT64_MAX;
	int64_t x402 = -1LL;
	uint64_t x403 = UINT64_MAX;
	uint8_t x404 = 54U;
	int32_t t97 = -1;

    t97 = (x401!=(x402&(x403%x404)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x405 = -2;
	volatile int32_t x406 = -19;
	int8_t x407 = INT8_MAX;

    t98 = (x405!=(x406&(x407%x408)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint64_t x409 = 1554261180572009LLU;
	int8_t x410 = 45;
	int64_t x411 = -1LL;
	int16_t x412 = INT16_MIN;
	int32_t t99 = -62067138;

    t99 = (x409!=(x410&(x411%x412)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x413 = -1;
	int32_t x414 = INT32_MIN;
	int32_t x415 = INT32_MIN;
	volatile int32_t t100 = -10;

    t100 = (x413!=(x414&(x415%x416)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x417 = 8U;
	int16_t x418 = -27;
	uint16_t x419 = 4U;
	uint16_t x420 = UINT16_MAX;

    t101 = (x417!=(x418&(x419%x420)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int8_t x421 = INT8_MAX;
	static uint64_t x423 = 25898413858298036LLU;
	volatile int32_t t102 = -16196203;

    t102 = (x421!=(x422&(x423%x424)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x426 = 130565;
	volatile int32_t x428 = -690974123;
	static volatile int32_t t103 = -326;

    t103 = (x425!=(x426&(x427%x428)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x429 = -54;
	uint32_t x430 = 82368513U;
	int8_t x431 = -1;
	int16_t x432 = -329;
	static int32_t t104 = -46;

    t104 = (x429!=(x430&(x431%x432)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x433 = -1LL;
	int8_t x434 = INT8_MAX;
	uint8_t x435 = 8U;
	volatile int16_t x436 = INT16_MIN;
	int32_t t105 = 27;

    t105 = (x433!=(x434&(x435%x436)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x438 = INT8_MAX;
	int16_t x440 = INT16_MIN;
	int32_t t106 = 61522;

    t106 = (x437!=(x438&(x439%x440)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static int16_t x441 = INT16_MAX;
	static uint64_t x442 = 17LLU;
	int8_t x443 = INT8_MIN;
	int32_t t107 = 14947;

    t107 = (x441!=(x442&(x443%x444)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x445 = 13508LLU;
	static uint16_t x446 = UINT16_MAX;
	static int32_t x447 = INT32_MIN;
	uint16_t x448 = UINT16_MAX;
	static volatile int32_t t108 = -1386;

    t108 = (x445!=(x446&(x447%x448)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x449 = 32123LLU;
	int16_t x450 = 1493;
	static int32_t x451 = -1;
	int8_t x452 = INT8_MIN;
	static volatile int32_t t109 = 122;

    t109 = (x449!=(x450&(x451%x452)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x453 = 0;
	int32_t x454 = INT32_MIN;
	uint16_t x455 = 9924U;
	int32_t t110 = 239670251;

    t110 = (x453!=(x454&(x455%x456)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int16_t x457 = -1;
	int16_t x458 = INT16_MIN;
	static int64_t x459 = INT64_MIN;
	static int8_t x460 = INT8_MAX;
	volatile int32_t t111 = 14;

    t111 = (x457!=(x458&(x459%x460)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x461 = 53U;
	uint64_t x463 = 16236083324LLU;
	int32_t x464 = -9327738;
	volatile int32_t t112 = 1976398;

    t112 = (x461!=(x462&(x463%x464)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x466 = INT32_MIN;
	static volatile int64_t x467 = 152974030538LL;

    t113 = (x465!=(x466&(x467%x468)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x470 = -1LL;
	int64_t x471 = INT64_MIN;
	int16_t x472 = INT16_MIN;
	static int32_t t114 = 807066647;

    t114 = (x469!=(x470&(x471%x472)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static int64_t x473 = INT64_MAX;
	volatile int16_t x474 = INT16_MIN;
	uint8_t x475 = UINT8_MAX;
	int64_t x476 = 3077340LL;
	int32_t t115 = -163;

    t115 = (x473!=(x474&(x475%x476)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int8_t x477 = INT8_MIN;
	volatile int64_t x478 = -547039395LL;
	int64_t x479 = INT64_MAX;
	volatile int32_t x480 = -1031344223;
	int32_t t116 = 61516;

    t116 = (x477!=(x478&(x479%x480)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int8_t x481 = -20;
	int8_t x482 = -1;
	volatile int16_t x483 = 2070;
	uint16_t x484 = UINT16_MAX;

    t117 = (x481!=(x482&(x483%x484)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static int32_t x485 = INT32_MIN;
	int32_t x486 = INT32_MAX;
	static int32_t x488 = INT32_MIN;
	volatile int32_t t118 = 3216229;

    t118 = (x485!=(x486&(x487%x488)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x489 = UINT8_MAX;
	uint8_t x490 = 1U;
	static int16_t x491 = 0;
	static uint32_t x492 = 5573827U;
	volatile int32_t t119 = -492;

    t119 = (x489!=(x490&(x491%x492)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x493 = -1LL;
	int8_t x494 = -54;
	volatile int64_t x495 = -6748LL;
	int32_t x496 = -1;
	volatile int32_t t120 = 103286;

    t120 = (x493!=(x494&(x495%x496)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x497 = 66U;
	int16_t x498 = INT16_MIN;
	volatile int16_t x499 = -1;
	int16_t x500 = -1;
	static int32_t t121 = 337814470;

    t121 = (x497!=(x498&(x499%x500)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x501 = INT16_MIN;
	static volatile uint16_t x502 = 10U;
	volatile uint32_t x503 = 43643U;
	volatile int64_t x504 = INT64_MAX;
	volatile int32_t t122 = 95229;

    t122 = (x501!=(x502&(x503%x504)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int64_t x508 = INT64_MIN;
	int32_t t123 = 10;

    t123 = (x505!=(x506&(x507%x508)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x509 = INT16_MIN;
	volatile int64_t x510 = 1456266862654840710LL;
	int16_t x512 = INT16_MIN;
	int32_t t124 = 43013;

    t124 = (x509!=(x510&(x511%x512)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x513 = -1;
	volatile uint64_t x514 = 8266882542030LLU;
	volatile int16_t x515 = -6858;
	static int32_t x516 = INT32_MIN;
	int32_t t125 = 17;

    t125 = (x513!=(x514&(x515%x516)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x517 = -38;
	uint8_t x518 = 98U;
	volatile int64_t x519 = 196608479456027613LL;
	static int64_t x520 = INT64_MIN;

    t126 = (x517!=(x518&(x519%x520)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x522 = INT32_MIN;
	static int16_t x523 = -1;
	uint16_t x524 = UINT16_MAX;
	volatile int32_t t127 = -361569;

    t127 = (x521!=(x522&(x523%x524)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int16_t x526 = INT16_MIN;
	uint64_t x527 = UINT64_MAX;
	int16_t x528 = 539;
	static int32_t t128 = -7;

    t128 = (x525!=(x526&(x527%x528)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x529 = 12U;
	int64_t x531 = -5553630LL;
	static int16_t x532 = 3;

    t129 = (x529!=(x530&(x531%x532)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile uint16_t x533 = UINT16_MAX;
	uint32_t x535 = 3755482U;
	int32_t x536 = -3837865;
	static volatile int32_t t130 = -1103;

    t130 = (x533!=(x534&(x535%x536)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x537 = INT16_MIN;
	uint16_t x538 = 10919U;
	uint64_t x539 = 42LLU;
	uint64_t x540 = UINT64_MAX;

    t131 = (x537!=(x538&(x539%x540)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int16_t x541 = INT16_MIN;
	int16_t x542 = -1;
	volatile int8_t x543 = INT8_MAX;
	int32_t x544 = INT32_MIN;

    t132 = (x541!=(x542&(x543%x544)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static int64_t x545 = INT64_MAX;
	int16_t x546 = INT16_MIN;
	volatile int8_t x547 = INT8_MAX;

    t133 = (x545!=(x546&(x547%x548)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x549 = 68U;
	uint32_t x550 = 2539U;
	uint16_t x551 = UINT16_MAX;
	static int16_t x552 = -3360;
	static volatile int32_t t134 = 81389686;

    t134 = (x549!=(x550&(x551%x552)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x553 = INT16_MAX;
	int64_t x555 = 67571855855LL;
	int64_t x556 = INT64_MIN;
	int32_t t135 = 53939545;

    t135 = (x553!=(x554&(x555%x556)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x557 = INT32_MIN;
	static uint16_t x558 = UINT16_MAX;
	static int16_t x559 = -1;
	static volatile int32_t t136 = -966198648;

    t136 = (x557!=(x558&(x559%x560)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x561 = -4;
	uint16_t x562 = 5172U;
	int64_t x563 = INT64_MIN;
	int64_t x564 = INT64_MIN;

    t137 = (x561!=(x562&(x563%x564)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x565 = INT16_MAX;
	volatile int64_t x566 = 118LL;
	int32_t x568 = INT32_MIN;
	volatile int32_t t138 = -2280904;

    t138 = (x565!=(x566&(x567%x568)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x569 = -1;
	volatile uint8_t x571 = 59U;
	uint64_t x572 = UINT64_MAX;
	static volatile int32_t t139 = 3267;

    t139 = (x569!=(x570&(x571%x572)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x573 = 0LL;
	static int8_t x574 = 1;
	int64_t x575 = INT64_MAX;
	static uint32_t x576 = 993862103U;
	int32_t t140 = 7;

    t140 = (x573!=(x574&(x575%x576)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x577 = INT64_MAX;
	uint32_t x578 = 10947425U;
	static uint32_t x579 = 930366U;
	int64_t x580 = -2LL;
	volatile int32_t t141 = -268386796;

    t141 = (x577!=(x578&(x579%x580)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x581 = 13749;
	static int8_t x582 = INT8_MIN;
	int64_t x583 = 1945672LL;
	int32_t x584 = 6012498;
	volatile int32_t t142 = 266526;

    t142 = (x581!=(x582&(x583%x584)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint16_t x585 = 3U;
	int8_t x586 = -43;
	int16_t x587 = 272;
	int64_t x588 = INT64_MIN;
	int32_t t143 = 58;

    t143 = (x585!=(x586&(x587%x588)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x589 = -1LL;
	volatile uint64_t x590 = 1300453894573221LLU;
	uint32_t x591 = 201141U;
	uint32_t x592 = UINT32_MAX;
	volatile int32_t t144 = -130780831;

    t144 = (x589!=(x590&(x591%x592)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x593 = 3;
	uint16_t x594 = UINT16_MAX;
	volatile uint64_t x596 = 5LLU;
	volatile int32_t t145 = 4113689;

    t145 = (x593!=(x594&(x595%x596)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x597 = INT32_MAX;
	static uint16_t x598 = 49U;
	uint8_t x599 = 10U;
	int8_t x600 = -1;
	int32_t t146 = 3;

    t146 = (x597!=(x598&(x599%x600)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x601 = UINT8_MAX;
	int32_t x602 = 93;
	volatile int8_t x603 = -3;
	uint16_t x604 = 2U;
	volatile int32_t t147 = -73635;

    t147 = (x601!=(x602&(x603%x604)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static int16_t x605 = INT16_MIN;
	int16_t x606 = -1;
	static int64_t x607 = INT64_MIN;

    t148 = (x605!=(x606&(x607%x608)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int32_t x609 = 34401;
	int16_t x610 = -1;
	int64_t x612 = 112156568563887LL;
	static volatile int32_t t149 = -14949655;

    t149 = (x609!=(x610&(x611%x612)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static int64_t x613 = -518648349099LL;
	static uint8_t x614 = UINT8_MAX;
	volatile uint64_t x615 = UINT64_MAX;
	volatile int32_t t150 = -1046712161;

    t150 = (x613!=(x614&(x615%x616)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int64_t x617 = INT64_MIN;
	uint64_t x618 = UINT64_MAX;
	volatile int64_t x619 = INT64_MIN;
	volatile uint32_t x620 = 73347U;
	int32_t t151 = -112030;

    t151 = (x617!=(x618&(x619%x620)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x621 = INT8_MAX;
	int32_t x622 = INT32_MAX;
	static int32_t t152 = -9;

    t152 = (x621!=(x622&(x623%x624)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x625 = UINT16_MAX;
	uint64_t x627 = UINT64_MAX;
	volatile uint16_t x628 = UINT16_MAX;
	int32_t t153 = 56;

    t153 = (x625!=(x626&(x627%x628)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x629 = INT64_MAX;
	uint64_t x630 = 6471LLU;
	uint32_t x631 = 1139U;
	int32_t x632 = -2;
	static int32_t t154 = -5098941;

    t154 = (x629!=(x630&(x631%x632)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x634 = -280;
	static int32_t x636 = INT32_MIN;
	static int32_t t155 = 113016;

    t155 = (x633!=(x634&(x635%x636)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x638 = INT16_MIN;
	volatile int64_t x639 = -88012513LL;
	uint64_t x640 = UINT64_MAX;
	int32_t t156 = 6;

    t156 = (x637!=(x638&(x639%x640)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x641 = 34U;
	static int32_t x642 = 647812147;
	uint16_t x643 = 99U;
	int32_t t157 = -1837;

    t157 = (x641!=(x642&(x643%x644)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x646 = -5869;
	int64_t x647 = INT64_MAX;
	int8_t x648 = -1;

    t158 = (x645!=(x646&(x647%x648)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile uint32_t x649 = 272397979U;
	int8_t x650 = INT8_MIN;
	volatile uint8_t x651 = 1U;
	static int16_t x652 = 1662;
	int32_t t159 = -99;

    t159 = (x649!=(x650&(x651%x652)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x653 = INT32_MAX;
	int64_t x654 = -185LL;
	volatile int16_t x655 = 136;
	volatile int32_t x656 = INT32_MIN;
	volatile int32_t t160 = -10236;

    t160 = (x653!=(x654&(x655%x656)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x657 = INT8_MAX;
	int32_t x658 = -1;
	volatile int32_t x660 = INT32_MAX;
	static volatile int32_t t161 = -1022845;

    t161 = (x657!=(x658&(x659%x660)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x661 = INT32_MIN;
	static uint8_t x662 = 5U;
	int32_t x663 = -178;
	volatile int32_t t162 = -1;

    t162 = (x661!=(x662&(x663%x664)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static int32_t x665 = -7514658;
	static uint32_t x666 = 573120U;
	volatile int64_t x667 = INT64_MIN;
	int32_t t163 = -25;

    t163 = (x665!=(x666&(x667%x668)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x670 = 15;
	int64_t x671 = -1LL;
	static volatile uint32_t x672 = 5049U;
	int32_t t164 = -75926067;

    t164 = (x669!=(x670&(x671%x672)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x673 = UINT16_MAX;
	uint32_t x675 = 37574970U;
	int32_t t165 = -9770;

    t165 = (x673!=(x674&(x675%x676)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x677 = -1;
	int64_t x678 = 81LL;
	int64_t x680 = 1945087618LL;
	volatile int32_t t166 = 699365560;

    t166 = (x677!=(x678&(x679%x680)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x681 = -1LL;
	static int64_t x682 = INT64_MIN;
	int64_t x683 = INT64_MIN;
	static volatile int32_t x684 = -15251;
	int32_t t167 = 957598;

    t167 = (x681!=(x682&(x683%x684)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x685 = UINT64_MAX;
	static int32_t x686 = INT32_MIN;
	static volatile int32_t t168 = 1;

    t168 = (x685!=(x686&(x687%x688)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x689 = 0;
	uint16_t x691 = 5U;
	uint16_t x692 = 1113U;
	int32_t t169 = 5276704;

    t169 = (x689!=(x690&(x691%x692)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint16_t x693 = 665U;
	volatile int16_t x694 = INT16_MIN;
	int16_t x695 = -233;
	int16_t x696 = 12;
	int32_t t170 = -24713;

    t170 = (x693!=(x694&(x695%x696)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static int8_t x699 = 7;
	volatile int16_t x700 = INT16_MIN;
	volatile int32_t t171 = 11180240;

    t171 = (x697!=(x698&(x699%x700)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x701 = 3U;
	volatile int32_t x702 = INT32_MIN;
	uint64_t x703 = 203500LLU;
	volatile int64_t x704 = -218887795680974LL;
	int32_t t172 = -54;

    t172 = (x701!=(x702&(x703%x704)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x705 = INT32_MAX;
	static int8_t x706 = 0;
	static int8_t x707 = INT8_MAX;
	volatile int32_t t173 = 37332502;

    t173 = (x705!=(x706&(x707%x708)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x709 = -121454LL;
	int8_t x710 = -13;
	int16_t x711 = INT16_MIN;
	static uint64_t x712 = 3LLU;
	int32_t t174 = -1225;

    t174 = (x709!=(x710&(x711%x712)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile int64_t x713 = 2172033546LL;
	static int64_t x714 = 0LL;
	uint16_t x715 = 27U;
	int8_t x716 = -1;
	int32_t t175 = -18;

    t175 = (x713!=(x714&(x715%x716)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x717 = INT64_MAX;
	volatile uint8_t x718 = 0U;
	int64_t x719 = -51320356437LL;
	uint16_t x720 = UINT16_MAX;
	static int32_t t176 = -2897;

    t176 = (x717!=(x718&(x719%x720)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x721 = 26U;
	volatile int64_t x722 = INT64_MIN;
	int16_t x723 = 0;
	uint64_t x724 = 16180412LLU;
	static volatile int32_t t177 = 485;

    t177 = (x721!=(x722&(x723%x724)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int16_t x725 = INT16_MIN;
	int16_t x726 = INT16_MIN;
	static int8_t x727 = 2;
	int8_t x728 = INT8_MIN;
	volatile int32_t t178 = 1;

    t178 = (x725!=(x726&(x727%x728)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x729 = 2LLU;
	volatile uint32_t x730 = 57601762U;
	int16_t x731 = INT16_MAX;
	uint8_t x732 = 28U;
	int32_t t179 = -23648132;

    t179 = (x729!=(x730&(x731%x732)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x733 = -1;
	uint16_t x735 = 31786U;
	int16_t x736 = 2;
	volatile int32_t t180 = -1;

    t180 = (x733!=(x734&(x735%x736)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int64_t x737 = INT64_MAX;
	uint8_t x738 = 3U;
	static int32_t x739 = INT32_MAX;
	int64_t x740 = INT64_MIN;
	volatile int32_t t181 = -180980259;

    t181 = (x737!=(x738&(x739%x740)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x741 = 14946U;
	uint64_t x742 = 24LLU;
	int32_t x744 = -1;
	volatile int32_t t182 = -571;

    t182 = (x741!=(x742&(x743%x744)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x745 = 21683932236LL;
	uint64_t x747 = UINT64_MAX;
	static int64_t x748 = INT64_MIN;
	int32_t t183 = -130869;

    t183 = (x745!=(x746&(x747%x748)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int8_t x749 = -12;
	volatile int32_t x750 = -7;
	int64_t x751 = INT64_MIN;
	int64_t x752 = 815129104LL;
	static volatile int32_t t184 = 1;

    t184 = (x749!=(x750&(x751%x752)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x753 = INT32_MIN;
	uint16_t x754 = 5U;
	int32_t x756 = INT32_MIN;
	int32_t t185 = 167;

    t185 = (x753!=(x754&(x755%x756)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static int8_t x757 = INT8_MIN;
	static uint8_t x758 = 25U;
	int32_t x759 = INT32_MIN;
	volatile int32_t t186 = -195396164;

    t186 = (x757!=(x758&(x759%x760)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x761 = -59763LL;
	int8_t x762 = INT8_MAX;
	uint16_t x763 = 16439U;
	int32_t t187 = 1;

    t187 = (x761!=(x762&(x763%x764)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x766 = INT32_MIN;
	uint64_t x767 = 1899667LLU;
	uint64_t x768 = 4311695432LLU;
	int32_t t188 = -9;

    t188 = (x765!=(x766&(x767%x768)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int8_t x769 = -1;
	uint8_t x770 = 36U;
	volatile int32_t x771 = INT32_MIN;
	uint8_t x772 = UINT8_MAX;
	static int32_t t189 = 6830582;

    t189 = (x769!=(x770&(x771%x772)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x774 = -3;
	volatile uint8_t x775 = 5U;
	volatile int16_t x776 = -8313;

    t190 = (x773!=(x774&(x775%x776)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x777 = UINT8_MAX;
	int32_t x778 = INT32_MIN;
	int8_t x779 = 7;
	int32_t x780 = -1;
	volatile int32_t t191 = -124767872;

    t191 = (x777!=(x778&(x779%x780)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int8_t x781 = INT8_MIN;
	static int64_t x782 = INT64_MIN;
	static int16_t x783 = INT16_MAX;
	int16_t x784 = INT16_MIN;
	int32_t t192 = 2335;

    t192 = (x781!=(x782&(x783%x784)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x787 = UINT32_MAX;
	volatile int32_t t193 = 1251866;

    t193 = (x785!=(x786&(x787%x788)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x789 = -1LL;
	volatile int64_t x790 = -1LL;
	uint16_t x792 = 22U;

    t194 = (x789!=(x790&(x791%x792)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint8_t x793 = UINT8_MAX;
	int32_t x794 = INT32_MIN;
	uint8_t x796 = UINT8_MAX;
	volatile int32_t t195 = 1;

    t195 = (x793!=(x794&(x795%x796)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile uint64_t x797 = UINT64_MAX;
	int16_t x798 = INT16_MIN;
	int16_t x800 = INT16_MAX;
	int32_t t196 = -1142;

    t196 = (x797!=(x798&(x799%x800)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int64_t x801 = INT64_MAX;
	int8_t x802 = -1;
	int32_t x804 = INT32_MIN;

    t197 = (x801!=(x802&(x803%x804)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x805 = 13861;
	int8_t x806 = INT8_MAX;
	int8_t x808 = 35;
	int32_t t198 = -44;

    t198 = (x805!=(x806&(x807%x808)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile uint32_t x809 = 15077616U;
	static uint64_t x810 = 8973986415060160LLU;
	static int8_t x812 = INT8_MIN;

    t199 = (x809!=(x810&(x811%x812)));

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

