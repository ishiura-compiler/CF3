
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

volatile int16_t x13 = INT16_MIN;
uint16_t x16 = 127U;
static int16_t x27 = INT16_MIN;
int64_t x42 = -1LL;
static int64_t x43 = INT64_MAX;
int32_t x46 = 6;
uint64_t x48 = 52432073357LLU;
uint16_t x49 = 24117U;
volatile int32_t t11 = -29;
static volatile int64_t x63 = INT64_MIN;
volatile uint64_t t12 = 126212LLU;
uint32_t x67 = UINT32_MAX;
int8_t x68 = INT8_MIN;
uint8_t x71 = 12U;
int32_t x84 = -1;
static volatile int8_t x85 = -1;
uint32_t x89 = 48U;
volatile uint32_t x104 = 688U;
static int32_t x111 = INT32_MAX;
static int64_t x131 = 98077683490072LL;
int32_t x132 = INT32_MIN;
int16_t x141 = 1212;
volatile int64_t t30 = 55233LL;
volatile uint64_t t31 = 764542806094LLU;
uint16_t x153 = UINT16_MAX;
uint8_t x156 = 2U;
volatile int32_t t32 = 45;
static uint64_t x158 = 133520255136870373LLU;
int32_t t33 = 1;
volatile int8_t x162 = 0;
int32_t x163 = INT32_MAX;
int32_t x169 = -1;
int64_t t37 = 334479LL;
static volatile int8_t x179 = INT8_MIN;
uint8_t x181 = 25U;
uint64_t t39 = 2190646255283LLU;
static uint8_t x191 = UINT8_MAX;
static int16_t x192 = -1;
uint32_t x195 = 634421U;
static int8_t x198 = INT8_MIN;
int64_t x199 = INT64_MAX;
uint8_t x205 = UINT8_MAX;
static int64_t x206 = INT64_MIN;
static int8_t x213 = INT8_MIN;
static uint64_t t50 = 603033LLU;
uint32_t x240 = 384U;
volatile uint32_t x243 = 387U;
uint16_t x253 = 310U;
int64_t x256 = -18654822847750LL;
uint8_t x266 = UINT8_MAX;
volatile uint16_t x275 = 0U;
int64_t x277 = INT64_MIN;
volatile uint64_t t60 = 122462918939943151LLU;
static uint8_t x287 = 2U;
static int16_t x293 = INT16_MIN;
int32_t x294 = INT32_MIN;
static volatile int8_t x296 = INT8_MAX;
static int32_t x301 = INT32_MAX;
uint32_t x302 = 14998U;
uint32_t x303 = 515749474U;
int32_t x304 = INT32_MIN;
static int32_t t66 = -1;
int8_t x309 = INT8_MIN;
int8_t x312 = INT8_MIN;
volatile int32_t x314 = INT32_MIN;
int64_t t69 = -61361231574LL;
static int32_t x321 = -89518;
uint8_t x341 = 11U;
static uint16_t x343 = 6842U;
int64_t x346 = INT64_MIN;
volatile int32_t t77 = 40;
int64_t x360 = INT64_MIN;
uint8_t x367 = UINT8_MAX;
int32_t x368 = -4807579;
int32_t x370 = -1;
int32_t x379 = INT32_MAX;
static volatile int16_t x385 = INT16_MAX;
volatile int32_t t86 = -65;
static int16_t x399 = INT16_MIN;
uint32_t x400 = 30430U;
uint64_t x410 = 59LLU;
int8_t x412 = INT8_MAX;
uint16_t x413 = UINT16_MAX;
uint32_t x427 = UINT32_MAX;
volatile int8_t x432 = 12;
int32_t t96 = 457551;
static int8_t x434 = -1;
volatile int64_t t98 = 25626292169299LL;
uint16_t x447 = 9U;
int8_t x448 = INT8_MIN;
static int64_t t99 = 45302098844LL;
static int32_t x469 = -1;
volatile int16_t x470 = INT16_MIN;
static volatile int64_t x475 = -2369842031898285911LL;
uint32_t x483 = UINT32_MAX;
int32_t x484 = INT32_MIN;
int16_t x486 = INT16_MIN;
static int64_t x487 = -47114566355103128LL;
int8_t x490 = -61;
static uint8_t x491 = 0U;
static volatile int64_t x496 = -1LL;
uint16_t x501 = UINT16_MAX;
int16_t x503 = 9682;
int16_t x509 = INT16_MIN;
static volatile uint32_t x512 = UINT32_MAX;
volatile uint32_t t112 = 341U;
uint32_t x520 = UINT32_MAX;
uint32_t t113 = 58743U;
int32_t x527 = INT32_MIN;
uint8_t x529 = 0U;
int32_t x536 = INT32_MIN;
static int64_t x538 = INT64_MAX;
int32_t x548 = -1;
uint8_t x551 = UINT8_MAX;
static int32_t x556 = INT32_MIN;
int32_t t122 = 19;
uint64_t t124 = 896483036LLU;
int16_t x565 = INT16_MAX;
int8_t x566 = INT8_MIN;
static uint64_t x572 = UINT64_MAX;
int16_t x573 = -1;
int16_t x582 = 28;
volatile uint32_t x586 = UINT32_MAX;
volatile int32_t t133 = 40591039;
static int64_t x603 = INT64_MIN;
int64_t x614 = INT64_MIN;
volatile uint32_t x617 = 177563127U;
static uint16_t x621 = 23U;
uint8_t x622 = UINT8_MAX;
uint32_t x630 = UINT32_MAX;
volatile int8_t x644 = INT8_MIN;
int16_t x646 = INT16_MIN;
static int16_t x648 = INT16_MAX;
volatile int32_t t144 = 271486;
int8_t x649 = 5;
int32_t x655 = INT32_MAX;
int16_t x663 = INT16_MIN;
int8_t x675 = 0;
volatile uint64_t t151 = 39665636840164280LLU;
static uint8_t x677 = 71U;
int64_t x679 = INT64_MIN;
static volatile int32_t t152 = 7781;
static int64_t x681 = 6232557913562018LL;
static volatile int32_t x682 = -1;
volatile int16_t x683 = INT16_MIN;
static int64_t x703 = -1LL;
uint32_t x704 = 3468U;
int16_t x712 = INT16_MIN;
int32_t x715 = INT32_MAX;
uint32_t x718 = UINT32_MAX;
volatile int8_t x720 = -1;
static volatile int16_t x722 = -1;
static uint32_t x730 = UINT32_MAX;
uint8_t x738 = 2U;
static int32_t x739 = -1;
volatile int32_t t167 = 1;
int8_t x741 = -1;
int8_t x748 = -1;
uint32_t x754 = UINT32_MAX;
uint64_t x765 = 124LLU;
int8_t x775 = INT8_MIN;
int64_t t174 = 53865992LL;
uint8_t x778 = 41U;
uint16_t x780 = 35U;
volatile int32_t t176 = -117806555;
uint8_t x791 = 18U;
static uint32_t x795 = 74U;
uint64_t x799 = 804530096802795LLU;
uint32_t x804 = 16480175U;
int32_t x806 = -1;
int8_t x808 = INT8_MIN;
int32_t x809 = -1;
volatile int32_t x813 = 49;
int64_t x814 = INT64_MAX;
int32_t x817 = INT32_MAX;
uint64_t x819 = UINT64_MAX;
volatile int64_t x820 = 950256507717063793LL;
static volatile uint32_t x828 = 41U;
int8_t x834 = 6;
int8_t x841 = INT8_MAX;
int32_t t189 = 444226358;
int16_t x848 = INT16_MAX;
uint64_t x850 = UINT64_MAX;
volatile int64_t t191 = 197990108LL;
uint16_t x859 = UINT16_MAX;
int8_t x866 = INT8_MAX;
int64_t x875 = -39568169LL;
int32_t x876 = INT32_MAX;
static int64_t x880 = 1729LL;
static volatile int16_t x881 = INT16_MIN;
static uint64_t t199 = 9958340LLU;


