
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

int8_t x7 = INT8_MAX;
int8_t x10 = INT8_MAX;
int32_t x16 = -3;
static int16_t x17 = INT16_MAX;
static int8_t x19 = -27;
int8_t x20 = 6;
volatile int32_t t5 = INT32_MAX;
int64_t x28 = -1LL;
int64_t x30 = -32327020LL;
volatile int64_t x31 = INT64_MIN;
uint8_t x34 = UINT8_MAX;
volatile uint16_t x37 = UINT16_MAX;
volatile uint16_t x40 = UINT16_MAX;
int32_t t9 = 8;
int32_t t11 = -1555;
int8_t x51 = INT8_MIN;
volatile uint32_t x52 = 13140070U;
static volatile int32_t t14 = -236;
static uint8_t x61 = UINT8_MAX;
static int32_t t15 = -7406170;
int32_t x69 = INT32_MIN;
int64_t t18 = 578594209281711LL;
int16_t x80 = -1;
volatile int32_t t19 = 28276;
volatile int32_t x85 = INT32_MIN;
volatile int8_t x87 = INT8_MIN;
int64_t x91 = 25538053037843LL;
uint8_t x92 = 6U;
volatile uint64_t t22 = UINT64_MAX;
uint64_t x94 = 652233009636287320LLU;
static volatile int8_t x103 = -9;
volatile uint64_t x107 = 584LLU;
static int16_t x109 = -1;
int8_t x110 = INT8_MAX;
uint32_t x111 = UINT32_MAX;
int64_t x114 = -13964131LL;
static uint16_t x116 = 101U;
volatile int32_t t28 = -79546;
static volatile int32_t x121 = -15;
static int16_t x123 = INT16_MIN;
volatile int32_t t30 = -40;
static int16_t x129 = 5;
int64_t x135 = -1LL;
uint16_t x136 = 20225U;
int64_t x140 = INT64_MIN;
static volatile int32_t t34 = -393151117;
static volatile uint16_t x145 = UINT16_MAX;
static uint64_t x150 = 747LLU;
volatile int16_t x156 = INT16_MAX;
static int32_t x164 = -27;
static volatile uint32_t x166 = 1U;
volatile uint32_t x175 = 121248843U;
static volatile int32_t t44 = -83636284;
static int32_t x196 = INT32_MIN;
int32_t t46 = -91359807;
int32_t x199 = INT32_MIN;
int64_t x201 = -6409286715019LL;
uint32_t x212 = UINT32_MAX;
static volatile uint64_t t52 = 682LLU;
int64_t x222 = 189LL;
volatile int32_t t54 = 118559;
static volatile int32_t t56 = 126196;
volatile uint16_t x238 = 603U;
volatile int8_t x246 = INT8_MIN;
uint64_t x247 = 307616673790LLU;
int32_t t58 = -2081750;
int64_t x256 = INT64_MIN;
volatile uint8_t x258 = 0U;
int8_t x262 = -1;
uint32_t x267 = 2148U;
volatile int64_t x271 = 433053555778647924LL;
uint64_t x272 = UINT64_MAX;
uint16_t x276 = 32539U;
uint32_t x284 = UINT32_MAX;
static uint8_t x290 = UINT8_MAX;
uint8_t x293 = UINT8_MAX;
static volatile int8_t x297 = -2;
volatile uint32_t x298 = UINT32_MAX;
volatile int32_t t69 = 478610;
int16_t x302 = -1;
volatile int32_t t71 = 2284;
int8_t x318 = INT8_MIN;
int32_t x320 = -1;
int8_t x324 = -2;
int8_t x331 = 1;
static int16_t x336 = -1;
int8_t x337 = INT8_MIN;
static int32_t x338 = -1;
volatile int32_t t78 = -93400369;
static uint8_t x345 = UINT8_MAX;
uint32_t x346 = UINT32_MAX;
static volatile int32_t t80 = -335;
static int32_t x361 = INT32_MAX;
uint8_t x364 = 6U;
static volatile int32_t t84 = INT32_MAX;
int16_t x365 = -1284;
uint32_t x366 = 905U;
static int16_t x368 = INT16_MAX;
uint64_t x373 = 106764LLU;
int8_t x376 = INT8_MIN;
volatile int64_t x377 = 2213154311184445LL;
int64_t t88 = -14369661300345872LL;
int8_t x381 = INT8_MIN;
int8_t x387 = INT8_MIN;
int32_t t90 = -5;
static int8_t x391 = -3;
volatile int32_t t91 = -49;
int64_t x393 = -1LL;
static int64_t x407 = -1LL;
volatile int32_t x419 = -17;
static uint16_t x425 = 1548U;
int32_t x430 = INT32_MAX;
volatile int32_t t100 = -1;
int16_t x439 = INT16_MIN;
int64_t x445 = INT64_MAX;
volatile int64_t t103 = INT64_MAX;
int32_t x449 = INT32_MIN;
int16_t x451 = 5077;
uint64_t x459 = UINT64_MAX;
static uint8_t x467 = UINT8_MAX;
volatile uint8_t x475 = 104U;
int16_t x479 = -1;
volatile int32_t t112 = 2388;
uint64_t x489 = 66543691LLU;
static int16_t x492 = INT16_MIN;
volatile int32_t x493 = INT32_MIN;
volatile int32_t t114 = INT32_MIN;
int64_t x530 = -1LL;
static int8_t x531 = -13;
int64_t x539 = INT64_MAX;
int64_t t122 = -1443271732763500LL;
int64_t x546 = INT64_MIN;
uint32_t t124 = UINT32_MAX;
int16_t x551 = INT16_MIN;
volatile int64_t x555 = 527717033LL;
static int64_t x557 = 353LL;
uint32_t x560 = 67U;
uint64_t t129 = UINT64_MAX;
uint8_t x578 = 120U;
int32_t t133 = -1743;
static volatile int32_t x592 = 14;
int64_t t134 = INT64_MIN;
uint8_t x597 = UINT8_MAX;
static int8_t x598 = 12;
int8_t x605 = 0;
volatile int64_t x608 = -1LL;
static uint64_t x615 = UINT64_MAX;
int32_t x619 = -911593862;
uint64_t x620 = 202931208186LLU;
int64_t x627 = 265664LL;
int8_t x629 = INT8_MAX;
uint16_t x633 = UINT16_MAX;
uint8_t x634 = 26U;
int16_t x643 = 3232;
int8_t x651 = -23;
static volatile int32_t x652 = -1;
int64_t t147 = -96252673334LL;
uint16_t x663 = 89U;
volatile int32_t x674 = -1;
int64_t x676 = 1858120797431515LL;
int8_t x679 = 0;
int64_t x680 = INT64_MAX;
int8_t x682 = 1;
static int8_t x696 = -1;
volatile int16_t x707 = INT16_MIN;
int8_t x708 = INT8_MIN;
static volatile uint8_t x726 = 1U;
int32_t x728 = INT32_MIN;
int32_t t164 = INT32_MIN;
static int32_t x733 = INT32_MAX;
int16_t x735 = INT16_MIN;
int32_t t166 = INT32_MAX;
volatile uint32_t x746 = UINT32_MAX;
int64_t x748 = 38751LL;
volatile int8_t x756 = INT8_MIN;
int64_t x766 = INT64_MIN;
volatile int32_t t174 = INT32_MAX;
volatile int8_t x770 = INT8_MAX;
int8_t x772 = -1;
int32_t x777 = 54;
uint16_t x779 = UINT16_MAX;
volatile uint32_t t177 = 456850852U;
int64_t x785 = INT64_MIN;
static int16_t x787 = INT16_MAX;
int64_t t178 = INT64_MIN;
static int16_t x790 = -10;
int32_t t179 = 3;
volatile int64_t x796 = INT64_MIN;
volatile uint8_t x801 = UINT8_MAX;
uint16_t x804 = 3U;
volatile int32_t t182 = 153919;
static volatile uint64_t x809 = UINT64_MAX;
volatile uint64_t t184 = UINT64_MAX;
static int16_t x827 = INT16_MIN;
int64_t x829 = -388900406491097LL;
volatile int64_t x831 = -1LL;
static int64_t t189 = -503985898035958792LL;
int8_t x833 = -1;
volatile uint32_t x835 = 2310688U;
static int32_t t190 = -2660137;
static int16_t x838 = INT16_MIN;
uint32_t x845 = 782U;
static uint8_t x854 = UINT8_MAX;
volatile int8_t x855 = INT8_MIN;
uint16_t x856 = UINT16_MAX;
static int16_t x861 = INT16_MAX;
static int32_t t198 = 93694402;


