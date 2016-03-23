
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

static int16_t x13 = -41;
uint8_t x20 = 59U;
int16_t x25 = INT16_MAX;
int16_t x27 = INT16_MIN;
int64_t x29 = INT64_MAX;
int16_t x31 = -1;
int64_t x32 = -1LL;
uint32_t x33 = 9U;
int8_t x37 = INT8_MIN;
int32_t x40 = -1;
uint32_t x42 = 1026024U;
int32_t t10 = 0;
static int64_t x49 = INT64_MAX;
uint32_t x50 = 1922323U;
volatile int32_t t12 = -1624;
static int64_t x57 = INT64_MAX;
static int32_t x62 = -4701627;
uint64_t x63 = UINT64_MAX;
int32_t t17 = -118683513;
int64_t x73 = -1LL;
int64_t x79 = INT64_MAX;
int64_t x94 = INT64_MIN;
static int8_t x99 = INT8_MAX;
int64_t x100 = INT64_MIN;
uint64_t x102 = 67154027942033755LLU;
int32_t x106 = -1;
int8_t x107 = -1;
static volatile int8_t x108 = 3;
int32_t t26 = -14773;
static int32_t x110 = INT32_MIN;
static int16_t x111 = 1;
static int32_t t27 = 923824616;
int16_t x115 = INT16_MIN;
int64_t x119 = 322090988219264LL;
volatile uint64_t x123 = 132147754054910600LLU;
static int32_t t30 = -618;
int16_t x125 = INT16_MIN;
volatile int32_t t31 = 481;
volatile int32_t t32 = -782916;
int64_t x133 = INT64_MIN;
int32_t t33 = 0;
int32_t x139 = -133;
int64_t x141 = -610898750151748446LL;
uint16_t x146 = 1U;
static int32_t x148 = INT32_MIN;
static volatile uint32_t x152 = 2046337896U;
volatile int16_t x155 = -1;
volatile int32_t x163 = INT32_MAX;
static volatile int32_t t40 = -378200;
int64_t x165 = INT64_MIN;
int64_t x168 = INT64_MAX;
int64_t x171 = -1LL;
int64_t x173 = -1LL;
static int32_t x174 = INT32_MIN;
int64_t x179 = -2LL;
uint16_t x184 = 0U;
int32_t t47 = -717871004;
int16_t x199 = -1;
int16_t x201 = INT16_MAX;
int64_t x208 = INT64_MAX;
volatile int8_t x212 = INT8_MIN;
int64_t x217 = INT64_MIN;
int32_t x218 = INT32_MIN;
static volatile int8_t x219 = 3;
int64_t x221 = INT64_MAX;
int64_t x223 = INT64_MIN;
volatile int32_t t55 = -117299809;
int8_t x228 = INT8_MAX;
int16_t x230 = -3920;
uint64_t x231 = 280346295083LLU;
volatile int32_t t59 = 2601;
uint64_t x243 = 809LLU;
volatile int32_t t61 = -2;
volatile int32_t x252 = INT32_MAX;
int8_t x254 = 8;
int32_t t63 = 1999;
uint64_t x259 = UINT64_MAX;
volatile uint32_t x268 = UINT32_MAX;
volatile uint64_t x273 = 658412426870648LLU;
volatile int32_t t68 = -1;
uint8_t x277 = 8U;
int32_t x280 = INT32_MIN;
static int32_t x290 = 96083669;
int32_t x291 = -7;
int8_t x293 = INT8_MIN;
volatile int16_t x295 = INT16_MAX;
int64_t x304 = -1LL;
static volatile int32_t t75 = 91;
uint16_t x314 = 660U;
int64_t x315 = INT64_MIN;
uint8_t x317 = UINT8_MAX;
static uint64_t x319 = 924639817146LLU;
uint32_t x320 = 80U;
static volatile int32_t t80 = 4023500;
int16_t x325 = 37;
uint16_t x333 = 5464U;
volatile int64_t x336 = INT64_MIN;
int32_t t84 = -1;
volatile uint64_t x341 = UINT64_MAX;
uint32_t x342 = 73332061U;
uint16_t x344 = 12U;
uint16_t x349 = 62U;
int8_t x353 = INT8_MIN;
int16_t x360 = INT16_MAX;
volatile uint32_t x364 = 19937U;
int32_t t91 = -46089155;
int32_t t94 = -201244;
volatile int8_t x391 = INT8_MIN;
volatile int32_t t98 = -246;
volatile uint8_t x397 = 38U;
volatile int32_t x399 = -1;
int32_t t100 = 1;
uint8_t x410 = UINT8_MAX;
int32_t t102 = -9409637;
volatile int32_t t103 = 34900714;
static volatile int32_t t105 = 1403;
static volatile uint8_t x426 = UINT8_MAX;
uint64_t x428 = 0LLU;
int32_t x430 = INT32_MAX;
uint8_t x431 = 3U;
static volatile int16_t x432 = INT16_MIN;
uint64_t x433 = UINT64_MAX;
volatile int32_t t108 = 416394;
int32_t t109 = -106;
uint16_t x441 = UINT16_MAX;
static int64_t x453 = INT64_MIN;
volatile int32_t x454 = -30;
uint32_t x456 = UINT32_MAX;
static int8_t x459 = -1;
volatile int32_t t114 = -3337568;
volatile int8_t x467 = -1;
volatile int32_t t116 = -4023253;
static volatile uint32_t x471 = UINT32_MAX;
int32_t x472 = INT32_MIN;
uint8_t x476 = UINT8_MAX;
int32_t t118 = 670;
uint64_t x481 = 126638LLU;
static int32_t x486 = INT32_MIN;
uint32_t x491 = UINT32_MAX;
int16_t x494 = -9;
int32_t x501 = INT32_MIN;
uint32_t x514 = 532724U;
uint64_t x523 = 795LLU;
int16_t x529 = INT16_MAX;
static uint16_t x535 = UINT16_MAX;
uint64_t x550 = 36290685511085290LLU;
int32_t x555 = INT32_MIN;
volatile int8_t x556 = 1;
int32_t t138 = 0;
static int16_t x561 = 0;
static uint32_t x563 = 377260U;
uint32_t x569 = 415132901U;
uint16_t x574 = UINT16_MAX;
int8_t x576 = INT8_MAX;
volatile int8_t x580 = INT8_MAX;
uint32_t x586 = 3U;
int64_t x588 = 29945798059LL;
volatile int32_t x590 = -2200062;
volatile int32_t t147 = -213793;
volatile uint8_t x596 = 9U;
int8_t x606 = INT8_MIN;
int16_t x609 = -1;
uint16_t x612 = UINT16_MAX;
volatile uint64_t x629 = UINT64_MAX;
volatile int64_t x630 = INT64_MIN;
int8_t x635 = INT8_MIN;
uint32_t x640 = UINT32_MAX;
int32_t t159 = 111;
int32_t t160 = -43198;
int64_t x646 = INT64_MAX;
volatile int32_t t165 = 1;
int8_t x665 = INT8_MIN;
static int32_t t166 = -43041;
uint16_t x673 = 21488U;
int8_t x681 = INT8_MIN;
uint16_t x684 = 1528U;
int64_t x688 = INT64_MIN;
int32_t t171 = 1;
volatile int32_t t172 = 1;
static int32_t x712 = 513;
volatile int32_t t177 = 3707;
volatile int8_t x713 = INT8_MIN;
int32_t x716 = 328589604;
uint8_t x725 = UINT8_MAX;
int8_t x726 = INT8_MAX;
static int32_t x727 = INT32_MIN;
int8_t x742 = INT8_MAX;
int32_t x745 = INT32_MIN;
int8_t x748 = INT8_MAX;
volatile int32_t t187 = -10096;
volatile int16_t x755 = 6;
int32_t t188 = 0;
uint8_t x757 = UINT8_MAX;
static int64_t x758 = -29316LL;
int16_t x761 = INT16_MAX;
static uint16_t x763 = 886U;
int32_t x766 = -929331;
int16_t x767 = 1;
volatile int8_t x768 = INT8_MIN;
static volatile int64_t x775 = INT64_MIN;
static int8_t x776 = INT8_MAX;
int8_t x783 = -16;
uint64_t x787 = UINT64_MAX;
uint64_t x788 = 3312881LLU;
uint16_t x791 = 15576U;
uint16_t x796 = UINT16_MAX;
uint8_t x798 = UINT8_MAX;
static volatile int32_t t199 = 163617820;


