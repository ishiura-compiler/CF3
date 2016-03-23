
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

static volatile int32_t x9 = INT32_MIN;
static int64_t x10 = -1LL;
uint8_t x16 = 107U;
volatile int32_t t3 = -10663;
volatile int8_t x21 = -1;
static int8_t x25 = INT8_MIN;
int32_t x29 = 13;
uint32_t x33 = 60U;
uint32_t x36 = 2051U;
uint32_t x43 = 29585372U;
static volatile int64_t t10 = 1206568848LL;
volatile int64_t x50 = 31430LL;
uint16_t x51 = UINT16_MAX;
int64_t x52 = -48LL;
int16_t x54 = INT16_MIN;
static volatile int8_t x64 = INT8_MIN;
int64_t t15 = -8LL;
int32_t t16 = -325858;
uint64_t t17 = 29513307838365LLU;
int8_t x84 = INT8_MIN;
int64_t x87 = 1LL;
volatile int32_t x90 = 93256;
int8_t x92 = 3;
int16_t x94 = INT16_MIN;
int64_t t23 = 1LL;
volatile int8_t x100 = INT8_MIN;
volatile uint64_t x101 = 23535976514125LLU;
uint16_t x103 = 3912U;
volatile uint64_t t29 = 136165283494179LLU;
int32_t x124 = INT32_MAX;
int64_t x126 = INT64_MIN;
static int8_t x130 = -1;
static int64_t t32 = INT64_MAX;
int32_t x133 = INT32_MIN;
volatile uint64_t t33 = 116LLU;
int16_t x146 = INT16_MAX;
int64_t t40 = -3559998357580LL;
static volatile uint64_t x169 = UINT64_MAX;
volatile uint64_t t42 = UINT64_MAX;
static volatile int64_t t43 = 84661766561LL;
int32_t t44 = -3665;
int64_t x187 = INT64_MIN;
volatile int8_t x195 = INT8_MAX;
volatile int16_t x196 = -112;
uint16_t x200 = UINT16_MAX;
uint64_t t47 = 205309380LLU;
volatile uint64_t t48 = 1LLU;
volatile int32_t x214 = INT32_MIN;
static volatile uint16_t x216 = UINT16_MAX;
uint64_t t49 = 1273636458981LLU;
uint16_t x217 = 22370U;
int32_t x224 = 51;
static int32_t x228 = -1;
int32_t x233 = INT32_MIN;
volatile int64_t t54 = -5661584074506LL;
uint32_t x242 = 110U;
int8_t x247 = INT8_MIN;
int32_t t57 = 6637;
int8_t x254 = -62;
volatile int32_t t60 = 50;
int16_t x264 = -249;
volatile uint32_t x265 = 411362828U;
volatile int32_t x269 = INT32_MAX;
uint8_t x270 = UINT8_MAX;
static volatile uint32_t t65 = 54U;
uint64_t x282 = 302691851LLU;
static int64_t x283 = -1LL;
int64_t x289 = -4LL;
static int32_t x292 = -1;
static int16_t x293 = -1;
uint16_t x295 = 233U;
int8_t x304 = INT8_MIN;
static volatile int32_t x309 = INT32_MIN;
int64_t x310 = -342386804236669521LL;
uint8_t x313 = 19U;
volatile uint16_t x319 = UINT16_MAX;
volatile int8_t x320 = -1;
volatile int64_t t74 = 6LL;
int64_t t75 = 3LL;
int32_t x328 = 20;
uint8_t x337 = 2U;
volatile int64_t t79 = -7684138LL;
static int32_t x344 = -1;
static int64_t t83 = 2LL;
int32_t x357 = INT32_MAX;
uint32_t x361 = UINT32_MAX;
int16_t x369 = -1842;
int16_t x371 = 627;
static volatile int64_t t88 = -2738968LL;
int8_t x379 = INT8_MAX;
uint8_t x382 = UINT8_MAX;
int64_t x383 = INT64_MIN;
volatile int64_t t90 = 58862011736067516LL;
int64_t x392 = -3660747919LL;
int16_t x394 = -4;
uint64_t x396 = 2977324LLU;
static int8_t x403 = -1;
static int8_t x406 = 1;
static int64_t x407 = -1LL;
uint8_t x410 = 1U;
int8_t x418 = -9;
int64_t x431 = INT64_MAX;
static volatile uint64_t t101 = UINT64_MAX;
uint32_t x434 = 0U;
int64_t x435 = INT64_MAX;
static volatile int16_t x436 = 888;
int32_t x438 = INT32_MIN;
static uint8_t x441 = 25U;
int16_t x444 = INT16_MAX;
volatile uint16_t x446 = UINT16_MAX;
int64_t x447 = -1LL;
int64_t x449 = INT64_MIN;
volatile int64_t x455 = INT64_MAX;
static uint64_t x461 = 2057188404460LLU;
static int64_t x463 = INT64_MAX;
static uint16_t x469 = UINT16_MAX;
int64_t x470 = INT64_MIN;
int32_t x471 = -1166006;
static volatile int64_t t111 = 98317708001452LL;
int32_t x473 = -66183;
int8_t x474 = -1;
volatile int32_t x476 = -22272;
static volatile uint32_t t112 = 327U;
int16_t x480 = -3;
int64_t x487 = -1LL;
int8_t x491 = INT8_MIN;
int64_t x493 = INT64_MAX;
static volatile uint64_t t119 = 8395LLU;
volatile int64_t x506 = INT64_MIN;
int16_t x513 = -1;
int32_t t122 = -170;
uint8_t x520 = 3U;
int32_t x524 = INT32_MAX;
volatile int8_t x529 = INT8_MIN;
int16_t x533 = INT16_MIN;
volatile int64_t t126 = -11009383254934124LL;
int16_t x541 = 0;
int64_t x544 = -178644LL;
int16_t x546 = 1069;
uint64_t x549 = UINT64_MAX;
volatile int16_t x553 = 2;
static uint32_t x565 = 11995821U;
volatile int16_t x567 = -1;
int32_t x568 = INT32_MIN;
uint32_t t134 = 5503U;
int16_t x569 = INT16_MIN;
volatile int16_t x574 = -1;
uint16_t x575 = 23U;
static int16_t x579 = INT16_MAX;
volatile int32_t x580 = INT32_MIN;
volatile int64_t t137 = 1594335214LL;
int64_t x581 = INT64_MIN;
int8_t x582 = INT8_MIN;
volatile int64_t t138 = 507399LL;
int32_t x586 = 1;
int64_t x587 = INT64_MAX;
volatile int32_t t141 = 29;
int64_t x597 = INT64_MIN;
int32_t x602 = INT32_MAX;
int32_t x604 = INT32_MIN;
static int64_t t143 = -114509509LL;
volatile int64_t x607 = -9810249107LL;
int16_t x609 = 14670;
int16_t x611 = -12;
volatile uint16_t x613 = 68U;
uint64_t x620 = UINT64_MAX;
volatile int8_t x621 = 48;
volatile int32_t t149 = -114353900;
uint64_t x640 = 1033785LLU;
uint64_t t152 = 2942564LLU;
volatile int8_t x641 = INT8_MIN;
int16_t x650 = -1;
volatile int32_t t155 = -6619569;
int32_t t159 = 14716584;
int64_t x670 = INT64_MIN;
uint64_t t160 = 8530LLU;
int16_t x677 = INT16_MIN;
uint8_t x680 = UINT8_MAX;
int64_t x688 = -1LL;
int64_t t163 = -1LL;
static int8_t x691 = INT8_MIN;
int8_t x695 = -1;
static uint32_t x702 = 247876958U;
volatile int16_t x703 = 11;
volatile int32_t x704 = INT32_MIN;
uint32_t t167 = 29U;
int16_t x713 = -126;
int32_t x716 = INT32_MAX;
static volatile uint64_t x719 = 1251640LLU;
uint8_t x729 = UINT8_MAX;
uint64_t x740 = 16755953752675LLU;
static int64_t x748 = -1LL;
static uint64_t x752 = 364661961341328616LLU;
volatile uint64_t t177 = 1140171290LLU;
int16_t x756 = -1;
volatile uint32_t t178 = 1U;
uint8_t x761 = UINT8_MAX;
volatile int16_t x777 = -1;
static int64_t x778 = INT64_MIN;
static volatile int64_t t184 = -1348727708412445LL;
static int8_t x788 = 15;
int16_t x799 = -1;
int32_t x804 = INT32_MIN;
static volatile int32_t x806 = -1;
int32_t x807 = INT32_MAX;
volatile uint8_t x812 = 5U;
int16_t x832 = INT16_MIN;
int32_t x834 = -39088;
int16_t x838 = INT16_MIN;
int32_t t197 = -648421;
int32_t x841 = -1;
int16_t x845 = -3440;


