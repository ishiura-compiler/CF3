
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

int8_t x2 = INT8_MAX;
volatile int32_t x4 = INT32_MIN;
int32_t t0 = INT32_MIN;
int64_t x9 = INT64_MAX;
volatile int64_t x12 = INT64_MIN;
static int32_t x14 = -1;
static uint64_t t8 = 0LLU;
int16_t x37 = -151;
int64_t x39 = INT64_MAX;
static uint16_t x43 = 695U;
int64_t x44 = 9703942532LL;
static volatile int8_t x46 = INT8_MIN;
volatile int16_t x47 = 1;
int32_t x48 = INT32_MIN;
volatile int32_t t11 = 1;
int32_t x51 = -9908;
int32_t t13 = -851;
volatile int64_t x63 = -2144965451802LL;
volatile int64_t t15 = 55539436002910144LL;
int32_t t17 = -14993;
uint8_t x75 = 9U;
int8_t x77 = 0;
uint64_t x79 = UINT64_MAX;
int64_t x87 = -1LL;
volatile uint64_t t21 = UINT64_MAX;
int16_t x98 = -1;
uint32_t x101 = UINT32_MAX;
int8_t x106 = INT8_MAX;
static volatile uint64_t x113 = 11573116099LLU;
int8_t x118 = INT8_MIN;
static uint16_t x127 = 30U;
int16_t x134 = -23;
uint64_t x136 = 12107163LLU;
volatile uint64_t t33 = 4080842078671071217LLU;
int16_t x137 = -1;
int32_t x138 = -40984;
int64_t x140 = INT64_MAX;
volatile int64_t x144 = 2077LL;
uint8_t x147 = 78U;
static int32_t t36 = 138729;
int8_t x150 = 0;
uint32_t x154 = UINT32_MAX;
int8_t x155 = INT8_MIN;
uint64_t x161 = 35LLU;
int16_t x163 = INT16_MAX;
int8_t x165 = -41;
int8_t x168 = -19;
static int8_t x169 = INT8_MIN;
static int32_t x172 = -1;
int16_t x174 = 245;
volatile int64_t x180 = -57010273505LL;
volatile int64_t t45 = 205LL;
int16_t x188 = -11;
int64_t t46 = -671381169LL;
int64_t x190 = INT64_MIN;
int32_t x201 = 16;
int16_t x202 = INT16_MAX;
int32_t t50 = -1;
volatile uint8_t x207 = 7U;
volatile int32_t t51 = 0;
int32_t x211 = -1;
static uint8_t x216 = 6U;
int16_t x219 = -1;
static volatile uint64_t x232 = UINT64_MAX;
static int64_t t59 = 102LL;
int32_t x241 = INT32_MIN;
int64_t x242 = 380733782LL;
static uint8_t x252 = UINT8_MAX;
volatile uint32_t x253 = 1071U;
static uint8_t x262 = 6U;
int32_t x265 = INT32_MIN;
static volatile int64_t x267 = -1LL;
int16_t x268 = -1;
int16_t x270 = INT16_MIN;
static int32_t x273 = 318;
int32_t t68 = -1;
uint8_t x278 = UINT8_MAX;
uint32_t x284 = 53571469U;
uint16_t x287 = 253U;
int8_t x293 = INT8_MIN;
uint32_t x294 = UINT32_MAX;
static int32_t x295 = -1;
uint8_t x303 = 4U;
volatile int64_t x305 = 16239LL;
static volatile int64_t t77 = -7043579LL;
volatile int16_t x313 = -1;
volatile int32_t x317 = INT32_MAX;
volatile uint32_t x320 = 225184U;
volatile uint32_t x322 = 961U;
static uint8_t x323 = 16U;
uint8_t x331 = UINT8_MAX;
int32_t t83 = -2;
int32_t x337 = INT32_MIN;
int16_t x340 = -1;
volatile int32_t t84 = -255180;
int16_t x341 = -1;
static volatile int32_t t85 = 1;
int8_t x351 = -27;
static volatile int64_t x352 = INT64_MAX;
volatile int8_t x355 = INT8_MAX;
int64_t x358 = INT64_MAX;
int16_t x370 = INT16_MAX;
int16_t x378 = -1;
uint64_t x383 = 2450LLU;
static int32_t x384 = 8203;
int8_t x386 = INT8_MAX;
uint32_t x388 = 198006952U;
static int32_t x394 = INT32_MIN;
volatile int16_t x395 = 442;
static volatile int64_t t98 = INT64_MIN;
int64_t x405 = 42553858874196184LL;
static int64_t x412 = 149356518456954LL;
static uint16_t x416 = 461U;
static int64_t x418 = 10593863068LL;
int64_t x422 = -1LL;
int64_t x425 = 48037302LL;
volatile int32_t t107 = -1336;
uint64_t t108 = 31426496LLU;
uint32_t x437 = 170256827U;
static uint8_t x446 = 119U;
int8_t x447 = INT8_MIN;
uint32_t x451 = 56770U;
static int32_t t116 = 2671;
int32_t x470 = -108733;
int64_t x472 = INT64_MIN;
int32_t x475 = -1;
int32_t x484 = INT32_MIN;
int64_t t120 = 35160LL;
uint16_t x486 = UINT16_MAX;
static uint16_t x487 = 171U;
int64_t x488 = INT64_MIN;
static uint8_t x493 = 117U;
int32_t t123 = -700528101;
static volatile uint64_t t126 = 70277907755817289LLU;
uint64_t x511 = UINT64_MAX;
static int32_t x516 = INT32_MAX;
int32_t x520 = INT32_MAX;
volatile uint64_t x526 = 1136223186858094585LLU;
static uint32_t x532 = 63990783U;
int8_t x534 = -1;
static int16_t x536 = INT16_MIN;
int32_t x537 = -1;
uint64_t x538 = 22047514720843079LLU;
static volatile int8_t x543 = -1;
uint8_t x552 = UINT8_MAX;
static volatile int32_t t140 = 12137;
static volatile int64_t x573 = INT64_MAX;
uint64_t x575 = 765831933LLU;
int32_t x583 = -1;
uint64_t x586 = 442399730LLU;
static int8_t x597 = 56;
int16_t x600 = -32;
int8_t x604 = INT8_MIN;
uint64_t x609 = 11LLU;
uint8_t x612 = UINT8_MAX;
volatile uint32_t x614 = 5U;
uint32_t x624 = 26U;
uint64_t x626 = UINT64_MAX;
int64_t t156 = INT64_MIN;
volatile uint64_t t157 = 12013713LLU;
volatile int16_t x633 = INT16_MIN;
volatile uint64_t x634 = 8LLU;
uint16_t x642 = 2443U;
static volatile int32_t t161 = -2;
static uint64_t x649 = UINT64_MAX;
static int8_t x654 = INT8_MIN;
int16_t x660 = INT16_MIN;
uint64_t t165 = 13352LLU;
uint8_t x669 = 2U;
int32_t x676 = INT32_MIN;
int64_t x681 = INT64_MIN;
static volatile int8_t x683 = -1;
int8_t x686 = -1;
volatile int32_t t171 = 6001763;
volatile int32_t t172 = -841;
int64_t x694 = -365015504109LL;
int16_t x695 = -1;
uint16_t x704 = 2803U;
uint32_t x706 = UINT32_MAX;
int32_t x716 = INT32_MIN;
int64_t x719 = 1LL;
int64_t x727 = -1LL;
uint64_t x728 = UINT64_MAX;
static int8_t x729 = INT8_MIN;
volatile int32_t x732 = INT32_MIN;
int16_t x741 = INT16_MIN;
uint16_t x742 = UINT16_MAX;
int64_t x747 = INT64_MAX;
int8_t x752 = INT8_MAX;
int32_t t187 = 3107;
volatile int32_t t188 = 8322397;
volatile int8_t x759 = -1;
int64_t x760 = INT64_MIN;
volatile int8_t x763 = 1;
uint64_t t191 = 351652889LLU;
int64_t x770 = INT64_MAX;
volatile uint64_t x775 = 125377250LLU;
int16_t x780 = -1;
int64_t x783 = 1840LL;
volatile int64_t t195 = -58881288383501LL;
int16_t x792 = -7;
uint32_t x797 = 13U;
static uint64_t x800 = 4072LLU;


