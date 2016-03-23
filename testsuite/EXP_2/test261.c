
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

int32_t x3 = 0;
static int8_t x6 = 10;
int32_t t3 = 1;
volatile uint16_t x21 = 483U;
int64_t x24 = INT64_MIN;
int32_t t5 = 9431;
volatile int8_t x28 = INT8_MIN;
volatile uint32_t x33 = 12169U;
uint64_t x34 = 15LLU;
int32_t x35 = INT32_MIN;
int32_t t8 = 20622717;
static int64_t x42 = INT64_MAX;
static uint64_t x50 = 654LLU;
int16_t x62 = 2658;
int16_t x63 = -455;
static int32_t x71 = INT32_MIN;
int64_t x77 = -57182LL;
int64_t x81 = -457LL;
static uint16_t x91 = UINT16_MAX;
uint8_t x95 = UINT8_MAX;
int64_t x97 = -6555759LL;
int32_t x98 = INT32_MAX;
int16_t x100 = -1;
static volatile int32_t t20 = 0;
uint8_t x138 = UINT8_MAX;
uint16_t x158 = 5061U;
int32_t t33 = -9484;
int8_t x163 = 26;
volatile uint16_t x166 = UINT16_MAX;
volatile int8_t x167 = 1;
int32_t t35 = 436450385;
int8_t x173 = -11;
int32_t x174 = -1;
int16_t x176 = -1;
static int32_t x178 = -1;
static int8_t x194 = INT8_MAX;
static int8_t x203 = INT8_MIN;
volatile int32_t t43 = -21;
int8_t x212 = -1;
volatile uint8_t x215 = UINT8_MAX;
int16_t x216 = INT16_MIN;
volatile uint64_t x225 = 759585LLU;
volatile int8_t x226 = -7;
volatile uint64_t x230 = 19681124LLU;
static uint32_t x231 = 40523967U;
int32_t t49 = -57;
volatile int16_t x236 = -1;
uint64_t x243 = 166198689437442LLU;
static int16_t x245 = INT16_MAX;
uint64_t x250 = 30LLU;
int64_t x255 = -1LL;
uint16_t x266 = 1U;
uint16_t x273 = 8U;
volatile int16_t x277 = -58;
uint64_t x291 = UINT64_MAX;
int32_t t62 = -165881;
static volatile int32_t t67 = 3480123;
uint32_t x337 = 34470275U;
int32_t t68 = 927935905;
int8_t x341 = INT8_MAX;
uint8_t x342 = 10U;
int32_t t69 = 10477989;
static uint16_t x348 = 282U;
uint64_t x351 = 754257886243124453LLU;
uint32_t x357 = 3277253U;
int16_t x368 = 8089;
int32_t t75 = -187132724;
int64_t x370 = INT64_MAX;
int64_t x382 = INT64_MIN;
int32_t t78 = -92071;
static int64_t x388 = 1021265568LL;
volatile int32_t t79 = -11147;
int16_t x399 = INT16_MIN;
uint8_t x400 = 62U;
uint32_t x411 = UINT32_MAX;
int32_t t84 = -1;
static uint64_t x413 = UINT64_MAX;
uint16_t x415 = 18U;
volatile uint16_t x423 = 1U;
int32_t x424 = INT32_MIN;
int8_t x426 = INT8_MAX;
int32_t t89 = 1;
volatile uint8_t x436 = UINT8_MAX;
uint64_t x438 = UINT64_MAX;
int16_t x439 = -866;
volatile int32_t x445 = INT32_MAX;
uint8_t x447 = 1U;
int64_t x448 = -4481675LL;
uint64_t x454 = 5LLU;
int32_t x455 = -1;
int16_t x461 = INT16_MIN;
int64_t x468 = 4610692091137435LL;
static int16_t x473 = INT16_MAX;
int32_t x484 = -21286;
int32_t t103 = -62489487;
static int32_t t104 = -232977437;
int64_t x494 = -522036267697617688LL;
volatile int32_t x496 = -15;
int32_t x513 = INT32_MIN;
int32_t x514 = INT32_MIN;
uint16_t x516 = 24U;
static int32_t t108 = -20;
int64_t x531 = INT64_MAX;
int64_t x540 = INT64_MIN;
int32_t t114 = -955152;
int64_t x560 = INT64_MIN;
volatile int32_t t117 = 15;
uint16_t x562 = UINT16_MAX;
uint64_t x564 = UINT64_MAX;
int16_t x587 = INT16_MIN;
int32_t t122 = 2843972;
volatile int8_t x597 = INT8_MIN;
int16_t x598 = -1;
static int16_t x602 = 1;
int8_t x603 = -1;
int32_t x611 = INT32_MAX;
volatile int64_t x613 = -1LL;
static int32_t t127 = 49566;
volatile int16_t x619 = INT16_MAX;
int8_t x623 = INT8_MAX;
int32_t t129 = -194;
int32_t x625 = INT32_MIN;
int32_t t130 = 46746157;
uint64_t x635 = 284324504985586962LLU;
volatile int64_t x640 = INT64_MAX;
uint64_t x652 = 1566135359LLU;
uint32_t x655 = UINT32_MAX;
int8_t x671 = INT8_MAX;
volatile int32_t t136 = 24794367;
volatile int32_t t138 = 7340;
int8_t x686 = -2;
uint16_t x687 = 490U;
volatile int64_t x698 = 2298LL;
volatile int32_t x706 = -1;
static uint16_t x707 = 0U;
volatile uint32_t x710 = UINT32_MAX;
uint8_t x723 = UINT8_MAX;
static volatile int8_t x728 = -1;
uint64_t x730 = 4704650125448347LLU;
int32_t t148 = -1226;
volatile uint16_t x739 = 77U;
static int16_t x742 = 357;
volatile int8_t x745 = -1;
uint64_t x746 = 6749315LLU;
int8_t x759 = INT8_MIN;
static int32_t x773 = 3503902;
volatile uint16_t x777 = 1U;
int16_t x782 = INT16_MIN;
uint32_t x783 = 228U;
volatile int8_t x785 = 0;
int8_t x790 = 5;
uint8_t x791 = 0U;
uint32_t x792 = 103U;
int32_t x800 = INT32_MIN;
static int8_t x802 = INT8_MAX;
volatile int16_t x808 = -16218;
int16_t x811 = INT16_MIN;
volatile int32_t t167 = 2280380;
int32_t t170 = 29665;
volatile int64_t x829 = INT64_MAX;
int64_t x834 = -1LL;
int8_t x835 = INT8_MIN;
static uint32_t x847 = 84789211U;
int32_t t175 = 917;
static uint32_t x853 = 34734915U;
volatile uint64_t x855 = 11LLU;
static int16_t x858 = INT16_MAX;
int8_t x859 = INT8_MIN;
int16_t x866 = 591;
volatile int32_t t179 = 16081717;
int32_t t181 = -1;
int8_t x880 = 11;
static int32_t x881 = INT32_MIN;
volatile int8_t x899 = -1;
uint16_t x909 = 15679U;
uint32_t x913 = UINT32_MAX;
volatile int32_t t190 = 797;
static int32_t t192 = -1238;
int16_t x937 = INT16_MIN;
volatile uint8_t x940 = 25U;
int8_t x943 = INT8_MAX;
int16_t x944 = INT16_MIN;
volatile int32_t t196 = 742248;
uint16_t x961 = UINT16_MAX;
int32_t x963 = INT32_MAX;


