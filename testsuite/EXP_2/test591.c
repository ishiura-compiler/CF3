
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

static int16_t x6 = -1;
volatile uint32_t x12 = UINT32_MAX;
static volatile int64_t t1 = -815587111072LL;
int16_t x28 = 7;
uint8_t x29 = 15U;
static volatile uint64_t t5 = 30948LLU;
uint8_t x52 = UINT8_MAX;
volatile int64_t t8 = -61LL;
uint64_t x53 = UINT64_MAX;
int64_t x55 = INT64_MIN;
int8_t x56 = INT8_MIN;
volatile int8_t x57 = -1;
volatile uint32_t t10 = 1282U;
volatile uint32_t t11 = 0U;
volatile uint64_t t15 = 882109335580868LLU;
uint16_t x96 = 311U;
volatile uint32_t t17 = 172777U;
volatile uint32_t x110 = 8106U;
uint64_t x111 = UINT64_MAX;
static volatile uint32_t x113 = 114325U;
volatile int64_t t20 = 6556LL;
uint64_t x136 = 14511829107817513LLU;
uint32_t x144 = UINT32_MAX;
volatile uint32_t t25 = 31694U;
volatile int32_t x165 = 0;
static volatile int8_t x167 = -15;
static int32_t x168 = INT32_MIN;
volatile int8_t x172 = 1;
int8_t x176 = INT8_MIN;
uint16_t x178 = 12633U;
volatile int32_t t31 = -1;
int64_t x184 = INT64_MIN;
volatile uint64_t t32 = 3521LLU;
volatile uint64_t x194 = UINT64_MAX;
int8_t x195 = -1;
int8_t x197 = -1;
volatile int8_t x204 = -22;
int32_t x210 = INT32_MAX;
int64_t t37 = -247316584595151LL;
volatile int32_t t38 = 745;
volatile uint16_t x225 = 409U;
int64_t x228 = -1LL;
static volatile int32_t x231 = 1;
volatile int8_t x241 = INT8_MAX;
static uint16_t x243 = UINT16_MAX;
int32_t t44 = -52882;
uint16_t x258 = UINT16_MAX;
int8_t x273 = INT8_MIN;
int32_t x276 = 251;
volatile int64_t x286 = 21792616116661LL;
int32_t x299 = 4;
static uint64_t t51 = 0LLU;
volatile uint8_t x301 = 1U;
volatile uint16_t x311 = 9340U;
volatile int32_t t53 = -132092978;
static int16_t x331 = INT16_MIN;
static volatile uint32_t t56 = 115148670U;
int64_t x353 = 126LL;
int64_t t59 = -20184518731112LL;
static int64_t x366 = -1LL;
uint64_t t60 = 61LLU;
int64_t t61 = 106522498800LL;
int32_t x383 = -1;
volatile int32_t t63 = 797;
int16_t x388 = INT16_MIN;
volatile int64_t x389 = -1LL;
int8_t x392 = INT8_MIN;
volatile int64_t x398 = INT64_MIN;
static uint16_t x401 = 84U;
volatile int64_t x402 = -6463472017LL;
static uint8_t x405 = 9U;
volatile int16_t x411 = INT16_MIN;
uint64_t t70 = 1764291054LLU;
static int64_t t71 = 15547133575025LL;
static int64_t x435 = -1LL;
volatile int64_t t73 = -1LL;
static int8_t x450 = INT8_MIN;
int64_t x456 = -169737044158LL;
static volatile int64_t x458 = INT64_MIN;
int32_t t79 = INT32_MIN;
uint64_t x465 = 46433866038302LLU;
static uint64_t t80 = 79668206LLU;
volatile int64_t x471 = INT64_MIN;
static volatile int64_t t81 = 62232839LL;
int64_t x473 = 1LL;
uint16_t x479 = 1U;
int8_t x497 = INT8_MIN;
static uint8_t x500 = 2U;
int8_t x505 = -40;
static int8_t x512 = -13;
volatile uint16_t x518 = 3U;
volatile uint32_t t88 = 743249U;
volatile int64_t x522 = -187376LL;
int64_t x524 = -127433LL;
static int32_t x527 = INT32_MIN;
int32_t t90 = -208835;
uint64_t x530 = UINT64_MAX;
int8_t x535 = 15;
static int8_t x548 = 0;
int16_t x549 = -1;
volatile int8_t x562 = 15;
static int64_t x563 = 636LL;
static volatile uint64_t x571 = 234655796178LLU;
int64_t x579 = INT64_MIN;
uint32_t x581 = 117U;
uint32_t x591 = UINT32_MAX;
static volatile uint64_t t105 = 3901564616599LLU;
static uint32_t x596 = 188654U;
uint64_t t107 = 9104LLU;
uint8_t x612 = UINT8_MAX;
int16_t x618 = 1;
int32_t x621 = INT32_MIN;
uint8_t x622 = UINT8_MAX;
uint32_t t117 = 1840U;
static uint8_t x669 = UINT8_MAX;
uint16_t x672 = UINT16_MAX;
int16_t x674 = -11801;
uint16_t x678 = UINT16_MAX;
int8_t x680 = 12;
int16_t x718 = -7339;
int64_t t129 = -115586LL;
static volatile int8_t x733 = 31;
volatile int32_t t130 = 154472;
static int16_t x738 = -98;
volatile uint32_t t131 = 215422U;
int8_t x752 = INT8_MAX;
volatile uint64_t t133 = 170835909171372LLU;
static int64_t x765 = INT64_MAX;
uint64_t x767 = 2552843LLU;
uint64_t t135 = 597078503272LLU;
int8_t x784 = 4;
static uint64_t t138 = 6403015408971LLU;
int32_t x787 = INT32_MIN;
int16_t x806 = INT16_MAX;
int16_t x812 = -1;
volatile uint16_t x816 = UINT16_MAX;
volatile int32_t t143 = -842952600;
volatile uint32_t t146 = 394426284U;
static int16_t x836 = -7163;
uint32_t x839 = 86338U;
int8_t x840 = INT8_MAX;
static int32_t x850 = -1;
int64_t x866 = -387255LL;
static int32_t x873 = -1;
int16_t x876 = -1;
int64_t t154 = 565513120LL;
int16_t x877 = -1;
static int16_t x891 = 13227;
volatile int32_t t158 = -821;
int16_t x894 = INT16_MIN;
volatile uint64_t x896 = 233252952882LLU;
int8_t x897 = INT8_MIN;
uint8_t x900 = UINT8_MAX;
int32_t x912 = -15339;
int16_t x929 = -77;
static int64_t x934 = INT64_MIN;
uint64_t t165 = 439258108371133834LLU;
int16_t x938 = -1;
int64_t t167 = 3752691LL;
uint32_t x945 = UINT32_MAX;
int16_t x947 = INT16_MAX;
volatile uint32_t t168 = 2U;
uint32_t x955 = UINT32_MAX;
uint32_t x964 = 910U;
uint8_t x978 = UINT8_MAX;
static int8_t x985 = INT8_MIN;
int32_t t176 = 45966;
static int16_t x1001 = -1;
uint32_t x1002 = 1826U;
uint16_t x1003 = 22228U;
static uint16_t x1005 = 129U;
static int8_t x1006 = -1;
int16_t x1009 = INT16_MIN;
int16_t x1013 = INT16_MAX;
uint64_t t182 = 545117510799809198LLU;
uint64_t x1026 = 6004795LLU;
static volatile uint64_t t183 = 892087736LLU;
static uint32_t x1032 = 68697429U;
int16_t x1038 = INT16_MAX;
uint32_t x1045 = 876U;
int64_t x1046 = -1773250LL;
static uint8_t x1049 = UINT8_MAX;
uint32_t x1060 = 218143U;
int64_t x1064 = -1LL;
uint16_t x1065 = 12U;
uint64_t x1066 = 1949877LLU;
int64_t x1069 = INT64_MIN;
uint64_t x1085 = 12748LLU;
volatile uint64_t x1088 = UINT64_MAX;
uint8_t x1089 = 1U;
static uint64_t x1093 = 10324490941468LLU;
uint16_t x1102 = UINT16_MAX;


