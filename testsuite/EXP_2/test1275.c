
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

static int32_t x2 = -1;
int32_t t0 = 0;
static uint16_t x9 = UINT16_MAX;
int16_t x13 = INT16_MIN;
int16_t x17 = INT16_MIN;
volatile int32_t x19 = 505;
int32_t x23 = INT32_MIN;
int8_t x24 = INT8_MIN;
int32_t t5 = 211129923;
uint32_t x34 = 23U;
volatile int32_t t8 = 9283282;
int8_t x38 = INT8_MAX;
volatile uint8_t x48 = UINT8_MAX;
volatile int32_t t11 = -118;
volatile int64_t x61 = 1265035219102638603LL;
int8_t x69 = -1;
static int32_t t17 = -2973;
int32_t x74 = -1;
volatile uint64_t x79 = 24226202681087LLU;
volatile int32_t t19 = INT32_MIN;
int32_t t20 = 1;
volatile uint64_t x85 = 107663336377LLU;
int32_t x89 = INT32_MIN;
int64_t t22 = INT64_MIN;
static int8_t x93 = 2;
int16_t x100 = -1;
int32_t t25 = 0;
uint16_t x108 = 4U;
int32_t x110 = -26;
uint8_t x115 = UINT8_MAX;
static int8_t x116 = -1;
static int64_t x120 = INT64_MAX;
int64_t x123 = -33657832LL;
uint16_t x126 = UINT16_MAX;
int64_t x131 = 2124033583659LL;
volatile int64_t t33 = 320695842664LL;
int16_t x139 = -1;
volatile uint32_t x140 = UINT32_MAX;
int16_t x150 = -1;
volatile int8_t x152 = -13;
int64_t x156 = INT64_MIN;
int16_t x159 = -1842;
static uint16_t x164 = 2U;
int8_t x180 = -1;
static int32_t t44 = 1049890;
int8_t x181 = INT8_MIN;
int64_t x185 = INT64_MIN;
int64_t x193 = INT64_MIN;
int16_t x195 = 0;
uint64_t x198 = 3071197LLU;
static uint32_t x199 = 7643U;
int64_t x200 = INT64_MIN;
int32_t t51 = 195;
int16_t x210 = INT16_MAX;
int16_t x212 = INT16_MIN;
int16_t x214 = -1;
volatile uint64_t x220 = UINT64_MAX;
int16_t x223 = -4;
static volatile int32_t t55 = -177937;
static int32_t x236 = INT32_MIN;
static int32_t x237 = INT32_MAX;
uint16_t x241 = 282U;
int64_t x247 = INT64_MIN;
static volatile uint64_t x252 = 35983116LLU;
volatile int64_t t63 = 15LL;
volatile uint16_t x261 = UINT16_MAX;
int16_t x265 = INT16_MIN;
volatile int32_t t68 = -36;
int64_t x280 = -1LL;
int64_t t69 = 8380625127879837LL;
int16_t x288 = -11297;
int16_t x291 = -1;
uint8_t x292 = UINT8_MAX;
int16_t x293 = 1;
int8_t x296 = 1;
uint32_t x299 = UINT32_MAX;
volatile int64_t x302 = -33LL;
int16_t x303 = -1;
uint64_t x304 = UINT64_MAX;
uint8_t x309 = UINT8_MAX;
int16_t x312 = INT16_MIN;
volatile int64_t x315 = INT64_MAX;
volatile uint16_t x320 = UINT16_MAX;
static uint32_t x323 = UINT32_MAX;
int32_t x324 = INT32_MAX;
static uint32_t x330 = 1523U;
uint8_t x334 = 9U;
static uint32_t x336 = UINT32_MAX;
uint32_t t83 = 7065454U;
int32_t x342 = -1;
int32_t x346 = INT32_MIN;
uint64_t x349 = 24288605539LLU;
volatile uint64_t x351 = 27625431491LLU;
int32_t t88 = 2713411;
static int16_t x361 = INT16_MAX;
int32_t x364 = 1;
int32_t t90 = -13145;
uint16_t x368 = UINT16_MAX;
static int16_t x379 = -1;
static int64_t x380 = 34237739LL;
int32_t x382 = 50106168;
static uint64_t t95 = 451568LLU;
int8_t x387 = INT8_MAX;
uint64_t x388 = 6365607907723485593LLU;
volatile uint64_t t96 = 3395794631467418439LLU;
int16_t x391 = -1;
int32_t t97 = -27915959;
int32_t x397 = INT32_MIN;
static uint32_t x398 = 37452U;
static volatile int64_t t99 = 616580364506507LL;
int32_t x408 = INT32_MAX;
volatile uint32_t x409 = 128209U;
static volatile int32_t t102 = -245;
static uint8_t x422 = 29U;
int16_t x426 = -1;
int32_t t107 = INT32_MIN;
uint64_t x437 = 416091097402633LLU;
int8_t x445 = -1;
static volatile int32_t t111 = -481;
volatile uint64_t t112 = UINT64_MAX;
uint8_t x458 = 1U;
volatile int32_t t116 = 528220687;
static int8_t x469 = 0;
int8_t x472 = 0;
volatile int32_t t118 = 3;
uint32_t x479 = 134U;
int8_t x484 = INT8_MIN;
int8_t x486 = 4;
uint64_t x487 = UINT64_MAX;
volatile int32_t x495 = -1;
int16_t x500 = INT16_MIN;
uint32_t x505 = 639000U;
volatile uint32_t x507 = 727927205U;
uint16_t x510 = 716U;
static int64_t x516 = -1LL;
static int16_t x517 = INT16_MIN;
volatile int64_t t129 = INT64_MIN;
int8_t x527 = INT8_MAX;
uint64_t x529 = UINT64_MAX;
static int32_t x534 = -254254;
uint64_t x536 = 248LLU;
int16_t x537 = INT16_MIN;
uint16_t x540 = UINT16_MAX;
volatile int32_t x541 = INT32_MAX;
volatile uint16_t x547 = 22605U;
volatile int64_t t136 = 0LL;
uint8_t x550 = 47U;
volatile int32_t t138 = 12;
int8_t x558 = INT8_MIN;
static int64_t x566 = 1LL;
int32_t x568 = -1;
volatile int16_t x569 = INT16_MIN;
static volatile int32_t t142 = 905;
int16_t x575 = INT16_MAX;
int8_t x576 = 5;
int8_t x577 = INT8_MIN;
int16_t x578 = INT16_MAX;
volatile int64_t x579 = INT64_MAX;
uint8_t x580 = 6U;
uint8_t x581 = UINT8_MAX;
volatile int64_t t145 = INT64_MIN;
static volatile int64_t x587 = -1LL;
int64_t x588 = INT64_MIN;
volatile int64_t t146 = INT64_MIN;
int32_t x594 = -71796016;
int32_t t148 = -152;
uint16_t x598 = 8U;
int32_t x600 = -1;
int8_t x607 = INT8_MIN;
int32_t x612 = -1494279;
int32_t t152 = 11;
volatile int32_t t154 = 707;
static volatile int64_t t155 = -688LL;
static uint8_t x631 = UINT8_MAX;
volatile int8_t x633 = -1;
int32_t x636 = INT32_MIN;
int64_t x638 = -1LL;
static int64_t x640 = -32348126352LL;
uint64_t x644 = 61923LLU;
uint64_t t160 = 63442543872217716LLU;
int16_t x646 = INT16_MAX;
int8_t x647 = -1;
int8_t x660 = INT8_MIN;
static volatile int64_t t166 = INT64_MIN;
int8_t x671 = -1;
int32_t t167 = 661186440;
int64_t x678 = -1LL;
int32_t x680 = -1;
static int16_t x684 = 0;
uint8_t x685 = 0U;
int64_t x687 = INT64_MIN;
int32_t t171 = 391;
int8_t x689 = INT8_MAX;
int16_t x690 = INT16_MIN;
volatile int64_t x696 = -76686LL;
static uint16_t x700 = 1U;
int8_t x703 = 1;
uint8_t x711 = 2U;
static volatile int32_t t177 = 6;
int64_t x726 = -1LL;
int64_t x728 = -1LL;
volatile int64_t t181 = -1595LL;
int8_t x729 = -1;
int64_t t184 = -1204651516078763LL;
uint8_t x746 = 13U;
static int16_t x750 = INT16_MIN;
uint64_t x751 = 328LLU;
uint16_t x753 = 0U;
int16_t x754 = -281;
int64_t x759 = -1LL;
static volatile uint32_t x760 = UINT32_MAX;
int32_t x764 = -1;
int16_t x768 = INT16_MAX;
int8_t x769 = INT8_MAX;
int64_t x776 = INT64_MIN;
int32_t x786 = INT32_MIN;
int8_t x787 = -1;
volatile int32_t x788 = -1;
static int32_t t196 = -7788;
int8_t x789 = 1;
uint32_t x791 = 117728210U;
volatile int32_t t198 = INT32_MIN;
static uint8_t x800 = 95U;