void f0(void) {
    	static int16_t x1 = -13301;
	volatile int16_t x2 = -1;
	uint8_t x3 = 0U;
	volatile int64_t x4 = INT64_MIN;
	volatile int32_t t0 = -316;

    t0 = (((x1|x2)&x3)!=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MIN;
	uint64_t x6 = 569702663474393LLU;
	int8_t x7 = INT8_MAX;
	int16_t x8 = INT16_MIN;
	int32_t t1 = -87;

    t1 = (((x5|x6)&x7)!=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint8_t x9 = 125U;
	uint8_t x10 = 5U;
	static int64_t x11 = INT64_MIN;
	int8_t x12 = -38;
	volatile int32_t t2 = 352704;

    t2 = (((x9|x10)&x11)!=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x14 = INT8_MIN;
	uint64_t x15 = 9289952LLU;
	int16_t x16 = INT16_MIN;
	volatile int32_t t3 = 16389;

    t3 = (((x13|x14)&x15)!=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static int16_t x17 = INT16_MAX;
	uint16_t x18 = 0U;
	uint64_t x19 = 66271149028655442LLU;
	int32_t t4 = 1;

    t4 = (((x17|x18)&x19)!=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint32_t x21 = UINT32_MAX;
	int64_t x22 = INT64_MIN;
	int16_t x23 = 2038;
	uint8_t x24 = 0U;
	volatile int32_t t5 = -93;

    t5 = (((x21|x22)&x23)!=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static int32_t x26 = INT32_MAX;
	int16_t x28 = INT16_MIN;
	volatile int32_t t6 = 2;

    t6 = (((x25|x26)&x27)!=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x30 = INT64_MAX;
	int32_t t7 = -126;

    t7 = (((x29|x30)&x31)!=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint16_t x34 = UINT16_MAX;
	int8_t x35 = INT8_MAX;
	int16_t x36 = INT16_MIN;
	int32_t t8 = -422391;

    t8 = (((x33|x34)&x35)!=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x38 = 38LL;
	int32_t x39 = -1;
	static int32_t t9 = 0;

    t9 = (((x37|x38)&x39)!=x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = INT8_MIN;
	volatile int64_t x43 = 1442733585715581299LL;
	uint8_t x44 = UINT8_MAX;

    t10 = (((x41|x42)&x43)!=x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = 0;
	volatile int32_t x46 = INT32_MAX;
	volatile int32_t x47 = -7;
	uint8_t x48 = 60U;
	volatile int32_t t11 = 12;

    t11 = (((x45|x46)&x47)!=x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x51 = INT16_MIN;
	int16_t x52 = -1;

    t12 = (((x49|x50)&x51)!=x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = 2708815LL;
	int16_t x54 = -1;
	int32_t x55 = 10364894;
	int8_t x56 = 0;
	static int32_t t13 = -53472790;

    t13 = (((x53|x54)&x55)!=x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint16_t x58 = 7U;
	uint16_t x59 = 55U;
	int8_t x60 = INT8_MIN;
	volatile int32_t t14 = -38274;

    t14 = (((x57|x58)&x59)!=x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static int8_t x61 = -1;
	int16_t x64 = 4;
	volatile int32_t t15 = 1463444;

    t15 = (((x61|x62)&x63)!=x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile int64_t x65 = -1LL;
	int8_t x66 = -1;
	volatile uint8_t x67 = 27U;
	int64_t x68 = -25926370898LL;
	int32_t t16 = 493551;

    t16 = (((x65|x66)&x67)!=x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x69 = 1U;
	static volatile uint8_t x70 = 0U;
	volatile int64_t x71 = -63937287616712LL;
	volatile uint8_t x72 = 2U;

    t17 = (((x69|x70)&x71)!=x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x74 = INT32_MAX;
	int64_t x75 = INT64_MIN;
	int8_t x76 = INT8_MAX;
	volatile int32_t t18 = 92715651;

    t18 = (((x73|x74)&x75)!=x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x77 = -1980;
	int8_t x78 = -14;
	static int8_t x80 = -1;
	volatile int32_t t19 = 10;

    t19 = (((x77|x78)&x79)!=x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = INT8_MAX;
	static int32_t x82 = 37646;
	uint64_t x83 = UINT64_MAX;
	int32_t x84 = INT32_MIN;
	volatile int32_t t20 = 259864683;

    t20 = (((x81|x82)&x83)!=x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x85 = INT16_MIN;
	uint8_t x86 = UINT8_MAX;
	static int64_t x87 = INT64_MIN;
	int8_t x88 = -12;
	volatile int32_t t21 = -6686404;

    t21 = (((x85|x86)&x87)!=x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = INT16_MIN;
	int32_t x90 = -109;
	static int8_t x91 = -5;
	int16_t x92 = 194;
	int32_t t22 = 42550040;

    t22 = (((x89|x90)&x91)!=x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = INT32_MIN;
	static int16_t x95 = INT16_MAX;
	int8_t x96 = INT8_MIN;
	int32_t t23 = 3247152;

    t23 = (((x93|x94)&x95)!=x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x97 = INT16_MIN;
	volatile uint8_t x98 = 0U;
	volatile int32_t t24 = 14691878;

    t24 = (((x97|x98)&x99)!=x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint8_t x101 = UINT8_MAX;
	int64_t x103 = -1LL;
	int32_t x104 = 195;
	static volatile int32_t t25 = -295368;

    t25 = (((x101|x102)&x103)!=x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x105 = 1944U;

    t26 = (((x105|x106)&x107)!=x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = INT16_MIN;
	int16_t x112 = -6;

    t27 = (((x109|x110)&x111)!=x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint64_t x113 = 1307LLU;
	volatile uint64_t x114 = UINT64_MAX;
	int64_t x116 = INT64_MIN;
	int32_t t28 = -51452;

    t28 = (((x113|x114)&x115)!=x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x117 = UINT8_MAX;
	int8_t x118 = -1;
	volatile uint16_t x120 = UINT16_MAX;
	static int32_t t29 = -33068;

    t29 = (((x117|x118)&x119)!=x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = INT32_MIN;
	volatile int16_t x122 = 0;
	volatile int16_t x124 = INT16_MAX;

    t30 = (((x121|x122)&x123)!=x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x126 = 10420;
	int32_t x127 = 102;
	static int16_t x128 = INT16_MIN;

    t31 = (((x125|x126)&x127)!=x128);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int32_t x129 = INT32_MIN;
	int32_t x130 = INT32_MIN;
	static volatile uint32_t x131 = 10022613U;
	int32_t x132 = -20132324;

    t32 = (((x129|x130)&x131)!=x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x134 = -2;
	uint16_t x135 = 1U;
	int32_t x136 = INT32_MIN;

    t33 = (((x133|x134)&x135)!=x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x137 = -1;
	int8_t x138 = INT8_MIN;
	static volatile uint64_t x140 = 7957400239283144503LLU;
	volatile int32_t t34 = -1;

    t34 = (((x137|x138)&x139)!=x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x142 = INT64_MIN;
	int16_t x143 = INT16_MAX;
	static int8_t x144 = -1;
	volatile int32_t t35 = 13879372;

    t35 = (((x141|x142)&x143)!=x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x145 = UINT8_MAX;
	uint32_t x147 = 5587U;
	int32_t t36 = 1800;

    t36 = (((x145|x146)&x147)!=x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x149 = INT64_MAX;
	int16_t x150 = -42;
	int32_t x151 = INT32_MIN;
	int32_t t37 = 398223;

    t37 = (((x149|x150)&x151)!=x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = -15;
	int16_t x154 = 0;
	int16_t x156 = -4916;
	volatile int32_t t38 = 55554;

    t38 = (((x153|x154)&x155)!=x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x157 = INT64_MAX;
	uint32_t x158 = 133458822U;
	uint64_t x159 = 15845LLU;
	int8_t x160 = 60;
	volatile int32_t t39 = 20715;

    t39 = (((x157|x158)&x159)!=x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint8_t x161 = UINT8_MAX;
	static int64_t x162 = -3983LL;
	static volatile uint32_t x164 = 5556U;

    t40 = (((x161|x162)&x163)!=x164);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static int16_t x166 = INT16_MIN;
	int32_t x167 = -3833;
	int32_t t41 = -97;

    t41 = (((x165|x166)&x167)!=x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int64_t x169 = INT64_MIN;
	static int64_t x170 = INT64_MIN;
	int16_t x172 = INT16_MIN;
	volatile int32_t t42 = -26852754;

    t42 = (((x169|x170)&x171)!=x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x175 = 343;
	int64_t x176 = INT64_MIN;
	volatile int32_t t43 = 66551959;

    t43 = (((x173|x174)&x175)!=x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x177 = INT16_MIN;
	static int8_t x178 = INT8_MIN;
	int8_t x180 = INT8_MAX;
	volatile int32_t t44 = 133260224;

    t44 = (((x177|x178)&x179)!=x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x181 = UINT32_MAX;
	static int32_t x182 = INT32_MIN;
	uint64_t x183 = 3946712960LLU;
	volatile int32_t t45 = 89;

    t45 = (((x181|x182)&x183)!=x184);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x185 = INT8_MAX;
	int16_t x186 = -58;
	int64_t x187 = INT64_MIN;
	static int8_t x188 = -5;
	int32_t t46 = 112;

    t46 = (((x185|x186)&x187)!=x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint8_t x189 = 51U;
	volatile uint32_t x190 = 0U;
	volatile uint64_t x191 = 26390342LLU;
	static int16_t x192 = INT16_MAX;

    t47 = (((x189|x190)&x191)!=x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x193 = INT16_MAX;
	int64_t x194 = -1LL;
	static int16_t x195 = INT16_MIN;
	int16_t x196 = -1;
	int32_t t48 = 99969;

    t48 = (((x193|x194)&x195)!=x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int32_t x197 = INT32_MIN;
	volatile int8_t x198 = -1;
	static uint16_t x200 = UINT16_MAX;
	int32_t t49 = 1259265;

    t49 = (((x197|x198)&x199)!=x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x202 = 1556357463LLU;
	volatile uint16_t x203 = UINT16_MAX;
	int32_t x204 = INT32_MIN;
	volatile int32_t t50 = 6905;

    t50 = (((x201|x202)&x203)!=x204);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x205 = UINT8_MAX;
	uint16_t x206 = 6U;
	static int8_t x207 = -1;
	static int32_t t51 = -1895;

    t51 = (((x205|x206)&x207)!=x208);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = -1LL;
	int8_t x210 = INT8_MIN;
	volatile int16_t x211 = -1;
	int32_t t52 = 7652;

    t52 = (((x209|x210)&x211)!=x212);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile int32_t x213 = -1;
	uint8_t x214 = UINT8_MAX;
	int16_t x215 = -1;
	int8_t x216 = INT8_MAX;
	int32_t t53 = -30426;

    t53 = (((x213|x214)&x215)!=x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x220 = INT32_MIN;
	static int32_t t54 = 654;

    t54 = (((x217|x218)&x219)!=x220);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x222 = 1;
	int64_t x224 = -1LL;

    t55 = (((x221|x222)&x223)!=x224);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x225 = UINT64_MAX;
	volatile int16_t x226 = 406;
	static int32_t x227 = -1;
	int32_t t56 = -1;

    t56 = (((x225|x226)&x227)!=x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x229 = INT16_MIN;
	int64_t x232 = -1LL;
	static volatile int32_t t57 = -402359;

    t57 = (((x229|x230)&x231)!=x232);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x233 = INT8_MIN;
	static uint64_t x234 = UINT64_MAX;
	static volatile int16_t x235 = INT16_MIN;
	uint16_t x236 = 14U;
	volatile int32_t t58 = -220028;

    t58 = (((x233|x234)&x235)!=x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x237 = 1;
	int64_t x238 = INT64_MAX;
	int16_t x239 = 3;
	static int32_t x240 = INT32_MAX;

    t59 = (((x237|x238)&x239)!=x240);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x241 = UINT16_MAX;
	int32_t x242 = INT32_MIN;
	static int64_t x244 = -32367336094279245LL;
	int32_t t60 = 69577565;

    t60 = (((x241|x242)&x243)!=x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x245 = 1LLU;
	int16_t x246 = -1;
	uint32_t x247 = 1U;
	int16_t x248 = 2;

    t61 = (((x245|x246)&x247)!=x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x249 = INT64_MIN;
	int64_t x250 = INT64_MIN;
	uint64_t x251 = 6090499091LLU;
	static int32_t t62 = -24;

    t62 = (((x249|x250)&x251)!=x252);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x253 = UINT16_MAX;
	volatile uint64_t x255 = 8219476299525194LLU;
	int16_t x256 = -40;

    t63 = (((x253|x254)&x255)!=x256);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int64_t x257 = -83LL;
	int16_t x258 = INT16_MIN;
	static uint16_t x260 = UINT16_MAX;
	static volatile int32_t t64 = -2318640;

    t64 = (((x257|x258)&x259)!=x260);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = -691923;
	int32_t x262 = 14380;
	volatile int8_t x263 = INT8_MIN;
	static int8_t x264 = INT8_MAX;
	static int32_t t65 = -117560;

    t65 = (((x261|x262)&x263)!=x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint32_t x265 = UINT32_MAX;
	int32_t x266 = -1;
	int32_t x267 = -1;
	volatile int32_t t66 = -6;

    t66 = (((x265|x266)&x267)!=x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile uint64_t x269 = 195283531733435238LLU;
	int32_t x270 = INT32_MAX;
	static int64_t x271 = -946903734045775435LL;
	volatile uint64_t x272 = 123024700LLU;
	static volatile int32_t t67 = 0;

    t67 = (((x269|x270)&x271)!=x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x274 = 546333094644884LL;
	int16_t x275 = INT16_MAX;
	volatile int8_t x276 = -1;

    t68 = (((x273|x274)&x275)!=x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint16_t x278 = 3U;
	int32_t x279 = INT32_MIN;
	static volatile int32_t t69 = 567683;

    t69 = (((x277|x278)&x279)!=x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = 343456342LL;
	uint8_t x282 = UINT8_MAX;
	int16_t x283 = -1;
	int8_t x284 = INT8_MIN;
	volatile int32_t t70 = -6;

    t70 = (((x281|x282)&x283)!=x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x285 = INT8_MAX;
	static uint64_t x286 = 24709LLU;
	int8_t x287 = INT8_MIN;
	static uint32_t x288 = 5U;
	int32_t t71 = -113764596;

    t71 = (((x285|x286)&x287)!=x288);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x289 = INT64_MAX;
	volatile int64_t x292 = -21860026296LL;
	volatile int32_t t72 = 560818;

    t72 = (((x289|x290)&x291)!=x292);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static int16_t x294 = -1;
	volatile int8_t x296 = INT8_MAX;
	int32_t t73 = -901290743;

    t73 = (((x293|x294)&x295)!=x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int32_t x297 = -1;
	uint64_t x298 = UINT64_MAX;
	static uint8_t x299 = 40U;
	int32_t x300 = INT32_MIN;
	volatile int32_t t74 = -965;

    t74 = (((x297|x298)&x299)!=x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x301 = INT64_MIN;
	static int16_t x302 = 1;
	static uint8_t x303 = UINT8_MAX;

    t75 = (((x301|x302)&x303)!=x304);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x305 = 111527329223376090LL;
	uint32_t x306 = 23458U;
	uint16_t x307 = 12027U;
	volatile uint16_t x308 = 4U;
	int32_t t76 = -1;

    t76 = (((x305|x306)&x307)!=x308);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int32_t x309 = 255922848;
	int32_t x310 = -1;
	static int64_t x311 = INT64_MAX;
	static volatile int8_t x312 = INT8_MAX;
	static volatile int32_t t77 = -1;

    t77 = (((x309|x310)&x311)!=x312);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int8_t x313 = INT8_MAX;
	static int16_t x316 = -1;
	volatile int32_t t78 = 6856;

    t78 = (((x313|x314)&x315)!=x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x318 = 1U;
	int32_t t79 = 90314;

    t79 = (((x317|x318)&x319)!=x320);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x321 = INT64_MIN;
	int32_t x322 = INT32_MIN;
	volatile int32_t x323 = INT32_MIN;
	static int64_t x324 = -1LL;

    t80 = (((x321|x322)&x323)!=x324);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint16_t x326 = 2000U;
	int8_t x327 = -1;
	int64_t x328 = -1LL;
	static volatile int32_t t81 = -3830296;

    t81 = (((x325|x326)&x327)!=x328);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x329 = 492863065U;
	int32_t x330 = INT32_MIN;
	volatile int64_t x331 = INT64_MAX;
	volatile int8_t x332 = INT8_MIN;
	static volatile int32_t t82 = -56170590;

    t82 = (((x329|x330)&x331)!=x332);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x334 = INT64_MIN;
	int8_t x335 = -1;
	static int32_t t83 = -594683345;

    t83 = (((x333|x334)&x335)!=x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int64_t x337 = INT64_MIN;
	int64_t x338 = -103045600536753872LL;
	uint32_t x339 = 42420298U;
	volatile uint16_t x340 = 5826U;

    t84 = (((x337|x338)&x339)!=x340);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x343 = 2U;
	static int32_t t85 = 53412066;

    t85 = (((x341|x342)&x343)!=x344);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x345 = 152;
	int16_t x346 = 235;
	int32_t x347 = 1367;
	static uint64_t x348 = UINT64_MAX;
	static volatile int32_t t86 = 11737799;

    t86 = (((x345|x346)&x347)!=x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile int16_t x350 = INT16_MIN;
	static volatile uint32_t x351 = 26U;
	uint64_t x352 = 63LLU;
	volatile int32_t t87 = -26636;

    t87 = (((x349|x350)&x351)!=x352);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint16_t x354 = 68U;
	uint32_t x355 = 5751884U;
	uint16_t x356 = 1U;
	volatile int32_t t88 = 14121;

    t88 = (((x353|x354)&x355)!=x356);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x357 = 6612739303LLU;
	int8_t x358 = -53;
	int32_t x359 = -51428;
	volatile int32_t t89 = 0;

    t89 = (((x357|x358)&x359)!=x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint32_t x361 = UINT32_MAX;
	int8_t x362 = INT8_MAX;
	uint8_t x363 = UINT8_MAX;
	volatile int32_t t90 = 989254;

    t90 = (((x361|x362)&x363)!=x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x365 = UINT16_MAX;
	uint16_t x366 = 5385U;
	static volatile int16_t x367 = INT16_MIN;
	int8_t x368 = 2;

    t91 = (((x365|x366)&x367)!=x368);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x369 = UINT16_MAX;
	volatile uint32_t x370 = 67005U;
	int64_t x371 = INT64_MIN;
	int32_t x372 = INT32_MIN;
	int32_t t92 = -1;

    t92 = (((x369|x370)&x371)!=x372);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint16_t x373 = 75U;
	uint32_t x374 = UINT32_MAX;
	int64_t x375 = -497366LL;
	int8_t x376 = 3;
	int32_t t93 = -4747;

    t93 = (((x373|x374)&x375)!=x376);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x377 = INT64_MAX;
	int32_t x378 = -1;
	static uint64_t x379 = 178777726LLU;
	uint8_t x380 = 90U;

    t94 = (((x377|x378)&x379)!=x380);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint8_t x381 = UINT8_MAX;
	int16_t x382 = -1;
	volatile int16_t x383 = INT16_MIN;
	int64_t x384 = 1LL;
	int32_t t95 = 5790757;

    t95 = (((x381|x382)&x383)!=x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x385 = 19U;
	int8_t x386 = INT8_MIN;
	int8_t x387 = INT8_MAX;
	volatile uint8_t x388 = UINT8_MAX;
	int32_t t96 = 79;

    t96 = (((x385|x386)&x387)!=x388);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x389 = -476438933;
	int32_t x390 = INT32_MIN;
	static uint8_t x392 = 0U;
	int32_t t97 = -43419;

    t97 = (((x389|x390)&x391)!=x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x393 = 32006U;
	int64_t x394 = -1LL;
	static uint8_t x395 = UINT8_MAX;
	uint32_t x396 = UINT32_MAX;

    t98 = (((x393|x394)&x395)!=x396);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x398 = 1475;
	volatile uint32_t x400 = UINT32_MAX;
	volatile int32_t t99 = 1013;

    t99 = (((x397|x398)&x399)!=x400);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = -1;
	volatile uint8_t x402 = UINT8_MAX;
	int8_t x403 = INT8_MIN;
	uint16_t x404 = UINT16_MAX;

    t100 = (((x401|x402)&x403)!=x404);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x405 = -1LL;
	volatile int8_t x406 = 15;
	int16_t x407 = INT16_MIN;
	int8_t x408 = INT8_MAX;
	volatile int32_t t101 = 3864;

    t101 = (((x405|x406)&x407)!=x408);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x409 = INT8_MAX;
	int8_t x411 = -1;
	volatile uint32_t x412 = 135U;

    t102 = (((x409|x410)&x411)!=x412);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int8_t x413 = -2;
	uint16_t x414 = UINT16_MAX;
	static int64_t x415 = -1066336131LL;
	static int32_t x416 = -7329;

    t103 = (((x413|x414)&x415)!=x416);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x417 = -1LL;
	volatile int16_t x418 = INT16_MAX;
	int8_t x419 = 0;
	static volatile int64_t x420 = 1673545489444970698LL;
	int32_t t104 = 7;

    t104 = (((x417|x418)&x419)!=x420);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int8_t x421 = INT8_MAX;
	int16_t x422 = INT16_MAX;
	int32_t x423 = 16038;
	int16_t x424 = INT16_MIN;

    t105 = (((x421|x422)&x423)!=x424);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x425 = 22U;
	static int8_t x427 = -1;
	int32_t t106 = -1;

    t106 = (((x425|x426)&x427)!=x428);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x429 = INT8_MIN;
	volatile int32_t t107 = -17115;

    t107 = (((x429|x430)&x431)!=x432);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x434 = 6U;
	uint16_t x435 = 2U;
	uint8_t x436 = 10U;

    t108 = (((x433|x434)&x435)!=x436);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x437 = INT32_MIN;
	static int32_t x438 = -1;
	int32_t x439 = INT32_MAX;
	int16_t x440 = INT16_MAX;

    t109 = (((x437|x438)&x439)!=x440);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int64_t x442 = INT64_MIN;
	uint16_t x443 = 1802U;
	int8_t x444 = -1;
	int32_t t110 = -1;

    t110 = (((x441|x442)&x443)!=x444);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint32_t x445 = 41306405U;
	int16_t x446 = -1;
	int8_t x447 = INT8_MAX;
	int32_t x448 = -706297;
	static volatile int32_t t111 = 1;

    t111 = (((x445|x446)&x447)!=x448);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint32_t x449 = UINT32_MAX;
	uint16_t x450 = UINT16_MAX;
	static int32_t x451 = -1;
	int16_t x452 = INT16_MIN;
	volatile int32_t t112 = 1405150;

    t112 = (((x449|x450)&x451)!=x452);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x455 = UINT32_MAX;
	volatile int32_t t113 = -13658305;

    t113 = (((x453|x454)&x455)!=x456);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x457 = UINT64_MAX;
	int64_t x458 = -1074898LL;
	int16_t x460 = 3089;

    t114 = (((x457|x458)&x459)!=x460);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x461 = -1;
	uint8_t x462 = 4U;
	uint32_t x463 = 220U;
	int16_t x464 = 164;
	static int32_t t115 = 6639;

    t115 = (((x461|x462)&x463)!=x464);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x465 = UINT8_MAX;
	int16_t x466 = 160;
	uint32_t x468 = 1707035U;

    t116 = (((x465|x466)&x467)!=x468);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x469 = 2499094;
	int16_t x470 = 1;
	int32_t t117 = -7555285;

    t117 = (((x469|x470)&x471)!=x472);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x473 = 14LL;
	static volatile uint32_t x474 = 1663U;
	int32_t x475 = INT32_MIN;

    t118 = (((x473|x474)&x475)!=x476);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x477 = UINT8_MAX;
	uint16_t x478 = UINT16_MAX;
	int64_t x479 = -69316267834LL;
	static int64_t x480 = INT64_MIN;
	int32_t t119 = -1;

    t119 = (((x477|x478)&x479)!=x480);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x482 = -1;
	uint16_t x483 = 9976U;
	static uint16_t x484 = UINT16_MAX;
	int32_t t120 = -1;

    t120 = (((x481|x482)&x483)!=x484);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x485 = 32006146256135LLU;
	int32_t x487 = INT32_MAX;
	uint32_t x488 = 175851583U;
	static volatile int32_t t121 = -127363084;

    t121 = (((x485|x486)&x487)!=x488);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x489 = INT32_MIN;
	uint32_t x490 = 214U;
	static uint64_t x492 = UINT64_MAX;
	int32_t t122 = -3226;

    t122 = (((x489|x490)&x491)!=x492);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x493 = INT8_MIN;
	int64_t x495 = INT64_MAX;
	int32_t x496 = INT32_MIN;
	volatile int32_t t123 = -128816;

    t123 = (((x493|x494)&x495)!=x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x497 = -1;
	uint8_t x498 = UINT8_MAX;
	uint8_t x499 = 2U;
	int32_t x500 = -1;
	static volatile int32_t t124 = 2608;

    t124 = (((x497|x498)&x499)!=x500);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x502 = -1LL;
	uint8_t x503 = UINT8_MAX;
	static int64_t x504 = INT64_MIN;
	volatile int32_t t125 = -2825;

    t125 = (((x501|x502)&x503)!=x504);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x505 = INT32_MIN;
	int16_t x506 = 1;
	int8_t x507 = 0;
	volatile int8_t x508 = -19;
	static int32_t t126 = 4679638;

    t126 = (((x505|x506)&x507)!=x508);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint16_t x509 = UINT16_MAX;
	int32_t x510 = -1;
	int16_t x511 = INT16_MIN;
	uint8_t x512 = 5U;
	int32_t t127 = 63984;

    t127 = (((x509|x510)&x511)!=x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x513 = 86U;
	int16_t x515 = INT16_MIN;
	static int64_t x516 = INT64_MIN;
	static int32_t t128 = 326292654;

    t128 = (((x513|x514)&x515)!=x516);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static int16_t x517 = 3;
	uint32_t x518 = 27131U;
	uint16_t x519 = 3659U;
	uint64_t x520 = 121342LLU;
	int32_t t129 = 240011229;

    t129 = (((x517|x518)&x519)!=x520);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x521 = 157380LL;
	static volatile uint16_t x522 = 152U;
	int16_t x524 = INT16_MIN;
	int32_t t130 = 148;

    t130 = (((x521|x522)&x523)!=x524);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x525 = -50;
	static int16_t x526 = INT16_MAX;
	int32_t x527 = 16186;
	int8_t x528 = 59;
	static volatile int32_t t131 = -8429;

    t131 = (((x525|x526)&x527)!=x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile int16_t x530 = -1;
	static volatile uint32_t x531 = 302059U;
	static int16_t x532 = -1;
	int32_t t132 = -55318781;

    t132 = (((x529|x530)&x531)!=x532);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x533 = UINT64_MAX;
	static int32_t x534 = -1;
	int16_t x536 = INT16_MIN;
	int32_t t133 = 78921157;

    t133 = (((x533|x534)&x535)!=x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x537 = INT16_MAX;
	int8_t x538 = -1;
	static int8_t x539 = -13;
	uint64_t x540 = UINT64_MAX;
	volatile int32_t t134 = 935;

    t134 = (((x537|x538)&x539)!=x540);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x541 = -1;
	uint64_t x542 = 1343033759251LLU;
	int16_t x543 = -23;
	int8_t x544 = INT8_MAX;
	static volatile int32_t t135 = 268221;

    t135 = (((x541|x542)&x543)!=x544);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x545 = 0;
	static int16_t x546 = INT16_MIN;
	static volatile uint8_t x547 = UINT8_MAX;
	int32_t x548 = -1;
	int32_t t136 = 4076446;

    t136 = (((x545|x546)&x547)!=x548);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x549 = 38;
	volatile uint32_t x551 = 0U;
	int8_t x552 = INT8_MIN;
	int32_t t137 = 17525;

    t137 = (((x549|x550)&x551)!=x552);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x553 = 22U;
	volatile uint32_t x554 = UINT32_MAX;

    t138 = (((x553|x554)&x555)!=x556);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x557 = INT64_MAX;
	uint16_t x558 = 1763U;
	uint16_t x559 = 15U;
	uint8_t x560 = 50U;
	volatile int32_t t139 = 15900664;

    t139 = (((x557|x558)&x559)!=x560);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static int64_t x562 = INT64_MAX;
	int8_t x564 = INT8_MIN;
	volatile int32_t t140 = 1;

    t140 = (((x561|x562)&x563)!=x564);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x565 = 947570555U;
	volatile uint16_t x566 = UINT16_MAX;
	int32_t x567 = INT32_MIN;
	uint16_t x568 = 5496U;
	static int32_t t141 = 132421;

    t141 = (((x565|x566)&x567)!=x568);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x570 = 47;
	int8_t x571 = INT8_MIN;
	volatile int8_t x572 = INT8_MIN;
	int32_t t142 = -8140490;

    t142 = (((x569|x570)&x571)!=x572);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x573 = -31;
	static int64_t x575 = -1LL;
	static int32_t t143 = -7650;

    t143 = (((x573|x574)&x575)!=x576);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static int32_t x577 = INT32_MIN;
	static volatile int64_t x578 = INT64_MAX;
	int8_t x579 = -1;
	static volatile int32_t t144 = 860;

    t144 = (((x577|x578)&x579)!=x580);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint16_t x581 = UINT16_MAX;
	uint8_t x582 = UINT8_MAX;
	static volatile int32_t x583 = 136;
	volatile int32_t x584 = -4;
	static volatile int32_t t145 = 5;

    t145 = (((x581|x582)&x583)!=x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static int32_t x585 = -1;
	uint64_t x587 = 20618259368313LLU;
	volatile int32_t t146 = 0;

    t146 = (((x585|x586)&x587)!=x588);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x589 = UINT8_MAX;
	volatile int64_t x591 = INT64_MIN;
	int16_t x592 = INT16_MIN;

    t147 = (((x589|x590)&x591)!=x592);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x593 = INT16_MAX;
	int32_t x594 = 171493;
	int64_t x595 = -52781113LL;
	volatile int32_t t148 = 1621335;

    t148 = (((x593|x594)&x595)!=x596);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x597 = 243;
	static uint64_t x598 = 11244305LLU;
	volatile int8_t x599 = -1;
	int64_t x600 = INT64_MIN;
	volatile int32_t t149 = -1;

    t149 = (((x597|x598)&x599)!=x600);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint16_t x601 = 220U;
	int32_t x602 = INT32_MAX;
	static int16_t x603 = 1;
	int16_t x604 = -1;
	int32_t t150 = 8715992;

    t150 = (((x601|x602)&x603)!=x604);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x605 = -20591700;
	uint64_t x607 = 364855389LLU;
	int16_t x608 = INT16_MIN;
	int32_t t151 = 66948694;

    t151 = (((x605|x606)&x607)!=x608);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x610 = 0U;
	int16_t x611 = INT16_MIN;
	int32_t t152 = 0;

    t152 = (((x609|x610)&x611)!=x612);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x613 = 14U;
	int64_t x614 = INT64_MIN;
	int64_t x615 = 4071810340877768896LL;
	int8_t x616 = INT8_MIN;
	volatile int32_t t153 = -792421434;

    t153 = (((x613|x614)&x615)!=x616);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x617 = INT64_MIN;
	uint8_t x618 = 2U;
	int8_t x619 = INT8_MIN;
	int16_t x620 = -1;
	volatile int32_t t154 = -717843;

    t154 = (((x617|x618)&x619)!=x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x621 = 0;
	static int16_t x622 = 6915;
	int16_t x623 = -1;
	static int64_t x624 = -514397345LL;
	volatile int32_t t155 = 633;

    t155 = (((x621|x622)&x623)!=x624);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x625 = INT16_MIN;
	int64_t x626 = INT64_MIN;
	int16_t x627 = INT16_MIN;
	static uint64_t x628 = UINT64_MAX;
	int32_t t156 = 111034748;

    t156 = (((x625|x626)&x627)!=x628);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static int16_t x631 = INT16_MIN;
	int8_t x632 = 5;
	static int32_t t157 = -235;

    t157 = (((x629|x630)&x631)!=x632);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x633 = 0LLU;
	uint8_t x634 = 0U;
	int64_t x636 = INT64_MIN;
	int32_t t158 = -1;

    t158 = (((x633|x634)&x635)!=x636);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x637 = UINT8_MAX;
	int8_t x638 = -1;
	int8_t x639 = 39;

    t159 = (((x637|x638)&x639)!=x640);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x641 = INT8_MIN;
	int8_t x642 = 1;
	int8_t x643 = 3;
	uint32_t x644 = UINT32_MAX;

    t160 = (((x641|x642)&x643)!=x644);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static int64_t x645 = -1LL;
	int16_t x647 = INT16_MIN;
	int16_t x648 = INT16_MIN;
	int32_t t161 = -67039;

    t161 = (((x645|x646)&x647)!=x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x649 = 1U;
	uint32_t x650 = 31196U;
	int32_t x651 = INT32_MAX;
	volatile int8_t x652 = INT8_MIN;
	int32_t t162 = 15304;

    t162 = (((x649|x650)&x651)!=x652);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x653 = 380U;
	volatile uint32_t x654 = UINT32_MAX;
	volatile int8_t x655 = INT8_MAX;
	static int16_t x656 = INT16_MAX;
	int32_t t163 = -59902;

    t163 = (((x653|x654)&x655)!=x656);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x657 = 273520;
	int64_t x658 = INT64_MIN;
	int32_t x659 = -1;
	int32_t x660 = INT32_MAX;
	int32_t t164 = -6736168;

    t164 = (((x657|x658)&x659)!=x660);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x661 = -1;
	int32_t x662 = -1;
	int8_t x663 = -1;
	int64_t x664 = INT64_MIN;

    t165 = (((x661|x662)&x663)!=x664);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x666 = UINT32_MAX;
	int8_t x667 = 1;
	volatile int16_t x668 = -1019;

    t166 = (((x665|x666)&x667)!=x668);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x669 = INT32_MIN;
	static uint8_t x670 = 0U;
	static int32_t x671 = INT32_MIN;
	uint64_t x672 = 22632501007LLU;
	volatile int32_t t167 = 36827515;

    t167 = (((x669|x670)&x671)!=x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x674 = INT8_MIN;
	static int32_t x675 = 604550;
	static int8_t x676 = -1;
	volatile int32_t t168 = 41352541;

    t168 = (((x673|x674)&x675)!=x676);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x677 = -3951068;
	volatile int32_t x678 = 7163;
	volatile uint8_t x679 = 21U;
	volatile int8_t x680 = 6;
	volatile int32_t t169 = 53347680;

    t169 = (((x677|x678)&x679)!=x680);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static int32_t x682 = INT32_MIN;
	int16_t x683 = INT16_MIN;
	volatile int32_t t170 = -1973;

    t170 = (((x681|x682)&x683)!=x684);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x685 = -1;
	static uint64_t x686 = 37477700079LLU;
	static volatile int64_t x687 = INT64_MIN;

    t171 = (((x685|x686)&x687)!=x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x689 = 4266148LL;
	int8_t x690 = INT8_MIN;
	static volatile uint8_t x691 = UINT8_MAX;
	int64_t x692 = -1178756LL;

    t172 = (((x689|x690)&x691)!=x692);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x693 = -1;
	int8_t x694 = INT8_MIN;
	int16_t x695 = -9;
	static int16_t x696 = INT16_MAX;
	volatile int32_t t173 = 423;

    t173 = (((x693|x694)&x695)!=x696);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x697 = INT8_MAX;
	int64_t x698 = INT64_MIN;
	uint64_t x699 = 62651LLU;
	int64_t x700 = INT64_MAX;
	volatile int32_t t174 = 646941128;

    t174 = (((x697|x698)&x699)!=x700);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x701 = -553781337LL;
	int16_t x702 = INT16_MIN;
	int16_t x703 = -1;
	volatile int16_t x704 = INT16_MAX;
	static volatile int32_t t175 = -144211;

    t175 = (((x701|x702)&x703)!=x704);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x705 = -3;
	int8_t x706 = 3;
	static volatile uint32_t x707 = 28201U;
	int32_t x708 = -10745;
	static int32_t t176 = 92;

    t176 = (((x705|x706)&x707)!=x708);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x709 = 118U;
	int32_t x710 = 123;
	int32_t x711 = -479;

    t177 = (((x709|x710)&x711)!=x712);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int8_t x714 = INT8_MIN;
	int16_t x715 = -1;
	int32_t t178 = -55;

    t178 = (((x713|x714)&x715)!=x716);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x717 = -1944;
	uint64_t x718 = 1LLU;
	int32_t x719 = 14;
	int64_t x720 = -4561984895066073949LL;
	int32_t t179 = -1391001;

    t179 = (((x717|x718)&x719)!=x720);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x721 = -4427;
	uint64_t x722 = 5LLU;
	uint16_t x723 = 1606U;
	static int32_t x724 = 383;
	static volatile int32_t t180 = -310293;

    t180 = (((x721|x722)&x723)!=x724);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x728 = 47723856829046LLU;
	int32_t t181 = -145;

    t181 = (((x725|x726)&x727)!=x728);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x729 = 91344251365LL;
	int32_t x730 = -1;
	uint32_t x731 = 11365U;
	volatile int32_t x732 = INT32_MAX;
	volatile int32_t t182 = -13724;

    t182 = (((x729|x730)&x731)!=x732);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x733 = 285U;
	int32_t x734 = 3306322;
	volatile int32_t x735 = 3;
	volatile int32_t x736 = INT32_MAX;
	int32_t t183 = 4;

    t183 = (((x733|x734)&x735)!=x736);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x737 = 3U;
	static volatile int64_t x738 = 51639256333LL;
	uint8_t x739 = 17U;
	uint16_t x740 = 714U;
	volatile int32_t t184 = -861241910;

    t184 = (((x737|x738)&x739)!=x740);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint16_t x741 = UINT16_MAX;
	int64_t x743 = -36656540304LL;
	volatile int32_t x744 = -1;
	volatile int32_t t185 = -197310;

    t185 = (((x741|x742)&x743)!=x744);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x746 = INT16_MAX;
	int8_t x747 = INT8_MIN;
	volatile int32_t t186 = -1;

    t186 = (((x745|x746)&x747)!=x748);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x749 = INT16_MAX;
	static uint64_t x750 = 7LLU;
	uint16_t x751 = 536U;
	int16_t x752 = INT16_MIN;

    t187 = (((x749|x750)&x751)!=x752);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x753 = -1;
	int32_t x754 = INT32_MAX;
	uint64_t x756 = UINT64_MAX;

    t188 = (((x753|x754)&x755)!=x756);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x759 = INT8_MAX;
	int8_t x760 = INT8_MIN;
	static int32_t t189 = -473;

    t189 = (((x757|x758)&x759)!=x760);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static int64_t x762 = -68010561272LL;
	uint32_t x764 = 484568U;
	int32_t t190 = -7;

    t190 = (((x761|x762)&x763)!=x764);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x765 = UINT8_MAX;
	static volatile int32_t t191 = 134539;

    t191 = (((x765|x766)&x767)!=x768);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x769 = INT8_MAX;
	uint64_t x770 = 8821435530566LLU;
	uint8_t x771 = 38U;
	static int64_t x772 = -397543955256741LL;
	volatile int32_t t192 = 488;

    t192 = (((x769|x770)&x771)!=x772);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x773 = INT32_MAX;
	int32_t x774 = INT32_MAX;
	volatile int32_t t193 = -25046;

    t193 = (((x773|x774)&x775)!=x776);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x777 = -1;
	int8_t x778 = INT8_MAX;
	int8_t x779 = INT8_MAX;
	uint8_t x780 = 0U;
	int32_t t194 = -3;

    t194 = (((x777|x778)&x779)!=x780);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x781 = -7741;
	static volatile uint16_t x782 = 9655U;
	volatile int64_t x784 = 31408317336LL;
	static int32_t t195 = 13;

    t195 = (((x781|x782)&x783)!=x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x785 = 20U;
	int64_t x786 = INT64_MAX;
	int32_t t196 = 35;

    t196 = (((x785|x786)&x787)!=x788);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x789 = 26804LLU;
	uint32_t x790 = 160U;
	static int64_t x792 = INT64_MAX;
	volatile int32_t t197 = 5188983;

    t197 = (((x789|x790)&x791)!=x792);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x793 = 14133U;
	static volatile int64_t x794 = INT64_MAX;
	int32_t x795 = -1;
	int32_t t198 = 0;

    t198 = (((x793|x794)&x795)!=x796);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x797 = UINT64_MAX;
	int32_t x799 = INT32_MIN;
	int16_t x800 = INT16_MAX;

    t199 = (((x797|x798)&x799)!=x800);

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

