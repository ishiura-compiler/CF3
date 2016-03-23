
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

int8_t x2 = -1;
int32_t x7 = INT32_MIN;
static int32_t x8 = INT32_MIN;
volatile int64_t t2 = -1082504760848757143LL;
int16_t x23 = -99;
int16_t x28 = 17;
int32_t t6 = -10189;
int8_t x30 = INT8_MIN;
volatile uint32_t x32 = 15U;
int16_t x35 = INT16_MIN;
static volatile uint32_t x41 = 12322U;
int32_t x44 = 1377;
volatile uint32_t t12 = 261865165U;
static int64_t x56 = 211648785LL;
static int8_t x63 = 3;
volatile uint64_t x71 = 1171891551505073LLU;
static uint8_t x77 = 5U;
int16_t x79 = -1;
static volatile uint32_t x87 = UINT32_MAX;
volatile int64_t t21 = -4255900LL;
static int8_t x91 = -1;
static int64_t x95 = INT64_MIN;
volatile int64_t t23 = 36717230906LL;
int64_t x107 = -5350814976LL;
volatile int32_t t28 = -1200835;
int32_t x122 = INT32_MAX;
uint32_t x147 = 45644953U;
volatile uint32_t t36 = 217U;
uint16_t x152 = UINT16_MAX;
uint8_t x157 = 3U;
uint8_t x165 = 4U;
int8_t x167 = INT8_MAX;
volatile int64_t t41 = -87571242090141349LL;
volatile int32_t x170 = -3241924;
volatile int16_t x171 = -1;
int64_t x179 = 3905811842266LL;
int16_t x202 = -3;
int32_t t49 = 1298174;
int16_t x207 = -1;
int16_t x210 = -1;
static int64_t x215 = -522313195LL;
int16_t x221 = INT16_MAX;
volatile uint8_t x231 = 1U;
volatile uint16_t x237 = 0U;
int64_t x238 = INT64_MIN;
volatile int16_t x240 = -1;
int64_t x241 = 794420593070052055LL;
static volatile int8_t x246 = INT8_MIN;
volatile int8_t x248 = INT8_MIN;
int32_t t60 = -4921;
int16_t x249 = 2840;
uint64_t x251 = 12653893269459751LLU;
int32_t x257 = INT32_MIN;
int16_t x260 = INT16_MIN;
static volatile int32_t t63 = -444620;
int32_t t65 = 6;
static int16_t x273 = INT16_MIN;
uint64_t t66 = 2LLU;
uint64_t t67 = 32147LLU;
static int16_t x290 = INT16_MIN;
int32_t x297 = INT32_MIN;
uint64_t t73 = 308349782526573LLU;
uint16_t x313 = UINT16_MAX;
int32_t t75 = 868196;
uint32_t x318 = 469447U;
int16_t x323 = -12432;
uint8_t x338 = 9U;
volatile int16_t x340 = -4;
uint64_t t84 = 453936622LLU;
int8_t x361 = INT8_MAX;
uint32_t x364 = 5757U;
int64_t x368 = INT64_MIN;
uint8_t x369 = 12U;
int64_t x372 = INT64_MIN;
static uint16_t x375 = UINT16_MAX;
uint16_t x379 = 2U;
uint16_t x381 = UINT16_MAX;
int16_t x390 = -1;
int32_t x391 = INT32_MAX;
int8_t x394 = INT8_MIN;
int64_t x400 = INT64_MIN;
int16_t x401 = INT16_MIN;
volatile uint64_t x406 = 211282932LLU;
uint8_t x410 = UINT8_MAX;
int32_t t99 = -477103039;
static int16_t x414 = -1;
static int64_t x415 = INT64_MIN;
int8_t x418 = 0;
int16_t x419 = INT16_MIN;
int32_t x423 = INT32_MAX;
int64_t x426 = 2413900933LL;
int16_t x437 = 2518;
static int64_t x439 = INT64_MAX;
static int16_t x440 = INT16_MIN;
int32_t x444 = 7647936;
static int32_t x447 = INT32_MAX;
static volatile uint32_t t108 = 486365U;
static uint32_t x449 = UINT32_MAX;
static int16_t x451 = -3174;
static volatile int8_t x452 = 20;
int8_t x453 = -25;
static int32_t x454 = 110480;
int16_t x459 = -324;
static int32_t x468 = INT32_MAX;
volatile int32_t t113 = 13080051;
volatile int16_t x469 = -1;
uint16_t x486 = 111U;
static volatile uint64_t t118 = 1409LLU;
int8_t x490 = -1;
static int32_t x492 = -930;
uint64_t x494 = 17674869953628670LLU;
static int32_t t120 = -2035678;
static int8_t x500 = -3;
int64_t x505 = -1LL;
static volatile int64_t t123 = -18289124LL;
volatile int64_t t124 = 796032492LL;
int16_t x513 = INT16_MAX;
static int64_t x514 = INT64_MIN;
volatile int16_t x519 = INT16_MIN;
int64_t x522 = -1LL;
int64_t x527 = INT64_MIN;
uint64_t x539 = UINT64_MAX;
uint8_t x540 = 3U;
uint64_t t131 = 6741642LLU;
static int16_t x543 = INT16_MIN;
static volatile int32_t t132 = -50;
static int32_t x549 = -1;
static volatile int16_t x550 = INT16_MAX;
uint8_t x554 = 35U;
volatile int64_t t135 = -222085LL;
volatile int64_t x560 = 408239LL;
static uint32_t x563 = 61U;
int16_t x564 = INT16_MAX;
uint32_t t137 = 510053U;
int16_t x565 = -1;
uint64_t x583 = 60368806832937573LLU;
int16_t x584 = INT16_MIN;
volatile int32_t t146 = 2;
uint32_t x601 = 6U;
int64_t x618 = INT64_MIN;
uint64_t t151 = 5LLU;
uint32_t x625 = 33U;
int32_t t153 = 102063;
volatile int16_t x635 = -30;
static volatile int8_t x639 = INT8_MIN;
int64_t x648 = INT64_MIN;
int32_t x654 = INT32_MIN;
int32_t t159 = -2;
static volatile int16_t x663 = INT16_MAX;
uint64_t x673 = UINT64_MAX;
int16_t x676 = -75;
int64_t x678 = INT64_MAX;
uint16_t x680 = 1406U;
static uint32_t x686 = 7362237U;
static uint32_t x688 = 357U;
volatile int64_t t167 = 430041886467069097LL;
volatile int32_t x696 = INT32_MIN;
volatile int64_t t168 = -4358429430114LL;
static volatile int32_t x702 = INT32_MAX;
int64_t x705 = -8253874267LL;
volatile int32_t x706 = INT32_MIN;
int16_t x707 = -5213;
int64_t x708 = -4791LL;
volatile int16_t x715 = -2;
volatile int32_t t173 = -647;
int32_t x717 = INT32_MIN;
volatile int32_t x726 = INT32_MIN;
int8_t x727 = INT8_MIN;
uint64_t x728 = 7025483409430LLU;
static uint64_t t178 = 1720085620385436LLU;
int32_t x738 = -6219788;
volatile int16_t x742 = -1;
uint8_t x748 = 1U;
int32_t t181 = 1;
int16_t x752 = INT16_MIN;
int32_t x759 = INT32_MIN;
static volatile uint64_t t186 = 49969207910140759LLU;
uint8_t x769 = 66U;
volatile int64_t x770 = INT64_MIN;
uint16_t x772 = 1456U;
static int32_t t187 = -370806;
int32_t x773 = -28131835;
int64_t t189 = 167728LL;
volatile uint32_t x787 = UINT32_MAX;
uint64_t t191 = 318336LLU;
int64_t x792 = -1LL;
volatile uint64_t t196 = 16294LLU;
volatile int32_t t197 = 18289956;
int64_t x816 = -1LL;
volatile int64_t t198 = 1LL;
uint32_t x818 = UINT32_MAX;


