
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

static volatile int64_t x1 = INT64_MIN;
uint16_t x21 = 21453U;
static int16_t x24 = INT16_MIN;
int8_t x32 = INT8_MIN;
int8_t x42 = INT8_MIN;
int8_t x43 = INT8_MAX;
volatile int64_t x50 = 63026403LL;
volatile int8_t x51 = -1;
int8_t x52 = 1;
uint64_t x54 = 27079923409302LLU;
int8_t x55 = 0;
static int64_t x58 = INT64_MIN;
uint16_t x59 = 0U;
uint64_t x66 = 24837217869LLU;
static uint64_t t13 = 1735LLU;
uint64_t t14 = 520762859540156989LLU;
int16_t x87 = -1;
static volatile int64_t t15 = 1366072348675966641LL;
volatile uint32_t x89 = 3420U;
volatile int8_t x90 = 30;
volatile int32_t x92 = INT32_MIN;
uint32_t x97 = UINT32_MAX;
int64_t t17 = 22206385986545LL;
volatile int32_t x106 = INT32_MIN;
static volatile int64_t x108 = -1LL;
int8_t x111 = INT8_MIN;
volatile int64_t x112 = 7669879417502LL;
int64_t x114 = -695291LL;
volatile int8_t x116 = -1;
int32_t x118 = -1;
volatile int64_t t22 = -1LL;
int16_t x123 = INT16_MIN;
static int64_t x124 = -1LL;
uint16_t x125 = 525U;
uint64_t x134 = 6528344LLU;
int8_t x135 = -14;
static int8_t x138 = -25;
int64_t t27 = -104252309038133076LL;
int32_t x143 = -1;
int32_t x144 = INT32_MAX;
uint64_t t28 = 7770011890528452431LLU;
uint16_t x147 = 0U;
uint8_t x148 = 4U;
volatile int16_t x150 = INT16_MAX;
volatile int32_t t33 = 22;
volatile int32_t x167 = INT32_MAX;
uint64_t t34 = 224LLU;
uint32_t x169 = 31U;
static int16_t x174 = INT16_MIN;
volatile int64_t x178 = INT64_MIN;
static volatile uint64_t x187 = 2509309LLU;
int8_t x192 = INT8_MIN;
uint8_t x203 = 7U;
int32_t x204 = INT32_MAX;
int32_t x210 = -1;
volatile int32_t t45 = 1;
int32_t x226 = -112292908;
int8_t x227 = INT8_MIN;
static int32_t t46 = -12;
int64_t t48 = 3641774427978302LL;
int64_t x249 = 85565430752LL;
volatile int64_t x254 = INT64_MIN;
int32_t x258 = 29586;
int8_t x264 = INT8_MIN;
int64_t x268 = INT64_MIN;
static volatile int32_t x273 = 101643075;
volatile uint32_t x274 = 22580432U;
int8_t x279 = -15;
uint64_t x284 = 1100519463537468952LLU;
int8_t x286 = INT8_MIN;
volatile uint64_t t60 = 4013681639714533210LLU;
uint32_t x292 = 111363909U;
volatile uint64_t x298 = UINT64_MAX;
int8_t x307 = -1;
uint16_t x308 = 10689U;
uint8_t x312 = 2U;
int64_t x314 = -1LL;
int8_t x316 = 36;
volatile uint64_t t66 = 7900LLU;
uint32_t x324 = 767109U;
uint16_t x332 = UINT16_MAX;
int64_t x339 = INT64_MIN;
static volatile uint64_t x345 = 17927834336204868LLU;
static volatile uint64_t t72 = 47766689159860LLU;
int8_t x351 = INT8_MAX;
int32_t t73 = 85;
uint32_t x361 = UINT32_MAX;
uint64_t t75 = 340776992051LLU;
static int16_t x365 = 0;
uint16_t x380 = 24U;
int32_t x382 = 4;
static int32_t t79 = -3;
volatile int64_t x386 = INT64_MAX;
int32_t x387 = INT32_MIN;
int16_t x389 = 1;
int16_t x390 = 2;
int16_t x400 = INT16_MAX;
volatile int64_t t83 = 14963027LL;
int32_t x409 = INT32_MIN;
int64_t x413 = INT64_MAX;
uint64_t t88 = 122931606880394039LLU;
uint64_t x428 = 24345224358LLU;
volatile uint64_t t89 = 239180385453210LLU;
int8_t x431 = -1;
volatile int32_t x451 = -1;
int64_t x452 = INT64_MIN;
uint16_t x457 = 60U;
int32_t t94 = 83;
volatile int8_t x463 = INT8_MIN;
static int32_t t95 = 1726089;
static uint32_t x466 = 687488891U;
static volatile int16_t x468 = -21;
static int64_t x469 = INT64_MIN;
uint64_t x470 = 167924266LLU;
volatile uint32_t x479 = UINT32_MAX;
volatile int32_t t101 = 3763;
int16_t x494 = 11;
uint32_t x501 = UINT32_MAX;
int64_t x502 = 101LL;
int16_t x503 = INT16_MIN;
static volatile uint64_t x504 = UINT64_MAX;
uint64_t t104 = 3633134952129136LLU;
uint8_t x507 = 3U;
int32_t t105 = 198;
volatile uint64_t x516 = 54522662040440437LLU;
volatile uint64_t t106 = 20LLU;
int8_t x521 = 11;
uint16_t x523 = UINT16_MAX;
volatile int32_t x524 = INT32_MIN;
volatile int32_t t107 = 150934;
volatile uint8_t x526 = 3U;
uint32_t x532 = 1487776210U;
static int64_t x535 = 2883627213LL;
static volatile uint64_t t110 = 60503143LLU;
static int16_t x551 = -1;
int64_t x553 = 5447546LL;
int8_t x559 = INT8_MIN;
int32_t t116 = 158637;
int16_t x577 = -4;
volatile uint8_t x586 = 19U;
volatile int8_t x593 = -1;
int64_t t124 = 2142065414357677434LL;
static uint16_t x606 = UINT16_MAX;
int32_t x607 = INT32_MIN;
volatile int16_t x611 = 54;
static int16_t x612 = 6;
int16_t x615 = INT16_MIN;
volatile int32_t x621 = -20192;
uint64_t x623 = 3455LLU;
volatile uint8_t x634 = 4U;
int8_t x635 = INT8_MIN;
int8_t x637 = 5;
uint16_t x639 = UINT16_MAX;
int64_t x640 = -1LL;
int64_t t132 = 7754204LL;
uint32_t x667 = UINT32_MAX;
volatile uint16_t x681 = UINT16_MAX;
static uint64_t x683 = UINT64_MAX;
static int8_t x695 = INT8_MAX;
volatile uint64_t t146 = 58437366073868510LLU;
int8_t x705 = 26;
int8_t x708 = INT8_MAX;
uint32_t x713 = 303108791U;
int8_t x717 = -3;
static int32_t x725 = INT32_MAX;
static uint16_t x727 = 0U;
static volatile int32_t t151 = -73;
int32_t x729 = -1;
static int64_t x730 = 410312511LL;
int16_t x735 = INT16_MIN;
static int64_t x736 = INT64_MIN;
int32_t x740 = 935;
uint64_t t155 = 489482536548958469LLU;
uint64_t t156 = 234714085068715LLU;
int16_t x749 = INT16_MIN;
int8_t x750 = INT8_MIN;
int16_t x755 = INT16_MIN;
uint8_t x765 = 6U;
static volatile uint64_t t159 = 2851859558262716544LLU;
int64_t x784 = -1LL;
uint64_t t163 = 330079473500620LLU;
static volatile uint64_t t165 = 3LLU;
static int8_t x801 = INT8_MIN;
int8_t x804 = INT8_MIN;
int64_t x812 = -5771129182752LL;
int8_t x829 = INT8_MAX;
uint32_t x832 = 143465089U;
volatile uint32_t t172 = 13821270U;
volatile uint64_t x834 = 351684429861407LLU;
uint64_t t173 = 238LLU;
uint32_t x844 = 7410U;
uint8_t x846 = UINT8_MAX;
int8_t x855 = 30;
static int64_t x856 = INT64_MIN;
int64_t t178 = 1LL;
int64_t x858 = -1947225721285LL;
volatile int64_t x859 = -30LL;
volatile uint8_t x860 = 36U;
volatile int64_t t179 = 21993024523851649LL;
int8_t x861 = INT8_MIN;
static int16_t x870 = INT16_MAX;
uint8_t x873 = UINT8_MAX;
uint32_t x877 = 6U;
int16_t x896 = INT16_MAX;
int64_t t188 = 415695LL;
static volatile int32_t x905 = INT32_MAX;
int16_t x907 = -1;
int16_t x913 = INT16_MIN;
volatile int32_t t193 = 30521764;
volatile uint16_t x930 = 252U;
volatile uint16_t x938 = 35U;
uint32_t x957 = UINT32_MAX;
static int8_t x960 = INT8_MIN;
int64_t x962 = 27LL;
int64_t t199 = -191177LL;