void f0(void) {
    	static int64_t x1 = -1LL;
	int16_t x2 = -1;
	int64_t x3 = -353LL;
	int32_t x4 = INT32_MIN;
	static volatile int64_t t0 = -4197209551322LL;

    t0 = ((x1-(x2>x3))/x4);

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x5 = INT8_MIN;
	static int16_t x6 = INT16_MIN;
	int8_t x7 = INT8_MAX;
	int16_t x8 = INT16_MIN;
	static volatile int32_t t1 = 5432587;

    t1 = ((x5-(x6>x7))/x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x14 = INT64_MAX;
	volatile int64_t x15 = 450188LL;
	int32_t t2 = -76071549;

    t2 = ((x13-(x14>x15))/x16);

    if (t2 != -258) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x17 = 1U;
	volatile int64_t x18 = -1LL;
	uint16_t x19 = 1U;
	volatile uint8_t x20 = 6U;
	volatile int32_t t3 = -16257329;

    t3 = ((x17-(x18>x19))/x20);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x25 = 496;
	volatile int64_t x26 = INT64_MIN;
	int8_t x28 = -1;
	int32_t t4 = -675106;

    t4 = ((x25-(x26>x27))/x28);

    if (t4 != -496) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x29 = -1LL;
	int16_t x30 = INT16_MAX;
	int32_t x31 = INT32_MIN;
	int32_t x32 = -153;
	volatile int64_t t5 = 473LL;

    t5 = ((x29-(x30>x31))/x32);

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x33 = INT32_MAX;
	int16_t x34 = INT16_MIN;
	int32_t x35 = -1;
	int64_t x36 = 367581LL;
	static int64_t t6 = -13470004888195LL;

    t6 = ((x33-(x34>x35))/x36);

    if (t6 != 5842LL) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint16_t x37 = UINT16_MAX;
	static int16_t x38 = -1;
	int16_t x39 = INT16_MAX;
	volatile uint8_t x40 = UINT8_MAX;
	static int32_t t7 = -512785;

    t7 = ((x37-(x38>x39))/x40);

    if (t7 != 257) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x41 = 1418U;
	int64_t x44 = INT64_MIN;
	volatile int64_t t8 = 5564840LL;

    t8 = ((x41-(x42>x43))/x44);

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x45 = INT64_MAX;
	int8_t x47 = INT8_MIN;
	uint64_t t9 = 47420579LLU;

    t9 = ((x45-(x46>x47))/x48);

    if (t9 != 175910877LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x50 = -1;
	volatile int32_t x51 = 1951089;
	int32_t x52 = INT32_MIN;
	volatile int32_t t10 = -278;

    t10 = ((x49-(x50>x51))/x52);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x57 = UINT16_MAX;
	int16_t x58 = 131;
	uint64_t x59 = UINT64_MAX;
	static int16_t x60 = -1;

    t11 = ((x57-(x58>x59))/x60);

    if (t11 != -65535) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x61 = 0U;
	int16_t x62 = INT16_MIN;
	uint64_t x64 = 893LLU;

    t12 = ((x61-(x62>x63))/x64);

    if (t12 != 20657048234837123LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x65 = 8LL;
	uint16_t x66 = 108U;
	int64_t t13 = -4964976LL;

    t13 = ((x65-(x66>x67))/x68);

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x69 = INT16_MAX;
	int16_t x70 = INT16_MIN;
	static uint8_t x72 = 1U;
	int32_t t14 = -1643142;

    t14 = ((x69-(x70>x71))/x72);

    if (t14 != 32767) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x73 = -9648375699LL;
	static int64_t x74 = INT64_MAX;
	uint64_t x75 = 536852961421955893LLU;
	int16_t x76 = 86;
	static volatile int64_t t15 = -919706437895466LL;

    t15 = ((x73-(x74>x75))/x76);

    if (t15 != -112190415LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x77 = INT16_MIN;
	static int16_t x78 = -1;
	int64_t x79 = INT64_MIN;
	int8_t x80 = 46;
	volatile int32_t t16 = -558000693;

    t16 = ((x77-(x78>x79))/x80);

    if (t16 != -712) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile int32_t x81 = 32139094;
	int64_t x82 = INT64_MAX;
	static int32_t x83 = -1;
	int32_t t17 = -4;

    t17 = ((x81-(x82>x83))/x84);

    if (t17 != -32139093) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x86 = INT16_MAX;
	static int8_t x87 = -3;
	static int64_t x88 = 13LL;
	volatile int64_t t18 = -14559539LL;

    t18 = ((x85-(x86>x87))/x88);

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x90 = 8LLU;
	int64_t x91 = INT64_MAX;
	volatile int64_t x92 = INT64_MIN;
	static int64_t t19 = 1062LL;

    t19 = ((x89-(x90>x91))/x92);

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint8_t x93 = 71U;
	int8_t x94 = 1;
	static int64_t x95 = 246244LL;
	int16_t x96 = INT16_MIN;
	volatile int32_t t20 = 140468147;

    t20 = ((x93-(x94>x95))/x96);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x97 = 27;
	int8_t x98 = INT8_MIN;
	int64_t x99 = -1LL;
	uint8_t x100 = 1U;
	volatile int32_t t21 = 444172890;

    t21 = ((x97-(x98>x99))/x100);

    if (t21 != 27) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int32_t x101 = INT32_MIN;
	static int8_t x102 = -1;
	uint16_t x103 = UINT16_MAX;
	volatile uint32_t t22 = 11U;

    t22 = ((x101-(x102>x103))/x104);

    if (t22 != 3121342U) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x105 = INT16_MAX;
	uint8_t x106 = 113U;
	int16_t x107 = 1293;
	int64_t x108 = INT64_MIN;
	static volatile int64_t t23 = -195080818513LL;

    t23 = ((x105-(x106>x107))/x108);

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x109 = 0;
	int16_t x110 = 62;
	int8_t x112 = INT8_MAX;
	static volatile int32_t t24 = 132694159;

    t24 = ((x109-(x110>x111))/x112);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x113 = 9695U;
	uint64_t x114 = UINT64_MAX;
	static int8_t x115 = INT8_MAX;
	static volatile int8_t x116 = INT8_MIN;
	static int32_t t25 = -3018;

    t25 = ((x113-(x114>x115))/x116);

    if (t25 != -75) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x117 = INT8_MIN;
	volatile int32_t x118 = -216296878;
	static int32_t x119 = INT32_MIN;
	int8_t x120 = -1;
	volatile int32_t t26 = -122;

    t26 = ((x117-(x118>x119))/x120);

    if (t26 != 129) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x125 = INT16_MIN;
	static int8_t x126 = -1;
	int32_t x127 = 28292;
	uint32_t x128 = 5798U;
	volatile uint32_t t27 = 12U;

    t27 = ((x125-(x126>x127))/x128);

    if (t27 != 740761U) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x129 = 244U;
	int16_t x130 = INT16_MIN;
	static volatile int32_t t28 = 23586262;

    t28 = ((x129-(x130>x131))/x132);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x142 = -6;
	static int8_t x143 = -1;
	int16_t x144 = -1;
	volatile int32_t t29 = -2;

    t29 = ((x141-(x142>x143))/x144);

    if (t29 != -1212) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x145 = 1460664U;
	static int32_t x146 = INT32_MAX;
	uint8_t x147 = UINT8_MAX;
	int64_t x148 = -1LL;

    t30 = ((x145-(x146>x147))/x148);

    if (t30 != -1460663LL) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int64_t x149 = -1LL;
	volatile int16_t x150 = -1;
	int16_t x151 = -1;
	uint64_t x152 = 764157183723382LLU;

    t31 = ((x149-(x150>x151))/x152);

    if (t31 != 24139LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x154 = -1;
	int8_t x155 = -1;

    t32 = ((x153-(x154>x155))/x156);

    if (t32 != 32767) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x157 = INT8_MIN;
	int8_t x159 = INT8_MAX;
	static int16_t x160 = -1;

    t33 = ((x157-(x158>x159))/x160);

    if (t33 != 129) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x161 = 72U;
	volatile int8_t x164 = 1;
	int32_t t34 = -5;

    t34 = ((x161-(x162>x163))/x164);

    if (t34 != 72) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint16_t x165 = 120U;
	uint8_t x166 = UINT8_MAX;
	int16_t x167 = -1;
	int16_t x168 = 68;
	volatile int32_t t35 = 0;

    t35 = ((x165-(x166>x167))/x168);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int32_t x170 = -1;
	uint32_t x171 = 3353U;
	int32_t x172 = INT32_MIN;
	static volatile int32_t t36 = 1072423778;

    t36 = ((x169-(x170>x171))/x172);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile uint8_t x173 = UINT8_MAX;
	uint32_t x174 = 3U;
	uint64_t x175 = UINT64_MAX;
	int64_t x176 = 6746981377LL;

    t37 = ((x173-(x174>x175))/x176);

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x177 = 453U;
	int64_t x178 = INT64_MAX;
	uint8_t x180 = 9U;
	uint32_t t38 = 2U;

    t38 = ((x177-(x178>x179))/x180);

    if (t38 != 50U) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x182 = INT8_MAX;
	int16_t x183 = INT16_MIN;
	static uint64_t x184 = 914LLU;

    t39 = ((x181-(x182>x183))/x184);

    if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x185 = INT16_MIN;
	int8_t x186 = INT8_MAX;
	uint16_t x187 = 464U;
	static int64_t x188 = INT64_MIN;
	int64_t t40 = 878LL;

    t40 = ((x185-(x186>x187))/x188);

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint32_t x189 = UINT32_MAX;
	static int8_t x190 = INT8_MIN;
	volatile uint32_t t41 = 2U;

    t41 = ((x189-(x190>x191))/x192);

    if (t41 != 1U) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x193 = INT8_MIN;
	int64_t x194 = INT64_MIN;
	int64_t x196 = 14868LL;
	int64_t t42 = -14295LL;

    t42 = ((x193-(x194>x195))/x196);

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x197 = INT16_MIN;
	int8_t x200 = INT8_MIN;
	volatile int32_t t43 = -319665;

    t43 = ((x197-(x198>x199))/x200);

    if (t43 != 256) { NG(); } else { ; }
	
}

void f44(void) {
    	static int32_t x201 = INT32_MAX;
	uint64_t x202 = UINT64_MAX;
	static uint16_t x203 = 14354U;
	uint32_t x204 = 2763438U;
	uint32_t t44 = 126U;

    t44 = ((x201-(x202>x203))/x204);

    if (t44 != 777U) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x207 = 2;
	uint8_t x208 = 4U;
	volatile int32_t t45 = -20516895;

    t45 = ((x205-(x206>x207))/x208);

    if (t45 != 63) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x209 = -9;
	volatile uint64_t x210 = UINT64_MAX;
	int16_t x211 = INT16_MAX;
	uint64_t x212 = 893033996332518983LLU;
	uint64_t t46 = 17840932LLU;

    t46 = ((x209-(x210>x211))/x212);

    if (t46 != 20LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x214 = -242;
	int64_t x215 = -1LL;
	volatile uint8_t x216 = UINT8_MAX;
	int32_t t47 = 9201;

    t47 = ((x213-(x214>x215))/x216);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x221 = 303232;
	uint16_t x222 = 60U;
	static int16_t x223 = INT16_MAX;
	int64_t x224 = -4839277750554LL;
	int64_t t48 = 2111368LL;

    t48 = ((x221-(x222>x223))/x224);

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x225 = INT8_MIN;
	int64_t x226 = INT64_MAX;
	static int8_t x227 = INT8_MIN;
	uint8_t x228 = 2U;
	volatile int32_t t49 = 1028479;

    t49 = ((x225-(x226>x227))/x228);

    if (t49 != -64) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x233 = 0;
	int64_t x234 = 235693859734090LL;
	int64_t x235 = -1223993316382549LL;
	volatile uint64_t x236 = 6817420118LLU;

    t50 = ((x233-(x234>x235))/x236);

    if (t50 != 2705824748LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x237 = INT64_MAX;
	int8_t x238 = INT8_MIN;
	uint8_t x239 = UINT8_MAX;
	int64_t t51 = 13060LL;

    t51 = ((x237-(x238>x239))/x240);

    if (t51 != 24019198012642645LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint8_t x241 = 3U;
	volatile int8_t x242 = -1;
	static int8_t x244 = INT8_MIN;
	volatile int32_t t52 = 7544183;

    t52 = ((x241-(x242>x243))/x244);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x245 = INT32_MIN;
	int64_t x246 = INT64_MIN;
	int8_t x247 = INT8_MAX;
	uint16_t x248 = UINT16_MAX;
	volatile int32_t t53 = -367;

    t53 = ((x245-(x246>x247))/x248);

    if (t53 != -32768) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x249 = INT16_MIN;
	static uint32_t x250 = 47U;
	uint64_t x251 = 474240299936892LLU;
	uint32_t x252 = 13883U;
	uint32_t t54 = 0U;

    t54 = ((x249-(x250>x251))/x252);

    if (t54 != 309366U) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x254 = UINT32_MAX;
	uint8_t x255 = 1U;
	volatile int64_t t55 = -41336411436LL;

    t55 = ((x253-(x254>x255))/x256);

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x261 = INT32_MIN;
	uint8_t x262 = 0U;
	int32_t x263 = INT32_MAX;
	volatile int32_t x264 = -12476;
	volatile int32_t t56 = -1;

    t56 = ((x261-(x262>x263))/x264);

    if (t56 != 172129) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x265 = -186464351;
	static volatile int16_t x267 = 11;
	int64_t x268 = INT64_MAX;
	int64_t t57 = 1722644LL;

    t57 = ((x265-(x266>x267))/x268);

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x269 = UINT32_MAX;
	int8_t x270 = -1;
	int16_t x271 = INT16_MAX;
	volatile uint8_t x272 = UINT8_MAX;
	uint32_t t58 = 64U;

    t58 = ((x269-(x270>x271))/x272);

    if (t58 != 16843009U) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x273 = INT8_MIN;
	int16_t x274 = -1;
	int64_t x276 = 2LL;
	int64_t t59 = -101424585LL;

    t59 = ((x273-(x274>x275))/x276);

    if (t59 != -64LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x278 = INT8_MIN;
	int32_t x279 = -1;
	uint64_t x280 = 9LLU;

    t60 = ((x277-(x278>x279))/x280);

    if (t60 != 1024819115206086200LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x281 = -1LL;
	int8_t x282 = 2;
	volatile uint32_t x283 = 58724197U;
	int8_t x284 = -1;
	volatile int64_t t61 = 211267073829676886LL;

    t61 = ((x281-(x282>x283))/x284);

    if (t61 != 1LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x285 = 607966679U;
	int32_t x286 = INT32_MAX;
	uint8_t x288 = 3U;
	uint32_t t62 = 9085136U;

    t62 = ((x285-(x286>x287))/x288);

    if (t62 != 202655559U) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x289 = -1LL;
	int16_t x290 = INT16_MIN;
	int8_t x291 = INT8_MIN;
	volatile uint64_t x292 = 1636500484LLU;
	volatile uint64_t t63 = 336996LLU;

    t63 = ((x289-(x290>x291))/x292);

    if (t63 != 11272067594LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x295 = -5;
	volatile int32_t t64 = -66842069;

    t64 = ((x293-(x294>x295))/x296);

    if (t64 != -258) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x297 = -1;
	int32_t x298 = -1;
	int32_t x299 = 105;
	volatile uint8_t x300 = 1U;
	volatile int32_t t65 = 101332030;

    t65 = ((x297-(x298>x299))/x300);

    if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
    

    t66 = ((x301-(x302>x303))/x304);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint32_t x305 = 1068218459U;
	static uint8_t x306 = 4U;
	volatile int16_t x307 = INT16_MIN;
	int16_t x308 = INT16_MIN;
	uint32_t t67 = 4U;

    t67 = ((x305-(x306>x307))/x308);

    if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x310 = 344259LLU;
	int64_t x311 = INT64_MIN;
	int32_t t68 = -24491;

    t68 = ((x309-(x310>x311))/x312);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static int16_t x313 = -1;
	int32_t x315 = INT32_MIN;
	int64_t x316 = 9080LL;

    t69 = ((x313-(x314>x315))/x316);

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int64_t x317 = -1LL;
	volatile int8_t x318 = INT8_MIN;
	int16_t x319 = INT16_MAX;
	int64_t x320 = -8537307504685097LL;
	volatile int64_t t70 = 177LL;

    t70 = ((x317-(x318>x319))/x320);

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x322 = 5U;
	volatile int8_t x323 = INT8_MIN;
	uint16_t x324 = UINT16_MAX;
	volatile int32_t t71 = 6313;

    t71 = ((x321-(x322>x323))/x324);

    if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint16_t x325 = 15108U;
	int8_t x326 = -1;
	static int16_t x327 = INT16_MAX;
	int16_t x328 = INT16_MIN;
	volatile int32_t t72 = -117295;

    t72 = ((x325-(x326>x327))/x328);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x333 = -1;
	int64_t x334 = -1LL;
	int16_t x335 = -61;
	uint8_t x336 = UINT8_MAX;
	int32_t t73 = -1;

    t73 = ((x333-(x334>x335))/x336);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x337 = 267U;
	int16_t x338 = INT16_MAX;
	int16_t x339 = INT16_MIN;
	static uint64_t x340 = 27253021642233752LLU;
	volatile uint64_t t74 = 22676193954257LLU;

    t74 = ((x337-(x338>x339))/x340);

    if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x342 = UINT32_MAX;
	uint16_t x344 = UINT16_MAX;
	int32_t t75 = -96;

    t75 = ((x341-(x342>x343))/x344);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x345 = 163420U;
	volatile uint8_t x347 = 1U;
	uint16_t x348 = UINT16_MAX;
	volatile uint32_t t76 = 221852780U;

    t76 = ((x345-(x346>x347))/x348);

    if (t76 != 2U) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint8_t x349 = UINT8_MAX;
	uint8_t x350 = 57U;
	int8_t x351 = -1;
	static int16_t x352 = -1268;

    t77 = ((x349-(x350>x351))/x352);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint8_t x353 = 1U;
	uint8_t x354 = 1U;
	static int64_t x355 = INT64_MIN;
	uint32_t x356 = 41U;
	uint32_t t78 = 734U;

    t78 = ((x353-(x354>x355))/x356);

    if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x357 = UINT16_MAX;
	int16_t x358 = 82;
	uint32_t x359 = 2802201U;
	volatile int64_t t79 = -4277153240544LL;

    t79 = ((x357-(x358>x359))/x360);

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x365 = INT16_MIN;
	volatile int8_t x366 = 6;
	volatile int32_t t80 = 119231375;

    t80 = ((x365-(x366>x367))/x368);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint16_t x369 = UINT16_MAX;
	volatile uint32_t x371 = 105177478U;
	static int8_t x372 = INT8_MAX;
	int32_t t81 = 1;

    t81 = ((x369-(x370>x371))/x372);

    if (t81 != 516) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x373 = 47U;
	volatile uint8_t x374 = UINT8_MAX;
	int64_t x375 = INT64_MIN;
	static int16_t x376 = -95;
	volatile uint32_t t82 = 67610U;

    t82 = ((x373-(x374>x375))/x376);

    if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x377 = -14;
	uint16_t x378 = 17U;
	volatile uint64_t x380 = 11717091LLU;
	uint64_t t83 = 631723757034303558LLU;

    t83 = ((x377-(x378>x379))/x380);

    if (t83 != 1574345037834LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x381 = INT64_MIN;
	int8_t x382 = -1;
	static int16_t x383 = -1;
	int8_t x384 = -6;
	volatile int64_t t84 = -48515935LL;

    t84 = ((x381-(x382>x383))/x384);

    if (t84 != 1537228672809129301LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x386 = 31621114867LLU;
	int16_t x387 = INT16_MIN;
	int64_t x388 = -15LL;
	volatile int64_t t85 = 46181237305017844LL;

    t85 = ((x385-(x386>x387))/x388);

    if (t85 != -2184LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x389 = INT8_MAX;
	int32_t x390 = -1;
	static int16_t x391 = INT16_MIN;
	volatile int32_t x392 = -1;

    t86 = ((x389-(x390>x391))/x392);

    if (t86 != -126) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint16_t x393 = UINT16_MAX;
	static volatile int16_t x394 = 0;
	int8_t x395 = 30;
	int16_t x396 = -1;
	volatile int32_t t87 = 31458038;

    t87 = ((x393-(x394>x395))/x396);

    if (t87 != -65535) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint8_t x397 = 0U;
	volatile uint32_t x398 = UINT32_MAX;
	uint32_t t88 = 3776U;

    t88 = ((x397-(x398>x399))/x400);

    if (t88 != 141142U) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x401 = UINT32_MAX;
	volatile uint8_t x402 = 0U;
	int8_t x403 = -1;
	volatile uint32_t x404 = 54006059U;
	static uint32_t t89 = 1429195906U;

    t89 = ((x401-(x402>x403))/x404);

    if (t89 != 79U) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x405 = -1;
	int8_t x406 = -14;
	int8_t x407 = INT8_MIN;
	static int32_t x408 = INT32_MIN;
	int32_t t90 = 0;

    t90 = ((x405-(x406>x407))/x408);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x409 = 1026197026LLU;
	int64_t x411 = -1LL;
	volatile uint64_t t91 = 4170555828066LLU;

    t91 = ((x409-(x410>x411))/x412);

    if (t91 != 8080291LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x414 = -3;
	volatile int32_t x415 = -1;
	volatile int64_t x416 = -541207242296770LL;
	int64_t t92 = 236319834LL;

    t92 = ((x413-(x414>x415))/x416);

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x417 = 0;
	uint16_t x418 = 18623U;
	int64_t x419 = -12423581953LL;
	int8_t x420 = INT8_MIN;
	volatile int32_t t93 = -3;

    t93 = ((x417-(x418>x419))/x420);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x421 = -1;
	static int8_t x422 = -3;
	static int8_t x423 = 1;
	static int16_t x424 = INT16_MIN;
	static int32_t t94 = -799697;

    t94 = ((x421-(x422>x423))/x424);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x425 = -434;
	uint16_t x426 = UINT16_MAX;
	static int64_t x428 = INT64_MIN;
	int64_t t95 = -29037184265001LL;

    t95 = ((x425-(x426>x427))/x428);

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x429 = 2;
	int32_t x430 = INT32_MAX;
	int16_t x431 = -1;

    t96 = ((x429-(x430>x431))/x432);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x433 = INT8_MIN;
	uint64_t x435 = 2196363457255497LLU;
	int64_t x436 = INT64_MIN;
	int64_t t97 = -454276LL;

    t97 = ((x433-(x434>x435))/x436);

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int64_t x437 = INT64_MIN;
	int8_t x438 = -1;
	int8_t x439 = -1;
	int8_t x440 = INT8_MAX;

    t98 = ((x437-(x438>x439))/x440);

    if (t98 != -72624976668147841LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static int64_t x445 = 6899618LL;
	static int32_t x446 = INT32_MIN;

    t99 = ((x445-(x446>x447))/x448);

    if (t99 != -53903LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x449 = -1LL;
	int16_t x450 = -6285;
	int64_t x451 = INT64_MIN;
	int32_t x452 = INT32_MIN;
	int64_t t100 = 10330894034LL;

    t100 = ((x449-(x450>x451))/x452);

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int32_t x465 = -1;
	int16_t x466 = INT16_MIN;
	uint16_t x467 = 0U;
	uint8_t x468 = 1U;
	int32_t t101 = -1032208;

    t101 = ((x465-(x466>x467))/x468);

    if (t101 != -1) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x471 = INT8_MIN;
	uint32_t x472 = 19813803U;
	static volatile uint32_t t102 = 18U;

    t102 = ((x469-(x470>x471))/x472);

    if (t102 != 216U) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x473 = 14649U;
	int32_t x474 = INT32_MIN;
	static int8_t x476 = INT8_MIN;
	volatile uint32_t t103 = 1127373U;

    t103 = ((x473-(x474>x475))/x476);

    if (t103 != 0U) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint16_t x477 = 1U;
	int8_t x478 = -11;
	uint16_t x479 = UINT16_MAX;
	volatile int32_t x480 = INT32_MIN;
	volatile int32_t t104 = 1;

    t104 = ((x477-(x478>x479))/x480);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x481 = -1;
	uint64_t x482 = 450576733072LLU;
	volatile int32_t t105 = -12;

    t105 = ((x481-(x482>x483))/x484);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x485 = INT16_MIN;
	static int8_t x488 = 13;
	int32_t t106 = 468597132;

    t106 = ((x485-(x486>x487))/x488);

    if (t106 != -2520) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint64_t x489 = UINT64_MAX;
	uint32_t x492 = 806824U;
	uint64_t t107 = 2036LLU;

    t107 = ((x489-(x490>x491))/x492);

    if (t107 != 22863405245393LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x493 = 0U;
	uint64_t x494 = 120872LLU;
	int16_t x495 = -1;
	int64_t t108 = 30466584LL;

    t108 = ((x493-(x494>x495))/x496);

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x497 = INT8_MAX;
	volatile uint16_t x498 = 4038U;
	static uint64_t x499 = UINT64_MAX;
	static volatile int32_t x500 = -3;
	volatile int32_t t109 = 6;

    t109 = ((x497-(x498>x499))/x500);

    if (t109 != -42) { NG(); } else { ; }
	
}

void f110(void) {
    	static int32_t x502 = INT32_MAX;
	int32_t x504 = 51943127;
	int32_t t110 = 35270830;

    t110 = ((x501-(x502>x503))/x504);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x510 = 0U;
	volatile uint8_t x511 = UINT8_MAX;
	volatile uint32_t t111 = 5U;

    t111 = ((x509-(x510>x511))/x512);

    if (t111 != 0U) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x513 = -3;
	uint64_t x514 = UINT64_MAX;
	volatile uint64_t x515 = UINT64_MAX;
	uint32_t x516 = 104748739U;

    t112 = ((x513-(x514>x515))/x516);

    if (t112 != 41U) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint32_t x517 = 302386876U;
	uint16_t x518 = 278U;
	int64_t x519 = -989806762416375LL;

    t113 = ((x517-(x518>x519))/x520);

    if (t113 != 0U) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x521 = INT8_MIN;
	uint32_t x522 = 4232U;
	uint16_t x523 = 292U;
	uint32_t x524 = UINT32_MAX;
	volatile uint32_t t114 = 3344U;

    t114 = ((x521-(x522>x523))/x524);

    if (t114 != 0U) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile uint32_t x525 = UINT32_MAX;
	volatile int64_t x526 = -1LL;
	int64_t x528 = 1995662348004LL;
	volatile int64_t t115 = -4064615027993224256LL;

    t115 = ((x525-(x526>x527))/x528);

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint64_t x530 = 10922316LLU;
	int8_t x531 = INT8_MAX;
	static int32_t x532 = -1880;
	static int32_t t116 = -424291216;

    t116 = ((x529-(x530>x531))/x532);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int32_t x533 = INT32_MIN;
	int64_t x534 = -1LL;
	int64_t x535 = -1LL;
	static int32_t t117 = -1;

    t117 = ((x533-(x534>x535))/x536);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x537 = 5975LL;
	volatile int16_t x539 = -1;
	int8_t x540 = -58;
	static int64_t t118 = 6731842745LL;

    t118 = ((x537-(x538>x539))/x540);

    if (t118 != -103LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x541 = 0;
	int16_t x542 = INT16_MIN;
	static int16_t x543 = 6;
	volatile int64_t x544 = -1LL;
	int64_t t119 = 3638427LL;

    t119 = ((x541-(x542>x543))/x544);

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x545 = 8U;
	uint32_t x546 = 1010U;
	int8_t x547 = 0;
	int32_t t120 = -4311;

    t120 = ((x545-(x546>x547))/x548);

    if (t120 != -7) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x549 = UINT64_MAX;
	int32_t x550 = -7828;
	int64_t x552 = INT64_MIN;
	uint64_t t121 = 2437194669134353723LLU;

    t121 = ((x549-(x550>x551))/x552);

    if (t121 != 1LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x553 = INT16_MIN;
	int8_t x554 = INT8_MIN;
	uint32_t x555 = 20786U;

    t122 = ((x553-(x554>x555))/x556);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint32_t x557 = 160U;
	uint8_t x558 = UINT8_MAX;
	int64_t x559 = 31501LL;
	static int64_t x560 = -1LL;
	int64_t t123 = -7LL;

    t123 = ((x557-(x558>x559))/x560);

    if (t123 != -160LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x561 = INT32_MIN;
	volatile int32_t x562 = INT32_MIN;
	volatile int64_t x563 = INT64_MAX;
	static uint64_t x564 = 42558232LLU;

    t124 = ((x561-(x562>x563))/x564);

    if (t124 != 433447143000LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x567 = 15930575;
	int64_t x568 = 221LL;
	int64_t t125 = -281448615982599LL;

    t125 = ((x565-(x566>x567))/x568);

    if (t125 != 148LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x569 = UINT32_MAX;
	int8_t x570 = -1;
	int64_t x571 = INT64_MAX;
	uint64_t t126 = 849669LLU;

    t126 = ((x569-(x570>x571))/x572);

    if (t126 != 0LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x574 = -53;
	volatile int32_t x575 = INT32_MAX;
	volatile uint32_t x576 = UINT32_MAX;
	static uint32_t t127 = 1797570U;

    t127 = ((x573-(x574>x575))/x576);

    if (t127 != 1U) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x577 = 8U;
	int16_t x578 = INT16_MAX;
	int8_t x579 = -4;
	volatile int8_t x580 = -42;
	volatile int32_t t128 = -452;

    t128 = ((x577-(x578>x579))/x580);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x581 = 1U;
	volatile uint32_t x583 = UINT32_MAX;
	volatile int64_t x584 = INT64_MAX;
	int64_t t129 = -7460550LL;

    t129 = ((x581-(x582>x583))/x584);

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x585 = INT8_MAX;
	uint8_t x587 = 1U;
	uint8_t x588 = UINT8_MAX;
	int32_t t130 = 1;

    t130 = ((x585-(x586>x587))/x588);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x589 = 384105970712LLU;
	volatile int8_t x590 = 0;
	static int8_t x591 = 10;
	volatile uint64_t x592 = 20941057077478LLU;
	static volatile uint64_t t131 = 171444LLU;

    t131 = ((x589-(x590>x591))/x592);

    if (t131 != 0LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x593 = INT64_MIN;
	volatile uint32_t x594 = UINT32_MAX;
	static int16_t x595 = -1;
	int32_t x596 = INT32_MIN;
	int64_t t132 = -28378765549878LL;

    t132 = ((x593-(x594>x595))/x596);

    if (t132 != 4294967296LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static int32_t x597 = INT32_MAX;
	uint16_t x598 = 0U;
	int64_t x599 = INT64_MAX;
	int8_t x600 = 6;

    t133 = ((x597-(x598>x599))/x600);

    if (t133 != 357913941) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x601 = 29U;
	uint32_t x602 = UINT32_MAX;
	uint32_t x604 = 72U;
	uint32_t t134 = 108U;

    t134 = ((x601-(x602>x603))/x604);

    if (t134 != 0U) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x605 = 7U;
	volatile int32_t x606 = -2;
	int32_t x607 = -195960464;
	uint16_t x608 = 3U;
	static volatile uint32_t t135 = 13183U;

    t135 = ((x605-(x606>x607))/x608);

    if (t135 != 2U) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint8_t x613 = UINT8_MAX;
	int16_t x615 = -1;
	volatile int16_t x616 = INT16_MAX;
	volatile int32_t t136 = 17165;

    t136 = ((x613-(x614>x615))/x616);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x618 = INT16_MIN;
	volatile int16_t x619 = INT16_MIN;
	volatile int8_t x620 = INT8_MIN;
	volatile uint32_t t137 = 173508305U;

    t137 = ((x617-(x618>x619))/x620);

    if (t137 != 0U) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x623 = INT8_MIN;
	static volatile uint8_t x624 = 62U;
	int32_t t138 = -7;

    t138 = ((x621-(x622>x623))/x624);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint64_t x625 = 234LLU;
	static volatile int64_t x626 = 2776668794026051LL;
	int64_t x627 = 26504LL;
	int64_t x628 = INT64_MIN;
	volatile uint64_t t139 = 4086856404408LLU;

    t139 = ((x625-(x626>x627))/x628);

    if (t139 != 0LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint64_t x629 = UINT64_MAX;
	int16_t x631 = 1165;
	static uint8_t x632 = UINT8_MAX;
	volatile uint64_t t140 = 1149418LLU;

    t140 = ((x629-(x630>x631))/x632);

    if (t140 != 72340172838076672LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x633 = INT16_MIN;
	int32_t x634 = INT32_MIN;
	uint8_t x635 = 59U;
	int64_t x636 = -1LL;
	volatile int64_t t141 = -921127815693290LL;

    t141 = ((x633-(x634>x635))/x636);

    if (t141 != 32768LL) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint8_t x637 = 27U;
	uint16_t x638 = 1313U;
	volatile int16_t x639 = 3;
	int64_t x640 = -31LL;
	int64_t t142 = -1876430LL;

    t142 = ((x637-(x638>x639))/x640);

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	static int16_t x641 = INT16_MIN;
	uint64_t x642 = UINT64_MAX;
	volatile int8_t x643 = INT8_MAX;
	volatile int32_t t143 = -66416501;

    t143 = ((x641-(x642>x643))/x644);

    if (t143 != 256) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x645 = -4;
	volatile int64_t x647 = -1LL;

    t144 = ((x645-(x646>x647))/x648);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x650 = 9;
	uint16_t x651 = UINT16_MAX;
	int8_t x652 = INT8_MIN;
	int32_t t145 = 81;

    t145 = ((x649-(x650>x651))/x652);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint32_t x653 = 507910009U;
	int64_t x654 = -1LL;
	int32_t x656 = -163172;
	uint32_t t146 = 10U;

    t146 = ((x653-(x654>x655))/x656);

    if (t146 != 0U) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x657 = -942908738LL;
	int8_t x658 = INT8_MIN;
	static int64_t x659 = 14010441291650LL;
	uint32_t x660 = 131988U;
	int64_t t147 = 30286722LL;

    t147 = ((x657-(x658>x659))/x660);

    if (t147 != -7143LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x661 = INT16_MIN;
	volatile int16_t x662 = INT16_MAX;
	static int32_t x664 = INT32_MIN;
	volatile int32_t t148 = -6789236;

    t148 = ((x661-(x662>x663))/x664);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x665 = 0U;
	uint16_t x666 = 70U;
	int32_t x667 = 0;
	int16_t x668 = INT16_MAX;
	volatile int32_t t149 = -1;

    t149 = ((x665-(x666>x667))/x668);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x669 = INT8_MAX;
	int32_t x670 = INT32_MAX;
	uint8_t x671 = 3U;
	int16_t x672 = -14772;
	int32_t t150 = 258386789;

    t150 = ((x669-(x670>x671))/x672);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x673 = UINT64_MAX;
	volatile uint16_t x674 = 7906U;
	int32_t x676 = 6592297;

    t151 = ((x673-(x674>x675))/x676);

    if (t151 != 2798227093486LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static int32_t x678 = -87;
	int32_t x680 = 3334;

    t152 = ((x677-(x678>x679))/x680);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x684 = 265U;
	static int64_t t153 = -851315464LL;

    t153 = ((x681-(x682>x683))/x684);

    if (t153 != 23519086466271LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x685 = -42;
	int16_t x686 = INT16_MIN;
	int64_t x687 = -1LL;
	int16_t x688 = INT16_MAX;
	volatile int32_t t154 = 911;

    t154 = ((x685-(x686>x687))/x688);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint16_t x689 = 9U;
	uint64_t x690 = UINT64_MAX;
	volatile int16_t x691 = -1;
	int16_t x692 = 3884;
	int32_t t155 = -671168;

    t155 = ((x689-(x690>x691))/x692);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x693 = 2185126988587LLU;
	static uint16_t x694 = UINT16_MAX;
	int32_t x695 = INT32_MIN;
	int64_t x696 = -515808608323367LL;
	volatile uint64_t t156 = 23734769030LLU;

    t156 = ((x693-(x694>x695))/x696);

    if (t156 != 0LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x697 = UINT32_MAX;
	int16_t x698 = INT16_MIN;
	int64_t x699 = INT64_MIN;
	uint8_t x700 = UINT8_MAX;
	volatile uint32_t t157 = 417995063U;

    t157 = ((x697-(x698>x699))/x700);

    if (t157 != 16843008U) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x701 = -1LL;
	static uint8_t x702 = UINT8_MAX;
	int64_t t158 = -28LL;

    t158 = ((x701-(x702>x703))/x704);

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x705 = INT8_MIN;
	int8_t x706 = INT8_MAX;
	volatile int8_t x707 = -1;
	int8_t x708 = 1;
	int32_t t159 = 162;

    t159 = ((x705-(x706>x707))/x708);

    if (t159 != -129) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x709 = 13;
	volatile int8_t x710 = INT8_MIN;
	int32_t x711 = INT32_MIN;
	volatile int32_t t160 = -32305655;

    t160 = ((x709-(x710>x711))/x712);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x713 = -1LL;
	static volatile int64_t x714 = -1LL;
	static uint64_t x716 = 55105365177LLU;
	uint64_t t161 = 16231238667415634LLU;

    t161 = ((x713-(x714>x715))/x716);

    if (t161 != 334754048LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint8_t x717 = UINT8_MAX;
	int32_t x719 = 1986;
	int32_t t162 = -7102;

    t162 = ((x717-(x718>x719))/x720);

    if (t162 != -254) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x721 = 915657234541615LLU;
	int64_t x723 = INT64_MAX;
	static uint64_t x724 = 8087979449745143LLU;
	static uint64_t t163 = 304189730LLU;

    t163 = ((x721-(x722>x723))/x724);

    if (t163 != 0LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x725 = 60;
	static int16_t x726 = INT16_MIN;
	uint8_t x727 = 0U;
	static volatile int16_t x728 = -1;
	static volatile int32_t t164 = 904;

    t164 = ((x725-(x726>x727))/x728);

    if (t164 != -60) { NG(); } else { ; }
	
}

void f165(void) {
    	static int16_t x729 = INT16_MAX;
	volatile int64_t x731 = 4311533LL;
	int8_t x732 = 7;
	static volatile int32_t t165 = 86705110;

    t165 = ((x729-(x730>x731))/x732);

    if (t165 != 4680) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int32_t x733 = -1;
	int32_t x734 = INT32_MIN;
	int64_t x735 = INT64_MIN;
	int32_t x736 = INT32_MIN;
	volatile int32_t t166 = -732801197;

    t166 = ((x733-(x734>x735))/x736);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x737 = -23;
	static uint8_t x740 = 126U;

    t167 = ((x737-(x738>x739))/x740);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x742 = 3607;
	int8_t x743 = 7;
	int64_t x744 = 23944LL;
	int64_t t168 = -48782343781703LL;

    t168 = ((x741-(x742>x743))/x744);

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x745 = 177143707U;
	int32_t x746 = INT32_MIN;
	uint16_t x747 = UINT16_MAX;
	volatile uint32_t t169 = 168U;

    t169 = ((x745-(x746>x747))/x748);

    if (t169 != 0U) { NG(); } else { ; }
	
}

void f170(void) {
    	static int32_t x749 = -5645782;
	int64_t x750 = -6248575279LL;
	int8_t x751 = INT8_MAX;
	volatile int32_t x752 = INT32_MIN;
	volatile int32_t t170 = 42;

    t170 = ((x749-(x750>x751))/x752);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x753 = -1;
	uint16_t x755 = UINT16_MAX;
	int16_t x756 = 7652;
	static volatile int32_t t171 = -18414842;

    t171 = ((x753-(x754>x755))/x756);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x761 = INT64_MIN;
	volatile int16_t x762 = -1;
	int32_t x763 = 10583725;
	volatile int64_t x764 = INT64_MIN;
	int64_t t172 = -45571LL;

    t172 = ((x761-(x762>x763))/x764);

    if (t172 != 1LL) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int32_t x766 = INT32_MIN;
	volatile uint8_t x767 = 32U;
	volatile int64_t x768 = INT64_MIN;
	volatile uint64_t t173 = 481959885LLU;

    t173 = ((x765-(x766>x767))/x768);

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x773 = -1;
	volatile int64_t x774 = 124967585LL;
	int64_t x776 = -1305LL;

    t174 = ((x773-(x774>x775))/x776);

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x777 = 453667LLU;
	uint64_t x779 = 843LLU;
	static uint64_t t175 = 285241LLU;

    t175 = ((x777-(x778>x779))/x780);

    if (t175 != 12961LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x781 = -1;
	int32_t x782 = -1;
	int32_t x783 = -1;
	int8_t x784 = INT8_MIN;

    t176 = ((x781-(x782>x783))/x784);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x789 = -1;
	static volatile uint64_t x790 = UINT64_MAX;
	uint8_t x792 = 15U;
	volatile int32_t t177 = -262798637;

    t177 = ((x789-(x790>x791))/x792);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x793 = 266027U;
	static uint64_t x794 = 13829226LLU;
	volatile int8_t x796 = INT8_MAX;
	static volatile uint32_t t178 = 22U;

    t178 = ((x793-(x794>x795))/x796);

    if (t178 != 2094U) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x797 = UINT64_MAX;
	int64_t x798 = -1LL;
	int16_t x800 = -1;
	uint64_t t179 = 9886888LLU;

    t179 = ((x797-(x798>x799))/x800);

    if (t179 != 0LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile int16_t x801 = -157;
	volatile uint16_t x802 = 1812U;
	static int16_t x803 = -1;
	volatile uint32_t t180 = 361862U;

    t180 = ((x801-(x802>x803))/x804);

    if (t180 != 260U) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x805 = UINT8_MAX;
	int8_t x807 = -5;
	int32_t t181 = 24;

    t181 = ((x805-(x806>x807))/x808);

    if (t181 != -1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x810 = 429U;
	uint8_t x811 = 4U;
	uint64_t x812 = 8111666643748LLU;
	uint64_t t182 = 23471184LLU;

    t182 = ((x809-(x810>x811))/x812);

    if (t182 != 2274100LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x815 = UINT8_MAX;
	static uint8_t x816 = UINT8_MAX;
	int32_t t183 = -191829;

    t183 = ((x813-(x814>x815))/x816);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint8_t x818 = 118U;
	volatile int64_t t184 = -1349123LL;

    t184 = ((x817-(x818>x819))/x820);

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x825 = -1;
	volatile int64_t x826 = 201673LL;
	uint16_t x827 = 7U;
	static volatile uint32_t t185 = 434043U;

    t185 = ((x825-(x826>x827))/x828);

    if (t185 != 104755299U) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x829 = 214175;
	uint32_t x830 = 62864U;
	int16_t x831 = INT16_MIN;
	static int16_t x832 = 31;
	volatile int32_t t186 = -5712123;

    t186 = ((x829-(x830>x831))/x832);

    if (t186 != 6908) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile uint8_t x833 = 125U;
	uint32_t x835 = 1994U;
	int16_t x836 = -25;
	volatile int32_t t187 = -1;

    t187 = ((x833-(x834>x835))/x836);

    if (t187 != -5) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x837 = -1LL;
	uint16_t x838 = 33U;
	volatile uint8_t x839 = 54U;
	int64_t x840 = -89060552LL;
	volatile int64_t t188 = -4499278781094LL;

    t188 = ((x837-(x838>x839))/x840);

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x842 = 1329083939942554LLU;
	int16_t x843 = -1;
	int8_t x844 = 2;

    t189 = ((x841-(x842>x843))/x844);

    if (t189 != 63) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x845 = UINT32_MAX;
	int16_t x846 = INT16_MIN;
	int16_t x847 = -1;
	static volatile uint32_t t190 = 1310243U;

    t190 = ((x845-(x846>x847))/x848);

    if (t190 != 131076U) { NG(); } else { ; }
	
}

void f191(void) {
    	static int64_t x849 = -2001LL;
	volatile uint16_t x851 = UINT16_MAX;
	uint8_t x852 = 14U;

    t191 = ((x849-(x850>x851))/x852);

    if (t191 != -143LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile int8_t x853 = INT8_MIN;
	int16_t x854 = INT16_MIN;
	static int8_t x855 = INT8_MIN;
	int32_t x856 = INT32_MIN;
	static volatile int32_t t192 = 103275;

    t192 = ((x853-(x854>x855))/x856);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x857 = -743;
	int64_t x858 = 38485583016243372LL;
	int16_t x860 = INT16_MIN;
	int32_t t193 = 0;

    t193 = ((x857-(x858>x859))/x860);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint8_t x865 = 4U;
	uint32_t x867 = UINT32_MAX;
	volatile int8_t x868 = INT8_MIN;
	volatile int32_t t194 = 31077969;

    t194 = ((x865-(x866>x867))/x868);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int64_t x869 = -22443937242183958LL;
	int64_t x870 = INT64_MIN;
	uint32_t x871 = 2088809235U;
	int16_t x872 = INT16_MIN;
	volatile int64_t t195 = 21346123064704LL;

    t195 = ((x869-(x870>x871))/x872);

    if (t195 != 684934608220LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x873 = -1LL;
	int32_t x874 = INT32_MIN;
	int64_t t196 = 14075172803428LL;

    t196 = ((x873-(x874>x875))/x876);

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x877 = INT8_MIN;
	static int16_t x878 = -5511;
	static int32_t x879 = INT32_MAX;
	int64_t t197 = 977LL;

    t197 = ((x877-(x878>x879))/x880);

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x882 = INT64_MIN;
	uint16_t x883 = UINT16_MAX;
	uint64_t x884 = 404252282461LLU;
	uint64_t t198 = 49902LLU;

    t198 = ((x881-(x882>x883))/x884);

    if (t198 != 45631762LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x885 = UINT32_MAX;
	int16_t x886 = INT16_MIN;
	int32_t x887 = -1;
	uint64_t x888 = 132LLU;

    t199 = ((x885-(x886>x887))/x888);

    if (t199 != 32537631LLU) { NG(); } else { ; }
	
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