void f0(void) {
    	uint16_t x5 = UINT16_MAX;
	uint64_t x7 = 51834984647LLU;
	volatile int32_t x8 = INT32_MIN;
	volatile uint64_t t0 = 163023LLU;

    t0 = ((x5+(x6/x7))*x8);

    if (t0 != 17682368883626868736LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint16_t x9 = 0U;
	volatile int64_t x10 = -1LL;
	int64_t x11 = INT64_MIN;

    t1 = ((x9+(x10/x11))*x12);

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x25 = -525LL;
	volatile uint8_t x26 = 35U;
	int64_t x27 = INT64_MIN;
	volatile int64_t t2 = 252LL;

    t2 = ((x25+(x26/x27))*x28);

    if (t2 != -3675LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x30 = -81928470223756LL;
	volatile uint32_t x31 = 198864U;
	uint8_t x32 = 2U;
	int64_t t3 = 928808133785LL;

    t3 = ((x29+(x30/x31))*x32);

    if (t3 != -823964792LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x33 = -113;
	int64_t x34 = -423040137721666760LL;
	uint32_t x35 = 6650489U;
	int16_t x36 = INT16_MIN;
	static int64_t t4 = 374814593LL;

    t4 = ((x33+(x34/x35))*x36);

    if (t4 != 2084384961363968LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x37 = 4604001661906LL;
	volatile int8_t x38 = INT8_MIN;
	uint64_t x39 = 794841319245138263LLU;
	int64_t x40 = INT64_MIN;

    t5 = ((x37+(x38/x39))*x40);

    if (t5 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int8_t x41 = INT8_MIN;
	int16_t x42 = -2272;
	static int32_t x43 = INT32_MIN;
	int8_t x44 = 0;
	static int32_t t6 = 10342;

    t6 = ((x41+(x42/x43))*x44);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x45 = 0U;
	int8_t x46 = 14;
	static int16_t x47 = INT16_MIN;
	static uint32_t x48 = 911793323U;
	static uint32_t t7 = 139U;

    t7 = ((x45+(x46/x47))*x48);

    if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x49 = -1;
	static int64_t x50 = -11024561111LL;
	int64_t x51 = INT64_MAX;

    t8 = ((x49+(x50/x51))*x52);

    if (t8 != -255LL) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint8_t x54 = 15U;
	volatile uint64_t t9 = 364279992LLU;

    t9 = ((x53+(x54/x55))*x56);

    if (t9 != 128LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile uint32_t x58 = 14U;
	int8_t x59 = 1;
	int16_t x60 = INT16_MIN;

    t10 = ((x57+(x58/x59))*x60);

    if (t10 != 4294541312U) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x61 = 3;
	uint32_t x62 = 925557212U;
	int16_t x63 = INT16_MAX;
	uint8_t x64 = UINT8_MAX;

    t11 = ((x61+(x62/x63))*x64);

    if (t11 != 7203495U) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x65 = -1LL;
	volatile uint64_t x66 = 7734LLU;
	uint32_t x67 = 1026U;
	int16_t x68 = INT16_MAX;
	volatile uint64_t t12 = 199415LLU;

    t12 = ((x65+(x66/x67))*x68);

    if (t12 != 196602LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x69 = -1;
	static uint16_t x70 = 65U;
	int32_t x71 = INT32_MAX;
	int64_t x72 = 15782407680136LL;
	int64_t t13 = -748210157833498271LL;

    t13 = ((x69+(x70/x71))*x72);

    if (t13 != -15782407680136LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int64_t x77 = -1LL;
	static uint32_t x78 = UINT32_MAX;
	uint16_t x79 = 2427U;
	static int8_t x80 = -1;
	int64_t t14 = 8638595524LL;

    t14 = ((x77+(x78/x79))*x80);

    if (t14 != -1769660LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x81 = 244U;
	static uint64_t x82 = 6998323620LLU;
	int32_t x83 = -1;
	uint32_t x84 = UINT32_MAX;

    t15 = ((x81+(x82/x83))*x84);

    if (t15 != 1047972019980LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x89 = -1879740;
	uint16_t x90 = 109U;
	int32_t x91 = INT32_MIN;
	static int64_t x92 = 863725728LL;
	int64_t t16 = -23910080962LL;

    t16 = ((x89+(x90/x91))*x92);

    if (t16 != -1623579799950720LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x93 = UINT8_MAX;
	int16_t x94 = 59;
	static uint32_t x95 = 40889U;

    t17 = ((x93+(x94/x95))*x96);

    if (t17 != 79305U) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint8_t x105 = 42U;
	int8_t x106 = 31;
	int32_t x107 = -1;
	volatile uint8_t x108 = UINT8_MAX;
	int32_t t18 = 82;

    t18 = ((x105+(x106/x107))*x108);

    if (t18 != 2805) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x109 = 13822;
	static int16_t x112 = INT16_MAX;
	uint64_t t19 = 2543362542089510LLU;

    t19 = ((x109+(x110/x111))*x112);

    if (t19 != 452905474LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x114 = INT16_MIN;
	volatile int32_t x115 = -30857905;
	int64_t x116 = 90282LL;

    t20 = ((x113+(x114/x115))*x116);

    if (t20 != 10321489650LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x129 = 28210187820LLU;
	static int32_t x130 = -15;
	int32_t x131 = INT32_MAX;
	volatile uint64_t x132 = UINT64_MAX;
	uint64_t t21 = 3025LLU;

    t21 = ((x129+(x130/x131))*x132);

    if (t21 != 18446744045499363796LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint32_t x133 = UINT32_MAX;
	int16_t x134 = INT16_MAX;
	int16_t x135 = INT16_MAX;
	static volatile uint64_t t22 = 254500LLU;

    t22 = ((x133+(x134/x135))*x136);

    if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x137 = INT64_MIN;
	uint32_t x138 = UINT32_MAX;
	uint16_t x139 = 4U;
	static volatile int8_t x140 = 1;
	int64_t t23 = -13482119098LL;

    t23 = ((x137+(x138/x139))*x140);

    if (t23 != -9223372035781033985LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x141 = -3;
	int64_t x142 = 53559507LL;
	uint8_t x143 = 1U;
	int64_t t24 = -58LL;

    t24 = ((x141+(x142/x143))*x144);

    if (t24 != 230036318016421680LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x149 = 224799662U;
	int16_t x150 = INT16_MIN;
	static volatile int8_t x151 = 1;
	int32_t x152 = INT32_MIN;

    t25 = ((x149+(x150/x151))*x152);

    if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint32_t x157 = 108715546U;
	int64_t x158 = INT64_MAX;
	int64_t x159 = INT64_MAX;
	volatile int8_t x160 = -1;
	static int64_t t26 = 1014991LL;

    t26 = ((x157+(x158/x159))*x160);

    if (t26 != -108715547LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x161 = 104U;
	uint16_t x162 = 7U;
	static int32_t x163 = INT32_MIN;
	static volatile uint16_t x164 = UINT16_MAX;
	volatile int32_t t27 = 3;

    t27 = ((x161+(x162/x163))*x164);

    if (t27 != 6815640) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x166 = UINT32_MAX;
	uint32_t t28 = 3U;

    t28 = ((x165+(x166/x167))*x168);

    if (t28 != 2147483648U) { NG(); } else { ; }
	
}

void f29(void) {
    	static int8_t x169 = INT8_MIN;
	int16_t x170 = -1;
	int32_t x171 = -1;
	int32_t t29 = -131932626;

    t29 = ((x169+(x170/x171))*x172);

    if (t29 != -127) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x173 = UINT32_MAX;
	uint64_t x174 = 208108625784LLU;
	uint32_t x175 = 2707U;
	static volatile uint64_t t30 = 1701LLU;

    t30 = ((x173+(x174/x175))*x176);

    if (t30 != 18446743514113359616LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x177 = INT16_MAX;
	static volatile uint16_t x179 = 15U;
	uint8_t x180 = UINT8_MAX;

    t31 = ((x177+(x178/x179))*x180);

    if (t31 != 8570295) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile int16_t x181 = 29;
	static volatile uint64_t x182 = 7LLU;
	uint8_t x183 = 18U;

    t32 = ((x181+(x182/x183))*x184);

    if (t32 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x185 = 23U;
	int16_t x186 = INT16_MIN;
	int32_t x187 = INT32_MIN;
	volatile uint16_t x188 = 1313U;
	int32_t t33 = -1;

    t33 = ((x185+(x186/x187))*x188);

    if (t33 != 30199) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x193 = UINT32_MAX;
	int8_t x196 = -14;
	uint64_t t34 = 451074094902256471LLU;

    t34 = ((x193+(x194/x195))*x196);

    if (t34 != 18446744013580009472LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x198 = -1LL;
	static int32_t x199 = INT32_MAX;
	int16_t x200 = INT16_MAX;
	static int64_t t35 = -38472768710146LL;

    t35 = ((x197+(x198/x199))*x200);

    if (t35 != -32767LL) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x201 = -73;
	volatile int16_t x202 = INT16_MIN;
	volatile int32_t x203 = INT32_MIN;
	static volatile int32_t t36 = 472782;

    t36 = ((x201+(x202/x203))*x204);

    if (t36 != 1606) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x209 = 277U;
	int64_t x211 = 5255LL;
	volatile int16_t x212 = -211;

    t37 = ((x209+(x210/x211))*x212);

    if (t37 != -86284652LL) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int16_t x217 = INT16_MAX;
	int8_t x218 = -1;
	uint16_t x219 = 2U;
	volatile uint8_t x220 = UINT8_MAX;

    t38 = ((x217+(x218/x219))*x220);

    if (t38 != 8355585) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x226 = 3725U;
	uint64_t x227 = UINT64_MAX;
	static volatile uint64_t t39 = 1063648038886569926LLU;

    t39 = ((x225+(x226/x227))*x228);

    if (t39 != 18446744073709551207LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x229 = INT16_MIN;
	uint32_t x230 = 8127959U;
	static int8_t x232 = 0;
	volatile uint32_t t40 = 89309U;

    t40 = ((x229+(x230/x231))*x232);

    if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x233 = 0;
	int32_t x234 = INT32_MIN;
	volatile uint32_t x235 = 31716U;
	static int16_t x236 = INT16_MAX;
	uint32_t t41 = 237980913U;

    t41 = ((x233+(x234/x235))*x236);

    if (t41 != 2218620803U) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x237 = INT8_MAX;
	static volatile int32_t x238 = INT32_MIN;
	volatile int64_t x239 = 19726900639239LL;
	static int32_t x240 = -138489485;
	volatile int64_t t42 = -572500180631LL;

    t42 = ((x237+(x238/x239))*x240);

    if (t42 != -17588164595LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static int32_t x242 = INT32_MAX;
	int32_t x244 = -4;
	static volatile int32_t t43 = -68170671;

    t43 = ((x241+(x242/x243))*x244);

    if (t43 != -131580) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint8_t x249 = UINT8_MAX;
	int16_t x250 = INT16_MAX;
	uint8_t x251 = 14U;
	static volatile int16_t x252 = INT16_MIN;

    t44 = ((x249+(x250/x251))*x252);

    if (t44 != -85032960) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x257 = -28;
	int64_t x259 = INT64_MAX;
	static int8_t x260 = INT8_MAX;
	int64_t t45 = -4031LL;

    t45 = ((x257+(x258/x259))*x260);

    if (t45 != -3556LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint8_t x265 = 15U;
	static volatile int32_t x266 = INT32_MIN;
	uint64_t x267 = UINT64_MAX;
	int16_t x268 = INT16_MIN;
	static volatile uint64_t t46 = 156135806051525807LLU;

    t46 = ((x265+(x266/x267))*x268);

    if (t46 != 18446744073709060096LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x274 = INT8_MAX;
	static volatile int8_t x275 = INT8_MAX;
	int32_t t47 = -1;

    t47 = ((x273+(x274/x275))*x276);

    if (t47 != -31877) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x277 = 80U;
	int64_t x278 = INT64_MAX;
	static volatile uint16_t x279 = 465U;
	static volatile int8_t x280 = -58;
	static int64_t t48 = -1LL;

    t48 = ((x277+(x278/x279))*x280);

    if (t48 != -1150442103521675600LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint64_t x285 = 184LLU;
	static uint16_t x287 = UINT16_MAX;
	int8_t x288 = -1;
	volatile uint64_t t49 = 32097244LLU;

    t49 = ((x285+(x286/x287))*x288);

    if (t49 != 18446744073377017426LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x293 = INT16_MAX;
	uint8_t x294 = 24U;
	volatile int8_t x295 = -1;
	int16_t x296 = INT16_MAX;
	static int32_t t50 = -477031188;

    t50 = ((x293+(x294/x295))*x296);

    if (t50 != 1072889881) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x297 = UINT64_MAX;
	volatile uint32_t x298 = 25153U;
	uint64_t x300 = UINT64_MAX;

    t51 = ((x297+(x298/x299))*x300);

    if (t51 != 18446744073709545329LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint16_t x302 = 113U;
	static uint8_t x303 = UINT8_MAX;
	volatile int64_t x304 = 981LL;
	int64_t t52 = -8738402503169577LL;

    t52 = ((x301+(x302/x303))*x304);

    if (t52 != 981LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x309 = -1;
	int8_t x310 = -20;
	int16_t x312 = INT16_MIN;

    t53 = ((x309+(x310/x311))*x312);

    if (t53 != 32768) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x321 = 1390;
	volatile int64_t x322 = INT64_MAX;
	int32_t x323 = -1;
	int64_t x324 = -1LL;
	static volatile int64_t t54 = 1LL;

    t54 = ((x321+(x322/x323))*x324);

    if (t54 != 9223372036854774417LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x325 = UINT64_MAX;
	static int16_t x326 = INT16_MIN;
	uint32_t x327 = 61280664U;
	int8_t x328 = -1;
	volatile uint64_t t55 = 473LLU;

    t55 = ((x325+(x326/x327))*x328);

    if (t55 != 18446744073709551547LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile uint32_t x329 = UINT32_MAX;
	uint16_t x330 = UINT16_MAX;
	uint16_t x332 = 762U;

    t56 = ((x329+(x330/x331))*x332);

    if (t56 != 4294965772U) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x333 = -1;
	static int32_t x334 = -1;
	int64_t x335 = -42775073349LL;
	int64_t x336 = 5419310LL;
	int64_t t57 = -257562LL;

    t57 = ((x333+(x334/x335))*x336);

    if (t57 != -5419310LL) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x349 = UINT8_MAX;
	uint16_t x350 = UINT16_MAX;
	int16_t x351 = INT16_MIN;
	uint32_t x352 = 1U;
	volatile uint32_t t58 = 465U;

    t58 = ((x349+(x350/x351))*x352);

    if (t58 != 254U) { NG(); } else { ; }
	
}

void f59(void) {
    	static int32_t x354 = 222144;
	uint8_t x355 = UINT8_MAX;
	volatile uint8_t x356 = UINT8_MAX;

    t59 = ((x353+(x354/x355))*x356);

    if (t59 != 254235LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x365 = INT8_MAX;
	static volatile uint64_t x367 = UINT64_MAX;
	static volatile int8_t x368 = INT8_MAX;

    t60 = ((x365+(x366/x367))*x368);

    if (t60 != 16256LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x373 = -1LL;
	uint16_t x374 = UINT16_MAX;
	int16_t x375 = -66;
	int8_t x376 = -1;

    t61 = ((x373+(x374/x375))*x376);

    if (t61 != 993LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x377 = 0U;
	uint16_t x378 = UINT16_MAX;
	static volatile uint8_t x379 = UINT8_MAX;
	int16_t x380 = -1;
	static volatile int32_t t62 = -22;

    t62 = ((x377+(x378/x379))*x380);

    if (t62 != -257) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x381 = INT8_MIN;
	int16_t x382 = INT16_MAX;
	static uint16_t x384 = 11748U;

    t63 = ((x381+(x382/x383))*x384);

    if (t63 != -386450460) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x385 = -1;
	int64_t x386 = -116322607083LL;
	int8_t x387 = INT8_MAX;
	volatile int64_t t64 = -206431506854678693LL;

    t64 = ((x385+(x386/x387))*x388);

    if (t64 != 30013064511488LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint16_t x390 = 27160U;
	uint16_t x391 = 218U;
	static int64_t t65 = -1979087369LL;

    t65 = ((x389+(x390/x391))*x392);

    if (t65 != -15744LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x393 = 15912;
	uint64_t x394 = UINT64_MAX;
	int16_t x395 = -9;
	int32_t x396 = 1;
	volatile uint64_t t66 = 839439635297364LLU;

    t66 = ((x393+(x394/x395))*x396);

    if (t66 != 15913LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint32_t x397 = 28U;
	volatile int32_t x399 = INT32_MAX;
	volatile int8_t x400 = INT8_MAX;
	volatile int64_t t67 = -1437474850748LL;

    t67 = ((x397+(x398/x399))*x400);

    if (t67 != -545460843290LL) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint16_t x403 = UINT16_MAX;
	volatile int8_t x404 = -1;
	volatile int64_t t68 = 125528329038953LL;

    t68 = ((x401+(x402/x403))*x404);

    if (t68 != 98542LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x406 = -1;
	int16_t x407 = -1;
	static uint16_t x408 = 312U;
	int32_t t69 = 33884276;

    t69 = ((x405+(x406/x407))*x408);

    if (t69 != 3120) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x409 = 62;
	static int32_t x410 = -1;
	uint64_t x412 = 63LLU;

    t70 = ((x409+(x410/x411))*x412);

    if (t70 != 3906LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x413 = INT32_MIN;
	int64_t x414 = INT64_MIN;
	volatile int64_t x415 = 246431LL;
	volatile uint16_t x416 = 4U;

    t71 = ((x413+(x414/x415))*x416);

    if (t71 != -149719820045328LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x421 = -1;
	int64_t x422 = -1LL;
	int16_t x423 = INT16_MIN;
	uint32_t x424 = 46594U;
	int64_t t72 = 5568428842911LL;

    t72 = ((x421+(x422/x423))*x424);

    if (t72 != -46594LL) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int32_t x433 = INT32_MIN;
	int32_t x434 = INT32_MIN;
	volatile int8_t x436 = INT8_MIN;

    t73 = ((x433+(x434/x435))*x436);

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x441 = -1;
	int32_t x442 = INT32_MAX;
	static volatile uint16_t x443 = UINT16_MAX;
	uint16_t x444 = UINT16_MAX;
	int32_t t74 = -6974;

    t74 = ((x441+(x442/x443))*x444);

    if (t74 != 2147385345) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x445 = INT8_MAX;
	int8_t x446 = -1;
	volatile int8_t x447 = INT8_MIN;
	uint32_t x448 = UINT32_MAX;
	uint32_t t75 = 10963218U;

    t75 = ((x445+(x446/x447))*x448);

    if (t75 != 4294967169U) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int32_t x449 = -110347674;
	int64_t x451 = INT64_MAX;
	int16_t x452 = -1;
	volatile int64_t t76 = 46562033208915217LL;

    t76 = ((x449+(x450/x451))*x452);

    if (t76 != 110347674LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x453 = -1;
	uint64_t x454 = UINT64_MAX;
	int8_t x455 = 4;
	uint64_t t77 = 1832475312705938505LLU;

    t77 = ((x453+(x454/x455))*x456);

    if (t77 != 9223372376328864124LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x457 = 24958U;
	int64_t x459 = 84782LL;
	volatile int16_t x460 = INT16_MIN;
	volatile int64_t t78 = -4387LL;

    t78 = ((x457+(x458/x459))*x460);

    if (t78 != 3564806855633502208LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile int32_t x461 = INT32_MIN;
	int8_t x462 = INT8_MIN;
	int32_t x463 = -4292;
	static int8_t x464 = 1;

    t79 = ((x461+(x462/x463))*x464);

    if (t79 != INT32_MIN) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x466 = INT8_MAX;
	int8_t x467 = 16;
	uint64_t x468 = 16070365219922LLU;

    t80 = ((x465+(x466/x467))*x468);

    if (t80 != 352589547217879002LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x469 = INT16_MIN;
	static int16_t x470 = -1;
	int64_t x472 = -1LL;

    t81 = ((x469+(x470/x471))*x472);

    if (t81 != 32768LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x474 = -1;
	int8_t x475 = INT8_MIN;
	static uint64_t x476 = 16004048LLU;
	static volatile uint64_t t82 = 138691LLU;

    t82 = ((x473+(x474/x475))*x476);

    if (t82 != 16004048LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x477 = UINT64_MAX;
	int32_t x478 = INT32_MIN;
	int64_t x480 = INT64_MIN;
	static volatile uint64_t t83 = 30445488221094LLU;

    t83 = ((x477+(x478/x479))*x480);

    if (t83 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x485 = -30;
	int32_t x486 = -1;
	volatile uint16_t x487 = UINT16_MAX;
	int8_t x488 = INT8_MAX;
	volatile int32_t t84 = -16;

    t84 = ((x485+(x486/x487))*x488);

    if (t84 != -3810) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x498 = INT16_MIN;
	uint8_t x499 = 42U;
	static volatile int32_t t85 = -671016963;

    t85 = ((x497+(x498/x499))*x500);

    if (t85 != -1816) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x506 = UINT16_MAX;
	int8_t x507 = INT8_MIN;
	int32_t x508 = 16;
	int32_t t86 = 1459;

    t86 = ((x505+(x506/x507))*x508);

    if (t86 != -8816) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x509 = 371U;
	int16_t x510 = -3;
	static int8_t x511 = -2;
	static volatile int32_t t87 = 1;

    t87 = ((x509+(x510/x511))*x512);

    if (t87 != -4836) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x517 = 16130U;
	int16_t x519 = INT16_MAX;
	volatile int16_t x520 = 186;

    t88 = ((x517+(x518/x519))*x520);

    if (t88 != 3000180U) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint64_t x521 = 1453LLU;
	uint64_t x523 = 534730919209136LLU;
	static uint64_t t89 = 445928943633LLU;

    t89 = ((x521+(x522/x523))*x524);

    if (t89 != 18446744069128335266LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x525 = -1;
	int16_t x526 = -1;
	static int16_t x528 = INT16_MIN;

    t90 = ((x525+(x526/x527))*x528);

    if (t90 != 32768) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x529 = 1734290940U;
	int16_t x531 = -12956;
	int64_t x532 = -679985LL;
	volatile uint64_t t91 = 1957940698LLU;

    t91 = ((x529+(x530/x531))*x532);

    if (t91 != 18445564781884035731LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint64_t x533 = 119336501626435865LLU;
	uint8_t x534 = 14U;
	uint32_t x536 = 15103010U;
	uint64_t t92 = 7523349838978403942LLU;

    t92 = ((x533+(x534/x535))*x536);

    if (t92 != 1247707285392812370LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x541 = -1;
	static int64_t x542 = INT64_MAX;
	int32_t x543 = -20653010;
	volatile int32_t x544 = -81;
	int64_t t93 = -2365LL;

    t93 = ((x541+(x542/x543))*x544);

    if (t93 != 36173571551343LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x545 = UINT32_MAX;
	static int8_t x546 = -1;
	int64_t x547 = INT64_MIN;
	volatile int64_t t94 = -1111930687292785LL;

    t94 = ((x545+(x546/x547))*x548);

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int32_t x550 = INT32_MIN;
	uint32_t x551 = 65U;
	uint32_t x552 = 267U;
	volatile uint32_t t95 = 5774U;

    t95 = ((x549+(x550/x551))*x552);

    if (t95 != 231266944U) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x553 = UINT8_MAX;
	int16_t x554 = INT16_MIN;
	int32_t x555 = INT32_MIN;
	int32_t x556 = -1;
	int32_t t96 = 29127;

    t96 = ((x553+(x554/x555))*x556);

    if (t96 != -255) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x557 = 191920LLU;
	int8_t x558 = -21;
	volatile uint64_t x559 = UINT64_MAX;
	int32_t x560 = INT32_MIN;
	uint64_t t97 = 459578065LLU;

    t97 = ((x557+(x558/x559))*x560);

    if (t97 != 18446331928647827456LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int16_t x561 = 6611;
	int16_t x564 = INT16_MAX;
	volatile int64_t t98 = -135705160780720366LL;

    t98 = ((x561+(x562/x563))*x564);

    if (t98 != 216622637LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x565 = INT16_MIN;
	static int16_t x566 = -2;
	int32_t x567 = INT32_MIN;
	int8_t x568 = INT8_MIN;
	volatile int32_t t99 = 60585165;

    t99 = ((x565+(x566/x567))*x568);

    if (t99 != 4194304) { NG(); } else { ; }
	
}

void f100(void) {
    	static int8_t x569 = INT8_MIN;
	volatile int8_t x570 = 3;
	uint16_t x572 = UINT16_MAX;
	static uint64_t t100 = 154468296416888246LLU;

    t100 = ((x569+(x570/x571))*x572);

    if (t100 != 18446744073701163136LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x573 = INT8_MIN;
	int64_t x574 = -23214LL;
	volatile uint8_t x575 = 9U;
	volatile int32_t x576 = -1;
	int64_t t101 = 3502LL;

    t101 = ((x573+(x574/x575))*x576);

    if (t101 != 2707LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x577 = -1;
	int64_t x578 = INT64_MIN;
	static int8_t x580 = -2;
	volatile int64_t t102 = -49489274671LL;

    t102 = ((x577+(x578/x579))*x580);

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x582 = -36;
	static volatile int8_t x583 = INT8_MAX;
	uint16_t x584 = 26193U;
	static volatile uint32_t t103 = 298U;

    t103 = ((x581+(x582/x583))*x584);

    if (t103 != 3064581U) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint32_t x585 = 34U;
	int64_t x586 = INT64_MAX;
	volatile int64_t x587 = INT64_MIN;
	static uint32_t x588 = 5U;
	int64_t t104 = 246405LL;

    t104 = ((x585+(x586/x587))*x588);

    if (t104 != 170LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x589 = -1LL;
	volatile uint64_t x590 = UINT64_MAX;
	uint32_t x592 = 262659U;

    t105 = ((x589+(x590/x591))*x592);

    if (t105 != 1128111815000064LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	static int32_t x593 = INT32_MIN;
	static volatile uint8_t x594 = 0U;
	static int64_t x595 = 615619268540LL;
	volatile int64_t t106 = -636205746983LL;

    t106 = ((x593+(x594/x595))*x596);

    if (t106 != -405131380129792LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x597 = 8261442LL;
	int8_t x598 = -1;
	volatile int16_t x599 = INT16_MIN;
	static volatile uint64_t x600 = UINT64_MAX;

    t107 = ((x597+(x598/x599))*x600);

    if (t107 != 18446744073701290174LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x605 = 2422U;
	volatile int8_t x606 = INT8_MIN;
	volatile uint16_t x607 = 547U;
	int16_t x608 = INT16_MIN;
	static int32_t t108 = -9195407;

    t108 = ((x605+(x606/x607))*x608);

    if (t108 != -79364096) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x609 = -1;
	int16_t x610 = INT16_MIN;
	uint32_t x611 = 183U;
	volatile uint32_t t109 = 8483U;

    t109 = ((x609+(x610/x611))*x612);

    if (t109 != 1689777134U) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x617 = UINT64_MAX;
	volatile int32_t x619 = INT32_MIN;
	int8_t x620 = INT8_MIN;
	static volatile uint64_t t110 = 63898540LLU;

    t110 = ((x617+(x618/x619))*x620);

    if (t110 != 128LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x623 = INT8_MAX;
	int8_t x624 = -1;
	static volatile int32_t t111 = 11;

    t111 = ((x621+(x622/x623))*x624);

    if (t111 != 2147483646) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint32_t x625 = UINT32_MAX;
	uint8_t x626 = 74U;
	static int64_t x627 = -1749172895558572578LL;
	int16_t x628 = INT16_MIN;
	static volatile int64_t t112 = -302LL;

    t112 = ((x625+(x626/x627))*x628);

    if (t112 != -140737488322560LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x633 = INT16_MIN;
	static int8_t x634 = -1;
	volatile int32_t x635 = -51;
	int8_t x636 = INT8_MAX;
	volatile int32_t t113 = 0;

    t113 = ((x633+(x634/x635))*x636);

    if (t113 != -4161536) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x645 = -1;
	uint16_t x646 = 361U;
	int16_t x647 = -1;
	int8_t x648 = INT8_MIN;
	volatile int32_t t114 = 145639197;

    t114 = ((x645+(x646/x647))*x648);

    if (t114 != 46336) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x657 = UINT8_MAX;
	int64_t x658 = -1LL;
	static int8_t x659 = INT8_MAX;
	volatile uint64_t x660 = 4664390929154140LLU;
	volatile uint64_t t115 = 2146016632442LLU;

    t115 = ((x657+(x658/x659))*x660);

    if (t115 != 1189419686934305700LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x661 = -1;
	int32_t x662 = -7410;
	int32_t x663 = 513667;
	static volatile int8_t x664 = INT8_MIN;
	static int32_t t116 = 1346174;

    t116 = ((x661+(x662/x663))*x664);

    if (t116 != 128) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x665 = 1;
	uint32_t x666 = UINT32_MAX;
	volatile int32_t x667 = INT32_MIN;
	int16_t x668 = -1;

    t117 = ((x665+(x666/x667))*x668);

    if (t117 != 4294967294U) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int64_t x670 = 8643226850500LL;
	static int32_t x671 = INT32_MIN;
	int64_t t118 = 205335LL;

    t118 = ((x669+(x670/x671))*x672);

    if (t118 != -247001415LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x673 = INT16_MIN;
	uint16_t x675 = 5797U;
	volatile uint32_t x676 = UINT32_MAX;
	uint32_t t119 = 288U;

    t119 = ((x673+(x674/x675))*x676);

    if (t119 != 32770U) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x677 = -1;
	volatile int32_t x679 = -1;
	int32_t t120 = 924756567;

    t120 = ((x677+(x678/x679))*x680);

    if (t120 != -786432) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x681 = -49;
	volatile uint64_t x682 = 14876325LLU;
	int32_t x683 = INT32_MIN;
	static volatile uint16_t x684 = 55U;
	uint64_t t121 = 2054881484369427203LLU;

    t121 = ((x681+(x682/x683))*x684);

    if (t121 != 18446744073709548921LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	static int8_t x689 = INT8_MIN;
	int64_t x690 = 880667LL;
	int8_t x691 = -29;
	uint8_t x692 = 2U;
	volatile int64_t t122 = -243418756719LL;

    t122 = ((x689+(x690/x691))*x692);

    if (t122 != -60990LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x693 = UINT64_MAX;
	uint16_t x694 = 324U;
	uint64_t x695 = 747381613755LLU;
	volatile int64_t x696 = 9926109955LL;
	volatile uint64_t t123 = 2893958232391241LLU;

    t123 = ((x693+(x694/x695))*x696);

    if (t123 != 18446744063783441661LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x701 = 279;
	int16_t x702 = -1;
	int8_t x703 = INT8_MIN;
	volatile int16_t x704 = INT16_MIN;
	static volatile int32_t t124 = -1558520;

    t124 = ((x701+(x702/x703))*x704);

    if (t124 != -9142272) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x705 = 3U;
	volatile int32_t x706 = INT32_MAX;
	int16_t x707 = INT16_MAX;
	static int8_t x708 = INT8_MIN;
	int32_t t125 = 36311;

    t125 = ((x705+(x706/x707))*x708);

    if (t125 != -8389248) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int8_t x717 = INT8_MIN;
	int32_t x719 = 307295;
	uint16_t x720 = 119U;
	static int32_t t126 = 305773462;

    t126 = ((x717+(x718/x719))*x720);

    if (t126 != -15232) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x721 = 1;
	int16_t x722 = 2853;
	volatile int32_t x723 = INT32_MIN;
	volatile uint8_t x724 = 2U;
	int32_t t127 = 28804462;

    t127 = ((x721+(x722/x723))*x724);

    if (t127 != 2) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x725 = 84U;
	int32_t x726 = INT32_MIN;
	int8_t x727 = INT8_MAX;
	uint64_t x728 = 175012303582234LLU;
	volatile uint64_t t128 = 887984LLU;

    t128 = ((x725+(x726/x727))*x728);

    if (t128 != 10601451691597696952LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint32_t x729 = 224U;
	int8_t x730 = -1;
	volatile int8_t x731 = 10;
	int64_t x732 = -77000219231384LL;

    t129 = ((x729+(x730/x731))*x732);

    if (t129 != -17248049107830016LL) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int16_t x734 = INT16_MAX;
	uint8_t x735 = 54U;
	volatile int16_t x736 = 5;

    t130 = ((x733+(x734/x735))*x736);

    if (t130 != 3185) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x737 = -67;
	int32_t x739 = -1;
	uint32_t x740 = 2297U;

    t131 = ((x737+(x738/x739))*x740);

    if (t131 != 71207U) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint16_t x749 = 3249U;
	volatile uint16_t x750 = UINT16_MAX;
	int16_t x751 = -39;
	static volatile int32_t t132 = -334972;

    t132 = ((x749+(x750/x751))*x752);

    if (t132 != 199263) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x757 = UINT32_MAX;
	uint64_t x758 = UINT64_MAX;
	uint8_t x759 = UINT8_MAX;
	static volatile int8_t x760 = 8;

    t133 = ((x757+(x758/x759))*x760);

    if (t133 != 578721417064351744LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x761 = INT32_MIN;
	int16_t x762 = INT16_MAX;
	volatile int16_t x763 = INT16_MAX;
	uint64_t x764 = 3060281050350721LLU;
	volatile uint64_t t134 = 57LLU;

    t134 = ((x761+(x762/x763))*x764);

    if (t134 != 7319823902734763137LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int32_t x766 = 54;
	static volatile uint16_t x768 = UINT16_MAX;

    t135 = ((x765+(x766/x767))*x768);

    if (t135 != 9223372036854710273LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x769 = INT16_MAX;
	uint32_t x770 = UINT32_MAX;
	int8_t x771 = INT8_MIN;
	static int8_t x772 = 1;
	volatile uint32_t t136 = 1U;

    t136 = ((x769+(x770/x771))*x772);

    if (t136 != 32768U) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x777 = -1;
	int16_t x778 = 16327;
	uint8_t x779 = 101U;
	volatile uint32_t x780 = 223988717U;
	static uint32_t t137 = 576402U;

    t137 = ((x777+(x778/x779))*x780);

    if (t137 != 1478456352U) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint64_t x781 = UINT64_MAX;
	uint16_t x782 = 3288U;
	int32_t x783 = INT32_MIN;

    t138 = ((x781+(x782/x783))*x784);

    if (t138 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x785 = 1358792U;
	int8_t x786 = INT8_MAX;
	int32_t x788 = -1;
	uint32_t t139 = 0U;

    t139 = ((x785+(x786/x787))*x788);

    if (t139 != 4293608504U) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x805 = -1;
	static int16_t x807 = INT16_MAX;
	volatile uint16_t x808 = 7113U;
	volatile int32_t t140 = -327;

    t140 = ((x805+(x806/x807))*x808);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x809 = UINT16_MAX;
	static volatile int16_t x810 = -3100;
	volatile int64_t x811 = INT64_MAX;
	volatile int64_t t141 = 17973487336031LL;

    t141 = ((x809+(x810/x811))*x812);

    if (t141 != -65535LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x813 = -1;
	uint8_t x814 = 61U;
	volatile int64_t x815 = -4335434772308742067LL;
	static volatile int64_t t142 = -2670LL;

    t142 = ((x813+(x814/x815))*x816);

    if (t142 != -65535LL) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int8_t x817 = INT8_MIN;
	uint8_t x818 = 0U;
	int8_t x819 = -5;
	int8_t x820 = 1;

    t143 = ((x817+(x818/x819))*x820);

    if (t143 != -128) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x821 = 106U;
	uint8_t x822 = UINT8_MAX;
	uint8_t x823 = 10U;
	uint16_t x824 = 553U;
	static int32_t t144 = -253298;

    t144 = ((x821+(x822/x823))*x824);

    if (t144 != 72443) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x825 = 256927901045LLU;
	int64_t x826 = -1LL;
	int64_t x827 = -18875LL;
	static int16_t x828 = INT16_MAX;
	volatile uint64_t t145 = 149702096951968LLU;

    t145 = ((x825+(x826/x827))*x828);

    if (t145 != 8418756533541515LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint16_t x829 = UINT16_MAX;
	int8_t x830 = 2;
	static uint32_t x831 = 7479U;
	uint32_t x832 = 240362252U;

    t146 = ((x829+(x830/x831))*x832);

    if (t146 != 2495110388U) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x833 = UINT8_MAX;
	int32_t x834 = -34;
	volatile int64_t x835 = INT64_MAX;
	int64_t t147 = -784340753LL;

    t147 = ((x833+(x834/x835))*x836);

    if (t147 != -1826565LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x837 = 2300U;
	static volatile int8_t x838 = -23;
	uint32_t t148 = 25503345U;

    t148 = ((x837+(x838/x839))*x840);

    if (t148 != 6609715U) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x841 = -1;
	int64_t x842 = -13804100194375LL;
	uint8_t x843 = UINT8_MAX;
	static int64_t x844 = -1LL;
	static int64_t t149 = 150905806LL;

    t149 = ((x841+(x842/x843))*x844);

    if (t149 != 54133726253LL) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint8_t x849 = 55U;
	int8_t x851 = INT8_MAX;
	int32_t x852 = -13609634;
	int32_t t150 = -11548;

    t150 = ((x849+(x850/x851))*x852);

    if (t150 != -748529870) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x853 = INT32_MAX;
	uint64_t x854 = 3LLU;
	int16_t x855 = 35;
	uint8_t x856 = 5U;
	uint64_t t151 = 90474953LLU;

    t151 = ((x853+(x854/x855))*x856);

    if (t151 != 10737418235LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x865 = INT32_MAX;
	int8_t x867 = -1;
	static uint64_t x868 = UINT64_MAX;
	volatile uint64_t t152 = 323824641LLU;

    t152 = ((x865+(x866/x867))*x868);

    if (t152 != 18446744071561680714LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x869 = INT32_MAX;
	int32_t x870 = INT32_MIN;
	int64_t x871 = INT64_MAX;
	uint8_t x872 = UINT8_MAX;
	int64_t t153 = 1095752586357956LL;

    t153 = ((x869+(x870/x871))*x872);

    if (t153 != 547608329985LL) { NG(); } else { ; }
	
}

void f154(void) {
    	static int8_t x874 = INT8_MIN;
	int64_t x875 = -11466767441575688LL;

    t154 = ((x873+(x874/x875))*x876);

    if (t154 != 1LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x878 = INT16_MAX;
	static int64_t x879 = INT64_MAX;
	uint16_t x880 = 1U;
	int64_t t155 = 91176941078LL;

    t155 = ((x877+(x878/x879))*x880);

    if (t155 != -1LL) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x881 = INT8_MAX;
	volatile int16_t x882 = -7;
	uint32_t x883 = 58143360U;
	uint16_t x884 = 1U;
	volatile uint32_t t156 = 36446U;

    t156 = ((x881+(x882/x883))*x884);

    if (t156 != 200U) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint64_t x885 = 66366746524LLU;
	volatile int16_t x886 = 1;
	uint16_t x887 = UINT16_MAX;
	static volatile uint8_t x888 = 13U;
	volatile uint64_t t157 = 303LLU;

    t157 = ((x885+(x886/x887))*x888);

    if (t157 != 862767704812LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x889 = 12677;
	int8_t x890 = INT8_MAX;
	static int16_t x892 = INT16_MAX;

    t158 = ((x889+(x890/x891))*x892);

    if (t158 != 415387259) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint64_t x893 = UINT64_MAX;
	static int64_t x895 = INT64_MIN;
	uint64_t t159 = 16048705299LLU;

    t159 = ((x893+(x894/x895))*x896);

    if (t159 != 18446743840456598734LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int32_t x898 = -766;
	volatile int32_t x899 = INT32_MAX;
	volatile int32_t t160 = -33;

    t160 = ((x897+(x898/x899))*x900);

    if (t160 != -32640) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint16_t x909 = 18U;
	volatile int32_t x910 = -38157269;
	static int64_t x911 = INT64_MIN;
	static volatile int64_t t161 = -2067LL;

    t161 = ((x909+(x910/x911))*x912);

    if (t161 != -276102LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x917 = INT8_MIN;
	int32_t x918 = INT32_MIN;
	static int8_t x919 = INT8_MIN;
	int8_t x920 = INT8_MAX;
	int32_t t162 = -6498;

    t162 = ((x917+(x918/x919))*x920);

    if (t162 != 2130690176) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x925 = -1;
	int32_t x926 = 17570730;
	uint64_t x927 = UINT64_MAX;
	volatile int32_t x928 = INT32_MIN;
	volatile uint64_t t163 = 1387000163907099827LLU;

    t163 = ((x925+(x926/x927))*x928);

    if (t163 != 2147483648LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int16_t x930 = INT16_MIN;
	volatile int16_t x931 = -11;
	static uint32_t x932 = 4157U;
	static volatile uint32_t t164 = 12327U;

    t164 = ((x929+(x930/x931))*x932);

    if (t164 != 12059457U) { NG(); } else { ; }
	
}

void f165(void) {
    	static int16_t x933 = -28;
	uint8_t x935 = UINT8_MAX;
	uint64_t x936 = 6303213692248906716LLU;

    t165 = ((x933+(x934/x935))*x936);

    if (t165 != 16349915887125923312LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x937 = INT32_MAX;
	static int32_t x939 = 3020;
	int16_t x940 = 0;
	int32_t t166 = -2628;

    t166 = ((x937+(x938/x939))*x940);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x941 = -1LL;
	static int64_t x942 = -1LL;
	static int16_t x943 = 57;
	volatile int32_t x944 = INT32_MIN;

    t167 = ((x941+(x942/x943))*x944);

    if (t167 != 2147483648LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x946 = 42U;
	static uint16_t x948 = 3U;

    t168 = ((x945+(x946/x947))*x948);

    if (t168 != 4294967293U) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x949 = INT16_MIN;
	int8_t x950 = INT8_MIN;
	volatile int16_t x951 = -1;
	int8_t x952 = -44;
	volatile int32_t t169 = -1;

    t169 = ((x949+(x950/x951))*x952);

    if (t169 != 1436160) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x953 = 24045;
	int16_t x954 = -2647;
	int16_t x956 = 2545;
	volatile uint32_t t170 = 161493054U;

    t170 = ((x953+(x954/x955))*x956);

    if (t170 != 61194525U) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x957 = INT16_MIN;
	volatile uint64_t x958 = 14041800LLU;
	uint64_t x959 = 97851568LLU;
	static volatile int64_t x960 = -212507248031613LL;
	uint64_t t171 = 3LLU;

    t171 = ((x957+(x958/x959))*x960);

    if (t171 != 6963437503499894784LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint32_t x961 = UINT32_MAX;
	int32_t x962 = 5703649;
	volatile int32_t x963 = INT32_MAX;
	uint32_t t172 = 1547205U;

    t172 = ((x961+(x962/x963))*x964);

    if (t172 != 4294966386U) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x969 = 1979LLU;
	int16_t x970 = -1;
	int64_t x971 = -1LL;
	int32_t x972 = INT32_MIN;
	volatile uint64_t t173 = 1228LLU;

    t173 = ((x969+(x970/x971))*x972);

    if (t173 != 18446739821691928576LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x977 = -1;
	static int16_t x979 = INT16_MIN;
	static int8_t x980 = INT8_MAX;
	int32_t t174 = 21;

    t174 = ((x977+(x978/x979))*x980);

    if (t174 != -127) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x981 = INT32_MIN;
	uint16_t x982 = UINT16_MAX;
	uint32_t x983 = 340132204U;
	int16_t x984 = -1;
	uint32_t t175 = 3921981U;

    t175 = ((x981+(x982/x983))*x984);

    if (t175 != 2147483648U) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x986 = INT32_MIN;
	int8_t x987 = -7;
	static int32_t x988 = -1;

    t176 = ((x985+(x986/x987))*x988);

    if (t176 != -306783250) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint32_t x993 = 11U;
	uint32_t x994 = 72731829U;
	int64_t x995 = INT64_MIN;
	int16_t x996 = INT16_MAX;
	int64_t t177 = 1LL;

    t177 = ((x993+(x994/x995))*x996);

    if (t177 != 360437LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x1004 = UINT16_MAX;
	uint32_t t178 = 63373U;

    t178 = ((x1001+(x1002/x1003))*x1004);

    if (t178 != 4294901761U) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x1007 = 108U;
	uint8_t x1008 = 54U;
	uint32_t t179 = 3627923U;

    t179 = ((x1005+(x1006/x1007))*x1008);

    if (t179 != 2147490576U) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x1010 = INT64_MIN;
	volatile uint32_t x1011 = UINT32_MAX;
	static int64_t x1012 = -1LL;
	int64_t t180 = 3732060LL;

    t180 = ((x1009+(x1010/x1011))*x1012);

    if (t180 != 2147516416LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x1014 = INT32_MAX;
	uint16_t x1015 = 164U;
	static volatile int8_t x1016 = INT8_MIN;
	int32_t t181 = -3948;

    t181 = ((x1013+(x1014/x1015))*x1016);

    if (t181 != -1680278912) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x1017 = INT8_MIN;
	static uint64_t x1018 = 480759666523978LLU;
	static volatile uint64_t x1019 = UINT64_MAX;
	int64_t x1020 = -3201157793LL;

    t182 = ((x1017+(x1018/x1019))*x1020);

    if (t182 != 409748197504LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x1025 = -3;
	int8_t x1027 = -1;
	static uint64_t x1028 = UINT64_MAX;

    t183 = ((x1025+(x1026/x1027))*x1028);

    if (t183 != 3LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x1029 = INT32_MAX;
	static volatile uint16_t x1030 = UINT16_MAX;
	static uint64_t x1031 = 433495493LLU;
	volatile uint64_t t184 = 496881LLU;

    t184 = ((x1029+(x1030/x1031))*x1032);

    if (t184 != 147526605368443563LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint32_t x1037 = 1429564161U;
	int64_t x1039 = -102LL;
	static int32_t x1040 = INT32_MAX;
	int64_t t185 = 1648LL;

    t185 = ((x1037+(x1038/x1039))*x1040);

    if (t185 != 3069964968742524480LL) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int64_t x1047 = INT64_MIN;
	int32_t x1048 = -2626;
	volatile int64_t t186 = -8522LL;

    t186 = ((x1045+(x1046/x1047))*x1048);

    if (t186 != -2300376LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x1050 = UINT8_MAX;
	volatile uint16_t x1051 = 1516U;
	int32_t x1052 = 1060942;
	int32_t t187 = 9526;

    t187 = ((x1049+(x1050/x1051))*x1052);

    if (t187 != 270540210) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x1053 = 3866011182540054LLU;
	int32_t x1054 = -1;
	int16_t x1055 = 933;
	uint64_t x1056 = UINT64_MAX;
	static volatile uint64_t t188 = 110LLU;

    t188 = ((x1053+(x1054/x1055))*x1056);

    if (t188 != 18442878062527011562LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x1057 = -1LL;
	int32_t x1058 = INT32_MIN;
	uint8_t x1059 = UINT8_MAX;
	volatile int64_t t189 = 14672004787LL;

    t189 = ((x1057+(x1058/x1059))*x1060);

    if (t189 != -1837092365215LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x1061 = INT16_MIN;
	uint8_t x1062 = 1U;
	static volatile int8_t x1063 = 10;
	int64_t t190 = -57LL;

    t190 = ((x1061+(x1062/x1063))*x1064);

    if (t190 != 32768LL) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x1067 = UINT32_MAX;
	uint32_t x1068 = UINT32_MAX;
	uint64_t t191 = 757920155LLU;

    t191 = ((x1065+(x1066/x1067))*x1068);

    if (t191 != 51539607540LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int16_t x1070 = INT16_MIN;
	uint64_t x1071 = 12364LLU;
	uint8_t x1072 = UINT8_MAX;
	static uint64_t t192 = 197LLU;

    t192 = ((x1069+(x1070/x1071))*x1072);

    if (t192 != 9603824943583660193LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x1073 = 549U;
	int16_t x1074 = 1094;
	volatile uint16_t x1075 = 4U;
	uint8_t x1076 = UINT8_MAX;
	int32_t t193 = 40;

    t193 = ((x1073+(x1074/x1075))*x1076);

    if (t193 != 209610) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile int32_t x1081 = -1;
	int16_t x1082 = -949;
	int64_t x1083 = INT64_MAX;
	uint64_t x1084 = 13LLU;
	volatile uint64_t t194 = 29822LLU;

    t194 = ((x1081+(x1082/x1083))*x1084);

    if (t194 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x1086 = 3398741;
	int16_t x1087 = INT16_MIN;
	static volatile uint64_t t195 = 954LLU;

    t195 = ((x1085+(x1086/x1087))*x1088);

    if (t195 != 18446744073709538971LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x1090 = 1;
	int64_t x1091 = INT64_MIN;
	static int64_t x1092 = 8311886LL;
	int64_t t196 = -931677487277118LL;

    t196 = ((x1089+(x1090/x1091))*x1092);

    if (t196 != 8311886LL) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int64_t x1094 = INT64_MIN;
	int32_t x1095 = INT32_MIN;
	uint32_t x1096 = 9882U;
	uint64_t t197 = 603LLU;

    t197 = ((x1093+(x1094/x1095))*x1096);

    if (t197 != 102069062350405848LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint8_t x1097 = 3U;
	int64_t x1098 = INT64_MIN;
	uint64_t x1099 = 132863949400568858LLU;
	uint16_t x1100 = UINT16_MAX;
	volatile uint64_t t198 = 79592742LLU;

    t198 = ((x1097+(x1098/x1099))*x1100);

    if (t198 != 4718520LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x1101 = INT32_MIN;
	static uint8_t x1103 = 1U;
	int8_t x1104 = 1;
	int32_t t199 = -15168360;

    t199 = ((x1101+(x1102/x1103))*x1104);

    if (t199 != -2147418113) { NG(); } else { ; }
	
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

