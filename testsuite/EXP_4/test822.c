
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

int16_t x1 = -194;
int16_t x10 = 9;
int32_t t8 = 163977318;
int32_t x41 = -1;
int8_t x44 = INT8_MIN;
static int16_t x55 = INT16_MAX;
volatile int8_t x56 = -1;
static volatile int32_t t12 = 202938;
int32_t x63 = INT32_MIN;
uint32_t x64 = 761U;
int32_t t14 = 7052;
static uint32_t x71 = UINT32_MAX;
int32_t x73 = INT32_MIN;
int16_t x75 = -278;
volatile int32_t t16 = -183;
static int16_t x82 = INT16_MAX;
int16_t x84 = -1;
static int16_t x89 = -1;
int16_t x95 = -4;
volatile uint64_t x103 = 21399285255582107LLU;
int16_t x107 = INT16_MAX;
static uint32_t x119 = UINT32_MAX;
volatile int32_t t26 = 2;
int16_t x127 = INT16_MAX;
volatile int32_t t27 = -54;
uint16_t x139 = UINT16_MAX;
volatile int64_t x143 = -1LL;
uint16_t x155 = 7091U;
static uint32_t x157 = 64U;
uint64_t x158 = 0LLU;
int64_t x160 = INT64_MAX;
volatile uint8_t x161 = 42U;
volatile int8_t x162 = 1;
int32_t x163 = -16374914;
uint8_t x167 = UINT8_MAX;
uint64_t x170 = 25693477038381757LLU;
uint16_t x176 = 22U;
static int16_t x181 = INT16_MAX;
uint64_t x186 = 226092103208LLU;
int8_t x187 = -1;
int16_t x188 = INT16_MIN;
int16_t x192 = INT16_MAX;
int32_t t44 = -9161347;
int16_t x198 = -1;
static volatile int32_t t46 = -13411003;
uint64_t x206 = 19073070388973017LLU;
int64_t x221 = INT64_MAX;
static volatile int8_t x223 = -5;
int32_t t51 = -23293011;
static volatile uint16_t x229 = 62U;
static volatile uint64_t x230 = 3440840253507988078LLU;
volatile int32_t x231 = INT32_MAX;
volatile int64_t x241 = 24LL;
volatile int64_t x252 = 10114500LL;
static int32_t t58 = 916388267;
int16_t x257 = INT16_MIN;
volatile int16_t x258 = INT16_MAX;
uint64_t x263 = 541LLU;
volatile uint16_t x264 = 3565U;
uint16_t x266 = 1453U;
uint8_t x268 = UINT8_MAX;
static int16_t x271 = INT16_MIN;
static int32_t t63 = -51;
int8_t x281 = -26;
uint16_t x285 = 7U;
int8_t x288 = -1;
volatile int32_t t65 = -59330;
int8_t x295 = INT8_MAX;
volatile int32_t t67 = -348337;
static volatile int32_t x304 = INT32_MIN;
static int32_t t69 = -124718132;
uint8_t x313 = UINT8_MAX;
volatile uint32_t x319 = 2U;
int8_t x326 = INT8_MIN;
volatile int16_t x333 = 31;
static int16_t x334 = INT16_MIN;
static uint64_t x335 = 3856339625LLU;
int64_t x336 = INT64_MIN;
int8_t x339 = INT8_MIN;
uint16_t x340 = 31U;
int16_t x353 = INT16_MIN;
volatile uint64_t x354 = UINT64_MAX;
volatile uint8_t x357 = 116U;
volatile uint8_t x361 = 10U;
static int8_t x364 = 2;
uint32_t x366 = 58340599U;
int32_t x369 = INT32_MIN;
int64_t x372 = 2LL;
volatile int32_t t86 = 13;
static uint64_t x373 = UINT64_MAX;
volatile uint16_t x380 = UINT16_MAX;
int16_t x386 = 43;
int32_t x388 = 13;
int8_t x389 = INT8_MIN;
volatile int8_t x397 = -1;
int64_t x398 = 931905487LL;
int8_t x400 = 48;
volatile int32_t t93 = 1;
static int32_t x409 = -691383159;
static int64_t x410 = -2118114518LL;
volatile int32_t t95 = -2820;
volatile int64_t x414 = -1978044190710LL;
volatile uint16_t x415 = UINT16_MAX;
uint16_t x416 = UINT16_MAX;
volatile int32_t t96 = -2;
uint64_t x419 = 16373LLU;
static int32_t t97 = -121;
int64_t x429 = INT64_MAX;
volatile uint8_t x430 = UINT8_MAX;
int64_t x432 = INT64_MIN;
int32_t t99 = -3;
int16_t x446 = INT16_MAX;
int8_t x448 = -1;
uint32_t x449 = UINT32_MAX;
int32_t x459 = INT32_MAX;
static int16_t x470 = INT16_MIN;
static volatile int64_t x479 = INT64_MIN;
volatile int32_t t110 = 178666716;
int8_t x483 = INT8_MAX;
static volatile int32_t t111 = 24158313;
int32_t t112 = -135;
volatile int64_t x489 = INT64_MIN;
uint16_t x496 = 3U;
static int64_t x499 = INT64_MAX;
int64_t x504 = -15845738715852684LL;
int32_t t116 = -182470;
volatile int64_t x510 = 1LL;
static uint32_t x515 = UINT32_MAX;
uint64_t x517 = 15LLU;
static uint32_t x518 = 2U;
int64_t x521 = INT64_MIN;
uint64_t x524 = 52299550856LLU;
int32_t x528 = -1;
volatile uint8_t x539 = 5U;
static uint64_t x542 = 301LLU;
int64_t x546 = -1LL;
static int16_t x550 = -10052;
int32_t x558 = -1;
uint16_t x560 = 54U;
int32_t x563 = INT32_MIN;
int16_t x574 = -1;
int32_t t131 = 45404573;
static int16_t x578 = 1;
volatile uint32_t x586 = UINT32_MAX;
int16_t x588 = INT16_MIN;
int64_t x591 = 559160LL;
static int8_t x607 = -1;
uint64_t x612 = 412298616611523915LLU;
int32_t t139 = -55;
int64_t x613 = -12978501531LL;
int16_t x619 = INT16_MIN;
volatile int32_t x621 = INT32_MIN;
int8_t x623 = -1;
int32_t t144 = 556;
int8_t x639 = -2;
static int64_t x647 = -1LL;
int32_t t147 = 10387;
uint8_t x653 = 4U;
static int32_t t149 = -36804089;
int32_t x667 = -41;
uint8_t x677 = 6U;
int8_t x682 = 0;
int32_t x685 = 84;
uint8_t x689 = UINT8_MAX;
int8_t x691 = INT8_MIN;
int32_t t157 = 10337;
uint16_t x698 = 915U;
int32_t t159 = -12;
int8_t x702 = INT8_MIN;
int8_t x704 = 5;
volatile int32_t t161 = -147218;
static int64_t x720 = INT64_MIN;
int32_t x721 = -365721;
uint32_t x724 = UINT32_MAX;
int64_t x728 = -1LL;
volatile int16_t x729 = -1;
int32_t t167 = -2823;
int8_t x741 = INT8_MAX;
static int32_t t169 = -12173;
static uint8_t x747 = UINT8_MAX;
static int32_t t170 = 30296;
volatile int32_t t173 = 1;
int32_t x765 = INT32_MIN;
static uint32_t x767 = 21126543U;
int32_t x771 = INT32_MIN;
int32_t x778 = 25841370;
uint8_t x780 = UINT8_MAX;
int32_t x794 = INT32_MIN;
static volatile int8_t x797 = -1;
int32_t x818 = -1;
volatile int32_t x820 = 106;
int16_t x822 = INT16_MIN;
int32_t x824 = -1;
uint8_t x828 = 1U;
volatile uint8_t x830 = UINT8_MAX;
static volatile int16_t x831 = INT16_MIN;
static uint32_t x841 = 7857117U;
uint32_t x846 = 2041199895U;
uint32_t x849 = UINT32_MAX;
int8_t x850 = -1;
uint8_t x851 = 54U;
static int32_t t193 = -2;
int16_t x866 = -1;
volatile uint8_t x873 = 2U;
static int8_t x876 = 54;
int32_t x877 = -2515;
volatile int8_t x878 = 3;
uint64_t x880 = UINT64_MAX;
int32_t t199 = 603319;


