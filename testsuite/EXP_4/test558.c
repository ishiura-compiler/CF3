
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

volatile int32_t x8 = 25589;
uint8_t x9 = UINT8_MAX;
int64_t t1 = 4LL;
volatile uint8_t x19 = UINT8_MAX;
uint64_t t3 = 2916299LLU;
volatile uint64_t t4 = 186180377151269LLU;
volatile int32_t x27 = -1;
volatile int64_t x30 = INT64_MAX;
static uint8_t x37 = UINT8_MAX;
int32_t t8 = -605052687;
static int32_t x41 = -248;
int16_t x43 = INT16_MIN;
uint32_t t9 = 3U;
uint8_t x49 = 0U;
uint32_t x54 = 747649U;
static int64_t x55 = 54170166003LL;
int64_t t13 = -176438848948LL;
static int64_t t14 = 356564054LL;
uint8_t x74 = 7U;
volatile int16_t x75 = INT16_MAX;
volatile int32_t t15 = 629226718;
int64_t x84 = INT64_MIN;
static int32_t x89 = INT32_MIN;
static uint32_t x108 = 61U;
int64_t x109 = INT64_MIN;
uint64_t x117 = UINT64_MAX;
uint8_t x120 = 29U;
uint64_t x140 = 2899690444061973006LLU;
static uint64_t t29 = 21LLU;
int64_t x141 = INT64_MIN;
volatile int32_t x148 = INT32_MIN;
static volatile int64_t t31 = 25491429112982658LL;
int16_t x153 = INT16_MIN;
uint64_t x161 = 6094LLU;
volatile uint64_t t34 = 369355801LLU;
static uint8_t x167 = 8U;
uint64_t x175 = UINT64_MAX;
uint8_t x178 = 1U;
uint32_t x182 = UINT32_MAX;
static uint16_t x198 = 25109U;
static int8_t x200 = INT8_MAX;
static int64_t x202 = INT64_MIN;
static int16_t x208 = INT16_MIN;
int32_t x212 = 13239;
volatile uint64_t t44 = 88LLU;
static int8_t x232 = INT8_MAX;
int64_t t47 = -1504410174672LL;
int32_t x251 = 2;
uint64_t x252 = UINT64_MAX;
volatile int8_t x258 = -6;
int8_t x271 = INT8_MIN;
volatile int64_t t53 = 2793721290888081LL;
int64_t x285 = INT64_MAX;
int32_t x288 = -1;
int8_t x294 = INT8_MIN;
int16_t x296 = INT16_MIN;
uint8_t x306 = 17U;
volatile int16_t x308 = INT16_MIN;
int32_t x334 = 5684327;
volatile int8_t x341 = INT8_MIN;
volatile uint64_t t66 = 959587LLU;
int16_t x347 = INT16_MAX;
static volatile uint64_t t68 = 1LLU;
int16_t x373 = 12354;
uint8_t x376 = UINT8_MAX;
volatile uint32_t x377 = UINT32_MAX;
int8_t x380 = INT8_MAX;
uint64_t x389 = 953335640LLU;
uint32_t x396 = UINT32_MAX;
volatile int64_t t72 = 1460LL;
uint64_t x408 = UINT64_MAX;
int64_t x413 = INT64_MAX;
volatile uint16_t x416 = 1U;
volatile int64_t t74 = 414781321LL;
volatile int32_t x420 = -22312;
uint8_t x422 = 7U;
int32_t x438 = INT32_MIN;
uint16_t x447 = 45U;
static uint8_t x454 = 127U;
uint32_t x456 = 476U;
uint32_t t81 = 3563U;
int32_t x461 = 7533;
static int64_t x469 = -1LL;
int16_t x478 = INT16_MIN;
static uint16_t x479 = UINT16_MAX;
volatile int32_t x488 = 5;
static volatile int16_t x493 = INT16_MAX;
uint32_t x494 = 29U;
uint64_t x497 = 2552LLU;
volatile uint64_t t88 = 4756530647838LLU;
static int8_t x501 = INT8_MIN;
int64_t x502 = INT64_MIN;
uint8_t x503 = 96U;
volatile int64_t t89 = -9445130267355835LL;
static uint8_t x508 = UINT8_MAX;
int16_t x512 = INT16_MAX;
int64_t x534 = 21039949423345LL;
int16_t x546 = 1;
static uint32_t x549 = UINT32_MAX;
uint32_t t100 = 34899U;
int64_t x557 = -2940LL;
int8_t x559 = INT8_MIN;
static uint8_t x560 = UINT8_MAX;
int64_t x561 = INT64_MIN;
int8_t x564 = -1;
uint8_t x571 = 7U;
volatile int32_t x572 = -1;
uint64_t x581 = UINT64_MAX;
int32_t x582 = 878094;
int16_t x603 = 1;
static volatile int8_t x609 = -1;
uint32_t t109 = 61U;
volatile int16_t x613 = INT16_MIN;
static uint32_t x616 = UINT32_MAX;
int32_t x623 = -488;
int32_t x626 = 9278;
int32_t x630 = 12;
static int16_t x632 = -924;
int32_t x633 = -26114;
volatile uint8_t x642 = 0U;
int32_t x645 = INT32_MIN;
uint64_t x646 = 828LLU;
static int32_t x653 = INT32_MAX;
volatile int32_t x657 = -8;
int32_t t118 = -4171606;
int8_t x664 = INT8_MIN;
int64_t x683 = -1LL;
uint64_t x686 = 1051426075104311LLU;
static volatile uint64_t t124 = 1351LLU;
int8_t x695 = -56;
static uint16_t x696 = UINT16_MAX;
static uint32_t x707 = 112899U;
uint16_t x708 = UINT16_MAX;
volatile int64_t t126 = 166160476LL;
uint32_t x716 = UINT32_MAX;
static uint64_t x727 = UINT64_MAX;
int8_t x733 = INT8_MIN;
volatile int32_t t130 = -1663558;
int32_t x738 = INT32_MAX;
int16_t x744 = 2957;
int8_t x758 = INT8_MAX;
int16_t x759 = -2082;
int32_t t135 = -11347366;
uint16_t x764 = 50U;
volatile uint8_t x771 = UINT8_MAX;
volatile int16_t x776 = -1;
uint64_t x782 = 1473931350230LLU;
static volatile int8_t x794 = 2;
int64_t x798 = INT64_MIN;
int16_t x799 = -1172;
int8_t x800 = INT8_MIN;
uint16_t x815 = 30U;
static int32_t t145 = -88838177;
int32_t x824 = 3;
static uint64_t t146 = 1938902LLU;
static volatile uint64_t t148 = 122393LLU;
int64_t x841 = INT64_MIN;
volatile uint8_t x851 = 62U;
int16_t x874 = -1292;
volatile int32_t x875 = -1;
uint16_t x882 = 2910U;
int16_t x890 = INT16_MIN;
int16_t x894 = -1;
volatile int8_t x896 = INT8_MAX;
static volatile int64_t t161 = 919733248710898025LL;
int64_t t166 = -28122888942367755LL;
volatile int64_t x942 = INT64_MIN;
volatile uint64_t x959 = 288281LLU;
static uint8_t x969 = UINT8_MAX;
int16_t x971 = -1;
uint32_t x978 = UINT32_MAX;
uint32_t x980 = 47873U;
int8_t x985 = INT8_MIN;
volatile int32_t x989 = 25089;
static int32_t t177 = 24;
volatile uint64_t x1003 = UINT64_MAX;
int8_t x1008 = INT8_MIN;
volatile int32_t t179 = -123;
static volatile int16_t x1016 = INT16_MIN;
volatile uint64_t t186 = 4304362074399LLU;
static volatile int32_t t187 = 7961;
static int16_t x1057 = -1;
uint8_t x1059 = 3U;
int64_t x1061 = -1LL;
uint32_t x1068 = 6135U;
int8_t x1082 = -13;
static volatile uint32_t t193 = 982U;
volatile uint32_t t194 = 187096U;
static int8_t x1101 = 0;
uint32_t x1102 = 16174U;
int8_t x1106 = INT8_MIN;


