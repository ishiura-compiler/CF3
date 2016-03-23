
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

volatile int32_t x8 = -1;
volatile int16_t x9 = 1;
static int32_t x22 = INT32_MAX;
volatile int32_t t4 = -3;
volatile uint8_t x40 = UINT8_MAX;
int32_t t5 = -4643652;
uint8_t x42 = 3U;
int32_t x45 = INT32_MIN;
volatile uint8_t x46 = 28U;
int32_t x48 = -1717672;
volatile int32_t t7 = -28;
static int8_t x49 = -1;
int32_t t8 = 95860;
int8_t x64 = INT8_MAX;
int16_t x65 = -1;
int32_t t12 = 29;
volatile int16_t x75 = -1;
uint64_t x76 = 3222023LLU;
uint64_t t13 = 22LLU;
volatile uint64_t x88 = UINT64_MAX;
int64_t x89 = 14980726605LL;
volatile uint8_t x92 = UINT8_MAX;
static uint8_t x99 = 30U;
volatile int32_t t19 = 29;
int32_t t22 = 11089;
static uint16_t x127 = 7289U;
volatile int32_t x129 = 1;
int64_t x130 = -1LL;
volatile int64_t x142 = INT64_MIN;
int64_t x143 = 55437382314LL;
volatile int32_t t27 = -49069878;
uint16_t x147 = 2U;
static int16_t x149 = INT16_MIN;
int64_t x155 = 767761166958167155LL;
static int32_t x167 = -1;
int32_t t32 = -1733;
int64_t x171 = 389020160982330532LL;
volatile int32_t t33 = 590423015;
int8_t x173 = 1;
int8_t x174 = -46;
volatile int32_t t36 = -125732;
static uint8_t x193 = UINT8_MAX;
static volatile int8_t x201 = -1;
int16_t x206 = 826;
int64_t x207 = -1LL;
volatile int32_t t42 = 4186043;
volatile int16_t x216 = 146;
int16_t x220 = 1;
volatile int8_t x234 = -1;
static int8_t x237 = -1;
volatile int64_t t48 = -3932651197LL;
int64_t x241 = INT64_MIN;
static int16_t x243 = INT16_MIN;
int64_t t49 = 38383001LL;
int32_t t51 = 499118;
int64_t x257 = -1LL;
int32_t x263 = -1;
static int32_t x268 = 0;
volatile uint64_t x269 = 737786821393056027LLU;
volatile int32_t x270 = INT32_MAX;
int8_t x276 = -17;
int32_t t56 = -1694;
int8_t x279 = 14;
int16_t x287 = -1;
volatile int32_t t58 = 1;
static uint64_t x291 = 3LLU;
int8_t x302 = 6;
volatile int16_t x318 = -1;
uint16_t x321 = UINT16_MAX;
int16_t x324 = -1;
int64_t x327 = 170123010635522LL;
int16_t x331 = -1;
int16_t x348 = -46;
int32_t x357 = INT32_MIN;
uint16_t x360 = UINT16_MAX;
int32_t t73 = -63544956;
int8_t x365 = INT8_MIN;
int32_t t75 = 932214;
int32_t x370 = -419954365;
int16_t x374 = INT16_MAX;
static volatile int32_t t77 = 14794;
volatile int8_t x380 = INT8_MIN;
volatile int8_t x382 = 1;
volatile int16_t x384 = INT16_MAX;
int16_t x389 = -4257;
volatile int64_t x393 = INT64_MAX;
int64_t x404 = -1LL;
uint32_t x414 = 126298U;
int16_t x418 = -1;
int32_t x429 = 95711137;
uint16_t x430 = UINT16_MAX;
static int32_t t90 = 873406242;
int32_t x449 = INT32_MIN;
static uint32_t x454 = UINT32_MAX;
volatile int64_t x455 = -1LL;
int8_t x461 = INT8_MIN;
uint32_t x466 = 4806U;
int64_t x473 = -1LL;
static int8_t x475 = INT8_MIN;
static int16_t x476 = INT16_MAX;
uint64_t x479 = 80199929124LLU;
int16_t x481 = -1025;
volatile int8_t x482 = -5;
int32_t t102 = 835;
uint64_t x493 = 1821LLU;
uint64_t x494 = 227827547617125317LLU;
uint16_t x496 = UINT16_MAX;
uint32_t x503 = 14859U;
volatile int8_t x508 = INT8_MIN;
static uint16_t x513 = 897U;
static uint16_t x520 = 29U;
volatile uint32_t t110 = 1U;
static int16_t x532 = -1;
uint16_t x538 = 29888U;
uint64_t x549 = 5601799534879225LLU;
int32_t t114 = 546626;
static volatile int8_t x561 = INT8_MIN;
static uint32_t t116 = 0U;
int64_t t117 = -5087800328LL;
uint8_t x574 = UINT8_MAX;
static int64_t x576 = 52LL;
static int8_t x585 = INT8_MAX;
uint16_t x586 = 1708U;
static int32_t x588 = 11319;
volatile int32_t x590 = INT32_MIN;
int32_t t123 = 1;
static volatile uint8_t x593 = 41U;
volatile int8_t x596 = -1;
volatile int32_t t124 = 6641722;
uint32_t x599 = 107U;
int16_t x606 = -1;
volatile int64_t x609 = -1LL;
volatile int16_t x610 = -1;
volatile int16_t x613 = 538;
uint8_t x615 = UINT8_MAX;
static int8_t x616 = -1;
int16_t x624 = INT16_MAX;
volatile int64_t t132 = 6304910750LL;
static int32_t x632 = INT32_MAX;
static volatile int32_t t133 = -1112704;
static volatile uint64_t x636 = 22034901841523077LLU;
uint16_t x638 = 0U;
int16_t x644 = INT16_MIN;
static int32_t t136 = -3;
uint32_t x646 = 5358U;
static volatile int64_t x662 = INT64_MIN;
int32_t x665 = -1;
int64_t x671 = 2505356828LL;
int8_t x672 = INT8_MIN;
static int8_t x673 = -1;
int16_t x679 = INT16_MIN;
static uint64_t x689 = 279139484358920LLU;
int64_t x690 = 54563LL;
uint64_t x691 = UINT64_MAX;
uint64_t x694 = 12714608LLU;
int8_t x695 = INT8_MIN;
int16_t x697 = INT16_MAX;
int16_t x700 = 70;
static int16_t x705 = INT16_MIN;
uint64_t x707 = 102010LLU;
static int8_t x722 = 0;
int64_t x723 = 57LL;
volatile int32_t t153 = 1000688181;
static int16_t x731 = INT16_MAX;
int32_t t155 = -5881;
uint8_t x735 = UINT8_MAX;
volatile uint64_t x740 = 174981716LLU;
volatile int16_t x751 = 1;
static volatile int64_t x759 = INT64_MAX;
static int8_t x762 = INT8_MIN;
volatile int32_t x767 = -2;
uint32_t x768 = UINT32_MAX;
int32_t x769 = -121;
static int64_t x775 = INT64_MIN;
volatile int32_t t166 = 39539986;
uint16_t x788 = 2005U;
int16_t x796 = INT16_MIN;
int32_t t171 = -176;
int8_t x807 = 61;
volatile int32_t t174 = -65661743;
uint64_t x836 = 33742092074088501LLU;
static int32_t x839 = INT32_MIN;
uint8_t x855 = 13U;
static uint64_t x856 = 372LLU;
int16_t x859 = INT16_MIN;
int32_t x864 = -1;
int8_t x865 = 9;
uint8_t x868 = UINT8_MAX;
volatile int32_t x874 = -1;
volatile int64_t x879 = INT64_MIN;
volatile uint64_t t189 = 11LLU;
int32_t t190 = -38119665;
uint32_t x891 = 614769344U;
int32_t x892 = -14833195;
volatile int32_t t191 = 5;
uint64_t x909 = 17322106339092LLU;
uint8_t x910 = 3U;
int8_t x911 = INT8_MIN;
int8_t x912 = INT8_MIN;
static int32_t t196 = -140469438;
static volatile int32_t t197 = 2246;


