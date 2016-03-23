
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

uint64_t x11 = UINT64_MAX;
uint32_t x13 = 899U;
int64_t x15 = -1LL;
int64_t x25 = INT64_MAX;
int64_t x32 = INT64_MIN;
volatile int64_t t7 = INT64_MIN;
int32_t x42 = -115702139;
int16_t x50 = INT16_MIN;
volatile int8_t x51 = INT8_MIN;
volatile int64_t t12 = INT64_MAX;
uint64_t x64 = 2684700LLU;
static volatile int16_t x67 = 1;
int8_t x68 = INT8_MAX;
static uint64_t x70 = 0LLU;
uint32_t x72 = UINT32_MAX;
static volatile int32_t x77 = INT32_MIN;
uint16_t x79 = 1951U;
int64_t x95 = 0LL;
volatile int32_t t24 = -18064;
int8_t x105 = INT8_MIN;
int32_t x107 = -1;
uint32_t x108 = UINT32_MAX;
volatile int8_t x116 = INT8_MIN;
volatile uint8_t x117 = 16U;
uint32_t x119 = 116243272U;
int64_t x122 = INT64_MAX;
static volatile int32_t t30 = INT32_MIN;
static int32_t x128 = INT32_MIN;
int32_t t31 = INT32_MIN;
static uint16_t x129 = 626U;
int64_t x134 = 24094085654492LL;
volatile int32_t t34 = 787;
uint8_t x150 = 63U;
int32_t x154 = 971;
uint8_t x163 = 105U;
int8_t x167 = INT8_MIN;
static uint64_t x171 = 3692913111LLU;
static int64_t x175 = 95049824634LL;
uint64_t x185 = 121698843921396LLU;
int16_t x187 = INT16_MIN;
int64_t t46 = 135562653780703LL;
static int32_t x192 = 1308549;
uint8_t x197 = 2U;
int16_t x200 = INT16_MIN;
int32_t t49 = -1;
int8_t x202 = -1;
static volatile int16_t x206 = INT16_MIN;
uint8_t x207 = UINT8_MAX;
static int16_t x208 = 3782;
int64_t x210 = -967296713492796600LL;
uint16_t x211 = 1U;
int16_t x212 = INT16_MAX;
uint16_t x217 = 227U;
uint8_t x230 = 2U;
int32_t x233 = -1;
static int8_t x236 = INT8_MAX;
int8_t x242 = INT8_MAX;
int16_t x248 = INT16_MIN;
static uint32_t t62 = 54654U;
int64_t x255 = INT64_MAX;
static int8_t x259 = 1;
int16_t x260 = 3;
volatile uint32_t x263 = 197U;
int16_t x268 = INT16_MIN;
int8_t x269 = INT8_MAX;
static volatile int32_t t67 = 0;
int32_t x273 = -1;
int64_t x274 = INT64_MIN;
int32_t x275 = INT32_MIN;
volatile int32_t t68 = 3618276;
int8_t x284 = INT8_MAX;
int32_t t71 = 23169881;
volatile uint16_t x291 = UINT16_MAX;
int64_t x298 = INT64_MIN;
static int64_t x299 = INT64_MIN;
int16_t x304 = -1;
static volatile int8_t x305 = -6;
static uint8_t x313 = UINT8_MAX;
int64_t x315 = INT64_MAX;
static volatile uint16_t x317 = 2U;
static int8_t x321 = INT8_MIN;
uint64_t x322 = 2148561605457042LLU;
static uint32_t x329 = UINT32_MAX;
static int16_t x336 = 1;
volatile uint32_t x353 = UINT32_MAX;
uint32_t x361 = 104U;
int32_t x362 = -1;
int32_t x368 = -469;
int32_t x372 = 167540;
volatile int32_t x376 = INT32_MAX;
uint8_t x377 = 1U;
uint64_t x382 = UINT64_MAX;
uint32_t x383 = 1903U;
uint64_t t96 = 278014095966335913LLU;
int64_t x390 = INT64_MIN;
uint8_t x395 = UINT8_MAX;
volatile int16_t x408 = INT16_MAX;
uint8_t x413 = 49U;
int32_t x415 = -872;
uint32_t x416 = 0U;
int32_t x422 = -1;
uint64_t x428 = 235516461591397558LLU;
uint64_t t106 = 1LLU;
int8_t x441 = INT8_MIN;
int16_t x442 = INT16_MIN;
int32_t x444 = -1;
static int64_t x446 = INT64_MIN;
volatile uint32_t x449 = 1161027882U;
volatile uint32_t x450 = UINT32_MAX;
int8_t x453 = INT8_MIN;
volatile uint8_t x457 = 10U;
int16_t x467 = -1;
int32_t t117 = 38;
int32_t x474 = INT32_MIN;
int32_t t119 = -1068000117;
static volatile int8_t x481 = 1;
int64_t x485 = 1LL;
volatile int64_t t122 = INT64_MAX;
uint64_t x497 = 511559388117LLU;
int32_t t126 = -1;
int16_t x511 = INT16_MIN;
int32_t x514 = 37;
uint16_t x517 = UINT16_MAX;
volatile int8_t x520 = INT8_MIN;
volatile int32_t x528 = -7243;
uint64_t t132 = 5LLU;
uint32_t x535 = 9765692U;
uint64_t x539 = 93LLU;
static int64_t x540 = INT64_MAX;
int64_t t134 = INT64_MAX;
static int64_t x549 = 13698259LL;
static uint8_t x552 = 5U;
static volatile int32_t t137 = 1644;
int16_t x555 = 1;
volatile uint64_t x563 = 959710201035049181LLU;
volatile int8_t x567 = -1;
static int32_t t141 = -7546144;
uint64_t x572 = UINT64_MAX;
int32_t x581 = -1;
uint16_t x585 = UINT16_MAX;
static uint32_t x587 = 53726166U;
static int16_t x588 = -1;
int8_t x589 = -1;
uint32_t x590 = 66383804U;
int32_t t147 = -2469;
int64_t x593 = -51258541887560LL;
int64_t x599 = -4176028899LL;
int32_t x605 = INT32_MAX;
static volatile int64_t x612 = 4292251LL;
int32_t x615 = -1;
int32_t x623 = -1;
int32_t t156 = -3;
int8_t x630 = -1;
uint16_t x650 = 22606U;
volatile int32_t t162 = 119710;
static uint8_t x658 = UINT8_MAX;
uint32_t x659 = 122608U;
static uint32_t x668 = 12U;
uint8_t x669 = UINT8_MAX;
uint32_t x671 = UINT32_MAX;
volatile int64_t x676 = INT64_MIN;
int64_t x678 = -1LL;
int32_t t169 = -357;
static int8_t x685 = INT8_MIN;
volatile int8_t x708 = INT8_MIN;
volatile int32_t t176 = -11565994;
int8_t x713 = INT8_MIN;
static int32_t x715 = -228847;
int32_t t178 = 1376230;
uint64_t x722 = UINT64_MAX;
volatile uint64_t x724 = 16519837067561069LLU;
int64_t x725 = INT64_MAX;
int8_t x726 = INT8_MIN;
volatile int32_t t181 = -52;
int32_t x731 = INT32_MIN;
volatile uint32_t t182 = 1194946139U;
static uint64_t x736 = 67792818763136LLU;
static volatile int64_t x738 = INT64_MAX;
int64_t x739 = INT64_MAX;
int16_t x740 = INT16_MIN;
static volatile uint8_t x743 = UINT8_MAX;
int8_t x745 = -1;
int16_t x752 = INT16_MIN;
volatile uint32_t t188 = 427577U;
int32_t t189 = -2746872;
volatile int32_t x766 = INT32_MAX;
int8_t x769 = -7;
static uint64_t x770 = UINT64_MAX;
int32_t t192 = 1;
uint8_t x773 = UINT8_MAX;
volatile int8_t x775 = INT8_MIN;
static uint32_t x776 = 80805U;
uint16_t x784 = 391U;
int16_t x785 = INT16_MIN;
static volatile int32_t t196 = 14473;
static uint8_t x789 = 3U;
uint64_t x790 = 3LLU;
static int32_t x792 = -1;
int32_t x793 = INT32_MAX;
volatile uint16_t x794 = UINT16_MAX;


