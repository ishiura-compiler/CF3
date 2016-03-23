
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

int8_t x9 = -1;
volatile int16_t x12 = INT16_MAX;
int16_t x17 = INT16_MIN;
int32_t x25 = INT32_MIN;
int64_t x39 = INT64_MAX;
volatile int32_t x47 = INT32_MAX;
static volatile int16_t x48 = INT16_MIN;
static int32_t t11 = -136541617;
static int8_t x50 = 0;
static int8_t x51 = 3;
int32_t t12 = 62;
int8_t x54 = INT8_MIN;
static int8_t x55 = -1;
static int32_t x66 = 0;
volatile int32_t t18 = 142482;
int16_t x79 = INT16_MAX;
volatile int32_t t20 = 3705;
int64_t x92 = INT64_MAX;
volatile int64_t t22 = INT64_MAX;
uint32_t x93 = UINT32_MAX;
int32_t x96 = INT32_MIN;
int8_t x98 = INT8_MIN;
static int16_t x102 = INT16_MIN;
int16_t x108 = -1;
int32_t x111 = INT32_MAX;
volatile int32_t x112 = -1;
uint8_t x113 = UINT8_MAX;
volatile int32_t x114 = 1019;
int16_t x117 = 16131;
int16_t x121 = INT16_MAX;
volatile int64_t x126 = INT64_MIN;
static int8_t x127 = INT8_MAX;
uint8_t x128 = 6U;
static uint8_t x130 = UINT8_MAX;
volatile uint64_t x134 = UINT64_MAX;
uint16_t x137 = 5442U;
static int16_t x139 = INT16_MIN;
int64_t x140 = -20347756230948LL;
static int16_t x142 = -237;
static int8_t x143 = INT8_MIN;
int32_t t35 = -236810;
int8_t x153 = -24;
int32_t x164 = INT32_MAX;
int16_t x170 = -1;
int8_t x173 = -1;
static int8_t x174 = INT8_MAX;
int16_t x176 = INT16_MAX;
uint32_t x177 = 49U;
static volatile uint16_t x183 = 13348U;
int16_t x188 = INT16_MIN;
static int8_t x190 = INT8_MAX;
volatile int32_t t47 = INT32_MIN;
volatile int16_t x193 = -1;
uint32_t x197 = 691849U;
volatile uint64_t x198 = 261699140917210504LLU;
int32_t x204 = 462;
uint64_t x209 = UINT64_MAX;
uint64_t x220 = 1LLU;
uint8_t x226 = 0U;
int8_t x235 = INT8_MIN;
uint64_t x240 = 2306124588243LLU;
volatile int16_t x242 = -1;
volatile int32_t t61 = 1229989;
uint64_t x250 = 1704581251LLU;
volatile int32_t x251 = -2;
volatile int32_t t62 = 20769958;
int32_t x258 = INT32_MIN;
uint8_t x259 = UINT8_MAX;
int16_t x269 = INT16_MIN;
uint8_t x270 = UINT8_MAX;
int16_t x272 = INT16_MAX;
int64_t x276 = INT64_MIN;
static int32_t x277 = -1;
int8_t x278 = INT8_MAX;
volatile uint64_t t69 = 1171252198993280LLU;
static int8_t x283 = -2;
int8_t x292 = INT8_MAX;
uint32_t x294 = 204361U;
volatile int64_t x295 = INT64_MIN;
static uint64_t x296 = 2113146389254915283LLU;
int64_t x299 = -1LL;
int8_t x312 = -1;
int8_t x317 = INT8_MAX;
uint32_t x323 = 14355488U;
int16_t x334 = INT16_MIN;
static int64_t x338 = -1LL;
int32_t t85 = 0;
int16_t x345 = INT16_MAX;
int8_t x346 = INT8_MIN;
int8_t x351 = INT8_MIN;
volatile int32_t x352 = INT32_MIN;
static volatile int32_t x361 = INT32_MAX;
static uint64_t t93 = 36499741LLU;
static int32_t x379 = INT32_MIN;
static int16_t x382 = INT16_MIN;
int64_t x384 = -1LL;
uint64_t x399 = UINT64_MAX;
uint16_t x411 = UINT16_MAX;
int32_t t102 = 468;
static int32_t x413 = INT32_MAX;
int32_t x416 = 3832;
volatile uint64_t t103 = 273LLU;
uint16_t x426 = UINT16_MAX;
volatile int32_t t106 = -1027446506;
uint64_t x437 = 8779533085080LLU;
static int64_t x439 = -3LL;
volatile uint16_t x443 = 3334U;
static int32_t t110 = 102;
int8_t x445 = INT8_MIN;
int64_t x450 = INT64_MAX;
int64_t x456 = 1LL;
uint64_t x464 = 31LLU;
volatile uint64_t t115 = 57471875376897LLU;
uint16_t x466 = 3545U;
volatile int64_t x467 = INT64_MAX;
static int64_t x469 = INT64_MIN;
uint32_t t117 = UINT32_MAX;
uint64_t x473 = 457723LLU;
volatile uint32_t t118 = 5552547U;
static int32_t x478 = -1;
volatile int32_t x481 = -1;
static uint32_t x494 = UINT32_MAX;
static int8_t x504 = -1;
int64_t x505 = 138668850486929LL;
int16_t x507 = 0;
int32_t x509 = INT32_MIN;
int16_t x512 = INT16_MIN;
int64_t t127 = 318909973879641LL;
volatile int32_t x515 = 1;
uint64_t x524 = 20188297677LLU;
int64_t x527 = INT64_MAX;
int32_t x529 = 20302;
static uint8_t x531 = 3U;
volatile int32_t x537 = INT32_MIN;
int32_t t134 = INT32_MAX;
int32_t x541 = INT32_MIN;
int8_t x543 = INT8_MIN;
static uint16_t x545 = UINT16_MAX;
int32_t x547 = 10623949;
int8_t x549 = 1;
uint16_t x550 = 9593U;
int16_t x551 = INT16_MAX;
int16_t x555 = -1;
volatile int32_t t138 = 146;
int32_t t143 = -202473;
static uint64_t x583 = UINT64_MAX;
volatile int8_t x590 = -16;
uint32_t x600 = 175810U;
uint32_t t149 = UINT32_MAX;
int64_t x602 = INT64_MIN;
static int16_t x606 = INT16_MIN;
int8_t x611 = -1;
volatile int32_t t152 = 1;
int64_t x613 = -1LL;
int16_t x618 = -7;
uint8_t x624 = UINT8_MAX;
static volatile int64_t t155 = -1LL;
int32_t x627 = INT32_MAX;
int16_t x628 = -266;
int16_t x631 = 89;
uint32_t t161 = 10U;
int64_t x650 = INT64_MIN;
int16_t x661 = INT16_MAX;
static int32_t x663 = INT32_MIN;
int8_t x674 = INT8_MIN;
uint32_t x676 = 1U;
static int8_t x680 = -1;
volatile int8_t x683 = INT8_MIN;
int64_t t170 = -131745977LL;
static int64_t t171 = -1LL;
int8_t x695 = INT8_MIN;
int8_t x696 = INT8_MAX;
int32_t x699 = -1;
volatile int32_t t174 = 1058769133;
volatile uint8_t x705 = 0U;
int16_t x709 = INT16_MIN;
uint64_t x711 = UINT64_MAX;
volatile uint64_t t177 = 901903663408768313LLU;
int32_t x715 = INT32_MIN;
int16_t x718 = INT16_MIN;
int32_t x724 = -3009;
int8_t x725 = -22;
volatile int8_t x734 = 35;
uint16_t x738 = 0U;
volatile uint8_t x739 = UINT8_MAX;
uint8_t x744 = 30U;
uint16_t x749 = UINT16_MAX;
static int16_t x752 = -1;
volatile uint64_t t189 = UINT64_MAX;
uint16_t x761 = 552U;
int8_t x766 = -48;
int32_t x768 = INT32_MIN;
int32_t x771 = INT32_MIN;
int32_t x780 = INT32_MIN;
int32_t t194 = -3454;
int64_t x783 = INT64_MIN;
static uint64_t x784 = 134289937473085LLU;
volatile int32_t x785 = 11;
int64_t x788 = -1LL;
uint16_t x789 = 3U;
static int16_t x798 = INT16_MIN;
int32_t t199 = 1;


