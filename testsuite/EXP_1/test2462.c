
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

static int64_t x7 = -1270345399029LL;
int32_t x12 = 3591206;
volatile int32_t x13 = 38;
int32_t x16 = INT32_MIN;
int64_t x19 = INT64_MIN;
int32_t x23 = INT32_MIN;
uint8_t x24 = 40U;
volatile int32_t t5 = 76473;
static int32_t x35 = INT32_MAX;
int64_t x37 = -1LL;
uint64_t x38 = 566527720LLU;
volatile int32_t t9 = -399;
int16_t x51 = INT16_MAX;
int16_t x52 = 2992;
volatile int32_t t12 = 444961;
volatile int64_t x53 = -1LL;
volatile int32_t t14 = -1;
volatile int8_t x65 = INT8_MAX;
int16_t x81 = -7048;
static volatile int64_t x85 = INT64_MIN;
int8_t x89 = INT8_MIN;
volatile uint32_t x90 = 4071U;
uint64_t x91 = 163889817706LLU;
int64_t x92 = INT64_MIN;
uint16_t x99 = 3U;
static uint8_t x100 = 0U;
int32_t t25 = -28604;
static int8_t x108 = INT8_MIN;
int8_t x113 = -4;
uint8_t x114 = UINT8_MAX;
int16_t x120 = INT16_MIN;
int8_t x124 = -33;
int32_t t30 = -20391601;
volatile uint8_t x129 = 113U;
static volatile int8_t x130 = -1;
volatile int16_t x131 = -4;
static volatile int32_t t32 = -21435089;
uint32_t x134 = UINT32_MAX;
volatile int16_t x140 = INT16_MIN;
static volatile int32_t x142 = INT32_MIN;
int64_t x143 = INT64_MIN;
volatile int32_t t35 = -75;
volatile int8_t x147 = 0;
volatile uint32_t x156 = 139048212U;
volatile int8_t x163 = -38;
int32_t t41 = 10;
int32_t x169 = INT32_MIN;
static uint8_t x179 = UINT8_MAX;
int64_t x184 = INT64_MIN;
volatile int16_t x195 = 217;
int32_t x196 = INT32_MAX;
int16_t x198 = INT16_MIN;
uint64_t t50 = 386181184715593740LLU;
volatile int16_t x207 = INT16_MIN;
static volatile int64_t x209 = -1LL;
int16_t x213 = -1;
volatile int32_t t57 = 334;
uint64_t x238 = UINT64_MAX;
volatile int32_t t59 = 823;
static int32_t x247 = -20;
int32_t x248 = INT32_MAX;
int16_t x249 = INT16_MAX;
static int32_t t64 = 69826;
volatile uint16_t x268 = UINT16_MAX;
int32_t x277 = -780170787;
uint8_t x278 = 25U;
int32_t x282 = INT32_MIN;
static int64_t x290 = INT64_MIN;
int64_t t73 = -25817LL;
int16_t x298 = -1;
volatile int32_t x300 = INT32_MIN;
volatile int32_t t74 = -1508805;
static int8_t x308 = -1;
int64_t t77 = 265413661814419390LL;
int32_t x316 = 1045;
int32_t t78 = -9;
static uint64_t x317 = UINT64_MAX;
int64_t x318 = INT64_MAX;
static int16_t x327 = INT16_MIN;
uint16_t x328 = 53U;
static volatile int32_t t81 = 56;
static volatile uint32_t x329 = 6478U;
int8_t x334 = -1;
static int16_t x336 = -1;
int32_t t83 = 3471719;
uint16_t x338 = 12U;
static int64_t x339 = -44979518201LL;
volatile int32_t x351 = -29;
uint32_t x355 = 34722U;
static int16_t x359 = -1;
uint8_t x361 = 6U;
static int32_t x362 = 379187390;
int64_t x364 = -1LL;
volatile int32_t x365 = INT32_MIN;
int8_t x367 = -6;
int64_t x369 = 106LL;
uint16_t x372 = UINT16_MAX;
int16_t x380 = INT16_MIN;
volatile int64_t x391 = INT64_MIN;
int8_t x394 = INT8_MIN;
volatile int16_t x397 = INT16_MIN;
int32_t x406 = -69553843;
static int32_t t102 = -724243;
volatile int32_t t103 = 188912;
static volatile int32_t x419 = INT32_MIN;
volatile int32_t t106 = 535252692;
volatile int64_t x431 = INT64_MIN;
int8_t x433 = INT8_MAX;
static uint64_t x443 = UINT64_MAX;
int32_t t110 = 994997304;
int16_t x453 = -1;
int32_t x458 = -50;
int64_t x464 = INT64_MAX;
volatile uint32_t x471 = 49380U;
volatile int8_t x472 = INT8_MIN;
volatile int32_t t117 = -3688536;
uint16_t x477 = 19U;
int8_t x479 = -1;
static int32_t t119 = 51;
int32_t x484 = INT32_MAX;
volatile uint16_t x485 = 302U;
int32_t x486 = INT32_MIN;
volatile uint32_t t121 = 460171U;
int16_t x493 = -1;
volatile int32_t t123 = 278160;
static int16_t x500 = -1;
int32_t x506 = INT32_MAX;
int8_t x507 = INT8_MIN;
int8_t x508 = -24;
volatile int32_t t127 = 27318268;
uint8_t x521 = UINT8_MAX;
int32_t x523 = INT32_MAX;
static int32_t x526 = INT32_MIN;
volatile int8_t x527 = -7;
int64_t x529 = INT64_MAX;
static uint32_t x535 = 102U;
volatile int64_t t135 = 2809972389575826639LL;
volatile int64_t x548 = 2002728101LL;
int64_t t136 = -7137LL;
uint16_t x551 = 69U;
int8_t x552 = 0;
int32_t t138 = -88647;
uint8_t x560 = 1U;
volatile int32_t t139 = 345929701;
volatile int16_t x567 = INT16_MIN;
int8_t x572 = INT8_MAX;
static int32_t t142 = -195242800;
uint32_t x573 = UINT32_MAX;
int8_t x579 = -1;
static int16_t x580 = -7024;
volatile uint16_t x584 = UINT16_MAX;
uint8_t x586 = UINT8_MAX;
uint32_t x587 = UINT32_MAX;
static volatile uint32_t t146 = 173U;
int32_t t148 = -43;
int16_t x600 = INT16_MAX;
volatile int32_t t149 = 10;
int16_t x602 = INT16_MIN;
int32_t x606 = -1;
volatile uint64_t t151 = 961708824094LLU;
int32_t x609 = 2;
int16_t x611 = -478;
uint8_t x616 = 3U;
int8_t x625 = 0;
int32_t x628 = INT32_MIN;
int16_t x629 = INT16_MAX;
int64_t x630 = INT64_MIN;
uint16_t x637 = UINT16_MAX;
volatile uint32_t x641 = UINT32_MAX;
int64_t x647 = INT64_MIN;
int32_t t161 = -554;
static volatile int32_t x650 = INT32_MIN;
volatile uint16_t x652 = 20U;
static uint32_t x654 = 45617U;
int64_t x656 = -59604443LL;
static int8_t x662 = 0;
uint64_t x664 = 1LLU;
volatile uint64_t t165 = 14LLU;
int32_t t167 = 0;
uint32_t t168 = 117203630U;
int32_t t169 = -13671;
int32_t x681 = -381257;
int16_t x683 = -1;
volatile uint64_t x687 = UINT64_MAX;
volatile int16_t x688 = -312;
static uint32_t x693 = 3536467U;
uint32_t t173 = 11U;
static int16_t x703 = INT16_MIN;
int16_t x705 = 2099;
volatile int64_t x707 = -940LL;
int16_t x709 = INT16_MAX;
int64_t x711 = -1LL;
volatile int16_t x714 = 109;
uint16_t x719 = UINT16_MAX;
int32_t t179 = -97656;
uint32_t x731 = 1920357693U;
int64_t x742 = -4LL;
int32_t x744 = -1;
uint8_t x748 = UINT8_MAX;
int16_t x750 = -1;
int8_t x755 = 0;
volatile int32_t x756 = INT32_MIN;
static int8_t x757 = INT8_MAX;
uint8_t x763 = 17U;
volatile int32_t t190 = 51570;
int16_t x765 = INT16_MIN;
volatile int16_t x771 = -110;
volatile int32_t x777 = INT32_MIN;
uint32_t x780 = UINT32_MAX;
volatile int32_t t195 = -227305859;
int16_t x785 = INT16_MIN;
uint64_t x787 = 1247092LLU;
int8_t x791 = INT8_MAX;
uint16_t x792 = 33U;
int64_t x793 = 1LL;
int8_t x796 = -1;