void f0(void) {
    	static uint16_t x1 = UINT16_MAX;
	int16_t x2 = 12;
	int64_t x3 = 480411659438LL;
	uint8_t x4 = 2U;
	static int32_t t0 = -33298377;

    t0 = (x1^(x2==(x3-x4)));

    if (t0 != 65535) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MIN;
	volatile int32_t x6 = INT32_MIN;
	static int16_t x8 = -1;
	volatile int32_t t1 = -227132065;

    t1 = (x5^(x6==(x7-x8)));

    if (t1 != -128) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile uint64_t x9 = 3826346773153086851LLU;
	volatile uint8_t x11 = 26U;
	uint64_t x12 = 0LLU;
	uint64_t t2 = 169703341LLU;

    t2 = (x9^(x10==(x11-x12)));

    if (t2 != 3826346773153086851LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = INT64_MIN;
	uint32_t x14 = 246U;
	int64_t x15 = -1LL;
	int64_t t3 = INT64_MIN;

    t3 = (x13^(x14==(x15-x16)));

    if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x18 = INT8_MIN;
	int32_t t4 = 115;

    t4 = (x17^(x18==(x19-x20)));

    if (t4 != 32767) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = INT32_MAX;
	uint8_t x22 = UINT8_MAX;
	uint8_t x23 = 30U;
	int16_t x24 = INT16_MIN;

    t5 = (x21^(x22==(x23-x24)));

    if (t5 != INT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = 454959LLU;
	int16_t x26 = INT16_MIN;
	static volatile int32_t x27 = INT32_MIN;
	volatile uint64_t t6 = 72238013LLU;

    t6 = (x25^(x26==(x27-x28)));

    if (t6 != 454959LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = -1;
	uint64_t x32 = 241232802LLU;
	volatile int32_t t7 = 93;

    t7 = (x29^(x30==(x31-x32)));

    if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint64_t x33 = 2LLU;
	static volatile uint64_t x35 = 1523571573487426196LLU;
	static int32_t x36 = -1;
	volatile uint64_t t8 = 4758729LLU;

    t8 = (x33^(x34==(x35-x36)));

    if (t8 != 2LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x38 = 45U;
	uint64_t x39 = 6556761699252LLU;

    t9 = (x37^(x38==(x39-x40)));

    if (t9 != 65535) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x41 = UINT16_MAX;
	int16_t x42 = -1;
	volatile int32_t x43 = -1;
	int8_t x44 = -1;
	volatile int32_t t10 = 15943231;

    t10 = (x41^(x42==(x43-x44)));

    if (t10 != 65535) { NG(); } else { ; }
	
}

void f11(void) {
    	static int8_t x45 = 0;
	uint64_t x46 = 1609LLU;
	volatile int16_t x47 = INT16_MAX;
	uint32_t x48 = UINT32_MAX;

    t11 = (x45^(x46==(x47-x48)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x49 = UINT16_MAX;
	int8_t x50 = 43;
	int32_t t12 = -321994;

    t12 = (x49^(x50==(x51-x52)));

    if (t12 != 65535) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = -58622762;
	volatile int16_t x54 = INT16_MIN;
	uint16_t x55 = 6U;
	uint8_t x56 = 17U;
	int32_t t13 = -9158;

    t13 = (x53^(x54==(x55-x56)));

    if (t13 != -58622762) { NG(); } else { ; }
	
}

void f14(void) {
    	static int16_t x57 = -1;
	int16_t x58 = INT16_MAX;
	static uint32_t x59 = UINT32_MAX;
	volatile uint32_t x60 = 12U;

    t14 = (x57^(x58==(x59-x60)));

    if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint64_t x62 = UINT64_MAX;
	uint8_t x63 = 26U;
	static int32_t x64 = -21125118;

    t15 = (x61^(x62==(x63-x64)));

    if (t15 != 255) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = -880267450;
	int16_t x66 = INT16_MIN;
	volatile int64_t x67 = INT64_MIN;
	int64_t x68 = -15770681593390386LL;
	volatile int32_t t16 = -1;

    t16 = (x65^(x66==(x67-x68)));

    if (t16 != -880267450) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x70 = UINT16_MAX;
	int8_t x71 = -4;
	int16_t x72 = INT16_MIN;
	int32_t t17 = INT32_MIN;

    t17 = (x69^(x70==(x71-x72)));

    if (t17 != INT32_MIN) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x73 = -1LL;
	int64_t x74 = INT64_MIN;
	static int8_t x75 = 1;
	int64_t x76 = INT64_MAX;

    t18 = (x73^(x74==(x75-x76)));

    if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = INT8_MIN;
	int16_t x78 = INT16_MIN;
	static volatile uint32_t x79 = 10U;

    t19 = (x77^(x78==(x79-x80)));

    if (t19 != -128) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x81 = UINT16_MAX;
	static uint64_t x82 = UINT64_MAX;
	uint64_t x83 = UINT64_MAX;
	int8_t x84 = 14;
	volatile int32_t t20 = -7;

    t20 = (x81^(x82==(x83-x84)));

    if (t20 != 65535) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x86 = -31045489713LL;
	int16_t x88 = -4;
	volatile int32_t t21 = INT32_MIN;

    t21 = (x85^(x86==(x87-x88)));

    if (t21 != INT32_MIN) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x89 = UINT64_MAX;
	int16_t x90 = INT16_MIN;

    t22 = (x89^(x90==(x91-x92)));

    if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x93 = -1;
	int16_t x95 = 348;
	uint16_t x96 = 49U;
	int32_t t23 = 232821622;

    t23 = (x93^(x94==(x95-x96)));

    if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = -1;
	volatile int64_t x98 = INT64_MAX;
	int64_t x99 = -305220403LL;
	static int16_t x100 = INT16_MAX;
	static int32_t t24 = 9540075;

    t24 = (x97^(x98==(x99-x100)));

    if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x101 = INT16_MIN;
	uint8_t x102 = 1U;
	uint32_t x104 = UINT32_MAX;
	int32_t t25 = -21;

    t25 = (x101^(x102==(x103-x104)));

    if (t25 != -32768) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int16_t x105 = 40;
	int32_t x106 = INT32_MIN;
	static volatile int8_t x108 = 2;
	volatile int32_t t26 = 16196;

    t26 = (x105^(x106==(x107-x108)));

    if (t26 != 40) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x112 = INT8_MIN;
	volatile int32_t t27 = -17443165;

    t27 = (x109^(x110==(x111-x112)));

    if (t27 != -2) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = -1;
	static int32_t x115 = -7322545;

    t28 = (x113^(x114==(x115-x116)));

    if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x117 = UINT64_MAX;
	volatile uint64_t x118 = 3478627927764LLU;
	volatile int32_t x119 = 719;
	uint64_t x120 = 289776LLU;
	uint64_t t29 = UINT64_MAX;

    t29 = (x117^(x118==(x119-x120)));

    if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x122 = INT16_MIN;
	int8_t x124 = 2;

    t30 = (x121^(x122==(x123-x124)));

    if (t30 != -15) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int8_t x130 = INT8_MIN;
	static int16_t x131 = INT16_MAX;
	int8_t x132 = INT8_MAX;
	volatile int32_t t31 = -5072;

    t31 = (x129^(x130==(x131-x132)));

    if (t31 != 5) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x133 = 8257859892LL;
	int8_t x134 = INT8_MIN;
	volatile int64_t t32 = -22796454LL;

    t32 = (x133^(x134==(x135-x136)));

    if (t32 != 8257859892LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x137 = INT32_MIN;
	uint64_t x138 = 1810LLU;
	int8_t x139 = INT8_MIN;
	volatile int32_t t33 = INT32_MIN;

    t33 = (x137^(x138==(x139-x140)));

    if (t33 != INT32_MIN) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x141 = 6U;
	uint8_t x142 = 68U;
	int64_t x143 = INT64_MAX;
	uint16_t x144 = 106U;

    t34 = (x141^(x142==(x143-x144)));

    if (t34 != 6) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x146 = INT64_MIN;
	static int16_t x147 = 5;
	int8_t x148 = -1;
	int32_t t35 = 6;

    t35 = (x145^(x146==(x147-x148)));

    if (t35 != 65535) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x149 = INT64_MIN;
	int8_t x151 = INT8_MIN;
	int32_t x152 = -1;
	int64_t t36 = INT64_MIN;

    t36 = (x149^(x150==(x151-x152)));

    if (t36 != INT64_MIN) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x153 = -319742963535LL;
	int64_t x154 = INT64_MIN;
	uint32_t x155 = 2006948159U;
	volatile int64_t t37 = -27300038379398LL;

    t37 = (x153^(x154==(x155-x156)));

    if (t37 != -319742963535LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint64_t x157 = 1217036LLU;
	uint32_t x158 = 77924427U;
	int32_t x159 = -85;
	static int32_t x160 = -1;
	static uint64_t t38 = 17264201609208LLU;

    t38 = (x157^(x158==(x159-x160)));

    if (t38 != 1217036LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x161 = INT16_MIN;
	uint32_t x162 = 1686337U;
	int16_t x163 = -1;
	volatile int32_t t39 = -930750;

    t39 = (x161^(x162==(x163-x164)));

    if (t39 != -32768) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x165 = INT8_MIN;
	volatile int16_t x167 = 0;
	int32_t x168 = INT32_MAX;
	int32_t t40 = -62103085;

    t40 = (x165^(x166==(x167-x168)));

    if (t40 != -128) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x169 = UINT64_MAX;
	int8_t x170 = INT8_MIN;
	int64_t x171 = 12LL;
	volatile int32_t x172 = -1;
	static uint64_t t41 = UINT64_MAX;

    t41 = (x169^(x170==(x171-x172)));

    if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
    	static int32_t x173 = INT32_MIN;
	uint16_t x174 = 128U;
	uint64_t x176 = UINT64_MAX;
	volatile int32_t t42 = INT32_MIN;

    t42 = (x173^(x174==(x175-x176)));

    if (t42 != INT32_MIN) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x181 = INT8_MIN;
	int64_t x182 = -102LL;
	uint32_t x183 = 4050074U;
	uint8_t x184 = 17U;
	static int32_t t43 = -48587550;

    t43 = (x181^(x182==(x183-x184)));

    if (t43 != -128) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x185 = 0;
	volatile int8_t x186 = INT8_MAX;
	int8_t x187 = -29;
	int64_t x188 = -14657425347742115LL;

    t44 = (x185^(x186==(x187-x188)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x189 = UINT16_MAX;
	uint64_t x190 = UINT64_MAX;
	int8_t x191 = -1;
	volatile uint16_t x192 = 205U;
	static int32_t t45 = -220780;

    t45 = (x189^(x190==(x191-x192)));

    if (t45 != 65535) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x193 = 449;
	static volatile uint32_t x194 = 149947560U;
	int64_t x195 = INT64_MIN;

    t46 = (x193^(x194==(x195-x196)));

    if (t46 != 449) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int64_t x197 = INT64_MIN;
	uint32_t x198 = 5U;
	int64_t x200 = -5098376314LL;
	static volatile int64_t t47 = INT64_MIN;

    t47 = (x197^(x198==(x199-x200)));

    if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
    	static int32_t x202 = INT32_MIN;
	uint64_t x203 = 67612028717825381LLU;
	volatile int8_t x204 = 0;
	volatile int64_t t48 = 1933LL;

    t48 = (x201^(x202==(x203-x204)));

    if (t48 != -6409286715019LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x205 = UINT8_MAX;
	static volatile int32_t x206 = INT32_MIN;
	volatile int16_t x207 = INT16_MIN;
	static volatile int16_t x208 = -1;
	volatile int32_t t49 = 2053066;

    t49 = (x205^(x206==(x207-x208)));

    if (t49 != 255) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x209 = INT64_MAX;
	int64_t x210 = -1LL;
	int32_t x211 = 90078;
	int64_t t50 = INT64_MAX;

    t50 = (x209^(x210==(x211-x212)));

    if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
    	static int32_t x213 = INT32_MIN;
	int16_t x214 = -1142;
	int16_t x215 = -1;
	int32_t x216 = 1946628;
	int32_t t51 = INT32_MIN;

    t51 = (x213^(x214==(x215-x216)));

    if (t51 != INT32_MIN) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x217 = 318744208LLU;
	int32_t x218 = -15;
	int8_t x219 = -2;
	static int8_t x220 = INT8_MIN;

    t52 = (x217^(x218==(x219-x220)));

    if (t52 != 318744208LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x221 = -3331;
	int32_t x223 = -1;
	int8_t x224 = INT8_MIN;
	volatile int32_t t53 = -17309562;

    t53 = (x221^(x222==(x223-x224)));

    if (t53 != -3331) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x225 = -39;
	int64_t x226 = 878635091LL;
	static int8_t x227 = -1;
	uint32_t x228 = UINT32_MAX;

    t54 = (x225^(x226==(x227-x228)));

    if (t54 != -39) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x229 = -247092792691LL;
	int8_t x230 = -10;
	int32_t x231 = -1;
	static uint8_t x232 = 19U;
	volatile int64_t t55 = 1LL;

    t55 = (x229^(x230==(x231-x232)));

    if (t55 != -247092792691LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x233 = -1;
	int64_t x234 = 14514LL;
	volatile uint16_t x235 = 13U;
	int16_t x236 = 1906;

    t56 = (x233^(x234==(x235-x236)));

    if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x237 = -1LL;
	static int32_t x239 = INT32_MIN;
	volatile int16_t x240 = INT16_MIN;
	volatile int64_t t57 = -5560879094299165LL;

    t57 = (x237^(x238==(x239-x240)));

    if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x245 = -1;
	int8_t x248 = INT8_MIN;

    t58 = (x245^(x246==(x247-x248)));

    if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x253 = INT64_MAX;
	int32_t x254 = -524708768;
	volatile int32_t x255 = INT32_MIN;
	volatile int64_t t59 = INT64_MAX;

    t59 = (x253^(x254==(x255-x256)));

    if (t59 != INT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x257 = 10331653;
	int32_t x259 = -310864;
	int16_t x260 = INT16_MIN;
	volatile int32_t t60 = 9565483;

    t60 = (x257^(x258==(x259-x260)));

    if (t60 != 10331653) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x261 = INT8_MIN;
	int16_t x263 = -1;
	int32_t x264 = INT32_MIN;
	int32_t t61 = -25556954;

    t61 = (x261^(x262==(x263-x264)));

    if (t61 != -128) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x265 = 9708U;
	static int16_t x266 = INT16_MIN;
	int8_t x268 = -1;
	volatile int32_t t62 = 62153;

    t62 = (x265^(x266==(x267-x268)));

    if (t62 != 9708) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int32_t x269 = INT32_MAX;
	uint32_t x270 = 822548U;
	volatile int32_t t63 = INT32_MAX;

    t63 = (x269^(x270==(x271-x272)));

    if (t63 != INT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x273 = INT64_MAX;
	uint32_t x274 = UINT32_MAX;
	volatile int8_t x275 = -1;
	int64_t t64 = INT64_MAX;

    t64 = (x273^(x274==(x275-x276)));

    if (t64 != INT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x281 = UINT8_MAX;
	int32_t x282 = INT32_MAX;
	int64_t x283 = -58625373784998961LL;
	volatile int32_t t65 = 8;

    t65 = (x281^(x282==(x283-x284)));

    if (t65 != 255) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint16_t x285 = UINT16_MAX;
	uint32_t x286 = 45258U;
	static int32_t x287 = INT32_MIN;
	int32_t x288 = -1;
	static int32_t t66 = 234201773;

    t66 = (x285^(x286==(x287-x288)));

    if (t66 != 65535) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint64_t x289 = 52388084504358LLU;
	volatile uint8_t x291 = 73U;
	uint64_t x292 = UINT64_MAX;
	volatile uint64_t t67 = 794590519LLU;

    t67 = (x289^(x290==(x291-x292)));

    if (t67 != 52388084504358LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int64_t x294 = INT64_MIN;
	uint16_t x295 = 4U;
	uint8_t x296 = 1U;
	static int32_t t68 = 0;

    t68 = (x293^(x294==(x295-x296)));

    if (t68 != 255) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x299 = UINT32_MAX;
	volatile uint64_t x300 = 17152297452LLU;

    t69 = (x297^(x298==(x299-x300)));

    if (t69 != -2) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint8_t x301 = 23U;
	uint64_t x303 = 0LLU;
	int16_t x304 = -231;
	volatile int32_t t70 = -248;

    t70 = (x301^(x302==(x303-x304)));

    if (t70 != 23) { NG(); } else { ; }
	
}

void f71(void) {
    	static int8_t x309 = INT8_MAX;
	static int16_t x310 = 0;
	int8_t x311 = INT8_MIN;
	volatile uint8_t x312 = UINT8_MAX;

    t71 = (x309^(x310==(x311-x312)));

    if (t71 != 127) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint16_t x313 = 531U;
	uint16_t x314 = 242U;
	volatile int8_t x315 = 0;
	volatile int64_t x316 = -15095527662LL;
	int32_t t72 = -105340;

    t72 = (x313^(x314==(x315-x316)));

    if (t72 != 531) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x317 = INT32_MAX;
	int8_t x319 = INT8_MIN;
	static int32_t t73 = INT32_MAX;

    t73 = (x317^(x318==(x319-x320)));

    if (t73 != INT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint16_t x321 = 13866U;
	static uint32_t x322 = UINT32_MAX;
	uint16_t x323 = 26U;
	int32_t t74 = -653294;

    t74 = (x321^(x322==(x323-x324)));

    if (t74 != 13866) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x325 = INT32_MIN;
	volatile int32_t x326 = -1;
	int16_t x327 = -1;
	uint16_t x328 = UINT16_MAX;
	static int32_t t75 = INT32_MIN;

    t75 = (x325^(x326==(x327-x328)));

    if (t75 != INT32_MIN) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint32_t x329 = 1692621U;
	static int8_t x330 = -1;
	volatile uint64_t x332 = 2LLU;
	uint32_t t76 = 324376428U;

    t76 = (x329^(x330==(x331-x332)));

    if (t76 != 1692620U) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x333 = -1;
	int8_t x334 = INT8_MIN;
	int8_t x335 = -1;
	int32_t t77 = 0;

    t77 = (x333^(x334==(x335-x336)));

    if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x339 = INT8_MIN;
	int64_t x340 = -1863703414138253LL;

    t78 = (x337^(x338==(x339-x340)));

    if (t78 != -128) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x341 = UINT16_MAX;
	uint64_t x342 = 1057439446666227336LLU;
	static uint32_t x343 = 26U;
	int32_t x344 = -1504;
	static volatile int32_t t79 = 3957863;

    t79 = (x341^(x342==(x343-x344)));

    if (t79 != 65535) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x347 = 0;
	int64_t x348 = 406LL;

    t80 = (x345^(x346==(x347-x348)));

    if (t80 != 255) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int64_t x349 = 340592672LL;
	int32_t x350 = -6;
	uint16_t x351 = 15478U;
	static int8_t x352 = -1;
	volatile int64_t t81 = 1070326832013090LL;

    t81 = (x349^(x350==(x351-x352)));

    if (t81 != 340592672LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint32_t x353 = 6191598U;
	uint16_t x354 = 228U;
	static int8_t x355 = INT8_MIN;
	int64_t x356 = INT64_MIN;
	static uint32_t t82 = 246531555U;

    t82 = (x353^(x354==(x355-x356)));

    if (t82 != 6191598U) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint32_t x357 = UINT32_MAX;
	volatile uint16_t x358 = 71U;
	int64_t x359 = 4656LL;
	uint64_t x360 = 28237306799120LLU;
	volatile uint32_t t83 = UINT32_MAX;

    t83 = (x357^(x358==(x359-x360)));

    if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x362 = 0;
	static uint8_t x363 = 5U;

    t84 = (x361^(x362==(x363-x364)));

    if (t84 != INT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x367 = -1;
	volatile int32_t t85 = -584;

    t85 = (x365^(x366==(x367-x368)));

    if (t85 != -1284) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x369 = INT8_MIN;
	uint16_t x370 = 29U;
	volatile uint8_t x371 = 2U;
	int64_t x372 = 13916701677LL;
	volatile int32_t t86 = 24;

    t86 = (x369^(x370==(x371-x372)));

    if (t86 != -128) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x374 = -1;
	int64_t x375 = INT64_MIN;
	volatile uint64_t t87 = 2799444679031258363LLU;

    t87 = (x373^(x374==(x375-x376)));

    if (t87 != 106764LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x378 = 127U;
	volatile int8_t x379 = 9;
	uint64_t x380 = UINT64_MAX;

    t88 = (x377^(x378==(x379-x380)));

    if (t88 != 2213154311184445LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x382 = 244305U;
	uint64_t x383 = 29128961965383927LLU;
	volatile int8_t x384 = INT8_MAX;
	int32_t t89 = 22;

    t89 = (x381^(x382==(x383-x384)));

    if (t89 != -128) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x385 = -819;
	volatile uint16_t x386 = UINT16_MAX;
	static int16_t x388 = -1;

    t90 = (x385^(x386==(x387-x388)));

    if (t90 != -819) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x389 = INT16_MIN;
	uint64_t x390 = 51711539637068LLU;
	uint64_t x392 = 1LLU;

    t91 = (x389^(x390==(x391-x392)));

    if (t91 != -32768) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x394 = INT32_MIN;
	int8_t x395 = INT8_MIN;
	uint64_t x396 = 4124922700LLU;
	int64_t t92 = 8513252969957688LL;

    t92 = (x393^(x394==(x395-x396)));

    if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile int16_t x397 = 638;
	int64_t x398 = 462LL;
	volatile int64_t x399 = -14611647182350LL;
	uint8_t x400 = 41U;
	int32_t t93 = 25578048;

    t93 = (x397^(x398==(x399-x400)));

    if (t93 != 638) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x401 = INT8_MIN;
	static int32_t x402 = INT32_MAX;
	int8_t x403 = INT8_MAX;
	static int8_t x404 = INT8_MIN;
	volatile int32_t t94 = 4515;

    t94 = (x401^(x402==(x403-x404)));

    if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x405 = -1;
	static int8_t x406 = INT8_MIN;
	uint8_t x408 = 1U;
	volatile int32_t t95 = 0;

    t95 = (x405^(x406==(x407-x408)));

    if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x409 = INT8_MIN;
	volatile uint16_t x410 = 2157U;
	uint16_t x411 = UINT16_MAX;
	int16_t x412 = INT16_MIN;
	volatile int32_t t96 = 15982864;

    t96 = (x409^(x410==(x411-x412)));

    if (t96 != -128) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x417 = INT16_MAX;
	int8_t x418 = INT8_MIN;
	int32_t x420 = -13;
	volatile int32_t t97 = -15629385;

    t97 = (x417^(x418==(x419-x420)));

    if (t97 != 32767) { NG(); } else { ; }
	
}

void f98(void) {
    	static int16_t x426 = 10318;
	int32_t x427 = -1;
	int8_t x428 = INT8_MIN;
	int32_t t98 = 5973;

    t98 = (x425^(x426==(x427-x428)));

    if (t98 != 1548) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x429 = INT8_MIN;
	int8_t x431 = INT8_MIN;
	static int16_t x432 = -11;
	int32_t t99 = 4512276;

    t99 = (x429^(x430==(x431-x432)));

    if (t99 != -128) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x433 = -1;
	int32_t x434 = -1;
	static uint8_t x435 = UINT8_MAX;
	uint16_t x436 = 0U;

    t100 = (x433^(x434==(x435-x436)));

    if (t100 != -1) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x437 = INT8_MIN;
	uint16_t x438 = UINT16_MAX;
	volatile uint32_t x440 = UINT32_MAX;
	int32_t t101 = 16151751;

    t101 = (x437^(x438==(x439-x440)));

    if (t101 != -128) { NG(); } else { ; }
	
}

void f102(void) {
    	static int64_t x441 = INT64_MIN;
	uint16_t x442 = UINT16_MAX;
	uint16_t x443 = UINT16_MAX;
	static int8_t x444 = 9;
	int64_t t102 = INT64_MIN;

    t102 = (x441^(x442==(x443-x444)));

    if (t102 != INT64_MIN) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x446 = 15U;
	uint32_t x447 = UINT32_MAX;
	int8_t x448 = -1;

    t103 = (x445^(x446==(x447-x448)));

    if (t103 != INT64_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	static int16_t x450 = INT16_MIN;
	static volatile int32_t x452 = 1894942;
	volatile int32_t t104 = INT32_MIN;

    t104 = (x449^(x450==(x451-x452)));

    if (t104 != INT32_MIN) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x453 = 108U;
	static uint16_t x454 = 29195U;
	uint32_t x455 = 41U;
	volatile int32_t x456 = INT32_MAX;
	int32_t t105 = 1275;

    t105 = (x453^(x454==(x455-x456)));

    if (t105 != 108) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x457 = -1;
	int16_t x458 = INT16_MAX;
	uint64_t x460 = UINT64_MAX;
	int32_t t106 = -4013;

    t106 = (x457^(x458==(x459-x460)));

    if (t106 != -1) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x461 = INT8_MAX;
	int16_t x462 = -1;
	int32_t x463 = -1;
	volatile uint16_t x464 = 8U;
	int32_t t107 = 240;

    t107 = (x461^(x462==(x463-x464)));

    if (t107 != 127) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile uint64_t x465 = 630409726LLU;
	int64_t x466 = INT64_MIN;
	volatile int32_t x468 = -1;
	uint64_t t108 = 22LLU;

    t108 = (x465^(x466==(x467-x468)));

    if (t108 != 630409726LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x469 = 1U;
	uint16_t x470 = 12U;
	uint8_t x471 = 57U;
	int8_t x472 = -1;
	uint32_t t109 = 854031007U;

    t109 = (x469^(x470==(x471-x472)));

    if (t109 != 1U) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x473 = -1;
	int32_t x474 = INT32_MAX;
	static int64_t x476 = -1LL;
	static int32_t t110 = -1;

    t110 = (x473^(x474==(x475-x476)));

    if (t110 != -1) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint8_t x477 = 22U;
	int16_t x478 = INT16_MIN;
	int64_t x480 = -1LL;
	volatile int32_t t111 = -372238167;

    t111 = (x477^(x478==(x479-x480)));

    if (t111 != 22) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x485 = UINT16_MAX;
	int8_t x486 = -1;
	static uint64_t x487 = 50375573461708LLU;
	volatile int8_t x488 = INT8_MAX;

    t112 = (x485^(x486==(x487-x488)));

    if (t112 != 65535) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x490 = INT16_MAX;
	volatile int16_t x491 = INT16_MIN;
	uint64_t t113 = 788641504592LLU;

    t113 = (x489^(x490==(x491-x492)));

    if (t113 != 66543691LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x494 = 102U;
	int64_t x495 = INT64_MIN;
	uint64_t x496 = 15120573353LLU;

    t114 = (x493^(x494==(x495-x496)));

    if (t114 != INT32_MIN) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x497 = INT16_MAX;
	volatile int32_t x498 = -1;
	volatile int64_t x499 = -13LL;
	int16_t x500 = 1;
	volatile int32_t t115 = -255427227;

    t115 = (x497^(x498==(x499-x500)));

    if (t115 != 32767) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x501 = 3065U;
	int64_t x502 = INT64_MAX;
	int16_t x503 = INT16_MIN;
	uint32_t x504 = 2328U;
	int32_t t116 = -13;

    t116 = (x501^(x502==(x503-x504)));

    if (t116 != 3065) { NG(); } else { ; }
	
}

void f117(void) {
    	static int8_t x509 = 30;
	uint8_t x510 = 4U;
	uint64_t x511 = 56839581600LLU;
	static uint32_t x512 = 61U;
	volatile int32_t t117 = 1;

    t117 = (x509^(x510==(x511-x512)));

    if (t117 != 30) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x513 = INT64_MIN;
	static uint8_t x514 = UINT8_MAX;
	int8_t x515 = 0;
	int16_t x516 = -1;
	int64_t t118 = INT64_MIN;

    t118 = (x513^(x514==(x515-x516)));

    if (t118 != INT64_MIN) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x521 = -1;
	static uint64_t x522 = 181035101LLU;
	int64_t x523 = 74LL;
	volatile int8_t x524 = INT8_MIN;
	int32_t t119 = -19559263;

    t119 = (x521^(x522==(x523-x524)));

    if (t119 != -1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x529 = 1118U;
	int64_t x532 = INT64_MIN;
	volatile int32_t t120 = -244724841;

    t120 = (x529^(x530==(x531-x532)));

    if (t120 != 1118) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x533 = UINT64_MAX;
	static int64_t x534 = -1LL;
	int64_t x535 = INT64_MIN;
	volatile int16_t x536 = -3067;
	uint64_t t121 = UINT64_MAX;

    t121 = (x533^(x534==(x535-x536)));

    if (t121 != UINT64_MAX) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x537 = -1LL;
	int32_t x538 = INT32_MIN;
	uint64_t x540 = 657088LLU;

    t122 = (x537^(x538==(x539-x540)));

    if (t122 != -1LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x541 = -291;
	int64_t x542 = INT64_MIN;
	int32_t x543 = -752;
	int8_t x544 = INT8_MIN;
	volatile int32_t t123 = -520120980;

    t123 = (x541^(x542==(x543-x544)));

    if (t123 != -291) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint32_t x545 = UINT32_MAX;
	int8_t x547 = -1;
	uint64_t x548 = UINT64_MAX;

    t124 = (x545^(x546==(x547-x548)));

    if (t124 != UINT32_MAX) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint16_t x549 = 172U;
	int32_t x550 = 6292678;
	int8_t x552 = INT8_MIN;
	volatile int32_t t125 = -4;

    t125 = (x549^(x550==(x551-x552)));

    if (t125 != 172) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x553 = INT16_MIN;
	int16_t x554 = 1;
	volatile int32_t x556 = INT32_MIN;
	int32_t t126 = -441045111;

    t126 = (x553^(x554==(x555-x556)));

    if (t126 != -32768) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x558 = -1;
	uint16_t x559 = 10U;
	volatile int64_t t127 = 932104189LL;

    t127 = (x557^(x558==(x559-x560)));

    if (t127 != 353LL) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int8_t x561 = INT8_MIN;
	volatile uint32_t x562 = UINT32_MAX;
	int32_t x563 = 85;
	uint64_t x564 = 3442622322926LLU;
	int32_t t128 = -23802387;

    t128 = (x561^(x562==(x563-x564)));

    if (t128 != -128) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x565 = UINT64_MAX;
	volatile uint64_t x566 = 5873969393LLU;
	static int32_t x567 = INT32_MIN;
	int16_t x568 = -1;

    t129 = (x565^(x566==(x567-x568)));

    if (t129 != UINT64_MAX) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x569 = INT32_MAX;
	volatile int32_t x570 = INT32_MIN;
	int64_t x571 = -43283788749LL;
	static int32_t x572 = -1078844;
	int32_t t130 = INT32_MAX;

    t130 = (x569^(x570==(x571-x572)));

    if (t130 != INT32_MAX) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x573 = INT64_MIN;
	uint64_t x574 = 332791991761282590LLU;
	int64_t x575 = INT64_MIN;
	uint8_t x576 = 0U;
	volatile int64_t t131 = INT64_MIN;

    t131 = (x573^(x574==(x575-x576)));

    if (t131 != INT64_MIN) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x577 = -2;
	uint64_t x579 = 23362416640449849LLU;
	int32_t x580 = 2748040;
	int32_t t132 = 13806;

    t132 = (x577^(x578==(x579-x580)));

    if (t132 != -2) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint16_t x585 = UINT16_MAX;
	int64_t x586 = 317374961858455LL;
	int8_t x587 = -1;
	static volatile uint64_t x588 = UINT64_MAX;

    t133 = (x585^(x586==(x587-x588)));

    if (t133 != 65535) { NG(); } else { ; }
	
}

void f134(void) {
    	static int64_t x589 = INT64_MIN;
	static int64_t x590 = -71LL;
	uint64_t x591 = 1430LLU;

    t134 = (x589^(x590==(x591-x592)));

    if (t134 != INT64_MIN) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x599 = -1;
	int8_t x600 = -3;
	int32_t t135 = -359324431;

    t135 = (x597^(x598==(x599-x600)));

    if (t135 != 255) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x601 = UINT16_MAX;
	int16_t x602 = -1;
	int16_t x603 = INT16_MIN;
	uint8_t x604 = 3U;
	volatile int32_t t136 = 8;

    t136 = (x601^(x602==(x603-x604)));

    if (t136 != 65535) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x606 = 21U;
	int32_t x607 = INT32_MIN;
	int32_t t137 = 60073;

    t137 = (x605^(x606==(x607-x608)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x613 = -325522;
	static int64_t x614 = 137543871689641418LL;
	int8_t x616 = INT8_MIN;
	volatile int32_t t138 = 39815;

    t138 = (x613^(x614==(x615-x616)));

    if (t138 != -325522) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x617 = INT16_MIN;
	static int8_t x618 = INT8_MAX;
	int32_t t139 = -5746;

    t139 = (x617^(x618==(x619-x620)));

    if (t139 != -32768) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int8_t x621 = -1;
	int16_t x622 = -1;
	int8_t x623 = -1;
	static int16_t x624 = INT16_MIN;
	volatile int32_t t140 = 392803;

    t140 = (x621^(x622==(x623-x624)));

    if (t140 != -1) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile int16_t x625 = -16;
	uint64_t x626 = 5805955302532906417LLU;
	int64_t x628 = INT64_MAX;
	int32_t t141 = -200262;

    t141 = (x625^(x626==(x627-x628)));

    if (t141 != -16) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x630 = -26;
	uint64_t x631 = 1295197084LLU;
	static int32_t x632 = -80151;
	int32_t t142 = -1705550;

    t142 = (x629^(x630==(x631-x632)));

    if (t142 != 127) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x635 = 2381U;
	volatile int32_t x636 = -1;
	int32_t t143 = 871859851;

    t143 = (x633^(x634==(x635-x636)));

    if (t143 != 65535) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x637 = INT32_MIN;
	volatile int8_t x638 = 31;
	static uint8_t x639 = UINT8_MAX;
	int8_t x640 = INT8_MIN;
	int32_t t144 = INT32_MIN;

    t144 = (x637^(x638==(x639-x640)));

    if (t144 != INT32_MIN) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x641 = INT16_MIN;
	int8_t x642 = -1;
	int16_t x644 = INT16_MAX;
	volatile int32_t t145 = -1;

    t145 = (x641^(x642==(x643-x644)));

    if (t145 != -32768) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x649 = -1;
	volatile uint64_t x650 = 757LLU;
	int32_t t146 = -40141927;

    t146 = (x649^(x650==(x651-x652)));

    if (t146 != -1) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x653 = -1LL;
	int32_t x654 = INT32_MIN;
	uint32_t x655 = 34160U;
	int32_t x656 = INT32_MIN;

    t147 = (x653^(x654==(x655-x656)));

    if (t147 != -1LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x657 = 9;
	int8_t x658 = -1;
	volatile uint16_t x659 = 2U;
	uint32_t x660 = 142844U;
	volatile int32_t t148 = 157622;

    t148 = (x657^(x658==(x659-x660)));

    if (t148 != 9) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x661 = INT8_MAX;
	static uint8_t x662 = 77U;
	int64_t x664 = 61963479460LL;
	volatile int32_t t149 = -60;

    t149 = (x661^(x662==(x663-x664)));

    if (t149 != 127) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint16_t x665 = 6U;
	int16_t x666 = -1;
	volatile int64_t x667 = -12465171LL;
	static volatile int16_t x668 = -2333;
	int32_t t150 = -4329;

    t150 = (x665^(x666==(x667-x668)));

    if (t150 != 6) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x669 = UINT64_MAX;
	int32_t x670 = -4871;
	int8_t x671 = 5;
	volatile int8_t x672 = -6;
	static uint64_t t151 = UINT64_MAX;

    t151 = (x669^(x670==(x671-x672)));

    if (t151 != UINT64_MAX) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint32_t x673 = 3979U;
	static int8_t x675 = INT8_MAX;
	uint32_t t152 = 1042495910U;

    t152 = (x673^(x674==(x675-x676)));

    if (t152 != 3979U) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x677 = 3280U;
	uint16_t x678 = UINT16_MAX;
	volatile uint32_t t153 = 25224655U;

    t153 = (x677^(x678==(x679-x680)));

    if (t153 != 3280U) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x681 = -278;
	volatile int32_t x683 = 979638;
	static int32_t x684 = -84;
	volatile int32_t t154 = 18651139;

    t154 = (x681^(x682==(x683-x684)));

    if (t154 != -278) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x685 = -13162533LL;
	int8_t x686 = INT8_MAX;
	volatile uint8_t x687 = 29U;
	static volatile uint32_t x688 = 45398U;
	int64_t t155 = 32371242538505917LL;

    t155 = (x685^(x686==(x687-x688)));

    if (t155 != -13162533LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint8_t x689 = 5U;
	int16_t x690 = INT16_MIN;
	int64_t x691 = INT64_MAX;
	static volatile int16_t x692 = INT16_MAX;
	static int32_t t156 = -440;

    t156 = (x689^(x690==(x691-x692)));

    if (t156 != 5) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x693 = INT8_MIN;
	int32_t x694 = INT32_MIN;
	uint32_t x695 = UINT32_MAX;
	volatile int32_t t157 = 112196910;

    t157 = (x693^(x694==(x695-x696)));

    if (t157 != -128) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint8_t x701 = 3U;
	int64_t x702 = -1LL;
	uint16_t x703 = 14653U;
	int8_t x704 = -9;
	volatile int32_t t158 = -38167959;

    t158 = (x701^(x702==(x703-x704)));

    if (t158 != 3) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x705 = UINT32_MAX;
	volatile int64_t x706 = -1LL;
	uint32_t t159 = UINT32_MAX;

    t159 = (x705^(x706==(x707-x708)));

    if (t159 != UINT32_MAX) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x709 = -1;
	volatile uint8_t x710 = 8U;
	int32_t x711 = -1;
	int32_t x712 = 1;
	static int32_t t160 = 52885244;

    t160 = (x709^(x710==(x711-x712)));

    if (t160 != -1) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x713 = 8;
	volatile int16_t x714 = INT16_MAX;
	int8_t x715 = INT8_MIN;
	uint32_t x716 = 2U;
	int32_t t161 = -1;

    t161 = (x713^(x714==(x715-x716)));

    if (t161 != 8) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int64_t x717 = INT64_MIN;
	uint8_t x718 = 10U;
	int16_t x719 = -127;
	volatile int8_t x720 = INT8_MIN;
	int64_t t162 = INT64_MIN;

    t162 = (x717^(x718==(x719-x720)));

    if (t162 != INT64_MIN) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int8_t x721 = INT8_MAX;
	static int64_t x722 = 12870260LL;
	int16_t x723 = 1;
	uint8_t x724 = 0U;
	int32_t t163 = 1349;

    t163 = (x721^(x722==(x723-x724)));

    if (t163 != 127) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x725 = INT32_MIN;
	static uint64_t x727 = 99LLU;

    t164 = (x725^(x726==(x727-x728)));

    if (t164 != INT32_MIN) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x729 = INT32_MIN;
	volatile int16_t x730 = INT16_MIN;
	volatile int16_t x731 = -1;
	int8_t x732 = INT8_MAX;
	volatile int32_t t165 = INT32_MIN;

    t165 = (x729^(x730==(x731-x732)));

    if (t165 != INT32_MIN) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x734 = UINT16_MAX;
	int16_t x736 = -14873;

    t166 = (x733^(x734==(x735-x736)));

    if (t166 != INT32_MAX) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x737 = 225583680358078LLU;
	int16_t x738 = -1;
	volatile int8_t x739 = -1;
	uint8_t x740 = UINT8_MAX;
	volatile uint64_t t167 = 35LLU;

    t167 = (x737^(x738==(x739-x740)));

    if (t167 != 225583680358078LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int64_t x741 = -141363911513965290LL;
	uint16_t x742 = UINT16_MAX;
	volatile int8_t x743 = INT8_MIN;
	int16_t x744 = INT16_MIN;
	static volatile int64_t t168 = 69055LL;

    t168 = (x741^(x742==(x743-x744)));

    if (t168 != -141363911513965290LL) { NG(); } else { ; }
	
}

void f169(void) {
    	static int16_t x745 = INT16_MIN;
	static int32_t x747 = INT32_MAX;
	int32_t t169 = 1;

    t169 = (x745^(x746==(x747-x748)));

    if (t169 != -32768) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x749 = UINT8_MAX;
	int8_t x750 = 1;
	uint32_t x751 = 715804337U;
	uint64_t x752 = 178476LLU;
	volatile int32_t t170 = -5;

    t170 = (x749^(x750==(x751-x752)));

    if (t170 != 255) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x753 = INT8_MIN;
	int32_t x754 = INT32_MIN;
	volatile uint8_t x755 = 4U;
	static volatile int32_t t171 = 829;

    t171 = (x753^(x754==(x755-x756)));

    if (t171 != -128) { NG(); } else { ; }
	
}

void f172(void) {
    	static int8_t x757 = INT8_MIN;
	int16_t x758 = INT16_MIN;
	int32_t x759 = -1;
	int32_t x760 = -17;
	int32_t t172 = -502024968;

    t172 = (x757^(x758==(x759-x760)));

    if (t172 != -128) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x761 = INT32_MAX;
	uint16_t x762 = 156U;
	int8_t x763 = -12;
	uint16_t x764 = UINT16_MAX;
	int32_t t173 = INT32_MAX;

    t173 = (x761^(x762==(x763-x764)));

    if (t173 != INT32_MAX) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x765 = INT32_MAX;
	static volatile int8_t x767 = -2;
	int8_t x768 = 0;

    t174 = (x765^(x766==(x767-x768)));

    if (t174 != INT32_MAX) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x769 = 12U;
	uint32_t x771 = UINT32_MAX;
	volatile int32_t t175 = -38;

    t175 = (x769^(x770==(x771-x772)));

    if (t175 != 12) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x778 = 49U;
	volatile uint8_t x780 = 22U;
	volatile int32_t t176 = -9394234;

    t176 = (x777^(x778==(x779-x780)));

    if (t176 != 54) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint32_t x781 = 16U;
	int32_t x782 = -1;
	int64_t x783 = INT64_MIN;
	int16_t x784 = INT16_MIN;

    t177 = (x781^(x782==(x783-x784)));

    if (t177 != 16U) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x786 = -1LL;
	uint32_t x788 = 2467642U;

    t178 = (x785^(x786==(x787-x788)));

    if (t178 != INT64_MIN) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x789 = -1;
	static int32_t x791 = 77541561;
	int8_t x792 = -1;

    t179 = (x789^(x790==(x791-x792)));

    if (t179 != -1) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x793 = INT16_MIN;
	static int8_t x794 = 6;
	int16_t x795 = INT16_MIN;
	int32_t t180 = 4338176;

    t180 = (x793^(x794==(x795-x796)));

    if (t180 != -32768) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x797 = 2U;
	uint8_t x798 = 2U;
	uint8_t x799 = 111U;
	int16_t x800 = 1;
	static int32_t t181 = 726140405;

    t181 = (x797^(x798==(x799-x800)));

    if (t181 != 2) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int32_t x802 = -3854249;
	int32_t x803 = INT32_MAX;

    t182 = (x801^(x802==(x803-x804)));

    if (t182 != 255) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint32_t x805 = 114633U;
	static int8_t x806 = INT8_MIN;
	int32_t x807 = -131557988;
	int8_t x808 = 1;
	volatile uint32_t t183 = 8293728U;

    t183 = (x805^(x806==(x807-x808)));

    if (t183 != 114633U) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x810 = -1;
	static int32_t x811 = INT32_MAX;
	uint64_t x812 = UINT64_MAX;

    t184 = (x809^(x810==(x811-x812)));

    if (t184 != UINT64_MAX) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint16_t x813 = 3409U;
	static int64_t x814 = -723386848LL;
	int32_t x815 = INT32_MAX;
	int32_t x816 = INT32_MAX;
	int32_t t185 = 3;

    t185 = (x813^(x814==(x815-x816)));

    if (t185 != 3409) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x817 = UINT8_MAX;
	int8_t x818 = -1;
	int64_t x819 = INT64_MAX;
	int64_t x820 = 3589648838744164LL;
	int32_t t186 = -14;

    t186 = (x817^(x818==(x819-x820)));

    if (t186 != 255) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x821 = UINT32_MAX;
	int16_t x822 = -372;
	static uint32_t x823 = UINT32_MAX;
	static int16_t x824 = 113;
	uint32_t t187 = UINT32_MAX;

    t187 = (x821^(x822==(x823-x824)));

    if (t187 != UINT32_MAX) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x825 = UINT16_MAX;
	uint16_t x826 = UINT16_MAX;
	uint16_t x828 = 6619U;
	volatile int32_t t188 = -1044830096;

    t188 = (x825^(x826==(x827-x828)));

    if (t188 != 65535) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint16_t x830 = 2703U;
	int8_t x832 = INT8_MIN;

    t189 = (x829^(x830==(x831-x832)));

    if (t189 != -388900406491097LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x834 = INT8_MAX;
	int64_t x836 = -1LL;

    t190 = (x833^(x834==(x835-x836)));

    if (t190 != -1) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x837 = INT16_MIN;
	int32_t x839 = -1;
	int32_t x840 = INT32_MIN;
	int32_t t191 = -262775491;

    t191 = (x837^(x838==(x839-x840)));

    if (t191 != -32768) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x841 = 466784503075LLU;
	int32_t x842 = INT32_MAX;
	int32_t x843 = -1;
	int16_t x844 = INT16_MIN;
	static uint64_t t192 = 1546336LLU;

    t192 = (x841^(x842==(x843-x844)));

    if (t192 != 466784503075LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint8_t x846 = 5U;
	static volatile uint8_t x847 = 1U;
	volatile int8_t x848 = INT8_MIN;
	volatile uint32_t t193 = 26213423U;

    t193 = (x845^(x846==(x847-x848)));

    if (t193 != 782U) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x849 = 4;
	int32_t x850 = INT32_MAX;
	volatile int8_t x851 = -6;
	volatile int64_t x852 = -420481252361769937LL;
	int32_t t194 = -232;

    t194 = (x849^(x850==(x851-x852)));

    if (t194 != 4) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x853 = 460940LLU;
	volatile uint64_t t195 = 1978747752771107LLU;

    t195 = (x853^(x854==(x855-x856)));

    if (t195 != 460940LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x857 = -1;
	volatile uint16_t x858 = 0U;
	uint16_t x859 = 86U;
	uint32_t x860 = 355600U;
	volatile int32_t t196 = 1836;

    t196 = (x857^(x858==(x859-x860)));

    if (t196 != -1) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x862 = -1LL;
	static uint16_t x863 = 4344U;
	int8_t x864 = INT8_MAX;
	int32_t t197 = 30;

    t197 = (x861^(x862==(x863-x864)));

    if (t197 != 32767) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x865 = 43;
	static uint64_t x866 = UINT64_MAX;
	uint8_t x867 = 1U;
	int32_t x868 = -1;

    t198 = (x865^(x866==(x867-x868)));

    if (t198 != 43) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x869 = INT64_MIN;
	int8_t x870 = INT8_MIN;
	int64_t x871 = -3283357973LL;
	static uint32_t x872 = 3963188U;
	int64_t t199 = INT64_MIN;

    t199 = (x869^(x870==(x871-x872)));

    if (t199 != INT64_MIN) { NG(); } else { ; }
	
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

