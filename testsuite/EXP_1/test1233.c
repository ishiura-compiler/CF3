
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

uint32_t t1 = 73700347U;
static int32_t x11 = -1;
static volatile int32_t t3 = -3;
int8_t x17 = INT8_MIN;
uint64_t t4 = 13LLU;
int64_t x23 = INT64_MIN;
int64_t t5 = 376LL;
int64_t x27 = -1084121109564839564LL;
uint8_t x31 = 4U;
uint8_t x33 = 1U;
volatile int32_t x38 = INT32_MIN;
static volatile int64_t t10 = INT64_MAX;
volatile int16_t x45 = 11957;
uint64_t x47 = UINT64_MAX;
int32_t x54 = 248103;
int32_t x63 = INT32_MIN;
int8_t x64 = INT8_MIN;
static int16_t x76 = -332;
int64_t x88 = -1275724574490812LL;
int64_t t19 = 606811LL;
uint32_t x90 = 4902U;
uint32_t x101 = UINT32_MAX;
int32_t t23 = -1;
int8_t x106 = INT8_MIN;
uint64_t x108 = UINT64_MAX;
volatile int32_t x113 = 66079;
int16_t x115 = INT16_MAX;
int8_t x116 = -1;
uint32_t x117 = 19U;
static volatile int16_t x124 = -1;
static uint16_t x128 = UINT16_MAX;
volatile int8_t x129 = -1;
static volatile int16_t x138 = INT16_MIN;
int8_t x152 = 3;
int32_t x155 = -1;
int8_t x159 = -2;
int8_t x170 = INT8_MIN;
static uint64_t x176 = 133618573845LLU;
volatile uint64_t t41 = 107107654239515584LLU;
volatile int32_t x178 = INT32_MIN;
static uint16_t x179 = UINT16_MAX;
volatile uint8_t x181 = 0U;
int16_t x195 = -1;
static uint64_t x196 = UINT64_MAX;
int32_t t47 = -26;
int64_t x201 = -1LL;
int8_t x202 = INT8_MAX;
volatile int8_t x203 = 50;
int8_t x209 = 1;
int8_t x211 = INT8_MIN;
static int32_t t50 = 2928572;
volatile uint32_t x214 = 43U;
uint16_t x215 = 19709U;
int32_t x223 = -28;
int32_t t54 = 25400;
int16_t x231 = INT16_MIN;
uint8_t x232 = 1U;
int32_t t56 = 7948;
int64_t t57 = -239528754052279225LL;
volatile int8_t x246 = INT8_MIN;
volatile int64_t t60 = 3LL;
uint64_t x254 = UINT64_MAX;
static int8_t x263 = -1;
int8_t x265 = INT8_MAX;
int64_t x274 = INT64_MIN;
volatile uint64_t t66 = 1673670650190414LLU;
volatile int8_t x278 = INT8_MIN;
volatile int64_t x282 = 27822879845814LL;
volatile uint64_t t69 = 120907152144234LLU;
uint16_t x291 = 116U;
uint32_t x293 = 4144U;
int64_t t71 = -83764LL;
int16_t x297 = 22;
uint8_t x299 = 15U;
int64_t x305 = -1LL;
int32_t x313 = INT32_MAX;
int8_t x320 = INT8_MIN;
volatile int16_t x325 = -1;
uint32_t x326 = UINT32_MAX;
static uint8_t x328 = UINT8_MAX;
int64_t t78 = -112532869LL;
uint64_t x329 = 3085544632286286102LLU;
int32_t x334 = -1;
static uint32_t t80 = 62U;
int32_t x341 = INT32_MAX;
volatile int8_t x345 = INT8_MIN;
volatile uint64_t t83 = 132522LLU;
volatile uint16_t x354 = 3507U;
volatile int16_t x355 = INT16_MIN;
static volatile uint16_t x358 = 1U;
uint32_t x363 = UINT32_MAX;
int16_t x371 = INT16_MIN;
volatile uint8_t x378 = 12U;
volatile int64_t x380 = -1LL;
int8_t x382 = INT8_MIN;
static int32_t x384 = -1;
int32_t t92 = 3413955;
volatile int32_t t95 = -212539412;
int16_t x398 = INT16_MAX;
static uint16_t x401 = 38U;
volatile int32_t t97 = -666341;
int64_t x406 = 3045LL;
volatile uint64_t x409 = 4332931175223997013LLU;
uint64_t t99 = 1553709002LLU;
static int16_t x413 = 10;
static int64_t x415 = -3253429714288988LL;
int16_t x417 = INT16_MIN;
static uint64_t x418 = UINT64_MAX;
int8_t x421 = INT8_MIN;
volatile int32_t t102 = 1;
int16_t x435 = -1;
volatile uint32_t t106 = 218U;
uint16_t x442 = 285U;
int32_t x443 = INT32_MIN;
int64_t t107 = 186LL;
volatile int8_t x447 = -1;
static volatile int16_t x451 = -694;
volatile int32_t t109 = -11587645;
static volatile int32_t x453 = -8906;
int32_t x455 = INT32_MIN;
volatile int32_t t110 = 1;
volatile int32_t x457 = -23;
int8_t x459 = INT8_MAX;
int8_t x466 = 1;
int16_t x478 = INT16_MIN;
int32_t x489 = INT32_MIN;
int64_t x491 = -3521769246226390707LL;
int32_t x492 = INT32_MIN;
int32_t t122 = 199564;
int64_t x515 = INT64_MIN;
static volatile int16_t x521 = -19;
static int32_t x522 = INT32_MIN;
int16_t x523 = INT16_MIN;
int64_t x528 = INT64_MIN;
int8_t x530 = -1;
int8_t x533 = 58;
uint16_t x538 = 611U;
int32_t x540 = -1567288;
int64_t x542 = INT64_MAX;
uint16_t x549 = 1182U;
static volatile int16_t x550 = INT16_MIN;
int32_t x553 = INT32_MAX;
volatile int32_t t134 = -1720;
uint64_t x560 = 254981486458100527LLU;
uint64_t t135 = 122014275LLU;
int32_t x569 = INT32_MAX;
int16_t x572 = INT16_MIN;
static int64_t x579 = -1LL;
int32_t t141 = 118;
int8_t x591 = INT8_MIN;
static uint32_t x600 = UINT32_MAX;
static int32_t x606 = INT32_MIN;
volatile uint8_t x608 = 0U;
int8_t x613 = -1;
int32_t x614 = -1;
uint64_t t149 = UINT64_MAX;
volatile int32_t t151 = 3228355;
int8_t x629 = -3;
uint8_t x632 = 1U;
volatile int32_t x635 = INT32_MIN;
int16_t x639 = 4007;
volatile int64_t x646 = INT64_MIN;
uint64_t x650 = 960559573516825136LLU;
volatile int32_t t158 = -1;
int32_t x657 = INT32_MAX;
uint16_t x660 = 9U;
volatile int8_t x664 = INT8_MIN;
volatile int64_t t160 = -24503390759241LL;
volatile int64_t t161 = 2650587LL;
volatile int64_t x682 = 2084LL;
uint32_t x684 = 146333218U;
int64_t x694 = INT64_MIN;
int8_t x695 = -1;
int32_t t167 = -18638353;
uint8_t x701 = 42U;
int32_t x702 = INT32_MIN;
volatile int32_t x705 = 53216269;
uint16_t x715 = UINT16_MAX;
static int32_t x717 = -830;
static volatile int16_t x721 = INT16_MIN;
volatile int64_t t173 = 413242001943384LL;
int64_t x725 = 419988829LL;
uint8_t x729 = UINT8_MAX;
int16_t x731 = -3;
int32_t x732 = -1;
volatile int32_t t177 = 404853134;
uint8_t x741 = UINT8_MAX;
int64_t x742 = 372230421758456945LL;
int16_t x744 = -1;
uint32_t x755 = UINT32_MAX;
volatile uint64_t x756 = UINT64_MAX;
int32_t x757 = 14052;
int64_t x758 = INT64_MIN;
volatile int32_t t181 = -45;
static uint32_t x767 = 504416995U;
int64_t x768 = -13401555611121LL;
int32_t x772 = -1;
int16_t x773 = INT16_MAX;
static volatile int64_t x779 = INT64_MAX;
int64_t x787 = INT64_MAX;
int8_t x789 = INT8_MIN;
uint64_t x790 = UINT64_MAX;
static int16_t x792 = -1;
volatile int8_t x795 = 52;
int16_t x800 = INT16_MAX;
static volatile int64_t x807 = INT64_MAX;
uint8_t x824 = 118U;
volatile int32_t t194 = -2;
volatile int16_t x825 = INT16_MIN;
volatile int16_t x827 = 21;
static int16_t x837 = -1;
static volatile int16_t x843 = INT16_MAX;