void f0(void) {
    	int16_t x1 = -1;
	int32_t x3 = INT32_MIN;

    t0 = (((x1>x2)&x3)^x4);

    if (t0 != INT32_MIN) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x5 = 3846168;
	int8_t x6 = -38;
	volatile uint8_t x7 = UINT8_MAX;
	static volatile uint8_t x8 = UINT8_MAX;
	int32_t t1 = -724552;

    t1 = (((x5>x6)&x7)^x8);

    if (t1 != 254) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint16_t x10 = UINT16_MAX;
	int32_t x11 = -1;
	static int64_t t2 = -9813LL;

    t2 = (((x9>x10)&x11)^x12);

    if (t2 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = INT64_MIN;
	volatile uint32_t x15 = 5U;
	int8_t x16 = -1;
	volatile uint32_t t3 = UINT32_MAX;

    t3 = (((x13>x14)&x15)^x16);

    if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = -22;
	int64_t x18 = -1LL;
	uint8_t x19 = UINT8_MAX;
	uint64_t x20 = 8040858663596100530LLU;
	uint64_t t4 = 65344765570LLU;

    t4 = (((x17>x18)&x19)^x20);

    if (t4 != 8040858663596100530LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x21 = INT64_MIN;
	volatile int64_t x22 = INT64_MIN;
	int16_t x23 = -200;
	uint64_t x24 = UINT64_MAX;
	static volatile uint64_t t5 = UINT64_MAX;

    t5 = (((x21>x22)&x23)^x24);

    if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint8_t x25 = 0U;
	volatile uint32_t x26 = 162U;
	uint64_t x27 = UINT64_MAX;
	int8_t x28 = INT8_MAX;
	volatile uint64_t t6 = 88LLU;

    t6 = (((x25>x26)&x27)^x28);

    if (t6 != 127LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = -1;
	int8_t x30 = -1;
	int8_t x31 = -2;
	uint64_t x32 = 136536492031LLU;
	volatile uint64_t t7 = 38LLU;

    t7 = (((x29>x30)&x31)^x32);

    if (t7 != 136536492031LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x33 = INT8_MAX;
	uint32_t x34 = UINT32_MAX;
	static volatile uint64_t x35 = 280540827LLU;
	int16_t x36 = INT16_MAX;

    t8 = (((x33>x34)&x35)^x36);

    if (t8 != 32767LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x38 = 1U;
	static int8_t x40 = -1;
	int64_t t9 = -5970LL;

    t9 = (((x37>x38)&x39)^x40);

    if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = INT32_MIN;
	static int32_t x42 = 503;
	int64_t t10 = -4418751134248394168LL;

    t10 = (((x41>x42)&x43)^x44);

    if (t10 != 9703942532LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint16_t x45 = 28U;

    t11 = (((x45>x46)&x47)^x48);

    if (t11 != -2147483647) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x49 = INT64_MIN;
	int16_t x50 = INT16_MAX;
	static int64_t x52 = -8284146524835919LL;
	int64_t t12 = 122212346LL;

    t12 = (((x49>x50)&x51)^x52);

    if (t12 != -8284146524835919LL) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x53 = INT32_MIN;
	uint32_t x54 = UINT32_MAX;
	static volatile int32_t x55 = -1;
	volatile int8_t x56 = INT8_MIN;

    t13 = (((x53>x54)&x55)^x56);

    if (t13 != -128) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int8_t x57 = INT8_MAX;
	uint32_t x58 = 30U;
	uint64_t x59 = UINT64_MAX;
	volatile int8_t x60 = 27;
	volatile uint64_t t14 = 1447076068116LLU;

    t14 = (((x57>x58)&x59)^x60);

    if (t14 != 26LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x61 = 11897U;
	uint64_t x62 = UINT64_MAX;
	int16_t x64 = INT16_MIN;

    t15 = (((x61>x62)&x63)^x64);

    if (t15 != -32768LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x65 = 241371987U;
	int8_t x66 = 1;
	uint64_t x67 = 657737014LLU;
	volatile uint8_t x68 = UINT8_MAX;
	uint64_t t16 = 1052836045741440835LLU;

    t16 = (((x65>x66)&x67)^x68);

    if (t16 != 255LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int16_t x69 = INT16_MIN;
	int64_t x70 = INT64_MAX;
	int32_t x71 = INT32_MIN;
	int16_t x72 = INT16_MIN;

    t17 = (((x69>x70)&x71)^x72);

    if (t17 != -32768) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = INT16_MIN;
	volatile int16_t x74 = 27;
	uint64_t x76 = UINT64_MAX;
	volatile uint64_t t18 = UINT64_MAX;

    t18 = (((x73>x74)&x75)^x76);

    if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x78 = -1LL;
	uint8_t x80 = 23U;
	static uint64_t t19 = 1821994725LLU;

    t19 = (((x77>x78)&x79)^x80);

    if (t19 != 22LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = INT16_MIN;
	volatile int32_t x82 = -1;
	volatile uint8_t x83 = UINT8_MAX;
	uint64_t x84 = 41LLU;
	volatile uint64_t t20 = 2306038164731LLU;

    t20 = (((x81>x82)&x83)^x84);

    if (t20 != 41LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x85 = 89327LLU;
	static int16_t x86 = -1527;
	uint64_t x88 = UINT64_MAX;

    t21 = (((x85>x86)&x87)^x88);

    if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x89 = -104837324;
	static volatile int64_t x90 = -1LL;
	int8_t x91 = INT8_MAX;
	int32_t x92 = 107848;
	static int32_t t22 = 8790677;

    t22 = (((x89>x90)&x91)^x92);

    if (t22 != 107848) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint8_t x93 = 2U;
	int8_t x94 = -28;
	int16_t x95 = INT16_MAX;
	static uint32_t x96 = 2406U;
	volatile uint32_t t23 = 158U;

    t23 = (((x93>x94)&x95)^x96);

    if (t23 != 2407U) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x97 = INT8_MIN;
	volatile int8_t x99 = -1;
	int64_t x100 = INT64_MIN;
	int64_t t24 = INT64_MIN;

    t24 = (((x97>x98)&x99)^x100);

    if (t24 != INT64_MIN) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x102 = INT32_MIN;
	static uint16_t x103 = 19U;
	uint8_t x104 = 106U;
	int32_t t25 = -1971384;

    t25 = (((x101>x102)&x103)^x104);

    if (t25 != 107) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = 15;
	uint32_t x107 = 253U;
	static int8_t x108 = INT8_MIN;
	uint32_t t26 = 1U;

    t26 = (((x105>x106)&x107)^x108);

    if (t26 != 4294967168U) { NG(); } else { ; }
	
}

void f27(void) {
    	static int64_t x109 = -1LL;
	volatile int16_t x110 = INT16_MIN;
	int16_t x111 = -1;
	static int64_t x112 = INT64_MIN;
	volatile int64_t t27 = -177866757174335LL;

    t27 = (((x109>x110)&x111)^x112);

    if (t27 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x114 = -1;
	static int32_t x115 = INT32_MIN;
	volatile uint64_t x116 = 2806353858LLU;
	static volatile uint64_t t28 = 1489117623LLU;

    t28 = (((x113>x114)&x115)^x116);

    if (t28 != 2806353858LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static int64_t x117 = INT64_MAX;
	uint8_t x119 = 3U;
	int32_t x120 = INT32_MIN;
	static volatile int32_t t29 = 1;

    t29 = (((x117>x118)&x119)^x120);

    if (t29 != -2147483647) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint8_t x121 = UINT8_MAX;
	int64_t x122 = INT64_MIN;
	static uint32_t x123 = 1482467U;
	int32_t x124 = INT32_MIN;
	static volatile uint32_t t30 = 3830U;

    t30 = (((x121>x122)&x123)^x124);

    if (t30 != 2147483649U) { NG(); } else { ; }
	
}

void f31(void) {
    	static int32_t x125 = -26569;
	volatile int64_t x126 = INT64_MIN;
	uint16_t x128 = UINT16_MAX;
	volatile int32_t t31 = -79;

    t31 = (((x125>x126)&x127)^x128);

    if (t31 != 65535) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x129 = UINT16_MAX;
	volatile int64_t x130 = -1LL;
	volatile int16_t x131 = 31;
	uint8_t x132 = 2U;
	int32_t t32 = 752153;

    t32 = (((x129>x130)&x131)^x132);

    if (t32 != 3) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x133 = INT8_MAX;
	uint8_t x135 = 2U;

    t33 = (((x133>x134)&x135)^x136);

    if (t33 != 12107163LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile int64_t x139 = INT64_MIN;
	int64_t t34 = INT64_MAX;

    t34 = (((x137>x138)&x139)^x140);

    if (t34 != INT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x141 = INT32_MIN;
	uint32_t x142 = 521294U;
	int64_t x143 = INT64_MIN;
	volatile int64_t t35 = 72248LL;

    t35 = (((x141>x142)&x143)^x144);

    if (t35 != 2077LL) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint64_t x145 = UINT64_MAX;
	int16_t x146 = 14800;
	int32_t x148 = -335;

    t36 = (((x145>x146)&x147)^x148);

    if (t36 != -335) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x149 = 75819;
	volatile int64_t x151 = INT64_MIN;
	uint64_t x152 = UINT64_MAX;
	uint64_t t37 = UINT64_MAX;

    t37 = (((x149>x150)&x151)^x152);

    if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x153 = INT8_MIN;
	volatile int8_t x156 = INT8_MIN;
	int32_t t38 = 2179567;

    t38 = (((x153>x154)&x155)^x156);

    if (t38 != -128) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x157 = 12714982754LL;
	int32_t x158 = INT32_MIN;
	static int16_t x159 = -13;
	volatile uint64_t x160 = 434718310676929531LLU;
	uint64_t t39 = 17204038504012LLU;

    t39 = (((x157>x158)&x159)^x160);

    if (t39 != 434718310676929530LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int8_t x162 = -1;
	int64_t x164 = -1LL;
	int64_t t40 = 7852002513875LL;

    t40 = (((x161>x162)&x163)^x164);

    if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x166 = -60;
	volatile int8_t x167 = INT8_MIN;
	int32_t t41 = -102139845;

    t41 = (((x165>x166)&x167)^x168);

    if (t41 != -19) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x170 = 107U;
	int64_t x171 = INT64_MAX;
	volatile int64_t t42 = 5995LL;

    t42 = (((x169>x170)&x171)^x172);

    if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x173 = INT32_MAX;
	int8_t x175 = -22;
	volatile uint32_t x176 = UINT32_MAX;
	uint32_t t43 = UINT32_MAX;

    t43 = (((x173>x174)&x175)^x176);

    if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x177 = INT8_MIN;
	int16_t x178 = 6570;
	int8_t x179 = INT8_MIN;
	int64_t t44 = 672940182LL;

    t44 = (((x177>x178)&x179)^x180);

    if (t44 != -57010273505LL) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x181 = INT16_MAX;
	uint32_t x182 = 818U;
	int64_t x183 = -1LL;
	int16_t x184 = INT16_MIN;

    t45 = (((x181>x182)&x183)^x184);

    if (t45 != -32767LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x185 = 2803U;
	int64_t x186 = INT64_MAX;
	int64_t x187 = INT64_MAX;

    t46 = (((x185>x186)&x187)^x188);

    if (t46 != -11LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x189 = INT32_MIN;
	int32_t x191 = -1453280;
	int32_t x192 = -1;
	int32_t t47 = -1;

    t47 = (((x189>x190)&x191)^x192);

    if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
    	static int16_t x193 = INT16_MIN;
	uint8_t x194 = 116U;
	uint8_t x195 = 1U;
	int32_t x196 = 3323072;
	static volatile int32_t t48 = -51997;

    t48 = (((x193>x194)&x195)^x196);

    if (t48 != 3323072) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x197 = -834831;
	uint32_t x198 = 1050571U;
	uint16_t x199 = 65U;
	int64_t x200 = 5695LL;
	int64_t t49 = 1363054386250273992LL;

    t49 = (((x197>x198)&x199)^x200);

    if (t49 != 5694LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x203 = 1U;
	static int16_t x204 = 2;

    t50 = (((x201>x202)&x203)^x204);

    if (t50 != 2) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x205 = -106771130;
	int64_t x206 = INT64_MAX;
	volatile int8_t x208 = -34;

    t51 = (((x205>x206)&x207)^x208);

    if (t51 != -34) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x209 = INT8_MIN;
	int64_t x210 = -13624297LL;
	uint64_t x212 = 1LLU;
	volatile uint64_t t52 = 3822440949800887315LLU;

    t52 = (((x209>x210)&x211)^x212);

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x213 = INT16_MIN;
	int64_t x214 = -3464255514LL;
	int8_t x215 = INT8_MIN;
	static volatile int32_t t53 = -1;

    t53 = (((x213>x214)&x215)^x216);

    if (t53 != 6) { NG(); } else { ; }
	
}

void f54(void) {
    	static int16_t x217 = 40;
	uint16_t x218 = 336U;
	volatile int64_t x220 = INT64_MIN;
	int64_t t54 = INT64_MIN;

    t54 = (((x217>x218)&x219)^x220);

    if (t54 != INT64_MIN) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x221 = 24U;
	static volatile int8_t x222 = -1;
	int8_t x223 = INT8_MIN;
	int32_t x224 = -90;
	volatile int32_t t55 = -170219603;

    t55 = (((x221>x222)&x223)^x224);

    if (t55 != -90) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x225 = -7LL;
	volatile int32_t x226 = -6667;
	uint64_t x227 = 456722LLU;
	int32_t x228 = -1;
	volatile uint64_t t56 = UINT64_MAX;

    t56 = (((x225>x226)&x227)^x228);

    if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x229 = 53121U;
	int32_t x230 = -4;
	uint16_t x231 = UINT16_MAX;
	uint64_t t57 = UINT64_MAX;

    t57 = (((x229>x230)&x231)^x232);

    if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = -1LL;
	static int64_t x234 = -330803LL;
	volatile int32_t x235 = -450867;
	volatile uint32_t x236 = UINT32_MAX;
	uint32_t t58 = 669U;

    t58 = (((x233>x234)&x235)^x236);

    if (t58 != 4294967294U) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint32_t x237 = 120U;
	int8_t x238 = -61;
	int64_t x239 = 80267984848LL;
	int16_t x240 = INT16_MIN;

    t59 = (((x237>x238)&x239)^x240);

    if (t59 != -32768LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x243 = 7;
	static int64_t x244 = -1LL;
	volatile int64_t t60 = 2646717116487589LL;

    t60 = (((x241>x242)&x243)^x244);

    if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x245 = -15594963275142LL;
	static int64_t x246 = INT64_MAX;
	int32_t x247 = -1;
	int32_t x248 = INT32_MIN;
	volatile int32_t t61 = INT32_MIN;

    t61 = (((x245>x246)&x247)^x248);

    if (t61 != INT32_MIN) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x249 = 4002;
	volatile int8_t x250 = 44;
	int64_t x251 = 2797762298350702603LL;
	volatile int64_t t62 = -162504982830782LL;

    t62 = (((x249>x250)&x251)^x252);

    if (t62 != 254LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x254 = INT8_MIN;
	uint64_t x255 = 528253590924399LLU;
	volatile uint8_t x256 = UINT8_MAX;
	volatile uint64_t t63 = 45385924LLU;

    t63 = (((x253>x254)&x255)^x256);

    if (t63 != 255LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x257 = -10705;
	static int8_t x258 = INT8_MIN;
	volatile int8_t x259 = INT8_MAX;
	int32_t x260 = -143173005;
	int32_t t64 = 66129;

    t64 = (((x257>x258)&x259)^x260);

    if (t64 != -143173005) { NG(); } else { ; }
	
}

void f65(void) {
    	static int64_t x261 = INT64_MIN;
	int32_t x263 = -1;
	static uint16_t x264 = 1745U;
	int32_t t65 = 92348331;

    t65 = (((x261>x262)&x263)^x264);

    if (t65 != 1745) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint64_t x266 = 599LLU;
	int64_t t66 = 63058452954LL;

    t66 = (((x265>x266)&x267)^x268);

    if (t66 != -2LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x269 = UINT32_MAX;
	static uint8_t x271 = 124U;
	int16_t x272 = 1;
	volatile int32_t t67 = -2738;

    t67 = (((x269>x270)&x271)^x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x274 = 138U;
	volatile int8_t x275 = INT8_MAX;
	uint16_t x276 = 496U;

    t68 = (((x273>x274)&x275)^x276);

    if (t68 != 497) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x277 = 47;
	volatile int64_t x279 = INT64_MIN;
	int8_t x280 = INT8_MAX;
	static int64_t t69 = 3961739885172428LL;

    t69 = (((x277>x278)&x279)^x280);

    if (t69 != 127LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x281 = 546U;
	int64_t x282 = -1LL;
	static volatile int8_t x283 = INT8_MAX;
	uint32_t t70 = 601410U;

    t70 = (((x281>x282)&x283)^x284);

    if (t70 != 53571468U) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x285 = 8;
	int16_t x286 = -1;
	uint8_t x288 = 26U;
	volatile int32_t t71 = 0;

    t71 = (((x285>x286)&x287)^x288);

    if (t71 != 27) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x289 = 15;
	int64_t x290 = -1LL;
	int32_t x291 = INT32_MIN;
	volatile int8_t x292 = -1;
	int32_t t72 = 27;

    t72 = (((x289>x290)&x291)^x292);

    if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x296 = INT8_MIN;
	int32_t t73 = 15395;

    t73 = (((x293>x294)&x295)^x296);

    if (t73 != -128) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x297 = INT8_MIN;
	int8_t x298 = INT8_MAX;
	volatile uint8_t x299 = 0U;
	volatile uint16_t x300 = 69U;
	static volatile int32_t t74 = 87;

    t74 = (((x297>x298)&x299)^x300);

    if (t74 != 69) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x301 = -9624606LL;
	volatile uint8_t x302 = 5U;
	int16_t x304 = INT16_MIN;
	int32_t t75 = 0;

    t75 = (((x301>x302)&x303)^x304);

    if (t75 != -32768) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x306 = INT32_MAX;
	uint8_t x307 = 0U;
	volatile int32_t x308 = 1;
	volatile int32_t t76 = -350;

    t76 = (((x305>x306)&x307)^x308);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x309 = 182U;
	volatile int8_t x310 = -11;
	static int64_t x311 = INT64_MIN;
	int32_t x312 = INT32_MAX;

    t77 = (((x309>x310)&x311)^x312);

    if (t77 != 2147483647LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x314 = INT32_MIN;
	int16_t x315 = INT16_MIN;
	int32_t x316 = INT32_MIN;
	int32_t t78 = INT32_MIN;

    t78 = (((x313>x314)&x315)^x316);

    if (t78 != INT32_MIN) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x318 = 399093772;
	int64_t x319 = INT64_MIN;
	volatile int64_t t79 = 272744LL;

    t79 = (((x317>x318)&x319)^x320);

    if (t79 != 225184LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint16_t x321 = UINT16_MAX;
	int8_t x324 = INT8_MIN;
	static volatile int32_t t80 = 1447;

    t80 = (((x321>x322)&x323)^x324);

    if (t80 != -128) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x325 = 1U;
	uint64_t x326 = 92269350614LLU;
	uint32_t x327 = 1914980U;
	int32_t x328 = INT32_MIN;
	volatile uint32_t t81 = 229656U;

    t81 = (((x325>x326)&x327)^x328);

    if (t81 != 2147483648U) { NG(); } else { ; }
	
}

void f82(void) {
    	static int32_t x329 = INT32_MAX;
	int32_t x330 = -1;
	int16_t x332 = 14;
	static int32_t t82 = -1016;

    t82 = (((x329>x330)&x331)^x332);

    if (t82 != 15) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int32_t x333 = INT32_MAX;
	int8_t x334 = INT8_MIN;
	static uint8_t x335 = 1U;
	int16_t x336 = 1;

    t83 = (((x333>x334)&x335)^x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int64_t x338 = INT64_MAX;
	int32_t x339 = INT32_MIN;

    t84 = (((x337>x338)&x339)^x340);

    if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint32_t x342 = 43414281U;
	int16_t x343 = INT16_MAX;
	uint8_t x344 = 1U;

    t85 = (((x341>x342)&x343)^x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int64_t x345 = -1LL;
	int64_t x346 = -711579491224728LL;
	static volatile uint32_t x347 = 2516U;
	int8_t x348 = -1;
	uint32_t t86 = UINT32_MAX;

    t86 = (((x345>x346)&x347)^x348);

    if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x349 = INT16_MIN;
	int8_t x350 = INT8_MIN;
	int64_t t87 = INT64_MAX;

    t87 = (((x349>x350)&x351)^x352);

    if (t87 != INT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x353 = INT64_MIN;
	uint32_t x354 = 15461459U;
	uint64_t x356 = UINT64_MAX;
	volatile uint64_t t88 = UINT64_MAX;

    t88 = (((x353>x354)&x355)^x356);

    if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x357 = INT8_MIN;
	static int16_t x359 = INT16_MIN;
	uint16_t x360 = 108U;
	volatile int32_t t89 = -2795;

    t89 = (((x357>x358)&x359)^x360);

    if (t89 != 108) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile int16_t x361 = INT16_MIN;
	int64_t x362 = INT64_MIN;
	volatile uint8_t x363 = 11U;
	static int16_t x364 = INT16_MAX;
	static volatile int32_t t90 = 5;

    t90 = (((x361>x362)&x363)^x364);

    if (t90 != 32766) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint16_t x365 = 3U;
	int8_t x366 = INT8_MIN;
	static int16_t x367 = -11871;
	int16_t x368 = INT16_MIN;
	int32_t t91 = 110;

    t91 = (((x365>x366)&x367)^x368);

    if (t91 != -32767) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x369 = -15386;
	volatile uint64_t x371 = 2LLU;
	int8_t x372 = -19;
	static volatile uint64_t t92 = 99817028206453591LLU;

    t92 = (((x369>x370)&x371)^x372);

    if (t92 != 18446744073709551597LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint32_t x373 = 1440143235U;
	static uint8_t x374 = UINT8_MAX;
	int64_t x375 = INT64_MIN;
	int8_t x376 = INT8_MIN;
	volatile int64_t t93 = 242591LL;

    t93 = (((x373>x374)&x375)^x376);

    if (t93 != -128LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x377 = -1LL;
	uint8_t x379 = 27U;
	volatile int8_t x380 = -1;
	volatile int32_t t94 = 174696;

    t94 = (((x377>x378)&x379)^x380);

    if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x381 = UINT32_MAX;
	uint16_t x382 = 54U;
	uint64_t t95 = 1316410484487LLU;

    t95 = (((x381>x382)&x383)^x384);

    if (t95 != 8203LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x385 = 70505222U;
	int32_t x387 = INT32_MIN;
	uint32_t t96 = 6876202U;

    t96 = (((x385>x386)&x387)^x388);

    if (t96 != 198006952U) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x389 = -3903189163434760410LL;
	uint8_t x390 = 88U;
	int16_t x391 = INT16_MIN;
	uint32_t x392 = 20U;
	volatile uint32_t t97 = 25848U;

    t97 = (((x389>x390)&x391)^x392);

    if (t97 != 20U) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x393 = -1;
	int64_t x396 = INT64_MIN;

    t98 = (((x393>x394)&x395)^x396);

    if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x397 = 30286U;
	uint16_t x398 = 11005U;
	volatile uint16_t x399 = UINT16_MAX;
	uint32_t x400 = 114215195U;
	uint32_t t99 = 16198U;

    t99 = (((x397>x398)&x399)^x400);

    if (t99 != 114215194U) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = -1;
	int8_t x402 = -1;
	uint8_t x403 = UINT8_MAX;
	uint8_t x404 = 3U;
	int32_t t100 = 1;

    t100 = (((x401>x402)&x403)^x404);

    if (t100 != 3) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint32_t x406 = 31066773U;
	uint64_t x407 = 13455081273257276LLU;
	int32_t x408 = -1;
	volatile uint64_t t101 = UINT64_MAX;

    t101 = (((x405>x406)&x407)^x408);

    if (t101 != UINT64_MAX) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x409 = UINT32_MAX;
	int16_t x410 = INT16_MIN;
	int32_t x411 = 1245;
	int64_t t102 = -494505525579LL;

    t102 = (((x409>x410)&x411)^x412);

    if (t102 != 149356518456955LL) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x413 = 190U;
	int64_t x414 = INT64_MAX;
	int64_t x415 = INT64_MIN;
	int64_t t103 = 14543629439581LL;

    t103 = (((x413>x414)&x415)^x416);

    if (t103 != 461LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x417 = 0;
	int64_t x419 = INT64_MIN;
	int64_t x420 = 851183LL;
	volatile int64_t t104 = -52780194558135391LL;

    t104 = (((x417>x418)&x419)^x420);

    if (t104 != 851183LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = INT16_MIN;
	int8_t x423 = INT8_MIN;
	static volatile int8_t x424 = INT8_MIN;
	volatile int32_t t105 = -1013355757;

    t105 = (((x421>x422)&x423)^x424);

    if (t105 != -128) { NG(); } else { ; }
	
}

void f106(void) {
    	static int32_t x426 = 8015;
	uint64_t x427 = 35534262547LLU;
	static volatile uint16_t x428 = 399U;
	volatile uint64_t t106 = 29623356995LLU;

    t106 = (((x425>x426)&x427)^x428);

    if (t106 != 398LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x429 = INT16_MIN;
	int16_t x430 = -14942;
	int32_t x431 = -1;
	int16_t x432 = -6144;

    t107 = (((x429>x430)&x431)^x432);

    if (t107 != -6144) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int16_t x433 = INT16_MIN;
	volatile uint8_t x434 = 1U;
	int16_t x435 = -1;
	uint64_t x436 = 1054159098046LLU;

    t108 = (((x433>x434)&x435)^x436);

    if (t108 != 1054159098046LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x438 = UINT8_MAX;
	int32_t x439 = INT32_MAX;
	volatile int64_t x440 = INT64_MIN;
	volatile int64_t t109 = -4LL;

    t109 = (((x437>x438)&x439)^x440);

    if (t109 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x441 = -1;
	int32_t x442 = -1;
	int64_t x443 = INT64_MIN;
	uint64_t x444 = 1041796424168790717LLU;
	volatile uint64_t t110 = 508425587830132466LLU;

    t110 = (((x441>x442)&x443)^x444);

    if (t110 != 1041796424168790717LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x445 = INT16_MAX;
	int8_t x448 = 35;
	int32_t t111 = -1;

    t111 = (((x445>x446)&x447)^x448);

    if (t111 != 35) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint64_t x449 = 247LLU;
	static int8_t x450 = -18;
	volatile uint8_t x452 = 99U;
	volatile uint32_t t112 = 184410792U;

    t112 = (((x449>x450)&x451)^x452);

    if (t112 != 99U) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x453 = 88714462U;
	int8_t x454 = INT8_MIN;
	int8_t x455 = 1;
	uint8_t x456 = UINT8_MAX;
	volatile int32_t t113 = 1047494354;

    t113 = (((x453>x454)&x455)^x456);

    if (t113 != 255) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x457 = 155U;
	int64_t x458 = INT64_MIN;
	uint16_t x459 = 122U;
	static int16_t x460 = -174;
	volatile int32_t t114 = -17815;

    t114 = (((x457>x458)&x459)^x460);

    if (t114 != -174) { NG(); } else { ; }
	
}

void f115(void) {
    	static int16_t x461 = -1;
	static uint8_t x462 = 1U;
	volatile int64_t x463 = INT64_MIN;
	int32_t x464 = 1106;
	int64_t t115 = -62349163LL;

    t115 = (((x461>x462)&x463)^x464);

    if (t115 != 1106LL) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint16_t x465 = UINT16_MAX;
	int16_t x466 = -1;
	uint16_t x467 = 13U;
	int32_t x468 = INT32_MAX;

    t116 = (((x465>x466)&x467)^x468);

    if (t116 != 2147483646) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x469 = -1;
	static uint8_t x471 = UINT8_MAX;
	volatile int64_t t117 = 10596960600758LL;

    t117 = (((x469>x470)&x471)^x472);

    if (t117 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x473 = UINT64_MAX;
	int16_t x474 = INT16_MIN;
	int32_t x476 = -1;
	volatile int32_t t118 = -306;

    t118 = (((x473>x474)&x475)^x476);

    if (t118 != -2) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x477 = -1;
	volatile int16_t x478 = -1;
	volatile int16_t x479 = -1;
	volatile int8_t x480 = 24;
	int32_t t119 = 52242;

    t119 = (((x477>x478)&x479)^x480);

    if (t119 != 24) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint32_t x481 = UINT32_MAX;
	uint32_t x482 = UINT32_MAX;
	int64_t x483 = 126666093575LL;

    t120 = (((x481>x482)&x483)^x484);

    if (t120 != -2147483648LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x485 = 73U;
	static int64_t t121 = INT64_MIN;

    t121 = (((x485>x486)&x487)^x488);

    if (t121 != INT64_MIN) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x489 = 0LLU;
	uint16_t x490 = UINT16_MAX;
	static int16_t x491 = INT16_MAX;
	int8_t x492 = 1;
	volatile int32_t t122 = -15;

    t122 = (((x489>x490)&x491)^x492);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x494 = 15102091801414546LLU;
	volatile int8_t x495 = -21;
	uint16_t x496 = 1227U;

    t123 = (((x493>x494)&x495)^x496);

    if (t123 != 1227) { NG(); } else { ; }
	
}

void f124(void) {
    	static int16_t x497 = 6549;
	int8_t x498 = INT8_MIN;
	static uint64_t x499 = 58002192035LLU;
	uint16_t x500 = 47U;
	static volatile uint64_t t124 = 136266999353485LLU;

    t124 = (((x497>x498)&x499)^x500);

    if (t124 != 46LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x501 = -1;
	static int32_t x502 = -713494818;
	uint64_t x503 = UINT64_MAX;
	static int64_t x504 = 194LL;
	volatile uint64_t t125 = 10416LLU;

    t125 = (((x501>x502)&x503)^x504);

    if (t125 != 195LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x505 = 11573339U;
	int8_t x506 = INT8_MIN;
	uint64_t x507 = UINT64_MAX;
	int64_t x508 = 452036462LL;

    t126 = (((x505>x506)&x507)^x508);

    if (t126 != 452036462LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x509 = UINT64_MAX;
	volatile uint8_t x510 = UINT8_MAX;
	int8_t x512 = INT8_MIN;
	volatile uint64_t t127 = 1022187LLU;

    t127 = (((x509>x510)&x511)^x512);

    if (t127 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x513 = 801951066514419LL;
	int64_t x514 = -398810345503LL;
	int64_t x515 = -2984459217LL;
	int64_t t128 = 62031671287LL;

    t128 = (((x513>x514)&x515)^x516);

    if (t128 != 2147483646LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x517 = INT8_MIN;
	static uint32_t x518 = 494532577U;
	volatile int32_t x519 = INT32_MIN;
	int32_t t129 = INT32_MAX;

    t129 = (((x517>x518)&x519)^x520);

    if (t129 != INT32_MAX) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x521 = 37;
	volatile uint64_t x522 = UINT64_MAX;
	int64_t x523 = -1LL;
	uint8_t x524 = 7U;
	int64_t t130 = 3LL;

    t130 = (((x521>x522)&x523)^x524);

    if (t130 != 7LL) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int8_t x525 = 3;
	int32_t x527 = -1;
	uint64_t x528 = 8311402114199119220LLU;
	static volatile uint64_t t131 = 3689LLU;

    t131 = (((x525>x526)&x527)^x528);

    if (t131 != 8311402114199119220LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x529 = UINT16_MAX;
	int32_t x530 = 5871093;
	uint32_t x531 = 3U;
	volatile uint32_t t132 = 17U;

    t132 = (((x529>x530)&x531)^x532);

    if (t132 != 63990783U) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint8_t x533 = UINT8_MAX;
	uint32_t x535 = 15835U;
	volatile uint32_t t133 = 10U;

    t133 = (((x533>x534)&x535)^x536);

    if (t133 != 4294934529U) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x539 = 1U;
	int16_t x540 = -1;
	volatile int32_t t134 = 11330;

    t134 = (((x537>x538)&x539)^x540);

    if (t134 != -2) { NG(); } else { ; }
	
}

void f135(void) {
    	static int64_t x541 = INT64_MAX;
	volatile uint32_t x542 = 31106125U;
	int64_t x544 = 437132418LL;
	int64_t t135 = -40858256495LL;

    t135 = (((x541>x542)&x543)^x544);

    if (t135 != 437132419LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static int8_t x545 = INT8_MIN;
	volatile int8_t x546 = INT8_MIN;
	static int64_t x547 = INT64_MIN;
	int16_t x548 = 21;
	static int64_t t136 = -76134223547468786LL;

    t136 = (((x545>x546)&x547)^x548);

    if (t136 != 21LL) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint16_t x549 = UINT16_MAX;
	int8_t x550 = INT8_MIN;
	uint32_t x551 = UINT32_MAX;
	volatile uint32_t t137 = 7188560U;

    t137 = (((x549>x550)&x551)^x552);

    if (t137 != 254U) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x553 = 111333;
	int32_t x554 = INT32_MIN;
	uint64_t x555 = UINT64_MAX;
	int16_t x556 = INT16_MIN;
	uint64_t t138 = 58680681266LLU;

    t138 = (((x553>x554)&x555)^x556);

    if (t138 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x557 = 55603758166LLU;
	static uint64_t x558 = 52151544896LLU;
	int8_t x559 = INT8_MAX;
	volatile uint16_t x560 = UINT16_MAX;
	static int32_t t139 = 7;

    t139 = (((x557>x558)&x559)^x560);

    if (t139 != 65534) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x561 = INT16_MIN;
	int64_t x562 = -1LL;
	volatile int8_t x563 = 2;
	int8_t x564 = INT8_MAX;

    t140 = (((x561>x562)&x563)^x564);

    if (t140 != 127) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x565 = INT16_MIN;
	uint8_t x566 = UINT8_MAX;
	int32_t x567 = INT32_MIN;
	int32_t x568 = INT32_MIN;
	int32_t t141 = INT32_MIN;

    t141 = (((x565>x566)&x567)^x568);

    if (t141 != INT32_MIN) { NG(); } else { ; }
	
}

void f142(void) {
    	static int16_t x569 = INT16_MAX;
	uint16_t x570 = 19U;
	volatile int16_t x571 = INT16_MIN;
	volatile int8_t x572 = 45;
	static volatile int32_t t142 = -2;

    t142 = (((x569>x570)&x571)^x572);

    if (t142 != 45) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x574 = -1;
	int16_t x576 = 15;
	static volatile uint64_t t143 = 3144979LLU;

    t143 = (((x573>x574)&x575)^x576);

    if (t143 != 14LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x577 = -1LL;
	static uint8_t x578 = 52U;
	int32_t x579 = 2;
	volatile int8_t x580 = INT8_MIN;
	int32_t t144 = 152;

    t144 = (((x577>x578)&x579)^x580);

    if (t144 != -128) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x581 = 0U;
	int64_t x582 = -17639699484LL;
	uint16_t x584 = 1976U;
	volatile int32_t t145 = -126730;

    t145 = (((x581>x582)&x583)^x584);

    if (t145 != 1977) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x585 = UINT16_MAX;
	int64_t x587 = INT64_MIN;
	uint32_t x588 = 1502091U;
	int64_t t146 = 44615860181161221LL;

    t146 = (((x585>x586)&x587)^x588);

    if (t146 != 1502091LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x589 = UINT32_MAX;
	int8_t x590 = INT8_MIN;
	int8_t x591 = INT8_MIN;
	static int16_t x592 = INT16_MIN;
	volatile int32_t t147 = 6;

    t147 = (((x589>x590)&x591)^x592);

    if (t147 != -32768) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x593 = INT8_MIN;
	static uint32_t x594 = UINT32_MAX;
	int32_t x595 = INT32_MAX;
	static int16_t x596 = -1;
	int32_t t148 = -37158448;

    t148 = (((x593>x594)&x595)^x596);

    if (t148 != -1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint8_t x598 = 75U;
	int16_t x599 = -1;
	volatile int32_t t149 = -1;

    t149 = (((x597>x598)&x599)^x600);

    if (t149 != -32) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x601 = 1922;
	int64_t x602 = INT64_MAX;
	volatile uint16_t x603 = 3U;
	volatile int32_t t150 = -49623040;

    t150 = (((x601>x602)&x603)^x604);

    if (t150 != -128) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x605 = 6;
	static uint32_t x606 = 228914726U;
	uint8_t x607 = UINT8_MAX;
	uint16_t x608 = 28U;
	volatile int32_t t151 = 2121935;

    t151 = (((x605>x606)&x607)^x608);

    if (t151 != 28) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x610 = UINT32_MAX;
	uint32_t x611 = 3965739U;
	uint32_t t152 = 47U;

    t152 = (((x609>x610)&x611)^x612);

    if (t152 != 255U) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x613 = 3329375696682134LLU;
	int16_t x615 = INT16_MAX;
	static int8_t x616 = INT8_MAX;
	static int32_t t153 = -1507998;

    t153 = (((x613>x614)&x615)^x616);

    if (t153 != 126) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x617 = INT8_MIN;
	uint32_t x618 = 56U;
	int8_t x619 = INT8_MAX;
	static int64_t x620 = 1385650399279313LL;
	static volatile int64_t t154 = 988073LL;

    t154 = (((x617>x618)&x619)^x620);

    if (t154 != 1385650399279312LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x621 = 23U;
	volatile int16_t x622 = 1;
	uint8_t x623 = 88U;
	volatile uint32_t t155 = 603382U;

    t155 = (((x621>x622)&x623)^x624);

    if (t155 != 26U) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x625 = -1;
	uint8_t x627 = 3U;
	int64_t x628 = INT64_MIN;

    t156 = (((x625>x626)&x627)^x628);

    if (t156 != INT64_MIN) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x629 = INT32_MIN;
	static int32_t x630 = INT32_MAX;
	volatile uint64_t x631 = 57LLU;
	int32_t x632 = INT32_MAX;

    t157 = (((x629>x630)&x631)^x632);

    if (t157 != 2147483647LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x635 = 2296700;
	int32_t x636 = 7;
	int32_t t158 = 758367;

    t158 = (((x633>x634)&x635)^x636);

    if (t158 != 7) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x637 = 10U;
	volatile int32_t x638 = 84966;
	volatile int32_t x639 = 76401287;
	int64_t x640 = -803297809684LL;
	static int64_t t159 = -152160609835LL;

    t159 = (((x637>x638)&x639)^x640);

    if (t159 != -803297809684LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x641 = INT64_MIN;
	int64_t x643 = INT64_MIN;
	static uint16_t x644 = UINT16_MAX;
	int64_t t160 = -10LL;

    t160 = (((x641>x642)&x643)^x644);

    if (t160 != 65535LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x645 = -674615;
	uint32_t x646 = 255663260U;
	volatile int16_t x647 = 486;
	volatile int16_t x648 = INT16_MIN;

    t161 = (((x645>x646)&x647)^x648);

    if (t161 != -32768) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x650 = UINT32_MAX;
	int16_t x651 = INT16_MIN;
	static int16_t x652 = -96;
	int32_t t162 = 391;

    t162 = (((x649>x650)&x651)^x652);

    if (t162 != -96) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x653 = -1;
	static volatile int16_t x655 = INT16_MIN;
	int32_t x656 = INT32_MIN;
	int32_t t163 = INT32_MIN;

    t163 = (((x653>x654)&x655)^x656);

    if (t163 != INT32_MIN) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x657 = INT8_MAX;
	static int8_t x658 = INT8_MIN;
	int32_t x659 = 39;
	volatile int32_t t164 = -340407386;

    t164 = (((x657>x658)&x659)^x660);

    if (t164 != -32767) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = 43554LL;
	static uint64_t x662 = 120769LLU;
	uint64_t x663 = 1LLU;
	uint8_t x664 = 85U;

    t165 = (((x661>x662)&x663)^x664);

    if (t165 != 85LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x665 = INT8_MAX;
	int8_t x666 = INT8_MAX;
	volatile uint64_t x667 = 14315884LLU;
	int32_t x668 = -183;
	volatile uint64_t t166 = 602040647LLU;

    t166 = (((x665>x666)&x667)^x668);

    if (t166 != 18446744073709551433LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int8_t x670 = 2;
	static uint64_t x671 = 311LLU;
	volatile int8_t x672 = INT8_MAX;
	volatile uint64_t t167 = 3527123LLU;

    t167 = (((x669>x670)&x671)^x672);

    if (t167 != 127LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x673 = -1;
	uint32_t x674 = 20508486U;
	int8_t x675 = INT8_MIN;
	int32_t t168 = INT32_MIN;

    t168 = (((x673>x674)&x675)^x676);

    if (t168 != INT32_MIN) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int8_t x677 = -3;
	volatile uint16_t x678 = 8469U;
	int32_t x679 = -1;
	volatile int32_t x680 = INT32_MIN;
	int32_t t169 = INT32_MIN;

    t169 = (((x677>x678)&x679)^x680);

    if (t169 != INT32_MIN) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x682 = 236775947491LLU;
	int32_t x684 = 30181;
	volatile int32_t t170 = 123;

    t170 = (((x681>x682)&x683)^x684);

    if (t170 != 30180) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x685 = -1;
	int32_t x687 = INT32_MIN;
	uint8_t x688 = 11U;

    t171 = (((x685>x686)&x687)^x688);

    if (t171 != 11) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x689 = -1LL;
	volatile uint16_t x690 = 382U;
	static volatile int8_t x691 = -1;
	volatile uint16_t x692 = UINT16_MAX;

    t172 = (((x689>x690)&x691)^x692);

    if (t172 != 65535) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x693 = -1;
	static int64_t x696 = -58551339LL;
	static volatile int64_t t173 = -205242198424542LL;

    t173 = (((x693>x694)&x695)^x696);

    if (t173 != -58551340LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x697 = INT16_MAX;
	volatile int64_t x698 = -368043661967054LL;
	int64_t x699 = -1161LL;
	int16_t x700 = INT16_MIN;
	volatile int64_t t174 = -69062705149292346LL;

    t174 = (((x697>x698)&x699)^x700);

    if (t174 != -32767LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x701 = INT64_MIN;
	int32_t x702 = INT32_MIN;
	int64_t x703 = -1LL;
	int64_t t175 = 1383470879468312245LL;

    t175 = (((x701>x702)&x703)^x704);

    if (t175 != 2803LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x705 = INT16_MAX;
	uint8_t x707 = 1U;
	static int64_t x708 = INT64_MAX;
	volatile int64_t t176 = INT64_MAX;

    t176 = (((x705>x706)&x707)^x708);

    if (t176 != INT64_MAX) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x709 = INT16_MIN;
	int16_t x710 = INT16_MIN;
	static int16_t x711 = 209;
	int32_t x712 = INT32_MIN;
	int32_t t177 = INT32_MIN;

    t177 = (((x709>x710)&x711)^x712);

    if (t177 != INT32_MIN) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x713 = INT8_MAX;
	static uint16_t x714 = 2U;
	volatile int16_t x715 = INT16_MAX;
	int32_t t178 = -216;

    t178 = (((x713>x714)&x715)^x716);

    if (t178 != -2147483647) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x717 = 7LL;
	int16_t x718 = -1;
	uint8_t x720 = 0U;
	int64_t t179 = 416LL;

    t179 = (((x717>x718)&x719)^x720);

    if (t179 != 1LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x721 = INT16_MAX;
	int32_t x722 = INT32_MIN;
	int8_t x723 = -27;
	volatile int32_t x724 = INT32_MIN;
	static volatile int32_t t180 = -41;

    t180 = (((x721>x722)&x723)^x724);

    if (t180 != -2147483647) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x725 = INT8_MIN;
	int16_t x726 = -1;
	uint64_t t181 = UINT64_MAX;

    t181 = (((x725>x726)&x727)^x728);

    if (t181 != UINT64_MAX) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x730 = 35U;
	uint8_t x731 = 4U;
	int32_t t182 = INT32_MIN;

    t182 = (((x729>x730)&x731)^x732);

    if (t182 != INT32_MIN) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int32_t x733 = -23792;
	uint16_t x734 = UINT16_MAX;
	int64_t x735 = -1LL;
	uint64_t x736 = 5LLU;
	volatile uint64_t t183 = 8821424383757379417LLU;

    t183 = (((x733>x734)&x735)^x736);

    if (t183 != 5LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x737 = INT64_MAX;
	static volatile int8_t x738 = -1;
	uint16_t x739 = 3234U;
	volatile int64_t x740 = -1LL;
	volatile int64_t t184 = -27815591LL;

    t184 = (((x737>x738)&x739)^x740);

    if (t184 != -1LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x743 = 4155032U;
	static int8_t x744 = INT8_MAX;
	uint32_t t185 = 61019498U;

    t185 = (((x741>x742)&x743)^x744);

    if (t185 != 127U) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x745 = 1653984213LLU;
	int32_t x746 = -1;
	volatile int64_t x748 = INT64_MIN;
	int64_t t186 = INT64_MIN;

    t186 = (((x745>x746)&x747)^x748);

    if (t186 != INT64_MIN) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint16_t x749 = 179U;
	int32_t x750 = INT32_MIN;
	int32_t x751 = INT32_MIN;

    t187 = (((x749>x750)&x751)^x752);

    if (t187 != 127) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x753 = 34068705943LLU;
	int32_t x754 = INT32_MIN;
	int32_t x755 = INT32_MIN;
	static int8_t x756 = INT8_MIN;

    t188 = (((x753>x754)&x755)^x756);

    if (t188 != -128) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x757 = -1;
	int32_t x758 = 1;
	volatile int64_t t189 = INT64_MIN;

    t189 = (((x757>x758)&x759)^x760);

    if (t189 != INT64_MIN) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x761 = -1;
	int8_t x762 = 13;
	int8_t x764 = -3;
	volatile int32_t t190 = -5470963;

    t190 = (((x761>x762)&x763)^x764);

    if (t190 != -3) { NG(); } else { ; }
	
}

void f191(void) {
    	static int64_t x765 = INT64_MIN;
	int16_t x766 = INT16_MIN;
	static int64_t x767 = -31340671398121LL;
	uint64_t x768 = 2073497651LLU;

    t191 = (((x765>x766)&x767)^x768);

    if (t191 != 2073497651LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	static int64_t x769 = -418550LL;
	uint16_t x771 = 56U;
	int8_t x772 = 0;
	int32_t t192 = -1152911;

    t192 = (((x769>x770)&x771)^x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x773 = -286168;
	volatile int32_t x774 = INT32_MAX;
	static uint8_t x776 = 3U;
	volatile uint64_t t193 = 572704092361181582LLU;

    t193 = (((x773>x774)&x775)^x776);

    if (t193 != 3LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x777 = INT8_MIN;
	int16_t x778 = 8867;
	uint8_t x779 = UINT8_MAX;
	static volatile int32_t t194 = 19420995;

    t194 = (((x777>x778)&x779)^x780);

    if (t194 != -1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x781 = 1U;
	uint64_t x782 = 294903LLU;
	int16_t x784 = INT16_MIN;

    t195 = (((x781>x782)&x783)^x784);

    if (t195 != -32768LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x785 = INT16_MIN;
	static int16_t x786 = -1;
	volatile uint16_t x787 = 6U;
	int64_t x788 = 55689LL;
	int64_t t196 = -962LL;

    t196 = (((x785>x786)&x787)^x788);

    if (t196 != 55689LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x789 = INT8_MIN;
	uint16_t x790 = 7U;
	int8_t x791 = INT8_MIN;
	static volatile int32_t t197 = -1087035;

    t197 = (((x789>x790)&x791)^x792);

    if (t197 != -7) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x793 = UINT64_MAX;
	int32_t x794 = -3;
	int64_t x795 = INT64_MIN;
	int16_t x796 = INT16_MIN;
	int64_t t198 = 63LL;

    t198 = (((x793>x794)&x795)^x796);

    if (t198 != -32768LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x798 = 1;
	int16_t x799 = -68;
	volatile uint64_t t199 = 0LLU;

    t199 = (((x797>x798)&x799)^x800);

    if (t199 != 4072LLU) { NG(); } else { ; }
	
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