void f0(void) {
    	volatile uint64_t x1 = 42453431LLU;
	volatile uint32_t x2 = 481467173U;
	int64_t x3 = -1LL;
	int8_t x4 = INT8_MIN;
	volatile int32_t t0 = 202;

    t0 = ((x1==(x2+x3))-x4);

    if (t0 != 128) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = -7;
	volatile int64_t x6 = INT64_MIN;
	int32_t x7 = INT32_MAX;
	volatile int32_t t1 = 243343;

    t1 = ((x5==(x6+x7))-x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x10 = 24850297670955127LLU;
	int8_t x11 = INT8_MIN;
	volatile int16_t x12 = INT16_MAX;
	volatile int32_t t2 = 27791;

    t2 = ((x9==(x10+x11))-x12);

    if (t2 != -32767) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MAX;
	static int16_t x14 = -1;
	static int64_t x15 = -100740491981982LL;
	static int8_t x16 = INT8_MIN;
	volatile int32_t t3 = -1;

    t3 = ((x13==(x14+x15))-x16);

    if (t3 != 128) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x21 = -1LL;
	int32_t x23 = INT32_MIN;
	int16_t x24 = INT16_MIN;

    t4 = ((x21==(x22+x23))-x24);

    if (t4 != 32769) { NG(); } else { ; }
	
}

void f5(void) {
    	static int32_t x37 = INT32_MAX;
	int16_t x38 = INT16_MIN;
	int8_t x39 = INT8_MAX;

    t5 = ((x37==(x38+x39))-x40);

    if (t5 != -255) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x41 = 1;
	int8_t x43 = -59;
	int16_t x44 = INT16_MIN;
	volatile int32_t t6 = -7116;

    t6 = ((x41==(x42+x43))-x44);

    if (t6 != 32768) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x47 = INT16_MIN;

    t7 = ((x45==(x46+x47))-x48);

    if (t7 != 1717672) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x50 = -26;
	uint16_t x51 = 6130U;
	uint16_t x52 = UINT16_MAX;

    t8 = ((x49==(x50+x51))-x52);

    if (t8 != -65535) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x57 = -1;
	uint16_t x58 = UINT16_MAX;
	static volatile uint16_t x59 = 4U;
	static int32_t x60 = INT32_MAX;
	int32_t t9 = -950171634;

    t9 = ((x57==(x58+x59))-x60);

    if (t9 != -2147483647) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x61 = INT64_MAX;
	int64_t x62 = -4448952935505693LL;
	uint32_t x63 = 1922U;
	static int32_t t10 = 5366;

    t10 = ((x61==(x62+x63))-x64);

    if (t10 != -127) { NG(); } else { ; }
	
}

void f11(void) {
    	static int16_t x66 = INT16_MIN;
	int16_t x67 = 691;
	int32_t x68 = 5;
	volatile int32_t t11 = -71550633;

    t11 = ((x65==(x66+x67))-x68);

    if (t11 != -5) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x69 = UINT8_MAX;
	volatile uint16_t x70 = UINT16_MAX;
	int8_t x71 = INT8_MIN;
	int8_t x72 = -1;

    t12 = ((x69==(x70+x71))-x72);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x73 = INT32_MAX;
	int16_t x74 = 5537;

    t13 = ((x73==(x74+x75))-x76);

    if (t13 != 18446744073706329593LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x77 = 16U;
	int8_t x78 = INT8_MIN;
	static int16_t x79 = INT16_MIN;
	static uint8_t x80 = 0U;
	static int32_t t14 = -2285105;

    t14 = ((x77==(x78+x79))-x80);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x81 = UINT8_MAX;
	static int8_t x82 = -1;
	int16_t x83 = 0;
	int32_t x84 = 38369809;
	int32_t t15 = 1792;

    t15 = ((x81==(x82+x83))-x84);

    if (t15 != -38369809) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x85 = 2546934928769LLU;
	volatile uint16_t x86 = 7U;
	static volatile int16_t x87 = -1;
	uint64_t t16 = 8LLU;

    t16 = ((x85==(x86+x87))-x88);

    if (t16 != 1LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x90 = -1;
	volatile int64_t x91 = INT64_MAX;
	volatile int32_t t17 = 126820;

    t17 = ((x89==(x90+x91))-x92);

    if (t17 != -255) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint32_t x93 = 409U;
	uint64_t x94 = 505LLU;
	int8_t x95 = INT8_MAX;
	int16_t x96 = 51;
	static volatile int32_t t18 = 9060;

    t18 = ((x93==(x94+x95))-x96);

    if (t18 != -51) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x97 = 0;
	int8_t x98 = -1;
	uint8_t x100 = UINT8_MAX;

    t19 = ((x97==(x98+x99))-x100);

    if (t19 != -255) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint16_t x105 = 18U;
	static volatile int8_t x106 = INT8_MIN;
	uint64_t x107 = 0LLU;
	int64_t x108 = -53549744LL;
	volatile int64_t t20 = -6776435136286958LL;

    t20 = ((x105==(x106+x107))-x108);

    if (t20 != 53549744LL) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int32_t x109 = -1782877;
	int32_t x110 = INT32_MIN;
	int16_t x111 = 34;
	uint16_t x112 = 163U;
	volatile int32_t t21 = -53;

    t21 = ((x109==(x110+x111))-x112);

    if (t21 != -163) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x113 = UINT16_MAX;
	int8_t x114 = INT8_MAX;
	int32_t x115 = -4705;
	int8_t x116 = INT8_MIN;

    t22 = ((x113==(x114+x115))-x116);

    if (t22 != 128) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x117 = INT16_MIN;
	int16_t x118 = 476;
	volatile uint8_t x119 = 102U;
	static uint32_t x120 = 104650U;
	volatile uint32_t t23 = 538031U;

    t23 = ((x117==(x118+x119))-x120);

    if (t23 != 4294862646U) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x125 = INT32_MIN;
	static int16_t x126 = INT16_MAX;
	int16_t x128 = -1649;
	static volatile int32_t t24 = 44595519;

    t24 = ((x125==(x126+x127))-x128);

    if (t24 != 1649) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x131 = INT32_MIN;
	int16_t x132 = 1;
	int32_t t25 = 88578161;

    t25 = ((x129==(x130+x131))-x132);

    if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
    	static int32_t x137 = 121061265;
	static uint16_t x138 = 1U;
	int16_t x139 = INT16_MIN;
	int8_t x140 = 48;
	int32_t t26 = -2506;

    t26 = ((x137==(x138+x139))-x140);

    if (t26 != -48) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x141 = 583U;
	int16_t x144 = -1;

    t27 = ((x141==(x142+x143))-x144);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x145 = INT8_MAX;
	int64_t x146 = -82811685335LL;
	volatile uint64_t x148 = 1556LLU;
	volatile uint64_t t28 = 8215955645LLU;

    t28 = ((x145==(x146+x147))-x148);

    if (t28 != 18446744073709550060LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x150 = -421;
	int64_t x151 = -7281LL;
	uint8_t x152 = UINT8_MAX;
	volatile int32_t t29 = 5210093;

    t29 = ((x149==(x150+x151))-x152);

    if (t29 != -255) { NG(); } else { ; }
	
}

void f30(void) {
    	static int16_t x153 = -1;
	int8_t x154 = 15;
	int8_t x156 = -47;
	int32_t t30 = 45712398;

    t30 = ((x153==(x154+x155))-x156);

    if (t30 != 47) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x161 = 2;
	int32_t x162 = -1;
	static int16_t x163 = INT16_MAX;
	uint16_t x164 = UINT16_MAX;
	int32_t t31 = 1;

    t31 = ((x161==(x162+x163))-x164);

    if (t31 != -65535) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x165 = INT16_MIN;
	uint64_t x166 = 1074961LLU;
	int16_t x168 = INT16_MAX;

    t32 = ((x165==(x166+x167))-x168);

    if (t32 != -32767) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int64_t x169 = -2023046LL;
	int64_t x170 = -6962712972841LL;
	static int32_t x172 = INT32_MAX;

    t33 = ((x169==(x170+x171))-x172);

    if (t33 != -2147483647) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x175 = INT64_MAX;
	volatile int8_t x176 = -2;
	static volatile int32_t t34 = 64603816;

    t34 = ((x173==(x174+x175))-x176);

    if (t34 != 2) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x177 = INT8_MIN;
	int32_t x178 = 16;
	int16_t x179 = INT16_MIN;
	int32_t x180 = 91861;
	int32_t t35 = 11459;

    t35 = ((x177==(x178+x179))-x180);

    if (t35 != -91861) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x181 = UINT8_MAX;
	int64_t x182 = 147652620389LL;
	volatile int64_t x183 = 38509093LL;
	int8_t x184 = INT8_MIN;

    t36 = ((x181==(x182+x183))-x184);

    if (t36 != 128) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x185 = 100U;
	int16_t x186 = INT16_MAX;
	volatile uint8_t x187 = 0U;
	uint64_t x188 = 5423LLU;
	uint64_t t37 = 15461LLU;

    t37 = ((x185==(x186+x187))-x188);

    if (t37 != 18446744073709546193LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint8_t x194 = 0U;
	int16_t x195 = 3;
	volatile int8_t x196 = -1;
	volatile int32_t t38 = 223558792;

    t38 = ((x193==(x194+x195))-x196);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x197 = -1;
	int64_t x198 = -1869077033LL;
	int32_t x199 = -1;
	int64_t x200 = -1LL;
	static volatile int64_t t39 = 1831LL;

    t39 = ((x197==(x198+x199))-x200);

    if (t39 != 1LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint64_t x202 = UINT64_MAX;
	static int16_t x203 = -1;
	uint8_t x204 = 8U;
	static volatile int32_t t40 = -3;

    t40 = ((x201==(x202+x203))-x204);

    if (t40 != -8) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x205 = INT32_MAX;
	int16_t x208 = INT16_MIN;
	volatile int32_t t41 = -6;

    t41 = ((x205==(x206+x207))-x208);

    if (t41 != 32768) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x209 = 505LLU;
	volatile int8_t x210 = INT8_MAX;
	volatile int64_t x211 = INT64_MIN;
	volatile int8_t x212 = -1;

    t42 = ((x209==(x210+x211))-x212);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x213 = 42;
	static int32_t x214 = 1;
	uint64_t x215 = 2763022LLU;
	static int32_t t43 = 0;

    t43 = ((x213==(x214+x215))-x216);

    if (t43 != -146) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x217 = 27U;
	uint32_t x218 = UINT32_MAX;
	uint8_t x219 = 85U;
	volatile int32_t t44 = -65075343;

    t44 = ((x217==(x218+x219))-x220);

    if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x225 = INT16_MAX;
	int16_t x226 = INT16_MIN;
	int16_t x227 = 56;
	static volatile uint8_t x228 = UINT8_MAX;
	int32_t t45 = 27;

    t45 = ((x225==(x226+x227))-x228);

    if (t45 != -255) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x229 = INT32_MAX;
	uint16_t x230 = 1U;
	int16_t x231 = INT16_MAX;
	int32_t x232 = INT32_MAX;
	volatile int32_t t46 = 27506;

    t46 = ((x229==(x230+x231))-x232);

    if (t46 != -2147483647) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x233 = 3;
	uint16_t x235 = 3U;
	volatile int32_t x236 = 95738;
	int32_t t47 = -2;

    t47 = ((x233==(x234+x235))-x236);

    if (t47 != -95738) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x238 = INT8_MIN;
	uint8_t x239 = UINT8_MAX;
	int64_t x240 = -1LL;

    t48 = ((x237==(x238+x239))-x240);

    if (t48 != 1LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x242 = -2;
	int64_t x244 = -81700063693LL;

    t49 = ((x241==(x242+x243))-x244);

    if (t49 != 81700063693LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x249 = INT16_MAX;
	static int8_t x250 = -1;
	static int32_t x251 = 229352922;
	volatile int16_t x252 = INT16_MIN;
	int32_t t50 = -281565523;

    t50 = ((x249==(x250+x251))-x252);

    if (t50 != 32768) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x253 = INT32_MIN;
	uint64_t x254 = 447738071350621LLU;
	int8_t x255 = INT8_MAX;
	uint16_t x256 = 81U;

    t51 = ((x253==(x254+x255))-x256);

    if (t51 != -81) { NG(); } else { ; }
	
}

void f52(void) {
    	static int64_t x258 = INT64_MIN;
	uint16_t x259 = 242U;
	volatile int32_t x260 = -1;
	int32_t t52 = -4106;

    t52 = ((x257==(x258+x259))-x260);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x261 = 0;
	volatile int16_t x262 = -1;
	static uint64_t x264 = 21LLU;
	volatile uint64_t t53 = 456949425LLU;

    t53 = ((x261==(x262+x263))-x264);

    if (t53 != 18446744073709551595LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x265 = UINT16_MAX;
	int16_t x266 = INT16_MIN;
	int64_t x267 = 18854933135419LL;
	volatile int32_t t54 = -461;

    t54 = ((x265==(x266+x267))-x268);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int8_t x271 = INT8_MIN;
	volatile uint8_t x272 = UINT8_MAX;
	int32_t t55 = -31;

    t55 = ((x269==(x270+x271))-x272);

    if (t55 != -255) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x273 = INT32_MAX;
	int32_t x274 = -1;
	static int8_t x275 = 3;

    t56 = ((x273==(x274+x275))-x276);

    if (t56 != 17) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x277 = INT8_MAX;
	int32_t x278 = 492;
	static uint32_t x280 = UINT32_MAX;
	uint32_t t57 = 1065501890U;

    t57 = ((x277==(x278+x279))-x280);

    if (t57 != 1U) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x285 = INT16_MIN;
	uint64_t x286 = 2361616208191424625LLU;
	uint16_t x288 = 6232U;

    t58 = ((x285==(x286+x287))-x288);

    if (t58 != -6232) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x289 = INT64_MIN;
	int64_t x290 = INT64_MAX;
	int8_t x292 = -1;
	int32_t t59 = -56197;

    t59 = ((x289==(x290+x291))-x292);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x293 = -1LL;
	int8_t x294 = INT8_MIN;
	int8_t x295 = 1;
	static int16_t x296 = INT16_MIN;
	int32_t t60 = 18785;

    t60 = ((x293==(x294+x295))-x296);

    if (t60 != 32768) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x297 = 63976786726281LLU;
	int32_t x298 = -522;
	volatile int8_t x299 = -1;
	int8_t x300 = 13;
	volatile int32_t t61 = -245851578;

    t61 = ((x297==(x298+x299))-x300);

    if (t61 != -13) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x301 = UINT64_MAX;
	static int64_t x303 = -1LL;
	int64_t x304 = 263565127727009409LL;
	volatile int64_t t62 = -28153293443908474LL;

    t62 = ((x301==(x302+x303))-x304);

    if (t62 != -263565127727009409LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x305 = -76330283LL;
	uint16_t x306 = 19U;
	int32_t x307 = -1997577;
	int8_t x308 = INT8_MIN;
	volatile int32_t t63 = -87397626;

    t63 = ((x305==(x306+x307))-x308);

    if (t63 != 128) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x313 = INT8_MIN;
	static int16_t x314 = INT16_MAX;
	static int16_t x315 = -584;
	int8_t x316 = INT8_MAX;
	int32_t t64 = -2063271;

    t64 = ((x313==(x314+x315))-x316);

    if (t64 != -127) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x317 = INT32_MIN;
	uint16_t x319 = 79U;
	int32_t x320 = INT32_MAX;
	int32_t t65 = 0;

    t65 = ((x317==(x318+x319))-x320);

    if (t65 != -2147483647) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x322 = 7;
	int64_t x323 = INT64_MIN;
	volatile int32_t t66 = -322637019;

    t66 = ((x321==(x322+x323))-x324);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x325 = 0U;
	int32_t x326 = 450796500;
	uint64_t x328 = 0LLU;
	volatile uint64_t t67 = 5983003747986LLU;

    t67 = ((x325==(x326+x327))-x328);

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int16_t x329 = INT16_MAX;
	int64_t x330 = -1LL;
	uint8_t x332 = 64U;
	int32_t t68 = 75581302;

    t68 = ((x329==(x330+x331))-x332);

    if (t68 != -64) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int64_t x333 = INT64_MIN;
	int32_t x334 = INT32_MIN;
	static volatile int32_t x335 = 112357117;
	int16_t x336 = INT16_MAX;
	volatile int32_t t69 = 0;

    t69 = ((x333==(x334+x335))-x336);

    if (t69 != -32767) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x337 = 20916;
	int16_t x338 = INT16_MIN;
	uint32_t x339 = 218184359U;
	static volatile int16_t x340 = -1;
	int32_t t70 = 16013444;

    t70 = ((x337==(x338+x339))-x340);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x345 = INT32_MIN;
	volatile uint8_t x346 = 2U;
	uint32_t x347 = 42U;
	volatile int32_t t71 = -1;

    t71 = ((x345==(x346+x347))-x348);

    if (t71 != 46) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x349 = INT8_MIN;
	volatile int64_t x350 = -1LL;
	static int64_t x351 = -1LL;
	uint8_t x352 = UINT8_MAX;
	int32_t t72 = -1959;

    t72 = ((x349==(x350+x351))-x352);

    if (t72 != -255) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint64_t x358 = UINT64_MAX;
	static int32_t x359 = -3518;

    t73 = ((x357==(x358+x359))-x360);

    if (t73 != -65535) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile uint32_t x361 = UINT32_MAX;
	volatile int16_t x362 = INT16_MIN;
	volatile uint32_t x363 = UINT32_MAX;
	int16_t x364 = -1;
	volatile int32_t t74 = -1687024;

    t74 = ((x361==(x362+x363))-x364);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x366 = 608U;
	static int8_t x367 = -5;
	static int32_t x368 = -1;

    t75 = ((x365==(x366+x367))-x368);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint32_t x369 = 443U;
	int8_t x371 = INT8_MIN;
	int8_t x372 = INT8_MIN;
	int32_t t76 = -131;

    t76 = ((x369==(x370+x371))-x372);

    if (t76 != 128) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x373 = 116398U;
	static int64_t x375 = -1LL;
	int16_t x376 = INT16_MIN;

    t77 = ((x373==(x374+x375))-x376);

    if (t77 != 32768) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile uint16_t x377 = UINT16_MAX;
	volatile uint16_t x378 = 591U;
	int8_t x379 = INT8_MIN;
	int32_t t78 = 115470589;

    t78 = ((x377==(x378+x379))-x380);

    if (t78 != 128) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x381 = -240;
	static uint32_t x383 = 4979815U;
	int32_t t79 = -347131;

    t79 = ((x381==(x382+x383))-x384);

    if (t79 != -32767) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x390 = 66927046828LLU;
	static int64_t x391 = -15LL;
	int16_t x392 = INT16_MAX;
	int32_t t80 = 6;

    t80 = ((x389==(x390+x391))-x392);

    if (t80 != -32767) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x394 = UINT32_MAX;
	int8_t x395 = -1;
	volatile int16_t x396 = INT16_MIN;
	static volatile int32_t t81 = -765949879;

    t81 = ((x393==(x394+x395))-x396);

    if (t81 != 32768) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int16_t x401 = -44;
	volatile uint64_t x402 = 540263101LLU;
	static int32_t x403 = INT32_MIN;
	volatile int64_t t82 = 15LL;

    t82 = ((x401==(x402+x403))-x404);

    if (t82 != 1LL) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint64_t x405 = 316379474128185225LLU;
	static int16_t x406 = 3766;
	int64_t x407 = 347295525452949745LL;
	static uint8_t x408 = UINT8_MAX;
	volatile int32_t t83 = -334352;

    t83 = ((x405==(x406+x407))-x408);

    if (t83 != -255) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x409 = INT8_MIN;
	int16_t x410 = -416;
	uint64_t x411 = 9917825LLU;
	int64_t x412 = 1846457053467LL;
	static int64_t t84 = -155118794936318LL;

    t84 = ((x409==(x410+x411))-x412);

    if (t84 != -1846457053467LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x413 = 982LL;
	int8_t x415 = INT8_MIN;
	uint64_t x416 = 29174009137789500LLU;
	uint64_t t85 = 25732LLU;

    t85 = ((x413==(x414+x415))-x416);

    if (t85 != 18417570064571762116LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x417 = 0;
	volatile int32_t x419 = INT32_MAX;
	uint64_t x420 = UINT64_MAX;
	static uint64_t t86 = 0LLU;

    t86 = ((x417==(x418+x419))-x420);

    if (t86 != 1LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x421 = -1;
	int16_t x422 = -261;
	uint64_t x423 = 2755796135263818LLU;
	int16_t x424 = INT16_MAX;
	static volatile int32_t t87 = 15;

    t87 = ((x421==(x422+x423))-x424);

    if (t87 != -32767) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x425 = 1720;
	uint32_t x426 = 2331340U;
	volatile int8_t x427 = 1;
	int8_t x428 = INT8_MIN;
	static volatile int32_t t88 = -758483;

    t88 = ((x425==(x426+x427))-x428);

    if (t88 != 128) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint32_t x431 = 1014U;
	uint32_t x432 = 549918570U;
	static uint32_t t89 = 11U;

    t89 = ((x429==(x430+x431))-x432);

    if (t89 != 3745048726U) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x433 = 502048641;
	uint8_t x434 = 5U;
	int32_t x435 = INT32_MIN;
	int32_t x436 = INT32_MAX;

    t90 = ((x433==(x434+x435))-x436);

    if (t90 != -2147483647) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x437 = INT8_MIN;
	int16_t x438 = INT16_MAX;
	static uint64_t x439 = 115900836LLU;
	int8_t x440 = INT8_MIN;
	volatile int32_t t91 = 0;

    t91 = ((x437==(x438+x439))-x440);

    if (t91 != 128) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x441 = INT32_MAX;
	volatile int16_t x442 = 1333;
	int64_t x443 = INT64_MIN;
	int16_t x444 = INT16_MIN;
	volatile int32_t t92 = -227;

    t92 = ((x441==(x442+x443))-x444);

    if (t92 != 32768) { NG(); } else { ; }
	
}

void f93(void) {
    	static int64_t x445 = INT64_MIN;
	uint32_t x446 = 66063U;
	static int8_t x447 = INT8_MAX;
	int16_t x448 = INT16_MAX;
	int32_t t93 = 38;

    t93 = ((x445==(x446+x447))-x448);

    if (t93 != -32767) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x450 = -1;
	uint16_t x451 = UINT16_MAX;
	int64_t x452 = 548486747890LL;
	int64_t t94 = 221815725490LL;

    t94 = ((x449==(x450+x451))-x452);

    if (t94 != -548486747890LL) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int8_t x453 = -3;
	int16_t x456 = INT16_MIN;
	int32_t t95 = -385;

    t95 = ((x453==(x454+x455))-x456);

    if (t95 != 32768) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x457 = 9531;
	static int8_t x458 = INT8_MIN;
	int8_t x459 = INT8_MIN;
	uint8_t x460 = 2U;
	volatile int32_t t96 = -37010;

    t96 = ((x457==(x458+x459))-x460);

    if (t96 != -2) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x462 = 46;
	uint8_t x463 = 8U;
	int8_t x464 = 13;
	int32_t t97 = 264981;

    t97 = ((x461==(x462+x463))-x464);

    if (t97 != -13) { NG(); } else { ; }
	
}

void f98(void) {
    	static int32_t x465 = INT32_MAX;
	uint8_t x467 = UINT8_MAX;
	volatile uint16_t x468 = 529U;
	int32_t t98 = -1179388;

    t98 = ((x465==(x466+x467))-x468);

    if (t98 != -529) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x469 = UINT8_MAX;
	static int64_t x470 = -1LL;
	int8_t x471 = INT8_MIN;
	int32_t x472 = -7;
	int32_t t99 = -20;

    t99 = ((x469==(x470+x471))-x472);

    if (t99 != 7) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x474 = 404;
	int32_t t100 = 88234;

    t100 = ((x473==(x474+x475))-x476);

    if (t100 != -32767) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x477 = -1LL;
	int16_t x478 = INT16_MIN;
	uint64_t x480 = 3213188083355LLU;
	volatile uint64_t t101 = 44341944986766LLU;

    t101 = ((x477==(x478+x479))-x480);

    if (t101 != 18446740860521468261LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int64_t x483 = INT64_MAX;
	int32_t x484 = 204743;

    t102 = ((x481==(x482+x483))-x484);

    if (t102 != -204743) { NG(); } else { ; }
	
}

void f103(void) {
    	static int64_t x485 = INT64_MAX;
	volatile uint8_t x486 = 43U;
	volatile uint16_t x487 = 1U;
	int32_t x488 = -1;
	volatile int32_t t103 = -20;

    t103 = ((x485==(x486+x487))-x488);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static int64_t x495 = INT64_MIN;
	int32_t t104 = 0;

    t104 = ((x493==(x494+x495))-x496);

    if (t104 != -65535) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x497 = -1;
	static int16_t x498 = INT16_MIN;
	uint16_t x499 = UINT16_MAX;
	uint8_t x500 = UINT8_MAX;
	int32_t t105 = 1;

    t105 = ((x497==(x498+x499))-x500);

    if (t105 != -255) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x501 = INT8_MIN;
	uint16_t x502 = 247U;
	static int16_t x504 = -1;
	int32_t t106 = -107;

    t106 = ((x501==(x502+x503))-x504);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x505 = INT64_MAX;
	uint16_t x506 = UINT16_MAX;
	uint32_t x507 = 11988U;
	int32_t t107 = 130946;

    t107 = ((x505==(x506+x507))-x508);

    if (t107 != 128) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x514 = INT16_MAX;
	uint64_t x515 = 6428LLU;
	int64_t x516 = INT64_MAX;
	static volatile int64_t t108 = -8149715319891777LL;

    t108 = ((x513==(x514+x515))-x516);

    if (t108 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x517 = 34U;
	uint64_t x518 = UINT64_MAX;
	uint8_t x519 = UINT8_MAX;
	volatile int32_t t109 = -489257251;

    t109 = ((x517==(x518+x519))-x520);

    if (t109 != -29) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x521 = UINT32_MAX;
	int8_t x522 = INT8_MIN;
	int16_t x523 = INT16_MIN;
	uint32_t x524 = 458U;

    t110 = ((x521==(x522+x523))-x524);

    if (t110 != 4294966838U) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x529 = INT32_MIN;
	volatile int8_t x530 = INT8_MIN;
	int32_t x531 = -1;
	volatile int32_t t111 = 0;

    t111 = ((x529==(x530+x531))-x532);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x537 = -1LL;
	volatile int32_t x539 = 5992;
	uint32_t x540 = 62U;
	volatile uint32_t t112 = 1060839U;

    t112 = ((x537==(x538+x539))-x540);

    if (t112 != 4294967234U) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int32_t x550 = INT32_MAX;
	uint32_t x551 = UINT32_MAX;
	int8_t x552 = INT8_MAX;
	volatile int32_t t113 = 49697;

    t113 = ((x549==(x550+x551))-x552);

    if (t113 != -127) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint8_t x553 = UINT8_MAX;
	volatile int16_t x554 = -1;
	volatile int16_t x555 = INT16_MIN;
	int32_t x556 = INT32_MAX;

    t114 = ((x553==(x554+x555))-x556);

    if (t114 != -2147483647) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x557 = INT16_MAX;
	static int16_t x558 = -1;
	int64_t x559 = 0LL;
	uint64_t x560 = 27031245325905853LLU;
	static uint64_t t115 = 439263792121865925LLU;

    t115 = ((x557==(x558+x559))-x560);

    if (t115 != 18419712828383645763LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x562 = -1;
	int8_t x563 = -1;
	uint32_t x564 = 2U;

    t116 = ((x561==(x562+x563))-x564);

    if (t116 != 4294967294U) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x565 = UINT32_MAX;
	int16_t x566 = INT16_MAX;
	int8_t x567 = INT8_MIN;
	int64_t x568 = 148046293048402LL;

    t117 = ((x565==(x566+x567))-x568);

    if (t117 != -148046293048402LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x569 = -267003861957516LL;
	uint8_t x570 = UINT8_MAX;
	uint8_t x571 = 1U;
	volatile uint16_t x572 = 682U;
	volatile int32_t t118 = -298789789;

    t118 = ((x569==(x570+x571))-x572);

    if (t118 != -682) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x573 = 3;
	uint64_t x575 = 117LLU;
	volatile int64_t t119 = -2105945561283355954LL;

    t119 = ((x573==(x574+x575))-x576);

    if (t119 != -52LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x577 = INT8_MIN;
	int8_t x578 = INT8_MIN;
	uint16_t x579 = 151U;
	int64_t x580 = INT64_MAX;
	volatile int64_t t120 = 5751879990772LL;

    t120 = ((x577==(x578+x579))-x580);

    if (t120 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f121(void) {
    	static int16_t x581 = -9542;
	static int32_t x582 = 70;
	volatile int8_t x583 = 1;
	static int8_t x584 = 7;
	int32_t t121 = -62249821;

    t121 = ((x581==(x582+x583))-x584);

    if (t121 != -7) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x587 = 15U;
	int32_t t122 = -167509;

    t122 = ((x585==(x586+x587))-x588);

    if (t122 != -11319) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int64_t x589 = -1LL;
	volatile uint16_t x591 = 2614U;
	static volatile uint8_t x592 = 11U;

    t123 = ((x589==(x590+x591))-x592);

    if (t123 != -11) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x594 = 10;
	uint64_t x595 = UINT64_MAX;

    t124 = ((x593==(x594+x595))-x596);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x597 = -1;
	uint64_t x598 = 7527LLU;
	uint32_t x600 = 495497U;
	uint32_t t125 = 103270U;

    t125 = ((x597==(x598+x599))-x600);

    if (t125 != 4294471799U) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x601 = -31259795;
	volatile int16_t x602 = 16104;
	uint32_t x603 = 1804635863U;
	int8_t x604 = -1;
	static int32_t t126 = 0;

    t126 = ((x601==(x602+x603))-x604);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x605 = 114892769LLU;
	int32_t x607 = -1;
	volatile int64_t x608 = 10836369LL;
	int64_t t127 = 421159LL;

    t127 = ((x605==(x606+x607))-x608);

    if (t127 != -10836369LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x611 = 3U;
	int32_t x612 = INT32_MAX;
	int32_t t128 = 24;

    t128 = ((x609==(x610+x611))-x612);

    if (t128 != -2147483647) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x614 = -53;
	static volatile int32_t t129 = 29353715;

    t129 = ((x613==(x614+x615))-x616);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x617 = 917299U;
	static int8_t x618 = INT8_MIN;
	int8_t x619 = INT8_MIN;
	volatile uint64_t x620 = 245732696203LLU;
	static volatile uint64_t t130 = 233141138647LLU;

    t130 = ((x617==(x618+x619))-x620);

    if (t130 != 18446743827976855413LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x621 = -1;
	uint32_t x622 = 1771501677U;
	int32_t x623 = 6542392;
	int32_t t131 = 63544;

    t131 = ((x621==(x622+x623))-x624);

    if (t131 != -32767) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x625 = INT64_MIN;
	int64_t x626 = INT64_MAX;
	int8_t x627 = INT8_MIN;
	volatile int64_t x628 = -1LL;

    t132 = ((x625==(x626+x627))-x628);

    if (t132 != 1LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x629 = INT64_MAX;
	volatile uint64_t x630 = UINT64_MAX;
	int64_t x631 = -1LL;

    t133 = ((x629==(x630+x631))-x632);

    if (t133 != -2147483647) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x633 = INT16_MIN;
	uint8_t x634 = UINT8_MAX;
	int64_t x635 = INT64_MIN;
	volatile uint64_t t134 = 39491246731LLU;

    t134 = ((x633==(x634+x635))-x636);

    if (t134 != 18424709171868028539LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x637 = 0;
	int32_t x639 = INT32_MIN;
	int8_t x640 = -8;
	volatile int32_t t135 = 58934;

    t135 = ((x637==(x638+x639))-x640);

    if (t135 != 8) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x641 = -1LL;
	uint32_t x642 = 1057U;
	static uint8_t x643 = UINT8_MAX;

    t136 = ((x641==(x642+x643))-x644);

    if (t136 != 32768) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x645 = 11U;
	uint16_t x647 = 167U;
	int32_t x648 = INT32_MAX;
	int32_t t137 = 2011621;

    t137 = ((x645==(x646+x647))-x648);

    if (t137 != -2147483647) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x649 = INT64_MIN;
	int16_t x650 = INT16_MIN;
	int32_t x651 = INT32_MAX;
	int64_t x652 = INT64_MAX;
	int64_t t138 = -4LL;

    t138 = ((x649==(x650+x651))-x652);

    if (t138 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x653 = UINT16_MAX;
	int32_t x654 = INT32_MIN;
	int32_t x655 = 470139;
	volatile int16_t x656 = -1;
	int32_t t139 = 283;

    t139 = ((x653==(x654+x655))-x656);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x661 = 431U;
	uint16_t x663 = UINT16_MAX;
	volatile int32_t x664 = -1;
	int32_t t140 = -1446;

    t140 = ((x661==(x662+x663))-x664);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x666 = -12873;
	int64_t x667 = -1LL;
	int8_t x668 = INT8_MAX;
	int32_t t141 = 5223;

    t141 = ((x665==(x666+x667))-x668);

    if (t141 != -127) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x669 = 425U;
	volatile int8_t x670 = INT8_MIN;
	int32_t t142 = 220472986;

    t142 = ((x669==(x670+x671))-x672);

    if (t142 != 128) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x674 = UINT16_MAX;
	static int16_t x675 = 20;
	int8_t x676 = INT8_MIN;
	volatile int32_t t143 = 389;

    t143 = ((x673==(x674+x675))-x676);

    if (t143 != 128) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x677 = 92263023U;
	static int64_t x678 = -1LL;
	static int16_t x680 = -1;
	int32_t t144 = -2;

    t144 = ((x677==(x678+x679))-x680);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x681 = -193;
	uint32_t x682 = UINT32_MAX;
	int32_t x683 = -1003;
	uint16_t x684 = 4U;
	volatile int32_t t145 = -162891;

    t145 = ((x681==(x682+x683))-x684);

    if (t145 != -4) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x685 = -154921358;
	int16_t x686 = INT16_MIN;
	int32_t x687 = -73221;
	static uint8_t x688 = 116U;
	int32_t t146 = -17886;

    t146 = ((x685==(x686+x687))-x688);

    if (t146 != -116) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x692 = -1319;
	static volatile int32_t t147 = -92642;

    t147 = ((x689==(x690+x691))-x692);

    if (t147 != 1319) { NG(); } else { ; }
	
}

void f148(void) {
    	static int8_t x693 = INT8_MAX;
	int32_t x696 = -1;
	int32_t t148 = -627819;

    t148 = ((x693==(x694+x695))-x696);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x698 = INT32_MIN;
	static uint8_t x699 = 0U;
	static int32_t t149 = 51;

    t149 = ((x697==(x698+x699))-x700);

    if (t149 != -70) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x706 = 1U;
	int64_t x708 = INT64_MAX;
	int64_t t150 = 22908620LL;

    t150 = ((x705==(x706+x707))-x708);

    if (t150 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x709 = INT64_MAX;
	uint64_t x710 = UINT64_MAX;
	int8_t x711 = -13;
	int32_t x712 = INT32_MAX;
	int32_t t151 = 0;

    t151 = ((x709==(x710+x711))-x712);

    if (t151 != -2147483647) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint32_t x717 = UINT32_MAX;
	int64_t x718 = -1LL;
	int8_t x719 = INT8_MAX;
	uint16_t x720 = 1U;
	volatile int32_t t152 = -163;

    t152 = ((x717==(x718+x719))-x720);

    if (t152 != -1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x721 = INT32_MIN;
	int8_t x724 = INT8_MAX;

    t153 = ((x721==(x722+x723))-x724);

    if (t153 != -127) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int8_t x725 = 1;
	int8_t x726 = -1;
	uint32_t x727 = 0U;
	int32_t x728 = INT32_MAX;
	volatile int32_t t154 = 175340344;

    t154 = ((x725==(x726+x727))-x728);

    if (t154 != -2147483647) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x729 = 0;
	uint8_t x730 = 60U;
	static uint16_t x732 = UINT16_MAX;

    t155 = ((x729==(x730+x731))-x732);

    if (t155 != -65535) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x733 = INT32_MIN;
	uint32_t x734 = 63U;
	volatile int32_t x736 = INT32_MAX;
	int32_t t156 = 182107;

    t156 = ((x733==(x734+x735))-x736);

    if (t156 != -2147483647) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint8_t x737 = 14U;
	uint32_t x738 = 73U;
	uint8_t x739 = UINT8_MAX;
	volatile uint64_t t157 = 12494093283645597LLU;

    t157 = ((x737==(x738+x739))-x740);

    if (t157 != 18446744073534569900LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	static int16_t x745 = INT16_MIN;
	int64_t x746 = INT64_MIN;
	static int64_t x747 = 1LL;
	volatile int32_t x748 = -1;
	volatile int32_t t158 = -17245645;

    t158 = ((x745==(x746+x747))-x748);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x749 = INT16_MAX;
	uint16_t x750 = 13U;
	static int32_t x752 = INT32_MAX;
	int32_t t159 = 0;

    t159 = ((x749==(x750+x751))-x752);

    if (t159 != -2147483647) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint64_t x753 = 28819787184036346LLU;
	int16_t x754 = INT16_MIN;
	int64_t x755 = -419864620206150LL;
	uint8_t x756 = 0U;
	int32_t t160 = -15190624;

    t160 = ((x753==(x754+x755))-x756);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint32_t x757 = UINT32_MAX;
	int64_t x758 = -1LL;
	uint32_t x760 = 494852U;
	volatile uint32_t t161 = 55U;

    t161 = ((x757==(x758+x759))-x760);

    if (t161 != 4294472444U) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x761 = INT64_MIN;
	static uint16_t x763 = UINT16_MAX;
	int16_t x764 = -90;
	volatile int32_t t162 = 196110642;

    t162 = ((x761==(x762+x763))-x764);

    if (t162 != 90) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x765 = -1LL;
	uint32_t x766 = UINT32_MAX;
	uint32_t t163 = 2820000U;

    t163 = ((x765==(x766+x767))-x768);

    if (t163 != 1U) { NG(); } else { ; }
	
}

void f164(void) {
    	static int64_t x770 = INT64_MIN;
	int16_t x771 = 0;
	int8_t x772 = -29;
	volatile int32_t t164 = 54999022;

    t164 = ((x769==(x770+x771))-x772);

    if (t164 != 29) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int64_t x773 = INT64_MIN;
	uint64_t x774 = UINT64_MAX;
	volatile int64_t x776 = -1LL;
	int64_t t165 = 1979426791472456034LL;

    t165 = ((x773==(x774+x775))-x776);

    if (t165 != 1LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x777 = INT64_MAX;
	int64_t x778 = 8827LL;
	volatile uint64_t x779 = 41923420LLU;
	uint8_t x780 = UINT8_MAX;

    t166 = ((x777==(x778+x779))-x780);

    if (t166 != -255) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x785 = INT8_MIN;
	static volatile uint16_t x786 = 52U;
	uint8_t x787 = UINT8_MAX;
	int32_t t167 = 5832625;

    t167 = ((x785==(x786+x787))-x788);

    if (t167 != -2005) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int16_t x789 = INT16_MAX;
	static uint8_t x790 = UINT8_MAX;
	int64_t x791 = -373495820365LL;
	static int16_t x792 = 2;
	static int32_t t168 = 32;

    t168 = ((x789==(x790+x791))-x792);

    if (t168 != -2) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int8_t x793 = -3;
	volatile int32_t x794 = 2228;
	int16_t x795 = -1;
	int32_t t169 = 4083;

    t169 = ((x793==(x794+x795))-x796);

    if (t169 != 32768) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int32_t x797 = INT32_MAX;
	uint8_t x798 = UINT8_MAX;
	int64_t x799 = INT64_MIN;
	volatile int16_t x800 = 161;
	volatile int32_t t170 = -23427687;

    t170 = ((x797==(x798+x799))-x800);

    if (t170 != -161) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x801 = INT32_MIN;
	int64_t x802 = 402802600LL;
	static volatile uint8_t x803 = 13U;
	int16_t x804 = INT16_MAX;

    t171 = ((x801==(x802+x803))-x804);

    if (t171 != -32767) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x805 = UINT64_MAX;
	uint16_t x806 = UINT16_MAX;
	uint32_t x808 = 18545U;
	static volatile uint32_t t172 = 1445U;

    t172 = ((x805==(x806+x807))-x808);

    if (t172 != 4294948751U) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x809 = -1;
	uint8_t x810 = 0U;
	int32_t x811 = 138685;
	int64_t x812 = 1384541961LL;
	int64_t t173 = -104754737LL;

    t173 = ((x809==(x810+x811))-x812);

    if (t173 != -1384541961LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x813 = INT64_MAX;
	static int8_t x814 = INT8_MAX;
	static uint64_t x815 = UINT64_MAX;
	int8_t x816 = 16;

    t174 = ((x813==(x814+x815))-x816);

    if (t174 != -16) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x817 = INT8_MIN;
	uint32_t x818 = UINT32_MAX;
	int64_t x819 = -23LL;
	static uint64_t x820 = UINT64_MAX;
	volatile uint64_t t175 = 126034892LLU;

    t175 = ((x817==(x818+x819))-x820);

    if (t175 != 1LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x821 = -1;
	int64_t x822 = 1028062770LL;
	int16_t x823 = INT16_MIN;
	uint64_t x824 = UINT64_MAX;
	uint64_t t176 = 3LLU;

    t176 = ((x821==(x822+x823))-x824);

    if (t176 != 1LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile int32_t x829 = INT32_MIN;
	uint64_t x830 = 322LLU;
	int32_t x831 = 116;
	volatile uint64_t x832 = 299728638490807LLU;
	uint64_t t177 = 6819316LLU;

    t177 = ((x829==(x830+x831))-x832);

    if (t177 != 18446444345071060809LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x833 = INT64_MIN;
	int32_t x834 = INT32_MAX;
	volatile int32_t x835 = INT32_MIN;
	uint64_t t178 = 3496530953LLU;

    t178 = ((x833==(x834+x835))-x836);

    if (t178 != 18413001981635463115LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x837 = INT64_MAX;
	uint8_t x838 = 6U;
	uint32_t x840 = UINT32_MAX;
	static volatile uint32_t t179 = 3U;

    t179 = ((x837==(x838+x839))-x840);

    if (t179 != 1U) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x841 = 2285866U;
	int32_t x842 = INT32_MIN;
	static int64_t x843 = -1147021233LL;
	uint64_t x844 = 106390LLU;
	volatile uint64_t t180 = 29643552592308LLU;

    t180 = ((x841==(x842+x843))-x844);

    if (t180 != 18446744073709445226LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint32_t x845 = 1478U;
	uint64_t x846 = UINT64_MAX;
	int16_t x847 = -1;
	int8_t x848 = -1;
	volatile int32_t t181 = 2851;

    t181 = ((x845==(x846+x847))-x848);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x849 = UINT16_MAX;
	static uint32_t x850 = 270239U;
	uint16_t x851 = 5U;
	uint32_t x852 = 8025525U;
	uint32_t t182 = 1791621U;

    t182 = ((x849==(x850+x851))-x852);

    if (t182 != 4286941771U) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x853 = -1;
	uint64_t x854 = 77468LLU;
	uint64_t t183 = 1LLU;

    t183 = ((x853==(x854+x855))-x856);

    if (t183 != 18446744073709551244LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x857 = INT64_MAX;
	static int64_t x858 = -1LL;
	int16_t x860 = INT16_MIN;
	int32_t t184 = -4;

    t184 = ((x857==(x858+x859))-x860);

    if (t184 != 32768) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x861 = 501;
	uint64_t x862 = UINT64_MAX;
	uint16_t x863 = UINT16_MAX;
	volatile int32_t t185 = 60;

    t185 = ((x861==(x862+x863))-x864);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x866 = 14;
	int64_t x867 = INT64_MIN;
	static int32_t t186 = -432;

    t186 = ((x865==(x866+x867))-x868);

    if (t186 != -255) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x869 = 3;
	uint8_t x870 = UINT8_MAX;
	static int32_t x871 = INT32_MIN;
	static volatile int16_t x872 = -1;
	int32_t t187 = -12;

    t187 = ((x869==(x870+x871))-x872);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static int32_t x873 = INT32_MIN;
	int16_t x875 = 2;
	uint8_t x876 = UINT8_MAX;
	volatile int32_t t188 = 23;

    t188 = ((x873==(x874+x875))-x876);

    if (t188 != -255) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint8_t x877 = UINT8_MAX;
	int32_t x878 = INT32_MAX;
	static uint64_t x880 = 394LLU;

    t189 = ((x877==(x878+x879))-x880);

    if (t189 != 18446744073709551222LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	static int32_t x885 = INT32_MIN;
	volatile uint64_t x886 = 2673393006LLU;
	int8_t x887 = 13;
	static uint16_t x888 = UINT16_MAX;

    t190 = ((x885==(x886+x887))-x888);

    if (t190 != -65535) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x889 = INT64_MIN;
	volatile uint8_t x890 = 3U;

    t191 = ((x889==(x890+x891))-x892);

    if (t191 != 14833195) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x893 = UINT8_MAX;
	static int16_t x894 = INT16_MIN;
	int64_t x895 = -1143LL;
	int32_t x896 = -4;
	volatile int32_t t192 = -29063769;

    t192 = ((x893==(x894+x895))-x896);

    if (t192 != 4) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x897 = UINT16_MAX;
	volatile int8_t x898 = INT8_MAX;
	uint64_t x899 = 382644723LLU;
	int16_t x900 = INT16_MIN;
	int32_t t193 = 226567;

    t193 = ((x897==(x898+x899))-x900);

    if (t193 != 32768) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x901 = 10755251;
	uint8_t x902 = UINT8_MAX;
	static uint8_t x903 = UINT8_MAX;
	int8_t x904 = INT8_MIN;
	volatile int32_t t194 = 62;

    t194 = ((x901==(x902+x903))-x904);

    if (t194 != 128) { NG(); } else { ; }
	
}

void f195(void) {
    	static int8_t x905 = 2;
	uint16_t x906 = 1U;
	static uint16_t x907 = 415U;
	uint8_t x908 = 2U;
	volatile int32_t t195 = -27960810;

    t195 = ((x905==(x906+x907))-x908);

    if (t195 != -2) { NG(); } else { ; }
	
}

void f196(void) {
    

    t196 = ((x909==(x910+x911))-x912);

    if (t196 != 128) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x913 = -1LL;
	uint32_t x914 = UINT32_MAX;
	uint16_t x915 = 24U;
	static int16_t x916 = -35;

    t197 = ((x913==(x914+x915))-x916);

    if (t197 != 35) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x917 = INT8_MIN;
	int32_t x918 = INT32_MAX;
	static int8_t x919 = INT8_MIN;
	static int64_t x920 = -1LL;
	int64_t t198 = 9LL;

    t198 = ((x917==(x918+x919))-x920);

    if (t198 != 1LL) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int32_t x925 = INT32_MAX;
	static volatile int32_t x926 = INT32_MIN;
	int16_t x927 = INT16_MAX;
	int16_t x928 = INT16_MAX;
	int32_t t199 = 0;

    t199 = ((x925==(x926+x927))-x928);

    if (t199 != -32767) { NG(); } else { ; }
	
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