void f0(void) {
    	volatile uint32_t x1 = 16422625U;
	volatile int64_t x2 = INT64_MAX;
	static int32_t x3 = INT32_MAX;
	int64_t x4 = INT64_MIN;
	static int64_t t0 = 1543735740511222143LL;

    t0 = (((x1!=x2)%x3)+x4);

    if (t0 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MIN;
	static int64_t x6 = 69703LL;
	uint8_t x7 = 30U;
	uint32_t x8 = 2691U;

    t1 = (((x5!=x6)%x7)+x8);

    if (t1 != 2692U) { NG(); } else { ; }
	
}

void f2(void) {
    	static int64_t x9 = -1LL;
	int16_t x10 = 40;
	int32_t x12 = INT32_MIN;
	volatile int32_t t2 = INT32_MIN;

    t2 = (((x9!=x10)%x11)+x12);

    if (t2 != INT32_MIN) { NG(); } else { ; }
	
}

void f3(void) {
    	static int64_t x13 = 3555412879874LL;
	static int16_t x14 = INT16_MAX;
	uint16_t x15 = 50U;
	int16_t x16 = INT16_MAX;

    t3 = (((x13!=x14)%x15)+x16);

    if (t3 != 32768) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x18 = 1;
	volatile int64_t x19 = -32489LL;
	uint64_t x20 = 1030978LLU;

    t4 = (((x17!=x18)%x19)+x20);

    if (t4 != 1030979LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x21 = -1;
	int16_t x22 = INT16_MIN;
	static volatile uint8_t x24 = UINT8_MAX;

    t5 = (((x21!=x22)%x23)+x24);

    if (t5 != 256LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = INT8_MAX;
	int64_t x26 = -1LL;
	uint64_t x28 = 16419832431728634LLU;
	volatile uint64_t t6 = 427460278973LLU;

    t6 = (((x25!=x26)%x27)+x28);

    if (t6 != 16419832431728635LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	static int16_t x29 = INT16_MIN;
	int8_t x30 = INT8_MIN;
	int64_t x32 = -92806165295429LL;
	volatile int64_t t7 = -460088LL;

    t7 = (((x29!=x30)%x31)+x32);

    if (t7 != -92806165295428LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile uint64_t x34 = 66583054LLU;
	int16_t x35 = -1;
	int64_t x36 = 0LL;
	volatile int64_t t8 = -1086963184580LL;

    t8 = (((x33!=x34)%x35)+x36);

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int32_t x37 = -1;
	volatile int64_t x39 = -16583196LL;
	uint16_t x40 = 782U;
	int64_t t9 = 594314036935291LL;

    t9 = (((x37!=x38)%x39)+x40);

    if (t9 != 783LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x41 = 24U;
	static volatile int16_t x42 = 0;
	int64_t x43 = -1LL;
	int64_t x44 = INT64_MAX;

    t10 = (((x41!=x42)%x43)+x44);

    if (t10 != INT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint32_t x46 = 71U;
	static int8_t x48 = INT8_MIN;
	uint64_t t11 = 1597043LLU;

    t11 = (((x45!=x46)%x47)+x48);

    if (t11 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = 3117LL;
	int16_t x50 = INT16_MIN;
	static int64_t x51 = INT64_MAX;
	int64_t x52 = INT64_MIN;
	volatile int64_t t12 = 3924076614496300LL;

    t12 = (((x49!=x50)%x51)+x52);

    if (t12 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int32_t x53 = -1;
	int8_t x55 = 1;
	int8_t x56 = 30;
	int32_t t13 = -7398;

    t13 = (((x53!=x54)%x55)+x56);

    if (t13 != 30) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int16_t x57 = 7589;
	static int64_t x58 = INT64_MAX;
	int8_t x59 = INT8_MIN;
	int16_t x60 = 4924;
	int32_t t14 = 917031;

    t14 = (((x57!=x58)%x59)+x60);

    if (t14 != 4925) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x61 = INT32_MIN;
	static volatile uint8_t x62 = UINT8_MAX;
	static int32_t t15 = 1921887;

    t15 = (((x61!=x62)%x63)+x64);

    if (t15 != -127) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int64_t x65 = INT64_MAX;
	int64_t x66 = INT64_MIN;
	volatile int64_t x67 = INT64_MIN;
	int64_t x68 = INT64_MIN;
	int64_t t16 = -81LL;

    t16 = (((x65!=x66)%x67)+x68);

    if (t16 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x69 = UINT32_MAX;
	static int64_t x70 = INT64_MIN;
	int8_t x71 = INT8_MAX;
	volatile int64_t x72 = INT64_MIN;
	int64_t t17 = 1042920104LL;

    t17 = (((x69!=x70)%x71)+x72);

    if (t17 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x73 = UINT64_MAX;
	volatile uint32_t x74 = 614269U;
	int32_t x75 = INT32_MIN;
	static volatile int32_t t18 = 67642;

    t18 = (((x73!=x74)%x75)+x76);

    if (t18 != -331) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x85 = -479;
	volatile int64_t x86 = INT64_MIN;
	static uint32_t x87 = 1980172345U;

    t19 = (((x85!=x86)%x87)+x88);

    if (t19 != -1275724574490811LL) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint32_t x89 = 18405464U;
	volatile int64_t x91 = INT64_MIN;
	int16_t x92 = -68;
	volatile int64_t t20 = 3571635LL;

    t20 = (((x89!=x90)%x91)+x92);

    if (t20 != -67LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x93 = -1698700951466874LL;
	static volatile int8_t x94 = INT8_MAX;
	volatile uint8_t x95 = UINT8_MAX;
	uint8_t x96 = 35U;
	volatile int32_t t21 = -5077;

    t21 = (((x93!=x94)%x95)+x96);

    if (t21 != 36) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x97 = 76485617672526LLU;
	int32_t x98 = INT32_MAX;
	int32_t x99 = -1;
	volatile int16_t x100 = INT16_MAX;
	volatile int32_t t22 = -15;

    t22 = (((x97!=x98)%x99)+x100);

    if (t22 != 32767) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x102 = INT32_MIN;
	static int8_t x103 = -1;
	int8_t x104 = INT8_MIN;

    t23 = (((x101!=x102)%x103)+x104);

    if (t23 != -128) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x105 = -1;
	int16_t x107 = -1;
	uint64_t t24 = UINT64_MAX;

    t24 = (((x105!=x106)%x107)+x108);

    if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x109 = 138;
	int16_t x110 = INT16_MIN;
	int64_t x111 = 714456952LL;
	static uint8_t x112 = 2U;
	volatile int64_t t25 = -21803278LL;

    t25 = (((x109!=x110)%x111)+x112);

    if (t25 != 3LL) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x114 = INT8_MIN;
	int32_t t26 = 0;

    t26 = (((x113!=x114)%x115)+x116);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int8_t x118 = 2;
	uint8_t x119 = 2U;
	volatile int32_t x120 = INT32_MIN;
	volatile int32_t t27 = 2;

    t27 = (((x117!=x118)%x119)+x120);

    if (t27 != -2147483647) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x121 = -29;
	int64_t x122 = -1LL;
	int8_t x123 = INT8_MAX;
	volatile int32_t t28 = 6;

    t28 = (((x121!=x122)%x123)+x124);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static int64_t x125 = INT64_MIN;
	uint8_t x126 = UINT8_MAX;
	int64_t x127 = INT64_MIN;
	int64_t t29 = -2LL;

    t29 = (((x125!=x126)%x127)+x128);

    if (t29 != 65536LL) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x130 = 16;
	static uint8_t x131 = UINT8_MAX;
	uint32_t x132 = 159010U;
	volatile uint32_t t30 = 54042842U;

    t30 = (((x129!=x130)%x131)+x132);

    if (t30 != 159011U) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x133 = INT8_MIN;
	int64_t x134 = INT64_MIN;
	uint16_t x135 = 1U;
	volatile uint8_t x136 = UINT8_MAX;
	volatile int32_t t31 = 7695156;

    t31 = (((x133!=x134)%x135)+x136);

    if (t31 != 255) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint8_t x137 = 0U;
	uint16_t x139 = UINT16_MAX;
	uint8_t x140 = 2U;
	static volatile int32_t t32 = 2672287;

    t32 = (((x137!=x138)%x139)+x140);

    if (t32 != 3) { NG(); } else { ; }
	
}

void f33(void) {
    	static int16_t x141 = 3;
	int16_t x142 = 1933;
	int8_t x143 = -1;
	int16_t x144 = -1;
	volatile int32_t t33 = -100;

    t33 = (((x141!=x142)%x143)+x144);

    if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x145 = -1;
	int16_t x146 = INT16_MAX;
	int64_t x147 = -1906581529LL;
	int32_t x148 = -1;
	int64_t t34 = -8093782LL;

    t34 = (((x145!=x146)%x147)+x148);

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x149 = 383160155;
	volatile int16_t x150 = -1;
	static int32_t x151 = 38466;
	volatile int32_t t35 = -15;

    t35 = (((x149!=x150)%x151)+x152);

    if (t35 != 4) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x153 = INT64_MIN;
	int32_t x154 = 3;
	uint16_t x156 = UINT16_MAX;
	volatile int32_t t36 = -4;

    t36 = (((x153!=x154)%x155)+x156);

    if (t36 != 65535) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x157 = INT8_MIN;
	int32_t x158 = INT32_MIN;
	int16_t x160 = -1;
	volatile int32_t t37 = -23333;

    t37 = (((x157!=x158)%x159)+x160);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x161 = INT8_MIN;
	static uint8_t x162 = 1U;
	int32_t x163 = -722367085;
	uint32_t x164 = 1U;
	uint32_t t38 = 1077513308U;

    t38 = (((x161!=x162)%x163)+x164);

    if (t38 != 2U) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x165 = 20395U;
	static int32_t x166 = INT32_MIN;
	int32_t x167 = INT32_MIN;
	uint16_t x168 = 422U;
	int32_t t39 = 29289622;

    t39 = (((x165!=x166)%x167)+x168);

    if (t39 != 423) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x169 = 16750U;
	uint16_t x171 = UINT16_MAX;
	uint64_t x172 = 421958423577264906LLU;
	static volatile uint64_t t40 = 193878127LLU;

    t40 = (((x169!=x170)%x171)+x172);

    if (t40 != 421958423577264907LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint8_t x173 = 56U;
	uint8_t x174 = 122U;
	int32_t x175 = -1;

    t41 = (((x173!=x174)%x175)+x176);

    if (t41 != 133618573845LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x177 = 1451341U;
	volatile int64_t x180 = -79787584214LL;
	volatile int64_t t42 = 1987157783406LL;

    t42 = (((x177!=x178)%x179)+x180);

    if (t42 != -79787584213LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static int64_t x182 = -1601064462674509LL;
	int64_t x183 = -637972LL;
	int16_t x184 = INT16_MIN;
	static int64_t t43 = -4380LL;

    t43 = (((x181!=x182)%x183)+x184);

    if (t43 != -32767LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x185 = INT32_MIN;
	int16_t x186 = -185;
	volatile int8_t x187 = -1;
	int16_t x188 = -1;
	static int32_t t44 = -536;

    t44 = (((x185!=x186)%x187)+x188);

    if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x189 = INT32_MAX;
	int16_t x190 = INT16_MAX;
	volatile uint8_t x191 = UINT8_MAX;
	static int64_t x192 = INT64_MIN;
	static int64_t t45 = -50693006882LL;

    t45 = (((x189!=x190)%x191)+x192);

    if (t45 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint64_t x193 = 1019869614167131615LLU;
	int32_t x194 = INT32_MIN;
	uint64_t t46 = UINT64_MAX;

    t46 = (((x193!=x194)%x195)+x196);

    if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x197 = -1;
	uint16_t x198 = 1U;
	volatile int32_t x199 = INT32_MIN;
	int32_t x200 = 81041808;

    t47 = (((x197!=x198)%x199)+x200);

    if (t47 != 81041809) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x204 = -1LL;
	volatile int64_t t48 = -234551100612LL;

    t48 = (((x201!=x202)%x203)+x204);

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x205 = INT32_MIN;
	volatile int8_t x206 = INT8_MAX;
	int64_t x207 = -1LL;
	static uint16_t x208 = 2918U;
	volatile int64_t t49 = 548250LL;

    t49 = (((x205!=x206)%x207)+x208);

    if (t49 != 2918LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x210 = 11932U;
	int32_t x212 = INT32_MIN;

    t50 = (((x209!=x210)%x211)+x212);

    if (t50 != -2147483647) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x213 = INT16_MIN;
	static uint16_t x216 = UINT16_MAX;
	int32_t t51 = 585;

    t51 = (((x213!=x214)%x215)+x216);

    if (t51 != 65536) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x217 = 1;
	int64_t x218 = -1LL;
	int16_t x219 = 52;
	uint32_t x220 = 125087479U;
	uint32_t t52 = 27U;

    t52 = (((x217!=x218)%x219)+x220);

    if (t52 != 125087480U) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x221 = -1;
	int64_t x222 = -1LL;
	static volatile int64_t x224 = 3620385LL;
	static volatile int64_t t53 = 1062505178941517774LL;

    t53 = (((x221!=x222)%x223)+x224);

    if (t53 != 3620385LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x225 = INT64_MIN;
	static uint8_t x226 = 7U;
	static int32_t x227 = INT32_MIN;
	static volatile int16_t x228 = INT16_MAX;

    t54 = (((x225!=x226)%x227)+x228);

    if (t54 != 32768) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x229 = INT64_MAX;
	int32_t x230 = -1;
	int32_t t55 = 0;

    t55 = (((x229!=x230)%x231)+x232);

    if (t55 != 2) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x233 = INT16_MIN;
	int8_t x234 = -1;
	static int16_t x235 = -1;
	uint8_t x236 = 5U;

    t56 = (((x233!=x234)%x235)+x236);

    if (t56 != 5) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x237 = INT16_MAX;
	int64_t x238 = -233320375010LL;
	int64_t x239 = -1LL;
	int16_t x240 = 189;

    t57 = (((x237!=x238)%x239)+x240);

    if (t57 != 189LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x241 = -1;
	int16_t x242 = INT16_MIN;
	int16_t x243 = INT16_MAX;
	int16_t x244 = INT16_MIN;
	int32_t t58 = 494;

    t58 = (((x241!=x242)%x243)+x244);

    if (t58 != -32767) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x245 = INT64_MIN;
	static volatile int8_t x247 = INT8_MAX;
	volatile int32_t x248 = 1234939;
	static volatile int32_t t59 = 0;

    t59 = (((x245!=x246)%x247)+x248);

    if (t59 != 1234940) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x249 = 495U;
	int16_t x250 = -1;
	int64_t x251 = INT64_MIN;
	int64_t x252 = 0LL;

    t60 = (((x249!=x250)%x251)+x252);

    if (t60 != 1LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x253 = 771964510LLU;
	static volatile int8_t x255 = INT8_MAX;
	int64_t x256 = -2953537645LL;
	int64_t t61 = -5074997578293LL;

    t61 = (((x253!=x254)%x255)+x256);

    if (t61 != -2953537644LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile int64_t x257 = -2507LL;
	int64_t x258 = 0LL;
	static int8_t x259 = INT8_MIN;
	int8_t x260 = INT8_MIN;
	volatile int32_t t62 = 322886877;

    t62 = (((x257!=x258)%x259)+x260);

    if (t62 != -127) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x261 = INT16_MIN;
	int8_t x262 = -1;
	volatile int16_t x264 = 92;
	int32_t t63 = 123115721;

    t63 = (((x261!=x262)%x263)+x264);

    if (t63 != 92) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int64_t x266 = -1LL;
	uint16_t x267 = 1656U;
	int64_t x268 = -1LL;
	static volatile int64_t t64 = 536291774LL;

    t64 = (((x265!=x266)%x267)+x268);

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x269 = 2680552013812281LLU;
	int64_t x270 = 1619873093LL;
	int8_t x271 = -1;
	int16_t x272 = INT16_MAX;
	static volatile int32_t t65 = 13;

    t65 = (((x269!=x270)%x271)+x272);

    if (t65 != 32767) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x273 = -237313425LL;
	uint64_t x275 = UINT64_MAX;
	int8_t x276 = INT8_MIN;

    t66 = (((x273!=x274)%x275)+x276);

    if (t66 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x277 = INT16_MIN;
	static volatile int8_t x279 = -1;
	int32_t x280 = -5936;
	int32_t t67 = 61637;

    t67 = (((x277!=x278)%x279)+x280);

    if (t67 != -5936) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile int16_t x281 = INT16_MIN;
	int8_t x283 = INT8_MIN;
	int64_t x284 = INT64_MIN;
	int64_t t68 = 52892528809434LL;

    t68 = (((x281!=x282)%x283)+x284);

    if (t68 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint8_t x285 = 0U;
	int64_t x286 = INT64_MAX;
	int32_t x287 = -1;
	uint64_t x288 = 989643843358LLU;

    t69 = (((x285!=x286)%x287)+x288);

    if (t69 != 989643843358LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x289 = INT32_MIN;
	static int64_t x290 = INT64_MAX;
	static volatile uint8_t x292 = 3U;
	int32_t t70 = -2;

    t70 = (((x289!=x290)%x291)+x292);

    if (t70 != 4) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint64_t x294 = 1662685741LLU;
	static int64_t x295 = -125836992368LL;
	int32_t x296 = INT32_MIN;

    t71 = (((x293!=x294)%x295)+x296);

    if (t71 != -2147483647LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x298 = INT64_MIN;
	int16_t x300 = INT16_MAX;
	int32_t t72 = 146217;

    t72 = (((x297!=x298)%x299)+x300);

    if (t72 != 32768) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x301 = 105U;
	volatile int8_t x302 = INT8_MAX;
	static int32_t x303 = INT32_MIN;
	int8_t x304 = -1;
	volatile int32_t t73 = -1616530;

    t73 = (((x301!=x302)%x303)+x304);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x306 = INT64_MAX;
	int16_t x307 = INT16_MIN;
	int16_t x308 = -240;
	int32_t t74 = -167761;

    t74 = (((x305!=x306)%x307)+x308);

    if (t74 != -239) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x314 = UINT64_MAX;
	uint32_t x315 = UINT32_MAX;
	uint16_t x316 = 215U;
	uint32_t t75 = 102U;

    t75 = (((x313!=x314)%x315)+x316);

    if (t75 != 216U) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int8_t x317 = INT8_MIN;
	static int64_t x318 = 2576874474619830508LL;
	static int8_t x319 = 3;
	static int32_t t76 = 2199;

    t76 = (((x317!=x318)%x319)+x320);

    if (t76 != -127) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x321 = 1U;
	volatile int64_t x322 = -9377544889096360LL;
	volatile int16_t x323 = INT16_MAX;
	static int16_t x324 = -1;
	static int32_t t77 = -3732;

    t77 = (((x321!=x322)%x323)+x324);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static int64_t x327 = INT64_MAX;

    t78 = (((x325!=x326)%x327)+x328);

    if (t78 != 255LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x330 = -1;
	int32_t x331 = INT32_MAX;
	int8_t x332 = INT8_MAX;
	static int32_t t79 = 1318;

    t79 = (((x329!=x330)%x331)+x332);

    if (t79 != 128) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x333 = -47;
	volatile int16_t x335 = INT16_MAX;
	uint32_t x336 = 854563U;

    t80 = (((x333!=x334)%x335)+x336);

    if (t80 != 854564U) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile uint16_t x337 = UINT16_MAX;
	int8_t x338 = -1;
	static int8_t x339 = INT8_MIN;
	int8_t x340 = 5;
	volatile int32_t t81 = -698;

    t81 = (((x337!=x338)%x339)+x340);

    if (t81 != 6) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x342 = 249160962137984726LLU;
	int32_t x343 = INT32_MIN;
	uint32_t x344 = 7U;
	uint32_t t82 = 292509U;

    t82 = (((x341!=x342)%x343)+x344);

    if (t82 != 8U) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int32_t x346 = -7987750;
	static uint64_t x347 = UINT64_MAX;
	uint32_t x348 = UINT32_MAX;

    t83 = (((x345!=x346)%x347)+x348);

    if (t83 != 4294967296LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x349 = INT8_MAX;
	int16_t x350 = -37;
	int64_t x351 = INT64_MIN;
	int32_t x352 = 112;
	int64_t t84 = 460380851529LL;

    t84 = (((x349!=x350)%x351)+x352);

    if (t84 != 113LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x353 = 20;
	static volatile int8_t x356 = INT8_MIN;
	int32_t t85 = -6571;

    t85 = (((x353!=x354)%x355)+x356);

    if (t85 != -127) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int8_t x357 = -1;
	int32_t x359 = INT32_MIN;
	int32_t x360 = INT32_MIN;
	volatile int32_t t86 = 5012981;

    t86 = (((x357!=x358)%x359)+x360);

    if (t86 != -2147483647) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x361 = -1;
	int16_t x362 = -1;
	volatile int8_t x364 = INT8_MIN;
	uint32_t t87 = 3134231U;

    t87 = (((x361!=x362)%x363)+x364);

    if (t87 != 4294967168U) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x365 = -1LL;
	static uint32_t x366 = UINT32_MAX;
	int32_t x367 = INT32_MIN;
	int8_t x368 = INT8_MIN;
	volatile int32_t t88 = -302603;

    t88 = (((x365!=x366)%x367)+x368);

    if (t88 != -127) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile uint16_t x369 = UINT16_MAX;
	volatile uint8_t x370 = 6U;
	static volatile uint32_t x372 = 17763U;
	volatile uint32_t t89 = 73968790U;

    t89 = (((x369!=x370)%x371)+x372);

    if (t89 != 17764U) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile int32_t x373 = -1;
	static int8_t x374 = INT8_MIN;
	volatile int64_t x375 = INT64_MIN;
	int64_t x376 = 12677008103LL;
	int64_t t90 = 38LL;

    t90 = (((x373!=x374)%x375)+x376);

    if (t90 != 12677008104LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x377 = UINT64_MAX;
	int8_t x379 = 10;
	volatile int64_t t91 = 129760103LL;

    t91 = (((x377!=x378)%x379)+x380);

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x381 = INT16_MIN;
	static int8_t x383 = INT8_MIN;

    t92 = (((x381!=x382)%x383)+x384);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x385 = -1;
	uint8_t x386 = 1U;
	static volatile uint64_t x387 = 2935711571LLU;
	uint64_t x388 = 637631644086913611LLU;
	static volatile uint64_t t93 = 256528928LLU;

    t93 = (((x385!=x386)%x387)+x388);

    if (t93 != 637631644086913612LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int16_t x389 = 2;
	int64_t x390 = 46785474LL;
	int64_t x391 = INT64_MIN;
	volatile uint16_t x392 = UINT16_MAX;
	int64_t t94 = 115LL;

    t94 = (((x389!=x390)%x391)+x392);

    if (t94 != 65536LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x393 = INT16_MIN;
	int64_t x394 = INT64_MIN;
	int16_t x395 = INT16_MIN;
	uint8_t x396 = 71U;

    t95 = (((x393!=x394)%x395)+x396);

    if (t95 != 72) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x397 = INT64_MAX;
	int8_t x399 = INT8_MAX;
	int16_t x400 = INT16_MIN;
	volatile int32_t t96 = 0;

    t96 = (((x397!=x398)%x399)+x400);

    if (t96 != -32767) { NG(); } else { ; }
	
}

void f97(void) {
    	static int8_t x402 = INT8_MAX;
	uint8_t x403 = 13U;
	uint16_t x404 = 26U;

    t97 = (((x401!=x402)%x403)+x404);

    if (t97 != 27) { NG(); } else { ; }
	
}

void f98(void) {
    	static int32_t x405 = INT32_MIN;
	uint8_t x407 = UINT8_MAX;
	uint64_t x408 = UINT64_MAX;
	volatile uint64_t t98 = 1079557318LLU;

    t98 = (((x405!=x406)%x407)+x408);

    if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x410 = -1LL;
	volatile uint64_t x411 = 63944LLU;
	int32_t x412 = -1;

    t99 = (((x409!=x410)%x411)+x412);

    if (t99 != 0LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x414 = INT32_MIN;
	uint32_t x416 = 478481638U;
	volatile int64_t t100 = 205200539297470LL;

    t100 = (((x413!=x414)%x415)+x416);

    if (t100 != 478481639LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int32_t x419 = -730658;
	uint16_t x420 = 4012U;
	volatile int32_t t101 = 95;

    t101 = (((x417!=x418)%x419)+x420);

    if (t101 != 4013) { NG(); } else { ; }
	
}

void f102(void) {
    	static int8_t x422 = INT8_MAX;
	int8_t x423 = 1;
	int8_t x424 = INT8_MAX;

    t102 = (((x421!=x422)%x423)+x424);

    if (t102 != 127) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x425 = 382025LL;
	int8_t x426 = INT8_MAX;
	uint64_t x427 = 1406042759222501LLU;
	int16_t x428 = -1;
	uint64_t t103 = 1448583926082LLU;

    t103 = (((x425!=x426)%x427)+x428);

    if (t103 != 0LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	static int64_t x429 = INT64_MIN;
	volatile int8_t x430 = -1;
	int32_t x431 = INT32_MAX;
	static int16_t x432 = -168;
	static int32_t t104 = 0;

    t104 = (((x429!=x430)%x431)+x432);

    if (t104 != -167) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x433 = 54U;
	static volatile int32_t x434 = -1;
	int32_t x436 = INT32_MAX;
	static int32_t t105 = INT32_MAX;

    t105 = (((x433!=x434)%x435)+x436);

    if (t105 != INT32_MAX) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x437 = 62902818LLU;
	int32_t x438 = -1;
	uint32_t x439 = 2U;
	static volatile uint32_t x440 = UINT32_MAX;

    t106 = (((x437!=x438)%x439)+x440);

    if (t106 != 0U) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x441 = INT16_MAX;
	int64_t x444 = INT64_MIN;

    t107 = (((x441!=x442)%x443)+x444);

    if (t107 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f108(void) {
    	static int64_t x445 = -789003LL;
	uint16_t x446 = 122U;
	volatile int32_t x448 = INT32_MIN;
	volatile int32_t t108 = INT32_MIN;

    t108 = (((x445!=x446)%x447)+x448);

    if (t108 != INT32_MIN) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x449 = INT64_MIN;
	int32_t x450 = INT32_MIN;
	int16_t x452 = INT16_MIN;

    t109 = (((x449!=x450)%x451)+x452);

    if (t109 != -32767) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile int64_t x454 = INT64_MIN;
	int16_t x456 = -253;

    t110 = (((x453!=x454)%x455)+x456);

    if (t110 != -252) { NG(); } else { ; }
	
}

void f111(void) {
    	static int16_t x458 = 68;
	static int32_t x460 = INT32_MIN;
	int32_t t111 = 48721889;

    t111 = (((x457!=x458)%x459)+x460);

    if (t111 != -2147483647) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x461 = INT32_MIN;
	uint8_t x462 = 2U;
	int16_t x463 = -1;
	int16_t x464 = INT16_MIN;
	static volatile int32_t t112 = 29990683;

    t112 = (((x461!=x462)%x463)+x464);

    if (t112 != -32768) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x465 = 3282431229215661LLU;
	uint32_t x467 = 1U;
	int32_t x468 = INT32_MAX;
	uint32_t t113 = 292U;

    t113 = (((x465!=x466)%x467)+x468);

    if (t113 != 2147483647U) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x469 = INT32_MIN;
	uint64_t x470 = UINT64_MAX;
	int64_t x471 = INT64_MIN;
	uint64_t x472 = 21LLU;
	static uint64_t t114 = 280269942558503980LLU;

    t114 = (((x469!=x470)%x471)+x472);

    if (t114 != 22LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x473 = -42793665383030637LL;
	int64_t x474 = -1LL;
	uint64_t x475 = UINT64_MAX;
	static uint32_t x476 = 35889270U;
	uint64_t t115 = 19577434089LLU;

    t115 = (((x473!=x474)%x475)+x476);

    if (t115 != 35889271LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x477 = 24U;
	uint8_t x479 = UINT8_MAX;
	uint64_t x480 = 4969LLU;
	static uint64_t t116 = 23566329086604702LLU;

    t116 = (((x477!=x478)%x479)+x480);

    if (t116 != 4970LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x481 = 957918367627LLU;
	int64_t x482 = INT64_MAX;
	static volatile int16_t x483 = INT16_MAX;
	int8_t x484 = INT8_MIN;
	volatile int32_t t117 = -1581;

    t117 = (((x481!=x482)%x483)+x484);

    if (t117 != -127) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x485 = INT8_MAX;
	uint16_t x486 = UINT16_MAX;
	int16_t x487 = 7;
	volatile int32_t x488 = INT32_MIN;
	volatile int32_t t118 = -8701;

    t118 = (((x485!=x486)%x487)+x488);

    if (t118 != -2147483647) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x490 = INT32_MIN;
	int64_t t119 = 21627128566372LL;

    t119 = (((x489!=x490)%x491)+x492);

    if (t119 != -2147483648LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x493 = INT32_MIN;
	int16_t x494 = -1;
	int32_t x495 = INT32_MIN;
	uint8_t x496 = UINT8_MAX;
	int32_t t120 = -20836;

    t120 = (((x493!=x494)%x495)+x496);

    if (t120 != 256) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x497 = -18927LL;
	volatile int64_t x498 = 303730008767946708LL;
	int16_t x499 = INT16_MIN;
	uint32_t x500 = UINT32_MAX;
	uint32_t t121 = 1613U;

    t121 = (((x497!=x498)%x499)+x500);

    if (t121 != 0U) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x501 = INT64_MAX;
	int8_t x502 = -41;
	volatile uint16_t x503 = UINT16_MAX;
	int16_t x504 = INT16_MIN;

    t122 = (((x501!=x502)%x503)+x504);

    if (t122 != -32767) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x505 = INT32_MIN;
	uint32_t x506 = 32943839U;
	uint16_t x507 = UINT16_MAX;
	int16_t x508 = INT16_MIN;
	volatile int32_t t123 = 259;

    t123 = (((x505!=x506)%x507)+x508);

    if (t123 != -32767) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x509 = 5460U;
	volatile int32_t x510 = -13066120;
	uint8_t x511 = UINT8_MAX;
	volatile int16_t x512 = INT16_MAX;
	int32_t t124 = 135763;

    t124 = (((x509!=x510)%x511)+x512);

    if (t124 != 32768) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x513 = -1LL;
	static uint8_t x514 = UINT8_MAX;
	uint16_t x516 = 179U;
	int64_t t125 = 1239553419035616LL;

    t125 = (((x513!=x514)%x515)+x516);

    if (t125 != 180LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x524 = INT16_MAX;
	volatile int32_t t126 = -327;

    t126 = (((x521!=x522)%x523)+x524);

    if (t126 != 32768) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x525 = 2U;
	volatile uint16_t x526 = 133U;
	int32_t x527 = INT32_MIN;
	volatile int64_t t127 = -37879LL;

    t127 = (((x525!=x526)%x527)+x528);

    if (t127 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x529 = -2;
	static int32_t x531 = 21;
	static uint64_t x532 = UINT64_MAX;
	uint64_t t128 = 700LLU;

    t128 = (((x529!=x530)%x531)+x532);

    if (t128 != 0LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int16_t x534 = -5;
	int8_t x535 = INT8_MAX;
	uint16_t x536 = 1112U;
	int32_t t129 = -19018646;

    t129 = (((x533!=x534)%x535)+x536);

    if (t129 != 1113) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint8_t x537 = 11U;
	volatile int32_t x539 = -14;
	static volatile int32_t t130 = -20;

    t130 = (((x537!=x538)%x539)+x540);

    if (t130 != -1567287) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x541 = UINT64_MAX;
	volatile int64_t x543 = -1LL;
	int8_t x544 = -1;
	volatile int64_t t131 = -214289902201695LL;

    t131 = (((x541!=x542)%x543)+x544);

    if (t131 != -1LL) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x545 = INT8_MIN;
	int16_t x546 = INT16_MAX;
	uint8_t x547 = 1U;
	int16_t x548 = INT16_MIN;
	static int32_t t132 = 2080;

    t132 = (((x545!=x546)%x547)+x548);

    if (t132 != -32768) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x551 = -1;
	int32_t x552 = 222772;
	int32_t t133 = 1794;

    t133 = (((x549!=x550)%x551)+x552);

    if (t133 != 222772) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int8_t x554 = 7;
	static volatile int8_t x555 = INT8_MIN;
	int16_t x556 = INT16_MAX;

    t134 = (((x553!=x554)%x555)+x556);

    if (t134 != 32768) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x557 = 56319628LLU;
	static int8_t x558 = 21;
	static volatile int64_t x559 = 3901230572282LL;

    t135 = (((x557!=x558)%x559)+x560);

    if (t135 != 254981486458100528LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x561 = 52301U;
	volatile uint8_t x562 = 0U;
	uint32_t x563 = UINT32_MAX;
	volatile int32_t x564 = INT32_MIN;
	volatile uint32_t t136 = 4114586U;

    t136 = (((x561!=x562)%x563)+x564);

    if (t136 != 2147483649U) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x565 = -1;
	static int16_t x566 = 2878;
	int64_t x567 = -57095084LL;
	uint16_t x568 = 15U;
	int64_t t137 = 155273167330482905LL;

    t137 = (((x565!=x566)%x567)+x568);

    if (t137 != 16LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x570 = UINT64_MAX;
	int32_t x571 = -1;
	int32_t t138 = 92;

    t138 = (((x569!=x570)%x571)+x572);

    if (t138 != -32768) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x573 = 1282834U;
	static int16_t x574 = INT16_MIN;
	static uint8_t x575 = UINT8_MAX;
	static uint64_t x576 = 6041482960536610476LLU;
	volatile uint64_t t139 = 15381360LLU;

    t139 = (((x573!=x574)%x575)+x576);

    if (t139 != 6041482960536610477LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	static int8_t x577 = -1;
	uint64_t x578 = UINT64_MAX;
	int64_t x580 = INT64_MIN;
	int64_t t140 = INT64_MIN;

    t140 = (((x577!=x578)%x579)+x580);

    if (t140 != INT64_MIN) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x581 = UINT16_MAX;
	volatile int64_t x582 = INT64_MAX;
	uint8_t x583 = 6U;
	volatile int8_t x584 = 6;

    t141 = (((x581!=x582)%x583)+x584);

    if (t141 != 7) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x585 = -1;
	int8_t x586 = 3;
	int64_t x587 = 116684708LL;
	int16_t x588 = -1;
	int64_t t142 = 155886105930428LL;

    t142 = (((x585!=x586)%x587)+x588);

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x589 = 19679U;
	int32_t x590 = -1;
	int8_t x592 = -1;
	static volatile int32_t t143 = -58799910;

    t143 = (((x589!=x590)%x591)+x592);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x593 = UINT16_MAX;
	volatile uint8_t x594 = 75U;
	int32_t x595 = -1;
	int8_t x596 = -1;
	volatile int32_t t144 = 200688;

    t144 = (((x593!=x594)%x595)+x596);

    if (t144 != -1) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x597 = INT64_MAX;
	uint64_t x598 = 250LLU;
	static int64_t x599 = 1007963503LL;
	int64_t t145 = 0LL;

    t145 = (((x597!=x598)%x599)+x600);

    if (t145 != 4294967296LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x601 = INT8_MIN;
	volatile int16_t x602 = -1;
	static uint8_t x603 = 89U;
	uint32_t x604 = 707U;
	uint32_t t146 = 382460403U;

    t146 = (((x601!=x602)%x603)+x604);

    if (t146 != 708U) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x605 = -1;
	int32_t x607 = 123147;
	static int32_t t147 = 166001;

    t147 = (((x605!=x606)%x607)+x608);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x609 = INT32_MIN;
	int16_t x610 = -1;
	volatile int16_t x611 = INT16_MIN;
	int64_t x612 = 56825LL;
	int64_t t148 = -488878LL;

    t148 = (((x609!=x610)%x611)+x612);

    if (t148 != 56826LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x615 = UINT64_MAX;
	static uint64_t x616 = UINT64_MAX;

    t149 = (((x613!=x614)%x615)+x616);

    if (t149 != UINT64_MAX) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x617 = -1;
	int8_t x618 = 29;
	static volatile uint64_t x619 = UINT64_MAX;
	volatile int64_t x620 = INT64_MAX;
	volatile uint64_t t150 = 3LLU;

    t150 = (((x617!=x618)%x619)+x620);

    if (t150 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x621 = -242834068;
	uint16_t x622 = 3495U;
	volatile uint8_t x623 = UINT8_MAX;
	int8_t x624 = INT8_MIN;

    t151 = (((x621!=x622)%x623)+x624);

    if (t151 != -127) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x625 = UINT64_MAX;
	uint64_t x626 = 6448LLU;
	uint8_t x627 = UINT8_MAX;
	static uint64_t x628 = 7545LLU;
	static volatile uint64_t t152 = 1178397LLU;

    t152 = (((x625!=x626)%x627)+x628);

    if (t152 != 7546LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x630 = UINT8_MAX;
	static int32_t x631 = -1;
	static int32_t t153 = -12722038;

    t153 = (((x629!=x630)%x631)+x632);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x633 = 7;
	static volatile int32_t x634 = INT32_MIN;
	volatile uint8_t x636 = UINT8_MAX;
	static int32_t t154 = -1;

    t154 = (((x633!=x634)%x635)+x636);

    if (t154 != 256) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x637 = -1;
	int16_t x638 = INT16_MIN;
	uint16_t x640 = UINT16_MAX;
	volatile int32_t t155 = -28;

    t155 = (((x637!=x638)%x639)+x640);

    if (t155 != 65536) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile int8_t x645 = -8;
	static int32_t x647 = 1;
	int64_t x648 = -427486LL;
	static int64_t t156 = 6LL;

    t156 = (((x645!=x646)%x647)+x648);

    if (t156 != -427486LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x649 = -13;
	int32_t x651 = INT32_MIN;
	uint16_t x652 = 5U;
	volatile int32_t t157 = 1;

    t157 = (((x649!=x650)%x651)+x652);

    if (t157 != 6) { NG(); } else { ; }
	
}

void f158(void) {
    	static int32_t x653 = INT32_MIN;
	static int16_t x654 = -237;
	int16_t x655 = INT16_MIN;
	volatile int16_t x656 = INT16_MAX;

    t158 = (((x653!=x654)%x655)+x656);

    if (t158 != 32768) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x658 = 0U;
	int8_t x659 = INT8_MIN;
	int32_t t159 = -148867403;

    t159 = (((x657!=x658)%x659)+x660);

    if (t159 != 10) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x661 = 1596064522382181LL;
	volatile uint64_t x662 = 209LLU;
	volatile int64_t x663 = INT64_MAX;

    t160 = (((x661!=x662)%x663)+x664);

    if (t160 != -127LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x665 = INT8_MAX;
	int16_t x666 = INT16_MIN;
	volatile int64_t x667 = INT64_MIN;
	int64_t x668 = INT64_MIN;

    t161 = (((x665!=x666)%x667)+x668);

    if (t161 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x673 = 1U;
	uint64_t x674 = 20444265879899LLU;
	static uint32_t x675 = 15U;
	int8_t x676 = -43;
	volatile uint32_t t162 = 10116081U;

    t162 = (((x673!=x674)%x675)+x676);

    if (t162 != 4294967254U) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int16_t x677 = INT16_MIN;
	uint64_t x678 = 4563504249976635284LLU;
	int64_t x679 = 5315606167LL;
	volatile uint32_t x680 = 1999U;
	int64_t t163 = -1047970540LL;

    t163 = (((x677!=x678)%x679)+x680);

    if (t163 != 2000LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint32_t x681 = UINT32_MAX;
	int16_t x683 = -1;
	static volatile uint32_t t164 = 346404118U;

    t164 = (((x681!=x682)%x683)+x684);

    if (t164 != 146333218U) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x689 = -2;
	uint64_t x690 = 45624480374205596LLU;
	int32_t x691 = INT32_MIN;
	int8_t x692 = INT8_MIN;
	static volatile int32_t t165 = 121369610;

    t165 = (((x689!=x690)%x691)+x692);

    if (t165 != -127) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x693 = INT16_MIN;
	static int16_t x696 = -1;
	volatile int32_t t166 = 10434;

    t166 = (((x693!=x694)%x695)+x696);

    if (t166 != -1) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x697 = 33;
	int8_t x698 = INT8_MIN;
	uint8_t x699 = 31U;
	int8_t x700 = -1;

    t167 = (((x697!=x698)%x699)+x700);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x703 = INT32_MAX;
	volatile uint64_t x704 = UINT64_MAX;
	uint64_t t168 = 40LLU;

    t168 = (((x701!=x702)%x703)+x704);

    if (t168 != 0LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x706 = INT16_MAX;
	volatile int8_t x707 = INT8_MIN;
	int32_t x708 = INT32_MIN;
	int32_t t169 = 112;

    t169 = (((x705!=x706)%x707)+x708);

    if (t169 != -2147483647) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int16_t x709 = -1420;
	static uint8_t x710 = 1U;
	static int8_t x711 = 39;
	int8_t x712 = INT8_MIN;
	int32_t t170 = 831839727;

    t170 = (((x709!=x710)%x711)+x712);

    if (t170 != -127) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint16_t x713 = 157U;
	int8_t x714 = INT8_MIN;
	int8_t x716 = INT8_MIN;
	int32_t t171 = 1964;

    t171 = (((x713!=x714)%x715)+x716);

    if (t171 != -127) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x718 = INT8_MIN;
	int32_t x719 = -1;
	int32_t x720 = -1;
	int32_t t172 = 1;

    t172 = (((x717!=x718)%x719)+x720);

    if (t172 != -1) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile int8_t x722 = 4;
	static uint8_t x723 = 9U;
	int64_t x724 = -13LL;

    t173 = (((x721!=x722)%x723)+x724);

    if (t173 != -12LL) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x726 = -1;
	int8_t x727 = -1;
	int16_t x728 = INT16_MAX;
	int32_t t174 = 6;

    t174 = (((x725!=x726)%x727)+x728);

    if (t174 != 32767) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int64_t x730 = 22772LL;
	volatile int32_t t175 = -249899;

    t175 = (((x729!=x730)%x731)+x732);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint16_t x733 = UINT16_MAX;
	static int16_t x734 = INT16_MIN;
	int32_t x735 = INT32_MIN;
	uint8_t x736 = 2U;
	volatile int32_t t176 = 4219268;

    t176 = (((x733!=x734)%x735)+x736);

    if (t176 != 3) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint64_t x737 = 7865840722450649171LLU;
	int64_t x738 = 1LL;
	uint8_t x739 = 57U;
	volatile int8_t x740 = INT8_MAX;

    t177 = (((x737!=x738)%x739)+x740);

    if (t177 != 128) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x743 = -5986282;
	int32_t t178 = 183;

    t178 = (((x741!=x742)%x743)+x744);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x745 = -1LL;
	int64_t x746 = INT64_MAX;
	int32_t x747 = 4752;
	int8_t x748 = -13;
	int32_t t179 = -316628137;

    t179 = (((x745!=x746)%x747)+x748);

    if (t179 != -12) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x753 = 321511967481050LLU;
	int64_t x754 = INT64_MAX;
	static volatile uint64_t t180 = 463LLU;

    t180 = (((x753!=x754)%x755)+x756);

    if (t180 != 0LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x759 = INT32_MAX;
	int16_t x760 = 22;

    t181 = (((x757!=x758)%x759)+x760);

    if (t181 != 23) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint32_t x761 = 54U;
	int32_t x762 = INT32_MAX;
	int32_t x763 = INT32_MIN;
	uint8_t x764 = 0U;
	int32_t t182 = -1;

    t182 = (((x761!=x762)%x763)+x764);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x765 = 2034332;
	int16_t x766 = -1;
	int64_t t183 = -1983162341LL;

    t183 = (((x765!=x766)%x767)+x768);

    if (t183 != -13401555611120LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x769 = INT16_MIN;
	int16_t x770 = INT16_MIN;
	volatile uint32_t x771 = 3555051U;
	volatile uint32_t t184 = UINT32_MAX;

    t184 = (((x769!=x770)%x771)+x772);

    if (t184 != UINT32_MAX) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x774 = 13;
	int16_t x775 = INT16_MIN;
	int32_t x776 = INT32_MIN;
	static volatile int32_t t185 = -17118573;

    t185 = (((x773!=x774)%x775)+x776);

    if (t185 != -2147483647) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x777 = -1;
	volatile uint32_t x778 = 2269927U;
	uint32_t x780 = 11576U;
	static volatile int64_t t186 = -631695992062LL;

    t186 = (((x777!=x778)%x779)+x780);

    if (t186 != 11577LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x785 = -1;
	uint32_t x786 = 406305U;
	static int32_t x788 = INT32_MIN;
	int64_t t187 = -363LL;

    t187 = (((x785!=x786)%x787)+x788);

    if (t187 != -2147483647LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x791 = -1;
	int32_t t188 = -245905348;

    t188 = (((x789!=x790)%x791)+x792);

    if (t188 != -1) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x793 = -1695329;
	uint16_t x794 = UINT16_MAX;
	int16_t x796 = INT16_MAX;
	static int32_t t189 = 35;

    t189 = (((x793!=x794)%x795)+x796);

    if (t189 != 32768) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint8_t x797 = 31U;
	uint8_t x798 = 6U;
	volatile int8_t x799 = INT8_MIN;
	int32_t t190 = 1376034;

    t190 = (((x797!=x798)%x799)+x800);

    if (t190 != 32768) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x801 = 0;
	int8_t x802 = -1;
	int16_t x803 = INT16_MIN;
	static volatile uint64_t x804 = UINT64_MAX;
	volatile uint64_t t191 = 2951647377855866785LLU;

    t191 = (((x801!=x802)%x803)+x804);

    if (t191 != 0LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x805 = INT8_MIN;
	int64_t x806 = -25397588766912383LL;
	int8_t x808 = INT8_MAX;
	static volatile int64_t t192 = -22026LL;

    t192 = (((x805!=x806)%x807)+x808);

    if (t192 != 128LL) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int16_t x817 = INT16_MIN;
	static int16_t x818 = -1;
	static int8_t x819 = INT8_MIN;
	static int8_t x820 = INT8_MAX;
	int32_t t193 = 511699370;

    t193 = (((x817!=x818)%x819)+x820);

    if (t193 != 128) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int32_t x821 = INT32_MAX;
	int32_t x822 = -8235225;
	int32_t x823 = -1;

    t194 = (((x821!=x822)%x823)+x824);

    if (t194 != 118) { NG(); } else { ; }
	
}

void f195(void) {
    	static int8_t x826 = INT8_MIN;
	static int16_t x828 = -1;
	volatile int32_t t195 = -1;

    t195 = (((x825!=x826)%x827)+x828);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static int64_t x829 = 22LL;
	int32_t x830 = -1;
	int32_t x831 = -1;
	static int16_t x832 = INT16_MIN;
	int32_t t196 = 5217080;

    t196 = (((x829!=x830)%x831)+x832);

    if (t196 != -32768) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x833 = 12573193;
	static uint16_t x834 = 0U;
	volatile int16_t x835 = -1;
	int16_t x836 = -1983;
	int32_t t197 = -432553;

    t197 = (((x833!=x834)%x835)+x836);

    if (t197 != -1983) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x838 = INT32_MAX;
	int16_t x839 = INT16_MIN;
	static uint32_t x840 = UINT32_MAX;
	volatile uint32_t t198 = 176U;

    t198 = (((x837!=x838)%x839)+x840);

    if (t198 != 0U) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x841 = 17975U;
	static int8_t x842 = -21;
	uint32_t x844 = 713U;
	uint32_t t199 = 1557121U;

    t199 = (((x841!=x842)%x843)+x844);

    if (t199 != 714U) { NG(); } else { ; }
	
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