void f0(void) {
    	volatile int32_t x1 = -1;
	int32_t x2 = INT32_MAX;
	static int32_t x3 = 24566;
	int32_t x4 = INT32_MAX;
	int32_t t0 = -12209;

    t0 = (((x1|x2)==x3)&x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int64_t x5 = -1LL;
	int16_t x6 = -1;
	int64_t x8 = 28360LL;
	volatile int64_t t1 = 463272LL;

    t1 = (((x5|x6)==x7)&x8);

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = -1;
	int32_t x10 = INT32_MIN;
	int8_t x11 = INT8_MIN;
	static int32_t t2 = 6728;

    t2 = (((x9|x10)==x11)&x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x14 = INT32_MIN;
	volatile int64_t x15 = INT64_MIN;
	int32_t t3 = -1347;

    t3 = (((x13|x14)==x15)&x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int32_t x17 = INT32_MAX;
	static volatile int32_t x18 = INT32_MIN;
	uint8_t x20 = 26U;
	volatile int32_t t4 = -66006;

    t4 = (((x17|x18)==x19)&x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = -1LL;
	int64_t x22 = INT64_MAX;

    t5 = (((x21|x22)==x23)&x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int64_t x25 = INT64_MAX;
	int64_t x26 = -1LL;
	static int64_t x27 = -1LL;
	int32_t x28 = INT32_MAX;
	static volatile int32_t t6 = -72741;

    t6 = (((x25|x26)==x27)&x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint8_t x29 = UINT8_MAX;
	int16_t x30 = INT16_MIN;
	uint64_t x31 = UINT64_MAX;
	int16_t x32 = INT16_MIN;
	static int32_t t7 = 28;

    t7 = (((x29|x30)==x31)&x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int32_t x33 = -1;
	static uint32_t x34 = UINT32_MAX;
	static int16_t x36 = -1;
	volatile int32_t t8 = 648;

    t8 = (((x33|x34)==x35)&x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x39 = 228466411U;
	uint16_t x40 = 3U;

    t9 = (((x37|x38)==x39)&x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x41 = 0;
	static volatile int8_t x42 = INT8_MAX;
	static int16_t x43 = INT16_MIN;
	int64_t x44 = -1LL;
	int64_t t10 = 11796LL;

    t10 = (((x41|x42)==x43)&x44);

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x45 = UINT8_MAX;
	int16_t x46 = -124;
	volatile int32_t x47 = INT32_MAX;
	int16_t x48 = INT16_MIN;
	int32_t t11 = -1285;

    t11 = (((x45|x46)==x47)&x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x49 = UINT32_MAX;
	static volatile int8_t x50 = INT8_MIN;

    t12 = (((x49|x50)==x51)&x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x54 = INT32_MIN;
	static uint16_t x55 = 6020U;
	uint64_t x56 = UINT64_MAX;
	static volatile uint64_t t13 = 28113037LLU;

    t13 = (((x53|x54)==x55)&x56);

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x57 = 324114890U;
	volatile int64_t x58 = -3545829LL;
	int32_t x59 = INT32_MIN;
	volatile int8_t x60 = INT8_MIN;

    t14 = (((x57|x58)==x59)&x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x61 = -1LL;
	uint64_t x62 = UINT64_MAX;
	uint64_t x63 = UINT64_MAX;
	int8_t x64 = INT8_MIN;
	volatile int32_t t15 = 2048735;

    t15 = (((x61|x62)==x63)&x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x66 = INT8_MIN;
	volatile int16_t x67 = INT16_MIN;
	int64_t x68 = 1LL;
	int64_t t16 = -12407LL;

    t16 = (((x65|x66)==x67)&x68);

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x69 = UINT16_MAX;
	int32_t x70 = 0;
	volatile int8_t x71 = INT8_MIN;
	static uint16_t x72 = UINT16_MAX;
	int32_t t17 = 564912;

    t17 = (((x69|x70)==x71)&x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int16_t x73 = INT16_MAX;
	int16_t x74 = INT16_MAX;
	static uint64_t x75 = 113LLU;
	volatile int16_t x76 = INT16_MAX;
	int32_t t18 = -1087;

    t18 = (((x73|x74)==x75)&x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = -1;
	int16_t x78 = INT16_MAX;
	static int64_t x79 = INT64_MIN;
	int8_t x80 = 0;
	int32_t t19 = 108806649;

    t19 = (((x77|x78)==x79)&x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x82 = 348264744029658928LLU;
	int8_t x83 = INT8_MIN;
	static volatile int8_t x84 = -1;
	static int32_t t20 = 4988886;

    t20 = (((x81|x82)==x83)&x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint16_t x86 = 192U;
	static volatile int16_t x87 = INT16_MIN;
	uint64_t x88 = UINT64_MAX;
	uint64_t t21 = 1002929029388747382LLU;

    t21 = (((x85|x86)==x87)&x88);

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int64_t t22 = 16606831LL;

    t22 = (((x89|x90)==x91)&x92);

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x93 = UINT64_MAX;
	volatile uint64_t x94 = 9563597LLU;
	int8_t x95 = INT8_MIN;
	int64_t x96 = 80LL;
	static int64_t t23 = -165622957288117865LL;

    t23 = (((x93|x94)==x95)&x96);

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int8_t x97 = 5;
	int16_t x98 = INT16_MAX;
	volatile int32_t t24 = -57867359;

    t24 = (((x97|x98)==x99)&x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x101 = -1;
	static int64_t x102 = 273962260642237LL;
	uint32_t x103 = 37U;
	static uint8_t x104 = UINT8_MAX;

    t25 = (((x101|x102)==x103)&x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint8_t x105 = UINT8_MAX;
	uint8_t x106 = 1U;
	uint16_t x107 = UINT16_MAX;
	static volatile int32_t t26 = 14816228;

    t26 = (((x105|x106)==x107)&x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = 49853783;
	static int32_t x110 = -1;
	int8_t x111 = -31;
	static volatile int16_t x112 = 1;
	volatile int32_t t27 = -4381035;

    t27 = (((x109|x110)==x111)&x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x115 = INT64_MIN;
	int32_t x116 = INT32_MIN;
	volatile int32_t t28 = -804107;

    t28 = (((x113|x114)==x115)&x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x117 = 8675279062354705843LLU;
	static uint16_t x118 = UINT16_MAX;
	uint16_t x119 = 803U;
	static volatile int32_t t29 = -246299;

    t29 = (((x117|x118)==x119)&x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint32_t x121 = 261586U;
	uint16_t x122 = UINT16_MAX;
	volatile int16_t x123 = -1;

    t30 = (((x121|x122)==x123)&x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = INT16_MIN;
	int64_t x126 = -35003332360LL;
	int64_t x127 = INT64_MIN;
	volatile int16_t x128 = 3167;
	volatile int32_t t31 = -32;

    t31 = (((x125|x126)==x127)&x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint16_t x132 = 6458U;

    t32 = (((x129|x130)==x131)&x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = INT64_MIN;
	volatile uint8_t x135 = 0U;
	int16_t x136 = INT16_MIN;
	int32_t t33 = 0;

    t33 = (((x133|x134)==x135)&x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x137 = -1LL;
	int64_t x138 = -2692LL;
	volatile uint16_t x139 = UINT16_MAX;
	volatile int32_t t34 = 112;

    t34 = (((x137|x138)==x139)&x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = INT16_MAX;
	volatile int8_t x144 = -1;

    t35 = (((x141|x142)==x143)&x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x145 = 7899;
	uint16_t x146 = 197U;
	uint32_t x148 = UINT32_MAX;
	uint32_t t36 = 29851613U;

    t36 = (((x145|x146)==x147)&x148);

    if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint16_t x149 = UINT16_MAX;
	int64_t x150 = -1LL;
	uint8_t x151 = 4U;
	int64_t x152 = 1128754884LL;
	int64_t t37 = -5592290882219289LL;

    t37 = (((x149|x150)==x151)&x152);

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = INT16_MIN;
	int64_t x154 = -8719LL;
	int64_t x155 = -1774665696301861839LL;
	volatile uint32_t t38 = 1U;

    t38 = (((x153|x154)==x155)&x156);

    if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = -1;
	int64_t x158 = -8205638LL;
	static uint8_t x159 = 123U;
	uint64_t x160 = 4LLU;
	uint64_t t39 = 33811927898476527LLU;

    t39 = (((x157|x158)==x159)&x160);

    if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x161 = UINT32_MAX;
	int64_t x162 = INT64_MAX;
	int32_t x164 = INT32_MIN;
	int32_t t40 = -19526451;

    t40 = (((x161|x162)==x163)&x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x165 = INT32_MAX;
	int64_t x166 = INT64_MIN;
	int8_t x167 = -1;
	static uint8_t x168 = 6U;

    t41 = (((x165|x166)==x167)&x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x170 = -14;
	int8_t x171 = INT8_MIN;
	volatile uint8_t x172 = 1U;
	int32_t t42 = 42007795;

    t42 = (((x169|x170)==x171)&x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x173 = INT16_MIN;
	volatile int32_t x174 = -755;
	uint16_t x175 = 3855U;
	uint32_t x176 = UINT32_MAX;
	volatile uint32_t t43 = 112U;

    t43 = (((x173|x174)==x175)&x176);

    if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x177 = 1;
	volatile int8_t x178 = INT8_MAX;
	int8_t x180 = INT8_MIN;
	volatile int32_t t44 = -1044681;

    t44 = (((x177|x178)==x179)&x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x181 = 826172U;
	uint8_t x182 = 1U;
	static int16_t x183 = INT16_MIN;
	volatile int64_t t45 = 2666779438996LL;

    t45 = (((x181|x182)==x183)&x184);

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint32_t x185 = 11467565U;
	int64_t x186 = 143828232858LL;
	uint64_t x187 = UINT64_MAX;
	int32_t x188 = 41912224;
	static int32_t t46 = 5698284;

    t46 = (((x185|x186)==x187)&x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x189 = 12LLU;
	int16_t x190 = INT16_MIN;
	int16_t x191 = 1366;
	int16_t x192 = 3;
	int32_t t47 = 336;

    t47 = (((x189|x190)==x191)&x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint8_t x193 = 0U;
	int16_t x194 = -1;
	int32_t t48 = 163832;

    t48 = (((x193|x194)==x195)&x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int8_t x197 = INT8_MIN;
	uint64_t x199 = 428994530928795236LLU;
	volatile int32_t x200 = 121333;
	static volatile int32_t t49 = 53312;

    t49 = (((x197|x198)==x199)&x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x201 = UINT32_MAX;
	int16_t x202 = -3;
	int8_t x203 = -1;
	volatile uint64_t x204 = UINT64_MAX;

    t50 = (((x201|x202)==x203)&x204);

    if (t50 != 1LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x205 = 166614833U;
	int16_t x206 = INT16_MIN;
	static uint8_t x208 = UINT8_MAX;
	int32_t t51 = -461489241;

    t51 = (((x205|x206)==x207)&x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x210 = 5LL;
	static int64_t x211 = -220042802482LL;
	static volatile int64_t x212 = 45876004870LL;
	volatile int64_t t52 = -1LL;

    t52 = (((x209|x210)==x211)&x212);

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint16_t x214 = 290U;
	int16_t x215 = INT16_MIN;
	static uint8_t x216 = UINT8_MAX;
	volatile int32_t t53 = -1194419;

    t53 = (((x213|x214)==x215)&x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x217 = INT8_MIN;
	int64_t x218 = INT64_MIN;
	uint64_t x219 = 87774838686LLU;
	int32_t x220 = INT32_MAX;
	static volatile int32_t t54 = -1295326;

    t54 = (((x217|x218)==x219)&x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x221 = INT8_MIN;
	int8_t x222 = -1;
	uint16_t x223 = UINT16_MAX;
	uint8_t x224 = 3U;
	int32_t t55 = 2;

    t55 = (((x221|x222)==x223)&x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x225 = INT32_MAX;
	int32_t x226 = INT32_MAX;
	static uint64_t x227 = 706LLU;
	uint64_t x228 = UINT64_MAX;
	volatile uint64_t t56 = 108LLU;

    t56 = (((x225|x226)==x227)&x228);

    if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x229 = -5;
	static int64_t x230 = INT64_MAX;
	int32_t x231 = INT32_MIN;
	volatile int16_t x232 = INT16_MIN;

    t57 = (((x229|x230)==x231)&x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x233 = INT16_MAX;
	static volatile int64_t x234 = 1LL;
	int8_t x235 = INT8_MAX;
	static volatile int16_t x236 = -2;
	int32_t t58 = 29;

    t58 = (((x233|x234)==x235)&x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x237 = INT64_MAX;
	int8_t x239 = -1;
	int16_t x240 = INT16_MIN;

    t59 = (((x237|x238)==x239)&x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint8_t x241 = 4U;
	int64_t x242 = 8LL;
	uint64_t x243 = 2396LLU;
	int64_t x244 = INT64_MIN;
	volatile int64_t t60 = 6626989LL;

    t60 = (((x241|x242)==x243)&x244);

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int64_t x245 = 431051150043766LL;
	volatile uint16_t x246 = 6284U;
	volatile int32_t t61 = 5254346;

    t61 = (((x245|x246)==x247)&x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x250 = -1;
	uint32_t x251 = 11U;
	static int8_t x252 = -1;
	int32_t t62 = 37;

    t62 = (((x249|x250)==x251)&x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile uint32_t x253 = 13239U;
	int8_t x254 = INT8_MIN;
	int16_t x255 = -1;
	int64_t x256 = INT64_MAX;
	int64_t t63 = 13417LL;

    t63 = (((x253|x254)==x255)&x256);

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x257 = 1694U;
	int32_t x258 = INT32_MIN;
	static int8_t x259 = INT8_MIN;
	uint16_t x260 = 4852U;

    t64 = (((x257|x258)==x259)&x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint8_t x261 = 1U;
	static uint64_t x262 = 100996338776243572LLU;
	volatile int8_t x263 = INT8_MAX;
	int16_t x264 = INT16_MAX;
	volatile int32_t t65 = -1371;

    t65 = (((x261|x262)==x263)&x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x265 = 175;
	uint64_t x266 = UINT64_MAX;
	int32_t x267 = INT32_MIN;
	int32_t t66 = 196;

    t66 = (((x265|x266)==x267)&x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x269 = INT32_MIN;
	int64_t x270 = INT64_MAX;
	static int8_t x271 = 0;
	uint16_t x272 = 62U;
	volatile int32_t t67 = -61412;

    t67 = (((x269|x270)==x271)&x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x273 = INT64_MIN;
	uint64_t x274 = 510665338364LLU;
	int16_t x275 = 1;
	int8_t x276 = -8;
	int32_t t68 = -339;

    t68 = (((x273|x274)==x275)&x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x279 = UINT64_MAX;
	int8_t x280 = INT8_MIN;
	volatile int32_t t69 = -846;

    t69 = (((x277|x278)==x279)&x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = -1;
	uint32_t x283 = 2077526259U;
	uint16_t x284 = UINT16_MAX;
	volatile int32_t t70 = 204;

    t70 = (((x281|x282)==x283)&x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static int64_t x285 = 1038949221436643LL;
	uint64_t x286 = 19061247LLU;
	volatile uint8_t x287 = 14U;
	uint8_t x288 = 1U;
	int32_t t71 = 9188;

    t71 = (((x285|x286)==x287)&x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile uint16_t x289 = 2U;
	int32_t x291 = 893184261;
	static volatile int8_t x292 = INT8_MIN;
	static volatile int32_t t72 = 8;

    t72 = (((x289|x290)==x291)&x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x293 = UINT16_MAX;
	int16_t x294 = 0;
	int64_t x295 = INT64_MIN;
	int64_t x296 = 16180LL;

    t73 = (((x293|x294)==x295)&x296);

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint32_t x297 = 147492U;
	int8_t x299 = INT8_MAX;

    t74 = (((x297|x298)==x299)&x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int8_t x301 = -1;
	int16_t x302 = INT16_MIN;
	static int64_t x303 = -1LL;
	uint16_t x304 = 177U;
	volatile int32_t t75 = 150;

    t75 = (((x301|x302)==x303)&x304);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint8_t x305 = 58U;
	uint64_t x306 = 333678587733124LLU;
	uint32_t x307 = UINT32_MAX;
	int32_t t76 = 3;

    t76 = (((x305|x306)==x307)&x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint16_t x309 = UINT16_MAX;
	volatile int8_t x310 = -1;
	int64_t x311 = INT64_MAX;
	int64_t x312 = INT64_MIN;

    t77 = (((x309|x310)==x311)&x312);

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x313 = 533461138299449LL;
	static uint8_t x314 = 13U;
	int32_t x315 = -1;

    t78 = (((x313|x314)==x315)&x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x319 = INT8_MAX;
	uint32_t x320 = 14430157U;
	uint32_t t79 = 1U;

    t79 = (((x317|x318)==x319)&x320);

    if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint64_t x321 = 748632750166886LLU;
	int16_t x322 = -6;
	uint8_t x323 = 18U;
	int32_t x324 = -1;
	int32_t t80 = 1;

    t80 = (((x321|x322)==x323)&x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x325 = INT32_MIN;
	uint64_t x326 = 48180LLU;

    t81 = (((x325|x326)==x327)&x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x330 = 28;
	static int8_t x331 = INT8_MAX;
	static int64_t x332 = -1LL;
	int64_t t82 = -2917310439350LL;

    t82 = (((x329|x330)==x331)&x332);

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x333 = 783U;
	uint16_t x335 = UINT16_MAX;

    t83 = (((x333|x334)==x335)&x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x337 = INT8_MIN;
	int64_t x340 = INT64_MAX;
	int64_t t84 = 313057563363226197LL;

    t84 = (((x337|x338)==x339)&x340);

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x341 = 9U;
	volatile int64_t x342 = -4130391379402LL;
	volatile int8_t x343 = -1;
	int16_t x344 = INT16_MAX;
	int32_t t85 = 2767;

    t85 = (((x341|x342)==x343)&x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x345 = 21;
	int32_t x346 = -1;
	uint16_t x347 = UINT16_MAX;
	int8_t x348 = INT8_MIN;
	int32_t t86 = 2391525;

    t86 = (((x345|x346)==x347)&x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x349 = UINT32_MAX;
	uint32_t x350 = 5499655U;
	int8_t x352 = 0;
	int32_t t87 = -358;

    t87 = (((x349|x350)==x351)&x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = 1;
	int8_t x354 = INT8_MAX;
	int8_t x356 = INT8_MIN;
	static volatile int32_t t88 = 888504;

    t88 = (((x353|x354)==x355)&x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint64_t x357 = UINT64_MAX;
	int8_t x358 = INT8_MIN;
	uint64_t x360 = 258841LLU;
	uint64_t t89 = 48384LLU;

    t89 = (((x357|x358)==x359)&x360);

    if (t89 != 1LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint16_t x363 = UINT16_MAX;
	volatile int64_t t90 = -494LL;

    t90 = (((x361|x362)==x363)&x364);

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint16_t x366 = 1U;
	int8_t x368 = -1;
	volatile int32_t t91 = 80;

    t91 = (((x365|x366)==x367)&x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x370 = 6;
	int8_t x371 = INT8_MIN;
	volatile int32_t t92 = 197299;

    t92 = (((x369|x370)==x371)&x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x373 = -30LL;
	volatile uint16_t x374 = 6241U;
	volatile int16_t x375 = -507;
	int8_t x376 = -1;
	volatile int32_t t93 = 5;

    t93 = (((x373|x374)==x375)&x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint64_t x377 = 4685084732LLU;
	int32_t x378 = INT32_MIN;
	int32_t x379 = INT32_MIN;
	int32_t t94 = 106379;

    t94 = (((x377|x378)==x379)&x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x381 = 5;
	volatile uint8_t x382 = 14U;
	static int32_t x383 = INT32_MAX;
	int16_t x384 = -1;
	int32_t t95 = -11417913;

    t95 = (((x381|x382)==x383)&x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x385 = INT32_MIN;
	uint8_t x386 = 14U;
	int64_t x387 = -1LL;
	int16_t x388 = INT16_MIN;
	volatile int32_t t96 = -3;

    t96 = (((x385|x386)==x387)&x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x389 = 3162956989651111325LL;
	static volatile int16_t x390 = INT16_MIN;
	volatile uint16_t x392 = 8U;
	volatile int32_t t97 = -42;

    t97 = (((x389|x390)==x391)&x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x393 = 2553392885724421LLU;
	static int32_t x395 = INT32_MIN;
	int32_t x396 = INT32_MAX;
	volatile int32_t t98 = 291042258;

    t98 = (((x393|x394)==x395)&x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int64_t x398 = -3642562468LL;
	static int16_t x399 = INT16_MIN;
	int64_t x400 = INT64_MAX;
	volatile int64_t t99 = 529946LL;

    t99 = (((x397|x398)==x399)&x400);

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x401 = UINT32_MAX;
	int16_t x402 = INT16_MAX;
	int8_t x403 = INT8_MIN;
	int16_t x404 = 27;
	volatile int32_t t100 = -38982;

    t100 = (((x401|x402)==x403)&x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static int8_t x405 = -1;
	int16_t x407 = INT16_MAX;
	volatile uint16_t x408 = UINT16_MAX;
	static int32_t t101 = -821;

    t101 = (((x405|x406)==x407)&x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x409 = INT8_MIN;
	int64_t x410 = INT64_MIN;
	int64_t x411 = INT64_MAX;
	volatile uint8_t x412 = 125U;

    t102 = (((x409|x410)==x411)&x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x413 = INT8_MAX;
	static int32_t x414 = 1156;
	int32_t x415 = INT32_MAX;
	volatile int16_t x416 = 71;

    t103 = (((x413|x414)==x415)&x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x417 = UINT32_MAX;
	int16_t x418 = INT16_MIN;
	int8_t x420 = INT8_MIN;
	int32_t t104 = 859635;

    t104 = (((x417|x418)==x419)&x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int16_t x421 = INT16_MIN;
	volatile int64_t x422 = INT64_MAX;
	int16_t x423 = INT16_MAX;
	uint8_t x424 = 2U;
	volatile int32_t t105 = 57;

    t105 = (((x421|x422)==x423)&x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x425 = -1LL;
	int8_t x426 = -1;
	int16_t x427 = INT16_MAX;
	uint8_t x428 = UINT8_MAX;

    t106 = (((x425|x426)==x427)&x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x429 = UINT8_MAX;
	int32_t x430 = -1;
	int32_t x432 = INT32_MIN;
	int32_t t107 = 1;

    t107 = (((x429|x430)==x431)&x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int32_t x434 = INT32_MAX;
	int32_t x435 = 1154706;
	static uint8_t x436 = 2U;
	volatile int32_t t108 = -580047;

    t108 = (((x433|x434)==x435)&x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int32_t x437 = -1;
	static uint8_t x438 = UINT8_MAX;
	uint64_t x439 = 4299531669834LLU;
	static uint32_t x440 = 120U;
	uint32_t t109 = 27299U;

    t109 = (((x437|x438)==x439)&x440);

    if (t109 != 0U) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x441 = INT8_MAX;
	static uint32_t x442 = 5830067U;
	int16_t x444 = -1;

    t110 = (((x441|x442)==x443)&x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile int32_t x445 = 689868;
	int32_t x446 = INT32_MIN;
	int16_t x447 = -1;
	uint32_t x448 = 1185U;
	volatile uint32_t t111 = 1188207108U;

    t111 = (((x445|x446)==x447)&x448);

    if (t111 != 0U) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x449 = UINT64_MAX;
	uint64_t x450 = 1711460115LLU;
	int16_t x451 = INT16_MIN;
	int32_t x452 = INT32_MIN;
	int32_t t112 = -4;

    t112 = (((x449|x450)==x451)&x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x454 = UINT8_MAX;
	uint8_t x455 = 3U;
	volatile uint64_t x456 = 22447867945517LLU;
	uint64_t t113 = 444LLU;

    t113 = (((x453|x454)==x455)&x456);

    if (t113 != 0LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x457 = 4726696U;
	volatile uint32_t x459 = 590U;
	volatile int8_t x460 = INT8_MAX;
	volatile int32_t t114 = -91;

    t114 = (((x457|x458)==x459)&x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x461 = -1;
	uint64_t x462 = 122855837LLU;
	int8_t x463 = -40;
	static volatile int64_t t115 = -273611049578LL;

    t115 = (((x461|x462)==x463)&x464);

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x465 = INT32_MAX;
	uint16_t x466 = 120U;
	uint8_t x467 = 2U;
	uint64_t x468 = UINT64_MAX;
	volatile uint64_t t116 = 21188519033439LLU;

    t116 = (((x465|x466)==x467)&x468);

    if (t116 != 0LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x469 = 0;
	int16_t x470 = -1;

    t117 = (((x469|x470)==x471)&x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x473 = INT64_MIN;
	static int32_t x474 = INT32_MIN;
	int64_t x475 = INT64_MAX;
	int32_t x476 = -1082;
	volatile int32_t t118 = -7154;

    t118 = (((x473|x474)==x475)&x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x478 = 29U;
	uint8_t x480 = 25U;

    t119 = (((x477|x478)==x479)&x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x481 = UINT32_MAX;
	static int32_t x482 = -1;
	uint64_t x483 = 1331LLU;
	volatile int32_t t120 = -1985529;

    t120 = (((x481|x482)==x483)&x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int64_t x487 = -1LL;
	uint32_t x488 = UINT32_MAX;

    t121 = (((x485|x486)==x487)&x488);

    if (t121 != 0U) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x489 = -1LL;
	uint16_t x490 = 21056U;
	static int32_t x491 = -72147452;
	int8_t x492 = INT8_MIN;
	int32_t t122 = 894;

    t122 = (((x489|x490)==x491)&x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x494 = UINT64_MAX;
	static uint8_t x495 = 18U;
	static volatile int8_t x496 = INT8_MIN;

    t123 = (((x493|x494)==x495)&x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x497 = INT8_MIN;
	int8_t x498 = INT8_MAX;
	static int16_t x499 = 1858;
	static volatile int32_t t124 = 87574;

    t124 = (((x497|x498)==x499)&x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile uint16_t x501 = 25976U;
	volatile int8_t x502 = INT8_MIN;
	static int64_t x503 = 109983999953LL;
	int32_t x504 = 15493325;
	static volatile int32_t t125 = -903993631;

    t125 = (((x501|x502)==x503)&x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x505 = INT64_MIN;
	static volatile int32_t t126 = -439689;

    t126 = (((x505|x506)==x507)&x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x509 = INT16_MIN;
	static int32_t x510 = INT32_MIN;
	int16_t x511 = INT16_MIN;
	int32_t x512 = 7;

    t127 = (((x509|x510)==x511)&x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x513 = UINT32_MAX;
	uint64_t x514 = UINT64_MAX;
	static int8_t x515 = 2;
	uint64_t x516 = 160LLU;
	volatile uint64_t t128 = 15213248351LLU;

    t128 = (((x513|x514)==x515)&x516);

    if (t128 != 0LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x517 = INT16_MIN;
	volatile int64_t x518 = 6434127843677612LL;
	int16_t x519 = -1;
	int64_t x520 = -1LL;
	volatile int64_t t129 = 48078156920489840LL;

    t129 = (((x517|x518)==x519)&x520);

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static int16_t x522 = 7585;
	uint64_t x524 = UINT64_MAX;
	static uint64_t t130 = 25LLU;

    t130 = (((x521|x522)==x523)&x524);

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x525 = -1;
	volatile int32_t x528 = INT32_MIN;
	int32_t t131 = -507643520;

    t131 = (((x525|x526)==x527)&x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x530 = INT8_MIN;
	uint64_t x531 = 3158LLU;
	static int32_t x532 = INT32_MAX;
	int32_t t132 = 0;

    t132 = (((x529|x530)==x531)&x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x533 = -31;
	volatile int16_t x534 = -2;
	static volatile uint32_t x536 = UINT32_MAX;
	static volatile uint32_t t133 = 48382637U;

    t133 = (((x533|x534)==x535)&x536);

    if (t133 != 0U) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x537 = INT32_MIN;
	int64_t x538 = INT64_MAX;
	uint8_t x539 = 2U;
	int8_t x540 = -25;
	static int32_t t134 = -360543194;

    t134 = (((x537|x538)==x539)&x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x541 = 5;
	static int64_t x542 = 1LL;
	volatile int16_t x543 = -18;
	volatile int64_t x544 = -1LL;

    t135 = (((x541|x542)==x543)&x544);

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x545 = -7;
	volatile uint64_t x546 = UINT64_MAX;
	int16_t x547 = INT16_MAX;

    t136 = (((x545|x546)==x547)&x548);

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	static int64_t x549 = INT64_MIN;
	int16_t x550 = INT16_MIN;
	volatile int32_t t137 = 449476;

    t137 = (((x549|x550)==x551)&x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint64_t x553 = 1095761076155LLU;
	static int64_t x554 = INT64_MAX;
	static int16_t x555 = -4;
	int8_t x556 = INT8_MIN;

    t138 = (((x553|x554)==x555)&x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x557 = -196;
	int64_t x558 = -467LL;
	int32_t x559 = INT32_MIN;

    t139 = (((x557|x558)==x559)&x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x561 = 0;
	int32_t x562 = -15;
	uint8_t x563 = 107U;
	int32_t x564 = 436;
	volatile int32_t t140 = 3938;

    t140 = (((x561|x562)==x563)&x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x565 = 64;
	uint64_t x566 = UINT64_MAX;
	static int32_t x568 = INT32_MIN;
	static volatile int32_t t141 = -51;

    t141 = (((x565|x566)==x567)&x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x569 = 10U;
	volatile uint32_t x570 = 32314871U;
	volatile int32_t x571 = -1;

    t142 = (((x569|x570)==x571)&x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x574 = -1;
	int64_t x575 = INT64_MIN;
	int64_t x576 = INT64_MIN;
	volatile int64_t t143 = 365LL;

    t143 = (((x573|x574)==x575)&x576);

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x577 = INT32_MIN;
	uint16_t x578 = UINT16_MAX;
	static int32_t t144 = -4;

    t144 = (((x577|x578)==x579)&x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile int8_t x581 = -1;
	uint64_t x582 = 1874282LLU;
	uint64_t x583 = UINT64_MAX;
	volatile int32_t t145 = 39773935;

    t145 = (((x581|x582)==x583)&x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = -1;
	uint32_t x588 = 228917U;

    t146 = (((x585|x586)==x587)&x588);

    if (t146 != 1U) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x589 = -3;
	static int32_t x590 = -1;
	uint32_t x591 = 3487373U;
	int64_t x592 = INT64_MIN;
	int64_t t147 = -4876LL;

    t147 = (((x589|x590)==x591)&x592);

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x593 = INT16_MIN;
	int64_t x594 = INT64_MIN;
	int8_t x595 = -12;
	int8_t x596 = INT8_MAX;

    t148 = (((x593|x594)==x595)&x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int64_t x597 = -1LL;
	int64_t x598 = INT64_MIN;
	int64_t x599 = INT64_MIN;

    t149 = (((x597|x598)==x599)&x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x601 = UINT8_MAX;
	int64_t x603 = INT64_MIN;
	int32_t x604 = INT32_MIN;
	volatile int32_t t150 = 273601;

    t150 = (((x601|x602)==x603)&x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int8_t x605 = -1;
	int8_t x607 = -1;
	volatile uint64_t x608 = 2577LLU;

    t151 = (((x605|x606)==x607)&x608);

    if (t151 != 1LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x610 = -1551;
	static volatile uint64_t x612 = UINT64_MAX;
	volatile uint64_t t152 = 4886LLU;

    t152 = (((x609|x610)==x611)&x612);

    if (t152 != 0LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x613 = INT8_MIN;
	uint32_t x614 = UINT32_MAX;
	uint16_t x615 = 15U;
	static volatile int32_t t153 = -190496;

    t153 = (((x613|x614)==x615)&x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint16_t x617 = 1U;
	int64_t x618 = INT64_MAX;
	int32_t x619 = INT32_MIN;
	volatile int8_t x620 = INT8_MIN;
	int32_t t154 = -432;

    t154 = (((x617|x618)==x619)&x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x621 = 6U;
	int8_t x622 = -1;
	static uint32_t x623 = 1217167U;
	static int32_t x624 = INT32_MIN;
	volatile int32_t t155 = -984;

    t155 = (((x621|x622)==x623)&x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint32_t x626 = 753011U;
	int32_t x627 = INT32_MAX;
	volatile int32_t t156 = -37;

    t156 = (((x625|x626)==x627)&x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint32_t x631 = 0U;
	uint8_t x632 = 1U;
	int32_t t157 = -6;

    t157 = (((x629|x630)==x631)&x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x633 = 13633LL;
	volatile int8_t x634 = INT8_MAX;
	int64_t x635 = INT64_MIN;
	int32_t x636 = INT32_MAX;
	volatile int32_t t158 = 202;

    t158 = (((x633|x634)==x635)&x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile int64_t x638 = -108729246844LL;
	int64_t x639 = INT64_MIN;
	int16_t x640 = 1;
	volatile int32_t t159 = -898326;

    t159 = (((x637|x638)==x639)&x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static int8_t x642 = INT8_MAX;
	static int64_t x643 = INT64_MIN;
	volatile uint16_t x644 = UINT16_MAX;
	volatile int32_t t160 = -61593529;

    t160 = (((x641|x642)==x643)&x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x645 = -1;
	int32_t x646 = -62847;
	int8_t x648 = -1;

    t161 = (((x645|x646)==x647)&x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint8_t x649 = UINT8_MAX;
	static uint64_t x651 = UINT64_MAX;
	static volatile int32_t t162 = 10040411;

    t162 = (((x649|x650)==x651)&x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static int32_t x653 = -1;
	int8_t x655 = -1;
	static int64_t t163 = -360478LL;

    t163 = (((x653|x654)==x655)&x656);

    if (t163 != 1LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x657 = 7U;
	static int16_t x658 = INT16_MIN;
	static uint8_t x659 = 6U;
	int64_t x660 = -14198LL;
	static int64_t t164 = 216939119199755LL;

    t164 = (((x657|x658)==x659)&x660);

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x661 = UINT16_MAX;
	int32_t x663 = -1;

    t165 = (((x661|x662)==x663)&x664);

    if (t165 != 0LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x665 = 49948U;
	int16_t x666 = INT16_MAX;
	int16_t x667 = INT16_MAX;
	volatile int32_t x668 = INT32_MAX;
	static volatile int32_t t166 = -17;

    t166 = (((x665|x666)==x667)&x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x669 = INT16_MIN;
	uint32_t x670 = 30519U;
	int8_t x671 = -55;
	uint16_t x672 = 13U;

    t167 = (((x669|x670)==x671)&x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x673 = 1U;
	static volatile uint32_t x674 = 169U;
	int32_t x675 = INT32_MAX;
	uint32_t x676 = 51989239U;

    t168 = (((x673|x674)==x675)&x676);

    if (t168 != 0U) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x677 = INT8_MAX;
	int8_t x678 = INT8_MIN;
	static int8_t x679 = -1;
	int16_t x680 = 796;

    t169 = (((x677|x678)==x679)&x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x682 = 0U;
	volatile int32_t x684 = INT32_MAX;
	volatile int32_t t170 = 5992;

    t170 = (((x681|x682)==x683)&x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x685 = 18U;
	volatile int8_t x686 = INT8_MIN;
	int32_t t171 = -1003022446;

    t171 = (((x685|x686)==x687)&x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x689 = INT64_MAX;
	volatile uint64_t x690 = 1709731728106606314LLU;
	static uint8_t x691 = UINT8_MAX;
	volatile int8_t x692 = INT8_MIN;
	volatile int32_t t172 = 3928483;

    t172 = (((x689|x690)==x691)&x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x694 = INT64_MIN;
	volatile int8_t x695 = INT8_MIN;
	uint32_t x696 = 526982405U;

    t173 = (((x693|x694)==x695)&x696);

    if (t173 != 0U) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x697 = 1326U;
	int8_t x698 = INT8_MAX;
	int8_t x699 = -3;
	int8_t x700 = INT8_MIN;
	volatile int32_t t174 = 7910;

    t174 = (((x697|x698)==x699)&x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile uint32_t x701 = UINT32_MAX;
	uint32_t x702 = 15166786U;
	int32_t x704 = -12906493;
	int32_t t175 = 80463825;

    t175 = (((x701|x702)==x703)&x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int64_t x706 = -1LL;
	static int64_t x708 = INT64_MIN;
	volatile int64_t t176 = 287413618813276LL;

    t176 = (((x705|x706)==x707)&x708);

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x710 = -1LL;
	static uint32_t x712 = UINT32_MAX;
	volatile uint32_t t177 = 1835U;

    t177 = (((x709|x710)==x711)&x712);

    if (t177 != 1U) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x713 = INT32_MAX;
	volatile int32_t x715 = INT32_MIN;
	int16_t x716 = INT16_MIN;
	volatile int32_t t178 = 535314263;

    t178 = (((x713|x714)==x715)&x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x717 = 1U;
	volatile uint8_t x718 = UINT8_MAX;
	int16_t x720 = -1;

    t179 = (((x717|x718)==x719)&x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x721 = 1062728921U;
	volatile uint8_t x722 = UINT8_MAX;
	volatile uint32_t x723 = 171475285U;
	static int32_t x724 = INT32_MIN;
	volatile int32_t t180 = -7814;

    t180 = (((x721|x722)==x723)&x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x725 = 40U;
	volatile int64_t x726 = INT64_MAX;
	int16_t x727 = 1;
	uint8_t x728 = 3U;
	int32_t t181 = 140;

    t181 = (((x725|x726)==x727)&x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int16_t x729 = INT16_MIN;
	uint8_t x730 = UINT8_MAX;
	uint16_t x732 = 2741U;
	int32_t t182 = -59;

    t182 = (((x729|x730)==x731)&x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x733 = 239275327;
	int64_t x734 = INT64_MIN;
	volatile int64_t x735 = INT64_MAX;
	int64_t x736 = INT64_MAX;
	static volatile int64_t t183 = 441275LL;

    t183 = (((x733|x734)==x735)&x736);

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x737 = -1;
	int8_t x738 = 1;
	uint16_t x739 = 25816U;
	static int64_t x740 = -13771708LL;
	static volatile int64_t t184 = -9484791578419304LL;

    t184 = (((x737|x738)==x739)&x740);

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x741 = 87;
	uint16_t x743 = 5U;
	volatile int32_t t185 = -29100184;

    t185 = (((x741|x742)==x743)&x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x745 = 1468U;
	volatile int32_t x746 = -21791660;
	int32_t x747 = INT32_MIN;
	int32_t t186 = -32;

    t186 = (((x745|x746)==x747)&x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x749 = INT8_MIN;
	volatile uint16_t x751 = 81U;
	int32_t x752 = INT32_MIN;
	int32_t t187 = 11;

    t187 = (((x749|x750)==x751)&x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x753 = 10142343146LLU;
	static int32_t x754 = INT32_MIN;
	volatile int32_t t188 = 230986;

    t188 = (((x753|x754)==x755)&x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x758 = 3888U;
	int16_t x759 = INT16_MIN;
	static uint32_t x760 = 7620U;
	uint32_t t189 = 5U;

    t189 = (((x757|x758)==x759)&x760);

    if (t189 != 0U) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x761 = 16133U;
	int64_t x762 = INT64_MAX;
	int16_t x764 = 0;

    t190 = (((x761|x762)==x763)&x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint16_t x766 = 5237U;
	uint32_t x767 = UINT32_MAX;
	volatile int16_t x768 = INT16_MIN;
	int32_t t191 = -17617880;

    t191 = (((x765|x766)==x767)&x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x769 = -1;
	int16_t x770 = -4779;
	uint8_t x772 = UINT8_MAX;
	volatile int32_t t192 = -471878;

    t192 = (((x769|x770)==x771)&x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x773 = 27U;
	int8_t x774 = INT8_MAX;
	static volatile int64_t x775 = INT64_MIN;
	int32_t x776 = INT32_MIN;
	volatile int32_t t193 = 442109132;

    t193 = (((x773|x774)==x775)&x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x778 = INT16_MIN;
	int64_t x779 = -1LL;
	uint32_t t194 = 420825335U;

    t194 = (((x777|x778)==x779)&x780);

    if (t194 != 0U) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x781 = -14313;
	int32_t x782 = INT32_MAX;
	int16_t x783 = INT16_MIN;
	static int16_t x784 = INT16_MAX;

    t195 = (((x781|x782)==x783)&x784);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x786 = INT16_MAX;
	volatile int8_t x788 = 59;
	int32_t t196 = 15888608;

    t196 = (((x785|x786)==x787)&x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x789 = 21;
	static int64_t x790 = INT64_MAX;
	volatile int32_t t197 = 3612;

    t197 = (((x789|x790)==x791)&x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x794 = 20U;
	uint32_t x795 = UINT32_MAX;
	static volatile int32_t t198 = -24993553;

    t198 = (((x793|x794)==x795)&x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint32_t x797 = 50789U;
	uint32_t x798 = 58026754U;
	volatile int16_t x799 = INT16_MIN;
	static int32_t x800 = INT32_MAX;
	volatile int32_t t199 = -734983;

    t199 = (((x797|x798)==x799)&x800);

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

