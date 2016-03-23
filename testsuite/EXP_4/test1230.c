
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

int32_t x8 = INT32_MIN;
volatile int16_t x10 = INT16_MAX;
uint32_t x14 = UINT32_MAX;
uint8_t x20 = UINT8_MAX;
volatile int32_t t3 = -463207;
int64_t t4 = -22073LL;
int64_t x28 = INT64_MIN;
volatile int64_t t5 = -20744LL;
static volatile int32_t t7 = INT32_MAX;
volatile uint32_t x40 = 3368977U;
static volatile int32_t t8 = 3170;
static volatile int32_t x45 = INT32_MIN;
int32_t x49 = INT32_MIN;
volatile int64_t x50 = -14780260681LL;
int8_t x51 = INT8_MIN;
volatile int16_t x52 = 3;
int16_t x57 = 261;
int8_t x62 = INT8_MAX;
volatile int32_t t13 = 1682487;
volatile int16_t x65 = INT16_MIN;
int64_t t16 = 3752858832LL;
int8_t x79 = INT8_MIN;
volatile int64_t x80 = INT64_MIN;
volatile uint8_t x86 = UINT8_MAX;
static uint16_t x88 = UINT16_MAX;
uint64_t x89 = UINT64_MAX;
volatile uint16_t x93 = UINT16_MAX;
int8_t x101 = -1;
volatile int32_t x102 = INT32_MIN;
volatile int32_t x103 = INT32_MIN;
int16_t x108 = 126;
static int8_t x115 = -15;
static int16_t x122 = -1;
int64_t t28 = INT64_MAX;
int16_t x126 = INT16_MAX;
uint8_t x127 = UINT8_MAX;
volatile int16_t x128 = INT16_MIN;
int8_t x131 = INT8_MIN;
volatile int64_t x132 = INT64_MAX;
int64_t t31 = 5391082LL;
int64_t x137 = 52705667513LL;
uint16_t x138 = 17995U;
static int32_t x143 = 2340921;
uint16_t x150 = 2U;
uint32_t x151 = 2226U;
int8_t x157 = -1;
int32_t x161 = 66431494;
volatile int64_t x165 = INT64_MAX;
static uint8_t x166 = UINT8_MAX;
static volatile int64_t t39 = -97991353583LL;
volatile uint8_t x174 = 71U;
int64_t x177 = -1LL;
int8_t x180 = -1;
uint8_t x182 = 50U;
static volatile int32_t t42 = 51540;
volatile int32_t x187 = -1;
volatile uint32_t x193 = 2U;
int8_t x196 = -8;
static int8_t x206 = INT8_MIN;
int32_t x217 = -7840;
int64_t x218 = -432LL;
int32_t x225 = 26014058;
int64_t x230 = 1LL;
int32_t x243 = 498;
static int64_t x244 = INT64_MIN;
volatile int16_t x246 = INT16_MAX;
int64_t x251 = -53984LL;
uint64_t x254 = 70760753325LLU;
int16_t x260 = INT16_MAX;
volatile uint8_t x261 = 16U;
int64_t x262 = -1LL;
int32_t t61 = -1230650;
volatile int32_t x269 = INT32_MAX;
uint64_t x278 = 19831543LLU;
volatile uint64_t x280 = 32570607732441LLU;
uint64_t t64 = 13487318300LLU;
static uint64_t x283 = 65096907140824LLU;
volatile int16_t x287 = 1;
volatile int8_t x295 = INT8_MIN;
uint8_t x297 = 109U;
volatile int64_t x304 = INT64_MIN;
uint16_t x308 = UINT16_MAX;
int16_t x311 = INT16_MIN;
int32_t x312 = -1;
int32_t x318 = INT32_MAX;
static int32_t x320 = -1;
int16_t x322 = INT16_MIN;
int8_t x324 = INT8_MIN;
int8_t x326 = INT8_MIN;
int64_t x329 = -1LL;
volatile int8_t x335 = INT8_MAX;
uint8_t x340 = 0U;
int32_t t80 = INT32_MAX;
volatile int64_t x345 = INT64_MIN;
int16_t x353 = INT16_MIN;
uint32_t x356 = 70U;
uint16_t x363 = 15U;
volatile int32_t t83 = -35332102;
int32_t t84 = -59672;
uint64_t x370 = UINT64_MAX;
static int16_t x382 = -1;
static uint64_t x383 = UINT64_MAX;
int32_t x384 = 1;
int8_t x385 = -1;
static int64_t x400 = INT64_MAX;
int32_t x407 = -1;
int64_t x442 = INT64_MIN;
int8_t x448 = INT8_MIN;
volatile int16_t x452 = -993;
int32_t t102 = -1;
int64_t x459 = 37718704LL;
volatile int32_t t104 = -639199131;
int64_t x461 = INT64_MAX;
int32_t x469 = INT32_MIN;
volatile uint32_t t107 = 92U;
volatile int8_t x477 = INT8_MIN;
uint8_t x486 = 44U;
volatile uint8_t x489 = UINT8_MAX;
volatile int16_t x491 = -8;
static volatile uint64_t x494 = UINT64_MAX;
int32_t x505 = -1;
uint32_t x507 = UINT32_MAX;
int8_t x511 = -1;
static int8_t x513 = -25;
int64_t x529 = INT64_MIN;
volatile uint16_t x531 = 1216U;
int8_t x540 = -6;
uint8_t x544 = UINT8_MAX;
volatile int16_t x559 = -9734;
int64_t x564 = INT64_MAX;
volatile int32_t t128 = 59;
int16_t x573 = -7978;
volatile int64_t x574 = -1LL;
volatile int64_t t129 = 5LL;
int32_t t130 = 194984272;
int64_t x583 = -12430380000043LL;
int32_t x585 = -1;
static uint32_t x590 = 3296U;
int8_t x601 = INT8_MIN;
uint8_t x606 = UINT8_MAX;
int16_t x608 = 6854;
static volatile int64_t x609 = INT64_MIN;
static volatile uint64_t x614 = 5273634LLU;
static int64_t x615 = INT64_MIN;
uint8_t x617 = UINT8_MAX;
static int16_t x619 = 25;
int64_t x623 = INT64_MAX;
uint16_t x626 = UINT16_MAX;
volatile uint8_t x632 = UINT8_MAX;
int8_t x642 = -1;
int16_t x643 = -24;
volatile int32_t t146 = -81;
volatile uint16_t x647 = UINT16_MAX;
int8_t x648 = -55;
static int16_t x651 = 16193;
uint8_t x660 = UINT8_MAX;
volatile uint32_t t151 = 1U;
int16_t x671 = -16046;
uint64_t x686 = 86LLU;
volatile int32_t x695 = 164671650;
static volatile int16_t x708 = -148;
int32_t t160 = -1;
int16_t x710 = -1;
volatile uint16_t x717 = 26943U;
uint64_t x721 = 8133275345270589LLU;
uint8_t x722 = 61U;
uint64_t t164 = 15972742293179LLU;
static int32_t t165 = INT32_MIN;
volatile int8_t x739 = INT8_MAX;
static int32_t t167 = 222581092;
int32_t x745 = 989357454;
int32_t x747 = INT32_MAX;
uint8_t x748 = 2U;
volatile int16_t x754 = -1;
int32_t x755 = INT32_MIN;
volatile int8_t x763 = INT8_MIN;
int32_t x765 = -1;
volatile int16_t x767 = 4;
volatile int32_t t174 = 961;
static int64_t x773 = 420LL;
int16_t x775 = 742;
int32_t x780 = INT32_MIN;
int64_t x784 = -579572995260LL;
uint64_t t179 = 993LLU;
static int16_t x793 = INT16_MIN;
static int8_t x794 = 1;
static uint16_t x796 = UINT16_MAX;
volatile uint32_t x799 = 493131611U;
int32_t x803 = 15957;
int8_t x806 = 37;
static int32_t x807 = INT32_MIN;
static int16_t x809 = -1;
static int64_t x819 = INT64_MIN;
uint32_t x820 = 6U;
int64_t x823 = INT64_MAX;
int32_t x829 = 1004283603;
int16_t x830 = INT16_MIN;
volatile int32_t t190 = -64;
volatile uint64_t x838 = 99402959LLU;
static int64_t x839 = INT64_MIN;
int32_t x841 = 54963;
uint8_t x842 = 66U;
static int64_t x856 = INT64_MIN;
int64_t x858 = INT64_MIN;
int64_t x867 = -1LL;