void f0(void) {
    	uint64_t x1 = UINT64_MAX;
	uint8_t x2 = 82U;
	volatile uint16_t x4 = UINT16_MAX;
	int32_t t0 = -34;

    t0 = ((x1%(x2-x3))>x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = 325U;
	static volatile int64_t x7 = -1LL;
	int64_t x8 = INT64_MAX;
	int32_t t1 = 0;

    t1 = ((x5%(x6-x7))>x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MIN;
	uint64_t x10 = 44608738291368LLU;
	int32_t x11 = INT32_MAX;
	int32_t x12 = INT32_MIN;
	int32_t t2 = 497347;

    t2 = ((x9%(x10-x11))>x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = INT16_MIN;
	volatile int64_t x14 = -8222846LL;
	int8_t x15 = INT8_MAX;
	uint8_t x16 = 45U;

    t3 = ((x13%(x14-x15))>x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x17 = 0U;
	volatile int16_t x18 = INT16_MIN;
	int16_t x19 = -1;
	static int16_t x20 = -1;
	static int32_t t4 = -7430305;

    t4 = ((x17%(x18-x19))>x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint32_t x22 = UINT32_MAX;
	int16_t x23 = INT16_MIN;

    t5 = ((x21%(x22-x23))>x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = -1;
	int64_t x26 = INT64_MAX;
	uint8_t x27 = 0U;
	int32_t t6 = 711730;

    t6 = ((x25%(x26-x27))>x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = -16;
	uint16_t x30 = 1U;
	static int32_t x31 = 0;
	int16_t x32 = INT16_MAX;
	int32_t t7 = 42;

    t7 = ((x29%(x30-x31))>x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x36 = 778886;

    t8 = ((x33%(x34-x35))>x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x41 = -1LL;
	uint16_t x43 = 5593U;
	int16_t x44 = INT16_MIN;
	int32_t t9 = 679161300;

    t9 = ((x41%(x42-x43))>x44);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x49 = 1U;
	int16_t x51 = INT16_MAX;
	int64_t x52 = -414134625951999LL;
	volatile int32_t t10 = -107555;

    t10 = ((x49%(x50-x51))>x52);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int8_t x53 = INT8_MIN;
	uint8_t x54 = UINT8_MAX;
	int8_t x55 = -1;
	uint8_t x56 = UINT8_MAX;
	int32_t t11 = -129;

    t11 = ((x53%(x54-x55))>x56);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x61 = INT8_MIN;
	int8_t x64 = INT8_MIN;
	int32_t t12 = -3;

    t12 = ((x61%(x62-x63))>x64);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x65 = INT8_MIN;
	static int64_t x66 = 1008040201846241LL;
	static uint8_t x67 = 8U;
	uint8_t x68 = 12U;
	volatile int32_t t13 = 643;

    t13 = ((x65%(x66-x67))>x68);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x69 = -803;
	volatile uint64_t x70 = 27914437002993239LLU;
	static volatile int8_t x72 = 1;
	int32_t t14 = 2;

    t14 = ((x69%(x70-x71))>x72);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint8_t x78 = UINT8_MAX;
	volatile int16_t x79 = INT16_MAX;
	static uint64_t x80 = UINT64_MAX;
	volatile int32_t t15 = 15;

    t15 = ((x77%(x78-x79))>x80);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x82 = INT16_MIN;
	volatile int16_t x83 = -1;
	static int64_t x84 = INT64_MIN;
	volatile int32_t t16 = -211;

    t16 = ((x81%(x82-x83))>x84);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x85 = INT64_MIN;
	volatile int32_t x86 = INT32_MIN;
	volatile int16_t x87 = 0;
	int8_t x88 = 0;
	volatile int32_t t17 = -4299;

    t17 = ((x85%(x86-x87))>x88);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int64_t x89 = INT64_MIN;
	int8_t x90 = INT8_MAX;
	uint32_t x92 = 117729U;
	int32_t t18 = 5681;

    t18 = ((x89%(x90-x91))>x92);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x93 = UINT16_MAX;
	int16_t x94 = INT16_MIN;
	static uint64_t x96 = 377LLU;
	int32_t t19 = 42753739;

    t19 = ((x93%(x94-x95))>x96);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint64_t x99 = 134271382876767LLU;

    t20 = ((x97%(x98-x99))>x100);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint8_t x101 = 61U;
	int16_t x102 = INT16_MIN;
	int16_t x103 = -1;
	static int16_t x104 = -1;
	static int32_t t21 = -109366;

    t21 = ((x101%(x102-x103))>x104);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x105 = 0LLU;
	volatile int64_t x106 = 7598LL;
	uint8_t x107 = UINT8_MAX;
	int16_t x108 = 1;
	volatile int32_t t22 = -8712;

    t22 = ((x105%(x106-x107))>x108);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x109 = 855822077LLU;
	int16_t x110 = -4;
	static int64_t x111 = -437124640LL;
	static volatile int8_t x112 = INT8_MAX;
	volatile int32_t t23 = -85;

    t23 = ((x109%(x110-x111))>x112);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x117 = -1;
	int64_t x118 = INT64_MIN;
	int64_t x119 = -1LL;
	int16_t x120 = INT16_MIN;
	volatile int32_t t24 = -1;

    t24 = ((x117%(x118-x119))>x120);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint8_t x125 = 42U;
	uint8_t x126 = UINT8_MAX;
	volatile uint16_t x127 = 5217U;
	static int64_t x128 = INT64_MIN;
	volatile int32_t t25 = -40;

    t25 = ((x125%(x126-x127))>x128);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x129 = UINT32_MAX;
	volatile int32_t x130 = INT32_MIN;
	uint64_t x131 = 365357632339804585LLU;
	volatile uint8_t x132 = 0U;
	int32_t t26 = 6394314;

    t26 = ((x129%(x130-x131))>x132);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x133 = -59275;
	uint16_t x134 = 12154U;
	int32_t x135 = -8437861;
	int16_t x136 = INT16_MAX;
	volatile int32_t t27 = -29791258;

    t27 = ((x133%(x134-x135))>x136);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x137 = -7061;
	int8_t x139 = -1;
	int32_t x140 = -12365678;
	volatile int32_t t28 = 3;

    t28 = ((x137%(x138-x139))>x140);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x141 = INT16_MAX;
	volatile uint64_t x142 = 7472369443113351560LLU;
	volatile uint32_t x143 = 57388201U;
	int8_t x144 = -1;
	int32_t t29 = -6;

    t29 = ((x141%(x142-x143))>x144);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x145 = INT32_MIN;
	int16_t x146 = INT16_MIN;
	volatile uint64_t x147 = UINT64_MAX;
	int8_t x148 = INT8_MAX;
	volatile int32_t t30 = -392028970;

    t30 = ((x145%(x146-x147))>x148);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x149 = INT16_MIN;
	uint16_t x150 = 15U;
	uint16_t x151 = 24U;
	int64_t x152 = INT64_MAX;
	static int32_t t31 = -1;

    t31 = ((x149%(x150-x151))>x152);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x153 = 1706;
	int8_t x154 = 18;
	int32_t x155 = -79;
	uint32_t x156 = 1988295981U;
	volatile int32_t t32 = -11334;

    t32 = ((x153%(x154-x155))>x156);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x157 = UINT8_MAX;
	uint8_t x159 = UINT8_MAX;
	uint8_t x160 = 0U;

    t33 = ((x157%(x158-x159))>x160);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int64_t x161 = INT64_MIN;
	uint32_t x162 = UINT32_MAX;
	uint8_t x164 = 2U;
	int32_t t34 = -9002834;

    t34 = ((x161%(x162-x163))>x164);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x165 = INT16_MIN;
	int64_t x168 = INT64_MAX;

    t35 = ((x165%(x166-x167))>x168);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int32_t x175 = INT32_MAX;
	volatile int32_t t36 = -528656;

    t36 = ((x173%(x174-x175))>x176);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x177 = INT64_MIN;
	int32_t x179 = INT32_MAX;
	int16_t x180 = 14;
	int32_t t37 = 170365;

    t37 = ((x177%(x178-x179))>x180);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x181 = -1704495;
	int16_t x182 = -100;
	uint16_t x183 = 229U;
	int16_t x184 = INT16_MIN;
	static int32_t t38 = 5502;

    t38 = ((x181%(x182-x183))>x184);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x189 = -1;
	int32_t x190 = INT32_MIN;
	int8_t x191 = INT8_MIN;
	static volatile uint64_t x192 = 90819LLU;
	volatile int32_t t39 = -362887;

    t39 = ((x189%(x190-x191))>x192);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x193 = UINT64_MAX;
	uint64_t x195 = 651570581LLU;
	int64_t x196 = INT64_MIN;
	volatile int32_t t40 = 2140573;

    t40 = ((x193%(x194-x195))>x196);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x197 = -56714LL;
	int8_t x198 = -1;
	int64_t x199 = INT64_MIN;
	uint16_t x200 = UINT16_MAX;
	int32_t t41 = 384047;

    t41 = ((x197%(x198-x199))>x200);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x201 = 15716;
	static int8_t x202 = -1;
	volatile int8_t x204 = -14;
	int32_t t42 = -1393951;

    t42 = ((x201%(x202-x203))>x204);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x205 = 208952562;
	volatile uint32_t x206 = UINT32_MAX;
	uint8_t x207 = 7U;
	uint8_t x208 = 1U;

    t43 = ((x205%(x206-x207))>x208);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x209 = -1LL;
	static uint16_t x210 = 0U;
	uint64_t x211 = 571069829157LLU;
	volatile int32_t t44 = 2810125;

    t44 = ((x209%(x210-x211))>x212);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x213 = INT8_MAX;
	static volatile int16_t x214 = INT16_MAX;
	int32_t t45 = -965;

    t45 = ((x213%(x214-x215))>x216);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x217 = -1979;
	int8_t x218 = INT8_MAX;
	volatile int16_t x219 = 0;
	static int64_t x220 = INT64_MIN;
	int32_t t46 = 11489;

    t46 = ((x217%(x218-x219))>x220);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x221 = INT16_MIN;
	static int8_t x222 = INT8_MIN;
	int16_t x223 = INT16_MIN;
	static int32_t x224 = INT32_MIN;
	volatile int32_t t47 = -2238;

    t47 = ((x221%(x222-x223))>x224);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x227 = -1LL;
	volatile uint32_t x228 = 15381U;
	int32_t t48 = 137108;

    t48 = ((x225%(x226-x227))>x228);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int64_t x229 = INT64_MIN;
	int16_t x232 = -1;

    t49 = ((x229%(x230-x231))>x232);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x233 = INT16_MIN;
	static volatile int8_t x234 = 23;
	uint16_t x235 = 22431U;
	volatile int32_t t50 = 2255293;

    t50 = ((x233%(x234-x235))>x236);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x241 = 4;
	int16_t x242 = INT16_MAX;
	volatile int64_t x244 = -5032808142826504LL;
	int32_t t51 = -7473;

    t51 = ((x241%(x242-x243))>x244);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x246 = INT16_MIN;
	volatile uint16_t x247 = UINT16_MAX;
	static int64_t x248 = INT64_MAX;
	int32_t t52 = 0;

    t52 = ((x245%(x246-x247))>x248);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint8_t x249 = UINT8_MAX;
	int16_t x251 = -1;
	uint8_t x252 = 0U;
	volatile int32_t t53 = 48945;

    t53 = ((x249%(x250-x251))>x252);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x253 = -1LL;
	volatile uint16_t x254 = 1977U;
	static int64_t x256 = INT64_MIN;
	volatile int32_t t54 = -63461549;

    t54 = ((x253%(x254-x255))>x256);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x261 = INT32_MIN;
	volatile uint64_t x262 = 14027721434767593LLU;
	int64_t x263 = -1LL;
	volatile uint16_t x264 = 707U;
	int32_t t55 = -814543578;

    t55 = ((x261%(x262-x263))>x264);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x265 = -1;
	volatile int32_t x267 = -604711687;
	static uint8_t x268 = UINT8_MAX;
	volatile int32_t t56 = -103;

    t56 = ((x265%(x266-x267))>x268);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x269 = -1;
	volatile uint8_t x270 = 1U;
	int32_t x271 = -1;
	static int32_t x272 = INT32_MAX;
	int32_t t57 = -25;

    t57 = ((x269%(x270-x271))>x272);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x274 = 1560174;
	uint16_t x275 = 12392U;
	volatile int8_t x276 = -1;
	int32_t t58 = 2149574;

    t58 = ((x273%(x274-x275))>x276);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x278 = -1;
	static int32_t x279 = 10;
	volatile uint8_t x280 = 41U;
	volatile int32_t t59 = 1008;

    t59 = ((x277%(x278-x279))>x280);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x281 = INT16_MAX;
	int64_t x282 = 12735291LL;
	static int16_t x283 = -1;
	int16_t x284 = INT16_MIN;
	static int32_t t60 = -3445;

    t60 = ((x281%(x282-x283))>x284);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x285 = UINT8_MAX;
	uint8_t x286 = 1U;
	int16_t x287 = INT16_MIN;
	int32_t x288 = -1;
	volatile int32_t t61 = 14;

    t61 = ((x285%(x286-x287))>x288);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint64_t x289 = 23LLU;
	int8_t x290 = 1;
	uint8_t x292 = 8U;

    t62 = ((x289%(x290-x291))>x292);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x293 = -1;
	volatile int16_t x294 = INT16_MIN;
	static int32_t x295 = -2495549;
	int8_t x296 = -1;
	static int32_t t63 = 64;

    t63 = ((x293%(x294-x295))>x296);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x305 = -45LL;
	int64_t x306 = 260447LL;
	uint64_t x307 = UINT64_MAX;
	int8_t x308 = INT8_MIN;
	int32_t t64 = 47;

    t64 = ((x305%(x306-x307))>x308);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x325 = INT32_MAX;
	int32_t x326 = 460729372;
	int64_t x327 = -209848869565LL;
	int8_t x328 = INT8_MIN;
	volatile int32_t t65 = 3295746;

    t65 = ((x325%(x326-x327))>x328);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x329 = -22;
	static uint16_t x330 = 9945U;
	int64_t x331 = -1LL;
	uint64_t x332 = 5802440491031186314LLU;
	volatile int32_t t66 = -162;

    t66 = ((x329%(x330-x331))>x332);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x333 = 12465U;
	int16_t x334 = INT16_MIN;
	int8_t x335 = INT8_MIN;
	int64_t x336 = -1LL;

    t67 = ((x333%(x334-x335))>x336);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x338 = INT16_MIN;
	int16_t x339 = 2;
	int8_t x340 = INT8_MAX;

    t68 = ((x337%(x338-x339))>x340);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x343 = UINT64_MAX;
	volatile int32_t x344 = -1;

    t69 = ((x341%(x342-x343))>x344);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x345 = UINT32_MAX;
	static uint8_t x346 = 0U;
	int8_t x347 = INT8_MIN;
	volatile int32_t t70 = -1;

    t70 = ((x345%(x346-x347))>x348);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x349 = -2958;
	int16_t x350 = INT16_MAX;
	int16_t x352 = 3339;
	int32_t t71 = -26;

    t71 = ((x349%(x350-x351))>x352);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x353 = 109853LLU;
	int8_t x354 = INT8_MIN;
	int16_t x355 = INT16_MIN;
	static uint16_t x356 = 9U;
	volatile int32_t t72 = -260390;

    t72 = ((x353%(x354-x355))>x356);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x358 = 79638631323618LLU;
	static uint8_t x359 = UINT8_MAX;
	volatile int8_t x360 = -1;
	static volatile int32_t t73 = -2128700;

    t73 = ((x357%(x358-x359))>x360);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint64_t x361 = 7075947LLU;
	int64_t x362 = INT64_MAX;
	volatile int8_t x363 = 0;
	int16_t x364 = INT16_MIN;
	static int32_t t74 = 38310998;

    t74 = ((x361%(x362-x363))>x364);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint16_t x365 = 9U;
	uint16_t x366 = 1U;
	static int16_t x367 = -1;

    t75 = ((x365%(x366-x367))>x368);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x369 = 1453407535LL;
	int32_t x371 = 45302634;
	uint64_t x372 = 144678019083960LLU;
	volatile int32_t t76 = -139889538;

    t76 = ((x369%(x370-x371))>x372);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int32_t x377 = -2414665;
	int64_t x378 = 857286800LL;
	static int16_t x379 = -1;
	uint16_t x380 = 14015U;
	int32_t t77 = -6;

    t77 = ((x377%(x378-x379))>x380);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x381 = -1;
	int64_t x383 = -1LL;
	int32_t x384 = 117;

    t78 = ((x381%(x382-x383))>x384);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t x385 = INT32_MAX;
	int16_t x386 = INT16_MIN;
	int64_t x387 = INT64_MIN;

    t79 = ((x385%(x386-x387))>x388);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x393 = UINT8_MAX;
	static int8_t x394 = -1;
	int64_t x395 = INT64_MIN;
	int32_t x396 = INT32_MIN;
	volatile int32_t t80 = 426;

    t80 = ((x393%(x394-x395))>x396);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x397 = -3693245827348518LL;
	int32_t x398 = INT32_MIN;
	volatile int32_t t81 = -2203;

    t81 = ((x397%(x398-x399))>x400);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x401 = 37688647;
	uint64_t x402 = 7502526556375406469LLU;
	int32_t x403 = 4;
	uint64_t x404 = UINT64_MAX;
	static volatile int32_t t82 = -28;

    t82 = ((x401%(x402-x403))>x404);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x405 = -5357;
	int64_t x406 = INT64_MIN;
	int16_t x407 = INT16_MIN;
	volatile int32_t x408 = -1;
	volatile int32_t t83 = -223777;

    t83 = ((x405%(x406-x407))>x408);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint8_t x409 = UINT8_MAX;
	uint16_t x410 = 4101U;
	static uint64_t x412 = UINT64_MAX;

    t84 = ((x409%(x410-x411))>x412);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x414 = -12;
	int8_t x416 = INT8_MIN;
	int32_t t85 = 328018;

    t85 = ((x413%(x414-x415))>x416);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int32_t x417 = 6;
	volatile int32_t x418 = 60;
	uint16_t x419 = 2183U;
	volatile int8_t x420 = INT8_MIN;
	volatile int32_t t86 = 373054;

    t86 = ((x417%(x418-x419))>x420);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x421 = UINT32_MAX;
	int32_t x422 = -1;
	int32_t t87 = 7545131;

    t87 = ((x421%(x422-x423))>x424);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x425 = 1;
	uint64_t x427 = 6276962656909875LLU;
	volatile int16_t x428 = INT16_MAX;
	volatile int32_t t88 = -2781684;

    t88 = ((x425%(x426-x427))>x428);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile int16_t x429 = INT16_MIN;
	uint8_t x430 = 83U;
	volatile uint32_t x431 = UINT32_MAX;
	int64_t x432 = INT64_MIN;

    t89 = ((x429%(x430-x431))>x432);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x433 = 18453U;
	int16_t x434 = 8;
	static uint16_t x435 = 0U;
	static volatile int32_t t90 = -30;

    t90 = ((x433%(x434-x435))>x436);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x437 = INT16_MAX;
	int8_t x440 = INT8_MIN;
	static int32_t t91 = 2162865;

    t91 = ((x437%(x438-x439))>x440);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x441 = -1;
	static int16_t x442 = INT16_MIN;
	static volatile int8_t x443 = -1;
	int32_t x444 = INT32_MIN;
	volatile int32_t t92 = -466163;

    t92 = ((x441%(x442-x443))>x444);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x446 = INT64_MAX;
	static int32_t t93 = -1;

    t93 = ((x445%(x446-x447))>x448);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint64_t x449 = 13059346351263103LLU;
	int32_t x450 = -127933476;
	int16_t x451 = 11;
	volatile int64_t x452 = -23371133670LL;
	static volatile int32_t t94 = -87;

    t94 = ((x449%(x450-x451))>x452);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x453 = INT64_MIN;
	int8_t x456 = -1;
	volatile int32_t t95 = 1;

    t95 = ((x453%(x454-x455))>x456);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x457 = INT16_MIN;
	int8_t x458 = INT8_MIN;
	volatile uint64_t x459 = UINT64_MAX;
	uint8_t x460 = UINT8_MAX;
	int32_t t96 = -4;

    t96 = ((x457%(x458-x459))>x460);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint8_t x462 = UINT8_MAX;
	uint64_t x463 = 866117568959LLU;
	uint8_t x464 = 2U;
	int32_t t97 = 3141865;

    t97 = ((x461%(x462-x463))>x464);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x465 = INT64_MIN;
	static volatile int32_t x466 = 179933242;
	uint32_t x467 = 166305098U;
	int32_t t98 = -13;

    t98 = ((x465%(x466-x467))>x468);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x469 = -1LL;
	uint8_t x470 = 52U;
	int16_t x471 = -1;
	volatile uint32_t x472 = 155U;
	volatile int32_t t99 = 5;

    t99 = ((x469%(x470-x471))>x472);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x474 = 1;
	int16_t x475 = INT16_MIN;
	int32_t x476 = INT32_MIN;
	volatile int32_t t100 = 0;

    t100 = ((x473%(x474-x475))>x476);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x477 = 24U;
	volatile uint64_t x478 = UINT64_MAX;
	uint16_t x479 = 1U;
	int64_t x480 = -47768LL;
	static int32_t t101 = 1;

    t101 = ((x477%(x478-x479))>x480);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x481 = -1LL;
	int8_t x482 = -9;
	volatile int8_t x483 = INT8_MAX;
	int32_t t102 = 425520;

    t102 = ((x481%(x482-x483))>x484);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x485 = -8;
	volatile uint32_t x486 = UINT32_MAX;
	int64_t x487 = 31241135LL;
	int64_t x488 = -1LL;

    t103 = ((x485%(x486-x487))>x488);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int16_t x489 = -10441;
	volatile uint64_t x490 = 753579793LLU;
	static uint16_t x491 = UINT16_MAX;
	volatile int16_t x492 = INT16_MIN;

    t104 = ((x489%(x490-x491))>x492);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x493 = INT64_MIN;
	static volatile int64_t x495 = INT64_MIN;
	int32_t t105 = 96;

    t105 = ((x493%(x494-x495))>x496);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x515 = 41510LL;
	volatile int32_t t106 = 106307137;

    t106 = ((x513%(x514-x515))>x516);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x517 = 5U;
	static int64_t x518 = INT64_MIN;
	volatile uint64_t x519 = UINT64_MAX;
	int32_t x520 = INT32_MAX;
	int32_t t107 = 191;

    t107 = ((x517%(x518-x519))>x520);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x521 = 46U;
	int8_t x522 = INT8_MIN;
	volatile uint16_t x523 = 401U;
	uint64_t x524 = 849944552LLU;

    t108 = ((x521%(x522-x523))>x524);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile int16_t x525 = INT16_MIN;
	int8_t x526 = INT8_MIN;
	int16_t x527 = INT16_MIN;
	static uint32_t x528 = 2576U;
	int32_t t109 = 33;

    t109 = ((x525%(x526-x527))>x528);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x529 = INT8_MAX;
	int64_t x530 = 195774758644326848LL;
	int32_t x532 = INT32_MAX;
	static int32_t t110 = 6220672;

    t110 = ((x529%(x530-x531))>x532);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x533 = 1304U;
	uint64_t x534 = 120LLU;
	volatile int64_t x535 = INT64_MIN;
	int16_t x536 = -110;
	static volatile int32_t t111 = 26;

    t111 = ((x533%(x534-x535))>x536);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x537 = INT32_MIN;
	static volatile uint8_t x538 = 1U;
	static uint32_t x539 = 520378392U;
	static int32_t t112 = 1938;

    t112 = ((x537%(x538-x539))>x540);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x541 = INT32_MIN;
	uint64_t x542 = UINT64_MAX;
	int32_t x543 = INT32_MIN;
	int64_t x544 = -1LL;
	volatile int32_t t113 = -12472603;

    t113 = ((x541%(x542-x543))>x544);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x545 = 108U;
	static volatile int64_t x546 = INT64_MIN;
	int8_t x547 = -5;
	int32_t x548 = INT32_MAX;

    t114 = ((x545%(x546-x547))>x548);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x549 = INT64_MIN;
	int8_t x550 = -3;
	uint64_t x551 = 305785LLU;
	volatile int64_t x552 = INT64_MIN;
	volatile int32_t t115 = -7905;

    t115 = ((x549%(x550-x551))>x552);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int16_t x553 = -1;
	int64_t x554 = 4384564424317326792LL;
	static int8_t x555 = INT8_MIN;
	int64_t x556 = -1LL;
	int32_t t116 = 2418708;

    t116 = ((x553%(x554-x555))>x556);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x557 = 3U;
	static uint8_t x558 = UINT8_MAX;
	int32_t x559 = -1;

    t117 = ((x557%(x558-x559))>x560);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x561 = 327660604136952800LLU;
	volatile uint32_t x563 = UINT32_MAX;
	int32_t t118 = -3;

    t118 = ((x561%(x562-x563))>x564);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x573 = 0;
	uint32_t x574 = 1379354922U;
	volatile uint16_t x575 = 75U;
	volatile int8_t x576 = -60;
	static int32_t t119 = 0;

    t119 = ((x573%(x574-x575))>x576);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x577 = INT32_MIN;
	int16_t x578 = 1427;
	int8_t x579 = INT8_MIN;
	uint16_t x580 = 12360U;
	volatile int32_t t120 = 4852802;

    t120 = ((x577%(x578-x579))>x580);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x585 = -1;
	uint16_t x586 = UINT16_MAX;
	int16_t x588 = -1;
	int32_t t121 = -8758050;

    t121 = ((x585%(x586-x587))>x588);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x589 = INT8_MIN;
	static int16_t x590 = 4561;
	volatile int8_t x591 = 1;
	int16_t x592 = INT16_MIN;

    t122 = ((x589%(x590-x591))>x592);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x593 = 8;
	static int64_t x594 = 128188345368014LL;
	uint16_t x595 = UINT16_MAX;
	static uint64_t x596 = UINT64_MAX;
	volatile int32_t t123 = -123;

    t123 = ((x593%(x594-x595))>x596);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x599 = 1055;
	int64_t x600 = -140674349889760998LL;
	volatile int32_t t124 = -41;

    t124 = ((x597%(x598-x599))>x600);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x601 = 3829U;
	int16_t x604 = INT16_MIN;
	static int32_t t125 = 232038014;

    t125 = ((x601%(x602-x603))>x604);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint8_t x609 = UINT8_MAX;
	static int8_t x610 = 0;
	int32_t x612 = 2441;
	int32_t t126 = -13523128;

    t126 = ((x609%(x610-x611))>x612);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int8_t x614 = 3;
	int16_t x615 = INT16_MIN;
	static int16_t x616 = INT16_MIN;

    t127 = ((x613%(x614-x615))>x616);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x617 = UINT32_MAX;
	int32_t x618 = 1589;
	int32_t x620 = INT32_MAX;
	volatile int32_t t128 = 75229;

    t128 = ((x617%(x618-x619))>x620);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x621 = 1;
	int8_t x622 = 2;
	uint8_t x624 = 1U;

    t129 = ((x621%(x622-x623))>x624);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int16_t x626 = INT16_MAX;
	int16_t x627 = 0;
	int8_t x628 = INT8_MIN;

    t130 = ((x625%(x626-x627))>x628);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x633 = INT16_MIN;
	int32_t x634 = INT32_MIN;
	int64_t x636 = INT64_MAX;
	volatile int32_t t131 = 0;

    t131 = ((x633%(x634-x635))>x636);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x637 = 23;
	static int8_t x638 = -1;
	int16_t x639 = INT16_MIN;
	int32_t t132 = 9639;

    t132 = ((x637%(x638-x639))>x640);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x645 = 2684117232763LLU;
	uint16_t x646 = 132U;
	static int32_t x647 = 18871383;
	static int16_t x648 = INT16_MAX;
	static int32_t t133 = 1774;

    t133 = ((x645%(x646-x647))>x648);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x649 = -1LL;
	int16_t x650 = INT16_MIN;
	volatile int32_t x651 = -486;
	volatile int32_t t134 = -84;

    t134 = ((x649%(x650-x651))>x652);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x653 = 106U;
	uint64_t x654 = UINT64_MAX;
	volatile int32_t x656 = INT32_MIN;
	volatile int32_t t135 = -1;

    t135 = ((x653%(x654-x655))>x656);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x669 = -1;
	volatile int16_t x670 = INT16_MIN;
	uint64_t x672 = UINT64_MAX;

    t136 = ((x669%(x670-x671))>x672);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x677 = 1577652LLU;
	volatile uint16_t x678 = UINT16_MAX;
	uint8_t x679 = 6U;
	int16_t x680 = -15;
	int32_t t137 = 1;

    t137 = ((x677%(x678-x679))>x680);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x681 = UINT16_MAX;
	uint16_t x682 = 23568U;
	int64_t x683 = 14909261LL;
	static int64_t x684 = 39946LL;

    t138 = ((x681%(x682-x683))>x684);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint64_t x685 = 1606182089155268902LLU;
	int64_t x688 = INT64_MIN;
	int32_t t139 = 646;

    t139 = ((x685%(x686-x687))>x688);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x689 = 130189U;
	static uint16_t x690 = 0U;
	volatile uint64_t x691 = 16360LLU;
	int8_t x692 = -1;
	volatile int32_t t140 = 328820;

    t140 = ((x689%(x690-x691))>x692);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x697 = 7435LL;
	static int16_t x699 = INT16_MIN;
	volatile uint64_t x700 = 843711740LLU;
	int32_t t141 = -870;

    t141 = ((x697%(x698-x699))>x700);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x701 = 830910479LLU;
	int64_t x702 = INT64_MIN;
	int32_t x703 = -1;
	uint64_t x704 = UINT64_MAX;
	static int32_t t142 = 70628;

    t142 = ((x701%(x702-x703))>x704);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int8_t x705 = INT8_MIN;
	volatile int8_t x708 = -1;
	static volatile int32_t t143 = -488770;

    t143 = ((x705%(x706-x707))>x708);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int8_t x709 = INT8_MIN;
	int8_t x711 = INT8_MIN;
	static int32_t x712 = INT32_MIN;
	int32_t t144 = 10670;

    t144 = ((x709%(x710-x711))>x712);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x721 = -24LL;
	uint16_t x722 = 20995U;
	volatile int8_t x724 = INT8_MIN;
	int32_t t145 = 11713;

    t145 = ((x721%(x722-x723))>x724);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile int32_t x725 = 5;
	uint16_t x726 = 0U;
	uint16_t x727 = 26951U;
	volatile int32_t t146 = -145166;

    t146 = ((x725%(x726-x727))>x728);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x729 = 85260U;
	uint32_t x731 = 816981304U;
	uint64_t x732 = 53326622835040591LLU;
	static int32_t t147 = -8641;

    t147 = ((x729%(x730-x731))>x732);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x733 = 6949;
	static int32_t x734 = -1065331561;
	int16_t x735 = -7;
	static int8_t x736 = -2;

    t148 = ((x733%(x734-x735))>x736);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint32_t x737 = 23059974U;
	volatile int64_t x738 = INT64_MAX;
	volatile uint64_t x740 = 55542722LLU;
	volatile int32_t t149 = 1;

    t149 = ((x737%(x738-x739))>x740);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x741 = 36;
	int32_t x743 = -48585;
	uint8_t x744 = 3U;
	volatile int32_t t150 = 4;

    t150 = ((x741%(x742-x743))>x744);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x747 = INT32_MAX;
	int32_t x748 = INT32_MIN;
	volatile int32_t t151 = 413841;

    t151 = ((x745%(x746-x747))>x748);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x749 = INT8_MIN;
	volatile int64_t x750 = INT64_MAX;
	static int64_t x751 = 27281493124541LL;
	uint8_t x752 = 5U;
	static int32_t t152 = -69;

    t152 = ((x749%(x750-x751))>x752);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile uint64_t x753 = 6867914975112462LLU;
	int16_t x754 = INT16_MIN;
	volatile uint8_t x755 = 78U;
	static uint8_t x756 = UINT8_MAX;
	volatile int32_t t153 = -2;

    t153 = ((x753%(x754-x755))>x756);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int16_t x757 = -1;
	uint8_t x758 = 9U;
	int16_t x760 = -3897;
	volatile int32_t t154 = 74;

    t154 = ((x757%(x758-x759))>x760);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x761 = INT16_MIN;
	uint64_t x762 = 14563505628LLU;
	int8_t x763 = -4;
	volatile uint64_t x764 = 29514156501033LLU;
	volatile int32_t t155 = 352529;

    t155 = ((x761%(x762-x763))>x764);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x765 = 213113711LLU;
	int8_t x766 = 12;
	int32_t x767 = INT32_MAX;
	uint8_t x768 = 1U;
	int32_t t156 = 256138;

    t156 = ((x765%(x766-x767))>x768);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static int32_t x769 = 7740238;
	int16_t x770 = 6808;
	int64_t x771 = INT64_MAX;
	int8_t x772 = 1;
	static volatile int32_t t157 = -3;

    t157 = ((x769%(x770-x771))>x772);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x774 = -1LL;
	static uint64_t x775 = 7230559802407246LLU;
	uint32_t x776 = UINT32_MAX;
	volatile int32_t t158 = -3;

    t158 = ((x773%(x774-x775))>x776);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x778 = 27U;
	volatile uint16_t x779 = 1664U;
	int32_t x780 = 1583582;
	int32_t t159 = -4802;

    t159 = ((x777%(x778-x779))>x780);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int32_t x781 = -3029;
	uint32_t x784 = UINT32_MAX;
	int32_t t160 = 7076876;

    t160 = ((x781%(x782-x783))>x784);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint32_t x786 = UINT32_MAX;
	volatile int8_t x787 = INT8_MIN;
	int16_t x788 = 3;
	volatile int32_t t161 = -115157568;

    t161 = ((x785%(x786-x787))>x788);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x789 = UINT8_MAX;
	int32_t t162 = -132;

    t162 = ((x789%(x790-x791))>x792);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x793 = INT32_MIN;
	volatile int16_t x794 = 2014;
	uint8_t x795 = UINT8_MAX;
	uint8_t x796 = UINT8_MAX;
	volatile int32_t t163 = -33;

    t163 = ((x793%(x794-x795))>x796);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x797 = 4072280554444426LLU;
	static uint16_t x798 = 789U;
	uint16_t x799 = 12267U;
	volatile int32_t t164 = -60072510;

    t164 = ((x797%(x798-x799))>x800);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x801 = INT16_MIN;
	static uint32_t x803 = 22U;
	static int16_t x804 = -1;
	volatile int32_t t165 = 0;

    t165 = ((x801%(x802-x803))>x804);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile uint8_t x805 = 2U;
	volatile int8_t x806 = -1;
	static uint32_t x807 = 480U;
	int32_t t166 = -41954643;

    t166 = ((x805%(x806-x807))>x808);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x809 = -1;
	volatile int32_t x810 = INT32_MIN;
	uint64_t x812 = 108165705010204050LLU;

    t167 = ((x809%(x810-x811))>x812);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x813 = INT32_MAX;
	int32_t x814 = INT32_MIN;
	int16_t x815 = -1;
	int32_t x816 = 8;
	volatile int32_t t168 = -1147;

    t168 = ((x813%(x814-x815))>x816);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x821 = 0;
	static volatile int8_t x822 = INT8_MIN;
	int64_t x823 = INT64_MIN;
	int64_t x824 = INT64_MAX;
	int32_t t169 = 32387112;

    t169 = ((x821%(x822-x823))>x824);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x825 = -1;
	uint64_t x826 = 162612895744215734LLU;
	static int32_t x827 = INT32_MAX;
	static int64_t x828 = -1LL;

    t170 = ((x825%(x826-x827))>x828);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint64_t x830 = UINT64_MAX;
	int8_t x831 = INT8_MIN;
	uint32_t x832 = UINT32_MAX;
	int32_t t171 = -736920970;

    t171 = ((x829%(x830-x831))>x832);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint64_t x833 = 82121921457753LLU;
	int8_t x836 = -1;
	int32_t t172 = -755851888;

    t172 = ((x833%(x834-x835))>x836);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x837 = -1LL;
	static int32_t x838 = 644;
	volatile int8_t x839 = 9;
	int8_t x840 = 6;
	int32_t t173 = 1953;

    t173 = ((x837%(x838-x839))>x840);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint16_t x845 = 27665U;
	int8_t x846 = 8;
	uint16_t x848 = UINT16_MAX;
	volatile int32_t t174 = 1;

    t174 = ((x845%(x846-x847))>x848);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x849 = 48;
	uint16_t x850 = UINT16_MAX;
	static uint64_t x851 = 38813660441622150LLU;
	int32_t x852 = 23971;

    t175 = ((x849%(x850-x851))>x852);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x854 = 99U;
	int32_t x856 = -1;
	volatile int32_t t176 = 10616682;

    t176 = ((x853%(x854-x855))>x856);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x857 = 43U;
	int32_t x860 = INT32_MIN;
	static int32_t t177 = -9;

    t177 = ((x857%(x858-x859))>x860);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x861 = INT64_MAX;
	int32_t x862 = INT32_MAX;
	volatile uint8_t x863 = 41U;
	static int64_t x864 = INT64_MAX;
	int32_t t178 = 27;

    t178 = ((x861%(x862-x863))>x864);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile int64_t x865 = -1LL;
	int8_t x867 = INT8_MIN;
	static uint32_t x868 = 554432U;

    t179 = ((x865%(x866-x867))>x868);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint16_t x869 = 30178U;
	static int32_t x870 = INT32_MIN;
	uint64_t x871 = UINT64_MAX;
	static uint32_t x872 = 89682006U;
	static volatile int32_t t180 = 188291;

    t180 = ((x869%(x870-x871))>x872);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x873 = UINT16_MAX;
	int32_t x874 = INT32_MIN;
	int64_t x875 = -1LL;
	int64_t x876 = INT64_MIN;

    t181 = ((x873%(x874-x875))>x876);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x877 = 9U;
	uint8_t x878 = UINT8_MAX;
	static int16_t x879 = -1;
	volatile int32_t t182 = -15;

    t182 = ((x877%(x878-x879))>x880);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x882 = INT8_MIN;
	volatile int16_t x883 = -1;
	static int8_t x884 = INT8_MIN;
	volatile int32_t t183 = 44965370;

    t183 = ((x881%(x882-x883))>x884);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x885 = INT32_MIN;
	int8_t x886 = -1;
	uint32_t x887 = 3U;
	int32_t x888 = -457459;
	volatile int32_t t184 = -6719;

    t184 = ((x885%(x886-x887))>x888);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x897 = 5U;
	int64_t x898 = -827220340LL;
	int16_t x900 = -3;
	int32_t t185 = -1282419;

    t185 = ((x897%(x898-x899))>x900);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x901 = -8563449961928LL;
	volatile int64_t x902 = -2543912526546LL;
	int16_t x903 = 56;
	uint64_t x904 = UINT64_MAX;
	int32_t t186 = 2345;

    t186 = ((x901%(x902-x903))>x904);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x910 = UINT8_MAX;
	static int32_t x911 = 712367;
	uint16_t x912 = UINT16_MAX;
	static volatile int32_t t187 = 49713161;

    t187 = ((x909%(x910-x911))>x912);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x914 = -1;
	int64_t x915 = 2151580LL;
	uint8_t x916 = UINT8_MAX;
	static volatile int32_t t188 = -37326;

    t188 = ((x913%(x914-x915))>x916);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x917 = INT32_MIN;
	int8_t x918 = INT8_MAX;
	volatile uint8_t x919 = 1U;
	uint8_t x920 = UINT8_MAX;
	volatile int32_t t189 = -7;

    t189 = ((x917%(x918-x919))>x920);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x921 = 114LL;
	int32_t x922 = INT32_MIN;
	int8_t x923 = INT8_MIN;
	uint8_t x924 = 7U;

    t190 = ((x921%(x922-x923))>x924);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x925 = INT16_MIN;
	int32_t x926 = -2692164;
	uint8_t x927 = UINT8_MAX;
	uint8_t x928 = UINT8_MAX;
	volatile int32_t t191 = -7212;

    t191 = ((x925%(x926-x927))>x928);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x929 = 5U;
	int8_t x930 = -1;
	volatile int32_t x931 = INT32_MIN;
	uint8_t x932 = UINT8_MAX;

    t192 = ((x929%(x930-x931))>x932);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x938 = 2007855762678664LLU;
	int32_t x939 = 44861;
	volatile int32_t t193 = -55557;

    t193 = ((x937%(x938-x939))>x940);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x941 = 18517;
	int64_t x942 = 50240549098529607LL;
	volatile int32_t t194 = -474475042;

    t194 = ((x941%(x942-x943))>x944);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x945 = -6;
	int16_t x946 = -1;
	static int32_t x947 = INT32_MAX;
	int32_t x948 = INT32_MIN;
	volatile int32_t t195 = -1;

    t195 = ((x945%(x946-x947))>x948);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint64_t x949 = 198019020612210LLU;
	volatile uint16_t x950 = 0U;
	int16_t x951 = 7;
	int16_t x952 = INT16_MIN;

    t196 = ((x949%(x950-x951))>x952);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x953 = INT64_MIN;
	int16_t x954 = INT16_MIN;
	static volatile uint32_t x955 = 1U;
	volatile uint64_t x956 = UINT64_MAX;
	int32_t t197 = -13;

    t197 = ((x953%(x954-x955))>x956);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x957 = -1;
	volatile uint32_t x958 = UINT32_MAX;
	int8_t x959 = 1;
	static int8_t x960 = -60;
	volatile int32_t t198 = 266858843;

    t198 = ((x957%(x958-x959))>x960);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x962 = INT8_MAX;
	static uint8_t x964 = 0U;
	static int32_t t199 = -2925;

    t199 = ((x961%(x962-x963))>x964);

    if (t199 != 1) { NG(); } else { ; }
	
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