void f0(void) {
    	static int64_t x2 = INT64_MAX;
	uint64_t x3 = 179723282045LLU;
	int8_t x4 = 6;
	volatile int32_t t0 = -834;

    t0 = (x1<=(x2*(x3%x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = 1;
	int64_t x6 = INT64_MAX;
	int16_t x7 = INT16_MAX;
	int8_t x8 = -1;
	int32_t t1 = -112;

    t1 = (x5<=(x6*(x7%x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MIN;
	uint8_t x11 = 73U;
	uint64_t x12 = 12855326564LLU;
	int32_t t2 = -160527772;

    t2 = (x9<=(x10*(x11%x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static int16_t x17 = 7276;
	int16_t x18 = -1;
	uint32_t x19 = UINT32_MAX;
	uint16_t x20 = 6239U;
	int32_t t3 = -10740652;

    t3 = (x17<=(x18*(x19%x20)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int8_t x21 = INT8_MAX;
	uint64_t x22 = 145277945651753LLU;
	int8_t x23 = 26;
	volatile int32_t x24 = -1;
	volatile int32_t t4 = -220843;

    t4 = (x21<=(x22*(x23%x24)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x25 = 31575U;
	int8_t x26 = -2;
	int32_t x27 = INT32_MIN;
	int32_t x28 = INT32_MIN;
	int32_t t5 = 165;

    t5 = (x25<=(x26*(x27%x28)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x29 = 305;
	volatile uint16_t x30 = UINT16_MAX;
	volatile int32_t x31 = INT32_MAX;
	int16_t x32 = -418;
	int32_t t6 = 735591;

    t6 = (x29<=(x30*(x31%x32)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x33 = 4610346151867LLU;
	uint32_t x34 = 73U;
	int64_t x35 = INT64_MIN;
	volatile int8_t x36 = INT8_MIN;
	static volatile int32_t t7 = 8;

    t7 = (x33<=(x34*(x35%x36)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint16_t x37 = 26627U;
	static volatile int16_t x38 = -6;
	static int16_t x39 = 0;
	int64_t x40 = INT64_MIN;

    t8 = (x37<=(x38*(x39%x40)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x42 = INT8_MAX;
	uint64_t x43 = 315LLU;
	volatile int32_t t9 = -23636914;

    t9 = (x41<=(x42*(x43%x44)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x45 = INT32_MIN;
	uint16_t x46 = UINT16_MAX;
	int8_t x47 = -6;
	uint64_t x48 = 3372592138729909LLU;
	int32_t t10 = 211831;

    t10 = (x45<=(x46*(x47%x48)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x49 = INT8_MAX;
	int8_t x50 = INT8_MIN;
	volatile uint32_t x51 = 34U;
	uint64_t x52 = UINT64_MAX;
	static volatile int32_t t11 = 10246389;

    t11 = (x49<=(x50*(x51%x52)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x53 = UINT64_MAX;
	int32_t x54 = INT32_MAX;

    t12 = (x53<=(x54*(x55%x56)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x57 = 12U;
	int32_t x58 = -1;
	int32_t x59 = 2355257;
	int64_t x60 = 390255325LL;
	int32_t t13 = 113;

    t13 = (x57<=(x58*(x59%x60)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile uint8_t x61 = 0U;
	int32_t x62 = INT32_MIN;

    t14 = (x61<=(x62*(x63%x64)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x69 = INT16_MIN;
	uint8_t x70 = 38U;
	volatile int16_t x72 = INT16_MAX;
	int32_t t15 = 3994;

    t15 = (x69<=(x70*(x71%x72)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static int16_t x74 = INT16_MIN;
	static uint32_t x76 = UINT32_MAX;

    t16 = (x73<=(x74*(x75%x76)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x77 = UINT8_MAX;
	int16_t x78 = -1;
	static volatile int16_t x79 = -114;
	static uint16_t x80 = 1U;
	volatile int32_t t17 = -299;

    t17 = (x77<=(x78*(x79%x80)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x81 = INT32_MAX;
	volatile int8_t x83 = INT8_MIN;
	volatile int32_t t18 = 63905327;

    t18 = (x81<=(x82*(x83%x84)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x85 = INT16_MIN;
	volatile int64_t x86 = -19606113LL;
	volatile int16_t x87 = 7728;
	volatile int16_t x88 = -1910;
	volatile int32_t t19 = 24103;

    t19 = (x85<=(x86*(x87%x88)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x90 = 46U;
	uint16_t x91 = 78U;
	volatile int64_t x92 = -7986LL;
	static int32_t t20 = 53240991;

    t20 = (x89<=(x90*(x91%x92)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint8_t x93 = UINT8_MAX;
	int16_t x94 = INT16_MAX;
	int64_t x96 = 841655LL;
	volatile int32_t t21 = 2;

    t21 = (x93<=(x94*(x95%x96)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x97 = 0LL;
	uint8_t x98 = 12U;
	int16_t x99 = -1;
	volatile int32_t x100 = -1;
	int32_t t22 = 20;

    t22 = (x97<=(x98*(x99%x100)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x101 = 2U;
	int32_t x102 = -1;
	volatile uint64_t x104 = 124724090118929LLU;
	int32_t t23 = -1117144;

    t23 = (x101<=(x102*(x103%x104)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x105 = 53;
	int64_t x106 = -322LL;
	int16_t x108 = INT16_MIN;
	volatile int32_t t24 = -30;

    t24 = (x105<=(x106*(x107%x108)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint16_t x109 = 4U;
	int16_t x110 = INT16_MAX;
	volatile int32_t x111 = 132868851;
	uint8_t x112 = UINT8_MAX;
	volatile int32_t t25 = 1;

    t25 = (x109<=(x110*(x111%x112)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x117 = -335;
	int8_t x118 = -1;
	static volatile uint8_t x120 = UINT8_MAX;

    t26 = (x117<=(x118*(x119%x120)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x125 = -1;
	uint16_t x126 = UINT16_MAX;
	int32_t x128 = INT32_MIN;

    t27 = (x125<=(x126*(x127%x128)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x129 = 1115954U;
	int8_t x130 = 1;
	int8_t x131 = INT8_MIN;
	int16_t x132 = -4512;
	static int32_t t28 = -4036;

    t28 = (x129<=(x130*(x131%x132)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x133 = 224U;
	int16_t x134 = 6985;
	uint8_t x135 = UINT8_MAX;
	int8_t x136 = -3;
	volatile int32_t t29 = -2057;

    t29 = (x133<=(x134*(x135%x136)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x137 = -415218LL;
	int16_t x138 = -1;
	int64_t x140 = INT64_MIN;
	int32_t t30 = -7953;

    t30 = (x137<=(x138*(x139%x140)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x141 = 1345629;
	int16_t x142 = 249;
	int32_t x144 = INT32_MIN;
	static int32_t t31 = 87606404;

    t31 = (x141<=(x142*(x143%x144)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x145 = 34249224910672452LLU;
	static int64_t x146 = -16962597374240438LL;
	uint32_t x147 = UINT32_MAX;
	uint8_t x148 = UINT8_MAX;
	int32_t t32 = 65378;

    t32 = (x145<=(x146*(x147%x148)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x149 = 78067U;
	int16_t x150 = INT16_MAX;
	static int8_t x151 = -1;
	int32_t x152 = 125;
	volatile int32_t t33 = -56193;

    t33 = (x149<=(x150*(x151%x152)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int8_t x153 = INT8_MIN;
	uint16_t x154 = 2587U;
	int32_t x156 = 118954;
	static int32_t t34 = -232;

    t34 = (x153<=(x154*(x155%x156)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint64_t x159 = 4572070104828LLU;
	int32_t t35 = 14;

    t35 = (x157<=(x158*(x159%x160)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x164 = INT64_MIN;
	volatile int32_t t36 = 167036;

    t36 = (x161<=(x162*(x163%x164)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x165 = INT64_MIN;
	int8_t x166 = INT8_MAX;
	uint64_t x168 = 306004545978861LLU;
	volatile int32_t t37 = -45374;

    t37 = (x165<=(x166*(x167%x168)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x169 = 37430U;
	volatile uint8_t x171 = 27U;
	int8_t x172 = INT8_MIN;
	int32_t t38 = 2395046;

    t38 = (x169<=(x170*(x171%x172)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x173 = INT32_MIN;
	static uint8_t x174 = 15U;
	static volatile uint16_t x175 = UINT16_MAX;
	static volatile int32_t t39 = 421642;

    t39 = (x173<=(x174*(x175%x176)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x177 = INT16_MAX;
	int16_t x178 = INT16_MAX;
	uint16_t x179 = 897U;
	uint64_t x180 = 276524936677742390LLU;
	static int32_t t40 = 2429255;

    t40 = (x177<=(x178*(x179%x180)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x182 = INT32_MIN;
	uint8_t x183 = UINT8_MAX;
	static volatile uint32_t x184 = 504U;
	volatile int32_t t41 = 820356947;

    t41 = (x181<=(x182*(x183%x184)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x185 = 33;
	int32_t t42 = 439077;

    t42 = (x185<=(x186*(x187%x188)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x189 = 2244;
	static int8_t x190 = INT8_MIN;
	int32_t x191 = INT32_MAX;
	int32_t t43 = -935;

    t43 = (x189<=(x190*(x191%x192)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x193 = 0;
	static uint16_t x194 = 987U;
	int16_t x195 = INT16_MIN;
	static int64_t x196 = INT64_MIN;

    t44 = (x193<=(x194*(x195%x196)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint16_t x197 = 2404U;
	volatile uint16_t x199 = 1U;
	int16_t x200 = INT16_MAX;
	int32_t t45 = -4898;

    t45 = (x197<=(x198*(x199%x200)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x201 = 493333734U;
	static int16_t x202 = INT16_MIN;
	uint8_t x203 = 1U;
	int16_t x204 = -1;

    t46 = (x201<=(x202*(x203%x204)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x205 = 1LL;
	int64_t x207 = INT64_MIN;
	uint16_t x208 = 4565U;
	static volatile int32_t t47 = 3831867;

    t47 = (x205<=(x206*(x207%x208)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x209 = 5U;
	volatile int16_t x210 = -404;
	uint8_t x211 = UINT8_MAX;
	int64_t x212 = 1220612555LL;
	static int32_t t48 = -436708178;

    t48 = (x209<=(x210*(x211%x212)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint8_t x213 = 53U;
	static volatile uint8_t x214 = 37U;
	static uint16_t x215 = 220U;
	int32_t x216 = 168680;
	volatile int32_t t49 = -49;

    t49 = (x213<=(x214*(x215%x216)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x222 = 1;
	static int8_t x224 = -1;
	static int32_t t50 = -1551;

    t50 = (x221<=(x222*(x223%x224)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x225 = -1;
	int64_t x226 = INT64_MAX;
	int16_t x227 = INT16_MIN;
	int8_t x228 = -1;

    t51 = (x225<=(x226*(x227%x228)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x232 = INT8_MIN;
	volatile int32_t t52 = -1;

    t52 = (x229<=(x230*(x231%x232)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x233 = -1;
	volatile uint16_t x234 = 1419U;
	static int16_t x235 = 76;
	volatile int8_t x236 = INT8_MIN;
	volatile int32_t t53 = 925101904;

    t53 = (x233<=(x234*(x235%x236)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x237 = INT16_MIN;
	int8_t x238 = INT8_MIN;
	volatile int8_t x239 = INT8_MAX;
	int64_t x240 = INT64_MIN;
	static int32_t t54 = 7;

    t54 = (x237<=(x238*(x239%x240)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x242 = 8371;
	uint8_t x243 = 34U;
	uint16_t x244 = UINT16_MAX;
	int32_t t55 = 124;

    t55 = (x241<=(x242*(x243%x244)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x245 = INT64_MIN;
	int16_t x246 = -3;
	int16_t x247 = -4684;
	int8_t x248 = -2;
	int32_t t56 = -5989022;

    t56 = (x245<=(x246*(x247%x248)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x249 = 0U;
	int32_t x250 = -1;
	int8_t x251 = INT8_MAX;
	static int32_t t57 = 75;

    t57 = (x249<=(x250*(x251%x252)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int32_t x253 = INT32_MAX;
	static uint8_t x254 = 30U;
	int16_t x255 = INT16_MIN;
	volatile uint16_t x256 = UINT16_MAX;

    t58 = (x253<=(x254*(x255%x256)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int32_t x259 = INT32_MIN;
	int16_t x260 = INT16_MIN;
	int32_t t59 = -166351;

    t59 = (x257<=(x258*(x259%x260)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile uint64_t x261 = 8666708343066364957LLU;
	static int16_t x262 = -50;
	int32_t t60 = 513330472;

    t60 = (x261<=(x262*(x263%x264)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x265 = -1LL;
	uint16_t x267 = UINT16_MAX;
	static volatile int32_t t61 = 212569589;

    t61 = (x265<=(x266*(x267%x268)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x269 = 0;
	volatile int16_t x270 = -1;
	static int32_t x272 = 31509;
	int32_t t62 = -1694;

    t62 = (x269<=(x270*(x271%x272)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static int32_t x273 = INT32_MIN;
	int64_t x274 = -4052948LL;
	uint8_t x275 = UINT8_MAX;
	uint16_t x276 = 1U;

    t63 = (x273<=(x274*(x275%x276)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x282 = INT8_MIN;
	int64_t x283 = INT64_MIN;
	static uint32_t x284 = 1U;
	int32_t t64 = -1;

    t64 = (x281<=(x282*(x283%x284)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x286 = INT32_MIN;
	int64_t x287 = -2612LL;

    t65 = (x285<=(x286*(x287%x288)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile uint64_t x289 = 81894672533338293LLU;
	int32_t x290 = -1;
	uint8_t x291 = 8U;
	uint16_t x292 = 49U;
	int32_t t66 = 0;

    t66 = (x289<=(x290*(x291%x292)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x293 = -1464;
	int8_t x294 = INT8_MIN;
	int16_t x296 = INT16_MIN;

    t67 = (x293<=(x294*(x295%x296)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x297 = INT32_MIN;
	int32_t x298 = INT32_MAX;
	int8_t x299 = INT8_MIN;
	static int64_t x300 = INT64_MAX;
	static int32_t t68 = 0;

    t68 = (x297<=(x298*(x299%x300)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x301 = -23;
	volatile uint16_t x302 = 15U;
	int16_t x303 = INT16_MIN;

    t69 = (x301<=(x302*(x303%x304)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x305 = INT8_MIN;
	int8_t x306 = -21;
	int16_t x307 = 9392;
	int16_t x308 = INT16_MIN;
	volatile int32_t t70 = -1715305;

    t70 = (x305<=(x306*(x307%x308)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x309 = 1U;
	uint16_t x310 = UINT16_MAX;
	int16_t x311 = 196;
	static uint64_t x312 = 2128364171LLU;
	static int32_t t71 = 15625327;

    t71 = (x309<=(x310*(x311%x312)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x314 = -8;
	volatile int32_t x315 = -46;
	volatile int64_t x316 = INT64_MIN;
	int32_t t72 = 216419130;

    t72 = (x313<=(x314*(x315%x316)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x317 = 17374U;
	static volatile int16_t x318 = 1;
	volatile int64_t x320 = -35LL;
	volatile int32_t t73 = -6948;

    t73 = (x317<=(x318*(x319%x320)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x321 = 3U;
	static uint32_t x322 = 92209U;
	int8_t x323 = 2;
	static volatile int64_t x324 = INT64_MIN;
	int32_t t74 = -198329024;

    t74 = (x321<=(x322*(x323%x324)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint32_t x325 = 265U;
	uint8_t x327 = UINT8_MAX;
	static volatile int16_t x328 = -1;
	int32_t t75 = 4325993;

    t75 = (x325<=(x326*(x327%x328)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x329 = -1;
	uint16_t x330 = 0U;
	volatile int64_t x331 = 15LL;
	uint32_t x332 = 1610027U;
	int32_t t76 = -570158420;

    t76 = (x329<=(x330*(x331%x332)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int32_t t77 = -55846676;

    t77 = (x333<=(x334*(x335%x336)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint8_t x337 = UINT8_MAX;
	uint8_t x338 = UINT8_MAX;
	volatile int32_t t78 = 4467512;

    t78 = (x337<=(x338*(x339%x340)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile uint8_t x341 = UINT8_MAX;
	volatile uint64_t x342 = 2745975100820971787LLU;
	int64_t x343 = 18076967LL;
	int32_t x344 = INT32_MIN;
	volatile int32_t t79 = -436;

    t79 = (x341<=(x342*(x343%x344)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x345 = UINT32_MAX;
	uint64_t x346 = 1059059383LLU;
	int64_t x347 = -5388413LL;
	uint16_t x348 = 393U;
	volatile int32_t t80 = 11302;

    t80 = (x345<=(x346*(x347%x348)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x349 = 7997837685629LLU;
	volatile int64_t x350 = -202125952128441LL;
	uint32_t x351 = UINT32_MAX;
	static uint8_t x352 = 4U;
	static int32_t t81 = -450481936;

    t81 = (x349<=(x350*(x351%x352)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x355 = INT16_MAX;
	int8_t x356 = -1;
	volatile int32_t t82 = 733;

    t82 = (x353<=(x354*(x355%x356)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x358 = -1;
	int32_t x359 = INT32_MIN;
	int8_t x360 = INT8_MAX;
	volatile int32_t t83 = -5713;

    t83 = (x357<=(x358*(x359%x360)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint8_t x362 = UINT8_MAX;
	int32_t x363 = -406;
	static int32_t t84 = 0;

    t84 = (x361<=(x362*(x363%x364)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile int64_t x365 = -1LL;
	static volatile int64_t x367 = -1LL;
	uint64_t x368 = UINT64_MAX;
	volatile int32_t t85 = 252;

    t85 = (x365<=(x366*(x367%x368)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x370 = -191;
	int32_t x371 = -1;

    t86 = (x369<=(x370*(x371%x372)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x374 = -40;
	int64_t x375 = INT64_MIN;
	uint64_t x376 = 11082206735LLU;
	volatile int32_t t87 = 1;

    t87 = (x373<=(x374*(x375%x376)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x377 = 129131762U;
	uint32_t x378 = 3U;
	static int32_t x379 = -985080;
	static int32_t t88 = 89570447;

    t88 = (x377<=(x378*(x379%x380)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x381 = -1;
	int64_t x382 = 1LL;
	uint16_t x383 = UINT16_MAX;
	int32_t x384 = -1;
	static int32_t t89 = -60;

    t89 = (x381<=(x382*(x383%x384)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int8_t x385 = INT8_MIN;
	int64_t x387 = 6034LL;
	volatile int32_t t90 = 54850;

    t90 = (x385<=(x386*(x387%x388)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x390 = 1U;
	static int8_t x391 = 1;
	static int8_t x392 = -1;
	static volatile int32_t t91 = -17094734;

    t91 = (x389<=(x390*(x391%x392)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint32_t x399 = 12210810U;
	volatile int32_t t92 = -9714;

    t92 = (x397<=(x398*(x399%x400)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x401 = INT32_MIN;
	int16_t x402 = -1;
	int8_t x403 = 6;
	uint8_t x404 = 6U;

    t93 = (x401<=(x402*(x403%x404)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x405 = 6U;
	static int32_t x406 = INT32_MAX;
	int16_t x407 = INT16_MIN;
	static int8_t x408 = 1;
	volatile int32_t t94 = -56453;

    t94 = (x405<=(x406*(x407%x408)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x411 = 5969098572LL;
	volatile uint32_t x412 = 1076U;

    t95 = (x409<=(x410*(x411%x412)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int8_t x413 = INT8_MIN;

    t96 = (x413<=(x414*(x415%x416)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x417 = 2522;
	volatile int32_t x418 = INT32_MIN;
	int64_t x420 = INT64_MIN;

    t97 = (x417<=(x418*(x419%x420)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x425 = -1LL;
	int16_t x426 = INT16_MIN;
	int32_t x427 = INT32_MIN;
	int8_t x428 = -1;
	int32_t t98 = -413;

    t98 = (x425<=(x426*(x427%x428)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint64_t x431 = UINT64_MAX;

    t99 = (x429<=(x430*(x431%x432)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x433 = -1LL;
	uint32_t x434 = 966U;
	volatile uint16_t x435 = UINT16_MAX;
	volatile int16_t x436 = INT16_MIN;
	volatile int32_t t100 = -121;

    t100 = (x433<=(x434*(x435%x436)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int8_t x437 = -1;
	int8_t x438 = INT8_MAX;
	int32_t x439 = INT32_MIN;
	static int8_t x440 = INT8_MIN;
	volatile int32_t t101 = -20612175;

    t101 = (x437<=(x438*(x439%x440)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x441 = -1;
	int32_t x442 = INT32_MIN;
	static int16_t x443 = 480;
	static uint64_t x444 = 693877LLU;
	int32_t t102 = -9;

    t102 = (x441<=(x442*(x443%x444)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int16_t x445 = INT16_MAX;
	int8_t x447 = INT8_MIN;
	volatile int32_t t103 = 5;

    t103 = (x445<=(x446*(x447%x448)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x450 = UINT64_MAX;
	static int32_t x451 = INT32_MIN;
	int32_t x452 = INT32_MIN;
	int32_t t104 = -59;

    t104 = (x449<=(x450*(x451%x452)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x457 = INT64_MAX;
	volatile int64_t x458 = -1LL;
	static int64_t x460 = INT64_MIN;
	int32_t t105 = 6;

    t105 = (x457<=(x458*(x459%x460)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x461 = 25765U;
	uint8_t x462 = 61U;
	int8_t x463 = -1;
	uint16_t x464 = 18U;
	volatile int32_t t106 = 57807;

    t106 = (x461<=(x462*(x463%x464)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x465 = INT8_MAX;
	static volatile int8_t x466 = INT8_MAX;
	static int16_t x467 = INT16_MIN;
	int16_t x468 = INT16_MAX;
	int32_t t107 = 1210;

    t107 = (x465<=(x466*(x467%x468)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint8_t x469 = 53U;
	int8_t x471 = INT8_MAX;
	static volatile uint16_t x472 = 38U;
	volatile int32_t t108 = -27;

    t108 = (x469<=(x470*(x471%x472)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x473 = INT8_MAX;
	uint64_t x474 = 542365469369876LLU;
	uint16_t x475 = UINT16_MAX;
	volatile uint8_t x476 = 105U;
	int32_t t109 = -520087;

    t109 = (x473<=(x474*(x475%x476)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x477 = -114;
	uint8_t x478 = UINT8_MAX;
	int32_t x480 = INT32_MAX;

    t110 = (x477<=(x478*(x479%x480)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile int64_t x481 = 859290004762LL;
	static uint32_t x482 = 382203699U;
	int8_t x484 = -8;

    t111 = (x481<=(x482*(x483%x484)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint64_t x485 = 140898892448LLU;
	static int32_t x486 = 1130;
	int32_t x487 = INT32_MIN;
	int8_t x488 = INT8_MIN;

    t112 = (x485<=(x486*(x487%x488)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x490 = 128U;
	int32_t x491 = INT32_MIN;
	static volatile int8_t x492 = INT8_MIN;
	int32_t t113 = 2075;

    t113 = (x489<=(x490*(x491%x492)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x493 = -1;
	int64_t x494 = -127LL;
	int64_t x495 = INT64_MIN;
	int32_t t114 = 962;

    t114 = (x493<=(x494*(x495%x496)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x497 = INT32_MAX;
	uint16_t x498 = 21121U;
	uint64_t x500 = 126472593059096672LLU;
	static int32_t t115 = 3;

    t115 = (x497<=(x498*(x499%x500)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x501 = INT16_MIN;
	int8_t x502 = INT8_MIN;
	volatile int32_t x503 = 699;

    t116 = (x501<=(x502*(x503%x504)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x505 = -1;
	uint64_t x506 = 416LLU;
	volatile int64_t x507 = 7712227LL;
	int16_t x508 = INT16_MIN;
	int32_t t117 = 10290478;

    t117 = (x505<=(x506*(x507%x508)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x509 = INT8_MIN;
	uint16_t x511 = 1244U;
	volatile int64_t x512 = -1LL;
	int32_t t118 = -59129081;

    t118 = (x509<=(x510*(x511%x512)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x513 = INT16_MIN;
	volatile uint32_t x514 = 5679U;
	volatile uint64_t x516 = 367673LLU;
	volatile int32_t t119 = -2;

    t119 = (x513<=(x514*(x515%x516)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x519 = -1;
	int32_t x520 = INT32_MIN;
	int32_t t120 = 6899;

    t120 = (x517<=(x518*(x519%x520)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile int16_t x522 = INT16_MIN;
	uint32_t x523 = 1066142U;
	int32_t t121 = 8810699;

    t121 = (x521<=(x522*(x523%x524)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint16_t x525 = 3662U;
	volatile int8_t x526 = 2;
	int64_t x527 = -1LL;
	int32_t t122 = 109403;

    t122 = (x525<=(x526*(x527%x528)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int64_t x529 = INT64_MIN;
	static uint32_t x530 = UINT32_MAX;
	int16_t x531 = -1;
	static int8_t x532 = INT8_MIN;
	volatile int32_t t123 = -3193757;

    t123 = (x529<=(x530*(x531%x532)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x537 = INT32_MIN;
	int16_t x538 = 3;
	int16_t x540 = INT16_MAX;
	volatile int32_t t124 = -266035551;

    t124 = (x537<=(x538*(x539%x540)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint8_t x541 = 8U;
	volatile uint16_t x543 = 977U;
	int32_t x544 = 112287074;
	int32_t t125 = -441;

    t125 = (x541<=(x542*(x543%x544)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint16_t x545 = 201U;
	volatile int16_t x547 = INT16_MIN;
	int64_t x548 = INT64_MAX;
	int32_t t126 = -1;

    t126 = (x545<=(x546*(x547%x548)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static int64_t x549 = 658215044858378LL;
	int16_t x551 = INT16_MAX;
	int16_t x552 = INT16_MIN;
	static int32_t t127 = 0;

    t127 = (x549<=(x550*(x551%x552)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x557 = INT8_MIN;
	volatile uint16_t x559 = 1U;
	static int32_t t128 = -36;

    t128 = (x557<=(x558*(x559%x560)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static int16_t x561 = 0;
	int64_t x562 = INT64_MIN;
	int8_t x564 = INT8_MIN;
	static volatile int32_t t129 = -10;

    t129 = (x561<=(x562*(x563%x564)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint8_t x569 = UINT8_MAX;
	uint64_t x570 = 40LLU;
	int32_t x571 = INT32_MAX;
	static int64_t x572 = INT64_MIN;
	int32_t t130 = -2112;

    t130 = (x569<=(x570*(x571%x572)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x573 = 94746774259LLU;
	int16_t x575 = INT16_MIN;
	int64_t x576 = INT64_MIN;

    t131 = (x573<=(x574*(x575%x576)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x577 = UINT64_MAX;
	uint8_t x579 = 112U;
	uint32_t x580 = 122648U;
	volatile int32_t t132 = 791;

    t132 = (x577<=(x578*(x579%x580)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x581 = 1;
	static uint16_t x582 = 24U;
	static uint32_t x583 = 329667U;
	int8_t x584 = INT8_MAX;
	volatile int32_t t133 = -1;

    t133 = (x581<=(x582*(x583%x584)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x585 = INT8_MIN;
	static uint8_t x587 = UINT8_MAX;
	volatile int32_t t134 = -318286082;

    t134 = (x585<=(x586*(x587%x588)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x589 = -2145;
	int32_t x590 = -1;
	int64_t x592 = INT64_MIN;
	static volatile int32_t t135 = 120922;

    t135 = (x589<=(x590*(x591%x592)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x593 = INT64_MIN;
	static uint8_t x594 = 60U;
	int32_t x595 = INT32_MIN;
	int8_t x596 = -1;
	volatile int32_t t136 = 22505;

    t136 = (x593<=(x594*(x595%x596)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x597 = -1;
	int16_t x598 = INT16_MAX;
	volatile int16_t x599 = INT16_MIN;
	volatile int64_t x600 = INT64_MIN;
	static int32_t t137 = 1;

    t137 = (x597<=(x598*(x599%x600)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x605 = 363937693LLU;
	int8_t x606 = -9;
	uint16_t x608 = 15557U;
	volatile int32_t t138 = 0;

    t138 = (x605<=(x606*(x607%x608)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x609 = 678786163796406735LL;
	uint8_t x610 = UINT8_MAX;
	volatile uint32_t x611 = 124682U;

    t139 = (x609<=(x610*(x611%x612)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x614 = INT8_MIN;
	uint64_t x615 = UINT64_MAX;
	uint32_t x616 = 10124734U;
	volatile int32_t t140 = 94;

    t140 = (x613<=(x614*(x615%x616)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x617 = -1;
	static int16_t x618 = 0;
	int16_t x620 = INT16_MIN;
	int32_t t141 = 3491;

    t141 = (x617<=(x618*(x619%x620)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x622 = 621480794U;
	int16_t x624 = 173;
	static volatile int32_t t142 = 110302296;

    t142 = (x621<=(x622*(x623%x624)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x629 = INT64_MIN;
	int32_t x630 = INT32_MIN;
	uint64_t x631 = 24757652731LLU;
	volatile uint16_t x632 = UINT16_MAX;
	static int32_t t143 = 13;

    t143 = (x629<=(x630*(x631%x632)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int64_t x633 = INT64_MIN;
	int16_t x634 = -1;
	static int32_t x635 = INT32_MAX;
	uint8_t x636 = 3U;

    t144 = (x633<=(x634*(x635%x636)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint64_t x637 = 706796580890244980LLU;
	static int8_t x638 = INT8_MIN;
	uint8_t x640 = 101U;
	static int32_t t145 = 0;

    t145 = (x637<=(x638*(x639%x640)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x645 = 5U;
	int16_t x646 = -1;
	int64_t x648 = INT64_MIN;
	static volatile int32_t t146 = 625528;

    t146 = (x645<=(x646*(x647%x648)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x649 = INT16_MIN;
	uint64_t x650 = UINT64_MAX;
	int64_t x651 = INT64_MIN;
	uint16_t x652 = 1199U;

    t147 = (x649<=(x650*(x651%x652)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x654 = INT16_MIN;
	static int16_t x655 = INT16_MAX;
	int16_t x656 = INT16_MIN;
	static volatile int32_t t148 = 3;

    t148 = (x653<=(x654*(x655%x656)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x657 = UINT16_MAX;
	uint64_t x658 = 4551241653448069380LLU;
	volatile uint32_t x659 = UINT32_MAX;
	int16_t x660 = INT16_MAX;

    t149 = (x657<=(x658*(x659%x660)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x661 = -1024467496;
	int8_t x662 = INT8_MIN;
	int8_t x663 = -60;
	int32_t x664 = INT32_MIN;
	int32_t t150 = -13792647;

    t150 = (x661<=(x662*(x663%x664)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x665 = INT16_MAX;
	int8_t x666 = -1;
	uint32_t x668 = 35729807U;
	volatile int32_t t151 = -10041732;

    t151 = (x665<=(x666*(x667%x668)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x669 = INT32_MAX;
	uint64_t x670 = UINT64_MAX;
	static uint16_t x671 = UINT16_MAX;
	int8_t x672 = -1;
	int32_t t152 = 58184;

    t152 = (x669<=(x670*(x671%x672)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int16_t x673 = -1;
	static int8_t x674 = INT8_MIN;
	uint64_t x675 = UINT64_MAX;
	volatile int16_t x676 = -1;
	volatile int32_t t153 = 410;

    t153 = (x673<=(x674*(x675%x676)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x678 = 68;
	volatile uint32_t x679 = 316694639U;
	int8_t x680 = 1;
	static int32_t t154 = -3924;

    t154 = (x677<=(x678*(x679%x680)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int16_t x681 = INT16_MAX;
	static int16_t x683 = INT16_MIN;
	static int32_t x684 = INT32_MIN;
	int32_t t155 = -109209;

    t155 = (x681<=(x682*(x683%x684)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x686 = INT8_MAX;
	int16_t x687 = 80;
	int32_t x688 = INT32_MAX;
	volatile int32_t t156 = 1100568;

    t156 = (x685<=(x686*(x687%x688)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x690 = -50LL;
	volatile uint16_t x692 = UINT16_MAX;

    t157 = (x689<=(x690*(x691%x692)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint16_t x693 = 1U;
	volatile uint64_t x694 = 503LLU;
	int32_t x695 = INT32_MIN;
	int64_t x696 = INT64_MAX;
	static int32_t t158 = -4975;

    t158 = (x693<=(x694*(x695%x696)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x697 = 1;
	volatile int32_t x699 = -32822;
	uint16_t x700 = 26U;

    t159 = (x697<=(x698*(x699%x700)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x701 = -26;
	volatile int16_t x703 = -2030;
	int32_t t160 = -192967;

    t160 = (x701<=(x702*(x703%x704)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x705 = -64;
	int8_t x706 = INT8_MIN;
	static uint64_t x707 = UINT64_MAX;
	volatile int32_t x708 = INT32_MAX;

    t161 = (x705<=(x706*(x707%x708)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x713 = INT8_MIN;
	int64_t x714 = -1LL;
	static volatile int64_t x715 = 950537267813586LL;
	int8_t x716 = INT8_MAX;
	int32_t t162 = 1;

    t162 = (x713<=(x714*(x715%x716)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x717 = INT64_MAX;
	int16_t x718 = -6;
	uint16_t x719 = 21U;
	static int32_t t163 = 12;

    t163 = (x717<=(x718*(x719%x720)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x722 = 110U;
	int16_t x723 = INT16_MAX;
	volatile int32_t t164 = -65641700;

    t164 = (x721<=(x722*(x723%x724)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x725 = INT64_MIN;
	int16_t x726 = INT16_MIN;
	uint64_t x727 = UINT64_MAX;
	static volatile int32_t t165 = 1292;

    t165 = (x725<=(x726*(x727%x728)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x730 = -1;
	uint64_t x731 = UINT64_MAX;
	static uint8_t x732 = UINT8_MAX;
	int32_t t166 = -2408;

    t166 = (x729<=(x730*(x731%x732)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x733 = INT64_MIN;
	int8_t x734 = INT8_MAX;
	uint8_t x735 = UINT8_MAX;
	int64_t x736 = INT64_MIN;

    t167 = (x733<=(x734*(x735%x736)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x737 = UINT8_MAX;
	static uint64_t x738 = 194583208742872214LLU;
	static int8_t x739 = -3;
	static int16_t x740 = -1;
	volatile int32_t t168 = -17170;

    t168 = (x737<=(x738*(x739%x740)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x742 = 3511616LLU;
	volatile int16_t x743 = INT16_MAX;
	int32_t x744 = -1;

    t169 = (x741<=(x742*(x743%x744)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x745 = UINT64_MAX;
	int8_t x746 = INT8_MIN;
	uint8_t x748 = 20U;

    t170 = (x745<=(x746*(x747%x748)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x749 = INT16_MIN;
	int32_t x750 = -1;
	int32_t x751 = 7982;
	int64_t x752 = -406537351LL;
	int32_t t171 = -4161048;

    t171 = (x749<=(x750*(x751%x752)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x753 = UINT8_MAX;
	uint8_t x754 = UINT8_MAX;
	int64_t x755 = 2LL;
	static uint64_t x756 = 52870LLU;
	static volatile int32_t t172 = -6950104;

    t172 = (x753<=(x754*(x755%x756)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x757 = INT64_MIN;
	int16_t x758 = 185;
	static int16_t x759 = INT16_MIN;
	static volatile uint8_t x760 = UINT8_MAX;

    t173 = (x757<=(x758*(x759%x760)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static int16_t x761 = INT16_MAX;
	int32_t x762 = -202;
	int16_t x763 = 18;
	int32_t x764 = 3;
	static int32_t t174 = 3;

    t174 = (x761<=(x762*(x763%x764)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int32_t x766 = -325;
	int64_t x768 = INT64_MIN;
	volatile int32_t t175 = -38624242;

    t175 = (x765<=(x766*(x767%x768)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x769 = INT32_MIN;
	static int16_t x770 = INT16_MAX;
	int16_t x772 = -1;
	int32_t t176 = 852;

    t176 = (x769<=(x770*(x771%x772)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x773 = -109408;
	static int64_t x774 = -1LL;
	volatile uint32_t x775 = 19U;
	static int8_t x776 = -28;
	volatile int32_t t177 = -1;

    t177 = (x773<=(x774*(x775%x776)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int32_t x777 = INT32_MIN;
	uint32_t x779 = UINT32_MAX;
	volatile int32_t t178 = -149;

    t178 = (x777<=(x778*(x779%x780)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x781 = 4272459569LL;
	int64_t x782 = -1LL;
	volatile int16_t x783 = INT16_MAX;
	uint64_t x784 = 90599146565LLU;
	static int32_t t179 = 5;

    t179 = (x781<=(x782*(x783%x784)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int32_t x789 = INT32_MIN;
	static int16_t x790 = -1;
	volatile int64_t x791 = INT64_MAX;
	static int32_t x792 = -1;
	int32_t t180 = -5;

    t180 = (x789<=(x790*(x791%x792)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x793 = 179997335;
	int64_t x795 = 0LL;
	int8_t x796 = -16;
	static volatile int32_t t181 = -6;

    t181 = (x793<=(x794*(x795%x796)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x798 = -226;
	uint64_t x799 = 16426430095LLU;
	uint64_t x800 = UINT64_MAX;
	volatile int32_t t182 = 260714016;

    t182 = (x797<=(x798*(x799%x800)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x805 = INT8_MIN;
	uint8_t x806 = 1U;
	uint32_t x807 = UINT32_MAX;
	uint32_t x808 = 1635271184U;
	volatile int32_t t183 = -264553;

    t183 = (x805<=(x806*(x807%x808)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int32_t x809 = -251810;
	static uint8_t x810 = 2U;
	int8_t x811 = INT8_MAX;
	int32_t x812 = INT32_MAX;
	volatile int32_t t184 = 5;

    t184 = (x809<=(x810*(x811%x812)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x813 = -1;
	int32_t x814 = -29;
	int32_t x815 = INT32_MIN;
	int8_t x816 = INT8_MIN;
	int32_t t185 = 156;

    t185 = (x813<=(x814*(x815%x816)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int32_t x817 = INT32_MAX;
	volatile uint8_t x819 = 18U;
	static int32_t t186 = -4402248;

    t186 = (x817<=(x818*(x819%x820)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile int8_t x821 = -1;
	static int16_t x823 = INT16_MIN;
	int32_t t187 = -2930;

    t187 = (x821<=(x822*(x823%x824)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x825 = 0;
	int32_t x826 = INT32_MIN;
	uint16_t x827 = 20U;
	int32_t t188 = 551080;

    t188 = (x825<=(x826*(x827%x828)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x829 = INT64_MAX;
	int8_t x832 = INT8_MIN;
	int32_t t189 = -477257;

    t189 = (x829<=(x830*(x831%x832)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint64_t x842 = UINT64_MAX;
	uint16_t x843 = 4777U;
	uint32_t x844 = 91631465U;
	volatile int32_t t190 = 6;

    t190 = (x841<=(x842*(x843%x844)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x845 = INT16_MIN;
	int8_t x847 = -1;
	uint32_t x848 = 19U;
	int32_t t191 = 29778039;

    t191 = (x845<=(x846*(x847%x848)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int32_t x852 = 3750;
	int32_t t192 = -1;

    t192 = (x849<=(x850*(x851%x852)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x853 = INT8_MAX;
	static int32_t x854 = INT32_MAX;
	uint32_t x855 = UINT32_MAX;
	static uint32_t x856 = 322489971U;

    t193 = (x853<=(x854*(x855%x856)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x857 = 0;
	int8_t x858 = INT8_MIN;
	uint64_t x859 = 5LLU;
	int16_t x860 = 1;
	int32_t t194 = 993512;

    t194 = (x857<=(x858*(x859%x860)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x861 = INT64_MIN;
	static volatile int32_t x862 = INT32_MIN;
	uint32_t x863 = UINT32_MAX;
	static int16_t x864 = 14392;
	int32_t t195 = 535655578;

    t195 = (x861<=(x862*(x863%x864)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x865 = -214;
	int8_t x867 = 0;
	int64_t x868 = 281144755372LL;
	int32_t t196 = -701427;

    t196 = (x865<=(x866*(x867%x868)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x869 = INT32_MAX;
	uint64_t x870 = 1300259860687901LLU;
	static int16_t x871 = INT16_MIN;
	int64_t x872 = INT64_MIN;
	int32_t t197 = 11902;

    t197 = (x869<=(x870*(x871%x872)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x874 = -1LL;
	volatile int16_t x875 = INT16_MIN;
	volatile int32_t t198 = -105471756;

    t198 = (x873<=(x874*(x875%x876)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int32_t x879 = 1;

    t199 = (x877<=(x878*(x879%x880)));

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