void f0(void) {
    	volatile uint64_t x1 = 8LLU;
	volatile int8_t x3 = INT8_MIN;
	uint16_t x4 = 47U;

    t0 = ((x1==(x2!=x3))+x4);

    if (t0 != 47) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint8_t x5 = UINT8_MAX;
	int8_t x6 = 7;
	volatile int8_t x7 = 1;
	uint8_t x8 = 123U;
	int32_t t1 = -168;

    t1 = ((x5==(x6!=x7))+x8);

    if (t1 != 123) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x10 = -198LL;
	int8_t x11 = INT8_MIN;
	static volatile uint8_t x12 = 8U;
	static volatile int32_t t2 = -1410;

    t2 = ((x9==(x10!=x11))+x12);

    if (t2 != 8) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x14 = INT8_MIN;
	uint16_t x15 = 127U;
	static int64_t x16 = INT64_MIN;
	int64_t t3 = INT64_MIN;

    t3 = ((x13==(x14!=x15))+x16);

    if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint16_t x18 = 14U;
	int16_t x20 = -3;
	volatile int32_t t4 = 348;

    t4 = ((x17==(x18!=x19))+x20);

    if (t4 != -3) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = -1LL;
	int8_t x22 = -1;

    t5 = ((x21==(x22!=x23))+x24);

    if (t5 != -128) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = INT16_MIN;
	volatile int32_t x26 = -1;
	int8_t x27 = -14;
	volatile int16_t x28 = -1;
	int32_t t6 = -636301689;

    t6 = ((x25==(x26!=x27))+x28);

    if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x29 = 2530LLU;
	int64_t x30 = INT64_MIN;
	volatile int64_t x31 = -1037015563767LL;
	uint16_t x32 = 6741U;
	volatile int32_t t7 = 14927;

    t7 = ((x29==(x30!=x31))+x32);

    if (t7 != 6741) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = -1;
	volatile int64_t x35 = INT64_MIN;
	static volatile int16_t x36 = -1;

    t8 = ((x33==(x34!=x35))+x36);

    if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x37 = -1;
	uint8_t x39 = UINT8_MAX;
	int32_t x40 = -1;
	int32_t t9 = 21865979;

    t9 = ((x37==(x38!=x39))+x40);

    if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = 42557034291LL;
	int16_t x42 = -1;
	static int32_t x43 = -51603;
	int32_t x44 = -1;
	volatile int32_t t10 = 51;

    t10 = ((x41==(x42!=x43))+x44);

    if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x45 = 69U;
	static uint32_t x46 = 5362U;
	static int8_t x47 = INT8_MIN;

    t11 = ((x45==(x46!=x47))+x48);

    if (t11 != 255) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = 390286044LL;
	int32_t x50 = -1;
	uint8_t x51 = UINT8_MAX;
	int32_t x52 = INT32_MIN;
	volatile int32_t t12 = INT32_MIN;

    t12 = ((x49==(x50!=x51))+x52);

    if (t12 != INT32_MIN) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = -2531;
	int16_t x54 = 1770;
	int16_t x55 = INT16_MAX;
	uint64_t x56 = 221870325304004LLU;
	volatile uint64_t t13 = 3LLU;

    t13 = ((x53==(x54!=x55))+x56);

    if (t13 != 221870325304004LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = INT64_MIN;
	uint32_t x58 = 893576027U;
	int32_t x59 = -474;
	int64_t x60 = -430175123LL;
	volatile int64_t t14 = 1275404507016069004LL;

    t14 = ((x57==(x58!=x59))+x60);

    if (t14 != -430175123LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x62 = 1380794;
	static int8_t x63 = INT8_MIN;
	volatile int32_t x64 = INT32_MIN;
	int32_t t15 = INT32_MIN;

    t15 = ((x61==(x62!=x63))+x64);

    if (t15 != INT32_MIN) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = INT8_MIN;
	int8_t x66 = INT8_MAX;
	volatile int16_t x67 = 8;
	volatile uint64_t x68 = UINT64_MAX;
	uint64_t t16 = UINT64_MAX;

    t16 = ((x65==(x66!=x67))+x68);

    if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x70 = INT8_MIN;
	uint32_t x71 = 1737254U;
	volatile int8_t x72 = INT8_MIN;

    t17 = ((x69==(x70!=x71))+x72);

    if (t17 != -128) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x73 = -17871220LL;
	int16_t x75 = INT16_MIN;
	volatile int8_t x76 = 0;
	volatile int32_t t18 = -28;

    t18 = ((x73==(x74!=x75))+x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x77 = -1;
	static uint8_t x78 = UINT8_MAX;
	volatile int32_t x80 = INT32_MIN;

    t19 = ((x77==(x78!=x79))+x80);

    if (t19 != INT32_MIN) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x81 = -2975;
	uint32_t x82 = 262024U;
	uint8_t x83 = 0U;
	int8_t x84 = -2;

    t20 = ((x81==(x82!=x83))+x84);

    if (t20 != -2) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x86 = -1LL;
	int64_t x87 = INT64_MIN;
	static int8_t x88 = 7;
	volatile int32_t t21 = 348999447;

    t21 = ((x85==(x86!=x87))+x88);

    if (t21 != 7) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x90 = INT16_MIN;
	uint64_t x91 = UINT64_MAX;
	int64_t x92 = INT64_MIN;

    t22 = ((x89==(x90!=x91))+x92);

    if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x94 = INT64_MAX;
	volatile uint64_t x95 = 3373314710LLU;
	uint16_t x96 = 2U;
	volatile int32_t t23 = 1;

    t23 = ((x93==(x94!=x95))+x96);

    if (t23 != 2) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int64_t x97 = INT64_MAX;
	int8_t x98 = INT8_MIN;
	static int8_t x99 = INT8_MAX;
	static volatile int32_t t24 = -890;

    t24 = ((x97==(x98!=x99))+x100);

    if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x101 = UINT32_MAX;
	int16_t x102 = INT16_MAX;
	volatile uint8_t x103 = UINT8_MAX;
	int32_t x104 = -4272;

    t25 = ((x101==(x102!=x103))+x104);

    if (t25 != -4272) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x105 = -74238LL;
	int32_t x106 = -4098451;
	int8_t x107 = -1;
	int32_t t26 = 110959350;

    t26 = ((x105==(x106!=x107))+x108);

    if (t26 != 4) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x109 = UINT16_MAX;
	uint32_t x111 = 16838624U;
	int32_t x112 = INT32_MAX;
	volatile int32_t t27 = INT32_MAX;

    t27 = ((x109==(x110!=x111))+x112);

    if (t27 != INT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x113 = INT32_MAX;
	static int8_t x114 = INT8_MAX;
	int32_t t28 = -24267;

    t28 = ((x113==(x114!=x115))+x116);

    if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x117 = -1LL;
	int16_t x118 = 232;
	volatile int64_t x119 = INT64_MIN;
	int64_t t29 = INT64_MAX;

    t29 = ((x117==(x118!=x119))+x120);

    if (t29 != INT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = -1;
	volatile uint16_t x122 = 201U;
	static int16_t x124 = INT16_MIN;
	volatile int32_t t30 = 1557316;

    t30 = ((x121==(x122!=x123))+x124);

    if (t30 != -32768) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int64_t x125 = -1188060231659063LL;
	static uint64_t x127 = UINT64_MAX;
	uint64_t x128 = UINT64_MAX;
	uint64_t t31 = UINT64_MAX;

    t31 = ((x125==(x126!=x127))+x128);

    if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = INT64_MAX;
	static int64_t x130 = INT64_MIN;
	volatile int32_t x132 = INT32_MIN;
	volatile int32_t t32 = INT32_MIN;

    t32 = ((x129==(x130!=x131))+x132);

    if (t32 != INT32_MIN) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = 3;
	int64_t x134 = INT64_MIN;
	int32_t x135 = -1;
	volatile int64_t x136 = -1LL;

    t33 = ((x133==(x134!=x135))+x136);

    if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x137 = UINT16_MAX;
	int64_t x138 = INT64_MIN;
	volatile uint32_t t34 = UINT32_MAX;

    t34 = ((x137==(x138!=x139))+x140);

    if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint64_t x141 = 1185830LLU;
	volatile uint64_t x142 = UINT64_MAX;
	int16_t x143 = INT16_MIN;
	uint32_t x144 = 110092U;
	uint32_t t35 = 2521646U;

    t35 = ((x141==(x142!=x143))+x144);

    if (t35 != 110092U) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x145 = -17806890LL;
	volatile uint64_t x146 = UINT64_MAX;
	int64_t x147 = INT64_MAX;
	uint8_t x148 = UINT8_MAX;
	volatile int32_t t36 = -695915237;

    t36 = ((x145==(x146!=x147))+x148);

    if (t36 != 255) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x149 = -1;
	int8_t x151 = 23;
	volatile int32_t t37 = 39053;

    t37 = ((x149==(x150!=x151))+x152);

    if (t37 != -13) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x153 = UINT32_MAX;
	uint16_t x154 = 6U;
	int16_t x155 = INT16_MIN;
	int64_t t38 = INT64_MIN;

    t38 = ((x153==(x154!=x155))+x156);

    if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x157 = INT64_MIN;
	static int16_t x158 = -1;
	static uint8_t x160 = UINT8_MAX;
	volatile int32_t t39 = 4;

    t39 = ((x157==(x158!=x159))+x160);

    if (t39 != 255) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x161 = 11;
	static int16_t x162 = INT16_MIN;
	int64_t x163 = -119835144446468LL;
	int32_t t40 = -67802497;

    t40 = ((x161==(x162!=x163))+x164);

    if (t40 != 2) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint32_t x165 = 1U;
	static uint8_t x166 = UINT8_MAX;
	uint32_t x167 = 19617U;
	uint32_t x168 = 1130226U;
	uint32_t t41 = 4U;

    t41 = ((x165==(x166!=x167))+x168);

    if (t41 != 1130227U) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint64_t x169 = UINT64_MAX;
	uint16_t x170 = 3031U;
	volatile int32_t x171 = INT32_MIN;
	static int8_t x172 = -1;
	volatile int32_t t42 = 6;

    t42 = ((x169==(x170!=x171))+x172);

    if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x173 = 5089778U;
	int8_t x174 = INT8_MIN;
	uint8_t x175 = 0U;
	int32_t x176 = -2;
	int32_t t43 = -59391633;

    t43 = ((x173==(x174!=x175))+x176);

    if (t43 != -2) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x177 = -1;
	uint32_t x178 = 20U;
	int32_t x179 = -8071;

    t44 = ((x177==(x178!=x179))+x180);

    if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint64_t x182 = 12002720LLU;
	int64_t x183 = 121558660733868151LL;
	int64_t x184 = -75314LL;
	volatile int64_t t45 = 14113025944046LL;

    t45 = ((x181==(x182!=x183))+x184);

    if (t45 != -75314LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x186 = 2271U;
	int32_t x187 = -5314;
	volatile uint64_t x188 = 976681461565363LLU;
	uint64_t t46 = 119434480LLU;

    t46 = ((x185==(x186!=x187))+x188);

    if (t46 != 976681461565363LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x189 = INT32_MAX;
	int32_t x190 = 122090;
	static uint64_t x191 = 15998LLU;
	uint8_t x192 = 5U;
	volatile int32_t t47 = -1;

    t47 = ((x189==(x190!=x191))+x192);

    if (t47 != 5) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x194 = INT8_MAX;
	int8_t x196 = INT8_MAX;
	volatile int32_t t48 = -65130111;

    t48 = ((x193==(x194!=x195))+x196);

    if (t48 != 127) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int8_t x197 = INT8_MIN;
	volatile int64_t t49 = INT64_MIN;

    t49 = ((x197==(x198!=x199))+x200);

    if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x201 = 11965U;
	uint8_t x202 = 100U;
	uint16_t x203 = 0U;
	static uint16_t x204 = UINT16_MAX;
	int32_t t50 = 2470;

    t50 = ((x201==(x202!=x203))+x204);

    if (t50 != 65535) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x205 = UINT32_MAX;
	int32_t x206 = 99418;
	int32_t x207 = INT32_MIN;
	int16_t x208 = -3;

    t51 = ((x205==(x206!=x207))+x208);

    if (t51 != -3) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x209 = -424;
	volatile int64_t x211 = -1LL;
	volatile int32_t t52 = 1;

    t52 = ((x209==(x210!=x211))+x212);

    if (t52 != -32768) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x213 = INT64_MIN;
	static int64_t x215 = INT64_MIN;
	static uint64_t x216 = UINT64_MAX;
	uint64_t t53 = UINT64_MAX;

    t53 = ((x213==(x214!=x215))+x216);

    if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x217 = 21U;
	int64_t x218 = -2293822LL;
	volatile uint64_t x219 = UINT64_MAX;
	uint64_t t54 = UINT64_MAX;

    t54 = ((x217==(x218!=x219))+x220);

    if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint16_t x221 = 24533U;
	volatile int16_t x222 = INT16_MIN;
	volatile int8_t x224 = INT8_MAX;

    t55 = ((x221==(x222!=x223))+x224);

    if (t55 != 127) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x225 = UINT8_MAX;
	static uint16_t x226 = 1U;
	int64_t x227 = INT64_MIN;
	static int16_t x228 = INT16_MIN;
	int32_t t56 = 65068;

    t56 = ((x225==(x226!=x227))+x228);

    if (t56 != -32768) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x229 = INT64_MIN;
	static int16_t x230 = INT16_MIN;
	uint32_t x231 = 126790U;
	int32_t x232 = -1;
	volatile int32_t t57 = 1;

    t57 = ((x229==(x230!=x231))+x232);

    if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint64_t x233 = 2851032135066LLU;
	int16_t x234 = -1;
	uint8_t x235 = 66U;
	int32_t t58 = INT32_MIN;

    t58 = ((x233==(x234!=x235))+x236);

    if (t58 != INT32_MIN) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x238 = -1LL;
	int32_t x239 = INT32_MAX;
	static int64_t x240 = 1316572725347286029LL;
	volatile int64_t t59 = -14021415LL;

    t59 = ((x237==(x238!=x239))+x240);

    if (t59 != 1316572725347286029LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint32_t x242 = 14179U;
	uint32_t x243 = UINT32_MAX;
	static int8_t x244 = -20;
	static int32_t t60 = -7;

    t60 = ((x241==(x242!=x243))+x244);

    if (t60 != -20) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint8_t x245 = UINT8_MAX;
	int8_t x246 = INT8_MIN;
	int64_t x248 = INT64_MIN;
	volatile int64_t t61 = INT64_MIN;

    t61 = ((x245==(x246!=x247))+x248);

    if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x249 = -1LL;
	int64_t x250 = 706143392LL;
	int64_t x251 = INT64_MAX;
	uint64_t t62 = 1883924677LLU;

    t62 = ((x249==(x250!=x251))+x252);

    if (t62 != 35983116LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x253 = UINT64_MAX;
	uint32_t x254 = 905U;
	volatile uint8_t x255 = 58U;
	static int64_t x256 = 978LL;

    t63 = ((x253==(x254!=x255))+x256);

    if (t63 != 978LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x257 = -33035888;
	int32_t x258 = -10167285;
	volatile int8_t x259 = -4;
	static int64_t x260 = -1LL;
	static volatile int64_t t64 = 233241973389LL;

    t64 = ((x257==(x258!=x259))+x260);

    if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x262 = -1;
	static int8_t x263 = INT8_MIN;
	volatile uint64_t x264 = 493258LLU;
	volatile uint64_t t65 = 1963LLU;

    t65 = ((x261==(x262!=x263))+x264);

    if (t65 != 493258LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int16_t x266 = -1;
	int16_t x267 = INT16_MIN;
	uint32_t x268 = UINT32_MAX;
	uint32_t t66 = UINT32_MAX;

    t66 = ((x265==(x266!=x267))+x268);

    if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x269 = 166952U;
	int8_t x270 = -1;
	volatile uint16_t x271 = 335U;
	static int16_t x272 = INT16_MAX;
	int32_t t67 = -2038085;

    t67 = ((x269==(x270!=x271))+x272);

    if (t67 != 32767) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x273 = 7048783LL;
	int16_t x274 = -10;
	uint8_t x275 = UINT8_MAX;
	uint16_t x276 = UINT16_MAX;

    t68 = ((x273==(x274!=x275))+x276);

    if (t68 != 65535) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x277 = 7U;
	int64_t x278 = INT64_MIN;
	int8_t x279 = INT8_MAX;

    t69 = ((x277==(x278!=x279))+x280);

    if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
    	static int64_t x281 = -8724548459572670LL;
	uint16_t x282 = UINT16_MAX;
	int64_t x283 = -1LL;
	uint16_t x284 = UINT16_MAX;
	static int32_t t70 = 362000;

    t70 = ((x281==(x282!=x283))+x284);

    if (t70 != 65535) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x285 = 3483;
	int64_t x286 = INT64_MIN;
	uint32_t x287 = 14U;
	static int32_t t71 = 443;

    t71 = ((x285==(x286!=x287))+x288);

    if (t71 != -11297) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x289 = 225U;
	static volatile uint16_t x290 = 1055U;
	volatile int32_t t72 = -71585;

    t72 = ((x289==(x290!=x291))+x292);

    if (t72 != 255) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x294 = -1LL;
	int16_t x295 = -1;
	volatile int32_t t73 = -2;

    t73 = ((x293==(x294!=x295))+x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x297 = 2;
	uint64_t x298 = 75892354891180116LLU;
	static volatile int32_t x300 = -20;
	int32_t t74 = 186;

    t74 = ((x297==(x298!=x299))+x300);

    if (t74 != -20) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x301 = INT8_MIN;
	uint64_t t75 = UINT64_MAX;

    t75 = ((x301==(x302!=x303))+x304);

    if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x305 = INT64_MIN;
	int64_t x306 = 2220510300439739272LL;
	int64_t x307 = -1LL;
	volatile int8_t x308 = INT8_MAX;
	int32_t t76 = 12782183;

    t76 = ((x305==(x306!=x307))+x308);

    if (t76 != 127) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x310 = INT64_MIN;
	int8_t x311 = -1;
	volatile int32_t t77 = -206967;

    t77 = ((x309==(x310!=x311))+x312);

    if (t77 != -32768) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x313 = 0U;
	int16_t x314 = -960;
	int16_t x316 = -1;
	static volatile int32_t t78 = 1;

    t78 = ((x313==(x314!=x315))+x316);

    if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x317 = 82024;
	volatile uint8_t x318 = UINT8_MAX;
	int64_t x319 = INT64_MIN;
	volatile int32_t t79 = -262256638;

    t79 = ((x317==(x318!=x319))+x320);

    if (t79 != 65535) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x321 = 22841583U;
	volatile int16_t x322 = 30;
	volatile int32_t t80 = INT32_MAX;

    t80 = ((x321==(x322!=x323))+x324);

    if (t80 != INT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int8_t x325 = 0;
	int16_t x326 = INT16_MIN;
	int64_t x327 = -1LL;
	int16_t x328 = -1;
	volatile int32_t t81 = -70102504;

    t81 = ((x325==(x326!=x327))+x328);

    if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
    	static int32_t x329 = 633;
	uint64_t x331 = UINT64_MAX;
	int32_t x332 = -1;
	static int32_t t82 = 65;

    t82 = ((x329==(x330!=x331))+x332);

    if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x333 = 1;
	uint32_t x335 = 323155U;

    t83 = ((x333==(x334!=x335))+x336);

    if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x337 = UINT8_MAX;
	int8_t x338 = -7;
	static int16_t x339 = -1;
	volatile uint64_t x340 = UINT64_MAX;
	uint64_t t84 = UINT64_MAX;

    t84 = ((x337==(x338!=x339))+x340);

    if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint32_t x341 = 37903U;
	static int16_t x343 = INT16_MAX;
	volatile int32_t x344 = -372362355;
	static volatile int32_t t85 = -1290786;

    t85 = ((x341==(x342!=x343))+x344);

    if (t85 != -372362355) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x345 = INT16_MIN;
	static int64_t x347 = INT64_MIN;
	uint64_t x348 = 563380927930200062LLU;
	static volatile uint64_t t86 = 477839180889544LLU;

    t86 = ((x345==(x346!=x347))+x348);

    if (t86 != 563380927930200062LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x350 = -55;
	int16_t x352 = INT16_MIN;
	static int32_t t87 = 9923;

    t87 = ((x349==(x350!=x351))+x352);

    if (t87 != -32768) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x353 = INT32_MAX;
	uint32_t x354 = 35U;
	int8_t x355 = INT8_MIN;
	int8_t x356 = INT8_MIN;

    t88 = ((x353==(x354!=x355))+x356);

    if (t88 != -128) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint64_t x357 = 63917945935LLU;
	uint8_t x358 = UINT8_MAX;
	volatile uint16_t x359 = 28U;
	int16_t x360 = -899;
	int32_t t89 = -49705;

    t89 = ((x357==(x358!=x359))+x360);

    if (t89 != -899) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x362 = 253;
	int8_t x363 = 21;

    t90 = ((x361==(x362!=x363))+x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint8_t x365 = UINT8_MAX;
	uint8_t x366 = 0U;
	volatile int16_t x367 = INT16_MIN;
	volatile int32_t t91 = 691441;

    t91 = ((x365==(x366!=x367))+x368);

    if (t91 != 65535) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x369 = INT16_MAX;
	volatile int16_t x370 = INT16_MAX;
	int64_t x371 = -135475088990LL;
	static int8_t x372 = INT8_MAX;
	volatile int32_t t92 = -857;

    t92 = ((x369==(x370!=x371))+x372);

    if (t92 != 127) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x373 = -306;
	static int32_t x374 = INT32_MAX;
	volatile int32_t x375 = 110;
	uint64_t x376 = 7021859581165987219LLU;
	uint64_t t93 = 2170398866697LLU;

    t93 = ((x373==(x374!=x375))+x376);

    if (t93 != 7021859581165987219LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x377 = 59U;
	volatile int16_t x378 = INT16_MIN;
	static volatile int64_t t94 = 65406798075090LL;

    t94 = ((x377==(x378!=x379))+x380);

    if (t94 != 34237739LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x381 = 544U;
	int32_t x383 = INT32_MAX;
	uint64_t x384 = 249247664464LLU;

    t95 = ((x381==(x382!=x383))+x384);

    if (t95 != 249247664464LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x385 = INT32_MIN;
	uint16_t x386 = 1066U;

    t96 = ((x385==(x386!=x387))+x388);

    if (t96 != 6365607907723485593LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x389 = UINT8_MAX;
	int32_t x390 = 12178141;
	int8_t x392 = INT8_MIN;

    t97 = ((x389==(x390!=x391))+x392);

    if (t97 != -128) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x393 = INT16_MIN;
	static volatile int64_t x394 = INT64_MIN;
	int32_t x395 = 247599;
	uint16_t x396 = 1U;
	static int32_t t98 = -106030195;

    t98 = ((x393==(x394!=x395))+x396);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x399 = INT8_MAX;
	volatile int64_t x400 = -1LL;

    t99 = ((x397==(x398!=x399))+x400);

    if (t99 != -1LL) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint8_t x401 = UINT8_MAX;
	uint32_t x402 = 936846645U;
	int32_t x403 = INT32_MIN;
	int8_t x404 = INT8_MIN;
	volatile int32_t t100 = -35;

    t100 = ((x401==(x402!=x403))+x404);

    if (t100 != -128) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x405 = 3519U;
	static uint64_t x406 = 1312107182504660LLU;
	int64_t x407 = INT64_MIN;
	int32_t t101 = INT32_MAX;

    t101 = ((x405==(x406!=x407))+x408);

    if (t101 != INT32_MAX) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x410 = -1;
	static int32_t x411 = 634714884;
	volatile int8_t x412 = INT8_MIN;

    t102 = ((x409==(x410!=x411))+x412);

    if (t102 != -128) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int16_t x413 = INT16_MAX;
	uint16_t x414 = 657U;
	static uint8_t x415 = UINT8_MAX;
	uint64_t x416 = UINT64_MAX;
	volatile uint64_t t103 = UINT64_MAX;

    t103 = ((x413==(x414!=x415))+x416);

    if (t103 != UINT64_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x417 = UINT8_MAX;
	uint16_t x418 = 85U;
	uint16_t x419 = 46U;
	static uint16_t x420 = UINT16_MAX;
	static int32_t t104 = -79;

    t104 = ((x417==(x418!=x419))+x420);

    if (t104 != 65535) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x421 = 0;
	static int64_t x423 = -1LL;
	int8_t x424 = -1;
	volatile int32_t t105 = 529555119;

    t105 = ((x421==(x422!=x423))+x424);

    if (t105 != -1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x425 = 1836265631241507435LLU;
	uint64_t x427 = UINT64_MAX;
	uint32_t x428 = 24817U;
	static uint32_t t106 = 483U;

    t106 = ((x425==(x426!=x427))+x428);

    if (t106 != 24817U) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int32_t x429 = INT32_MIN;
	uint32_t x430 = UINT32_MAX;
	static uint32_t x431 = 18U;
	static int32_t x432 = INT32_MIN;

    t107 = ((x429==(x430!=x431))+x432);

    if (t107 != INT32_MIN) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x433 = -1;
	int16_t x434 = -1;
	int8_t x435 = INT8_MAX;
	static int64_t x436 = INT64_MIN;
	volatile int64_t t108 = INT64_MIN;

    t108 = ((x433==(x434!=x435))+x436);

    if (t108 != INT64_MIN) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x438 = 533023074588LL;
	int16_t x439 = INT16_MIN;
	int16_t x440 = INT16_MIN;
	int32_t t109 = -511;

    t109 = ((x437==(x438!=x439))+x440);

    if (t109 != -32768) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile int16_t x441 = -290;
	int32_t x442 = INT32_MIN;
	static volatile uint16_t x443 = 23U;
	volatile uint16_t x444 = 10944U;
	volatile int32_t t110 = 31570;

    t110 = ((x441==(x442!=x443))+x444);

    if (t110 != 10944) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x446 = 0;
	uint64_t x447 = 30117119924428LLU;
	uint16_t x448 = 0U;

    t111 = ((x445==(x446!=x447))+x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x449 = INT64_MIN;
	volatile int64_t x450 = -1012297027040LL;
	volatile int16_t x451 = INT16_MIN;
	uint64_t x452 = UINT64_MAX;

    t112 = ((x449==(x450!=x451))+x452);

    if (t112 != UINT64_MAX) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x453 = 120;
	int8_t x454 = -2;
	uint64_t x455 = 40935735690LLU;
	int8_t x456 = 1;
	volatile int32_t t113 = 82;

    t113 = ((x453==(x454!=x455))+x456);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x457 = 70107579529586074LLU;
	int64_t x459 = -1LL;
	volatile int8_t x460 = INT8_MIN;
	volatile int32_t t114 = -4588645;

    t114 = ((x457==(x458!=x459))+x460);

    if (t114 != -128) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x461 = -2;
	uint64_t x462 = 190471LLU;
	static int64_t x463 = 531325533812983LL;
	static uint8_t x464 = UINT8_MAX;
	volatile int32_t t115 = 13720084;

    t115 = ((x461==(x462!=x463))+x464);

    if (t115 != 255) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int32_t x465 = INT32_MIN;
	int8_t x466 = -1;
	int64_t x467 = 881611906209325543LL;
	uint8_t x468 = UINT8_MAX;

    t116 = ((x465==(x466!=x467))+x468);

    if (t116 != 255) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint32_t x470 = UINT32_MAX;
	uint64_t x471 = 31542758603910555LLU;
	static int32_t t117 = 722721;

    t117 = ((x469==(x470!=x471))+x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int64_t x473 = INT64_MIN;
	uint16_t x474 = 10U;
	uint32_t x475 = 29425U;
	static int16_t x476 = 5836;

    t118 = ((x473==(x474!=x475))+x476);

    if (t118 != 5836) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x477 = 54915705;
	int32_t x478 = INT32_MAX;
	volatile int8_t x480 = -2;
	volatile int32_t t119 = -1;

    t119 = ((x477==(x478!=x479))+x480);

    if (t119 != -2) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x481 = 119980LLU;
	int64_t x482 = INT64_MIN;
	uint64_t x483 = 40814582710739LLU;
	int32_t t120 = 1;

    t120 = ((x481==(x482!=x483))+x484);

    if (t120 != -128) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint16_t x485 = UINT16_MAX;
	int64_t x488 = INT64_MAX;
	static volatile int64_t t121 = INT64_MAX;

    t121 = ((x485==(x486!=x487))+x488);

    if (t121 != INT64_MAX) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x489 = INT64_MAX;
	int64_t x490 = 1132149542776059217LL;
	static volatile int32_t x491 = -1;
	volatile int8_t x492 = -1;
	int32_t t122 = 15;

    t122 = ((x489==(x490!=x491))+x492);

    if (t122 != -1) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x493 = INT8_MIN;
	static volatile int32_t x494 = 135003092;
	volatile uint64_t x496 = UINT64_MAX;
	uint64_t t123 = UINT64_MAX;

    t123 = ((x493==(x494!=x495))+x496);

    if (t123 != UINT64_MAX) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x497 = 8096;
	uint32_t x498 = UINT32_MAX;
	static volatile uint64_t x499 = 1054807555380099LLU;
	volatile int32_t t124 = 571121763;

    t124 = ((x497==(x498!=x499))+x500);

    if (t124 != -32768) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x501 = 23U;
	static uint64_t x502 = 8008331LLU;
	static int16_t x503 = INT16_MIN;
	int8_t x504 = 12;
	int32_t t125 = -21421;

    t125 = ((x501==(x502!=x503))+x504);

    if (t125 != 12) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint8_t x506 = UINT8_MAX;
	int8_t x508 = -1;
	int32_t t126 = -27346730;

    t126 = ((x505==(x506!=x507))+x508);

    if (t126 != -1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x509 = -1;
	int8_t x511 = -1;
	int64_t x512 = -1LL;
	int64_t t127 = -21827829LL;

    t127 = ((x509==(x510!=x511))+x512);

    if (t127 != -1LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x513 = 4418;
	int16_t x514 = INT16_MAX;
	volatile int32_t x515 = INT32_MIN;
	volatile int64_t t128 = -10LL;

    t128 = ((x513==(x514!=x515))+x516);

    if (t128 != -1LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x518 = 4624260243251588LL;
	int32_t x519 = INT32_MIN;
	static int64_t x520 = INT64_MIN;

    t129 = ((x517==(x518!=x519))+x520);

    if (t129 != INT64_MIN) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int32_t x521 = -1;
	static int64_t x522 = INT64_MIN;
	int8_t x523 = -1;
	static uint16_t x524 = UINT16_MAX;
	static int32_t t130 = -15544;

    t130 = ((x521==(x522!=x523))+x524);

    if (t130 != 65535) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x525 = 381840875937603597LL;
	int16_t x526 = -1;
	int32_t x528 = -1;
	static volatile int32_t t131 = -798757062;

    t131 = ((x525==(x526!=x527))+x528);

    if (t131 != -1) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x530 = -731585226584882544LL;
	uint64_t x531 = 1050172LLU;
	int16_t x532 = -1;
	static volatile int32_t t132 = 1647;

    t132 = ((x529==(x530!=x531))+x532);

    if (t132 != -1) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x533 = INT16_MIN;
	int16_t x535 = INT16_MIN;
	static volatile uint64_t t133 = 23827422LLU;

    t133 = ((x533==(x534!=x535))+x536);

    if (t133 != 248LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int16_t x538 = INT16_MIN;
	int16_t x539 = -1;
	int32_t t134 = -7842;

    t134 = ((x537==(x538!=x539))+x540);

    if (t134 != 65535) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x542 = -1;
	volatile int8_t x543 = INT8_MIN;
	int8_t x544 = -25;
	int32_t t135 = 1684054;

    t135 = ((x541==(x542!=x543))+x544);

    if (t135 != -25) { NG(); } else { ; }
	
}

void f136(void) {
    	static int32_t x545 = 11;
	int16_t x546 = INT16_MIN;
	int64_t x548 = 289365148666740LL;

    t136 = ((x545==(x546!=x547))+x548);

    if (t136 != 289365148666740LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x549 = UINT64_MAX;
	int32_t x551 = -1;
	int32_t x552 = INT32_MAX;
	volatile int32_t t137 = INT32_MAX;

    t137 = ((x549==(x550!=x551))+x552);

    if (t137 != INT32_MAX) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x553 = -1;
	int64_t x554 = INT64_MIN;
	uint64_t x555 = 33423018LLU;
	uint16_t x556 = 3U;

    t138 = ((x553==(x554!=x555))+x556);

    if (t138 != 3) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x557 = 1U;
	uint8_t x559 = 7U;
	static int64_t x560 = INT64_MIN;
	volatile int64_t t139 = 3LL;

    t139 = ((x557==(x558!=x559))+x560);

    if (t139 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int64_t x561 = INT64_MIN;
	volatile int64_t x562 = -1LL;
	int16_t x563 = INT16_MIN;
	int32_t x564 = -1;
	volatile int32_t t140 = 1604;

    t140 = ((x561==(x562!=x563))+x564);

    if (t140 != -1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x565 = 1LLU;
	volatile int32_t x567 = INT32_MAX;
	volatile int32_t t141 = 2;

    t141 = ((x565==(x566!=x567))+x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int32_t x570 = 45318;
	static uint32_t x571 = 5124U;
	uint16_t x572 = 1286U;

    t142 = ((x569==(x570!=x571))+x572);

    if (t142 != 1286) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x573 = 2518U;
	static volatile int32_t x574 = -44371937;
	int32_t t143 = 66;

    t143 = ((x573==(x574!=x575))+x576);

    if (t143 != 5) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int32_t t144 = 25010;

    t144 = ((x577==(x578!=x579))+x580);

    if (t144 != 6) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x582 = 31U;
	volatile int8_t x583 = -1;
	int64_t x584 = INT64_MIN;

    t145 = ((x581==(x582!=x583))+x584);

    if (t145 != INT64_MIN) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x585 = INT8_MIN;
	uint64_t x586 = UINT64_MAX;

    t146 = ((x585==(x586!=x587))+x588);

    if (t146 != INT64_MIN) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x589 = UINT32_MAX;
	int8_t x590 = 6;
	int8_t x591 = 28;
	int32_t x592 = INT32_MAX;
	volatile int32_t t147 = INT32_MAX;

    t147 = ((x589==(x590!=x591))+x592);

    if (t147 != INT32_MAX) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int16_t x593 = 14378;
	uint32_t x595 = 410904U;
	volatile uint8_t x596 = 2U;

    t148 = ((x593==(x594!=x595))+x596);

    if (t148 != 2) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x597 = -1840944272284LL;
	int16_t x599 = INT16_MIN;
	volatile int32_t t149 = 2;

    t149 = ((x597==(x598!=x599))+x600);

    if (t149 != -1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x601 = 9356U;
	int32_t x602 = INT32_MAX;
	static int32_t x603 = 1;
	int16_t x604 = INT16_MIN;
	volatile int32_t t150 = -208514663;

    t150 = ((x601==(x602!=x603))+x604);

    if (t150 != -32768) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x605 = -1898187609LL;
	int64_t x606 = -1LL;
	volatile uint64_t x608 = 10568608077LLU;
	volatile uint64_t t151 = 6020077940817525906LLU;

    t151 = ((x605==(x606!=x607))+x608);

    if (t151 != 10568608077LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static int8_t x609 = 4;
	int16_t x610 = -38;
	uint64_t x611 = 11737816425189397LLU;

    t152 = ((x609==(x610!=x611))+x612);

    if (t152 != -1494279) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x613 = INT16_MAX;
	volatile int64_t x614 = INT64_MAX;
	volatile uint8_t x615 = 74U;
	volatile uint8_t x616 = UINT8_MAX;
	volatile int32_t t153 = -35754;

    t153 = ((x613==(x614!=x615))+x616);

    if (t153 != 255) { NG(); } else { ; }
	
}

void f154(void) {
    	static int64_t x617 = -9366087067LL;
	int16_t x618 = INT16_MAX;
	uint8_t x619 = UINT8_MAX;
	volatile int8_t x620 = -1;

    t154 = ((x617==(x618!=x619))+x620);

    if (t154 != -1) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x621 = INT16_MIN;
	uint8_t x622 = 27U;
	static int64_t x623 = 1169484261LL;
	static int64_t x624 = -271138120881LL;

    t155 = ((x621==(x622!=x623))+x624);

    if (t155 != -271138120881LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x625 = UINT32_MAX;
	uint16_t x626 = 31793U;
	uint32_t x627 = 858534988U;
	volatile uint8_t x628 = 8U;
	int32_t t156 = -7954;

    t156 = ((x625==(x626!=x627))+x628);

    if (t156 != 8) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x629 = 21729018;
	uint32_t x630 = 926U;
	volatile int64_t x632 = 135684837LL;
	static int64_t t157 = 1LL;

    t157 = ((x629==(x630!=x631))+x632);

    if (t157 != 135684837LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x634 = 0;
	int64_t x635 = -1LL;
	volatile int32_t t158 = INT32_MIN;

    t158 = ((x633==(x634!=x635))+x636);

    if (t158 != INT32_MIN) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x637 = -636;
	uint16_t x639 = UINT16_MAX;
	int64_t t159 = -264287895LL;

    t159 = ((x637==(x638!=x639))+x640);

    if (t159 != -32348126352LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint32_t x641 = 3U;
	static uint64_t x642 = UINT64_MAX;
	volatile int32_t x643 = -1;

    t160 = ((x641==(x642!=x643))+x644);

    if (t160 != 61923LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x645 = INT64_MIN;
	volatile int64_t x648 = INT64_MAX;
	int64_t t161 = INT64_MAX;

    t161 = ((x645==(x646!=x647))+x648);

    if (t161 != INT64_MAX) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x649 = -6323;
	int16_t x650 = INT16_MIN;
	uint32_t x651 = 6180520U;
	uint8_t x652 = 94U;
	volatile int32_t t162 = -804775138;

    t162 = ((x649==(x650!=x651))+x652);

    if (t162 != 94) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int32_t x653 = 796911748;
	static int8_t x654 = INT8_MIN;
	static volatile int16_t x655 = INT16_MIN;
	uint64_t x656 = 9418723LLU;
	volatile uint64_t t163 = 7661185LLU;

    t163 = ((x653==(x654!=x655))+x656);

    if (t163 != 9418723LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint64_t x657 = 2484LLU;
	static int8_t x658 = -1;
	volatile uint16_t x659 = 24U;
	volatile int32_t t164 = 3113;

    t164 = ((x657==(x658!=x659))+x660);

    if (t164 != -128) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x661 = INT8_MIN;
	uint64_t x662 = 259490567576771LLU;
	uint16_t x663 = 1U;
	volatile int64_t x664 = INT64_MAX;
	int64_t t165 = INT64_MAX;

    t165 = ((x661==(x662!=x663))+x664);

    if (t165 != INT64_MAX) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x665 = INT64_MIN;
	uint8_t x666 = 71U;
	static int16_t x667 = INT16_MIN;
	static volatile int64_t x668 = INT64_MIN;

    t166 = ((x665==(x666!=x667))+x668);

    if (t166 != INT64_MIN) { NG(); } else { ; }
	
}

void f167(void) {
    	static int64_t x669 = INT64_MAX;
	int64_t x670 = -1LL;
	static int32_t x672 = -944414411;

    t167 = ((x669==(x670!=x671))+x672);

    if (t167 != -944414411) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x673 = INT32_MAX;
	int64_t x674 = -1LL;
	uint16_t x675 = 451U;
	int32_t x676 = INT32_MIN;
	int32_t t168 = INT32_MIN;

    t168 = ((x673==(x674!=x675))+x676);

    if (t168 != INT32_MIN) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x677 = INT64_MIN;
	int64_t x679 = INT64_MIN;
	int32_t t169 = 1929939;

    t169 = ((x677==(x678!=x679))+x680);

    if (t169 != -1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x681 = 4U;
	int8_t x682 = INT8_MAX;
	int16_t x683 = -1;
	int32_t t170 = 484244;

    t170 = ((x681==(x682!=x683))+x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x686 = 470LL;
	volatile int8_t x688 = 6;

    t171 = ((x685==(x686!=x687))+x688);

    if (t171 != 6) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x691 = -1;
	static uint16_t x692 = 5988U;
	int32_t t172 = 287482758;

    t172 = ((x689==(x690!=x691))+x692);

    if (t172 != 5988) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x693 = UINT64_MAX;
	int8_t x694 = -1;
	int8_t x695 = 9;
	int64_t t173 = 325527LL;

    t173 = ((x693==(x694!=x695))+x696);

    if (t173 != -76686LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x697 = -1LL;
	volatile int64_t x698 = INT64_MAX;
	uint64_t x699 = UINT64_MAX;
	int32_t t174 = -146120631;

    t174 = ((x697==(x698!=x699))+x700);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint32_t x701 = 50919712U;
	int16_t x702 = INT16_MIN;
	volatile int64_t x704 = -1LL;
	int64_t t175 = -10548952440LL;

    t175 = ((x701==(x702!=x703))+x704);

    if (t175 != -1LL) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint8_t x705 = 7U;
	int32_t x706 = INT32_MIN;
	volatile int32_t x707 = 0;
	int16_t x708 = INT16_MAX;
	int32_t t176 = -18302708;

    t176 = ((x705==(x706!=x707))+x708);

    if (t176 != 32767) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x709 = INT64_MAX;
	uint8_t x710 = 8U;
	uint16_t x712 = UINT16_MAX;

    t177 = ((x709==(x710!=x711))+x712);

    if (t177 != 65535) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x713 = INT64_MAX;
	static uint16_t x714 = UINT16_MAX;
	int8_t x715 = INT8_MIN;
	uint8_t x716 = 70U;
	int32_t t178 = 23;

    t178 = ((x713==(x714!=x715))+x716);

    if (t178 != 70) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x717 = 40U;
	static int8_t x718 = 25;
	uint8_t x719 = 9U;
	uint32_t x720 = 1899367U;
	uint32_t t179 = 10U;

    t179 = ((x717==(x718!=x719))+x720);

    if (t179 != 1899367U) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x721 = UINT32_MAX;
	static int64_t x722 = -187415677127164501LL;
	int64_t x723 = INT64_MIN;
	volatile int32_t x724 = INT32_MIN;
	int32_t t180 = INT32_MIN;

    t180 = ((x721==(x722!=x723))+x724);

    if (t180 != INT32_MIN) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x725 = -1;
	int8_t x727 = 1;

    t181 = ((x725==(x726!=x727))+x728);

    if (t181 != -1LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static int64_t x730 = INT64_MIN;
	volatile int16_t x731 = -1;
	uint8_t x732 = 4U;
	int32_t t182 = 558;

    t182 = ((x729==(x730!=x731))+x732);

    if (t182 != 4) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x733 = INT32_MIN;
	uint16_t x734 = 12065U;
	volatile uint32_t x735 = 1492534424U;
	volatile uint64_t x736 = UINT64_MAX;
	uint64_t t183 = UINT64_MAX;

    t183 = ((x733==(x734!=x735))+x736);

    if (t183 != UINT64_MAX) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile uint8_t x737 = 0U;
	int32_t x738 = INT32_MIN;
	static int64_t x739 = INT64_MIN;
	int64_t x740 = -1LL;

    t184 = ((x737==(x738!=x739))+x740);

    if (t184 != -1LL) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int32_t x741 = 1;
	int32_t x742 = INT32_MIN;
	uint8_t x743 = 0U;
	static int8_t x744 = INT8_MIN;
	volatile int32_t t185 = -12;

    t185 = ((x741==(x742!=x743))+x744);

    if (t185 != -127) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x745 = 6457743146LLU;
	uint64_t x747 = UINT64_MAX;
	int64_t x748 = 4457660709329256LL;
	volatile int64_t t186 = -1243297092130516LL;

    t186 = ((x745==(x746!=x747))+x748);

    if (t186 != 4457660709329256LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static int32_t x749 = INT32_MAX;
	uint8_t x752 = 64U;
	volatile int32_t t187 = -15357;

    t187 = ((x749==(x750!=x751))+x752);

    if (t187 != 64) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint32_t x755 = UINT32_MAX;
	int64_t x756 = INT64_MIN;
	int64_t t188 = INT64_MIN;

    t188 = ((x753==(x754!=x755))+x756);

    if (t188 != INT64_MIN) { NG(); } else { ; }
	
}

void f189(void) {
    	static int64_t x757 = INT64_MAX;
	int16_t x758 = INT16_MIN;
	uint32_t t189 = UINT32_MAX;

    t189 = ((x757==(x758!=x759))+x760);

    if (t189 != UINT32_MAX) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x761 = INT8_MIN;
	uint64_t x762 = UINT64_MAX;
	static int16_t x763 = -1;
	static volatile int32_t t190 = 786466;

    t190 = ((x761==(x762!=x763))+x764);

    if (t190 != -1) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x765 = INT8_MIN;
	int16_t x766 = -3126;
	uint32_t x767 = 10U;
	static volatile int32_t t191 = 154;

    t191 = ((x765==(x766!=x767))+x768);

    if (t191 != 32767) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile int8_t x770 = -3;
	int32_t x771 = -5872;
	int8_t x772 = -19;
	int32_t t192 = -2523226;

    t192 = ((x769==(x770!=x771))+x772);

    if (t192 != -19) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x773 = -1;
	int32_t x774 = -24201429;
	int8_t x775 = -1;
	int64_t t193 = INT64_MIN;

    t193 = ((x773==(x774!=x775))+x776);

    if (t193 != INT64_MIN) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile int32_t x777 = INT32_MIN;
	uint16_t x778 = UINT16_MAX;
	uint32_t x779 = 29U;
	int8_t x780 = INT8_MIN;
	volatile int32_t t194 = -734986815;

    t194 = ((x777==(x778!=x779))+x780);

    if (t194 != -128) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x781 = -1LL;
	uint64_t x782 = 73LLU;
	int16_t x783 = -1;
	uint8_t x784 = 12U;
	int32_t t195 = -273362;

    t195 = ((x781==(x782!=x783))+x784);

    if (t195 != 12) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x785 = 4744U;

    t196 = ((x785==(x786!=x787))+x788);

    if (t196 != -1) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint16_t x790 = 837U;
	volatile int8_t x792 = INT8_MIN;
	volatile int32_t t197 = 862;

    t197 = ((x789==(x790!=x791))+x792);

    if (t197 != -127) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x793 = -1;
	static volatile int64_t x794 = INT64_MIN;
	uint8_t x795 = UINT8_MAX;
	int32_t x796 = INT32_MIN;

    t198 = ((x793==(x794!=x795))+x796);

    if (t198 != INT32_MIN) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x797 = INT8_MAX;
	uint32_t x798 = 41500U;
	int64_t x799 = 385846452351974LL;
	int32_t t199 = 189640;

    t199 = ((x797==(x798!=x799))+x800);

    if (t199 != 95) { NG(); } else { ; }
	
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

