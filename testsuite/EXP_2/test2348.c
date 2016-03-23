
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

uint8_t x3 = 0U;
int32_t x11 = INT32_MAX;
static int16_t x12 = INT16_MIN;
int16_t x15 = -48;
uint32_t x16 = UINT32_MAX;
volatile uint8_t x30 = UINT8_MAX;
int32_t x31 = INT32_MIN;
int16_t x45 = INT16_MIN;
int8_t x48 = INT8_MAX;
uint16_t x50 = 13365U;
int8_t x62 = -1;
uint32_t x63 = 0U;
int16_t x74 = -1;
int64_t x89 = -1LL;
static int8_t x91 = -17;
uint64_t x95 = 81160555224047666LLU;
int32_t x97 = -1;
int32_t x98 = INT32_MIN;
int32_t x102 = -1;
volatile int32_t x103 = INT32_MIN;
uint64_t x112 = 281534594388608398LLU;
int16_t x128 = INT16_MIN;
int16_t x129 = -1;
static int32_t x130 = INT32_MAX;
int64_t x131 = -23736828511LL;
volatile int64_t x134 = -93LL;
int32_t x143 = -1;
int8_t x144 = INT8_MIN;
int16_t x147 = INT16_MIN;
uint8_t x162 = 0U;
int64_t x164 = 459980005311LL;
volatile int8_t x170 = INT8_MIN;
static int16_t x171 = 2711;
int32_t t43 = 160988;
int64_t x185 = 1168512938LL;
volatile int32_t t46 = 0;
volatile int8_t x196 = INT8_MIN;
volatile uint8_t x205 = UINT8_MAX;
volatile int32_t t51 = 31745;
uint8_t x210 = UINT8_MAX;
static volatile int64_t x223 = -1LL;
static int32_t t55 = -2709343;
static volatile int32_t x225 = INT32_MIN;
int32_t x235 = -1;
int32_t t59 = -626898;
int32_t x242 = -718305;
volatile int32_t t60 = 152108;
volatile int8_t x245 = INT8_MAX;
static volatile int32_t t61 = 0;
uint32_t x251 = 3086492U;
int16_t x252 = -1;
int16_t x256 = 1;
static int32_t x258 = INT32_MIN;
static volatile int16_t x260 = INT16_MIN;
uint16_t x265 = 29U;
int8_t x268 = INT8_MIN;
int32_t x269 = INT32_MIN;
volatile int64_t x271 = -122153993LL;
int32_t t67 = 10042816;
int32_t t68 = -18;
int64_t x285 = -12391880LL;
int8_t x287 = INT8_MIN;
int32_t x291 = INT32_MAX;
static int8_t x293 = INT8_MIN;
uint16_t x297 = 0U;
uint8_t x298 = 2U;
int32_t x299 = -1;
volatile uint32_t x300 = UINT32_MAX;
int16_t x302 = INT16_MIN;
volatile uint64_t x309 = 456207597768LLU;
int64_t x311 = -1LL;
int64_t x313 = -1LL;
static int8_t x314 = 4;
int64_t x315 = -229183255LL;
int32_t x316 = 152334;
int32_t x318 = INT32_MIN;
static int32_t t80 = 7;
static volatile int16_t x327 = -50;
int8_t x328 = -1;
uint64_t x332 = 15305486787869LLU;
volatile int32_t t82 = -2567744;
uint64_t x334 = UINT64_MAX;
uint8_t x336 = UINT8_MAX;
int32_t x347 = -216212;
static int32_t x348 = INT32_MAX;
int64_t x352 = -1914495791LL;
static uint32_t x353 = UINT32_MAX;
int32_t x360 = INT32_MAX;
static int32_t t89 = -1;
volatile uint32_t x362 = UINT32_MAX;
int8_t x363 = INT8_MIN;
int8_t x365 = -1;
static int64_t x370 = -1LL;
int8_t x382 = -1;
uint16_t x383 = 1U;
volatile int32_t t97 = 13017;
int32_t x394 = INT32_MAX;
int32_t t98 = -898133;
uint32_t x397 = 0U;
int8_t x408 = INT8_MAX;
uint64_t x409 = 44263881575694174LLU;
static volatile int16_t x416 = 0;
uint32_t x418 = UINT32_MAX;
volatile int16_t x426 = 303;
int16_t x430 = INT16_MIN;
int64_t x435 = -1LL;
uint64_t x441 = UINT64_MAX;
int32_t x443 = -1;
volatile int64_t x444 = -1LL;
int64_t x446 = INT64_MIN;
int8_t x447 = 0;
static int32_t x465 = INT32_MAX;
int8_t x466 = INT8_MIN;
int16_t x469 = INT16_MIN;
static int32_t x470 = INT32_MIN;
uint16_t x471 = 5778U;
volatile int32_t t118 = -810754395;
volatile int32_t t119 = -2221998;
volatile int8_t x489 = -1;
static volatile int32_t t123 = -290494643;
int16_t x499 = -1;
volatile int32_t t127 = -26;
static int32_t x513 = INT32_MAX;
volatile int32_t t131 = -1535791;
volatile int32_t t133 = 227;
static int8_t x537 = INT8_MIN;
volatile int32_t x544 = 1;
int16_t x546 = 2409;
volatile int64_t x551 = INT64_MIN;
int8_t x555 = INT8_MIN;
uint8_t x559 = 54U;
static int8_t x561 = INT8_MIN;
int32_t x562 = -346;
int8_t x564 = INT8_MAX;
int32_t t141 = -119296587;
int16_t x570 = -9;
static uint32_t x574 = 3704621U;
int64_t x575 = INT64_MIN;
int32_t x579 = -1;
volatile int32_t t144 = -96;
static volatile int32_t x581 = 5;
static volatile int32_t t145 = 35339116;
static int32_t x585 = INT32_MIN;
uint32_t x595 = 15U;
static int16_t x598 = INT16_MIN;
static volatile uint32_t x599 = 1862376U;
int32_t t149 = -475987;
int16_t x601 = -278;
static volatile int32_t t151 = -9;
int8_t x611 = INT8_MIN;
uint8_t x616 = 0U;
uint64_t x618 = 113983625557LLU;
int16_t x619 = -1;
volatile int64_t x629 = -1253050LL;
static uint16_t x633 = UINT16_MAX;
uint32_t x634 = 1804694U;
volatile int32_t x640 = INT32_MIN;
static volatile int64_t x642 = -1LL;
static volatile int16_t x650 = -1;
uint8_t x651 = 0U;
static int64_t x653 = INT64_MIN;
static int16_t x654 = -26;
uint8_t x655 = UINT8_MAX;
int8_t x659 = -1;
static volatile int32_t t164 = 1;
volatile int64_t x663 = INT64_MAX;
int32_t x667 = INT32_MIN;
uint8_t x672 = UINT8_MAX;
int16_t x673 = 9577;
static int8_t x676 = -1;
static uint64_t x677 = UINT64_MAX;
int32_t x678 = -1;
int8_t x684 = INT8_MAX;
volatile int32_t t170 = -1768758;
int32_t x688 = -2;
int8_t x700 = INT8_MAX;
uint32_t x701 = 99957136U;
int8_t x703 = 0;
volatile uint64_t x704 = 25159649515LLU;
int32_t x708 = -1;
int32_t x711 = INT32_MIN;
int16_t x720 = INT16_MIN;
volatile int16_t x728 = 1;
static int32_t t181 = -847;
uint8_t x729 = 3U;
static int64_t x743 = INT64_MIN;
int8_t x749 = -1;
uint8_t x750 = UINT8_MAX;
uint32_t x752 = 770416U;
static uint32_t x756 = 117799101U;
uint32_t x764 = UINT32_MAX;
volatile int32_t t190 = 158562326;
int8_t x765 = INT8_MAX;
static uint64_t x767 = 723LLU;
int64_t x779 = INT64_MAX;
static int8_t x781 = INT8_MIN;
static int64_t x785 = -1LL;
int32_t x790 = 1614565;
static int32_t t197 = 1356066;
int16_t x793 = INT16_MIN;
int64_t x794 = INT64_MIN;
static int64_t x799 = INT64_MIN;


