
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

int16_t x5 = INT16_MIN;
uint16_t x7 = 300U;
int16_t x19 = INT16_MAX;
uint32_t x27 = 12745U;
int32_t x28 = INT32_MIN;
uint32_t t6 = 103634221U;
volatile int32_t t7 = 61;
int64_t x40 = INT64_MIN;
uint64_t x46 = 392165455LLU;
uint64_t t10 = 13255654490LLU;
int16_t x53 = 62;
volatile int32_t x57 = -1;
static volatile int64_t t13 = -463565742LL;
static uint64_t x64 = 63700300211LLU;
volatile uint16_t x74 = 1U;
int8_t x86 = 42;
int64_t x88 = INT64_MIN;
static uint32_t t21 = 14U;
uint32_t x98 = 6056U;
int8_t x102 = -1;
uint32_t x104 = UINT32_MAX;
int32_t t24 = 578;
int64_t x109 = INT64_MIN;
uint64_t x115 = 1771822513LLU;
volatile uint64_t t26 = 4048235547LLU;
volatile uint64_t x123 = UINT64_MAX;
int8_t x130 = -1;
static volatile int64_t t29 = -9938579LL;
uint32_t t30 = 20U;
static uint8_t x139 = 16U;
volatile int32_t x153 = 445;
int32_t x154 = -44072244;
volatile int64_t x155 = 7LL;
int8_t x161 = INT8_MAX;
int32_t x162 = -2948;
volatile uint32_t x173 = UINT32_MAX;
int32_t t37 = -1223219;
static int64_t x193 = INT64_MIN;
int64_t x194 = 1161509791683485LL;
uint16_t x202 = 30U;
volatile uint32_t x203 = UINT32_MAX;
int8_t x213 = INT8_MIN;
static int32_t x217 = -7868;
int8_t x219 = INT8_MAX;
uint8_t x221 = UINT8_MAX;
int64_t x224 = 207071540396LL;
uint32_t x226 = UINT32_MAX;
int32_t x240 = -10801958;
volatile int8_t x242 = -1;
uint16_t x243 = 146U;
volatile int16_t x247 = -3;
int64_t x249 = 1LL;
uint8_t x259 = 0U;
uint64_t x260 = 36509706LLU;
int32_t x268 = INT32_MIN;
volatile int32_t t56 = -12;
volatile uint8_t x270 = 44U;
int8_t x273 = INT8_MIN;
int64_t t58 = 22493834171101LL;
uint64_t x279 = UINT64_MAX;
static int16_t x281 = INT16_MIN;
static uint16_t x286 = 171U;
uint64_t x287 = 119602668622LLU;
static int8_t x291 = INT8_MAX;
uint64_t t62 = 6LLU;
int8_t x300 = INT8_MAX;
int8_t x305 = -5;
int32_t x312 = INT32_MAX;
volatile uint64_t t67 = 2487555273951LLU;
int64_t x320 = INT64_MIN;
volatile uint64_t t69 = 24029LLU;
int64_t t70 = -5LL;
int8_t x325 = -1;
int8_t x328 = -1;
volatile int16_t x335 = INT16_MIN;
volatile int32_t t72 = -996073103;
volatile int16_t x342 = INT16_MIN;
uint32_t x344 = 44936U;
int8_t x353 = INT8_MAX;
int16_t x355 = -1;
volatile uint64_t x364 = 22845386838139LLU;
static uint8_t x366 = 3U;
volatile int16_t x374 = -48;
uint32_t t83 = 964U;
static int64_t x392 = INT64_MIN;
int8_t x405 = INT8_MIN;
uint8_t x407 = UINT8_MAX;
volatile uint16_t x414 = 2027U;
volatile int8_t x418 = INT8_MIN;
int32_t x426 = INT32_MAX;
uint64_t x433 = 1021869LLU;
uint64_t x440 = UINT64_MAX;
int16_t x475 = INT16_MIN;
volatile int64_t x480 = -1LL;
uint64_t t101 = 5LLU;
int64_t x482 = INT64_MIN;
static volatile int64_t t102 = -567LL;
uint32_t x486 = 814U;
int8_t x487 = INT8_MIN;
static int32_t x493 = 36916;
int32_t x494 = -1;
static int64_t x501 = -1LL;
int8_t x514 = INT8_MIN;
int64_t t107 = -435290993LL;
static int64_t x517 = INT64_MAX;
volatile uint64_t t108 = 1986462602838226225LLU;
uint8_t x525 = 12U;
int16_t x527 = INT16_MAX;
int16_t x535 = INT16_MAX;
int64_t x538 = -68300666427914LL;
int16_t x547 = -147;
static uint64_t t114 = 1468LLU;
volatile int64_t t115 = 2982404142870LL;
int16_t x555 = INT16_MIN;
int32_t x563 = INT32_MAX;
volatile int32_t t119 = -59472;
static int64_t x578 = -3173403633667LL;
uint64_t x580 = 29151LLU;
int64_t x588 = 4LL;
static volatile int32_t x592 = -1;
int64_t t124 = -121515132116004044LL;
int64_t x622 = -1LL;
int64_t t127 = -797921098096914LL;
static int16_t x628 = -1;
volatile int32_t t128 = -6684;
int8_t x657 = INT8_MIN;
int64_t x660 = -1LL;
int64_t t132 = 218013348LL;
int32_t x680 = -179291;
int64_t x681 = INT64_MAX;
static int16_t x682 = INT16_MIN;
volatile int64_t t137 = -44953177LL;
static int64_t x693 = INT64_MIN;
volatile uint64_t x696 = 53440LLU;
int8_t x697 = INT8_MIN;
volatile uint16_t x706 = 119U;
static int32_t x708 = INT32_MIN;
volatile uint64_t x711 = UINT64_MAX;
volatile uint64_t t144 = 3451126LLU;
int32_t x725 = -1;
uint16_t x726 = 1237U;
int16_t x738 = -394;
static volatile int16_t x739 = 4039;
int8_t x747 = INT8_MIN;
volatile uint32_t x758 = 101697U;
int8_t x759 = -48;
static int16_t x760 = INT16_MIN;
uint32_t t149 = 21673754U;
static uint64_t t150 = 467352642LLU;
static uint16_t x768 = 821U;
int64_t x771 = -1LL;
static int64_t t155 = -8LL;
static volatile int64_t x788 = 769955922356118LL;
static int16_t x793 = INT16_MIN;
int32_t x795 = -1;
int64_t t158 = -3581913487773782280LL;
static int64_t t159 = 71683500785060114LL;
int16_t x808 = 4;
uint64_t x810 = 5643LLU;
int16_t x811 = -1;
int32_t x820 = -1914;
volatile uint32_t t164 = 848U;
uint32_t t165 = 255313124U;
static volatile int64_t t166 = 75954437585094111LL;
volatile int32_t x829 = INT32_MIN;
uint32_t x834 = 60976U;
static int64_t x839 = 7442586LL;
uint8_t x842 = UINT8_MAX;
static int16_t x846 = 615;
int8_t x853 = INT8_MIN;
uint16_t x855 = UINT16_MAX;
volatile int64_t t173 = 1LL;
volatile int16_t x867 = -48;
int16_t x871 = INT16_MIN;
uint64_t t180 = 1LLU;
volatile uint64_t t182 = 1LLU;
uint8_t x898 = 0U;
volatile int8_t x899 = INT8_MIN;
volatile int32_t x900 = INT32_MAX;
int16_t x903 = 7;
static int64_t x904 = 108340LL;
volatile int64_t t184 = -567283997726LL;
int64_t x917 = -38279269LL;
int64_t t189 = -356331810663676799LL;
volatile int16_t x946 = INT16_MAX;
int32_t x957 = -3524;
uint16_t x966 = 10272U;
static uint8_t x970 = 10U;
volatile int64_t t196 = 411361412889905LL;
int16_t x978 = 10531;
volatile int32_t t198 = -56361020;
int64_t x983 = INT64_MAX;
static uint8_t x984 = 13U;