void f0(void) {
    	int16_t x5 = INT16_MIN;
	static uint64_t x6 = 252987221LLU;
	uint16_t x7 = UINT16_MAX;
	uint64_t t0 = 2164669647658049160LLU;

    t0 = (x5&(x6&(x7*x8)));

    if (t0 != 51642368LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x10 = -98026988;
	int64_t x11 = -1LL;
	static int16_t x12 = -6993;

    t1 = (x9&(x10&(x11*x12)));

    if (t1 != 16LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x13 = UINT32_MAX;
	volatile uint32_t x14 = 32U;
	volatile int16_t x15 = 892;
	uint32_t x16 = 7U;
	uint32_t t2 = 12639579U;

    t2 = (x13&(x14&(x15*x16)));

    if (t2 != 32U) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x17 = 6U;
	uint8_t x18 = UINT8_MAX;
	uint64_t x20 = 77985191684LLU;

    t3 = (x17&(x18&(x19*x20)));

    if (t3 != 4LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x21 = 1531047LLU;
	int64_t x22 = -909022LL;
	uint8_t x23 = UINT8_MAX;
	static uint32_t x24 = UINT32_MAX;

    t4 = (x21&(x22&(x23*x24)));

    if (t4 != 1179648LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x25 = 805U;
	uint16_t x26 = UINT16_MAX;
	uint64_t x28 = 18542603LLU;
	uint64_t t5 = 829645566632583880LLU;

    t5 = (x25&(x26&(x27*x28)));

    if (t5 != 805LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x29 = INT64_MIN;
	static volatile int64_t x31 = -6882933LL;
	int16_t x32 = 0;
	static volatile int64_t t6 = 7248LL;

    t6 = (x29&(x30&(x31*x32)));

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile int64_t x33 = -4389452319LL;
	int32_t x34 = -150;
	static uint64_t x35 = 259662LLU;
	int64_t x36 = 35316669758759009LL;
	uint64_t t7 = 258059783973988LLU;

    t7 = (x33&(x34&(x35*x36)));

    if (t7 != 2365298260853653760LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint8_t x38 = 7U;
	static uint16_t x39 = 1U;
	volatile int8_t x40 = -1;

    t8 = (x37&(x38&(x39*x40)));

    if (t8 != 7) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x42 = UINT32_MAX;
	int8_t x44 = -3;

    t9 = (x41&(x42&(x43*x44)));

    if (t9 != 98304U) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x45 = INT64_MIN;
	static uint8_t x46 = UINT8_MAX;
	int16_t x47 = INT16_MAX;
	int16_t x48 = 12;
	int64_t t10 = 96793LL;

    t10 = (x45&(x46&(x47*x48)));

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint8_t x50 = 38U;
	static int64_t x51 = INT64_MIN;
	uint64_t x52 = UINT64_MAX;
	volatile uint64_t t11 = 39639373LLU;

    t11 = (x49&(x50&(x51*x52)));

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x53 = INT16_MIN;
	static int64_t x56 = 51235693LL;
	int64_t t12 = -13024581395LL;

    t12 = (x53&(x54&(x55*x56)));

    if (t12 != 720896LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x65 = -1872990230352363LL;
	volatile uint8_t x66 = UINT8_MAX;
	int8_t x67 = -22;
	int8_t x68 = INT8_MAX;

    t13 = (x65&(x66&(x67*x68)));

    if (t13 != 20LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x69 = UINT8_MAX;
	int64_t x70 = 95927827654LL;
	int16_t x71 = -1;
	static int64_t x72 = -4295494767738632LL;

    t14 = (x69&(x70&(x71*x72)));

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x73 = 0;
	int8_t x76 = 0;

    t15 = (x73&(x74&(x75*x76)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int64_t x81 = INT64_MIN;
	int8_t x82 = INT8_MIN;
	uint64_t x83 = 3434898LLU;
	uint64_t t16 = 33LLU;

    t16 = (x81&(x82&(x83*x84)));

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint64_t x85 = 28175450469568LLU;
	int8_t x86 = -1;
	uint8_t x87 = 2U;
	static int64_t x88 = -617185458LL;
	uint64_t t17 = 2023765814LLU;

    t17 = (x85&(x86&(x87*x88)));

    if (t17 != 28175289840768LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x90 = INT64_MAX;
	static uint32_t x91 = UINT32_MAX;
	static int16_t x92 = INT16_MIN;
	int64_t t18 = 65LL;

    t18 = (x89&(x90&(x91*x92)));

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x93 = 12378400LLU;
	volatile int16_t x94 = INT16_MAX;
	volatile int32_t x95 = INT32_MAX;
	static uint32_t x96 = 691672082U;
	uint64_t t19 = 512881844LLU;

    t19 = (x93&(x94&(x95*x96)));

    if (t19 != 24864LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x97 = INT16_MAX;
	int64_t x98 = 268210273637751LL;
	int8_t x99 = 25;
	uint64_t x100 = UINT64_MAX;
	uint64_t t20 = 1LLU;

    t20 = (x97&(x98&(x99*x100)));

    if (t20 != 21863LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x105 = INT16_MIN;
	static int64_t x106 = INT64_MIN;
	static uint64_t x107 = 1372501LLU;
	volatile uint64_t t21 = 29858390777614126LLU;

    t21 = (x105&(x106&(x107*x108)));

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x110 = INT16_MIN;
	static uint64_t x111 = 22251314756362LLU;
	volatile int32_t x112 = 2;
	volatile uint64_t t22 = 557340498LLU;

    t22 = (x109&(x110&(x111*x112)));

    if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x113 = UINT16_MAX;
	static uint16_t x114 = 4U;
	uint8_t x115 = 50U;
	uint8_t x116 = 0U;
	int32_t t23 = -713377083;

    t23 = (x113&(x114&(x115*x116)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x118 = -4693944420040254LL;
	static volatile int8_t x119 = 25;
	uint64_t t24 = 417424LLU;

    t24 = (x117&(x118&(x119*x120)));

    if (t24 != 192LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x121 = 4;
	int16_t x122 = INT16_MIN;
	int64_t x123 = INT64_MIN;
	int8_t x124 = 0;
	volatile int64_t t25 = -8944756LL;

    t25 = (x121&(x122&(x123*x124)));

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x125 = -2371;
	static int8_t x126 = INT8_MIN;
	uint16_t x127 = 5U;
	static int8_t x128 = 2;
	int32_t t26 = 3;

    t26 = (x125&(x126&(x127*x128)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x129 = UINT8_MAX;
	uint64_t x130 = 61069136898013LLU;
	uint64_t x131 = UINT64_MAX;
	static volatile int8_t x132 = INT8_MIN;
	static volatile uint64_t t27 = 32807461714993569LLU;

    t27 = (x129&(x130&(x131*x132)));

    if (t27 != 128LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x133 = -1;
	uint64_t x134 = 485677701455LLU;
	int8_t x135 = -1;
	static volatile uint16_t x136 = 35U;
	volatile uint64_t t28 = 23LLU;

    t28 = (x133&(x134&(x135*x136)));

    if (t28 != 485677701453LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int8_t x137 = -1;
	volatile int64_t x138 = INT64_MIN;
	volatile uint32_t x139 = 19U;

    t29 = (x137&(x138&(x139*x140)));

    if (t29 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x142 = -3356368;
	uint8_t x143 = 30U;
	int16_t x144 = INT16_MIN;
	int64_t t30 = INT64_MIN;

    t30 = (x141&(x142&(x143*x144)));

    if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x145 = -59744940LL;
	int64_t x146 = INT64_MIN;
	uint32_t x147 = 3290U;

    t31 = (x145&(x146&(x147*x148)));

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x149 = 789950U;
	int64_t x150 = INT64_MIN;
	uint16_t x151 = 63U;
	uint64_t x152 = 89LLU;
	static uint64_t t32 = 21LLU;

    t32 = (x149&(x150&(x151*x152)));

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x154 = INT8_MIN;
	static uint16_t x155 = UINT16_MAX;
	uint8_t x156 = 28U;
	static int32_t t33 = 13973;

    t33 = (x153&(x154&(x155*x156)));

    if (t33 != 1802240) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int16_t x162 = INT16_MIN;
	static uint32_t x163 = UINT32_MAX;
	uint64_t x164 = 10088418934558LLU;

    t34 = (x161&(x162&(x163*x164)));

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x165 = 1U;
	volatile uint16_t x166 = 2224U;
	int16_t x168 = INT16_MIN;
	int32_t t35 = 2294905;

    t35 = (x165&(x166&(x167*x168)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x173 = 2U;
	static int16_t x174 = -13;
	int16_t x176 = -15254;
	volatile uint64_t t36 = 268164222126350LLU;

    t36 = (x173&(x174&(x175*x176)));

    if (t36 != 2LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x177 = UINT8_MAX;
	volatile uint16_t x179 = 1U;
	volatile int16_t x180 = -1;
	int32_t t37 = 8;

    t37 = (x177&(x178&(x179*x180)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint16_t x181 = UINT16_MAX;
	int16_t x183 = -485;
	uint16_t x184 = UINT16_MAX;
	volatile uint32_t t38 = 22412183U;

    t38 = (x181&(x182&(x183*x184)));

    if (t38 != 485U) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x193 = 11573698;
	int16_t x194 = -1;
	volatile int8_t x195 = INT8_MIN;
	volatile uint32_t x196 = 11966697U;
	uint32_t t39 = 11284614U;

    t39 = (x193&(x194&(x195*x196)));

    if (t39 != 11569536U) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t x197 = INT64_MAX;
	uint32_t x199 = UINT32_MAX;
	static volatile int64_t t40 = 163924490995LL;

    t40 = (x197&(x198&(x199*x200)));

    if (t40 != 25089LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x201 = INT16_MIN;
	uint8_t x203 = UINT8_MAX;
	static uint64_t x204 = 733866135892758058LLU;
	uint64_t t41 = 678187LLU;

    t41 = (x201&(x202&(x203*x204)));

    if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x205 = INT64_MIN;
	int64_t x206 = 3LL;
	volatile int8_t x207 = -2;
	volatile int64_t t42 = 8LL;

    t42 = (x205&(x206&(x207*x208)));

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint32_t x209 = 82190U;
	int64_t x210 = -1LL;
	uint32_t x211 = UINT32_MAX;
	static volatile int64_t t43 = -14465318507LL;

    t43 = (x209&(x210&(x211*x212)));

    if (t43 != 81928LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x213 = UINT64_MAX;
	volatile int16_t x214 = -1;
	int32_t x215 = INT32_MIN;
	static uint32_t x216 = 80U;

    t44 = (x213&(x214&(x215*x216)));

    if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x221 = 160901U;
	int32_t x222 = -2;
	static int16_t x223 = INT16_MIN;
	uint8_t x224 = 3U;
	volatile uint32_t t45 = 67375U;

    t45 = (x221&(x222&(x223*x224)));

    if (t45 != 131072U) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x225 = INT16_MIN;
	static uint64_t x226 = 7832820096433857LLU;
	static int64_t x227 = -1LL;
	static uint16_t x228 = 1884U;
	uint64_t t46 = 4771015856286220675LLU;

    t46 = (x225&(x226&(x227*x228)));

    if (t46 != 7832820096401408LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile int8_t x229 = 2;
	uint16_t x230 = 839U;
	int64_t x231 = -1LL;

    t47 = (x229&(x230&(x231*x232)));

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static int64_t x237 = -605476LL;
	uint8_t x238 = 0U;
	int8_t x239 = -1;
	uint16_t x240 = UINT16_MAX;
	volatile int64_t t48 = -2666520779244099530LL;

    t48 = (x237&(x238&(x239*x240)));

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static int16_t x241 = INT16_MAX;
	static int8_t x242 = 0;
	static uint64_t x243 = UINT64_MAX;
	static int8_t x244 = INT8_MIN;
	uint64_t t49 = 29260LLU;

    t49 = (x241&(x242&(x243*x244)));

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x249 = 84LL;
	int8_t x250 = INT8_MIN;
	volatile uint64_t t50 = 93002873232826LLU;

    t50 = (x249&(x250&(x251*x252)));

    if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x257 = UINT64_MAX;
	uint32_t x259 = 1827454580U;
	static int64_t x260 = -1LL;
	volatile uint64_t t51 = 1370518058369487702LLU;

    t51 = (x257&(x258&(x259*x260)));

    if (t51 != 18446744071882097032LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x261 = -14422953;
	static int64_t x262 = -1LL;
	int8_t x263 = INT8_MIN;
	int16_t x264 = 24;
	int64_t t52 = -166940292637LL;

    t52 = (x261&(x262&(x263*x264)));

    if (t52 != -14425088LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x269 = INT64_MAX;
	static uint8_t x270 = UINT8_MAX;
	int64_t x272 = -1LL;

    t53 = (x269&(x270&(x271*x272)));

    if (t53 != 128LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int8_t x273 = INT8_MIN;
	volatile uint8_t x274 = 1U;
	static int8_t x275 = -1;
	int8_t x276 = -1;
	static int32_t t54 = -4999;

    t54 = (x273&(x274&(x275*x276)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint16_t x281 = 1534U;
	uint32_t x282 = 71013702U;
	static volatile uint8_t x283 = 4U;
	int16_t x284 = -1;
	volatile uint32_t t55 = 14851934U;

    t55 = (x281&(x282&(x283*x284)));

    if (t55 != 1348U) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x286 = -1;
	int64_t x287 = INT64_MAX;
	int64_t t56 = 1955155110LL;

    t56 = (x285&(x286&(x287*x288)));

    if (t56 != 1LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x293 = 5U;
	volatile int8_t x295 = 1;
	volatile uint32_t t57 = 7U;

    t57 = (x293&(x294&(x295*x296)));

    if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile uint8_t x301 = UINT8_MAX;
	int64_t x302 = INT64_MAX;
	int8_t x303 = INT8_MAX;
	int64_t x304 = 83401495144LL;
	int64_t t58 = 125LL;

    t58 = (x301&(x302&(x303*x304)));

    if (t58 != 152LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x305 = 5;
	static uint16_t x307 = 1U;
	int32_t t59 = 8959718;

    t59 = (x305&(x306&(x307*x308)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x309 = -1LL;
	int64_t x310 = -1LL;
	volatile uint16_t x311 = 26U;
	volatile uint8_t x312 = 5U;
	int64_t t60 = -55116LL;

    t60 = (x309&(x310&(x311*x312)));

    if (t60 != 130LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x313 = INT16_MAX;
	int16_t x314 = INT16_MIN;
	static volatile int32_t x315 = 0;
	int16_t x316 = 31;
	int32_t t61 = 1;

    t61 = (x313&(x314&(x315*x316)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x321 = UINT32_MAX;
	int16_t x322 = INT16_MIN;
	int8_t x323 = INT8_MIN;
	uint16_t x324 = 12U;
	volatile uint32_t t62 = 8U;

    t62 = (x321&(x322&(x323*x324)));

    if (t62 != 4294934528U) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x325 = 3791083462159506647LLU;
	int32_t x326 = -1;
	volatile int8_t x327 = INT8_MIN;
	int16_t x328 = -1;
	uint64_t t63 = 178697521LLU;

    t63 = (x325&(x326&(x327*x328)));

    if (t63 != 128LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x329 = 8066U;
	uint16_t x330 = UINT16_MAX;
	int64_t x331 = -243526LL;
	volatile uint32_t x332 = 12023U;
	volatile int64_t t64 = 1063431LL;

    t64 = (x329&(x330&(x331*x332)));

    if (t64 != 5890LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x333 = -1;
	int8_t x335 = INT8_MIN;
	uint32_t x336 = 59709U;
	uint32_t t65 = 52175395U;

    t65 = (x333&(x334&(x335*x336)));

    if (t65 != 139264U) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint8_t x342 = 5U;
	uint16_t x343 = 11394U;
	uint64_t x344 = 3560586195489187LLU;

    t66 = (x341&(x342&(x343*x344)));

    if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint32_t x345 = 757U;
	static uint64_t x346 = UINT64_MAX;
	uint64_t x348 = 76976LLU;
	volatile uint64_t t67 = 295391241940963433LLU;

    t67 = (x345&(x346&(x347*x348)));

    if (t67 != 592LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x369 = 2343758771813922LLU;
	uint64_t x370 = 463570526935LLU;
	int8_t x371 = -1;
	int64_t x372 = -1LL;

    t68 = (x369&(x370&(x371*x372)));

    if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x374 = INT16_MIN;
	volatile uint16_t x375 = 11376U;
	int32_t t69 = -3;

    t69 = (x373&(x374&(x375*x376)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int64_t x378 = INT64_MIN;
	uint16_t x379 = 1219U;
	volatile int64_t t70 = -5420812694LL;

    t70 = (x377&(x378&(x379*x380)));

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x390 = INT8_MIN;
	int32_t x391 = INT32_MAX;
	static uint32_t x392 = 732465U;
	volatile uint64_t t71 = 1277347728629LLU;

    t71 = (x389&(x390&(x391*x392)));

    if (t71 != 953192960LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int32_t x393 = -43;
	int64_t x394 = 2371133696495293557LL;
	static int32_t x395 = 525669;

    t72 = (x393&(x394&(x395*x396)));

    if (t72 != 3196555281LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static int32_t x405 = 1776591;
	int32_t x406 = 0;
	static uint16_t x407 = 58U;
	uint64_t t73 = 30371151LLU;

    t73 = (x405&(x406&(x407*x408)));

    if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x414 = 5U;
	int8_t x415 = -1;

    t74 = (x413&(x414&(x415*x416)));

    if (t74 != 5LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x417 = 108U;
	int64_t x418 = INT64_MIN;
	int64_t x419 = -3LL;
	static int64_t t75 = 131087162LL;

    t75 = (x417&(x418&(x419*x420)));

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x421 = 52U;
	volatile uint16_t x423 = 514U;
	int8_t x424 = INT8_MAX;
	uint32_t t76 = 213119U;

    t76 = (x421&(x422&(x423*x424)));

    if (t76 != 4U) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x425 = INT8_MIN;
	volatile int32_t x426 = 4914279;
	int64_t x427 = -1LL;
	uint16_t x428 = 1698U;
	int64_t t77 = 2377LL;

    t77 = (x425&(x426&(x427*x428)));

    if (t77 != 4913152LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x437 = -151;
	volatile int8_t x439 = INT8_MIN;
	volatile int8_t x440 = -1;
	volatile int32_t t78 = -366477498;

    t78 = (x437&(x438&(x439*x440)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int64_t x441 = 86909LL;
	int16_t x442 = 1545;
	int64_t x443 = -1LL;
	uint16_t x444 = 129U;
	static int64_t t79 = 291162LL;

    t79 = (x441&(x442&(x443*x444)));

    if (t79 != 521LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x445 = 5LLU;
	static uint16_t x446 = UINT16_MAX;
	static int8_t x448 = -4;
	static volatile uint64_t t80 = 212266008LLU;

    t80 = (x445&(x446&(x447*x448)));

    if (t80 != 4LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x453 = INT16_MAX;
	static uint8_t x455 = 48U;

    t81 = (x453&(x454&(x455*x456)));

    if (t81 != 64U) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x457 = UINT8_MAX;
	static int16_t x458 = INT16_MIN;
	volatile uint16_t x459 = 61U;
	static int16_t x460 = INT16_MIN;
	static int32_t t82 = 28154252;

    t82 = (x457&(x458&(x459*x460)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x462 = 1738162018U;
	int16_t x463 = INT16_MIN;
	static uint32_t x464 = 2854379U;
	uint32_t t83 = 28768501U;

    t83 = (x461&(x462&(x463*x464)));

    if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int32_t x470 = 257741;
	uint16_t x471 = 508U;
	int64_t x472 = -2102LL;
	static volatile int64_t t84 = 57LL;

    t84 = (x469&(x470&(x471*x472)));

    if (t84 != 238792LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x477 = -1LL;
	uint64_t x480 = UINT64_MAX;
	static uint64_t t85 = 4040482453226LLU;

    t85 = (x477&(x478&(x479*x480)));

    if (t85 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint8_t x485 = UINT8_MAX;
	uint16_t x486 = UINT16_MAX;
	static volatile int16_t x487 = -1;
	int32_t t86 = 26513393;

    t86 = (x485&(x486&(x487*x488)));

    if (t86 != 251) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x495 = 74U;
	int16_t x496 = 4767;
	volatile uint32_t t87 = 71837811U;

    t87 = (x493&(x494&(x495*x496)));

    if (t87 != 20U) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x498 = INT64_MIN;
	int8_t x499 = 1;
	int64_t x500 = INT64_MIN;

    t88 = (x497&(x498&(x499*x500)));

    if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x504 = INT16_MAX;

    t89 = (x501&(x502&(x503*x504)));

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x505 = 858779111615LL;
	int32_t x506 = 587;
	volatile int8_t x507 = INT8_MAX;
	static volatile int64_t t90 = -2293833882LL;

    t90 = (x505&(x506&(x507*x508)));

    if (t90 != 1LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x509 = UINT16_MAX;
	volatile uint32_t x510 = 7515U;
	uint16_t x511 = 1U;
	volatile uint32_t t91 = 19846539U;

    t91 = (x509&(x510&(x511*x512)));

    if (t91 != 7515U) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x517 = 3U;
	int64_t x518 = INT64_MIN;
	int8_t x519 = 1;
	uint32_t x520 = 2602076U;
	volatile int64_t t92 = -31539LL;

    t92 = (x517&(x518&(x519*x520)));

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile int64_t x521 = 1121956662383974LL;
	int64_t x522 = -12893LL;
	uint16_t x523 = 8752U;
	static uint8_t x524 = UINT8_MAX;
	volatile int64_t t93 = -371771291456311LL;

    t93 = (x521&(x522&(x523*x524)));

    if (t93 != 1280LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x525 = 53760964U;
	uint64_t x526 = UINT64_MAX;
	uint64_t x527 = UINT64_MAX;
	volatile int8_t x528 = INT8_MIN;
	uint64_t t94 = 2472LLU;

    t94 = (x525&(x526&(x527*x528)));

    if (t94 != 128LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static int16_t x533 = INT16_MIN;
	uint32_t x535 = 188U;
	uint32_t x536 = 7544U;
	int64_t t95 = 3LL;

    t95 = (x533&(x534&(x535*x536)));

    if (t95 != 1310720LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x537 = INT64_MIN;
	volatile uint64_t x538 = 264049164485LLU;
	volatile int32_t x539 = -120391317;
	volatile uint64_t x540 = 12LLU;
	volatile uint64_t t96 = 278LLU;

    t96 = (x537&(x538&(x539*x540)));

    if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x541 = -9;
	int64_t x542 = 58073492LL;
	int8_t x543 = -62;
	uint16_t x544 = 19718U;
	static volatile int64_t t97 = 286716696916033LL;

    t97 = (x541&(x542&(x543*x544)));

    if (t97 != 56885380LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x545 = -1LL;
	int64_t x547 = INT64_MIN;
	uint64_t x548 = 7066488LLU;
	volatile uint64_t t98 = 33240284851293LLU;

    t98 = (x545&(x546&(x547*x548)));

    if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	static int64_t x550 = INT64_MIN;
	static uint32_t x551 = UINT32_MAX;
	int32_t x552 = INT32_MAX;
	volatile int64_t t99 = -10227491LL;

    t99 = (x549&(x550&(x551*x552)));

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x553 = INT32_MAX;
	int32_t x554 = 3988;
	volatile uint32_t x555 = 253083673U;
	volatile uint8_t x556 = 4U;

    t100 = (x553&(x554&(x555*x556)));

    if (t100 != 4U) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x558 = 24U;
	int64_t t101 = 1LL;

    t101 = (x557&(x558&(x559*x560)));

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint16_t x562 = 1U;
	int16_t x563 = INT16_MIN;
	volatile int64_t t102 = -9LL;

    t102 = (x561&(x562&(x563*x564)));

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static int64_t x565 = 5258775811560LL;
	int16_t x566 = INT16_MIN;
	static int16_t x567 = INT16_MAX;
	static int8_t x568 = -1;
	int64_t t103 = -37113634556LL;

    t103 = (x565&(x566&(x567*x568)));

    if (t103 != 5258775789568LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x569 = INT64_MIN;
	int64_t x570 = INT64_MIN;
	int64_t t104 = INT64_MIN;

    t104 = (x569&(x570&(x571*x572)));

    if (t104 != INT64_MIN) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x573 = INT32_MAX;
	volatile uint64_t x574 = 1729993375764096LLU;
	uint32_t x575 = 245486U;
	uint64_t x576 = UINT64_MAX;
	uint64_t t105 = 839438548573LLU;

    t105 = (x573&(x574&(x575*x576)));

    if (t105 != 2023768064LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x577 = INT32_MAX;
	static int16_t x578 = INT16_MIN;
	int32_t x579 = 42980;
	uint64_t x580 = 229LLU;
	static uint64_t t106 = 137615965961952LLU;

    t106 = (x577&(x578&(x579*x580)));

    if (t106 != 9830400LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x583 = INT64_MAX;
	int16_t x584 = 1;
	volatile uint64_t t107 = 441LLU;

    t107 = (x581&(x582&(x583*x584)));

    if (t107 != 878094LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x601 = INT8_MAX;
	uint32_t x602 = 162144U;
	static int32_t x604 = 223218405;
	static volatile uint32_t t108 = 22081U;

    t108 = (x601&(x602&(x603*x604)));

    if (t108 != 96U) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x610 = UINT8_MAX;
	static int32_t x611 = INT32_MAX;
	static volatile uint32_t x612 = 1707602890U;

    t109 = (x609&(x610&(x611*x612)));

    if (t109 != 54U) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x614 = 927922;
	int16_t x615 = -1;
	uint32_t t110 = 2U;

    t110 = (x613&(x614&(x615*x616)));

    if (t110 != 0U) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x621 = UINT32_MAX;
	volatile int32_t x622 = INT32_MIN;
	int8_t x624 = -1;
	uint32_t t111 = 400097U;

    t111 = (x621&(x622&(x623*x624)));

    if (t111 != 0U) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x625 = INT8_MAX;
	int64_t x627 = -1736951156LL;
	int8_t x628 = INT8_MIN;
	volatile int64_t t112 = 1LL;

    t112 = (x625&(x626&(x627*x628)));

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int8_t x629 = -1;
	uint8_t x631 = UINT8_MAX;
	int32_t t113 = 1;

    t113 = (x629&(x630&(x631*x632)));

    if (t113 != 12) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x634 = -515;
	uint32_t x635 = UINT32_MAX;
	int8_t x636 = INT8_MIN;
	volatile uint32_t t114 = 607U;

    t114 = (x633&(x634&(x635*x636)));

    if (t114 != 128U) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x641 = INT64_MIN;
	volatile int32_t x643 = -1;
	int8_t x644 = INT8_MIN;
	static volatile int64_t t115 = -662922236789LL;

    t115 = (x641&(x642&(x643*x644)));

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x647 = 565768391LL;
	static int8_t x648 = INT8_MAX;
	volatile uint64_t t116 = 8136497573059LLU;

    t116 = (x645&(x646&(x647*x648)));

    if (t116 != 0LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x654 = -1;
	int16_t x655 = INT16_MIN;
	int64_t x656 = -637LL;
	volatile int64_t t117 = -1LL;

    t117 = (x653&(x654&(x655*x656)));

    if (t117 != 20873216LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x658 = INT16_MAX;
	uint8_t x659 = UINT8_MAX;
	int8_t x660 = -1;

    t118 = (x657&(x658&(x659*x660)));

    if (t118 != 32512) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x661 = INT64_MAX;
	uint16_t x662 = UINT16_MAX;
	int16_t x663 = 3744;
	int64_t t119 = -15LL;

    t119 = (x661&(x662&(x663*x664)));

    if (t119 != 45056LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint16_t x669 = 18485U;
	uint8_t x670 = 15U;
	int16_t x671 = INT16_MAX;
	int32_t x672 = -32190;
	static volatile int32_t t120 = -1;

    t120 = (x669&(x670&(x671*x672)));

    if (t120 != 4) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int32_t x673 = INT32_MIN;
	volatile int8_t x674 = 1;
	uint32_t x675 = 6182127U;
	uint64_t x676 = 225121078207LLU;
	static uint64_t t121 = 18LLU;

    t121 = (x673&(x674&(x675*x676)));

    if (t121 != 0LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x677 = INT64_MIN;
	int8_t x678 = INT8_MAX;
	uint64_t x679 = UINT64_MAX;
	int32_t x680 = INT32_MIN;
	static volatile uint64_t t122 = 1911352644LLU;

    t122 = (x677&(x678&(x679*x680)));

    if (t122 != 0LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x681 = INT32_MIN;
	volatile uint64_t x682 = 2199557566741823218LLU;
	static int32_t x684 = -1;
	uint64_t t123 = 14LLU;

    t123 = (x681&(x682&(x683*x684)));

    if (t123 != 0LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x685 = -61;
	uint64_t x687 = 1874775198LLU;
	uint16_t x688 = UINT16_MAX;

    t124 = (x685&(x686&(x687*x688)));

    if (t124 != 48396036870146LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x693 = INT8_MIN;
	volatile int32_t x694 = INT32_MIN;
	volatile int32_t t125 = INT32_MIN;

    t125 = (x693&(x694&(x695*x696)));

    if (t125 != INT32_MIN) { NG(); } else { ; }
	
}

void f126(void) {
    	static int16_t x705 = -1;
	int64_t x706 = -1LL;

    t126 = (x705&(x706&(x707*x708)));

    if (t126 != 3103868669LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x709 = UINT64_MAX;
	int64_t x710 = INT64_MAX;
	uint8_t x711 = 75U;
	int16_t x712 = 1;
	uint64_t t127 = 7LLU;

    t127 = (x709&(x710&(x711*x712)));

    if (t127 != 75LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x713 = 1342U;
	int64_t x714 = -1LL;
	int64_t x715 = -95LL;
	volatile int64_t t128 = -15LL;

    t128 = (x713&(x714&(x715*x716)));

    if (t128 != 30LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x725 = -1;
	int32_t x726 = INT32_MIN;
	int32_t x728 = -1;
	static uint64_t t129 = 7LLU;

    t129 = (x725&(x726&(x727*x728)));

    if (t129 != 0LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int32_t x734 = -109;
	int16_t x735 = -1;
	static int8_t x736 = -27;

    t130 = (x733&(x734&(x735*x736)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x737 = INT32_MAX;
	static int8_t x739 = INT8_MAX;
	volatile uint32_t x740 = UINT32_MAX;
	static uint32_t t131 = 409U;

    t131 = (x737&(x738&(x739*x740)));

    if (t131 != 2147483521U) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x741 = INT64_MIN;
	int8_t x742 = -1;
	uint32_t x743 = UINT32_MAX;
	int64_t t132 = -2047LL;

    t132 = (x741&(x742&(x743*x744)));

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x749 = 14798168U;
	volatile int16_t x750 = INT16_MAX;
	uint32_t x751 = UINT32_MAX;
	volatile int16_t x752 = -1;
	volatile uint32_t t133 = 162U;

    t133 = (x749&(x750&(x751*x752)));

    if (t133 != 0U) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x753 = UINT32_MAX;
	uint32_t x754 = 155210843U;
	int64_t x755 = -646722355799211LL;
	int8_t x756 = -1;
	int64_t t134 = -27242LL;

    t134 = (x753&(x754&(x755*x756)));

    if (t134 != 138413067LL) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint16_t x757 = 20567U;
	uint8_t x760 = 1U;

    t135 = (x757&(x758&(x759*x760)));

    if (t135 != 86) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x761 = INT16_MIN;
	int32_t x762 = INT32_MIN;
	static int8_t x763 = -1;
	volatile int32_t t136 = INT32_MIN;

    t136 = (x761&(x762&(x763*x764)));

    if (t136 != INT32_MIN) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x765 = 2;
	int16_t x766 = INT16_MAX;
	volatile int64_t x767 = -48718665922829LL;
	int16_t x768 = -5147;
	int64_t t137 = -199412933519598000LL;

    t137 = (x765&(x766&(x767*x768)));

    if (t137 != 2LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x769 = 23U;
	uint16_t x770 = 11193U;
	int16_t x772 = -1;
	static int32_t t138 = -7467;

    t138 = (x769&(x770&(x771*x772)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x773 = -26727399142LL;
	static uint32_t x774 = 0U;
	int16_t x775 = INT16_MIN;
	int64_t t139 = 169184669547774566LL;

    t139 = (x773&(x774&(x775*x776)));

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x777 = INT16_MIN;
	static volatile uint16_t x778 = 3U;
	int8_t x779 = INT8_MIN;
	static int8_t x780 = INT8_MIN;
	int32_t t140 = 107314175;

    t140 = (x777&(x778&(x779*x780)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x781 = -23;
	uint64_t x783 = 360976065867LLU;
	static volatile uint8_t x784 = 2U;
	static uint64_t t141 = 992324289296195876LLU;

    t141 = (x781&(x782&(x783*x784)));

    if (t141 != 86179968LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile uint8_t x789 = 0U;
	int64_t x790 = -1LL;
	int8_t x791 = INT8_MIN;
	int8_t x792 = INT8_MAX;
	int64_t t142 = -16704LL;

    t142 = (x789&(x790&(x791*x792)));

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int16_t x793 = INT16_MIN;
	uint16_t x795 = 0U;
	static int32_t x796 = INT32_MAX;
	int32_t t143 = 1;

    t143 = (x793&(x794&(x795*x796)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x797 = 14U;
	volatile int64_t t144 = 1415LL;

    t144 = (x797&(x798&(x799*x800)));

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int32_t x813 = INT32_MIN;
	uint16_t x814 = 2U;
	int32_t x816 = -1;

    t145 = (x813&(x814&(x815*x816)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x821 = INT8_MIN;
	uint64_t x822 = 94515347573689065LLU;
	int8_t x823 = INT8_MIN;

    t146 = (x821&(x822&(x823*x824)));

    if (t146 != 94515347573688960LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int64_t x829 = 1859459LL;
	int16_t x830 = -1;
	int64_t x831 = INT64_MAX;
	uint64_t x832 = 690443826747LLU;
	volatile uint64_t t147 = 243398LLU;

    t147 = (x829&(x830&(x831*x832)));

    if (t147 != 1329537LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x837 = -129;
	int8_t x838 = INT8_MIN;
	uint64_t x839 = 15297647917640LLU;
	static volatile uint64_t x840 = 1098LLU;

    t148 = (x837&(x838&(x839*x840)));

    if (t148 != 16796817413568512LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int16_t x842 = -1;
	int8_t x843 = 24;
	int8_t x844 = 0;
	int64_t t149 = 8LL;

    t149 = (x841&(x842&(x843*x844)));

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x845 = INT16_MAX;
	volatile uint32_t x846 = 13964U;
	volatile int32_t x847 = -1;
	uint32_t x848 = 992U;
	volatile uint32_t t150 = 8103745U;

    t150 = (x845&(x846&(x847*x848)));

    if (t150 != 13312U) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x849 = INT32_MIN;
	uint8_t x850 = 9U;
	int64_t x852 = -569708LL;
	static int64_t t151 = -3623705283LL;

    t151 = (x849&(x850&(x851*x852)));

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile uint32_t x861 = 911U;
	int8_t x862 = INT8_MAX;
	static uint64_t x863 = 1701275138LLU;
	int64_t x864 = -28175753LL;
	uint64_t t152 = 545638161702175LLU;

    t152 = (x861&(x862&(x863*x864)));

    if (t152 != 14LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint16_t x865 = 1181U;
	static volatile int16_t x866 = 0;
	static int16_t x867 = 361;
	static uint64_t x868 = 1481963LLU;
	uint64_t t153 = 836005636LLU;

    t153 = (x865&(x866&(x867*x868)));

    if (t153 != 0LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x869 = INT8_MIN;
	volatile int16_t x870 = INT16_MIN;
	int8_t x871 = INT8_MAX;
	int8_t x872 = INT8_MAX;
	static volatile int32_t t154 = 43076;

    t154 = (x869&(x870&(x871*x872)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x873 = UINT16_MAX;
	int16_t x876 = INT16_MAX;
	volatile int32_t t155 = 327639115;

    t155 = (x873&(x874&(x875*x876)));

    if (t155 != 32768) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x877 = INT8_MIN;
	uint32_t x878 = 58U;
	int32_t x879 = 53;
	static volatile int8_t x880 = INT8_MAX;
	volatile uint32_t t156 = 743U;

    t156 = (x877&(x878&(x879*x880)));

    if (t156 != 0U) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x881 = 9U;
	uint64_t x883 = UINT64_MAX;
	int8_t x884 = 28;
	uint64_t t157 = 2892051275641070548LLU;

    t157 = (x881&(x882&(x883*x884)));

    if (t157 != 0LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x885 = -110939;
	int16_t x886 = INT16_MIN;
	static volatile int8_t x887 = -3;
	uint16_t x888 = 18U;
	int32_t t158 = -1;

    t158 = (x885&(x886&(x887*x888)));

    if (t158 != -131072) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x889 = INT8_MAX;
	static int8_t x891 = INT8_MIN;
	static int64_t x892 = -4896085703139240LL;
	volatile int64_t t159 = -3357030286748LL;

    t159 = (x889&(x890&(x891*x892)));

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x893 = -1;
	int8_t x895 = INT8_MAX;
	volatile int32_t t160 = -66201472;

    t160 = (x893&(x894&(x895*x896)));

    if (t160 != 16129) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x901 = 240852894030LL;
	static int32_t x902 = -1;
	uint32_t x903 = UINT32_MAX;
	volatile int32_t x904 = 30;

    t161 = (x901&(x902&(x903*x904)));

    if (t161 != 334725442LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint16_t x917 = UINT16_MAX;
	int16_t x918 = 4;
	volatile int32_t x919 = -1;
	volatile int16_t x920 = INT16_MIN;
	int32_t t162 = 20268;

    t162 = (x917&(x918&(x919*x920)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x921 = -1;
	volatile int8_t x922 = INT8_MAX;
	volatile uint32_t x923 = 0U;
	int64_t x924 = -256744LL;
	volatile int64_t t163 = -159LL;

    t163 = (x921&(x922&(x923*x924)));

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x925 = -1;
	static int64_t x926 = -1817770622LL;
	volatile uint8_t x927 = 1U;
	int32_t x928 = INT32_MIN;
	volatile int64_t t164 = 74145497193LL;

    t164 = (x925&(x926&(x927*x928)));

    if (t164 != -2147483648LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x929 = INT8_MIN;
	int16_t x930 = INT16_MAX;
	static volatile uint8_t x931 = 61U;
	int8_t x932 = INT8_MIN;
	int32_t t165 = 814333660;

    t165 = (x929&(x930&(x931*x932)));

    if (t165 != 24960) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile uint32_t x933 = 33U;
	int16_t x934 = -225;
	volatile int32_t x935 = INT32_MIN;
	int64_t x936 = -732837704LL;

    t166 = (x933&(x934&(x935*x936)));

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x941 = -1;
	static uint16_t x943 = 64U;
	static int64_t x944 = -15818LL;
	int64_t t167 = INT64_MIN;

    t167 = (x941&(x942&(x943*x944)));

    if (t167 != INT64_MIN) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x945 = INT16_MAX;
	int32_t x946 = INT32_MAX;
	int32_t x947 = -1;
	static volatile int16_t x948 = -15637;
	volatile int32_t t168 = 0;

    t168 = (x945&(x946&(x947*x948)));

    if (t168 != 15637) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x949 = INT8_MIN;
	int16_t x950 = INT16_MIN;
	int64_t x951 = -1LL;
	volatile int8_t x952 = INT8_MAX;
	int64_t t169 = -3219685202670LL;

    t169 = (x949&(x950&(x951*x952)));

    if (t169 != -32768LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x953 = INT64_MIN;
	volatile int32_t x954 = -1;
	int64_t x955 = -1LL;
	uint64_t x956 = UINT64_MAX;
	uint64_t t170 = 157191694LLU;

    t170 = (x953&(x954&(x955*x956)));

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x957 = 5097772U;
	volatile uint64_t x958 = UINT64_MAX;
	static uint8_t x960 = UINT8_MAX;
	uint64_t t171 = 31619653373025LLU;

    t171 = (x957&(x958&(x959*x960)));

    if (t171 != 4292644LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x970 = 1302U;
	uint64_t x972 = 12925584101LLU;
	uint64_t t172 = 96210002LLU;

    t172 = (x969&(x970&(x971*x972)));

    if (t172 != 18LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int32_t x977 = -2;
	static int8_t x979 = -1;
	static volatile uint32_t t173 = 7392180U;

    t173 = (x977&(x978&(x979*x980)));

    if (t173 != 4294919422U) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x981 = 0LL;
	uint64_t x982 = 46749611LLU;
	uint8_t x983 = 11U;
	volatile int16_t x984 = -1;
	volatile uint64_t t174 = 27619853LLU;

    t174 = (x981&(x982&(x983*x984)));

    if (t174 != 0LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x986 = INT8_MIN;
	int8_t x987 = INT8_MIN;
	int64_t x988 = -62078678117186682LL;
	static int64_t t175 = -26716887165840LL;

    t175 = (x985&(x986&(x987*x988)));

    if (t175 != 7946070798999895296LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x990 = INT8_MAX;
	static uint32_t x991 = UINT32_MAX;
	uint8_t x992 = UINT8_MAX;
	uint32_t t176 = 68985U;

    t176 = (x989&(x990&(x991*x992)));

    if (t176 != 1U) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x993 = -5;
	volatile uint8_t x994 = 5U;
	static uint16_t x995 = UINT16_MAX;
	static volatile int16_t x996 = -1;

    t177 = (x993&(x994&(x995*x996)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint16_t x1001 = 20882U;
	int16_t x1002 = INT16_MIN;
	int8_t x1004 = INT8_MIN;
	volatile uint64_t t178 = 2283644042LLU;

    t178 = (x1001&(x1002&(x1003*x1004)));

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x1005 = 1;
	int8_t x1006 = -1;
	int16_t x1007 = -1;

    t179 = (x1005&(x1006&(x1007*x1008)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x1013 = -752351078549285817LL;
	int64_t x1014 = INT64_MIN;
	uint16_t x1015 = UINT16_MAX;
	int64_t t180 = INT64_MIN;

    t180 = (x1013&(x1014&(x1015*x1016)));

    if (t180 != INT64_MIN) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x1025 = INT64_MIN;
	static int32_t x1026 = 19646316;
	uint64_t x1027 = 1LLU;
	uint8_t x1028 = 42U;
	volatile uint64_t t181 = 310840081002LLU;

    t181 = (x1025&(x1026&(x1027*x1028)));

    if (t181 != 0LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x1029 = 10U;
	volatile int32_t x1030 = -1554;
	int32_t x1031 = 3;
	static uint8_t x1032 = 0U;
	int32_t t182 = -909448872;

    t182 = (x1029&(x1030&(x1031*x1032)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int32_t x1033 = -1;
	uint16_t x1034 = UINT16_MAX;
	uint32_t x1035 = 97U;
	static int64_t x1036 = -1LL;
	volatile int64_t t183 = 1820184048LL;

    t183 = (x1033&(x1034&(x1035*x1036)));

    if (t183 != 65439LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x1037 = UINT32_MAX;
	static int64_t x1038 = 17519292613LL;
	volatile int64_t x1039 = INT64_MAX;
	int16_t x1040 = -1;
	int64_t t184 = 63LL;

    t184 = (x1037&(x1038&(x1039*x1040)));

    if (t184 != 1LL) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x1041 = INT8_MIN;
	uint16_t x1042 = 7698U;
	static uint32_t x1043 = UINT32_MAX;
	volatile int64_t x1044 = 1979803166LL;
	static volatile int64_t t185 = 188178886040844LL;

    t185 = (x1041&(x1042&(x1043*x1044)));

    if (t185 != 6144LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x1045 = UINT32_MAX;
	volatile uint16_t x1046 = 107U;
	uint64_t x1047 = 12LLU;
	int16_t x1048 = -1;

    t186 = (x1045&(x1046&(x1047*x1048)));

    if (t186 != 96LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x1053 = INT8_MIN;
	int8_t x1054 = 7;
	int16_t x1055 = 5733;
	int16_t x1056 = -1;

    t187 = (x1053&(x1054&(x1055*x1056)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x1058 = 46;
	int8_t x1060 = -9;
	int32_t t188 = 369043;

    t188 = (x1057&(x1058&(x1059*x1060)));

    if (t188 != 36) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int8_t x1062 = INT8_MAX;
	uint32_t x1063 = 490884188U;
	static int16_t x1064 = INT16_MAX;
	int64_t t189 = -51LL;

    t189 = (x1061&(x1062&(x1063*x1064)));

    if (t189 != 36LL) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int16_t x1065 = 1715;
	volatile int64_t x1066 = INT64_MIN;
	volatile uint32_t x1067 = UINT32_MAX;
	int64_t t190 = 2380LL;

    t190 = (x1065&(x1066&(x1067*x1068)));

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x1077 = -1;
	int8_t x1078 = INT8_MIN;
	volatile uint32_t x1079 = 3629U;
	int8_t x1080 = INT8_MIN;
	uint32_t t191 = 61U;

    t191 = (x1077&(x1078&(x1079*x1080)));

    if (t191 != 4294502784U) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint8_t x1081 = 7U;
	static int8_t x1083 = INT8_MIN;
	uint64_t x1084 = 7946241831385565LLU;
	static volatile uint64_t t192 = 59596215334LLU;

    t192 = (x1081&(x1082&(x1083*x1084)));

    if (t192 != 0LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x1093 = 723010U;
	int16_t x1094 = -29;
	int16_t x1095 = 12972;
	volatile uint16_t x1096 = 8857U;

    t193 = (x1093&(x1094&(x1095*x1096)));

    if (t193 != 589888U) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x1097 = UINT32_MAX;
	int32_t x1098 = -189060714;
	static volatile uint16_t x1099 = UINT16_MAX;
	static int32_t x1100 = -1;

    t194 = (x1097&(x1098&(x1099*x1100)));

    if (t194 != 4105895936U) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x1103 = 26U;
	static volatile int16_t x1104 = -850;
	uint32_t t195 = 149U;

    t195 = (x1101&(x1102&(x1103*x1104)));

    if (t195 != 0U) { NG(); } else { ; }
	
}

void f196(void) {
    	static int32_t x1105 = INT32_MIN;
	uint32_t x1107 = UINT32_MAX;
	int64_t x1108 = -4958LL;
	int64_t t196 = 574280116896042LL;

    t196 = (x1105&(x1106&(x1107*x1108)));

    if (t196 != -21294447853568LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x1109 = INT64_MIN;
	uint32_t x1110 = 214200712U;
	int8_t x1111 = -6;
	int64_t x1112 = -492817137320LL;
	volatile int64_t t197 = -9320669607238222LL;

    t197 = (x1109&(x1110&(x1111*x1112)));

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x1113 = -1;
	static volatile uint16_t x1114 = 1004U;
	int32_t x1115 = 431;
	uint16_t x1116 = UINT16_MAX;
	volatile int32_t t198 = -11660;

    t198 = (x1113&(x1114&(x1115*x1116)));

    if (t198 != 576) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x1117 = 0U;
	volatile int16_t x1118 = INT16_MIN;
	uint32_t x1119 = 2648U;
	volatile uint8_t x1120 = UINT8_MAX;
	volatile uint32_t t199 = 240U;

    t199 = (x1117&(x1118&(x1119*x1120)));

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