void f0(void) {
    	int8_t x1 = -1;
	int64_t x2 = -1LL;
	static int32_t x4 = 17;
	volatile int32_t t0 = 20;

    t0 = ((x1^(x2&x3))<=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = 7;
	int8_t x6 = INT8_MAX;
	int16_t x7 = INT16_MIN;
	int32_t x8 = -1;
	int32_t t1 = -9525;

    t1 = ((x5^(x6&x7))<=x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = -1;
	int8_t x10 = -1;
	volatile int32_t t2 = -2245;

    t2 = ((x9^(x10&x11))<=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile int32_t x13 = INT32_MIN;
	int16_t x14 = -1;
	volatile int32_t t3 = 232;

    t3 = ((x13^(x14&x15))<=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = 29656431;
	int16_t x18 = INT16_MIN;
	int8_t x19 = -1;
	int32_t x20 = INT32_MIN;
	volatile int32_t t4 = -1796;

    t4 = ((x17^(x18&x19))<=x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile int16_t x21 = -30;
	int32_t x22 = INT32_MAX;
	static uint32_t x23 = 7158360U;
	int64_t x24 = -1LL;
	volatile int32_t t5 = 2097;

    t5 = ((x21^(x22&x23))<=x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x25 = 3593U;
	int16_t x26 = INT16_MIN;
	static int16_t x27 = INT16_MIN;
	static volatile int8_t x28 = -1;
	static int32_t t6 = -197721969;

    t6 = ((x25^(x26&x27))<=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = INT32_MIN;
	uint8_t x32 = UINT8_MAX;
	int32_t t7 = 0;

    t7 = ((x29^(x30&x31))<=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x33 = UINT64_MAX;
	static uint8_t x34 = 57U;
	uint32_t x35 = 320413U;
	int64_t x36 = -1LL;
	static int32_t t8 = -29;

    t8 = ((x33^(x34&x35))<=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = INT32_MAX;
	volatile int32_t x38 = INT32_MAX;
	uint8_t x39 = UINT8_MAX;
	uint8_t x40 = 29U;
	volatile int32_t t9 = 3;

    t9 = ((x37^(x38&x39))<=x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x41 = UINT32_MAX;
	uint8_t x42 = 93U;
	uint64_t x43 = UINT64_MAX;
	int16_t x44 = INT16_MAX;
	volatile int32_t t10 = -14;

    t10 = ((x41^(x42&x43))<=x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x46 = INT64_MIN;
	uint16_t x47 = UINT16_MAX;
	int32_t t11 = 464642;

    t11 = ((x45^(x46&x47))<=x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint64_t x49 = UINT64_MAX;
	static int8_t x51 = INT8_MAX;
	uint8_t x52 = 70U;
	int32_t t12 = -1;

    t12 = ((x49^(x50&x51))<=x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x53 = 3199U;
	uint32_t x54 = 2006352634U;
	uint8_t x55 = 5U;
	int64_t x56 = INT64_MIN;
	int32_t t13 = 6;

    t13 = ((x53^(x54&x55))<=x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static int32_t x57 = INT32_MAX;
	int32_t x58 = INT32_MIN;
	volatile uint64_t x59 = 1939942017LLU;
	uint32_t x60 = UINT32_MAX;
	int32_t t14 = 386671103;

    t14 = ((x57^(x58&x59))<=x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = -1;
	int8_t x64 = INT8_MAX;
	int32_t t15 = 14113;

    t15 = ((x61^(x62&x63))<=x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint32_t x65 = 314795082U;
	int16_t x66 = INT16_MAX;
	int32_t x67 = 2;
	int32_t x68 = INT32_MAX;
	volatile int32_t t16 = -124565574;

    t16 = ((x65^(x66&x67))<=x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = -81668;
	int64_t x70 = INT64_MIN;
	uint16_t x71 = 18U;
	static uint32_t x72 = 3U;
	static volatile int32_t t17 = 132;

    t17 = ((x69^(x70&x71))<=x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x73 = 16024U;
	int64_t x75 = INT64_MIN;
	uint32_t x76 = UINT32_MAX;
	int32_t t18 = 73096617;

    t18 = ((x73^(x74&x75))<=x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = INT32_MAX;
	int64_t x78 = -1LL;
	static uint64_t x79 = 0LLU;
	int64_t x80 = -1LL;
	volatile int32_t t19 = -21;

    t19 = ((x77^(x78&x79))<=x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x81 = UINT16_MAX;
	int8_t x82 = INT8_MIN;
	int64_t x83 = INT64_MAX;
	uint16_t x84 = 130U;
	int32_t t20 = -308638949;

    t20 = ((x81^(x82&x83))<=x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = INT8_MIN;
	static int32_t x86 = 2003691;
	uint32_t x87 = UINT32_MAX;
	int32_t x88 = INT32_MIN;
	int32_t t21 = 1318;

    t21 = ((x85^(x86&x87))<=x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x90 = UINT64_MAX;
	int32_t x92 = INT32_MIN;
	volatile int32_t t22 = -19;

    t22 = ((x89^(x90&x91))<=x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x93 = UINT16_MAX;
	volatile uint32_t x94 = 237954U;
	uint32_t x96 = 0U;
	volatile int32_t t23 = 1;

    t23 = ((x93^(x94&x95))<=x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x99 = UINT8_MAX;
	int64_t x100 = -9LL;
	volatile int32_t t24 = -43969;

    t24 = ((x97^(x98&x99))<=x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x101 = 0U;
	int16_t x104 = INT16_MAX;
	int32_t t25 = -57045073;

    t25 = ((x101^(x102&x103))<=x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint16_t x105 = UINT16_MAX;
	volatile int16_t x106 = 53;
	int32_t x107 = INT32_MIN;
	uint32_t x108 = 1811842U;
	volatile int32_t t26 = 16;

    t26 = ((x105^(x106&x107))<=x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = -527049;
	int32_t x110 = INT32_MIN;
	volatile uint32_t x111 = UINT32_MAX;
	int32_t t27 = -1505782;

    t27 = ((x109^(x110&x111))<=x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x113 = 38U;
	volatile int16_t x114 = INT16_MAX;
	uint8_t x115 = UINT8_MAX;
	int16_t x116 = INT16_MAX;
	static volatile int32_t t28 = 4023951;

    t28 = ((x113^(x114&x115))<=x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static int64_t x117 = -23347689770271LL;
	volatile int64_t x118 = -13386493LL;
	int8_t x119 = 0;
	int64_t x120 = -10LL;
	int32_t t29 = -11;

    t29 = ((x117^(x118&x119))<=x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x121 = -1;
	int32_t x122 = 0;
	volatile uint64_t x123 = 976330LLU;
	uint16_t x124 = UINT16_MAX;
	int32_t t30 = -61180570;

    t30 = ((x121^(x122&x123))<=x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x125 = 14U;
	int64_t x126 = INT64_MIN;
	int32_t x127 = INT32_MIN;
	volatile int32_t t31 = 5258929;

    t31 = ((x125^(x126&x127))<=x128);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x132 = -1;
	volatile int32_t t32 = 37;

    t32 = ((x129^(x130&x131))<=x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = INT64_MIN;
	int64_t x135 = INT64_MAX;
	int32_t x136 = INT32_MAX;
	int32_t t33 = -4165152;

    t33 = ((x133^(x134&x135))<=x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x137 = 2289LL;
	volatile uint64_t x138 = 4078LLU;
	static int32_t x139 = 294;
	int32_t x140 = -1406;
	int32_t t34 = -16;

    t34 = ((x137^(x138&x139))<=x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static int64_t x141 = -1LL;
	static volatile int16_t x142 = INT16_MAX;
	volatile int32_t t35 = -2695592;

    t35 = ((x141^(x142&x143))<=x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x145 = UINT32_MAX;
	uint8_t x146 = 6U;
	volatile int16_t x148 = -931;
	int32_t t36 = 267;

    t36 = ((x145^(x146&x147))<=x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x149 = 11;
	uint32_t x150 = 3269472U;
	uint64_t x151 = UINT64_MAX;
	int32_t x152 = INT32_MAX;
	static int32_t t37 = 630137783;

    t37 = ((x149^(x150&x151))<=x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = 1;
	int32_t x154 = -1;
	int8_t x155 = 1;
	int16_t x156 = INT16_MIN;
	int32_t t38 = -85;

    t38 = ((x153^(x154&x155))<=x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x157 = -194;
	static int64_t x158 = -1LL;
	int64_t x159 = INT64_MAX;
	int32_t x160 = INT32_MIN;
	int32_t t39 = 4265410;

    t39 = ((x157^(x158&x159))<=x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x161 = INT64_MAX;
	uint32_t x163 = 1U;
	static volatile int32_t t40 = -1279;

    t40 = ((x161^(x162&x163))<=x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint16_t x165 = 1141U;
	static int32_t x166 = -14769206;
	static int8_t x167 = INT8_MIN;
	static uint8_t x168 = 5U;
	static volatile int32_t t41 = 164829;

    t41 = ((x165^(x166&x167))<=x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x169 = INT16_MIN;
	int32_t x172 = -1;
	volatile int32_t t42 = 245709;

    t42 = ((x169^(x170&x171))<=x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x173 = -8145735;
	volatile int64_t x174 = -1LL;
	static int32_t x175 = INT32_MAX;
	int8_t x176 = INT8_MIN;

    t43 = ((x173^(x174&x175))<=x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x177 = INT16_MIN;
	uint16_t x178 = 6U;
	int64_t x179 = INT64_MAX;
	volatile uint16_t x180 = 179U;
	volatile int32_t t44 = 15966217;

    t44 = ((x177^(x178&x179))<=x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile uint32_t x181 = UINT32_MAX;
	int8_t x182 = -1;
	uint8_t x183 = UINT8_MAX;
	int32_t x184 = INT32_MAX;
	volatile int32_t t45 = 3921;

    t45 = ((x181^(x182&x183))<=x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x186 = 14U;
	int64_t x187 = -1LL;
	int16_t x188 = INT16_MIN;

    t46 = ((x185^(x186&x187))<=x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x189 = UINT16_MAX;
	int8_t x190 = 35;
	static int32_t x191 = -14888693;
	static volatile uint8_t x192 = 17U;
	int32_t t47 = -16007;

    t47 = ((x189^(x190&x191))<=x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x193 = INT32_MIN;
	int16_t x194 = 1;
	static volatile uint32_t x195 = 244117U;
	volatile int32_t t48 = 253051876;

    t48 = ((x193^(x194&x195))<=x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x197 = INT64_MIN;
	int64_t x198 = INT64_MIN;
	int8_t x199 = INT8_MIN;
	static volatile int32_t x200 = INT32_MAX;
	volatile int32_t t49 = -1558;

    t49 = ((x197^(x198&x199))<=x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x201 = INT8_MIN;
	int8_t x202 = -60;
	static volatile uint64_t x203 = 46762422306507978LLU;
	uint8_t x204 = UINT8_MAX;
	int32_t t50 = 13;

    t50 = ((x201^(x202&x203))<=x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x206 = INT32_MIN;
	volatile int32_t x207 = INT32_MAX;
	int16_t x208 = INT16_MIN;

    t51 = ((x205^(x206&x207))<=x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static int32_t x209 = INT32_MIN;
	uint8_t x211 = 13U;
	uint16_t x212 = 0U;
	static volatile int32_t t52 = -2465;

    t52 = ((x209^(x210&x211))<=x212);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x213 = INT16_MIN;
	volatile uint8_t x214 = 112U;
	volatile int32_t x215 = INT32_MIN;
	uint16_t x216 = 116U;
	int32_t t53 = 53;

    t53 = ((x213^(x214&x215))<=x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x217 = INT32_MAX;
	int64_t x218 = INT64_MAX;
	int64_t x219 = INT64_MAX;
	int64_t x220 = INT64_MIN;
	static volatile int32_t t54 = -5;

    t54 = ((x217^(x218&x219))<=x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x221 = 53U;
	static int64_t x222 = INT64_MIN;
	static uint8_t x224 = 9U;

    t55 = ((x221^(x222&x223))<=x224);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x226 = INT16_MIN;
	uint16_t x227 = 3062U;
	volatile int8_t x228 = INT8_MAX;
	static int32_t t56 = 128759677;

    t56 = ((x225^(x226&x227))<=x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x229 = -1;
	volatile int16_t x230 = -12;
	int16_t x231 = 1;
	uint32_t x232 = 986912427U;
	volatile int32_t t57 = 136329569;

    t57 = ((x229^(x230&x231))<=x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x233 = UINT8_MAX;
	static int64_t x234 = INT64_MAX;
	uint8_t x236 = UINT8_MAX;
	volatile int32_t t58 = 5574670;

    t58 = ((x233^(x234&x235))<=x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int8_t x237 = INT8_MAX;
	uint64_t x238 = 6813649LLU;
	volatile int16_t x239 = 7500;
	int16_t x240 = 2;

    t59 = ((x237^(x238&x239))<=x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x241 = 655U;
	int8_t x243 = 13;
	static volatile int32_t x244 = -314745679;

    t60 = ((x241^(x242&x243))<=x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x246 = UINT16_MAX;
	uint16_t x247 = UINT16_MAX;
	volatile int16_t x248 = INT16_MIN;

    t61 = ((x245^(x246&x247))<=x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint64_t x249 = 356786365674581LLU;
	uint32_t x250 = UINT32_MAX;
	volatile int32_t t62 = 89396;

    t62 = ((x249^(x250&x251))<=x252);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x253 = 44U;
	static int32_t x254 = -1;
	volatile int64_t x255 = 1LL;
	int32_t t63 = 7;

    t63 = ((x253^(x254&x255))<=x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x257 = 45290743044602535LLU;
	int8_t x259 = INT8_MIN;
	int32_t t64 = -1657732;

    t64 = ((x257^(x258&x259))<=x260);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = INT32_MIN;
	int64_t x262 = 16469278854LL;
	uint16_t x263 = 238U;
	volatile int16_t x264 = INT16_MIN;
	volatile int32_t t65 = -403214;

    t65 = ((x261^(x262&x263))<=x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static int16_t x266 = -1;
	static int64_t x267 = INT64_MAX;
	static int32_t t66 = 1027270680;

    t66 = ((x265^(x266&x267))<=x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x270 = UINT64_MAX;
	int32_t x272 = -1;

    t67 = ((x269^(x270&x271))<=x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x273 = 229U;
	int8_t x274 = 0;
	int64_t x275 = INT64_MIN;
	int8_t x276 = INT8_MIN;

    t68 = ((x273^(x274&x275))<=x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x277 = -1;
	int32_t x278 = -1;
	uint16_t x279 = 332U;
	int16_t x280 = INT16_MAX;
	volatile int32_t t69 = -37;

    t69 = ((x277^(x278&x279))<=x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = INT16_MAX;
	int32_t x282 = -1;
	volatile int8_t x283 = -1;
	int64_t x284 = -1LL;
	int32_t t70 = 166;

    t70 = ((x281^(x282&x283))<=x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x286 = -1;
	volatile uint32_t x288 = 24337255U;
	int32_t t71 = 500624610;

    t71 = ((x285^(x286&x287))<=x288);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x289 = -1;
	uint8_t x290 = UINT8_MAX;
	volatile int16_t x292 = INT16_MIN;
	static int32_t t72 = -466884;

    t72 = ((x289^(x290&x291))<=x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x294 = -1LL;
	int64_t x295 = -3445872295163365373LL;
	uint8_t x296 = 26U;
	volatile int32_t t73 = -56289311;

    t73 = ((x293^(x294&x295))<=x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int32_t t74 = -1148242;

    t74 = ((x297^(x298&x299))<=x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x301 = 5U;
	volatile int8_t x303 = -1;
	uint64_t x304 = 34818413644727LLU;
	volatile int32_t t75 = -1639;

    t75 = ((x301^(x302&x303))<=x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x305 = INT64_MIN;
	uint32_t x306 = UINT32_MAX;
	uint16_t x307 = UINT16_MAX;
	int64_t x308 = INT64_MAX;
	volatile int32_t t76 = 710827629;

    t76 = ((x305^(x306&x307))<=x308);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x310 = UINT64_MAX;
	static uint32_t x312 = 815343U;
	static volatile int32_t t77 = 205;

    t77 = ((x309^(x310&x311))<=x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t t78 = 3921899;

    t78 = ((x313^(x314&x315))<=x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x317 = -1;
	int16_t x319 = -1;
	int64_t x320 = INT64_MIN;
	volatile int32_t t79 = -30;

    t79 = ((x317^(x318&x319))<=x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int32_t x321 = INT32_MIN;
	int8_t x322 = 31;
	volatile int64_t x323 = 143642673895183LL;
	volatile int32_t x324 = INT32_MAX;

    t80 = ((x321^(x322&x323))<=x324);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x325 = INT8_MAX;
	int32_t x326 = INT32_MIN;
	volatile int32_t t81 = -955320;

    t81 = ((x325^(x326&x327))<=x328);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint64_t x329 = UINT64_MAX;
	int32_t x330 = 433;
	int64_t x331 = INT64_MAX;

    t82 = ((x329^(x330&x331))<=x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint8_t x333 = UINT8_MAX;
	uint16_t x335 = 5U;
	volatile int32_t t83 = -389280;

    t83 = ((x333^(x334&x335))<=x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x337 = -58;
	uint8_t x338 = 8U;
	int32_t x339 = INT32_MIN;
	int8_t x340 = INT8_MAX;
	static volatile int32_t t84 = -7539;

    t84 = ((x337^(x338&x339))<=x340);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x341 = INT32_MIN;
	int8_t x342 = INT8_MIN;
	volatile uint32_t x343 = 1U;
	volatile int32_t x344 = -1;
	int32_t t85 = -441;

    t85 = ((x341^(x342&x343))<=x344);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int8_t x345 = 4;
	static uint8_t x346 = 17U;
	static volatile int32_t t86 = 29749145;

    t86 = ((x345^(x346&x347))<=x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x349 = 2451;
	volatile uint8_t x350 = 20U;
	uint64_t x351 = 4255549159880LLU;
	volatile int32_t t87 = 1;

    t87 = ((x349^(x350&x351))<=x352);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile int32_t x354 = INT32_MAX;
	uint8_t x355 = 11U;
	int8_t x356 = INT8_MAX;
	int32_t t88 = 533077453;

    t88 = ((x353^(x354&x355))<=x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int64_t x357 = -1LL;
	int32_t x358 = 0;
	uint64_t x359 = 1362072405810LLU;

    t89 = ((x357^(x358&x359))<=x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x361 = INT16_MIN;
	int16_t x364 = -7;
	static int32_t t90 = 897;

    t90 = ((x361^(x362&x363))<=x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x366 = INT16_MAX;
	volatile int16_t x367 = 13;
	uint64_t x368 = 16093365597643026LLU;
	static int32_t t91 = 0;

    t91 = ((x365^(x366&x367))<=x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x369 = -1;
	volatile int64_t x371 = INT64_MIN;
	volatile int32_t x372 = -1;
	static volatile int32_t t92 = -79;

    t92 = ((x369^(x370&x371))<=x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static int16_t x373 = INT16_MAX;
	volatile int8_t x374 = INT8_MIN;
	int64_t x375 = INT64_MIN;
	int32_t x376 = INT32_MIN;
	static volatile int32_t t93 = -246183369;

    t93 = ((x373^(x374&x375))<=x376);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int8_t x377 = INT8_MIN;
	volatile uint64_t x378 = UINT64_MAX;
	uint16_t x379 = 59U;
	int8_t x380 = INT8_MIN;
	int32_t t94 = 957009;

    t94 = ((x377^(x378&x379))<=x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint16_t x381 = UINT16_MAX;
	volatile uint8_t x384 = UINT8_MAX;
	volatile int32_t t95 = -60;

    t95 = ((x381^(x382&x383))<=x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int64_t x385 = INT64_MIN;
	uint64_t x386 = UINT64_MAX;
	static uint32_t x387 = 3U;
	int32_t x388 = INT32_MAX;
	volatile int32_t t96 = 11679175;

    t96 = ((x385^(x386&x387))<=x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x389 = 0U;
	uint8_t x390 = 58U;
	static int64_t x391 = INT64_MIN;
	volatile uint64_t x392 = UINT64_MAX;

    t97 = ((x389^(x390&x391))<=x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile uint8_t x393 = UINT8_MAX;
	int32_t x395 = -1;
	int8_t x396 = INT8_MIN;

    t98 = ((x393^(x394&x395))<=x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x398 = INT32_MAX;
	uint32_t x399 = 783803U;
	volatile uint8_t x400 = 1U;
	static int32_t t99 = -424973;

    t99 = ((x397^(x398&x399))<=x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = INT16_MAX;
	volatile int64_t x402 = INT64_MAX;
	int64_t x403 = -42893419167808LL;
	uint64_t x404 = 775834154400694986LLU;
	volatile int32_t t100 = 78429929;

    t100 = ((x401^(x402&x403))<=x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x405 = 1LLU;
	static uint32_t x406 = 7795U;
	int8_t x407 = INT8_MIN;
	int32_t t101 = 626907183;

    t101 = ((x405^(x406&x407))<=x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int64_t x410 = -1LL;
	int64_t x411 = -1LL;
	int32_t x412 = INT32_MIN;
	int32_t t102 = 9;

    t102 = ((x409^(x410&x411))<=x412);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x413 = 8U;
	int16_t x414 = INT16_MIN;
	volatile int16_t x415 = -1;
	int32_t t103 = -109;

    t103 = ((x413^(x414&x415))<=x416);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x417 = INT16_MIN;
	int8_t x419 = INT8_MIN;
	volatile int64_t x420 = INT64_MIN;
	int32_t t104 = -14;

    t104 = ((x417^(x418&x419))<=x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int8_t x421 = INT8_MIN;
	uint8_t x422 = 102U;
	uint16_t x423 = UINT16_MAX;
	int32_t x424 = INT32_MIN;
	static int32_t t105 = 1;

    t105 = ((x421^(x422&x423))<=x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x425 = 16952LL;
	uint32_t x427 = 2585221U;
	static uint64_t x428 = 162158LLU;
	int32_t t106 = -260690520;

    t106 = ((x425^(x426&x427))<=x428);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int32_t x429 = INT32_MAX;
	static int8_t x431 = 0;
	static int64_t x432 = -94LL;
	volatile int32_t t107 = -30098;

    t107 = ((x429^(x430&x431))<=x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint64_t x433 = UINT64_MAX;
	int8_t x434 = INT8_MAX;
	volatile uint32_t x436 = UINT32_MAX;
	volatile int32_t t108 = 82122;

    t108 = ((x433^(x434&x435))<=x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x437 = INT8_MIN;
	static uint32_t x438 = 18043201U;
	int32_t x439 = 0;
	int8_t x440 = -1;
	static int32_t t109 = 56;

    t109 = ((x437^(x438&x439))<=x440);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile int16_t x442 = -62;
	int32_t t110 = -7220229;

    t110 = ((x441^(x442&x443))<=x444);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint32_t x445 = 3616U;
	int64_t x448 = INT64_MIN;
	static int32_t t111 = -32598;

    t111 = ((x445^(x446&x447))<=x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x449 = -135;
	int64_t x450 = -1LL;
	int16_t x451 = 13116;
	int64_t x452 = INT64_MIN;
	int32_t t112 = 1829412;

    t112 = ((x449^(x450&x451))<=x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x453 = INT32_MIN;
	volatile int8_t x454 = -30;
	int64_t x455 = 9480973206531658LL;
	int32_t x456 = -1037;
	volatile int32_t t113 = -3684;

    t113 = ((x453^(x454&x455))<=x456);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x457 = INT32_MIN;
	int16_t x458 = INT16_MIN;
	int64_t x459 = -2844LL;
	volatile int64_t x460 = 254129LL;
	volatile int32_t t114 = -1012;

    t114 = ((x457^(x458&x459))<=x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x461 = 181U;
	int64_t x462 = INT64_MAX;
	int64_t x463 = INT64_MIN;
	int8_t x464 = INT8_MAX;
	int32_t t115 = -1054017338;

    t115 = ((x461^(x462&x463))<=x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x467 = INT8_MIN;
	uint32_t x468 = 500799U;
	volatile int32_t t116 = 688;

    t116 = ((x465^(x466&x467))<=x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint16_t x472 = 497U;
	static int32_t t117 = -1;

    t117 = ((x469^(x470&x471))<=x472);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x473 = 1U;
	int16_t x474 = -1;
	int64_t x475 = INT64_MIN;
	static int8_t x476 = INT8_MAX;

    t118 = ((x473^(x474&x475))<=x476);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x477 = UINT64_MAX;
	int64_t x478 = INT64_MIN;
	int64_t x479 = INT64_MIN;
	volatile uint8_t x480 = UINT8_MAX;

    t119 = ((x477^(x478&x479))<=x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int64_t x481 = INT64_MAX;
	static int64_t x482 = 717951632207LL;
	int64_t x483 = INT64_MAX;
	uint16_t x484 = 24502U;
	volatile int32_t t120 = 93054;

    t120 = ((x481^(x482&x483))<=x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x485 = -22901280;
	int8_t x486 = INT8_MIN;
	int16_t x487 = 3653;
	int16_t x488 = INT16_MIN;
	int32_t t121 = 0;

    t121 = ((x485^(x486&x487))<=x488);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x490 = 6603424732586LLU;
	int16_t x491 = -212;
	int16_t x492 = 0;
	int32_t t122 = -2;

    t122 = ((x489^(x490&x491))<=x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x493 = 1U;
	uint64_t x494 = 1225947943LLU;
	int64_t x495 = INT64_MAX;
	int64_t x496 = INT64_MIN;

    t123 = ((x493^(x494&x495))<=x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x497 = UINT32_MAX;
	static uint32_t x498 = 5748U;
	int8_t x500 = INT8_MIN;
	int32_t t124 = 1;

    t124 = ((x497^(x498&x499))<=x500);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x501 = INT64_MAX;
	uint8_t x502 = 9U;
	static int32_t x503 = 4300964;
	int32_t x504 = INT32_MIN;
	static int32_t t125 = -550880706;

    t125 = ((x501^(x502&x503))<=x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x505 = INT16_MAX;
	int64_t x506 = INT64_MIN;
	uint32_t x507 = UINT32_MAX;
	static int16_t x508 = INT16_MIN;
	int32_t t126 = 1;

    t126 = ((x505^(x506&x507))<=x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x509 = INT32_MAX;
	volatile int64_t x510 = INT64_MAX;
	int64_t x511 = INT64_MIN;
	static int8_t x512 = INT8_MIN;

    t127 = ((x509^(x510&x511))<=x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x514 = 24976LLU;
	static uint8_t x515 = 4U;
	int16_t x516 = INT16_MIN;
	int32_t t128 = 968194;

    t128 = ((x513^(x514&x515))<=x516);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x517 = INT8_MAX;
	int8_t x518 = 0;
	uint64_t x519 = 498115270LLU;
	uint16_t x520 = 23U;
	volatile int32_t t129 = -12222;

    t129 = ((x517^(x518&x519))<=x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x521 = -1LL;
	volatile int16_t x522 = INT16_MIN;
	volatile int32_t x523 = INT32_MIN;
	int8_t x524 = INT8_MIN;
	int32_t t130 = 458544560;

    t130 = ((x521^(x522&x523))<=x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x525 = INT64_MIN;
	int8_t x526 = 51;
	static volatile int32_t x527 = 39;
	static int64_t x528 = INT64_MAX;

    t131 = ((x525^(x526&x527))<=x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int64_t x529 = INT64_MAX;
	int16_t x530 = INT16_MIN;
	int32_t x531 = INT32_MIN;
	uint16_t x532 = 14134U;
	volatile int32_t t132 = 14;

    t132 = ((x529^(x530&x531))<=x532);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint8_t x533 = 3U;
	volatile uint16_t x534 = 6U;
	volatile int32_t x535 = INT32_MAX;
	int16_t x536 = -38;

    t133 = ((x533^(x534&x535))<=x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x538 = INT64_MIN;
	int16_t x539 = -10;
	int8_t x540 = INT8_MAX;
	volatile int32_t t134 = 90164;

    t134 = ((x537^(x538&x539))<=x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x541 = 6;
	volatile int8_t x542 = INT8_MIN;
	uint32_t x543 = 25U;
	int32_t t135 = 1638;

    t135 = ((x541^(x542&x543))<=x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x545 = -20537;
	uint8_t x547 = 72U;
	volatile uint32_t x548 = UINT32_MAX;
	int32_t t136 = 83927;

    t136 = ((x545^(x546&x547))<=x548);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x549 = -8;
	volatile uint16_t x550 = 6U;
	static uint32_t x552 = 117U;
	volatile int32_t t137 = 0;

    t137 = ((x549^(x550&x551))<=x552);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x553 = -5847132;
	int64_t x554 = 17439094369420LL;
	uint8_t x556 = 27U;
	volatile int32_t t138 = 30;

    t138 = ((x553^(x554&x555))<=x556);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int16_t x557 = -5;
	int32_t x558 = INT32_MAX;
	static volatile uint8_t x560 = 30U;
	volatile int32_t t139 = -250;

    t139 = ((x557^(x558&x559))<=x560);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x563 = INT64_MAX;
	volatile int32_t t140 = -18;

    t140 = ((x561^(x562&x563))<=x564);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x565 = -2956;
	int64_t x566 = INT64_MAX;
	static int32_t x567 = -1;
	uint32_t x568 = 15U;

    t141 = ((x565^(x566&x567))<=x568);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x569 = -2;
	int16_t x571 = INT16_MAX;
	uint32_t x572 = 23512076U;
	static int32_t t142 = 26104109;

    t142 = ((x569^(x570&x571))<=x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint32_t x573 = 0U;
	volatile int32_t x576 = INT32_MAX;
	static volatile int32_t t143 = 29;

    t143 = ((x573^(x574&x575))<=x576);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x577 = 0LLU;
	static int64_t x578 = -1LL;
	volatile int8_t x580 = -2;

    t144 = ((x577^(x578&x579))<=x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x582 = INT8_MIN;
	uint64_t x583 = 20341107098481004LLU;
	uint16_t x584 = 168U;

    t145 = ((x581^(x582&x583))<=x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x586 = 487090;
	static uint32_t x587 = 0U;
	int16_t x588 = -1;
	volatile int32_t t146 = -4015;

    t146 = ((x585^(x586&x587))<=x588);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x589 = 3;
	uint8_t x590 = 31U;
	int8_t x591 = 0;
	uint16_t x592 = 273U;
	int32_t t147 = 308;

    t147 = ((x589^(x590&x591))<=x592);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x593 = 13U;
	volatile int64_t x594 = INT64_MIN;
	int32_t x596 = INT32_MIN;
	int32_t t148 = -255;

    t148 = ((x593^(x594&x595))<=x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x597 = -1;
	int16_t x600 = -14;

    t149 = ((x597^(x598&x599))<=x600);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x602 = INT32_MAX;
	static volatile uint16_t x603 = 15420U;
	volatile int64_t x604 = -4011431142LL;
	int32_t t150 = 3799135;

    t150 = ((x601^(x602&x603))<=x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile int64_t x605 = 246512LL;
	int8_t x606 = -1;
	int16_t x607 = INT16_MAX;
	int64_t x608 = INT64_MIN;

    t151 = ((x605^(x606&x607))<=x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint8_t x609 = UINT8_MAX;
	int16_t x610 = INT16_MIN;
	uint32_t x612 = UINT32_MAX;
	volatile int32_t t152 = -68525;

    t152 = ((x609^(x610&x611))<=x612);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x613 = UINT64_MAX;
	uint64_t x614 = UINT64_MAX;
	uint16_t x615 = 5756U;
	int32_t t153 = -1;

    t153 = ((x613^(x614&x615))<=x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x617 = INT8_MIN;
	volatile int8_t x620 = -2;
	volatile int32_t t154 = -60846022;

    t154 = ((x617^(x618&x619))<=x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x621 = 6;
	uint8_t x622 = UINT8_MAX;
	uint8_t x623 = UINT8_MAX;
	static uint64_t x624 = UINT64_MAX;
	int32_t t155 = -18327;

    t155 = ((x621^(x622&x623))<=x624);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint8_t x625 = 21U;
	int8_t x626 = -1;
	uint8_t x627 = 5U;
	static int32_t x628 = 384437;
	int32_t t156 = -116614974;

    t156 = ((x625^(x626&x627))<=x628);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x630 = 40;
	static int32_t x631 = -854638;
	int16_t x632 = -13996;
	volatile int32_t t157 = -511762912;

    t157 = ((x629^(x630&x631))<=x632);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint16_t x635 = UINT16_MAX;
	int64_t x636 = -344668LL;
	int32_t t158 = -5;

    t158 = ((x633^(x634&x635))<=x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile int8_t x637 = -1;
	static volatile int32_t x638 = INT32_MIN;
	volatile uint64_t x639 = UINT64_MAX;
	volatile int32_t t159 = 0;

    t159 = ((x637^(x638&x639))<=x640);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x641 = 1;
	uint64_t x643 = 1207LLU;
	volatile uint64_t x644 = 1LLU;
	volatile int32_t t160 = -819768;

    t160 = ((x641^(x642&x643))<=x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint8_t x645 = 2U;
	int16_t x646 = INT16_MIN;
	volatile uint8_t x647 = 23U;
	int8_t x648 = INT8_MIN;
	volatile int32_t t161 = 61295;

    t161 = ((x645^(x646&x647))<=x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x649 = 99U;
	int32_t x652 = INT32_MIN;
	volatile int32_t t162 = 172;

    t162 = ((x649^(x650&x651))<=x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x656 = 0;
	static volatile int32_t t163 = 11116;

    t163 = ((x653^(x654&x655))<=x656);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x657 = UINT8_MAX;
	static int64_t x658 = 1320LL;
	int32_t x660 = INT32_MIN;

    t164 = ((x657^(x658&x659))<=x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x661 = INT32_MIN;
	int64_t x662 = -48655277LL;
	uint8_t x664 = 97U;
	volatile int32_t t165 = 413;

    t165 = ((x661^(x662&x663))<=x664);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x665 = INT32_MIN;
	volatile int16_t x666 = INT16_MIN;
	static uint8_t x668 = 9U;
	int32_t t166 = -1;

    t166 = ((x665^(x666&x667))<=x668);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x669 = -22043;
	int32_t x670 = 2015;
	uint64_t x671 = 23366728973LLU;
	volatile int32_t t167 = 68;

    t167 = ((x669^(x670&x671))<=x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x674 = INT16_MAX;
	volatile int8_t x675 = 32;
	volatile int32_t t168 = -37465426;

    t168 = ((x673^(x674&x675))<=x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int64_t x679 = INT64_MAX;
	int64_t x680 = INT64_MIN;
	static volatile int32_t t169 = 1313806;

    t169 = ((x677^(x678&x679))<=x680);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x681 = -299072;
	uint64_t x682 = UINT64_MAX;
	uint16_t x683 = UINT16_MAX;

    t170 = ((x681^(x682&x683))<=x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x685 = 4;
	uint8_t x686 = 7U;
	volatile int8_t x687 = INT8_MIN;
	static volatile int32_t t171 = -200;

    t171 = ((x685^(x686&x687))<=x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x689 = 4022917U;
	uint8_t x690 = 1U;
	int32_t x691 = 252079;
	volatile int8_t x692 = -1;
	volatile int32_t t172 = -795204;

    t172 = ((x689^(x690&x691))<=x692);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x693 = INT64_MAX;
	int64_t x694 = 313896994LL;
	volatile int16_t x695 = INT16_MAX;
	int64_t x696 = INT64_MAX;
	int32_t t173 = 664;

    t173 = ((x693^(x694&x695))<=x696);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x697 = INT64_MAX;
	uint64_t x698 = UINT64_MAX;
	volatile uint8_t x699 = 3U;
	volatile int32_t t174 = -10984613;

    t174 = ((x697^(x698&x699))<=x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint16_t x702 = 62U;
	volatile int32_t t175 = -660787;

    t175 = ((x701^(x702&x703))<=x704);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x705 = INT8_MIN;
	volatile int64_t x706 = -1659LL;
	int32_t x707 = INT32_MIN;
	int32_t t176 = 1;

    t176 = ((x705^(x706&x707))<=x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int16_t x709 = -54;
	uint32_t x710 = UINT32_MAX;
	int64_t x712 = INT64_MIN;
	volatile int32_t t177 = 37910;

    t177 = ((x709^(x710&x711))<=x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint32_t x713 = 27569U;
	uint16_t x714 = 0U;
	static volatile int8_t x715 = -1;
	int32_t x716 = INT32_MIN;
	int32_t t178 = -54;

    t178 = ((x713^(x714&x715))<=x716);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x717 = UINT32_MAX;
	static uint8_t x718 = UINT8_MAX;
	uint64_t x719 = 8606789102775999LLU;
	volatile int32_t t179 = 0;

    t179 = ((x717^(x718&x719))<=x720);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x721 = 73U;
	volatile int8_t x722 = INT8_MIN;
	int32_t x723 = INT32_MIN;
	uint32_t x724 = UINT32_MAX;
	volatile int32_t t180 = -16013;

    t180 = ((x721^(x722&x723))<=x724);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x725 = -1;
	uint32_t x726 = 1166387231U;
	static int8_t x727 = -2;

    t181 = ((x725^(x726&x727))<=x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint64_t x730 = 433912244163LLU;
	static int16_t x731 = INT16_MIN;
	static uint8_t x732 = UINT8_MAX;
	int32_t t182 = -29;

    t182 = ((x729^(x730&x731))<=x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int32_t x733 = 7433;
	uint8_t x734 = 83U;
	int8_t x735 = -1;
	int32_t x736 = INT32_MAX;
	volatile int32_t t183 = -117361;

    t183 = ((x733^(x734&x735))<=x736);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x737 = UINT16_MAX;
	uint64_t x738 = 1858854258038088LLU;
	int16_t x739 = -1;
	static volatile int64_t x740 = INT64_MIN;
	int32_t t184 = -19;

    t184 = ((x737^(x738&x739))<=x740);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x741 = 576442039493174LLU;
	uint8_t x742 = UINT8_MAX;
	int8_t x744 = INT8_MAX;
	volatile int32_t t185 = 5;

    t185 = ((x741^(x742&x743))<=x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x745 = INT16_MIN;
	int8_t x746 = 5;
	volatile int32_t x747 = 6824;
	int32_t x748 = -1;
	volatile int32_t t186 = -1;

    t186 = ((x745^(x746&x747))<=x748);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile int16_t x751 = -5;
	int32_t t187 = 12190337;

    t187 = ((x749^(x750&x751))<=x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x753 = -1;
	int8_t x754 = INT8_MAX;
	uint64_t x755 = UINT64_MAX;
	static volatile int32_t t188 = -7357;

    t188 = ((x753^(x754&x755))<=x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int8_t x757 = INT8_MAX;
	int8_t x758 = -1;
	int8_t x759 = 0;
	int8_t x760 = 0;
	int32_t t189 = -14784041;

    t189 = ((x757^(x758&x759))<=x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x761 = 143;
	int8_t x762 = INT8_MAX;
	int8_t x763 = -1;

    t190 = ((x761^(x762&x763))<=x764);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x766 = INT32_MIN;
	volatile int16_t x768 = INT16_MIN;
	volatile int32_t t191 = -55;

    t191 = ((x765^(x766&x767))<=x768);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int32_t x769 = -1;
	int64_t x770 = INT64_MIN;
	int64_t x771 = -1LL;
	volatile int8_t x772 = 1;
	volatile int32_t t192 = 477056;

    t192 = ((x769^(x770&x771))<=x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int16_t x773 = -1;
	int32_t x774 = INT32_MIN;
	int32_t x775 = INT32_MIN;
	static volatile uint16_t x776 = UINT16_MAX;
	volatile int32_t t193 = -1;

    t193 = ((x773^(x774&x775))<=x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x777 = 118;
	static uint64_t x778 = 695473178673LLU;
	int64_t x780 = -1LL;
	int32_t t194 = 0;

    t194 = ((x777^(x778&x779))<=x780);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x782 = INT16_MIN;
	int64_t x783 = -1LL;
	volatile uint16_t x784 = 11U;
	int32_t t195 = -123648;

    t195 = ((x781^(x782&x783))<=x784);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int16_t x786 = INT16_MIN;
	uint32_t x787 = UINT32_MAX;
	int8_t x788 = INT8_MIN;
	int32_t t196 = 51172;

    t196 = ((x785^(x786&x787))<=x788);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x789 = INT8_MAX;
	volatile int32_t x791 = -1;
	int8_t x792 = -61;

    t197 = ((x789^(x790&x791))<=x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint8_t x795 = 2U;
	volatile int64_t x796 = INT64_MIN;
	static volatile int32_t t198 = 222413066;

    t198 = ((x793^(x794&x795))<=x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x797 = 5LLU;
	int8_t x798 = INT8_MIN;
	int32_t x800 = 84710090;
	volatile int32_t t199 = 0;

    t199 = ((x797^(x798&x799))<=x800);

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