void f0(void) {
    	int8_t x1 = INT8_MIN;
	static volatile uint8_t x2 = 3U;
	int64_t x3 = 7045252564LL;
	int16_t x4 = -1;
	int64_t t0 = 30LL;

    t0 = (x1+(x2&(x3/x4)));

    if (t0 != -128LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int64_t x5 = -1LL;
	uint8_t x6 = 23U;
	int16_t x7 = 985;
	volatile int32_t x8 = INT32_MIN;
	int64_t t1 = -3LL;

    t1 = (x5+(x6&(x7/x8)));

    if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x11 = 0LL;
	uint16_t x12 = UINT16_MAX;
	volatile int64_t t2 = 13391025642934707LL;

    t2 = (x9+(x10&(x11/x12)));

    if (t2 != -2147483648LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x13 = 0U;
	uint8_t x14 = 0U;
	int32_t x15 = INT32_MIN;

    t3 = (x13+(x14&(x15/x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x17 = INT32_MIN;
	int32_t x18 = 172;
	volatile int32_t x19 = INT32_MAX;
	volatile int32_t x20 = INT32_MIN;
	volatile int32_t t4 = INT32_MIN;

    t4 = (x17+(x18&(x19/x20)));

    if (t4 != INT32_MIN) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x22 = INT8_MAX;
	int64_t x23 = INT64_MAX;
	volatile int16_t x24 = -10928;
	int64_t t5 = -119LL;

    t5 = (x21+(x22&(x23/x24)));

    if (t5 != 80LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x26 = INT32_MAX;
	int32_t x27 = 1;
	uint16_t x28 = UINT16_MAX;
	volatile int32_t t6 = 53;

    t6 = (x25+(x26&(x27/x28)));

    if (t6 != -128) { NG(); } else { ; }
	
}

void f7(void) {
    	static int16_t x30 = INT16_MAX;
	static int64_t x31 = -1LL;
	int16_t x32 = INT16_MIN;
	volatile int64_t t7 = -41LL;

    t7 = (x29+(x30&(x31/x32)));

    if (t7 != 13LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint64_t x34 = UINT64_MAX;
	uint8_t x35 = UINT8_MAX;
	uint64_t t8 = 2982690LLU;

    t8 = (x33+(x34&(x35/x36)));

    if (t8 != 60LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint16_t x37 = 22U;
	static int8_t x38 = INT8_MIN;
	uint8_t x39 = 67U;
	int64_t x40 = INT64_MIN;
	volatile int64_t t9 = -7LL;

    t9 = (x37+(x38&(x39/x40)));

    if (t9 != 22LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = -10128;
	uint16_t x42 = UINT16_MAX;
	int64_t x44 = 128951685751042LL;

    t10 = (x41+(x42&(x43/x44)));

    if (t10 != -10128LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x45 = INT8_MIN;
	int8_t x46 = -1;
	int64_t x47 = INT64_MAX;
	int8_t x48 = INT8_MAX;
	volatile int64_t t11 = 1LL;

    t11 = (x45+(x46&(x47/x48)));

    if (t11 != 72624976668147713LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = -1;
	volatile int64_t t12 = -5472LL;

    t12 = (x49+(x50&(x51/x52)));

    if (t12 != 31361LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = INT16_MAX;
	volatile int64_t x55 = -60796610476885204LL;
	uint16_t x56 = 20U;
	volatile int64_t t13 = -5924LL;

    t13 = (x53+(x54&(x55/x56)));

    if (t13 != -3039830523838465LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x57 = 1506U;
	int8_t x58 = -1;
	static int16_t x59 = INT16_MAX;
	static uint32_t x60 = 5806U;
	static volatile uint32_t t14 = 30U;

    t14 = (x57+(x58&(x59/x60)));

    if (t14 != 1511U) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint16_t x61 = UINT16_MAX;
	int64_t x62 = 185603346301954LL;
	static uint8_t x63 = 57U;

    t15 = (x61+(x62&(x63/x64)));

    if (t15 != 65535LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = INT8_MAX;
	int32_t x66 = INT32_MAX;
	int32_t x67 = -1642;
	int8_t x68 = -1;

    t16 = (x65+(x66&(x67/x68)));

    if (t16 != 1769) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x69 = 57;
	uint64_t x70 = UINT64_MAX;
	uint64_t x71 = 4346LLU;
	uint8_t x72 = UINT8_MAX;

    t17 = (x69+(x70&(x71/x72)));

    if (t17 != 74LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x73 = -450491702LL;
	uint32_t x74 = 146U;
	int8_t x75 = INT8_MAX;
	static int32_t x76 = 7;
	int64_t t18 = 9LL;

    t18 = (x73+(x74&(x75/x76)));

    if (t18 != -450491684LL) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int8_t x77 = INT8_MIN;
	static int16_t x78 = -1;
	static int32_t x79 = 668;
	static int32_t x80 = -1;
	volatile int32_t t19 = 1239600;

    t19 = (x77+(x78&(x79/x80)));

    if (t19 != -796) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile uint8_t x81 = 54U;
	int64_t x82 = INT64_MIN;
	int8_t x83 = INT8_MIN;
	static int64_t t20 = 1240828660LL;

    t20 = (x81+(x82&(x83/x84)));

    if (t20 != 54LL) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint16_t x85 = 152U;
	static uint32_t x86 = 38U;
	uint8_t x88 = 24U;
	int64_t t21 = 13705675LL;

    t21 = (x85+(x86&(x87/x88)));

    if (t21 != 152LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = -162;
	static int64_t x91 = -1LL;
	volatile int64_t t22 = -573442145540LL;

    t22 = (x89+(x90&(x91/x92)));

    if (t22 != -162LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x93 = UINT32_MAX;
	int64_t x95 = 53979551099621223LL;
	int16_t x96 = -189;

    t23 = (x93+(x94&(x95/x96)));

    if (t23 != -285601795538945LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x97 = UINT64_MAX;
	volatile int8_t x98 = INT8_MIN;
	int16_t x99 = 116;
	static uint64_t t24 = UINT64_MAX;

    t24 = (x97+(x98&(x99/x100)));

    if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile uint64_t x102 = 715219124LLU;
	uint64_t x104 = 5659520545LLU;
	volatile uint64_t t25 = 7508886989996LLU;

    t25 = (x101+(x102&(x103/x104)));

    if (t25 != 23535976514125LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x105 = 501;
	uint16_t x106 = 11U;
	int8_t x107 = 31;
	int16_t x108 = -1;
	int32_t t26 = -133;

    t26 = (x105+(x106&(x107/x108)));

    if (t26 != 502) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x109 = -1;
	int32_t x110 = -14;
	static uint32_t x111 = 751U;
	uint64_t x112 = UINT64_MAX;
	uint64_t t27 = UINT64_MAX;

    t27 = (x109+(x110&(x111/x112)));

    if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = INT64_MAX;
	int64_t x114 = INT64_MAX;
	static int32_t x115 = -1;
	static int8_t x116 = INT8_MAX;
	int64_t t28 = INT64_MAX;

    t28 = (x113+(x114&(x115/x116)));

    if (t28 != INT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint64_t x117 = 3420153793LLU;
	volatile int16_t x118 = -1;
	uint32_t x119 = 2054976620U;
	static volatile int32_t x120 = INT32_MIN;

    t29 = (x117+(x118&(x119/x120)));

    if (t29 != 3420153793LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x121 = -232LL;
	static volatile uint16_t x122 = 8U;
	static int16_t x123 = INT16_MAX;
	volatile int64_t t30 = 31154541319LL;

    t30 = (x121+(x122&(x123/x124)));

    if (t30 != -232LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x125 = 1307601257U;
	volatile uint16_t x127 = 1U;
	int64_t x128 = -1LL;
	int64_t t31 = 1LL;

    t31 = (x125+(x126&(x127/x128)));

    if (t31 != -9223372035547174551LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = INT64_MAX;
	uint16_t x131 = 24715U;
	int16_t x132 = INT16_MIN;

    t32 = (x129+(x130&(x131/x132)));

    if (t32 != INT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x134 = INT16_MIN;
	int16_t x135 = 21;
	uint64_t x136 = 10746548329582LLU;

    t33 = (x133+(x134&(x135/x136)));

    if (t33 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x137 = 52882904801176115LLU;
	int32_t x138 = -2849683;
	int64_t x139 = -1LL;
	int16_t x140 = INT16_MIN;
	volatile uint64_t t34 = 49479746LLU;

    t34 = (x137+(x138&(x139/x140)));

    if (t34 != 52882904801176115LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	static int8_t x141 = 28;
	static uint32_t x142 = UINT32_MAX;
	int8_t x143 = INT8_MAX;
	int8_t x144 = INT8_MIN;
	volatile uint32_t t35 = 20U;

    t35 = (x141+(x142&(x143/x144)));

    if (t35 != 28U) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int32_t x145 = INT32_MIN;
	int8_t x147 = -1;
	uint8_t x148 = 56U;
	volatile int32_t t36 = INT32_MIN;

    t36 = (x145+(x146&(x147/x148)));

    if (t36 != INT32_MIN) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x149 = INT16_MAX;
	volatile int64_t x150 = INT64_MIN;
	int32_t x151 = 640441259;
	int64_t x152 = -1LL;
	int64_t t37 = 650523651135057499LL;

    t37 = (x149+(x150&(x151/x152)));

    if (t37 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint64_t x153 = UINT64_MAX;
	uint16_t x154 = UINT16_MAX;
	uint16_t x155 = 28U;
	static volatile int16_t x156 = -1;
	volatile uint64_t t38 = 407919LLU;

    t38 = (x153+(x154&(x155/x156)));

    if (t38 != 65507LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x157 = -1;
	volatile uint32_t x158 = 1921467236U;
	static int16_t x159 = -24;
	volatile int64_t x160 = INT64_MIN;
	int64_t t39 = -2396129445715801014LL;

    t39 = (x157+(x158&(x159/x160)));

    if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x161 = INT8_MAX;
	int32_t x162 = INT32_MIN;
	volatile int64_t x163 = -1022559535LL;
	int8_t x164 = INT8_MIN;

    t40 = (x161+(x162&(x163/x164)));

    if (t40 != 127LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = -1LL;
	int32_t x166 = INT32_MAX;
	volatile int64_t x167 = -1LL;
	static int32_t x168 = INT32_MIN;
	int64_t t41 = -263635105LL;

    t41 = (x165+(x166&(x167/x168)));

    if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static int64_t x170 = INT64_MIN;
	volatile uint8_t x171 = UINT8_MAX;
	int16_t x172 = -7831;

    t42 = (x169+(x170&(x171/x172)));

    if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
    	static int64_t x173 = INT64_MIN;
	static int64_t x174 = INT64_MAX;
	int16_t x175 = -1;
	uint32_t x176 = 31U;

    t43 = (x173+(x174&(x175/x176)));

    if (t43 != -9223372036716228476LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint16_t x177 = 3U;
	int8_t x178 = INT8_MIN;
	int16_t x179 = -1;
	static volatile int32_t x180 = -1;

    t44 = (x177+(x178&(x179/x180)));

    if (t44 != 3) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x185 = -1;
	volatile uint8_t x186 = 17U;
	uint8_t x188 = 1U;
	int64_t t45 = -10721952551LL;

    t45 = (x185+(x186&(x187/x188)));

    if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x193 = -126;
	int8_t x194 = INT8_MIN;
	static volatile int32_t t46 = -306;

    t46 = (x193+(x194&(x195/x196)));

    if (t46 != -254) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x197 = 4360380862092731031LLU;
	int16_t x198 = -1;
	uint16_t x199 = 32365U;

    t47 = (x197+(x198&(x199/x200)));

    if (t47 != 4360380862092731031LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x209 = 1U;
	static int32_t x210 = -18083422;
	uint64_t x211 = 2035996773894174861LLU;
	volatile int32_t x212 = INT32_MIN;

    t48 = (x209+(x210&(x211/x212)));

    if (t48 != 1LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint16_t x213 = 108U;
	uint64_t x215 = UINT64_MAX;

    t49 = (x213+(x214&(x215/x216)));

    if (t49 != 281479271678060LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x218 = INT16_MIN;
	int16_t x219 = INT16_MIN;
	int16_t x220 = INT16_MAX;
	int32_t t50 = -97;

    t50 = (x217+(x218&(x219/x220)));

    if (t50 != -10398) { NG(); } else { ; }
	
}

void f51(void) {
    	static int8_t x221 = INT8_MAX;
	int16_t x222 = INT16_MIN;
	uint32_t x223 = 347295196U;
	uint32_t t51 = 7U;

    t51 = (x221+(x222&(x223/x224)));

    if (t51 != 6783103U) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x225 = 302641265310LLU;
	static int8_t x226 = 7;
	int8_t x227 = -1;
	uint64_t t52 = 992000LLU;

    t52 = (x225+(x226&(x227/x228)));

    if (t52 != 302641265311LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint8_t x229 = 95U;
	static volatile int32_t x230 = INT32_MIN;
	int8_t x231 = INT8_MIN;
	uint32_t x232 = 1208609U;
	uint32_t t53 = 8U;

    t53 = (x229+(x230&(x231/x232)));

    if (t53 != 95U) { NG(); } else { ; }
	
}

void f54(void) {
    	static int16_t x234 = -1;
	volatile uint8_t x235 = UINT8_MAX;
	int64_t x236 = -3131568729928LL;

    t54 = (x233+(x234&(x235/x236)));

    if (t54 != -2147483648LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x237 = -1;
	volatile int64_t x238 = -1LL;
	uint16_t x239 = UINT16_MAX;
	static int32_t x240 = INT32_MIN;
	volatile int64_t t55 = -7157255149LL;

    t55 = (x237+(x238&(x239/x240)));

    if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x241 = INT32_MIN;
	int64_t x243 = -1LL;
	static int64_t x244 = -1LL;
	static int64_t t56 = -69295571LL;

    t56 = (x241+(x242&(x243/x244)));

    if (t56 != -2147483648LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x245 = 1;
	static int8_t x246 = INT8_MIN;
	uint8_t x248 = 21U;

    t57 = (x245+(x246&(x247/x248)));

    if (t57 != -127) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile int16_t x249 = -12026;
	int64_t x250 = -105386LL;
	int64_t x251 = INT64_MAX;
	int64_t x252 = INT64_MIN;
	volatile int64_t t58 = 11113405981047199LL;

    t58 = (x249+(x250&(x251/x252)));

    if (t58 != -12026LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x253 = 83670572426756703LL;
	static int16_t x255 = 1;
	int8_t x256 = -1;
	static int64_t t59 = -1248179822130LL;

    t59 = (x253+(x254&(x255/x256)));

    if (t59 != 83670572426756641LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int16_t x257 = -1;
	int16_t x258 = INT16_MIN;
	uint8_t x259 = 43U;
	int8_t x260 = INT8_MAX;

    t60 = (x257+(x258&(x259/x260)));

    if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x261 = INT16_MIN;
	static volatile int8_t x262 = INT8_MIN;
	int16_t x263 = -111;
	volatile int32_t t61 = 0;

    t61 = (x261+(x262&(x263/x264)));

    if (t61 != -32768) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x266 = -1;
	static uint16_t x267 = 5932U;
	int32_t x268 = INT32_MAX;
	volatile uint32_t t62 = 103676315U;

    t62 = (x265+(x266&(x267/x268)));

    if (t62 != 411362828U) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x271 = 0U;
	static int16_t x272 = -2;
	static int32_t t63 = INT32_MAX;

    t63 = (x269+(x270&(x271/x272)));

    if (t63 != INT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x273 = -1;
	int32_t x274 = INT32_MAX;
	volatile int32_t x275 = INT32_MIN;
	static volatile int16_t x276 = -149;
	volatile int32_t t64 = -29738;

    t64 = (x273+(x274&(x275/x276)));

    if (t64 != 14412640) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x277 = 0;
	volatile uint32_t x278 = 4932161U;
	static uint32_t x279 = 229179166U;
	static int8_t x280 = 10;

    t65 = (x277+(x278&(x279/x280)));

    if (t65 != 4784640U) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile uint32_t x281 = 1567409U;
	volatile int16_t x284 = -1;
	uint64_t t66 = 370832544LLU;

    t66 = (x281+(x282&(x283/x284)));

    if (t66 != 1567410LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int16_t x285 = INT16_MAX;
	int16_t x286 = -14338;
	int32_t x287 = INT32_MIN;
	int8_t x288 = INT8_MIN;
	volatile int32_t t67 = 122624426;

    t67 = (x285+(x286&(x287/x288)));

    if (t67 != 16809983) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x290 = -1;
	static int16_t x291 = INT16_MIN;
	volatile int64_t t68 = 32937142701804049LL;

    t68 = (x289+(x290&(x291/x292)));

    if (t68 != 32764LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x294 = 2;
	int8_t x296 = -1;
	int32_t t69 = 2;

    t69 = (x293+(x294&(x295/x296)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint32_t x301 = UINT32_MAX;
	int8_t x302 = -8;
	int64_t x303 = INT64_MIN;
	volatile int64_t t70 = -974162570LL;

    t70 = (x301+(x302&(x303/x304)));

    if (t70 != 72057598332895231LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x305 = 0;
	static uint32_t x306 = 3413U;
	static uint8_t x307 = UINT8_MAX;
	int32_t x308 = INT32_MAX;
	volatile uint32_t t71 = 5512548U;

    t71 = (x305+(x306&(x307/x308)));

    if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x311 = INT64_MAX;
	volatile int32_t x312 = INT32_MIN;
	int64_t t72 = 7119LL;

    t72 = (x309+(x310&(x311/x312)));

    if (t72 != -342386810640400383LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x314 = INT64_MIN;
	int64_t x315 = -1LL;
	uint64_t x316 = 1660584921124LLU;
	static volatile uint64_t t73 = 558LLU;

    t73 = (x313+(x314&(x315/x316)));

    if (t73 != 19LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x317 = 6449;
	int64_t x318 = INT64_MAX;

    t74 = (x317+(x318&(x319/x320)));

    if (t74 != 9223372036854716722LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static int32_t x321 = INT32_MIN;
	int64_t x322 = -1LL;
	int32_t x323 = -1;
	static volatile int32_t x324 = INT32_MIN;

    t75 = (x321+(x322&(x323/x324)));

    if (t75 != -2147483648LL) { NG(); } else { ; }
	
}

void f76(void) {
    	static int32_t x325 = INT32_MIN;
	volatile int64_t x326 = 33513514703LL;
	int8_t x327 = 1;
	int64_t t76 = -49LL;

    t76 = (x325+(x326&(x327/x328)));

    if (t76 != -2147483648LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x329 = INT64_MIN;
	int16_t x330 = INT16_MIN;
	static int32_t x331 = -1;
	uint16_t x332 = 7834U;
	volatile int64_t t77 = INT64_MIN;

    t77 = (x329+(x330&(x331/x332)));

    if (t77 != INT64_MIN) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint8_t x333 = 29U;
	volatile int8_t x334 = INT8_MIN;
	uint64_t x335 = 30943502041904LLU;
	uint8_t x336 = UINT8_MAX;
	volatile uint64_t t78 = 548400883316LLU;

    t78 = (x333+(x334&(x335/x336)));

    if (t78 != 121347066781LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x338 = 1123;
	int32_t x339 = -1;
	int64_t x340 = -1LL;

    t79 = (x337+(x338&(x339/x340)));

    if (t79 != 3LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x341 = 3U;
	static int16_t x342 = -1;
	uint32_t x343 = 42848U;
	volatile uint32_t t80 = 0U;

    t80 = (x341+(x342&(x343/x344)));

    if (t80 != 3U) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x345 = INT64_MAX;
	uint8_t x346 = 3U;
	static uint16_t x347 = 14U;
	volatile uint32_t x348 = 316565U;
	static volatile int64_t t81 = INT64_MAX;

    t81 = (x345+(x346&(x347/x348)));

    if (t81 != INT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x349 = -23;
	int16_t x350 = INT16_MAX;
	volatile uint32_t x351 = UINT32_MAX;
	int8_t x352 = -1;
	static uint32_t t82 = 70248U;

    t82 = (x349+(x350&(x351/x352)));

    if (t82 != 4294967274U) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x353 = 14035U;
	volatile int64_t x354 = 29565468LL;
	static int32_t x355 = INT32_MIN;
	uint16_t x356 = UINT16_MAX;

    t83 = (x353+(x354&(x355/x356)));

    if (t83 != 29570771LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint64_t x358 = 85844248480LLU;
	int64_t x359 = 37447LL;
	int32_t x360 = -1;
	uint64_t t84 = 1498412LLU;

    t84 = (x357+(x358&(x359/x360)));

    if (t84 != 87991731615LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int64_t x362 = INT64_MIN;
	volatile int8_t x363 = INT8_MIN;
	volatile uint8_t x364 = UINT8_MAX;
	int64_t t85 = 124119894080LL;

    t85 = (x361+(x362&(x363/x364)));

    if (t85 != 4294967295LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x365 = INT16_MIN;
	int64_t x366 = INT64_MIN;
	uint64_t x367 = 58684362LLU;
	uint64_t x368 = UINT64_MAX;
	volatile uint64_t t86 = 1LLU;

    t86 = (x365+(x366&(x367/x368)));

    if (t86 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x370 = 0;
	uint64_t x372 = 618247LLU;
	uint64_t t87 = 3317937425067415LLU;

    t87 = (x369+(x370&(x371/x372)));

    if (t87 != 18446744073709549774LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x373 = 0;
	int16_t x374 = -242;
	int16_t x375 = INT16_MIN;
	int64_t x376 = INT64_MAX;

    t88 = (x373+(x374&(x375/x376)));

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x377 = 15540939988LLU;
	int16_t x378 = -1;
	uint16_t x380 = UINT16_MAX;
	uint64_t t89 = 1161846266835559863LLU;

    t89 = (x377+(x378&(x379/x380)));

    if (t89 != 15540939988LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x381 = INT32_MIN;
	volatile int64_t x384 = 34457651LL;

    t90 = (x381+(x382&(x383/x384)));

    if (t90 != -2147483461LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x385 = 2190LLU;
	static int8_t x386 = INT8_MIN;
	static uint64_t x387 = 9559475LLU;
	uint16_t x388 = UINT16_MAX;
	volatile uint64_t t91 = 1386LLU;

    t91 = (x385+(x386&(x387/x388)));

    if (t91 != 2318LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x389 = INT64_MIN;
	int8_t x390 = -48;
	uint16_t x391 = 171U;
	volatile int64_t t92 = INT64_MIN;

    t92 = (x389+(x390&(x391/x392)));

    if (t92 != INT64_MIN) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x393 = INT64_MIN;
	uint32_t x395 = 1841U;
	volatile uint64_t t93 = 15835LLU;

    t93 = (x393+(x394&(x395/x396)));

    if (t93 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x397 = 20U;
	int32_t x398 = INT32_MIN;
	uint16_t x399 = 21U;
	static uint8_t x400 = 1U;
	int32_t t94 = 16226141;

    t94 = (x397+(x398&(x399/x400)));

    if (t94 != 20) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile uint16_t x401 = 19U;
	int8_t x402 = INT8_MIN;
	static uint16_t x404 = 10U;
	volatile int32_t t95 = 23;

    t95 = (x401+(x402&(x403/x404)));

    if (t95 != 19) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile uint8_t x405 = 28U;
	static uint16_t x408 = 32218U;
	static int64_t t96 = -106LL;

    t96 = (x405+(x406&(x407/x408)));

    if (t96 != 28LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x409 = 0U;
	static int64_t x411 = INT64_MIN;
	volatile uint64_t x412 = 18LLU;
	volatile uint64_t t97 = 174LLU;

    t97 = (x409+(x410&(x411/x412)));

    if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x417 = 401589019U;
	int8_t x419 = INT8_MIN;
	uint16_t x420 = UINT16_MAX;
	static volatile uint32_t t98 = 20594U;

    t98 = (x417+(x418&(x419/x420)));

    if (t98 != 401589019U) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x421 = INT32_MIN;
	int64_t x422 = 132984552490LL;
	volatile int8_t x423 = INT8_MIN;
	volatile int8_t x424 = INT8_MIN;
	static int64_t t99 = 1121445096447326LL;

    t99 = (x421+(x422&(x423/x424)));

    if (t99 != -2147483648LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x425 = 2898LL;
	int64_t x426 = -1LL;
	int8_t x427 = INT8_MIN;
	int8_t x428 = -1;
	int64_t t100 = 51LL;

    t100 = (x425+(x426&(x427/x428)));

    if (t100 != 3026LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint64_t x429 = UINT64_MAX;
	int32_t x430 = 0;
	int32_t x432 = -122366;

    t101 = (x429+(x430&(x431/x432)));

    if (t101 != UINT64_MAX) { NG(); } else { ; }
	
}

void f102(void) {
    	static int32_t x433 = INT32_MIN;
	volatile int64_t t102 = -203607LL;

    t102 = (x433+(x434&(x435/x436)));

    if (t102 != -2147483648LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x437 = 188;
	volatile int8_t x439 = INT8_MIN;
	volatile int8_t x440 = INT8_MAX;
	int32_t t103 = 119;

    t103 = (x437+(x438&(x439/x440)));

    if (t103 != -2147483460) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint64_t x442 = UINT64_MAX;
	volatile int64_t x443 = INT64_MIN;
	volatile uint64_t t104 = 279874304488LLU;

    t104 = (x441+(x442&(x443/x444)));

    if (t104 != 18446462590142644241LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x445 = 1;
	int64_t x448 = INT64_MIN;
	static int64_t t105 = -48285942934LL;

    t105 = (x445+(x446&(x447/x448)));

    if (t105 != 1LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x450 = -550362;
	volatile int16_t x451 = INT16_MAX;
	int16_t x452 = INT16_MIN;
	volatile int64_t t106 = INT64_MIN;

    t106 = (x449+(x450&(x451/x452)));

    if (t106 != INT64_MIN) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint64_t x453 = 11LLU;
	uint16_t x454 = 5U;
	int8_t x456 = -4;
	uint64_t t107 = 0LLU;

    t107 = (x453+(x454&(x455/x456)));

    if (t107 != 12LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int8_t x457 = -13;
	volatile int32_t x458 = INT32_MIN;
	int16_t x459 = INT16_MAX;
	uint64_t x460 = 358284833117658LLU;
	volatile uint64_t t108 = 207400806LLU;

    t108 = (x457+(x458&(x459/x460)));

    if (t108 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x462 = INT8_MAX;
	int8_t x464 = 4;
	volatile uint64_t t109 = 251522LLU;

    t109 = (x461+(x462&(x463/x464)));

    if (t109 != 2057188404587LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int64_t x465 = -1LL;
	int64_t x466 = -56596241343LL;
	int32_t x467 = -519;
	static int32_t x468 = -1;
	volatile int64_t t110 = -472129630720LL;

    t110 = (x465+(x466&(x467/x468)));

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x472 = 63U;

    t111 = (x469+(x470&(x471/x472)));

    if (t111 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x475 = 903984366U;

    t112 = (x473+(x474&(x475/x476)));

    if (t112 != 4294901113U) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x477 = 5U;
	int8_t x478 = INT8_MIN;
	static int8_t x479 = -55;
	static volatile int32_t t113 = -184787900;

    t113 = (x477+(x478&(x479/x480)));

    if (t113 != 5) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x481 = 12026886LL;
	uint8_t x482 = 15U;
	int16_t x483 = -815;
	uint64_t x484 = 254975899417334LLU;
	volatile uint64_t t114 = 116LLU;

    t114 = (x481+(x482&(x483/x484)));

    if (t114 != 12026897LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x485 = 9742;
	int64_t x486 = INT64_MIN;
	static uint8_t x488 = UINT8_MAX;
	volatile int64_t t115 = 27099991781090009LL;

    t115 = (x485+(x486&(x487/x488)));

    if (t115 != 9742LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x489 = 1;
	int32_t x490 = INT32_MAX;
	int16_t x492 = INT16_MIN;
	static int32_t t116 = -472238;

    t116 = (x489+(x490&(x491/x492)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int8_t x494 = 26;
	static int32_t x495 = INT32_MAX;
	int32_t x496 = INT32_MAX;
	volatile int64_t t117 = INT64_MAX;

    t117 = (x493+(x494&(x495/x496)));

    if (t117 != INT64_MAX) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x497 = UINT32_MAX;
	int16_t x498 = INT16_MIN;
	uint32_t x499 = 418U;
	volatile int8_t x500 = INT8_MIN;
	volatile uint32_t t118 = UINT32_MAX;

    t118 = (x497+(x498&(x499/x500)));

    if (t118 != UINT32_MAX) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x501 = 8753502596383352LLU;
	uint32_t x502 = 5525683U;
	uint16_t x503 = UINT16_MAX;
	uint32_t x504 = UINT32_MAX;

    t119 = (x501+(x502&(x503/x504)));

    if (t119 != 8753502596383352LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x505 = INT32_MIN;
	int8_t x507 = -14;
	static volatile int16_t x508 = INT16_MIN;
	volatile int64_t t120 = -24242241255022628LL;

    t120 = (x505+(x506&(x507/x508)));

    if (t120 != -2147483648LL) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x509 = INT32_MAX;
	uint32_t x510 = 0U;
	static uint32_t x511 = UINT32_MAX;
	uint64_t x512 = 890666635LLU;
	uint64_t t121 = 257891184552792LLU;

    t121 = (x509+(x510&(x511/x512)));

    if (t121 != 2147483647LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x514 = 13U;
	int32_t x515 = -114287;
	int32_t x516 = INT32_MAX;

    t122 = (x513+(x514&(x515/x516)));

    if (t122 != -1) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint64_t x517 = 7605717240982767573LLU;
	int32_t x518 = INT32_MIN;
	static int16_t x519 = 854;
	volatile uint64_t t123 = 1114676826868824302LLU;

    t123 = (x517+(x518&(x519/x520)));

    if (t123 != 7605717240982767573LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x521 = INT16_MAX;
	int16_t x522 = INT16_MIN;
	uint16_t x523 = 3716U;
	static int32_t t124 = -3;

    t124 = (x521+(x522&(x523/x524)));

    if (t124 != 32767) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x530 = -1;
	static int32_t x531 = -404082;
	uint32_t x532 = 13U;
	volatile uint32_t t125 = 1014U;

    t125 = (x529+(x530&(x531/x532)));

    if (t125 != 330350888U) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x534 = -1;
	int64_t x535 = 37619LL;
	int16_t x536 = -8226;

    t126 = (x533+(x534&(x535/x536)));

    if (t126 != -32772LL) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint16_t x537 = 32U;
	volatile uint8_t x538 = UINT8_MAX;
	volatile uint32_t x539 = 15U;
	int32_t x540 = INT32_MIN;
	uint32_t t127 = 371014173U;

    t127 = (x537+(x538&(x539/x540)));

    if (t127 != 32U) { NG(); } else { ; }
	
}

void f128(void) {
    	static int64_t x542 = INT64_MIN;
	uint8_t x543 = UINT8_MAX;
	volatile int64_t t128 = 13957449539566LL;

    t128 = (x541+(x542&(x543/x544)));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x545 = 47301695908597LLU;
	int8_t x547 = 27;
	int32_t x548 = INT32_MAX;
	uint64_t t129 = 158172LLU;

    t129 = (x545+(x546&(x547/x548)));

    if (t129 != 47301695908597LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x550 = -2825;
	int64_t x551 = INT64_MIN;
	static volatile int64_t x552 = INT64_MIN;
	uint64_t t130 = 72079LLU;

    t130 = (x549+(x550&(x551/x552)));

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x554 = 853478818U;
	int16_t x555 = 34;
	int16_t x556 = 14903;
	volatile uint32_t t131 = 1827U;

    t131 = (x553+(x554&(x555/x556)));

    if (t131 != 2U) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x557 = 184U;
	static uint32_t x558 = 53423182U;
	int8_t x559 = -1;
	uint32_t x560 = 1228U;
	uint32_t t132 = 1194U;

    t132 = (x557+(x558&(x559/x560)));

    if (t132 != 2428098U) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x561 = INT32_MAX;
	int16_t x562 = 0;
	int32_t x563 = 169628849;
	uint16_t x564 = 61U;
	int32_t t133 = INT32_MAX;

    t133 = (x561+(x562&(x563/x564)));

    if (t133 != INT32_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int8_t x566 = INT8_MIN;

    t134 = (x565+(x566&(x567/x568)));

    if (t134 != 11995821U) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x570 = UINT64_MAX;
	static int16_t x571 = -9;
	static volatile int8_t x572 = 7;
	uint64_t t135 = 2208407031378581LLU;

    t135 = (x569+(x570&(x571/x572)));

    if (t135 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x573 = 3U;
	volatile int32_t x576 = -1;
	static uint32_t t136 = 3130549U;

    t136 = (x573+(x574&(x575/x576)));

    if (t136 != 4294967276U) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x577 = -7081027026633315LL;
	static volatile int32_t x578 = INT32_MAX;

    t137 = (x577+(x578&(x579/x580)));

    if (t137 != -7081027026633315LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x583 = INT8_MIN;
	static int32_t x584 = -1;

    t138 = (x581+(x582&(x583/x584)));

    if (t138 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint32_t x585 = 134U;
	static int64_t x588 = INT64_MIN;
	int64_t t139 = -644116LL;

    t139 = (x585+(x586&(x587/x588)));

    if (t139 != 134LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x589 = -6156;
	int32_t x590 = -1056605;
	uint64_t x591 = 136711488076004LLU;
	uint64_t x592 = 1619290LLU;
	volatile uint64_t t140 = 3LLU;

    t140 = (x589+(x590&(x591/x592)));

    if (t140 != 84420629LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint16_t x593 = UINT16_MAX;
	static int16_t x594 = -1;
	int8_t x595 = INT8_MIN;
	int8_t x596 = INT8_MIN;

    t141 = (x593+(x594&(x595/x596)));

    if (t141 != 65536) { NG(); } else { ; }
	
}

void f142(void) {
    	static int32_t x598 = -49716;
	int32_t x599 = INT32_MIN;
	int64_t x600 = 3276742539354187LL;
	int64_t t142 = INT64_MIN;

    t142 = (x597+(x598&(x599/x600)));

    if (t142 != INT64_MIN) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x601 = -4;
	int64_t x603 = 16334601088LL;

    t143 = (x601+(x602&(x603/x604)));

    if (t143 != 2147483637LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x605 = 13U;
	uint16_t x606 = 4U;
	volatile uint64_t x608 = 6391120894LLU;
	uint64_t t144 = 268836359LLU;

    t144 = (x605+(x606&(x607/x608)));

    if (t144 != 17LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x610 = 0U;
	uint64_t x612 = 69409292744158LLU;
	uint64_t t145 = 180716161327LLU;

    t145 = (x609+(x610&(x611/x612)));

    if (t145 != 14670LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x614 = UINT32_MAX;
	uint16_t x615 = 7U;
	volatile int32_t x616 = -1;
	uint32_t t146 = 0U;

    t146 = (x613+(x614&(x615/x616)));

    if (t146 != 61U) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x617 = INT32_MIN;
	static volatile int64_t x618 = INT64_MIN;
	int8_t x619 = -25;
	static uint64_t t147 = 1712708759221455LLU;

    t147 = (x617+(x618&(x619/x620)));

    if (t147 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x622 = 119U;
	int64_t x623 = -1LL;
	int8_t x624 = -1;
	static int64_t t148 = -1234373886219635LL;

    t148 = (x621+(x622&(x623/x624)));

    if (t148 != 49LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x625 = UINT16_MAX;
	int8_t x626 = INT8_MAX;
	int16_t x627 = -1;
	int16_t x628 = -1277;

    t149 = (x625+(x626&(x627/x628)));

    if (t149 != 65535) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x629 = UINT64_MAX;
	uint64_t x630 = UINT64_MAX;
	uint32_t x631 = 41422U;
	volatile uint64_t x632 = UINT64_MAX;
	uint64_t t150 = UINT64_MAX;

    t150 = (x629+(x630&(x631/x632)));

    if (t150 != UINT64_MAX) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x633 = 11U;
	int64_t x634 = INT64_MIN;
	int8_t x635 = -1;
	int64_t x636 = INT64_MAX;
	static volatile int64_t t151 = 71511LL;

    t151 = (x633+(x634&(x635/x636)));

    if (t151 != 11LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint16_t x637 = 1313U;
	static uint8_t x638 = 103U;
	int8_t x639 = -1;

    t152 = (x637+(x638&(x639/x640)));

    if (t152 != 1346LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x642 = -54319094695LL;
	int16_t x643 = INT16_MIN;
	volatile int32_t x644 = INT32_MIN;
	int64_t t153 = 3761739858695669058LL;

    t153 = (x641+(x642&(x643/x644)));

    if (t153 != -128LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x645 = UINT16_MAX;
	int16_t x646 = 24;
	volatile int32_t x647 = INT32_MAX;
	int32_t x648 = INT32_MIN;
	static int32_t t154 = -1;

    t154 = (x645+(x646&(x647/x648)));

    if (t154 != 65535) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x649 = INT8_MIN;
	int8_t x651 = INT8_MIN;
	uint16_t x652 = 1U;

    t155 = (x649+(x650&(x651/x652)));

    if (t155 != -256) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x653 = 0;
	int64_t x654 = 1481659715LL;
	uint8_t x655 = UINT8_MAX;
	int8_t x656 = -13;
	int64_t t156 = -1667LL;

    t156 = (x653+(x654&(x655/x656)));

    if (t156 != 1481659713LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x657 = INT32_MIN;
	int32_t x658 = INT32_MIN;
	static uint16_t x659 = UINT16_MAX;
	int64_t x660 = INT64_MIN;
	volatile int64_t t157 = 160140900228LL;

    t157 = (x657+(x658&(x659/x660)));

    if (t157 != -2147483648LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint8_t x661 = 2U;
	int8_t x662 = -1;
	uint64_t x663 = UINT64_MAX;
	volatile int64_t x664 = -1LL;
	uint64_t t158 = 2LLU;

    t158 = (x661+(x662&(x663/x664)));

    if (t158 != 3LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x665 = INT16_MAX;
	int32_t x666 = -856483;
	static int8_t x667 = -1;
	static volatile int16_t x668 = INT16_MIN;

    t159 = (x665+(x666&(x667/x668)));

    if (t159 != 32767) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x669 = 5;
	volatile uint64_t x671 = UINT64_MAX;
	volatile int16_t x672 = INT16_MAX;

    t160 = (x669+(x670&(x671/x672)));

    if (t160 != 5LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x673 = 511816176475607863LLU;
	uint16_t x674 = UINT16_MAX;
	static int8_t x675 = 2;
	volatile int64_t x676 = 2388245068953710827LL;
	volatile uint64_t t161 = 69265390168466LLU;

    t161 = (x673+(x674&(x675/x676)));

    if (t161 != 511816176475607863LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x678 = INT32_MIN;
	int16_t x679 = INT16_MAX;
	int32_t t162 = -1172;

    t162 = (x677+(x678&(x679/x680)));

    if (t162 != -32768) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x685 = 10;
	uint32_t x686 = 1576U;
	int8_t x687 = INT8_MIN;

    t163 = (x685+(x686&(x687/x688)));

    if (t163 != 10LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x689 = -112621441341556LL;
	int64_t x690 = 5040LL;
	uint8_t x692 = 51U;
	volatile int64_t t164 = 58950175383LL;

    t164 = (x689+(x690&(x691/x692)));

    if (t164 != -112621441336516LL) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint8_t x693 = 0U;
	uint64_t x694 = UINT64_MAX;
	int64_t x696 = 18940933953LL;
	uint64_t t165 = 245821386454LLU;

    t165 = (x693+(x694&(x695/x696)));

    if (t165 != 0LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x697 = 59544498LLU;
	uint32_t x698 = 42703740U;
	static volatile uint64_t x699 = 2282991832LLU;
	int8_t x700 = INT8_MAX;
	uint64_t t166 = 6984279073612369961LLU;

    t166 = (x697+(x698&(x699/x700)));

    if (t166 != 59678506LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x701 = INT16_MIN;

    t167 = (x701+(x702&(x703/x704)));

    if (t167 != 4294934528U) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x705 = INT8_MAX;
	uint8_t x706 = 32U;
	int32_t x707 = -5506795;
	int32_t x708 = -1;
	volatile int32_t t168 = 75;

    t168 = (x705+(x706&(x707/x708)));

    if (t168 != 159) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int32_t x709 = INT32_MIN;
	int64_t x710 = INT64_MIN;
	int64_t x711 = -24041926570390246LL;
	int8_t x712 = INT8_MIN;
	volatile int64_t t169 = 4776360236706262LL;

    t169 = (x709+(x710&(x711/x712)));

    if (t169 != -2147483648LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x714 = INT8_MIN;
	int64_t x715 = INT64_MIN;
	volatile int64_t t170 = 1LL;

    t170 = (x713+(x714&(x715/x716)));

    if (t170 != -4294967550LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x717 = 1036392;
	int16_t x718 = INT16_MAX;
	static uint64_t x720 = UINT64_MAX;
	volatile uint64_t t171 = 11926209094512813LLU;

    t171 = (x717+(x718&(x719/x720)));

    if (t171 != 1036392LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x725 = INT8_MAX;
	int8_t x726 = INT8_MIN;
	volatile uint16_t x727 = 886U;
	int32_t x728 = -1;
	volatile int32_t t172 = 39933;

    t172 = (x725+(x726&(x727/x728)));

    if (t172 != -769) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x730 = 104204027U;
	int32_t x731 = INT32_MAX;
	static int64_t x732 = 82236368368800406LL;
	int64_t t173 = 782LL;

    t173 = (x729+(x730&(x731/x732)));

    if (t173 != 255LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x737 = 771;
	static volatile int32_t x738 = -57;
	int64_t x739 = INT64_MIN;
	uint64_t t174 = 103960064900133LLU;

    t174 = (x737+(x738&(x739/x740)));

    if (t174 != 551176LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x741 = INT16_MIN;
	int64_t x742 = 103772078LL;
	uint64_t x743 = 410025418119370LLU;
	volatile int64_t x744 = -1LL;
	uint64_t t175 = 17562LLU;

    t175 = (x741+(x742&(x743/x744)));

    if (t175 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x745 = INT64_MIN;
	int8_t x746 = INT8_MAX;
	volatile int16_t x747 = INT16_MIN;
	static volatile int64_t t176 = INT64_MIN;

    t176 = (x745+(x746&(x747/x748)));

    if (t176 != INT64_MIN) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x749 = INT32_MIN;
	int32_t x750 = -1;
	uint64_t x751 = 15242927LLU;

    t177 = (x749+(x750&(x751/x752)));

    if (t177 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x753 = 16U;
	uint32_t x754 = 343725U;
	static int16_t x755 = INT16_MIN;

    t178 = (x753+(x754&(x755/x756)));

    if (t178 != 16U) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x757 = INT8_MIN;
	int32_t x758 = INT32_MAX;
	uint32_t x759 = 15869090U;
	int16_t x760 = -147;
	volatile uint32_t t179 = 86U;

    t179 = (x757+(x758&(x759/x760)));

    if (t179 != 4294967168U) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x762 = INT64_MIN;
	static int32_t x763 = -1186742;
	int8_t x764 = -1;
	volatile int64_t t180 = -5290550LL;

    t180 = (x761+(x762&(x763/x764)));

    if (t180 != 255LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x769 = UINT64_MAX;
	uint64_t x770 = 28LLU;
	int64_t x771 = -1LL;
	static uint32_t x772 = 5U;
	uint64_t t181 = UINT64_MAX;

    t181 = (x769+(x770&(x771/x772)));

    if (t181 != UINT64_MAX) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x773 = INT16_MAX;
	int64_t x774 = 932250671499LL;
	uint64_t x775 = UINT64_MAX;
	uint32_t x776 = UINT32_MAX;
	uint64_t t182 = 3627362227083001209LLU;

    t182 = (x773+(x774&(x775/x776)));

    if (t182 != 4295000064LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x779 = 2;
	volatile uint32_t x780 = UINT32_MAX;
	int64_t t183 = -191271539242304136LL;

    t183 = (x777+(x778&(x779/x780)));

    if (t183 != -1LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x781 = -1;
	uint8_t x782 = 36U;
	static int64_t x783 = INT64_MIN;
	int16_t x784 = 6592;

    t184 = (x781+(x782&(x783/x784)));

    if (t184 != -1LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x785 = INT32_MAX;
	static volatile int32_t x786 = INT32_MIN;
	int8_t x787 = INT8_MAX;
	int32_t t185 = INT32_MAX;

    t185 = (x785+(x786&(x787/x788)));

    if (t185 != INT32_MAX) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x793 = 51834865049352170LLU;
	uint64_t x794 = 14086547979LLU;
	static uint8_t x795 = 3U;
	int64_t x796 = INT64_MIN;
	volatile uint64_t t186 = 234910461077LLU;

    t186 = (x793+(x794&(x795/x796)));

    if (t186 != 51834865049352170LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x797 = INT8_MIN;
	int32_t x798 = INT32_MIN;
	uint8_t x800 = 23U;
	volatile int32_t t187 = 215612658;

    t187 = (x797+(x798&(x799/x800)));

    if (t187 != -128) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile int16_t x801 = -1;
	int32_t x802 = -1;
	volatile uint8_t x803 = 84U;
	volatile int32_t t188 = -14772976;

    t188 = (x801+(x802&(x803/x804)));

    if (t188 != -1) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x805 = -1;
	int64_t x808 = 264529LL;
	static volatile int64_t t189 = 56680453040269743LL;

    t189 = (x805+(x806&(x807/x808)));

    if (t189 != 8117LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x809 = -22;
	static int64_t x810 = INT64_MIN;
	static int16_t x811 = INT16_MAX;
	volatile int64_t t190 = -2212293461773LL;

    t190 = (x809+(x810&(x811/x812)));

    if (t190 != -22LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x813 = INT8_MIN;
	uint8_t x814 = 1U;
	int8_t x815 = -1;
	uint8_t x816 = 15U;
	volatile int32_t t191 = 3726;

    t191 = (x813+(x814&(x815/x816)));

    if (t191 != -128) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile uint16_t x817 = UINT16_MAX;
	uint32_t x818 = 5705U;
	int64_t x819 = -1LL;
	static uint32_t x820 = 61U;
	static volatile int64_t t192 = -23686LL;

    t192 = (x817+(x818&(x819/x820)));

    if (t192 != 65535LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x821 = -41;
	int16_t x822 = -1;
	int32_t x823 = INT32_MIN;
	static uint64_t x824 = UINT64_MAX;
	static volatile uint64_t t193 = 126080463296527056LLU;

    t193 = (x821+(x822&(x823/x824)));

    if (t193 != 18446744073709551575LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	static int16_t x825 = -1;
	uint64_t x826 = 35502966702566081LLU;
	uint64_t x827 = UINT64_MAX;
	volatile int16_t x828 = -1;
	static uint64_t t194 = 19155880840LLU;

    t194 = (x825+(x826&(x827/x828)));

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x829 = INT64_MAX;
	int64_t x830 = -26482LL;
	static int32_t x831 = 139230;
	static int64_t t195 = 26190762145250955LL;

    t195 = (x829+(x830&(x831/x832)));

    if (t195 != 9223372036854749323LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x833 = INT16_MIN;
	volatile int16_t x835 = -1;
	uint16_t x836 = UINT16_MAX;
	volatile int32_t t196 = -19159972;

    t196 = (x833+(x834&(x835/x836)));

    if (t196 != -32768) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x837 = INT16_MIN;
	int16_t x839 = -132;
	static uint8_t x840 = 10U;

    t197 = (x837+(x838&(x839/x840)));

    if (t197 != -65536) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile int32_t x842 = INT32_MIN;
	int64_t x843 = -3770015076186389489LL;
	uint8_t x844 = 5U;
	static int64_t t198 = 17394606112442546LL;

    t198 = (x841+(x842&(x843/x844)));

    if (t198 != -754003015861534721LL) { NG(); } else { ; }
	
}

void f199(void) {
    	static int32_t x846 = 121753;
	uint32_t x847 = 2509890U;
	static int32_t x848 = -282530411;
	static uint32_t t199 = 33U;

    t199 = (x845+(x846&(x847/x848)));

    if (t199 != 4294963856U) { NG(); } else { ; }
	
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