void f0(void) {
    	static int8_t x1 = INT8_MIN;
	static volatile int8_t x2 = -17;
	static int8_t x3 = INT8_MIN;
	int8_t x4 = INT8_MIN;
	int32_t t0 = 16026387;

    t0 = ((x1!=x2)*(x3|x4));

    if (t0 != -128) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = -2;
	int64_t x6 = INT64_MIN;
	static uint16_t x7 = 1668U;
	static int16_t x8 = INT16_MAX;
	static volatile int32_t t1 = -26882222;

    t1 = ((x5!=x6)*(x7|x8));

    if (t1 != 32767) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x10 = UINT64_MAX;
	uint64_t x11 = UINT64_MAX;
	volatile uint64_t t2 = 2LLU;

    t2 = ((x9!=x10)*(x11|x12));

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x13 = INT8_MIN;
	uint64_t x14 = 1023LLU;
	int32_t x15 = INT32_MAX;
	int64_t x16 = INT64_MAX;
	static int64_t t3 = INT64_MAX;

    t3 = ((x13!=x14)*(x15|x16));

    if (t3 != INT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint64_t x18 = UINT64_MAX;
	int64_t x19 = INT64_MAX;
	volatile uint32_t x20 = 10288U;
	static volatile int64_t t4 = INT64_MAX;

    t4 = ((x17!=x18)*(x19|x20));

    if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x21 = INT16_MIN;
	uint64_t x22 = 2LLU;
	volatile uint32_t x23 = UINT32_MAX;
	int8_t x24 = 0;
	static volatile uint32_t t5 = UINT32_MAX;

    t5 = ((x21!=x22)*(x23|x24));

    if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x26 = INT8_MIN;
	int64_t x27 = INT64_MIN;
	uint16_t x28 = 4830U;
	int64_t t6 = 1927439789LL;

    t6 = ((x25!=x26)*(x27|x28));

    if (t6 != -9223372036854770978LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = INT32_MIN;
	int16_t x30 = 0;
	int32_t x31 = -6133;
	static int32_t x32 = INT32_MIN;
	volatile int32_t t7 = -1777;

    t7 = ((x29!=x30)*(x31|x32));

    if (t7 != -6133) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x33 = 41U;
	uint16_t x34 = UINT16_MAX;
	uint8_t x35 = UINT8_MAX;
	uint16_t x36 = 8U;
	static volatile int32_t t8 = -12060;

    t8 = ((x33!=x34)*(x35|x36));

    if (t8 != 255) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int32_t x37 = -246;
	int8_t x38 = 3;
	static uint64_t x40 = 526723674734LLU;
	uint64_t t9 = 28LLU;

    t9 = ((x37!=x38)*(x39|x40));

    if (t9 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = -1;
	int64_t x42 = INT64_MIN;
	int64_t x43 = INT64_MIN;
	int32_t x44 = 810202172;
	static int64_t t10 = -312995628LL;

    t10 = ((x41!=x42)*(x43|x44));

    if (t10 != -9223372036044573636LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x45 = UINT32_MAX;
	uint64_t x46 = 192LLU;

    t11 = ((x45!=x46)*(x47|x48));

    if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint8_t x49 = 3U;
	int8_t x52 = 7;

    t12 = ((x49!=x50)*(x51|x52));

    if (t12 != 7) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = INT16_MIN;
	uint64_t x56 = 16710144LLU;
	volatile uint64_t t13 = UINT64_MAX;

    t13 = ((x53!=x54)*(x55|x56));

    if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int8_t x57 = INT8_MAX;
	uint32_t x58 = UINT32_MAX;
	int32_t x59 = INT32_MAX;
	int32_t x60 = -465523;
	volatile int32_t t14 = 115902698;

    t14 = ((x57!=x58)*(x59|x60));

    if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x61 = UINT16_MAX;
	static int32_t x62 = INT32_MAX;
	uint32_t x63 = UINT32_MAX;
	static int16_t x64 = -1;
	uint32_t t15 = UINT32_MAX;

    t15 = ((x61!=x62)*(x63|x64));

    if (t15 != UINT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x65 = -1LL;
	int32_t x67 = INT32_MIN;
	uint8_t x68 = UINT8_MAX;
	int32_t t16 = 6827338;

    t16 = ((x65!=x66)*(x67|x68));

    if (t16 != -2147483393) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = INT8_MIN;
	int8_t x70 = -1;
	int8_t x71 = 0;
	uint32_t x72 = UINT32_MAX;
	uint32_t t17 = UINT32_MAX;

    t17 = ((x69!=x70)*(x71|x72));

    if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = 2;
	static volatile uint32_t x74 = UINT32_MAX;
	volatile uint16_t x75 = UINT16_MAX;
	int16_t x76 = -1;

    t18 = ((x73!=x74)*(x75|x76));

    if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = 4;
	static volatile uint32_t x78 = 19U;
	int16_t x80 = -1;
	volatile int32_t t19 = 145;

    t19 = ((x77!=x78)*(x79|x80));

    if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = -1LL;
	uint64_t x82 = 112065LLU;
	uint8_t x83 = UINT8_MAX;
	int8_t x84 = INT8_MIN;

    t20 = ((x81!=x82)*(x83|x84));

    if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x85 = 743;
	uint8_t x86 = UINT8_MAX;
	int64_t x87 = INT64_MIN;
	static uint16_t x88 = UINT16_MAX;
	static volatile int64_t t21 = -21231831LL;

    t21 = ((x85!=x86)*(x87|x88));

    if (t21 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = INT16_MAX;
	uint64_t x90 = 1685496067438LLU;
	uint32_t x91 = 12U;

    t22 = ((x89!=x90)*(x91|x92));

    if (t22 != INT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int32_t x94 = -1;
	uint8_t x95 = UINT8_MAX;
	int32_t t23 = -1053416083;

    t23 = ((x93!=x94)*(x95|x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x97 = -1;
	int8_t x99 = -1;
	int16_t x100 = -1;
	volatile int32_t t24 = 159935006;

    t24 = ((x97!=x98)*(x99|x100));

    if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x101 = -1;
	static uint32_t x103 = UINT32_MAX;
	int32_t x104 = -234309231;
	static volatile uint32_t t25 = UINT32_MAX;

    t25 = ((x101!=x102)*(x103|x104));

    if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int16_t x105 = INT16_MIN;
	static int32_t x106 = 94598;
	int8_t x107 = -1;
	volatile int32_t t26 = -167;

    t26 = ((x105!=x106)*(x107|x108));

    if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = INT16_MIN;
	int32_t x110 = -1;
	volatile int32_t t27 = 1;

    t27 = ((x109!=x110)*(x111|x112));

    if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x115 = UINT16_MAX;
	int64_t x116 = INT64_MIN;
	int64_t t28 = 28LL;

    t28 = ((x113!=x114)*(x115|x116));

    if (t28 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static int64_t x118 = INT64_MAX;
	int8_t x119 = -30;
	volatile int8_t x120 = 11;
	volatile int32_t t29 = 22613511;

    t29 = ((x117!=x118)*(x119|x120));

    if (t29 != -21) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x122 = INT8_MAX;
	int16_t x123 = INT16_MIN;
	volatile int8_t x124 = -2;
	int32_t t30 = 615148349;

    t30 = ((x121!=x122)*(x123|x124));

    if (t30 != -2) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x125 = UINT8_MAX;
	int32_t t31 = -7237;

    t31 = ((x125!=x126)*(x127|x128));

    if (t31 != 127) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = INT64_MIN;
	static volatile uint8_t x131 = 0U;
	static volatile int32_t x132 = -1;
	int32_t t32 = 1193234;

    t32 = ((x129!=x130)*(x131|x132));

    if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = INT64_MIN;
	int16_t x135 = -1;
	static int32_t x136 = INT32_MIN;
	static int32_t t33 = 95108;

    t33 = ((x133!=x134)*(x135|x136));

    if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x138 = INT8_MIN;
	int64_t t34 = 3936355786043619LL;

    t34 = ((x137!=x138)*(x139|x140));

    if (t34 != -14628LL) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint32_t x141 = 6U;
	volatile int8_t x144 = 0;

    t35 = ((x141!=x142)*(x143|x144));

    if (t35 != -128) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x145 = INT8_MIN;
	uint32_t x146 = 52638U;
	uint16_t x147 = 3132U;
	int8_t x148 = 1;
	int32_t t36 = -8139768;

    t36 = ((x145!=x146)*(x147|x148));

    if (t36 != 3133) { NG(); } else { ; }
	
}

void f37(void) {
    	static int32_t x149 = -26;
	int8_t x150 = 0;
	int8_t x151 = INT8_MIN;
	static int8_t x152 = -1;
	volatile int32_t t37 = -11165;

    t37 = ((x149!=x150)*(x151|x152));

    if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x154 = 3;
	int64_t x155 = 1LL;
	uint32_t x156 = 265216U;
	int64_t t38 = -646480579845294272LL;

    t38 = ((x153!=x154)*(x155|x156));

    if (t38 != 265217LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x157 = INT8_MIN;
	static uint8_t x158 = 0U;
	int64_t x159 = INT64_MAX;
	int64_t x160 = INT64_MAX;
	static volatile int64_t t39 = INT64_MAX;

    t39 = ((x157!=x158)*(x159|x160));

    if (t39 != INT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint64_t x161 = 8460066423180901648LLU;
	volatile int8_t x162 = INT8_MIN;
	int16_t x163 = INT16_MIN;
	int32_t t40 = 30829;

    t40 = ((x161!=x162)*(x163|x164));

    if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x165 = UINT32_MAX;
	static volatile int16_t x166 = -68;
	int32_t x167 = INT32_MIN;
	int64_t x168 = INT64_MAX;
	static int64_t t41 = -11168100212036LL;

    t41 = ((x165!=x166)*(x167|x168));

    if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x169 = UINT16_MAX;
	int32_t x171 = INT32_MAX;
	uint32_t x172 = 42193894U;
	volatile uint32_t t42 = 56045U;

    t42 = ((x169!=x170)*(x171|x172));

    if (t42 != 2147483647U) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x175 = 7U;
	volatile int32_t t43 = -5921;

    t43 = ((x173!=x174)*(x175|x176));

    if (t43 != 32767) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint64_t x178 = 1225LLU;
	int16_t x179 = -1;
	int8_t x180 = -43;
	volatile int32_t t44 = 22208;

    t44 = ((x177!=x178)*(x179|x180));

    if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = INT64_MIN;
	int16_t x182 = INT16_MIN;
	static int16_t x184 = INT16_MIN;
	static int32_t t45 = 445775714;

    t45 = ((x181!=x182)*(x183|x184));

    if (t45 != -19420) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x185 = 0U;
	volatile int64_t x186 = INT64_MIN;
	volatile uint32_t x187 = UINT32_MAX;
	uint32_t t46 = UINT32_MAX;

    t46 = ((x185!=x186)*(x187|x188));

    if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = 112;
	uint8_t x191 = 0U;
	int32_t x192 = INT32_MIN;

    t47 = ((x189!=x190)*(x191|x192));

    if (t47 != INT32_MIN) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x194 = INT32_MAX;
	int64_t x195 = INT64_MIN;
	uint64_t x196 = UINT64_MAX;
	static volatile uint64_t t48 = UINT64_MAX;

    t48 = ((x193!=x194)*(x195|x196));

    if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile uint16_t x199 = UINT16_MAX;
	int8_t x200 = -1;
	volatile int32_t t49 = 4;

    t49 = ((x197!=x198)*(x199|x200));

    if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint64_t x201 = UINT64_MAX;
	static volatile uint16_t x202 = 6057U;
	static uint32_t x203 = 1U;
	static volatile uint32_t t50 = 36158542U;

    t50 = ((x201!=x202)*(x203|x204));

    if (t50 != 463U) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x205 = 0U;
	volatile uint64_t x206 = 0LLU;
	int64_t x207 = INT64_MIN;
	int64_t x208 = INT64_MAX;
	volatile int64_t t51 = 212124298817LL;

    t51 = ((x205!=x206)*(x207|x208));

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static int32_t x210 = INT32_MIN;
	static int64_t x211 = 21LL;
	uint8_t x212 = UINT8_MAX;
	int64_t t52 = 1LL;

    t52 = ((x209!=x210)*(x211|x212));

    if (t52 != 255LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x213 = 44U;
	int64_t x214 = INT64_MAX;
	static volatile int32_t x215 = INT32_MIN;
	volatile uint64_t x216 = UINT64_MAX;
	static volatile uint64_t t53 = UINT64_MAX;

    t53 = ((x213!=x214)*(x215|x216));

    if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x217 = INT64_MIN;
	uint16_t x218 = 6033U;
	volatile int16_t x219 = 10668;
	volatile uint64_t t54 = 67267858LLU;

    t54 = ((x217!=x218)*(x219|x220));

    if (t54 != 10669LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = -1;
	volatile int64_t x222 = INT64_MIN;
	int8_t x223 = INT8_MIN;
	int16_t x224 = INT16_MIN;
	int32_t t55 = 603342;

    t55 = ((x221!=x222)*(x223|x224));

    if (t55 != -128) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x225 = 3;
	static int16_t x227 = INT16_MIN;
	int32_t x228 = INT32_MAX;
	static int32_t t56 = -120345;

    t56 = ((x225!=x226)*(x227|x228));

    if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x229 = -5461958619LL;
	int32_t x230 = -1;
	uint64_t x231 = UINT64_MAX;
	volatile uint16_t x232 = 5942U;
	static uint64_t t57 = UINT64_MAX;

    t57 = ((x229!=x230)*(x231|x232));

    if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int32_t x233 = INT32_MIN;
	static uint16_t x234 = 0U;
	static int16_t x236 = INT16_MIN;
	volatile int32_t t58 = -31;

    t58 = ((x233!=x234)*(x235|x236));

    if (t58 != -128) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x237 = INT8_MAX;
	static int16_t x238 = INT16_MIN;
	int32_t x239 = INT32_MAX;
	static uint64_t t59 = 1298524042LLU;

    t59 = ((x237!=x238)*(x239|x240));

    if (t59 != 2306397437951LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x241 = 10208957918LLU;
	uint64_t x243 = UINT64_MAX;
	uint16_t x244 = 1675U;
	uint64_t t60 = UINT64_MAX;

    t60 = ((x241!=x242)*(x243|x244));

    if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int16_t x245 = -1;
	int8_t x246 = -1;
	static int32_t x247 = INT32_MIN;
	static volatile int8_t x248 = INT8_MAX;

    t61 = ((x245!=x246)*(x247|x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x249 = UINT16_MAX;
	uint16_t x252 = 3U;

    t62 = ((x249!=x250)*(x251|x252));

    if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
    	static int32_t x253 = INT32_MIN;
	static int8_t x254 = INT8_MIN;
	int32_t x255 = INT32_MIN;
	uint8_t x256 = 104U;
	int32_t t63 = 24026;

    t63 = ((x253!=x254)*(x255|x256));

    if (t63 != -2147483544) { NG(); } else { ; }
	
}

void f64(void) {
    	static int16_t x257 = INT16_MIN;
	static int8_t x260 = INT8_MIN;
	static int32_t t64 = 892635;

    t64 = ((x257!=x258)*(x259|x260));

    if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x261 = UINT16_MAX;
	volatile int64_t x262 = -13891LL;
	int64_t x263 = -67LL;
	int16_t x264 = -1;
	volatile int64_t t65 = -1939631957824491844LL;

    t65 = ((x261!=x262)*(x263|x264));

    if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile uint8_t x265 = 62U;
	uint64_t x266 = 10LLU;
	uint32_t x267 = UINT32_MAX;
	int32_t x268 = 7232736;
	static uint32_t t66 = UINT32_MAX;

    t66 = ((x265!=x266)*(x267|x268));

    if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint16_t x271 = UINT16_MAX;
	static volatile int32_t t67 = -7;

    t67 = ((x269!=x270)*(x271|x272));

    if (t67 != 65535) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x273 = 10U;
	static int16_t x274 = -3;
	int32_t x275 = 756;
	volatile int64_t t68 = -46202640737383320LL;

    t68 = ((x273!=x274)*(x275|x276));

    if (t68 != -9223372036854775052LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x279 = 108968357805LLU;
	static volatile int8_t x280 = INT8_MIN;

    t69 = ((x277!=x278)*(x279|x280));

    if (t69 != 18446744073709551533LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static int16_t x281 = 1027;
	uint64_t x282 = 162436627988LLU;
	static uint16_t x284 = UINT16_MAX;
	static int32_t t70 = 255075254;

    t70 = ((x281!=x282)*(x283|x284));

    if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x285 = INT16_MIN;
	int64_t x286 = INT64_MIN;
	int16_t x287 = INT16_MIN;
	int16_t x288 = -155;
	int32_t t71 = -11989115;

    t71 = ((x285!=x286)*(x287|x288));

    if (t71 != -155) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int8_t x289 = -1;
	uint64_t x290 = 67072LLU;
	uint8_t x291 = 110U;
	int32_t t72 = -6539;

    t72 = ((x289!=x290)*(x291|x292));

    if (t72 != 127) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x293 = 425607539581952155LLU;
	static volatile uint64_t t73 = 55767584025LLU;

    t73 = ((x293!=x294)*(x295|x296));

    if (t73 != 11336518426109691091LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x297 = INT16_MIN;
	int64_t x298 = INT64_MAX;
	int32_t x300 = -1;
	volatile int64_t t74 = 0LL;

    t74 = ((x297!=x298)*(x299|x300));

    if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x301 = 761622;
	int32_t x302 = 14;
	int32_t x303 = INT32_MIN;
	int16_t x304 = 4;
	volatile int32_t t75 = 17799140;

    t75 = ((x301!=x302)*(x303|x304));

    if (t75 != -2147483644) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x305 = 33899727946134415LL;
	static int32_t x306 = INT32_MIN;
	uint64_t x307 = 419844LLU;
	int8_t x308 = -1;
	volatile uint64_t t76 = UINT64_MAX;

    t76 = ((x305!=x306)*(x307|x308));

    if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile uint16_t x309 = 0U;
	static int16_t x310 = INT16_MIN;
	int32_t x311 = -351031192;
	volatile int32_t t77 = -1923557;

    t77 = ((x309!=x310)*(x311|x312));

    if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
    	static int8_t x313 = 2;
	int64_t x314 = INT64_MAX;
	volatile int64_t x315 = INT64_MAX;
	int32_t x316 = -1;
	int64_t t78 = 544600275112698644LL;

    t78 = ((x313!=x314)*(x315|x316));

    if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x318 = INT8_MAX;
	static uint32_t x319 = UINT32_MAX;
	static int32_t x320 = -1;
	uint32_t t79 = 4U;

    t79 = ((x317!=x318)*(x319|x320));

    if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x321 = -1;
	uint16_t x322 = 40U;
	uint16_t x324 = 1U;
	volatile uint32_t t80 = 7921025U;

    t80 = ((x321!=x322)*(x323|x324));

    if (t80 != 14355489U) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x325 = -11008;
	int8_t x326 = -9;
	uint16_t x327 = UINT16_MAX;
	int16_t x328 = 43;
	static int32_t t81 = -473719297;

    t81 = ((x325!=x326)*(x327|x328));

    if (t81 != 65535) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x329 = 12690U;
	int16_t x330 = INT16_MIN;
	static uint32_t x331 = UINT32_MAX;
	int8_t x332 = INT8_MIN;
	volatile uint32_t t82 = UINT32_MAX;

    t82 = ((x329!=x330)*(x331|x332));

    if (t82 != UINT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x333 = INT8_MIN;
	uint16_t x335 = 1627U;
	int32_t x336 = INT32_MIN;
	int32_t t83 = 77702;

    t83 = ((x333!=x334)*(x335|x336));

    if (t83 != -2147482021) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x337 = INT32_MIN;
	int64_t x339 = -14625356792260LL;
	volatile uint8_t x340 = 3U;
	volatile int64_t t84 = -7586557801537LL;

    t84 = ((x337!=x338)*(x339|x340));

    if (t84 != -14625356792257LL) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int16_t x341 = INT16_MIN;
	volatile uint8_t x342 = UINT8_MAX;
	volatile int32_t x343 = INT32_MIN;
	static int8_t x344 = -26;

    t85 = ((x341!=x342)*(x343|x344));

    if (t85 != -26) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint8_t x347 = UINT8_MAX;
	static int16_t x348 = -11;
	int32_t t86 = -815568;

    t86 = ((x345!=x346)*(x347|x348));

    if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint64_t x349 = UINT64_MAX;
	static volatile int16_t x350 = INT16_MIN;
	static volatile int32_t t87 = -59;

    t87 = ((x349!=x350)*(x351|x352));

    if (t87 != -128) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x353 = 242510;
	int64_t x354 = INT64_MIN;
	uint8_t x355 = UINT8_MAX;
	static uint64_t x356 = 13LLU;
	uint64_t t88 = 934290128515LLU;

    t88 = ((x353!=x354)*(x355|x356));

    if (t88 != 255LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint8_t x357 = UINT8_MAX;
	int16_t x358 = 366;
	static uint16_t x359 = 0U;
	int8_t x360 = INT8_MIN;
	volatile int32_t t89 = -1709;

    t89 = ((x357!=x358)*(x359|x360));

    if (t89 != -128) { NG(); } else { ; }
	
}

void f90(void) {
    	static int8_t x362 = INT8_MAX;
	volatile uint16_t x363 = 14U;
	volatile int64_t x364 = -1LL;
	volatile int64_t t90 = 161009409483LL;

    t90 = ((x361!=x362)*(x363|x364));

    if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x365 = INT32_MAX;
	int8_t x366 = INT8_MAX;
	static volatile uint16_t x367 = UINT16_MAX;
	int16_t x368 = -15;
	volatile int32_t t91 = -2448812;

    t91 = ((x365!=x366)*(x367|x368));

    if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint16_t x369 = UINT16_MAX;
	volatile int64_t x370 = -1LL;
	uint8_t x371 = 1U;
	int64_t x372 = 154076110551LL;
	int64_t t92 = 1937861LL;

    t92 = ((x369!=x370)*(x371|x372));

    if (t92 != 154076110551LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x373 = 2;
	uint8_t x374 = 34U;
	uint64_t x375 = 1615313386722LLU;
	uint16_t x376 = 8120U;

    t93 = ((x373!=x374)*(x375|x376));

    if (t93 != 1615313387514LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int8_t x377 = -1;
	uint16_t x378 = 6U;
	uint16_t x380 = 1271U;
	int32_t t94 = -64;

    t94 = ((x377!=x378)*(x379|x380));

    if (t94 != -2147482377) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint16_t x381 = 228U;
	static int64_t x383 = INT64_MIN;
	int64_t t95 = -33655LL;

    t95 = ((x381!=x382)*(x383|x384));

    if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x385 = UINT32_MAX;
	int32_t x386 = -4018106;
	static int16_t x387 = INT16_MIN;
	int64_t x388 = INT64_MIN;
	volatile int64_t t96 = 29783448838LL;

    t96 = ((x385!=x386)*(x387|x388));

    if (t96 != -32768LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x389 = 0;
	volatile int64_t x390 = INT64_MIN;
	static volatile int64_t x391 = INT64_MIN;
	uint8_t x392 = UINT8_MAX;
	int64_t t97 = 477700203177515060LL;

    t97 = ((x389!=x390)*(x391|x392));

    if (t97 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int16_t x393 = -1;
	uint16_t x394 = 2245U;
	int64_t x395 = INT64_MAX;
	static int64_t x396 = 281060011406LL;
	volatile int64_t t98 = INT64_MAX;

    t98 = ((x393!=x394)*(x395|x396));

    if (t98 != INT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x397 = UINT16_MAX;
	volatile int16_t x398 = INT16_MIN;
	int32_t x400 = 7;
	volatile uint64_t t99 = UINT64_MAX;

    t99 = ((x397!=x398)*(x399|x400));

    if (t99 != UINT64_MAX) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x401 = 0;
	int8_t x402 = INT8_MIN;
	int32_t x403 = INT32_MAX;
	static int32_t x404 = INT32_MAX;
	volatile int32_t t100 = INT32_MAX;

    t100 = ((x401!=x402)*(x403|x404));

    if (t100 != INT32_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x405 = INT32_MIN;
	int32_t x406 = 0;
	int8_t x407 = -1;
	int32_t x408 = -4176652;
	volatile int32_t t101 = -18951;

    t101 = ((x405!=x406)*(x407|x408));

    if (t101 != -1) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x409 = INT16_MIN;
	static int8_t x410 = INT8_MIN;
	static int16_t x412 = 69;

    t102 = ((x409!=x410)*(x411|x412));

    if (t102 != 65535) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x414 = INT16_MIN;
	volatile uint64_t x415 = 78888LLU;

    t103 = ((x413!=x414)*(x415|x416));

    if (t103 != 81656LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x417 = INT8_MIN;
	static volatile int64_t x418 = -1LL;
	static int16_t x419 = INT16_MIN;
	int8_t x420 = INT8_MAX;
	int32_t t104 = -58845;

    t104 = ((x417!=x418)*(x419|x420));

    if (t104 != -32641) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int16_t x421 = -1;
	int16_t x422 = INT16_MIN;
	int64_t x423 = INT64_MAX;
	volatile int64_t x424 = -1LL;
	int64_t t105 = 1442233798910991LL;

    t105 = ((x421!=x422)*(x423|x424));

    if (t105 != -1LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint64_t x425 = 3454348435057LLU;
	int8_t x427 = INT8_MIN;
	int32_t x428 = 1473889;

    t106 = ((x425!=x426)*(x427|x428));

    if (t106 != -31) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint8_t x429 = 72U;
	static volatile int8_t x430 = INT8_MIN;
	uint16_t x431 = 0U;
	int32_t x432 = INT32_MAX;
	static int32_t t107 = INT32_MAX;

    t107 = ((x429!=x430)*(x431|x432));

    if (t107 != INT32_MAX) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x433 = INT8_MIN;
	int8_t x434 = -1;
	static volatile int16_t x435 = 659;
	uint8_t x436 = UINT8_MAX;
	int32_t t108 = -2460;

    t108 = ((x433!=x434)*(x435|x436));

    if (t108 != 767) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x438 = 0LL;
	uint32_t x440 = 72U;
	static int64_t t109 = 42LL;

    t109 = ((x437!=x438)*(x439|x440));

    if (t109 != -3LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x441 = -587;
	int8_t x442 = 7;
	int8_t x444 = 27;

    t110 = ((x441!=x442)*(x443|x444));

    if (t110 != 3359) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x446 = -20;
	int64_t x447 = 10885792950LL;
	uint64_t x448 = 117998964082279LLU;
	uint64_t t111 = 24477977988373826LLU;

    t111 = ((x445!=x446)*(x447|x448));

    if (t111 != 118007697147639LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int16_t x449 = -1;
	int64_t x451 = INT64_MIN;
	static uint8_t x452 = UINT8_MAX;
	int64_t t112 = 465528193LL;

    t112 = ((x449!=x450)*(x451|x452));

    if (t112 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x453 = UINT32_MAX;
	volatile int16_t x454 = 44;
	uint8_t x455 = UINT8_MAX;
	static int64_t t113 = 592LL;

    t113 = ((x453!=x454)*(x455|x456));

    if (t113 != 255LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int64_t x457 = 67LL;
	uint32_t x458 = 1243679152U;
	int32_t x459 = INT32_MAX;
	uint32_t x460 = UINT32_MAX;
	static volatile uint32_t t114 = UINT32_MAX;

    t114 = ((x457!=x458)*(x459|x460));

    if (t114 != UINT32_MAX) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x461 = -1;
	static int64_t x462 = -1LL;
	volatile int64_t x463 = INT64_MIN;

    t115 = ((x461!=x462)*(x463|x464));

    if (t115 != 0LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = -5;
	int16_t x468 = INT16_MAX;
	int64_t t116 = INT64_MAX;

    t116 = ((x465!=x466)*(x467|x468));

    if (t116 != INT64_MAX) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x470 = -1;
	static uint32_t x471 = UINT32_MAX;
	uint16_t x472 = UINT16_MAX;

    t117 = ((x469!=x470)*(x471|x472));

    if (t117 != UINT32_MAX) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x474 = 36U;
	volatile uint32_t x475 = 2U;
	volatile uint16_t x476 = 21U;

    t118 = ((x473!=x474)*(x475|x476));

    if (t118 != 23U) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x477 = INT32_MIN;
	int32_t x479 = 19;
	int16_t x480 = INT16_MAX;
	int32_t t119 = 7233;

    t119 = ((x477!=x478)*(x479|x480));

    if (t119 != 32767) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x482 = 3;
	static int32_t x483 = INT32_MIN;
	static uint16_t x484 = UINT16_MAX;
	static int32_t t120 = -1937;

    t120 = ((x481!=x482)*(x483|x484));

    if (t120 != -2147418113) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x485 = INT8_MAX;
	volatile int16_t x486 = -3;
	static volatile uint64_t x487 = UINT64_MAX;
	int16_t x488 = 9;
	uint64_t t121 = UINT64_MAX;

    t121 = ((x485!=x486)*(x487|x488));

    if (t121 != UINT64_MAX) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint16_t x489 = 117U;
	uint32_t x490 = 2789U;
	int64_t x491 = INT64_MIN;
	static volatile int32_t x492 = 4652358;
	static int64_t t122 = -26327900861165477LL;

    t122 = ((x489!=x490)*(x491|x492));

    if (t122 != -9223372036850123450LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x493 = INT8_MIN;
	int16_t x495 = INT16_MIN;
	static volatile int32_t x496 = INT32_MIN;
	int32_t t123 = 0;

    t123 = ((x493!=x494)*(x495|x496));

    if (t123 != -32768) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x497 = INT32_MIN;
	static uint16_t x498 = 1U;
	int64_t x499 = INT64_MAX;
	uint32_t x500 = 0U;
	volatile int64_t t124 = INT64_MAX;

    t124 = ((x497!=x498)*(x499|x500));

    if (t124 != INT64_MAX) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x501 = 1932;
	volatile int16_t x502 = INT16_MIN;
	int64_t x503 = INT64_MIN;
	int64_t t125 = -979258201LL;

    t125 = ((x501!=x502)*(x503|x504));

    if (t125 != -1LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x506 = UINT64_MAX;
	int32_t x508 = INT32_MIN;
	volatile int32_t t126 = INT32_MIN;

    t126 = ((x505!=x506)*(x507|x508));

    if (t126 != INT32_MIN) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x510 = UINT16_MAX;
	static int64_t x511 = -17380LL;

    t127 = ((x509!=x510)*(x511|x512));

    if (t127 != -17380LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x513 = INT8_MIN;
	static int32_t x514 = -58110;
	volatile uint16_t x516 = UINT16_MAX;
	volatile int32_t t128 = 0;

    t128 = ((x513!=x514)*(x515|x516));

    if (t128 != 65535) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x517 = INT16_MAX;
	int64_t x518 = -30497933707LL;
	static volatile int8_t x519 = 0;
	static volatile int16_t x520 = INT16_MIN;
	volatile int32_t t129 = -125;

    t129 = ((x517!=x518)*(x519|x520));

    if (t129 != -32768) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x521 = UINT8_MAX;
	int16_t x522 = -1;
	static uint8_t x523 = 120U;
	volatile uint64_t t130 = 138182665078270LLU;

    t130 = ((x521!=x522)*(x523|x524));

    if (t130 != 20188297725LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint16_t x525 = 24396U;
	int32_t x526 = INT32_MIN;
	volatile int8_t x528 = -15;
	volatile int64_t t131 = 93763352145522817LL;

    t131 = ((x525!=x526)*(x527|x528));

    if (t131 != -1LL) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int64_t x530 = INT64_MIN;
	static int16_t x532 = INT16_MIN;
	int32_t t132 = -8842839;

    t132 = ((x529!=x530)*(x531|x532));

    if (t132 != -32765) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x533 = INT8_MAX;
	uint32_t x534 = 3U;
	volatile int16_t x535 = 44;
	volatile int16_t x536 = INT16_MIN;
	static volatile int32_t t133 = -10787;

    t133 = ((x533!=x534)*(x535|x536));

    if (t133 != -32724) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x538 = 0U;
	int32_t x539 = INT32_MAX;
	volatile int16_t x540 = INT16_MAX;

    t134 = ((x537!=x538)*(x539|x540));

    if (t134 != INT32_MAX) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x542 = INT32_MIN;
	int16_t x544 = INT16_MIN;
	volatile int32_t t135 = -47;

    t135 = ((x541!=x542)*(x543|x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x546 = UINT32_MAX;
	uint8_t x548 = 4U;
	int32_t t136 = -139;

    t136 = ((x545!=x546)*(x547|x548));

    if (t136 != 10623949) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x552 = -1;
	volatile int32_t t137 = 395;

    t137 = ((x549!=x550)*(x551|x552));

    if (t137 != -1) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x553 = 12;
	static uint32_t x554 = 41U;
	uint8_t x556 = 7U;

    t138 = ((x553!=x554)*(x555|x556));

    if (t138 != -1) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x557 = 0;
	int16_t x558 = INT16_MAX;
	volatile int64_t x559 = INT64_MAX;
	volatile uint16_t x560 = 601U;
	volatile int64_t t139 = INT64_MAX;

    t139 = ((x557!=x558)*(x559|x560));

    if (t139 != INT64_MAX) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x561 = INT16_MIN;
	uint64_t x562 = 299LLU;
	int64_t x563 = -1620233930LL;
	int32_t x564 = -27716;
	static int64_t t140 = 4606927803LL;

    t140 = ((x561!=x562)*(x563|x564));

    if (t140 != -19522LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x565 = INT64_MAX;
	uint16_t x566 = UINT16_MAX;
	static int8_t x567 = INT8_MIN;
	static int32_t x568 = 180557471;
	int32_t t141 = -221024;

    t141 = ((x565!=x566)*(x567|x568));

    if (t141 != -97) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x569 = 23;
	int16_t x570 = -1;
	int8_t x571 = -2;
	volatile uint64_t x572 = 1015139505683527LLU;
	volatile uint64_t t142 = UINT64_MAX;

    t142 = ((x569!=x570)*(x571|x572));

    if (t142 != UINT64_MAX) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x573 = INT8_MAX;
	int16_t x574 = INT16_MAX;
	static uint16_t x575 = 21991U;
	int32_t x576 = 4231244;

    t143 = ((x573!=x574)*(x575|x576));

    if (t143 != 4249071) { NG(); } else { ; }
	
}

void f144(void) {
    	static int32_t x577 = INT32_MIN;
	volatile int32_t x578 = 3041;
	int64_t x579 = INT64_MIN;
	uint16_t x580 = 12205U;
	volatile int64_t t144 = 37LL;

    t144 = ((x577!=x578)*(x579|x580));

    if (t144 != -9223372036854763603LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x581 = -1656133;
	int32_t x582 = INT32_MAX;
	int16_t x584 = INT16_MAX;
	static volatile uint64_t t145 = UINT64_MAX;

    t145 = ((x581!=x582)*(x583|x584));

    if (t145 != UINT64_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x585 = INT32_MIN;
	uint16_t x586 = 15U;
	int64_t x587 = 1014LL;
	volatile int64_t x588 = -1LL;
	static int64_t t146 = 256576LL;

    t146 = ((x585!=x586)*(x587|x588));

    if (t146 != -1LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x589 = -1;
	static int16_t x591 = 1;
	int16_t x592 = INT16_MAX;
	int32_t t147 = 1582370;

    t147 = ((x589!=x590)*(x591|x592));

    if (t147 != 32767) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x593 = INT8_MAX;
	uint32_t x594 = 6U;
	int32_t x595 = INT32_MIN;
	uint64_t x596 = 4098187786LLU;
	uint64_t t148 = 30LLU;

    t148 = ((x593!=x594)*(x595|x596));

    if (t148 != 18446744073512772106LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x597 = -1;
	int64_t x598 = INT64_MIN;
	int32_t x599 = -1;

    t149 = ((x597!=x598)*(x599|x600));

    if (t149 != UINT32_MAX) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x601 = INT32_MIN;
	uint16_t x603 = UINT16_MAX;
	volatile int32_t x604 = INT32_MIN;
	volatile int32_t t150 = 199;

    t150 = ((x601!=x602)*(x603|x604));

    if (t150 != -2147418113) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x605 = 1872153623049402LLU;
	static int8_t x607 = INT8_MIN;
	int16_t x608 = INT16_MIN;
	int32_t t151 = 93187;

    t151 = ((x605!=x606)*(x607|x608));

    if (t151 != -128) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x609 = -86936;
	int32_t x610 = -28718;
	int8_t x612 = INT8_MIN;

    t152 = ((x609!=x610)*(x611|x612));

    if (t152 != -1) { NG(); } else { ; }
	
}

void f153(void) {
    	static int64_t x614 = -2923LL;
	volatile int16_t x615 = 2;
	static uint8_t x616 = 4U;
	int32_t t153 = -4343399;

    t153 = ((x613!=x614)*(x615|x616));

    if (t153 != 6) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x617 = INT32_MAX;
	volatile uint64_t x619 = 4LLU;
	static int8_t x620 = -22;
	volatile uint64_t t154 = 3349285627689LLU;

    t154 = ((x617!=x618)*(x619|x620));

    if (t154 != 18446744073709551598LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x621 = INT32_MIN;
	static volatile uint64_t x622 = 3180848237LLU;
	int64_t x623 = INT64_MIN;

    t155 = ((x621!=x622)*(x623|x624));

    if (t155 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x625 = INT8_MIN;
	int32_t x626 = 659;
	volatile int32_t t156 = 329196764;

    t156 = ((x625!=x626)*(x627|x628));

    if (t156 != -1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x629 = 0U;
	int32_t x630 = INT32_MIN;
	volatile uint32_t x632 = 501598862U;
	static volatile uint32_t t157 = 32414U;

    t157 = ((x629!=x630)*(x631|x632));

    if (t157 != 501598943U) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x633 = 923LLU;
	int8_t x634 = 52;
	int32_t x635 = INT32_MAX;
	static int64_t x636 = INT64_MAX;
	volatile int64_t t158 = INT64_MAX;

    t158 = ((x633!=x634)*(x635|x636));

    if (t158 != INT64_MAX) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x637 = UINT32_MAX;
	int64_t x638 = INT64_MAX;
	static int16_t x639 = INT16_MIN;
	int64_t x640 = -329380970LL;
	int64_t t159 = 95505LL;

    t159 = ((x637!=x638)*(x639|x640));

    if (t159 != -29802LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x641 = UINT16_MAX;
	int64_t x642 = INT64_MIN;
	static int32_t x643 = INT32_MAX;
	int16_t x644 = 180;
	static volatile int32_t t160 = INT32_MAX;

    t160 = ((x641!=x642)*(x643|x644));

    if (t160 != INT32_MAX) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int16_t x645 = 123;
	volatile int64_t x646 = INT64_MIN;
	volatile uint32_t x647 = 852U;
	int32_t x648 = -3663609;

    t161 = ((x645!=x646)*(x647|x648));

    if (t161 != 4291304279U) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x649 = -1LL;
	volatile int32_t x651 = INT32_MAX;
	int16_t x652 = INT16_MAX;
	volatile int32_t t162 = INT32_MAX;

    t162 = ((x649!=x650)*(x651|x652));

    if (t162 != INT32_MAX) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x653 = UINT8_MAX;
	static uint16_t x654 = 58U;
	uint64_t x655 = 1848519567038LLU;
	int8_t x656 = INT8_MIN;
	static volatile uint64_t t163 = 65000LLU;

    t163 = ((x653!=x654)*(x655|x656));

    if (t163 != 18446744073709551550LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x657 = INT32_MIN;
	int32_t x658 = INT32_MIN;
	uint32_t x659 = UINT32_MAX;
	int32_t x660 = INT32_MAX;
	uint32_t t164 = 1U;

    t164 = ((x657!=x658)*(x659|x660));

    if (t164 != 0U) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x662 = 1588U;
	int16_t x664 = -171;
	int32_t t165 = 2;

    t165 = ((x661!=x662)*(x663|x664));

    if (t165 != -171) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x665 = INT32_MIN;
	int16_t x666 = 5;
	int16_t x667 = INT16_MIN;
	uint64_t x668 = UINT64_MAX;
	volatile uint64_t t166 = UINT64_MAX;

    t166 = ((x665!=x666)*(x667|x668));

    if (t166 != UINT64_MAX) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x669 = -242;
	int32_t x670 = INT32_MIN;
	volatile int16_t x671 = INT16_MIN;
	static int8_t x672 = INT8_MIN;
	int32_t t167 = -2;

    t167 = ((x669!=x670)*(x671|x672));

    if (t167 != -128) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x673 = -1;
	static volatile int16_t x675 = INT16_MIN;
	volatile uint32_t t168 = 6391U;

    t168 = ((x673!=x674)*(x675|x676));

    if (t168 != 4294934529U) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint64_t x677 = UINT64_MAX;
	int8_t x678 = 28;
	uint16_t x679 = 2051U;
	volatile int32_t t169 = -21487;

    t169 = ((x677!=x678)*(x679|x680));

    if (t169 != -1) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x681 = 36604961LL;
	volatile int16_t x682 = -25;
	int64_t x684 = INT64_MAX;

    t170 = ((x681!=x682)*(x683|x684));

    if (t170 != -1LL) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint8_t x685 = UINT8_MAX;
	int16_t x686 = INT16_MIN;
	int64_t x687 = -627LL;
	volatile int64_t x688 = INT64_MIN;

    t171 = ((x685!=x686)*(x687|x688));

    if (t171 != -627LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x689 = INT64_MIN;
	uint16_t x690 = UINT16_MAX;
	uint16_t x691 = 30U;
	int64_t x692 = 1LL;
	volatile int64_t t172 = -17926LL;

    t172 = ((x689!=x690)*(x691|x692));

    if (t172 != 31LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x693 = INT8_MIN;
	uint64_t x694 = UINT64_MAX;
	static volatile int32_t t173 = 60626082;

    t173 = ((x693!=x694)*(x695|x696));

    if (t173 != -1) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x697 = -1;
	static int32_t x698 = -1;
	int16_t x700 = INT16_MIN;

    t174 = ((x697!=x698)*(x699|x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x701 = INT8_MIN;
	static int64_t x702 = -1LL;
	int8_t x703 = 1;
	volatile int8_t x704 = 0;
	int32_t t175 = -2721;

    t175 = ((x701!=x702)*(x703|x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x706 = INT16_MIN;
	volatile int64_t x707 = -1LL;
	int16_t x708 = 1;
	int64_t t176 = 16LL;

    t176 = ((x705!=x706)*(x707|x708));

    if (t176 != -1LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x710 = INT16_MIN;
	int8_t x712 = INT8_MAX;

    t177 = ((x709!=x710)*(x711|x712));

    if (t177 != 0LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x713 = -2;
	int8_t x714 = INT8_MAX;
	uint16_t x716 = 1U;
	int32_t t178 = 12317037;

    t178 = ((x713!=x714)*(x715|x716));

    if (t178 != -2147483647) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint64_t x717 = UINT64_MAX;
	int16_t x719 = INT16_MIN;
	int32_t x720 = -1;
	volatile int32_t t179 = -23441953;

    t179 = ((x717!=x718)*(x719|x720));

    if (t179 != -1) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x721 = 0;
	int16_t x722 = -1;
	int16_t x723 = -7;
	int32_t t180 = -5954482;

    t180 = ((x721!=x722)*(x723|x724));

    if (t180 != -1) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x726 = 11233;
	static uint32_t x727 = 94099U;
	int16_t x728 = 75;
	static uint32_t t181 = 116049279U;

    t181 = ((x725!=x726)*(x727|x728));

    if (t181 != 94171U) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x729 = UINT16_MAX;
	uint16_t x730 = 18601U;
	static volatile int8_t x731 = INT8_MIN;
	uint32_t x732 = UINT32_MAX;
	volatile uint32_t t182 = UINT32_MAX;

    t182 = ((x729!=x730)*(x731|x732));

    if (t182 != UINT32_MAX) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x733 = -52;
	volatile int16_t x735 = INT16_MAX;
	int16_t x736 = -12;
	int32_t t183 = -3275;

    t183 = ((x733!=x734)*(x735|x736));

    if (t183 != -1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint64_t x737 = 550LLU;
	int8_t x740 = INT8_MIN;
	int32_t t184 = 0;

    t184 = ((x737!=x738)*(x739|x740));

    if (t184 != -1) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x741 = 3485581113507186237LL;
	static int32_t x742 = INT32_MIN;
	int8_t x743 = -13;
	volatile int32_t t185 = 3;

    t185 = ((x741!=x742)*(x743|x744));

    if (t185 != -1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x745 = 37485201355018346LLU;
	int16_t x746 = -1;
	volatile uint8_t x747 = 24U;
	uint16_t x748 = 328U;
	volatile int32_t t186 = -2;

    t186 = ((x745!=x746)*(x747|x748));

    if (t186 != 344) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int16_t x750 = INT16_MAX;
	int8_t x751 = INT8_MAX;
	volatile int32_t t187 = -4887;

    t187 = ((x749!=x750)*(x751|x752));

    if (t187 != -1) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x753 = -4;
	static int64_t x754 = -631966022722673LL;
	int32_t x755 = -1058895257;
	static int32_t x756 = INT32_MIN;
	int32_t t188 = -2020342;

    t188 = ((x753!=x754)*(x755|x756));

    if (t188 != -1058895257) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x757 = 25U;
	int16_t x758 = INT16_MAX;
	uint64_t x759 = UINT64_MAX;
	static uint32_t x760 = 0U;

    t189 = ((x757!=x758)*(x759|x760));

    if (t189 != UINT64_MAX) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x762 = INT64_MIN;
	int16_t x763 = 7;
	int16_t x764 = -3982;
	volatile int32_t t190 = -254741;

    t190 = ((x761!=x762)*(x763|x764));

    if (t190 != -3977) { NG(); } else { ; }
	
}

void f191(void) {
    	static int64_t x765 = 1311052563800796606LL;
	static volatile int32_t x767 = -108313;
	int32_t t191 = -1;

    t191 = ((x765!=x766)*(x767|x768));

    if (t191 != -108313) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x769 = 897678LLU;
	volatile int64_t x770 = INT64_MIN;
	uint8_t x772 = 33U;
	volatile int32_t t192 = -2;

    t192 = ((x769!=x770)*(x771|x772));

    if (t192 != -2147483615) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x773 = 2197U;
	static uint32_t x774 = 10460U;
	uint16_t x775 = 179U;
	int16_t x776 = INT16_MIN;
	static volatile int32_t t193 = 20525;

    t193 = ((x773!=x774)*(x775|x776));

    if (t193 != -32589) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x777 = 0;
	int8_t x778 = INT8_MIN;
	static int8_t x779 = -1;

    t194 = ((x777!=x778)*(x779|x780));

    if (t194 != -1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x781 = 2U;
	int16_t x782 = -1;
	volatile uint64_t t195 = 7241490570LLU;

    t195 = ((x781!=x782)*(x783|x784));

    if (t195 != 9223506326792248893LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x786 = 1;
	static volatile int64_t x787 = -1LL;
	volatile int64_t t196 = 621888LL;

    t196 = ((x785!=x786)*(x787|x788));

    if (t196 != -1LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x790 = INT8_MIN;
	int8_t x791 = 1;
	volatile uint16_t x792 = UINT16_MAX;
	static volatile int32_t t197 = 116924;

    t197 = ((x789!=x790)*(x791|x792));

    if (t197 != 65535) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint32_t x793 = 12301U;
	int32_t x794 = -75;
	uint8_t x795 = 13U;
	uint32_t x796 = 3U;
	static uint32_t t198 = 6841U;

    t198 = ((x793!=x794)*(x795|x796));

    if (t198 != 15U) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x797 = INT16_MAX;
	int32_t x799 = INT32_MIN;
	volatile int8_t x800 = -3;

    t199 = ((x797!=x798)*(x799|x800));

    if (t199 != -3) { NG(); } else { ; }
	
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