void f0(void) {
    	int8_t x5 = -1;
	int8_t x6 = -1;
	uint8_t x7 = 1U;
	volatile int32_t t0 = 207641;

    t0 = (x5&(x6/(x7!=x8)));

    if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x9 = 802111U;
	int8_t x11 = -1;
	static volatile int64_t x12 = -3210914LL;
	uint32_t t1 = 157618955U;

    t1 = (x9&(x10/(x11!=x12)));

    if (t1 != 15679U) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x13 = -1;
	int32_t x15 = INT32_MAX;
	uint8_t x16 = 3U;
	volatile uint32_t t2 = UINT32_MAX;

    t2 = (x13&(x14/(x15!=x16)));

    if (t2 != UINT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x17 = INT32_MAX;
	int32_t x18 = -351399481;
	uint16_t x19 = 142U;

    t3 = (x17&(x18/(x19!=x20)));

    if (t3 != 1796084167) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x21 = INT8_MIN;
	int64_t x22 = -1712LL;
	int32_t x23 = -5624;
	int8_t x24 = -3;

    t4 = (x21&(x22/(x23!=x24)));

    if (t4 != -1792LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x25 = 247353;
	int64_t x26 = 3886616963595572LL;
	int64_t x27 = -4256394119644LL;

    t5 = (x25&(x26/(x27!=x28)));

    if (t5 != 132144LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x29 = 1;
	int32_t x30 = INT32_MIN;
	int64_t x31 = -1LL;
	int16_t x32 = 1;
	int32_t t6 = 181833494;

    t6 = (x29&(x30/(x31!=x32)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x33 = -1;
	static int32_t x34 = INT32_MAX;
	static int16_t x35 = -1;
	int16_t x36 = -2079;

    t7 = (x33&(x34/(x35!=x36)));

    if (t7 != INT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x37 = INT32_MAX;
	int8_t x38 = 0;
	int8_t x39 = -1;

    t8 = (x37&(x38/(x39!=x40)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint32_t x46 = 0U;
	volatile int16_t x47 = INT16_MAX;
	int64_t x48 = INT64_MIN;
	uint32_t t9 = 1636892907U;

    t9 = (x45&(x46/(x47!=x48)));

    if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t t10 = 170211554164993LL;

    t10 = (x49&(x50/(x51!=x52)));

    if (t10 != -15032385536LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint16_t x53 = 1468U;
	int64_t x54 = INT64_MAX;
	uint8_t x55 = 1U;
	int64_t x56 = -1LL;
	int64_t t11 = -2968439965LL;

    t11 = (x53&(x54/(x55!=x56)));

    if (t11 != 1468LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x58 = INT16_MIN;
	uint32_t x59 = 23110299U;
	volatile int8_t x60 = 62;
	volatile int32_t t12 = 0;

    t12 = (x57&(x58/(x59!=x60)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint16_t x61 = 3195U;
	volatile int8_t x63 = INT8_MIN;
	volatile int16_t x64 = INT16_MIN;

    t13 = (x61&(x62/(x63!=x64)));

    if (t13 != 123) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x66 = 4LLU;
	volatile int32_t x67 = INT32_MIN;
	volatile uint8_t x68 = UINT8_MAX;
	volatile uint64_t t14 = 18211321194775LLU;

    t14 = (x65&(x66/(x67!=x68)));

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint16_t x69 = UINT16_MAX;
	volatile int8_t x70 = -1;
	uint8_t x71 = 2U;
	int32_t x72 = INT32_MIN;
	int32_t t15 = 2;

    t15 = (x69&(x70/(x71!=x72)));

    if (t15 != 65535) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x73 = -1LL;
	volatile uint16_t x74 = UINT16_MAX;
	volatile int16_t x75 = -1;
	int16_t x76 = 413;

    t16 = (x73&(x74/(x75!=x76)));

    if (t16 != 65535LL) { NG(); } else { ; }
	
}

void f17(void) {
    	static int32_t x77 = -1;
	static volatile uint32_t x78 = 14301822U;
	uint32_t t17 = 175241470U;

    t17 = (x77&(x78/(x79!=x80)));

    if (t17 != 14301822U) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int64_t x81 = INT64_MIN;
	int16_t x82 = INT16_MIN;
	static int32_t x83 = INT32_MIN;
	int64_t x84 = INT64_MIN;
	volatile int64_t t18 = INT64_MIN;

    t18 = (x81&(x82/(x83!=x84)));

    if (t18 != INT64_MIN) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x85 = INT32_MIN;
	int64_t x87 = INT64_MIN;
	static volatile int32_t t19 = -441704728;

    t19 = (x85&(x86/(x87!=x88)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint8_t x90 = UINT8_MAX;
	int8_t x91 = -2;
	int64_t x92 = INT64_MIN;
	uint64_t t20 = 28711691085LLU;

    t20 = (x89&(x90/(x91!=x92)));

    if (t20 != 255LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint32_t x94 = 0U;
	static volatile uint16_t x95 = UINT16_MAX;
	volatile int32_t x96 = -2999;
	volatile uint32_t t21 = 8129360U;

    t21 = (x93&(x94/(x95!=x96)));

    if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x97 = 42;
	int16_t x98 = INT16_MIN;
	int8_t x99 = INT8_MIN;
	int8_t x100 = 4;
	volatile int32_t t22 = 1;

    t22 = (x97&(x98/(x99!=x100)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x104 = 1813U;
	int32_t t23 = INT32_MIN;

    t23 = (x101&(x102/(x103!=x104)));

    if (t23 != INT32_MIN) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x105 = 4;
	int16_t x106 = INT16_MIN;
	int16_t x107 = -1;
	volatile int32_t t24 = -18698;

    t24 = (x105&(x106/(x107!=x108)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x109 = INT64_MIN;
	uint64_t x110 = 3098631LLU;
	int32_t x111 = -1;
	uint32_t x112 = 5407U;
	volatile uint64_t t25 = 915747619684922326LLU;

    t25 = (x109&(x110/(x111!=x112)));

    if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x113 = -1;
	int8_t x114 = INT8_MIN;
	volatile int8_t x116 = 8;
	static volatile int32_t t26 = -205181594;

    t26 = (x113&(x114/(x115!=x116)));

    if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x117 = INT64_MAX;
	int64_t x118 = INT64_MAX;
	uint8_t x119 = UINT8_MAX;
	int32_t x120 = INT32_MAX;
	volatile int64_t t27 = INT64_MAX;

    t27 = (x117&(x118/(x119!=x120)));

    if (t27 != INT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x121 = INT64_MAX;
	int64_t x123 = INT64_MAX;
	volatile int64_t x124 = INT64_MIN;

    t28 = (x121&(x122/(x123!=x124)));

    if (t28 != INT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint8_t x125 = 31U;
	static int32_t t29 = -123437004;

    t29 = (x125&(x126/(x127!=x128)));

    if (t29 != 31) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int32_t x129 = -1590170;
	volatile int16_t x130 = 0;
	volatile int32_t t30 = 238;

    t30 = (x129&(x130/(x131!=x132)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int8_t x133 = INT8_MIN;
	int64_t x134 = -1LL;
	static uint32_t x135 = 32339U;
	int8_t x136 = INT8_MIN;

    t31 = (x133&(x134/(x135!=x136)));

    if (t31 != -128LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x139 = -203685;
	volatile int16_t x140 = -1;
	volatile int64_t t32 = 1816879219LL;

    t32 = (x137&(x138/(x139!=x140)));

    if (t32 != 9LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint32_t x141 = 1472U;
	int16_t x142 = INT16_MIN;
	int64_t x144 = 6LL;
	volatile uint32_t t33 = 13833168U;

    t33 = (x141&(x142/(x143!=x144)));

    if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint32_t x145 = 685907U;
	static uint8_t x146 = UINT8_MAX;
	uint64_t x147 = 132353LLU;
	static volatile int64_t x148 = 1390940LL;
	static uint32_t t34 = 341665U;

    t34 = (x145&(x146/(x147!=x148)));

    if (t34 != 83U) { NG(); } else { ; }
	
}

void f35(void) {
    	static int64_t x149 = 3238686LL;
	int64_t x152 = INT64_MIN;
	volatile int64_t t35 = 44339377346293LL;

    t35 = (x149&(x150/(x151!=x152)));

    if (t35 != 2LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x153 = -1;
	int32_t x154 = INT32_MIN;
	uint32_t x155 = 1U;
	uint64_t x156 = UINT64_MAX;
	static int32_t t36 = INT32_MIN;

    t36 = (x153&(x154/(x155!=x156)));

    if (t36 != INT32_MIN) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x158 = UINT16_MAX;
	int32_t x159 = 368496;
	int64_t x160 = 2520297312849LL;
	int32_t t37 = -2949485;

    t37 = (x157&(x158/(x159!=x160)));

    if (t37 != 65535) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x162 = 1810530LLU;
	int8_t x163 = 0;
	uint32_t x164 = UINT32_MAX;
	static uint64_t t38 = 202325680530868541LLU;

    t38 = (x161&(x162/(x163!=x164)));

    if (t38 != 1155074LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x167 = UINT8_MAX;
	int32_t x168 = INT32_MIN;

    t39 = (x165&(x166/(x167!=x168)));

    if (t39 != 255LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x173 = INT32_MIN;
	static int16_t x175 = INT16_MIN;
	int64_t x176 = INT64_MIN;
	int32_t t40 = -2509;

    t40 = (x173&(x174/(x175!=x176)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x178 = INT8_MIN;
	static int8_t x179 = INT8_MAX;
	static volatile int64_t t41 = -30790167836549283LL;

    t41 = (x177&(x178/(x179!=x180)));

    if (t41 != -128LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile uint8_t x181 = 4U;
	uint8_t x183 = 0U;
	int16_t x184 = INT16_MAX;

    t42 = (x181&(x182/(x183!=x184)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x185 = UINT64_MAX;
	static volatile int8_t x186 = -3;
	int16_t x188 = 153;
	volatile uint64_t t43 = 2051LLU;

    t43 = (x185&(x186/(x187!=x188)));

    if (t43 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x189 = 2U;
	int16_t x190 = 58;
	int16_t x191 = -1;
	int64_t x192 = INT64_MAX;
	static volatile int32_t t44 = 2643;

    t44 = (x189&(x190/(x191!=x192)));

    if (t44 != 2) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int16_t x194 = 1;
	static uint8_t x195 = UINT8_MAX;
	volatile uint32_t t45 = 1932U;

    t45 = (x193&(x194/(x195!=x196)));

    if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x205 = -261;
	static int8_t x207 = INT8_MIN;
	int16_t x208 = INT16_MAX;
	volatile int32_t t46 = -407963;

    t46 = (x205&(x206/(x207!=x208)));

    if (t46 != -384) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x209 = INT16_MIN;
	uint16_t x210 = 257U;
	uint16_t x211 = 136U;
	int16_t x212 = -3;
	int32_t t47 = -4638;

    t47 = (x209&(x210/(x211!=x212)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x213 = INT8_MIN;
	int8_t x214 = 0;
	uint8_t x215 = UINT8_MAX;
	int32_t x216 = -1;
	static volatile int32_t t48 = 2360;

    t48 = (x213&(x214/(x215!=x216)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int8_t x219 = INT8_MIN;
	int32_t x220 = -44;
	volatile int64_t t49 = -394860LL;

    t49 = (x217&(x218/(x219!=x220)));

    if (t49 != -8128LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x221 = INT64_MAX;
	volatile int32_t x222 = INT32_MAX;
	int64_t x223 = INT64_MIN;
	int16_t x224 = 12;
	static volatile int64_t t50 = -7067622053LL;

    t50 = (x221&(x222/(x223!=x224)));

    if (t50 != 2147483647LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x226 = UINT64_MAX;
	volatile int32_t x227 = 6;
	volatile int16_t x228 = -1;
	uint64_t t51 = 154812892679LLU;

    t51 = (x225&(x226/(x227!=x228)));

    if (t51 != 26014058LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	static int32_t x229 = INT32_MAX;
	int8_t x231 = INT8_MIN;
	static int64_t x232 = -2668324328LL;
	static volatile int64_t t52 = -7410233355419604LL;

    t52 = (x229&(x230/(x231!=x232)));

    if (t52 != 1LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x233 = UINT32_MAX;
	int64_t x234 = -57133086481296LL;
	uint16_t x235 = 15U;
	int16_t x236 = -1;
	static int64_t t53 = -32940980LL;

    t53 = (x233&(x234/(x235!=x236)));

    if (t53 != 2863457392LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x237 = -1;
	int32_t x238 = INT32_MAX;
	int64_t x239 = -138629602763021838LL;
	static volatile int16_t x240 = -1;
	int32_t t54 = INT32_MAX;

    t54 = (x237&(x238/(x239!=x240)));

    if (t54 != INT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int32_t x241 = INT32_MIN;
	static uint64_t x242 = 275972742994588888LLU;
	volatile uint64_t t55 = 219173LLU;

    t55 = (x241&(x242/(x243!=x244)));

    if (t55 != 275972741352390656LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x245 = -1LL;
	uint16_t x247 = 1441U;
	int16_t x248 = -4;
	int64_t t56 = -28618031590242797LL;

    t56 = (x245&(x246/(x247!=x248)));

    if (t56 != 32767LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x249 = UINT32_MAX;
	uint64_t x250 = 308000167LLU;
	volatile int64_t x252 = INT64_MIN;
	static uint64_t t57 = 16733580324LLU;

    t57 = (x249&(x250/(x251!=x252)));

    if (t57 != 308000167LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile int8_t x253 = 24;
	static int8_t x255 = INT8_MAX;
	uint32_t x256 = 2029U;
	uint64_t t58 = 30887LLU;

    t58 = (x253&(x254/(x255!=x256)));

    if (t58 != 8LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint8_t x257 = 0U;
	int64_t x258 = INT64_MIN;
	static int64_t x259 = 11LL;
	int64_t t59 = -108088799935401LL;

    t59 = (x257&(x258/(x259!=x260)));

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x263 = INT32_MIN;
	int32_t x264 = -1;
	static volatile int64_t t60 = -11LL;

    t60 = (x261&(x262/(x263!=x264)));

    if (t60 != 16LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x265 = -9;
	static int32_t x266 = INT32_MAX;
	int16_t x267 = -1;
	static volatile uint16_t x268 = 19731U;

    t61 = (x265&(x266/(x267!=x268)));

    if (t61 != 2147483639) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x270 = INT8_MAX;
	volatile int32_t x271 = INT32_MIN;
	uint64_t x272 = 3232733631LLU;
	volatile int32_t t62 = -511289;

    t62 = (x269&(x270/(x271!=x272)));

    if (t62 != 127) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint8_t x273 = 22U;
	int32_t x274 = 53410;
	uint8_t x275 = UINT8_MAX;
	int16_t x276 = 1949;
	int32_t t63 = -3361;

    t63 = (x273&(x274/(x275!=x276)));

    if (t63 != 2) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x277 = 249924;
	int64_t x279 = -598LL;

    t64 = (x277&(x278/(x279!=x280)));

    if (t64 != 168004LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x281 = 15LL;
	int32_t x282 = INT32_MAX;
	int8_t x284 = 1;
	int64_t t65 = -491669792LL;

    t65 = (x281&(x282/(x283!=x284)));

    if (t65 != 15LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x285 = UINT16_MAX;
	static uint16_t x286 = 1U;
	int8_t x288 = 0;
	volatile int32_t t66 = -3526658;

    t66 = (x285&(x286/(x287!=x288)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x289 = UINT64_MAX;
	int8_t x290 = 12;
	int32_t x291 = INT32_MIN;
	static int8_t x292 = 3;
	uint64_t t67 = 5LLU;

    t67 = (x289&(x290/(x291!=x292)));

    if (t67 != 12LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile int8_t x293 = INT8_MIN;
	static uint8_t x294 = 6U;
	int64_t x296 = INT64_MIN;
	static int32_t t68 = -447;

    t68 = (x293&(x294/(x295!=x296)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x298 = INT16_MIN;
	uint32_t x299 = 7454U;
	static uint32_t x300 = UINT32_MAX;
	static volatile int32_t t69 = -58669669;

    t69 = (x297&(x298/(x299!=x300)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x301 = UINT32_MAX;
	volatile uint16_t x302 = 12937U;
	uint64_t x303 = 456063387615825139LLU;
	volatile uint32_t t70 = 1678675U;

    t70 = (x301&(x302/(x303!=x304)));

    if (t70 != 12937U) { NG(); } else { ; }
	
}

void f71(void) {
    	static int64_t x305 = INT64_MIN;
	uint16_t x306 = UINT16_MAX;
	static int64_t x307 = 104551LL;
	int64_t t71 = 1LL;

    t71 = (x305&(x306/(x307!=x308)));

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x309 = -825942423686836LL;
	int8_t x310 = 16;
	int64_t t72 = -139551358910082371LL;

    t72 = (x309&(x310/(x311!=x312)));

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x313 = -1;
	int32_t x314 = INT32_MIN;
	int8_t x315 = -1;
	int32_t x316 = 415792;
	static volatile int32_t t73 = INT32_MIN;

    t73 = (x313&(x314/(x315!=x316)));

    if (t73 != INT32_MIN) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint16_t x317 = 2U;
	int8_t x319 = 8;
	volatile int32_t t74 = 115506;

    t74 = (x317&(x318/(x319!=x320)));

    if (t74 != 2) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x321 = INT64_MAX;
	uint64_t x323 = UINT64_MAX;
	volatile int64_t t75 = -115416694852670464LL;

    t75 = (x321&(x322/(x323!=x324)));

    if (t75 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x325 = INT16_MAX;
	int32_t x327 = INT32_MAX;
	int16_t x328 = -1079;
	volatile int32_t t76 = 1;

    t76 = (x325&(x326/(x327!=x328)));

    if (t76 != 32640) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int16_t x330 = INT16_MAX;
	volatile int64_t x331 = INT64_MAX;
	static int8_t x332 = INT8_MAX;
	volatile int64_t t77 = 24573641163LL;

    t77 = (x329&(x330/(x331!=x332)));

    if (t77 != 32767LL) { NG(); } else { ; }
	
}

void f78(void) {
    	static int64_t x333 = INT64_MAX;
	int16_t x334 = -1576;
	int16_t x336 = INT16_MIN;
	int64_t t78 = 1LL;

    t78 = (x333&(x334/(x335!=x336)));

    if (t78 != 9223372036854774232LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x337 = -1;
	volatile int32_t x338 = INT32_MAX;
	uint16_t x339 = 5149U;
	volatile int32_t t79 = INT32_MAX;

    t79 = (x337&(x338/(x339!=x340)));

    if (t79 != INT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x341 = INT32_MAX;
	static volatile int16_t x342 = -1;
	int16_t x343 = INT16_MAX;
	static volatile int16_t x344 = -1;

    t80 = (x341&(x342/(x343!=x344)));

    if (t80 != INT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
    	static int8_t x346 = INT8_MIN;
	uint64_t x347 = 17269575LLU;
	int8_t x348 = INT8_MAX;
	volatile int64_t t81 = INT64_MIN;

    t81 = (x345&(x346/(x347!=x348)));

    if (t81 != INT64_MIN) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint8_t x354 = UINT8_MAX;
	volatile int16_t x355 = INT16_MAX;
	volatile int32_t t82 = -6;

    t82 = (x353&(x354/(x355!=x356)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x361 = UINT8_MAX;
	int32_t x362 = -1;
	int64_t x364 = INT64_MAX;

    t83 = (x361&(x362/(x363!=x364)));

    if (t83 != 255) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x365 = INT16_MIN;
	static int8_t x366 = INT8_MIN;
	int64_t x367 = -1LL;
	uint8_t x368 = UINT8_MAX;

    t84 = (x365&(x366/(x367!=x368)));

    if (t84 != -32768) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x369 = INT16_MIN;
	static int32_t x371 = INT32_MIN;
	int64_t x372 = -1LL;
	static volatile uint64_t t85 = 2695652LLU;

    t85 = (x369&(x370/(x371!=x372)));

    if (t85 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int32_t x373 = -155953;
	static uint8_t x374 = 0U;
	volatile uint32_t x375 = 8397604U;
	uint64_t x376 = UINT64_MAX;
	int32_t t86 = 190;

    t86 = (x373&(x374/(x375!=x376)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x381 = 88121LLU;
	uint64_t t87 = 4144LLU;

    t87 = (x381&(x382/(x383!=x384)));

    if (t87 != 88121LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x386 = 3665;
	uint32_t x387 = UINT32_MAX;
	static uint8_t x388 = 124U;
	static volatile int32_t t88 = 1;

    t88 = (x385&(x386/(x387!=x388)));

    if (t88 != 3665) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x389 = INT8_MIN;
	int64_t x390 = -16619152LL;
	int8_t x391 = 5;
	uint8_t x392 = 14U;
	int64_t t89 = 3159203490511847393LL;

    t89 = (x389&(x390/(x391!=x392)));

    if (t89 != -16619264LL) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint16_t x393 = 15U;
	volatile uint16_t x394 = UINT16_MAX;
	static uint16_t x395 = 2703U;
	int8_t x396 = INT8_MIN;
	volatile int32_t t90 = 449153213;

    t90 = (x393&(x394/(x395!=x396)));

    if (t90 != 15) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x397 = 250012898;
	int32_t x398 = 688;
	volatile uint32_t x399 = 29862523U;
	volatile int32_t t91 = -1;

    t91 = (x397&(x398/(x399!=x400)));

    if (t91 != 160) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x401 = UINT64_MAX;
	volatile int16_t x402 = INT16_MIN;
	int64_t x403 = -1LL;
	static int8_t x404 = -7;
	static uint64_t t92 = 41LLU;

    t92 = (x401&(x402/(x403!=x404)));

    if (t92 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x405 = 2742U;
	volatile uint64_t x406 = 3326LLU;
	uint16_t x408 = 20U;
	volatile uint64_t t93 = 486748631LLU;

    t93 = (x405&(x406/(x407!=x408)));

    if (t93 != 2230LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x413 = 66U;
	uint32_t x414 = 7U;
	static int32_t x415 = -27234;
	int64_t x416 = INT64_MIN;
	uint32_t t94 = 41U;

    t94 = (x413&(x414/(x415!=x416)));

    if (t94 != 2U) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x417 = INT8_MIN;
	uint32_t x418 = 359189673U;
	static volatile uint64_t x419 = UINT64_MAX;
	int8_t x420 = INT8_MAX;
	volatile uint32_t t95 = 1131U;

    t95 = (x417&(x418/(x419!=x420)));

    if (t95 != 359189632U) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x421 = -8;
	int64_t x422 = INT64_MIN;
	volatile uint16_t x423 = 1784U;
	int16_t x424 = INT16_MIN;
	int64_t t96 = INT64_MIN;

    t96 = (x421&(x422/(x423!=x424)));

    if (t96 != INT64_MIN) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x425 = INT16_MIN;
	int8_t x426 = INT8_MAX;
	int16_t x427 = INT16_MIN;
	int64_t x428 = INT64_MIN;
	int32_t t97 = -780;

    t97 = (x425&(x426/(x427!=x428)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint32_t x433 = 2740U;
	int16_t x434 = INT16_MIN;
	uint8_t x435 = 126U;
	uint8_t x436 = UINT8_MAX;
	uint32_t t98 = 268465751U;

    t98 = (x433&(x434/(x435!=x436)));

    if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int8_t x437 = INT8_MIN;
	uint32_t x438 = UINT32_MAX;
	int16_t x439 = INT16_MIN;
	int16_t x440 = INT16_MAX;
	volatile uint32_t t99 = 78883677U;

    t99 = (x437&(x438/(x439!=x440)));

    if (t99 != 4294967168U) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x441 = INT16_MIN;
	int16_t x443 = INT16_MIN;
	int8_t x444 = INT8_MAX;
	volatile int64_t t100 = INT64_MIN;

    t100 = (x441&(x442/(x443!=x444)));

    if (t100 != INT64_MIN) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x445 = 542682043868150LL;
	int64_t x446 = INT64_MIN;
	int64_t x447 = -454203026616163LL;
	int64_t t101 = -408861LL;

    t101 = (x445&(x446/(x447!=x448)));

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x449 = 6U;
	uint16_t x450 = UINT16_MAX;
	int8_t x451 = INT8_MIN;

    t102 = (x449&(x450/(x451!=x452)));

    if (t102 != 6) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x453 = INT8_MIN;
	int8_t x454 = INT8_MIN;
	uint32_t x455 = UINT32_MAX;
	int64_t x456 = -1LL;
	volatile int32_t t103 = -35;

    t103 = (x453&(x454/(x455!=x456)));

    if (t103 != -128) { NG(); } else { ; }
	
}

void f104(void) {
    	static int16_t x457 = 0;
	uint8_t x458 = 10U;
	int32_t x460 = INT32_MAX;

    t104 = (x457&(x458/(x459!=x460)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x462 = 168U;
	int8_t x463 = INT8_MIN;
	int64_t x464 = 758LL;
	static volatile int64_t t105 = 468123432700016938LL;

    t105 = (x461&(x462/(x463!=x464)));

    if (t105 != 168LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x465 = INT32_MIN;
	int64_t x466 = 171479555LL;
	static volatile int64_t x467 = -1LL;
	uint16_t x468 = 100U;
	int64_t t106 = 344816929093LL;

    t106 = (x465&(x466/(x467!=x468)));

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint32_t x470 = 332744293U;
	static int64_t x471 = INT64_MIN;
	int16_t x472 = INT16_MIN;

    t107 = (x469&(x470/(x471!=x472)));

    if (t107 != 0U) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile uint16_t x473 = 98U;
	int32_t x474 = 6299;
	int16_t x475 = INT16_MIN;
	int8_t x476 = INT8_MAX;
	static volatile int32_t t108 = -1089219;

    t108 = (x473&(x474/(x475!=x476)));

    if (t108 != 2) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x478 = -8;
	static uint16_t x479 = 16107U;
	int64_t x480 = -1LL;
	volatile int32_t t109 = 257464931;

    t109 = (x477&(x478/(x479!=x480)));

    if (t109 != -128) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x481 = INT64_MAX;
	int8_t x482 = -1;
	int64_t x483 = -2LL;
	int32_t x484 = 3942;
	volatile int64_t t110 = INT64_MAX;

    t110 = (x481&(x482/(x483!=x484)));

    if (t110 != INT64_MAX) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x485 = -1LL;
	static volatile int16_t x487 = INT16_MIN;
	int8_t x488 = INT8_MAX;
	static int64_t t111 = 354LL;

    t111 = (x485&(x486/(x487!=x488)));

    if (t111 != 44LL) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint32_t x490 = 292741575U;
	static int64_t x492 = INT64_MAX;
	volatile uint32_t t112 = 78936621U;

    t112 = (x489&(x490/(x491!=x492)));

    if (t112 != 199U) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x493 = INT16_MIN;
	volatile int8_t x495 = INT8_MIN;
	int8_t x496 = 1;
	volatile uint64_t t113 = 281935LLU;

    t113 = (x493&(x494/(x495!=x496)));

    if (t113 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x501 = INT16_MIN;
	int32_t x502 = INT32_MIN;
	int32_t x503 = -218;
	static volatile int16_t x504 = 1818;
	static volatile int32_t t114 = INT32_MIN;

    t114 = (x501&(x502/(x503!=x504)));

    if (t114 != INT32_MIN) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x506 = 1805U;
	static uint64_t x508 = UINT64_MAX;
	int32_t t115 = -363339426;

    t115 = (x505&(x506/(x507!=x508)));

    if (t115 != 1805) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x509 = -1;
	uint32_t x510 = 1U;
	uint32_t x512 = 606598U;
	uint32_t t116 = 13U;

    t116 = (x509&(x510/(x511!=x512)));

    if (t116 != 1U) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x514 = UINT64_MAX;
	uint8_t x515 = UINT8_MAX;
	uint16_t x516 = 1881U;
	static volatile uint64_t t117 = 483LLU;

    t117 = (x513&(x514/(x515!=x516)));

    if (t117 != 18446744073709551591LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x525 = -19;
	static uint64_t x526 = UINT64_MAX;
	int8_t x527 = 1;
	int64_t x528 = INT64_MAX;
	static uint64_t t118 = 1312777LLU;

    t118 = (x525&(x526/(x527!=x528)));

    if (t118 != 18446744073709551597LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x530 = UINT64_MAX;
	int64_t x532 = INT64_MIN;
	volatile uint64_t t119 = 8234592860329LLU;

    t119 = (x529&(x530/(x531!=x532)));

    if (t119 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int32_t x533 = INT32_MAX;
	static uint8_t x534 = 0U;
	int8_t x535 = INT8_MIN;
	volatile uint16_t x536 = 2075U;
	int32_t t120 = 3388;

    t120 = (x533&(x534/(x535!=x536)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x537 = INT64_MAX;
	int64_t x538 = INT64_MAX;
	volatile int16_t x539 = -21;
	int64_t t121 = INT64_MAX;

    t121 = (x537&(x538/(x539!=x540)));

    if (t121 != INT64_MAX) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint16_t x541 = 14899U;
	volatile int32_t x542 = -713677;
	int64_t x543 = -35LL;
	int32_t t122 = -375866903;

    t122 = (x541&(x542/(x543!=x544)));

    if (t122 != 6195) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x545 = 529U;
	uint32_t x546 = UINT32_MAX;
	int16_t x547 = INT16_MIN;
	int32_t x548 = INT32_MIN;
	volatile uint32_t t123 = 1U;

    t123 = (x545&(x546/(x547!=x548)));

    if (t123 != 529U) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x549 = 3441861891402346801LLU;
	uint64_t x550 = 9147609803781LLU;
	int16_t x551 = -45;
	int64_t x552 = INT64_MIN;
	volatile uint64_t t124 = 1803091134948LLU;

    t124 = (x549&(x550/(x551!=x552)));

    if (t124 != 6577201153LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x553 = -1;
	volatile int16_t x554 = INT16_MIN;
	int64_t x555 = 26623398LL;
	int64_t x556 = -2587748411102180LL;
	int32_t t125 = -184898839;

    t125 = (x553&(x554/(x555!=x556)));

    if (t125 != -32768) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int64_t x557 = -1LL;
	int64_t x558 = INT64_MIN;
	int64_t x560 = INT64_MIN;
	int64_t t126 = INT64_MIN;

    t126 = (x557&(x558/(x559!=x560)));

    if (t126 != INT64_MIN) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x561 = INT16_MIN;
	int64_t x562 = INT64_MIN;
	static int16_t x563 = INT16_MAX;
	volatile int64_t t127 = INT64_MIN;

    t127 = (x561&(x562/(x563!=x564)));

    if (t127 != INT64_MIN) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x565 = INT32_MAX;
	volatile int16_t x566 = INT16_MIN;
	int32_t x567 = -1608;
	volatile uint8_t x568 = 38U;

    t128 = (x565&(x566/(x567!=x568)));

    if (t128 != 2147450880) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x575 = -1;
	uint64_t x576 = 3420545641LLU;

    t129 = (x573&(x574/(x575!=x576)));

    if (t129 != -7978LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x577 = 0U;
	uint8_t x578 = 1U;
	uint32_t x579 = UINT32_MAX;
	uint64_t x580 = UINT64_MAX;

    t130 = (x577&(x578/(x579!=x580)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x581 = 1U;
	int64_t x582 = INT64_MIN;
	static volatile int32_t x584 = INT32_MIN;
	static int64_t t131 = -8456319542522LL;

    t131 = (x581&(x582/(x583!=x584)));

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x586 = -1;
	int8_t x587 = INT8_MIN;
	int64_t x588 = INT64_MIN;
	volatile int32_t t132 = 7961515;

    t132 = (x585&(x586/(x587!=x588)));

    if (t132 != -1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x589 = INT16_MAX;
	static int16_t x591 = INT16_MIN;
	int16_t x592 = 7;
	volatile uint32_t t133 = 13U;

    t133 = (x589&(x590/(x591!=x592)));

    if (t133 != 3296U) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x593 = INT64_MIN;
	static int64_t x594 = -1LL;
	int16_t x595 = INT16_MIN;
	static volatile int16_t x596 = 2;
	int64_t t134 = INT64_MIN;

    t134 = (x593&(x594/(x595!=x596)));

    if (t134 != INT64_MIN) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x597 = INT8_MAX;
	int64_t x598 = INT64_MIN;
	int64_t x599 = INT64_MIN;
	int8_t x600 = 6;
	static int64_t t135 = -5398LL;

    t135 = (x597&(x598/(x599!=x600)));

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int32_t x602 = 6939258;
	static int8_t x603 = INT8_MIN;
	uint32_t x604 = 162U;
	volatile int32_t t136 = -28366255;

    t136 = (x601&(x602/(x603!=x604)));

    if (t136 != 6939136) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x605 = -5694650;
	volatile int32_t x607 = INT32_MIN;
	volatile int32_t t137 = -22936737;

    t137 = (x605&(x606/(x607!=x608)));

    if (t137 != 70) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x610 = -1;
	int32_t x611 = INT32_MIN;
	int16_t x612 = INT16_MAX;
	int64_t t138 = INT64_MIN;

    t138 = (x609&(x610/(x611!=x612)));

    if (t138 != INT64_MIN) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x613 = INT64_MAX;
	int8_t x616 = 1;
	static volatile uint64_t t139 = 2276159315LLU;

    t139 = (x613&(x614/(x615!=x616)));

    if (t139 != 5273634LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x618 = 6423U;
	uint32_t x620 = 1660371399U;
	volatile int32_t t140 = -13184899;

    t140 = (x617&(x618/(x619!=x620)));

    if (t140 != 23) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile int8_t x621 = -1;
	int32_t x622 = 55;
	int16_t x624 = -1;
	volatile int32_t t141 = 3462809;

    t141 = (x621&(x622/(x623!=x624)));

    if (t141 != 55) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint32_t x625 = 2U;
	int64_t x627 = INT64_MAX;
	uint8_t x628 = 1U;
	uint32_t t142 = 82U;

    t142 = (x625&(x626/(x627!=x628)));

    if (t142 != 2U) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile uint64_t x629 = 1990912898394LLU;
	uint32_t x630 = 16U;
	int8_t x631 = INT8_MAX;
	uint64_t t143 = 1LLU;

    t143 = (x629&(x630/(x631!=x632)));

    if (t143 != 16LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x633 = INT32_MIN;
	int8_t x634 = -20;
	int16_t x635 = 0;
	uint64_t x636 = 35079269366610051LLU;
	int32_t t144 = INT32_MIN;

    t144 = (x633&(x634/(x635!=x636)));

    if (t144 != INT32_MIN) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint64_t x637 = 1002493027LLU;
	int8_t x638 = 23;
	int16_t x639 = -2;
	static volatile int16_t x640 = 7753;
	volatile uint64_t t145 = 1199429LLU;

    t145 = (x637&(x638/(x639!=x640)));

    if (t145 != 3LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile int32_t x641 = -1;
	int32_t x644 = INT32_MIN;

    t146 = (x641&(x642/(x643!=x644)));

    if (t146 != -1) { NG(); } else { ; }
	
}

void f147(void) {
    	static int16_t x645 = -1;
	uint8_t x646 = 86U;
	int32_t t147 = -7;

    t147 = (x645&(x646/(x647!=x648)));

    if (t147 != 86) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int8_t x649 = -1;
	int8_t x650 = 0;
	volatile uint32_t x652 = 11973690U;
	volatile int32_t t148 = -10;

    t148 = (x649&(x650/(x651!=x652)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int16_t x657 = -6591;
	volatile uint8_t x658 = UINT8_MAX;
	uint32_t x659 = UINT32_MAX;
	int32_t t149 = 166028154;

    t149 = (x657&(x658/(x659!=x660)));

    if (t149 != 65) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint8_t x661 = 57U;
	static uint16_t x662 = 1U;
	volatile uint16_t x663 = UINT16_MAX;
	static uint32_t x664 = 17009136U;
	volatile int32_t t150 = -82025799;

    t150 = (x661&(x662/(x663!=x664)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint16_t x665 = 47U;
	static uint32_t x666 = 1U;
	static volatile int16_t x667 = INT16_MIN;
	int32_t x668 = 1;

    t151 = (x665&(x666/(x667!=x668)));

    if (t151 != 1U) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x669 = -1LL;
	static int8_t x670 = INT8_MIN;
	uint16_t x672 = UINT16_MAX;
	int64_t t152 = -703964318505297LL;

    t152 = (x669&(x670/(x671!=x672)));

    if (t152 != -128LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x673 = 15623LLU;
	int32_t x674 = INT32_MAX;
	volatile int64_t x675 = INT64_MAX;
	static uint32_t x676 = 43U;
	volatile uint64_t t153 = 489712016LLU;

    t153 = (x673&(x674/(x675!=x676)));

    if (t153 != 15623LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	static int64_t x677 = INT64_MAX;
	int64_t x678 = -123916826946539LL;
	int16_t x679 = INT16_MIN;
	volatile uint16_t x680 = 30669U;
	int64_t t154 = -2162076LL;

    t154 = (x677&(x678/(x679!=x680)));

    if (t154 != 9223248120027829269LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x681 = -1;
	uint32_t x682 = UINT32_MAX;
	int16_t x683 = INT16_MAX;
	int64_t x684 = INT64_MIN;
	uint32_t t155 = UINT32_MAX;

    t155 = (x681&(x682/(x683!=x684)));

    if (t155 != UINT32_MAX) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x685 = 106868919U;
	int8_t x687 = INT8_MIN;
	uint64_t x688 = 55098587051LLU;
	uint64_t t156 = 20LLU;

    t156 = (x685&(x686/(x687!=x688)));

    if (t156 != 22LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x689 = 19U;
	int32_t x690 = INT32_MAX;
	int8_t x691 = INT8_MIN;
	volatile uint8_t x692 = 0U;
	int32_t t157 = -1;

    t157 = (x689&(x690/(x691!=x692)));

    if (t157 != 19) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x693 = INT16_MIN;
	uint32_t x694 = UINT32_MAX;
	static int32_t x696 = 11757;
	uint32_t t158 = 111U;

    t158 = (x693&(x694/(x695!=x696)));

    if (t158 != 4294934528U) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x701 = 12971;
	volatile int64_t x702 = INT64_MIN;
	static volatile int16_t x703 = INT16_MAX;
	uint8_t x704 = 4U;
	volatile int64_t t159 = -4731646LL;

    t159 = (x701&(x702/(x703!=x704)));

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static int32_t x705 = -5314;
	volatile uint8_t x706 = 0U;
	static volatile uint64_t x707 = 4625528864018LLU;

    t160 = (x705&(x706/(x707!=x708)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x709 = INT32_MIN;
	uint32_t x711 = UINT32_MAX;
	volatile int64_t x712 = 1047620932186LL;
	int32_t t161 = INT32_MIN;

    t161 = (x709&(x710/(x711!=x712)));

    if (t161 != INT32_MIN) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x713 = INT16_MIN;
	int64_t x714 = 2106783315388939679LL;
	int32_t x715 = -3079;
	volatile uint64_t x716 = UINT64_MAX;
	static volatile int64_t t162 = 593931384564LL;

    t162 = (x713&(x714/(x715!=x716)));

    if (t162 != 2106783315388923904LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x718 = -3;
	volatile int64_t x719 = INT64_MIN;
	int8_t x720 = 25;
	volatile int32_t t163 = -74916701;

    t163 = (x717&(x718/(x719!=x720)));

    if (t163 != 26941) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int64_t x723 = -1LL;
	int64_t x724 = INT64_MAX;

    t164 = (x721&(x722/(x723!=x724)));

    if (t164 != 61LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x725 = -15;
	int32_t x726 = INT32_MIN;
	int64_t x727 = INT64_MIN;
	uint32_t x728 = UINT32_MAX;

    t165 = (x725&(x726/(x727!=x728)));

    if (t165 != INT32_MIN) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int16_t x729 = -1;
	uint32_t x730 = UINT32_MAX;
	static int64_t x731 = INT64_MAX;
	volatile uint32_t x732 = UINT32_MAX;
	uint32_t t166 = UINT32_MAX;

    t166 = (x729&(x730/(x731!=x732)));

    if (t166 != UINT32_MAX) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x737 = INT16_MAX;
	static int16_t x738 = -6;
	volatile int64_t x740 = INT64_MIN;

    t167 = (x737&(x738/(x739!=x740)));

    if (t167 != 32762) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int32_t x741 = INT32_MIN;
	static int32_t x742 = -48;
	static volatile int32_t x743 = INT32_MIN;
	static volatile int64_t x744 = INT64_MIN;
	int32_t t168 = INT32_MIN;

    t168 = (x741&(x742/(x743!=x744)));

    if (t168 != INT32_MIN) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x746 = 61U;
	static int32_t t169 = 6967;

    t169 = (x745&(x746/(x747!=x748)));

    if (t169 != 12) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x749 = UINT8_MAX;
	volatile int64_t x750 = -792804LL;
	static int8_t x751 = -1;
	static volatile uint32_t x752 = 38247U;
	volatile int64_t t170 = 5820052930866LL;

    t170 = (x749&(x750/(x751!=x752)));

    if (t170 != 28LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x753 = UINT16_MAX;
	int8_t x756 = 1;
	int32_t t171 = -924746292;

    t171 = (x753&(x754/(x755!=x756)));

    if (t171 != 65535) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x757 = 130860983665LL;
	volatile uint8_t x758 = 5U;
	int8_t x759 = 0;
	static int16_t x760 = INT16_MIN;
	int64_t t172 = -88389019326002763LL;

    t172 = (x757&(x758/(x759!=x760)));

    if (t172 != 1LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x761 = INT8_MIN;
	static int32_t x762 = -120;
	volatile int32_t x764 = 459;
	int32_t t173 = 9295;

    t173 = (x761&(x762/(x763!=x764)));

    if (t173 != -128) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x766 = INT16_MIN;
	int32_t x768 = -39341;

    t174 = (x765&(x766/(x767!=x768)));

    if (t174 != -32768) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x769 = 178989LL;
	uint64_t x770 = 106LLU;
	int8_t x771 = -1;
	int8_t x772 = 0;
	volatile uint64_t t175 = 236733027144244256LLU;

    t175 = (x769&(x770/(x771!=x772)));

    if (t175 != 40LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint32_t x774 = 209U;
	int8_t x776 = INT8_MIN;
	int64_t t176 = 1098302249916461LL;

    t176 = (x773&(x774/(x775!=x776)));

    if (t176 != 128LL) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int32_t x777 = INT32_MIN;
	int32_t x778 = 3261246;
	volatile int16_t x779 = -1;
	static volatile int32_t t177 = 952048;

    t177 = (x777&(x778/(x779!=x780)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x781 = 7528U;
	int8_t x782 = 2;
	static uint64_t x783 = 870829480638146LLU;
	static uint32_t t178 = 2718497U;

    t178 = (x781&(x782/(x783!=x784)));

    if (t178 != 0U) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x785 = 5LLU;
	int64_t x786 = INT64_MAX;
	static volatile int8_t x787 = INT8_MAX;
	static volatile int16_t x788 = INT16_MIN;

    t179 = (x785&(x786/(x787!=x788)));

    if (t179 != 5LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x789 = INT32_MAX;
	uint64_t x790 = 270992080878903170LLU;
	volatile int8_t x791 = -1;
	int8_t x792 = INT8_MAX;
	uint64_t t180 = 24780950641754113LLU;

    t180 = (x789&(x790/(x791!=x792)));

    if (t180 != 498802562LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x795 = INT32_MIN;
	int32_t t181 = -494;

    t181 = (x793&(x794/(x795!=x796)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x797 = UINT64_MAX;
	int32_t x798 = -1;
	static uint32_t x800 = 228911U;
	static uint64_t t182 = UINT64_MAX;

    t182 = (x797&(x798/(x799!=x800)));

    if (t182 != UINT64_MAX) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int32_t x801 = -1107005;
	static volatile int32_t x802 = INT32_MIN;
	uint64_t x804 = UINT64_MAX;
	int32_t t183 = INT32_MIN;

    t183 = (x801&(x802/(x803!=x804)));

    if (t183 != INT32_MIN) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int16_t x805 = 0;
	uint32_t x808 = 7187404U;
	volatile int32_t t184 = 465597498;

    t184 = (x805&(x806/(x807!=x808)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x810 = UINT32_MAX;
	static int64_t x811 = -120779824026884LL;
	volatile int8_t x812 = INT8_MIN;
	uint32_t t185 = UINT32_MAX;

    t185 = (x809&(x810/(x811!=x812)));

    if (t185 != UINT32_MAX) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint32_t x813 = 911695U;
	uint64_t x814 = 2299247418729LLU;
	static uint8_t x815 = 9U;
	int8_t x816 = -1;
	volatile uint64_t t186 = 15185200LLU;

    t186 = (x813&(x814/(x815!=x816)));

    if (t186 != 84297LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static int32_t x817 = 0;
	int32_t x818 = INT32_MAX;
	int32_t t187 = 0;

    t187 = (x817&(x818/(x819!=x820)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint8_t x821 = 0U;
	int16_t x822 = 8;
	int64_t x824 = 7665091180LL;
	volatile int32_t t188 = 232;

    t188 = (x821&(x822/(x823!=x824)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x825 = -27771633978LL;
	int8_t x826 = INT8_MIN;
	int16_t x827 = -1;
	uint8_t x828 = UINT8_MAX;
	volatile int64_t t189 = 273635788405LL;

    t189 = (x825&(x826/(x827!=x828)));

    if (t189 != -27771634048LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint8_t x831 = UINT8_MAX;
	int8_t x832 = -17;

    t190 = (x829&(x830/(x831!=x832)));

    if (t190 != 1004273664) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x833 = UINT64_MAX;
	int16_t x834 = 1820;
	int16_t x835 = INT16_MIN;
	int16_t x836 = INT16_MAX;
	volatile uint64_t t191 = 203584517627666419LLU;

    t191 = (x833&(x834/(x835!=x836)));

    if (t191 != 1820LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x837 = UINT8_MAX;
	uint16_t x840 = 1526U;
	static uint64_t t192 = 2360LLU;

    t192 = (x837&(x838/(x839!=x840)));

    if (t192 != 207LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int8_t x843 = INT8_MIN;
	int64_t x844 = INT64_MAX;
	static int32_t t193 = -1335515;

    t193 = (x841&(x842/(x843!=x844)));

    if (t193 != 2) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x845 = INT64_MIN;
	uint64_t x846 = UINT64_MAX;
	int16_t x847 = INT16_MIN;
	int64_t x848 = 245475048LL;
	uint64_t t194 = 1LLU;

    t194 = (x845&(x846/(x847!=x848)));

    if (t194 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x849 = -1;
	int16_t x850 = INT16_MIN;
	volatile int64_t x851 = 37833438245LL;
	int64_t x852 = INT64_MIN;
	int32_t t195 = -779;

    t195 = (x849&(x850/(x851!=x852)));

    if (t195 != -32768) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x853 = -1;
	int16_t x854 = -908;
	static uint16_t x855 = 0U;
	volatile int32_t t196 = -700808826;

    t196 = (x853&(x854/(x855!=x856)));

    if (t196 != -908) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x857 = UINT32_MAX;
	int32_t x859 = INT32_MIN;
	uint64_t x860 = 57115615672951152LLU;
	volatile int64_t t197 = -53535909736LL;

    t197 = (x857&(x858/(x859!=x860)));

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x861 = UINT32_MAX;
	uint16_t x862 = UINT16_MAX;
	uint64_t x863 = UINT64_MAX;
	int64_t x864 = INT64_MIN;
	uint32_t t198 = 451583U;

    t198 = (x861&(x862/(x863!=x864)));

    if (t198 != 65535U) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x865 = INT16_MAX;
	uint32_t x866 = 274456164U;
	int8_t x868 = INT8_MIN;
	volatile uint32_t t199 = 2467706U;

    t199 = (x865&(x866/(x867!=x868)));

    if (t199 != 24164U) { NG(); } else { ; }
	
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