void f0(void) {
    	volatile int8_t x1 = 19;
	volatile int32_t x2 = INT32_MAX;
	int64_t x3 = -1009LL;
	int8_t x4 = INT8_MIN;
	static volatile int64_t t0 = 1LL;

    t0 = ((x1%(x2-x3))%x4);

    if (t0 != 19LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x6 = -4;
	int8_t x8 = INT8_MIN;
	int32_t t1 = 28385678;

    t1 = ((x5%(x6-x7))%x8);

    if (t1 != -112) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = 437791217488711312LLU;
	uint8_t x10 = 3U;
	static uint32_t x11 = 1550949U;
	int8_t x12 = 15;
	uint64_t t2 = 148017LLU;

    t2 = ((x9%(x10-x11))%x12);

    if (t2 != 7LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint32_t x13 = 1173824U;
	int8_t x14 = INT8_MIN;
	int32_t x15 = -1;
	volatile int16_t x16 = -1;
	volatile uint32_t t3 = 29331U;

    t3 = ((x13%(x14-x15))%x16);

    if (t3 != 1173824U) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x17 = -1;
	int8_t x18 = -1;
	uint8_t x20 = 5U;
	volatile int32_t t4 = -1;

    t4 = ((x17%(x18-x19))%x20);

    if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x21 = 21577U;
	volatile int16_t x22 = -1514;
	uint8_t x23 = 57U;
	volatile int64_t x24 = 1978596LL;
	volatile int64_t t5 = -53972043059734LL;

    t5 = ((x21%(x22-x23))%x24);

    if (t5 != 1154LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x25 = 2U;
	int32_t x26 = 823533837;

    t6 = ((x25%(x26-x27))%x28);

    if (t6 != 2U) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint8_t x29 = UINT8_MAX;
	int8_t x30 = INT8_MAX;
	static int32_t x31 = INT32_MAX;
	int16_t x32 = -44;

    t7 = ((x29%(x30-x31))%x32);

    if (t7 != 35) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x37 = UINT16_MAX;
	uint8_t x38 = 0U;
	int64_t x39 = -210LL;
	int64_t t8 = -1694192477498053074LL;

    t8 = ((x37%(x38-x39))%x40);

    if (t8 != 15LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x41 = INT16_MIN;
	static volatile uint16_t x42 = 14U;
	uint64_t x43 = 249299671505LLU;
	int64_t x44 = INT64_MAX;
	uint64_t t9 = 396LLU;

    t9 = ((x41%(x42-x43))%x44);

    if (t9 != 249299638723LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x45 = 537409256U;
	static volatile int64_t x47 = INT64_MIN;
	uint32_t x48 = 3588U;

    t10 = ((x45%(x46-x47))%x48);

    if (t10 != 2204LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint8_t x49 = 19U;
	int64_t x50 = 1054491750983143LL;
	static int16_t x51 = 81;
	uint8_t x52 = UINT8_MAX;
	volatile int64_t t11 = -1225240LL;

    t11 = ((x49%(x50-x51))%x52);

    if (t11 != 19LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x54 = 410742957U;
	volatile int8_t x55 = INT8_MAX;
	static uint32_t x56 = 73852U;
	static volatile uint32_t t12 = 6714090U;

    t12 = ((x53%(x54-x55))%x56);

    if (t12 != 62U) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int8_t x58 = INT8_MAX;
	int64_t x59 = -1LL;
	volatile uint16_t x60 = 133U;

    t13 = ((x57%(x58-x59))%x60);

    if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x61 = UINT8_MAX;
	uint32_t x62 = 14323112U;
	int16_t x63 = -419;
	uint64_t t14 = 39943325LLU;

    t14 = ((x61%(x62-x63))%x64);

    if (t14 != 255LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x69 = 3;
	volatile int32_t x70 = INT32_MIN;
	static int16_t x71 = INT16_MIN;
	int32_t x72 = INT32_MIN;
	int32_t t15 = 704897551;

    t15 = ((x69%(x70-x71))%x72);

    if (t15 != 3) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x73 = 47;
	int16_t x75 = -1;
	int8_t x76 = -4;
	volatile int32_t t16 = -513043;

    t16 = ((x73%(x74-x75))%x76);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x77 = INT64_MIN;
	static int8_t x78 = INT8_MAX;
	int8_t x79 = INT8_MIN;
	int64_t x80 = INT64_MAX;
	volatile int64_t t17 = -133740153874728LL;

    t17 = ((x77%(x78-x79))%x80);

    if (t17 != -128LL) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int64_t x81 = 434936LL;
	uint8_t x82 = 3U;
	int8_t x83 = -1;
	int32_t x84 = -1010;
	int64_t t18 = -3001251LL;

    t18 = ((x81%(x82-x83))%x84);

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x85 = INT32_MIN;
	volatile int8_t x87 = INT8_MIN;
	volatile int64_t t19 = 370229825905984836LL;

    t19 = ((x85%(x86-x87))%x88);

    if (t19 != -128LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x89 = 1899LL;
	uint8_t x90 = 33U;
	volatile int16_t x91 = -899;
	static int32_t x92 = INT32_MIN;
	int64_t t20 = 65119318045687177LL;

    t20 = ((x89%(x90-x91))%x92);

    if (t20 != 35LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x93 = 411U;
	uint8_t x94 = 4U;
	static uint32_t x95 = UINT32_MAX;
	int8_t x96 = INT8_MIN;

    t21 = ((x93%(x94-x95))%x96);

    if (t21 != 1U) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint16_t x97 = 0U;
	int32_t x99 = INT32_MIN;
	static uint32_t x100 = UINT32_MAX;
	volatile uint32_t t22 = 11U;

    t22 = ((x97%(x98-x99))%x100);

    if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
    	static int64_t x101 = INT64_MIN;
	int16_t x103 = INT16_MAX;
	static int64_t t23 = 2540LL;

    t23 = ((x101%(x102-x103))%x104);

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x105 = INT8_MAX;
	int8_t x106 = INT8_MIN;
	volatile int32_t x107 = -6623;
	int8_t x108 = INT8_MIN;

    t24 = ((x105%(x106-x107))%x108);

    if (t24 != 127) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x110 = INT32_MAX;
	volatile int8_t x111 = 1;
	uint8_t x112 = 7U;
	int64_t t25 = -4836075215543LL;

    t25 = ((x109%(x110-x111))%x112);

    if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint64_t x113 = 44427347LLU;
	volatile uint16_t x114 = 3295U;
	int64_t x116 = -224943LL;

    t26 = ((x113%(x114-x115))%x116);

    if (t26 != 44427347LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x117 = UINT8_MAX;
	int16_t x118 = 1481;
	uint16_t x119 = UINT16_MAX;
	int32_t x120 = -11;
	volatile int32_t t27 = -3761372;

    t27 = ((x117%(x118-x119))%x120);

    if (t27 != 2) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x121 = INT8_MIN;
	int8_t x122 = 12;
	uint16_t x124 = UINT16_MAX;
	uint64_t t28 = 27819835231444342LLU;

    t28 = ((x121%(x122-x123))%x124);

    if (t28 != 5LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x129 = 16U;
	uint16_t x131 = 3U;
	static int64_t x132 = 94731511445LL;

    t29 = ((x129%(x130-x131))%x132);

    if (t29 != 16LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x133 = INT32_MIN;
	volatile int32_t x134 = -2733584;
	uint32_t x135 = 3068U;
	volatile int32_t x136 = INT32_MIN;

    t30 = ((x133%(x134-x135))%x136);

    if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile int32_t x137 = INT32_MAX;
	uint8_t x138 = 3U;
	static volatile int8_t x140 = 51;
	static volatile int32_t t31 = 36;

    t31 = ((x137%(x138-x139))%x140);

    if (t31 != 10) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x145 = INT64_MAX;
	uint32_t x146 = 2U;
	uint64_t x147 = 1815921859LLU;
	uint64_t x148 = 237924704602578706LLU;
	static uint64_t t32 = 69968298771LLU;

    t32 = ((x145%(x146-x147))%x148);

    if (t32 != 182233261956784979LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x156 = -403297781LL;
	volatile int64_t t33 = -1159208484LL;

    t33 = ((x153%(x154-x155))%x156);

    if (t33 != 445LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x163 = 8576;
	volatile int64_t x164 = 235LL;
	int64_t t34 = 433538LL;

    t34 = ((x161%(x162-x163))%x164);

    if (t34 != 127LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x169 = -7;
	static uint16_t x170 = 875U;
	static int16_t x171 = -1;
	int8_t x172 = INT8_MIN;
	static volatile int32_t t35 = -3580722;

    t35 = ((x169%(x170-x171))%x172);

    if (t35 != -7) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x174 = INT32_MAX;
	int8_t x175 = 2;
	int64_t x176 = INT64_MIN;
	int64_t t36 = -215142199243LL;

    t36 = ((x173%(x174-x175))%x176);

    if (t36 != 5LL) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int32_t x185 = -144;
	int32_t x186 = -1;
	int32_t x187 = INT32_MIN;
	static uint16_t x188 = 212U;

    t37 = ((x185%(x186-x187))%x188);

    if (t37 != -144) { NG(); } else { ; }
	
}

void f38(void) {
    	static int64_t x189 = -1LL;
	static uint16_t x190 = UINT16_MAX;
	static uint32_t x191 = 192U;
	int8_t x192 = -1;
	int64_t t38 = 491387822612491677LL;

    t38 = ((x189%(x190-x191))%x192);

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x195 = 19298U;
	uint64_t x196 = 270446324673710LLU;
	static volatile uint64_t t39 = 1490890957118384060LLU;

    t39 = ((x193%(x194-x195))%x196);

    if (t39 != 238654622703748LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x197 = -1;
	static uint32_t x198 = UINT32_MAX;
	int8_t x199 = INT8_MAX;
	uint16_t x200 = 392U;
	volatile uint32_t t40 = 850748460U;

    t40 = ((x197%(x198-x199))%x200);

    if (t40 != 127U) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint8_t x201 = 27U;
	static int8_t x204 = -1;
	uint32_t t41 = 992U;

    t41 = ((x201%(x202-x203))%x204);

    if (t41 != 27U) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x205 = 2;
	int16_t x206 = -1;
	int8_t x207 = INT8_MIN;
	int8_t x208 = -1;
	int32_t t42 = -207420;

    t42 = ((x205%(x206-x207))%x208);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int16_t x209 = INT16_MIN;
	static uint16_t x210 = 946U;
	uint16_t x211 = UINT16_MAX;
	uint8_t x212 = 17U;
	int32_t t43 = -921833;

    t43 = ((x209%(x210-x211))%x212);

    if (t43 != -9) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x214 = 90U;
	int8_t x215 = -1;
	int16_t x216 = 17;
	int32_t t44 = -108802252;

    t44 = ((x213%(x214-x215))%x216);

    if (t44 != -3) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x218 = -1;
	volatile int16_t x220 = INT16_MIN;
	static volatile int32_t t45 = -8;

    t45 = ((x217%(x218-x219))%x220);

    if (t45 != -60) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x222 = -1;
	int8_t x223 = 1;
	volatile int64_t t46 = 89957161099151LL;

    t46 = ((x221%(x222-x223))%x224);

    if (t46 != 1LL) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint16_t x225 = UINT16_MAX;
	int32_t x227 = -122652296;
	int64_t x228 = -1LL;
	int64_t t47 = 1LL;

    t47 = ((x225%(x226-x227))%x228);

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x229 = 2U;
	uint8_t x230 = UINT8_MAX;
	uint16_t x231 = UINT16_MAX;
	int8_t x232 = INT8_MIN;
	static int32_t t48 = 13;

    t48 = ((x229%(x230-x231))%x232);

    if (t48 != 2) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x233 = INT64_MAX;
	static int64_t x234 = -60044025LL;
	int16_t x235 = INT16_MIN;
	volatile int32_t x236 = -11511;
	volatile int64_t t49 = -21LL;

    t49 = ((x233%(x234-x235))%x236);

    if (t49 != 7213LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x237 = INT16_MIN;
	volatile int8_t x238 = INT8_MAX;
	uint64_t x239 = UINT64_MAX;
	uint64_t t50 = 1523095203642LLU;

    t50 = ((x237%(x238-x239))%x240);

    if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static int8_t x241 = 2;
	volatile uint8_t x244 = UINT8_MAX;
	volatile int32_t t51 = -3;

    t51 = ((x241%(x242-x243))%x244);

    if (t51 != 2) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x245 = UINT16_MAX;
	uint64_t x246 = 479037766758159LLU;
	int8_t x248 = -1;
	static uint64_t t52 = 15099537278LLU;

    t52 = ((x245%(x246-x247))%x248);

    if (t52 != 65535LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x250 = -1;
	int16_t x251 = INT16_MIN;
	volatile uint32_t x252 = 881068U;
	int64_t t53 = -17649342501LL;

    t53 = ((x249%(x250-x251))%x252);

    if (t53 != 1LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x253 = INT32_MIN;
	int8_t x254 = -1;
	int16_t x255 = 1055;
	volatile uint16_t x256 = 24U;
	int32_t t54 = -1;

    t54 = ((x253%(x254-x255))%x256);

    if (t54 != -8) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x257 = -19;
	volatile int64_t x258 = INT64_MAX;
	uint64_t t55 = 2218532758788906LLU;

    t55 = ((x257%(x258-x259))%x260);

    if (t55 != 13765767LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x265 = INT32_MAX;
	int8_t x266 = -23;
	volatile int16_t x267 = INT16_MAX;

    t56 = ((x265%(x266-x267))%x268);

    if (t56 != 967) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x269 = -2;
	int8_t x271 = INT8_MIN;
	uint8_t x272 = 14U;
	static volatile int32_t t57 = 2;

    t57 = ((x269%(x270-x271))%x272);

    if (t57 != -2) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint8_t x274 = 3U;
	int64_t x275 = -145LL;
	uint16_t x276 = 239U;

    t58 = ((x273%(x274-x275))%x276);

    if (t58 != -128LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x277 = INT16_MAX;
	static uint64_t x278 = 697802041140LLU;
	int8_t x280 = 1;
	uint64_t t59 = 5LLU;

    t59 = ((x277%(x278-x279))%x280);

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int16_t x282 = 0;
	uint32_t x283 = UINT32_MAX;
	static uint8_t x284 = 79U;
	uint32_t t60 = 3375U;

    t60 = ((x281%(x282-x283))%x284);

    if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile uint32_t x285 = UINT32_MAX;
	int64_t x288 = INT64_MAX;
	uint64_t t61 = 1072LLU;

    t61 = ((x285%(x286-x287))%x288);

    if (t61 != 4294967295LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x289 = INT8_MIN;
	uint64_t x290 = UINT64_MAX;
	int16_t x292 = -1;

    t62 = ((x289%(x290-x291))%x292);

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x293 = -48105;
	int16_t x294 = -1;
	int8_t x295 = -2;
	int8_t x296 = INT8_MAX;
	volatile int32_t t63 = -1;

    t63 = ((x293%(x294-x295))%x296);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x297 = INT8_MIN;
	uint32_t x298 = 796U;
	int32_t x299 = 0;
	volatile uint32_t t64 = 29625625U;

    t64 = ((x297%(x298-x299))%x300);

    if (t64 != 62U) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int16_t x301 = 806;
	static volatile int8_t x302 = 1;
	volatile uint16_t x303 = 2U;
	uint8_t x304 = 9U;
	int32_t t65 = -2;

    t65 = ((x301%(x302-x303))%x304);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x306 = UINT16_MAX;
	int16_t x307 = INT16_MIN;
	static uint32_t x308 = 4907174U;
	volatile uint32_t t66 = 1977142282U;

    t66 = ((x305%(x306-x307))%x308);

    if (t66 != 1190041U) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x309 = 990U;
	static uint64_t x310 = 75825LLU;
	volatile int16_t x311 = INT16_MIN;

    t67 = ((x309%(x310-x311))%x312);

    if (t67 != 990LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x313 = 7781874685255195626LLU;
	static uint32_t x314 = UINT32_MAX;
	uint64_t x315 = 267430467684974706LLU;
	uint64_t x316 = UINT64_MAX;
	volatile uint64_t t68 = 13550941268131827LLU;

    t68 = ((x313%(x314-x315))%x316);

    if (t68 != 7781874685255195626LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x317 = INT16_MAX;
	uint64_t x318 = 496042LLU;
	uint32_t x319 = UINT32_MAX;

    t69 = ((x317%(x318-x319))%x320);

    if (t69 != 32767LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x321 = INT32_MIN;
	int64_t x322 = INT64_MIN;
	int32_t x323 = -1;
	int8_t x324 = INT8_MIN;

    t70 = ((x321%(x322-x323))%x324);

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x326 = UINT16_MAX;
	int8_t x327 = INT8_MAX;
	int32_t t71 = 208907;

    t71 = ((x325%(x326-x327))%x328);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x333 = INT16_MIN;
	int8_t x334 = 6;
	int16_t x336 = INT16_MIN;

    t72 = ((x333%(x334-x335))%x336);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint64_t x341 = 33497LLU;
	int8_t x343 = -1;
	uint64_t t73 = 832912062379129500LLU;

    t73 = ((x341%(x342-x343))%x344);

    if (t73 != 33497LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x345 = INT8_MIN;
	static volatile int32_t x346 = INT32_MIN;
	uint32_t x347 = 3250U;
	int64_t x348 = INT64_MAX;
	static int64_t t74 = -54682508470979LL;

    t74 = ((x345%(x346-x347))%x348);

    if (t74 != 6372LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static int16_t x349 = INT16_MIN;
	int16_t x350 = 0;
	int8_t x351 = INT8_MAX;
	static int16_t x352 = -58;
	int32_t t75 = -30012;

    t75 = ((x349%(x350-x351))%x352);

    if (t75 != -2) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile int16_t x354 = INT16_MIN;
	int64_t x356 = INT64_MIN;
	int64_t t76 = 1252042LL;

    t76 = ((x353%(x354-x355))%x356);

    if (t76 != 127LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x357 = INT64_MIN;
	int64_t x358 = -1LL;
	volatile int16_t x359 = 160;
	int16_t x360 = INT16_MAX;
	int64_t t77 = 108217205142LL;

    t77 = ((x357%(x358-x359))%x360);

    if (t77 != -141LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x361 = INT32_MIN;
	static int64_t x362 = -10651063LL;
	uint8_t x363 = UINT8_MAX;
	uint64_t t78 = 71108673317267LLU;

    t78 = ((x361%(x362-x363))%x364);

    if (t78 != 8017379265946LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x365 = 38U;
	int32_t x367 = 65;
	int64_t x368 = INT64_MIN;
	int64_t t79 = 295471LL;

    t79 = ((x365%(x366-x367))%x368);

    if (t79 != 38LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x369 = INT16_MAX;
	int16_t x370 = INT16_MIN;
	int16_t x371 = -2853;
	int16_t x372 = INT16_MAX;
	int32_t t80 = -1636;

    t80 = ((x369%(x370-x371))%x372);

    if (t80 != 2852) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x373 = INT32_MAX;
	int32_t x375 = -1;
	int16_t x376 = INT16_MIN;
	static volatile int32_t t81 = -1383;

    t81 = ((x373%(x374-x375))%x376);

    if (t81 != 20) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x377 = -1;
	int32_t x378 = 795;
	volatile int64_t x379 = 31415629177LL;
	int64_t x380 = -277800734843625424LL;
	volatile int64_t t82 = -5343LL;

    t82 = ((x377%(x378-x379))%x380);

    if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint32_t x385 = UINT32_MAX;
	int32_t x386 = INT32_MAX;
	volatile int8_t x387 = INT8_MAX;
	int32_t x388 = -999871211;

    t83 = ((x385%(x386-x387))%x388);

    if (t83 != 255U) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x389 = INT32_MAX;
	int64_t x390 = -1LL;
	static uint8_t x391 = UINT8_MAX;
	int64_t t84 = -1644865590250303814LL;

    t84 = ((x389%(x390-x391))%x392);

    if (t84 != 255LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x393 = -1LL;
	static int16_t x394 = 0;
	int32_t x395 = -123360568;
	int32_t x396 = INT32_MAX;
	volatile int64_t t85 = 17576378945099535LL;

    t85 = ((x393%(x394-x395))%x396);

    if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x397 = 22544U;
	static int32_t x398 = -1;
	int64_t x399 = INT64_MIN;
	int32_t x400 = INT32_MIN;
	int64_t t86 = -361766LL;

    t86 = ((x397%(x398-x399))%x400);

    if (t86 != 22544LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x406 = 0;
	int16_t x408 = 6052;
	volatile int32_t t87 = -58;

    t87 = ((x405%(x406-x407))%x408);

    if (t87 != -128) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x413 = 0U;
	uint16_t x415 = 7U;
	int8_t x416 = INT8_MIN;
	static volatile int32_t t88 = -6762;

    t88 = ((x413%(x414-x415))%x416);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x417 = INT8_MIN;
	int64_t x419 = INT64_MIN;
	int64_t x420 = INT64_MIN;
	int64_t t89 = 130681665029411LL;

    t89 = ((x417%(x418-x419))%x420);

    if (t89 != -128LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x421 = INT16_MIN;
	static int32_t x422 = -1;
	uint32_t x423 = 502665U;
	static int8_t x424 = INT8_MIN;
	volatile uint32_t t90 = 4464U;

    t90 = ((x421%(x422-x423))%x424);

    if (t90 != 469898U) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x425 = INT32_MIN;
	uint64_t x427 = UINT64_MAX;
	int16_t x428 = INT16_MIN;
	uint64_t t91 = 102257108605LLU;

    t91 = ((x425%(x426-x427))%x428);

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x429 = -1794874358LL;
	volatile int64_t x430 = 385952LL;
	int16_t x431 = INT16_MIN;
	int16_t x432 = 1;
	volatile int64_t t92 = -2073079051940800779LL;

    t92 = ((x429%(x430-x431))%x432);

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x434 = INT32_MIN;
	volatile uint64_t x435 = 3946057852341663456LLU;
	volatile int64_t x436 = -721794273160094820LL;
	uint64_t t93 = 4820638748LLU;

    t93 = ((x433%(x434-x435))%x436);

    if (t93 != 1021869LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x437 = -23;
	static int64_t x438 = -6555883114874791LL;
	volatile int16_t x439 = INT16_MIN;
	uint64_t t94 = 6933847221LLU;

    t94 = ((x437%(x438-x439))%x440);

    if (t94 != 18446744073709551593LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x441 = INT64_MIN;
	volatile int8_t x442 = INT8_MAX;
	uint16_t x443 = 8U;
	int64_t x444 = 2731761811LL;
	static int64_t t95 = 4216855603LL;

    t95 = ((x441%(x442-x443))%x444);

    if (t95 != -43LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x453 = 20U;
	static uint64_t x454 = 0LLU;
	int64_t x455 = -182189134072755827LL;
	int64_t x456 = 518616162381219LL;
	volatile uint64_t t96 = 307LLU;

    t96 = ((x453%(x454-x455))%x456);

    if (t96 != 20LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x457 = INT8_MAX;
	volatile int32_t x458 = 130;
	int16_t x459 = -1;
	volatile int16_t x460 = INT16_MIN;
	volatile int32_t t97 = -1;

    t97 = ((x457%(x458-x459))%x460);

    if (t97 != 127) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int16_t x461 = -56;
	int8_t x462 = INT8_MAX;
	int32_t x463 = -1;
	int8_t x464 = INT8_MIN;
	volatile int32_t t98 = 855547710;

    t98 = ((x461%(x462-x463))%x464);

    if (t98 != -56) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x465 = -1;
	uint16_t x466 = 282U;
	int32_t x467 = 1567787;
	volatile int16_t x468 = INT16_MAX;
	int32_t t99 = -416195;

    t99 = ((x465%(x466-x467))%x468);

    if (t99 != -1) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x473 = 5;
	uint8_t x474 = UINT8_MAX;
	int32_t x476 = INT32_MIN;
	volatile int32_t t100 = 62922465;

    t100 = ((x473%(x474-x475))%x476);

    if (t100 != 5) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile uint64_t x477 = 28LLU;
	uint32_t x478 = 781673U;
	static uint64_t x479 = UINT64_MAX;

    t101 = ((x477%(x478-x479))%x480);

    if (t101 != 28LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x481 = -1;
	static volatile int32_t x483 = INT32_MIN;
	volatile int16_t x484 = -1;

    t102 = ((x481%(x482-x483))%x484);

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x485 = UINT16_MAX;
	static volatile int64_t x488 = -1LL;
	int64_t t103 = 126477199827LL;

    t103 = ((x485%(x486-x487))%x488);

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x489 = INT64_MIN;
	uint16_t x490 = 27668U;
	int8_t x491 = 51;
	static uint64_t x492 = 4LLU;
	static uint64_t t104 = 112909648733724LLU;

    t104 = ((x489%(x490-x491))%x492);

    if (t104 != 3LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x495 = 334U;
	int32_t x496 = INT32_MIN;
	int32_t t105 = 1;

    t105 = ((x493%(x494-x495))%x496);

    if (t105 != 66) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x502 = -1;
	volatile int32_t x503 = -106;
	uint16_t x504 = 6492U;
	static int64_t t106 = 854986882693010496LL;

    t106 = ((x501%(x502-x503))%x504);

    if (t106 != -1LL) { NG(); } else { ; }
	
}

void f107(void) {
    	static int64_t x513 = -1LL;
	int16_t x515 = INT16_MIN;
	uint8_t x516 = 7U;

    t107 = ((x513%(x514-x515))%x516);

    if (t107 != -1LL) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x518 = INT8_MIN;
	uint8_t x519 = 92U;
	uint64_t x520 = 9794400131LLU;

    t108 = ((x517%(x518-x519))%x520);

    if (t108 != 7LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x526 = UINT32_MAX;
	uint64_t x528 = 1195041166352794183LLU;
	uint64_t t109 = 12449407LLU;

    t109 = ((x525%(x526-x527))%x528);

    if (t109 != 12LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x529 = -1LL;
	uint8_t x530 = UINT8_MAX;
	int16_t x531 = 6725;
	int64_t x532 = -1LL;
	volatile int64_t t110 = -64002018474LL;

    t110 = ((x529%(x530-x531))%x532);

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x533 = INT64_MAX;
	int64_t x534 = INT64_MAX;
	uint64_t x536 = UINT64_MAX;
	static volatile uint64_t t111 = 1312132471469074LLU;

    t111 = ((x533%(x534-x535))%x536);

    if (t111 != 32767LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x537 = INT32_MIN;
	int8_t x539 = INT8_MIN;
	volatile int32_t x540 = INT32_MIN;
	volatile int64_t t112 = -47813LL;

    t112 = ((x537%(x538-x539))%x540);

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int32_t x541 = -1;
	uint64_t x542 = 6884175LLU;
	volatile int64_t x543 = INT64_MIN;
	int8_t x544 = -1;
	uint64_t t113 = 13414391709312LLU;

    t113 = ((x541%(x542-x543))%x544);

    if (t113 != 9223372036847891632LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x545 = 111LLU;
	uint16_t x546 = UINT16_MAX;
	volatile uint8_t x548 = UINT8_MAX;

    t114 = ((x545%(x546-x547))%x548);

    if (t114 != 111LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x549 = UINT16_MAX;
	uint8_t x550 = UINT8_MAX;
	volatile int64_t x551 = INT64_MAX;
	static int16_t x552 = INT16_MIN;

    t115 = ((x549%(x550-x551))%x552);

    if (t115 != 32767LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint64_t x553 = 0LLU;
	uint32_t x554 = 1789U;
	int64_t x556 = INT64_MAX;
	volatile uint64_t t116 = 84732537545495LLU;

    t116 = ((x553%(x554-x555))%x556);

    if (t116 != 0LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x557 = INT32_MIN;
	int8_t x558 = INT8_MIN;
	static uint32_t x559 = 1338659022U;
	static int64_t x560 = -1LL;
	int64_t t117 = 131553037241284951LL;

    t117 = ((x557%(x558-x559))%x560);

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x561 = INT32_MAX;
	uint64_t x562 = UINT64_MAX;
	int64_t x564 = 452277LL;
	static volatile uint64_t t118 = 6510LLU;

    t118 = ((x561%(x562-x563))%x564);

    if (t118 != 72451LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x565 = INT16_MIN;
	static volatile int16_t x566 = 26;
	volatile int32_t x567 = 1704685;
	int8_t x568 = -1;

    t119 = ((x565%(x566-x567))%x568);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x577 = INT32_MIN;
	int32_t x579 = INT32_MIN;
	static uint64_t t120 = 10498701034855874LLU;

    t120 = ((x577%(x578-x579))%x580);

    if (t120 != 21830LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint16_t x585 = UINT16_MAX;
	static int8_t x586 = INT8_MIN;
	int32_t x587 = -1;
	volatile int64_t t121 = 31989873093797668LL;

    t121 = ((x585%(x586-x587))%x588);

    if (t121 != 3LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x589 = -1;
	int8_t x590 = INT8_MAX;
	int32_t x591 = -1;
	static int32_t t122 = -202798461;

    t122 = ((x589%(x590-x591))%x592);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x597 = 4279792434380LLU;
	int16_t x598 = INT16_MAX;
	uint32_t x599 = UINT32_MAX;
	int32_t x600 = INT32_MIN;
	volatile uint64_t t123 = 880194221LLU;

    t123 = ((x597%(x598-x599))%x600);

    if (t123 != 31948LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x601 = -19;
	int64_t x602 = 179435LL;
	int8_t x603 = INT8_MIN;
	int64_t x604 = 1LL;

    t124 = ((x601%(x602-x603))%x604);

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x613 = INT64_MIN;
	static uint64_t x614 = 3302572676041LLU;
	static uint64_t x615 = 16262LLU;
	static volatile uint16_t x616 = 226U;
	volatile uint64_t t125 = 1123777056808LLU;

    t125 = ((x613%(x614-x615))%x616);

    if (t125 != 71LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x617 = -1;
	volatile int8_t x618 = INT8_MIN;
	static uint16_t x619 = 22818U;
	uint32_t x620 = 4688461U;
	uint32_t t126 = 400U;

    t126 = ((x617%(x618-x619))%x620);

    if (t126 != 337019U) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x621 = -2616907LL;
	int16_t x623 = 237;
	static volatile int8_t x624 = INT8_MIN;

    t127 = ((x621%(x622-x623))%x624);

    if (t127 != -97LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x625 = INT32_MIN;
	int16_t x626 = INT16_MAX;
	uint8_t x627 = UINT8_MAX;

    t128 = ((x625%(x626-x627))%x628);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x629 = -1;
	uint16_t x630 = 963U;
	int64_t x631 = -24983186140LL;
	uint8_t x632 = UINT8_MAX;
	volatile int64_t t129 = 765228228306LL;

    t129 = ((x629%(x630-x631))%x632);

    if (t129 != -1LL) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int64_t x637 = INT64_MIN;
	int32_t x638 = INT32_MAX;
	uint32_t x639 = 2029391537U;
	uint8_t x640 = UINT8_MAX;
	static volatile int64_t t130 = -724107LL;

    t130 = ((x637%(x638-x639))%x640);

    if (t130 != -233LL) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int32_t x641 = INT32_MIN;
	static uint64_t x642 = 820223LLU;
	uint8_t x643 = 0U;
	int64_t x644 = -1LL;
	uint64_t t131 = 38487528262208669LLU;

    t131 = ((x641%(x642-x643))%x644);

    if (t131 != 45779LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x658 = -1;
	int16_t x659 = INT16_MIN;

    t132 = ((x657%(x658-x659))%x660);

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x661 = UINT16_MAX;
	uint64_t x662 = 1806LLU;
	uint8_t x663 = UINT8_MAX;
	static volatile uint16_t x664 = UINT16_MAX;
	uint64_t t133 = 452LLU;

    t133 = ((x661%(x662-x663))%x664);

    if (t133 != 393LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	static int8_t x665 = -1;
	int32_t x666 = INT32_MIN;
	static int64_t x667 = 2019828915071663LL;
	int8_t x668 = INT8_MIN;
	int64_t t134 = 504530333390367713LL;

    t134 = ((x665%(x666-x667))%x668);

    if (t134 != -1LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x673 = INT8_MAX;
	int32_t x674 = 794855;
	uint8_t x675 = UINT8_MAX;
	int64_t x676 = INT64_MIN;
	static volatile int64_t t135 = -78449553LL;

    t135 = ((x673%(x674-x675))%x676);

    if (t135 != 127LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x677 = INT8_MAX;
	uint64_t x678 = UINT64_MAX;
	static volatile uint64_t x679 = 4010287870274LLU;
	static uint64_t t136 = 109609LLU;

    t136 = ((x677%(x678-x679))%x680);

    if (t136 != 127LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint16_t x683 = UINT16_MAX;
	int16_t x684 = INT16_MIN;

    t137 = ((x681%(x682-x683))%x684);

    if (t137 != 2426LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x685 = INT8_MIN;
	int32_t x686 = INT32_MIN;
	volatile int64_t x687 = INT64_MIN;
	volatile uint32_t x688 = 683368U;
	static volatile int64_t t138 = 210LL;

    t138 = ((x685%(x686-x687))%x688);

    if (t138 != -128LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x689 = INT32_MIN;
	volatile int16_t x690 = -1;
	static uint64_t x691 = 3812892951LLU;
	uint32_t x692 = 406928351U;
	uint64_t t139 = 122465993950038816LLU;

    t139 = ((x689%(x690-x691))%x692);

    if (t139 != 37695900LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x694 = INT64_MIN;
	int32_t x695 = -59;
	volatile uint64_t t140 = 2LLU;

    t140 = ((x693%(x694-x695))%x696);

    if (t140 != 46917LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x698 = UINT64_MAX;
	volatile uint64_t x699 = 2LLU;
	static uint16_t x700 = 27U;
	volatile uint64_t t141 = 276292398LLU;

    t141 = ((x697%(x698-x699))%x700);

    if (t141 != 5LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x701 = INT8_MIN;
	int16_t x702 = -1;
	int16_t x703 = INT16_MIN;
	static uint32_t x704 = 26U;
	volatile uint32_t t142 = 1U;

    t142 = ((x701%(x702-x703))%x704);

    if (t142 != 24U) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x705 = 6211;
	static volatile uint64_t x707 = 11445379LLU;
	static uint64_t t143 = 1600924LLU;

    t143 = ((x705%(x706-x707))%x708);

    if (t143 != 6211LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x709 = INT64_MAX;
	static int64_t x710 = INT64_MIN;
	int64_t x712 = 1427798LL;

    t144 = ((x709%(x710-x711))%x712);

    if (t144 != 526821LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x727 = 94663049669491LLU;
	static int64_t x728 = INT64_MAX;
	volatile uint64_t t145 = 3537342LLU;

    t145 = ((x725%(x726-x727))%x728);

    if (t145 != 94663049668253LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x737 = INT64_MIN;
	volatile uint32_t x740 = 6613178U;
	volatile int64_t t146 = 712LL;

    t146 = ((x737%(x738-x739))%x740);

    if (t146 != -8LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x745 = INT16_MIN;
	volatile int16_t x746 = INT16_MIN;
	volatile int64_t x748 = 1925282200121144148LL;
	int64_t t147 = -455426479LL;

    t147 = ((x745%(x746-x747))%x748);

    if (t147 != -128LL) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int64_t x753 = INT64_MIN;
	int64_t x754 = -1039097LL;
	int8_t x755 = -1;
	int32_t x756 = -1819573;
	int64_t t148 = 24887LL;

    t148 = ((x753%(x754-x755))%x756);

    if (t148 != -687608LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x757 = -14;

    t149 = ((x757%(x758-x759))%x760);

    if (t149 != 5597U) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x761 = 2625192208LL;
	volatile int16_t x762 = INT16_MIN;
	uint32_t x763 = 33U;
	uint64_t x764 = 24026811LLU;

    t150 = ((x761%(x762-x763))%x764);

    if (t150 != 6269809LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x765 = 146851979;
	int64_t x766 = INT64_MIN;
	int64_t x767 = -1LL;
	volatile int64_t t151 = 224LL;

    t151 = ((x765%(x766-x767))%x768);

    if (t151 != 530LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int64_t x769 = 522066799940136LL;
	static int16_t x770 = INT16_MIN;
	volatile uint64_t x772 = 2LLU;
	uint64_t t152 = 36LLU;

    t152 = ((x769%(x770-x771))%x772);

    if (t152 != 1LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	static int32_t x773 = 0;
	uint32_t x774 = 2328217U;
	volatile uint16_t x775 = UINT16_MAX;
	uint8_t x776 = 52U;
	volatile uint32_t t153 = 45768853U;

    t153 = ((x773%(x774-x775))%x776);

    if (t153 != 0U) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x777 = 17109986;
	int32_t x778 = -1;
	int64_t x779 = INT64_MAX;
	uint64_t x780 = UINT64_MAX;
	volatile uint64_t t154 = 375813563426LLU;

    t154 = ((x777%(x778-x779))%x780);

    if (t154 != 17109986LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	static int8_t x781 = -1;
	int8_t x782 = INT8_MIN;
	int64_t x783 = INT64_MIN;
	int32_t x784 = INT32_MIN;

    t155 = ((x781%(x782-x783))%x784);

    if (t155 != -1LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile uint64_t x785 = 71511897379LLU;
	static int32_t x786 = 161;
	volatile uint32_t x787 = 1396U;
	static volatile uint64_t t156 = 6LLU;

    t156 = ((x785%(x786-x787))%x788);

    if (t156 != 2792440403LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x789 = UINT8_MAX;
	int16_t x790 = INT16_MIN;
	uint32_t x791 = 1047231200U;
	int16_t x792 = INT16_MIN;
	static volatile uint32_t t157 = 261U;

    t157 = ((x789%(x790-x791))%x792);

    if (t157 != 255U) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x794 = INT64_MIN;
	int8_t x796 = -1;

    t158 = ((x793%(x794-x795))%x796);

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x797 = UINT32_MAX;
	int64_t x798 = 839LL;
	int32_t x799 = -1;
	volatile int8_t x800 = INT8_MIN;

    t159 = ((x797%(x798-x799))%x800);

    if (t159 != 127LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x801 = -1348639631LL;
	static int16_t x802 = -1;
	int16_t x803 = INT16_MAX;
	uint64_t x804 = UINT64_MAX;
	uint64_t t160 = 372LLU;

    t160 = ((x801%(x802-x803))%x804);

    if (t160 != 18446744073709544561LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x805 = 13743U;
	volatile uint16_t x806 = UINT16_MAX;
	uint16_t x807 = 0U;
	int32_t t161 = -298;

    t161 = ((x805%(x806-x807))%x808);

    if (t161 != 3) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x809 = INT32_MIN;
	uint64_t x812 = 158023062803053927LLU;
	static volatile uint64_t t162 = 2613030727177255LLU;

    t162 = ((x809%(x810-x811))%x812);

    if (t162 != 1284LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x813 = INT32_MIN;
	uint64_t x814 = 60185900908138237LLU;
	volatile int64_t x815 = INT64_MIN;
	int32_t x816 = 1794677;
	uint64_t t163 = 15324580365LLU;

    t163 = ((x813%(x814-x815))%x816);

    if (t163 != 610160LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint32_t x817 = UINT32_MAX;
	int32_t x818 = -1;
	volatile int16_t x819 = INT16_MAX;

    t164 = ((x817%(x818-x819))%x820);

    if (t164 != 32767U) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x821 = -1;
	volatile uint8_t x822 = UINT8_MAX;
	uint32_t x823 = 202216995U;
	int32_t x824 = -1;

    t165 = ((x821%(x822-x823))%x824);

    if (t165 != 202216739U) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x825 = -981026;
	int8_t x826 = -4;
	volatile int64_t x827 = -1LL;
	int32_t x828 = -2606;

    t166 = ((x825%(x826-x827))%x828);

    if (t166 != -2LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x830 = 1938;
	volatile int64_t x831 = -4624362665601027LL;
	volatile int64_t x832 = INT64_MAX;
	int64_t t167 = -415141696463866667LL;

    t167 = ((x829%(x830-x831))%x832);

    if (t167 != -2147483648LL) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint16_t x833 = UINT16_MAX;
	int8_t x835 = INT8_MAX;
	int16_t x836 = INT16_MIN;
	uint32_t t168 = 98714U;

    t168 = ((x833%(x834-x835))%x836);

    if (t168 != 4686U) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x837 = INT8_MIN;
	int16_t x838 = INT16_MIN;
	int16_t x840 = INT16_MAX;
	int64_t t169 = 0LL;

    t169 = ((x837%(x838-x839))%x840);

    if (t169 != -128LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x841 = INT32_MAX;
	int64_t x843 = 50105LL;
	volatile uint32_t x844 = 495U;
	int64_t t170 = -54272285576623LL;

    t170 = ((x841%(x842-x843))%x844);

    if (t170 != 302LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x845 = UINT8_MAX;
	volatile int16_t x847 = 1;
	int8_t x848 = -1;
	volatile int32_t t171 = -29;

    t171 = ((x845%(x846-x847))%x848);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint32_t x854 = 602U;
	volatile int64_t x856 = -1LL;
	volatile int64_t t172 = -969133764654608LL;

    t172 = ((x853%(x854-x855))%x856);

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile int8_t x857 = INT8_MAX;
	int64_t x858 = -226999LL;
	static int64_t x859 = INT64_MIN;
	uint8_t x860 = 48U;

    t173 = ((x857%(x858-x859))%x860);

    if (t173 != 31LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x861 = 4387;
	uint32_t x862 = 564563U;
	int32_t x863 = 0;
	uint16_t x864 = 4499U;
	volatile uint32_t t174 = 1U;

    t174 = ((x861%(x862-x863))%x864);

    if (t174 != 4387U) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x865 = -27;
	volatile uint32_t x866 = UINT32_MAX;
	int64_t x868 = 12295707855765284LL;
	int64_t t175 = -4LL;

    t175 = ((x865%(x866-x867))%x868);

    if (t175 != 15LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x869 = -1;
	int32_t x870 = INT32_MIN;
	uint16_t x872 = 21U;
	int32_t t176 = 126541;

    t176 = ((x869%(x870-x871))%x872);

    if (t176 != -1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x873 = UINT32_MAX;
	static uint16_t x874 = UINT16_MAX;
	int8_t x875 = 3;
	int64_t x876 = 40916381736523LL;
	volatile int64_t t177 = -241250579661LL;

    t177 = ((x873%(x874-x875))%x876);

    if (t177 != 15LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x877 = INT16_MAX;
	uint16_t x878 = 6U;
	volatile int8_t x879 = INT8_MIN;
	volatile uint8_t x880 = 73U;
	volatile int32_t t178 = -86;

    t178 = ((x877%(x878-x879))%x880);

    if (t178 != 71) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x881 = 29U;
	uint8_t x882 = 1U;
	uint64_t x883 = 101LLU;
	uint8_t x884 = UINT8_MAX;
	uint64_t t179 = 106641942656147LLU;

    t179 = ((x881%(x882-x883))%x884);

    if (t179 != 29LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x885 = 136973040LL;
	volatile uint64_t x886 = 459964987476188774LLU;
	int8_t x887 = INT8_MIN;
	volatile int8_t x888 = -1;

    t180 = ((x885%(x886-x887))%x888);

    if (t180 != 136973040LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x889 = INT64_MIN;
	int64_t x890 = INT64_MAX;
	static uint16_t x891 = 281U;
	static int8_t x892 = -1;
	volatile int64_t t181 = -1339144335865181LL;

    t181 = ((x889%(x890-x891))%x892);

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x893 = UINT16_MAX;
	uint8_t x894 = 39U;
	uint64_t x895 = 16927430LLU;
	int8_t x896 = INT8_MIN;

    t182 = ((x893%(x894-x895))%x896);

    if (t182 != 65535LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x897 = -1;
	int32_t t183 = -960757112;

    t183 = ((x897%(x898-x899))%x900);

    if (t183 != -1) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x901 = -1;
	volatile uint8_t x902 = 41U;

    t184 = ((x901%(x902-x903))%x904);

    if (t184 != -1LL) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int16_t x909 = -1;
	int32_t x910 = -729949;
	static int32_t x911 = -1;
	int64_t x912 = -245993489203510LL;
	volatile int64_t t185 = -4530694LL;

    t185 = ((x909%(x910-x911))%x912);

    if (t185 != -1LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static int8_t x913 = 30;
	uint32_t x914 = 179702U;
	uint64_t x915 = UINT64_MAX;
	volatile uint16_t x916 = 40U;
	volatile uint64_t t186 = 11844LLU;

    t186 = ((x913%(x914-x915))%x916);

    if (t186 != 30LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x918 = -1;
	uint16_t x919 = 6831U;
	int8_t x920 = INT8_MAX;
	volatile int64_t t187 = 18LL;

    t187 = ((x917%(x918-x919))%x920);

    if (t187 != -55LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint16_t x933 = UINT16_MAX;
	volatile int8_t x934 = INT8_MIN;
	uint32_t x935 = UINT32_MAX;
	uint32_t x936 = UINT32_MAX;
	volatile uint32_t t188 = 67U;

    t188 = ((x933%(x934-x935))%x936);

    if (t188 != 65535U) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x937 = INT16_MIN;
	uint8_t x938 = UINT8_MAX;
	volatile int64_t x939 = -42975340LL;
	volatile int8_t x940 = INT8_MIN;

    t189 = ((x937%(x938-x939))%x940);

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile uint8_t x941 = UINT8_MAX;
	int64_t x942 = -23843390597321466LL;
	uint64_t x943 = UINT64_MAX;
	uint16_t x944 = UINT16_MAX;
	uint64_t t190 = 11012181491LLU;

    t190 = ((x941%(x942-x943))%x944);

    if (t190 != 255LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x945 = 1;
	int8_t x947 = -34;
	int16_t x948 = INT16_MIN;
	int32_t t191 = 3952;

    t191 = ((x945%(x946-x947))%x948);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint16_t x949 = 5U;
	int64_t x950 = INT64_MIN;
	int64_t x951 = -1LL;
	int32_t x952 = -1;
	int64_t t192 = 470LL;

    t192 = ((x949%(x950-x951))%x952);

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x953 = INT16_MAX;
	int32_t x954 = INT32_MIN;
	uint32_t x955 = UINT32_MAX;
	int16_t x956 = INT16_MIN;
	uint32_t t193 = 409971U;

    t193 = ((x953%(x954-x955))%x956);

    if (t193 != 32767U) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x958 = -1;
	static uint16_t x959 = UINT16_MAX;
	int32_t x960 = 1059833;
	volatile int32_t t194 = -2;

    t194 = ((x957%(x958-x959))%x960);

    if (t194 != -3524) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x965 = 3U;
	int8_t x967 = INT8_MAX;
	static int8_t x968 = INT8_MIN;
	volatile uint32_t t195 = 47U;

    t195 = ((x965%(x966-x967))%x968);

    if (t195 != 3U) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x969 = INT64_MAX;
	static int64_t x971 = -776974635302381084LL;
	int64_t x972 = -15327173LL;

    t196 = ((x969%(x970-x971))%x972);

    if (t196 != 13586335LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x973 = -1LL;
	int16_t x974 = INT16_MIN;
	uint64_t x975 = 1276164238311LLU;
	uint16_t x976 = 8442U;
	uint64_t t197 = 110296951062975452LLU;

    t197 = ((x973%(x974-x975))%x976);

    if (t197 != 5128LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int32_t x977 = INT32_MAX;
	int8_t x979 = -1;
	int32_t x980 = INT32_MIN;

    t198 = ((x977%(x978-x979))%x980);

    if (t198 != 8847) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x981 = INT32_MIN;
	uint8_t x982 = 6U;
	int64_t t199 = 578836425646LL;

    t199 = ((x981%(x982-x983))%x984);

    if (t199 != -11LL) { NG(); } else { ; }
	
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