void f0(void) {
    	int8_t x1 = INT8_MIN;
	volatile int16_t x2 = INT16_MIN;
	volatile int8_t x3 = INT8_MIN;
	int8_t x4 = -16;
	volatile int32_t t0 = -96278001;

    t0 = ((x1==(x2&x3))+x4);

    if (t0 != -16) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MAX;
	int8_t x6 = INT8_MAX;
	uint8_t x7 = UINT8_MAX;
	uint16_t x8 = 193U;
	static int32_t t1 = -57002;

    t1 = ((x5==(x6&x7))+x8);

    if (t1 != 193) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint64_t x9 = 23860778744141LLU;
	int16_t x10 = INT16_MIN;
	int8_t x12 = INT8_MIN;
	volatile int32_t t2 = 217;

    t2 = ((x9==(x10&x11))+x12);

    if (t2 != -128) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x14 = INT8_MAX;
	static int64_t x16 = -1LL;
	int64_t t3 = 6878LL;

    t3 = ((x13==(x14&x15))+x16);

    if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x17 = INT64_MIN;
	volatile int16_t x18 = -126;
	static int16_t x19 = -1;
	int32_t x20 = INT32_MAX;
	int32_t t4 = INT32_MAX;

    t4 = ((x17==(x18&x19))+x20);

    if (t4 != INT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = INT8_MIN;
	uint8_t x22 = UINT8_MAX;
	uint32_t x23 = 3U;
	volatile int8_t x24 = INT8_MIN;
	volatile int32_t t5 = 1;

    t5 = ((x21==(x22&x23))+x24);

    if (t5 != -128) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x26 = 29U;
	uint16_t x27 = 0U;
	uint64_t x28 = 4479225837LLU;
	volatile uint64_t t6 = 1152966497LLU;

    t6 = ((x25==(x26&x27))+x28);

    if (t6 != 4479225837LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint16_t x29 = 6174U;
	volatile int32_t x30 = INT32_MIN;
	int64_t x31 = INT64_MIN;

    t7 = ((x29==(x30&x31))+x32);

    if (t7 != INT64_MIN) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = INT16_MIN;
	int8_t x34 = INT8_MAX;
	int32_t x35 = 132246601;
	int16_t x36 = INT16_MAX;
	int32_t t8 = -866;

    t8 = ((x33==(x34&x35))+x36);

    if (t8 != 32767) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = -5;
	int16_t x38 = 5353;
	volatile uint64_t x39 = 3983966974602636LLU;
	uint8_t x40 = UINT8_MAX;
	int32_t t9 = 16921109;

    t9 = ((x37==(x38&x39))+x40);

    if (t9 != 255) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = INT8_MIN;
	int32_t x43 = -4;
	static int64_t x44 = 2536438442LL;
	volatile int64_t t10 = -22012372425355LL;

    t10 = ((x41==(x42&x43))+x44);

    if (t10 != 2536438442LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = -1;
	static int64_t x46 = INT64_MIN;
	int64_t x47 = INT64_MIN;
	int64_t x48 = INT64_MAX;
	static int64_t t11 = INT64_MAX;

    t11 = ((x45==(x46&x47))+x48);

    if (t11 != INT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x49 = 29883U;
	static int64_t x52 = INT64_MAX;

    t12 = ((x49==(x50&x51))+x52);

    if (t12 != INT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = 43;
	volatile int64_t x54 = INT64_MIN;
	uint8_t x55 = 21U;
	uint64_t x56 = UINT64_MAX;
	volatile uint64_t t13 = UINT64_MAX;

    t13 = ((x53==(x54&x55))+x56);

    if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = INT8_MIN;
	int8_t x58 = -1;
	static int16_t x59 = -1;
	int8_t x60 = 0;
	volatile int32_t t14 = 4532693;

    t14 = ((x57==(x58&x59))+x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile int64_t x61 = -825169213LL;
	uint32_t x62 = 54340636U;
	static int16_t x63 = INT16_MAX;
	volatile uint64_t t15 = 6652977070451576LLU;

    t15 = ((x61==(x62&x63))+x64);

    if (t15 != 2684700LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x65 = INT32_MIN;
	static int8_t x66 = INT8_MIN;
	volatile int32_t t16 = 1058757126;

    t16 = ((x65==(x66&x67))+x68);

    if (t16 != 127) { NG(); } else { ; }
	
}

void f17(void) {
    	static int8_t x69 = INT8_MAX;
	int32_t x71 = INT32_MAX;
	static volatile uint32_t t17 = UINT32_MAX;

    t17 = ((x69==(x70&x71))+x72);

    if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x73 = UINT8_MAX;
	uint32_t x74 = 23250453U;
	int8_t x75 = -1;
	int16_t x76 = INT16_MAX;
	volatile int32_t t18 = 172;

    t18 = ((x73==(x74&x75))+x76);

    if (t18 != 32767) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint64_t x78 = 109234287623LLU;
	int8_t x80 = 2;
	int32_t t19 = 311968814;

    t19 = ((x77==(x78&x79))+x80);

    if (t19 != 2) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int32_t x81 = INT32_MIN;
	int8_t x82 = 28;
	static int32_t x83 = INT32_MIN;
	uint64_t x84 = 7552106651896752LLU;
	volatile uint64_t t20 = 7375329649LLU;

    t20 = ((x81==(x82&x83))+x84);

    if (t20 != 7552106651896752LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = -1LL;
	static uint16_t x86 = 2U;
	int64_t x87 = 915129804945856654LL;
	int8_t x88 = -1;
	int32_t t21 = -5782839;

    t21 = ((x85==(x86&x87))+x88);

    if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile int16_t x89 = 619;
	static volatile int16_t x90 = -110;
	int8_t x91 = -37;
	static volatile int32_t x92 = INT32_MIN;
	static volatile int32_t t22 = INT32_MIN;

    t22 = ((x89==(x90&x91))+x92);

    if (t22 != INT32_MIN) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x93 = 205631784849490910LLU;
	int8_t x94 = INT8_MIN;
	static volatile int32_t x96 = INT32_MIN;
	volatile int32_t t23 = INT32_MIN;

    t23 = ((x93==(x94&x95))+x96);

    if (t23 != INT32_MIN) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int8_t x97 = -49;
	volatile int32_t x98 = INT32_MIN;
	static int32_t x99 = 1;
	static uint16_t x100 = 306U;

    t24 = ((x97==(x98&x99))+x100);

    if (t24 != 306) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x101 = UINT32_MAX;
	static int8_t x102 = -18;
	uint32_t x103 = 355348180U;
	int16_t x104 = -1;
	int32_t t25 = -12100219;

    t25 = ((x101==(x102&x103))+x104);

    if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile uint32_t x106 = 1532U;
	uint32_t t26 = UINT32_MAX;

    t26 = ((x105==(x106&x107))+x108);

    if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int16_t x109 = INT16_MIN;
	int8_t x110 = 31;
	int64_t x111 = -1LL;
	static int64_t x112 = INT64_MAX;
	static volatile int64_t t27 = INT64_MAX;

    t27 = ((x109==(x110&x111))+x112);

    if (t27 != INT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x113 = UINT32_MAX;
	uint32_t x114 = 123226U;
	int32_t x115 = INT32_MAX;
	int32_t t28 = 899;

    t28 = ((x113==(x114&x115))+x116);

    if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x118 = -1;
	static uint64_t x120 = 192382925715991LLU;
	static volatile uint64_t t29 = 1918LLU;

    t29 = ((x117==(x118&x119))+x120);

    if (t29 != 192382925715991LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x121 = UINT16_MAX;
	static uint64_t x123 = 839454029562400949LLU;
	int32_t x124 = INT32_MIN;

    t30 = ((x121==(x122&x123))+x124);

    if (t30 != INT32_MIN) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x125 = 2192U;
	static uint32_t x126 = UINT32_MAX;
	int64_t x127 = -32310042LL;

    t31 = ((x125==(x126&x127))+x128);

    if (t31 != INT32_MIN) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int32_t x130 = INT32_MIN;
	uint8_t x131 = UINT8_MAX;
	volatile uint64_t x132 = UINT64_MAX;
	uint64_t t32 = UINT64_MAX;

    t32 = ((x129==(x130&x131))+x132);

    if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
    	static int64_t x133 = INT64_MIN;
	volatile uint16_t x135 = UINT16_MAX;
	int64_t x136 = 1436462150318LL;
	int64_t t33 = 633462380862721638LL;

    t33 = ((x133==(x134&x135))+x136);

    if (t33 != 1436462150318LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x137 = 203559971341102LL;
	static int32_t x138 = INT32_MAX;
	int64_t x139 = -2065833002485LL;
	volatile uint8_t x140 = 8U;

    t34 = ((x137==(x138&x139))+x140);

    if (t34 != 8) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int64_t x141 = -1LL;
	static int16_t x142 = -1;
	uint64_t x143 = UINT64_MAX;
	uint8_t x144 = UINT8_MAX;
	int32_t t35 = 124135744;

    t35 = ((x141==(x142&x143))+x144);

    if (t35 != 256) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x145 = 18;
	uint8_t x146 = 7U;
	uint64_t x147 = 56838868812LLU;
	int32_t x148 = INT32_MIN;
	int32_t t36 = INT32_MIN;

    t36 = ((x145==(x146&x147))+x148);

    if (t36 != INT32_MIN) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int16_t x149 = INT16_MIN;
	int64_t x151 = INT64_MAX;
	int32_t x152 = -5669;
	volatile int32_t t37 = -2070;

    t37 = ((x149==(x150&x151))+x152);

    if (t37 != -5669) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x153 = 7536;
	uint8_t x155 = 4U;
	uint16_t x156 = 154U;
	int32_t t38 = -1064654;

    t38 = ((x153==(x154&x155))+x156);

    if (t38 != 154) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile int16_t x157 = INT16_MIN;
	volatile uint64_t x158 = 4377986570992LLU;
	uint16_t x159 = 17086U;
	int8_t x160 = 51;
	volatile int32_t t39 = 213;

    t39 = ((x157==(x158&x159))+x160);

    if (t39 != 51) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x161 = -10;
	int16_t x162 = INT16_MIN;
	static int8_t x164 = INT8_MAX;
	volatile int32_t t40 = -133157;

    t40 = ((x161==(x162&x163))+x164);

    if (t40 != 127) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint8_t x165 = 3U;
	volatile int8_t x166 = -1;
	static int32_t x168 = INT32_MIN;
	volatile int32_t t41 = INT32_MIN;

    t41 = ((x165==(x166&x167))+x168);

    if (t41 != INT32_MIN) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile int32_t x169 = INT32_MIN;
	int64_t x170 = -1LL;
	uint16_t x172 = 2U;
	volatile int32_t t42 = 201;

    t42 = ((x169==(x170&x171))+x172);

    if (t42 != 2) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x173 = 317901LLU;
	int32_t x174 = -1;
	int16_t x176 = INT16_MIN;
	volatile int32_t t43 = -48;

    t43 = ((x173==(x174&x175))+x176);

    if (t43 != -32768) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x177 = 29U;
	int32_t x178 = 206;
	int32_t x179 = -1;
	int32_t x180 = -3;
	int32_t t44 = -7204;

    t44 = ((x177==(x178&x179))+x180);

    if (t44 != -3) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x181 = -1LL;
	volatile int64_t x182 = -1LL;
	int64_t x183 = INT64_MIN;
	static int16_t x184 = 3;
	volatile int32_t t45 = -82;

    t45 = ((x181==(x182&x183))+x184);

    if (t45 != 3) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x186 = INT32_MAX;
	static volatile int64_t x188 = 1LL;

    t46 = ((x185==(x186&x187))+x188);

    if (t46 != 1LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x189 = INT64_MAX;
	static uint64_t x190 = UINT64_MAX;
	int32_t x191 = INT32_MAX;
	volatile int32_t t47 = 247444340;

    t47 = ((x189==(x190&x191))+x192);

    if (t47 != 1308549) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x193 = INT32_MIN;
	int32_t x194 = INT32_MIN;
	int64_t x195 = -183LL;
	volatile uint32_t x196 = 1220534769U;
	uint32_t t48 = 2073U;

    t48 = ((x193==(x194&x195))+x196);

    if (t48 != 1220534770U) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x198 = UINT8_MAX;
	static int8_t x199 = 0;

    t49 = ((x197==(x198&x199))+x200);

    if (t49 != -32768) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x201 = 0;
	volatile uint32_t x203 = UINT32_MAX;
	uint64_t x204 = UINT64_MAX;
	uint64_t t50 = UINT64_MAX;

    t50 = ((x201==(x202&x203))+x204);

    if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint64_t x205 = 97781365924LLU;
	static volatile int32_t t51 = 50506316;

    t51 = ((x205==(x206&x207))+x208);

    if (t51 != 3782) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x209 = -22;
	static volatile int32_t t52 = -6675858;

    t52 = ((x209==(x210&x211))+x212);

    if (t52 != 32767) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x213 = -1;
	uint8_t x214 = UINT8_MAX;
	static uint32_t x215 = 45408900U;
	int8_t x216 = INT8_MAX;
	int32_t t53 = -1787;

    t53 = ((x213==(x214&x215))+x216);

    if (t53 != 127) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint16_t x218 = 146U;
	static uint8_t x219 = 1U;
	int32_t x220 = -40447;
	static int32_t t54 = -6048270;

    t54 = ((x217==(x218&x219))+x220);

    if (t54 != -40447) { NG(); } else { ; }
	
}

void f55(void) {
    	static int16_t x221 = INT16_MIN;
	int32_t x222 = INT32_MIN;
	int64_t x223 = INT64_MAX;
	int8_t x224 = INT8_MIN;
	int32_t t55 = 2275072;

    t55 = ((x221==(x222&x223))+x224);

    if (t55 != -128) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x225 = 14U;
	uint64_t x226 = 9LLU;
	int32_t x227 = INT32_MIN;
	uint16_t x228 = 6U;
	int32_t t56 = -4697479;

    t56 = ((x225==(x226&x227))+x228);

    if (t56 != 6) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint64_t x229 = 1967686791694233LLU;
	static int64_t x231 = -160634247LL;
	uint16_t x232 = 2046U;
	volatile int32_t t57 = -11840;

    t57 = ((x229==(x230&x231))+x232);

    if (t57 != 2046) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile uint16_t x234 = 1U;
	static int16_t x235 = -1;
	volatile int32_t t58 = 95503572;

    t58 = ((x233==(x234&x235))+x236);

    if (t58 != 127) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x237 = UINT64_MAX;
	volatile uint64_t x238 = 7584160423740LLU;
	int64_t x239 = INT64_MAX;
	uint64_t x240 = 9928938202LLU;
	uint64_t t59 = 104549LLU;

    t59 = ((x237==(x238&x239))+x240);

    if (t59 != 9928938202LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static int8_t x241 = -58;
	uint8_t x243 = UINT8_MAX;
	static uint16_t x244 = 9U;
	volatile int32_t t60 = 873;

    t60 = ((x241==(x242&x243))+x244);

    if (t60 != 9) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x245 = INT16_MAX;
	int32_t x246 = INT32_MAX;
	volatile int16_t x247 = INT16_MIN;
	static volatile int32_t t61 = -3305;

    t61 = ((x245==(x246&x247))+x248);

    if (t61 != -32768) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x249 = 1767144LLU;
	int16_t x250 = INT16_MAX;
	int16_t x251 = INT16_MAX;
	volatile uint32_t x252 = 160U;

    t62 = ((x249==(x250&x251))+x252);

    if (t62 != 160U) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x253 = -1LL;
	static uint8_t x254 = 7U;
	int64_t x256 = INT64_MIN;
	static int64_t t63 = INT64_MIN;

    t63 = ((x253==(x254&x255))+x256);

    if (t63 != INT64_MIN) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x257 = UINT64_MAX;
	uint64_t x258 = UINT64_MAX;
	int32_t t64 = 225780657;

    t64 = ((x257==(x258&x259))+x260);

    if (t64 != 3) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint16_t x261 = UINT16_MAX;
	volatile int64_t x262 = INT64_MAX;
	static int16_t x264 = INT16_MIN;
	volatile int32_t t65 = -157461;

    t65 = ((x261==(x262&x263))+x264);

    if (t65 != -32768) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x265 = 166U;
	uint32_t x266 = 2U;
	int8_t x267 = INT8_MAX;
	int32_t t66 = 643610553;

    t66 = ((x265==(x266&x267))+x268);

    if (t66 != -32768) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x270 = INT16_MAX;
	uint16_t x271 = 2450U;
	static int8_t x272 = 0;

    t67 = ((x269==(x270&x271))+x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int16_t x276 = -1;

    t68 = ((x273==(x274&x275))+x276);

    if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x277 = -7;
	uint32_t x278 = 848U;
	int64_t x279 = INT64_MIN;
	uint64_t x280 = 46846200644424032LLU;
	volatile uint64_t t69 = 91203123171LLU;

    t69 = ((x277==(x278&x279))+x280);

    if (t69 != 46846200644424032LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint64_t x281 = 8811001499180493LLU;
	volatile int16_t x282 = INT16_MAX;
	static int64_t x283 = 2507631490LL;
	int32_t t70 = -210297;

    t70 = ((x281==(x282&x283))+x284);

    if (t70 != 127) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x285 = 793632LLU;
	uint64_t x286 = UINT64_MAX;
	int16_t x287 = INT16_MIN;
	static int16_t x288 = INT16_MIN;

    t71 = ((x285==(x286&x287))+x288);

    if (t71 != -32768) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int16_t x289 = INT16_MAX;
	uint16_t x290 = 24670U;
	int8_t x292 = INT8_MIN;
	volatile int32_t t72 = 0;

    t72 = ((x289==(x290&x291))+x292);

    if (t72 != -128) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile int32_t x293 = -127548;
	int16_t x294 = 1;
	static int16_t x295 = -2608;
	uint16_t x296 = UINT16_MAX;
	int32_t t73 = -5;

    t73 = ((x293==(x294&x295))+x296);

    if (t73 != 65535) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int32_t x297 = 334;
	int64_t x300 = INT64_MIN;
	volatile int64_t t74 = INT64_MIN;

    t74 = ((x297==(x298&x299))+x300);

    if (t74 != INT64_MIN) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x301 = 37;
	int8_t x302 = INT8_MIN;
	static int32_t x303 = INT32_MAX;
	static int32_t t75 = -639;

    t75 = ((x301==(x302&x303))+x304);

    if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint8_t x306 = 101U;
	volatile uint8_t x307 = 13U;
	uint16_t x308 = 257U;
	int32_t t76 = -13051;

    t76 = ((x305==(x306&x307))+x308);

    if (t76 != 257) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x309 = INT16_MIN;
	static volatile int16_t x310 = INT16_MAX;
	uint32_t x311 = 28083316U;
	volatile int32_t x312 = INT32_MIN;
	volatile int32_t t77 = INT32_MIN;

    t77 = ((x309==(x310&x311))+x312);

    if (t77 != INT32_MIN) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x314 = INT16_MAX;
	int64_t x316 = INT64_MIN;
	volatile int64_t t78 = INT64_MIN;

    t78 = ((x313==(x314&x315))+x316);

    if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t x318 = INT32_MIN;
	int8_t x319 = INT8_MIN;
	uint16_t x320 = UINT16_MAX;
	static int32_t t79 = -53360;

    t79 = ((x317==(x318&x319))+x320);

    if (t79 != 65535) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x323 = INT64_MAX;
	volatile int8_t x324 = INT8_MAX;
	volatile int32_t t80 = -851;

    t80 = ((x321==(x322&x323))+x324);

    if (t80 != 127) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x325 = INT32_MAX;
	int8_t x326 = -54;
	volatile int32_t x327 = 0;
	uint8_t x328 = 1U;
	int32_t t81 = 41;

    t81 = ((x325==(x326&x327))+x328);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int8_t x330 = -1;
	volatile int8_t x331 = INT8_MIN;
	static uint32_t x332 = UINT32_MAX;
	volatile uint32_t t82 = UINT32_MAX;

    t82 = ((x329==(x330&x331))+x332);

    if (t82 != UINT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint32_t x333 = UINT32_MAX;
	volatile int16_t x334 = INT16_MAX;
	static int64_t x335 = 176495431590025873LL;
	volatile int32_t t83 = -97019;

    t83 = ((x333==(x334&x335))+x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int64_t x337 = INT64_MIN;
	static int32_t x338 = -175660552;
	static int64_t x339 = -149306601358167681LL;
	volatile int64_t x340 = 6497LL;
	int64_t t84 = -1188506LL;

    t84 = ((x337==(x338&x339))+x340);

    if (t84 != 6497LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x341 = INT32_MIN;
	static int16_t x342 = -234;
	static uint8_t x343 = UINT8_MAX;
	int32_t x344 = -438;
	static volatile int32_t t85 = -957;

    t85 = ((x341==(x342&x343))+x344);

    if (t85 != -438) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x345 = -1;
	int32_t x346 = INT32_MIN;
	int32_t x347 = INT32_MIN;
	volatile int32_t x348 = INT32_MIN;
	static int32_t t86 = INT32_MIN;

    t86 = ((x345==(x346&x347))+x348);

    if (t86 != INT32_MIN) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x349 = -19;
	int32_t x350 = INT32_MAX;
	volatile uint16_t x351 = 2616U;
	int16_t x352 = INT16_MIN;
	volatile int32_t t87 = -3283;

    t87 = ((x349==(x350&x351))+x352);

    if (t87 != -32768) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x354 = -1;
	static int64_t x355 = INT64_MIN;
	volatile int32_t x356 = INT32_MIN;
	static int32_t t88 = INT32_MIN;

    t88 = ((x353==(x354&x355))+x356);

    if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x357 = 23725;
	uint64_t x358 = UINT64_MAX;
	static volatile int16_t x359 = INT16_MIN;
	uint64_t x360 = 199797LLU;
	uint64_t t89 = 986823873LLU;

    t89 = ((x357==(x358&x359))+x360);

    if (t89 != 199797LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x363 = -32;
	int8_t x364 = -1;
	int32_t t90 = 29;

    t90 = ((x361==(x362&x363))+x364);

    if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x365 = UINT16_MAX;
	int64_t x366 = INT64_MIN;
	static volatile int16_t x367 = -1;
	volatile int32_t t91 = -17736;

    t91 = ((x365==(x366&x367))+x368);

    if (t91 != -469) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint8_t x369 = 4U;
	int8_t x370 = -12;
	int8_t x371 = -6;
	int32_t t92 = 91518839;

    t92 = ((x369==(x370&x371))+x372);

    if (t92 != 167540) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint16_t x373 = 31U;
	int16_t x374 = INT16_MIN;
	int32_t x375 = 339;
	int32_t t93 = INT32_MAX;

    t93 = ((x373==(x374&x375))+x376);

    if (t93 != INT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x378 = 72106696195209775LLU;
	int64_t x379 = INT64_MAX;
	int64_t x380 = -4390196907LL;
	volatile int64_t t94 = 6393541313500668LL;

    t94 = ((x377==(x378&x379))+x380);

    if (t94 != -4390196907LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x381 = INT64_MAX;
	int32_t x384 = INT32_MIN;
	volatile int32_t t95 = INT32_MIN;

    t95 = ((x381==(x382&x383))+x384);

    if (t95 != INT32_MIN) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x385 = INT32_MAX;
	static uint64_t x386 = UINT64_MAX;
	static uint64_t x387 = 8110567803643568336LLU;
	volatile uint64_t x388 = 2LLU;

    t96 = ((x385==(x386&x387))+x388);

    if (t96 != 2LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x389 = INT8_MAX;
	int64_t x391 = INT64_MAX;
	static int8_t x392 = INT8_MAX;
	static volatile int32_t t97 = 453894;

    t97 = ((x389==(x390&x391))+x392);

    if (t97 != 127) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x393 = INT32_MIN;
	int8_t x394 = -47;
	volatile int32_t x396 = -1;
	int32_t t98 = -58665404;

    t98 = ((x393==(x394&x395))+x396);

    if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x397 = 209644355;
	uint8_t x398 = UINT8_MAX;
	int32_t x399 = INT32_MAX;
	uint32_t x400 = 98856U;
	volatile uint32_t t99 = 3U;

    t99 = ((x397==(x398&x399))+x400);

    if (t99 != 98856U) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x401 = INT32_MIN;
	int16_t x402 = INT16_MIN;
	static int8_t x403 = 6;
	int8_t x404 = -1;
	int32_t t100 = -20889807;

    t100 = ((x401==(x402&x403))+x404);

    if (t100 != -1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x405 = UINT8_MAX;
	int16_t x406 = INT16_MAX;
	int16_t x407 = INT16_MIN;
	int32_t t101 = 635693;

    t101 = ((x405==(x406&x407))+x408);

    if (t101 != 32767) { NG(); } else { ; }
	
}

void f102(void) {
    	static int32_t x409 = INT32_MIN;
	uint64_t x410 = UINT64_MAX;
	int8_t x411 = INT8_MIN;
	volatile int8_t x412 = -11;
	volatile int32_t t102 = 382;

    t102 = ((x409==(x410&x411))+x412);

    if (t102 != -11) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x414 = 386554LLU;
	static uint32_t t103 = 764483U;

    t103 = ((x413==(x414&x415))+x416);

    if (t103 != 0U) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint32_t x417 = 160142U;
	volatile int16_t x418 = INT16_MIN;
	volatile uint32_t x419 = 7782U;
	static uint8_t x420 = UINT8_MAX;
	volatile int32_t t104 = -20918;

    t104 = ((x417==(x418&x419))+x420);

    if (t104 != 255) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint16_t x421 = UINT16_MAX;
	static int32_t x423 = INT32_MAX;
	volatile uint8_t x424 = UINT8_MAX;
	int32_t t105 = 1107703;

    t105 = ((x421==(x422&x423))+x424);

    if (t105 != 255) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x425 = INT16_MAX;
	volatile uint16_t x426 = 9U;
	static volatile uint16_t x427 = 1U;

    t106 = ((x425==(x426&x427))+x428);

    if (t106 != 235516461591397558LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x429 = INT64_MAX;
	int32_t x430 = INT32_MAX;
	int32_t x431 = -1;
	static int32_t x432 = INT32_MIN;
	int32_t t107 = INT32_MIN;

    t107 = ((x429==(x430&x431))+x432);

    if (t107 != INT32_MIN) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x433 = -1;
	int8_t x434 = -1;
	uint16_t x435 = 2160U;
	static int16_t x436 = 220;
	volatile int32_t t108 = 1;

    t108 = ((x433==(x434&x435))+x436);

    if (t108 != 220) { NG(); } else { ; }
	
}

void f109(void) {
    	static int16_t x437 = INT16_MIN;
	static uint32_t x438 = 120776492U;
	uint8_t x439 = 3U;
	static uint8_t x440 = 12U;
	int32_t t109 = 1299;

    t109 = ((x437==(x438&x439))+x440);

    if (t109 != 12) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile int8_t x443 = INT8_MIN;
	static volatile int32_t t110 = -623525611;

    t110 = ((x441==(x442&x443))+x444);

    if (t110 != -1) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint32_t x445 = 306U;
	int32_t x447 = -247;
	static volatile uint32_t x448 = UINT32_MAX;
	uint32_t t111 = UINT32_MAX;

    t111 = ((x445==(x446&x447))+x448);

    if (t111 != UINT32_MAX) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x451 = -12966;
	int8_t x452 = -1;
	int32_t t112 = 0;

    t112 = ((x449==(x450&x451))+x452);

    if (t112 != -1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x454 = -1LL;
	uint16_t x455 = UINT16_MAX;
	volatile int16_t x456 = INT16_MAX;
	static volatile int32_t t113 = 242564;

    t113 = ((x453==(x454&x455))+x456);

    if (t113 != 32767) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x458 = INT64_MAX;
	static int16_t x459 = INT16_MAX;
	int16_t x460 = 296;
	static int32_t t114 = -103;

    t114 = ((x457==(x458&x459))+x460);

    if (t114 != 296) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int32_t x461 = INT32_MIN;
	static int8_t x462 = -1;
	int8_t x463 = INT8_MIN;
	int8_t x464 = INT8_MIN;
	static int32_t t115 = -1983674;

    t115 = ((x461==(x462&x463))+x464);

    if (t115 != -128) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x465 = 33U;
	volatile int8_t x466 = INT8_MAX;
	static uint64_t x468 = 15827382855781LLU;
	uint64_t t116 = 4955593744LLU;

    t116 = ((x465==(x466&x467))+x468);

    if (t116 != 15827382855781LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile uint32_t x469 = UINT32_MAX;
	int16_t x470 = -1;
	int32_t x471 = 10;
	int16_t x472 = INT16_MAX;

    t117 = ((x469==(x470&x471))+x472);

    if (t117 != 32767) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint16_t x473 = UINT16_MAX;
	int64_t x475 = INT64_MIN;
	int64_t x476 = INT64_MIN;
	volatile int64_t t118 = INT64_MIN;

    t118 = ((x473==(x474&x475))+x476);

    if (t118 != INT64_MIN) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x477 = 26U;
	volatile uint8_t x478 = 5U;
	int64_t x479 = INT64_MIN;
	int16_t x480 = -1;

    t119 = ((x477==(x478&x479))+x480);

    if (t119 != -1) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint8_t x482 = 6U;
	int8_t x483 = INT8_MAX;
	int8_t x484 = INT8_MIN;
	int32_t t120 = 895;

    t120 = ((x481==(x482&x483))+x484);

    if (t120 != -128) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x486 = INT32_MIN;
	static uint16_t x487 = 21723U;
	static int64_t x488 = -72187539LL;
	int64_t t121 = 3602703203753137596LL;

    t121 = ((x485==(x486&x487))+x488);

    if (t121 != -72187539LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x489 = 1673936876141698LL;
	static int8_t x490 = -1;
	volatile int32_t x491 = 2779;
	int64_t x492 = INT64_MAX;

    t122 = ((x489==(x490&x491))+x492);

    if (t122 != INT64_MAX) { NG(); } else { ; }
	
}

void f123(void) {
    	static int64_t x493 = INT64_MIN;
	static uint32_t x494 = UINT32_MAX;
	int64_t x495 = 1LL;
	uint16_t x496 = 2691U;
	volatile int32_t t123 = -1448467;

    t123 = ((x493==(x494&x495))+x496);

    if (t123 != 2691) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x498 = 1;
	uint64_t x499 = 7224706661330388LLU;
	uint64_t x500 = 505227335099LLU;
	uint64_t t124 = 7209LLU;

    t124 = ((x497==(x498&x499))+x500);

    if (t124 != 505227335099LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x501 = UINT32_MAX;
	volatile uint16_t x502 = UINT16_MAX;
	int16_t x503 = INT16_MIN;
	int8_t x504 = -1;
	int32_t t125 = 4604;

    t125 = ((x501==(x502&x503))+x504);

    if (t125 != -1) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x505 = 806;
	volatile int64_t x506 = INT64_MAX;
	static int64_t x507 = INT64_MIN;
	static int16_t x508 = INT16_MAX;

    t126 = ((x505==(x506&x507))+x508);

    if (t126 != 32767) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint8_t x509 = 1U;
	uint64_t x510 = UINT64_MAX;
	int16_t x512 = INT16_MIN;
	int32_t t127 = -58;

    t127 = ((x509==(x510&x511))+x512);

    if (t127 != -32768) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x513 = UINT32_MAX;
	static int64_t x515 = INT64_MIN;
	uint16_t x516 = 3U;
	int32_t t128 = -185522184;

    t128 = ((x513==(x514&x515))+x516);

    if (t128 != 3) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x518 = 3053U;
	uint16_t x519 = UINT16_MAX;
	volatile int32_t t129 = -56;

    t129 = ((x517==(x518&x519))+x520);

    if (t129 != -128) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint8_t x521 = 4U;
	static volatile int32_t x522 = INT32_MIN;
	uint8_t x523 = 6U;
	int64_t x524 = 50280042233522LL;
	volatile int64_t t130 = 317LL;

    t130 = ((x521==(x522&x523))+x524);

    if (t130 != 50280042233522LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x525 = UINT16_MAX;
	int32_t x526 = 676746030;
	uint16_t x527 = 1006U;
	int32_t t131 = 1447905;

    t131 = ((x525==(x526&x527))+x528);

    if (t131 != -7243) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x529 = 522252767377346LLU;
	int8_t x530 = INT8_MIN;
	int64_t x531 = -6436595LL;
	volatile uint64_t x532 = 363781748218LLU;

    t132 = ((x529==(x530&x531))+x532);

    if (t132 != 363781748218LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x533 = UINT16_MAX;
	volatile int64_t x534 = -181636821234410761LL;
	int8_t x536 = INT8_MIN;
	int32_t t133 = -4284240;

    t133 = ((x533==(x534&x535))+x536);

    if (t133 != -128) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x537 = INT8_MAX;
	volatile int32_t x538 = -138899819;

    t134 = ((x537==(x538&x539))+x540);

    if (t134 != INT64_MAX) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int64_t x541 = INT64_MIN;
	int32_t x542 = INT32_MIN;
	static int32_t x543 = -15415;
	volatile int16_t x544 = INT16_MIN;
	static int32_t t135 = -3643;

    t135 = ((x541==(x542&x543))+x544);

    if (t135 != -32768) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x545 = INT8_MIN;
	uint8_t x546 = 2U;
	int8_t x547 = INT8_MAX;
	int64_t x548 = INT64_MIN;
	volatile int64_t t136 = INT64_MIN;

    t136 = ((x545==(x546&x547))+x548);

    if (t136 != INT64_MIN) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int8_t x550 = INT8_MIN;
	uint8_t x551 = UINT8_MAX;

    t137 = ((x549==(x550&x551))+x552);

    if (t137 != 5) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x553 = -1;
	int8_t x554 = 0;
	int16_t x556 = INT16_MAX;
	static int32_t t138 = -91104882;

    t138 = ((x553==(x554&x555))+x556);

    if (t138 != 32767) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x557 = INT16_MIN;
	static int16_t x558 = INT16_MAX;
	int8_t x559 = 1;
	volatile int8_t x560 = -3;
	int32_t t139 = -94248642;

    t139 = ((x557==(x558&x559))+x560);

    if (t139 != -3) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile uint8_t x561 = 35U;
	static uint32_t x562 = 1U;
	uint64_t x564 = 24LLU;
	volatile uint64_t t140 = 1045100284322369LLU;

    t140 = ((x561==(x562&x563))+x564);

    if (t140 != 24LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static int64_t x565 = 2873465166709236LL;
	int64_t x566 = -5765737787874LL;
	volatile int32_t x568 = -1;

    t141 = ((x565==(x566&x567))+x568);

    if (t141 != -1) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x569 = -1LL;
	uint32_t x570 = 26528757U;
	int64_t x571 = 25LL;
	volatile uint64_t t142 = UINT64_MAX;

    t142 = ((x569==(x570&x571))+x572);

    if (t142 != UINT64_MAX) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x573 = -1;
	uint8_t x574 = 3U;
	uint16_t x575 = 21430U;
	volatile uint64_t x576 = UINT64_MAX;
	static uint64_t t143 = UINT64_MAX;

    t143 = ((x573==(x574&x575))+x576);

    if (t143 != UINT64_MAX) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x577 = 1U;
	int8_t x578 = INT8_MIN;
	int16_t x579 = INT16_MIN;
	int16_t x580 = 0;
	int32_t t144 = -251;

    t144 = ((x577==(x578&x579))+x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x582 = INT16_MIN;
	int64_t x583 = INT64_MAX;
	int16_t x584 = INT16_MIN;
	static volatile int32_t t145 = 226968;

    t145 = ((x581==(x582&x583))+x584);

    if (t145 != -32768) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x586 = -1;
	int32_t t146 = 60226632;

    t146 = ((x585==(x586&x587))+x588);

    if (t146 != -1) { NG(); } else { ; }
	
}

void f147(void) {
    	static int16_t x591 = INT16_MAX;
	static int16_t x592 = INT16_MIN;

    t147 = ((x589==(x590&x591))+x592);

    if (t147 != -32768) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x594 = UINT8_MAX;
	int32_t x595 = -1;
	int16_t x596 = -1;
	volatile int32_t t148 = 1484528;

    t148 = ((x593==(x594&x595))+x596);

    if (t148 != -1) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x597 = -1LL;
	int64_t x598 = -29127LL;
	uint64_t x600 = 3827829374295734415LLU;
	uint64_t t149 = 3137938687078LLU;

    t149 = ((x597==(x598&x599))+x600);

    if (t149 != 3827829374295734415LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile int16_t x601 = -1;
	static int16_t x602 = -4;
	uint16_t x603 = 10398U;
	uint16_t x604 = 655U;
	static int32_t t150 = 0;

    t150 = ((x601==(x602&x603))+x604);

    if (t150 != 655) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x606 = INT64_MIN;
	int8_t x607 = -1;
	int32_t x608 = -1;
	volatile int32_t t151 = -10;

    t151 = ((x605==(x606&x607))+x608);

    if (t151 != -1) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x609 = 47;
	int8_t x610 = INT8_MIN;
	volatile int16_t x611 = INT16_MIN;
	static int64_t t152 = 14852478LL;

    t152 = ((x609==(x610&x611))+x612);

    if (t152 != 4292251LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x613 = UINT64_MAX;
	static int16_t x614 = INT16_MIN;
	static int8_t x616 = INT8_MAX;
	int32_t t153 = 744178091;

    t153 = ((x613==(x614&x615))+x616);

    if (t153 != 127) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x617 = 42388U;
	int8_t x618 = INT8_MIN;
	uint8_t x619 = UINT8_MAX;
	int16_t x620 = -1;
	int32_t t154 = -1095866;

    t154 = ((x617==(x618&x619))+x620);

    if (t154 != -1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x621 = -1;
	static int8_t x622 = INT8_MAX;
	volatile int64_t x624 = -1036154564580056LL;
	volatile int64_t t155 = -59671929454395LL;

    t155 = ((x621==(x622&x623))+x624);

    if (t155 != -1036154564580056LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x625 = INT32_MIN;
	int8_t x626 = INT8_MIN;
	int64_t x627 = -1LL;
	int8_t x628 = 1;

    t156 = ((x625==(x626&x627))+x628);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x629 = 4U;
	volatile int32_t x631 = 1980;
	static int8_t x632 = INT8_MAX;
	int32_t t157 = -1040260581;

    t157 = ((x629==(x630&x631))+x632);

    if (t157 != 127) { NG(); } else { ; }
	
}

void f158(void) {
    	static int16_t x633 = INT16_MIN;
	int16_t x634 = INT16_MAX;
	uint16_t x635 = 1U;
	uint64_t x636 = 1017274930LLU;
	volatile uint64_t t158 = 61324239LLU;

    t158 = ((x633==(x634&x635))+x636);

    if (t158 != 1017274930LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x637 = 78U;
	int8_t x638 = INT8_MIN;
	int64_t x639 = 6155048592368LL;
	int16_t x640 = INT16_MAX;
	int32_t t159 = -61825578;

    t159 = ((x637==(x638&x639))+x640);

    if (t159 != 32767) { NG(); } else { ; }
	
}

void f160(void) {
    	static int8_t x641 = 17;
	int16_t x642 = -4;
	int32_t x643 = 246000;
	uint8_t x644 = 110U;
	volatile int32_t t160 = 95178763;

    t160 = ((x641==(x642&x643))+x644);

    if (t160 != 110) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x645 = UINT16_MAX;
	volatile uint8_t x646 = UINT8_MAX;
	static int16_t x647 = INT16_MIN;
	int64_t x648 = -56789081655175LL;
	volatile int64_t t161 = -67833344477335805LL;

    t161 = ((x645==(x646&x647))+x648);

    if (t161 != -56789081655175LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x649 = INT64_MIN;
	int32_t x651 = -2071555;
	int8_t x652 = INT8_MIN;

    t162 = ((x649==(x650&x651))+x652);

    if (t162 != -128) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int16_t x653 = INT16_MAX;
	int32_t x654 = -1;
	uint8_t x655 = UINT8_MAX;
	static uint32_t x656 = 24023814U;
	uint32_t t163 = 30961087U;

    t163 = ((x653==(x654&x655))+x656);

    if (t163 != 24023814U) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x657 = -1;
	int64_t x660 = -61414LL;
	static int64_t t164 = -3970696482LL;

    t164 = ((x657==(x658&x659))+x660);

    if (t164 != -61414LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile uint32_t x661 = UINT32_MAX;
	int16_t x662 = -1;
	int32_t x663 = INT32_MIN;
	volatile uint64_t x664 = UINT64_MAX;
	static volatile uint64_t t165 = UINT64_MAX;

    t165 = ((x661==(x662&x663))+x664);

    if (t165 != UINT64_MAX) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint32_t x665 = 13U;
	static uint32_t x666 = 234057458U;
	volatile int32_t x667 = INT32_MIN;
	volatile uint32_t t166 = 20837U;

    t166 = ((x665==(x666&x667))+x668);

    if (t166 != 12U) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x670 = -84;
	uint16_t x672 = 7496U;
	int32_t t167 = -83;

    t167 = ((x669==(x670&x671))+x672);

    if (t167 != 7496) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int8_t x673 = -1;
	int64_t x674 = INT64_MIN;
	static int32_t x675 = -29171172;
	volatile int64_t t168 = INT64_MIN;

    t168 = ((x673==(x674&x675))+x676);

    if (t168 != INT64_MIN) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint16_t x677 = 14022U;
	int8_t x679 = 1;
	int8_t x680 = INT8_MIN;

    t169 = ((x677==(x678&x679))+x680);

    if (t169 != -128) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x681 = INT16_MAX;
	int32_t x682 = INT32_MIN;
	int32_t x683 = -3083175;
	volatile int16_t x684 = INT16_MIN;
	int32_t t170 = 12;

    t170 = ((x681==(x682&x683))+x684);

    if (t170 != -32768) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x686 = 1LL;
	int64_t x687 = INT64_MAX;
	uint32_t x688 = 68988486U;
	uint32_t t171 = 1379U;

    t171 = ((x685==(x686&x687))+x688);

    if (t171 != 68988486U) { NG(); } else { ; }
	
}

void f172(void) {
    	static int8_t x689 = 1;
	uint64_t x690 = 3899845LLU;
	int32_t x691 = INT32_MAX;
	int32_t x692 = -1;
	int32_t t172 = -1336571;

    t172 = ((x689==(x690&x691))+x692);

    if (t172 != -1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x693 = 24794U;
	uint64_t x694 = UINT64_MAX;
	int32_t x695 = 1;
	int64_t x696 = -1LL;
	int64_t t173 = -121669538845364634LL;

    t173 = ((x693==(x694&x695))+x696);

    if (t173 != -1LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint16_t x697 = 8172U;
	int64_t x698 = INT64_MIN;
	int16_t x699 = INT16_MAX;
	static int16_t x700 = 7984;
	int32_t t174 = -955130;

    t174 = ((x697==(x698&x699))+x700);

    if (t174 != 7984) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x701 = 19584U;
	int8_t x702 = 1;
	volatile uint64_t x703 = UINT64_MAX;
	int16_t x704 = -12;
	int32_t t175 = -15166;

    t175 = ((x701==(x702&x703))+x704);

    if (t175 != -12) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x705 = INT16_MAX;
	static int32_t x706 = INT32_MAX;
	int64_t x707 = 2LL;

    t176 = ((x705==(x706&x707))+x708);

    if (t176 != -128) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x709 = INT8_MAX;
	int64_t x710 = INT64_MAX;
	int8_t x711 = -25;
	volatile int32_t x712 = INT32_MIN;
	static int32_t t177 = INT32_MIN;

    t177 = ((x709==(x710&x711))+x712);

    if (t177 != INT32_MIN) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x714 = UINT64_MAX;
	int8_t x716 = 44;

    t178 = ((x713==(x714&x715))+x716);

    if (t178 != 44) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x717 = -8664;
	int64_t x718 = -1LL;
	int8_t x719 = -1;
	volatile int64_t x720 = INT64_MAX;
	int64_t t179 = INT64_MAX;

    t179 = ((x717==(x718&x719))+x720);

    if (t179 != INT64_MAX) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x721 = INT64_MIN;
	volatile int64_t x723 = 58377888267221LL;
	static volatile uint64_t t180 = 344779LLU;

    t180 = ((x721==(x722&x723))+x724);

    if (t180 != 16519837067561069LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x727 = 30;
	int16_t x728 = -7366;

    t181 = ((x725==(x726&x727))+x728);

    if (t181 != -7366) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x729 = -1;
	int64_t x730 = -1LL;
	uint32_t x732 = 3U;

    t182 = ((x729==(x730&x731))+x732);

    if (t182 != 3U) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint16_t x733 = 3862U;
	uint64_t x734 = 1295LLU;
	uint32_t x735 = UINT32_MAX;
	uint64_t t183 = 125LLU;

    t183 = ((x733==(x734&x735))+x736);

    if (t183 != 67792818763136LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint16_t x737 = 1U;
	int32_t t184 = -1;

    t184 = ((x737==(x738&x739))+x740);

    if (t184 != -32768) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x741 = -1;
	volatile int32_t x742 = INT32_MIN;
	static uint16_t x744 = 6346U;
	volatile int32_t t185 = -10119;

    t185 = ((x741==(x742&x743))+x744);

    if (t185 != 6346) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x746 = -1;
	int8_t x747 = -1;
	int16_t x748 = 400;
	volatile int32_t t186 = 296838329;

    t186 = ((x745==(x746&x747))+x748);

    if (t186 != 401) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x749 = INT64_MIN;
	volatile int8_t x750 = -1;
	volatile int64_t x751 = -1LL;
	volatile int32_t t187 = -86139670;

    t187 = ((x749==(x750&x751))+x752);

    if (t187 != -32768) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint16_t x753 = 2453U;
	uint16_t x754 = 6450U;
	uint64_t x755 = 98767LLU;
	uint32_t x756 = 247757211U;

    t188 = ((x753==(x754&x755))+x756);

    if (t188 != 247757211U) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x757 = INT32_MIN;
	int16_t x758 = -1;
	int16_t x759 = INT16_MAX;
	uint16_t x760 = 1U;

    t189 = ((x757==(x758&x759))+x760);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int16_t x761 = -1;
	static int64_t x762 = 14433900273LL;
	int16_t x763 = INT16_MIN;
	int64_t x764 = INT64_MIN;
	volatile int64_t t190 = INT64_MIN;

    t190 = ((x761==(x762&x763))+x764);

    if (t190 != INT64_MIN) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int16_t x765 = INT16_MIN;
	int8_t x767 = INT8_MIN;
	static int64_t x768 = -1LL;
	int64_t t191 = 30823LL;

    t191 = ((x765==(x766&x767))+x768);

    if (t191 != -1LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x771 = -1;
	uint8_t x772 = UINT8_MAX;

    t192 = ((x769==(x770&x771))+x772);

    if (t192 != 255) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x774 = INT16_MIN;
	uint32_t t193 = 27U;

    t193 = ((x773==(x774&x775))+x776);

    if (t193 != 80805U) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x777 = 416290U;
	static uint64_t x778 = 200869608000LLU;
	static volatile uint64_t x779 = 257826LLU;
	static volatile int8_t x780 = INT8_MIN;
	static volatile int32_t t194 = -4158781;

    t194 = ((x777==(x778&x779))+x780);

    if (t194 != -128) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x781 = INT8_MIN;
	static uint32_t x782 = 289636677U;
	uint8_t x783 = 9U;
	volatile int32_t t195 = 0;

    t195 = ((x781==(x782&x783))+x784);

    if (t195 != 391) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x786 = 16627751851153976LLU;
	int32_t x787 = 210195;
	int8_t x788 = -34;

    t196 = ((x785==(x786&x787))+x788);

    if (t196 != -34) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x791 = 74LLU;
	volatile int32_t t197 = 36402;

    t197 = ((x789==(x790&x791))+x792);

    if (t197 != -1) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x795 = 1106230;
	int8_t x796 = -6;
	static int32_t t198 = -17;

    t198 = ((x793==(x794&x795))+x796);

    if (t198 != -6) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int64_t x797 = INT64_MIN;
	static volatile uint8_t x798 = UINT8_MAX;
	volatile uint64_t x799 = 28LLU;
	static uint16_t x800 = 80U;
	int32_t t199 = -776438237;

    t199 = ((x797==(x798&x799))+x800);

    if (t199 != 80) { NG(); } else { ; }
	
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