void f0(void) {
    	static volatile int16_t x1 = INT16_MIN;
	static int16_t x3 = INT16_MIN;
	uint64_t x4 = 18560471152191253LLU;
	uint64_t t0 = 1091091881225416559LLU;

    t0 = (((x1>x2)&x3)/x4);

    if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x5 = -47;
	static int16_t x6 = 477;
	int32_t t1 = -227465;

    t1 = (((x5>x6)&x7)/x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = INT64_MIN;
	int16_t x10 = INT16_MIN;
	volatile int8_t x11 = 55;
	volatile int64_t x12 = INT64_MIN;

    t2 = (((x9>x10)&x11)/x12);

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = -1;
	static uint8_t x14 = 6U;
	uint32_t x15 = 366U;
	static int16_t x16 = INT16_MAX;
	volatile uint32_t t3 = 3428U;

    t3 = (((x13>x14)&x15)/x16);

    if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = -102;
	volatile int64_t x18 = -294715LL;
	int8_t x19 = INT8_MAX;
	uint32_t x20 = 6238U;
	volatile uint32_t t4 = 271U;

    t4 = (((x17>x18)&x19)/x20);

    if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x21 = -1;
	uint64_t x22 = UINT64_MAX;
	volatile int32_t x24 = -13986;
	volatile int32_t t5 = 3;

    t5 = (((x21>x22)&x23)/x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x25 = 680U;
	int8_t x26 = INT8_MIN;
	static int16_t x27 = -1;

    t6 = (((x25>x26)&x27)/x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x29 = 305515294893832399LLU;
	static int32_t x31 = INT32_MIN;
	volatile uint32_t t7 = 90U;

    t7 = (((x29>x30)&x31)/x32);

    if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = 4;
	volatile uint16_t x34 = 2537U;
	int32_t x36 = INT32_MAX;
	int32_t t8 = 184;

    t8 = (((x33>x34)&x35)/x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = INT8_MAX;
	volatile int8_t x38 = INT8_MIN;
	static int16_t x39 = -1;
	static int64_t x40 = -1LL;
	volatile int64_t t9 = 3854277018843944996LL;

    t9 = (((x37>x38)&x39)/x40);

    if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x42 = -1243837;
	int64_t x43 = INT64_MIN;
	int64_t t10 = -1LL;

    t10 = (((x41>x42)&x43)/x44);

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x45 = 14308298U;
	uint16_t x46 = 701U;
	int32_t x47 = INT32_MIN;
	static uint8_t x48 = 58U;
	int32_t t11 = -1091;

    t11 = (((x45>x46)&x47)/x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x49 = -13531;
	static int16_t x50 = -8;
	int32_t x51 = INT32_MIN;
	uint32_t x52 = 479960U;

    t12 = (((x49>x50)&x51)/x52);

    if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint8_t x53 = UINT8_MAX;
	uint16_t x54 = 399U;
	int64_t x55 = INT64_MIN;
	static volatile int64_t t13 = -79288385128117320LL;

    t13 = (((x53>x54)&x55)/x56);

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int8_t x57 = -1;
	int32_t x58 = -1;
	int8_t x59 = INT8_MIN;
	int64_t x60 = -1LL;
	volatile int64_t t14 = -39058662281727585LL;

    t14 = (((x57>x58)&x59)/x60);

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x61 = -1;
	static volatile uint64_t x62 = 34637LLU;
	int8_t x64 = INT8_MIN;
	static int32_t t15 = 415;

    t15 = (((x61>x62)&x63)/x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x65 = INT32_MIN;
	uint32_t x66 = 3655U;
	int32_t x67 = INT32_MAX;
	int8_t x68 = 7;
	int32_t t16 = -27;

    t16 = (((x65>x66)&x67)/x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x69 = -36674;
	static int64_t x70 = 40911LL;
	int16_t x72 = INT16_MIN;
	static uint64_t t17 = 211213249982LLU;

    t17 = (((x69>x70)&x71)/x72);

    if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x73 = UINT32_MAX;
	uint32_t x74 = UINT32_MAX;
	int16_t x75 = INT16_MAX;
	uint8_t x76 = 16U;
	static volatile int32_t t18 = -317293;

    t18 = (((x73>x74)&x75)/x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x78 = INT16_MIN;
	int64_t x80 = -1LL;
	int64_t t19 = 160941018902LL;

    t19 = (((x77>x78)&x79)/x80);

    if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int32_t x81 = INT32_MIN;
	uint64_t x82 = UINT64_MAX;
	static uint16_t x83 = UINT16_MAX;
	static uint64_t x84 = 590200023694338LLU;
	uint64_t t20 = 526384LLU;

    t20 = (((x81>x82)&x83)/x84);

    if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = 61114903528LL;
	static volatile int64_t x86 = INT64_MIN;
	int64_t x88 = INT64_MIN;

    t21 = (((x85>x86)&x87)/x88);

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x89 = 2U;
	uint32_t x90 = 386377725U;
	volatile int16_t x92 = INT16_MIN;
	int32_t t22 = -1;

    t22 = (((x89>x90)&x91)/x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x93 = UINT64_MAX;
	int32_t x94 = -1;
	int64_t x96 = INT64_MIN;

    t23 = (((x93>x94)&x95)/x96);

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = INT32_MIN;
	uint8_t x98 = 11U;
	static int16_t x99 = -1;
	int8_t x100 = INT8_MAX;
	volatile int32_t t24 = -7895117;

    t24 = (((x97>x98)&x99)/x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x101 = 28310492;
	static int8_t x102 = INT8_MIN;
	int8_t x103 = 1;
	int64_t x104 = -1LL;
	int64_t t25 = -762775LL;

    t25 = (((x101>x102)&x103)/x104);

    if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x105 = INT16_MIN;
	static uint64_t x106 = UINT64_MAX;
	static uint64_t x108 = 120041LLU;
	volatile uint64_t t26 = 25877480LLU;

    t26 = (((x105>x106)&x107)/x108);

    if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x109 = 413U;
	static int64_t x110 = INT64_MAX;
	int32_t x111 = -172204812;
	static volatile int16_t x112 = INT16_MIN;
	volatile int32_t t27 = 1448539;

    t27 = (((x109>x110)&x111)/x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int32_t x113 = -1;
	uint8_t x114 = UINT8_MAX;
	int16_t x115 = -1;
	uint8_t x116 = 30U;

    t28 = (((x113>x114)&x115)/x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile uint16_t x117 = 5U;
	int64_t x118 = 9LL;
	static uint64_t x119 = UINT64_MAX;
	int16_t x120 = INT16_MAX;
	uint64_t t29 = 1037131293LLU;

    t29 = (((x117>x118)&x119)/x120);

    if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = INT16_MAX;
	int64_t x123 = INT64_MIN;
	static int64_t x124 = INT64_MIN;
	volatile int64_t t30 = 186865964LL;

    t30 = (((x121>x122)&x123)/x124);

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x125 = 17754251LLU;
	static int64_t x126 = INT64_MIN;
	int64_t x127 = INT64_MIN;
	int64_t x128 = -8585217LL;
	int64_t t31 = -7181534LL;

    t31 = (((x125>x126)&x127)/x128);

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x129 = 0;
	static uint16_t x130 = UINT16_MAX;
	uint32_t x131 = 55362956U;
	uint8_t x132 = 71U;
	uint32_t t32 = 182U;

    t32 = (((x129>x130)&x131)/x132);

    if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = -1LL;
	int32_t x134 = INT32_MIN;
	static int64_t x135 = INT64_MAX;
	static volatile int32_t x136 = INT32_MIN;
	int64_t t33 = -3LL;

    t33 = (((x133>x134)&x135)/x136);

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x137 = 44;
	static int8_t x138 = INT8_MIN;
	int8_t x139 = -1;
	uint32_t x140 = UINT32_MAX;
	uint32_t t34 = 1844U;

    t34 = (((x137>x138)&x139)/x140);

    if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint32_t x141 = 15633054U;
	uint16_t x142 = UINT16_MAX;
	int32_t x143 = INT32_MIN;
	uint16_t x144 = UINT16_MAX;
	volatile int32_t t35 = 325851;

    t35 = (((x141>x142)&x143)/x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x145 = -15631;
	int64_t x146 = INT64_MIN;
	int16_t x148 = INT16_MAX;

    t36 = (((x145>x146)&x147)/x148);

    if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x149 = -1;
	int16_t x150 = -1;
	static int64_t x151 = INT64_MAX;
	int64_t t37 = 14761488778LL;

    t37 = (((x149>x150)&x151)/x152);

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint32_t x153 = 589705384U;
	static int32_t x154 = -34079145;
	int32_t x155 = -2213;
	uint64_t x156 = 13LLU;
	volatile uint64_t t38 = 2LLU;

    t38 = (((x153>x154)&x155)/x156);

    if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x158 = INT16_MIN;
	volatile uint8_t x159 = 11U;
	uint16_t x160 = 45U;
	volatile int32_t t39 = -846816;

    t39 = (((x157>x158)&x159)/x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x161 = 6;
	volatile int64_t x162 = -31LL;
	volatile int8_t x163 = INT8_MIN;
	static volatile int16_t x164 = INT16_MAX;
	volatile int32_t t40 = -400043;

    t40 = (((x161>x162)&x163)/x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x166 = -1;
	int64_t x168 = -9295376644862LL;

    t41 = (((x165>x166)&x167)/x168);

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x169 = 0U;
	static int32_t x172 = INT32_MIN;
	volatile int32_t t42 = 5783;

    t42 = (((x169>x170)&x171)/x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint16_t x173 = UINT16_MAX;
	volatile uint64_t x174 = 18125LLU;
	int32_t x175 = INT32_MAX;
	int8_t x176 = INT8_MAX;
	int32_t t43 = -23;

    t43 = (((x173>x174)&x175)/x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int64_t x177 = 94754203367186LL;
	int32_t x178 = INT32_MIN;
	uint64_t x180 = UINT64_MAX;
	uint64_t t44 = 115118LLU;

    t44 = (((x177>x178)&x179)/x180);

    if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x181 = -32;
	int32_t x182 = -70935119;
	uint16_t x183 = 482U;
	uint8_t x184 = UINT8_MAX;
	volatile int32_t t45 = -902704432;

    t45 = (((x181>x182)&x183)/x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int64_t x185 = -1LL;
	uint16_t x186 = UINT16_MAX;
	int32_t x187 = INT32_MAX;
	int32_t x188 = -1;
	static int32_t t46 = -700439454;

    t46 = (((x185>x186)&x187)/x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile int32_t x189 = 0;
	uint16_t x190 = 5U;
	static int16_t x191 = INT16_MIN;
	volatile int32_t x192 = -1;
	volatile int32_t t47 = -12;

    t47 = (((x189>x190)&x191)/x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint16_t x197 = 550U;
	int32_t x198 = -1;
	volatile int32_t x199 = INT32_MIN;
	int16_t x200 = INT16_MAX;
	int32_t t48 = 94;

    t48 = (((x197>x198)&x199)/x200);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int32_t x201 = 232403;
	volatile int8_t x203 = INT8_MAX;
	int8_t x204 = INT8_MAX;

    t49 = (((x201>x202)&x203)/x204);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x205 = 1885U;
	uint64_t x206 = 32572296799LLU;
	static int32_t x208 = -5;
	volatile int32_t t50 = -3021;

    t50 = (((x205>x206)&x207)/x208);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int16_t x209 = -1;
	static int8_t x211 = -2;
	int32_t x212 = 16917;
	static int32_t t51 = 1;

    t51 = (((x209>x210)&x211)/x212);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x213 = 2065U;
	volatile int32_t x214 = -5147;
	int16_t x216 = INT16_MIN;
	static int64_t t52 = 5LL;

    t52 = (((x213>x214)&x215)/x216);

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x217 = INT64_MIN;
	int16_t x218 = 1;
	int64_t x219 = INT64_MAX;
	static int32_t x220 = INT32_MIN;
	volatile int64_t t53 = 999092510285691LL;

    t53 = (((x217>x218)&x219)/x220);

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x222 = 54U;
	volatile int64_t x223 = 149601LL;
	volatile int32_t x224 = -1;
	volatile int64_t t54 = -1457012978172521057LL;

    t54 = (((x221>x222)&x223)/x224);

    if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x225 = 6243860505LLU;
	int32_t x226 = 81;
	static volatile int16_t x227 = -1;
	int16_t x228 = 1;
	int32_t t55 = 64718828;

    t55 = (((x225>x226)&x227)/x228);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x229 = UINT64_MAX;
	volatile int32_t x230 = INT32_MAX;
	static volatile int16_t x232 = -8;
	int32_t t56 = 81998088;

    t56 = (((x229>x230)&x231)/x232);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x233 = INT32_MIN;
	int32_t x234 = INT32_MIN;
	int32_t x235 = INT32_MIN;
	uint8_t x236 = 7U;
	int32_t t57 = 5484;

    t57 = (((x233>x234)&x235)/x236);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x239 = UINT8_MAX;
	volatile int32_t t58 = 7;

    t58 = (((x237>x238)&x239)/x240);

    if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int8_t x242 = -1;
	static int8_t x243 = INT8_MIN;
	static volatile int16_t x244 = INT16_MIN;
	volatile int32_t t59 = 65;

    t59 = (((x241>x242)&x243)/x244);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint8_t x245 = 3U;
	static int16_t x247 = INT16_MAX;

    t60 = (((x245>x246)&x247)/x248);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x250 = INT16_MIN;
	int8_t x252 = 62;
	static uint64_t t61 = 32LLU;

    t61 = (((x249>x250)&x251)/x252);

    if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x253 = 1;
	int64_t x254 = 19043533623LL;
	uint16_t x255 = UINT16_MAX;
	int64_t x256 = 9658LL;
	int64_t t62 = -990922443396955LL;

    t62 = (((x253>x254)&x255)/x256);

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x258 = INT64_MIN;
	int8_t x259 = INT8_MIN;

    t63 = (((x257>x258)&x259)/x260);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x261 = UINT8_MAX;
	static int16_t x262 = -1;
	volatile int8_t x263 = -29;
	int8_t x264 = 30;
	volatile int32_t t64 = 0;

    t64 = (((x261>x262)&x263)/x264);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x265 = 77138508LLU;
	int64_t x266 = INT64_MIN;
	int16_t x267 = INT16_MIN;
	uint8_t x268 = 16U;

    t65 = (((x265>x266)&x267)/x268);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x274 = INT8_MIN;
	uint64_t x275 = 26360449238LLU;
	int32_t x276 = 296734;

    t66 = (((x273>x274)&x275)/x276);

    if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile uint32_t x277 = 353U;
	int32_t x278 = INT32_MAX;
	uint64_t x279 = 7420700LLU;
	uint16_t x280 = UINT16_MAX;

    t67 = (((x277>x278)&x279)/x280);

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x281 = UINT16_MAX;
	static uint16_t x282 = 38U;
	static int64_t x283 = -2146656219425558LL;
	static volatile int8_t x284 = INT8_MAX;
	int64_t t68 = -596LL;

    t68 = (((x281>x282)&x283)/x284);

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static int8_t x289 = INT8_MIN;
	int8_t x291 = -1;
	uint64_t x292 = UINT64_MAX;
	volatile uint64_t t69 = 3038527637750808LLU;

    t69 = (((x289>x290)&x291)/x292);

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x293 = -2LL;
	uint32_t x294 = 966768811U;
	int8_t x295 = INT8_MAX;
	int16_t x296 = INT16_MIN;
	int32_t t70 = -183034001;

    t70 = (((x293>x294)&x295)/x296);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x298 = 88U;
	static int16_t x299 = INT16_MAX;
	int32_t x300 = -1;
	int32_t t71 = -101;

    t71 = (((x297>x298)&x299)/x300);

    if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int8_t x301 = INT8_MIN;
	int32_t x302 = -1;
	volatile uint32_t x303 = UINT32_MAX;
	uint32_t x304 = 945U;
	volatile uint32_t t72 = 910183089U;

    t72 = (((x301>x302)&x303)/x304);

    if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint16_t x305 = 6538U;
	uint16_t x306 = UINT16_MAX;
	int64_t x307 = -20438056826007LL;
	uint64_t x308 = 26798654349653LLU;

    t73 = (((x305>x306)&x307)/x308);

    if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x309 = -1;
	uint16_t x310 = 44U;
	volatile int64_t x311 = INT64_MAX;
	int64_t x312 = 149387LL;
	int64_t t74 = -1LL;

    t74 = (((x309>x310)&x311)/x312);

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x314 = INT8_MAX;
	uint16_t x315 = 3781U;
	uint8_t x316 = UINT8_MAX;

    t75 = (((x313>x314)&x315)/x316);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x317 = INT8_MAX;
	int32_t x319 = -371311768;
	volatile int16_t x320 = -1;
	static int32_t t76 = -1626261;

    t76 = (((x317>x318)&x319)/x320);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x321 = 579280;
	volatile uint64_t x322 = 85987272321822722LLU;
	static int64_t x324 = -3LL;
	int64_t t77 = 0LL;

    t77 = (((x321>x322)&x323)/x324);

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int64_t x325 = 756473089338351735LL;
	static uint16_t x326 = 1U;
	uint16_t x327 = 46U;
	volatile int32_t x328 = INT32_MIN;
	volatile int32_t t78 = 3236216;

    t78 = (((x325>x326)&x327)/x328);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x329 = INT32_MAX;
	volatile int16_t x330 = -1;
	static int16_t x331 = INT16_MIN;
	static int8_t x332 = INT8_MIN;
	int32_t t79 = -17206613;

    t79 = (((x329>x330)&x331)/x332);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x333 = INT64_MIN;
	int16_t x334 = INT16_MIN;
	int8_t x335 = INT8_MIN;
	int64_t x336 = -1188792831384348LL;
	int64_t t80 = -253568933LL;

    t80 = (((x333>x334)&x335)/x336);

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static int8_t x337 = INT8_MAX;
	static volatile int64_t x339 = -1769571605LL;
	int64_t t81 = -3922LL;

    t81 = (((x337>x338)&x339)/x340);

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x341 = UINT16_MAX;
	int8_t x342 = INT8_MIN;
	int32_t x343 = -1;
	static int16_t x344 = INT16_MIN;
	volatile int32_t t82 = 1;

    t82 = (((x341>x342)&x343)/x344);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x345 = INT16_MIN;
	uint32_t x346 = 243U;
	static int64_t x347 = -1LL;
	static int8_t x348 = -12;
	volatile int64_t t83 = -7382819860654LL;

    t83 = (((x345>x346)&x347)/x348);

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x349 = 2U;
	int64_t x350 = -1LL;
	static uint32_t x351 = UINT32_MAX;
	uint64_t x352 = UINT64_MAX;

    t84 = (((x349>x350)&x351)/x352);

    if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	static int32_t x353 = -1;
	volatile int16_t x354 = -58;
	uint16_t x355 = 5313U;
	uint8_t x356 = 48U;
	volatile int32_t t85 = 1016506283;

    t85 = (((x353>x354)&x355)/x356);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x357 = -460;
	int8_t x358 = -4;
	uint16_t x359 = UINT16_MAX;
	uint16_t x360 = 961U;
	int32_t t86 = -4949486;

    t86 = (((x357>x358)&x359)/x360);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x362 = 1;
	int64_t x363 = INT64_MAX;
	static volatile int64_t t87 = -26546094174753108LL;

    t87 = (((x361>x362)&x363)/x364);

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x365 = INT64_MIN;
	int32_t x366 = -31;
	uint8_t x367 = 0U;
	int64_t t88 = -6999591LL;

    t88 = (((x365>x366)&x367)/x368);

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x370 = 3105U;
	int16_t x371 = INT16_MIN;
	volatile int64_t t89 = 2408384576501054LL;

    t89 = (((x369>x370)&x371)/x372);

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x373 = INT32_MIN;
	int16_t x374 = INT16_MIN;
	static int8_t x376 = INT8_MIN;
	static int32_t t90 = -537;

    t90 = (((x373>x374)&x375)/x376);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x377 = 190123563606LL;
	static uint64_t x378 = 83666500776LLU;
	uint8_t x380 = UINT8_MAX;
	static int32_t t91 = -2015891;

    t91 = (((x377>x378)&x379)/x380);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static int32_t x382 = -1;
	int8_t x383 = -21;
	uint32_t x384 = 1027972U;
	uint32_t t92 = 741U;

    t92 = (((x381>x382)&x383)/x384);

    if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x385 = UINT8_MAX;
	volatile int16_t x386 = -3;
	int16_t x387 = INT16_MAX;
	uint32_t x388 = 4579216U;
	volatile uint32_t t93 = 3153414U;

    t93 = (((x385>x386)&x387)/x388);

    if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x389 = INT32_MAX;
	static uint16_t x392 = 89U;
	volatile int32_t t94 = -104;

    t94 = (((x389>x390)&x391)/x392);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x393 = INT16_MIN;
	uint64_t x395 = 717476LLU;
	volatile int32_t x396 = INT32_MIN;
	uint64_t t95 = 0LLU;

    t95 = (((x393>x394)&x395)/x396);

    if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x397 = INT8_MIN;
	volatile int32_t x398 = INT32_MIN;
	uint8_t x399 = UINT8_MAX;
	volatile int64_t t96 = 8542LL;

    t96 = (((x397>x398)&x399)/x400);

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint8_t x402 = UINT8_MAX;
	int16_t x403 = INT16_MIN;
	static uint8_t x404 = 100U;
	int32_t t97 = 11660683;

    t97 = (((x401>x402)&x403)/x404);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x405 = INT16_MIN;
	int16_t x407 = INT16_MIN;
	volatile uint64_t x408 = 60688699838883LLU;
	volatile uint64_t t98 = 6963601198126LLU;

    t98 = (((x405>x406)&x407)/x408);

    if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x409 = 2;
	int16_t x411 = INT16_MIN;
	static uint16_t x412 = 151U;

    t99 = (((x409>x410)&x411)/x412);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x413 = INT16_MIN;
	static volatile uint8_t x416 = 91U;
	int64_t t100 = -285066853050911094LL;

    t100 = (((x413>x414)&x415)/x416);

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int8_t x417 = -1;
	volatile uint16_t x420 = UINT16_MAX;
	volatile int32_t t101 = -1;

    t101 = (((x417>x418)&x419)/x420);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x421 = 1;
	static int64_t x422 = -1425616804838937LL;
	uint64_t x424 = UINT64_MAX;
	static volatile uint64_t t102 = 7092795072434802LLU;

    t102 = (((x421>x422)&x423)/x424);

    if (t102 != 0LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile uint16_t x425 = 5U;
	int16_t x427 = INT16_MIN;
	uint16_t x428 = 12U;
	volatile int32_t t103 = 6089;

    t103 = (((x425>x426)&x427)/x428);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x429 = INT32_MAX;
	int32_t x430 = -1;
	int32_t x431 = INT32_MAX;
	int64_t x432 = 77LL;
	int64_t t104 = 2016735722653029497LL;

    t104 = (((x429>x430)&x431)/x432);

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x433 = 166192240U;
	int8_t x434 = INT8_MIN;
	static int8_t x435 = INT8_MAX;
	int32_t x436 = -1;
	static volatile int32_t t105 = 863610845;

    t105 = (((x433>x434)&x435)/x436);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x438 = INT32_MIN;
	volatile int64_t t106 = -200LL;

    t106 = (((x437>x438)&x439)/x440);

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile int8_t x441 = INT8_MIN;
	static uint16_t x442 = 7190U;
	static uint16_t x443 = 71U;
	int32_t t107 = -3;

    t107 = (((x441>x442)&x443)/x444);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x445 = INT32_MIN;
	int64_t x446 = INT64_MIN;
	static uint32_t x448 = 13223U;

    t108 = (((x445>x446)&x447)/x448);

    if (t108 != 0U) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint64_t x450 = 105786781105595LLU;
	volatile int32_t t109 = -770363;

    t109 = (((x449>x450)&x451)/x452);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x455 = -4;
	int32_t x456 = INT32_MIN;
	int32_t t110 = 7257;

    t110 = (((x453>x454)&x455)/x456);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint16_t x457 = UINT16_MAX;
	volatile uint16_t x458 = 88U;
	uint16_t x460 = UINT16_MAX;
	int32_t t111 = -20;

    t111 = (((x457>x458)&x459)/x460);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x461 = INT16_MIN;
	int32_t x462 = -1;
	static uint8_t x463 = 59U;
	int64_t x464 = -8421254812LL;
	volatile int64_t t112 = -16577305683667984LL;

    t112 = (((x461>x462)&x463)/x464);

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x465 = 2952;
	int32_t x466 = INT32_MIN;
	uint16_t x467 = 8U;

    t113 = (((x465>x466)&x467)/x468);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x470 = 5229902621448445LL;
	volatile int32_t x471 = INT32_MAX;
	uint16_t x472 = UINT16_MAX;
	int32_t t114 = -14;

    t114 = (((x469>x470)&x471)/x472);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint16_t x473 = UINT16_MAX;
	int16_t x474 = INT16_MIN;
	int32_t x475 = -26;
	static uint16_t x476 = 20507U;
	int32_t t115 = 6;

    t115 = (((x473>x474)&x475)/x476);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x477 = UINT16_MAX;
	int32_t x478 = -949225;
	int64_t x479 = -1LL;
	int8_t x480 = INT8_MAX;
	static int64_t t116 = -525071496586967LL;

    t116 = (((x477>x478)&x479)/x480);

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x481 = 1U;
	volatile uint8_t x482 = 94U;
	int8_t x483 = INT8_MIN;
	int32_t x484 = INT32_MIN;
	volatile int32_t t117 = 0;

    t117 = (((x481>x482)&x483)/x484);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile int64_t x485 = -95473483706076LL;
	uint64_t x487 = UINT64_MAX;
	uint64_t x488 = 129960683LLU;

    t118 = (((x485>x486)&x487)/x488);

    if (t118 != 0LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x489 = INT32_MIN;
	volatile int16_t x491 = INT16_MIN;
	static volatile int32_t t119 = -30;

    t119 = (((x489>x490)&x491)/x492);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int8_t x493 = 47;
	volatile int16_t x495 = INT16_MAX;
	volatile int32_t x496 = -1;

    t120 = (((x493>x494)&x495)/x496);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x497 = INT64_MAX;
	uint8_t x498 = UINT8_MAX;
	int64_t x499 = 118650784313572606LL;
	volatile int64_t t121 = -302437LL;

    t121 = (((x497>x498)&x499)/x500);

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int8_t x501 = INT8_MIN;
	int64_t x502 = INT64_MIN;
	static uint64_t x503 = 266LLU;
	static volatile int64_t x504 = -20065635281LL;
	uint64_t t122 = 1606865722661LLU;

    t122 = (((x501>x502)&x503)/x504);

    if (t122 != 0LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint8_t x506 = 20U;
	int16_t x507 = INT16_MIN;
	volatile int64_t x508 = INT64_MIN;

    t123 = (((x505>x506)&x507)/x508);

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x509 = -283;
	static int64_t x510 = INT64_MIN;
	int64_t x511 = -1LL;
	uint8_t x512 = 9U;

    t124 = (((x509>x510)&x511)/x512);

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x515 = INT16_MIN;
	int64_t x516 = INT64_MIN;
	volatile int64_t t125 = -1721904735LL;

    t125 = (((x513>x514)&x515)/x516);

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint8_t x517 = UINT8_MAX;
	uint64_t x518 = 170886431041939LLU;
	int32_t x520 = INT32_MAX;
	int32_t t126 = -4786;

    t126 = (((x517>x518)&x519)/x520);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x521 = 183134626LL;
	static uint32_t x523 = 646654486U;
	int16_t x524 = 242;
	uint32_t t127 = 866683U;

    t127 = (((x521>x522)&x523)/x524);

    if (t127 != 0U) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x525 = -1;
	volatile int8_t x526 = INT8_MIN;
	int8_t x528 = INT8_MIN;
	int64_t t128 = 4022LL;

    t128 = (((x525>x526)&x527)/x528);

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x529 = -1;
	int8_t x530 = INT8_MIN;
	int8_t x531 = INT8_MAX;
	int32_t x532 = INT32_MAX;
	volatile int32_t t129 = -1;

    t129 = (((x529>x530)&x531)/x532);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x533 = 483U;
	int16_t x534 = 1558;
	uint64_t x535 = 19LLU;
	int16_t x536 = INT16_MIN;
	volatile uint64_t t130 = 6214264088883863452LLU;

    t130 = (((x533>x534)&x535)/x536);

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x537 = INT8_MAX;
	static int64_t x538 = INT64_MIN;

    t131 = (((x537>x538)&x539)/x540);

    if (t131 != 0LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x541 = UINT16_MAX;
	static int16_t x542 = -114;
	static volatile int32_t x544 = -1;

    t132 = (((x541>x542)&x543)/x544);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x545 = -9038;
	static volatile int64_t x546 = INT64_MIN;
	int64_t x547 = INT64_MIN;
	uint64_t x548 = UINT64_MAX;
	uint64_t t133 = 1483923325859953LLU;

    t133 = (((x545>x546)&x547)/x548);

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x551 = -1;
	uint32_t x552 = 12610950U;
	static volatile uint32_t t134 = 53U;

    t134 = (((x549>x550)&x551)/x552);

    if (t134 != 0U) { NG(); } else { ; }
	
}

void f135(void) {
    	static int32_t x553 = INT32_MIN;
	int64_t x555 = 1550089LL;
	uint8_t x556 = UINT8_MAX;

    t135 = (((x553>x554)&x555)/x556);

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x557 = -4;
	uint32_t x558 = UINT32_MAX;
	static uint32_t x559 = 4U;
	static int64_t t136 = -233752446634819LL;

    t136 = (((x557>x558)&x559)/x560);

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x561 = -90029984803LL;
	int32_t x562 = INT32_MIN;

    t137 = (((x561>x562)&x563)/x564);

    if (t137 != 0U) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x566 = -8303162LL;
	uint64_t x567 = 0LLU;
	uint8_t x568 = 1U;
	uint64_t t138 = 23637323LLU;

    t138 = (((x565>x566)&x567)/x568);

    if (t138 != 0LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x569 = INT8_MIN;
	int64_t x570 = -1LL;
	volatile int32_t x571 = INT32_MIN;
	int32_t x572 = INT32_MAX;
	int32_t t139 = 24998;

    t139 = (((x569>x570)&x571)/x572);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x573 = 218U;
	uint16_t x574 = 15962U;
	int8_t x575 = -1;
	static int32_t x576 = INT32_MIN;
	volatile int32_t t140 = -5404078;

    t140 = (((x573>x574)&x575)/x576);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x577 = 270301312342LL;
	int64_t x578 = -1LL;
	int8_t x579 = 1;
	uint64_t x580 = 92742572275751LLU;
	volatile uint64_t t141 = 1LLU;

    t141 = (((x577>x578)&x579)/x580);

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x581 = 1U;
	uint8_t x582 = UINT8_MAX;
	uint64_t t142 = 16160219542500123LLU;

    t142 = (((x581>x582)&x583)/x584);

    if (t142 != 0LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x585 = -1;
	static volatile int16_t x586 = -1;
	volatile int16_t x587 = INT16_MAX;
	volatile uint64_t x588 = 552723421638339856LLU;
	uint64_t t143 = 12288946508724LLU;

    t143 = (((x585>x586)&x587)/x588);

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x589 = UINT64_MAX;
	volatile uint32_t x590 = 48U;
	int8_t x591 = INT8_MIN;
	int16_t x592 = INT16_MIN;
	static volatile int32_t t144 = 14;

    t144 = (((x589>x590)&x591)/x592);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x593 = INT16_MIN;
	int16_t x594 = INT16_MAX;
	int64_t x595 = 75197712827545945LL;
	int32_t x596 = -30;
	volatile int64_t t145 = -7808491802419822LL;

    t145 = (((x593>x594)&x595)/x596);

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x597 = 618;
	volatile uint64_t x598 = UINT64_MAX;
	uint16_t x599 = 7097U;
	volatile int8_t x600 = INT8_MAX;

    t146 = (((x597>x598)&x599)/x600);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int8_t x602 = INT8_MIN;
	static int16_t x603 = INT16_MIN;
	int16_t x604 = -1;
	int32_t t147 = 2;

    t147 = (((x601>x602)&x603)/x604);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x605 = -73582;
	static int32_t x606 = -1;
	int64_t x607 = 460212184597564201LL;
	int8_t x608 = INT8_MAX;
	int64_t t148 = 49678788LL;

    t148 = (((x605>x606)&x607)/x608);

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int16_t x609 = INT16_MAX;
	int16_t x610 = INT16_MIN;
	int8_t x611 = INT8_MIN;
	int32_t x612 = 28981482;
	volatile int32_t t149 = 1796823;

    t149 = (((x609>x610)&x611)/x612);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x613 = INT16_MIN;
	int8_t x614 = -1;
	int16_t x615 = INT16_MIN;
	static int16_t x616 = 3;
	static int32_t t150 = 39153974;

    t150 = (((x613>x614)&x615)/x616);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x617 = -1LL;
	uint64_t x619 = 0LLU;
	static volatile int64_t x620 = INT64_MAX;

    t151 = (((x617>x618)&x619)/x620);

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile uint64_t x621 = UINT64_MAX;
	uint32_t x622 = 375759982U;
	int32_t x623 = -1;
	int8_t x624 = INT8_MIN;
	static volatile int32_t t152 = 2008;

    t152 = (((x621>x622)&x623)/x624);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x626 = UINT16_MAX;
	uint16_t x627 = 0U;
	int32_t x628 = 261578035;

    t153 = (((x625>x626)&x627)/x628);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x633 = 1;
	volatile uint8_t x634 = UINT8_MAX;
	int64_t x636 = INT64_MAX;
	int64_t t154 = -1053657968098LL;

    t154 = (((x633>x634)&x635)/x636);

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x637 = 1537577584U;
	static volatile int32_t x638 = -32644770;
	volatile int32_t x640 = -18;
	int32_t t155 = -2;

    t155 = (((x637>x638)&x639)/x640);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x641 = 3399;
	int8_t x642 = INT8_MIN;
	int16_t x643 = INT16_MIN;
	int16_t x644 = -403;
	static int32_t t156 = -1;

    t156 = (((x641>x642)&x643)/x644);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int64_t x645 = INT64_MIN;
	static int64_t x646 = -1LL;
	uint16_t x647 = 147U;
	static int64_t t157 = 176874064554LL;

    t157 = (((x645>x646)&x647)/x648);

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x649 = 5U;
	int8_t x650 = INT8_MIN;
	int16_t x651 = -8378;
	int8_t x652 = INT8_MIN;
	volatile int32_t t158 = -272;

    t158 = (((x649>x650)&x651)/x652);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint64_t x653 = 2LLU;
	volatile int8_t x655 = 28;
	volatile int32_t x656 = INT32_MIN;

    t159 = (((x653>x654)&x655)/x656);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int16_t x657 = INT16_MIN;
	static int64_t x658 = INT64_MIN;
	int64_t x659 = INT64_MAX;
	int32_t x660 = INT32_MAX;
	volatile int64_t t160 = -1033885037898492LL;

    t160 = (((x657>x658)&x659)/x660);

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile int16_t x661 = -2;
	volatile int8_t x662 = INT8_MAX;
	int8_t x664 = 1;
	volatile int32_t t161 = -61;

    t161 = (((x661>x662)&x663)/x664);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x665 = INT32_MIN;
	volatile uint16_t x666 = 8U;
	static uint16_t x667 = 381U;
	int32_t x668 = -1002;
	volatile int32_t t162 = 262;

    t162 = (((x665>x666)&x667)/x668);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x669 = UINT32_MAX;
	uint32_t x670 = 21628817U;
	static int64_t x671 = -16073016892LL;
	int16_t x672 = -1;
	int64_t t163 = 233LL;

    t163 = (((x669>x670)&x671)/x672);

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x674 = INT32_MIN;
	uint64_t x675 = 661671234664917363LLU;
	uint64_t t164 = 7870LLU;

    t164 = (((x673>x674)&x675)/x676);

    if (t164 != 0LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x677 = UINT64_MAX;
	static int16_t x679 = INT16_MIN;
	volatile int32_t t165 = -995045;

    t165 = (((x677>x678)&x679)/x680);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x685 = -1;
	uint64_t x687 = 3334876597695989430LLU;
	uint64_t t166 = 24131193464614LLU;

    t166 = (((x685>x686)&x687)/x688);

    if (t166 != 0LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x689 = UINT8_MAX;
	static uint8_t x690 = 1U;
	int64_t x691 = INT64_MAX;
	int64_t x692 = INT64_MIN;

    t167 = (((x689>x690)&x691)/x692);

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x693 = 0U;
	int16_t x694 = INT16_MIN;
	int64_t x695 = INT64_MIN;

    t168 = (((x693>x694)&x695)/x696);

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x697 = INT32_MIN;
	uint32_t x698 = 1722U;
	static volatile uint32_t x699 = 39U;
	static int8_t x700 = INT8_MAX;
	volatile uint32_t t169 = 653573U;

    t169 = (((x697>x698)&x699)/x700);

    if (t169 != 0U) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x701 = -458628;
	uint64_t x703 = 11LLU;
	volatile uint16_t x704 = UINT16_MAX;
	volatile uint64_t t170 = 7172721LLU;

    t170 = (((x701>x702)&x703)/x704);

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t t171 = -15841092790088LL;

    t171 = (((x705>x706)&x707)/x708);

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x709 = UINT32_MAX;
	uint16_t x710 = UINT16_MAX;
	int8_t x711 = -1;
	int32_t x712 = 9809134;
	volatile int32_t t172 = -180635;

    t172 = (((x709>x710)&x711)/x712);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x713 = 7U;
	int32_t x714 = INT32_MAX;
	static int16_t x716 = -1;

    t173 = (((x713>x714)&x715)/x716);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int64_t x718 = -43145995179LL;
	uint32_t x719 = 314491885U;
	int16_t x720 = INT16_MIN;
	volatile uint32_t t174 = 1652U;

    t174 = (((x717>x718)&x719)/x720);

    if (t174 != 0U) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x721 = INT8_MIN;
	int8_t x722 = INT8_MIN;
	int16_t x723 = INT16_MAX;
	static uint64_t x724 = UINT64_MAX;
	volatile uint64_t t175 = 16073LLU;

    t175 = (((x721>x722)&x723)/x724);

    if (t175 != 0LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x725 = 3371U;
	static volatile uint64_t t176 = 12011LLU;

    t176 = (((x725>x726)&x727)/x728);

    if (t176 != 0LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int16_t x729 = 88;
	static volatile uint16_t x730 = 1U;
	volatile int32_t x731 = INT32_MAX;
	volatile int32_t x732 = INT32_MIN;
	volatile int32_t t177 = -1;

    t177 = (((x729>x730)&x731)/x732);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x733 = -54;
	volatile int8_t x734 = -1;
	static int64_t x735 = -12157818809747181LL;
	static uint64_t x736 = UINT64_MAX;

    t178 = (((x733>x734)&x735)/x736);

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint16_t x737 = 31U;
	int8_t x739 = 3;
	int16_t x740 = INT16_MIN;
	int32_t t179 = -1;

    t179 = (((x737>x738)&x739)/x740);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x741 = -1LL;
	uint16_t x743 = UINT16_MAX;
	uint64_t x744 = 14324834261083LLU;
	volatile uint64_t t180 = 523625583279LLU;

    t180 = (((x741>x742)&x743)/x744);

    if (t180 != 0LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x745 = INT64_MIN;
	int32_t x746 = -575;
	int16_t x747 = 13;

    t181 = (((x745>x746)&x747)/x748);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x749 = 5872U;
	volatile int8_t x750 = -1;
	static int32_t x751 = INT32_MIN;
	int32_t t182 = -4;

    t182 = (((x749>x750)&x751)/x752);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int8_t x753 = 9;
	uint32_t x754 = 51842U;
	int32_t x755 = -496306;
	int16_t x756 = INT16_MAX;
	volatile int32_t t183 = 173896036;

    t183 = (((x753>x754)&x755)/x756);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint32_t x757 = 1305740U;
	volatile int64_t x758 = INT64_MIN;
	static uint8_t x760 = 5U;
	int32_t t184 = 476585148;

    t184 = (((x757>x758)&x759)/x760);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint32_t x761 = 16556703U;
	int32_t x762 = 125;
	volatile int16_t x763 = INT16_MIN;
	static int8_t x764 = INT8_MIN;
	volatile int32_t t185 = -260407875;

    t185 = (((x761>x762)&x763)/x764);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x765 = -1;
	volatile int16_t x766 = -1;
	int32_t x767 = INT32_MIN;
	volatile uint64_t x768 = 994475013650367947LLU;

    t186 = (((x765>x766)&x767)/x768);

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile int32_t x771 = INT32_MIN;

    t187 = (((x769>x770)&x771)/x772);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x774 = INT16_MAX;
	uint32_t x775 = 12353134U;
	uint64_t x776 = UINT64_MAX;
	uint64_t t188 = 370864651384LLU;

    t188 = (((x773>x774)&x775)/x776);

    if (t188 != 0LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x777 = 117;
	volatile int8_t x778 = -1;
	int64_t x779 = INT64_MAX;
	volatile uint8_t x780 = 21U;

    t189 = (((x777>x778)&x779)/x780);

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x781 = 235348446LLU;
	volatile int16_t x782 = INT16_MIN;
	int32_t x783 = INT32_MAX;
	int16_t x784 = INT16_MIN;
	static int32_t t190 = 45;

    t190 = (((x781>x782)&x783)/x784);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x785 = -435351938;
	int16_t x786 = 1;
	uint64_t x788 = 538996144873063784LLU;

    t191 = (((x785>x786)&x787)/x788);

    if (t191 != 0LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x789 = 19374990U;
	volatile int64_t x790 = -1LL;
	uint64_t x791 = 28179529252086714LLU;
	volatile uint64_t t192 = 499846912LLU;

    t192 = (((x789>x790)&x791)/x792);

    if (t192 != 0LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int16_t x793 = 113;
	int16_t x794 = -649;
	uint8_t x795 = UINT8_MAX;
	int64_t x796 = -191LL;
	static int64_t t193 = -459387097019LL;

    t193 = (((x793>x794)&x795)/x796);

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x797 = -1;
	uint8_t x798 = UINT8_MAX;
	int8_t x799 = INT8_MIN;
	volatile uint32_t x800 = 6U;
	static uint32_t t194 = 4970403U;

    t194 = (((x797>x798)&x799)/x800);

    if (t194 != 0U) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int8_t x801 = INT8_MIN;
	static volatile int16_t x802 = INT16_MIN;
	static int64_t x803 = -1LL;
	static uint16_t x804 = UINT16_MAX;
	int64_t t195 = -1026520842823LL;

    t195 = (((x801>x802)&x803)/x804);

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x805 = INT16_MIN;
	int8_t x806 = 0;
	uint64_t x807 = 116159414345849697LLU;
	volatile int64_t x808 = -1341054LL;

    t196 = (((x805>x806)&x807)/x808);

    if (t196 != 0LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	static int32_t x809 = INT32_MAX;
	uint16_t x810 = 1U;
	int8_t x811 = -1;
	static int8_t x812 = INT8_MIN;

    t197 = (((x809>x810)&x811)/x812);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x813 = INT64_MIN;
	uint16_t x814 = 3U;
	uint32_t x815 = 602U;

    t198 = (((x813>x814)&x815)/x816);

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	static int64_t x817 = INT64_MIN;
	static volatile uint32_t x819 = 247U;
	int16_t x820 = INT16_MIN;
	uint32_t t199 = 998107846U;

    t199 = (((x817>x818)&x819)/x820);

    if (t199 != 0U) { NG(); } else { ; }
	
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