void f0(void) {
    	volatile uint32_t x2 = UINT32_MAX;
	int32_t x3 = 7256;
	int64_t x4 = 8241281LL;
	int64_t t0 = -126LL;

    t0 = (((x1/x2)*x3)%x4);

    if (t0 != -5229386LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint16_t x9 = 1990U;
	uint8_t x10 = 8U;
	volatile uint8_t x11 = UINT8_MAX;
	static int32_t x12 = -1;
	volatile int32_t t1 = 169252176;

    t1 = (((x9/x10)*x11)%x12);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x13 = INT16_MAX;
	volatile int32_t x14 = 3124;
	int32_t x15 = 2;
	int64_t x16 = -1LL;
	int64_t t2 = -848397378634LL;

    t2 = (((x13/x14)*x15)%x16);

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x17 = 3435609U;
	int64_t x18 = 125621430372LL;
	int32_t x19 = INT32_MIN;
	uint16_t x20 = 1U;
	volatile int64_t t3 = 51581251097068434LL;

    t3 = (((x17/x18)*x19)%x20);

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x22 = 34;
	volatile int8_t x23 = INT8_MIN;
	int32_t t4 = 163;

    t4 = (((x21/x22)*x23)%x24);

    if (t4 != -15104) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x25 = INT16_MAX;
	int8_t x26 = -1;
	int8_t x27 = INT8_MIN;
	int8_t x28 = 26;
	int32_t t5 = 6291;

    t5 = (((x25/x26)*x27)%x28);

    if (t5 != 12) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x29 = INT64_MIN;
	volatile uint64_t x30 = 3000298619951LLU;
	static volatile int32_t x31 = -2512528;
	uint64_t t6 = 167494608399LLU;

    t6 = (((x29/x30)*x31)%x32);

    if (t6 != 18446736349819087888LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x37 = INT32_MAX;
	int16_t x38 = INT16_MIN;
	uint64_t x39 = 3883803226423LLU;
	int64_t x40 = INT64_MIN;
	uint64_t t7 = 33432505772171LLU;

    t7 = (((x37/x38)*x39)%x40);

    if (t7 != 8968846992411144503LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x41 = 1617LL;
	volatile int16_t x44 = INT16_MIN;
	volatile int64_t t8 = -187528592990432711LL;

    t8 = (((x41/x42)*x43)%x44);

    if (t8 != -1524LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x49 = -4225205LL;
	int64_t t9 = 4379248915742854LL;

    t9 = (((x49/x50)*x51)%x52);

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x53 = INT16_MIN;
	volatile int64_t x56 = -491918539271LL;
	uint64_t t10 = 1314581LLU;

    t10 = (((x53/x54)*x55)%x56);

    if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x57 = INT64_MIN;
	static uint16_t x60 = UINT16_MAX;
	static int64_t t11 = 3513167253934194667LL;

    t11 = (((x57/x58)*x59)%x60);

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x61 = UINT16_MAX;
	int64_t x62 = INT64_MIN;
	uint64_t x63 = 1009368394722698LLU;
	uint8_t x64 = UINT8_MAX;
	uint64_t t12 = 104LLU;

    t12 = (((x61/x62)*x63)%x64);

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x65 = -1LL;
	int64_t x67 = INT64_MIN;
	uint32_t x68 = UINT32_MAX;

    t13 = (((x65/x66)*x67)%x68);

    if (t13 != 2147483648LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x77 = 237908852LLU;
	static int16_t x78 = INT16_MIN;
	int8_t x79 = INT8_MAX;
	int64_t x80 = 206271528576LL;

    t14 = (((x77/x78)*x79)%x80);

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x85 = 29;
	uint8_t x86 = UINT8_MAX;
	static int64_t x88 = INT64_MIN;

    t15 = (((x85/x86)*x87)%x88);

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x91 = -31343116;
	uint32_t t16 = 208810853U;

    t16 = (((x89/x90)*x91)%x92);

    if (t16 != 721852072U) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x98 = -1;
	uint32_t x99 = UINT32_MAX;
	int64_t x100 = INT64_MAX;

    t17 = (((x97/x98)*x99)%x100);

    if (t17 != 4294967295LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x101 = INT16_MIN;
	int16_t x102 = INT16_MIN;
	uint32_t x103 = UINT32_MAX;
	int16_t x104 = 11850;
	volatile uint32_t t18 = 2U;

    t18 = (((x101/x102)*x103)%x104);

    if (t18 != 5895U) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint16_t x105 = 177U;
	volatile int32_t x107 = -1;
	static volatile int64_t t19 = 711861968LL;

    t19 = (((x105/x106)*x107)%x108);

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x109 = 282135878U;
	static int8_t x110 = 31;
	volatile int64_t t20 = 17714067364LL;

    t20 = (((x109/x110)*x111)%x112);

    if (t20 != 3130019200LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x113 = INT32_MIN;
	int8_t x115 = INT8_MIN;
	int64_t t21 = 461918LL;

    t21 = (((x113/x114)*x115)%x116);

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint32_t x117 = 2256U;
	static uint32_t x119 = 316U;
	int64_t x120 = -303LL;

    t22 = (((x117/x118)*x119)%x120);

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x121 = INT32_MIN;
	int32_t x122 = INT32_MIN;
	volatile int64_t t23 = 2829837630698LL;

    t23 = (((x121/x122)*x123)%x124);

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x126 = -21;
	int16_t x127 = -1;
	static uint64_t x128 = 41635199LLU;
	volatile uint64_t t24 = 181968340497LLU;

    t24 = (((x125/x126)*x127)%x128);

    if (t24 != 25LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x129 = UINT32_MAX;
	volatile uint32_t x130 = 121875U;
	int32_t x131 = INT32_MIN;
	volatile int64_t x132 = -3LL;
	int64_t t25 = 5417331475094LL;

    t25 = (((x129/x130)*x131)%x132);

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x133 = 504U;
	int8_t x136 = 1;
	volatile uint64_t t26 = 28913589239LLU;

    t26 = (((x133/x134)*x135)%x136);

    if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x137 = -29;
	int64_t x139 = -1184745473894419LL;
	volatile int16_t x140 = INT16_MIN;

    t27 = (((x137/x138)*x139)%x140);

    if (t27 != -26643LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x141 = INT64_MIN;
	uint64_t x142 = 11045724885LLU;

    t28 = (((x141/x142)*x143)%x144);

    if (t28 != 1312466291LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x145 = INT8_MIN;
	static volatile uint32_t x146 = UINT32_MAX;
	volatile uint32_t t29 = 411254U;

    t29 = (((x145/x146)*x147)%x148);

    if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
    	static int64_t x149 = -22878LL;
	uint16_t x151 = 3540U;
	uint64_t x152 = 1165573557865101778LLU;
	uint64_t t30 = 140LLU;

    t30 = (((x149/x150)*x151)%x152);

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x153 = INT64_MIN;
	uint32_t x154 = UINT32_MAX;
	volatile uint16_t x155 = UINT16_MAX;
	uint16_t x156 = UINT16_MAX;
	volatile int64_t t31 = 1779LL;

    t31 = (((x153/x154)*x155)%x156);

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x157 = INT16_MIN;
	int16_t x158 = INT16_MIN;
	int64_t x159 = INT64_MAX;
	volatile int8_t x160 = INT8_MIN;
	int64_t t32 = -7402043458678LL;

    t32 = (((x157/x158)*x159)%x160);

    if (t32 != 127LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x161 = -1;
	volatile int32_t x162 = INT32_MIN;
	static uint8_t x163 = 6U;
	volatile int8_t x164 = INT8_MIN;

    t33 = (((x161/x162)*x163)%x164);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x165 = -39;
	uint64_t x166 = UINT64_MAX;
	uint16_t x168 = 25U;

    t34 = (((x165/x166)*x167)%x168);

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int64_t x170 = -1LL;
	static int64_t x171 = -1LL;
	int64_t x172 = -1015508070LL;
	volatile int64_t t35 = 597LL;

    t35 = (((x169/x170)*x171)%x172);

    if (t35 != 31LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile int8_t x173 = 1;
	int16_t x175 = 329;
	int16_t x176 = INT16_MIN;
	volatile int32_t t36 = 4795;

    t36 = (((x173/x174)*x175)%x176);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x177 = 3335011244396083974LL;
	volatile int32_t x179 = -1;
	int32_t x180 = INT32_MIN;
	volatile int64_t t37 = 6807LL;

    t37 = (((x177/x178)*x179)%x180);

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint32_t x181 = 57U;
	int32_t x182 = INT32_MAX;
	volatile uint16_t x183 = 3056U;
	int32_t x184 = INT32_MIN;
	uint32_t t38 = 164940157U;

    t38 = (((x181/x182)*x183)%x184);

    if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x185 = -173501334790944LL;
	int16_t x186 = INT16_MIN;
	int8_t x188 = -1;
	static volatile uint64_t t39 = 5450LLU;

    t39 = (((x185/x186)*x187)%x188);

    if (t39 != 13286391018077551LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x189 = UINT32_MAX;
	static uint64_t x190 = 1676930407463545073LLU;
	volatile int64_t x191 = INT64_MAX;
	static volatile uint64_t t40 = 4LLU;

    t40 = (((x189/x190)*x191)%x192);

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x193 = INT16_MAX;
	int32_t x194 = INT32_MIN;
	int16_t x195 = -1;
	int64_t x196 = INT64_MIN;
	static int64_t t41 = 4652559206257868LL;

    t41 = (((x193/x194)*x195)%x196);

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x201 = UINT8_MAX;
	static uint16_t x202 = UINT16_MAX;
	volatile int32_t t42 = -422;

    t42 = (((x201/x202)*x203)%x204);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x205 = -1;
	static int16_t x206 = INT16_MIN;
	int32_t x207 = -1;
	int16_t x208 = 1585;
	int32_t t43 = 31132063;

    t43 = (((x205/x206)*x207)%x208);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x209 = -29711029LL;
	static int8_t x211 = -1;
	volatile int64_t x212 = -1847LL;
	int64_t t44 = 496089041161LL;

    t44 = (((x209/x210)*x211)%x212);

    if (t44 != -187LL) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int32_t x221 = 1872500;
	int16_t x222 = INT16_MIN;
	static uint8_t x223 = 1U;
	uint8_t x224 = 29U;

    t45 = (((x221/x222)*x223)%x224);

    if (t45 != -28) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint8_t x225 = UINT8_MAX;
	uint16_t x228 = UINT16_MAX;

    t46 = (((x225/x226)*x227)%x228);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x229 = 0;
	volatile uint64_t x230 = 1936649193284169LLU;
	uint64_t x231 = UINT64_MAX;
	static int32_t x232 = 1;
	static uint64_t t47 = 794682868340121438LLU;

    t47 = (((x229/x230)*x231)%x232);

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int8_t x233 = -1;
	int64_t x234 = INT64_MAX;
	uint16_t x235 = 43U;
	static int64_t x236 = INT64_MIN;

    t48 = (((x233/x234)*x235)%x236);

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x237 = INT16_MIN;
	int32_t x238 = INT32_MIN;
	int32_t x239 = 741089740;
	static int64_t x240 = INT64_MAX;
	int64_t t49 = 1355436045876285LL;

    t49 = (((x237/x238)*x239)%x240);

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x241 = INT16_MIN;
	static volatile int64_t x242 = INT64_MIN;
	int64_t x243 = INT64_MIN;
	int64_t x244 = -1LL;
	volatile int64_t t50 = -33731310220LL;

    t50 = (((x241/x242)*x243)%x244);

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x245 = 618;
	static int32_t x246 = INT32_MIN;
	volatile int16_t x247 = -46;
	uint32_t x248 = 515078U;
	volatile uint32_t t51 = 6U;

    t51 = (((x245/x246)*x247)%x248);

    if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x250 = UINT32_MAX;
	static uint8_t x251 = 51U;
	uint32_t x252 = 155182U;
	static volatile int64_t t52 = -296042LL;

    t52 = (((x249/x250)*x251)%x252);

    if (t52 != 969LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x253 = 3571676LLU;
	int8_t x255 = 1;
	int32_t x256 = INT32_MAX;
	static uint64_t t53 = 10480533387954LLU;

    t53 = (((x253/x254)*x255)%x256);

    if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x257 = -1LL;
	int8_t x259 = INT8_MIN;
	volatile int8_t x260 = INT8_MIN;
	volatile int64_t t54 = 0LL;

    t54 = (((x257/x258)*x259)%x260);

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x261 = INT64_MAX;
	int64_t x262 = INT64_MIN;
	volatile uint64_t x263 = 110LLU;
	volatile uint64_t t55 = 47461839727604735LLU;

    t55 = (((x261/x262)*x263)%x264);

    if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x265 = INT64_MIN;
	uint32_t x266 = UINT32_MAX;
	volatile uint16_t x267 = 3347U;
	static volatile int64_t t56 = 544887174479813901LL;

    t56 = (((x265/x266)*x267)%x268);

    if (t56 != -7187627769856LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x275 = INT8_MAX;
	int64_t x276 = INT64_MIN;
	int64_t t57 = 16363977LL;

    t57 = (((x273/x274)*x275)%x276);

    if (t57 != 508LL) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int16_t x277 = INT16_MAX;
	volatile int16_t x278 = 41;
	int8_t x280 = INT8_MIN;
	int32_t t58 = -285132223;

    t58 = (((x277/x278)*x279)%x280);

    if (t58 != -81) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint8_t x281 = 3U;
	int8_t x282 = -1;
	volatile uint32_t x283 = UINT32_MAX;
	uint64_t t59 = 13567LLU;

    t59 = (((x281/x282)*x283)%x284);

    if (t59 != 3LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x285 = INT64_MIN;
	uint64_t x287 = 78331649597903201LLU;
	static volatile int64_t x288 = INT64_MAX;

    t60 = (((x285/x286)*x287)%x288);

    if (t60 != 6989586621679009792LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint64_t x289 = UINT64_MAX;
	volatile int16_t x290 = 3883;
	int16_t x291 = INT16_MAX;
	volatile uint64_t t61 = 25835LLU;

    t61 = (((x289/x290)*x291)%x292);

    if (t61 != 37822218LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint8_t x293 = UINT8_MAX;
	static int64_t x294 = -14828094646739LL;
	int64_t x295 = INT64_MIN;
	int8_t x296 = -7;
	int64_t t62 = 80708LL;

    t62 = (((x293/x294)*x295)%x296);

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x297 = UINT16_MAX;
	static int32_t x299 = -1;
	int32_t x300 = -4190434;
	uint64_t t63 = 7024056LLU;

    t63 = (((x297/x298)*x299)%x300);

    if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x305 = INT64_MAX;
	static uint16_t x306 = 13U;
	int64_t t64 = -129LL;

    t64 = (((x305/x306)*x307)%x308);

    if (t64 != -1029LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x309 = -1LL;
	static int8_t x310 = 32;
	int16_t x311 = 41;
	int64_t t65 = -552854177490761LL;

    t65 = (((x309/x310)*x311)%x312);

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint16_t x313 = 2U;
	uint64_t x315 = 100LLU;

    t66 = (((x313/x314)*x315)%x316);

    if (t66 != 32LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x321 = -1;
	int16_t x322 = -3344;
	uint64_t x323 = 486555145001459386LLU;
	volatile uint64_t t67 = 4243312059790215LLU;

    t67 = (((x321/x322)*x323)%x324);

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x325 = UINT16_MAX;
	volatile int16_t x326 = 345;
	volatile int8_t x327 = -13;
	int8_t x328 = 23;
	int32_t t68 = 21539910;

    t68 = (((x325/x326)*x327)%x328);

    if (t68 != -19) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x329 = INT8_MAX;
	volatile uint16_t x330 = UINT16_MAX;
	static uint16_t x331 = UINT16_MAX;
	volatile int32_t t69 = 8832;

    t69 = (((x329/x330)*x331)%x332);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x333 = -254;
	static uint16_t x334 = UINT16_MAX;
	uint16_t x335 = 36U;
	volatile uint64_t x336 = 630043LLU;
	volatile uint64_t t70 = 61555715862632525LLU;

    t70 = (((x333/x334)*x335)%x336);

    if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x337 = INT16_MIN;
	int32_t x338 = INT32_MAX;
	int16_t x340 = -1;
	volatile int64_t t71 = -3190LL;

    t71 = (((x337/x338)*x339)%x340);

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x346 = INT64_MIN;
	uint8_t x347 = 1U;
	int64_t x348 = -1LL;

    t72 = (((x345/x346)*x347)%x348);

    if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x349 = 13;
	uint8_t x350 = 34U;
	uint16_t x352 = UINT16_MAX;

    t73 = (((x349/x350)*x351)%x352);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x353 = INT8_MAX;
	int8_t x354 = INT8_MIN;
	int64_t x355 = -1LL;
	int32_t x356 = INT32_MIN;
	volatile int64_t t74 = 8517967474LL;

    t74 = (((x353/x354)*x355)%x356);

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x362 = 3;
	int32_t x363 = 66230;
	static uint64_t x364 = 740162140843LLU;

    t75 = (((x361/x362)*x363)%x364);

    if (t75 != 2863289454LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x366 = -1LL;
	volatile uint64_t x367 = 1133200229970746420LLU;
	static int64_t x368 = INT64_MIN;
	uint64_t t76 = 55455964860757LLU;

    t76 = (((x365/x366)*x367)%x368);

    if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x369 = UINT16_MAX;
	int8_t x370 = INT8_MIN;
	int16_t x371 = 3013;
	int64_t x372 = -11655700541081196LL;
	volatile int64_t t77 = 195257099711409LL;

    t77 = (((x369/x370)*x371)%x372);

    if (t77 != -1539643LL) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint32_t x377 = 117884U;
	int8_t x378 = INT8_MIN;
	int64_t x379 = INT64_MIN;
	volatile int64_t t78 = 282162900674LL;

    t78 = (((x377/x378)*x379)%x380);

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x381 = UINT8_MAX;
	int16_t x383 = INT16_MAX;
	uint8_t x384 = 68U;

    t79 = (((x381/x382)*x383)%x384);

    if (t79 != 45) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x385 = INT8_MIN;
	uint8_t x388 = 4U;
	volatile int64_t t80 = 145511658LL;

    t80 = (((x385/x386)*x387)%x388);

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int8_t x391 = INT8_MAX;
	static int64_t x392 = -1LL;
	volatile int64_t t81 = 13215195LL;

    t81 = (((x389/x390)*x391)%x392);

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x393 = 7972LLU;
	uint16_t x394 = UINT16_MAX;
	int8_t x395 = -1;
	int64_t x396 = INT64_MAX;
	static volatile uint64_t t82 = 5504787255178237LLU;

    t82 = (((x393/x394)*x395)%x396);

    if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x397 = 7599U;
	int16_t x398 = -116;
	static int64_t x399 = -1LL;

    t83 = (((x397/x398)*x399)%x400);

    if (t83 != 65LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x405 = INT8_MIN;
	uint32_t x406 = 2U;
	volatile int8_t x407 = INT8_MIN;
	int16_t x408 = -14;
	volatile uint32_t t84 = 27U;

    t84 = (((x405/x406)*x407)%x408);

    if (t84 != 8192U) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x410 = INT16_MAX;
	int8_t x411 = INT8_MAX;
	int16_t x412 = INT16_MAX;
	volatile int32_t t85 = 236;

    t85 = (((x409/x410)*x411)%x412);

    if (t85 != -508) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x414 = 3;
	int64_t x415 = -1LL;
	static int8_t x416 = INT8_MIN;
	int64_t t86 = -23479LL;

    t86 = (((x413/x414)*x415)%x416);

    if (t86 != -42LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x417 = 1;
	int32_t x418 = INT32_MAX;
	int16_t x419 = -178;
	uint16_t x420 = 4U;
	static volatile int32_t t87 = 0;

    t87 = (((x417/x418)*x419)%x420);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x421 = -94;
	static volatile uint64_t x422 = UINT64_MAX;
	int64_t x423 = INT64_MIN;
	static int8_t x424 = INT8_MAX;

    t88 = (((x421/x422)*x423)%x424);

    if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static int16_t x425 = -1;
	static uint8_t x426 = 4U;
	volatile uint32_t x427 = 19629894U;

    t89 = (((x425/x426)*x427)%x428);

    if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	static int8_t x429 = INT8_MAX;
	int64_t x430 = -1022593767193LL;
	uint64_t x432 = 7LLU;
	volatile uint64_t t90 = 549337586764196LLU;

    t90 = (((x429/x430)*x431)%x432);

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x437 = 7;
	uint32_t x438 = UINT32_MAX;
	int8_t x439 = INT8_MIN;
	uint16_t x440 = 3U;
	volatile uint32_t t91 = 1313334395U;

    t91 = (((x437/x438)*x439)%x440);

    if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x445 = UINT64_MAX;
	int64_t x446 = INT64_MIN;
	static uint64_t x447 = UINT64_MAX;
	volatile int8_t x448 = INT8_MAX;
	uint64_t t92 = 54272892854LLU;

    t92 = (((x445/x446)*x447)%x448);

    if (t92 != 1LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x449 = -524451976;
	volatile uint32_t x450 = UINT32_MAX;
	static volatile int64_t t93 = 1097135890047417LL;

    t93 = (((x449/x450)*x451)%x452);

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x458 = -1;
	uint16_t x459 = 8041U;
	int32_t x460 = -13333638;

    t94 = (((x457/x458)*x459)%x460);

    if (t94 != -482460) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x461 = UINT16_MAX;
	static uint16_t x462 = UINT16_MAX;
	volatile int8_t x464 = -31;

    t95 = (((x461/x462)*x463)%x464);

    if (t95 != -4) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x465 = 345725U;
	volatile uint16_t x467 = 3243U;
	static uint32_t t96 = 1U;

    t96 = (((x465/x466)*x467)%x468);

    if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x471 = INT8_MIN;
	static int16_t x472 = INT16_MIN;
	volatile uint64_t t97 = 23LLU;

    t97 = (((x469/x470)*x471)%x472);

    if (t97 != 18446737043209143168LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint16_t x473 = UINT16_MAX;
	int16_t x474 = INT16_MAX;
	int16_t x475 = INT16_MIN;
	uint32_t x476 = 423218481U;
	uint32_t t98 = 145463482U;

    t98 = (((x473/x474)*x475)%x476);

    if (t98 != 62716950U) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x477 = UINT16_MAX;
	volatile int32_t x478 = -1;
	int16_t x480 = INT16_MIN;
	uint32_t t99 = 985648068U;

    t99 = (((x477/x478)*x479)%x480);

    if (t99 != 65535U) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int8_t x485 = -1;
	volatile int64_t x486 = INT64_MIN;
	int64_t x487 = INT64_MIN;
	uint16_t x488 = 9U;
	int64_t t100 = 785358620LL;

    t100 = (((x485/x486)*x487)%x488);

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x489 = 9U;
	int16_t x490 = INT16_MIN;
	int16_t x491 = INT16_MAX;
	int32_t x492 = INT32_MIN;

    t101 = (((x489/x490)*x491)%x492);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int32_t x493 = -1;
	static uint8_t x495 = UINT8_MAX;
	int16_t x496 = INT16_MAX;
	volatile int32_t t102 = -495802925;

    t102 = (((x493/x494)*x495)%x496);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x497 = INT64_MAX;
	uint64_t x498 = 15629LLU;
	volatile int64_t x499 = -1LL;
	uint8_t x500 = UINT8_MAX;
	uint64_t t103 = 716771690LLU;

    t103 = (((x497/x498)*x499)%x500);

    if (t103 != 237LLU) { NG(); } else { ; }
	
}

void f104(void) {
    

    t104 = (((x501/x502)*x503)%x504);

    if (t104 != 18446742680269094912LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x505 = INT8_MAX;
	static int32_t x506 = 45;
	static volatile int8_t x508 = -1;

    t105 = (((x505/x506)*x507)%x508);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x513 = INT16_MAX;
	volatile uint16_t x514 = 14793U;
	uint16_t x515 = UINT16_MAX;

    t106 = (((x513/x514)*x515)%x516);

    if (t106 != 131070LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x522 = -1;

    t107 = (((x521/x522)*x523)%x524);

    if (t107 != -720885) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x525 = 8720104U;
	volatile int8_t x527 = -1;
	int64_t x528 = INT64_MIN;
	volatile int64_t t108 = -4361215440462LL;

    t108 = (((x525/x526)*x527)%x528);

    if (t108 != 4292060595LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x529 = -1;
	static volatile int64_t x530 = -1LL;
	int16_t x531 = INT16_MIN;
	int64_t t109 = 347179494915021LL;

    t109 = (((x529/x530)*x531)%x532);

    if (t109 != -32768LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x533 = INT64_MIN;
	volatile uint64_t x534 = 8099722LLU;
	static volatile uint64_t x536 = UINT64_MAX;

    t110 = (((x533/x534)*x535)%x536);

    if (t110 != 143685708813173399LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint64_t x537 = UINT64_MAX;
	uint32_t x538 = 718539U;
	int32_t x539 = -89421;
	uint8_t x540 = UINT8_MAX;
	uint64_t t111 = 6703681113765LLU;

    t111 = (((x537/x538)*x539)%x540);

    if (t111 != 151LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x545 = 52159119542LLU;
	int8_t x546 = -1;
	int64_t x547 = INT64_MIN;
	uint32_t x548 = 305535U;
	uint64_t t112 = 259099508636248LLU;

    t112 = (((x545/x546)*x547)%x548);

    if (t112 != 0LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x549 = -1LL;
	int32_t x550 = INT32_MAX;
	int32_t x552 = INT32_MIN;
	volatile int64_t t113 = 300777834LL;

    t113 = (((x549/x550)*x551)%x552);

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x554 = 44781205;
	int16_t x555 = INT16_MIN;
	uint16_t x556 = 45U;
	volatile int64_t t114 = -555243664762566383LL;

    t114 = (((x553/x554)*x555)%x556);

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x557 = 5U;
	static int16_t x558 = -2610;
	int8_t x560 = INT8_MIN;
	volatile int32_t t115 = -163192096;

    t115 = (((x557/x558)*x559)%x560);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint8_t x561 = 29U;
	int8_t x562 = -1;
	uint16_t x563 = UINT16_MAX;
	int32_t x564 = INT32_MAX;

    t116 = (((x561/x562)*x563)%x564);

    if (t116 != -1900515) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x565 = -1;
	uint32_t x566 = 167846994U;
	uint64_t x567 = 50466023915LLU;
	int16_t x568 = INT16_MAX;
	uint64_t t117 = 501893211956650LLU;

    t117 = (((x565/x566)*x567)%x568);

    if (t117 != 23810LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile int32_t x573 = INT32_MIN;
	int64_t x574 = INT64_MIN;
	int64_t x575 = 238309597062674LL;
	int8_t x576 = -1;
	int64_t t118 = 3532227091223211400LL;

    t118 = (((x573/x574)*x575)%x576);

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x578 = UINT8_MAX;
	static int64_t x579 = -1LL;
	uint32_t x580 = 241860758U;
	volatile int64_t t119 = -3158548881LL;

    t119 = (((x577/x578)*x579)%x580);

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x581 = UINT32_MAX;
	int64_t x582 = INT64_MIN;
	int8_t x583 = INT8_MAX;
	static int16_t x584 = INT16_MAX;
	static volatile int64_t t120 = 3762493688LL;

    t120 = (((x581/x582)*x583)%x584);

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	static int16_t x585 = INT16_MAX;
	int16_t x587 = INT16_MIN;
	volatile int16_t x588 = INT16_MIN;
	static volatile int32_t t121 = -214853;

    t121 = (((x585/x586)*x587)%x588);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x589 = 28U;
	uint64_t x590 = UINT64_MAX;
	volatile uint32_t x591 = UINT32_MAX;
	static int64_t x592 = -1LL;
	static uint64_t t122 = 481369178771061955LLU;

    t122 = (((x589/x590)*x591)%x592);

    if (t122 != 0LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x594 = 240363979LLU;
	int16_t x595 = -1;
	static int64_t x596 = INT64_MAX;
	volatile uint64_t t123 = 1137LLU;

    t123 = (((x593/x594)*x595)%x596);

    if (t123 != 9223371960109732103LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x601 = INT16_MIN;
	int64_t x602 = INT64_MIN;
	int16_t x603 = -1;
	volatile int64_t x604 = INT64_MIN;

    t124 = (((x601/x602)*x603)%x604);

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint8_t x605 = 59U;
	int64_t x608 = INT64_MIN;
	volatile int64_t t125 = 731101LL;

    t125 = (((x605/x606)*x607)%x608);

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int32_t x609 = INT32_MAX;
	uint32_t x610 = 6800873U;
	volatile uint32_t t126 = 3515720U;

    t126 = (((x609/x610)*x611)%x612);

    if (t126 != 0U) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x613 = UINT64_MAX;
	static volatile uint64_t x614 = 3523254LLU;
	static int32_t x616 = INT32_MIN;
	volatile uint64_t t127 = 126455203LLU;

    t127 = (((x613/x614)*x615)%x616);

    if (t127 != 18275180255203360768LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x622 = 3878;
	int8_t x624 = -1;
	uint64_t t128 = 3313974LLU;

    t128 = (((x621/x622)*x623)%x624);

    if (t128 != 18446744073709534341LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x625 = INT32_MIN;
	int64_t x626 = 8517162380704LL;
	volatile uint64_t x627 = 30575613212LLU;
	uint32_t x628 = 786190U;
	volatile uint64_t t129 = 63569704LLU;

    t129 = (((x625/x626)*x627)%x628);

    if (t129 != 0LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x629 = UINT64_MAX;
	uint32_t x630 = 8207U;
	static int16_t x631 = -1;
	uint64_t x632 = UINT64_MAX;
	static uint64_t t130 = 52612LLU;

    t130 = (((x629/x630)*x631)%x632);

    if (t130 != 18444496389528522062LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	static int8_t x633 = INT8_MIN;
	static volatile int8_t x636 = -1;
	static int32_t t131 = -609;

    t131 = (((x633/x634)*x635)%x636);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x638 = 2186137235LL;

    t132 = (((x637/x638)*x639)%x640);

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint32_t x641 = 1U;
	volatile int8_t x642 = 48;
	volatile int16_t x643 = INT16_MIN;
	static uint16_t x644 = 28622U;
	uint32_t t133 = 138U;

    t133 = (((x641/x642)*x643)%x644);

    if (t133 != 0U) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint8_t x645 = UINT8_MAX;
	uint32_t x646 = 6028U;
	int8_t x647 = -17;
	uint16_t x648 = 552U;
	uint32_t t134 = 3016513U;

    t134 = (((x645/x646)*x647)%x648);

    if (t134 != 0U) { NG(); } else { ; }
	
}

void f135(void) {
    	static int8_t x649 = -1;
	int16_t x650 = 29;
	static volatile int16_t x651 = -1;
	int64_t x652 = INT64_MIN;
	static volatile int64_t t135 = 270296604976050LL;

    t135 = (((x649/x650)*x651)%x652);

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x653 = -1;
	int32_t x654 = INT32_MIN;
	uint32_t x655 = 1833U;
	int8_t x656 = -1;
	uint32_t t136 = 40U;

    t136 = (((x653/x654)*x655)%x656);

    if (t136 != 0U) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x657 = INT64_MIN;
	static int8_t x658 = 43;
	uint16_t x659 = 18U;
	int8_t x660 = -30;
	static volatile int64_t t137 = -7LL;

    t137 = (((x657/x658)*x659)%x660);

    if (t137 != -6LL) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint8_t x665 = 50U;
	int64_t x666 = -215237340558949644LL;
	int32_t x668 = -3511;
	volatile int64_t t138 = 2034227784700LL;

    t138 = (((x665/x666)*x667)%x668);

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x669 = INT32_MIN;
	static uint32_t x670 = 1U;
	volatile uint32_t x671 = UINT32_MAX;
	int8_t x672 = INT8_MIN;
	volatile uint32_t t139 = 13U;

    t139 = (((x669/x670)*x671)%x672);

    if (t139 != 2147483648U) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x673 = UINT16_MAX;
	int16_t x674 = INT16_MIN;
	uint64_t x675 = 133LLU;
	int32_t x676 = -1;
	static volatile uint64_t t140 = 745618669LLU;

    t140 = (((x673/x674)*x675)%x676);

    if (t140 != 18446744073709551483LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x682 = -1;
	int32_t x684 = 96562;
	volatile uint64_t t141 = 1LLU;

    t141 = (((x681/x682)*x683)%x684);

    if (t141 != 65535LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x685 = INT32_MIN;
	uint64_t x686 = 380059LLU;
	int32_t x687 = 923;
	int8_t x688 = 13;
	static uint64_t t142 = 493045695LLU;

    t142 = (((x685/x686)*x687)%x688);

    if (t142 != 0LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x689 = INT64_MIN;
	int16_t x690 = INT16_MIN;
	int16_t x691 = -1;
	static int16_t x692 = INT16_MIN;
	static int64_t t143 = 140052246859503LL;

    t143 = (((x689/x690)*x691)%x692);

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint16_t x693 = 289U;
	int64_t x694 = -1LL;
	int8_t x696 = -14;
	static volatile int64_t t144 = 583LL;

    t144 = (((x693/x694)*x695)%x696);

    if (t144 != -9LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int32_t x697 = -1;
	uint16_t x698 = 1U;
	int32_t x699 = 2;
	volatile int32_t x700 = 3;
	static volatile int32_t t145 = 8636370;

    t145 = (((x697/x698)*x699)%x700);

    if (t145 != -2) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x701 = -1LL;
	static uint64_t x702 = UINT64_MAX;
	int64_t x703 = 13133LL;
	static volatile uint16_t x704 = 3699U;

    t146 = (((x701/x702)*x703)%x704);

    if (t146 != 2036LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x706 = INT16_MAX;
	volatile int64_t x707 = INT64_MIN;
	static volatile int64_t t147 = 554652014547598LL;

    t147 = (((x705/x706)*x707)%x708);

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x714 = -1LL;
	volatile int32_t x715 = 0;
	int32_t x716 = INT32_MIN;
	int64_t t148 = 64655528484116303LL;

    t148 = (((x713/x714)*x715)%x716);

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x718 = 1843U;
	volatile int16_t x719 = -1;
	uint64_t x720 = UINT64_MAX;
	uint64_t t149 = 243370845312239LLU;

    t149 = (((x717/x718)*x719)%x720);

    if (t149 != 4292636875LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x721 = INT64_MIN;
	static uint32_t x722 = UINT32_MAX;
	int16_t x723 = INT16_MAX;
	uint32_t x724 = UINT32_MAX;
	static int64_t t150 = -45881094279LL;

    t150 = (((x721/x722)*x723)%x724);

    if (t150 != -2147500031LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x726 = 17214U;
	int32_t x728 = INT32_MIN;

    t151 = (((x725/x726)*x727)%x728);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint16_t x731 = 3U;
	int8_t x732 = 9;
	volatile int64_t t152 = -174LL;

    t152 = (((x729/x730)*x731)%x732);

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x733 = -11;
	static int16_t x734 = -1;
	int64_t t153 = -30263777LL;

    t153 = (((x733/x734)*x735)%x736);

    if (t153 != -360448LL) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint8_t x737 = 0U;
	volatile int16_t x738 = -51;
	int64_t x739 = 665965590080129LL;
	int64_t t154 = -14470180198001666LL;

    t154 = (((x737/x738)*x739)%x740);

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x741 = 42;
	uint32_t x742 = 751604836U;
	int16_t x743 = -1439;
	volatile uint64_t x744 = UINT64_MAX;

    t155 = (((x741/x742)*x743)%x744);

    if (t155 != 0LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x745 = -1LL;
	static uint64_t x746 = UINT64_MAX;
	int64_t x747 = -1LL;
	int16_t x748 = INT16_MAX;

    t156 = (((x745/x746)*x747)%x748);

    if (t156 != 15LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x751 = INT8_MIN;
	static uint64_t x752 = 18388LLU;
	static uint64_t t157 = 1LLU;

    t157 = (((x749/x750)*x751)%x752);

    if (t157 != 8348LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x753 = INT32_MIN;
	uint64_t x754 = UINT64_MAX;
	static uint16_t x756 = UINT16_MAX;
	static uint64_t t158 = 4385429564041811071LLU;

    t158 = (((x753/x754)*x755)%x756);

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x766 = UINT8_MAX;
	static volatile uint64_t x767 = 18646224466803790LLU;
	int8_t x768 = -42;

    t159 = (((x765/x766)*x767)%x768);

    if (t159 != 0LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x769 = 0;
	int64_t x770 = -202963191589519021LL;
	int32_t x771 = INT32_MIN;
	int8_t x772 = INT8_MAX;
	static volatile int64_t t160 = -71920547194412377LL;

    t160 = (((x769/x770)*x771)%x772);

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x777 = INT32_MAX;
	static int8_t x778 = INT8_MIN;
	uint64_t x779 = UINT64_MAX;
	int32_t x780 = 10018;
	static uint64_t t161 = 133468257714329LLU;

    t161 = (((x777/x778)*x779)%x780);

    if (t161 != 7083LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int16_t x781 = 2721;
	static int16_t x782 = -12462;
	static int32_t x783 = INT32_MAX;
	int64_t t162 = -6140LL;

    t162 = (((x781/x782)*x783)%x784);

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x785 = INT16_MIN;
	int64_t x786 = -1LL;
	volatile uint64_t x787 = 126755548LLU;
	static uint8_t x788 = UINT8_MAX;

    t163 = (((x785/x786)*x787)%x788);

    if (t163 != 74LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x793 = INT32_MIN;
	int32_t x794 = INT32_MIN;
	int8_t x795 = -1;
	uint16_t x796 = 14127U;
	volatile int32_t t164 = -139961;

    t164 = (((x793/x794)*x795)%x796);

    if (t164 != -1) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x797 = INT8_MIN;
	uint64_t x798 = 1525LLU;
	volatile uint64_t x799 = 3LLU;
	int16_t x800 = INT16_MIN;

    t165 = (((x797/x798)*x799)%x800);

    if (t165 != 36288676866313869LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x802 = INT8_MAX;
	int64_t x803 = 135531862578LL;
	int64_t t166 = 331037797289LL;

    t166 = (((x801/x802)*x803)%x804);

    if (t166 != -50LL) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int32_t x805 = INT32_MAX;
	int8_t x806 = INT8_MAX;
	int64_t x807 = -1LL;
	int8_t x808 = INT8_MIN;
	int64_t t167 = -4134404LL;

    t167 = (((x805/x806)*x807)%x808);

    if (t167 != -8LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x809 = INT8_MIN;
	volatile int16_t x810 = -905;
	volatile uint8_t x811 = 12U;
	volatile int64_t t168 = 33677080198909LL;

    t168 = (((x809/x810)*x811)%x812);

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x817 = INT16_MAX;
	uint16_t x818 = 307U;
	int64_t x819 = 213LL;
	int8_t x820 = INT8_MIN;
	int64_t t169 = 1394699998282087LL;

    t169 = (((x817/x818)*x819)%x820);

    if (t169 != 50LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x821 = INT64_MIN;
	static int64_t x822 = INT64_MIN;
	uint16_t x823 = UINT16_MAX;
	int16_t x824 = INT16_MAX;
	volatile int64_t t170 = -53852163LL;

    t170 = (((x821/x822)*x823)%x824);

    if (t170 != 1LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x825 = UINT16_MAX;
	int16_t x826 = INT16_MIN;
	int16_t x827 = 29;
	int32_t x828 = INT32_MIN;
	static int32_t t171 = -16514571;

    t171 = (((x825/x826)*x827)%x828);

    if (t171 != -29) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x830 = INT32_MIN;
	uint16_t x831 = 10U;

    t172 = (((x829/x830)*x831)%x832);

    if (t172 != 0U) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x833 = INT8_MAX;
	int32_t x835 = -16;
	static int8_t x836 = -1;

    t173 = (((x833/x834)*x835)%x836);

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x837 = INT16_MIN;
	int8_t x838 = INT8_MIN;
	int64_t x839 = -1LL;
	static int32_t x840 = -1;
	static int64_t t174 = -10683963077913632LL;

    t174 = (((x837/x838)*x839)%x840);

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile uint16_t x841 = 4793U;
	uint16_t x842 = 7320U;
	int32_t x843 = INT32_MIN;
	uint32_t t175 = 1U;

    t175 = (((x841/x842)*x843)%x844);

    if (t175 != 0U) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x845 = INT16_MIN;
	int8_t x847 = 10;
	int8_t x848 = INT8_MAX;
	int32_t t176 = 1087;

    t176 = (((x845/x846)*x847)%x848);

    if (t176 != -10) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int64_t x849 = -1LL;
	int8_t x850 = INT8_MIN;
	uint32_t x851 = 127U;
	static int8_t x852 = INT8_MIN;
	static int64_t t177 = 19338376LL;

    t177 = (((x849/x850)*x851)%x852);

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int16_t x853 = -1;
	volatile uint32_t x854 = UINT32_MAX;

    t178 = (((x853/x854)*x855)%x856);

    if (t178 != 30LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x857 = 12U;

    t179 = (((x857/x858)*x859)%x860);

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint64_t x862 = 41673669LLU;
	volatile int8_t x863 = -1;
	int64_t x864 = -142144506542548336LL;
	uint64_t t180 = 10806981LLU;

    t180 = (((x861/x862)*x863)%x864);

    if (t180 != 142144063895080130LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile int32_t x865 = INT32_MIN;
	int32_t x866 = INT32_MIN;
	static int8_t x867 = INT8_MIN;
	uint64_t x868 = 621139LLU;
	volatile uint64_t t181 = 6672060984174991809LLU;

    t181 = (((x865/x866)*x867)%x868);

    if (t181 != 220582LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x869 = 874U;
	uint64_t x871 = UINT64_MAX;
	volatile uint32_t x872 = UINT32_MAX;
	volatile uint64_t t182 = 714695957890597LLU;

    t182 = (((x869/x870)*x871)%x872);

    if (t182 != 0LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x874 = 1;
	static int8_t x875 = INT8_MIN;
	volatile int32_t x876 = 6307;
	volatile int32_t t183 = -1735982;

    t183 = (((x873/x874)*x875)%x876);

    if (t183 != -1105) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int32_t x878 = INT32_MAX;
	static int64_t x879 = -1LL;
	int64_t x880 = INT64_MAX;
	static int64_t t184 = 76553232901LL;

    t184 = (((x877/x878)*x879)%x880);

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x885 = INT8_MAX;
	uint8_t x886 = 110U;
	volatile int8_t x887 = 41;
	int32_t x888 = 140181;
	volatile int32_t t185 = -123890;

    t185 = (((x885/x886)*x887)%x888);

    if (t185 != 41) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x889 = UINT16_MAX;
	int8_t x890 = INT8_MIN;
	uint8_t x891 = 63U;
	static int64_t x892 = -265126LL;
	volatile int64_t t186 = -85360794384373701LL;

    t186 = (((x889/x890)*x891)%x892);

    if (t186 != -32193LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x893 = INT32_MAX;
	int32_t x894 = 33769539;
	volatile int8_t x895 = -1;
	static volatile int32_t t187 = -85819;

    t187 = (((x893/x894)*x895)%x896);

    if (t187 != -63) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x897 = 23;
	static int64_t x898 = INT64_MIN;
	static int8_t x899 = -1;
	static int32_t x900 = -1;

    t188 = (((x897/x898)*x899)%x900);

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x901 = INT16_MAX;
	static volatile uint16_t x902 = UINT16_MAX;
	int32_t x903 = INT32_MIN;
	int8_t x904 = INT8_MIN;
	volatile int32_t t189 = -6413;

    t189 = (((x901/x902)*x903)%x904);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x906 = INT16_MAX;
	uint8_t x908 = UINT8_MAX;
	static int32_t t190 = 5504;

    t190 = (((x905/x906)*x907)%x908);

    if (t190 != -3) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x914 = UINT64_MAX;
	int32_t x915 = -101716829;
	uint16_t x916 = 22U;
	volatile uint64_t t191 = 259894681197242205LLU;

    t191 = (((x913/x914)*x915)%x916);

    if (t191 != 0LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x921 = INT64_MAX;
	uint32_t x922 = 828U;
	volatile int8_t x923 = INT8_MIN;
	uint32_t x924 = 194418U;
	volatile int64_t t192 = 637541661979281290LL;

    t192 = (((x921/x922)*x923)%x924);

    if (t192 != -108152LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x925 = INT8_MIN;
	int8_t x926 = INT8_MAX;
	int16_t x927 = INT16_MIN;
	static int8_t x928 = INT8_MIN;

    t193 = (((x925/x926)*x927)%x928);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x929 = INT8_MIN;
	uint32_t x931 = 22186U;
	volatile int64_t x932 = 2103441518564297LL;
	static volatile int64_t t194 = -22999320880884LL;

    t194 = (((x929/x930)*x931)%x932);

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile uint64_t x937 = 2124583982697LLU;
	volatile int64_t x939 = INT64_MIN;
	static volatile int16_t x940 = INT16_MIN;
	uint64_t t195 = 63916025LLU;

    t195 = (((x937/x938)*x939)%x940);

    if (t195 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x949 = INT16_MAX;
	volatile int8_t x950 = 48;
	int64_t x951 = -10440LL;
	volatile int8_t x952 = INT8_MIN;
	int64_t t196 = 1967540LL;

    t196 = (((x949/x950)*x951)%x952);

    if (t196 != -80LL) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint32_t x953 = UINT32_MAX;
	static uint64_t x954 = 6871LLU;
	int8_t x955 = -11;
	int16_t x956 = INT16_MIN;
	uint64_t t197 = 12LLU;

    t197 = (((x953/x954)*x955)%x956);

    if (t197 != 18446744073702675670LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x958 = UINT8_MAX;
	int32_t x959 = -1;
	static uint32_t t198 = 2003340U;

    t198 = (((x957/x958)*x959)%x960);

    if (t198 != 4278124287U) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile int16_t x961 = -2616;
	volatile int32_t x963 = INT32_MIN;
	volatile uint8_t x964 = UINT8_MAX;

    t199 = (((x961/x962)*x963)%x964);

    if (t199 != 48LL) { NG(); } else { ; }
	
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

